// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141783aa2 FUN_141783aa2 body=40 status=ok
// SIG undefined FUN_141783aa2(void)

undefined8 FUN_141783aa2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141783aca FUN_141783aca body=40 status=ok
// SIG undefined FUN_141783aca(void)

undefined8 FUN_141783aca(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141783af2 FUN_141783af2 body=40 status=ok
// SIG undefined FUN_141783af2(void)

undefined8 FUN_141783af2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141783b1a FUN_141783b1a body=637 status=ok
// SIG undefined FUN_141783b1a(void)

void FUN_141783b1a(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_58 = param_3;
  if ((param_4 & 4) == 0) {
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) &&
       (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_4 & 2) != 0)))) {
      param_4 = param_4 & 0xfffffff9 | 4;
    }
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar15;
    local_50 = DAT_14ca5ef00;
    if (DAT_14ca5ef00 != 0) {
      LOCK();
      *(int *)(DAT_14ca5ef00 + 8) = *(int *)(DAT_14ca5ef00 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14ca5eeb8;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,param_4);
    *puVar16 = &PTR_FUN_14a312640;
    uVar14 = param_5[1];
    uVar3 = param_5[2];
    uVar4 = param_5[3];
    uVar5 = param_5[4];
    uVar6 = param_5[5];
    uVar7 = param_5[6];
    uVar8 = param_5[7];
    uVar9 = param_5[8];
    uVar10 = param_5[9];
    uVar11 = param_5[10];
    uVar12 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar3;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
    *(undefined4 *)(puVar16 + 0x39) = uVar5;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
    *(undefined4 *)(puVar16 + 0x3a) = uVar7;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
    *(undefined4 *)(puVar16 + 0x3b) = uVar9;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
    *(undefined4 *)(puVar16 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  }
  else {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    uVar3 = *(undefined4 *)(param_1 + 0x660);
    local_50 = DAT_14ca5ef00;
    if (DAT_14ca5ef00 != 0) {
      LOCK();
      *(int *)(DAT_14ca5ef00 + 8) = *(int *)(DAT_14ca5ef00 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14ca5eeb8;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a312640;
    uVar14 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar6 = param_5[4];
    uVar7 = param_5[5];
    uVar8 = param_5[6];
    uVar9 = param_5[7];
    uVar10 = param_5[8];
    uVar11 = param_5[9];
    uVar12 = param_5[10];
    uVar13 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar5;
    *(undefined4 *)(puVar16 + 0x39) = uVar6;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar7;
    *(undefined4 *)(puVar16 + 0x3a) = uVar8;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar9;
    *(undefined4 *)(puVar16 + 0x3b) = uVar10;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar11;
    *(undefined4 *)(puVar16 + 0x3c) = uVar12;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar13;
    *puVar16 = &PTR_FUN_14a312620;
    *(undefined4 *)(puVar16 + 0x3d) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141783d98 FUN_141783d98 body=40 status=ok
// SIG undefined FUN_141783d98(void)

undefined8 FUN_141783d98(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141783dc0 FUN_141783dc0 body=637 status=ok
// SIG undefined FUN_141783dc0(void)

void FUN_141783dc0(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_58 = param_3;
  if ((param_4 & 4) == 0) {
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) &&
       (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_4 & 2) != 0)))) {
      param_4 = param_4 & 0xfffffff9 | 4;
    }
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar15;
    local_50 = DAT_14ca5ef88;
    if (DAT_14ca5ef88 != 0) {
      LOCK();
      *(int *)(DAT_14ca5ef88 + 8) = *(int *)(DAT_14ca5ef88 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14ca5ef40;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,param_4);
    *puVar16 = &PTR_FUN_14a312680;
    uVar14 = param_5[1];
    uVar3 = param_5[2];
    uVar4 = param_5[3];
    uVar5 = param_5[4];
    uVar6 = param_5[5];
    uVar7 = param_5[6];
    uVar8 = param_5[7];
    uVar9 = param_5[8];
    uVar10 = param_5[9];
    uVar11 = param_5[10];
    uVar12 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar3;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
    *(undefined4 *)(puVar16 + 0x39) = uVar5;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
    *(undefined4 *)(puVar16 + 0x3a) = uVar7;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
    *(undefined4 *)(puVar16 + 0x3b) = uVar9;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
    *(undefined4 *)(puVar16 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  }
  else {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    uVar3 = *(undefined4 *)(param_1 + 0x660);
    local_50 = DAT_14ca5ef88;
    if (DAT_14ca5ef88 != 0) {
      LOCK();
      *(int *)(DAT_14ca5ef88 + 8) = *(int *)(DAT_14ca5ef88 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14ca5ef40;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a312680;
    uVar14 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar6 = param_5[4];
    uVar7 = param_5[5];
    uVar8 = param_5[6];
    uVar9 = param_5[7];
    uVar10 = param_5[8];
    uVar11 = param_5[9];
    uVar12 = param_5[10];
    uVar13 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar5;
    *(undefined4 *)(puVar16 + 0x39) = uVar6;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar7;
    *(undefined4 *)(puVar16 + 0x3a) = uVar8;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar9;
    *(undefined4 *)(puVar16 + 0x3b) = uVar10;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar11;
    *(undefined4 *)(puVar16 + 0x3c) = uVar12;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar13;
    *puVar16 = &PTR_FUN_14a312660;
    *(undefined4 *)(puVar16 + 0x3d) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178403e FUN_14178403e body=40 status=ok
// SIG undefined FUN_14178403e(void)

undefined8 FUN_14178403e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141784066 FUN_141784066 body=40 status=ok
// SIG undefined FUN_141784066(void)

undefined8 FUN_141784066(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178408e FUN_14178408e body=40 status=ok
// SIG undefined FUN_14178408e(void)

undefined8 FUN_14178408e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417840b6 FUN_1417840b6 body=212 status=ok
// SIG undefined FUN_1417840b6(void)

undefined8 * FUN_1417840b6(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar4 = 0xffffffff;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    uVar1 = (&DAT_14c9c0cec)[2 < param_1];
    if (0 < (int)uVar1) {
      puVar5 = (undefined8 *)(&DAT_14cafe438 + (ulonglong)(2 < param_1) * 0x540);
      uVar6 = 0;
      do {
        iVar2 = wcscmp((wchar_t *)*puVar5,L"TranslucentLightingMaterialPSOCollector");
        if (iVar2 == 0) {
          uVar4 = (undefined4)uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 2;
      } while (uVar1 != uVar6);
    }
  }
  *(undefined4 *)(puVar3 + 1) = uVar4;
  *puVar3 = &PTR_FUN_14a318af0;
  *(int *)(puVar3 + 2) = param_1;
  return puVar3;
}



// FUNCTION 14178418a FUN_14178418a body=175 status=ok
// SIG undefined FUN_14178418a(void)

void FUN_14178418a(longlong param_1,void *param_2)

{
  undefined1 auStack_c68 [32];
  undefined4 local_c48;
  void *local_c40;
  undefined1 local_c38 [2976];
  undefined1 local_98 [48];
  undefined1 local_68;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c68;
  local_68 = 0;
  local_30 = 0;
  memcpy(local_c38,(void *)(param_1 + 0x500),0xba0);
  FUN_1448e6e32(local_c38);
  memcpy(param_2,*(void **)(param_1 + 0x3110),0x1960);
  local_c48 = 2;
  local_c40 = param_2;
  FUN_1401ee8d8(param_1,local_c38,local_c38,local_98);
  if ((local_28 ^ (ulonglong)auStack_c68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178423a FUN_14178423a body=101 status=ok
// SIG undefined FUN_14178423a(void)

ulonglong FUN_14178423a(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [12];
  uint local_2c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x23e8) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 8) + 0xc9) == '\x01')) {
    uVar1 = FUN_14019a1f8(local_38);
    if (local_2c < 5) {
      uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),0x19 >> ((byte)local_2c & 0x1f));
      goto LAB_141784281;
    }
  }
  uVar2 = 0;
LAB_141784281:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417842a0 FUN_1417842a0 body=29 status=ok
// SIG undefined FUN_1417842a0(void)

undefined8 FUN_1417842a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417842be FUN_1417842be body=40 status=ok
// SIG undefined FUN_1417842be(void)

undefined8 FUN_1417842be(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417842e6 FUN_1417842e6 body=40 status=ok
// SIG undefined FUN_1417842e6(void)

undefined8 FUN_1417842e6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178430e FUN_14178430e body=92 status=ok
// SIG undefined FUN_14178430e(void)

undefined8 * FUN_14178430e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a31a140;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178436a FUN_14178436a body=40 status=ok
// SIG undefined FUN_14178436a(void)

undefined8 FUN_14178436a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141784392 FUN_141784392 body=40 status=ok
// SIG undefined FUN_141784392(void)

undefined8 FUN_141784392(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417843ba FUN_1417843ba body=65 status=ok
// SIG undefined FUN_1417843ba(void)

longlong FUN_1417843ba(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417843fc FUN_1417843fc body=40 status=ok
// SIG undefined FUN_1417843fc(void)

undefined8 FUN_1417843fc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141784424 FUN_141784424 body=40 status=ok
// SIG undefined FUN_141784424(void)

undefined8 FUN_141784424(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141784452 FUN_141784452 body=42 status=ok
// SIG undefined FUN_141784452(void)

bool FUN_141784452(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_140105312();
  bVar2 = false;
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x1c) == '\x01')) {
    bVar2 = *(int *)(param_1 + 0x18) == 1;
  }
  return bVar2;
}



// FUNCTION 14178447c FUN_14178447c body=758 status=ok
// SIG undefined FUN_14178447c(void)

ulonglong FUN_14178447c(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  byte local_4c;
  
  uVar10 = (ulonglong)*(ushort *)(param_1 + 0x8a8);
  cVar3 = FUN_14498f84a();
  if ((cVar3 == '\0') || (((&DAT_14ca814cc)[uVar10 * 0x3c] & 0x10) == 0)) {
    uVar9 = (&DAT_14ca814c8)[uVar10 * 0xf];
    if ((uVar9 >> 0x16 & 1) != 0) goto LAB_1417844bd;
    iVar11 = 0xe;
    iVar12 = 0x31;
  }
  else {
    uVar9 = (&DAT_14ca814c8)[uVar10 * 0xf];
LAB_1417844bd:
    iVar11 = 0x13;
    iVar12 = 0x22;
  }
  if ((uVar9 & 0x20) == 0) {
    iVar12 = iVar11;
  }
  if (((&DAT_14c873438)[(uint)(iVar12 * 0x30)] & 1) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca64244) &&
       (FUN_144b3d300(&DAT_14ca64244), lVar15 = DAT_14ca63d18, DAT_14ca64244 == -1)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar10 = 0;
      }
      else {
        bVar8 = FUN_144a61b4f();
        uVar10 = (ulonglong)(bVar8 ^ 1);
      }
      DAT_14ca64240 = *(int *)(lVar15 + uVar10 * 4) == 0;
      _Init_thread_footer(&DAT_14ca64244);
    }
    uVar9 = FUN_1400b0b91(uVar1,8);
    if ((uVar9 < 2) &&
       (uVar10 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1), (DAT_14ca64240 & 1) != 0))
    goto LAB_141784533;
    if (0 < *(int *)(param_1 + 0x3f0)) {
      lVar15 = 0;
      uVar10 = 0;
      do {
        lVar13 = lVar15 * 0x13c10 + *(longlong *)(param_1 + 1000);
        lVar16 = -1;
        if (0 < (longlong)*(int *)(param_1 + 0x410)) {
          lVar14 = 0;
          do {
            lVar16 = lVar14;
            if (*(longlong *)(*(longlong *)(param_1 + 0x408) + lVar14 * 8) == lVar13) break;
            lVar14 = lVar14 + 1;
            lVar16 = -1;
          } while (*(int *)(param_1 + 0x410) != lVar14);
        }
        lVar14 = *(longlong *)(param_1 + 0xe58);
        if (*(longlong *)(param_1 + 0xe58) == 0) {
          lVar14 = param_1 + 0xe38;
        }
        lVar16 = (longlong)(int)lVar16 * 0x20;
        iVar12 = *(int *)(lVar13 + 0x3020);
        bVar8 = *(byte *)(lVar13 + 0x23cc);
        bVar4 = FUN_1402426c9(lVar13);
        bVar5 = FUN_142bceec2(param_1);
        if (*(int *)(lVar14 + 0xc + lVar16) == 1) {
          bVar6 = FUN_14044417b(lVar13);
        }
        else {
          bVar6 = 0;
        }
        if (*(int *)(lVar14 + 0x10 + lVar16) == 1) {
          bVar7 = FUN_1404448f8(lVar13);
        }
        else {
          bVar7 = 0;
        }
        if ((bVar6 | bVar7) == 1) {
          local_4c = FUN_1430372f7(lVar13);
        }
        else {
          local_4c = 0;
        }
        cVar3 = FUN_144a7ebcb();
        if ((cVar3 == '\0') || (*(char *)(lVar13 + 0x3098) != '\x01')) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
          if (*(char *)(lVar13 + 0x23e8) == '\x01') {
            cVar3 = *(char *)(lVar13 + 0x23ea);
          }
        }
        iVar11 = *(int *)(lVar14 + lVar16);
        iVar2 = *(int *)(lVar14 + 0xc + lVar16);
        bVar6 = FUN_1401984be(param_1);
        bVar7 = 1;
        if (((((bVar5 | bVar4 | local_4c) & 1) == 0 &&
              ((iVar12 - 2U & 0xfffffffd) == 0 & (bVar8 ^ 1)) == 0) && (cVar3 == '\0')) &&
           (iVar11 != 1)) {
          bVar7 = bVar6 | (iVar2 == 2 || iVar11 == 2);
        }
        uVar10 = (ulonglong)(byte)((byte)uVar10 | bVar7);
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_1 + 0x3f0));
      goto LAB_141784533;
    }
  }
  uVar10 = 0;
LAB_141784533:
  return uVar10 & 0xffffffffffffff01;
}



// FUNCTION 141784772 FUN_141784772 body=170 status=ok
// SIG undefined FUN_141784772(void)

byte FUN_141784772(undefined4 param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca64244) {
    FUN_144b3d300(&DAT_14ca64244);
    lVar1 = DAT_14ca63d18;
    if (DAT_14ca64244 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar4 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar4 = (ulonglong)(bVar2 ^ 1);
      }
      DAT_14ca64240 = *(int *)(lVar1 + uVar4 * 4) == 0;
      _Init_thread_footer(&DAT_14ca64244);
    }
  }
  uVar3 = FUN_1400b0b91(param_1,8);
  return uVar3 < 2 & DAT_14ca64240;
}



// FUNCTION 14178481c FUN_14178481c body=345 status=ok
// SIG undefined FUN_14178481c(void)

ulonglong * FUN_14178481c(ulonglong *param_1,ulonglong param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_140052d29(param_2 & 0xffffffff);
  uVar9 = DAT_14ca4ae48 | 0x20009;
  if (cVar4 == '\0') {
    uVar9 = 0x20009;
  }
  if (param_4 != '\0') {
    *(undefined4 *)(param_1 + 3) = DAT_14ca83a68;
    uVar3 = DAT_14ca83a64;
    uVar2 = DAT_14ca83a60;
    uVar1 = DAT_14ca83a5c;
    *(undefined4 *)(param_1 + 1) = DAT_14ca83a58;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    uVar5 = FUN_14732a8fa(param_2 & 0xffffffff);
    *param_1 = uVar9;
    uVar7 = 1;
    uVar8 = 2;
    goto LAB_1417848ce;
  }
  local_38 = DAT_14ca83a68;
  local_48 = DAT_14ca83a58;
  uStack_44 = DAT_14ca83a5c;
  uStack_40 = DAT_14ca83a60;
  uStack_3c = DAT_14ca83a64;
  cVar4 = FUN_14498f84a();
  param_2 = param_2 & 0xffff;
  if ((cVar4 == '\0') || (((&DAT_14ca814cc)[param_2 * 0x3c] & 0x10) == 0)) {
    uVar6 = (&DAT_14ca814c8)[param_2 * 0xf];
    if ((uVar6 >> 0x16 & 1) != 0) goto LAB_1417848a5;
    uVar7 = 0xe;
    uVar5 = 0x31;
  }
  else {
    uVar6 = (&DAT_14ca814c8)[param_2 * 0xf];
LAB_1417848a5:
    uVar7 = 0x13;
    uVar5 = 0x22;
  }
  if ((uVar6 & 0x20) == 0) {
    uVar5 = uVar7;
  }
  *param_1 = uVar9;
  *(undefined4 *)(param_1 + 1) = local_48;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_44;
  *(undefined4 *)(param_1 + 2) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_3c;
  *(undefined4 *)(param_1 + 3) = local_38;
  uVar8 = 1;
  uVar7 = 0;
LAB_1417848ce:
  *(int *)((longlong)param_1 + 0x1c) = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x2e) = uVar8;
  *(undefined2 *)(param_1 + 6) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x32) = uVar7;
  *(undefined1 *)((longlong)param_1 + 0x33) = uVar5;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0xff00;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141784976 FUN_141784976 body=494 status=ok
// SIG undefined FUN_141784976(void)

