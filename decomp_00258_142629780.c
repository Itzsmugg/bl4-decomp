// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142629780 FUN_142629780 body=1 status=ok
// SIG undefined FUN_142629780(void)

void FUN_142629780(void)

{
  return;
}



// FUNCTION 142629790 FUN_142629790 body=11 status=ok
// SIG undefined FUN_142629790(void)

undefined8 * FUN_142629790(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1426297a0 FUN_1426297a0 body=15 status=ok
// SIG undefined FUN_1426297a0(void)

undefined8 *
FUN_1426297a0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  return param_1;
}



// FUNCTION 1426297b0 FUN_1426297b0 body=1 status=ok
// SIG undefined FUN_1426297b0(void)

void FUN_1426297b0(void)

{
  return;
}



// FUNCTION 1426297c0 FUN_1426297c0 body=67 status=ok
// SIG undefined FUN_1426297c0(void)

void FUN_1426297c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = icu_64::number::impl::AdoptingModifierStore::vftable;
  lVar2 = 8;
  do {
    puVar1 = *(undefined8 **)((longlong)param_1 + lVar2);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x98);
  return;
}



// FUNCTION 142629810 FUN_142629810 body=324 status=ok
// SIG undefined FUN_142629810(void)

undefined8 *
FUN_142629810(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 *param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  
  *param_1 = icu_64::number::impl::SimpleModifier::vftable;
  FUN_1424a6be0(param_1 + 1);
  *(undefined1 *)(param_1 + 9) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x49) = param_4;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  uVar2 = param_5[1];
  param_1[0xb] = *param_5;
  param_1[0xc] = uVar2;
  uVar1 = *(ushort *)(param_1 + 2);
  if ((short)uVar1 < 0) {
    uVar4 = *(uint *)((longlong)param_1 + 0x14);
  }
  else {
    uVar4 = (int)(short)uVar1 >> 5;
  }
  if ((uVar1 & 0x11) == 0) {
    if (((int)(short)uVar1 & 2U) == 0) {
      psVar7 = (short *)param_1[4];
    }
    else {
      psVar7 = (short *)((longlong)param_1 + 0x12);
    }
  }
  else {
    psVar7 = (short *)0x0;
  }
  iVar8 = 0xfeff;
  if (uVar4 != 0) {
    if (*psVar7 != 0) {
      uVar6 = 0xffff;
      if (uVar4 == 1) {
LAB_1426298d3:
        *(uint *)((longlong)param_1 + 0x4c) = uVar6 - 0x100;
        uVar6 = uVar6 - 0xfd;
        uVar5 = uVar6;
      }
      else {
        if ((uVar1 & 2) == 0) {
          lVar3 = param_1[4];
        }
        else {
          lVar3 = (longlong)param_1 + 0x12;
        }
        uVar6 = (uint)*(ushort *)(lVar3 + 2);
        if (*(ushort *)(lVar3 + 2) != 0) goto LAB_1426298d3;
        uVar5 = 2;
        uVar6 = 3;
      }
      *(uint *)(param_1 + 10) = uVar5;
      iVar8 = 0;
      if (((int)uVar6 < (int)uVar4) && (iVar8 = 0xfeff, uVar5 < uVar4)) {
        if ((uVar1 & 2) == 0) {
          lVar3 = param_1[4];
        }
        else {
          lVar3 = (longlong)param_1 + 0x12;
        }
        iVar8 = *(ushort *)(lVar3 + (longlong)(int)uVar5 * 2) - 0x100;
      }
      goto LAB_14262992e;
    }
    if (uVar4 != 1) {
      if ((uVar1 & 2) == 0) {
        lVar3 = param_1[4];
      }
      else {
        lVar3 = (longlong)param_1 + 0x12;
      }
      iVar8 = *(ushort *)(lVar3 + 2) - 0x100;
    }
  }
  *(int *)((longlong)param_1 + 0x4c) = iVar8;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  iVar8 = 0;
LAB_14262992e:
  *(int *)((longlong)param_1 + 0x54) = iVar8;
  return param_1;
}



// FUNCTION 142629960 FUN_142629960 body=66 status=ok
// SIG undefined FUN_142629960(void)

void FUN_142629960(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::SimpleModifier::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  *(undefined2 *)(param_1 + 9) = 0xd;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  return;
}



// FUNCTION 1426299b0 thunk_FUN_1426299c0 body=5 status=ok
// SIG undefined thunk_FUN_1426299c0(void)

ulonglong thunk_FUN_1426299c0(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,
                             undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  if ((*(int *)(param_1 + 0x50) == -1) &&
     (iVar1 = *(int *)(param_1 + 0x54) + iVar3,
     iVar1 != 0 && SCARRY4(*(int *)(param_1 + 0x54),iVar3) == iVar1 < 0)) {
    uVar2 = FUN_142609bc0(param_2,param_3,param_4,param_1 + 8,2,iVar3 + 2,
                          *(undefined1 *)(param_1 + 0x48),param_5);
  }
  else {
    if (0 < iVar3) {
      FUN_142609a70(param_2,param_3,param_1 + 8,2,iVar3 + 2,*(undefined1 *)(param_1 + 0x48),param_5)
      ;
      iVar3 = *(int *)(param_1 + 0x4c);
    }
    iVar1 = *(int *)(param_1 + 0x54);
    if (0 < iVar1) {
      FUN_142609a70(param_2,iVar3 + param_4,param_1 + 8,*(int *)(param_1 + 0x50) + 1,
                    iVar1 + *(int *)(param_1 + 0x50) + 1,*(undefined1 *)(param_1 + 0x48),param_5);
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar1 = *(int *)(param_1 + 0x54);
    }
    uVar2 = (ulonglong)(uint)(iVar1 + iVar3);
  }
  return uVar2;
}



// FUNCTION 1426299c0 FUN_1426299c0 body=216 status=ok
// SIG undefined FUN_1426299c0(void)

ulonglong FUN_1426299c0(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,
                       undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  if ((*(int *)(param_1 + 0x50) == -1) &&
     (iVar1 = *(int *)(param_1 + 0x54) + iVar3,
     iVar1 != 0 && SCARRY4(*(int *)(param_1 + 0x54),iVar3) == iVar1 < 0)) {
    uVar2 = FUN_142609bc0(param_2,param_3,param_4,param_1 + 8,2,iVar3 + 2,
                          *(undefined1 *)(param_1 + 0x48),param_5);
  }
  else {
    if (0 < iVar3) {
      FUN_142609a70(param_2,param_3,param_1 + 8,2,iVar3 + 2,*(undefined1 *)(param_1 + 0x48),param_5)
      ;
      iVar3 = *(int *)(param_1 + 0x4c);
    }
    iVar1 = *(int *)(param_1 + 0x54);
    if (0 < iVar1) {
      FUN_142609a70(param_2,iVar3 + param_4,param_1 + 8,*(int *)(param_1 + 0x50) + 1,
                    iVar1 + *(int *)(param_1 + 0x50) + 1,*(undefined1 *)(param_1 + 0x48),param_5);
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar1 = *(int *)(param_1 + 0x54);
    }
    uVar2 = (ulonglong)(uint)(iVar1 + iVar3);
  }
  return uVar2;
}



// FUNCTION 142629aa0 FUN_142629aa0 body=4 status=ok
// SIG undefined FUN_142629aa0(void)

undefined4 FUN_142629aa0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// FUNCTION 142629ab0 FUN_142629ab0 body=75 status=ok
// SIG undefined FUN_142629ab0(void)

int FUN_142629ab0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_1424a8140(param_1 + 8,2);
  }
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar2 = FUN_1424a8140(param_1 + 8,*(int *)(param_1 + 0x50) + 1);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}



// FUNCTION 142629b00 FUN_142629b00 body=5 status=ok
// SIG undefined FUN_142629b00(void)

undefined1 FUN_142629b00(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x49);
}



// FUNCTION 142629b10 FUN_142629b10 body=10 status=ok
// SIG undefined FUN_142629b10(void)

void FUN_142629b10(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 142629b20 FUN_142629b20 body=8 status=ok
// SIG undefined FUN_142629b20(void)

void FUN_142629b20(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *param_2 = *(undefined8 *)(param_1 + 0x58);
  param_2[1] = uVar1;
  return;
}



// FUNCTION 142629b30 FUN_142629b30 body=198 status=ok
// SIG undefined FUN_142629b30(void)

bool FUN_142629b30(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = false;
  lVar4 = __RTDynamicCast(param_2,0,&icu_64::number::impl::Modifier::RTTI_Type_Descriptor,
                          &icu_64::number::impl::SimpleModifier::RTTI_Type_Descriptor,0);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      uVar1 = *(ushort *)(param_1 + 0x10);
      if ((uVar1 & 1) == 0) {
        if ((short)uVar1 < 0) {
          iVar6 = *(int *)(param_1 + 0x14);
        }
        else {
          iVar6 = (int)(short)uVar1 >> 5;
        }
        sVar2 = *(short *)(lVar4 + 0x10);
        if (sVar2 < 0) {
          iVar5 = *(int *)(lVar4 + 0x14);
        }
        else {
          iVar5 = (int)sVar2 >> 5;
        }
        if (((int)sVar2 & 1U) != 0) {
          return false;
        }
        if (iVar6 != iVar5) {
          return false;
        }
        bVar3 = FUN_1412ae090(param_1 + 8,lVar4 + 8);
      }
      else {
        bVar3 = *(byte *)(lVar4 + 0x10) & 1;
      }
      if ((bVar3 == 0) || (*(char *)(param_1 + 0x48) != *(char *)(lVar4 + 0x48))) {
        bVar7 = false;
      }
      else {
        bVar7 = *(char *)(param_1 + 0x49) == *(char *)(lVar4 + 0x49);
      }
    }
    else {
      bVar7 = *(longlong *)(param_1 + 0x58) == *(longlong *)(lVar4 + 0x58);
    }
  }
  return bVar7;
}



// FUNCTION 142629c00 FUN_142629c00 body=209 status=ok
// SIG undefined FUN_142629c00(void)

int FUN_142629c00(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined **local_80;
  undefined2 local_78;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  iVar1 = FUN_142609db0(param_2,param_3,param_1 + 8,param_5);
  if (*(char *)(param_1 + 0x118) != '\0') {
    local_80 = &PTR_FUN_149e18960;
    local_78 = 2;
    iVar2 = FUN_142609bc0(param_2,param_3 + iVar1,iVar1 + param_4,&local_80,0,0,0xd,param_5);
    iVar1 = iVar2 + iVar1;
    FUN_140859a90(&local_80);
  }
  iVar2 = FUN_142609db0(param_2,param_4 + iVar1,param_1 + 0x90,param_5);
  return iVar2 + iVar1;
}



// FUNCTION 142629ce0 Unwind@142629ce0 body=51 status=ok
// SIG undefined Unwind@142629ce0(void)

void Unwind_142629ce0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x48);
  return;
}



// FUNCTION 142629d20 FUN_142629d20 body=9 status=ok
// SIG undefined FUN_142629d20(void)

void FUN_142629d20(longlong param_1)

{
  FUN_142609640(param_1 + 8);
  return;
}



// FUNCTION 142629d30 FUN_142629d30 body=44 status=ok
// SIG undefined FUN_142629d30(void)

int FUN_142629d30(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_142609650(param_1 + 8);
  iVar2 = FUN_142609650(param_1 + 0x90);
  return iVar2 + iVar1;
}



// FUNCTION 142629d60 FUN_142629d60 body=8 status=ok
// SIG undefined FUN_142629d60(void)

undefined1 FUN_142629d60(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x119);
}



// FUNCTION 142629d70 FUN_142629d70 body=56 status=ok
// SIG undefined FUN_142629d70(void)

undefined1 FUN_142629d70(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_14260a9d0(param_1 + 8);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_14260a9d0(param_1 + 0x90,param_2);
  return uVar2;
}



// FUNCTION 142629db0 FUN_142629db0 body=11 status=ok
// SIG undefined FUN_142629db0(void)

void FUN_142629db0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *param_2 = *(undefined8 *)(param_1 + 0x120);
  param_2[1] = uVar1;
  return;
}



// FUNCTION 142629dc0 FUN_142629dc0 body=161 status=ok
// SIG undefined FUN_142629dc0(void)

bool FUN_142629dc0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = false;
  lVar2 = __RTDynamicCast(param_2,0,&icu_64::number::impl::Modifier::RTTI_Type_Descriptor,
                          &icu_64::number::impl::ConstantMultiFieldModifier::RTTI_Type_Descriptor,0)
  ;
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x120) == 0) {
      cVar1 = FUN_14260a310(param_1 + 8,lVar2 + 8);
      if (((cVar1 == '\0') || (cVar1 = FUN_14260a310(param_1 + 0x90,lVar2 + 0x90), cVar1 == '\0'))
         || (*(char *)(param_1 + 0x118) != *(char *)(lVar2 + 0x118))) {
        bVar3 = false;
      }
      else {
        bVar3 = *(char *)(param_1 + 0x119) == *(char *)(lVar2 + 0x119);
      }
    }
    else {
      bVar3 = *(longlong *)(param_1 + 0x120) == *(longlong *)(lVar2 + 0x120);
    }
  }
  return bVar3;
}



// FUNCTION 142629e70 FUN_142629e70 body=876 status=ok
// SIG undefined FUN_142629e70(void)

undefined8 *
FUN_142629e70(undefined8 *param_1,char *param_2,char *param_3,undefined1 param_4,undefined1 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 local_1f8 [200];
  undefined1 local_130 [200];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = icu_64::number::impl::ConstantMultiFieldModifier::vftable;
  local_60 = param_1 + 1;
  FUN_142609480();
  local_68 = param_1 + 0x12;
  FUN_142609480(local_68,param_3);
  *(undefined1 *)(param_1 + 0x23) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x119) = param_5;
  param_1[0x24] = 0;
  *param_1 = icu_64::number::impl::CurrencySpacingEnabledModifier::vftable;
  local_48 = param_1 + 0x26;
  local_58 = param_1;
  FUN_142511900();
  local_40 = local_58 + 0x3f;
  local_58[0x3f] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_58 + 0x40) = 2;
  local_50 = local_58 + 0x47;
  FUN_142511900();
  local_38 = local_58 + 0x60;
  local_58[0x60] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_58 + 0x61) = 2;
  iVar3 = FUN_142609640(param_2);
  if (0 < iVar3) {
    iVar3 = FUN_142609640(param_2);
    if (*param_2 == '\0') {
      cVar2 = param_2[(longlong)*(int *)(param_2 + 0x80) + (longlong)iVar3 + 0x57];
    }
    else {
      cVar2 = *(char *)(*(longlong *)(param_2 + 0x58) + -1 +
                       (longlong)*(int *)(param_2 + 0x80) + (longlong)iVar3);
    }
    if (cVar2 == '\a') {
      uVar4 = FUN_142609680(param_2);
      FUN_14262a3a0(local_1f8,param_6,0,0,param_7);
      cVar2 = FUN_142512880(local_1f8,uVar4);
      if (cVar2 == '\0') {
        FUN_142512100(local_48);
        FUN_1424a7130(local_40);
      }
      else {
        FUN_14262a3a0(local_130,param_6,1,0,param_7);
        puVar1 = local_48;
        FUN_142511c30(local_48,local_130);
        FUN_1425121d0(local_130);
        FUN_1425151b0(puVar1);
        uVar6 = FUN_142543f40(param_6,2,0,param_7);
        FUN_1424a6be0(local_130,uVar6);
        FUN_1424a7ca0(local_40,local_130);
        FUN_140859a90(local_130);
      }
      FUN_1425121d0(local_1f8);
      goto LAB_14262a0a8;
    }
  }
  FUN_142512100(local_48);
  FUN_1424a7130(local_40);
LAB_14262a0a8:
  iVar3 = FUN_142609640(param_3);
  if (0 < iVar3) {
    if (*param_3 == '\0') {
      pcVar5 = param_3 + 0x58;
    }
    else {
      pcVar5 = *(char **)(param_3 + 0x58);
    }
    if (pcVar5[*(int *)(param_3 + 0x80)] == '\a') {
      uVar4 = FUN_142609680(param_3);
      FUN_14262a3a0(local_1f8,param_6,0,1,param_7);
      cVar2 = FUN_142512880(local_1f8,uVar4);
      if (cVar2 == '\0') {
        FUN_142512100(local_50);
        FUN_1424a7130(local_38);
      }
      else {
        FUN_14262a3a0(local_130,param_6,1,1,param_7);
        puVar1 = local_50;
        FUN_142511c30(local_50,local_130);
        FUN_1425121d0(local_130);
        FUN_1425151b0(puVar1);
        uVar6 = FUN_142543f40(param_6,2,1,param_7);
        FUN_1424a6be0(local_130,uVar6);
        FUN_1424a7ca0(local_38,local_130);
        FUN_140859a90(local_130);
      }
      FUN_1425121d0(local_1f8);
      return local_58;
    }
  }
  FUN_142512100(local_50);
  FUN_1424a7130(local_38);
  return local_58;
}



// FUNCTION 14262a1e0 Unwind@14262a1e0 body=43 status=ok
// SIG undefined Unwind@14262a1e0(void)

void Unwind_14262a1e0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0xf8);
  return;
}



// FUNCTION 14262a210 Unwind@14262a210 body=43 status=ok
// SIG undefined Unwind@14262a210(void)

void Unwind_14262a210(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x30);
  return;
}



// FUNCTION 14262a240 Unwind@14262a240 body=43 status=ok
// SIG undefined Unwind@14262a240(void)

void Unwind_14262a240(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0xf8);
  return;
}



// FUNCTION 14262a270 Unwind@14262a270 body=43 status=ok
// SIG undefined Unwind@14262a270(void)

void Unwind_14262a270(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x30);
  return;
}



// FUNCTION 14262a2a0 Unwind@14262a2a0 body=58 status=ok
// SIG undefined Unwind@14262a2a0(void)

void Unwind_14262a2a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x1f0));
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x1d8));
  return;
}



// FUNCTION 14262a2e0 Unwind@14262a2e0 body=58 status=ok
// SIG undefined Unwind@14262a2e0(void)

void Unwind_14262a2e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x1e8));
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x1e0));
  return;
}



// FUNCTION 14262a320 Unwind@14262a320 body=75 status=ok
// SIG undefined Unwind@14262a320(void)

void Unwind_14262a320(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x1d0) = icu_64::number::impl::ConstantMultiFieldModifier::vftable;
  FUN_142609450(*(undefined8 *)(param_2 + 0x1c0));
  FUN_142609450(*(undefined8 *)(param_2 + 0x1c8));
  return;
}



// FUNCTION 14262a370 Unwind@14262a370 body=46 status=ok
// SIG undefined Unwind@14262a370(void)

void Unwind_14262a370(undefined8 param_1,longlong param_2)

{
  FUN_142609450(*(undefined8 *)(param_2 + 0x1c8));
  return;
}



// FUNCTION 14262a3a0 FUN_14262a3a0 body=612 status=ok
// SIG undefined FUN_14262a3a0(void)

undefined8 FUN_14262a3a0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int *param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_a8 [72];
  wchar_t *local_60;
  wchar_t *local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (0 < *param_5) goto LAB_14262a50f;
  if ((DAT_14c7fc400 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fc400), cVar1 == '\0')) {
    if (0 < DAT_14c7fc404) {
      *param_5 = DAT_14c7fc404;
      goto LAB_14262a50f;
    }
  }
  else {
    FUN_14251f960(1,FUN_14262ac40);
    lVar2 = thunk_FUN_1424da030(200);
    if (lVar2 == 0) {
      DAT_14c7fc3f0 = 0;
    }
    else {
      local_48 = lVar2;
      FUN_1424a6c90(local_a8,L"[:digit:]");
      lVar2 = local_48;
      FUN_1425c5b90(local_48,local_a8,param_5);
      DAT_14c7fc3f0 = lVar2;
      FUN_140859a90(local_a8);
    }
    lVar2 = thunk_FUN_1424da030(200);
    if (lVar2 == 0) {
      DAT_14c7fc3f8 = 0;
LAB_14262a4ed:
      *param_5 = 7;
      DAT_14c7fc404 = 7;
    }
    else {
      local_48 = lVar2;
      FUN_1424a6c90(local_a8,L"[:^S:]");
      lVar2 = local_48;
      FUN_1425c5b90(local_48,local_a8,param_5);
      DAT_14c7fc3f8 = lVar2;
      FUN_140859a90(local_a8);
      if ((DAT_14c7fc3f0 == 0) || (DAT_14c7fc3f8 == 0)) goto LAB_14262a4ed;
      FUN_1425151b0();
      FUN_1425151b0(DAT_14c7fc3f8);
      DAT_14c7fc404 = *param_5;
    }
    FUN_1425019c0(&DAT_14c7fc400);
  }
  if (*param_5 < 1) {
    lVar2 = FUN_142543f40(param_2,param_3 != 0,param_4 == 1,param_5);
    if (*(short *)(lVar2 + 8) < 0) {
      iVar4 = *(int *)(lVar2 + 0xc);
    }
    else {
      iVar4 = (int)*(short *)(lVar2 + 8) >> 5;
    }
    cVar1 = FUN_1424a7e30(lVar2,0,iVar4,L"[:digit:]",0,0xffffffff);
    local_60 = L"[:digit:]";
    lVar3 = DAT_14c7fc3f0;
    if (cVar1 != '\0') {
      if (*(short *)(lVar2 + 8) < 0) {
        iVar4 = *(int *)(lVar2 + 0xc);
      }
      else {
        iVar4 = (int)*(short *)(lVar2 + 8) >> 5;
      }
      cVar1 = FUN_1424a7e30(lVar2,0,iVar4,L"[:^S:]",0,0xffffffff);
      local_50 = L"[:^S:]";
      lVar3 = DAT_14c7fc3f8;
      if (cVar1 != '\0') {
        FUN_1425c5b90(param_1,lVar2,param_5);
        return param_1;
      }
    }
    FUN_142511b90(param_1,lVar3);
    return param_1;
  }
LAB_14262a50f:
  FUN_142511900(param_1);
  return param_1;
}



// FUNCTION 14262a610 Unwind@14262a610 body=51 status=ok
// SIG undefined Unwind@14262a610(void)