undefined4
FUN_141784976(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
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
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  ulonglong local_40;
  
  lVar3 = DAT_14c9c7c78;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
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
  local_158 = *(undefined4 *)(param_1 + 0x40);
  uStack_154 = *(undefined4 *)(param_1 + 0x44);
  lStack_150 = *(longlong *)(param_1 + 0x48);
  local_148 = *(undefined4 *)(param_1 + 0x50);
  uStack_144 = *(undefined4 *)(param_1 + 0x54);
  uStack_140 = *(undefined4 *)(param_1 + 0x58);
  uStack_13c = *(undefined4 *)(param_1 + 0x5c);
  local_138 = *(undefined4 *)(param_1 + 0x60);
  uStack_134 = *(undefined4 *)(param_1 + 100);
  uStack_130 = *(undefined4 *)(param_1 + 0x68);
  uStack_12c = *(undefined4 *)(param_1 + 0x6c);
  local_128 = *(undefined4 *)(param_1 + 0x70);
  uStack_124 = *(undefined4 *)(param_1 + 0x74);
  uStack_120 = *(undefined4 *)(param_1 + 0x78);
  uStack_11c = *(undefined4 *)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0x80) == 5) {
    if (DAT_14c9c7c78 == 0) {
      lStack_150 = 0;
      uStack_120 = 0;
    }
    else {
      LOCK();
      *(int *)(DAT_14c9c7c78 + 8) = *(int *)(DAT_14c9c7c78 + 8) + 1;
      UNLOCK();
      lStack_150 = lVar3;
      uStack_120 = 0;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  local_188 = &local_118;
  uVar4 = FUN_140c81585(param_4,*param_3,&local_108,&local_f8);
  if ((char)uVar4 != '\0') {
    local_a8 = 0;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_48 = 1;
    local_58 = *(undefined8 *)(param_2 + 0x38);
    local_60 = 0xb;
    local_50 = 1;
    local_4e = 1;
    local_4c = 0x22;
    local_4f = ((uint)local_58 >> 0xc & 1) == 0;
    local_170 = *(undefined4 *)(param_1 + 8);
    local_168 = param_7;
    local_178 = param_6;
    local_180 = param_5;
    local_188 = &local_108;
    local_4d = local_4f;
    FUN_140c818fc(param_3,param_4,&local_158);
  }
  if ((local_40 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141784b65 FUN_141784b65 body=34 status=ok
// SIG undefined FUN_141784b65(void)

void FUN_141784b65(undefined4 param_1)

{
  FUN_1404e835f(0xb,param_1,0,0,0);
  return;
}



// FUNCTION 141784b87 FUN_141784b87 body=34 status=ok
// SIG undefined FUN_141784b87(void)

void FUN_141784b87(undefined4 param_1)

{
  FUN_1404d34b3(0xc,param_1,0,0,0);
  return;
}



// FUNCTION 141784baa FUN_141784baa body=125 status=ok
// SIG undefined FUN_141784baa(void)

undefined8 * FUN_141784baa(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  param_1[9] = 0;
  param_1[10] = 0x8000000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000;
  param_1[0xf] = *(undefined8 *)(param_2 + 0x210);
  param_1[0x10] = param_2;
  uVar1 = *(undefined4 *)(param_2 + 0x1d0);
  FUN_14476b79c(param_1 + 7,uVar1,0);
  FUN_14476b79c(param_1 + 0xb,uVar1,0);
  return param_1;
}



// FUNCTION 141784c28 FUN_141784c28 body=90 status=ok
// SIG undefined FUN_141784c28(void)

undefined8 * FUN_141784c28(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_14005b4aa(*(undefined2 *)
                         (&DAT_14ca85070 +
                         (longlong)*(int *)(*(longlong *)(param_1 + 0x210) + 8) * 2));
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = &PTR_FUN_14a3240e0;
    puVar2[1] = param_1;
    puVar2[2] = 0;
  }
  return puVar2;
}



// FUNCTION 141784c82 FUN_141784c82 body=397 status=ok
// SIG undefined FUN_141784c82(void)

ulonglong FUN_141784c82(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined2 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = DAT_14ca85098;
  local_50 = DAT_14ca85088;
  uStack_4c = DAT_14ca8508c;
  uStack_48 = DAT_14ca85090;
  uStack_44 = DAT_14ca85094;
  uVar4 = 0x30;
  if (*(uint *)(param_3 + 0x30) < 0x11) {
    uVar4 = 0x44;
  }
  local_25 = 0x1c;
  if (8 < *(uint *)(param_3 + 0x30)) {
    local_25 = uVar4;
  }
  local_26 = 0;
  local_58 = &DAT_00020008;
  iVar2 = (int)*(undefined8 *)(param_2 + 0x20);
  local_34 = DAT_14ca84e40;
  if (iVar2 < DAT_14ca84e40) {
    local_34 = iVar2;
  }
  if (local_34 < 2) {
    local_34 = 1;
  }
  iVar2 = (int)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
  local_30 = DAT_14ca84e40;
  if (iVar2 < DAT_14ca84e40) {
    local_30 = iVar2;
  }
  local_3c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_24 = 0xff00;
  local_2c = 0x10001;
  local_28 = 0x101;
  local_38 = 0;
  if (local_30 < 2) {
    local_30 = 1;
  }
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar1 = uVar3 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar1) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x128);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar1 = uVar3 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar1;
  FUN_1456bbb8c(uVar3,param_4,&local_58,0);
  iVar2 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar2 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar2 * 8) = uVar3;
  *(int *)(uVar3 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141784e10 FUN_141784e10 body=29 status=ok
// SIG undefined FUN_141784e10(void)

undefined8 FUN_141784e10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141784e2e FUN_141784e2e body=174 status=ok
// SIG undefined FUN_141784e2e(void)

undefined8 * FUN_141784e2e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a325a90;
  if (param_1[0x56d] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x56a];
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
  if (param_1[0x564] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x540] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x520] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141784edc FUN_141784edc body=44 status=ok
// SIG undefined FUN_141784edc(void)

longlong FUN_141784edc(longlong param_1,int param_2)

{
  FUN_1400200e4(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141784f08 FUN_141784f08 body=40 status=ok
// SIG undefined FUN_141784f08(void)

undefined8 FUN_141784f08(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141784f30 FUN_141784f30 body=533 status=ok
// SIG undefined FUN_141784f30(void)

void FUN_141784f30(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  void *_Src;
  uint uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  size_t _Size;
  longlong lVar10;
  ulonglong uVar11;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar10 = *param_2;
    uVar5 = *(ulonglong *)(lVar10 + 0x10);
    uVar11 = lVar10 + 0x10 + ((longlong)uVar5 >> 0x18);
    if ((uVar5 & 1) == 0) {
      uVar11 = uVar5;
    }
    iVar3 = *(int *)(lVar10 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar10 = 0;
      do {
        uVar6 = (uint)*(byte *)(uVar11 + 3 + lVar10);
        if ((uVar6 < 0x13) && ((0x44080U >> (uVar6 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar11 + 2 + lVar10);
          iVar4 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar4 + 1U) {
            FUN_1447477d8(puVar1,iVar4);
          }
          uVar5 = *puVar1;
          *(ushort *)(uVar5 + (longlong)iVar4 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar5 + 2 + (longlong)iVar4 * 4) = 1;
        }
        lVar10 = lVar10 + 4;
      } while ((longlong)iVar3 * 4 != lVar10);
    }
    uVar5 = param_1[0x13];
    lVar10 = (longlong)(int)uVar5;
    if (0 < lVar10) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar9 + 5;
        if ((undefined8 *)param_1[1] < puVar7) {
          FUN_140023dd8(param_1,0x30);
          puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
        }
        *param_1 = (ulonglong)puVar7;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar9;
        param_1[6] = (ulonglong)(puVar9 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar8 = (void *)((longlong)_Dst + lVar10 * 4);
        _Size = lVar10 * 4;
        if ((void *)param_1[1] < pvVar8) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar8 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar8;
        memcpy(_Dst,_Src,_Size);
        puVar9[1] = 0;
        *puVar9 = &PTR_FUN_14a1fbc38;
        puVar9[2] = param_3;
        puVar9[3] = _Dst;
        *(int *)(puVar9 + 4) = (int)uVar5;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141785146 FUN_141785146 body=40 status=ok
// SIG undefined FUN_141785146(void)

undefined8 FUN_141785146(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178516e FUN_14178516e body=40 status=ok
// SIG undefined FUN_14178516e(void)

undefined8 FUN_14178516e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785196 FUN_141785196 body=40 status=ok
// SIG undefined FUN_141785196(void)

undefined8 FUN_141785196(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417851be FUN_1417851be body=92 status=ok
// SIG undefined FUN_1417851be(void)

undefined8 * FUN_1417851be(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a328e70;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178521a FUN_14178521a body=395 status=ok
// SIG undefined FUN_14178521a(void)

void FUN_14178521a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca67be8;
  if (DAT_14ca67be8 != 0) {
    LOCK();
    *(int *)(DAT_14ca67be8 + 8) = *(int *)(DAT_14ca67be8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca67ba0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a328e90;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417853a6 FUN_1417853a6 body=40 status=ok
// SIG undefined FUN_1417853a6(void)

undefined8 FUN_1417853a6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417853ce FUN_1417853ce body=40 status=ok
// SIG undefined FUN_1417853ce(void)

undefined8 FUN_1417853ce(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417853f6 FUN_1417853f6 body=321 status=ok
// SIG undefined FUN_1417853f6(void)

undefined8 FUN_1417853f6(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (ulonglong)param_2 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar6 + 0xf;
      if (param_2 < 0x555) {
        uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x1ffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar7 = 0x32;
          if (0x32 < bVar2) {
            uVar7 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14178545b;
            lVar1 = uVar7 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar6 = -uVar6 & ((uVar4 & 0x1ffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,8);
    }
  }
LAB_14178545b:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  uVar5 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar6 / 0x18)) {
    uVar4 = uVar6 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar5 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar5;
}



// FUNCTION 141785538 FUN_141785538 body=212 status=ok
// SIG undefined FUN_141785538(void)

void FUN_141785538(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,0x10);
  }
  return;
}



// FUNCTION 14178560c FUN_14178560c body=40 status=ok
// SIG undefined FUN_14178560c(void)

undefined8 FUN_14178560c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785634 FUN_141785634 body=40 status=ok
// SIG undefined FUN_141785634(void)

undefined8 FUN_141785634(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178565c FUN_14178565c body=40 status=ok
// SIG undefined FUN_14178565c(void)

undefined8 FUN_14178565c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785684 FUN_141785684 body=40 status=ok
// SIG undefined FUN_141785684(void)

undefined8 FUN_141785684(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417856ac FUN_1417856ac body=40 status=ok
// SIG undefined FUN_1417856ac(void)

undefined8 FUN_1417856ac(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417856d4 FUN_1417856d4 body=40 status=ok
// SIG undefined FUN_1417856d4(void)

undefined8 FUN_1417856d4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417856fc FUN_1417856fc body=40 status=ok
// SIG undefined FUN_1417856fc(void)

undefined8 FUN_1417856fc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785724 FUN_141785724 body=40 status=ok
// SIG undefined FUN_141785724(void)

undefined8 FUN_141785724(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178574c FUN_14178574c body=40 status=ok
// SIG undefined FUN_14178574c(void)

undefined8 FUN_14178574c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785774 FUN_141785774 body=92 status=ok
// SIG undefined FUN_141785774(void)

undefined8 * FUN_141785774(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a329010;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417857d0 FUN_1417857d0 body=40 status=ok
// SIG undefined FUN_1417857d0(void)

undefined8 FUN_1417857d0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417857f8 FUN_1417857f8 body=40 status=ok
// SIG undefined FUN_1417857f8(void)

undefined8 FUN_1417857f8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785820 FUN_141785820 body=395 status=ok
// SIG undefined FUN_141785820(void)

void FUN_141785820(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca68248;
  if (DAT_14ca68248 != 0) {
    LOCK();
    *(int *)(DAT_14ca68248 + 8) = *(int *)(DAT_14ca68248 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca68200;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a329560;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417859ac FUN_1417859ac body=40 status=ok
// SIG undefined FUN_1417859ac(void)

undefined8 FUN_1417859ac(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417859d4 FUN_1417859d4 body=395 status=ok
// SIG undefined FUN_1417859d4(void)

void FUN_1417859d4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca68358;
  if (DAT_14ca68358 != 0) {
    LOCK();
    *(int *)(DAT_14ca68358 + 8) = *(int *)(DAT_14ca68358 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca68310;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a329580;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141785b60 FUN_141785b60 body=40 status=ok
// SIG undefined FUN_141785b60(void)

undefined8 FUN_141785b60(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785b88 FUN_141785b88 body=468 status=ok
// SIG undefined FUN_141785b88(void)

void FUN_141785b88(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar12 = puVar13 + 0x46;
  if (*(undefined8 **)(param_1 + 0x78) < puVar12) {
    FUN_140023dd8(puVar1,0x240);
    puVar13 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar12 = puVar13 + 0x46;
  }
  *puVar1 = (ulonglong)puVar12;
  local_50 = DAT_14ca683e0;
  if (DAT_14ca683e0 != 0) {
    LOCK();
    *(int *)(DAT_14ca683e0 + 8) = *(int *)(DAT_14ca683e0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca68398;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar13,param_2,&local_58,uVar14);
  *puVar13 = &PTR_FUN_14a3295a0;
  uVar9 = param_4[1];
  uVar10 = param_4[2];
  uVar11 = param_4[3];
  puVar13[0x38] = *param_4;
  puVar13[0x39] = uVar9;
  puVar13[0x3a] = uVar10;
  puVar13[0x3b] = uVar11;
  *(undefined4 *)(puVar13 + 0x3c) = *(undefined4 *)(param_4 + 4);
  puVar13[0x3e] = param_4[6];
  puVar13[0x40] = param_4[8];
  param_4[8] = 0;
  uVar14 = *(undefined4 *)(param_4 + 10);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x54);
  uVar4 = *(undefined4 *)(param_4 + 0xb);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x5c);
  uVar6 = *(undefined4 *)((longlong)param_4 + 100);
  uVar7 = *(undefined4 *)(param_4 + 0xd);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x6c);
  *(undefined4 *)(puVar13 + 0x44) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)((longlong)puVar13 + 0x224) = uVar6;
  *(undefined4 *)(puVar13 + 0x45) = uVar7;
  *(undefined4 *)((longlong)puVar13 + 0x22c) = uVar8;
  *(undefined4 *)(puVar13 + 0x42) = uVar14;
  *(undefined4 *)((longlong)puVar13 + 0x214) = uVar3;
  *(undefined4 *)(puVar13 + 0x43) = uVar4;
  *(undefined4 *)((longlong)puVar13 + 0x21c) = uVar5;
  if (puVar13[0x3e] != 0) {
    param_4[6] = 0;
  }
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar13);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141785d5e FUN_141785d5e body=92 status=ok
// SIG undefined FUN_141785d5e(void)

undefined8 * FUN_141785d5e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a3295a0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785dba FUN_141785dba body=40 status=ok
// SIG undefined FUN_141785dba(void)

undefined8 FUN_141785dba(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785de2 FUN_141785de2 body=40 status=ok
// SIG undefined FUN_141785de2(void)

undefined8 FUN_141785de2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785e0a FUN_141785e0a body=92 status=ok
// SIG undefined FUN_141785e0a(void)

undefined8 * FUN_141785e0a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a329640;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785e66 FUN_141785e66 body=92 status=ok
// SIG undefined FUN_141785e66(void)

undefined8 * FUN_141785e66(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a329660;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785ec2 FUN_141785ec2 body=29 status=ok
// SIG undefined FUN_141785ec2(void)

undefined8 FUN_141785ec2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785ee0 FUN_141785ee0 body=40 status=ok
// SIG undefined FUN_141785ee0(void)

undefined8 FUN_141785ee0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785f08 FUN_141785f08 body=40 status=ok
// SIG undefined FUN_141785f08(void)

undefined8 FUN_141785f08(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141785f30 FUN_141785f30 body=176 status=ok
// SIG undefined FUN_141785f30(void)

bool FUN_141785f30(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((param_1 != (longlong *)0x0) && (param_1[0x9a7] != 0)) &&
     ((~*(uint *)(param_2 + 0x10) & 0x60000) == 0)) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1);
    if (*(longlong **)(*plVar2 + 0x58) != (longlong *)0x0) {
      uVar3 = (**(code **)(**(longlong **)(*plVar2 + 0x58) + 0x2f0))();
      plVar2 = (longlong *)FUN_1449cbe5c(uVar3,(int)param_1[1],local_18);
      iVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
      bVar4 = false;
      if ((iVar1 == 3) && (0 < *(int *)(DAT_14ca69630 + 4))) {
        bVar4 = *(int *)(DAT_14ca69978 + 4) != 0;
      }
      goto LAB_141785fc4;
    }
  }
  bVar4 = false;
LAB_141785fc4:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141785fe2 FUN_141785fe2 body=2171 status=ok
// SIG undefined FUN_141785fe2(void)

void FUN_141785fe2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4d;
  undefined1 local_4b;
  ulonglong local_48;
  
  lVar2 = DAT_14ca6ade0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x458) == 0) {
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar5 == 0x40000002) {
      uVar8 = 0;
    }
    else {
      bVar13 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar13 = DVar6 == DVar7;
        }
        else {
          bVar13 = false;
        }
      }
      uVar8 = (ulonglong)(bVar13 ^ 1);
    }
    uVar10 = (ulonglong)((uint)(*(int *)(lVar2 + uVar8 * 4) != 0) << 0x1a) | 0x20009;
    local_68 = DAT_14ca83a40;
    local_78 = DAT_14ca83a30;
    uStack_74 = DAT_14ca83a34;
    uStack_70 = DAT_14ca83a38;
    uStack_6c = DAT_14ca83a3c;
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_4e = 3;
    local_4d = 10;
    local_54 = 0x10001;
    local_50 = 0x101;
    local_60 = 0;
    local_4b = 0xff;
    local_5c = &DAT_100000001;
    plVar1 = (longlong *)(param_2 + 0x70);
    uVar12 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar8 = uVar12 + 0x120;
    local_80 = uVar10;
    if (*(ulonglong *)(param_2 + 0x78) < uVar8) {
      FUN_140023dd8(plVar1,0x128);
      uVar12 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar8 = uVar12 + 0x120;
    }
    lVar2 = param_2 + 0x178;
    *(ulonglong *)(param_2 + 0x70) = uVar8;
    FUN_1456bbb8c(uVar12,L"Cloud.ColorCubeDummy",&local_80,0);
    iVar5 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar5 + 1U) {
      FUN_14472c0f6(lVar2,iVar5);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar5 * 8) = uVar12;
    *(int *)(uVar12 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    *(ulonglong *)(param_1 + 0x458) = uVar12;
    local_68 = DAT_14ca85098;
    local_78 = DAT_14ca85088;
    uStack_74 = DAT_14ca8508c;
    uStack_70 = DAT_14ca85090;
    uStack_6c = DAT_14ca85094;
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_4e = 0;
    local_4d = 10;
    local_54 = 0x10001;
    local_50 = 0x101;
    local_60 = 0;
    local_4b = 0xff;
    local_5c = &DAT_100000001;
    uVar12 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar8 = uVar12 + 0x120;
    local_80 = uVar10;
    if (*(ulonglong *)(param_2 + 0x78) < uVar8) {
      FUN_140023dd8(plVar1,0x128);
      uVar12 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar8 = uVar12 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar8;
    FUN_1456bbb8c(uVar12,L"Cloud.ColorDummy",&local_80,0);
    iVar5 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar5 + 1U) {
      FUN_14472c0f6(lVar2,iVar5);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar5 * 8) = uVar12;
    *(int *)(uVar12 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    *(ulonglong *)(param_1 + 0x460) = uVar12;
    local_68 = DAT_14ca85098;
    local_78 = DAT_14ca85088;
    uStack_74 = DAT_14ca8508c;
    uStack_70 = DAT_14ca85090;
    uStack_6c = DAT_14ca85094;
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_4e = 0;
    local_4d = 10;
    local_54 = 0x10001;
    local_50 = 0x101;
    local_60 = 0;
    local_4b = 0xff;
    local_5c = &DAT_100000001;
    uVar12 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar8 = uVar12 + 0x120;
    local_80 = uVar10;
    if (*(ulonglong *)(param_2 + 0x78) < uVar8) {
      FUN_140023dd8(plVar1,0x128);
      uVar12 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar8 = uVar12 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar8;
    FUN_1456bbb8c(uVar12,L"Cloud.ColorDummy",&local_80,0);
    iVar5 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar5 + 1U) {
      FUN_14472c0f6(lVar2,iVar5);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar5 * 8) = uVar12;
    *(int *)(uVar12 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    *(ulonglong *)(param_1 + 0x468) = uVar12;
    local_68 = DAT_14ca85098;
    local_78 = DAT_14ca85088;
    uStack_74 = DAT_14ca8508c;
    uStack_70 = DAT_14ca85090;
    uStack_6c = DAT_14ca85094;
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_4e = 0;
    local_4d = 0xf;
    local_54 = 0x10001;
    local_50 = 0x101;
    local_60 = 0;
    local_4b = 0xff;
    local_5c = &DAT_100000001;
    uVar12 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar8 = uVar12 + 0x120;
    local_80 = uVar10;
    if (*(ulonglong *)(param_2 + 0x78) < uVar8) {
      FUN_140023dd8(plVar1,0x128);
      uVar12 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar8 = uVar12 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar8;
    FUN_1456bbb8c(uVar12,L"Cloud.DepthDummy",&local_80,0);
    iVar5 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar5 + 1U) {
      FUN_14472c0f6(lVar2,iVar5);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar5 * 8) = uVar12;
    *(int *)(uVar12 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    *(ulonglong *)(param_1 + 0x470) = uVar12;
    lVar2 = *(longlong *)(param_1 + 0x458);
    uVar4 = *(undefined1 *)(lVar2 + 0x94);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
      FUN_140023dd8(plVar1,0x50);
      puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 9;
    }
    lVar3 = param_2 + 0x198;
    *(undefined8 **)(param_2 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(lVar2 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 0;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 1;
    *puVar11 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar11 + 6) = uVar4;
    *(undefined1 *)(puVar11 + 7) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar11 + 0x35) = 0;
    puVar11[8] = lVar2;
    iVar5 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar3,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar5 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    *(undefined8 **)(param_1 + 0x478) = puVar11;
    lVar2 = *(longlong *)(param_1 + 0x468);
    uVar4 = *(undefined1 *)(lVar2 + 0x94);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
      FUN_140023dd8(plVar1,0x50);
      puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(lVar2 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 0;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 1;
    *puVar11 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar11 + 6) = uVar4;
    *(undefined1 *)(puVar11 + 7) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar11 + 0x35) = 0;
    puVar11[8] = lVar2;
    iVar5 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar3,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar5 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    *(undefined8 **)(param_1 + 0x480) = puVar11;
    lVar2 = *(longlong *)(param_1 + 0x460);
    uVar4 = *(undefined1 *)(lVar2 + 0x94);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
      FUN_140023dd8(plVar1,0x50);
      puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(lVar2 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 0;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 1;
    *puVar11 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar11 + 6) = uVar4;
    *(undefined1 *)(puVar11 + 7) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar11 + 0x35) = 0;
    puVar11[8] = lVar2;
    iVar5 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar3,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar5 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    *(undefined8 **)(param_1 + 0x488) = puVar11;
    lVar2 = *(longlong *)(param_1 + 0x470);
    uVar4 = *(undefined1 *)(lVar2 + 0x94);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
      FUN_140023dd8(plVar1,0x50);
      puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(lVar2 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 0;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 1;
    *puVar11 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar11 + 6) = uVar4;
    *(undefined1 *)(puVar11 + 7) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar11 + 0x35) = 0;
    puVar11[8] = lVar2;
    iVar5 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar3,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar5 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    *(undefined8 **)(param_1 + 0x490) = puVar11;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178685e FUN_14178685e body=220 status=ok
// SIG undefined FUN_14178685e(void)

void FUN_14178685e(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  undefined4 local_22;
  undefined1 local_1e;
  undefined2 local_1d;
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    local_2c = *(undefined8 *)(param_1 + 0x38);
    local_34 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_30 = 0;
    local_24 = 1;
    local_1e = 0;
    local_48 = 1;
    uStack_40 = 0;
    local_38 = 0x3f800000;
    local_1d = 10;
    local_22 = 0x1010001;
    local_50 = 0x20009;
    local_1b = 0xff;
    local_58 = L"VolumetricRenderTarget.Tracing";
    FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_50,param_1 + 0x60);
  }
  FUN_14473c272(param_2,param_1 + 0x60,0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178693c FUN_14178693c body=235 status=ok
// SIG undefined FUN_14178693c(void)

void FUN_14178693c(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  undefined4 local_22;
  undefined1 local_1e;
  char local_1d;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    local_1d = (*(int *)(param_1 + 0x78) != 0) * '\x05' + '\n';
    local_2c = *(undefined8 *)(param_1 + 0x38);
    local_34 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_30 = 0;
    local_24 = 1;
    local_1e = 0;
    local_48 = 1;
    uStack_44 = 0x47761800;
    uStack_40 = 0x47761800;
    uStack_3c = 0x47761800;
    local_38 = 0x47761800;
    local_1c = 0xff00;
    local_22 = 0x1010001;
    local_50 = 0x20009;
    local_58 = L"VolumetricRenderTarget.TracingDepth";
    FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_50,param_1 + 0x70);
  }
  FUN_14473c272(param_2,param_1 + 0x70,0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141786a28 FUN_141786a28 body=220 status=ok
// SIG undefined FUN_141786a28(void)

void FUN_141786a28(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  undefined4 local_22;
  undefined1 local_1e;
  undefined2 local_1d;
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_2c = *(undefined8 *)(param_1 + 0x38);
    local_34 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_30 = 0;
    local_24 = 1;
    local_1e = 0;
    local_48 = 1;
    uStack_40 = 0;
    local_38 = 0x3f800000;
    local_1d = 10;
    local_22 = 0x1010001;
    local_50 = 0x20009;
    local_1b = 0xff;
    local_58 = L"VolumetricRenderTarget.SecondaryTracing";
    FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_50,param_1 + 0x68);
  }
  FUN_14473c272(param_2,param_1 + 0x68,0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141786b06 FUN_141786b06 body=106 status=ok
// SIG undefined FUN_141786b06(void)

undefined8 FUN_141786b06(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  cVar2 = FUN_140047f5c(param_1 + 0x98);
  uVar3 = 0;
  if (((lVar1 != 0) && (cVar2 != '\0')) && (DAT_14c760aa8 != 0)) {
    if ((((*(byte *)(param_1 + 0xf5) & 8) == 0) || (*(int *)(lVar1 + 0x4d18) < 1)) ||
       (lVar1 = *(longlong *)(lVar1 + 0x4d10), *(char *)(lVar1 + 0x6c) != '\x01')) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),0.0 < *(float *)(lVar1 + 0x98));
    }
  }
  return uVar3;
}



// FUNCTION 141786b70 FUN_141786b70 body=98 status=ok
// SIG undefined FUN_141786b70(void)

undefined8 FUN_141786b70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_140047f5c(param_2);
  uVar3 = 0;
  if (((param_1 != 0) && (cVar2 != '\0')) && (DAT_14c760aa8 != 0)) {
    if ((((*(byte *)(param_2 + 0x5d) & 8) == 0) || (*(int *)(param_1 + 0x4d18) < 1)) ||
       (lVar1 = *(longlong *)(param_1 + 0x4d10), *(char *)(lVar1 + 0x6c) != '\x01')) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),0.0 < *(float *)(lVar1 + 0x98));
    }
  }
  return uVar3;
}



// FUNCTION 141786bd2 FUN_141786bd2 body=115 status=ok
// SIG undefined FUN_141786bd2(void)

undefined8 FUN_141786bd2(undefined2 *param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  int local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140190ebe(&local_28,*(undefined4 *)(param_1 + 2));
  local_48 = local_28;
  uStack_44 = uStack_24;
  iStack_40 = iStack_20;
  uStack_3c = uStack_1c;
  FUN_140190fde(&local_38,&local_48,*param_1);
  local_38 = local_38 ^ CONCAT44(uStack_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)(local_38 >> 8),local_30 == iStack_20 && local_38 == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141786c46 FUN_141786c46 body=172 status=ok
// SIG undefined FUN_141786c46(void)

float * FUN_141786c46(float *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_2 + 0x3104) - *(int *)(param_2 + 0x30fc);
  iVar1 = *(int *)(param_2 + 0x3100) - *(int *)(param_2 + 0x30f8);
  local_38 = iVar1;
  local_34 = iVar2;
  FUN_140047e94(&local_48,&local_38,&local_3c);
  *param_1 = ((float)local_48 * (float)local_3c) / (float)iVar1;
  param_1[1] = ((float)local_44 * (float)local_3c) / (float)iVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141786cf9 FUN_141786cf9 body=129 status=ok
// SIG undefined FUN_141786cf9(void)

undefined8 * FUN_141786cf9(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  FUN_14025f50e(puVar1,L"VoxelizeVolume",0,param_1,0,0);
  *puVar1 = &PTR_FUN_14a32f4e0;
  *(undefined4 *)(puVar1 + 10) = 0x11;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[8] = DAT_14c9dc4c8;
  puVar1[9] = DAT_14c9c0d98;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 141786d7a FUN_141786d7a body=192 status=ok
// SIG undefined FUN_141786d7a(void)

undefined8 FUN_141786d7a(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)DAT_14ca6c380;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < (int)DAT_14ca6c380) {
    uVar3 = FUN_144b3d300(&DAT_14ca6c380);
    if (DAT_14ca6c380 == 0xffffffff) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca6c378 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VolumetricCloud.DisableCompute",1);
      uVar3 = _Init_thread_footer(&DAT_14ca6c380);
    }
  }
  if (DAT_14ca6c378 == (longlong *)0x0) {
    uVar4 = (undefined7)(uVar3 >> 8);
    bVar1 = true;
  }
  else {
    uVar2 = (**(code **)(*DAT_14ca6c378 + 0xb0))();
    bVar1 = (int)uVar2 < 2;
    uVar4 = (undefined7)((ulonglong)uVar2 >> 8);
  }
  if (DAT_14ca84e23 == '\x01') {
    uVar2 = CONCAT71(uVar4,bVar1 & 0 < *(int *)(DAT_14ca6c340 + 4));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 141786e3a FUN_141786e3a body=232 status=ok
// SIG undefined FUN_141786e3a(void)

void FUN_141786e3a(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  undefined4 local_2a;
  undefined1 local_26;
  undefined2 local_25;
  undefined1 local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = (ulonglong)*(uint *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x40 + uVar1 * 8) == 0) {
    local_34 = *(undefined8 *)(param_1 + 0x30);
    local_3c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_38 = 0;
    local_2c = 1;
    local_26 = 0;
    local_50 = 1;
    uStack_48 = 0;
    local_40 = 0x3f800000;
    local_25 = 10;
    local_2a = 0x1010001;
    local_58 = 9;
    local_23 = 0xff;
    local_68 = L"VolumetricRenderTarget.Reconstruct";
    FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_58,
                  param_1 + uVar1 * 8 + 0x40);
    uVar1 = (ulonglong)*(uint *)(param_1 + 8);
  }
  FUN_14473c272(param_2,param_1 + 0x40 + uVar1 * 8,0);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141786f24 FUN_141786f24 body=231 status=ok
// SIG undefined FUN_141786f24(void)

void FUN_141786f24(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  undefined4 local_2a;
  undefined1 local_26;
  undefined2 local_25;
  undefined1 local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = (ulonglong)*(uint *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x50 + uVar1 * 8) == 0) {
    local_34 = *(undefined8 *)(param_1 + 0x30);
    local_3c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_38 = 0;
    local_2c = 1;
    local_26 = 0;
    local_50 = 1;
    uStack_4c = 0x47761800;
    uStack_48 = 0x47761800;
    uStack_44 = 0x47761800;
    local_40 = 0x47761800;
    local_25 = 0xf;
    local_2a = 0x1010001;
    local_58 = 9;
    local_23 = 0xff;
    local_68 = L"VolumetricRenderTarget.ReconstructDepth";
    FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_58,
                  param_1 + uVar1 * 8 + 0x50);
    uVar1 = (ulonglong)*(uint *)(param_1 + 8);
  }
  FUN_14473c272(param_2,param_1 + 0x50 + uVar1 * 8,0);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178700c FUN_14178700c body=29 status=ok
// SIG undefined FUN_14178700c(void)

undefined8 FUN_14178700c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178702a FUN_14178702a body=40 status=ok
// SIG undefined FUN_14178702a(void)

undefined8 FUN_14178702a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141787052 FUN_141787052 body=201 status=ok
// SIG undefined FUN_141787052(void)

undefined8 * FUN_141787052(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178711c FUN_14178711c body=201 status=ok
// SIG undefined FUN_14178711c(void)

undefined8 * FUN_14178711c(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417871e6 FUN_1417871e6 body=40 status=ok
// SIG undefined FUN_1417871e6(void)

undefined8 FUN_1417871e6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178720e FUN_14178720e body=365 status=ok
// SIG undefined FUN_14178720e(void)

void FUN_14178720e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca6d0f0;
  if (DAT_14ca6d0f0 != 0) {
    LOCK();
    *(int *)(DAT_14ca6d0f0 + 8) = *(int *)(DAT_14ca6d0f0 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca6d0a8;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a333980;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178737c FUN_14178737c body=40 status=ok
// SIG undefined FUN_14178737c(void)

undefined8 FUN_14178737c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417873a4 FUN_1417873a4 body=34 status=ok
// SIG undefined FUN_1417873a4(void)

void FUN_1417873a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a336f70;
  return;
}



// FUNCTION 1417873c6 FUN_1417873c6 body=54 status=ok
// SIG undefined FUN_1417873c6(void)

ulonglong FUN_1417873c6(undefined2 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0x1c);
    if ((uVar2 >> 0x31 & 1) == 0) {
      uVar2 = uVar2 & 0xffffffffffffff01;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1417873fc FUN_1417873fc body=61 status=ok
// SIG undefined FUN_1417873fc(void)

undefined8 FUN_1417873fc(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if ((cVar1 != '\0') && ((*(ulonglong *)(param_1 + 0x1c) & 0x2000000000001) != 0)) {
    uVar2 = FUN_14107ca03(2,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14178743a FUN_14178743a body=54 status=ok
// SIG undefined FUN_14178743a(void)

ulonglong FUN_14178743a(undefined2 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0x1c);
    if ((uVar2 >> 0x31 & 1) == 0) {
      uVar2 = uVar2 & 0xffffffffffffff01;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 141787470 FUN_141787470 body=61 status=ok
// SIG undefined FUN_141787470(void)

undefined8 FUN_141787470(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if ((cVar1 != '\0') && ((*(ulonglong *)(param_1 + 0x1c) & 0x2000000000001) != 0)) {
    uVar2 = FUN_14107ca03(3,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1417874ae FUN_1417874ae body=54 status=ok
// SIG undefined FUN_1417874ae(void)

ulonglong FUN_1417874ae(undefined2 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0x1c);
    if ((uVar2 >> 0x31 & 1) == 0) {
      uVar2 = uVar2 & 0xffffffffffffff01;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1417874e4 FUN_1417874e4 body=61 status=ok
// SIG undefined FUN_1417874e4(void)

undefined8 FUN_1417874e4(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if ((cVar1 != '\0') && ((*(ulonglong *)(param_1 + 0x1c) & 0x2000000000001) != 0)) {
    uVar2 = FUN_14107ca03(1,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141787522 FUN_141787522 body=54 status=ok
// SIG undefined FUN_141787522(void)

ulonglong FUN_141787522(undefined2 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0x1c);
    if ((uVar2 >> 0x31 & 1) == 0) {
      uVar2 = uVar2 & 0xffffffffffffff01;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 141787558 FUN_141787558 body=61 status=ok
// SIG undefined FUN_141787558(void)

undefined8 FUN_141787558(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if ((cVar1 != '\0') && ((*(ulonglong *)(param_1 + 0x1c) & 0x2000000000001) != 0)) {
    uVar2 = FUN_14107ca03(6,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141787596 FUN_141787596 body=54 status=ok
// SIG undefined FUN_141787596(void)

ulonglong FUN_141787596(undefined2 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0x1c);
    if ((uVar2 >> 0x31 & 1) == 0) {
      uVar2 = uVar2 & 0xffffffffffffff01;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1417875cc FUN_1417875cc body=61 status=ok
// SIG undefined FUN_1417875cc(void)

undefined8 FUN_1417875cc(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if ((cVar1 != '\0') && ((*(ulonglong *)(param_1 + 0x1c) & 0x2000000000001) != 0)) {
    uVar2 = FUN_14107ca03(7,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14178760a FUN_14178760a body=54 status=ok
// SIG undefined FUN_14178760a(void)

ulonglong FUN_14178760a(undefined2 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0x1c);
    if ((uVar2 >> 0x31 & 1) == 0) {
      uVar2 = uVar2 & 0xffffffffffffff01;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 141787640 FUN_141787640 body=650 status=ok
// SIG undefined FUN_141787640(void)

void FUN_141787640(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  short sVar12;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ushort uVar13;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar7 != 0) {
    piVar1 = (int *)(param_1 + 0x28);
    do {
      uVar15 = uStack_50;
      puVar5 = *(ushort **)(param_1 + 0x38);
      uVar3 = *puVar5;
      *(uint *)(param_1 + 0x28) = iVar7 - 1U;
      *puVar5 = puVar5[iVar7 - 1U];
      *(undefined2 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)**(ushort **)(param_1 + 0x38) * 2)
           = 0;
      *(undefined2 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar3 * 2) = 0xffff;
      uVar8 = *(uint *)(param_1 + 0x28);
      if (1 < uVar8) {
        uVar4 = **(ushort **)(param_1 + 0x38);
        sVar12 = 0;
        uVar11 = 0;
        uVar9 = 1;
        do {
          uVar13 = sVar12 + 2;
          lVar14 = *(longlong *)(param_1 + 0x38);
          lVar6 = *(longlong *)(param_1 + 0x40);
          if ((uVar13 < uVar8) &&
             (*(uint *)(lVar6 + (ulonglong)*(ushort *)(lVar14 + (ulonglong)(uint)uVar13 * 2) * 4) <=
              *(uint *)(lVar6 + (ulonglong)*(ushort *)(lVar14 + (ulonglong)uVar9 * 2) * 4))) {
            uVar9 = uVar13;
          }
          uVar13 = *(ushort *)(lVar14 + (ulonglong)uVar9 * 2);
          if (*(uint *)(lVar6 + (ulonglong)uVar4 * 4) <= *(uint *)(lVar6 + (ulonglong)uVar13 * 4))
          break;
          *(ushort *)(lVar14 + (ulonglong)((uint)uVar11 * 2)) = uVar13;
          *(ushort *)
           (*(longlong *)(param_1 + 0x48) +
           (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x38) + (ulonglong)((uint)uVar11 * 2)) * 2
           ) = uVar11;
          sVar12 = uVar9 * 2;
          uVar13 = uVar9 * 2 + 1;
          uVar8 = *(uint *)(param_1 + 0x28);
          uVar11 = uVar9;
          uVar9 = uVar13;
        } while (uVar13 < uVar8);
        if (uVar11 != 0) {
          *(ushort *)(*(longlong *)(param_1 + 0x38) + (ulonglong)((uint)uVar11 * 2)) = uVar4;
          *(ushort *)
           (*(longlong *)(param_1 + 0x48) +
           (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x38) + (ulonglong)((uint)uVar11 * 2)) * 2
           ) = uVar11;
        }
      }
      lVar14 = (longlong)(int)uStack_50;
      uVar8 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
      if (uStack_50._4_4_ < uVar8) {
        FUN_14488eebe(&local_58,uVar15 & 0xffffffff);
      }
      *(ushort *)(local_58 + lVar14 * 2) = uVar3;
      iVar7 = *piVar1;
    } while (iVar7 != 0);
    if (0 < (int)uStack_50) {
      lVar14 = 0;
      do {
        FUN_145731d18(param_1,param_2,*(undefined2 *)(local_58 + lVar14 * 2),1);
        uVar3 = *(ushort *)(local_58 + lVar14 * 2);
        if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x2c)) {
          uVar8 = *(int *)(param_1 + 0x28) * 2;
          uVar10 = 0x20;
          if (0x20 < uVar8) {
            uVar10 = uVar8;
          }
          FUN_145740042(piVar1,uVar10);
        }
        uVar15 = (ulonglong)uVar3;
        if (*(uint *)(param_1 + 0x30) <= (uint)uVar3) {
          uVar2 = uVar15 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          uVar8 = 1 << ((byte)lVar6 & 0x1f);
          if (uVar8 < 0x21) {
            uVar8 = 0x20;
          }
          FUN_1457400ca(piVar1,uVar8);
        }
        uVar8 = *(uint *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = uVar8 + 1;
        *(ushort *)(*(longlong *)(param_1 + 0x38) + ((ulonglong)uVar8 & 0xffff) * 2) = uVar3;
        *(undefined4 *)(*(longlong *)(param_1 + 0x40) + uVar15 * 4) = 0;
        *(short *)(*(longlong *)(param_1 + 0x48) + uVar15 * 2) = (short)uVar8;
        FUN_1456e6cf4(piVar1);
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)uStack_50);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417878cc FUN_1417878cc body=1050 status=ok
// SIG undefined FUN_1417878cc(void)

void FUN_1417878cc(ulonglong *param_1,undefined8 *param_2,int *param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (7 < DAT_14ca6ff18) {
    lVar12 = *(longlong *)(DAT_14ca6ff10[1] + (longlong)(int)DAT_14ca6ff20 * 8);
    if (lVar12 != 0) {
      *(undefined8 *)(DAT_14ca6ff10[1] + (longlong)(int)DAT_14ca6ff20 * 8) = 0;
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    DAT_14ca6ff18 = DAT_14ca6ff18 - 1;
    DAT_14ca6ff20 = DAT_14ca6ff20 + 1 & 7;
  }
  uVar11 = (ulonglong)DAT_14ca6ff1c;
  lVar12 = uVar11 * 0x60;
  (&DAT_14ca6fc18)[uVar11 * 0x18] = param_3[2];
  (&DAT_14ca6fc10)[uVar11 * 0xc] = *(undefined8 *)param_3;
  lVar13 = 0;
  do {
    *(undefined8 *)(&DAT_14ca6fc1c + lVar13 + lVar12) =
         *(undefined8 *)((longlong)param_3 + lVar13 + 0xc);
    *(undefined8 *)(&DAT_14ca6fc24 + lVar13 + lVar12) =
         *(undefined8 *)((longlong)param_3 + lVar13 + 0x14);
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x40);
  *(int *)(&DAT_14ca6fc5c + uVar11 * 0xc) = param_3[0x13];
  uVar10 = -*(uint *)((longlong)param_1 + 0x17c) & *(uint *)((longlong)param_1 + 0x17c);
  *(uint *)((longlong)&DAT_14ca6fc5c + lVar12 + 4) = uVar10;
  uVar3 = *(uint *)((longlong)param_1 + 0x17c);
  if (uVar3 != uVar10) {
    *(uint *)((longlong)param_1 + 0x17c) = uVar10;
    puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar14 + 3;
    if ((undefined8 *)param_1[1] < puVar17) {
      FUN_140023dd8(param_1,0x20);
      puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar14 + 3;
    }
    *param_1 = (ulonglong)puVar17;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar14;
    param_1[6] = (ulonglong)(puVar14 + 1);
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x17c);
    puVar14[1] = 0;
    *puVar14 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar14 + 2) = uVar6;
  }
  iVar4 = *param_3;
  iVar5 = param_3[1];
  uVar7 = (&DAT_14ca6fc68)[uVar11 * 0xc];
  uVar8 = *param_2;
  puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar17 = puVar14 + 5;
  if ((undefined8 *)param_1[1] < puVar17) {
    FUN_140023dd8(param_1,0x30);
    puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar14 + 5;
  }
  *param_1 = (ulonglong)puVar17;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar14;
  param_1[6] = (ulonglong)(puVar14 + 1);
  puVar14[1] = 0;
  *puVar14 = &PTR_FUN_14a338558;
  puVar14[2] = uVar8;
  puVar14[3] = uVar7;
  *(undefined4 *)(puVar14 + 4) = 0;
  *(int *)((longlong)puVar14 + 0x24) = iVar4 * iVar5 * 4;
  plVar9 = DAT_14ca6ff10;
  lVar13 = (longlong)(int)DAT_14ca6ff1c;
  lVar12 = *(longlong *)(DAT_14ca6ff10[1] + lVar13 * 8);
  if (lVar12 != 0) {
    *(undefined8 *)(DAT_14ca6ff10[1] + lVar13 * 8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar12 + 8);
    uVar10 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar12 + 8);
      LOCK();
      uVar10 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar12 + 0xd);
        plVar15 = (longlong *)FUN_14001cc68(0x10,8);
        plVar15[1] = lVar12;
        plVar18 = DAT_14ca843c0;
        plVar16 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar15 = (longlong)plVar18;
            LOCK();
            bVar19 = plVar18 != DAT_14ca843c0;
            plVar16 = plVar15;
            if (bVar19) {
              plVar18 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar16;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar15 = (longlong)plVar16;
            LOCK();
            bVar19 = plVar16 != DAT_14ca843c8;
            plVar18 = plVar15;
            if (bVar19) {
              plVar16 = DAT_14ca843c8;
              plVar18 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar18;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
  (**(code **)(*DAT_14ca83900 + 0x290))(DAT_14ca83900,&local_40,2);
  plVar18 = (longlong *)(lVar13 * 8 + plVar9[1]);
  if (plVar18 != &local_40) {
    lVar12 = *plVar18;
    *plVar18 = local_40;
    local_40 = 0;
    if (lVar12 == 0) goto LAB_141787a99;
    LOCK();
    puVar1 = (uint *)(lVar12 + 8);
    uVar10 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_40 != 0) {
    LOCK();
    puVar1 = (uint *)(local_40 + 8);
    uVar10 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_141787a99:
  if (((char)plVar9[3] == '\0') && (*plVar9 != 0)) {
    (**(code **)(*DAT_14ca83900 + 0xc0))(DAT_14ca83900,param_1);
    *(undefined1 *)(plVar9 + 3) = 1;
  }
  (**(code **)(*DAT_14ca83900 + 0x2b0))
            (DAT_14ca83900,param_1,
             *(undefined8 *)(DAT_14ca6ff10[1] + (longlong)(int)DAT_14ca6ff1c * 8));
  DAT_14ca6ff1c = DAT_14ca6ff1c + 1 & 7;
  DAT_14ca6ff18 = DAT_14ca6ff18 + 1;
  if (*(uint *)((longlong)param_1 + 0x17c) != uVar3) {
    *(uint *)((longlong)param_1 + 0x17c) = uVar3;
    puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar14 + 3;
    if ((undefined8 *)param_1[1] < puVar17) {
      FUN_140023dd8(param_1,0x20);
      puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar14 + 3;
    }
    *param_1 = (ulonglong)puVar17;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar14;
    param_1[6] = (ulonglong)(puVar14 + 1);
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x17c);
    puVar14[1] = 0;
    *puVar14 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar14 + 2) = uVar6;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141787ce8 FUN_141787ce8 body=29 status=ok
// SIG undefined FUN_141787ce8(void)

undefined8 FUN_141787ce8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141787d14 FUN_141787d14 body=29 status=ok
// SIG undefined FUN_141787d14(void)

undefined8 FUN_141787d14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141787d32 FUN_141787d32 body=337 status=ok
// SIG undefined FUN_141787d32(void)

void FUN_141787d32(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141787d9f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_141787d9f:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,4);
  }
  return;
}



// FUNCTION 141787e84 FUN_141787e84 body=40 status=ok
// SIG undefined FUN_141787e84(void)

undefined8 FUN_141787e84(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141787eac FUN_141787eac body=313 status=ok
// SIG undefined FUN_141787eac(void)

void FUN_141787eac(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141787f16;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141787f16:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 141787fe6 FUN_141787fe6 body=320 status=ok
// SIG undefined FUN_141787fe6(void)

void FUN_141787fe6(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14178804f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14178804f:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 141788126 FUN_141788126 body=1972 status=ok
// SIG undefined FUN_141788126(void)

void FUN_141788126(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  uint param_5)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar12;
  code *pcVar13;
  undefined1 *puVar14;
  uint uVar15;
  short sVar16;
  ulonglong uVar17;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong *local_140;
  undefined8 *local_138;
  longlong *local_130;
  uint local_128;
  uint local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 *local_108;
  uint local_f8;
  uint local_f4;
  longlong *local_f0;
  uint local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  code *pcVar11;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar10 = *(longlong **)(param_2 + 0xc0);
  do {
    if (plVar10 == (longlong *)0x0) {
LAB_14178819c:
      if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    plVar6 = (longlong *)(**(code **)(*plVar10 + 0x30))(plVar10,*(undefined4 *)(param_1 + 0x20));
    if (plVar6 != (longlong *)0x0) {
      if (((*(byte *)(param_2 + 0xe8) & 1) == 0) ||
         (iVar4 = (**(code **)(*plVar6 + 0x30))(plVar6), iVar4 != 0)) goto LAB_14178819c;
      pcVar11 = *(code **)(*plVar6 + 0x270);
      plVar8 = plVar6;
      if (pcVar11 == (code *)&LAB_1447f82f4) {
        plVar8 = (longlong *)plVar6[9];
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)plVar6[8];
          pcVar11 = *(code **)(*plVar8 + 0x408);
          if (pcVar11 != (code *)&LAB_14470b702) goto LAB_14178879e;
          bVar2 = *(byte *)((longlong)plVar8 + 0x129);
          if (bVar2 == 1) {
            bVar2 = ~*(byte *)((longlong)plVar8 + 0x1d6) & 1;
          }
          uVar5 = (uint)bVar2;
        }
        else {
          pcVar11 = *(code **)(*plVar8 + 0x408);
          if (pcVar11 != (code *)&LAB_14497e176) goto LAB_14178879e;
          uVar5 = (uint)*(byte *)(plVar8 + 0x2b);
        }
      }
      else {
LAB_14178879e:
        uVar5 = (*pcVar11)(plVar8);
      }
      if (1 < uVar5) goto LAB_14178819c;
      uVar5 = *(uint *)(param_2 + 0xe4);
      pcVar11 = *(code **)(*plVar6 + 0x38);
      plVar8 = plVar6;
      if (pcVar11 == FUN_144765e18) {
        plVar8 = (longlong *)plVar6[9];
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)plVar6[8];
          pcVar11 = *(code **)(*plVar8 + 0x420);
          pcVar13 = (code *)&LAB_144b24e8a;
        }
        else {
          pcVar11 = *(code **)(*plVar8 + 0x420);
          pcVar13 = (code *)&LAB_14497e108;
        }
        if (pcVar11 != pcVar13) goto LAB_1417887a8;
      }
      else {
LAB_1417887a8:
        (*pcVar11)(plVar8);
      }
      lVar7 = *plVar6;
      if (*(code **)(lVar7 + 0x100) == (code *)&LAB_144b25520) {
        bVar2 = (*(byte *)(plVar6[8] + 0x1d0) & 0x40) >> 6;
      }
      else {
        bVar2 = (**(code **)(lVar7 + 0x100))(plVar6);
        lVar7 = *plVar6;
      }
      local_f4 = 2 - ((uVar5 >> 0xc & 1) != 0);
      if (bVar2 != 0) {
        local_f4 = 1;
      }
      pcVar11 = *(code **)(lVar7 + 0x38);
      plVar8 = plVar6;
      if (pcVar11 == FUN_144765e18) {
        plVar8 = (longlong *)plVar6[9];
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)plVar6[8];
          pcVar11 = *(code **)(*plVar8 + 0x420);
          if (pcVar11 != (code *)&LAB_144b24e8a) goto LAB_1417887cb;
          bVar2 = *(byte *)(plVar8 + 0x30);
        }
        else {
          pcVar11 = *(code **)(*plVar8 + 0x420);
          if (pcVar11 != (code *)&LAB_14497e108) goto LAB_1417887cb;
          bVar2 = *(byte *)(plVar8 + 0x2a);
        }
        bVar2 = (bVar2 & 0x10) >> 4;
      }
      else {
LAB_1417887cb:
        bVar2 = (*pcVar11)(plVar8);
      }
      uVar15 = 0;
      local_f8 = 2 - ((uVar5 & 0x40) == 0);
      if (bVar2 != 0) {
        local_f8 = uVar15;
      }
      if ((char)uVar5 < '\0') {
        local_f8 = 0;
      }
      local_e0 = *(longlong **)(param_2 + 0xb8);
      local_e4 = uVar5;
      lVar7 = (**(code **)(*local_e0 + 0x30))();
      uVar1 = *(undefined4 *)(lVar7 + 0x28);
      if (plVar6[3] != 0) {
        if ((*(byte *)(*(longlong *)(plVar6[3] + 0x28) + 0x246) & 8) == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = 1;
          cVar3 = FUN_144b26b83();
          if (cVar3 != '\0') {
            uVar15 = (uint)((*(byte *)(param_4 + 0x75) & 4) >> 2);
          }
        }
      }
      pcVar11 = *(code **)(*plVar6 + 0x270);
      plVar8 = plVar6;
      if (pcVar11 == (code *)&LAB_1447f82f4) {
        plVar8 = (longlong *)plVar6[9];
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)plVar6[8];
          pcVar11 = *(code **)(*plVar8 + 0x408);
          if (pcVar11 != (code *)&LAB_14470b702) goto LAB_1417887fc;
          bVar2 = *(byte *)((longlong)plVar8 + 0x129);
          if (bVar2 == 1) {
            bVar2 = ~*(byte *)((longlong)plVar8 + 0x1d6) & 1;
          }
          uVar5 = (uint)bVar2;
        }
        else {
          pcVar11 = *(code **)(*plVar8 + 0x408);
          if (pcVar11 != (code *)&LAB_14497e176) goto LAB_1417887fc;
          uVar5 = (uint)*(byte *)(plVar8 + 0x2b);
        }
      }
      else {
LAB_1417887fc:
        uVar5 = (*pcVar11)(plVar8);
      }
      sVar16 = (short)uVar1;
      if (((uVar5 == 0) &&
          (cVar3 = (**(code **)(*local_e0 + 0x38))(), cVar3 == '\x01' && (char)uVar15 == '\0')) &&
         (cVar3 = FUN_1447e4184(plVar6,0,-1 < sVar16), cVar3 != '\0')) {
        FUN_14003fbd6();
        plVar6 = (longlong *)(**(code **)(*DAT_14caea080 + 0x2f0))();
        local_138 = (undefined8 *)
                    (**(code **)(*plVar6 + 0x30))(plVar6,*(undefined4 *)(param_1 + 0x20));
        local_128 = local_f8;
        local_130 = (longlong *)CONCAT44(local_130._4_4_,local_f4);
        local_148 = (longlong *)CONCAT44(local_148._4_4_,param_5);
        local_140 = plVar6;
        cVar3 = FUN_1473484d0(param_1,param_2,param_3,param_4);
        if (cVar3 != '\0') goto LAB_14178819c;
      }
      else {
        cVar3 = FUN_1447e4184(plVar6,0,-1 < sVar16);
        plVar8 = plVar10;
        if ((char)uVar15 == '\0' && cVar3 == '\x01') {
          FUN_14003fbd6();
          plVar8 = (longlong *)(**(code **)(*DAT_14caea080 + 0x2f0))();
          plVar6 = (longlong *)(**(code **)(*plVar8 + 0x30))(plVar8,*(undefined4 *)(param_1 + 0x20))
          ;
        }
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        if (plVar6[2] == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = CONCAT71((int7)((ulonglong)plVar8 >> 8),
                            *(undefined1 *)(*(longlong *)(plVar6[2] + 0x28) + 0x246)) &
                   0xffffffffffffff40;
          uVar17 = CONCAT71((int7)(uVar17 >> 8),(byte)uVar17 >> 6);
        }
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        local_f0 = plVar8;
        uVar9 = (**(code **)(*local_e0 + 0x30))();
        local_138 = &local_c8;
        local_140 = &local_a8;
        local_148 = &local_b8;
        cVar3 = FUN_1447e3edc(plVar6,uVar9,uVar1,uVar17 & 0xffffffff);
        plVar8 = local_f0;
        if (cVar3 != '\0') {
          lVar7 = *(longlong *)(param_1 + 0x28);
          local_d8 = DAT_14ca44d40;
          local_d0 = DAT_14ca44d68;
          if (lVar7 != 0) {
            if ((-1 < (int)param_5 && (local_e4 >> 0x18 & 1) != 0) &&
               (*(char *)(lVar7 + 0x13821) == '\0')) {
              lVar12 = lVar7 + 0x3208;
              if (*(longlong *)(lVar7 + 0x3218) != 0) {
                lVar12 = *(longlong *)(lVar7 + 0x3218);
              }
              if ((*(uint *)(lVar12 + (ulonglong)(param_5 >> 5) * 4) >> (param_5 & 0x1f) & 1) == 0)
              {
                lVar12 = lVar7 + 0x3228;
                if (*(longlong *)(lVar7 + 0x3238) != 0) {
                  lVar12 = *(longlong *)(lVar7 + 0x3238);
                }
                if ((*(uint *)(lVar12 + (ulonglong)(param_5 >> 5) * 4) & 1 << ((byte)param_5 & 0x1f)
                    ) == 0) goto LAB_1417884fc;
                lVar12 = 0x31c8;
              }
              else {
                lVar12 = 0x31d0;
              }
              local_d0 = *(undefined8 *)(lVar7 + lVar12);
            }
LAB_1417884fc:
            if (param_4 != 0) {
              uVar5 = *(uint *)(*(longlong *)(param_4 + 0x218) + 0x158);
              if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar7 + 0x31c0))) {
                puVar14 = &DAT_000031a8 + lVar7;
                if (*(undefined1 **)(lVar7 + 0x31b8) != (undefined1 *)0x0) {
                  puVar14 = *(undefined1 **)(lVar7 + 0x31b8);
                }
                if ((*(uint *)(puVar14 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
                  local_d8 = *(undefined8 *)(*(longlong *)(lVar7 + 0x3198) + (ulonglong)uVar5 * 8);
                }
              }
            }
          }
          pcVar11 = *(code **)(*plVar6 + 0x270);
          plVar10 = plVar6;
          if (pcVar11 == (code *)&LAB_1447f82f4) {
            plVar10 = (longlong *)plVar6[9];
            if (plVar10 == (longlong *)0x0) {
              plVar10 = (longlong *)plVar6[8];
              pcVar11 = *(code **)(*plVar10 + 0x408);
              if (pcVar11 != (code *)&LAB_14470b702) goto LAB_14178889e;
              bVar2 = *(byte *)((longlong)plVar10 + 0x129);
              if (bVar2 == 1) {
                bVar2 = ~*(byte *)((longlong)plVar10 + 0x1d6) & 1;
              }
              uVar5 = (uint)bVar2;
            }
            else {
              pcVar11 = *(code **)(*plVar10 + 0x408);
              if (pcVar11 != (code *)&LAB_14497e176) goto LAB_14178889e;
              uVar5 = (uint)*(byte *)(plVar10 + 0x2b);
            }
          }
          else {
LAB_14178889e:
            uVar5 = (*pcVar11)(plVar10);
          }
          local_118 = FUN_140299bde(uVar5 == 1,local_b8,local_a8);
          local_138 = (undefined8 *)(param_1 + 0x40);
          local_108 = &local_d8;
          local_120 = local_f8;
          local_128 = local_f4;
          local_148 = plVar8;
          local_110 = 0;
          local_140 = plVar6;
          local_130 = &local_b8;
          FUN_1400cdeaa(param_1,param_2,param_3,param_4);
          goto LAB_14178819c;
        }
      }
    }
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x38))(plVar10,*(undefined4 *)(param_1 + 0x20));
  } while( true );
}



// FUNCTION 1417888dc FUN_1417888dc body=1515 status=ok
// SIG undefined FUN_1417888dc(void)

void FUN_1417888dc(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5,undefined8 param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar8;
  code *pcVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  byte bVar12;
  longlong *plVar13;
  undefined8 uVar14;
  short sVar15;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  uint local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined8 local_120;
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
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  code *pcVar7;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar13 = param_4;
  iVar3 = (**(code **)(*param_3 + 0x30))(param_3);
  if (iVar3 != 0) goto LAB_141788b73;
  pcVar7 = *(code **)(*param_3 + 0x270);
  plVar8 = param_3;
  if (pcVar7 == (code *)&LAB_1447f82f4) {
    plVar8 = (longlong *)param_3[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)param_3[8];
      pcVar7 = *(code **)(*plVar8 + 0x408);
      if (pcVar7 != (code *)&LAB_14470b702) goto LAB_141788e84;
      bVar12 = *(byte *)((longlong)plVar8 + 0x129);
      if (bVar12 == 1) {
        bVar12 = ~*(byte *)((longlong)plVar8 + 0x1d6) & 1;
      }
      uVar4 = (uint)bVar12;
    }
    else {
      pcVar7 = *(code **)(*plVar8 + 0x408);
      if (pcVar7 != (code *)&LAB_14497e176) goto LAB_141788e84;
      uVar4 = (uint)*(byte *)(plVar8 + 0x2b);
    }
  }
  else {
LAB_141788e84:
    uVar4 = (*pcVar7)(plVar8);
  }
  if (1 < uVar4) goto LAB_141788b73;
  uVar10 = *param_5;
  pcVar7 = *(code **)(*param_3 + 0x38);
  plVar8 = param_3;
  if (pcVar7 == FUN_144765e18) {
    plVar8 = (longlong *)param_3[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)param_3[8];
      pcVar7 = *(code **)(*plVar8 + 0x420);
      pcVar9 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar7 = *(code **)(*plVar8 + 0x420);
      pcVar9 = (code *)&LAB_14497e108;
    }
    if (pcVar7 != pcVar9) goto LAB_141788e8e;
  }
  else {
LAB_141788e8e:
    (*pcVar7)(plVar8);
  }
  lVar6 = *param_3;
  if (*(code **)(lVar6 + 0x100) == (code *)&LAB_144b25520) {
    bVar12 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    bVar12 = (**(code **)(lVar6 + 0x100))(param_3);
    lVar6 = *param_3;
  }
  pcVar7 = *(code **)(lVar6 + 0x38);
  if (pcVar7 == FUN_144765e18) {
    plVar8 = (longlong *)param_3[9];
    if (plVar8 == (longlong *)0x0) {
      pcVar7 = *(code **)(*(longlong *)param_3[8] + 0x420);
      if (pcVar7 != (code *)&LAB_144b24e8a) goto LAB_141788ea7;
      bVar1 = *(byte *)((longlong *)param_3[8] + 0x30);
    }
    else {
      pcVar7 = *(code **)(*plVar8 + 0x420);
      if (pcVar7 != (code *)&LAB_14497e108) goto LAB_141788ea7;
      bVar1 = *(byte *)(plVar8 + 0x2a);
    }
    bVar1 = (bVar1 & 0x10) >> 4;
  }
  else {
LAB_141788ea7:
    bVar1 = (*pcVar7)();
  }
  iVar3 = (((uint)uVar10 >> 0x10 & 1) != 0) + 1;
  if (bVar1 != 0) {
    iVar3 = 0;
  }
  if ((uVar10 & 0x20000) != 0) {
    iVar3 = 0;
  }
  uVar4 = *(uint *)(*param_4 + 0x28);
  pcVar7 = *(code **)(*param_3 + 0x270);
  plVar8 = param_3;
  if (pcVar7 == (code *)&LAB_1447f82f4) {
    plVar8 = (longlong *)param_3[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)param_3[8];
      pcVar7 = *(code **)(*plVar8 + 0x408);
      if (pcVar7 != (code *)&LAB_14470b702) goto LAB_141788eb1;
      bVar1 = *(byte *)((longlong)plVar8 + 0x129);
      if (bVar1 == 1) {
        bVar1 = ~*(byte *)((longlong)plVar8 + 0x1d6) & 1;
      }
      uVar5 = (uint)bVar1;
    }
    else {
      pcVar7 = *(code **)(*plVar8 + 0x408);
      if (pcVar7 != (code *)&LAB_14497e176) goto LAB_141788eb1;
      uVar5 = (uint)*(byte *)(plVar8 + 0x2b);
    }
  }
  else {
LAB_141788eb1:
    uVar5 = (*pcVar7)(plVar8);
  }
  sVar15 = (short)uVar4;
  uVar11 = (undefined7)((ulonglong)param_3 >> 8);
  if ((((uVar4 & 0x20) != 0) && (uVar5 == 0)) &&
     ((param_3[2] == 0 || ((*(byte *)(*(longlong *)(param_3[2] + 0x28) + 0x246) & 8) == 0)))) {
    cVar2 = FUN_1447e4184(param_3,0,-1 < sVar15);
    if (cVar2 != '\0') {
      uVar10 = CONCAT71(uVar11,DAT_14cb0cc00);
      FUN_14003fbd6();
      lVar6 = (**(code **)(*DAT_14caea080 + 0x350))
                        (DAT_14caea080,*(undefined4 *)(param_1 + 0x20),uVar10 & 0xffffffff);
      local_160 = &local_f8;
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
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        uVar14 = 0;
      }
      else {
        uVar10 = CONCAT71((int7)((ulonglong)plVar13 >> 8),
                          *(undefined1 *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x28) + 0x246)
                         ) & 0xffffffffffffff40;
        uVar14 = CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 >> 6);
      }
      local_158 = &local_118;
      local_168 = &local_108;
      cVar2 = FUN_1400cee52(lVar6,*param_4,*(undefined4 *)(param_1 + 0x20),uVar14);
      if (cVar2 != '\0') {
        local_b0 = 0;
        local_b8 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_50 = 1;
        local_68 = 0xb;
        local_60 = 0xc;
        local_58 = 0x200000102;
        local_150 = (uint)*param_5 & 0x3f;
        local_128 = *(undefined4 *)(param_1 + 8);
        local_120 = param_6;
        local_138 = 0;
        local_140 = 0;
        local_148 = 1;
        local_158 = (undefined8 *)CONCAT44(local_158._4_4_,iVar3);
        local_160 = (undefined8 *)CONCAT44(local_160._4_4_,2 - (uint)bVar12);
        local_130 = 1;
        local_168 = &local_108;
        FUN_140b09aec(param_4,lVar6,param_1 + 0x40);
      }
      goto LAB_141788b73;
    }
  }
  cVar2 = FUN_1447e4184(param_3,0,-1 < sVar15);
  if ((cVar2 != '\0') &&
     ((param_3[2] == 0 || ((*(byte *)(*(longlong *)(param_3[2] + 0x28) + 0x246) & 8) == 0)))) {
    uVar10 = CONCAT71(uVar11,DAT_14cb0cc00);
    FUN_14003fbd6();
    param_3 = (longlong *)
              (**(code **)(*DAT_14caea080 + 0x350))
                        (DAT_14caea080,*(undefined4 *)(param_1 + 0x20),uVar10 & 0xffffffff);
  }
  local_160 = &local_f8;
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
  if (param_3[2] == 0) {
    uVar14 = 0;
  }
  else {
    uVar10 = CONCAT71((int7)((ulonglong)plVar13 >> 8),
                      *(undefined1 *)(*(longlong *)(param_3[2] + 0x28) + 0x246)) &
             0xffffffffffffff40;
    uVar14 = CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 >> 6);
  }
  local_158 = &local_118;
  local_168 = &local_108;
  cVar2 = FUN_1447e3edc(param_3,*param_4,*(undefined4 *)(param_1 + 0x20),uVar14);
  if (cVar2 != '\0') {
    local_b0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = 1;
    local_68 = 0xb;
    local_60 = 0xc;
    local_58 = 0x200000102;
    local_150 = (uint)*param_5 & 0x3f;
    local_128 = *(undefined4 *)(param_1 + 8);
    local_120 = param_6;
    local_138 = 0;
    local_140 = 0;
    local_148 = 0;
    local_158 = (undefined8 *)CONCAT44(local_158._4_4_,iVar3);
    local_160 = (undefined8 *)CONCAT44(local_160._4_4_,2 - (uint)bVar12);
    local_130 = 1;
    local_168 = &local_108;
    FUN_140b07aec(param_4,param_3,param_1 + 0x40);
  }
LAB_141788b73:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141788ec8 FUN_141788ec8 body=514 status=ok
// SIG undefined FUN_141788ec8(void)

void FUN_141788ec8(longlong *param_1,undefined2 *param_2,void *param_3,int param_4)

{
  ulonglong *puVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  void *_Dst_00;
  longlong lVar10;
  size_t _Size;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  
  uVar7 = (uint)(ushort)param_2[2] + param_4 * -0x10;
  if ((int)uVar7 < 1) {
    return;
  }
  _Size = 0x10;
  if (uVar7 < 0x10) {
    _Size = (size_t)uVar7;
  }
  uVar2 = *param_2;
  sVar3 = param_2[1];
  iVar4 = (int)param_1[2];
  iVar13 = iVar4 + (int)_Size;
  lVar5 = *param_1;
  puVar1 = (ulonglong *)(lVar5 + 0x10);
  _Dst_00 = *(void **)(lVar5 + 0x10);
  uVar6 = *(ulonglong *)(lVar5 + 0x18);
  uVar12 = (longlong)_Dst_00 + _Size;
  if (iVar4 == 0) {
    if (uVar6 < uVar12) {
      FUN_140023dd8(puVar1,(int)_Size + 1);
      _Dst_00 = (void *)*puVar1;
      uVar12 = (longlong)_Dst_00 + _Size;
    }
    *puVar1 = uVar12;
    _Dst = _Dst_00;
  }
  else if (uVar6 < uVar12) {
    uVar12 = (longlong)_Dst_00 + (longlong)iVar13;
    _Dst = _Dst_00;
    if (uVar6 < uVar12) {
      FUN_140023dd8(puVar1,iVar13 + 1);
      _Dst = (void *)*puVar1;
      uVar12 = (longlong)iVar13 + (longlong)_Dst;
    }
    *puVar1 = uVar12;
    memcpy(_Dst,(void *)param_1[1],(longlong)(int)param_1[2]);
    _Dst_00 = (void *)((longlong)(int)param_1[2] + (longlong)_Dst);
  }
  else {
    _Dst = (void *)param_1[1];
    *puVar1 = uVar12;
  }
  memcpy(_Dst_00,param_3,_Size);
  param_1[1] = (longlong)_Dst;
  *(int *)(param_1 + 2) = iVar13;
  lVar10 = *param_1;
  puVar1 = (ulonglong *)(lVar10 + 0x38);
  lVar5 = (longlong)(int)param_1[4] + 1;
  puVar8 = *(undefined8 **)(lVar10 + 0x38);
  if ((longlong)(int)param_1[4] == 0) {
    puVar8 = (undefined8 *)((longlong)puVar8 + 1U & 0xfffffffffffffffe);
    puVar11 = puVar8 + 1;
    puVar9 = puVar8;
    if (*(undefined8 **)(lVar10 + 0x40) < puVar11) {
      FUN_140023dd8(puVar1,10);
      puVar8 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
      puVar11 = puVar8 + 1;
      puVar9 = puVar8;
    }
  }
  else {
    puVar11 = puVar8 + 1;
    if (*(undefined8 **)(lVar10 + 0x40) < puVar11) {
      puVar9 = (undefined8 *)((longlong)puVar8 + 1U & 0xfffffffffffffffe);
      puVar8 = puVar9 + lVar5;
      if (*(undefined8 **)(lVar10 + 0x40) < puVar8) {
        FUN_140023dd8(puVar1);
        puVar9 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
        puVar8 = puVar9 + lVar5;
      }
      *puVar1 = (ulonglong)puVar8;
      puVar8 = puVar9;
      if (0 < (int)param_1[4]) {
        lVar10 = 0;
        do {
          *puVar8 = *(undefined8 *)(param_1[3] + lVar10 * 8);
          lVar10 = lVar10 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar10 < (int)param_1[4]);
      }
      goto LAB_141788f86;
    }
    puVar9 = (undefined8 *)param_1[3];
  }
  *puVar1 = (ulonglong)puVar11;
LAB_141788f86:
  *(undefined2 *)puVar8 = uVar2;
  *(short *)((longlong)puVar8 + 2) = sVar3 + (short)param_4 * 0x10;
  *(short *)((longlong)puVar8 + 4) = (short)iVar4;
  *(short *)((longlong)puVar8 + 6) = (short)_Size;
  param_1[3] = (longlong)puVar9;
  *(int *)(param_1 + 4) = (int)lVar5;
  return;
}



// FUNCTION 1417890ca FUN_1417890ca body=156 status=ok
// SIG undefined FUN_1417890ca(void)

undefined8 *
FUN_1417890ca(undefined8 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(param_1 + 2) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_5 + 1);
  _Src = (void *)*param_5;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_6;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  return param_1;
}



// FUNCTION 141789166 FUN_141789166 body=916 status=ok
// SIG undefined FUN_141789166(void)

void FUN_141789166(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_144758a76(param_1 + 0x3740);
  FUN_14476cc36(param_1);
  *(undefined2 *)(param_1 + 0x3600) = 0x101;
  *(undefined1 *)(param_1 + 0xb28) = 1;
  *(undefined1 *)(param_1 + 0x3c8) = 1;
  *(undefined1 *)(param_1 + 0x3b4) = 1;
  if (*(int *)(param_1 + 0x96c) != 0) {
    *(undefined1 *)(param_1 + 0x3b0) = 1;
  }
  *(undefined8 *)(param_1 + 0x970) = 0;
  *(undefined8 *)(param_1 + 0x978) = 0;
  if ((*(int *)(param_1 + 0xaf8) != 0) || (*(longlong *)(param_1 + 0xb00) != 0)) {
    *(undefined1 *)(param_1 + 0x3b1) = 1;
  }
  if (*(int *)(param_1 + 0x3e0) != 0) {
    *(undefined1 *)(param_1 + 0x3b2) = 1;
  }
  if (*(int *)(param_1 + 0xa90) != 0) {
    *(undefined1 *)(param_1 + 0x3b3) = 1;
  }
  if ((((*(float *)(param_1 + 0x3d0) != 1.0) || (NAN(*(float *)(param_1 + 0x3d0)))) ||
      (*(float *)(param_1 + 0x3d4) != 1.0)) ||
     (((NAN(*(float *)(param_1 + 0x3d4)) || (*(float *)(param_1 + 0x3d8) != 1.0)) ||
      ((NAN(*(float *)(param_1 + 0x3d8)) ||
       ((*(float *)(param_1 + 0x3dc) != 1.0 || (NAN(*(float *)(param_1 + 0x3dc)))))))))) {
    *(undefined1 *)(param_1 + 0x3b5) = 1;
  }
  if (*(int *)(param_1 + 0x3cc) != 0) {
    *(undefined1 *)(param_1 + 0x3b6) = 1;
  }
  if ((((*(float *)(param_1 + 0xb08) != 0.0) || (NAN(*(float *)(param_1 + 0xb08)))) ||
      (*(float *)(param_1 + 0xb0c) != 1.0)) || (NAN(*(float *)(param_1 + 0xb0c)))) {
    *(undefined1 *)(param_1 + 0x3b7) = DAT_14ca84e1e;
  }
  *(undefined1 *)(param_1 + 0x3b8) = DAT_14ca84f32;
  *(undefined1 *)(param_1 + 0x3b9) = DAT_14ca84f34;
  *(undefined4 *)(param_1 + 0xb30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb5c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x23a8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x23b0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x29b8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x29c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2fe0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2fe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2fe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2fec) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2ff0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x3d70) = 0;
  if (*(int *)(param_1 + 0x3d74) == 1) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else {
    FUN_14475fe8c(param_1 + 0x3d60,1);
    iVar2 = *(int *)(param_1 + 0x3d70);
    uVar1 = *(uint *)(param_1 + 0x3d74);
  }
  *(uint *)(param_1 + 0x3d70) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_146f3c7b6(param_1 + 0x3d60);
  }
  lVar3 = param_1 + 0x3d78;
  *(undefined4 *)(param_1 + 0x3d88) = 0;
  if (*(int *)(param_1 + 0x3d8c) == 1) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else {
    FUN_14476002c(lVar3,1);
    iVar2 = *(int *)(param_1 + 0x3d88);
    uVar1 = *(uint *)(param_1 + 0x3d8c);
  }
  *(uint *)(param_1 + 0x3d88) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_147138312(lVar3,iVar2);
  }
  if (*(longlong *)(param_1 + 0x3d80) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x3d80);
  }
  FUN_14471858a(lVar3 + (longlong)iVar2 * 4,1);
  *(undefined4 *)(param_1 + 0x3d28) = 0;
  if (*(int *)(param_1 + 0x3d2c) != 0) {
    FUN_14736f36c(param_1 + 0x3d20,0);
  }
  lVar3 = param_1 + 0x3d40;
  uVar1 = *(uint *)(param_1 + 0x3d54);
  iVar2 = 0;
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_1 + 0x3d50) = 0;
    FUN_1456bda22(lVar3,1);
    iVar2 = *(int *)(param_1 + 0x3d50);
    uVar1 = *(uint *)(param_1 + 0x3d54);
  }
  *(uint *)(param_1 + 0x3d50) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_1400e0406(lVar3,iVar2);
  }
  if (*(longlong *)(param_1 + 0x3d48) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x3d48);
  }
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x3d58) = 0;
  *(undefined4 *)(param_1 + 0x3d38) = 0;
  if (*(int *)(param_1 + 0x3d3c) != 0) {
    FUN_1446fb5ec(param_1 + 0x3d30,0);
  }
  *(undefined8 *)(param_1 + 0x3d90) = 0;
  return;
}



// FUNCTION 1417894fa FUN_1417894fa body=1414 status=ok
// SIG undefined FUN_1417894fa(void)

void FUN_1417894fa(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (param_1[0x33] != 0) {
    if (*(code **)(*param_1 + 0x10) == FUN_141789166) {
      FUN_144758a76(param_1 + 0x6e8);
      FUN_14476cc36(param_1);
      *(undefined2 *)(param_1 + 0x6c0) = 0x101;
      *(undefined1 *)(param_1 + 0x165) = 1;
      *(undefined1 *)(param_1 + 0x79) = 1;
      *(undefined1 *)((longlong)param_1 + 0x3b4) = 1;
      if (*(int *)((longlong)param_1 + 0x96c) != 0) {
        *(undefined1 *)(param_1 + 0x76) = 1;
      }
      param_1[0x12e] = 0;
      param_1[0x12f] = 0;
      if (((int)param_1[0x15f] != 0) || (param_1[0x160] != 0)) {
        *(undefined1 *)((longlong)param_1 + 0x3b1) = 1;
      }
      if ((int)param_1[0x7c] != 0) {
        *(undefined1 *)((longlong)param_1 + 0x3b2) = 1;
      }
      if ((int)param_1[0x152] != 0) {
        *(undefined1 *)((longlong)param_1 + 0x3b3) = 1;
      }
      if ((((*(float *)(param_1 + 0x7a) != 1.0) || (NAN(*(float *)(param_1 + 0x7a)))) ||
          (*(float *)((longlong)param_1 + 0x3d4) != 1.0)) ||
         (((NAN(*(float *)((longlong)param_1 + 0x3d4)) || (*(float *)(param_1 + 0x7b) != 1.0)) ||
          ((NAN(*(float *)(param_1 + 0x7b)) ||
           ((*(float *)((longlong)param_1 + 0x3dc) != 1.0 ||
            (NAN(*(float *)((longlong)param_1 + 0x3dc)))))))))) {
        *(undefined1 *)((longlong)param_1 + 0x3b5) = 1;
      }
      if (*(int *)((longlong)param_1 + 0x3cc) != 0) {
        *(undefined1 *)((longlong)param_1 + 0x3b6) = 1;
      }
      if ((((*(float *)(param_1 + 0x161) != 0.0) || (NAN(*(float *)(param_1 + 0x161)))) ||
          (*(float *)((longlong)param_1 + 0xb0c) != 1.0)) ||
         (NAN(*(float *)((longlong)param_1 + 0xb0c)))) {
        *(undefined1 *)((longlong)param_1 + 0x3b7) = DAT_14ca84e1e;
      }
      *(undefined1 *)(param_1 + 0x77) = DAT_14ca84f32;
      *(undefined1 *)((longlong)param_1 + 0x3b9) = DAT_14ca84f34;
      *(undefined4 *)(param_1 + 0x166) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb34) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x167) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb3c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb44) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x169) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb4c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x16a) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb54) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x16b) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xb5c) = 0xffffffff;
      param_1[0x475] = -1;
      *(undefined4 *)(param_1 + 0x476) = 0xffffffff;
      param_1[0x537] = -1;
      *(undefined4 *)(param_1 + 0x538) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x5fc) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x2fe4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x5fd) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x2fec) = 0xffffffff;
      param_1[0x5fe] = -1;
      *(undefined4 *)(param_1 + 0x7ae) = 0;
      if (*(int *)((longlong)param_1 + 0x3d74) == 1) {
        iVar6 = 0;
        uVar2 = 1;
      }
      else {
        FUN_14475fe8c(param_1 + 0x7ac,1);
        iVar6 = (int)param_1[0x7ae];
        uVar2 = *(uint *)((longlong)param_1 + 0x3d74);
      }
      *(uint *)(param_1 + 0x7ae) = iVar6 + 1U;
      if (uVar2 < iVar6 + 1U) {
        FUN_146f3c7b6(param_1 + 0x7ac);
      }
      plVar5 = param_1 + 0x7af;
      *(undefined4 *)(param_1 + 0x7b1) = 0;
      if (*(int *)((longlong)param_1 + 0x3d8c) == 1) {
        iVar6 = 0;
        uVar2 = 1;
      }
      else {
        FUN_14476002c(plVar5,1);
        iVar6 = (int)param_1[0x7b1];
        uVar2 = *(uint *)((longlong)param_1 + 0x3d8c);
      }
      *(uint *)(param_1 + 0x7b1) = iVar6 + 1U;
      if (uVar2 < iVar6 + 1U) {
        FUN_147138312(plVar5,iVar6);
      }
      if ((longlong *)param_1[0x7b0] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x7b0];
      }
      FUN_14471858a((longlong)plVar5 + (longlong)iVar6 * 4,1);
      *(undefined4 *)(param_1 + 0x7a5) = 0;
      if (*(int *)((longlong)param_1 + 0x3d2c) != 0) {
        FUN_14736f36c(param_1 + 0x7a4,0);
      }
      plVar5 = param_1 + 0x7a8;
      uVar2 = *(uint *)((longlong)param_1 + 0x3d54);
      iVar6 = 0;
      if ((int)uVar2 < 1) {
        *(undefined4 *)(param_1 + 0x7aa) = 0;
        FUN_1456bda22(plVar5,1);
        iVar6 = (int)param_1[0x7aa];
        uVar2 = *(uint *)((longlong)param_1 + 0x3d54);
      }
      *(uint *)(param_1 + 0x7aa) = iVar6 + 1U;
      if (uVar2 < iVar6 + 1U) {
        FUN_1400e0406(plVar5,iVar6);
      }
      if ((longlong *)param_1[0x7a9] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x7a9];
      }
      plVar5[iVar6] = -1;
      *(undefined4 *)(param_1 + 0x7ab) = 0;
      *(undefined4 *)(param_1 + 0x7a7) = 0;
      if (*(int *)((longlong)param_1 + 0x3d3c) != 0) {
        FUN_1446fb5ec(param_1 + 0x7a6,0);
      }
      param_1[0x7b2] = 0;
    }
    else {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
  }
  iVar6 = (int)param_1[0x36];
  if ((iVar6 == 0) || (0 < (int)param_1[0x38])) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x310,0x10);
    lVar1 = *(longlong *)(param_1[1] + 0x1280);
    lVar4 = param_1[1] + 0xb00;
    if (lVar1 != 0) {
      lVar4 = lVar1;
    }
    puVar3[1] = (longlong)(int)param_1[2] * 0x280 + lVar4;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0x1800000000;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
    puVar3[0x3c] = 0;
    puVar3[0x3e] = 0;
    *(undefined1 *)(puVar3 + 0x4d) = 0;
    *(undefined1 *)(puVar3 + 0x4f) = 0;
    puVar3[0x5c] = 0;
    *(undefined4 *)(puVar3 + 0x5d) = 0;
    *(undefined1 (*) [16])(puVar3 + 0x39) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x37) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar3 + 0x3b) = 0;
    *(undefined1 (*) [16])(puVar3 + 0x4a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x48) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x46) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x44) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x58) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x56) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x54) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x52) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x50) = (undefined1  [16])0x0;
    *(undefined8 *)((longlong)puVar3 + 0x2ec) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar3 + 0x2f4) = 0;
    puVar3[0x60] = 0;
    *(undefined4 *)(puVar3 + 0x61) = 0;
    *puVar3 = &PTR_FUN_14a349180;
    iVar6 = (int)param_1[0x36];
    *(uint *)(param_1 + 0x36) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1b4) < iVar6 + 1U) {
      FUN_1447183c0(param_1 + 0x35,iVar6);
    }
    *(undefined8 **)(param_1[0x35] + (longlong)iVar6 * 8) = puVar3;
    iVar6 = (int)param_1[0x36];
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  lVar1 = *(longlong *)(param_1[0x35] + (longlong)(iVar6 + -1) * 8);
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  iVar6 = *(int *)(lVar1 + 0x18);
  *(uint *)(lVar1 + 0x18) = iVar6 + 1U;
  if (*(uint *)(lVar1 + 0x1c) < iVar6 + 1U) {
    FUN_14476c1d2((longlong *)(lVar1 + 0x10),iVar6);
  }
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar6 * 8) = param_2;
  return;
}



// FUNCTION 141789a80 FUN_141789a80 body=378 status=ok
// SIG undefined FUN_141789a80(void)

void FUN_141789a80(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) == 1) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else {
    FUN_14475fe8c(param_1 + 0x40,1);
    iVar2 = *(int *)(param_1 + 0x50);
    uVar1 = *(uint *)(param_1 + 0x54);
  }
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_146f3c7b6(param_1 + 0x40);
  }
  lVar3 = param_1 + 0x58;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) == 1) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else {
    FUN_14476002c(lVar3,1);
    iVar2 = *(int *)(param_1 + 0x68);
    uVar1 = *(uint *)(param_1 + 0x6c);
  }
  *(uint *)(param_1 + 0x68) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_147138312(lVar3,iVar2);
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x60);
  }
  FUN_14471858a(lVar3 + (longlong)iVar2 * 4,1);
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14736f36c(param_1,0);
  }
  lVar3 = param_1 + 0x20;
  uVar1 = *(uint *)(param_1 + 0x34);
  iVar2 = 0;
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_1456bda22(lVar3,1);
    iVar2 = *(int *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x34);
  }
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_1400e0406(lVar3,iVar2);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1446fb5ec(param_1 + 0x10,0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 141789bfa FUN_141789bfa body=824 status=ok
// SIG undefined FUN_141789bfa(void)

void FUN_141789bfa(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_14474875a((longlong *)(param_1 + 0xe0),0);
  }
  *(undefined8 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (0x80 < *(uint *)(param_1 + 0x10c)) {
    *(undefined4 *)(param_1 + 0x10c) = 0x80;
    FUN_1446efbd8(param_1 + 0xf0,0);
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  puVar2 = (uint *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar8 = puVar2;
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar14) goto LAB_141789e74;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar8[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar9 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      if (*(longlong *)(*plVar1 + 0x20 + (longlong)iVar7 * 0x38) != 0) {
        FUN_1400020a8();
        iVar3 = *(int *)(param_1 + 0x40);
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar8 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar8 = puVar2;
      }
      iVar7 = (int)uVar14;
      lVar12 = (longlong)iVar7;
      uVar4 = puVar8[lVar12] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar8[lVar12 + lVar10 + 1];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar6 - lVar12 == lVar10) goto LAB_141789e74;
        }
        uVar14 = (ulonglong)(iVar7 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_141789e74:
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_144748838(plVar1,0);
  }
  *(undefined8 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0x80 < *(uint *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141789f32 FUN_141789f32 body=48 status=ok
// SIG undefined FUN_141789f32(void)

void FUN_141789f32(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 141789f62 FUN_141789f62 body=299 status=ok
// SIG undefined FUN_141789f62(void)

void FUN_141789f62(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  if (**(longlong **)(param_1 + 0x88) != 0) {
    do {
      puVar5 = local_38;
      lVar2 = **(longlong **)(param_1 + 0x88);
      puVar3 = *(undefined8 **)(lVar2 + 8);
      puVar4 = local_38;
      if (local_38 != puVar3) {
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
          UNLOCK();
        }
        puVar4 = puVar3;
        if (local_38 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_38 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            puVar4 = (undefined8 *)*local_38;
            local_38 = puVar3;
            (*(code *)*puVar4)(puVar5,1);
            puVar4 = local_38;
          }
        }
      }
      local_38 = puVar4;
      local_30 = *(int *)(lVar2 + 0x10);
      if ((*(byte *)(local_38[5] + 0xa0) & 1) == 0) break;
      FUN_140039bb8(param_1 + 0x80,&local_38);
      *(int *)(param_1 + 0x6c) = local_30 + 1;
    } while (**(longlong **)(param_1 + 0x88) != 0);
  }
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  *(undefined1 *)(param_1 + 0x132) = 1;
  *(longlong *)(param_1 + 0x40) = param_1 + 0x50;
  FUN_140039a1a(param_1,0);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14178a08e FUN_14178a08e body=428 status=ok
// SIG undefined FUN_14178a08e(void)

void FUN_14178a08e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  uVar7 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  if (uVar7 == 0) {
    uVar9 = 0x20;
  }
  else {
    uVar9 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
  }
  if (DAT_14c760da4 != 0) {
    lVar6 = **(longlong **)(param_1 + 0x1b0);
    uVar5 = (ulonglong)uVar9;
    puVar8 = (undefined8 *)0x0;
    uVar11 = uVar7;
    do {
      uVar4 = *(undefined8 *)(lVar6 + 2000 + uVar5 * 8);
      puVar3 = (undefined8 *)FUN_14001cc68(0x90,0x10);
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined1 *)((longlong)puVar3 + 0xc) = 0x1c;
      *(byte *)((longlong)puVar3 + 0xd) = *(byte *)((longlong)puVar3 + 0xd) | 3;
      puVar3[2] = uVar4;
      *(undefined4 *)(puVar3 + 3) = 1;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      *puVar3 = &PTR_FUN_14a34b040;
      *(undefined4 *)(puVar3 + 0xc) = param_3;
      puVar3[0xd] = 0;
      uVar4 = FUN_14001cc68(8,8);
      puVar3[0xe] = uVar4;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar10 = puVar3;
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
        UNLOCK();
        puVar10 = puVar8;
      }
      puVar10[uVar5 + 4] = puVar3;
      uVar11 = uVar11 & ~(1 << ((uint)uVar5 & 0x1f));
      if (uVar11 == 0) {
        uVar5 = 0x20;
      }
      else {
        uVar1 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        uVar5 = (ulonglong)uVar1;
      }
      puVar8 = puVar10;
    } while (uVar11 != 0);
    if (puVar10 != (undefined8 *)0x0) {
      *(uint *)(puVar10 + 3) = uVar7;
      bVar2 = (byte)uVar9 & 0x1f;
      uVar7 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar7;
      if (uVar7 != 0) {
        uVar9 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        do {
          puVar8 = puVar10 + 3;
          puVar3 = (undefined8 *)(puVar10[(ulonglong)uVar9 + 4] + 0x18);
          for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar3 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          bVar2 = (byte)uVar9 & 0x1f;
          uVar7 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar7;
          if (uVar7 == 0) {
            uVar9 = 0x20;
          }
          else {
            uVar9 = 0;
            if (uVar7 != 0) {
              for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
              }
            }
          }
        } while (uVar7 != 0);
      }
      *param_2 = puVar10;
      LOCK();
      *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
      UNLOCK();
      return;
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14178a23a FUN_14178a23a body=396 status=ok
// SIG undefined FUN_14178a23a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14178a23a(undefined8 param_1,ulonglong *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_88 [40];
  uint local_60 [2];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = *(uint *)((longlong)param_2 + 0x17c);
  if (uVar7 != 0) {
    uVar6 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    do {
      puVar2 = (undefined8 *)param_2[(ulonglong)(param_3 == 1) * 8 + (ulonglong)uVar6 + 0x39];
      if (puVar2 == (undefined8 *)0x0) {
        LOCK();
        _DAT_00000008 = _DAT_00000008 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      param_2[(ulonglong)(param_3 == 1) * 8 + (ulonglong)uVar6 + 0x39] = 0;
      local_60[0] = uVar6;
      local_58 = puVar2;
      local_50 = param_3;
      if (*(char *)((longlong)param_2 + 100) == '\0') {
        puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar4 + 5;
        if ((undefined8 *)param_2[1] < puVar5) {
          FUN_140023dd8(param_2,0x30);
          puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar5 = puVar4 + 5;
        }
        *param_2 = (ulonglong)puVar5;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar4;
        param_2[6] = (ulonglong)(puVar4 + 1);
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_14a34c450;
        *(uint *)(puVar4 + 2) = uVar6;
        puVar4[3] = puVar2;
        *(int *)(puVar4 + 4) = param_3;
      }
      else {
        FUN_14316a3c0(local_60,param_2);
        if (puVar2 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      bVar3 = (byte)uVar6 & 0x1f;
      uVar7 = uVar7 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      if (uVar7 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar6 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
    } while (uVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14178a3c8 FUN_14178a3c8 body=82 status=ok
// SIG undefined FUN_14178a3c8(void)

undefined8 * FUN_14178a3c8(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 4;
  if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0xc];
  }
  FUN_14476c499(puVar1,*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178a41a FUN_14178a41a body=105 status=ok
// SIG undefined FUN_14178a41a(void)

undefined8 * FUN_14178a41a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a34ab08;
  if (param_1[5] != 0) {
    FUN_140187fa0(param_1[5],1,0);
    plVar1 = (longlong *)param_1[5];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    param_1[5] = 0;
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178a484 FUN_14178a484 body=65 status=ok
// SIG undefined FUN_14178a484(void)

undefined8 * FUN_14178a484(undefined8 *param_1,int param_2)

{
  FUN_14488df26(param_1 + 3);
  FUN_144902b9c(param_1 + 3);
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178a4c6 FUN_14178a4c6 body=29 status=ok
// SIG undefined FUN_14178a4c6(void)

undefined8 FUN_14178a4c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178a4e4 FUN_14178a4e4 body=29 status=ok
// SIG undefined FUN_14178a4e4(void)

undefined8 FUN_14178a4e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178a502 FUN_14178a502 body=414 status=ok
// SIG undefined FUN_14178a502(void)

void FUN_14178a502(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 unaff_RBX;
  char cVar9;
  undefined8 unaff_RDI;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong uVar10;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *param_3;
  *param_3 = 0;
  lVar5 = param_3[1];
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_60 = param_3[1];
  param_3[1] = 0;
  cVar9 = DAT_14ca84e23 * '\x02' + '\x01';
  uVar10 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),cVar9);
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x69);
  local_68 = lVar4;
  FUN_14002049c(param_2,uVar10 & 0xffffffff);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    do {
      bVar6 = (byte)uVar10;
      uVar10 = (ulonglong)((-bVar6 & bVar6) == 2);
      (&local_48)[uVar10] = param_2[uVar10 + 10];
      bVar6 = bVar6 - 1 & bVar6;
      uVar10 = (ulonglong)bVar6;
    } while (bVar6 != 0);
    local_58 = (undefined4)local_48;
    uStack_54 = local_48._4_4_;
    uStack_50 = (undefined4)uStack_40;
    uStack_4c = uStack_40._4_4_;
    FUN_143178734(&local_68);
  }
  else {
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 5;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x30);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 5;
    }
    *param_2 = (ulonglong)puVar8;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar7;
    param_2[6] = (ulonglong)(puVar7 + 1);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a34ff38;
    puVar7[2] = lVar4;
    local_68 = 0;
    *(int *)(puVar7 + 3) = (int)lVar5;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar3;
    local_60 = 0;
    *(char *)(puVar7 + 4) = cVar9;
  }
  FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  FUN_14494c7ac(param_2,&local_48,1);
  if (local_48 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_48 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178a6a2 FUN_14178a6a2 body=70 status=ok
// SIG undefined FUN_14178a6a2(void)

undefined8 FUN_14178a6a2(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                     (*(longlong **)(param_2 + 0x40),param_3);
  lVar2 = plVar1[0x33];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    lVar2 = plVar1[0x33];
  }
  *(int *)(lVar2 + 0x1c0) = *(int *)(lVar2 + 0x1c0) + 1;
  return *(undefined8 *)(lVar2 + 0x28);
}



// FUNCTION 14178a6e8 FUN_14178a6e8 body=73 status=ok
// SIG undefined FUN_14178a6e8(void)

undefined4 FUN_14178a6e8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if ((*(byte *)(lVar1 + 2) & 4) != 0) {
      param_2 = (longlong *)**(undefined8 **)(param_2[0x48] + 0xa0);
    }
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  return *(undefined4 *)(*(longlong *)(lVar1 + 0x68) + 8);
}



// FUNCTION 14178a732 FUN_14178a732 body=45 status=ok
// SIG undefined FUN_14178a732(void)

void FUN_14178a732(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                    (*(longlong **)(param_2 + 0x40),param_3);
  *(undefined1 *)(lVar1 + 0xb28) = 1;
  FUN_140039a1a(lVar1 + 0x3740,1);
  return;
}



// FUNCTION 14178a760 FUN_14178a760 body=1576 status=ok
// SIG undefined FUN_14178a760(void)

undefined8 * FUN_14178a760(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *_Dst;
  undefined4 *puVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_208 [40];
  undefined8 *local_1e0;
  longlong local_1d8;
  ulonglong local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined **local_1b8 [5];
  byte local_190;
  byte local_18f;
  longlong *local_160;
  longlong local_140;
  undefined8 local_128;
  longlong local_120;
  ulonglong local_118;
  undefined8 local_110;
  longlong local_108;
  uint local_100;
  undefined4 local_fc;
  undefined **local_f8;
  longlong *local_f0;
  byte local_d0;
  byte local_cf;
  byte local_ce;
  longlong *local_a0;
  longlong local_80;
  undefined4 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar12 = *param_3;
  uVar14 = *(uint *)(param_3 + 1);
  uVar15 = (ulonglong)(int)uVar14;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1e0 = param_2;
  _Dst = (undefined8 *)FUN_14001cc68(0xd8);
  lVar17 = 0;
  memset(_Dst,0,0xd8);
  *(undefined2 *)((longlong)_Dst + 0xc) = 0x306;
  puVar18 = _Dst + 2;
  memset(_Dst + 3,0,0x86);
  *(undefined2 *)((longlong)_Dst + 0x9e) = 0;
  *(undefined4 *)(_Dst + 0x17) = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  *(undefined8 *)((longlong)_Dst + 0xad) = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  *(undefined2 *)(_Dst + 0x1a) = 0;
  *_Dst = &PTR_FUN_14a34fcf0;
  local_108 = lVar12;
  local_100 = uVar14;
  local_fc = uVar4;
  memset(local_1b8,0,0x90);
  FUN_144869430(local_1b8);
  local_128 = 0;
  local_1b8[0] = &PTR_FUN_149e1ddc0;
  local_110 = 0x7fffffffffffffff;
  local_190 = local_190 | 1;
  local_18f = local_18f | 1;
  local_120 = lVar12;
  local_118 = uVar15;
  FUN_1402ee999(local_1b8,puVar18);
  lVar3 = lVar12 + uVar15;
  local_1c8 = local_128;
  if (3 < uVar15) {
    lVar17 = (longlong)*(int *)(lVar3 + -4);
  }
  puVar2 = _Dst + 0x14;
  puVar10 = _Dst + 0x17;
  lVar17 = -lVar17;
  do {
    lVar9 = lVar17;
    if (-5 < lVar9) goto LAB_14178ac58;
    uVar11 = (ulonglong)*(uint *)(lVar3 + 1 + lVar9);
    bVar20 = *(char *)(lVar3 + lVar9) != 'p';
    uVar8 = uVar11;
    if (!bVar20 && uVar11 == 5) {
      uVar8 = 0;
    }
    lVar17 = uVar8 + 5 + lVar9;
  } while (bVar20 || uVar11 != 5);
  puVar6 = (undefined4 *)(lVar9 + 5 + lVar3);
  if (puVar6 != (undefined4 *)0x0) {
    *(undefined1 *)((longlong)_Dst + 0xb4) = *(undefined1 *)(puVar6 + 1);
    *(undefined4 *)(_Dst + 0x16) = *puVar6;
    if (uVar14 < 4) {
      lVar17 = 0;
    }
    else {
      lVar17 = (longlong)*(int *)(lVar3 + -4);
    }
    lVar17 = -lVar17;
    do {
      lVar9 = lVar17;
      local_1d8 = lVar12;
      local_1d0 = uVar15;
      if (-5 < lVar9) goto LAB_14178a95c;
      uVar19 = *(uint *)(lVar3 + 1 + lVar9);
      bVar20 = *(char *)(lVar3 + lVar9) != 'v';
      uVar8 = (ulonglong)uVar19;
      if (!bVar20) {
        uVar8 = 0;
      }
      lVar17 = uVar8 + 5 + lVar9;
    } while (bVar20);
    puVar6 = (undefined4 *)(lVar9 + 5 + lVar3);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar19)) {
      local_1c0 = puVar10;
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = (ulonglong)uVar19;
      FUN_14736909a(&local_f8);
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42();
      uVar14 = (uint)local_1d0;
      puVar10 = local_1c0;
    }
LAB_14178a95c:
    if (uVar14 < 4) {
      lVar12 = 0;
    }
    else {
      lVar12 = (longlong)*(int *)(lVar3 + -4);
    }
    lVar12 = -lVar12;
    do {
      lVar17 = lVar12;
      if (-5 < lVar17) goto LAB_14178a9b0;
      uVar8 = (ulonglong)*(uint *)(lVar3 + 1 + lVar17);
      bVar20 = *(char *)(lVar3 + lVar17) != 'x';
      uVar15 = uVar8;
      if (!bVar20 && uVar8 == 2) {
        uVar15 = 0;
      }
      lVar12 = uVar15 + 5 + lVar17;
    } while (bVar20 || uVar8 != 2);
    puVar7 = (undefined2 *)(lVar17 + 5 + lVar3);
    if (puVar7 != (undefined2 *)0x0) {
      *(undefined2 *)(_Dst + 0x1a) = *puVar7;
    }
LAB_14178a9b0:
    if (uVar14 < 4) {
      lVar12 = 0;
    }
    else {
      lVar12 = (longlong)*(int *)(lVar3 + -4);
    }
    lVar12 = -lVar12;
    do {
      lVar9 = lVar12;
      lVar17 = local_1d8;
      if (-5 < lVar9) goto LAB_14178aad4;
      uVar19 = *(uint *)(lVar3 + 1 + lVar9);
      uVar8 = (ulonglong)uVar19;
      bVar20 = *(char *)(lVar3 + lVar9) != 's';
      uVar15 = uVar8;
      if (!bVar20) {
        uVar15 = 0;
      }
      lVar12 = uVar15 + 5 + lVar9;
    } while (bVar20);
    puVar6 = (undefined4 *)(lVar9 + 5 + lVar3);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar19)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = uVar8;
      if ((undefined4 *)local_f0[1] < (undefined4 *)*local_f0 + 1) {
        if ((local_ce & 2) == 0) {
          *(undefined4 *)puVar10 = *puVar6;
          local_60 = 4;
        }
        else {
          thunk_FUN_14572512c(&local_f8,puVar10);
        }
      }
      else {
        *(undefined4 *)puVar10 = *(undefined4 *)*local_f0;
        *local_f0 = *local_f0 + 4;
      }
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      lVar17 = local_1d8;
      local_f8 = &PTR__purecall_149e35f70;
      uVar14 = (uint)local_1d0;
      if (local_a0 != (longlong *)0x0) {
        if (*local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_a0);
      }
      if (local_80 != 0) {
        if (*(longlong *)(local_80 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_80);
      }
    }
LAB_14178aad4:
    FUN_1402eeba3(_Dst,&local_108);
    puVar10 = puVar2;
    if (_Dst == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    cVar5 = FUN_1402ee923(puVar10,*(undefined1 *)((longlong)_Dst + 0x9c));
    if (cVar5 != '\0') {
      if (uVar14 < 4) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(lVar3 + -4);
      }
      iVar16 = (int)local_1c8;
      uVar19 = iVar13 + iVar16;
      iVar13 = uVar14 - uVar19;
      *(int *)(_Dst + 0x15) = iVar13;
      if (iVar13 == 0 && *(int *)((longlong)_Dst + 0xac) == 0) {
        *(undefined4 *)((longlong)_Dst + 0xac) = 0;
      }
      else {
        FUN_1447a127e(puVar2,iVar13);
        if (uVar14 != uVar19) {
          memcpy((void *)*puVar2,(void *)(lVar17 + iVar16),(longlong)iVar13);
        }
      }
      *(byte *)((longlong)_Dst + 0x9d) =
           *(byte *)((longlong)_Dst + 0x9d) & 0xfd | *(byte *)(_Dst + 0x16) >> 4 & 2;
      if (_Dst == (undefined8 *)0x0) {
        puVar18 = (undefined8 *)0x0;
      }
      FUN_1402eea41(puVar18);
      goto LAB_14178ab82;
    }
  }
LAB_14178ac58:
  LOCK();
  *(int *)(_Dst + 1) = *(int *)(_Dst + 1) + 1;
  UNLOCK();
  LOCK();
  puVar1 = (uint *)(_Dst + 1);
  uVar14 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar14 & 0x3fffffff) == 1) {
    FUN_144a54812(_Dst);
  }
  _Dst = (undefined8 *)0x0;
LAB_14178ab82:
  puVar18 = local_1e0;
  local_1b8[0] = &PTR__purecall_149e35f70;
  if (local_160 != (longlong *)0x0) {
    if (*local_160 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_160);
  }
  if (local_140 != 0) {
    if (*(longlong *)(local_140 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_140);
  }
  *puVar18 = _Dst;
  if (_Dst != (undefined8 *)0x0) {
    LOCK();
    *(int *)(_Dst + 1) = *(int *)(_Dst + 1) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return puVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178ad8a FUN_14178ad8a body=1547 status=ok
// SIG undefined FUN_14178ad8a(void)

undefined8 * FUN_14178ad8a(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *_Dst;
  undefined4 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_208 [40];
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  undefined8 *local_1c0;
  undefined **local_1b8 [5];
  byte local_190;
  byte local_18f;
  longlong *local_160;
  longlong local_140;
  undefined8 local_128;
  longlong local_120;
  ulonglong local_118;
  undefined8 local_110;
  longlong local_108;
  uint local_100;
  undefined4 local_fc;
  undefined **local_f8;
  longlong *local_f0;
  byte local_d0;
  byte local_cf;
  byte local_ce;
  longlong *local_a0;
  longlong local_80;
  undefined4 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar8 = *param_3;
  uVar3 = *(uint *)(param_3 + 1);
  uVar13 = (ulonglong)(int)uVar3;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1e0 = param_2;
  _Dst = (undefined8 *)FUN_14001cc68(0xd8);
  lVar14 = 0;
  memset(_Dst,0,0xd8);
  *(undefined2 *)((longlong)_Dst + 0xc) = 0x307;
  memset(_Dst + 3,0,0x84);
  *(undefined1 *)((longlong)_Dst + 0x9c) = 1;
  *(undefined2 *)((longlong)_Dst + 0x9e) = 0;
  *(undefined4 *)(_Dst + 0x17) = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  *(undefined8 *)((longlong)_Dst + 0xad) = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  *(undefined2 *)(_Dst + 0x1a) = 0;
  *_Dst = &PTR_FUN_14a34fcf8;
  local_108 = lVar8;
  local_100 = uVar3;
  local_fc = uVar4;
  memset(local_1b8,0,0x90);
  FUN_144869430(local_1b8);
  local_128 = 0;
  local_1b8[0] = &PTR_FUN_149e1ddc0;
  local_110 = 0x7fffffffffffffff;
  local_190 = local_190 | 1;
  local_18f = local_18f | 1;
  local_1c0 = _Dst + 2;
  local_120 = lVar8;
  local_118 = uVar13;
  FUN_1402ee999(local_1b8,_Dst + 2);
  lVar2 = lVar8 + uVar13;
  local_1d8 = local_128;
  if (3 < uVar13) {
    lVar14 = (longlong)*(int *)(lVar2 + -4);
  }
  puVar10 = _Dst + 0x14;
  puVar9 = _Dst + 0x17;
  lVar14 = -lVar14;
  do {
    lVar15 = lVar14;
    local_1c8 = lVar8;
    if (-5 < lVar15) goto LAB_14178b264;
    uVar11 = (ulonglong)*(uint *)(lVar2 + 1 + lVar15);
    bVar17 = *(char *)(lVar2 + lVar15) != 'p';
    uVar13 = uVar11;
    if (!bVar17 && uVar11 == 5) {
      uVar13 = 0;
    }
    lVar14 = uVar13 + 5 + lVar15;
  } while (bVar17 || uVar11 != 5);
  puVar6 = (undefined4 *)(lVar15 + 5 + lVar2);
  if (puVar6 != (undefined4 *)0x0) {
    *(undefined1 *)((longlong)_Dst + 0xb4) = *(undefined1 *)(puVar6 + 1);
    *(undefined4 *)(_Dst + 0x16) = *puVar6;
    if (uVar3 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(lVar2 + -4);
    }
    lVar8 = -lVar8;
    do {
      lVar14 = lVar8;
      if (-5 < lVar14) goto LAB_14178af8d;
      uVar16 = *(uint *)(lVar2 + 1 + lVar14);
      bVar17 = *(char *)(lVar2 + lVar14) != 'v';
      uVar13 = (ulonglong)uVar16;
      if (!bVar17) {
        uVar13 = 0;
      }
      lVar8 = uVar13 + 5 + lVar14;
    } while (bVar17);
    puVar6 = (undefined4 *)(lVar14 + 5 + lVar2);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar16)) {
      local_1d0 = puVar9;
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = (ulonglong)uVar16;
      FUN_14736909a(&local_f8);
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42();
      puVar9 = local_1d0;
    }
LAB_14178af8d:
    if (uVar3 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(lVar2 + -4);
    }
    lVar8 = -lVar8;
    do {
      lVar14 = lVar8;
      if (-5 < lVar14) goto LAB_14178afe1;
      uVar11 = (ulonglong)*(uint *)(lVar2 + 1 + lVar14);
      bVar17 = *(char *)(lVar2 + lVar14) != 'x';
      uVar13 = uVar11;
      if (!bVar17 && uVar11 == 2) {
        uVar13 = 0;
      }
      lVar8 = uVar13 + 5 + lVar14;
    } while (bVar17 || uVar11 != 2);
    puVar7 = (undefined2 *)(lVar14 + 5 + lVar2);
    if (puVar7 != (undefined2 *)0x0) {
      *(undefined2 *)(_Dst + 0x1a) = *puVar7;
    }
LAB_14178afe1:
    if (uVar3 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(lVar2 + -4);
    }
    lVar8 = -lVar8;
    do {
      lVar14 = lVar8;
      if (-5 < lVar14) goto LAB_14178b0ec;
      uVar16 = *(uint *)(lVar2 + 1 + lVar14);
      uVar11 = (ulonglong)uVar16;
      bVar17 = *(char *)(lVar2 + lVar14) != 's';
      uVar13 = uVar11;
      if (!bVar17) {
        uVar13 = 0;
      }
      lVar8 = uVar13 + 5 + lVar14;
    } while (bVar17);
    puVar6 = (undefined4 *)(lVar14 + 5 + lVar2);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar16)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = uVar11;
      if ((undefined4 *)local_f0[1] < (undefined4 *)*local_f0 + 1) {
        if ((local_ce & 2) == 0) {
          *(undefined4 *)puVar9 = *puVar6;
          local_60 = 4;
        }
        else {
          thunk_FUN_14572512c(&local_f8,puVar9);
        }
      }
      else {
        *(undefined4 *)puVar9 = *(undefined4 *)*local_f0;
        *local_f0 = *local_f0 + 4;
      }
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      local_f8 = &PTR__purecall_149e35f70;
      if (local_a0 != (longlong *)0x0) {
        if (*local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_a0);
      }
      if (local_80 != 0) {
        if (*(longlong *)(local_80 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_80);
      }
    }
LAB_14178b0ec:
    FUN_1402eeba3(_Dst,&local_108);
    puVar9 = puVar10;
    if (_Dst == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    cVar5 = FUN_1402ee923(puVar9,*(undefined1 *)((longlong)_Dst + 0x9c));
    puVar9 = local_1e0;
    if (cVar5 != '\0') {
      if (uVar3 < 4) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(lVar2 + -4);
      }
      uVar16 = iVar12 + (int)local_1d8;
      iVar12 = uVar3 - uVar16;
      *(int *)(_Dst + 0x15) = iVar12;
      if (iVar12 == 0 && *(int *)((longlong)_Dst + 0xac) == 0) {
        *(undefined4 *)((longlong)_Dst + 0xac) = 0;
      }
      else {
        FUN_1447a127e(puVar10,iVar12);
        if (uVar3 != uVar16) {
          memcpy((void *)*puVar10,(void *)(local_1c8 + (int)local_1d8),(longlong)iVar12);
        }
      }
      *(byte *)((longlong)_Dst + 0x9d) =
           *(byte *)((longlong)_Dst + 0x9d) & 0xfd | *(byte *)(_Dst + 0x16) >> 4 & 2;
      puVar10 = local_1c0;
      if (_Dst == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      FUN_1402eea41(puVar10);
      goto LAB_14178b1a1;
    }
  }
LAB_14178b264:
  LOCK();
  *(int *)(_Dst + 1) = *(int *)(_Dst + 1) + 1;
  UNLOCK();
  LOCK();
  puVar1 = (uint *)(_Dst + 1);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar3 & 0x3fffffff) == 1) {
    FUN_144a54812(_Dst);
  }
  _Dst = (undefined8 *)0x0;
  puVar9 = local_1e0;