void Unwind_14262a610(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 14262a650 Unwind@14262a650 body=51 status=ok
// SIG undefined Unwind@14262a650(void)

void Unwind_14262a650(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 14262a690 Unwind@14262a690 body=51 status=ok
// SIG undefined Unwind@14262a690(void)

void Unwind_14262a690(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 14262a6d0 Unwind@14262a6d0 body=51 status=ok
// SIG undefined Unwind@14262a6d0(void)

void Unwind_14262a6d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 14262a710 Unwind@14262a710 body=52 status=ok
// SIG undefined Unwind@14262a710(void)

void Unwind_14262a710(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x70) = L"[:digit:]";
  return;
}



// FUNCTION 14262a750 Unwind@14262a750 body=52 status=ok
// SIG undefined Unwind@14262a750(void)

void Unwind_14262a750(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x80) = L"[:^S:]";
  return;
}



// FUNCTION 14262a790 FUN_14262a790 body=237 status=ok
// SIG undefined FUN_14262a790(void)

int FUN_14262a790(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (param_3 < param_4) {
    iVar3 = 0;
    if ((*(byte *)(param_1 + 0x150) & 1) == 0) {
      uVar2 = FUN_142609760(param_2,param_3);
      cVar1 = FUN_142512880(param_1 + 0x130,uVar2);
      if (cVar1 != '\0') {
        iVar3 = FUN_142609a00(param_2,param_3,param_1 + 0x1f8,0xd,param_5);
      }
    }
    if ((*(byte *)(param_1 + 600) & 1) == 0) {
      uVar2 = FUN_1426097f0(param_2,param_4);
      cVar1 = FUN_142512880(param_1 + 0x238,uVar2);
      if (cVar1 != '\0') {
        iVar4 = FUN_142609a00(param_2,iVar3 + param_4,param_1 + 0x300,0xd,param_5);
        iVar3 = iVar4 + iVar3;
      }
    }
  }
  iVar4 = FUN_142629c00(param_1,param_2,param_3,param_4 + iVar3,param_5);
  return iVar4 + iVar3;
}



// FUNCTION 14262a880 FUN_14262a880 body=141 status=ok
// SIG undefined FUN_14262a880(void)

int FUN_14262a880(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4 - (param_2 + param_3);
  iVar1 = 0;
  if ((0 < param_3) && (0 < iVar2)) {
    iVar1 = FUN_14262a910(param_1,param_2 + param_3,0,param_6,param_7);
  }
  if ((0 < param_5) && (0 < iVar2)) {
    iVar2 = FUN_14262a910(param_1,param_4 + iVar1,1,param_6,param_7);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}



// FUNCTION 14262a910 FUN_14262a910 body=430 status=ok
// SIG undefined FUN_14262a910(void)

undefined4
FUN_14262a910(char *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 local_220 [200];
  undefined1 local_158 [200];
  undefined1 local_90 [64];
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_4;
  if (param_3 == 0) {
    if (*param_1 == '\0') {
      pcVar4 = param_1 + 0x58;
    }
    else {
      pcVar4 = *(char **)(param_1 + 0x58);
    }
    if (pcVar4[(longlong)*(int *)(param_1 + 0x80) + (longlong)param_2 + -1] != '\a') {
      return 0;
    }
    uVar2 = FUN_1426097f0(param_1,param_2);
  }
  else {
    if (*param_1 == '\0') {
      pcVar4 = param_1 + 0x58;
    }
    else {
      pcVar4 = *(char **)(param_1 + 0x58);
    }
    if (pcVar4[(longlong)param_2 + (longlong)*(int *)(param_1 + 0x80)] != '\a') {
      return 0;
    }
    uVar2 = FUN_142609760(param_1,param_2);
  }
  uVar3 = 0;
  FUN_14262a3a0(local_220,local_50,0,param_3,param_5);
  cVar1 = FUN_142512880(local_220,uVar2);
  if (cVar1 != '\0') {
    if (param_3 == 0) {
      uVar2 = FUN_142609760(param_1,param_2);
    }
    else {
      uVar2 = FUN_1426097f0(param_1,param_2);
    }
    FUN_14262a3a0(local_158,local_50,1,param_3,param_5);
    cVar1 = FUN_142512880(local_158,uVar2);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar5 = FUN_142543f40(local_50,2,param_3 == 1,param_5);
      FUN_1424a6be0(local_90,uVar5);
      uVar3 = FUN_142609a00(param_1,param_2,local_90,0xd,param_5);
      FUN_140859a90(local_90);
    }
    FUN_1425121d0(local_158);
  }
  FUN_1425121d0(local_220);
  return uVar3;
}



// FUNCTION 14262aac0 Unwind@14262aac0 body=58 status=ok
// SIG undefined Unwind@14262aac0(void)

void Unwind_14262aac0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1b8);
  return;
}



// FUNCTION 14262ab00 Unwind@14262ab00 body=55 status=ok
// SIG undefined Unwind@14262ab00(void)

void Unwind_14262ab00(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0xf0);
  return;
}



// FUNCTION 14262ab40 Unwind@14262ab40 body=55 status=ok
// SIG undefined Unwind@14262ab40(void)

void Unwind_14262ab40(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x28);
  return;
}



// FUNCTION 14262ab80 FUN_14262ab80 body=52 status=ok
// SIG undefined FUN_14262ab80(void)

undefined8 * FUN_14262ab80(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::number::impl::SimpleModifier::vftable;
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14262abc0 FUN_14262abc0 body=122 status=ok
// SIG undefined FUN_14262abc0(void)

undefined8 * FUN_14262abc0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::number::impl::CurrencySpacingEnabledModifier::vftable;
  FUN_140859a90(param_1 + 0x60);
  FUN_1425121d0(param_1 + 0x47);
  FUN_140859a90(param_1 + 0x3f);
  FUN_1425121d0(param_1 + 0x26);
  *param_1 = icu_64::number::impl::ConstantMultiFieldModifier::vftable;
  FUN_142609450(param_1 + 0x12);
  FUN_142609450(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14262ac40 FUN_14262ac40 body=99 status=ok
// SIG undefined FUN_14262ac40(void)

undefined8 FUN_14262ac40(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_14c7fc3f0;
  if (DAT_14c7fc3f0 != 0) {
    FUN_1425121d0(DAT_14c7fc3f0);
    FUN_1401773f0(lVar1);
  }
  lVar1 = DAT_14c7fc3f8;
  DAT_14c7fc3f0 = 0;
  if (DAT_14c7fc3f8 != 0) {
    FUN_1425121d0(DAT_14c7fc3f8);
    FUN_1401773f0(lVar1);
  }
  uVar2 = DAT_14c7fc400;
  DAT_14c7fc3f8 = 0;
  LOCK();
  DAT_14c7fc400 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 14262acb0 FUN_14262acb0 body=8 status=ok
// SIG undefined FUN_14262acb0(void)

undefined * FUN_14262acb0(void)

{
  return &DAT_14c7fc408;
}



// FUNCTION 14262acc0 FUN_14262acc0 body=120 status=ok
// SIG undefined FUN_14262acc0(void)

undefined8 * FUN_14262acc0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  FUN_142537a10();
  *param_1 = icu_64::number::impl::LocalizedNumberFormatterAsFormat::vftable;
  FUN_142569110(param_1 + 0x29,param_2);
  FUN_1424a3ce0(param_1 + 100,param_3);
  FUN_142537c10(param_1,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x28));
  return param_1;
}



// FUNCTION 14262ad40 Unwind@14262ad40 body=36 status=ok
// SIG undefined Unwind@14262ad40(void)

void Unwind_14262ad40(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14262ad70 Unwind@14262ad70 body=36 status=ok
// SIG undefined Unwind@14262ad70(void)

void Unwind_14262ad70(undefined8 param_1,longlong param_2)

{
  FUN_142569480(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14262ada0 Unwind@14262ada0 body=36 status=ok
// SIG undefined Unwind@14262ada0(void)

void Unwind_14262ada0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 14262add0 FUN_14262add0 body=249 status=ok
// SIG undefined FUN_14262add0(void)

bool FUN_14262add0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 local_b0 [8];
  ushort local_a8;
  int local_a4;
  undefined1 local_70 [8];
  short local_68;
  int local_64;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar3 = false;
  lVar2 = __RTDynamicCast(param_2,0,&icu_64::Format::RTTI_Type_Descriptor,
                          &icu_64::number::impl::LocalizedNumberFormatterAsFormat::
                           RTTI_Type_Descriptor,0);
  if (lVar2 != 0) {
    local_2c = 0;
    FUN_14256a670(param_1 + 0x148,local_b0,&local_2c);
    FUN_14256a670(lVar2 + 0x148,local_70,&local_2c);
    if ((local_a8 & 1) == 0) {
      if (-1 < (short)local_a8) {
        local_a4 = (int)(short)local_a8 >> 5;
      }
      if (-1 < local_68) {
        local_64 = (int)local_68 >> 5;
      }
      bVar3 = false;
      if ((((int)local_68 & 1U) == 0) && (local_a4 == local_64)) {
        cVar1 = FUN_1412ae090(local_b0,local_70);
        bVar3 = cVar1 != '\0';
      }
    }
    else {
      bVar3 = (bool)((byte)local_68 & 1);
    }
    FUN_140859a90(local_70);
    FUN_140859a90(local_b0);
  }
  return bVar3;
}



// FUNCTION 14262aed0 Unwind@14262aed0 body=39 status=ok
// SIG undefined Unwind@14262aed0(void)

void Unwind_14262aed0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14262af00 Unwind@14262af00 body=39 status=ok
// SIG undefined Unwind@14262af00(void)

void Unwind_14262af00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14262af30 FUN_14262af30 body=127 status=ok
// SIG undefined FUN_14262af30(void)

undefined8 *
FUN_14262af30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x400);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142537a40(puVar1,param_1);
    *puVar1 = icu_64::number::impl::LocalizedNumberFormatterAsFormat::vftable;
    FUN_142569110(puVar1 + 0x29,param_1 + 0x148,param_3,param_4,puVar1 + 0x29,puVar1,uVar2);
    FUN_1424a3ce0(puVar1 + 100,param_1 + 800);
  }
  return puVar1;
}



// FUNCTION 14262afb0 Unwind@14262afb0 body=32 status=ok
// SIG undefined Unwind@14262afb0(void)

void Unwind_14262afb0(undefined8 param_1,longlong param_2)

{
  FUN_142569480(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14262afd0 Unwind@14262afd0 body=32 status=ok
// SIG undefined Unwind@14262afd0(void)

void Unwind_14262afd0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14262aff0 Unwind@14262aff0 body=32 status=ok
// SIG undefined Unwind@14262aff0(void)

void Unwind_14262aff0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14262b010 FUN_14262b010 body=328 status=ok
// SIG undefined FUN_14262b010(void)

longlong FUN_14262b010(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      int *param_5)

{
  char cVar1;
  int iVar2;
  undefined **local_160;
  undefined1 local_158 [144];
  undefined1 local_c8 [72];
  undefined1 local_80 [8];
  short local_78;
  int local_74;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    FUN_142573c40(&local_160,0);
    local_160 = icu_64::number::impl::UFormattedNumberData::vftable;
    FUN_142537d10(local_c8);
    FUN_14252d4f0(param_2,local_c8,param_5);
    if ((*param_5 < 1) && (FUN_142569a70(param_1 + 0x148,&local_160,param_5), *param_5 < 1)) {
      *(undefined8 *)(param_4 + 0xc) = 0;
      cVar1 = FUN_14260a3d0(local_158,param_4,param_5);
      if (cVar1 != '\0') {
        if (*(short *)(param_3 + 8) < 0) {
          iVar2 = *(int *)(param_3 + 0xc);
        }
        else {
          iVar2 = (int)*(short *)(param_3 + 8) >> 5;
        }
        if (iVar2 != 0) {
          *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + iVar2;
          if (*(short *)(param_3 + 8) < 0) {
            iVar2 = *(int *)(param_3 + 0xc);
          }
          else {
            iVar2 = (int)*(short *)(param_3 + 8) >> 5;
          }
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + iVar2;
        }
      }
      FUN_14260a2b0(local_158,local_80);
      if (-1 < local_78) {
        local_74 = (int)local_78 >> 5;
      }
      FUN_1424a9690(param_3,local_80,0,local_74);
      FUN_140859a90(local_80);
    }
    FUN_142564760(&local_160);
  }
  return param_3;
}



// FUNCTION 14262b160 Unwind@14262b160 body=51 status=ok
// SIG undefined Unwind@14262b160(void)

void Unwind_14262b160(undefined8 param_1,longlong param_2)

{
  FUN_142573ca0(param_2 + 0x28);
  return;
}



// FUNCTION 14262b1a0 Unwind@14262b1a0 body=54 status=ok
// SIG undefined Unwind@14262b1a0(void)

void Unwind_14262b1a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x108);
  return;
}



// FUNCTION 14262b1e0 Unwind@14262b1e0 body=51 status=ok
// SIG undefined Unwind@14262b1e0(void)

void Unwind_14262b1e0(undefined8 param_1,longlong param_2)

{
  FUN_142564760(param_2 + 0x28);
  return;
}



// FUNCTION 14262b220 FUN_14262b220 body=311 status=ok
// SIG undefined FUN_14262b220(void)

undefined8
FUN_14262b220(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int *param_5)

{
  undefined **local_160;
  undefined1 local_158 [144];
  undefined1 local_c8 [72];
  undefined1 local_80 [8];
  short local_78;
  int local_74;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    FUN_142573c40(&local_160,0);
    local_160 = icu_64::number::impl::UFormattedNumberData::vftable;
    FUN_142537d10(local_c8);
    FUN_14252d4f0(param_2,local_c8,param_5);
    if ((*param_5 < 1) && (FUN_142569a70(param_1 + 0x148,&local_160,param_5), *param_5 < 1)) {
      FUN_14260a2b0(local_158,local_80);
      if (-1 < local_78) {
        local_74 = (int)local_78 >> 5;
      }
      FUN_1424a9690(param_3,local_80,0,local_74);
      FUN_140859a90(local_80);
      if (param_4 != 0) {
        FUN_14256f430(local_80,param_4,param_5);
        FUN_14260a930(local_158,local_80,param_5);
        FUN_14256f4d0(local_80);
      }
    }
    FUN_142564760(&local_160);
  }
  return param_3;
}



// FUNCTION 14262b360 Unwind@14262b360 body=54 status=ok
// SIG undefined Unwind@14262b360(void)

void Unwind_14262b360(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x108);
  return;
}



// FUNCTION 14262b3a0 Unwind@14262b3a0 body=54 status=ok
// SIG undefined Unwind@14262b3a0(void)

void Unwind_14262b3a0(undefined8 param_1,longlong param_2)

{
  FUN_14256f4d0(param_2 + 0x108);
  return;
}



// FUNCTION 14262b3e0 Unwind@14262b3e0 body=51 status=ok
// SIG undefined Unwind@14262b3e0(void)

void Unwind_14262b3e0(undefined8 param_1,longlong param_2)

{
  FUN_142564760(param_2 + 0x28);
  return;
}



// FUNCTION 14262b420 Unwind@14262b420 body=51 status=ok
// SIG undefined Unwind@14262b420(void)

void Unwind_14262b420(undefined8 param_1,longlong param_2)

{
  FUN_142573ca0(param_2 + 0x28);
  return;
}



// FUNCTION 14262b460 FUN_14262b460 body=9 status=ok
// SIG undefined FUN_14262b460(void)

void FUN_14262b460(void)

{
  longlong in_R9;
  
  *(undefined4 *)(in_R9 + 0xc) = 0;
  return;
}



// FUNCTION 14262b470 FUN_14262b470 body=75 status=ok
// SIG undefined FUN_14262b470(void)

undefined8 * FUN_14262b470(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::number::impl::LocalizedNumberFormatterAsFormat::vftable;
  FUN_1414b3f60(param_1 + 100);
  FUN_142569480(param_1 + 0x29);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14262b4c0 FUN_14262b4c0 body=66 status=ok
// SIG undefined FUN_14262b4c0(void)

undefined2 * FUN_14262b4c0(undefined2 *param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (param_2 < 5) {
    uVar1 = *(undefined2 *)(&DAT_149c4fdac + (longlong)(int)param_2 * 2);
    uVar2 = *(undefined2 *)(&DAT_149c4fdb6 + (longlong)(int)param_2 * 2);
    *param_1 = uVar1;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    *(uint *)(param_1 + 4) = param_2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 14262b510 FUN_14262b510 body=83 status=ok
// SIG undefined FUN_14262b510(void)

void FUN_14262b510(short *param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  
  if (*(char *)(param_2 + 0x4c) == '\0') {
    uVar3 = 0;
    sVar2 = -2;
    sVar5 = -1;
    sVar4 = -1;
  }
  else {
    sVar1 = (short)*(undefined4 *)(param_2 + 0x48);
    sVar2 = *(short *)(param_2 + 0x68);
    sVar4 = (short)*(undefined4 *)(param_2 + 0x2f0);
    if (sVar4 < 1) {
      sVar4 = sVar1;
    }
    sVar5 = sVar4;
    if (0 < sVar1) {
      sVar5 = sVar1;
    }
    uVar3 = 5;
  }
  *param_1 = sVar5;
  param_1[1] = sVar4;
  param_1[2] = sVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  return;
}



// FUNCTION 14262b570 FUN_14262b570 body=348 status=ok
// SIG undefined FUN_14262b570(void)

void FUN_14262b570(short *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int local_30;
  int local_2c;
  
  if ((*param_1 != -2) && (param_1[1] != -4)) {
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  sVar6 = (ushort)(*param_1 == -4) * 4 + -1;
  if (((uint)((ulonglong)uVar1 >> 0x10) & 0xffff) != 0xffff) {
    sVar6 = (short)uVar1;
  }
  sVar7 = sVar6;
  if ((short)((ulonglong)uVar1 >> 0x20) != -1) {
    sVar7 = (short)((ulonglong)uVar1 >> 0x10);
  }
  if (param_1[2] == -3) {
    local_2c = 0;
    lVar3 = FUN_1424ebfe0(0,*(undefined8 *)(param_3 + 0x28),&local_2c);
    local_30 = 0;
    psVar4 = (short *)FUN_1424ec010(lVar3,"NumberElements/minimumGroupingDigits",&local_30,&local_2c
                                   );
    iVar5 = 1;
    if ((local_2c < 1) && (local_30 == 1)) {
      iVar5 = (int)(short)(*psVar4 + -0x30);
    }
    if (lVar3 != 0) {
      FUN_1424ea9f0(lVar3);
    }
    sVar2 = FUN_142501300(2,iVar5);
  }
  else {
    if (param_1[2] != -2) goto LAB_14262b6b9;
    local_2c = 0;
    lVar3 = FUN_1424ebfe0(0,*(undefined8 *)(param_3 + 0x28),&local_2c);
    local_30 = 0;
    psVar4 = (short *)FUN_1424ec010(lVar3,"NumberElements/minimumGroupingDigits",&local_30,&local_2c
                                   );
    sVar2 = 1;
    if ((local_2c < 1) && (local_30 == 1)) {
      sVar2 = *psVar4 + -0x30;
    }
    if (lVar3 != 0) {
      FUN_1424ea9f0(lVar3);
    }
  }
  param_1[2] = sVar2;
LAB_14262b6b9:
  *param_1 = sVar6;
  param_1[1] = sVar7;
  return;
}



// FUNCTION 14262b6d0 FUN_14262b6d0 body=81 status=ok
// SIG undefined FUN_14262b6d0(void)

undefined4 FUN_14262b6d0(short *param_1,int param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  sVar1 = *param_1;
  uVar3 = 0;
  if ((sVar1 != 0) && (sVar1 != -1)) {
    if ((param_2 - sVar1 < 0) || ((param_2 - sVar1) % (int)param_1[1] != 0)) {
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_142538eb0(param_3);
      iVar2 = (iVar2 - *param_1) + 1;
      uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),param_1[2] <= iVar2);
    }
  }
  return uVar3;
}



// FUNCTION 14262b730 FUN_14262b730 body=4 status=ok
// SIG undefined FUN_14262b730(void)

undefined2 FUN_14262b730(undefined2 *param_1)

{
  return *param_1;
}



// FUNCTION 14262b740 FUN_14262b740 body=5 status=ok
// SIG undefined FUN_14262b740(void)

undefined2 FUN_14262b740(longlong param_1)

{
  return *(undefined2 *)(param_1 + 2);
}



// FUNCTION 14262b750 FUN_14262b750 body=199 status=ok
// SIG undefined FUN_14262b750(void)

longlong FUN_14262b750(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = param_2;
  local_28 = param_1;
  FUN_14256dd50();
  FUN_1425038b0(&local_58,*(undefined8 *)(param_3 + 0x28));
  local_30 = local_28 + 0x20;
  *(longlong *)(local_28 + 0x20) = local_28 + 0x2d;
  *(undefined4 *)(local_28 + 0x28) = 0x28;
  *(undefined2 *)(local_28 + 0x2c) = 0;
  *(undefined4 *)(local_28 + 0x58) = 0;
  FUN_142503520(local_30,local_58,local_50,param_4);
  local_48 = local_28 + 0x60;
  *(undefined ***)(local_28 + 0x60) = &PTR_FUN_149e18960;
  *(undefined2 *)(local_28 + 0x68) = 2;
  local_38 = local_28 + 0xa0;
  *(undefined ***)(local_28 + 0xa0) = &PTR_FUN_149e18960;
  *(undefined2 *)(local_28 + 0xa8) = 2;
  FUN_1424a7130();
  FUN_1424a7130(local_38);
  thunk_FUN_1424b70d0(local_40);
  return local_28;
}



// FUNCTION 14262b820 Unwind@14262b820 body=47 status=ok
// SIG undefined Unwind@14262b820(void)

void Unwind_14262b820(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x50) + 0x2c) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x48));
  }
  return;
}



// FUNCTION 14262b850 Unwind@14262b850 body=65 status=ok
// SIG undefined Unwind@14262b850(void)

void Unwind_14262b850(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x40));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  if (*(char *)(*(longlong *)(param_2 + 0x50) + 0x2c) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x48));
  }
  return;
}



// FUNCTION 14262b8a0 Unwind@14262b8a0 body=34 status=ok
// SIG undefined Unwind@14262b8a0(void)

void Unwind_14262b8a0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 14262b8d0 Unwind@14262b8d0 body=34 status=ok
// SIG undefined Unwind@14262b8d0(void)

void Unwind_14262b8d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 14262b900 FUN_14262b900 body=152 status=ok
// SIG undefined FUN_14262b900(void)

longlong FUN_14262b900(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  undefined1 local_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = param_2;
  FUN_14256dd50(local_58);
  FUN_14262b750(param_1,local_58,param_3,param_5);
  local_30 = param_1;
  if (*(char *)(param_4 + 0xaf8) != '\0') {
    FUN_1424a7c80(param_1 + 0x60,param_4 + 0x208);
  }
  if (*(char *)(param_4 + 0xaf9) != '\0') {
    FUN_1424a7c80(local_30 + 0xa0,param_4 + 0x248);
  }
  thunk_FUN_1424b70d0(local_38);
  return local_30;
}