LAB_14178b1a1:
  local_1b8[0] = &PTR__purecall_149e35f70;
  if (local_160 != (longlong *)0x0) {
    if (*local_160 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_160);
  }
  if (local_140 != 0) {
    if (*(longlong *)(local_140 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_140);
  }
  *puVar9 = _Dst;
  if (_Dst != (undefined8 *)0x0) {
    LOCK();
    *(int *)(_Dst + 1) = *(int *)(_Dst + 1) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178b396 FUN_14178b396 body=1547 status=ok
// SIG undefined FUN_14178b396(void)

undefined8 * FUN_14178b396(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *_Dst;
  undefined4 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_208 [40];
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  undefined8 *local_1c0;
  undefined **local_1b8 [5];
  byte local_190;
  byte local_18f;
  longlong *local_160;
  longlong local_140;
  undefined8 local_128;
  longlong local_120;
  ulonglong local_118;
  undefined8 local_110;
  longlong local_108;
  uint local_100;
  undefined4 local_fc;
  undefined **local_f8;
  longlong *local_f0;
  byte local_d0;
  byte local_cf;
  byte local_ce;
  longlong *local_a0;
  longlong local_80;
  undefined4 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar8 = *param_3;
  uVar3 = *(uint *)(param_3 + 1);
  uVar13 = (ulonglong)(int)uVar3;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1e0 = param_2;
  _Dst = (undefined8 *)FUN_14001cc68(0xd8);
  lVar14 = 0;
  memset(_Dst,0,0xd8);
  *(undefined2 *)((longlong)_Dst + 0xc) = 0x309;
  memset(_Dst + 3,0,0x84);
  *(undefined1 *)((longlong)_Dst + 0x9c) = 3;
  *(undefined2 *)((longlong)_Dst + 0x9e) = 0;
  *(undefined4 *)(_Dst + 0x17) = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  *(undefined8 *)((longlong)_Dst + 0xad) = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  *(undefined2 *)(_Dst + 0x1a) = 0;
  *_Dst = &PTR_FUN_14a34fd08;
  local_108 = lVar8;
  local_100 = uVar3;
  local_fc = uVar4;
  memset(local_1b8,0,0x90);
  FUN_144869430(local_1b8);
  local_128 = 0;
  local_1b8[0] = &PTR_FUN_149e1ddc0;
  local_110 = 0x7fffffffffffffff;
  local_190 = local_190 | 1;
  local_18f = local_18f | 1;
  local_1c0 = _Dst + 2;
  local_120 = lVar8;
  local_118 = uVar13;
  FUN_1402ee999(local_1b8,_Dst + 2);
  lVar2 = lVar8 + uVar13;
  local_1d8 = local_128;
  if (3 < uVar13) {
    lVar14 = (longlong)*(int *)(lVar2 + -4);
  }
  puVar10 = _Dst + 0x14;
  puVar9 = _Dst + 0x17;
  lVar14 = -lVar14;
  do {
    lVar15 = lVar14;
    local_1c8 = lVar8;
    if (-5 < lVar15) goto LAB_14178b886;
    uVar11 = (ulonglong)*(uint *)(lVar2 + 1 + lVar15);
    bVar17 = *(char *)(lVar2 + lVar15) != 'p';
    uVar13 = uVar11;
    if (!bVar17 && uVar11 == 5) {
      uVar13 = 0;
    }
    lVar14 = uVar13 + 5 + lVar15;
  } while (bVar17 || uVar11 != 5);
  puVar6 = (undefined4 *)(lVar15 + 5 + lVar2);
  if (puVar6 != (undefined4 *)0x0) {
    *(undefined1 *)((longlong)_Dst + 0xb4) = *(undefined1 *)(puVar6 + 1);
    *(undefined4 *)(_Dst + 0x16) = *puVar6;
    if (uVar3 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(lVar2 + -4);
    }
    lVar8 = -lVar8;
    do {
      lVar14 = lVar8;
      if (-5 < lVar14) goto LAB_14178b599;
      uVar16 = *(uint *)(lVar2 + 1 + lVar14);
      bVar17 = *(char *)(lVar2 + lVar14) != 'v';
      uVar13 = (ulonglong)uVar16;
      if (!bVar17) {
        uVar13 = 0;
      }
      lVar8 = uVar13 + 5 + lVar14;
    } while (bVar17);
    puVar6 = (undefined4 *)(lVar14 + 5 + lVar2);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar16)) {
      local_1d0 = puVar9;
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = (ulonglong)uVar16;
      FUN_14736909a(&local_f8);
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42();
      puVar9 = local_1d0;
    }
LAB_14178b599:
    if (uVar3 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(lVar2 + -4);
    }
    lVar8 = -lVar8;
    do {
      lVar14 = lVar8;
      if (-5 < lVar14) goto LAB_14178b5ed;
      uVar11 = (ulonglong)*(uint *)(lVar2 + 1 + lVar14);
      bVar17 = *(char *)(lVar2 + lVar14) != 'x';
      uVar13 = uVar11;
      if (!bVar17 && uVar11 == 2) {
        uVar13 = 0;
      }
      lVar8 = uVar13 + 5 + lVar14;
    } while (bVar17 || uVar11 != 2);
    puVar7 = (undefined2 *)(lVar14 + 5 + lVar2);
    if (puVar7 != (undefined2 *)0x0) {
      *(undefined2 *)(_Dst + 0x1a) = *puVar7;
    }
LAB_14178b5ed:
    if (uVar3 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(lVar2 + -4);
    }
    lVar8 = -lVar8;
    do {
      lVar14 = lVar8;
      if (-5 < lVar14) goto LAB_14178b6f8;
      uVar16 = *(uint *)(lVar2 + 1 + lVar14);
      uVar11 = (ulonglong)uVar16;
      bVar17 = *(char *)(lVar2 + lVar14) != 's';
      uVar13 = uVar11;
      if (!bVar17) {
        uVar13 = 0;
      }
      lVar8 = uVar13 + 5 + lVar14;
    } while (bVar17);
    puVar6 = (undefined4 *)(lVar14 + 5 + lVar2);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar16)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = uVar11;
      if ((undefined4 *)local_f0[1] < (undefined4 *)*local_f0 + 1) {
        if ((local_ce & 2) == 0) {
          *(undefined4 *)puVar9 = *puVar6;
          local_60 = 4;
        }
        else {
          thunk_FUN_14572512c(&local_f8,puVar9);
        }
      }
      else {
        *(undefined4 *)puVar9 = *(undefined4 *)*local_f0;
        *local_f0 = *local_f0 + 4;
      }
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      local_f8 = &PTR__purecall_149e35f70;
      if (local_a0 != (longlong *)0x0) {
        if (*local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_a0);
      }
      if (local_80 != 0) {
        if (*(longlong *)(local_80 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_80);
      }
    }
LAB_14178b6f8:
    FUN_1402eeba3(_Dst,&local_108);
    puVar9 = puVar10;
    if (_Dst == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    cVar5 = FUN_1402ee923(puVar9,*(undefined1 *)((longlong)_Dst + 0x9c));
    puVar9 = local_1e0;
    if (cVar5 != '\0') {
      if (uVar3 < 4) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(lVar2 + -4);
      }
      uVar16 = iVar12 + (int)local_1d8;
      iVar12 = uVar3 - uVar16;
      *(int *)(_Dst + 0x15) = iVar12;
      if (iVar12 == 0 && *(int *)((longlong)_Dst + 0xac) == 0) {
        *(undefined4 *)((longlong)_Dst + 0xac) = 0;
      }
      else {
        FUN_1447a127e(puVar10,iVar12);
        if (uVar3 != uVar16) {
          memcpy((void *)*puVar10,(void *)(local_1c8 + (int)local_1d8),(longlong)iVar12);
        }
      }
      *(byte *)((longlong)_Dst + 0x9d) =
           *(byte *)((longlong)_Dst + 0x9d) & 0xfd | *(byte *)(_Dst + 0x16) >> 4 & 2;
      puVar10 = local_1c0;
      if (_Dst == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      FUN_1402eea41(puVar10);
      goto LAB_14178b7ad;
    }
  }
LAB_14178b886:
  LOCK();
  *(int *)(_Dst + 1) = *(int *)(_Dst + 1) + 1;
  UNLOCK();
  LOCK();
  puVar1 = (uint *)(_Dst + 1);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar3 & 0x3fffffff) == 1) {
    FUN_144a54812(_Dst);
  }
  _Dst = (undefined8 *)0x0;
  puVar9 = local_1e0;
LAB_14178b7ad:
  local_1b8[0] = &PTR__purecall_149e35f70;
  if (local_160 != (longlong *)0x0) {
    if (*local_160 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_160);
  }
  if (local_140 != 0) {
    if (*(longlong *)(local_140 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_140);
  }
  *puVar9 = _Dst;
  if (_Dst != (undefined8 *)0x0) {
    LOCK();
    *(int *)(_Dst + 1) = *(int *)(_Dst + 1) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178b9a2 FUN_14178b9a2 body=196 status=ok
// SIG undefined FUN_14178b9a2(void)

undefined8 * FUN_14178b9a2(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 2;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  *puVar1 = &PTR_FUN_14a34fd58;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  iVar2 = 3;
  if (param_3[1] != '\x01') {
    iVar2 = (param_3[1] == '\x02') + 1;
  }
  *(int *)((longlong)puVar1 + 0x14) = iVar2;
  *(uint *)(puVar1 + 2) = *param_3 == '\x01' ^ 3;
  *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(puVar1 + 3) = 1;
  *(int *)((longlong)puVar1 + 0x1c) =
       (int)ROUND(*(float *)(param_3 + 4) * 16777216.0 + *(float *)(param_3 + 4) * 16777216.0 + -0.5
                 ) >> 1;
  *(uint *)(puVar1 + 5) = (uint)(param_3[0xc] == '\0');
  *(uint *)((longlong)puVar1 + 0x2c) = (uint)(byte)param_3[0xd];
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14178ba66 FUN_14178ba66 body=500 status=ok
// SIG undefined FUN_14178ba66(void)

undefined8 * FUN_14178ba66(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  
  puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar7 + 1) = 0;
  *(undefined1 *)((longlong)puVar7 + 0xc) = 3;
  *(byte *)((longlong)puVar7 + 0xd) = *(byte *)((longlong)puVar7 + 0xd) | 3;
  *puVar7 = &PTR_FUN_14a34fd68;
  *(undefined8 *)((longlong)puVar7 + 0x22) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x32) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x44) = 0;
  uVar11 = (ulonglong)param_3[1];
  bVar1 = *param_3;
  uVar10 = 8;
  uVar12 = 8;
  uVar15 = 1;
  if (uVar11 == 7) {
    uVar15 = (uint)bVar1;
  }
  *(uint *)(puVar7 + 2) = uVar15;
  *(uint *)((longlong)puVar7 + 0x14) = (uint)bVar1;
  if (uVar11 < 7) {
    uVar12 = *(undefined4 *)(&DAT_14a3506b4 + uVar11 * 4);
  }
  *(undefined4 *)(puVar7 + 3) = uVar12;
  bVar14 = param_3[7];
  uVar15 = 1;
  if (param_3[2] == 0) {
    uVar15 = (uint)bVar14;
  }
  *(uint *)((longlong)puVar7 + 0x1c) = uVar15;
  *(byte *)(puVar7 + 4) = param_3[0xc];
  bVar2 = param_3[0xd];
  *(byte *)((longlong)puVar7 + 0x21) = bVar2;
  if ((ulonglong)param_3[3] < 7) {
    uVar10 = *(undefined4 *)(&DAT_14a3506b4 + (ulonglong)param_3[3] * 4);
  }
  *(undefined4 *)(puVar7 + 6) = uVar10;
  bVar3 = param_3[4];
  bVar8 = bVar3 - 1;
  iVar13 = bVar8 + 2;
  if (6 < bVar8) {
    iVar13 = 1;
  }
  *(int *)((longlong)puVar7 + 0x24) = iVar13;
  bVar4 = param_3[5];
  bVar8 = bVar4 - 1;
  iVar13 = bVar8 + 2;
  if (6 < bVar8) {
    iVar13 = 1;
  }
  *(int *)(puVar7 + 5) = iVar13;
  bVar5 = param_3[6];
  bVar8 = bVar5 - 1;
  iVar13 = bVar8 + 2;
  if (6 < bVar8) {
    iVar13 = 1;
  }
  *(int *)((longlong)puVar7 + 0x2c) = iVar13;
  if ((bVar14 & 1) == 0) {
    *(undefined8 *)((longlong)puVar7 + 0x34) = *(undefined8 *)((longlong)puVar7 + 0x24);
    *(undefined8 *)((longlong)puVar7 + 0x3c) = *(undefined8 *)((longlong)puVar7 + 0x2c);
    bVar14 = param_3[9];
    bVar8 = param_3[10];
    bVar9 = param_3[0xb];
  }
  else {
    uVar12 = 8;
    if ((ulonglong)param_3[8] < 7) {
      uVar12 = *(undefined4 *)(&DAT_14a3506b4 + (ulonglong)param_3[8] * 4);
    }
    *(undefined4 *)(puVar7 + 8) = uVar12;
    bVar14 = param_3[9];
    iVar13 = (byte)(bVar14 - 1) + 2;
    if (6 < (byte)(bVar14 - 1)) {
      iVar13 = 1;
    }
    *(int *)((longlong)puVar7 + 0x34) = iVar13;
    bVar8 = param_3[10];
    iVar13 = (byte)(bVar8 - 1) + 2;
    if (6 < (byte)(bVar8 - 1)) {
      iVar13 = 1;
    }
    *(int *)(puVar7 + 7) = iVar13;
    bVar9 = param_3[0xb];
    iVar13 = (byte)(bVar9 - 1) + 2;
    if (6 < (byte)(bVar9 - 1)) {
      iVar13 = 1;
    }
    *(int *)((longlong)puVar7 + 0x3c) = iVar13;
  }
  iVar6 = (bVar1 & 1) * 2;
  iVar13 = (bVar1 & 1) * 2 + 0x20;
  if (((bVar5 == 0 && bVar14 == 0) && (bVar4 == 0 && bVar3 == 0)) && (bVar9 == 0 && bVar8 == 0)) {
    iVar13 = iVar6;
  }
  if (bVar2 == 0) {
    iVar13 = iVar6;
  }
  *(undefined4 *)((longlong)puVar7 + 0x44) = 0;
  *(int *)(puVar7 + 9) = iVar13;
  *param_2 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14178bc5a FUN_14178bc5a body=427 status=ok
// SIG undefined FUN_14178bc5a(void)

undefined8 * FUN_14178bc5a(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x158);
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 4;
  *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
  *puVar2 = &PTR_FUN_14a34fd78;
  memset(puVar2 + 3,0,0x140);
  *(uint *)(puVar2 + 2) = (uint)*(byte *)(param_3 + 0x39);
  *(uint *)((longlong)puVar2 + 0x14) = (uint)*(byte *)(param_3 + 0x38);
  pbVar4 = (byte *)(param_3 + 6);
  lVar3 = 0x3c;
  do {
    bVar1 = pbVar4[-6];
    if ((longlong)(char)bVar1 == 0) {
      bVar7 = true;
      if ((((pbVar4[-4] == 0) && (pbVar4[-5] == 1)) && (pbVar4[-3] == 0)) && (pbVar4[-1] == 0)) {
        bVar7 = pbVar4[-2] != 1;
      }
      *(uint *)((longlong)puVar2 + lVar3 + -0x24) = (uint)bVar7;
      uVar6 = 1;
    }
    else {
      *(undefined4 *)((longlong)puVar2 + lVar3 + -0x24) = 1;
      uVar6 = 1;
      if (bVar1 < 5) {
        uVar6 = *(undefined4 *)(&DAT_14a3506cc + (longlong)(char)bVar1 * 4);
      }
    }
    *(undefined4 *)((longlong)puVar2 + lVar3 + -0x14) = uVar6;
    uVar5 = 1;
    uVar6 = 1;
    if ((byte)(pbVar4[-5] - 1) < 0xf) {
      uVar6 = *(undefined4 *)(&DAT_14a3506e0 + (ulonglong)(byte)(pbVar4[-5] - 1) * 4);
    }
    *(undefined4 *)((longlong)puVar2 + lVar3 + -0x1c) = uVar6;
    if ((byte)(pbVar4[-4] - 1) < 0xf) {
      uVar5 = *(undefined4 *)(&DAT_14a3506e0 + (ulonglong)(byte)(pbVar4[-4] - 1) * 4);
    }
    *(undefined4 *)((longlong)puVar2 + lVar3 + -0x18) = uVar5;
    uVar5 = 1;
    uVar6 = 1;
    if ((byte)(pbVar4[-3] - 1) < 4) {
      uVar6 = *(undefined4 *)(&DAT_14a3506d0 + (ulonglong)(byte)(pbVar4[-3] - 1) * 4);
    }
    *(undefined4 *)((longlong)puVar2 + lVar3 + -8) = uVar6;
    if ((byte)(pbVar4[-2] - 1) < 0xf) {
      uVar5 = *(undefined4 *)(&DAT_14a3506e0 + (ulonglong)(byte)(pbVar4[-2] - 1) * 4);
    }
    *(undefined4 *)((longlong)puVar2 + lVar3 + -0x10) = uVar5;
    uVar6 = 1;
    if ((byte)(pbVar4[-1] - 1) < 0xf) {
      uVar6 = *(undefined4 *)(&DAT_14a3506e0 + (ulonglong)(byte)(pbVar4[-1] - 1) * 4);
    }
    *(undefined4 *)((longlong)puVar2 + lVar3 + -0xc) = uVar6;
    *(byte *)((longlong)puVar2 + lVar3) = *pbVar4 & 0xf;
    lVar3 = lVar3 + 0x28;
    pbVar4 = pbVar4 + 7;
  } while (lVar3 != 0x17c);
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14178be06 FUN_14178be06 body=1036 status=ok
// SIG undefined FUN_14178be06(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14178be06(longlong param_1,ulonglong *param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong *puVar6;
  ushort uVar7;
  uint uVar8;
  void *_Src;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ushort uVar16;
  void *_Dst;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_1a8 [8];
  ulonglong *local_1a0;
  longlong local_198;
  undefined1 *local_190;
  longlong local_188;
  ulonglong local_180;
  undefined1 *local_178;
  undefined4 local_16c;
  longlong local_168;
  longlong local_160 [14];
  undefined1 local_f0;
  undefined2 local_ef;
  uint local_e8;
  undefined4 uStack_e4;
  longlong local_e0 [14];
  undefined1 local_70;
  undefined2 local_6f;
  ulonglong local_68;
  ulonglong local_60;
  
  puVar12 = auStack_1a8;
  local_60 = DAT_14c707940 ^ (ulonglong)(local_160 + 7);
  cVar1 = *(char *)(param_3 + 0x32);
  uVar16 = 1;
  if (cVar1 == '\x04') {
    uVar16 = *(ushort *)(param_3 + 0x2e);
  }
  if (cVar1 == '\x01') {
    uVar16 = *(ushort *)(param_3 + 0x2e);
  }
  uVar7 = uVar16 * 6;
  if (1 < (byte)(cVar1 - 3U)) {
    uVar7 = uVar16;
  }
  uVar19 = (uint)uVar7 * (uint)*(byte *)(param_3 + 0x30);
  uVar18 = (ulonglong)uVar19;
  lVar9 = *(longlong *)(param_1 + 0x68);
  local_1a0 = param_2;
  local_16c = param_4;
  if (uVar19 < 0x5e) {
    if (uVar19 == 0) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      lVar2 = -(ulonglong)((int)(uVar18 * 0x2c) + 0x1eU & 0xfffffff0);
      puVar12 = auStack_1a8 + lVar2;
      puVar11 = auStack_1a8 + lVar2;
    }
  }
  else {
    puVar11 = (undefined1 *)FUN_14001cc68(uVar18 * 0x2c,0);
    puVar12 = auStack_1a8;
  }
  puVar13 = puVar11 + uVar19 * 0x20;
  local_68 = 0;
  lVar2 = *(longlong *)(param_1 + 0xb8);
  plVar3 = *(longlong **)(*(longlong *)(lVar9 + 0x10) + 8);
  lVar4 = *plVar3;
  local_198 = param_1;
  *(ulonglong **)(puVar12 + -0x10) = &local_68;
  local_190 = puVar13 + uVar18 * 4;
  *(undefined1 **)(puVar12 + -0x18) = puVar13 + uVar18 * 4;
  *(undefined1 **)(puVar12 + -0x20) = puVar13;
  *(undefined1 **)(puVar12 + -0x28) = puVar11;
  *(undefined8 *)(puVar12 + -0x30) = 0;
  pcVar5 = *(code **)(lVar4 + 0x130);
  *(undefined8 *)(puVar12 + -0x58) = 0x14178bf0b;
  (*pcVar5)(plVar3,lVar2 + 0x58,0,uVar18);
  local_e0[1] = 0;
  local_e0[2] = 0;
  local_e0[3] = 0;
  local_e0[10] = 0;
  local_e0[0xb] = 0;
  local_e0[0xc] = 0;
  local_e0[0xd] = 0;
  local_70 = 0;
  local_6f = 0xff;
  local_e0[4] = 0;
  local_e0[5] = 0;
  local_e0[6] = 0;
  local_e0[7] = 0;
  local_e0[8] = 0;
  local_e0[9] = 0;
  uVar15 = local_68 & 0xffffffff;
  local_e0[0] = lVar9;
  *(undefined8 *)(puVar12 + -0x28) = 0x14178bf62;
  local_188 = FUN_140a6e1ae(lVar9 + 0x1438,uVar15,0x200);
  pcVar5 = *(code **)(**(longlong **)(param_3 + 0x48) + 8);
  *(undefined8 *)(puVar12 + -0x28) = 0x14178bf79;
  _Src = (void *)(*pcVar5)();
  if (uVar19 != 0) {
    uVar15 = 0;
    local_180 = uVar18;
    local_178 = puVar11;
    do {
      lVar9 = uVar15 * 0x20;
      _Dst = (void *)(*(longlong *)(local_178 + lVar9) + local_188);
      uVar19 = *(uint *)(local_178 + lVar9 + 0x18);
      iVar17 = *(int *)(local_178 + lVar9 + 0x14) * *(int *)(puVar13 + uVar15 * 4);
      uVar8 = (uint)*(ulonglong *)(local_190 + uVar15 * 8);
      if (uVar19 == uVar8) {
        uVar18 = (ulonglong)(iVar17 * uVar8);
        *(undefined8 *)(puVar12 + -0x28) = 0x14178c010;
        memcpy(_Dst,_Src,uVar18);
        _Src = (void *)((longlong)_Src + uVar18);
      }
      else if (iVar17 != 0) {
        uVar18 = *(ulonglong *)(local_190 + uVar15 * 8) & 0xffffffff;
        do {
          *(undefined8 *)(puVar12 + -0x28) = 0x14178bfd9;
          memcpy(_Dst,_Src,uVar18);
          _Src = (void *)((longlong)_Src + uVar18);
          _Dst = (void *)((longlong)_Dst + (ulonglong)uVar19);
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      uVar15 = uVar15 + 1;
      puVar11 = local_178;
      uVar18 = local_180;
    } while (uVar15 != local_180);
  }
  local_168 = local_198;
  local_160[0] = local_e0[0];
  local_160[1] = 0;
  local_160[2] = 0;
  local_160[3] = 0;
  local_160[10] = 0;
  local_160[0xb] = 0;
  local_160[0xc] = 0;
  local_160[0xd] = 0;
  local_f0 = 0;
  local_ef = 0xff;
  local_160[4] = 0;
  local_160[5] = 0;
  local_160[6] = 0;
  local_160[7] = 0;
  local_160[8] = 0;
  local_160[9] = 0;
  *(undefined8 *)(puVar12 + -0x28) = 0x14178c078;
  FUN_14488e164(local_160);
  puVar6 = local_1a0;
  uVar19 = (uint)uVar18;
  uStack_e4 = local_16c;
  local_e8 = uVar19;
  if (*(char *)((longlong)local_1a0 + 100) == '\x01') {
    *(undefined8 *)(puVar12 + -0x28) = 0x14178c1f9;
    FUN_143179d5e(&local_168,puVar6);
  }
  else {
    puVar14 = (undefined8 *)(*local_1a0 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar14 + 0x13;
    if ((undefined8 *)local_1a0[1] < puVar10) {
      *(undefined8 *)(puVar12 + -0x28) = 0x14178c1a6;
      FUN_140023dd8(puVar6,0xa0);
      puVar14 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar14 + 0x13;
    }
    *puVar6 = (ulonglong)puVar10;
    *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
    *(undefined8 **)puVar6[6] = puVar14;
    puVar6[6] = (ulonglong)(puVar14 + 1);
    puVar14[1] = 0;
    *puVar14 = &PTR_FUN_14a350218;
    puVar14[2] = local_168;
    puVar14[3] = local_160[0];
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[6] = 0;
    puVar14[0xd] = 0;
    puVar14[0xe] = 0;
    puVar14[0xf] = 0;
    puVar14[0x10] = 0;
    *(undefined1 *)(puVar14 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar14 + 0x89) = 0xff;
    puVar14[7] = 0;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    puVar14[0xc] = 0;
    *(undefined8 *)(puVar12 + -0x28) = 0x14178c127;
    FUN_14488e164(puVar14 + 3,local_160);
    puVar14[0x12] = CONCAT44(uStack_e4,local_e8);
  }
  *(undefined8 *)(puVar12 + -0x28) = 0x14178c142;
  FUN_1456d02da(local_160);
  *(undefined8 *)(puVar12 + -0x28) = 0x14178c14b;
  FUN_1456d02da(local_e0);
  if (0x5d < uVar19) {
    *(undefined8 *)(puVar12 + -0x28) = 0x14178c20e;
    FUN_1400020a8(puVar11);
  }
  if ((local_60 ^ (ulonglong)(local_160 + 7)) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar12 + -0x28) = &UNK_14178c190;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14178c218 FUN_14178c218 body=50 status=ok
// SIG undefined FUN_14178c218(void)

void FUN_14178c218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_1405297be(param_3,param_2,param_5,param_4,param_6,param_7,0);
  return;
}



// FUNCTION 14178c258 FUN_14178c258 body=86 status=ok
// SIG undefined FUN_14178c258(void)

void FUN_14178c258(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_4 - 1U < 5) {
    iVar1 = param_4;
  }
  FUN_1405297be(param_3,param_2,param_6,iVar1 + param_5 * 6,param_7,param_8,0);
  return;
}



// FUNCTION 14178c2d6 FUN_14178c2d6 body=77 status=ok
// SIG undefined FUN_14178c2d6(void)

longlong FUN_14178c2d6(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140540150(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178c324 FUN_14178c324 body=77 status=ok
// SIG undefined FUN_14178c324(void)

longlong FUN_14178c324(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140540150(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178c372 FUN_14178c372 body=77 status=ok
// SIG undefined FUN_14178c372(void)

longlong FUN_14178c372(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_140540150(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178c3c0 FUN_14178c3c0 body=39 status=ok
// SIG undefined FUN_14178c3c0(void)

undefined8 * FUN_14178c3c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178c3e8 FUN_14178c3e8 body=39 status=ok
// SIG undefined FUN_14178c3e8(void)

undefined8 * FUN_14178c3e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178c410 FUN_14178c410 body=29 status=ok
// SIG undefined FUN_14178c410(void)

undefined8 FUN_14178c410(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178c42e FUN_14178c42e body=29 status=ok
// SIG undefined FUN_14178c42e(void)

undefined8 FUN_14178c42e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178c44c FUN_14178c44c body=369 status=ok
// SIG undefined FUN_14178c44c(void)

void FUN_14178c44c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_14178c4d1;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_14178c4d1:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 14178c5be FUN_14178c5be body=353 status=ok
// SIG undefined FUN_14178c5be(void)

void FUN_14178c5be(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14178c643;
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
LAB_14178c643:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14178c720 FUN_14178c720 body=138 status=ok
// SIG undefined FUN_14178c720(void)

undefined8 * FUN_14178c720(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar2 = param_2;
  puVar2[0xf] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined8 *)((longlong)puVar2 + 100) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x6c) = 0;
  iVar1 = *(int *)(param_1 + 200);
  *(uint *)(param_1 + 200) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xcc) < iVar1 + 1U) {
    FUN_1473841a4(param_1,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar3 = param_1;
  }
  *(undefined8 **)(lVar3 + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 14178c7aa FUN_14178c7aa body=309 status=ok
// SIG undefined FUN_14178c7aa(void)

void FUN_14178c7aa(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  
  if ((*(int *)(param_1 + 0x68) == -1) || (*(char *)(param_1 + 0x6c) == -1)) goto LAB_14178c7c6;
  lVar5 = *(longlong *)(param_1 + 0x60);
  lVar10 = param_3;
  if (param_3 == 0) {
    lVar10 = DAT_14ca84b20;
  }
  lVar6 = *(longlong *)(lVar10 + 0x168);
  iVar4 = *(int *)(lVar6 + 0x44);
  if (lVar5 == lVar10) {
    if (iVar4 != *(int *)(param_1 + 200)) goto LAB_14178c898;
  }
  else {
    if (lVar5 != 0) {
      FUN_144b1ad1a(lVar5 + 0x60,param_1 + 0x70);
    }
    FUN_14472d45a(lVar10 + 0x60,param_1 + 0x70);
LAB_14178c898:
    FUN_14736bbf0(*(longlong *)(param_1 + 0x78) + 0x6b0,param_2,*(undefined8 *)(param_1 + 0x68),
                  lVar6);
  }
  *(int *)(param_1 + 200) = iVar4;
LAB_14178c7c6:
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (lVar5 != param_3) {
    *(longlong *)(param_1 + 0x60) = param_3;
    if (param_3 != 0) {
      LOCK();
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14178c8e0 FUN_14178c8e0 body=432 status=ok
// SIG undefined FUN_14178c8e0(void)

void FUN_14178c8e0(undefined8 param_1,ulonglong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 unaff_RBX;
  char cVar8;
  undefined8 unaff_RDI;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  ulonglong uVar9;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  if (param_4 == 0) {
    param_4 = DAT_14ca84b20;
  }
  cVar8 = DAT_14ca84e23 * '\x02' + '\x01';
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),cVar8);
  uVar4 = *(undefined1 *)((longlong)param_2 + 0x69);
  local_68 = param_3;
  local_60 = param_4;
  FUN_14002049c(param_2,uVar9 & 0xffffffff);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    do {
      bVar5 = (byte)uVar9;
      uVar9 = (ulonglong)((-bVar5 & bVar5) == 2);
      (&local_48)[uVar9] = param_2[uVar9 + 10];
      bVar5 = bVar5 - 1 & bVar5;
      uVar9 = (ulonglong)bVar5;
    } while (bVar5 != 0);
    local_58 = (undefined4)local_48;
    uStack_54 = local_48._4_4_;
    uStack_50 = (undefined4)uStack_40;
    uStack_4c = uStack_40._4_4_;
    FUN_14318704e(&local_68);
  }
  else {
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar6 + 5;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x30);
      puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar6 + 5;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar6;
    param_2[6] = (ulonglong)(puVar6 + 1);
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_14a354800;
    puVar6[2] = param_3;
    local_68 = 0;
    puVar6[3] = param_4;
    *(char *)(puVar6 + 4) = cVar8;
  }
  FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar4) & 0xffffffff);
  FUN_14494c7ac(param_2,&local_48,1);
  if (local_48 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_48 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if (local_68 != 0) {
    LOCK();
    puVar2 = (uint *)(local_68 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178ca92 FUN_14178ca92 body=29 status=ok
// SIG undefined FUN_14178ca92(void)

undefined8 FUN_14178ca92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178cab0 FUN_14178cab0 body=104 status=ok
// SIG undefined FUN_14178cab0(void)

void FUN_14178cab0(longlong param_1)

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
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14178cb18 FUN_14178cb18 body=112 status=ok
// SIG undefined FUN_14178cb18(void)

void FUN_14178cb18(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x220,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x220)) {
      uVar2 = uVar1 / 0x220 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x220,8);
  }
  return;
}



// FUNCTION 14178cb88 FUN_14178cb88 body=83 status=ok
// SIG undefined FUN_14178cb88(void)

void FUN_14178cb88(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  local_10 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_18,9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178cbdc FUN_14178cbdc body=128 status=ok
// SIG undefined FUN_14178cbdc(void)

undefined8 FUN_14178cbdc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x298));
  uVar1 = FUN_140032814(param_1);
  local_40 = param_2;
  local_38 = param_3;
  FUN_1404efec8(uVar1,local_2c,&local_40,0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x298));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178cc5e FUN_14178cc5e body=91 status=ok
// SIG undefined FUN_14178cc5e(void)

void FUN_14178cc5e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140314f90();
  plVar2 = (longlong *)(*plVar2 + 8);
  if (plVar2 != param_2) {
    plVar1 = (longlong *)*plVar2;
    *plVar2 = *param_2;
    *param_2 = 0;
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014178ccb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2,1);
  return;
}



// FUNCTION 14178ccba FUN_14178ccba body=478 status=ok
// SIG undefined FUN_14178ccba(void)

void FUN_14178ccba(longlong param_1,longlong *param_2,byte param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  bool bVar8;
  
  lVar3 = *param_2;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar5 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20) == lVar3)
        goto LAB_14178cd36;
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_14178cd36:
  lVar6 = lVar5 + 8;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  bVar7 = *(byte *)(lVar6 + 0xc);
  do {
    LOCK();
    bVar2 = *(byte *)(lVar6 + 0xc);
    bVar8 = bVar7 == bVar2;
    if (bVar8) {
      *(byte *)(lVar6 + 0xc) = bVar7 | (param_3 ^ 1) * '\x02' + 3;
      bVar2 = bVar7;
    }
    bVar7 = bVar2;
    UNLOCK();
  } while (!bVar8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca813a8) && (FUN_144b3d300(&DAT_14ca813a8), DAT_14ca813a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca813a0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
    _Init_thread_footer(&DAT_14ca813a8);
  }
  bVar8 = false;
  if ((DAT_14ca84df4 == 0x10de) && (bVar8 = false, DAT_14ca813a0 != (longlong *)0x0)) {
    iVar4 = (**(code **)(*DAT_14ca813a0 + 0xb0))();
    bVar8 = 0 < iVar4;
  }
  if (((bVar8) || (DAT_14ca80860 == 0)) || (DAT_14ca84df4 != 0x10de)) {
    iVar4 = *(int *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar4 + 1U) {
      FUN_14479d316((longlong *)(param_1 + 0x80),iVar4);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar4 * 8) = lVar3;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  if ((~bVar7 & 9) == 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x74 + (ulonglong)((bVar7 & 0x10) >> 4) * 4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  LOCK();
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  UNLOCK();
  return;
}



// FUNCTION 14178ce98 FUN_14178ce98 body=29 status=ok
// SIG undefined FUN_14178ce98(void)

undefined8 FUN_14178ce98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178ceb6 FUN_14178ceb6 body=205 status=ok
// SIG undefined FUN_14178ceb6(void)

undefined8 * FUN_14178ceb6(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a37d350;
  LOCK();
  puVar1 = (uint *)(param_1[7] + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar2 & 0x3fffffff) == 1) {
    FUN_144a54812();
  }
  lVar4 = param_1[9];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  FUN_140259e20(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178cf84 FUN_14178cf84 body=29 status=ok
// SIG undefined FUN_14178cf84(void)

undefined8 FUN_14178cf84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178cfa2 FUN_14178cfa2 body=450 status=ok
// SIG undefined FUN_14178cfa2(void)

longlong FUN_14178cfa2(uint param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  int local_48 [2];
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14ca80510 != DAT_14ca8053c) {
    puVar3 = &DAT_14ca80540;
    if (DAT_14ca80548 != (undefined *)0x0) {
      puVar3 = DAT_14ca80548;
    }
    iVar6 = *(int *)(puVar3 + (ulonglong)(DAT_14ca80550 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = DAT_14ca80508 + (longlong)iVar6 * 0x20;
        if (*(int *)(DAT_14ca80508 + (longlong)iVar6 * 0x20) == *param_2) {
          if (lVar4 != 0) goto LAB_14178d114;
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x18);
      } while (iVar6 != -1);
    }
  }
  FUN_14070ec8e(&DAT_14ca80508,local_48);
  *local_40 = *param_2;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  *(undefined2 *)(local_40 + 5) = 0;
  local_40[6] = -1;
  cVar1 = FUN_14070ec04(&DAT_14ca80508,param_1,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = DAT_14ca80510 - DAT_14ca8053c;
    if (uVar2 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar6 <= DAT_14ca80550)) {
      param_1 = DAT_14ca80550 - 1U & param_1;
      local_40[7] = param_1;
      puVar3 = DAT_14ca80548;
      if (DAT_14ca80548 == (undefined *)0x0) {
        puVar3 = &DAT_14ca80540;
      }
      local_40[6] = *(int *)(puVar3 + ((longlong)DAT_14ca80550 - 1U & (longlong)(int)param_1) * 4);
      puVar3 = DAT_14ca80548;
      if (DAT_14ca80548 == (undefined *)0x0) {
        puVar3 = &DAT_14ca80540;
      }
      *(int *)(puVar3 + ((longlong)DAT_14ca80550 - 1U & (longlong)(int)param_1) * 4) = local_48[0];
    }
    else {
      DAT_14ca80550 = iVar6;
      FUN_14070ee74(&DAT_14ca80508);
    }
  }
  lVar4 = DAT_14ca80508 + (longlong)local_48[0] * 0x20;
LAB_14178d114:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 14178d166 FUN_14178d166 body=174 status=ok
// SIG undefined FUN_14178d166(void)

undefined8 FUN_14178d166(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x3f00;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c8421f0];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x3f00,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3 >> 3;
  uVar2 = SUB168(auVar1 * ZEXT816(0x2082082082082083),0);
  uVar3 = (uVar3 >> 3) / 0x3f;
  uVar4 = 0x7fffffff;
  if (0x1f < (int)uVar3) {
    uVar4 = uVar3 & 0xffffffff;
  }
  if ((int)uVar4 != DAT_14ca80604) {
    DAT_14ca80604 = (int)uVar4;
    uVar2 = FUN_1446f8d3c(&DAT_14ca805f8,DAT_14ca80600,uVar4,0x1f8,8);
  }
  return uVar2;
}



// FUNCTION 14178d214 FUN_14178d214 body=69 status=ok
// SIG undefined FUN_14178d214(void)

void FUN_14178d214(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0xd3) & 0x10) != 0) {
    LOCK();
    DAT_14ca813ac = DAT_14ca813ac + -1;
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14178d25a FUN_14178d25a body=563 status=ok
// SIG undefined FUN_14178d25a(void)

void FUN_14178d25a(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_14178d448;
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
LAB_14178d448:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178d48e FUN_14178d48e body=563 status=ok
// SIG undefined FUN_14178d48e(void)

void FUN_14178d48e(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_14178d67c;
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
LAB_14178d67c:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178d6c2 FUN_14178d6c2 body=179 status=ok
// SIG undefined FUN_14178d6c2(void)

void FUN_14178d6c2(ulonglong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    if ((*(byte *)(puVar2 + 0x14) & 1) == 0) {
      FUN_140082318(puVar2);
    }
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014178d772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar2)(puVar2,1);
        return;
      }
    }
  }
  else {
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
    if ((undefined8 *)param_1[1] < puVar4) {
      FUN_140023dd8(param_1,0x20);
      puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar3 + 3;
    }
    *param_1 = (ulonglong)puVar4;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar3;
    param_1[6] = (ulonglong)(puVar3 + 1);
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_14a380d50;
    puVar3[2] = puVar2;
  }
  return;
}