// FUNCTION 14262b9a0 Unwind@14262b9a0 body=36 status=ok
// SIG undefined Unwind@14262b9a0(void)

void Unwind_14262b9a0(undefined8 param_1,longlong param_2)

{
  FUN_14256c8f0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14262b9d0 Unwind@14262b9d0 body=36 status=ok
// SIG undefined Unwind@14262b9d0(void)

void Unwind_14262b9d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14262ba00 FUN_14262ba00 body=5 status=ok
// SIG undefined FUN_14262ba00(void)

longlong FUN_14262ba00(longlong param_1)

{
  return param_1 + 0x18;
}



// FUNCTION 14262ba10 FUN_14262ba10 body=137 status=ok
// SIG undefined FUN_14262ba10(void)

void FUN_14262ba10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_19 = 0;
  local_20 = 0;
  lVar2 = param_1 + 0x18;
  local_38 = &local_20;
  local_30 = param_3;
  lVar1 = FUN_14253b990(lVar2,*(undefined8 *)(param_1 + 0x20),2,&local_19);
  if (lVar1 == lVar2) {
    FUN_1424a7000(param_2,lVar2,3);
  }
  else {
    FUN_1424a7060(param_2,1,lVar1,local_20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14262bab0 FUN_14262bab0 body=157 status=ok
// SIG undefined FUN_14262bab0(void)

void FUN_14262bab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    FUN_1424a6be0(param_2,param_1 + 0x60);
  }
  else {
    local_19 = 0;
    local_20 = 0;
    lVar2 = param_1 + 0x18;
    local_38 = &local_20;
    local_30 = param_3;
    lVar1 = FUN_14253b990(lVar2,*(undefined8 *)(param_1 + 0x20),0,&local_19);
    if (lVar1 == lVar2) {
      FUN_1424a7000(param_2,lVar2,3);
    }
    else {
      FUN_1424a7060(param_2,1,lVar1,local_20);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14262bb60 FUN_14262bb60 body=64 status=ok
// SIG undefined FUN_14262bb60(void)

undefined8 FUN_14262bb60(longlong param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    FUN_1424a6be0(param_2,param_1 + 0xa0);
  }
  else {
    FUN_1424a7000(param_2,param_1 + 0x18,3);
  }
  return param_2;
}



// FUNCTION 14262bba0 FUN_14262bba0 body=148 status=ok
// SIG undefined FUN_14262bba0(void)

void FUN_14262bba0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x18;
  local_29 = 0;
  local_30 = 0;
  uVar2 = FUN_14262c0d0(param_3);
  local_48 = &local_30;
  local_40 = param_4;
  lVar3 = FUN_14253bc90(lVar1,*(undefined8 *)(param_1 + 0x20),&local_29,uVar2);
  if (lVar3 == lVar1) {
    FUN_1424a7000(param_2,lVar1,3);
  }
  else {
    FUN_1424a7060(param_2,1,lVar3,local_30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 14262bc50 FUN_14262bc50 body=135 status=ok
// SIG undefined FUN_14262bc50(void)

void FUN_14262bc50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_14256dd50(param_1,param_2 + 0x10);
  }
  else {
    local_24 = 0;
    local_20 = 0;
    FUN_14253b540(*(undefined8 *)(param_3 + 0x28),&local_20,4,&local_24);
    if (local_24 < 1) {
      FUN_14256dc20(param_1,&local_20,param_4);
    }
    else {
      FUN_14256de50(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 14262bcf0 FUN_14262bcf0 body=10 status=ok
// SIG undefined FUN_14262bcf0(void)

undefined4 * FUN_14262bcf0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return param_1;
}



// FUNCTION 14262bd00 FUN_14262bd00 body=100 status=ok
// SIG undefined FUN_14262bd00(void)

undefined4 * FUN_14262bd00(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_2 + 400) < 0) {
    if (0 < *(int *)(param_2 + 0x194)) {
LAB_14262bd30:
      uVar1 = FUN_1424a8030(param_2 + 0x188);
      goto LAB_14262bd3e;
    }
  }
  else if (0 < *(short *)(param_2 + 400) >> 5) goto LAB_14262bd30;
  uVar1 = 0x20;
LAB_14262bd3e:
  uVar2 = 0;
  if (*(char *)(param_2 + 0x180) == '\0') {
    uVar2 = *(undefined4 *)(param_2 + 0x184);
  }
  *param_1 = *(undefined4 *)(param_2 + 0x44);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



// FUNCTION 14262bd70 FUN_14262bd70 body=544 status=ok
// SIG undefined FUN_14262bd70(void)

int FUN_14262bd70(int *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                 undefined4 param_5,int param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  iVar3 = (**(code **)(*param_3 + 0x18))(param_3);
  iVar8 = *param_1;
  iVar4 = FUN_142609650(param_4);
  iVar4 = iVar3 + iVar2 + iVar4;
  iVar2 = iVar8 - iVar4;
  if (iVar2 < 1) {
    iVar8 = (**(code **)(*param_2 + 8))(param_2,param_4,param_5,param_6,param_7);
    iVar2 = (**(code **)(*param_3 + 8))(param_3,param_4,param_5,param_6 + iVar8,param_7);
    return iVar2 + iVar8;
  }
  uVar1 = param_1[1];
  iVar3 = param_1[2];
  iVar6 = iVar2;
  if (iVar3 == 1) {
    do {
      FUN_1426098c0(param_4,param_5,uVar1,0xd,param_7);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  else {
    iVar7 = 0;
    if (iVar3 != 2) goto LAB_14262bebe;
    do {
      FUN_1426098c0(param_4,param_6,uVar1,0xd,param_7);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar7 = iVar2 << (0xffff < uVar1);
LAB_14262bebe:
  iVar6 = (**(code **)(*param_2 + 8))(param_2,param_4,param_5,param_6 + iVar7,param_7);
  iVar5 = (**(code **)(*param_3 + 8))(param_3,param_4,param_5,iVar6 + iVar7 + param_6,param_7);
  iVar5 = iVar5 + iVar6 + iVar7;
  if (iVar3 == 3) {
    iVar8 = iVar2;
    do {
      FUN_1426098c0(param_4,param_6 + iVar5,uVar1,0xd,param_7);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  else {
    if (iVar3 != 0) {
      return iVar5;
    }
    iVar8 = iVar8 - iVar4;
    do {
      FUN_1426098c0(param_4,param_5,uVar1,0xd,param_7);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return iVar5 + (iVar2 << (0xffff < uVar1));
}



// FUNCTION 14262bf90 FUN_14262bf90 body=18 status=ok
// SIG undefined FUN_14262bf90(void)

undefined4 * FUN_14262bf90(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0x10001;
  return param_1;
}



// FUNCTION 14262bfb0 FUN_14262bfb0 body=18 status=ok
// SIG undefined FUN_14262bfb0(void)

undefined4 * FUN_14262bfb0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0x10003;
  return param_1;
}



// FUNCTION 14262bfd0 FUN_14262bfd0 body=50 status=ok
// SIG undefined FUN_14262bfd0(void)

void FUN_14262bfd0(undefined4 *param_1,byte param_2,byte param_3,ushort param_4,uint param_5)

{
  *param_1 = 0;
  *(ulonglong *)(param_1 + 1) =
       (ulonglong)param_2 |
       (ulonglong)param_3 << 8 | (ulonglong)param_4 << 0x10 | (ulonglong)param_5 << 0x20;
  return;
}



// FUNCTION 14262c010 FUN_14262c010 body=18 status=ok
// SIG undefined FUN_14262c010(void)

undefined4 * FUN_14262c010(undefined4 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 14262c030 FUN_14262c030 body=18 status=ok
// SIG undefined FUN_14262c030(void)

undefined4 * FUN_14262c030(undefined4 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 1) = 1;
  return param_1;
}



// FUNCTION 14262c050 FUN_14262c050 body=18 status=ok
// SIG undefined FUN_14262c050(void)

undefined4 * FUN_14262c050(undefined4 *param_1)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 14262c070 FUN_14262c070 body=60 status=ok
// SIG undefined FUN_14262c070(void)

void FUN_14262c070(longlong param_1,undefined4 *param_2,int param_3)

{
  if (param_3 - 1U < 999) {
    *(ulonglong *)(param_2 + 1) =
         CONCAT44(*(undefined4 *)(param_1 + 8),param_3 << 0x10) |
         (ulonglong)*(ushort *)(param_1 + 4);
    *param_2 = 0;
    return;
  }
  param_2[1] = 0x10112;
  *param_2 = 3;
  return;
}



// FUNCTION 14262c0b0 FUN_14262c0b0 body=24 status=ok
// SIG undefined FUN_14262c0b0(void)

undefined4 * FUN_14262c0b0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  *param_2 = 0;
  *(ulonglong *)(param_2 + 1) = param_3 << 0x20 | (ulonglong)uVar1;
  return param_2;
}



// FUNCTION 14262c0d0 FUN_14262c0d0 body=15 status=ok
// SIG undefined FUN_14262c0d0(void)

undefined * FUN_14262c0d0(int param_1)

{
  return (&PTR_DAT_149c4fdf0)[param_1];
}



// FUNCTION 14262c0e0 FUN_14262c0e0 body=206 status=ok
// SIG undefined FUN_14262c0e0(void)

undefined8 FUN_14262c0e0(char *param_1)

{
  int iVar1;
  char *_Str1;
  
  if ((int)*param_1 - 0x66U < 0x15) {
    _Str1 = param_1 + 1;
    switch((int)*param_1) {
    case 0x66:
      iVar1 = strcmp(_Str1,"ew");
      if (iVar1 == 0) {
        return 3;
      }
      break;
    case 0x6d:
      iVar1 = strcmp(_Str1,"any");
      if (iVar1 == 0) {
        return 4;
      }
      break;
    case 0x6f:
      iVar1 = strcmp(_Str1,"ther");
      if (iVar1 == 0) {
        return 5;
      }
      iVar1 = strcmp(_Str1,"ne");
      if (iVar1 == 0) {
        return 1;
      }
      break;
    case 0x74:
      iVar1 = strcmp(_Str1,"wo");
      if (iVar1 == 0) {
        return 2;
      }
      break;
    case 0x7a:
      iVar1 = strcmp(_Str1,"ero");
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 14262c1b0 FUN_14262c1b0 body=521 status=ok
// SIG undefined FUN_14262c1b0(void)

undefined8 FUN_14262c1b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 8) < 0) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_1 + 8) >> 5;
  }
  if (iVar3 == 5) {
    uVar2 = 5;
    cVar1 = FUN_1424a7e30(param_1,0,5,&DAT_149c4fe42,0,5);
  }
  else {
    if (iVar3 != 4) {
      if (iVar3 != 3) {
        return 0xffffffff;
      }
      cVar1 = FUN_1424a7e30(param_1,0,3,&DAT_149c4fe20,0,3);
      if (cVar1 == '\0') {
        return 1;
      }
      if (*(short *)(param_1 + 8) < 0) {
        iVar3 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar3 = (int)*(short *)(param_1 + 8) >> 5;
      }
      cVar1 = FUN_1424a7e30(param_1,0,iVar3,&DAT_149c4fe26,0,3);
      if (cVar1 == '\0') {
        return 2;
      }
      if (*(short *)(param_1 + 8) < 0) {
        iVar3 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar3 = (int)*(short *)(param_1 + 8) >> 5;
      }
      cVar1 = FUN_1424a7e30(param_1,0,iVar3,&DAT_149c4fe2c,0,3);
      if (cVar1 == '\0') {
        return 3;
      }
      return 0xffffffff;
    }
    cVar1 = FUN_1424a7e30(param_1,0,4,&DAT_149c4fe32,0,4);
    if (cVar1 == '\0') {
      return 4;
    }
    if (*(short *)(param_1 + 8) < 0) {
      iVar3 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar3 = (int)*(short *)(param_1 + 8) >> 5;
    }
    uVar2 = 0;
    cVar1 = FUN_1424a7e30(param_1,0,iVar3,&DAT_149c4fe3a,0,4);
  }
  if (cVar1 == '\0') {
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 14262c3c0 Unwind@14262c3c0 body=38 status=ok
// SIG undefined Unwind@14262c3c0(void)

void Unwind_14262c3c0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x48) = &DAT_149c4fe32;
  return;
}



// FUNCTION 14262c3f0 Unwind@14262c3f0 body=38 status=ok
// SIG undefined Unwind@14262c3f0(void)

void Unwind_14262c3f0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x38) = &DAT_149c4fe42;
  return;
}



// FUNCTION 14262c420 Unwind@14262c420 body=38 status=ok
// SIG undefined Unwind@14262c420(void)

void Unwind_14262c420(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x68) = &DAT_149c4fe20;
  return;
}



// FUNCTION 14262c450 Unwind@14262c450 body=38 status=ok
// SIG undefined Unwind@14262c450(void)

void Unwind_14262c450(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x78) = &DAT_149c4fe26;
  return;
}



// FUNCTION 14262c480 Unwind@14262c480 body=38 status=ok
// SIG undefined Unwind@14262c480(void)

void Unwind_14262c480(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x88) = &DAT_149c4fe2c;
  return;
}



// FUNCTION 14262c4b0 Unwind@14262c4b0 body=38 status=ok
// SIG undefined Unwind@14262c4b0(void)

void Unwind_14262c4b0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x58) = &DAT_149c4fe3a;
  return;
}



// FUNCTION 14262c4e0 FUN_14262c4e0 body=44 status=ok
// SIG undefined FUN_14262c4e0(void)

undefined8 FUN_14262c4e0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  if (*param_2 < 1) {
    uVar1 = FUN_14262c0e0();
    if ((int)uVar1 < 0) {
      *param_2 = 1;
      uVar1 = 5;
    }
  }
  return uVar1;
}



// FUNCTION 14262c510 FUN_14262c510 body=207 status=ok
// SIG undefined FUN_14262c510(void)

void FUN_14262c510(longlong param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  if ((param_2 != (undefined8 *)0x0) && (*param_3 < 1)) {
    uVar1 = *(uint *)(param_2 + 1);
    if ((ulonglong)uVar1 == 0) {
      (**(code **)*param_2)(param_2,1);
      if (0 < *param_3) {
        return;
      }
      param_2 = (undefined8 *)0x0;
      goto LAB_14262c5b5;
    }
    if ((uVar1 & 3) != 0) {
LAB_14262c539:
      *param_3 = 1;
      goto LAB_14262c59d;
    }
    if ((int)uVar1 < 3) goto LAB_14262c5b5;
    lVar3 = 3;
    do {
      iVar4 = 0;
      if (lVar3 < (longlong)(ulonglong)uVar1) {
        iVar4 = *(int *)(param_2[3] + lVar3 * 4);
      }
      if (iVar4 <= *(int *)(param_2[3] + -4 + lVar3 * 4)) goto LAB_14262c539;
      iVar4 = (int)lVar3;
      lVar3 = lVar3 + 4;
    } while (iVar4 + 3 < (int)uVar1);
  }
  if (0 < *param_3) {
    if (param_2 == (undefined8 *)0x0) {
      return;
    }
LAB_14262c59d:
                    /* WARNING: Could not recover jumptable at 0x00014262c5b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,1);
    return;
  }
LAB_14262c5b5:
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x10) = -(uint)(param_2 == (undefined8 *)0x0);
  return;
}



// FUNCTION 14262c5e0 FUN_14262c5e0 body=38 status=ok
// SIG undefined FUN_14262c5e0(void)

void FUN_14262c5e0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(short *)(param_2 + 8) < 0) {
    iVar1 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_2 + 8) >> 5;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  *(undefined1 *)(param_1 + 2) = param_3;
  return;
}



// FUNCTION 14262c610 FUN_14262c610 body=4 status=ok
// SIG undefined FUN_14262c610(void)

undefined4 FUN_14262c610(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 14262c620 FUN_14262c620 body=4 status=ok
// SIG undefined FUN_14262c620(void)

void FUN_14262c620(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 14262c630 FUN_14262c630 body=4 status=ok
// SIG undefined FUN_14262c630(void)

void FUN_14262c630(longlong param_1,int param_2)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return;
}



// FUNCTION 14262c640 FUN_14262c640 body=144 status=ok
// SIG undefined FUN_14262c640(void)

void FUN_14262c640(longlong *param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar4 = *param_1;
  uVar5 = *(uint *)(param_1 + 1);
  sVar1 = *(short *)(lVar4 + 8);
  if (sVar1 < 0) {
    uVar3 = *(uint *)(lVar4 + 0xc);
  }
  else {
    uVar3 = (int)sVar1 >> 5;
  }
  uVar6 = 0xffff;
  if (uVar5 < uVar3) {
    if (((int)sVar1 & 2U) == 0) {
      lVar4 = *(longlong *)(lVar4 + 0x18);
    }
    else {
      lVar4 = lVar4 + 10;
    }
    uVar2 = *(ushort *)(lVar4 + (longlong)(int)uVar5 * 2);
    uVar6 = (uint)uVar2;
    if (((uVar2 & 0xfc00) == 0xd800) && ((int)(uVar5 + 1) < *(int *)((longlong)param_1 + 0xc))) {
      uVar3 = FUN_1424a8030();
      uVar5 = *(uint *)(param_1 + 1);
      goto LAB_14262c6bc;
    }
  }
  uVar3 = 0xffffffff;
  if ((uVar6 & 0xf800) != 0xd800) {
    uVar3 = uVar6;
  }
LAB_14262c6bc:
  *(uint *)(param_1 + 1) = (uVar5 - (uVar3 < 0x10000)) + 2;
  return;
}



// FUNCTION 14262c6d0 FUN_14262c6d0 body=123 status=ok
// SIG undefined FUN_14262c6d0(void)

ulonglong FUN_14262c6d0(longlong *param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = *param_1;
  uVar3 = *(uint *)(param_1 + 1);
  sVar1 = *(short *)(lVar6 + 8);
  if (sVar1 < 0) {
    uVar7 = *(uint *)(lVar6 + 0xc);
  }
  else {
    uVar7 = (int)sVar1 >> 5;
  }
  uVar5 = 0xffff;
  if (uVar3 < uVar7) {
    if (((int)sVar1 & 2U) == 0) {
      lVar6 = *(longlong *)(lVar6 + 0x18);
    }
    else {
      lVar6 = lVar6 + 10;
    }
    uVar2 = *(ushort *)(lVar6 + (longlong)(int)uVar3 * 2);
    uVar5 = (ulonglong)uVar2;
    if (((uVar2 & 0xfc00) == 0xd800) && ((int)(uVar3 + 1) < *(int *)((longlong)param_1 + 0xc))) {
      uVar5 = FUN_1424a8030();
      return uVar5;
    }
  }
  uVar4 = 0xffffffff;
  if (((uint)uVar5 & 0xf800) != 0xd800) {
    uVar4 = uVar5;
  }
  return uVar4;
}



// FUNCTION 14262c750 FUN_14262c750 body=7 status=ok
// SIG undefined FUN_14262c750(void)

void FUN_14262c750(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = param_2 + *(int *)(param_1 + 8);
  return;
}



// FUNCTION 14262c760 FUN_14262c760 body=26 status=ok
// SIG undefined FUN_14262c760(void)

void FUN_14262c760(longlong *param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*param_1 + 8);
  if (sVar1 < 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(*param_1 + 0xc);
    return;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)sVar1 >> 5;
  return;
}



// FUNCTION 14262c780 FUN_14262c780 body=7 status=ok
// SIG undefined FUN_14262c780(void)

int FUN_14262c780(longlong param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
}



// FUNCTION 14262c790 FUN_14262c790 body=66 status=ok
// SIG undefined FUN_14262c790(void)

ulonglong FUN_14262c790(longlong *param_1,int param_2)

{
  short sVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = *param_1;
  lVar3 = (longlong)param_2 + (longlong)(int)param_1[1];
  sVar1 = *(short *)(lVar4 + 8);
  if (sVar1 < 0) {
    uVar5 = *(uint *)(lVar4 + 0xc);
  }
  else {
    uVar5 = (int)sVar1 >> 5;
  }
  uVar2 = CONCAT62((int6)(short)((uint)(int)param_1[1] >> 0x10),0xffff);
  if ((uint)lVar3 < uVar5) {
    if (((int)sVar1 & 2U) == 0) {
      lVar4 = *(longlong *)(lVar4 + 0x18);
    }
    else {
      lVar4 = lVar4 + 10;
    }
    uVar2 = (ulonglong)*(ushort *)(lVar4 + lVar3 * 2);
  }
  return uVar2;
}



// FUNCTION 14262c7e0 FUN_14262c7e0 body=14 status=ok
// SIG undefined FUN_14262c7e0(void)

void FUN_14262c7e0(undefined8 *param_1,int param_2)

{
  FUN_1424a8030(*param_1,param_2 + *(int *)(param_1 + 1));
  return;
}



// FUNCTION 14262c7f0 FUN_14262c7f0 body=73 status=ok
// SIG undefined FUN_14262c7f0(void)

undefined8 FUN_14262c7f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((*(ushort *)(lVar1 + 8) & 0x11) == 0) {
    if ((*(ushort *)(lVar1 + 8) & 2) == 0) {
      lVar1 = *(longlong *)(lVar1 + 0x18);
    }
    else {
      lVar1 = lVar1 + 10;
    }
  }
  else {
    lVar1 = 0;
  }
  FUN_1424a7060(param_2,0,lVar1 + (longlong)(int)param_1[1] * 2,
                *(int *)((longlong)param_1 + 0xc) - (int)param_1[1]);
  return param_2;
}



// FUNCTION 14262c840 FUN_14262c840 body=189 status=ok
// SIG undefined FUN_14262c840(void)

bool FUN_14262c840(longlong *param_1,uint param_2)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar9;
  bool bVar10;
  longlong lVar8;
  
  lVar8 = *param_1;
  uVar4 = *(uint *)(param_1 + 1);
  sVar1 = *(short *)(lVar8 + 8);
  if (sVar1 < 0) {
    uVar9 = *(uint *)(lVar8 + 0xc);
  }
  else {
    uVar9 = (int)sVar1 >> 5;
  }
  lVar3 = param_1[2];
  uVar7 = 0xffff;
  if (uVar4 < uVar9) {
    if (((int)sVar1 & 2U) == 0) {
      lVar8 = *(longlong *)(lVar8 + 0x18);
    }
    else {
      lVar8 = lVar8 + 10;
    }
    uVar2 = *(ushort *)(lVar8 + (longlong)(int)uVar4 * 2);
    uVar7 = (uint)uVar2;
    if (((uVar2 & 0xfc00) == 0xd800) && ((int)(uVar4 + 1) < *(int *)((longlong)param_1 + 0xc))) {
      uVar4 = FUN_1424a8030();
      goto LAB_14262c8cb;
    }
  }
  uVar4 = 0xffffffff;
  if ((uVar7 & 0xf800) != 0xd800) {
    uVar4 = uVar7;
  }
LAB_14262c8cb:
  bVar10 = uVar4 == param_2;
  if (((char)lVar3 != '\0') && (uVar4 != param_2)) {
    iVar5 = thunk_FUN_1424d7d20(uVar4,1);
    iVar6 = thunk_FUN_1424d7d20(param_2,1);
    bVar10 = iVar5 == iVar6;
  }
  return bVar10;
}



// FUNCTION 14262c900 FUN_14262c900 body=157 status=ok
// SIG undefined FUN_14262c900(void)

bool FUN_14262c900(longlong *param_1,undefined8 param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = *param_1;
  uVar3 = *(uint *)(param_1 + 1);
  sVar1 = *(short *)(lVar6 + 8);
  if (sVar1 < 0) {
    uVar7 = *(uint *)(lVar6 + 0xc);
  }
  else {
    uVar7 = (int)sVar1 >> 5;
  }
  uVar5 = 0xffff;
  if (uVar3 < uVar7) {
    if (((int)sVar1 & 2U) == 0) {
      lVar6 = *(longlong *)(lVar6 + 0x18);
    }
    else {
      lVar6 = lVar6 + 10;
    }
    uVar2 = *(ushort *)(lVar6 + (longlong)(int)uVar3 * 2);
    uVar5 = (uint)uVar2;
    if (((uVar2 & 0xfc00) == 0xd800) && ((int)(uVar3 + 1) < *(int *)((longlong)param_1 + 0xc))) {
      uVar5 = FUN_1424a8030();
      if (uVar5 == 0xffffffff) {
        return false;
      }
    }
    else if ((uVar2 & 0xf800) == 0xd800) {
      return false;
    }
  }
  cVar4 = FUN_142512880(param_2,uVar5);
  return cVar4 != '\0';
}



// FUNCTION 14262c9a0 FUN_14262c9a0 body=251 status=ok
// SIG undefined FUN_14262c9a0(void)

bool FUN_14262c9a0(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) != 0) {
    return false;
  }
  if ((short)uVar1 < 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      return false;
    }
  }
  else if ((short)uVar1 >> 5 == 0) {
    return false;
  }
  uVar3 = *(uint *)(param_1 + 1);
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    return false;
  }
  lVar8 = *param_1;
  sVar2 = *(short *)(lVar8 + 8);
  if (sVar2 < 0) {
    uVar4 = *(uint *)(lVar8 + 0xc);
  }
  else {
    uVar4 = (int)sVar2 >> 5;
  }
  uVar7 = 0xffff;
  if (uVar3 < uVar4) {
    if (((int)sVar2 & 2U) == 0) {
      lVar8 = *(longlong *)(lVar8 + 0x18);
    }
    else {
      lVar8 = lVar8 + 10;
    }
    uVar1 = *(ushort *)(lVar8 + (longlong)(int)uVar3 * 2);
    uVar7 = (uint)uVar1;
    if (((uVar1 & 0xfc00) == 0xd800) && ((int)(uVar3 + 1) < (int)*(uint *)((longlong)param_1 + 0xc))
       ) {
      uVar3 = FUN_1424a8030();
      goto LAB_14262ca56;
    }
  }
  uVar3 = 0xffffffff;
  if ((uVar7 & 0xf800) != 0xd800) {
    uVar3 = uVar7;
  }
LAB_14262ca56:
  uVar4 = FUN_1424a8030(param_2,0);
  if (uVar3 == uVar4) {
    return true;
  }
  if ((char)param_1[2] != '\0') {
    iVar5 = thunk_FUN_1424d7d20(uVar3,1);
    iVar6 = thunk_FUN_1424d7d20(uVar4,1);
    return iVar5 == iVar6;
  }
  return false;
}



// FUNCTION 14262caa0 FUN_14262caa0 body=10 status=ok
// SIG undefined FUN_14262caa0(void)

void FUN_14262caa0(longlong param_1,undefined8 param_2)

{
  FUN_14262cab0(param_1,param_2,*(undefined1 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14262cab0 FUN_14262cab0 body=325 status=ok
// SIG undefined FUN_14262cab0(void)

ulonglong FUN_14262cab0(longlong *param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  short sVar9;
  ulonglong uVar10;
  
  if (*(short *)(param_2 + 8) < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_2 + 8) >> 5;
  }
  iVar2 = FUN_142501310(*(int *)((longlong)param_1 + 0xc) - (int)param_1[1],iVar2);
  if (iVar2 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      lVar5 = *param_1;
      sVar4 = *(short *)(lVar5 + 8);
      if (sVar4 < 0) {
        uVar7 = *(uint *)(lVar5 + 0xc);
      }
      else {
        uVar7 = (int)sVar4 >> 5;
      }
      iVar2 = (int)param_1[1];
      sVar8 = -1;
      sVar9 = -1;
      if ((uint)((int)uVar10 + iVar2) < uVar7) {
        if (((int)sVar4 & 2U) == 0) {
          lVar5 = *(longlong *)(lVar5 + 0x18);
        }
        else {
          lVar5 = lVar5 + 10;
        }
        sVar9 = *(short *)(lVar5 + ((longlong)iVar2 + uVar10) * 2);
      }
      sVar4 = *(short *)(param_2 + 8);
      uVar6 = (int)sVar4 >> 5;
      uVar7 = *(uint *)(param_2 + 0xc);
      uVar1 = uVar6;
      if (sVar4 < 0) {
        uVar1 = uVar7;
      }
      if (uVar10 < uVar1) {
        lVar5 = param_2 + 10;
        if (((int)sVar4 & 2U) == 0) {
          lVar5 = *(longlong *)(param_2 + 0x18);
        }
        sVar8 = *(short *)(lVar5 + uVar10 * 2);
      }
      if ((sVar9 == sVar8) || (param_3 == '\0')) {
        if (sVar9 != sVar8) break;
      }
      else {
        iVar2 = thunk_FUN_1424d7d20(sVar9,1);
        iVar3 = thunk_FUN_1424d7d20(sVar8,1);
        if (iVar2 != iVar3) break;
        sVar4 = *(short *)(param_2 + 8);
        uVar7 = *(uint *)(param_2 + 0xc);
        iVar2 = (int)param_1[1];
        uVar6 = (int)sVar4 >> 5;
      }
      uVar10 = uVar10 + 1;
      if (sVar4 < 0) {
        uVar6 = uVar7;
      }
      iVar2 = FUN_142501310(*(int *)((longlong)param_1 + 0xc) - iVar2,uVar6);
    } while ((longlong)uVar10 < (longlong)iVar2);
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14262cc10 FUN_14262cc10 body=8 status=ok
// SIG undefined FUN_14262cc10(void)

void FUN_14262cc10(undefined8 param_1,undefined8 param_2)

{
  FUN_14262cab0(param_1,param_2,0);
  return;
}



// FUNCTION 14262cc20 FUN_14262cc20 body=5 status=ok
// SIG undefined FUN_14262cc20(void)

undefined8 FUN_14262cc20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 14262cc30 FUN_14262cc30 body=189 status=ok
// SIG undefined FUN_14262cc30(void)

undefined8 FUN_14262cc30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_3);
  uVar5 = 0;
  if (cVar1 != '\0') {
    return 0;
  }
  if (0x1f < *(ushort *)(param_1 + 2)) {
    uVar2 = FUN_14262caa0(param_2,param_1 + 1);
    uVar5 = (ulonglong)uVar2;
    if ((short)param_1[2] < 0) {
      uVar4 = *(uint *)((longlong)param_1 + 0x14);
    }
    else {
      uVar4 = (int)(short)param_1[2] >> 5;
    }
    if (uVar2 == uVar4) goto LAB_14262ccca;
  }
  uVar2 = FUN_14262c6d0(param_2);
  if ((uVar2 == 0xffffffff) || (cVar1 = FUN_142512880(param_1[9],uVar2), cVar1 == '\0')) {
    iVar3 = FUN_14262c780(param_2);
    return CONCAT71((int7)(uVar5 >> 8),(int)uVar5 == iVar3);
  }
  uVar5 = (ulonglong)(2 - (uVar2 < 0x10000));
LAB_14262ccca:
  FUN_14262c630(param_2,uVar5);
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
  return 0;
}



// FUNCTION 14262ccf0 FUN_14262ccf0 body=58 status=ok
// SIG undefined FUN_14262ccf0(void)

undefined1 FUN_14262ccf0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_14262c900(param_2,*(undefined8 *)(param_1 + 0x48));
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_14262c9a0(param_2,param_1 + 8);
  return uVar2;
}



// FUNCTION 14262cd30 FUN_14262cd30 body=32 status=ok
// SIG undefined FUN_14262cd30(void)

undefined8 FUN_14262cd30(undefined8 param_1,undefined8 param_2)

{
  FUN_1424a6c90(param_2,L"<Symbol>");
  return param_2;
}



// FUNCTION 14262cd50 FUN_14262cd50 body=160 status=ok
// SIG undefined FUN_14262cd50(void)

void FUN_14262cd50(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined **local_60;
  undefined2 local_58;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_60 = &PTR_FUN_149e18960;
  local_58 = 2;
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  local_18 = param_1 + 1;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  local_20 = param_1;
  uVar2 = FUN_1425eaea0(param_2);
  local_20[9] = uVar2;
  cVar1 = FUN_142512960(uVar2,&local_60);
  if (cVar1 == '\0') {
    FUN_1424a7c80(local_18,&local_60);
  }
  else {
    FUN_1424a7130(local_18);
  }
  FUN_140859a90(&local_60);
  *local_20 = icu_64::numparse::impl::IgnorablesMatcher::vftable;
  return;
}



// FUNCTION 14262cdf0 Unwind@14262cdf0 body=51 status=ok
// SIG undefined Unwind@14262cdf0(void)

void Unwind_14262cdf0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x70));
  FUN_1425716f0(*(undefined8 *)(param_2 + 0x68));
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14262ce30 FUN_14262ce30 body=3 status=ok
// SIG undefined FUN_14262ce30(void)

undefined1 FUN_14262ce30(void)

{
  return 1;
}



// FUNCTION 14262ce40 FUN_14262ce40 body=32 status=ok
// SIG undefined FUN_14262ce40(void)

undefined8 FUN_14262ce40(undefined8 param_1,undefined8 param_2)

{
  FUN_1424a6c90(param_2,L"<Ignorables>");
  return param_2;
}



// FUNCTION 14262ce60 FUN_14262ce60 body=3 status=ok
// SIG undefined FUN_14262ce60(void)

undefined8 FUN_14262ce60(void)

{
  return 0;
}



// FUNCTION 14262ce70 FUN_14262ce70 body=1 status=ok
// SIG undefined FUN_14262ce70(void)

void FUN_14262ce70(void)

{
  return;
}



// FUNCTION 14262ce80 FUN_14262ce80 body=145 status=ok
// SIG undefined FUN_14262ce80(void)

void FUN_14262ce80(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  uVar2 = FUN_1425eaea0(0xf);
  param_1[9] = uVar2;
  cVar1 = FUN_142512960(uVar2,param_2 + 0x388);
  if (cVar1 == '\0') {
    FUN_1424a7c80(param_1 + 1,param_2 + 0x388);
  }
  else {
    FUN_1424a7130(param_1 + 1);
  }
  *param_1 = icu_64::numparse::impl::InfinityMatcher::vftable;
  return;
}



// FUNCTION 14262cf20 Unwind@14262cf20 body=41 status=ok
// SIG undefined Unwind@14262cf20(void)

void Unwind_14262cf20(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1425716f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14262cf50 FUN_14262cf50 body=8 status=ok
// SIG undefined FUN_14262cf50(void)

byte FUN_14262cf50(undefined8 param_1,longlong param_2)

{
  return *(byte *)(param_2 + 0x4c) >> 7;
}



// FUNCTION 14262cf60 FUN_14262cf60 body=13 status=ok
// SIG undefined FUN_14262cf60(void)

void FUN_14262cf60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  *(byte *)(param_3 + 0x4c) = *(byte *)(param_3 + 0x4c) | 0x80;
  FUN_14256f890(param_3);
  return;
}



// FUNCTION 14262cf70 FUN_14262cf70 body=153 status=ok
// SIG undefined FUN_14262cf70(void)

void FUN_14262cf70(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  uVar2 = FUN_1425eaea0(0xb);
  param_1[9] = uVar2;
  cVar1 = FUN_142512960(uVar2,param_2 + 0x188);
  if (cVar1 == '\0') {
    FUN_1424a7c80(param_1 + 1,param_2 + 0x188);
  }
  else {
    FUN_1424a7130(param_1 + 1);
  }
  *param_1 = icu_64::numparse::impl::MinusSignMatcher::vftable;
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



// FUNCTION 14262d010 Unwind@14262d010 body=43 status=ok
// SIG undefined Unwind@14262d010(void)

void Unwind_14262d010(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_1425716f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14262d070 FUN_14262d070 body=142 status=ok
// SIG undefined FUN_14262d070(void)

void FUN_14262d070(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  uVar2 = FUN_1425eaea0(0);
  param_1[9] = uVar2;
  cVar1 = FUN_142512960(uVar2,param_2 + 0x3c8);
  if (cVar1 == '\0') {
    FUN_1424a7c80(param_1 + 1,param_2 + 0x3c8);
  }
  else {
    FUN_1424a7130(param_1 + 1);
  }
  *param_1 = icu_64::numparse::impl::NanMatcher::vftable;
  return;
}



// FUNCTION 14262d100 Unwind@14262d100 body=41 status=ok
// SIG undefined Unwind@14262d100(void)

void Unwind_14262d100(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1425716f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14262d130 FUN_14262d130 body=8 status=ok
// SIG undefined FUN_14262d130(void)

void FUN_14262d130(undefined8 param_1,undefined8 param_2)

{
  FUN_14256f8f0(param_2);
  return;
}



// FUNCTION 14262d140 FUN_14262d140 body=13 status=ok
// SIG undefined FUN_14262d140(void)

void FUN_14262d140(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  *(byte *)(param_3 + 0x4c) = *(byte *)(param_3 + 0x4c) | 0x40;
  FUN_14256f890(param_3);
  return;
}



// FUNCTION 14262d150 FUN_14262d150 body=135 status=ok
// SIG undefined FUN_14262d150(void)

void FUN_14262d150(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  uVar2 = FUN_1425eaea0(0);
  param_1[9] = uVar2;
  cVar1 = FUN_142512960(uVar2,param_2);
  if (cVar1 == '\0') {
    FUN_1424a7c80(param_1 + 1,param_2);
  }
  else {
    FUN_1424a7130(param_1 + 1);
  }
  *param_1 = icu_64::numparse::impl::PaddingMatcher::vftable;
  return;
}



// FUNCTION 14262d1e0 Unwind@14262d1e0 body=41 status=ok
// SIG undefined Unwind@14262d1e0(void)

void Unwind_14262d1e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1425716f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14262d210 FUN_14262d210 body=3 status=ok
// SIG undefined FUN_14262d210(void)

undefined1 FUN_14262d210(void)

{
  return 1;
}



// FUNCTION 14262d220 FUN_14262d220 body=3 status=ok
// SIG undefined FUN_14262d220(void)

undefined8 FUN_14262d220(void)

{
  return 0;
}



// FUNCTION 14262d230 FUN_14262d230 body=1 status=ok
// SIG undefined FUN_14262d230(void)

void FUN_14262d230(void)

{
  return;
}



// FUNCTION 14262d240 FUN_14262d240 body=145 status=ok
// SIG undefined FUN_14262d240(void)

void FUN_14262d240(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  uVar2 = FUN_1425eaea0(0xd);
  param_1[9] = uVar2;
  cVar1 = FUN_142512960(uVar2,param_2 + 200);
  if (cVar1 == '\0') {
    FUN_1424a7c80(param_1 + 1,param_2 + 200);
  }
  else {
    FUN_1424a7130(param_1 + 1);
  }
  *param_1 = icu_64::numparse::impl::PercentMatcher::vftable;
  return;
}



// FUNCTION 14262d2e0 Unwind@14262d2e0 body=41 status=ok
// SIG undefined Unwind@14262d2e0(void)

void Unwind_14262d2e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1425716f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14262d310 FUN_14262d310 body=9 status=ok
// SIG undefined FUN_14262d310(void)

byte FUN_14262d310(undefined8 param_1,longlong param_2)

{
  return (*(byte *)(param_2 + 0x4c) & 2) >> 1;
}



// FUNCTION 14262d320 FUN_14262d320 body=13 status=ok
// SIG undefined FUN_14262d320(void)

void FUN_14262d320(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  *(byte *)(param_3 + 0x4c) = *(byte *)(param_3 + 0x4c) | 2;
  FUN_14256f890(param_3);
  return;
}



// FUNCTION 14262d330 FUN_14262d330 body=145 status=ok
// SIG undefined FUN_14262d330(void)

void FUN_14262d330(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  uVar2 = FUN_1425eaea0(0xe);
  param_1[9] = uVar2;
  cVar1 = FUN_142512960(uVar2,param_2 + 0x308);
  if (cVar1 == '\0') {
    FUN_1424a7c80(param_1 + 1,param_2 + 0x308);
  }
  else {
    FUN_1424a7130(param_1 + 1);
  }
  *param_1 = icu_64::numparse::impl::PermilleMatcher::vftable;
  return;
}



// FUNCTION 14262d3d0 Unwind@14262d3d0 body=41 status=ok
// SIG undefined Unwind@14262d3d0(void)

void Unwind_14262d3d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1425716f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14262d400 FUN_14262d400 body=10 status=ok
// SIG undefined FUN_14262d400(void)

byte FUN_14262d400(undefined8 param_1,longlong param_2)

{
  return (*(byte *)(param_2 + 0x4c) & 4) >> 2;
}



// FUNCTION 14262d410 FUN_14262d410 body=13 status=ok
// SIG undefined FUN_14262d410(void)

void FUN_14262d410(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  *(byte *)(param_3 + 0x4c) = *(byte *)(param_3 + 0x4c) | 4;
  FUN_14256f890(param_3);
  return;
}



// FUNCTION 14262d420 FUN_14262d420 body=153 status=ok
// SIG undefined FUN_14262d420(void)

void FUN_14262d420(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  uVar2 = FUN_1425eaea0(0xc);
  param_1[9] = uVar2;
  cVar1 = FUN_142512960(uVar2,param_2 + 0x1c8);
  if (cVar1 == '\0') {
    FUN_1424a7c80(param_1 + 1,param_2 + 0x1c8);
  }
  else {
    FUN_1424a7130(param_1 + 1);
  }
  *param_1 = icu_64::numparse::impl::PlusSignMatcher::vftable;
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



// FUNCTION 14262d4c0 Unwind@14262d4c0 body=43 status=ok
// SIG undefined Unwind@14262d4c0(void)

void Unwind_14262d4c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_1425716f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14262d4f0 FUN_14262d4f0 body=17 status=ok
// SIG undefined FUN_14262d4f0(void)

undefined8 FUN_14262d4f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    return 0;
  }
  uVar1 = FUN_14256f8f0(param_2);
  return uVar1;
}



// FUNCTION 14262d510 FUN_14262d510 body=8 status=ok
// SIG undefined FUN_14262d510(void)

void FUN_14262d510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14256f890(param_3);
  return;
}



// FUNCTION 14262d520 FUN_14262d520 body=805 status=ok
// SIG undefined FUN_14262d520(void)

void FUN_14262d520(longlong param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined1 local_88 [64];
  longlong local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *(longlong *)(param_1 + 0x50);
  if ((lVar4 != 0) && (0 < *(int *)(param_1 + 0x38))) {
    if (-1 < *(int *)(param_1 + 0x3c)) {
      uVar3 = FUN_14262cc20(lVar4);
      cVar2 = FUN_142512880(uVar3,*(undefined4 *)(param_1 + 0x3c));
      if (cVar2 != '\0') goto LAB_14262d589;
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,lVar4);
  }
LAB_14262d589:
  switch(param_2) {
  case 0:
    if (*(longlong *)(param_1 + 0x50) != 0) {
      uVar3 = FUN_14262cc20();
      cVar2 = FUN_142512880(uVar3,param_3);
      if (cVar2 != '\0') break;
    }
    local_90 = (undefined **)CONCAT44(local_90._4_4_,param_3);
    if (0 < *param_4) goto LAB_14262d5c8;
    lVar4 = FUN_14262dbf0(*(longlong *)(param_1 + 0x48) + 0x430,&local_90);
    if (lVar4 == 0) {
      *param_4 = 7;
      goto LAB_14262d5c8;
    }
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,lVar4);
    break;
  case 0xfffffff7:
  case 0xfffffff8:
  case 0xfffffff9:
  case 0xfffffffa:
  case 0xfffffffb:
    uVar3 = FUN_14262d860(*(undefined8 *)(param_1 + 0x48),param_4);
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,uVar3);
    param_3 = param_2;
    break;
  case 0xfffffffc:
    plVar1 = *(longlong **)(param_1 + 0x48);
    FUN_14262d330(&local_90,*(undefined8 *)(*plVar1 + 8));
    FUN_1424a7ca0(plVar1 + 0x22,local_88);
    plVar1[0x2a] = local_48;
    local_90 = icu_64::numparse::impl::SymbolMatcher::vftable;
    FUN_140859a90(local_88);
    FUN_1425716f0(&local_90);
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,plVar1 + 0x21);
    param_3 = 0xfffffffc;
    break;
  case 0xfffffffd:
    plVar1 = *(longlong **)(param_1 + 0x48);
    FUN_14262d240(&local_90,*(undefined8 *)(*plVar1 + 8));
    FUN_1424a7ca0(plVar1 + 0x18,local_88);
    plVar1[0x20] = local_48;
    local_90 = icu_64::numparse::impl::SymbolMatcher::vftable;
    FUN_140859a90(local_88);
    FUN_1425716f0(&local_90);
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,plVar1 + 0x17);
    param_3 = 0xfffffffd;
    break;
  case 0xfffffffe:
    plVar1 = *(longlong **)(param_1 + 0x48);
    FUN_14262d420(&local_90,*(undefined8 *)(*plVar1 + 8),1);
    FUN_1424a7ca0(plVar1 + 0xd,local_88);
    plVar1[0x15] = local_48;
    *(undefined1 *)(plVar1 + 0x16) = local_40;
    local_90 = icu_64::numparse::impl::SymbolMatcher::vftable;
    FUN_140859a90(local_88);
    FUN_1425716f0(&local_90);
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,plVar1 + 0xc);
    param_3 = 0xfffffffe;
    break;
  case 0xffffffff:
    plVar1 = *(longlong **)(param_1 + 0x48);
    FUN_14262cf70(&local_90,*(undefined8 *)(*plVar1 + 8),1);
    FUN_1424a7ca0(plVar1 + 2,local_88);
    plVar1[10] = local_48;
    *(undefined1 *)(plVar1 + 0xb) = local_40;
    local_90 = icu_64::numparse::impl::SymbolMatcher::vftable;
    FUN_140859a90(local_88);
    FUN_1425716f0(&local_90);
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,plVar1 + 1);
    param_3 = 0xffffffff;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + 0x3c) = param_3;
LAB_14262d5c8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14262d860 FUN_14262d860 body=343 status=ok
// SIG undefined FUN_14262d860(void)

void FUN_14262d860(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  undefined1 local_2f8 [8];
  longlong local_2f0;
  undefined1 local_2e8 [64];
  undefined1 local_2a8 [64];
  undefined1 local_268;
  undefined1 local_260 [64];
  undefined1 local_220 [64];
  undefined1 local_1e0 [64];
  undefined1 local_1a0 [64];
  undefined1 local_160 [64];
  undefined1 local_120 [64];
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_328;
  puVar1 = (undefined8 *)*param_1;
  local_308 = param_2;
  FUN_142630c80(local_2f8,*puVar1,puVar1[1],*(undefined4 *)(puVar1 + 4));
  param_1[0x2c] = local_2f0;
  FUN_1424a7ca0(param_1 + 0x2d,local_2e8);
  FUN_1424a7ca0(param_1 + 0x35,local_2a8);
  *(undefined1 *)(param_1 + 0x3d) = local_268;
  FUN_1424a7ca0(param_1 + 0x3e,local_260);
  FUN_1424a7ca0(param_1 + 0x46,local_220);
  FUN_1424a7ca0(param_1 + 0x4e,local_1e0);
  FUN_1424a7ca0(param_1 + 0x56,local_1a0);
  FUN_1424a7ca0(param_1 + 0x5e,local_160);
  FUN_1424a7ca0(param_1 + 0x66,local_120);
  FUN_1424a7ca0(param_1 + 0x6e,local_e0);
  FUN_1424a7ca0(param_1 + 0x76,local_a0);
  FUN_142503340(param_1 + 0x7e,local_60);
  FUN_142570230(local_2f8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_328);
}



// FUNCTION 14262d9d0 FUN_14262d9d0 body=145 status=ok
// SIG undefined FUN_14262d9d0(void)

void FUN_14262d9d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((*(int *)(param_1 + 0x10) <= (int)uVar3) && (0 < (int)uVar3)) {
    uVar2 = uVar3 * 2;
    _Dst = (void *)FUN_1424da030((ulonglong)uVar2 << 3);
    if (_Dst != (void *)0x0) {
      if ((int)*(uint *)(param_1 + 0x10) < (int)uVar3) {
        uVar3 = *(uint *)(param_1 + 0x10);
      }
      if ((int)uVar2 <= (int)uVar3) {
        uVar3 = uVar2;
      }
      memcpy(_Dst,*(void **)(param_1 + 8),(longlong)(int)uVar3 << 3);
      if (*(char *)(param_1 + 0x14) != '\0') {
        FUN_1424da110(*(undefined8 *)(param_1 + 8));
      }
      *(void **)(param_1 + 8) = _Dst;
      *(uint *)(param_1 + 0x10) = uVar2;
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 14262da70 FUN_14262da70 body=379 status=ok
// SIG undefined FUN_14262da70(void)

void FUN_14262da70(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[2] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 3) = 2;
  param_1[1] = icu_64::numparse::impl::MinusSignMatcher::vftable;
  param_1[0xd] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xe) = 2;
  param_1[0xc] = icu_64::numparse::impl::PlusSignMatcher::vftable;
  param_1[0x18] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x19) = 2;
  param_1[0x17] = icu_64::numparse::impl::PercentMatcher::vftable;
  param_1[0x22] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x23) = 2;
  param_1[0x21] = icu_64::numparse::impl::PermilleMatcher::vftable;
  param_1[0x2b] = icu_64::numparse::impl::CombinedCurrencyMatcher::vftable;
  param_1[0x2d] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2e) = 2;
  param_1[0x35] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x36) = 2;
  param_1[0x3e] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3f) = 2;
  param_1[0x46] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x47) = 2;
  param_1[0x4e] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x4f) = 2;
  param_1[0x56] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x57) = 2;
  param_1[0x5e] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5f) = 2;
  param_1[0x66] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x67) = 2;
  param_1[0x6e] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x6f) = 2;
  param_1[0x76] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x77) = 2;
  param_1[0x7e] = (longlong)param_1 + 0x3fd;
  *(undefined4 *)(param_1 + 0x7f) = 0x28;
  *(undefined1 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3fd) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = param_1 + 0x89;
  *(undefined4 *)(param_1 + 0x88) = 8;
  *(undefined1 *)((longlong)param_1 + 0x444) = 0;
  return;
}



// FUNCTION 14262dbf0 FUN_14262dbf0 body=196 status=ok
// SIG undefined FUN_14262dbf0(void)

undefined8 * FUN_14262dbf0(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *_Dst;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[4];
  if (*param_1 == uVar4) {
    uVar3 = 0x20;
    if (uVar4 != 8) {
      uVar3 = uVar4 * 2;
    }
    if (0 < (int)uVar3) {
      _Dst = (void *)FUN_1424da030((ulonglong)uVar3 << 3);
      if (_Dst != (void *)0x0) {
        if (0 < (int)uVar4) {
          if ((int)param_1[4] < (int)uVar4) {
            uVar4 = param_1[4];
          }
          if ((int)uVar3 <= (int)uVar4) {
            uVar4 = uVar3;
          }
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)(int)uVar4 << 3);
        }
        if ((char)param_1[5] != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[4] = uVar3;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_14262dc77;
      }
    }
    puVar2 = (undefined8 *)0x0;
  }
  else {
LAB_14262dc77:
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x10);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *param_2;
      *puVar2 = icu_64::numparse::impl::CodePointMatcher::vftable;
      *(undefined4 *)(puVar2 + 1) = uVar1;
    }
    uVar4 = *param_1;
    *param_1 = uVar4 + 1;
    *(undefined8 **)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar4 * 8) = puVar2;
  }
  return puVar2;
}



// FUNCTION 14262dcc0 FUN_14262dcc0 body=55 status=ok
// SIG undefined FUN_14262dcc0(void)

undefined8 FUN_14262dcc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_14262c840(param_2,*(undefined4 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_14262c640(param_2);
    FUN_14256f890(param_3,param_2);
  }
  return 0;
}



// FUNCTION 14262dd00 FUN_14262dd00 body=14 status=ok
// SIG undefined FUN_14262dd00(void)

void FUN_14262dd00(longlong param_1,undefined8 param_2)

{
  FUN_14262c840(param_2,*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 14262dd10 FUN_14262dd10 body=32 status=ok
// SIG undefined FUN_14262dd10(void)

undefined8 FUN_14262dd10(undefined8 param_1,undefined8 param_2)

{
  FUN_1424a6c90(param_2,L"<CodePoint>");
  return param_2;
}



// FUNCTION 14262dd30 FUN_14262dd30 body=329 status=ok
// SIG undefined FUN_14262dd30(void)

undefined8 *
FUN_14262dd30(undefined8 *param_1,longlong param_2,longlong *param_3,ulonglong param_4,
             undefined1 *param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined **local_90;
  undefined **local_88;
  undefined1 *local_80;
  undefined4 local_78;
  char local_74;
  undefined1 local_70 [24];
  ulonglong local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = param_1;
  if (*(ushort *)(param_2 + 8) < 0x20) {
    *param_5 = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_142631be0(param_1);
    *param_1 = icu_64::numparse::impl::AffixPatternMatcher::vftable;
    param_1[7] = (longlong)param_1 + 0x46;
    *(undefined4 *)(param_1 + 8) = 4;
    *(undefined1 *)((longlong)param_1 + 0x44) = 0;
    *(undefined2 *)((longlong)param_1 + 0x46) = 0;
  }
  else {
    *param_5 = 1;
    if ((param_4 & 0x200) == 0) {
      local_40 = *(undefined8 *)(*param_3 + 0x10);
    }
    else {
      local_40 = 0;
    }
    local_90 = icu_64::numparse::impl::AffixPatternMatcherBuilder::vftable;
    local_88 = icu_64::numparse::impl::AffixPatternMatcherBuilder::vftable;
    local_80 = local_70;
    local_78 = 3;
    local_74 = '\0';
    local_58 = 0;
    local_50 = param_2;
    local_48 = param_3;
    FUN_142573ac0(param_2,&local_90,param_6);
    lVar1 = local_50;
    FUN_142631c10(param_1,&local_80,local_58 & 0xffffffff);
    *param_1 = icu_64::numparse::impl::AffixPatternMatcher::vftable;
    FUN_1424ca700(param_1 + 7,lVar1);
    local_90 = icu_64::numparse::impl::AffixPatternMatcherBuilder::vftable;
    local_88 = icu_64::numparse::impl::AffixPatternMatcherBuilder::vftable;
    if (local_74 != '\0') {
      FUN_1424da110(local_80);
    }
    FUN_142572bb0(&local_90);
  }
  return local_38;
}



// FUNCTION 14262de80 Unwind@14262de80 body=76 status=ok
// SIG undefined Unwind@14262de80(void)

void Unwind_14262de80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_2 + 0x80);
  puVar2 = (undefined8 *)*plVar1;
  *puVar2 = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
  if (*(char *)((longlong)puVar2 + 0x14) != '\0') {
    FUN_1424da110(*(undefined8 *)(*plVar1 + 8));
  }
  FUN_1425716f0(*plVar1);
  return;
}



// FUNCTION 14262ded0 Unwind@14262ded0 body=43 status=ok
// SIG undefined Unwind@14262ded0(void)

void Unwind_14262ded0(undefined8 param_1,longlong param_2)

{
  FUN_14262df00(param_2 + 0x28);
  return;
}



// FUNCTION 14262df00 FUN_14262df00 body=57 status=ok
// SIG undefined FUN_14262df00(void)

void FUN_14262df00(undefined8 *param_1)

{
  *param_1 = icu_64::numparse::impl::AffixPatternMatcherBuilder::vftable;
  param_1[1] = icu_64::numparse::impl::AffixPatternMatcherBuilder::vftable;
  if (*(char *)((longlong)param_1 + 0x1c) != '\0') {
    FUN_1424da110(param_1[2]);
  }
  FUN_142572bb0(param_1);
  return;
}



// FUNCTION 14262df40 FUN_14262df40 body=514 status=ok
// SIG undefined FUN_14262df40(void)

void FUN_14262df40(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[4] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[8] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0xc] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0x10] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0x14] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0x18] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0x1c] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0x20] = icu_64::numparse::impl::AffixMatcher::vftable;
  FUN_142631be0();
  param_1[0x24] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x2b] = (longlong)param_1 + 0x166;
  *(undefined4 *)(param_1 + 0x2c) = 4;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined2 *)((longlong)param_1 + 0x166) = 0;
  FUN_142631be0();
  param_1[0x2e] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x35] = (longlong)param_1 + 0x1b6;
  *(undefined4 *)(param_1 + 0x36) = 4;
  *(undefined1 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1b6) = 0;
  FUN_142631be0();
  param_1[0x38] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x3f] = (longlong)param_1 + 0x206;
  *(undefined4 *)(param_1 + 0x40) = 4;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  *(undefined2 *)((longlong)param_1 + 0x206) = 0;
  FUN_142631be0();
  param_1[0x42] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x49] = (longlong)param_1 + 0x256;
  *(undefined4 *)(param_1 + 0x4a) = 4;
  *(undefined1 *)((longlong)param_1 + 0x254) = 0;
  *(undefined2 *)((longlong)param_1 + 0x256) = 0;
  FUN_142631be0();
  param_1[0x4c] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x53] = (longlong)param_1 + 0x2a6;
  *(undefined4 *)(param_1 + 0x54) = 4;
  *(undefined1 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2a6) = 0;
  FUN_142631be0();
  param_1[0x56] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x5d] = (longlong)param_1 + 0x2f6;
  *(undefined4 *)(param_1 + 0x5e) = 4;
  *(undefined1 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2f6) = 0;
  param_1[0x60] = param_2;
  return;
}



// FUNCTION 14262e150 Unwind@14262e150 body=156 status=ok
// SIG undefined Unwind@14262e150(void)

void Unwind_14262e150(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  lVar3 = *(longlong *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x28);
  while (lVar2 != lVar3) {
    lVar3 = lVar3 + -0x50;
    FUN_1425724d0(lVar3);
  }
  FUN_1425716f0(lVar1 + 0x100);
  FUN_1425716f0(lVar1 + 0xe0);
  FUN_1425716f0(lVar1 + 0xc0);
  FUN_1425716f0(lVar1 + 0xa0);
  FUN_1425716f0(lVar1 + 0x80);
  FUN_1425716f0(lVar1 + 0x60);
  FUN_1425716f0(lVar1 + 0x40);
  FUN_1425716f0(lVar1 + 0x20);
  FUN_1425716f0(lVar1);
  return;
}



// FUNCTION 14262e1f0 FUN_14262e1f0 body=498 status=ok
// SIG undefined FUN_14262e1f0(void)

ulonglong FUN_14262e1f0(longlong *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 local_178 [64];
  undefined1 local_138 [64];
  undefined1 local_f8 [64];
  undefined **local_b8;
  undefined2 local_b0;
  undefined **local_78;
  undefined2 local_70;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  (**(code **)(*param_1 + 0x18))(param_1,local_178,0x100);
  (**(code **)(*param_1 + 0x18))(param_1,local_f8,0);
  local_b8 = &PTR_FUN_149e18960;
  local_b0 = 2;
  local_78 = &PTR_FUN_149e18960;
  local_70 = 2;
  cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,local_138,0x300);
    FUN_1424a7ca0(&local_b8,local_138);
    FUN_140859a90(local_138);
    (**(code **)(*param_1 + 0x18))(param_1,local_138,0x200);
    FUN_1424a7ca0(&local_78,local_138);
    FUN_140859a90(local_138);
  }
  if ((param_3 & 0x100) == 0) {
    uVar2 = FUN_14262cc20(param_2);
    cVar1 = FUN_142573910(local_178,uVar2,param_4);
    if (cVar1 != '\0') {
      uVar2 = FUN_14262cc20(param_2);
      cVar1 = FUN_142573910(local_f8,uVar2,param_4);
      if (cVar1 != '\0') {
        uVar2 = FUN_14262cc20(param_2);
        cVar1 = FUN_142573910(&local_b8,uVar2,param_4);
        if (cVar1 != '\0') {
          uVar2 = FUN_14262cc20(param_2);
          cVar1 = FUN_142573910(&local_78,uVar2,param_4);
          if (cVar1 != '\0') {
            cVar1 = FUN_142573610(local_f8,0xfffffffe,param_4);
            if (cVar1 == '\0') {
              cVar1 = FUN_142573610(local_f8,0xffffffff,param_4);
              if (cVar1 == '\0') {
                cVar1 = FUN_142573610(&local_78,0xfffffffe,param_4);
                if (cVar1 == '\0') {
                  cVar1 = FUN_142573610(&local_78,0xffffffff,param_4);
                  if (cVar1 == '\0') {
                    uVar3 = 0;
                    goto LAB_14262e3a5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
LAB_14262e3a5:
  FUN_140859a90(&local_78);
  FUN_140859a90(&local_b8);
  FUN_140859a90(local_f8);
  FUN_140859a90(local_178);
  return uVar3 & 0xffffffff;
}



// FUNCTION 14262e3f0 Unwind@14262e3f0 body=68 status=ok
// SIG undefined Unwind@14262e3f0(void)

void Unwind_14262e3f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x120);
  FUN_140859a90(param_2 + 0xe0);
  FUN_140859a90(param_2 + 0xa0);
  return;
}



// FUNCTION 14262e440 Unwind@14262e440 body=47 status=ok
// SIG undefined Unwind@14262e440(void)

void Unwind_14262e440(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 14262e470 FUN_14262e470 body=1972 status=ok
// SIG undefined FUN_14262e470(void)

void FUN_14262e470(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  uint param_5,ulonglong param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  void *pvVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  char cVar17;
  uint uVar18;
  undefined8 unaff_R13;
  ulonglong uVar19;
  bool bVar20;
  uint uVar21;
  longlong lVar22;
  uint *puVar23;
  byte *pbVar24;
  undefined4 uVar25;
  ulonglong in_stack_fffffffffffffec0;
  undefined **local_128;
  undefined2 local_120;
  longlong *local_e8;
  undefined8 local_e0;
  uint *local_d8;
  uint local_cc;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  uint local_b0 [6];
  undefined4 local_98;
  undefined4 *local_90;
  int local_88;
  char local_84;
  undefined4 local_82 [3];
  uint local_74;
  ulonglong local_70;
  longlong local_68;
  int local_5c;
  uint *local_58;
  byte local_4b;
  byte local_4a;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_e8 = param_3;
  local_e0 = param_2;
  cVar9 = FUN_14262e1f0(param_2,param_4,param_5,param_6);
  if (cVar9 != '\0') {
    local_128 = &PTR_FUN_149e18960;
    local_120 = 2;
    local_cc = param_5 >> 10 & 1;
    local_58 = (uint *)0x0;
    puVar10 = (uint *)0x0;
    iVar16 = 0;
    local_70 = 0;
    uVar19 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
    while (-2 < (char)uVar19) {
      local_4b = 0;
      local_d8 = puVar10;
      local_49 = (char)uVar19;
      FUN_142568d10(local_e0,1,uVar19 & 0xffffffff,local_cc,5,
                    in_stack_fffffffffffffec0 & 0xffffffffffffff00,&local_128);
      pbVar24 = &local_4b;
      uVar19 = param_6;
      FUN_14262dd30(&local_c8,&local_128,*(undefined8 *)(param_1 + 0x300),param_5,pbVar24,param_6);
      uVar25 = (undefined4)((ulonglong)pbVar24 >> 0x20);
      lVar15 = (longlong)iVar16 * 0x50;
      lVar11 = param_1 + lVar15;
      puVar23 = (uint *)(lVar11 + 0x120);
      if (*(char *)(param_1 + 0x134 + lVar15) != '\0') {
        FUN_1424da110(*(undefined8 *)(lVar11 + 0x128));
      }
      *(int *)(lVar11 + 0x130) = (int)uStack_b8;
      *(char *)(lVar11 + 0x134) = uStack_b8._4_1_;
      local_5c = iVar16;
      if (local_c0 == local_b0) {
        *(void **)(lVar11 + 0x128) = (void *)(lVar11 + 0x138);
        memcpy((void *)(lVar11 + 0x138),local_b0,(longlong)(int)uStack_b8 << 3);
      }
      else {
        *(uint **)(lVar11 + 0x128) = local_c0;
        uStack_b8 = CONCAT35(uStack_b8._5_3_,3);
        local_c0 = local_b0;
      }
      cVar9 = local_49;
      *(undefined4 *)(lVar11 + 0x150) = local_98;
      puVar14 = (undefined8 *)(param_1 + lVar15 + 0x158);
      if (*(char *)(param_1 + 0x164 + lVar15) != '\0') {
        FUN_1424da110(*puVar14);
      }
      cVar17 = local_84;
      *(int *)(param_1 + 0x160 + lVar15) = local_88;
      *(char *)(param_1 + lVar15 + 0x164) = local_84;
      if (local_90 == local_82) {
        pvVar13 = (void *)(param_1 + lVar15 + 0x166);
        *puVar14 = pvVar13;
        memcpy(pvVar13,local_82,(longlong)local_88 * 2);
        local_c8 = icu_64::numparse::impl::AffixPatternMatcher::vftable;
        if (cVar17 != '\0') {
          FUN_1424da110(local_82);
        }
      }
      else {
        *puVar14 = local_90;
        local_88 = 4;
        local_84 = '\0';
        local_90 = local_82;
      }
      local_c8 = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
      if (uStack_b8._4_1_ != '\0') {
        FUN_1424da110(local_c0);
      }
      FUN_1425716f0(&local_c8);
      bVar7 = local_4b;
      if (local_4b == 0) {
        puVar23 = (uint *)0x0;
      }
      local_4a = 0;
      FUN_142568d10(local_e0,0,cVar9,local_cc,CONCAT44(uVar25,5),uVar19 & 0xffffffffffffff00,
                    &local_128);
      iVar16 = local_5c;
      in_stack_fffffffffffffec0 = param_6;
      FUN_14262dd30(&local_c8,&local_128,*(undefined8 *)(param_1 + 0x300),param_5,&local_4a,param_6)
      ;
      iVar16 = iVar16 + (uint)bVar7;
      lVar22 = (longlong)iVar16 * 0x50;
      lVar11 = param_1 + lVar22;
      lVar15 = lVar11 + 0x120;
      if (*(char *)(param_1 + 0x134 + lVar22) != '\0') {
        FUN_1424da110(*(undefined8 *)(lVar11 + 0x128));
      }
      *(int *)(lVar11 + 0x130) = (int)uStack_b8;
      *(char *)(lVar11 + 0x134) = uStack_b8._4_1_;
      local_5c = iVar16;
      if (local_c0 == local_b0) {
        *(void **)(lVar11 + 0x128) = (void *)(lVar11 + 0x138);
        memcpy((void *)(lVar11 + 0x138),local_b0,(longlong)(int)uStack_b8 << 3);
      }
      else {
        *(uint **)(lVar11 + 0x128) = local_c0;
        uStack_b8 = CONCAT35(uStack_b8._5_3_,3);
        local_c0 = local_b0;
      }
      *(undefined4 *)(lVar11 + 0x150) = local_98;
      puVar14 = (undefined8 *)(param_1 + lVar22 + 0x158);
      if (*(char *)(param_1 + 0x164 + lVar22) != '\0') {
        FUN_1424da110(*puVar14);
      }
      cVar9 = local_84;
      *(int *)(param_1 + 0x160 + lVar22) = local_88;
      *(char *)(param_1 + lVar22 + 0x164) = local_84;
      if (local_90 == local_82) {
        pvVar13 = (void *)(param_1 + lVar22 + 0x166);
        *puVar14 = pvVar13;
        memcpy(pvVar13,local_82,(longlong)local_88 * 2);
        cVar17 = local_49;
        local_c8 = icu_64::numparse::impl::AffixPatternMatcher::vftable;
        if (cVar9 != '\0') {
          FUN_1424da110(local_82);
        }
      }
      else {
        *puVar14 = local_90;
        local_88 = 4;
        local_84 = '\0';
        local_90 = local_82;
        cVar17 = local_49;
      }
      local_c8 = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
      if (uStack_b8._4_1_ != '\0') {
        FUN_1424da110(local_c0);
      }
      FUN_1425716f0(&local_c8);
      bVar8 = local_4a;
      iVar16 = local_5c;
      uVar12 = (uint)local_4a;
      if (local_4a == 0) {
        lVar15 = 0;
      }
      puVar10 = puVar23;
      local_68 = lVar15;
      if (cVar17 == '\x01') {
LAB_14262e9b2:
        local_c8 = icu_64::numparse::impl::AffixMatcher::vftable;
        uVar21 = (uint)(cVar17 == -1);
        uVar18 = (int)local_70 + 1;
        lVar11 = (longlong)(int)local_70 * 0x20;
        *(uint *)(param_1 + 0x18 + lVar11) = uVar21;
        local_c0._0_4_ = SUB84(puVar23,0);
        uVar25 = (undefined4)local_c0;
        local_c0._4_4_ = (undefined4)((ulonglong)puVar23 >> 0x20);
        uVar4 = local_c0._4_4_;
        uStack_b8._0_4_ = (int)lVar15;
        uVar5 = (int)uStack_b8;
        uStack_b8._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
        uVar6 = uStack_b8._4_4_;
        puVar1 = (undefined4 *)(param_1 + 8 + lVar11);
        *puVar1 = (undefined4)local_c0;
        puVar1[1] = local_c0._4_4_;
        puVar1[2] = (int)uStack_b8;
        puVar1[3] = uStack_b8._4_4_;
        local_c0 = puVar23;
        uStack_b8 = lVar15;
        local_b0[0] = uVar21;
        local_74 = uVar12;
        local_58 = puVar10;
        FUN_1425716f0(&local_c8);
        iVar16 = local_5c;
        lVar11 = local_68;
        uVar12 = uVar18;
        if (((bVar7 != 0) && ((param_5 & 0x80) != 0)) && ((char)local_74 != '\0')) {
          if (((local_49 == '\x01') || (local_58 == (uint *)0x0)) ||
             (cVar9 = FUN_1424ca7e0(puVar23 + 0xe,local_58 + 0xe), cVar9 == '\0')) {
            local_c8 = icu_64::numparse::impl::AffixMatcher::vftable;
            uStack_b8 = 0;
            uVar12 = (int)local_70 + 2;
            *(uint *)(param_1 + 0x18 + (longlong)(int)uVar18 * 0x20) = uVar21;
            puVar1 = (undefined4 *)(param_1 + 8 + (longlong)(int)uVar18 * 0x20);
            *puVar1 = uVar25;
            puVar1[1] = uVar4;
            puVar1[2] = 0;
            puVar1[3] = 0;
            local_c0 = puVar23;
            local_b0[0] = uVar21;
            FUN_1425716f0(&local_c8);
            if (local_49 != '\x01') goto LAB_14262eac8;
          }
          else {
LAB_14262eac8:
            if ((local_68 != 0) &&
               (cVar9 = FUN_1424ca7e0(lVar15 + 0x38,local_68 + 0x38), lVar11 = local_68,
               cVar9 != '\0')) goto LAB_14262e51a;
          }
          lVar11 = local_68;
          local_c8 = icu_64::numparse::impl::AffixMatcher::vftable;
          local_c0 = (uint *)0x0;
          lVar22 = (longlong)(int)uVar12;
          uVar12 = uVar12 + 1;
          *(uint *)(param_1 + 0x18 + lVar22 * 0x20) = uVar21;
          puVar1 = (undefined4 *)(param_1 + 8 + lVar22 * 0x20);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          uStack_b8 = lVar15;
          local_b0[0] = uVar21;
          FUN_1425716f0(&local_c8);
        }
LAB_14262e51a:
        local_70 = (ulonglong)uVar12;
        puVar10 = local_58;
        local_58 = (uint *)lVar11;
        uVar12 = local_74;
        cVar17 = local_49;
      }
      else {
        if (((local_d8 != (uint *)0x0) || (bVar7 != 0)) &&
           ((local_d8 == (uint *)0x0 ||
            ((bVar7 == 0 ||
             (cVar9 = FUN_1424ca7e0(puVar23 + 0xe,local_d8 + 0xe), cVar17 = local_49, cVar9 == '\0')
             ))))) {
LAB_14262e9a0:
          local_68 = (longlong)local_58;
          puVar10 = local_d8;
          goto LAB_14262e9b2;
        }
        if ((local_58 == (uint *)0x0) && (bVar8 == 0)) {
          puVar10 = local_d8;
          local_58 = (uint *)0;
        }
        else {
          if ((local_58 == (uint *)0x0) || (bVar8 == 0)) goto LAB_14262e9a0;
          cVar9 = FUN_1424ca7e0(lVar15 + 0x38,(longlong)local_58 + 0x38);
          local_68 = (longlong)local_58;
          puVar10 = local_d8;
          iVar16 = local_5c;
          cVar17 = local_49;
          if (cVar9 == '\0') goto LAB_14262e9b2;
        }
      }
      iVar16 = iVar16 + uVar12;
      uVar19 = (ulonglong)(byte)(cVar17 - 1);
    }
    while( true ) {
      bVar20 = false;
      uVar12 = 1;
      if (1 < (int)local_70) {
        do {
          lVar15 = ((longlong)(int)uVar12 + -1) * 0x20;
          lVar11 = (ulonglong)uVar12 * 0x20;
          cVar9 = FUN_14262eca0(param_1 + lVar15,param_1 + lVar11);
          if ('\0' < cVar9) {
            local_c8 = icu_64::numparse::impl::AffixMatcher::vftable;
            local_b0[0] = *(uint *)(param_1 + 0x18 + lVar15);
            puVar14 = (undefined8 *)(param_1 + 8 + lVar15);
            puVar10 = (uint *)*puVar14;
            lVar22 = puVar14[1];
            *(undefined4 *)(param_1 + 0x18 + lVar15) = *(undefined4 *)(param_1 + 0x18 + lVar11);
            puVar14 = (undefined8 *)(param_1 + 8 + lVar11);
            uVar3 = puVar14[1];
            puVar2 = (undefined8 *)(param_1 + 8 + lVar15);
            *puVar2 = *puVar14;
            puVar2[1] = uVar3;
            *(uint *)(param_1 + 0x18 + lVar11) = local_b0[0];
            local_c0._0_4_ = SUB84(puVar10,0);
            local_c0._4_4_ = (undefined4)((ulonglong)puVar10 >> 0x20);
            uStack_b8._0_4_ = (int)lVar22;
            uStack_b8._4_4_ = (undefined4)((ulonglong)lVar22 >> 0x20);
            puVar1 = (undefined4 *)(param_1 + 8 + lVar11);
            *puVar1 = (undefined4)local_c0;
            puVar1[1] = local_c0._4_4_;
            puVar1[2] = (int)uStack_b8;
            puVar1[3] = uStack_b8._4_4_;
            local_c0 = puVar10;
            uStack_b8 = lVar22;
            FUN_1425716f0(&local_c8);
            bVar20 = true;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_70);
      }
      uVar12 = 0;
      if (!bVar20) break;
    }
    for (; (int)uVar12 < (int)local_70; uVar12 = uVar12 + 1) {
      (**(code **)(*local_e8 + 8))(local_e8,(ulonglong)uVar12 * 0x20 + param_1);
    }
    FUN_140859a90(&local_128);
  }
  return;
}



// FUNCTION 14262ec60 Unwind@14262ec60 body=55 status=ok
// SIG undefined Unwind@14262ec60(void)

void Unwind_14262ec60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x40);
  return;
}



// FUNCTION 14262eca0 FUN_14262eca0 body=582 status=ok
// SIG undefined FUN_14262eca0(void)

ulonglong FUN_14262eca0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 local_68 [8];
  short local_60;
  uint local_5c;
  
  uVar2 = 0;
  uVar4 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1424a7060(local_68,1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38),0xffffffff);
    uVar4 = local_5c;
    if (-1 < local_60) {
      uVar4 = (int)local_60 >> 5;
    }
    FUN_140859a90(local_68);
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1424a7060(local_68,1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x38),0xffffffff);
    uVar2 = local_5c;
    if (-1 < local_60) {
      uVar2 = (int)local_60 >> 5;
    }
    FUN_140859a90(local_68);
  }
  if (uVar4 == uVar2) {
    uVar4 = 0;
    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1424a7060(local_68,1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),0xffffffff);
      uVar2 = local_5c;
      if (-1 < local_60) {
        uVar2 = (int)local_60 >> 5;
      }
      FUN_140859a90(local_68);
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1424a7060(local_68,1,*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x38),0xffffffff);
      uVar4 = local_5c;
      if (-1 < local_60) {
        uVar4 = (int)local_60 >> 5;
      }
      FUN_140859a90(local_68);
    }
    uVar3 = 0;
    if (uVar2 == uVar4) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1424a7060(local_68,1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),0xffffffff);
      uVar4 = local_5c;
      if (-1 < local_60) {
        uVar4 = (int)local_60 >> 5;
      }
      uVar3 = (ulonglong)uVar4;
      FUN_140859a90(local_68);
    }
    if (*(longlong *)(param_2 + 0x10) == 0) {
      local_5c = 0;
    }
    else {
      FUN_1424a7060(local_68,1,*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x38),0xffffffff);
      if (-1 < local_60) {
        local_5c = (int)local_60 >> 5;
      }
      FUN_140859a90(local_68);
    }
    uVar4 = (uint)uVar3;
    bVar6 = SBORROW4(uVar4,local_5c);
    iVar1 = uVar4 - local_5c;
    bVar5 = uVar4 == local_5c;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1424a7060(local_68,1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38),0xffffffff);
      uVar4 = local_5c;
      if (-1 < local_60) {
        uVar4 = (int)local_60 >> 5;
      }
      FUN_140859a90(local_68);
    }
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1424a7060(local_68,1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x38),0xffffffff);
      if (-1 < local_60) {
        local_5c = (int)local_60 >> 5;
      }
      uVar3 = (ulonglong)local_5c;
      FUN_140859a90(local_68);
    }
    uVar2 = (uint)uVar3;
    bVar6 = SBORROW4(uVar4,uVar2);
    iVar1 = uVar4 - uVar2;
    bVar5 = uVar4 == uVar2;
  }
  return CONCAT71((int7)(uVar3 >> 8),-(!bVar5 && bVar6 == iVar1 < 0)) | 1;
}



// FUNCTION 14262eef0 FUN_14262eef0 body=275 status=ok
// SIG undefined FUN_14262eef0(void)

void FUN_14262eef0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [64];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_14256f8f0(param_3);
  if (cVar1 == '\0') {
    if (((*(byte *)(param_3 + 0x58) & 1) == 0) || (*(longlong *)(param_1 + 8) == 0))
    goto LAB_14262eff6;
    iVar2 = FUN_14262c610(param_2);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
    iVar3 = FUN_14262c610(param_2);
    if (iVar2 == iVar3) goto LAB_14262eff6;
    param_3 = param_3 + 0x50;
    lVar4 = *(longlong *)(param_1 + 8);
  }
  else {
    if ((((*(byte *)(param_3 + 0x98) & 1) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
       (cVar1 = FUN_14262f010(*(undefined8 *)(param_1 + 8),param_3 + 0x50), cVar1 == '\0'))
    goto LAB_14262eff6;
    iVar2 = FUN_14262c610(param_2);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),param_2,param_3,param_4);
    iVar3 = FUN_14262c610(param_2);
    if (iVar2 == iVar3) goto LAB_14262eff6;
    param_3 = param_3 + 0x90;
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  FUN_1424a7060(local_70,1,*(undefined8 *)(lVar4 + 0x38),0xffffffff);
  FUN_1424a7ca0(param_3,local_70);
  FUN_140859a90(local_70);
LAB_14262eff6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 14262f010 FUN_14262f010 body=163 status=ok
// SIG undefined FUN_14262f010(void)

bool FUN_14262f010(longlong param_1,longlong param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_60 [8];
  ushort local_58;
  int local_54;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (param_1 == 0) {
    bVar4 = (bool)(*(byte *)(param_2 + 8) & 1);
  }
  else {
    FUN_1424a7060(local_60,1,*(undefined8 *)(param_1 + 0x38),0xffffffff);
    if ((local_58 & 1) == 0) {
      if (-1 < (short)local_58) {
        local_54 = (int)(short)local_58 >> 5;
      }
      sVar1 = *(short *)(param_2 + 8);
      if (sVar1 < 0) {
        iVar3 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar3 = (int)sVar1 >> 5;
      }
      bVar4 = false;
      if ((((int)sVar1 & 1U) == 0) && (local_54 == iVar3)) {
        cVar2 = FUN_1412ae090(local_60,param_2);
        bVar4 = cVar2 != '\0';
      }
    }
    else {
      bVar4 = (bool)(*(byte *)(param_2 + 8) & 1);
    }
    FUN_140859a90(local_60);
  }
  return bVar4;
}



// FUNCTION 14262f0c0 Unwind@14262f0c0 body=34 status=ok
// SIG undefined Unwind@14262f0c0(void)

void Unwind_14262f0c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14262f0f0 FUN_14262f0f0 body=75 status=ok
// SIG undefined FUN_14262f0f0(void)

undefined8 FUN_14262f0f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014262f12f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return uVar3;
}



// FUNCTION 14262f140 FUN_14262f140 body=239 status=ok
// SIG undefined FUN_14262f140(void)

void FUN_14262f140(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_98 [40];
  undefined **local_70;
  undefined2 local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_14262f010(*(undefined8 *)(param_1 + 8),param_2 + 0x50);
  if (cVar2 != '\0') {
    cVar2 = FUN_14262f010(*(undefined8 *)(param_1 + 0x10),param_2 + 0x90);
    if (cVar2 != '\0') {
      if ((*(byte *)(param_2 + 0x58) & 1) != 0) {
        local_70 = &PTR_FUN_149e18960;
        local_68 = 2;
        FUN_1424a7ca0(param_2 + 0x50,&local_70);
        FUN_140859a90(&local_70);
      }
      if ((*(byte *)(param_2 + 0x98) & 1) != 0) {
        local_70 = &PTR_FUN_149e18960;
        local_68 = 2;
        FUN_1424a7ca0(param_2 + 0x90,&local_70);
        FUN_140859a90(&local_70);
      }
      *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) | *(uint *)(param_1 + 0x18);
      plVar1 = *(longlong **)(param_1 + 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
      }
      plVar1 = *(longlong **)(param_1 + 0x10);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 14262f240 FUN_14262f240 body=462 status=ok
// SIG undefined FUN_14262f240(void)

undefined8 FUN_14262f240(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  undefined1 local_2a8 [64];
  undefined1 local_268 [64];
  undefined1 local_228 [64];
  undefined1 local_1e8 [64];
  undefined1 local_1a8 [64];
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  undefined1 local_e8 [64];
  undefined1 local_a8 [64];
  undefined1 local_68 [64];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_1424a6c90(local_2a8,&DAT_149c4ff70);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_1424a6c90(local_a8,L"null");
  }
  else {
    FUN_1424a7060(local_a8,1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),0xffffffff);
  }
  FUN_1424a6c90(local_1e8,&DAT_1499ecf6e);
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_1424a6c90(local_68,L"null");
  }
  else {
    FUN_1424a7060(local_68,1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38),0xffffffff);
  }
  pwVar2 = L":negative ";
  if ((uVar1 & 1) == 0) {
    pwVar2 = L" ";
  }
  FUN_1424a6c90(local_128,pwVar2);
  FUN_1424a6c90(local_e8,L"<Affix");
  FUN_1424a66c0(local_168,local_e8,local_128);
  FUN_1424a66c0(local_1a8,local_168,local_68);
  FUN_1424a66c0(local_228,local_1a8,local_1e8);
  FUN_1424a66c0(local_268,local_228,local_a8);
  FUN_1424a66c0(param_2,local_268,local_2a8);
  FUN_140859a90(local_268);
  FUN_140859a90(local_228);
  FUN_140859a90(local_1a8);
  FUN_140859a90(local_168);
  FUN_140859a90(local_e8);
  FUN_140859a90(local_128);
  FUN_140859a90(local_68);
  FUN_140859a90(local_1e8);
  FUN_140859a90(local_a8);
  FUN_140859a90(local_2a8);
  return param_2;
}



// FUNCTION 14262f410 Unwind@14262f410 body=39 status=ok
// SIG undefined Unwind@14262f410(void)

void Unwind_14262f410(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 14262f440 Unwind@14262f440 body=39 status=ok
// SIG undefined Unwind@14262f440(void)

void Unwind_14262f440(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa0);
  return;
}



// FUNCTION 14262f470 Unwind@14262f470 body=42 status=ok
// SIG undefined Unwind@14262f470(void)

void Unwind_14262f470(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x120);
  return;
}



// FUNCTION 14262f4a0 Unwind@14262f4a0 body=42 status=ok
// SIG undefined Unwind@14262f4a0(void)

void Unwind_14262f4a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x160);
  return;
}



// FUNCTION 14262f4d0 Unwind@14262f4d0 body=42 status=ok
// SIG undefined Unwind@14262f4d0(void)

void Unwind_14262f4d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1e0);
  return;
}



// FUNCTION 14262f500 Unwind@14262f500 body=42 status=ok
// SIG undefined Unwind@14262f500(void)

void Unwind_14262f500(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1a0);
  return;
}



// FUNCTION 14262f530 Unwind@14262f530 body=42 status=ok
// SIG undefined Unwind@14262f530(void)

void Unwind_14262f530(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x260);
  return;
}



// FUNCTION 14262f560 Unwind@14262f560 body=39 status=ok
// SIG undefined Unwind@14262f560(void)

void Unwind_14262f560(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xe0);
  return;
}



// FUNCTION 14262f590 Unwind@14262f590 body=42 status=ok
// SIG undefined Unwind@14262f590(void)

void Unwind_14262f590(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x220);
  return;
}



// FUNCTION 14262f5c0 Unwind@14262f5c0 body=39 status=ok
// SIG undefined Unwind@14262f5c0(void)

void Unwind_14262f5c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 14262f5f0 FUN_14262f5f0 body=77 status=ok
// SIG undefined FUN_14262f5f0(void)

undefined8 * FUN_14262f5f0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::AffixPatternMatcherBuilder::vftable;
  param_1[1] = icu_64::numparse::impl::AffixPatternMatcherBuilder::vftable;
  if (*(char *)((longlong)param_1 + 0x1c) != '\0') {
    FUN_1424da110(param_1[2]);
  }
  FUN_142572bb0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14262f640 FUN_14262f640 body=78 status=ok
// SIG undefined FUN_14262f640(void)

undefined8 * FUN_14262f640(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -1;
  param_1[-1] = icu_64::numparse::impl::AffixPatternMatcherBuilder::vftable;
  *param_1 = icu_64::numparse::impl::AffixPatternMatcherBuilder::vftable;
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    FUN_1424da110(param_1[1]);
  }
  FUN_142572bb0(puVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 14262f690 FUN_14262f690 body=38 status=ok
// SIG undefined FUN_14262f690(void)

undefined8 FUN_14262f690(undefined8 param_1,int param_2)

{
  FUN_1425716f0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14262f6c0 FUN_14262f6c0 body=1058 status=ok
// SIG undefined FUN_14262f6c0(void)

undefined8 * FUN_14262f6c0(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 local_c0 [64];
  undefined8 *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = icu_64::numparse::impl::DecimalMatcher::vftable;
  local_80 = param_1 + 2;
  param_1[2] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 3) = 2;
  local_60 = param_1 + 10;
  param_1[10] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xb) = 2;
  local_70 = param_1 + 0x16;
  local_78 = param_1 + 0x17;
  local_68 = param_1 + 0x18;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  bVar8 = (byte)param_4;
  local_50 = param_1;
  if ((param_4 & 2) == 0) {
    FUN_1424a7c80(local_80,param_2 + 0x48);
    FUN_1424a7c80(local_60,param_2 + 8);
  }
  else {
    FUN_1424a7c80(local_80,param_2 + 0x448);
    FUN_1424a7c80(local_60,param_2 + 0x288);
  }
  uVar5 = FUN_1425eaea0(10 - (uint)((param_4 & 4) == 0));
  local_50[0x12] = uVar5;
  FUN_1424a6be0(local_c0,local_60);
  uVar9 = param_4 >> 1 & 2;
  iVar3 = FUN_1425eb500(local_c0,uVar9 + 3,uVar9 | 4);
  if (iVar3 < 0) {
    if (*(ushort *)(local_50 + 0xb) < 0x20) {
      uVar5 = FUN_1425eaea0(0);
      local_50[0x13] = uVar5;
    }
    else {
      local_58 = thunk_FUN_1424da030(200);
      if (local_58 != 0) {
        FUN_142511900(local_58);
      }
      uVar4 = FUN_1424a8030(local_60,0);
      lVar11 = local_58;
      FUN_142513960(local_58,uVar4);
      FUN_1425151b0(lVar11);
      local_50[0x13] = lVar11;
      lVar7 = local_50[0x16];
      if (lVar7 != 0) {
        FUN_1425121d0(lVar7);
        FUN_1401773f0(lVar7);
      }
      *local_70 = lVar11;
    }
    local_58 = thunk_FUN_1424da030(200);
    FUN_142511900(local_58);
    lVar11 = local_58;
    FUN_142513300(local_58,local_50[0x12]);
    FUN_142513300(lVar11,local_50[0x13]);
    FUN_1425151b0(lVar11);
    local_50[0x14] = lVar11;
    lVar7 = local_50[0x17];
    if (lVar7 != 0) {
      FUN_1425121d0(lVar7);
      FUN_1401773f0(lVar7);
    }
    *local_78 = lVar11;
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1425eaea0(iVar3);
    local_50[0x13] = uVar5;
    local_50[0x14] = local_50[0x12];
    uVar5 = FUN_1425eaea0(((param_4 & 4) == 0) + '\x16');
  }
  local_50[0x15] = uVar5;
  iVar3 = *(int *)(param_2 + 0x748);
  if (((iVar3 == -1) || (cVar1 = FUN_1424d87b0(iVar3), cVar1 == '\0')) ||
     (iVar3 = FUN_1424d9020(iVar3,10), iVar3 != 0)) {
    puVar6 = (undefined8 *)thunk_FUN_1424da030(0x288);
    if (puVar6 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      *puVar6 = 10;
      puVar10 = puVar6 + 1;
      puVar6[1] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar6 + 2) = 2;
      puVar6[9] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar6 + 10) = 2;
      puVar6[0x11] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar6 + 0x12) = 2;
      puVar6[0x19] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar6 + 0x1a) = 2;
      puVar6[0x21] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar6 + 0x22) = 2;
      puVar6[0x29] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar6 + 0x2a) = 2;
      puVar6[0x31] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar6 + 0x32) = 2;
      puVar6[0x39] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar6 + 0x3a) = 2;
      puVar6[0x41] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar6 + 0x42) = 2;
      puVar6[0x49] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar6 + 0x4a) = 2;
    }
    lVar7 = *local_68;
    if (lVar7 != 0) {
      if (*(longlong *)(lVar7 + -8) != 0) {
        lVar11 = *(longlong *)(lVar7 + -8) << 6;
        do {
          FUN_140859a90(lVar7 + -0x40 + lVar11);
          lVar11 = lVar11 + -0x40;
        } while (lVar11 != 0);
      }
      FUN_1424b70c0(lVar7 + -8);
    }
    *local_68 = (longlong)puVar10;
    uVar9 = 0;
    do {
      lVar7 = (ulonglong)uVar9 * 0x40 + 0x448 + param_2;
      if (uVar9 == 0) {
        lVar7 = param_2 + 0x108;
      }
      FUN_1424a7c80(puVar10 + (ulonglong)uVar9 * 8,lVar7);
      uVar9 = uVar9 + 1;
    } while (uVar9 < 10);
  }
  *(byte *)(local_50 + 1) = bVar8 >> 3 & 1;
  *(byte *)((longlong)local_50 + 9) = bVar8 >> 5 & 1;
  *(byte *)((longlong)local_50 + 10) = bVar8 >> 4 & 1;
  uVar2 = FUN_14262b730(param_3);
  *(undefined2 *)((longlong)local_50 + 0xc) = uVar2;
  uVar2 = FUN_14262b740(param_3);
  *(undefined2 *)((longlong)local_50 + 0xe) = uVar2;
  return local_50;
}



// FUNCTION 14262faf0 Unwind@14262faf0 body=55 status=ok
// SIG undefined Unwind@14262faf0(void)

void Unwind_14262faf0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 14262fb30 Unwind@14262fb30 body=100 status=ok
// SIG undefined Unwind@14262fb30(void)

void Unwind_14262fb30(undefined8 param_1,longlong param_2)

{
  FUN_14262fbe0(*(undefined8 *)(param_2 + 0x80));
  FUN_14262fc40(*(undefined8 *)(param_2 + 0x70));
  FUN_14262fc40(*(undefined8 *)(param_2 + 0x78));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x88));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x68));
  FUN_1425716f0(*(undefined8 *)(param_2 + 0x98));
  return;
}



// FUNCTION 14262fba0 Unwind@14262fba0 body=55 status=ok
// SIG undefined Unwind@14262fba0(void)

void Unwind_14262fba0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 14262fbe0 FUN_14262fbe0 body=87 status=ok
// SIG undefined FUN_14262fbe0(void)

void FUN_14262fbe0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
    return;
  }
  return;
}



// FUNCTION 14262fc40 FUN_14262fc40 body=41 status=ok
// SIG undefined FUN_14262fc40(void)

void FUN_14262fc40(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 14262fc70 FUN_14262fc70 body=18 status=ok
// SIG undefined FUN_14262fc70(void)

void FUN_14262fc70(void)

{
  FUN_14262fc90();
  return;
}



// FUNCTION 14262fc90 FUN_14262fc90 body=2495 status=ok
// SIG undefined FUN_14262fc90(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14262fc90(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  ulonglong unaff_RDI;
  undefined7 uVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 local_1a0 [64];
  undefined **local_160;
  ushort local_158;
  int local_154;
  undefined **local_120;
  ushort local_118;
  int local_114;
  undefined1 local_e0 [8];
  char local_d8;
  longlong local_98;
  longlong local_90;
  int local_84;
  int local_80;
  int local_7c;
  longlong local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  undefined8 local_60;
  int local_54;
  char local_4d;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = param_2;
  cVar2 = FUN_14256f8f0(param_3);
  if ((param_4 == '\0') && (cVar2 != '\0')) {
    uVar10 = 0;
    goto LAB_14263060a;
  }
  local_78 = param_3;
  local_4d = param_4;
  local_7c = FUN_14262c610(local_60);
  FUN_142537d10(local_e0);
  local_d8 = '\x01';
  local_160 = &PTR_FUN_149e18960;
  local_158 = 2;
  local_120 = &PTR_FUN_149e18960;
  local_118 = 2;
  FUN_1424a7130(&local_160);
  FUN_1424a7130(&local_120);
  local_84 = (int)local_4d;
  local_98 = param_1 + 0x50;
  local_90 = param_1 + 0x10;
  local_54 = 0;
  local_64 = 0xffffffff;
  local_68 = -1;
  local_70 = 0xffffffff;
  local_6c = 0;
  local_80 = 0;
  bVar14 = false;
LAB_14262fd9a:
  local_4c = 0;
LAB_14262fda4:
  iVar3 = FUN_14262c780(local_60);
  if (iVar3 < 1) goto LAB_1426303c9;
  uVar4 = FUN_14262c6d0(local_60);
  unaff_RDI = (ulonglong)uVar4;
  cVar2 = FUN_1424d87b0(uVar4);
  if (cVar2 == '\0') {
LAB_14262fe10:
    uVar10 = 0;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      bVar14 = false;
      do {
        if (9 < (uint)uVar10) goto LAB_14262ff10;
        lVar7 = *(longlong *)(param_1 + 0xc0);
        lVar12 = uVar10 * 0x40;
        if (0x1f < *(ushort *)(lVar7 + 8 + lVar12)) {
          iVar3 = FUN_14262caa0(local_60,lVar7 + lVar12);
          sVar1 = *(short *)(lVar7 + lVar12 + 8);
          if (sVar1 < 0) {
            iVar5 = *(int *)(lVar7 + 0xc + lVar12);
          }
          else {
            iVar5 = (int)sVar1 >> 5;
          }
          if (iVar3 == iVar5) goto LAB_14262feb7;
          bVar13 = !bVar14;
          bVar14 = true;
          if (bVar13) {
            iVar5 = FUN_14262c780(local_60);
            bVar14 = iVar3 == iVar5;
          }
        }
        uVar10 = (ulonglong)((uint)uVar10 + 1);
      } while( true );
    }
    bVar14 = false;
  }
  else {
    FUN_14262c630(local_60,2 - (uint)(uVar4 < 0x10000));
    uVar4 = FUN_1424d9020(uVar4,10);
    uVar10 = (ulonglong)uVar4;
    if ((char)uVar4 == -1) goto LAB_14262fe10;
    bVar14 = false;
    if (-1 < (char)uVar4) goto LAB_14262fec6;
  }
LAB_14262ff10:
  bVar13 = false;
  if (((local_118 & 1) != 0) && (0x1f < *(ushort *)(param_1 + 0x58))) {
    iVar3 = FUN_14262caa0(local_60,local_98);
    bVar13 = bVar14 == false;
    bVar14 = true;
    if (bVar13) {
      iVar5 = FUN_14262c780(local_60);
      bVar14 = iVar3 == iVar5;
    }
    if (*(short *)(param_1 + 0x58) < 0) {
      iVar5 = *(int *)(param_1 + 0x5c);
    }
    else {
      iVar5 = (int)*(short *)(param_1 + 0x58) >> 5;
    }
    if (iVar3 == iVar5) {
      bVar13 = true;
      FUN_1424a7c80(&local_120,local_98);
    }
    else {
      bVar13 = false;
    }
  }
  uVar4 = (uint)local_158;
  if ((local_158 & 1) != 0) {
    bVar15 = false;
    bVar16 = false;
    if (*(char *)(param_1 + 9) == '\0') goto LAB_142630009;
LAB_142630070:
    if (bVar15) {
      bVar16 = true;
      bVar15 = false;
      cVar2 = *(char *)(param_1 + 9);
    }
    else {
      bVar15 = true;
      if ((local_118 & 1) != 0) {
        cVar2 = FUN_142512880(*(undefined8 *)(param_1 + 0x98),unaff_RDI);
        if (cVar2 == '\0') {
          bVar16 = false;
        }
        else {
          FUN_1424a6c30(local_1a0,unaff_RDI);
          FUN_1424a7ca0(&local_120,local_1a0);
          FUN_140859a90(local_1a0);
          bVar15 = true;
          bVar16 = false;
          bVar13 = true;
        }
        goto LAB_14263010e;
      }
      bVar16 = false;
      cVar2 = *(char *)(param_1 + 9);
    }
    if (cVar2 == '\0') goto LAB_14263011c;
LAB_142630180:
    bVar13 = !bVar13;
    if (!(bool)(bVar15 & bVar13)) goto LAB_14263018e;
LAB_142630362:
    uVar4 = local_4c;
    if (local_54 != 2) goto LAB_1426303d6;
    goto LAB_14263049d;
  }
  iVar3 = FUN_14262caa0(local_60,&local_160);
  bVar15 = bVar14 == false;
  bVar14 = true;
  if (bVar15) {
    iVar5 = FUN_14262c780(local_60);
    bVar14 = iVar3 == iVar5;
  }
  uVar4 = (uint)(short)local_158;
  iVar5 = local_154;
  if (-1 < (short)local_158) {
    iVar5 = (int)uVar4 >> 5;
  }
  bVar15 = iVar3 == iVar5;
  bVar16 = bVar15;
  if (*(char *)(param_1 + 9) != '\0') goto LAB_142630070;
LAB_142630009:
  bVar15 = bVar16;
  if ((((uVar4 & 1) == 0) || ((local_118 & 1) == 0)) || (*(ushort *)(param_1 + 0x18) < 0x20))
  goto LAB_142630070;
  iVar3 = FUN_14262caa0(local_60,local_90);
  bVar16 = bVar14 == false;
  bVar14 = true;
  if (bVar16) {
    iVar5 = FUN_14262c780(local_60);
    bVar14 = iVar3 == iVar5;
  }
  if (*(short *)(param_1 + 0x18) < 0) {
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  else {
    iVar5 = (int)*(short *)(param_1 + 0x18) >> 5;
  }
  if (iVar3 != iVar5) goto LAB_142630070;
  FUN_1424a7c80(&local_160,local_90);
  bVar16 = true;
  bVar15 = false;
LAB_14263010e:
  if (*(char *)(param_1 + 9) != '\0') goto LAB_142630180;
LAB_14263011c:
  if ((((local_158 & 1) == 0) || ((local_118 & 1) == 0)) ||
     (cVar2 = FUN_142512880(*(undefined8 *)(param_1 + 0x90),unaff_RDI), cVar2 == '\0'))
  goto LAB_142630180;
  FUN_1424a6c30(local_1a0,unaff_RDI);
  FUN_1424a7ca0(&local_160,local_1a0);
  FUN_140859a90(local_1a0);
  bVar13 = !bVar13;
  bVar16 = true;
  bVar15 = false;
LAB_14263018e:
  if ((!bVar13) && (*(char *)(param_1 + 10) != '\0')) goto LAB_142630362;
  if ((bool)(local_54 == 2 & (bVar15 ^ 1U))) {
    cVar2 = *(char *)(param_1 + 8);
    iVar3 = 2;
    uVar4 = local_70;
    iVar5 = local_68;
    uVar6 = local_64;
    goto joined_r0x000142630391;
  }
  cVar2 = *(char *)(param_1 + 8);
  if (cVar2 == '\0') {
    bVar8 = local_64 != 1 || local_68 != 1;
    bVar17 = local_4c != 1 || local_54 != 1;
  }
  else {
    if (local_68 == 1) {
      bVar8 = local_64 == (int)*(short *)(param_1 + 0xe);
    }
    else {
      bVar8 = true;
      if (local_68 == 0) {
        bVar8 = (int)local_64 <= (int)*(short *)(param_1 + 0xe) && local_64 != 0;
      }
    }
    bVar17 = true;
    if (local_54 == 1) {
      bVar17 = local_4c == (int)*(short *)(param_1 + 0xc);
    }
  }
  if ((!bVar8) || (!(bool)(bVar17 | bVar13))) {
    if ((!bVar16 || local_4c != 0) && (cVar2 != '\0')) {
      FUN_142537f70(local_e0);
      local_d8 = '\x01';
    }
LAB_1426303c9:
    uVar4 = local_4c;
    if (local_54 == 2) goto LAB_14263049d;
    goto LAB_1426303d6;
  }
  if (((cVar2 == '\0') || (local_4c != 0)) || (local_54 != 1)) {
    if (!bVar13) {
      local_54 = -1;
    }
    uVar4 = local_6c;
    if (local_4c != 0) {
      uVar4 = FUN_14262c610(local_60);
    }
    uVar6 = local_4c;
    unaff_RDI = (ulonglong)uVar4;
    if (bVar15) {
      iVar3 = local_114;
      if (-1 < (short)local_118) {
        iVar3 = (int)(short)local_118 >> 5;
      }
      FUN_14262c630(local_60,iVar3);
      local_68 = local_54;
      local_70 = local_6c;
      local_54 = 2;
      local_6c = uVar4;
      local_64 = uVar6;
    }
    else {
      iVar3 = local_154;
      if (-1 < (short)local_158) {
        iVar3 = (int)(short)local_158 >> 5;
      }
      FUN_14262c630(local_60,iVar3);
      local_68 = local_54;
      local_70 = local_6c;
      local_54 = 1;
      local_6c = uVar4;
      local_64 = uVar6;
    }
    goto LAB_14262fd9a;
  }
  local_54 = 1;
  uVar4 = 0;
LAB_1426303d6:
  if (uVar4 == 0) {
    FUN_14262c620(local_60,local_6c);
    bVar14 = true;
    uVar4 = 0xffffffff;
    iVar5 = 0;
    uVar6 = 1;
    cVar2 = *(char *)(param_1 + 8);
    iVar3 = local_68;
    local_6c = local_70;
    local_4c = local_64;
joined_r0x000142630391:
    if (cVar2 != '\0') goto LAB_14263042d;
LAB_1426304c4:
    if ((uVar6 == 1) && (iVar5 == 1)) {
      FUN_14262c620(local_60,uVar4);
      if (local_4c == 0xffffffff) {
        uVar9 = true;
      }
      else {
        uVar4 = ~local_4c;
LAB_14263051b:
        FUN_142538840(local_e0,uVar4);
        uVar9 = true;
        FUN_14253a200(local_e0);
      }
    }
    else {
      uVar9 = true;
      if ((iVar5 != 0 || uVar6 != 0) && ((local_4c == 1 && (iVar3 == 1)))) {
        FUN_14262c620(local_60,local_6c);
        uVar4 = 0xffffffff;
        bVar14 = true;
        goto LAB_14263051b;
      }
    }
joined_r0x000142630532:
    if (iVar3 != 2) {
LAB_14263053e:
      if (!(bool)uVar9) goto LAB_1426305be;
    }
    if (local_d8 != '\0') goto LAB_1426305c2;
    FUN_142538840(local_e0,-local_80);
    if ((local_4d == '\0') || (iVar3 = FUN_14262c610(local_60), iVar3 == local_7c)) {
      FUN_142537dc0(local_78,local_e0);
    }
    else {
      cVar2 = FUN_142539e00(local_e0,0);
      if (((cVar2 == '\0') || (lVar7 = FUN_142538cc0(local_e0,0), 0x7fffffff < lVar7)) ||
         (cVar2 = FUN_142538840(local_78,(int)lVar7 * local_84), cVar2 != '\0')) {
        if (local_4d == -1) {
          FUN_142537f70(local_78);
        }
        else {
          *(undefined1 *)(local_78 + 8) = 1;
          *(byte *)(local_78 + 0x4c) = *(byte *)(local_78 + 0x4c) | 0x80;
        }
      }
    }
    if ((local_118 & 1) == 0) {
      *(byte *)(local_78 + 0x4c) = *(byte *)(local_78 + 0x4c) | 0x20;
    }
    FUN_14256f890(local_78,local_60);
    iVar3 = FUN_14262c780(local_60);
    uVar10 = CONCAT71((int7)(unaff_RDI >> 8),iVar3 == 0 | bVar14);
  }
  else {
LAB_14263049d:
    iVar5 = local_68;
    iVar3 = local_54;
    uVar6 = local_64;
    local_4c = uVar4;
    uVar4 = local_70;
    if (*(char *)(param_1 + 8) == '\0') goto LAB_1426304c4;
LAB_14263042d:
    if (iVar5 == 1) {
      uVar9 = uVar6 == (int)*(short *)(param_1 + 0xe);
    }
    else {
      uVar9 = true;
      if (iVar5 == 0) {
        uVar9 = (int)uVar6 <= (int)*(short *)(param_1 + 0xe) && uVar6 != 0;
      }
    }
    if (iVar3 != 1) goto joined_r0x000142630532;
    if (local_4c == (int)*(short *)(param_1 + 0xc)) goto LAB_14263053e;
LAB_1426305be:
    local_d8 = '\x01';
LAB_1426305c2:
    uVar11 = (undefined7)(unaff_RDI >> 8);
    uVar10 = CONCAT71(uVar11,1);
    if (bVar14 == false) {
      iVar3 = FUN_14262c780(local_60);
      uVar10 = CONCAT71(uVar11,iVar3 == 0);
    }
    FUN_14262c620(local_60,local_7c);
  }
  FUN_140859a90(&local_120);
  FUN_140859a90(&local_160);
  FUN_142537d50(local_e0);
LAB_14263060a:
  return uVar10 & 0xffffff01;
LAB_14262feb7:
  FUN_14262c630(local_60,iVar3);
LAB_14262fec6:
  if (local_d8 != '\0') {
    local_d8 = '\0';
    FUN_142537f70(local_e0);
  }
  FUN_14253af20(local_e0,uVar10,0,1);
  local_4c = local_4c + 1;
  local_80 = local_80 + (uint)((local_118 & 1) == 0);
  goto LAB_14262fda4;
}



// FUNCTION 1426306b0 Unwind@1426306b0 body=73 status=ok
// SIG undefined Unwind@1426306b0(void)

void Unwind_1426306b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa8);
  FUN_140859a90(param_2 + 0x68);
  FUN_142537d50(param_2 + 0xe8);
  return;
}



// FUNCTION 142630700 FUN_142630700 body=377 status=ok
// SIG undefined FUN_142630700(void)

ulonglong FUN_142630700(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  
  if ((*(longlong *)(param_1 + 0xc0) == 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    uVar3 = FUN_14262c900(param_2);
    return uVar3;
  }
  cVar1 = FUN_14262c900(param_2,*(undefined8 *)(param_1 + 0xa0));
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 == '\0') {
    uVar2 = FUN_14262c6d0(param_2);
    cVar1 = FUN_1424d87b0(uVar2);
    if (cVar1 == '\0') {
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        uVar3 = 0;
      }
      else {
        cVar1 = FUN_14262c9a0(param_2);
        if (cVar1 == '\0') {
          cVar1 = FUN_14262c9a0(param_2,*(longlong *)(param_1 + 0xc0) + 0x40);
          if (cVar1 == '\0') {
            cVar1 = FUN_14262c9a0(param_2,*(longlong *)(param_1 + 0xc0) + 0x80);
            if (cVar1 == '\0') {
              cVar1 = FUN_14262c9a0(param_2,*(longlong *)(param_1 + 0xc0) + 0xc0);
              if (cVar1 == '\0') {
                cVar1 = FUN_14262c9a0(param_2,*(longlong *)(param_1 + 0xc0) + 0x100);
                if (cVar1 == '\0') {
                  cVar1 = FUN_14262c9a0(param_2,*(longlong *)(param_1 + 0xc0) + 0x140);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_14262c9a0(param_2,*(longlong *)(param_1 + 0xc0) + 0x180);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_14262c9a0(param_2,*(longlong *)(param_1 + 0xc0) + 0x1c0);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_14262c9a0(param_2,*(longlong *)(param_1 + 0xc0) + 0x200);
                        if (cVar1 == '\0') {
                          uVar3 = FUN_14262c9a0(param_2,*(longlong *)(param_1 + 0xc0) + 0x240);
                          return uVar3;
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
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 142630880 FUN_142630880 body=32 status=ok
// SIG undefined FUN_142630880(void)

undefined8 FUN_142630880(undefined8 param_1,undefined8 param_2)

{
  FUN_1424a6c90(param_2,L"<Decimal>");
  return param_2;
}



// FUNCTION 1426308a0 FUN_1426308a0 body=276 status=ok
// SIG undefined FUN_1426308a0(void)

undefined8 *
FUN_1426308a0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = icu_64::numparse::impl::ScientificMatcher::vftable;
  puVar3 = param_1 + 1;
  FUN_1424a6be0(puVar3,param_2 + 0x2c8,param_3,param_4,puVar3);
  FUN_14262f6c0(param_1 + 9,param_2,param_3,0x30,puVar3,param_1 + 9);
  param_1[0x22] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x23) = 2;
  param_1[0x2a] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2b) = 2;
  uVar2 = FUN_1425eaea0(0xb);
  cVar1 = FUN_142512960(uVar2,param_2 + 0x188);
  if (cVar1 == '\0') {
    FUN_1424a7c80(param_1 + 0x22,param_2 + 0x188);
  }
  else {
    FUN_1424a7130(param_1 + 0x22);
  }
  uVar2 = FUN_1425eaea0(0xc);
  cVar1 = FUN_142512960(uVar2,param_2 + 0x1c8);
  if (cVar1 == '\0') {
    FUN_1424a7c80(param_1 + 0x2a,param_2 + 0x1c8);
  }
  else {
    FUN_1424a7130(param_1 + 0x2a);
  }
  return param_1;
}



// FUNCTION 1426309c0 Unwind@1426309c0 body=52 status=ok
// SIG undefined Unwind@1426309c0(void)

void Unwind_1426309c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_142570130(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142630a00 Unwind@142630a00 body=34 status=ok
// SIG undefined Unwind@142630a00(void)

void Unwind_142630a00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142630a30 Unwind@142630a30 body=34 status=ok
// SIG undefined Unwind@142630a30(void)

void Unwind_142630a30(undefined8 param_1,longlong param_2)

{
  FUN_1425716f0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 142630a60 FUN_142630a60 body=490 status=ok
// SIG undefined FUN_142630a60(void)

ulonglong FUN_142630a60(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  uint3 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint7 uVar11;
  ulonglong uVar10;
  
  cVar3 = FUN_14256f8f0(param_3);
  if ((cVar3 == '\0') || ((*(byte *)(param_3 + 0x4c) & 8) != 0)) {
    return 0;
  }
  iVar4 = FUN_14262caa0(param_2,param_1 + 8);
  if (*(short *)(param_1 + 0x10) < 0) {
    iVar6 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar6 = (int)*(short *)(param_1 + 0x10) >> 5;
  }
  iVar5 = FUN_14262c780(param_2);
  uVar2 = (uint3)((uint)iVar6 >> 8);
  uVar11 = (uint7)uVar2;
  if (iVar4 != iVar6) {
    return (ulonglong)CONCAT31(uVar2,iVar4 == iVar5);
  }
  uVar10 = CONCAT71(uVar11,1);
  if (iVar5 == iVar4) {
    return uVar10;
  }
  FUN_14262c630(param_2,iVar4);
  uVar8 = FUN_1425eaea0(0xb);
  cVar3 = FUN_14262c900(param_2,uVar8);
  if (cVar3 == '\0') {
    uVar8 = FUN_1425eaea0(0xc);
    cVar3 = FUN_14262c900(param_2,uVar8);
    if (cVar3 == '\0') {
      cVar3 = FUN_14262c9a0(param_2,param_1 + 0x110);
      if (cVar3 == '\0') {
        cVar3 = FUN_14262c9a0(param_2,param_1 + 0x150);
        uVar9 = (undefined4)CONCAT71(uVar11,1);
        if (cVar3 != '\0') {
          iVar6 = FUN_14262caa0(param_2,param_1 + 0x150);
          if (*(short *)(param_1 + 0x158) < 0) {
            iVar5 = *(int *)(param_1 + 0x15c);
          }
          else {
            iVar5 = (int)*(short *)(param_1 + 0x158) >> 5;
          }
          if (iVar6 != iVar5) {
            FUN_14262c630(param_2,-iVar4);
            return CONCAT71(uVar11,1);
          }
          FUN_14262c630(param_2,iVar6);
        }
      }
      else {
        iVar6 = FUN_14262caa0(param_2,param_1 + 0x110);
        if (*(short *)(param_1 + 0x118) < 0) {
          iVar5 = *(int *)(param_1 + 0x11c);
        }
        else {
          iVar5 = (int)*(short *)(param_1 + 0x118) >> 5;
        }
        if (iVar6 != iVar5) goto LAB_142630b74;
        FUN_14262c630(param_2,iVar6);
        uVar9 = (undefined4)CONCAT71(uVar11,0xff);
      }
    }
    else {
      FUN_14262c640(param_2);
      uVar9 = (undefined4)CONCAT71(uVar11,1);
    }
  }
  else {
    FUN_14262c640(param_2);
    uVar9 = (undefined4)CONCAT71(uVar11,0xff);
  }
  uVar1 = *(undefined1 *)(param_3 + 8);
  *(undefined1 *)(param_3 + 8) = 0;
  iVar6 = FUN_14262c610(param_2);
  uVar7 = FUN_14262fc90(param_1 + 0x48,param_2,param_3,uVar9,param_4);
  uVar10 = (ulonglong)uVar7;
  *(undefined1 *)(param_3 + 8) = uVar1;
  iVar5 = FUN_14262c610(param_2);
  if (iVar5 != iVar6) {
    *(byte *)(param_3 + 0x4c) = *(byte *)(param_3 + 0x4c) | 8;
    return uVar10;
  }
LAB_142630b74:
  FUN_14262c630(param_2,-iVar4);
  return uVar10;
}



// FUNCTION 142630c50 FUN_142630c50 body=15 status=ok
// SIG undefined FUN_142630c50(void)

void FUN_142630c50(longlong param_1,undefined8 param_2)

{
  FUN_14262c9a0(param_2,param_1 + 8);
  return;
}



// FUNCTION 142630c60 FUN_142630c60 body=32 status=ok
// SIG undefined FUN_142630c60(void)

undefined8 FUN_142630c60(undefined8 param_1,undefined8 param_2)

{
  FUN_1424a6c90(param_2,L"<Scientific>");
  return param_2;
}



// FUNCTION 142630c80 FUN_142630c80 body=594 status=ok
// SIG undefined FUN_142630c80(void)

undefined8 *
FUN_142630c80(undefined8 *param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 local_148 [40];
  undefined8 local_120;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  *param_1 = icu_64::numparse::impl::CombinedCurrencyMatcher::vftable;
  local_68 = param_1 + 2;
  local_40 = param_1;
  FUN_14262bab0(param_2,local_68,param_5);
  local_60 = local_40 + 10;
  FUN_14262bb60(param_2,local_60,param_5);
  *(bool *)(local_40 + 0x12) = (param_4 & 0x2000) == 0;
  local_40[0x13] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_40 + 0x14) = 2;
  local_40[0x1b] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_40 + 0x1c) = 2;
  local_40[0x23] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_40 + 0x24) = 2;
  local_40[0x2b] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_40 + 0x2c) = 2;
  local_40[0x33] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_40 + 0x34) = 2;
  local_40[0x3b] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_40 + 0x3c) = 2;
  uVar1 = FUN_142543f40(param_3,2,0,param_5);
  local_58 = local_40 + 0x43;
  FUN_1424a6be0(local_58,uVar1);
  uVar1 = FUN_142543f40(param_3,2,1,param_5);
  local_50 = local_40 + 0x4b;
  FUN_1424a6be0(local_50,uVar1);
  FUN_1424a3ce0(local_148,param_3 + 0x750);
  local_48 = local_40 + 0x53;
  local_40[0x53] = (longlong)local_40 + 0x2a5;
  *(undefined4 *)(local_40 + 0x54) = 0x28;
  *(undefined2 *)((longlong)local_40 + 0x2a4) = 0;
  *(undefined4 *)(local_40 + 0x5a) = 0;
  FUN_142503520(local_48,local_120,0xffffffff,param_5);
  FUN_1414b3f60(local_148);
  puVar2 = (undefined4 *)FUN_14262ba00(param_2);
  *(undefined2 *)((longlong)local_40 + 0xc) = *(undefined2 *)(puVar2 + 1);
  *(undefined4 *)(local_40 + 1) = *puVar2;
  *(undefined2 *)((longlong)local_40 + 0xe) = 0;
  puVar4 = local_40;
  if (*(char *)(local_40 + 0x12) == '\0') {
    uVar3 = 0;
    do {
      FUN_14262bba0(param_2,local_148,uVar3,param_5);
      puVar4 = local_40;
      FUN_1424a7ca0(local_40 + (ulonglong)uVar3 * 8 + 0x13,local_148);
      FUN_140859a90(local_148);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 6);
  }
  return puVar4;
}



// FUNCTION 142630ee0 Unwind@142630ee0 body=78 status=ok
// SIG undefined Unwind@142630ee0(void)

void Unwind_142630ee0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x128) + 0x2a4) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x120));
  }
  FUN_1414b3f60(param_2 + 0x20);
  return;
}



// FUNCTION 142630f30 Unwind@142630f30 body=69 status=ok
// SIG undefined Unwind@142630f30(void)

void Unwind_142630f30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x128) + 0x2a4) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x120));
  }
  return;
}



// FUNCTION 142630f80 Unwind@142630f80 body=50 status=ok
// SIG undefined Unwind@142630f80(void)

void Unwind_142630f80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x118));
  return;
}



// FUNCTION 142630fc0 Unwind@142630fc0 body=50 status=ok
// SIG undefined Unwind@142630fc0(void)

void Unwind_142630fc0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142631000 Unwind@142631000 body=132 status=ok
// SIG undefined Unwind@142631000(void)

void Unwind_142631000(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x128);
  FUN_140859a90(lVar1 + 0x1d8);
  FUN_140859a90(lVar1 + 0x198);
  FUN_140859a90(lVar1 + 0x158);
  FUN_140859a90(lVar1 + 0x118);
  FUN_140859a90(lVar1 + 0xd8);
  FUN_140859a90(lVar1 + 0x98);
  FUN_140859a90(*(undefined8 *)(param_2 + 0x108));
  return;
}



// FUNCTION 142631090 Unwind@142631090 body=50 status=ok
// SIG undefined Unwind@142631090(void)

void Unwind_142631090(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x100));
  return;
}



// FUNCTION 1426310d0 Unwind@1426310d0 body=50 status=ok
// SIG undefined Unwind@1426310d0(void)

void Unwind_1426310d0(undefined8 param_1,longlong param_2)

{
  FUN_1425716f0(*(undefined8 *)(param_2 + 0x128));
  return;
}



// FUNCTION 142631110 FUN_142631110 body=327 status=ok
// SIG undefined FUN_142631110(void)

ulonglong FUN_142631110(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  undefined7 uVar7;
  
  if (*(short *)(param_3 + 0xd0) != 0) {
    uVar6 = 0;
    goto LAB_14263112b;
  }
  uVar2 = FUN_14262c610(param_2);
  cVar1 = FUN_14256f8f0(param_3);
  if ((cVar1 == '\0') || (*(ushort *)(param_1 + 0x260) < 0x20)) {
LAB_1426311b7:
    uVar5 = FUN_142631260(param_1,param_2,param_3,param_4);
    uVar6 = (ulonglong)uVar5;
  }
  else {
    iVar3 = FUN_14262caa0(param_2,param_1 + 600);
    if (*(short *)(param_1 + 0x260) < 0) {
      iVar4 = *(int *)(param_1 + 0x264);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x260) >> 5;
    }
    if (iVar3 == iVar4) {
      FUN_14262c630(param_2,iVar3);
    }
    iVar4 = FUN_14262c780(param_2);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (iVar3 != iVar4) goto LAB_1426311b7;
  }
  if (*(short *)(param_3 + 0xd0) == 0) {
    FUN_14262c620(param_2,uVar2);
  }
  else {
    cVar1 = FUN_14256f8f0(param_3);
    if ((cVar1 == '\0') && (0x1f < *(ushort *)(param_1 + 0x220))) {
      iVar3 = FUN_14262caa0(param_2,param_1 + 0x218);
      if (*(short *)(param_1 + 0x220) < 0) {
        iVar4 = *(int *)(param_1 + 0x224);
      }
      else {
        iVar4 = (int)*(short *)(param_1 + 0x220) >> 5;
      }
      if (iVar3 == iVar4) {
        FUN_14262c630(param_2,iVar3);
      }
      cVar1 = (char)uVar6;
      uVar7 = (undefined7)(uVar6 >> 8);
      uVar6 = CONCAT71(uVar7,1);
      if (cVar1 == '\0') {
        iVar4 = FUN_14262c780(param_2);
        uVar6 = CONCAT71(uVar7,iVar3 == iVar4);
      }
    }
  }
LAB_14263112b:
  return uVar6 & 0xffffffff;
}



// FUNCTION 142631260 FUN_142631260 body=989 status=ok
// SIG undefined FUN_142631260(void)

ulonglong FUN_142631260(longlong param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RBX;
  undefined7 uVar8;
  ulonglong uVar7;
  byte bVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_a8 [64];
  undefined **local_68;
  undefined8 local_60;
  int *local_58;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  iVar2 = -1;
  if (0x1f < *(ushort *)(param_1 + 0x18)) {
    iVar2 = FUN_14262cc10(param_2,param_1 + 0x10);
  }
  iVar3 = FUN_14262c780(param_2);
  bVar11 = iVar2 == iVar3;
  uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(short *)(param_1 + 0x18) < 0) {
    if (iVar2 != *(int *)(param_1 + 0x1c)) goto LAB_1426312d7;
LAB_1426313ed:
    *(undefined2 *)(param_3 + 0xd4) = *(undefined2 *)(param_1 + 0xc);
    *(undefined4 *)(param_3 + 0xd0) = *(undefined4 *)(param_1 + 8);
    *(undefined2 *)(param_3 + 0xd6) = 0;
  }
  else {
    if (iVar2 == (int)*(short *)(param_1 + 0x18) >> 5) goto LAB_1426313ed;
LAB_1426312d7:
    iVar4 = -1;
    local_58 = param_4;
    if (0x1f < *(ushort *)(param_1 + 0x58)) {
      iVar4 = FUN_14262caa0(param_2,param_1 + 0x50);
    }
    bVar11 = true;
    if (iVar2 != iVar3) {
      iVar2 = FUN_14262c780(param_2);
      bVar11 = iVar4 == iVar2;
    }
    if (*(short *)(param_1 + 0x58) < 0) {
      iVar2 = *(int *)(param_1 + 0x5c);
    }
    else {
      iVar2 = (int)*(short *)(param_1 + 0x58) >> 5;
    }
    if (iVar4 != iVar2) {
      if (*(char *)(param_1 + 0x90) == '\0') {
        iVar2 = FUN_14262caa0(param_2);
        if (*(short *)(param_1 + 0xa0) < 0) {
          iVar3 = *(int *)(param_1 + 0xa4);
        }
        else {
          iVar3 = (int)*(short *)(param_1 + 0xa0) >> 5;
        }
        iVar4 = 0;
        if (-1 < iVar3) {
          iVar4 = iVar3;
        }
        if (iVar2 != iVar3) {
          iVar4 = 0;
        }
        iVar3 = FUN_14262caa0(param_2,param_1 + 0xd8);
        if (*(short *)(param_1 + 0xe0) < 0) {
          iVar5 = *(int *)(param_1 + 0xe4);
        }
        else {
          iVar5 = (int)*(short *)(param_1 + 0xe0) >> 5;
        }
        iVar6 = iVar4;
        if (iVar4 < iVar5) {
          iVar6 = iVar5;
        }
        if (iVar3 != iVar5) {
          iVar6 = iVar4;
        }
        iVar4 = FUN_14262caa0(param_2,param_1 + 0x118);
        if (*(short *)(param_1 + 0x120) < 0) {
          iVar5 = *(int *)(param_1 + 0x124);
        }
        else {
          iVar5 = (int)*(short *)(param_1 + 0x120) >> 5;
        }
        iVar10 = iVar6;
        if (iVar6 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar4 != iVar5) {
          iVar10 = iVar6;
        }
        local_58._0_1_ = 0 < iVar2;
        iVar2 = FUN_14262caa0(param_2,param_1 + 0x158);
        if (*(short *)(param_1 + 0x160) < 0) {
          iVar5 = *(int *)(param_1 + 0x164);
        }
        else {
          iVar5 = (int)*(short *)(param_1 + 0x160) >> 5;
        }
        local_58 = (int *)CONCAT71(local_58._1_7_,(byte)local_58 | 0 < iVar3);
        iVar3 = iVar10;
        if (iVar10 < iVar5) {
          iVar3 = iVar5;
        }
        if (iVar2 != iVar5) {
          iVar3 = iVar10;
        }
        iVar5 = FUN_14262caa0(param_2,param_1 + 0x198);
        if (*(short *)(param_1 + 0x1a0) < 0) {
          iVar6 = *(int *)(param_1 + 0x1a4);
        }
        else {
          iVar6 = (int)*(short *)(param_1 + 0x1a0) >> 5;
        }
        bVar9 = (byte)local_58 | (0 < iVar4 || 0 < iVar2);
        iVar2 = iVar3;
        if (iVar3 < iVar6) {
          iVar2 = iVar6;
        }
        if (iVar5 != iVar6) {
          iVar2 = iVar3;
        }
        iVar3 = FUN_14262caa0(param_2,param_1 + 0x1d8);
        if (*(short *)(param_1 + 0x1e0) < 0) {
          iVar4 = *(int *)(param_1 + 0x1e4);
        }
        else {
          iVar4 = (int)*(short *)(param_1 + 0x1e0) >> 5;
        }
        iVar6 = iVar2;
        if (iVar2 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar3 != iVar4) {
          iVar6 = iVar2;
        }
        uVar7 = (ulonglong)(byte)(bVar9 | (0 < iVar5 || 0 < iVar3) | bVar11);
        if (0 < iVar6) {
          *(undefined2 *)(param_3 + 0xd4) = *(undefined2 *)(param_1 + 0xc);
          *(undefined4 *)(param_3 + 0xd0) = *(undefined4 *)(param_1 + 8);
          *(undefined2 *)(param_3 + 0xd6) = 0;
          FUN_14262c630(param_2);
          FUN_14256f890(param_3,param_2);
        }
      }
      else {
        FUN_14262c7f0(param_2,local_a8);
        piVar1 = local_58;
        local_68 = icu_64::ParsePosition::vftable;
        local_60 = 0xffffffff00000000;
        local_4c[0] = 0;
        FUN_14253be60(*(undefined8 *)(param_1 + 0x298),local_a8,&local_68,0,local_4c,param_3 + 0xd0,
                      local_58);
        iVar2 = local_4c[0];
        uVar7 = CONCAT71(uVar8,1);
        if (bVar11 == false) {
          iVar3 = FUN_14262c780(param_2);
          uVar7 = (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == iVar3);
        }
        if ((*piVar1 < 1) && ((int)local_60 != 0)) {
          FUN_14262c630(param_2);
          FUN_14256f890(param_3,param_2);
        }
        thunk_FUN_1424b70d0(&local_68);
        FUN_140859a90(local_a8);
      }
      goto LAB_142631455;
    }
    *(undefined2 *)(param_3 + 0xd4) = *(undefined2 *)(param_1 + 0xc);
    *(undefined4 *)(param_3 + 0xd0) = *(undefined4 *)(param_1 + 8);
    *(undefined2 *)(param_3 + 0xd6) = 0;
    iVar2 = iVar4;
  }
  uVar7 = CONCAT71(uVar8,bVar11);
  FUN_14262c630(param_2,iVar2);
  FUN_14256f890(param_3,param_2);
LAB_142631455:
  return uVar7 & 0xffffff01;
}



// FUNCTION 142631640 Unwind@142631640 body=63 status=ok
// SIG undefined Unwind@142631640(void)

void Unwind_142631640(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x80);
  FUN_140859a90(param_2 + 0x40);
  return;
}



// FUNCTION 142631680 FUN_142631680 body=3 status=ok
// SIG undefined FUN_142631680(void)

undefined1 FUN_142631680(void)

{
  return 1;
}



// FUNCTION 142631690 FUN_142631690 body=32 status=ok
// SIG undefined FUN_142631690(void)

undefined8 FUN_142631690(undefined8 param_1,undefined8 param_2)

{
  FUN_1424a6c90(param_2,L"<CombinedCurrencyMatcher>");
  return param_2;
}



// FUNCTION 1426316b0 FUN_1426316b0 body=20 status=ok
// SIG undefined FUN_1426316b0(void)

void FUN_1426316b0(undefined8 param_1,longlong param_2)

{
  if (((*(byte *)(param_2 + 0x58) & 1) != 0) || ((*(byte *)(param_2 + 0x98) & 1) != 0)) {
    *(byte *)(param_2 + 0x4d) = *(byte *)(param_2 + 0x4d) | 1;
  }
  return;
}



// FUNCTION 1426316d0 FUN_1426316d0 body=32 status=ok
// SIG undefined FUN_1426316d0(void)

undefined8 FUN_1426316d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1424a6c90(param_2,L"<ReqAffix>");
  return param_2;
}



// FUNCTION 1426316f0 FUN_1426316f0 body=16 status=ok
// SIG undefined FUN_1426316f0(void)

void FUN_1426316f0(undefined8 param_1,longlong param_2)

{
  if (*(short *)(param_2 + 0xd0) != 0) {
    return;
  }
  *(byte *)(param_2 + 0x4d) = *(byte *)(param_2 + 0x4d) | 1;
  return;
}



// FUNCTION 142631700 FUN_142631700 body=32 status=ok
// SIG undefined FUN_142631700(void)

undefined8 FUN_142631700(undefined8 param_1,undefined8 param_2)

{
  FUN_1424a6c90(param_2,L"<ReqCurrency>");
  return param_2;
}



// FUNCTION 142631720 FUN_142631720 body=17 status=ok
// SIG undefined FUN_142631720(void)

void FUN_142631720(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = icu_64::numparse::impl::RequireDecimalSeparatorValidator::vftable;
  *(undefined1 *)(param_1 + 1) = param_2;
  return;
}



// FUNCTION 142631740 FUN_142631740 body=32 status=ok
// SIG undefined FUN_142631740(void)

void FUN_142631740(longlong param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x4c) >> 5 & 1) != (uint)*(byte *)(param_1 + 8)) {
    *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) | 0x100;
  }
  return;
}



// FUNCTION 142631760 FUN_142631760 body=32 status=ok
// SIG undefined FUN_142631760(void)

undefined8 FUN_142631760(undefined8 param_1,undefined8 param_2)

{
  FUN_1424a6c90(param_2,L"<ReqDecimal>");
  return param_2;
}



// FUNCTION 142631780 FUN_142631780 body=30 status=ok
// SIG undefined FUN_142631780(void)

void FUN_142631780(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_14256f8f0(param_2);
  if (cVar1 == '\0') {
    *(byte *)(param_2 + 0x4d) = *(byte *)(param_2 + 0x4d) | 1;
  }
  return;
}



// FUNCTION 1426317a0 FUN_1426317a0 body=32 status=ok
// SIG undefined FUN_1426317a0(void)

undefined8 FUN_1426317a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1424a6c90(param_2,L"<ReqNumber>");
  return param_2;
}



// FUNCTION 1426317c0 FUN_1426317c0 body=49 status=ok
// SIG undefined FUN_1426317c0(void)

undefined8 * FUN_1426317c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = icu_64::numparse::impl::MultiplierParseHandler::vftable;
  FUN_14256d0f0(param_1 + 1);
  FUN_14256d170(param_2);
  return param_1;
}



// FUNCTION 142631800 FUN_142631800 body=16 status=ok
// SIG undefined FUN_142631800(void)

void FUN_142631800(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 8) != '\0') {
    return;
  }
  FUN_14256d4f0(param_1 + 8);
  return;
}



// FUNCTION 142631810 FUN_142631810 body=32 status=ok
// SIG undefined FUN_142631810(void)

undefined8 FUN_142631810(undefined8 param_1,undefined8 param_2)

{
  FUN_1424a6c90(param_2,L"<Scale>");
  return param_2;
}