// FUNCTION 14178d776 FUN_14178d776 body=724 status=ok
// SIG undefined FUN_14178d776(void)

void FUN_14178d776(longlong param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = param_4;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  uVar10 = *(uint *)((longlong)param_2 + 0x17c);
  *(uint *)(param_1 + 0x10) = uVar10;
  if (uVar10 != 0) {
    uVar8 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    local_58 = param_1 + 0x18;
    do {
      uVar11 = 1 << ((byte)uVar8 & 0x1f);
      uVar3 = *(uint *)((longlong)param_2 + 0x17c);
      if (uVar3 != uVar11) {
        *(uint *)((longlong)param_2 + 0x17c) = uVar11;
        puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar6 + 3;
        if ((undefined8 *)param_2[1] < puVar7) {
          FUN_140023dd8(param_2,0x20);
          puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar6 + 3;
        }
        *param_2 = (ulonglong)puVar7;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar6;
        param_2[6] = (ulonglong)(puVar6 + 1);
        uVar4 = *(undefined4 *)((longlong)param_2 + 0x17c);
        puVar6[1] = 0;
        *puVar6 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar6 + 2) = uVar4;
      }
      plVar2 = (longlong *)(local_58 + (ulonglong)uVar8 * 8);
      if (*plVar2 == 0) {
        (**(code **)(*DAT_14ca83900 + 0xe0))(DAT_14ca83900,&local_50);
        if (plVar2 != &local_50) {
          lVar5 = *plVar2;
          *plVar2 = local_50;
          local_50 = 0;
          if (lVar5 == 0) goto LAB_14178d7ff;
          LOCK();
          puVar1 = (uint *)(lVar5 + 8);
          uVar8 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar8 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
        if (local_50 != 0) {
          LOCK();
          puVar1 = (uint *)(local_50 + 8);
          uVar8 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar8 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
LAB_14178d7ff:
      iVar9 = local_5c;
      if (local_5c == 0) {
        iVar9 = *(int *)(param_3 + 0x20);
      }
      lVar5 = *plVar2;
      puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar6 + 5;
      if ((undefined8 *)param_2[1] < puVar7) {
        FUN_140023dd8(param_2,0x30);
        puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar6 + 5;
      }
      *param_2 = (ulonglong)puVar7;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar6;
      param_2[6] = (ulonglong)(puVar6 + 1);
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_14a338558;
      puVar6[2] = param_3;
      puVar6[3] = lVar5;
      *(undefined4 *)(puVar6 + 4) = 0;
      *(int *)((longlong)puVar6 + 0x24) = iVar9;
      (**(code **)(*DAT_14ca83900 + 0xc0))(DAT_14ca83900,param_2,*(undefined8 *)(param_1 + 8));
      if (*(uint *)((longlong)param_2 + 0x17c) != uVar3) {
        *(uint *)((longlong)param_2 + 0x17c) = uVar3;
        puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar6 + 3;
        if ((undefined8 *)param_2[1] < puVar7) {
          FUN_140023dd8(param_2,0x20);
          puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar6 + 3;
        }
        *param_2 = (ulonglong)puVar7;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar6;
        param_2[6] = (ulonglong)(puVar6 + 1);
        uVar4 = *(undefined4 *)((longlong)param_2 + 0x17c);
        puVar6[1] = 0;
        *puVar6 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar6 + 2) = uVar4;
      }
      uVar10 = uVar10 & ~uVar11;
      if (uVar10 == 0) {
        uVar8 = 0x20;
      }
      else {
        uVar8 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
      }
    } while (uVar10 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14178da4c FUN_14178da4c body=137 status=ok
// SIG undefined FUN_14178da4c(void)

undefined8 * FUN_14178da4c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_3 + 8))(param_3);
  FUN_1400d69c8(param_1,&local_38,param_3);
  *param_2 = local_38;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 3);
  *(byte *)((longlong)param_2 + 6) =
       (byte)((ulonglong)local_38 >> 0x30) & 0xf7 | (*(char *)(lVar1 + 0x30) == '\x01') << 3;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178dad6 FUN_14178dad6 body=70 status=ok
// SIG undefined FUN_14178dad6(void)

void FUN_14178dad6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a37fd30;
  if (param_1[0xc] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xc] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 14178db1c FUN_14178db1c body=50 status=ok
// SIG undefined FUN_14178db1c(void)

void FUN_14178db1c(longlong param_1)

{
  FUN_14017d40e(param_1 + 0xd8);
  FUN_14017d442(param_1 + 0xb8);
  FUN_14017d484(param_1);
  return;
}



// FUNCTION 14178db4e FUN_14178db4e body=180 status=ok
// SIG undefined FUN_14178db4e(void)

void FUN_14178db4e(void)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined2 *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined2 *)0x0;
  local_28 = *(int *)(DAT_14ca844c8 + 1);
  lVar2 = (longlong)local_28;
  _Src = (void *)*DAT_14ca844c8;
  if (lVar2 == 0) {
    local_24 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    memcpy(local_30,_Src,lVar2 * 2);
    puVar1 = local_30;
    if (local_28 != 0) goto LAB_14178db93;
  }
  puVar1 = &DAT_149dfb77a;
LAB_14178db93:
  FUN_1446f470e(local_38,puVar1,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14178dc04 FUN_14178dc04 body=38 status=ok
// SIG undefined FUN_14178dc04(void)

undefined8 FUN_14178dc04(undefined8 param_1,int param_2)

{
  FUN_140160bb2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178dc2a FUN_14178dc2a body=177 status=ok
// SIG undefined FUN_14178dc2a(void)

void FUN_14178dc2a(ulonglong *param_1)

{
  if (param_1[0xc] != 0 && (param_1[0xc] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0 && (param_1[10] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0 && (param_1[8] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0 && (param_1[6] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0 && (param_1[4] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14178dcdc FUN_14178dcdc body=93 status=ok
// SIG undefined FUN_14178dcdc(void)

void FUN_14178dcdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a380e50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14178dd3a FUN_14178dd3a body=544 status=ok
// SIG undefined FUN_14178dd3a(void)

void FUN_14178dd3a(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x20);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 2) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 1;
    _Src = *(void **)((longlong)param_1 + 0x18);
joined_r0x00014178deef:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x24) < 2) {
      uVar6 = 4;
      if (4 < uVar3) {
        uVar6 = uVar3;
      }
      lVar4 = (longlong)(int)uVar6;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
    }
    uVar7 = lVar4 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14178ddd0;
              lVar4 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_14178ddd0:
    uVar7 = uVar7 / 0x18;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0x7fffffff;
      uVar7 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x18);
    }
    else {
      *(uint *)((longlong)param_1 + 0x24) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x18);
      if (uVar6 < 2) goto joined_r0x00014178deef;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x18,0,uVar7,0x18);
      memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,uVar7,0x18);
  return;
}



// FUNCTION 14178df5a FUN_14178df5a body=544 status=ok
// SIG undefined FUN_14178df5a(void)

void FUN_14178df5a(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x20);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 2) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 1;
    _Src = *(void **)((longlong)param_1 + 0x18);
joined_r0x00014178e10f:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x24) < 2) {
      uVar6 = 4;
      if (4 < uVar3) {
        uVar6 = uVar3;
      }
      lVar4 = (longlong)(int)uVar6;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
    }
    uVar7 = lVar4 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14178dff0;
              lVar4 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_14178dff0:
    uVar7 = uVar7 / 0x18;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0x7fffffff;
      uVar7 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x18);
    }
    else {
      *(uint *)((longlong)param_1 + 0x24) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x18);
      if (uVar6 < 2) goto joined_r0x00014178e10f;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x18,0,uVar7,0x18);
      memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,uVar7,0x18);
  return;
}



// FUNCTION 14178e17a FUN_14178e17a body=422 status=ok
// SIG undefined FUN_14178e17a(void)

void FUN_14178e17a(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x28);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar1 < 2) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
    _Src = *(void **)((longlong)param_1 + 0x20);
joined_r0x00014178e2b9:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x2c) < 2) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 5;
    uVar2 = (uint)uVar4;
    if ((int)uVar2 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0x7fffffff;
      uVar4 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x20);
    }
    else {
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      _Src = *(void **)((longlong)param_1 + 0x20);
      if (uVar2 < 2) goto joined_r0x00014178e2b9;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x20,0,uVar4,0x20);
      memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 5);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,uVar4,0x20);
  return;
}



// FUNCTION 14178e320 FUN_14178e320 body=63 status=ok
// SIG undefined FUN_14178e320(void)

void FUN_14178e320(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0xa0;
  do {
    if (*(longlong *)(param_1 + -0x10 + lVar1) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + -0x20 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14178e360 FUN_14178e360 body=61 status=ok
// SIG undefined FUN_14178e360(void)

void FUN_14178e360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  *puVar1 = &PTR_FUN_14a388270;
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
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 14178e39e FUN_14178e39e body=135 status=ok
// SIG undefined FUN_14178e39e(void)

undefined8 * FUN_14178e39e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a388270;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178e426 FUN_14178e426 body=40 status=ok
// SIG undefined FUN_14178e426(void)

undefined8 FUN_14178e426(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178e44e FUN_14178e44e body=323 status=ok
// SIG undefined FUN_14178e44e(void)

void FUN_14178e44e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar11 = FUN_144821ef4();
  local_3c = *param_4;
  FUN_1447e4b92(lVar11,*param_2 + 0xe0,&local_3c,0);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178e592 FUN_14178e592 body=353 status=ok
// SIG undefined FUN_14178e592(void)

void FUN_14178e592(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14178e617;
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
LAB_14178e617:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14178e6f4 FUN_14178e6f4 body=40 status=ok
// SIG undefined FUN_14178e6f4(void)

undefined8 FUN_14178e6f4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178e71c FUN_14178e71c body=92 status=ok
// SIG undefined FUN_14178e71c(void)

undefined8 * FUN_14178e71c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a387660;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178e778 FUN_14178e778 body=34 status=ok
// SIG undefined FUN_14178e778(void)

void FUN_14178e778(longlong param_1)

{
  FUN_14010eabe();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 14178e79a FUN_14178e79a body=34 status=ok
// SIG undefined FUN_14178e79a(void)

void FUN_14178e79a(longlong param_1)

{
  FUN_140298d6a();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 14178e7bc FUN_14178e7bc body=353 status=ok
// SIG undefined FUN_14178e7bc(void)

void FUN_14178e7bc(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14178e843;
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
LAB_14178e843:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14178e91e FUN_14178e91e body=182 status=ok
// SIG undefined FUN_14178e91e(void)

void FUN_14178e91e(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0x15;
  if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) {
    bVar2 = 0x15;
    if (DAT_14ca84e99 == '\0') {
      bVar2 = param_4 & 3 | 0x14;
    }
  }
  if ((*(byte *)(param_2 + 0x20) & 0xc) == 0) {
    if ((*(byte *)(param_2 + 0x20) & 0x10) != 0) {
      FUN_140069376(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x5a0);
    *(uint *)(param_1 + 0x5a0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x5a4) < iVar1 + 1U) {
      FUN_1400f155a((longlong *)(param_1 + 0x598),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x598) + (longlong)iVar1 * 8) = param_2;
    *(undefined4 *)(param_2 + 0x1c) = param_3;
    *(byte *)(param_2 + 0x20) = bVar2 | *(byte *)(param_2 + 0x20) & 0xe8;
    *(undefined4 *)(param_2 + 0x58) = param_3;
  }
  return;
}



// FUNCTION 14178e9d4 FUN_14178e9d4 body=199 status=ok
// SIG undefined FUN_14178e9d4(void)

void FUN_14178e9d4(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    puVar3 = (undefined8 *)(*param_2 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 9;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x50);
      puVar3 = (undefined8 *)(*param_2 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar3 + 9;
    }
    *param_2 = (longlong)puVar4;
    uVar1 = *(undefined1 *)(param_1 + 0x2b);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0xffffffff;
    *(undefined1 *)((longlong)puVar3 + 0x14) = 1;
    *(undefined4 *)(puVar3 + 3) = 0xffffffff;
    *(undefined1 *)((longlong)puVar3 + 0x1c) = 1;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 8) = 1;
    *(undefined1 *)((longlong)puVar3 + 0x44) = uVar1;
    *(undefined1 *)((longlong)puVar3 + 0x45) = uVar1;
    *(undefined2 *)((longlong)puVar3 + 0x46) = 0;
    *(undefined8 **)(param_1 + 0xf0) = puVar3;
    iVar2 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
      FUN_144adb638(param_3,iVar2);
    }
    *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = *(undefined8 *)(param_1 + 0xf0);
  }
  return;
}



// FUNCTION 14178ea9b FUN_14178ea9b body=88 status=ok
// SIG undefined FUN_14178ea9b(void)

void FUN_14178ea9b(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0x100000000;
  uStack_1c = 0x100000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = 1;
  FUN_1401a4871(local_38,param_2,&local_48);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178eaf4 FUN_14178eaf4 body=186 status=ok
// SIG undefined FUN_14178eaf4(void)

void FUN_14178eaf4(void *param_1,uint param_2,uint param_3)

{
  ulonglong *puVar1;
  void *_Dst;
  void *_Src;
  ulonglong uVar2;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 5) {
    _Dst = param_1;
    if (_Src == (void *)0x0) {
      return;
    }
  }
  else {
    if (_Src != (void *)0x0) {
      FUN_14742bf82((longlong)param_1 + 0x10,param_2,param_3);
      return;
    }
    param_3 = param_3 * 4;
    puVar1 = TlsGetValue(DAT_14ca954e4);
    _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    uVar2 = (longlong)_Dst + (ulonglong)param_3;
    if (puVar1[1] < uVar2) {
      FUN_140023dd8(puVar1,param_3 + 0x10);
      _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar2 = (ulonglong)param_3 + (longlong)_Dst;
    }
    *puVar1 = uVar2;
    *(void **)((longlong)param_1 + 0x10) = _Dst;
    _Src = param_1;
  }
  memmove(_Dst,_Src,(ulonglong)param_2 << 2);
  return;
}



// FUNCTION 14178ebae FUN_14178ebae body=14 status=ok
// SIG undefined FUN_14178ebae(void)

void FUN_14178ebae(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14004756c();
    return;
  }
  return;
}



// FUNCTION 14178ebbc FUN_14178ebbc body=14 status=ok
// SIG undefined FUN_14178ebbc(void)

void FUN_14178ebbc(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400517d6();
    return;
  }
  return;
}



// FUNCTION 14178ebca FUN_14178ebca body=310 status=ok
// SIG undefined FUN_14178ebca(void)

longlong * FUN_14178ebca(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong *lpTlsValue;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar2 = lpTlsValue[1];
    }
    else {
      lVar2 = *lpTlsValue;
      if (lVar2 != 0) {
        uVar1 = FUN_14493c560();
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                  *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
        }
        *(longlong *)(lVar3 + 8) = lVar2;
        FUN_144a8fde6(&DAT_14c896180,uVar1);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar2 = 0;
    }
    *param_1 = lVar2;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14178ed00 FUN_14178ed00 body=87 status=ok
// SIG undefined FUN_14178ed00(void)

void FUN_14178ed00(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1400dea54();
  return;
}



// FUNCTION 14178ed58 FUN_14178ed58 body=246 status=ok
// SIG undefined FUN_14178ed58(void)

void FUN_14178ed58(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    *(int *)((longlong)param_1 + 0xc) = param_2;
    if (param_2 != 0) {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456bd9fc(param_2,8);
      }
      iVar3 = *(int *)(param_1 + 1);
      _Src = (void *)*param_1;
      iVar5 = param_2 * 8;
      puVar2 = TlsGetValue(DAT_14ca954e4);
      uVar4 = (ulonglong)((uint)(0xf < iVar5) * 8);
      lVar1 = uVar4 + 7;
      uVar4 = uVar4 ^ 0xfffffffffffffff8;
      _Dst = (void *)(*puVar2 + lVar1 & uVar4);
      uVar6 = (longlong)_Dst + (longlong)iVar5;
      if (puVar2[1] < uVar6) {
        FUN_140023dd8(puVar2,iVar5 + (uint)(0xf < iVar5) * 8 + 8);
        _Dst = (void *)(lVar1 + *puVar2 & uVar4);
        uVar6 = (longlong)iVar5 + (longlong)_Dst;
      }
      *puVar2 = uVar6;
      *param_1 = _Dst;
      if (iVar3 != 0 && _Src != (void *)0x0) {
        if (param_2 < iVar3) {
          iVar3 = param_2;
        }
        memcpy(_Dst,_Src,(longlong)iVar3 << 3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14178ee50 FUN_14178ee50 body=219 status=ok
// SIG undefined FUN_14178ee50(void)

void FUN_14178ee50(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if ((*(int *)((longlong)param_1 + 0xc) != param_2) &&
     (*(int *)((longlong)param_1 + 0xc) = param_2, param_2 != 0)) {
    iVar3 = *(int *)(param_1 + 1);
    _Src = (void *)*param_1;
    iVar5 = param_2 * 8;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar4 = (ulonglong)((uint)(0xf < iVar5) * 8);
    lVar1 = uVar4 + 7;
    uVar4 = uVar4 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar4);
    uVar6 = (longlong)_Dst + (longlong)iVar5;
    if (puVar2[1] < uVar6) {
      FUN_140023dd8(puVar2,iVar5 + (uint)(0xf < iVar5) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar4);
      uVar6 = (longlong)iVar5 + (longlong)_Dst;
    }
    *puVar2 = uVar6;
    *param_1 = _Dst;
    if (iVar3 != 0 && _Src != (void *)0x0) {
      if (param_2 < iVar3) {
        iVar3 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)iVar3 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 14178ef2c FUN_14178ef2c body=228 status=ok
// SIG undefined FUN_14178ef2c(void)

void FUN_14178ef2c(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if ((*(int *)((longlong)param_1 + 0xc) != param_2) &&
     (*(int *)((longlong)param_1 + 0xc) = param_2, param_2 != 0)) {
    iVar3 = *(int *)(param_1 + 1);
    _Src = (void *)*param_1;
    iVar5 = param_2 * 8;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar4 = (ulonglong)((uint)(0xf < iVar5) * 8);
    lVar1 = uVar4 + 7;
    uVar4 = uVar4 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar4);
    uVar6 = (longlong)_Dst + (longlong)iVar5;
    if (puVar2[1] < uVar6) {
      FUN_140023dd8(puVar2,iVar5 + (uint)(0xf < iVar5) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar4);
      uVar6 = (longlong)iVar5 + (longlong)_Dst;
    }
    *puVar2 = uVar6;
    *param_1 = _Dst;
    if (iVar3 != 0 && _Src != (void *)0x0) {
      if (param_2 < iVar3) {
        iVar3 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)iVar3 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 14178f010 FUN_14178f010 body=87 status=ok
// SIG undefined FUN_14178f010(void)

void FUN_14178f010(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14014e2a2();
  return;
}



// FUNCTION 14178f068 FUN_14178f068 body=87 status=ok
// SIG undefined FUN_14178f068(void)

void FUN_14178f068(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1400e7fd2();
  return;
}



// FUNCTION 14178f0c0 FUN_14178f0c0 body=302 status=ok
// SIG undefined FUN_14178f0c0(void)

void FUN_14178f0c0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  void *_Src;
  ulonglong *puVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar2) {
      uVar4 = uVar2;
    }
  }
  else {
    uVar4 = uVar2 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar5 = 0x7fffffff;
  if ((int)uVar2 <= (int)uVar4) {
    uVar5 = uVar4;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(uVar5,8);
    }
    _Src = (void *)*param_1;
    iVar7 = uVar5 * 8;
    puVar3 = TlsGetValue(DAT_14ca954e4);
    uVar6 = (ulonglong)((uint)(0xf < iVar7) * 8);
    lVar1 = uVar6 + 7;
    uVar6 = uVar6 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar3 + lVar1 & uVar6);
    uVar8 = (longlong)_Dst + (longlong)iVar7;
    if (puVar3[1] < uVar8) {
      FUN_140023dd8(puVar3,iVar7 + (uint)(0xf < iVar7) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar3 & uVar6);
      uVar8 = (longlong)iVar7 + (longlong)_Dst;
    }
    *puVar3 = uVar8;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if ((int)uVar5 < (int)param_2) {
        param_2 = uVar5;
      }
      memcpy(_Dst,_Src,(longlong)(int)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 14178f1f0 FUN_14178f1f0 body=219 status=ok
// SIG undefined FUN_14178f1f0(void)

void FUN_14178f1f0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if ((*(int *)((longlong)param_1 + 0xc) != param_2) &&
     (*(int *)((longlong)param_1 + 0xc) = param_2, param_2 != 0)) {
    iVar3 = *(int *)(param_1 + 1);
    _Src = (void *)*param_1;
    iVar5 = param_2 * 8;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar4 = (ulonglong)((uint)(0xf < iVar5) * 8);
    lVar1 = uVar4 + 7;
    uVar4 = uVar4 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar4);
    uVar6 = (longlong)_Dst + (longlong)iVar5;
    if (puVar2[1] < uVar6) {
      FUN_140023dd8(puVar2,iVar5 + (uint)(0xf < iVar5) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar4);
      uVar6 = (longlong)iVar5 + (longlong)_Dst;
    }
    *puVar2 = uVar6;
    *param_1 = _Dst;
    if (iVar3 != 0 && _Src != (void *)0x0) {
      if (param_2 < iVar3) {
        iVar3 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)iVar3 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 14178f2cc FUN_14178f2cc body=290 status=ok
// SIG undefined FUN_14178f2cc(void)

void FUN_14178f2cc(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = *(uint *)(param_1 + 1);
  if ((int)uVar6 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar6) {
      uVar3 = uVar6;
    }
  }
  else {
    uVar3 = uVar6 + (int)((ulonglong)((longlong)(int)uVar6 * 3) >> 3) + 0x10;
  }
  uVar4 = 0x7fffffff;
  if ((int)uVar6 <= (int)uVar3) {
    uVar4 = uVar3;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar4;
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(uVar4,0x20);
    }
    _Src = (void *)*param_1;
    uVar6 = uVar4 * 0x20;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar5 = (ulonglong)((uint)(0xf < (int)uVar6) * 8);
    lVar1 = uVar5 + 7;
    uVar5 = uVar5 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar5);
    uVar7 = (longlong)_Dst + (longlong)(int)uVar6;
    if (puVar2[1] < uVar7) {
      FUN_140023dd8(puVar2,uVar6 | (uint)(0xf < (int)uVar6) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar5);
      uVar7 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *puVar2 = uVar7;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if ((int)uVar4 < (int)param_2) {
        param_2 = uVar4;
      }
      memcpy(_Dst,_Src,(longlong)(int)param_2 << 5);
      return;
    }
  }
  return;
}



// FUNCTION 14178f3f0 FUN_14178f3f0 body=344 status=ok
// SIG undefined FUN_14178f3f0(void)

void FUN_14178f3f0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x48);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 9) {
    iVar8 = 8;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (8 < *(uint *)(param_1 + 0x4c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14178f471;
              lVar5 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_14178f471:
    iVar4 = (int)(uVar6 >> 3);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x4c) = iVar8;
  FUN_1401a39a8(param_1,param_2);
  return;
}



// FUNCTION 14178f548 FUN_14178f548 body=353 status=ok
// SIG undefined FUN_14178f548(void)

void FUN_14178f548(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14178f5cf;
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
LAB_14178f5cf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14178f6aa FUN_14178f6aa body=157 status=ok
// SIG undefined FUN_14178f6aa(void)

void FUN_14178f6aa(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_14ca955f0;
  if (((((longlong)(int)(DAT_14ca955f4 - DAT_14ca955f0) & 0x1ffffffffffff800U) != 0) ||
      ((int)(DAT_14ca955f0 * 3) < DAT_14ca955f4 * 2)) &&
     (DAT_14ca955f0 == 0 || 0x40 < (int)(DAT_14ca955f4 - DAT_14ca955f0))) {
    if (0 < (int)DAT_14ca955f0) {
      uVar1 = FUN_144a3809e(uVar1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
    if ((int)uVar1 != DAT_14ca955f4) {
      DAT_14ca955f4 = (int)uVar1;
      FUN_1446f8d3c(&DAT_14ca955e8,DAT_14ca955f0,uVar1,8,8);
    }
  }
  return;
}



// FUNCTION 14178f748 FUN_14178f748 body=40 status=ok
// SIG undefined FUN_14178f748(void)

undefined8 FUN_14178f748(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178f770 FUN_14178f770 body=40 status=ok
// SIG undefined FUN_14178f770(void)

undefined8 FUN_14178f770(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178f798 FUN_14178f798 body=677 status=ok
// SIG undefined FUN_14178f798(void)

undefined4 * FUN_14178f798(char *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  longlong *plVar6;
  byte bVar7;
  bool bVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_3[1] == 0) {
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0x2000000000;
    goto LAB_14178f93c;
  }
  LOCK();
  cVar3 = *param_1;
  if (cVar3 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar3 != '\0') {
    FUN_1447d2058();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0x2000000000;
  }
  else {
    local_50 = (undefined8 *)0x0;
    local_48 = CONCAT44(0x20,*(int *)(param_1 + 0x10));
    uVar10 = *(int *)(param_1 + 0x10) + 0x1f;
    if (0x1f < uVar10) {
      if (uVar10 < 0x40) {
        puVar9 = &local_68;
        if (&local_60 != (undefined8 *)0x0) {
          puVar9 = &local_60;
        }
LAB_14178f821:
        uVar10 = uVar10 >> 3 & 0xfffffffc;
      }
      else {
        FUN_1400744f2(&local_68);
        local_48 = CONCAT44(uVar10,(int)local_48) & 0xffffffe0ffffffff;
        puVar9 = local_50;
        if (local_50 == (undefined8 *)0x0) {
          puVar9 = &local_60;
        }
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = &local_68;
        }
        if (uVar10 < 0x120) goto LAB_14178f821;
        uVar10 = (uVar10 >> 5) << 2;
      }
      memset(puVar9,0,(ulonglong)uVar10);
      iVar5 = (int)local_48 + 0x1f;
      if (-1 < (int)local_48) {
        iVar5 = (int)local_48;
      }
      if ((int)local_48 % 0x20 != 0) {
        puVar9 = &local_60;
        if (local_50 != (undefined8 *)0x0) {
          puVar9 = local_50;
        }
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = &local_68;
        }
        bVar7 = -(char)((int)local_48 % 0x20);
        *(uint *)((longlong)puVar9 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)puVar9 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    if ((longlong)(int)param_3[1] == 0) {
LAB_14178fa18:
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 8) = 0x2000000000;
    }
    else {
      plVar6 = (longlong *)*param_3;
      plVar1 = plVar6 + (int)param_3[1];
      bVar8 = false;
      do {
        while (*(char *)(*plVar6 + 0x4e) == '\0') {
          plVar6 = plVar6 + 1;
          if (plVar6 == plVar1) {
            if (!bVar8) goto LAB_14178fa18;
            goto LAB_14178f8da;
          }
        }
        uVar4 = *(ushort *)(*plVar6 + 0x4c);
        puVar9 = local_50;
        if (local_50 == (undefined8 *)0x0) {
          puVar9 = &local_60;
        }
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = &local_68;
        }
        puVar2 = (uint *)((longlong)puVar9 + (ulonglong)(uVar4 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar4 & 0x1f);
        plVar6 = plVar6 + 1;
        bVar8 = true;
      } while (plVar6 != plVar1);
LAB_14178f8da:
      FUN_1403abeda(param_1,&local_68);
      if (local_50 == (undefined8 *)0x0 && &local_60 == (undefined8 *)0x0) {
        *param_2 = (undefined4)local_68;
LAB_14178f8ff:
        *(undefined8 *)(param_2 + 2) = local_60;
        *(undefined8 *)(param_2 + 4) = uStack_58;
      }
      else if (local_50 == (undefined8 *)0x0) goto LAB_14178f8ff;
      *(undefined8 **)(param_2 + 6) = local_50;
      local_50 = (undefined8 *)0x0;
      param_2[8] = (int)local_48;
      param_2[9] = local_48._4_4_;
      local_48 = 0;
    }
    FUN_14004710c();
  }
  if (param_1 != (char *)0x0) {
    LOCK();
    cVar3 = *param_1;
    if (cVar3 == '\x01') {
      *param_1 = '\0';
    }
    UNLOCK();
    if (cVar3 != '\x01') {
      FUN_14008cdb0(param_1);
    }
  }
LAB_14178f93c:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14178fa3e FUN_14178fa3e body=135 status=ok
// SIG undefined FUN_14178fa3e(void)

void FUN_14178fa3e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 14178fac5 FUN_14178fac5 body=114 status=ok
// SIG undefined FUN_14178fac5(void)

undefined8 FUN_14178fac5(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_3 == 0) || (*(longlong *)(*param_3 + 8) != param_1)) {
    FUN_1447ec05f(&local_20,param_1,param_2);
    plVar1 = (longlong *)*param_3;
    *param_3 = local_20;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178fb38 FUN_14178fb38 body=290 status=ok
// SIG undefined FUN_14178fb38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14178fb38(uint param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97348) {
    FUN_144b3d300(&DAT_14ca97348);
    if (DAT_14ca97348 == -1) {
      FUN_140056680(&DAT_14ca97330,L"r.Substrate.Glints");
      _DAT_14ca97340 = 0;
      atexit((_func_5014 *)&LAB_143226d26);
      _Init_thread_footer(&DAT_14ca97348);
    }
  }
  lVar2 = DAT_14ca97170;
  iVar1 = (&DAT_14ca814b8)[((ulonglong)param_1 & 0xffff) * 0xf];
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar7 = 0;
  }
  else if (iVar4 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar7 = 1;
  }
  if (*(int *)(lVar2 + uVar7 * 4) < 1) {
    bVar3 = false;
  }
  else {
    iVar4 = FUN_144a7e43e(&DAT_14ca97330,(ulonglong)param_1);
    bVar3 = iVar4 != 0 && 2 < iVar1;
  }
  return bVar3;
}



// FUNCTION 14178fc5a FUN_14178fc5a body=224 status=ok
// SIG undefined FUN_14178fc5a(void)

undefined8 FUN_14178fc5a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca98604) {
    FUN_144b3d300(&DAT_14ca98604);
    if (DAT_14ca98604 == -1) {
      local_19 = '\0';
      local_28 = &DAT_14c872af8;
      cVar1 = FUN_14052bb08(DAT_14c872ce0,L"CookedEditorSettings",L"bSupportCookedEditor",&local_19)
      ;
      DAT_14ca98600 = '\0';
      if (cVar1 != '\0') {
        DAT_14ca98600 = local_19;
      }
      _Init_thread_footer(&DAT_14ca98604);
    }
  }
  if ((DAT_14ca98600 != '\0') || (uVar2 = 0, (*(byte *)(param_1 + 4) & 8) != 0)) {
    uVar2 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178fd3c FUN_14178fd3c body=353 status=ok
// SIG undefined FUN_14178fd3c(void)

void FUN_14178fd3c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14178fdc3;
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
LAB_14178fdc3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14178fe9e FUN_14178fe9e body=78 status=ok
// SIG undefined FUN_14178fe9e(void)

void FUN_14178fe9e(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      (**(code **)(*plVar2 + 0x20))(plVar2);
      *(undefined1 *)((longlong)plVar2 + 0xe) = 0;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 14178feec FUN_14178feec body=275 status=ok
// SIG undefined FUN_14178feec(void)

void FUN_14178feec(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141790000 FUN_141790000 body=275 status=ok
// SIG undefined FUN_141790000(void)

void FUN_141790000(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141790114 FUN_141790114 body=165 status=ok
// SIG undefined FUN_141790114(void)

undefined8 FUN_141790114(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x3000;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c842100];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x3000,0x10);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if (0x7f < (int)(uVar3 / 0x60)) {
    uVar4 = uVar3 / 0x60 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x60,0x10);
  }
  return uVar2;
}



// FUNCTION 1417901ba FUN_1417901ba body=137 status=ok
// SIG undefined FUN_1417901ba(void)

void FUN_1417901ba(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((((longlong)(int)(iVar3 - uVar1) & 0x1ffffffffffff800U) == 0) &&
     (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1)) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 << 3,8);
      uVar2 = uVar2 >> 3;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,8,8);
    }
  }
  return;
}



// FUNCTION 141790244 FUN_141790244 body=598 status=ok
// SIG undefined FUN_141790244(void)

void FUN_141790244(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14ca98588 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca98588,0,0,4);
  }
  uVar5 = DAT_14ca98590;
  if (DAT_14ca98590 != 0) {
    FUN_144a1cbf0(&DAT_14ca98580,0,DAT_14ca98590,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        puVar7 = DAT_14ca98588;
        if (DAT_14ca98588 == (undefined *)0x0) {
          puVar7 = &DAT_14ca98580;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14ca98590 + 0x7fffffff & uVar3) * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_58 = 0x100000000;
    local_50 = &DAT_14ca98558;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (DAT_14ca98570 == 0) {
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
    if (local_48._4_4_ < *(int *)(local_50 + 0x18)) {
      do {
        lVar11 = DAT_14ca98548;
        lVar10 = (longlong)iVar6;
        uVar1 = *(undefined8 *)(DAT_14ca98548 + lVar10 * 0x18);
        uVar13 = (longlong)((int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1) &
                 (longlong)(int)DAT_14ca98590 - 1U;
        iVar12 = (int)uVar13;
        *(int *)(DAT_14ca98548 + 0x14 + lVar10 * 0x18) = iVar12;
        puVar7 = DAT_14ca98588;
        if (DAT_14ca98588 == (undefined *)0x0) {
          puVar7 = &DAT_14ca98580;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14ca98590 - 1U & uVar13) * 4);
        puVar7 = DAT_14ca98588;
        if (DAT_14ca98588 == (undefined *)0x0) {
          puVar7 = &DAT_14ca98580;
        }
        *(int *)(puVar7 + ((longlong)iVar12 & (longlong)(int)DAT_14ca98590 - 1U) * 4) = iVar6;
        uVar5 = ~(uint)uVar8 & uVar5;
        puVar7 = *(undefined **)(local_50 + 0x10);
        if (*(undefined **)(local_50 + 0x10) == (undefined *)0x0) {
          puVar7 = local_50;
        }
        iVar12 = *(int *)(local_50 + 0x18);
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)(puVar7 + lVar11 * 4) & uVar5;
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
            uVar3 = *(uint *)(puVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_141790455;
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
LAB_141790455:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179049c FUN_14179049c body=320 status=ok
// SIG undefined FUN_14179049c(void)

void FUN_14179049c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141790505;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141790505:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1417905dc FUN_1417905dc body=320 status=ok
// SIG undefined FUN_1417905dc(void)

void FUN_1417905dc(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141790645;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141790645:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14179071c FUN_14179071c body=113 status=ok
// SIG undefined FUN_14179071c(void)

undefined1 FUN_14179071c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca9a5ac) {
    FUN_144b3d300(&DAT_14ca9a5ac);
    if (DAT_14ca9a5ac == -1) {
      uVar1 = FUN_1400dbadc();
      lVar2 = FUN_145aa0930(uVar1,L"StorageServer");
      DAT_14ca9a5a8 = lVar2 != 0;
      _Init_thread_footer(&DAT_14ca9a5ac);
    }
  }
  return DAT_14ca9a5a8;
}



// FUNCTION 14179078e FUN_14179078e body=100 status=ok
// SIG undefined FUN_14179078e(void)

void FUN_14179078e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar3 = param_1[2];
    pcVar2 = *(code **)(*param_1 + 0x18);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(lVar1,*param_1,param_2,(int)lVar3 != 0);
    }
    if ((int)lVar3 == 0) {
      thunk_FUN_1400020a8(lVar1);
    }
    if ((int)param_1[2] != 0) {
      FUN_1400020a8(param_1[1]);
    }
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1417907f2 FUN_1417907f2 body=46 status=ok
// SIG undefined FUN_1417907f2(void)

void FUN_1417907f2(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = DAT_14ca9edd0; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    if (*(longlong *)(puVar1[2] + 0x48) == 0) {
      FUN_140b498ce(puVar1[2],0);
    }
  }
  return;
}



// FUNCTION 141790820 FUN_141790820 body=158 status=ok
// SIG undefined FUN_141790820(void)

ulonglong * FUN_141790820(ulonglong *param_1,wchar_t *param_2)

{
  size_t sVar1;
  void *_Dst;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    sVar1 = wcslen(param_2);
    iVar2 = (int)sVar1 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (iVar2 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      FUN_1403aba84(param_1,0);
      _Dst = (void *)*param_1;
      if (((ulonglong)_Dst & 1) != 0) {
        _Dst = (void *)(((longlong)_Dst >> 0x18) + (longlong)param_1);
      }
    }
    memcpy(_Dst,param_2,(longlong)iVar2 * 2);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1ffffff;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  return param_1;
}



// FUNCTION 1417908c4 FUN_1417908c4 body=160 status=ok
// SIG undefined FUN_1417908c4(void)

undefined8 * FUN_1417908c4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a395480;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  lVar2 = *(longlong *)(param_1 + 0x30);
  *(int *)(puVar3 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 4;
  }
  else {
    lVar4 = param_1 + 0x10;
    if (lVar2 != 0) {
      lVar4 = lVar2;
    }
    FUN_144727e94(puVar3 + 2,iVar1,0);
    puVar5 = puVar3 + 2;
    if ((undefined8 *)puVar3[6] != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)puVar3[6];
    }
    FUN_144727e6e(puVar5,lVar4,iVar1);
  }
  return puVar3 + 1;
}



// FUNCTION 141790964 FUN_141790964 body=269 status=ok
// SIG undefined FUN_141790964(void)

void FUN_141790964(longlong param_1,int param_2)

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



// FUNCTION 141790a72 FUN_141790a72 body=20 status=ok
// SIG undefined FUN_141790a72(void)

void FUN_141790a72(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1404904ea(param_1,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}



// FUNCTION 141790a86 FUN_141790a86 body=574 status=ok
// SIG undefined FUN_141790a86(void)

void FUN_141790a86(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  undefined *local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14ca9edb8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca9edb8,0,0,4);
  }
  uVar4 = DAT_14ca9edc0;
  if (DAT_14ca9edc0 != 0) {
    FUN_144a1cbf0(&DAT_14ca9edb0,0,DAT_14ca9edc0,4);
    if (0 < (int)uVar4) {
      uVar2 = 0;
      do {
        puVar6 = DAT_14ca9edb8;
        if (DAT_14ca9edb8 == (undefined *)0x0) {
          puVar6 = &DAT_14ca9edb0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14ca9edc0 + 0x7fffffff & uVar2) * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14ca9ed88;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14ca9eda0 == 0) {
      uVar7 = 1;
      local_40._0_4_ = 0xffffffff;
      local_40._4_4_ = 0;
      local_50._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      uVar7 = local_50 >> 0x20;
    }
    iVar3 = (int)local_50;
    uVar4 = (uint)local_40;
    iVar5 = local_40._4_4_;
    iVar8 = local_38;
    if (local_40._4_4_ < *(int *)(local_48 + 0x18)) {
      do {
        lVar10 = DAT_14ca9ed78;
        lVar9 = (longlong)iVar5;
        uVar12 = (longlong)(int)DAT_14ca9edc0 - 1U &
                 (longlong)*(int *)(DAT_14ca9ed78 + lVar9 * 0x18);
        iVar11 = (int)uVar12;
        *(int *)(DAT_14ca9ed78 + 0x14 + lVar9 * 0x18) = iVar11;
        puVar6 = DAT_14ca9edb8;
        if (DAT_14ca9edb8 == (undefined *)0x0) {
          puVar6 = &DAT_14ca9edb0;
        }
        *(undefined4 *)(lVar10 + 0x10 + lVar9 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14ca9edc0 - 1U & uVar12) * 4);
        puVar6 = DAT_14ca9edb8;
        if (DAT_14ca9edb8 == (undefined *)0x0) {
          puVar6 = &DAT_14ca9edb0;
        }
        *(int *)(puVar6 + ((longlong)iVar11 & (longlong)(int)DAT_14ca9edc0 - 1U) * 4) = iVar5;
        uVar4 = ~(uint)uVar7 & uVar4;
        puVar6 = *(undefined **)(local_48 + 0x10);
        if (*(undefined **)(local_48 + 0x10) == (undefined *)0x0) {
          puVar6 = local_48;
        }
        iVar11 = *(int *)(local_48 + 0x18);
        lVar10 = (longlong)iVar3;
        uVar2 = *(uint *)(puVar6 + lVar10 * 4) & uVar4;
        if (uVar2 == 0) {
          iVar5 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar5 = iVar11 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar1 = iVar5;
          if (iVar5 < iVar3) {
            iVar1 = iVar3;
          }
          if (iVar5 <= iVar3) break;
          lVar9 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar2 = *(uint *)(puVar6 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar2 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar1 - lVar10 == lVar9) goto LAB_141790c80;
          }
          iVar3 = iVar3 + (int)lVar9 + 1;
          uVar4 = 0xffffffff;
        }
        uVar7 = (ulonglong)(-uVar2 & uVar2);
        uVar12 = uVar7 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar11);
    }
  }
LAB_141790c80:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141790cc6 FUN_141790cc6 body=161 status=ok
// SIG undefined FUN_141790cc6(void)

void FUN_141790cc6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  plVar1 = param_1 + 1;
  lVar2 = param_1[1];
  if ((int)param_1[3] == 1) {
    while (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      *plVar1 = lVar2;
    }
    *plVar1 = 0;
    param_1[2] = 0;
    iVar3 = 0;
  }
  else {
    if (lVar2 == param_2) {
      lVar2 = *(longlong *)(lVar2 + 8);
      *plVar1 = lVar2;
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    else if (param_1[2] == param_2) {
      lVar2 = *(longlong *)(param_1[2] + 0x10);
      param_1[2] = lVar2;
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    else {
      lVar2 = *(longlong *)(param_2 + 0x10);
      *(longlong *)(*(longlong *)(param_2 + 8) + 0x10) = lVar2;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_2 + 8);
    }
    FUN_1400020a8(param_2);
    iVar3 = (int)param_1[3] + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x000141790d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,iVar3);
  return;
}



// FUNCTION 141790d68 FUN_141790d68 body=174 status=ok
// SIG undefined FUN_141790d68(void)

undefined8 * FUN_141790d68(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x30);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar3 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar2;
  *puVar3 = &PTR_FUN_14a399e20;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar3;
  return puVar3 + 1;
}



// FUNCTION 141790e16 FUN_141790e16 body=376 status=ok
// SIG undefined FUN_141790e16(void)

void FUN_141790e16(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 0x208;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141790ea4;
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
LAB_141790ea4:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x208)) {
    uVar7 = uVar5 / 0x208 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x208,8);
  return;
}



// FUNCTION 141790f90 FUN_141790f90 body=382 status=ok
// SIG undefined FUN_141790f90(void)

ulonglong FUN_141790f90(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x208)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     ((uVar3 == 0 || (0x40 < (int)uVar5)))) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0x208;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0x3f) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0x3fffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14179105d;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0x3fffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14179105d:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xfc0fc0fc0fc0fc1),0);
      uVar8 = uVar8 / 0x208;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0x208,8);
    }
  }
  return uVar6;
}



// FUNCTION 14179110e FUN_14179110e body=377 status=ok
// SIG undefined FUN_14179110e(void)

ulonglong FUN_14179110e(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar7 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x58)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar7 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar6 = uVar6 * 0x58;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar7 = uVar6 + 0xf;
          if (uVar3 < 0x175) {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
          }
          else {
            if ((uVar7 & 0x7ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
              uVar8 = 0x32;
              if (0x32 < bVar2) {
                uVar8 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1417911b0;
                lVar1 = uVar8 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar6 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar6 = (ulonglong)DAT_14c841df8;
            }
            uVar6 = -uVar6 & ((uVar7 & 0x7ffffffff0) + uVar6) - 1;
          }
        }
        else {
          uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_1417911b0:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar6;
      uVar7 = SUB168(auVar4 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
      uVar6 = uVar6 / 0x58;
    }
    if ((int)uVar6 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar6;
      uVar7 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar6,0x58,8);
    }
  }
  return uVar7;
}



// FUNCTION 141791288 FUN_141791288 body=40 status=ok
// SIG undefined FUN_141791288(void)

undefined8 FUN_141791288(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417912b0 FUN_1417912b0 body=90 status=ok
// SIG undefined FUN_1417912b0(void)

undefined8 * FUN_1417912b0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a399de0;
  if (param_1[0x3c] != 0) {
    plVar1 = param_1 + 0x40;
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179130a FUN_14179130a body=462 status=ok
// SIG undefined FUN_14179130a(void)

void FUN_14179130a(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a3a14a4);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((((*(byte *)(param_2 + 5) & 1) != 0) && ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) &&
      ((*(ushort *)((longlong)param_2 + 0x35) & 0x4010) == 0)) &&
     (bVar1 = *(char *)(param_1 + 0x98) - 1, bVar1 < 4)) {
    lVar3 = (ulonglong)((uint)bVar1 * 0xc & 0xff) + param_1;
    pbVar4 = (byte *)(lVar3 + 0x68);
    if (pbVar4 != (byte *)0x0) {
      *pbVar4 = *pbVar4 | 1;
      *(undefined4 *)(lVar3 + 0x6c) = *(undefined4 *)(param_1 + 0x9c);
      *(uint *)(lVar3 + 0x70) = *(uint *)(lVar3 + 0x70) & 0xfffffffe | *(uint *)(param_1 + 0xa0) & 1
      ;
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xfc);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0xd8) == 0)) {
    *(undefined4 *)(param_1 + 0xd8) = 1;
    if (*(int *)(param_1 + 0xdc) == 0) {
      FUN_1446f84a2(param_1 + 0xd0,0);
      lVar3 = *(longlong *)(param_1 + 0xfc);
    }
    **(longlong **)(param_1 + 0xd0) = lVar3;
    *(undefined8 *)(param_1 + 0xfc) = 0;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_1b8 = 0x430c4d19;
    uStack_1b4 = 0x71544970;
    uStack_1b0 = 0x87699b69;
    uStack_1ac = 0xdf90b0e5;
    iVar2 = FUN_1448a256a(param_1);
    if (iVar2 < 10) {
      *(byte *)(param_1 + 0x178) = ~*(byte *)(param_1 + 0x184) * '\x02' & 2;
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_1c8 = 0x430c4d19;
    uStack_1c4 = 0x71544970;
    uStack_1c0 = 0x87699b69;
    uStack_1bc = 0xdf90b0e5;
    iVar2 = FUN_1448a256a(param_1);
    if (iVar2 < 0xf) {
      *(uint *)(param_1 + 0x4a4) =
           (*(uint *)(param_1 + 0x4a4) & 0xfffeffff) + (*(uint *)(param_1 + 0x4a4) & 0x8000) * 2;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417914d9 FUN_1417914d9 body=138 status=ok
// SIG undefined FUN_1417914d9(void)

void FUN_1417914d9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e0d752(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a39f130;
  puVar1[0x72] = &PTR_FUN_14a39f770;
  puVar1[0x73] = &PTR_FUN_14a39f800;
  puVar1[0x78] = 0;
  *(undefined4 *)(puVar1 + 0x79) = 0;
  puVar1[0x74] = 0;
  puVar1[0x75] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x3d4) = 0;
  puVar1[0x7c] = 0;
  *(undefined4 *)(puVar1 + 0x7d) = 0;
  FUN_1405e47c6(puVar1,1);
  *(byte *)((longlong)puVar1 + 0x3a) = *(byte *)((longlong)puVar1 + 0x3a) & 0xfd;
  return;
}



// FUNCTION 141791564 FUN_141791564 body=176 status=ok
// SIG undefined FUN_141791564(void)

undefined8 * FUN_141791564(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa1544) {
    FUN_144b3d300(&DAT_14caa1544);
    if (DAT_14caa1544 == -1) {
      builtin_wcsncpy(local_38,L"CapsuleTouched",0xf);
      FUN_1446f470e(&DAT_14caa153c,local_38,1);
      _Init_thread_footer(&DAT_14caa1544);
    }
  }
  *param_1 = DAT_14caa153c;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141791616 FUN_141791616 body=173 status=ok
// SIG undefined FUN_141791616(void)

void FUN_141791616(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  while( true ) {
    if (param_1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    if ((*(uint *)(param_1 + 1) & 0x30) != 0) break;
    param_1 = (longlong *)param_1[4];
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417916d6 FUN_1417916d6 body=40 status=ok
// SIG undefined FUN_1417916d6(void)

undefined8 FUN_1417916d6(undefined8 param_1,int param_2)

{
  FUN_140899bb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417916fe FUN_1417916fe body=93 status=ok
// SIG undefined FUN_1417916fe(void)

void FUN_1417916fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3a3430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14179175c FUN_14179175c body=47 status=ok
// SIG undefined FUN_14179175c(void)

void FUN_14179175c(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 14179178c FUN_14179178c body=29 status=ok
// SIG undefined FUN_14179178c(void)

undefined8 FUN_14179178c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417917a9 FUN_1417917a9 body=49 status=ok
// SIG undefined FUN_1417917a9(void)

void FUN_1417917a9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e0d368(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3b0600;
  puVar1[0x72] = &PTR_FUN_14a3b0c70;
  return;
}



// FUNCTION 1417917da FUN_1417917da body=40 status=ok
// SIG undefined FUN_1417917da(void)

undefined8 FUN_1417917da(undefined8 param_1,int param_2)

{
  FUN_14006e248();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


