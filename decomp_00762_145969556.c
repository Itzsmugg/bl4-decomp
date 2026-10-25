// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145969556 FUN_145969556 body=288 status=ok
// SIG undefined FUN_145969556(void)

undefined4 * FUN_145969556(longlong param_1,undefined4 *param_2,byte *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  byte *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145969704(param_1,local_50);
  bVar1 = *param_3;
  *local_48 = bVar1;
  local_48[4] = 0xff;
  local_48[5] = 0xff;
  local_48[6] = 0xff;
  local_48[7] = 0xff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar3 = FUN_145969678(param_1,bVar1,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_48 + 8) = uVar5;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 4) =
           *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1413f4926(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145969678 FUN_145969678 body=140 status=ok
// SIG undefined FUN_145969678(void)

void FUN_145969678(longlong *param_1,uint param_2,char *param_3,int *param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(char *)(*param_1 + (longlong)iVar3 * 0xc) == *param_3) {
          FUN_146814740(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0xc + 4);
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1459696e2;
    }
  }
  uVar1 = 0;
LAB_1459696e2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 145969704 FUN_145969704 body=243 status=ok
// SIG undefined FUN_145969704(void)

int * FUN_145969704(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xc) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 1459697f8 FUN_1459697f8 body=188 status=ok
// SIG undefined FUN_1459697f8(void)

bool FUN_1459697f8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459698b6 FUN_1459698b6 body=129 status=ok
// SIG undefined FUN_1459698b6(void)

void FUN_1459698b6(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 0x20) != 0) {
    (**(code **)(*param_1 + 0x7c0))(param_1,param_2,param_3);
  }
  if ((((param_4 >> 0x18 & 1) != 0) && ((byte *)param_1[0x96] != (byte *)0x0)) &&
     ((*(byte *)param_1[0x96] & 3) != 0)) {
    FUN_148931ac0(param_1,param_1 + 0x96);
  }
  if ((param_4 >> 0x13 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145969912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7c8))(param_1,param_2,param_3);
  return;
}



// FUNCTION 145969938 FUN_145969938 body=225 status=ok
// SIG undefined FUN_145969938(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145969938(void)

{
  longlong *plVar1;
  
  if (DAT_14c99d911 == '\x01') {
    DAT_14c99d911 = '\0';
  }
  if (DAT_14c99d940 != 0) {
    DAT_14c99d940 = 0;
  }
  _DAT_14c99d950 = 0;
  if (DAT_14c99d954 < 0) {
    FUN_1446f8c06(&DAT_14c99d948,0);
  }
  if (DAT_14c99d948 != (undefined2 *)0x0) {
    *DAT_14c99d948 = 0;
  }
  FUN_1413f4b02(&DAT_14c99d958);
  if (DAT_14c99de30 != 0) {
    plVar1 = &DAT_14c99de50;
    if (DAT_14c99de40 != (longlong *)0x0) {
      plVar1 = DAT_14c99de40;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_145969a1a(&DAT_14c99d958);
  if (DAT_14c99d948 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c99d918);
  if (DAT_14c99d911 == '\x01') {
    DAT_14c99d911 = '\0';
  }
  return;
}



// FUNCTION 145969a1a FUN_145969a1a body=428 status=ok
// SIG undefined FUN_145969a1a(void)

void FUN_145969a1a(longlong param_1)

{
  FUN_1413f4b02();
  FUN_145969cd6(param_1 + 0x270);
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  FUN_145969bfc(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  FUN_145969bc6(param_1 + 400);
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  FUN_145969c32(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_145969c68(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_140beba8c(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145969c9e(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140d6e09a(param_1);
  return;
}



// FUNCTION 145969bc6 FUN_145969bc6 body=53 status=ok
// SIG undefined FUN_145969bc6(void)

void FUN_145969bc6(longlong *param_1)

{
  FUN_14128a8bc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145969bfc FUN_145969bfc body=53 status=ok
// SIG undefined FUN_145969bfc(void)

void FUN_145969bfc(longlong *param_1)

{
  FUN_14129aec6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145969c32 FUN_145969c32 body=53 status=ok
// SIG undefined FUN_145969c32(void)

void FUN_145969c32(longlong *param_1)

{
  FUN_14134c698();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145969c68 FUN_145969c68 body=53 status=ok
// SIG undefined FUN_145969c68(void)

void FUN_145969c68(longlong *param_1)

{
  FUN_140d6deb8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145969c9e FUN_145969c9e body=55 status=ok
// SIG undefined FUN_145969c9e(void)

void FUN_145969c9e(longlong *param_1)

{
  FUN_14142a238(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145969cd6 FUN_145969cd6 body=57 status=ok
// SIG undefined FUN_145969cd6(void)

void FUN_145969cd6(longlong param_1)

{
  FUN_145969da0(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_145969d10(param_1 + 8);
  return;
}



// FUNCTION 145969d10 FUN_145969d10 body=53 status=ok
// SIG undefined FUN_145969d10(void)

void FUN_145969d10(longlong *param_1)

{
  FUN_145969d46();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145969d46 FUN_145969d46 body=90 status=ok
// SIG undefined FUN_145969d46(void)

void FUN_145969d46(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145969da0 FUN_145969da0 body=332 status=ok
// SIG undefined FUN_145969da0(void)

void FUN_145969da0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  FUN_145969eec(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  FUN_1413f4aca(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_1413f4aca(param_1 + 0x110);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_1413f4aca(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145969f24(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145969f5c(param_1);
  return;
}



// FUNCTION 145969eec FUN_145969eec body=55 status=ok
// SIG undefined FUN_145969eec(void)

void FUN_145969eec(longlong *param_1)

{
  FUN_1403fa8ea(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145969f24 FUN_145969f24 body=55 status=ok
// SIG undefined FUN_145969f24(void)

void FUN_145969f24(longlong *param_1)

{
  FUN_1403fa464(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145969f5c FUN_145969f5c body=55 status=ok
// SIG undefined FUN_145969f5c(void)

void FUN_145969f5c(longlong *param_1)

{
  FUN_1403fa4e6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145969f94 FUN_145969f94 body=379 status=ok
// SIG undefined FUN_145969f94(void)

void FUN_145969f94(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  int local_58;
  undefined4 local_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14596a110();
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3;
  if (*(int *)((longlong)param_1 + 0x14) < 0) {
    FUN_147d592be(param_1 + 1);
  }
  if (*param_1 != 0) {
    local_48 = *(ulonglong *)(*param_1 + 0x28);
    plVar7 = (longlong *)FUN_1449ed75e(param_2 + 0x250);
    if (((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) &&
       (puVar5 = (undefined8 *)*param_1, puVar5 != (undefined8 *)0x0)) {
      *param_1 = 0;
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  if (0 < *(int *)((longlong)param_1 + 0x24)) {
    local_38 = 0;
    local_48 = CONCAT44(*(int *)((longlong)param_1 + 0x24) * 2,4) & 0x3ffffffeffffffff;
    local_40 = 0x10112;
    FUN_1449ed2ff(&local_48,param_1,L"SparseVolumeTexture.PageTableUpdatesUploadBuffer",1);
    lVar3 = *(longlong *)(param_2 + 0x18);
    local_58 = *(int *)((longlong)param_1 + 0x24) << 3;
    uVar4 = *(undefined8 *)(*param_1 + 0x28);
    cVar2 = *(char *)(lVar3 + 0x69);
    if (cVar2 == '\0') {
      FUN_14002049c(lVar3,1);
    }
    local_50 = 1;
    lVar6 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar3,uVar4,0);
    if (cVar2 == '\0') {
      FUN_14002049c(lVar3,0);
    }
    param_1[3] = lVar6;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596a110 FUN_14596a110 body=66 status=ok
// SIG undefined FUN_14596a110(void)

void FUN_14596a110(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_1413f5272(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_147d592be(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 14596a152 FUN_14596a152 body=155 status=ok
// SIG undefined FUN_14596a152(void)

void FUN_14596a152(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6e8))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596a1fe FUN_14596a1fe body=21 status=ok
// SIG undefined FUN_14596a1fe(void)

undefined8 FUN_14596a1fe(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14596a220 FUN_14596a220 body=31 status=ok
// SIG undefined FUN_14596a220(void)

undefined8 FUN_14596a220(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14596a24a FUN_14596a24a body=317 status=ok
// SIG undefined FUN_14596a24a(void)

void FUN_14596a24a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x10);
    }
    (**(code **)(*plVar5 + 0x38))();
    *(undefined8 *)(param_1 + 0x10) = 0;
    plVar5 = *(longlong **)(param_1 + 0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if ((plVar2 != (longlong *)0x0) && (0 < (int)plVar2[1])) {
      uVar6 = 0;
      do {
        FUN_14000f986(0x3dcccccd);
        bVar8 = uVar6 < 10;
        uVar6 = uVar6 + 1;
      } while (0 < (int)plVar2[1] && bVar8);
    }
    if ((longlong)*(int *)(param_1 + 0x28) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x20);
      plVar7 = plVar5 + (longlong)*(int *)(param_1 + 0x28) * 2;
      do {
        while (plVar3 = (longlong *)plVar5[1], plVar3 != (longlong *)0x0) {
          lVar4 = *plVar5;
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          if (lVar4 == 0) {
            bVar8 = false;
          }
          else {
            bVar8 = 0 < (int)plVar3[1];
          }
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
          plVar5 = plVar5 + 2;
          if (bVar8 || plVar5 == plVar7) goto LAB_14596a2c3;
        }
        plVar5 = plVar5 + 2;
      } while (plVar5 != plVar7);
    }
LAB_14596a2c3:
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014596a383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14596a392 FUN_14596a392 body=159 status=ok
// SIG undefined FUN_14596a392(void)

void FUN_14596a392(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a157b00;
  FUN_14596a432();
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[8];
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
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014596a42d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14596a432 FUN_14596a432 body=70 status=ok
// SIG undefined FUN_14596a432(void)

void FUN_14596a432(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1447f69b6(param_1 + 0x48);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30),1);
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14596a478 FUN_14596a478 body=38 status=ok
// SIG undefined FUN_14596a478(void)

undefined8 FUN_14596a478(undefined8 param_1,int param_2)

{
  FUN_14596a49e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14596a49e FUN_14596a49e body=312 status=ok
// SIG undefined FUN_14596a49e(void)

void FUN_14596a49e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a157c50;
  param_1[1] = &PTR_FUN_14a157c80;
  FUN_14018802a(param_1[0x2b]);
  param_1[0x2b] = 0;
  plVar3 = (longlong *)param_1[0x2a];
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
  FUN_14596a703(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14596a6ba(param_1 + 0x22);
  FUN_14596a681(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14596a5e0(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14596a616(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14596a64c(param_1 + 2);
  return;
}



// FUNCTION 14596a5e0 FUN_14596a5e0 body=53 status=ok
// SIG undefined FUN_14596a5e0(void)

void FUN_14596a5e0(longlong *param_1)

{
  FUN_1413f53e2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14596a616 FUN_14596a616 body=53 status=ok
// SIG undefined FUN_14596a616(void)

void FUN_14596a616(longlong *param_1)

{
  FUN_14596a750();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14596a64c FUN_14596a64c body=53 status=ok
// SIG undefined FUN_14596a64c(void)

void FUN_14596a64c(longlong *param_1)

{
  FUN_14596a894();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14596a681 FUN_14596a681 body=56 status=ok
// SIG undefined FUN_14596a681(void)

void FUN_14596a681(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14596a6ba FUN_14596a6ba body=73 status=ok
// SIG undefined FUN_14596a6ba(void)

void FUN_14596a6ba(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  FUN_1400020a8();
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 8) = puVar1;
    puVar2 = (undefined8 *)*puVar1;
    FUN_1449db362(puVar1 + 1);
    FUN_1400020a8(*(undefined8 *)(param_1 + 8));
    puVar1 = puVar2;
  }
  return;
}



// FUNCTION 14596a703 FUN_14596a703 body=77 status=ok
// SIG undefined FUN_14596a703(void)

void FUN_14596a703(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14596a750 FUN_14596a750 body=322 status=ok
// SIG undefined FUN_14596a750(void)

void FUN_14596a750(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar3 = *(longlong **)(*local_68 + 0x18 + (longlong)iStack_4c * 0x28);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596a894 FUN_14596a894 body=369 status=ok
// SIG undefined FUN_14596a894(void)

void FUN_14596a894(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      FUN_1470713d4(*(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x18 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 0x10 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596aa06 FUN_14596aa06 body=561 status=ok
// SIG undefined FUN_14596aa06(void)

void FUN_14596aa06(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_14a157ce0;
  FUN_1401cb356();
  local_28 = param_1[0x38];
  local_20 = param_1[0x39];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_28);
  FUN_14018802a(param_1[0xe]);
  param_1[0xe] = 0;
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
  FUN_14596ac38(param_1 + 0x3a);
  plVar2 = (longlong *)param_1[0x39];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_14596ac88(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_14596acbe(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_14596acf4(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_14596ad2a(param_1 + 0xf);
  FUN_14596ad95(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14596ad60(param_1 + 1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596ac38 FUN_14596ac38 body=79 status=ok
// SIG undefined FUN_14596ac38(void)

void FUN_14596ac38(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[2] != 0) {
      plVar2 = puVar1 + 6;
      if ((longlong *)puVar1[4] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar1[4];
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 14596ac88 FUN_14596ac88 body=53 status=ok
// SIG undefined FUN_14596ac88(void)

void FUN_14596ac88(longlong *param_1)

{
  FUN_14596b468();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14596acbe FUN_14596acbe body=53 status=ok
// SIG undefined FUN_14596acbe(void)

void FUN_14596acbe(longlong *param_1)

{
  FUN_14596ade2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14596acf4 FUN_14596acf4 body=53 status=ok
// SIG undefined FUN_14596acf4(void)

void FUN_14596acf4(longlong *param_1)

{
  FUN_14596b308();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14596ad2a FUN_14596ad2a body=53 status=ok
// SIG undefined FUN_14596ad2a(void)

void FUN_14596ad2a(longlong *param_1)

{
  FUN_14596b5e4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14596ad60 FUN_14596ad60 body=53 status=ok
// SIG undefined FUN_14596ad60(void)

void FUN_14596ad60(longlong *param_1)

{
  FUN_14596af34();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14596ad95 FUN_14596ad95 body=77 status=ok
// SIG undefined FUN_14596ad95(void)

void FUN_14596ad95(longlong param_1,int param_2)

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



// FUNCTION 14596ade2 FUN_14596ade2 body=336 status=ok
// SIG undefined FUN_14596ade2(void)

void FUN_14596ade2(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_14707141e((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596af34 FUN_14596af34 body=345 status=ok
// SIG undefined FUN_14596af34(void)

void FUN_14596af34(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596b08e FUN_14596b08e body=42 status=ok
// SIG undefined FUN_14596b08e(void)

void FUN_14596b08e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_14596b0b8(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 14596b0b8 FUN_14596b0b8 body=100 status=ok
// SIG undefined FUN_14596b0b8(void)

void FUN_14596b0b8(longlong param_1)

{
  FUN_14596b11c(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_14596b11c(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14596b16a(param_1);
  return;
}



// FUNCTION 14596b11c FUN_14596b11c body=77 status=ok
// SIG undefined FUN_14596b11c(void)

void FUN_14596b11c(longlong param_1,int param_2)

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



// FUNCTION 14596b16a FUN_14596b16a body=53 status=ok
// SIG undefined FUN_14596b16a(void)

void FUN_14596b16a(longlong *param_1)

{
  FUN_14596b1a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14596b1a0 FUN_14596b1a0 body=345 status=ok
// SIG undefined FUN_14596b1a0(void)

void FUN_14596b1a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596b2fa FUN_14596b2fa body=14 status=ok
// SIG undefined FUN_14596b2fa(void)

void FUN_14596b2fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14596b308 FUN_14596b308 body=350 status=ok
// SIG undefined FUN_14596b308(void)

void FUN_14596b308(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596b468 FUN_14596b468 body=378 status=ok
// SIG undefined FUN_14596b468(void)

void FUN_14596b468(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596b5e4 FUN_14596b5e4 body=378 status=ok
// SIG undefined FUN_14596b5e4(void)

void FUN_14596b5e4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596b788 FUN_14596b788 body=535 status=ok
// SIG undefined FUN_14596b788(void)

void FUN_14596b788(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  
  if (param_1 == (longlong *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x700))(param_1);
  }
  (**(code **)(param_1[0xa3] + 0x30))(param_1 + 0xa3);
  cVar7 = (char)param_2;
  cVar6 = (char)param_3;
  if (((cVar3 != '\0') && ((char)param_1[0x2f] != '\x03')) &&
     (((char)param_1[0x4ab] != cVar7 || (*(char *)((longlong)param_1 + 0x2559) != cVar6)))) {
    lVar5 = FUN_1447210f0(param_1);
    FUN_14596b9ee(param_1,param_2,param_3,
                  (float)(*(double *)(lVar5 + 0x6d0) -
                         (double)*(float *)((longlong)param_1 + 0x2564)));
  }
  if ((cVar7 == '\0') || (cVar7 == '\x03' && cVar6 == '\0')) {
    *(undefined1 *)(param_1 + 0x4ad) = 0;
  }
  if (((char)param_1[0x4ab] != cVar7) || (*(char *)((longlong)param_1 + 0x2559) != cVar6)) {
    *(char *)((longlong)param_1 + 0x255c) = cVar3;
    *(char *)(param_1 + 0x4ab) = cVar7;
    *(char *)((longlong)param_1 + 0x2559) = cVar6;
    FUN_140efe908(param_1 + 0x4b1,param_2);
    if (cVar7 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x255c) = 0;
    }
    lVar8 = 0x20;
    lVar5 = 0;
    while( true ) {
      iVar4 = 0;
      if (param_1[0x340] != 0) {
        iVar4 = *(int *)(param_1[0x340] + 0xf38);
      }
      if (iVar4 <= lVar5) break;
      if (lVar5 < (int)param_1[0x469]) {
        plVar1 = *(longlong **)(param_1[0x468] + lVar8);
        if ((plVar1 != (longlong *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(plVar1);
        }
        else if (plVar1 == (longlong *)0x0) goto LAB_14596b8c6;
        (**(code **)(*plVar1 + 0x8b0))(plVar1,param_2,param_3);
      }
LAB_14596b8c6:
      lVar5 = lVar5 + 1;
      lVar8 = lVar8 + 0x170;
    }
  }
  if ((char)param_1[0x2f] == '\x03') {
    if (*(char *)((longlong)param_1 + 0x179) == '\x02') {
      (**(code **)(*(longlong *)param_1[0x2d] + 0x578))();
    }
    *(short *)(param_1 + 0x4b4) = (short)param_1[0x4ab];
    if (param_1[0x78] != 0) {
      lVar8 = FUN_144a5dd5e();
      lVar5 = param_1[0x78];
      if ((((lVar5 != 0) && (lVar8 != 0)) && (lVar2 = *(longlong *)(lVar5 + 0x10), lVar2 != 0)) &&
         ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)))) {
        FUN_140e0e422(lVar5 + 0x21e8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14596b9a0 FUN_14596b9a0 body=77 status=ok
// SIG undefined FUN_14596b9a0(void)

longlong FUN_14596b9a0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_1 + -0x518);
  if (plVar4 != (longlong *)0x0) {
    uVar1 = FUN_144a82126();
    lVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_144a82126();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if (lVar2 != lVar3) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14596b9ee FUN_14596b9ee body=100 status=ok
// SIG undefined FUN_14596b9ee(void)

void FUN_14596b9ee(longlong *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_1f = param_3;
  local_1c = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbbcbf8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596ba54 FUN_14596ba54 body=39 status=ok
// SIG undefined FUN_14596ba54(void)

void FUN_14596ba54(longlong param_1)

{
  FUN_14071ec36();
  FUN_14596ba7c(param_1 + 0x1c8,*(undefined4 *)(param_1 + 0x1b8));
  return;
}



// FUNCTION 14596ba7c FUN_14596ba7c body=105 status=ok
// SIG undefined FUN_14596ba7c(void)

void FUN_14596ba7c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14596baf6(param_1,iVar1);
    }
    FUN_14596bae6((longlong)iVar1 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147f562e8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14596bae6 FUN_14596bae6 body=15 status=ok
// SIG undefined FUN_14596bae6(void)

void FUN_14596bae6(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2);
    return;
  }
  return;
}



// FUNCTION 14596baf6 FUN_14596baf6 body=124 status=ok
// SIG undefined FUN_14596baf6(void)

void FUN_14596baf6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar3 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar3) {
      iVar5 = iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14596bb78 FUN_14596bb78 body=178 status=ok
// SIG undefined FUN_14596bb78(void)

void FUN_14596bb78(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14596bc2c(param_1 + 0x118,&local_48);
  lVar1 = local_48;
  lVar2 = (longlong)(int)uStack_40;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      local_50 = *(undefined4 *)(lVar1 + 8 + lVar3);
      local_58 = *(undefined8 *)(lVar1 + lVar3);
      FUN_141417784(param_1,&local_58,0);
      lVar3 = lVar3 + 0xc;
    } while (lVar2 * 0xc != lVar3);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596bc2c FUN_14596bc2c body=349 status=ok
// SIG undefined FUN_14596bc2c(void)

void FUN_14596bc2c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
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
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
    FUN_1446dda88(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      puVar3 = (undefined8 *)((longlong)iStack_54 * 0x28 + *local_70);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446dd912(param_2,iVar2);
      }
      lVar1 = *param_2;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar2 * 0xc) = *puVar3;
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596bd8a FUN_14596bd8a body=562 status=ok
// SIG undefined FUN_14596bd8a(void)

void FUN_14596bd8a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [46];
  byte local_9a;
  byte local_99;
  int local_98;
  int local_94;
  longlong local_90;
  longlong local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2[3] == 0) {
    uVar1 = *(uint *)(param_1 + 0x108);
    if (0 < (int)uVar1) {
      lVar10 = *(longlong *)(param_1 + 0x100) + 0x18;
      uVar7 = 0;
      do {
        cVar4 = FUN_140c3e654(param_2,lVar10);
        if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
        }
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 0x50;
      } while (uVar1 != uVar7);
    }
  }
  else {
    local_80 = (void *)0x0;
    local_78 = *(int *)(param_2 + 1);
    lVar10 = (longlong)local_78;
    _Src = (void *)*param_2;
    if (lVar10 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,_Src,lVar10 * 2);
    }
    local_50 = *(undefined4 *)(param_2 + 6);
    local_70 = *(undefined4 *)(param_2 + 2);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_68 = *(undefined4 *)(param_2 + 3);
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_60 = *(undefined4 *)(param_2 + 4);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_58 = *(undefined4 *)(param_2 + 5);
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x2c);
    iVar2 = *(int *)(param_1 + 0xf8);
    lVar10 = (longlong)iVar2;
    if (lVar10 != 0) {
      lVar6 = *(longlong *)(param_1 + 0xf0);
      local_9a = FUN_140c3e654(lVar6 + 0x18,&local_80);
      local_88 = lVar6 + 0x68;
      local_98 = 0;
      iVar8 = 0;
      local_90 = lVar6;
      do {
        lVar6 = (longlong)iVar8;
        iVar12 = iVar8 + 1;
        if (iVar8 + 1 < iVar2) {
          iVar12 = iVar2;
        }
        lVar11 = lVar6 * 0x50;
        lVar13 = local_88 + lVar11;
        local_99 = local_9a;
        bVar9 = local_9a & 1;
        local_9a = local_9a ^ 1;
        local_94 = iVar8;
        do {
          lVar6 = lVar6 + 1;
          iVar3 = iVar12;
          if (lVar10 <= lVar6) break;
          bVar5 = FUN_140c3e654(lVar13,&local_80);
          iVar8 = iVar8 + 1;
          lVar13 = lVar13 + 0x50;
          iVar3 = iVar8;
        } while (bVar9 == bVar5);
        iVar8 = iVar3;
        iVar12 = iVar8 - local_94;
        if ((local_99 & 1) == 0) {
          if (local_98 != local_94) {
            memmove((void *)((longlong)local_98 * 0x50 + local_90),(void *)(lVar11 + local_90),
                    (longlong)iVar12 * 0x50);
          }
          local_98 = local_98 + iVar12;
        }
        else {
          FUN_1458c905a(lVar11 + local_90,iVar12);
        }
      } while (lVar6 < lVar10);
      *(int *)(param_1 + 0xf8) = local_98;
    }
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596c096 FUN_14596c096 body=72 status=ok
// SIG undefined FUN_14596c096(void)

void FUN_14596c096(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014596c0da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14596c11c FUN_14596c11c body=111 status=ok
// SIG undefined FUN_14596c11c(void)

ulonglong FUN_14596c11c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x50) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      uVar1 = uVar1 / 0x50;
    }
  }
  return uVar1;
}



// FUNCTION 14596c18c FUN_14596c18c body=53 status=ok
// SIG undefined FUN_14596c18c(void)

void FUN_14596c18c(longlong *param_1)

{
  FUN_14596c1c2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14596c1c2 FUN_14596c1c2 body=88 status=ok
// SIG undefined FUN_14596c1c2(void)

void FUN_14596c1c2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14596c21a FUN_14596c21a body=300 status=ok
// SIG undefined FUN_14596c21a(void)

undefined4 * FUN_14596c21a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14596c3de(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar11 = *(uint *)*param_3;
  *local_40 = uVar11;
  uVar10 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  uVar5 = puVar1[5];
  uVar6 = puVar1[6];
  uVar7 = puVar1[7];
  local_40[2] = *puVar1;
  local_40[3] = uVar10;
  local_40[4] = uVar2;
  local_40[5] = uVar3;
  local_40[6] = uVar4;
  local_40[7] = uVar5;
  local_40[8] = uVar6;
  local_40[9] = uVar7;
  *(undefined8 *)(local_40 + 10) = *(undefined8 *)(puVar1 + 8);
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  cVar9 = FUN_14596c348(param_1,uVar11,local_40,&local_4c);
  uVar8 = local_4c;
  if (cVar9 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar10) {
      uVar12 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      local_40[0xd] = uVar11;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(uint *)(lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4)
      ;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_14596c4c2(param_1);
    }
  }
  *param_2 = uVar8;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596c348 FUN_14596c348 body=149 status=ok
// SIG undefined FUN_14596c348(void)

undefined8 FUN_14596c348(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14767d06c(iVar2,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14596c3de FUN_14596c3de body=227 status=ok
// SIG undefined FUN_14596c3de(void)

int * FUN_14596c3de(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14596c4c2 FUN_14596c4c2 body=428 status=ok
// SIG undefined FUN_14596c4c2(void)

void FUN_14596c4c2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596c670 FUN_14596c670 body=420 status=ok
// SIG undefined FUN_14596c670(void)

void FUN_14596c670(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = param_2[1];
    uVar4 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    uVar4 = (uint)(uVar2 >> 0x10);
    uVar9 = (uint)uVar2 & 0xffff;
    uVar5 = (uVar5 >> 2) + 0x9e3779b9 +
            uVar5 * 0x40 +
            ((uint)*(byte *)((longlong)param_2 + 0x14) ^ (uint)param_2[2] ^
            ((uint)uVar2 << 0x10 | uVar9) + (int)(uVar2 >> 0x20) + (uVar4 << 0x13 | uVar4 & 0xffff)
            + (uVar9 >> 4)) ^ uVar5;
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    uVar4 = (uint)(uVar2 >> 0x10);
    uVar9 = (uint)uVar2 & 0xffff;
    uVar6 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar9) + (int)(uVar2 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4),
                          *(undefined4 *)((longlong)param_2 + 0x24));
    iVar7 = FUN_144a78877(uVar6,(char)uVar3);
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar8 +
                    ((longlong)(int)((uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + iVar7 ^ uVar5) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar7 * 0x38;
        if (((((*(ulonglong *)(*param_1 + (longlong)iVar7 * 0x38) == *param_2) &&
              (*(int *)(lVar1 + 0x10) == (int)param_2[2])) &&
             (*(ulonglong *)(lVar1 + 8) == param_2[1])) &&
            ((*(char *)(lVar1 + 0x14) == *(char *)((longlong)param_2 + 0x14) &&
             (*(int *)(lVar1 + 0x18) == (int)param_2[3])))) &&
           ((*(int *)(lVar1 + 0x1c) == *(int *)((longlong)param_2 + 0x1c) &&
            ((*(char *)(lVar1 + 0x20) == (char)param_2[4] &&
             (*(int *)(lVar1 + 0x24) == *(int *)((longlong)param_2 + 0x24))))))) {
          FUN_14596c814(param_1);
          return;
        }
        iVar7 = *(int *)(lVar1 + 0x30);
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 14596c814 FUN_14596c814 body=86 status=ok
// SIG undefined FUN_14596c814(void)

void FUN_14596c814(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x38 + 0x30);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_14596c86a();
  return;
}



// FUNCTION 14596c86a FUN_14596c86a body=114 status=ok
// SIG undefined FUN_14596c86a(void)

void FUN_14596c86a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14596c8dc FUN_14596c8dc body=117 status=ok
// SIG undefined FUN_14596c8dc(void)

void FUN_14596c8dc(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14596cae4(local_28);
  FUN_14596c9e6(param_1,local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596c952 FUN_14596c952 body=147 status=ok
// SIG undefined FUN_14596c952(void)

void FUN_14596c952(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1413f6d7c(param_1 + 0x148,&local_38);
  lVar1 = local_38;
  lVar2 = (longlong)(int)uStack_30;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      FUN_140d95e8c(param_1,*(undefined4 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while (lVar2 * 4 != lVar3);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596c9e6 FUN_14596c9e6 body=253 status=ok
// SIG undefined FUN_14596c9e6(void)

void FUN_14596c9e6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  FUN_14112e7e4();
  uVar4 = 0;
  if ((int)param_1[1] != 0) {
    cVar3 = FUN_14698194c(*param_2);
    uVar4 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar4;
    if (cVar3 == '\0') {
      if (0 < (int)uVar4) {
        lVar6 = uVar5 << 4;
        do {
          lVar6 = lVar6 + -0x10;
          cVar3 = FUN_14698194c(*(undefined8 *)(*param_1 + lVar6));
          if (cVar3 == '\0') {
            cVar3 = FUN_14287bc30(*param_2);
            if (cVar3 == '\0') goto LAB_14596cad1;
            cVar3 = FUN_14287bc30(*(undefined8 *)(*param_1 + lVar6));
            if (cVar3 != '\0') goto LAB_14596cad1;
          }
          bVar2 = 1 < uVar5;
          uVar5 = uVar5 - 1;
        } while (bVar2);
        uVar5 = 0;
      }
LAB_14596cad1:
      FUN_14692fafc(param_1,param_2,uVar5 & 0xffffffff);
      goto LAB_14596ca47;
    }
  }
  *(uint *)(param_1 + 1) = uVar4 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar4 + 1) {
    FUN_1413f6722(param_1,uVar4);
  }
  lVar6 = *param_1;
  *(undefined8 *)(lVar6 + (longlong)(int)uVar4 * 0x10) = *param_2;
  lVar1 = param_2[1];
  *(longlong *)(lVar6 + 8 + (longlong)(int)uVar4 * 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
LAB_14596ca47:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596cae4 FUN_14596cae4 body=271 status=ok
// SIG undefined FUN_14596cae4(void)

undefined8 * FUN_14596cae4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145861bfe(*param_2,&local_30);
  if (local_30 == 0) {
    *param_1 = *param_2;
    lVar4 = param_2[1];
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    FUN_14596c9e6(local_30 + 0x600,param_2);
    local_40 = local_30;
    local_38 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    FUN_14596cae4(param_1,&local_40);
    plVar2 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar3 = (int *)((longlong)local_28 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596cbf4 FUN_14596cbf4 body=146 status=ok
// SIG undefined FUN_14596cbf4(void)

void FUN_14596cbf4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x160,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x160)) {
      uVar5 = uVar4 / 0x160 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x160,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14596cc86 FUN_14596cc86 body=547 status=ok
// SIG undefined FUN_14596cc86(void)

void FUN_14596cc86(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x18);
    plVar9 = plVar10 + (longlong)*(int *)(param_1 + 0x20) * 4;
    do {
      if ((longlong)(int)plVar10[1] != 0) {
        plVar8 = (longlong *)*plVar10;
        plVar7 = plVar8 + (longlong)(int)plVar10[1] * 2;
        do {
          lVar3 = *plVar8;
          plVar4 = *(longlong **)(lVar3 + 0x280);
          if (plVar4 != (longlong *)0x0) {
            iVar6 = (int)plVar4[1];
            do {
              if (iVar6 == 0) goto LAB_14596cd8f;
              LOCK();
              iVar5 = (int)plVar4[1];
              bVar11 = iVar6 == iVar5;
              if (bVar11) {
                *(int *)(plVar4 + 1) = iVar6 + 1;
                iVar5 = iVar6;
              }
              iVar6 = iVar5;
              UNLOCK();
            } while (!bVar11);
            lVar3 = *(longlong *)(lVar3 + 0x278);
            if ((lVar3 != 0) && (lVar3 == *param_2)) {
              LOCK();
              plVar10 = plVar4 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
              goto LAB_14596cce4;
            }
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
LAB_14596cd8f:
          plVar8 = plVar8 + 2;
        } while (plVar8 != plVar7);
      }
      plVar10 = plVar10 + 4;
    } while (plVar10 != plVar9);
  }
  FUN_1413f6f2c(DAT_14c98e618,&local_50);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_48 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x18);
    plVar9 = plVar10 + (longlong)*(int *)(param_1 + 0x20) * 4;
    do {
      if ((longlong)(int)plVar10[1] != 0) {
        plVar8 = (longlong *)*plVar10;
        plVar7 = plVar8 + (longlong)(int)plVar10[1] * 2;
        do {
          lVar3 = *plVar8;
          plVar4 = *(longlong **)(lVar3 + 0x280);
          if (plVar4 != (longlong *)0x0) {
            iVar6 = (int)plVar4[1];
            do {
              if (iVar6 == 0) goto LAB_14596ce45;
              LOCK();
              iVar5 = (int)plVar4[1];
              bVar11 = iVar6 == iVar5;
              if (bVar11) {
                *(int *)(plVar4 + 1) = iVar6 + 1;
                iVar5 = iVar6;
              }
              iVar6 = iVar5;
              UNLOCK();
            } while (!bVar11);
            if ((local_50 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x278), lVar3 != 0)) {
              FUN_146981248(lVar3,0);
            }
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
LAB_14596ce45:
          plVar8 = plVar8 + 2;
        } while (plVar8 != plVar7);
      }
      plVar10 = plVar10 + 4;
    } while (plVar10 != plVar9);
  }
LAB_14596cce4:
  plVar10 = (longlong *)param_2[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596ceaa FUN_14596ceaa body=636 status=ok
// SIG undefined FUN_14596ceaa(void)

void FUN_14596ceaa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  plVar3 = DAT_14c98e618;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = *param_2;
  if ((*(longlong *)(param_1 + 200) != lVar11 || *(longlong *)(param_1 + 200) == 0) &&
     (0 < *(int *)(param_1 + 0x68))) {
    local_30 = (longlong *)param_2[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    local_38 = lVar11;
    cVar7 = (**(code **)(*plVar3 + 0x118))(plVar3,&local_38);
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (cVar7 == '\0') {
      local_58 = *param_2;
      local_50 = param_2[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      FUN_145e0fd22(param_1,&local_48,&local_58);
      plVar3 = local_40;
      local_38 = local_48;
      local_30 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
        UNLOCK();
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
      if (((local_38 == 0) || (local_30 == (longlong *)0x0)) || ((int)local_30[1] < 1)) {
        uVar10 = (ulonglong)*(int *)(param_1 + 0x68);
        if (0 < (longlong)uVar10) {
          lVar11 = uVar10 << 4;
          do {
            lVar11 = lVar11 + -0x10;
            if ((longlong)uVar10 <= (longlong)*(int *)(param_1 + 0x68)) {
              (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x60) + lVar11) + 0x38))();
            }
            bVar6 = 1 < uVar10;
            uVar10 = uVar10 - 1;
          } while (bVar6);
        }
      }
      else {
        iVar8 = FUN_1469a8fd4((longlong *)(param_1 + 0x60),&local_38);
        lVar9 = (longlong)iVar8;
        lVar11 = lVar9 * 0x10 + 0x10;
        do {
          lVar9 = lVar9 + 1;
          if (*(int *)(param_1 + 0x68) <= lVar9) goto LAB_14596d104;
          lVar4 = *(longlong *)(param_1 + 0x60);
          lVar5 = *(longlong *)(lVar4 + lVar11);
          lVar11 = lVar11 + 0x10;
        } while (*(char *)(lVar5 + 0x41) != '\x01');
        plVar3 = *(longlong **)(lVar4 + -8 + lVar11);
        local_48 = lVar5;
        local_40 = plVar3;
        if (plVar3 == (longlong *)0x0) {
          FUN_1469a8986(param_1,&local_48);
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          FUN_1469a8986(param_1);
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
        }
      }
LAB_14596d104:
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
  }
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
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596d128 FUN_14596d128 body=313 status=ok
// SIG undefined FUN_14596d128(void)

undefined8 * FUN_14596d128(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 8),4000);
  *(undefined1 *)(param_1 + 0xd) = 1;
  local_48 = L"AllowDescription";
  local_40 = 0x10;
  FUN_1446e940c(local_4c,&local_48);
  local_48 = L"SlateNotifications";
  local_40 = 0x12;
  FUN_1446e940c(local_50,&local_48);
  FUN_140208bae(&local_48,local_50,local_4c,
                L"If false, then notifications will not be displayed to the user.");
  puVar1 = (undefined8 *)FUN_1447a1f4a(&local_48);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  local_58 = 0;
  FUN_14153156c(param_1 + 0xe,L"Slate.bAllowNotifications",param_1 + 0xd,puVar2);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_14596d262(&local_48,param_1);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596d262 FUN_14596d262 body=223 status=ok
// SIG undefined FUN_14596d262(void)

undefined8 FUN_14596d262(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149f0d8b0;
  local_30[3] = param_2;
  local_30[4] = FUN_145d3122c;
  FUN_1448b6402(&DAT_14c8673d8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596d342 FUN_14596d342 body=158 status=ok
// SIG undefined FUN_14596d342(void)

longlong * FUN_14596d342(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14596d3e3();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14596d444(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596d3e3 FUN_14596d3e3 body=96 status=ok
// SIG undefined FUN_14596d3e3(void)

void FUN_14596d3e3(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b41aa50;
  puVar1[9] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 2;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[2] = &PTR_FUN_14b351ea0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 14596d444 FUN_14596d444 body=157 status=ok
// SIG undefined FUN_14596d444(void)

void FUN_14596d444(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14596d47e;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14596d47e;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14596d47e:
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
                    /* WARNING: Could not recover jumptable at 0x00014596d4dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14596d4f2 FUN_14596d4f2 body=172 status=ok
// SIG undefined FUN_14596d4f2(void)

undefined8 * FUN_14596d4f2(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14596d5a0();
  *param_1 = &PTR_FUN_14abf6aa0;
  param_1[5] = &PTR_LAB_14abf6dd0;
  FUN_1400b22c2(&local_28,"MoveDirectlyToward");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfe;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596d5a0 FUN_14596d5a0 body=1030 status=ok
// SIG undefined FUN_14596d5a0(void)

undefined8 * FUN_14596d5a0(undefined8 *param_1)

{
  float fVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14596d9a8();
  *param_1 = &PTR_FUN_14abf7310;
  param_1[5] = &PTR_LAB_14abf7640;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  local_30 = 0;
  FUN_14596da70(param_1 + 0x15);
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  FUN_1400b22c2(&local_40,"Move To");
  if (param_1 + 6 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 7) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_34;
  }
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffff9 | 4;
  plVar3 = (longlong *)FUN_1413f6fa8();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  fVar1 = *(float *)(lVar4 + 0xc0);
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  *(float *)((longlong)param_1 + 0xa4) = fVar1;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0xffff;
  *(float *)((longlong)param_1 + 0xd4) = fVar1 * 0.95;
  plVar3 = (longlong *)FUN_1413f6fa8();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))();
    lVar4 = plVar3[0x22];
  }
  uVar2 = *(undefined1 *)(lVar4 + 0xcc);
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x134) = uVar2;
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_1 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_1 + 300);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_1 + 0x134);
  plVar3 = (longlong *)FUN_1413f6fa8();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))();
    lVar4 = plVar3[0x22];
  }
  uVar2 = *(undefined1 *)(lVar4 + 0xce);
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xe4) = uVar2;
  plVar3 = (longlong *)FUN_1413f6fa8();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))();
    lVar4 = plVar3[0x22];
  }
  uVar2 = *(undefined1 *)(lVar4 + 0xcd);
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xf4) = uVar2;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x104) = 1;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x114) = 1;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 1;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  local_48 = FUN_144a6c4d8();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  FUN_1446f470e(&local_50,L"BlackboardKey",1);
  FUN_1458b8c86(param_1 + 0xe,param_1,local_50,&local_48);
  FUN_1446f470e(&local_58,L"BlackboardKey",1);
  FUN_1458b89d2(param_1 + 0xe,param_1,local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596d9a8 FUN_14596d9a8 body=198 status=ok
// SIG undefined FUN_14596d9a8(void)

undefined8 * FUN_14596d9a8(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abf4960;
  param_1[5] = &PTR_LAB_14abf4c80;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffff;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xfe;
  FUN_1400b22c2(&local_28,"BlackboardBase");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596da70 FUN_14596da70 body=151 status=ok
// SIG undefined FUN_14596da70(void)

undefined8 * FUN_14596da70(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_14118cf76();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar1 = *param_2;
      }
      else {
        lVar1 = 0;
      }
      param_1[2] = lVar1;
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      goto LAB_14596da97;
    }
  }
  param_1[2] = 0;
LAB_14596da97:
  lVar1 = FUN_14118cf76();
  param_1[3] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_1;
}



// FUNCTION 14596db08 FUN_14596db08 body=40 status=ok
// SIG undefined FUN_14596db08(void)

undefined8 FUN_14596db08(undefined8 param_1,int param_2)

{
  FUN_14596db30();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14596db30 FUN_14596db30 body=97 status=ok
// SIG undefined FUN_14596db30(void)

void FUN_14596db30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a476ed0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3b9c4(param_1 + 0xf);
  FUN_14596db92(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14596db92 FUN_14596db92 body=53 status=ok
// SIG undefined FUN_14596db92(void)

void FUN_14596db92(longlong *param_1)

{
  FUN_14596dbc8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14596dbc8 FUN_14596dbc8 body=90 status=ok
// SIG undefined FUN_14596dbc8(void)

void FUN_14596dbc8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14596dc46 FUN_14596dc46 body=92 status=ok
// SIG undefined FUN_14596dc46(void)

undefined1 FUN_14596dc46(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    return cVar1 != '\0';
  }
  uVar3 = (**(code **)(*param_2 + 0x28))();
  uVar2 = FUN_14596dca2(param_1,param_2,uVar3);
  return uVar2;
}



// FUNCTION 14596dca2 FUN_14596dca2 body=791 status=ok
// SIG undefined FUN_14596dca2(void)

undefined4 FUN_14596dca2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_144a7c06e(param_3);
  if ((cVar2 != '\0') &&
     (plVar5 = (longlong *)FUN_1412446d2(param_3),
     (int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c))) {
    plVar10 = plVar5 + 8;
    if ((longlong *)plVar5[9] != (longlong *)0x0) {
      plVar10 = (longlong *)plVar5[9];
    }
    iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar5[10] - 1U & DAT_14cb8ada8) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)(*plVar5 + (longlong)iVar9 * 0x40) == DAT_14cb8ada8) {
          plVar5 = (longlong *)FUN_1412446d2(param_3);
          if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
            plVar10 = plVar5 + 8;
            if ((longlong *)plVar5[9] != (longlong *)0x0) {
              plVar10 = (longlong *)plVar5[9];
            }
            iVar9 = *(int *)((longlong)plVar10 +
                            (ulonglong)((int)plVar5[10] - 1U & DAT_14cb8add0) * 4);
            if (iVar9 != -1) {
              uVar4 = 0;
              goto LAB_14596dd7e;
            }
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x40 + *plVar5 + 0x38);
      } while (iVar9 != -1);
    }
  }
  uVar4 = 0;
LAB_14596dead:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
LAB_14596dd7e:
  if (*(uint *)(*plVar5 + (longlong)iVar9 * 0x40) != DAT_14cb8add0) goto LAB_14596ded5;
  uVar6 = FUN_144a06846(param_3,&DAT_14cb8ada8);
  uVar6 = FUN_144a7cdd6(uVar6,0);
  uVar3 = FUN_14596dfba(uVar6);
  puVar7 = (undefined8 *)FUN_144a06846(param_3,&DAT_14cb8add0);
  local_78 = *puVar7;
  local_70 = (longlong *)puVar7[1];
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  cVar2 = FUN_144a8220c(&local_78);
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto switchD_14596de0b_default;
  }
  uVar4 = 1;
  switch(uVar3) {
  case 0:
    local_68 = 0;
    local_48 = local_48 & 0xffffffffffff0000;
    local_40 = 0;
    local_38 = 0;
    uVar4 = FUN_14078599e(&local_68,param_2,&local_78);
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 0x38)])(param_1);
    FUN_14034cca6(param_1,&local_68);
    *(undefined1 *)(param_1 + 0x38) = 0;
    FUN_144a2da94(&local_68);
    break;
  case 1:
    uVar4 = 1;
    FUN_1408db4c4(&local_68,&local_78,0,1);
    FUN_14596e06a(param_1,&local_68);
    lVar8 = local_58;
    goto LAB_14596de90;
  case 2:
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_48 = 0;
    uVar6 = FUN_140cdfcd0();
    FUN_1446e7478(&local_78,&local_68,uVar6,0);
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 0x38)])(param_1);
    FUN_144a7f96e(param_1,&local_68);
    *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_50;
    *(undefined4 *)(param_1 + 0x1c) = uStack_50._4_4_;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x24) = local_48._4_4_;
    *(undefined1 *)(param_1 + 0x38) = 2;
    break;
  case 3:
    FUN_144928b90(&local_68,0);
    uVar4 = FUN_148834660(&local_68,param_2,&local_78);
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 0x38)])(param_1);
    FUN_1400750e6(param_1,&local_68);
    *(undefined1 *)(param_1 + 0x38) = 3;
    lVar8 = CONCAT71(uStack_3f,local_40);
LAB_14596de90:
    if (lVar8 != 0) {
      FUN_1400020a8();
    }
  }
switchD_14596de0b_default:
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_70 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  goto LAB_14596dead;
LAB_14596ded5:
  iVar9 = *(int *)((longlong)iVar9 * 0x40 + *plVar5 + 0x38);
  if (iVar9 == -1) goto LAB_14596dead;
  goto LAB_14596dd7e;
}



// FUNCTION 14596dfba FUN_14596dfba body=118 status=ok
// SIG undefined FUN_14596dfba(void)

undefined1 FUN_14596dfba(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    uVar2 = FUN_14596e031();
    FUN_1446ddc76(&local_30,param_1,1);
    cVar1 = FUN_1412446f0(local_30,uVar2,local_28);
    if (cVar1 != '\0') goto LAB_14596e00e;
  }
  local_28[0] = 0;
LAB_14596e00e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_28[0];
}



// FUNCTION 14596e031 FUN_14596e031 body=57 status=ok
// SIG undefined FUN_14596e031(void)

void FUN_14596e031(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64e68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64e68 = FUN_14171c317(FUN_146506ee6,uVar1,L"EGbxSkillCompValueType");
  }
  return;
}



// FUNCTION 14596e06a FUN_14596e06a body=189 status=ok
// SIG undefined FUN_14596e06a(void)

void FUN_14596e06a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 7)])();
  uVar2 = *param_2;
  uVar3 = param_2[1];
  _Src = (void *)param_2[2];
  iVar1 = *(int *)(param_2 + 3);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_1 = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_38._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_30._4_4_;
  param_1[3] = 0;
  *(int *)(param_1 + 4) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596e128 FUN_14596e128 body=40 status=ok
// SIG undefined FUN_14596e128(void)

undefined8 FUN_14596e128(undefined8 param_1,int param_2)

{
  FUN_14596e150();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14596e150 FUN_14596e150 body=115 status=ok
// SIG undefined FUN_14596e150(void)

void FUN_14596e150(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae4c8e0;
  param_1[5] = &PTR_FUN_14ae4cc60;
  FUN_144760e21(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x72] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x72] + 0x10))();
  }
  if ((longlong *)param_1[0x6a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x6a] + 0x10))();
  }
  FUN_14596e1c4(param_1);
  return;
}



// FUNCTION 14596e1c4 FUN_14596e1c4 body=87 status=ok
// SIG undefined FUN_14596e1c4(void)

void FUN_14596e1c4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae58370;
  param_1[5] = &PTR_FUN_14ae586e0;
  plVar3 = (longlong *)param_1[0x69];
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
  FUN_140e8baaa(param_1);
  return;
}



// FUNCTION 14596e21c FUN_14596e21c body=40 status=ok
// SIG undefined FUN_14596e21c(void)

undefined8 FUN_14596e21c(undefined8 param_1,int param_2)

{
  FUN_14596e244();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14596e244 FUN_14596e244 body=57 status=ok
// SIG undefined FUN_14596e244(void)

void FUN_14596e244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b366860;
  FUN_14596e27d(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14596e27d FUN_14596e27d body=41 status=ok
// SIG undefined FUN_14596e27d(void)

void FUN_14596e27d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14596e2a6(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 14596e2a6 FUN_14596e2a6 body=104 status=ok
// SIG undefined FUN_14596e2a6(void)

void FUN_14596e2a6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14596e30e FUN_14596e30e body=457 status=ok
// SIG undefined FUN_14596e30e(void)

longlong FUN_14596e30e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    FUN_14596e52c(param_1);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    FUN_14596e52c(param_1 + 0x18,param_2 + 0x18);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    FUN_14596e58a(param_1 + 0xd0,param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    FUN_14596e58a(param_1 + 0xe8,param_2 + 0xe8);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    FUN_14596e4d8(param_1 + 0x38,param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    plVar1 = *(longlong **)(param_2 + 0x58);
    plVar2 = *(longlong **)(param_1 + 0x58);
    if (plVar2 != plVar1) {
      *(longlong **)(param_1 + 0x58) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    plVar1 = *(longlong **)(param_2 + 0x70);
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (plVar2 != plVar1) {
      *(longlong **)(param_1 + 0x70) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    plVar1 = *(longlong **)(param_2 + 0xa0);
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (plVar2 != plVar1) {
      *(longlong **)(param_1 + 0xa0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
    FUN_144a787a6(param_1 + 0xc0,param_2 + 0xc0);
  }
  return param_1;
}



// FUNCTION 14596e4d8 FUN_14596e4d8 body=84 status=ok
// SIG undefined FUN_14596e4d8(void)

longlong * FUN_14596e4d8(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14596e52c FUN_14596e52c body=93 status=ok
// SIG undefined FUN_14596e52c(void)

undefined8 * FUN_14596e52c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141045d23(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148e23dfa(param_1,iVar1);
      FUN_148e23e69(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14596e58a FUN_14596e58a body=93 status=ok
// SIG undefined FUN_14596e58a(void)

undefined8 * FUN_14596e58a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141045d4b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148e23f28(param_1,iVar1);
      FUN_148e23f9e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14596e5e7 FUN_14596e5e7 body=187 status=ok
// SIG undefined FUN_14596e5e7(void)

undefined8 FUN_14596e5e7(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1413f7880();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0x40;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596e6a3 FUN_14596e6a3 body=187 status=ok
// SIG undefined FUN_14596e6a3(void)

undefined8 FUN_14596e6a3(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1403dec90();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0x40;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596e760 FUN_14596e760 body=55 status=ok
// SIG undefined FUN_14596e760(void)

void FUN_14596e760(void)

{
  undefined8 uVar1;
  
  if (DAT_14c990988 == 0) {
    uVar1 = FUN_1413f85cb();
    DAT_14c990988 = FUN_140002ddd(FUN_146282e0f,uVar1,L"AutoCompleteCommand");
  }
  return;
}



// FUNCTION 14596e798 FUN_14596e798 body=55 status=ok
// SIG undefined FUN_14596e798(void)

void FUN_14596e798(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9979e8 == 0) {
    uVar1 = FUN_1413f85fc();
    DAT_14c9979e8 = FUN_140002ddd(FUN_1462883c3,uVar1,L"BodyInstanceCore");
  }
  return;
}



// FUNCTION 14596e7d6 FUN_14596e7d6 body=228 status=ok
// SIG undefined FUN_14596e7d6(void)

longlong FUN_14596e7d6(void)

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
  if (DAT_14cabf608 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145898b8e;
    local_38 = &LAB_14785d017;
    local_40 = &LAB_145c4a557;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x330;
    FUN_14081cfa3(L"/Script/Engine",L"BoxReflectionCaptureComponent",&DAT_14cabf608,&DAT_14785d016);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf608;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596e8c2 FUN_14596e8c2 body=228 status=ok
// SIG undefined FUN_14596e8c2(void)

longlong FUN_14596e8c2(void)

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
  if (DAT_14cac0e80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_146371ddc;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14786c54b;
    local_40 = &LAB_14593ff0d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/Engine",L"ExternalDataLayerManager",&DAT_14cac0e80,&DAT_14786c54a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac0e80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596e9ae FUN_14596e9ae body=228 status=ok
// SIG undefined FUN_14596e9ae(void)

longlong FUN_14596e9ae(void)

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
  if (DAT_14cac6498 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145898b8e;
    local_38 = &LAB_14788c74d;
    local_40 = &LAB_145c4a752;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x330;
    FUN_14081cfa3(L"/Script/Engine",L"PlaneReflectionCaptureComponent",&DAT_14cac6498,&DAT_14788c74c
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac6498;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596ea9a FUN_14596ea9a body=55 status=ok
// SIG undefined FUN_14596ea9a(void)

void FUN_14596ea9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24740 == 0) {
    uVar1 = FUN_1413f8713();
    DAT_14cb24740 = FUN_140002ddd(FUN_14644259f,uVar1,L"GeometryCollectionInstance");
  }
  return;
}



// FUNCTION 14596ead2 FUN_14596ead2 body=55 status=ok
// SIG undefined FUN_14596ead2(void)

void FUN_14596ead2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb44600 == 0) {
    uVar1 = FUN_14596eb09();
    DAT_14cb44600 = FUN_140002ddd(FUN_14183c066,uVar1,L"ProcMeshTangent");
  }
  return;
}



// FUNCTION 14596eb09 FUN_14596eb09 body=49 status=ok
// SIG undefined FUN_14596eb09(void)

longlong FUN_14596eb09(void)

{
  if (DAT_14cb44558 == 0) {
    FUN_140f50038(&DAT_14cb44558,&PTR_s__Script_ProceduralMeshComponent_14ae31a70);
  }
  return DAT_14cb44558;
}



// FUNCTION 14596eb3a FUN_14596eb3a body=55 status=ok
// SIG undefined FUN_14596eb3a(void)

void FUN_14596eb3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98dc8 == 0) {
    uVar1 = FUN_14596eb71();
    DAT_14cb98dc8 = FUN_140002ddd(FUN_14658b03b,uVar1,L"ModuleInputValue");
  }
  return;
}



// FUNCTION 14596eb71 FUN_14596eb71 body=49 status=ok
// SIG undefined FUN_14596eb71(void)

longlong FUN_14596eb71(void)

{
  if (DAT_14cb98d80 == 0) {
    FUN_140f50038(&DAT_14cb98d80,&PTR_s__Script_ChaosVehiclesCore_14b50d10b_5_14b50d0f0);
  }
  return DAT_14cb98d80;
}



// FUNCTION 14596eba2 FUN_14596eba2 body=55 status=ok
// SIG undefined FUN_14596eba2(void)

void FUN_14596eba2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99e68 == 0) {
    uVar1 = FUN_1413f8744();
    DAT_14cb99e68 = FUN_140002ddd(FUN_146591183,uVar1,L"GameSettingFilterState");
  }
  return;
}



// FUNCTION 14596ebe4 FUN_14596ebe4 body=69 status=ok
// SIG undefined FUN_14596ebe4(void)

void FUN_14596ebe4(longlong *param_1)

{
  FUN_140368b56(param_1 + 10);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_141045c07(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14596ec2a FUN_14596ec2a body=55 status=ok
// SIG undefined FUN_14596ec2a(void)

void FUN_14596ec2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6568 == 0) {
    uVar1 = FUN_14596ec61();
    DAT_14cbf6568 = FUN_140002ddd(FUN_1466732c2,uVar1,L"WebJSResponse");
  }
  return;
}



// FUNCTION 14596ec61 FUN_14596ec61 body=49 status=ok
// SIG undefined FUN_14596ec61(void)

longlong FUN_14596ec61(void)

{
  if (DAT_14cbf6248 == 0) {
    FUN_140f50038(&DAT_14cbf6248,&PTR_s__Script_WebBrowser_14ba6a930);
  }
  return DAT_14cbf6248;
}



// FUNCTION 14596ec92 FUN_14596ec92 body=55 status=ok
// SIG undefined FUN_14596ec92(void)

void FUN_14596ec92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0d8a8 == 0) {
    uVar1 = FUN_1413f8775();
    DAT_14cc0d8a8 = FUN_140002ddd(FUN_1467228da,uVar1,L"FunctionCaller");
  }
  return;
}



// FUNCTION 14596ecca FUN_14596ecca body=55 status=ok
// SIG undefined FUN_14596ecca(void)

void FUN_14596ecca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc10a68 == 0) {
    uVar1 = FUN_14596ed01();
    DAT_14cc10a68 = FUN_140002ddd(FUN_14672c529,uVar1,L"InterchangeCurveKey");
  }
  return;
}



// FUNCTION 14596ed01 FUN_14596ed01 body=49 status=ok
// SIG undefined FUN_14596ed01(void)

longlong FUN_14596ed01(void)

{
  if (DAT_14cc10a08 == 0) {
    FUN_140f50038(&DAT_14cc10a08,&PTR_s__Script_InterchangeCommonParser_14bc9ef00);
  }
  return DAT_14cc10a08;
}



// FUNCTION 14596ed32 FUN_14596ed32 body=55 status=ok
// SIG undefined FUN_14596ed32(void)

void FUN_14596ed32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc16ea0 == 0) {
    uVar1 = FUN_14596ed69();
    DAT_14cc16ea0 = FUN_140002ddd(FUN_14672f969,uVar1,L"MovieSceneGeometryCacheParams");
  }
  return;
}



// FUNCTION 14596ed69 FUN_14596ed69 body=49 status=ok
// SIG undefined FUN_14596ed69(void)

longlong FUN_14596ed69(void)

{
  if (DAT_14cc16e78 == 0) {
    FUN_140f50038(&DAT_14cc16e78,&PTR_s__Script_GeometryCacheTracks_14bccd920);
  }
  return DAT_14cc16e78;
}



// FUNCTION 14596ed9a FUN_14596ed9a body=55 status=ok
// SIG undefined FUN_14596ed9a(void)

void FUN_14596ed9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1e6c0 == 0) {
    uVar1 = FUN_14596edd1();
    DAT_14cc1e6c0 = FUN_140002ddd(FUN_14673f3fb,uVar1,L"MovieSceneLiveLinkSectionTemplate");
  }
  return;
}



// FUNCTION 14596edd1 FUN_14596edd1 body=49 status=ok
// SIG undefined FUN_14596edd1(void)

longlong FUN_14596edd1(void)

{
  if (DAT_14cc1e680 == 0) {
    FUN_140f50038(&DAT_14cc1e680,&PTR_s__Script_LiveLinkMovieScene_14bd37e38);
  }
  return DAT_14cc1e680;
}



// FUNCTION 14596ee02 FUN_14596ee02 body=55 status=ok
// SIG undefined FUN_14596ee02(void)

void FUN_14596ee02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24138 == 0) {
    uVar1 = FUN_14596ee39();
    DAT_14cc24138 = FUN_140002ddd(FUN_14674ef9f,uVar1,L"MovieSceneGeometryCollectionParams");
  }
  return;
}



// FUNCTION 14596ee39 FUN_14596ee39 body=49 status=ok
// SIG undefined FUN_14596ee39(void)

longlong FUN_14596ee39(void)

{
  if (DAT_14cc24110 == 0) {
    FUN_140f50038(&DAT_14cc24110,&PTR_s__Script_GeometryCollectionTracks_14be0ef8f_1_14be0ef70);
  }
  return DAT_14cc24110;
}



// FUNCTION 14596ee6a FUN_14596ee6a body=55 status=ok
// SIG undefined FUN_14596ee6a(void)

void FUN_14596ee6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc261e8 == 0) {
    uVar1 = FUN_14596eea1();
    DAT_14cc261e8 =
         FUN_140002ddd(FUN_14675b798,uVar1,L"GeometryCollectionTransferVertexScalarAttributeNode");
  }
  return;
}



// FUNCTION 14596eea1 FUN_14596eea1 body=49 status=ok
// SIG undefined FUN_14596eea1(void)

longlong FUN_14596eea1(void)

{
  if (DAT_14cc26180 == 0) {
    FUN_140f50038(&DAT_14cc26180,&PTR_s__Script_GeometryCollectionDepNod_14be6ff70);
  }
  return DAT_14cc26180;
}



// FUNCTION 14596eed2 FUN_14596eed2 body=55 status=ok
// SIG undefined FUN_14596eed2(void)

void FUN_14596eed2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc31080 == 0) {
    uVar1 = FUN_14596ef09();
    DAT_14cc31080 = FUN_140002ddd(FUN_14676f108,uVar1,L"MovieSceneNiagaraCacheParams");
  }
  return;
}



// FUNCTION 14596ef09 FUN_14596ef09 body=49 status=ok
// SIG undefined FUN_14596ef09(void)

longlong FUN_14596ef09(void)

{
  if (DAT_14cc310f8 == 0) {
    FUN_140f50038(&DAT_14cc310f8,&PTR_s__Script_NiagaraSimCaching_14beed2c7_1_14beed2a8);
  }
  return DAT_14cc310f8;
}



// FUNCTION 14596ef3a FUN_14596ef3a body=55 status=ok
// SIG undefined FUN_14596ef3a(void)

void FUN_14596ef3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc317b0 == 0) {
    uVar1 = FUN_14596ef71();
    DAT_14cc317b0 =
         FUN_140002ddd(FUN_146770e86,uVar1,L"MovieSceneMediaPlayerPropertySectionTemplate");
  }
  return;
}



// FUNCTION 14596ef71 FUN_14596ef71 body=49 status=ok
// SIG undefined FUN_14596ef71(void)

longlong FUN_14596ef71(void)

{
  if (DAT_14cc31770 == 0) {
    FUN_140f50038(&DAT_14cc31770,&PTR_s__Script_MediaCompositing_14bef26c0);
  }
  return DAT_14cc31770;
}



// FUNCTION 14596efa2 FUN_14596efa2 body=55 status=ok
// SIG undefined FUN_14596efa2(void)

void FUN_14596efa2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc32588 == 0) {
    uVar1 = FUN_14596efd9();
    DAT_14cc32588 = FUN_140002ddd(FUN_146771d2c,uVar1,L"ActorSequenceObjectReference");
  }
  return;
}



// FUNCTION 14596efd9 FUN_14596efd9 body=49 status=ok
// SIG undefined FUN_14596efd9(void)

longlong FUN_14596efd9(void)

{
  if (DAT_14cc32528 == 0) {
    FUN_140f50038(&DAT_14cc32528,&PTR_s__Script_ActorSequence_14befeb08);
  }
  return DAT_14cc32528;
}



// FUNCTION 14596f010 FUN_14596f010 body=458 status=ok
// SIG undefined FUN_14596f010(void)

undefined4 FUN_14596f010(longlong param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined4 local_a0 [5];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined2 local_52;
  undefined1 local_50;
  undefined2 local_4f;
  byte local_4d;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar4 = *(undefined4 **)(param_1 + 0x138);
  uVar6 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    bVar1 = *(byte *)(puVar4 + 3);
    uVar6 = 0;
    if ((bVar1 != 0) && (((&DAT_14c873438)[(uint)bVar1 * 0x30] & 1) != 0)) {
      bVar2 = *(byte *)(param_1 + 0xfe);
      bVar3 = *(byte *)(param_1 + 0x104);
      local_c0 = &local_84;
      local_84 = 0;
      local_b8 = &local_88;
      local_88 = 0;
      local_b0 = &local_8c;
      local_8c = 0;
      local_c8 = puVar4[8] - param_2;
      if (local_c8 < 1) {
        local_c8 = 0;
      }
      FUN_1413f87a6(*puVar4,puVar4[1],puVar4[2] & 0x1fffffff,bVar1);
      local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_5c = CONCAT44(local_88,local_84);
      iVar7 = 1;
      if (1 < param_2) {
        iVar7 = param_2;
      }
      local_60 = *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x10);
      local_4c = 0xff00;
      local_54 = (undefined2)local_8c;
      local_52 = 1;
      local_50 = (undefined1)iVar7;
      local_4f = 0x201;
      local_78 = 1;
      local_74 = 0;
      uStack_6c = 0;
      local_80 = (ulonglong)((bVar2 & 1) << 4 | (bVar3 & 2) << 0x13 | (bVar2 & 2) << 5) ^ 0x100000;
      local_4d = bVar1;
      cVar5 = FUN_14490ad04(&local_80,&DAT_149dfb77a,0);
      uVar6 = 0;
      if (cVar5 != '\0') {
        (**(code **)(*DAT_14ca83900 + 0x180))(DAT_14ca83900,local_a0,&local_80,0);
        uVar6 = local_a0[0];
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596f1dc FUN_14596f1dc body=40 status=ok
// SIG undefined FUN_14596f1dc(void)

undefined8 FUN_14596f1dc(undefined8 param_1,int param_2)

{
  FUN_14596f204();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14596f204 FUN_14596f204 body=204 status=ok
// SIG undefined FUN_14596f204(void)

void FUN_14596f204(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b392a50;
  FUN_1413f8801(param_1[0x7e],*(undefined4 *)(param_1 + 0x7f));
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_1413f882b(param_1[0x76],*(undefined4 *)(param_1 + 0x77));
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_140d60d3d(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 14596f2d0 FUN_14596f2d0 body=40 status=ok
// SIG undefined FUN_14596f2d0(void)

undefined8 FUN_14596f2d0(undefined8 param_1,int param_2)

{
  FUN_14596f2f8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14596f2f8 FUN_14596f2f8 body=141 status=ok
// SIG undefined FUN_14596f2f8(void)

void FUN_14596f2f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba884e0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_14596f385(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_14906d6d4(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_14482f6fa(param_1 + 0xe,0);
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14596f385(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14596f3b0(param_1);
  return;
}



// FUNCTION 14596f385 FUN_14596f385 body=43 status=ok
// SIG undefined FUN_14596f385(void)

void FUN_14596f385(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145f7cfa2(param_1);
    param_1 = param_1 + 200;
  }
  return;
}



// FUNCTION 14596f3b0 FUN_14596f3b0 body=123 status=ok
// SIG undefined FUN_14596f3b0(void)

void FUN_14596f3b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba87f70;
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_144920e50(param_1 + 6,0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_14482f6fa(param_1 + 8,0);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14596f42c FUN_14596f42c body=179 status=ok
// SIG undefined FUN_14596f42c(void)

bool FUN_14596f42c(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_40 = *param_2;
    local_38 = (undefined4)param_2[1];
    local_30 = 0;
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596f51a FUN_14596f51a body=40 status=ok
// SIG undefined FUN_14596f51a(void)

undefined8 FUN_14596f51a(undefined8 param_1,int param_2)

{
  FUN_14596f542();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14596f542 FUN_14596f542 body=57 status=ok
// SIG undefined FUN_14596f542(void)

void FUN_14596f542(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b902e50;
  FUN_14596f57b(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fa3ec8(param_1);
  return;
}



// FUNCTION 14596f57b FUN_14596f57b body=42 status=ok
// SIG undefined FUN_14596f57b(void)

void FUN_14596f57b(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    do {
      FUN_144a2da94(param_1);
      param_1 = param_1 + 0x78;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14596f5ac FUN_14596f5ac body=118 status=ok
// SIG undefined FUN_14596f5ac(void)

void FUN_14596f5ac(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_1c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596f624 FUN_14596f624 body=315 status=ok
// SIG undefined FUN_14596f624(void)

void FUN_14596f624(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar3 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar2 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14596f760(plVar3,puVar2);
  *param_3 = uVar1;
  FUN_1409ed859(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596f760 FUN_14596f760 body=92 status=ok
// SIG undefined FUN_14596f760(void)

undefined8 FUN_14596f760(undefined8 param_1,byte *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1411a08ba(&local_28,param_1);
  *param_2 = local_20 ^ 1;
  if (local_20 == 0) {
    local_28 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_28;
}



// FUNCTION 14596f7bd FUN_14596f7bd body=118 status=ok
// SIG undefined FUN_14596f7bd(void)

void FUN_14596f7bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = param_2;
  FUN_140f15190(&local_28,param_3);
  FUN_1447cd2ec(param_1,&local_30);
  FUN_140ee7917(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596f840 FUN_14596f840 body=127 status=ok
// SIG undefined FUN_14596f840(void)

undefined8 * FUN_14596f840(undefined8 *param_1)

{
  FUN_14596f8c0();
  *param_1 = &PTR_FUN_14ae4c8e0;
  param_1[5] = &PTR_FUN_14ae4cc60;
  FUN_144a5dc74(param_1 + 0x6a);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x38c) = 0;
  FUN_144a5dc74(param_1 + 0x72);
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 2;
  return param_1;
}



// FUNCTION 14596f8c0 FUN_14596f8c0 body=106 status=ok
// SIG undefined FUN_14596f8c0(void)

undefined8 * FUN_14596f8c0(undefined8 *param_1)

{
  FUN_140ea08d0();
  *param_1 = &PTR_FUN_14ae58370;
  param_1[5] = &PTR_FUN_14ae586e0;
  *(undefined4 *)(param_1 + 0x65) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x32c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x32e) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  FUN_140e2f50a(param_1,4);
  FUN_141266e28(param_1,0);
  return param_1;
}



// FUNCTION 14596f92a FUN_14596f92a body=228 status=ok
// SIG undefined FUN_14596f92a(void)

longlong * FUN_14596f92a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1471a8428;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14596fa10 FUN_14596fa10 body=96 status=ok
// SIG undefined FUN_14596fa10(void)

ulonglong FUN_14596fa10(longlong param_1)

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
LAB_14596fa53:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14596fa53;
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



// FUNCTION 14596fa70 FUN_14596fa70 body=137 status=ok
// SIG undefined FUN_14596fa70(void)

void FUN_14596fa70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    FUN_144a7cc9e(param_1 + 0x128,*(undefined4 *)(param_2 + 0xe0));
    if (*(int *)(param_1 + 0x130) == *(int *)(param_1 + 0x15c)) {
      FUN_14596fafa(param_1,1);
      lVar1 = FUN_14479d2ce(param_1 + 0x10);
      if (lVar1 != 0) {
        lVar2 = FUN_1403ca142();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          FUN_140457ffc(lVar1 + 0x668,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14596fafa FUN_14596fafa body=573 status=ok
// SIG undefined FUN_14596fafa(void)

void FUN_14596fafa(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_a8 [47];
  char local_79;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar12 = *(longlong **)(param_1 + 0x20);
  local_79 = param_2;
  if (plVar12 != (longlong *)0x0) {
    iVar8 = (int)plVar12[1];
    do {
      if (iVar8 == 0) goto LAB_14596fc54;
      LOCK();
      iVar6 = (int)plVar12[1];
      bVar14 = iVar8 == iVar6;
      if (bVar14) {
        *(int *)(plVar12 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar14);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      FUN_14101cf30(lVar4,&local_58);
      if ((longlong)local_50 == 0) {
        local_50 = 0;
      }
      else {
        plVar11 = local_58 + (longlong)local_50 * 2;
        local_78 = param_1 + 0x60;
        plVar13 = local_58;
        local_70 = plVar12;
        do {
          puVar5 = (undefined8 *)*plVar13;
          plVar12 = (longlong *)plVar13[1];
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          if (*(int *)((longlong)puVar5 + 0x14) == 0) {
            local_68 = *puVar5;
            local_60 = (longlong *)puVar5[1];
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            uVar9 = FUN_145ce2ae6(lVar4,&local_68);
            plVar1 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_60 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if ((*(char *)(puVar5 + 3) == '\0') &&
               (cVar7 = FUN_14596fde6(lVar4,uVar9), cVar7 != '\0')) {
              if ((local_79 == '\0') && (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c))) {
                lVar10 = *(longlong *)(param_1 + 0x68);
                if (*(longlong *)(param_1 + 0x68) == 0) {
                  lVar10 = local_78;
                }
                iVar8 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & uVar9) * 4);
                if (iVar8 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8 * 0xc) == uVar9)
                    goto LAB_14596fb9d;
                    iVar8 = *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8 * 0xc + 4);
                  } while (iVar8 != -1);
                }
              }
              FUN_14596fd38(param_1,uVar9);
            }
          }
LAB_14596fb9d:
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          plVar13 = plVar13 + 2;
          plVar12 = local_70;
        } while (plVar13 != plVar11);
      }
      FUN_14101cee4(local_58,local_50);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    LOCK();
    plVar13 = plVar12 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_14596fc54:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596fd38 FUN_14596fd38 body=172 status=ok
// SIG undefined FUN_14596fd38(void)

void FUN_14596fd38(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_218 [32];
  longlong local_1f8 [3];
  undefined1 local_1e0 [176];
  undefined1 local_130 [264];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_14596feca(param_1,local_1e0,param_2);
  if (local_28 == 1) {
    local_1f8[0] = 0;
    local_1f8[1] = 0;
    FUN_1407c869a(local_130,local_1f8,0);
    FUN_1459700b0(param_1,param_2,local_1f8);
    if (local_1f8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 & 1) != 0) {
    FUN_141072d6a(local_1e0);
  }
  if ((local_20 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14596fde6 FUN_14596fde6 body=227 status=ok
// SIG undefined FUN_14596fde6(void)

undefined4 FUN_14596fde6(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145e1aa6e(param_1,&local_30);
  if (local_30 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    local_40 = *local_30;
    plVar3 = (longlong *)local_30[1];
    local_38 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      uVar4 = FUN_146179702(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      uVar4 = FUN_146179702(param_1,param_2);
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
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596feca FUN_14596feca body=234 status=ok
// SIG undefined FUN_14596feca(void)

longlong FUN_14596feca(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0x1e0), lVar1 != 0)) &&
       (lVar2 = *(longlong *)(lVar1 + 0x30), lVar2 != 0)) {
      lVar1 = *(longlong *)(lVar1 + 0x68);
      lVar3 = FUN_14130c5c8();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) && (lVar1 != 0))
         && (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
        FUN_140ceec26(lVar1,local_34,param_3);
        FUN_14596ffb6(lVar2,param_2,local_34);
        goto LAB_14596ff86;
      }
    }
  }
  *(undefined1 *)(param_2 + 0x1b8) = 0;
LAB_14596ff86:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14596ffb6 FUN_14596ffb6 body=249 status=ok
// SIG undefined FUN_14596ffb6(void)

longlong FUN_14596ffb6(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  int local_50 [6];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1413fa72a(param_1,local_50);
  if ((((local_50[0] != DAT_14c9485f0) && (*(longlong *)(param_1 + 0x1b0) != 0)) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
    local_54 = FUN_140b9fef0(lVar1,param_3,0);
    lVar1 = FUN_140b9ffa8(param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_14130c6ae();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_1413fa67a(lVar1,param_2,local_50);
        goto LAB_145970072;
      }
    }
  }
  *(undefined1 *)(param_2 + 0x1b8) = 0;
LAB_145970072:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459700b0 FUN_1459700b0 body=351 status=ok
// SIG undefined FUN_1459700b0(void)

void FUN_1459700b0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = *(longlong **)(param_1 + 0x20);
  if (plVar8 == (longlong *)0x0) {
LAB_1459701b3:
    bVar9 = true;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_1459701b3;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_145e1aa6e(*(longlong *)(param_1 + 0x18),&local_48);
      if ((local_48 != (undefined8 *)0x0) && (*(int *)((longlong)local_48 + 0x14) != 0)) {
        uVar6 = FUN_145bd65c8(param_1);
        lVar7 = FUN_14127aa70(uVar6,param_2);
        if (lVar7 != 0) {
          local_58 = *local_48;
          local_50 = (longlong *)local_48[1];
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          FUN_145970210(lVar7,&local_58,param_3);
          plVar2 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar3 = (int *)((longlong)plVar2 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
        }
      }
      bVar9 = false;
      goto LAB_145970176;
    }
    bVar9 = false;
  }
  local_48 = (undefined8 *)0x0;
  plStack_40 = (longlong *)0x0;
LAB_145970176:
  plVar2 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (!bVar9) {
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145970210 FUN_145970210 body=470 status=ok
// SIG undefined FUN_145970210(void)

void FUN_145970210(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(param_1 + 0xe0);
  local_58 = (longlong *)*param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_50 = plVar5;
  }
  uVar6 = (**(code **)(*local_58 + 0x40))();
  iVar7 = FUN_140b6c796(plVar3,uVar6,&local_58);
  plVar1 = local_50;
  if (iVar7 == -1) {
    lVar13 = 0;
  }
  else {
    lVar13 = (longlong)iVar7 * 0x28 + *plVar3;
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (lVar13 != 0) {
    iVar7 = *(int *)(lVar13 + 0x18);
    if (iVar7 == (int)param_3[1]) {
      if (1 < iVar7) {
        lVar8 = 0;
        while( true ) {
          uVar9 = *(ushort *)(*(longlong *)(lVar13 + 0x10) + lVar8);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)(*param_3 + lVar8);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_1459702d4;
LAB_14597035d:
          lVar8 = lVar8 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_14597035d;
        }
        if (uVar9 != uVar11) goto LAB_1459702b3;
      }
      goto LAB_1459702d4;
    }
    if ((int)param_3[1] + iVar7 == 1) goto LAB_1459702d4;
  }
LAB_1459702b3:
  local_58 = param_2;
  local_50 = param_3;
  FUN_145970498(plVar3,local_44);
  FUN_1459703e8(param_1);
LAB_1459702d4:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459703e8 FUN_1459703e8 body=175 status=ok
// SIG undefined FUN_1459703e8(void)

void FUN_1459703e8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_140e350f2();
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6f32(lVar1);
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x68);
      goto LAB_145970420;
    }
  }
  lVar1 = 0;
LAB_145970420:
  uVar2 = FUN_140e350f2(param_1);
  lVar3 = FUN_14128aaf8(uVar2);
  if ((lVar1 != 0) && (lVar3 != 0)) {
    FUN_140ceec26(lVar1,local_24,*(undefined4 *)(param_1 + 0x10));
    if (-1 < local_24[0]) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_140ceec8e(lVar3,local_40,local_24);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145970498 FUN_145970498 body=378 status=ok
// SIG undefined FUN_145970498(void)

undefined4 * FUN_145970498(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145777f42(param_1,local_48);
  FUN_145970614(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  plVar2 = (longlong *)*local_40;
  plVar3 = (longlong *)local_40[1];
  if (plVar3 == (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar2 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar5 = (**(code **)(*plVar2 + 0x40))();
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
  local_58 = 0;
  cVar4 = FUN_145778036(param_1,uVar5,local_40,&local_4c);
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar6 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x24) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140b749d6(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145970614 FUN_145970614 body=114 status=ok
// SIG undefined FUN_145970614(void)

undefined8 * FUN_145970614(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14597068c FUN_14597068c body=130 status=ok
// SIG undefined FUN_14597068c(void)

void FUN_14597068c(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140f67fee(uVar2,&local_28);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),&local_28);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459707fe FUN_1459707fe body=139 status=ok
// SIG undefined FUN_1459707fe(void)

void FUN_1459707fe(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*param_2 != DAT_14cbdf040) {
      lVar2 = FUN_140391552(param_1);
      if (lVar2 != 0) {
        uVar3 = FUN_14001cc68(0x38,0x10);
        FUN_14597088a(uVar3,lVar1 + 0x230,*param_2);
        FUN_14039144e(lVar2,uVar3);
      }
    }
    FUN_14129c92c(param_1);
    return;
  }
  return;
}



// FUNCTION 14597088a FUN_14597088a body=126 status=ok
// SIG undefined FUN_14597088a(void)

undefined8 * FUN_14597088a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b9cac10;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  param_1[6] = param_3;
  return param_1;
}



// FUNCTION 145970908 FUN_145970908 body=9 status=ok
// SIG undefined FUN_145970908(void)

void FUN_145970908(longlong param_1)

{
  FUN_145970912(param_1 + 0x10);
  return;
}



// FUNCTION 145970912 FUN_145970912 body=87 status=ok
// SIG undefined FUN_145970912(void)

void FUN_145970912(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b277ac0;
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b258290;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145970965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145970970 FUN_145970970 body=221 status=ok
// SIG undefined FUN_145970970(void)

longlong FUN_145970970(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  code *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf6528 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1463f21ac;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147c471c3;
    local_40 = FUN_1463f21b1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/Engine",L"PendingNetGame",&DAT_14caf6528,&DAT_147c471c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf6528;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145970a54 FUN_145970a54 body=221 status=ok
// SIG undefined FUN_145970a54(void)

longlong FUN_145970a54(void)

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
  if (DAT_14caf2818 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147be3c59;
    local_40 = &LAB_145c64fb3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1b8;
    FUN_14081cfa3(L"/Script/Engine",L"NetworkMetricsDatabase",&DAT_14caf2818,&DAT_147be3c58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2818;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145970b3c FUN_145970b3c body=58 status=ok
// SIG undefined FUN_145970b3c(void)

void FUN_145970b3c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1407bb416();
  FUN_145970b76(uVar3,*(undefined8 *)(param_1 + 0x10));
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145970b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145970b76 FUN_145970b76 body=140 status=ok
// SIG undefined FUN_145970b76(void)

void FUN_145970b76(LPCRITICAL_SECTION param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  EnterCriticalSection(param_1);
  local_20 = &local_28;
  FUN_145970c40(param_1 + 1);
  FUN_14089e7f6(param_1,2,local_28);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  lVar1 = local_28;
  if (local_28 != 0) {
    FUN_145970c04(local_28);
    FUN_1400020a8(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145970c04 FUN_145970c04 body=59 status=ok
// SIG undefined FUN_145970c04(void)

void FUN_145970c04(longlong *param_1)

{
  FUN_1407bb5c3(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145970c40 FUN_145970c40 body=222 status=ok
// SIG undefined FUN_145970c40(void)

void FUN_145970c40(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 145970d1e FUN_145970d1e body=40 status=ok
// SIG undefined FUN_145970d1e(void)

undefined8 FUN_145970d1e(undefined8 param_1,int param_2)

{
  FUN_145970d46();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145970d46 FUN_145970d46 body=214 status=ok
// SIG undefined FUN_145970d46(void)

void FUN_145970d46(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaaa450;
  FUN_145970f84(param_1 + 0x48,param_1[0x48]);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x3a);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x2f);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x24);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145970e1c(param_1);
  return;
}



// FUNCTION 145970e1c FUN_145970e1c body=72 status=ok
// SIG undefined FUN_145970e1c(void)

void FUN_145970e1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaa8790;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_145970ef4(param_1 + 0x13);
  FUN_145970e64(param_1);
  return;
}



// FUNCTION 145970e64 FUN_145970e64 body=90 status=ok
// SIG undefined FUN_145970e64(void)

void FUN_145970e64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaa8280;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145970ebe(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145970ebe FUN_145970ebe body=53 status=ok
// SIG undefined FUN_145970ebe(void)

void FUN_145970ebe(longlong *param_1)

{
  FUN_145970fba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145970ef4 FUN_145970ef4 body=53 status=ok
// SIG undefined FUN_145970ef4(void)

void FUN_145970ef4(longlong *param_1)

{
  FUN_145970f2a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145970f2a FUN_145970f2a body=90 status=ok
// SIG undefined FUN_145970f2a(void)

void FUN_145970f2a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145970f84 FUN_145970f84 body=54 status=ok
// SIG undefined FUN_145970f84(void)

void FUN_145970f84(undefined8 param_1,longlong *param_2)

{
  if (param_2 == (longlong *)0x0) {
    return;
  }
  FUN_147cec424(param_2 + 5);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 145970fba FUN_145970fba body=346 status=ok
// SIG undefined FUN_145970fba(void)

void FUN_145970fba(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145971116 FUN_145971116 body=40 status=ok
// SIG undefined FUN_145971116(void)

undefined8 FUN_145971116(undefined8 param_1,int param_2)

{
  FUN_14597113e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597113e FUN_14597113e body=278 status=ok
// SIG undefined FUN_14597113e(void)

void FUN_14597113e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac02b20;
  param_1[5] = &PTR_FUN_14ac02dd0;
  param_1[7] = &PTR_FUN_14ac02e20;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1459712a2(param_1 + 0x1b);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145971272(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1459712d8(param_1 + 0xb);
  FUN_14597130d(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1410c966c(param_1 + 7);
  FUN_145971254(param_1);
  return;
}



// FUNCTION 145971254 FUN_145971254 body=30 status=ok
// SIG undefined FUN_145971254(void)

void FUN_145971254(longlong param_1)

{
  FUN_140af926c(param_1 + 0x28);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145971272 FUN_145971272 body=47 status=ok
// SIG undefined FUN_145971272(void)

void FUN_145971272(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_143851c62(param_1);
      param_1 = param_1 + 0x180;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459712a2 FUN_1459712a2 body=53 status=ok
// SIG undefined FUN_1459712a2(void)

void FUN_1459712a2(longlong *param_1)

{
  FUN_14597135a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459712d8 FUN_1459712d8 body=53 status=ok
// SIG undefined FUN_1459712d8(void)

void FUN_1459712d8(longlong *param_1)

{
  FUN_1459713b4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14597130d FUN_14597130d body=77 status=ok
// SIG undefined FUN_14597130d(void)

void FUN_14597130d(longlong param_1,int param_2)

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



// FUNCTION 14597135a FUN_14597135a body=90 status=ok
// SIG undefined FUN_14597135a(void)

void FUN_14597135a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1459713b4 FUN_1459713b4 body=353 status=ok
// SIG undefined FUN_1459713b4(void)

void FUN_1459713b4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145971516 FUN_145971516 body=378 status=ok
// SIG undefined FUN_145971516(void)

void FUN_145971516(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_178 [32];
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x2000000000;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1413fa8fe(*(longlong *)(param_2 + 0x40),local_158);
    lVar6 = (longlong)(int)local_50;
    puVar4 = local_158;
    if (local_58 != (undefined1 *)0x0) {
      puVar4 = local_58;
    }
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(puVar4 + lVar5);
        if (lVar2 != 0) {
          if (*(char *)(lVar2 + 0xb0) != '\x01') {
            FUN_140f26c7f();
            if (*param_1 == DAT_14cb710c0) {
              uVar3 = FUN_145971716(lVar2 + 0x88);
              iVar1 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
                FUN_145971692(param_3,iVar1);
              }
              *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
            }
            if (*(char *)(lVar2 + 0xb0) == '\0') goto LAB_1459715fd;
          }
          FUN_140f26c7f();
          if (*param_1 == DAT_14cb710c8) {
            uVar3 = FUN_145971716(lVar2 + 0x88);
            iVar1 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
              FUN_145971692(param_3,iVar1);
            }
            *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
          }
        }
LAB_1459715fd:
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145971692 FUN_145971692 body=132 status=ok
// SIG undefined FUN_145971692(void)

void FUN_145971692(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145971716 FUN_145971716 body=191 status=ok
// SIG undefined FUN_145971716(void)

longlong FUN_145971716(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1411675e0();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1459717d6 FUN_1459717d6 body=321 status=ok
// SIG undefined FUN_1459717d6(void)

char * FUN_1459717d6(longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x180))();
  iVar4 = (**(code **)*plVar5)(plVar5);
  if (0 < iVar4) {
    uVar6 = iVar4 + 1;
    do {
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_50,uVar6 - 2);
      (**(code **)(*local_50 + 0x88))(local_50,param_2,param_3,param_4);
      if (*param_2 != '\0') {
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_48 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_48 + 0x10))(local_48);
            }
          }
        }
        goto LAB_1459718b2;
      }
      FUN_14493db24(param_2);
      plVar3 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  *param_2 = '\0';
  param_2[0x20] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  param_2[0xb4] = '\0';
LAB_1459718b2:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145971918 FUN_145971918 body=85 status=ok
// SIG undefined FUN_145971918(void)

undefined1 * FUN_145971918(longlong param_1,undefined1 *param_2)

{
  if ((*(byte *)(param_1 + 0x39) & 8) == 0) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_14597196e(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 14597196e FUN_14597196e body=30 status=ok
// SIG undefined FUN_14597196e(void)

undefined8 FUN_14597196e(undefined8 param_1,undefined8 param_2)

{
  FUN_1407c952c();
  return param_2;
}



// FUNCTION 14597198c FUN_14597198c body=220 status=ok
// SIG undefined FUN_14597198c(void)

undefined4 * FUN_14597198c(undefined4 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *param_1 = (undefined4)DAT_14c8464e0;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = uVar6;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x4130000000000000;
  *(undefined8 *)(param_1 + 10) = 0x4130000000000000;
  *(undefined8 *)(param_1 + 0xc) = 0x4130000000000000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x4121000000000000;
  *(undefined8 *)(param_1 + 0x12) = 0x411e000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x40808f227be81608;
  FUN_145971a68(param_1 + 0x18);
  iVar2 = param_1[0x22];
  param_1[0x22] = iVar2 + 1U;
  if ((uint)param_1[0x23] < iVar2 + 1U) {
    FUN_140042f8e(param_1 + 0x20,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 145971a68 FUN_145971a68 body=60 status=ok
// SIG undefined FUN_145971a68(void)

void FUN_145971a68(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1400430e8(param_1,iVar1);
  }
  FUN_140042f74((longlong)iVar1 * 8 + *param_1,1);
  return;
}



// FUNCTION 145971aa4 FUN_145971aa4 body=162 status=ok
// SIG undefined FUN_145971aa4(void)

void FUN_145971aa4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c8))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145971b50 FUN_145971b50 body=115 status=ok
// SIG undefined FUN_145971b50(void)

undefined8 * FUN_145971b50(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1413fa9ee();
  *param_1 = &PTR_FUN_14a9e61a0;
  FUN_1400b22c2(local_28,"Replication");
  FUN_1413fa9ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145971c0a FUN_145971c0a body=27 status=ok
// SIG undefined FUN_145971c0a(void)

void FUN_145971c0a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_145971c26();
  uVar1 = FUN_140c833a4();
  *param_2 = uVar1;
  return;
}



// FUNCTION 145971c26 FUN_145971c26 body=78 status=ok
// SIG undefined FUN_145971c26(void)

void FUN_145971c26(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_145922730();
  *param_2 = uVar1;
  param_2[0x10] = 0;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0x48;
  *(undefined1 *)(param_2 + 0x14) = 1;
  *(byte *)((longlong)param_2 + 0xa2) = *(byte *)((longlong)param_2 + 0xa2) | 4;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 145971c74 FUN_145971c74 body=316 status=ok
// SIG undefined FUN_145971c74(void)

void FUN_145971c74(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar2 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar1 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_145971db2(plVar2,puVar1);
  *param_3 = uVar3;
  FUN_1409ed859(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145971db2 FUN_145971db2 body=94 status=ok
// SIG undefined FUN_145971db2(void)

void FUN_145971db2(undefined8 param_1,byte *param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c601cc(&local_20,param_1);
  *param_2 = local_1c ^ 1;
  if (local_1c == 0) {
    local_20 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20);
  }
  return;
}



// FUNCTION 145971e12 FUN_145971e12 body=316 status=ok
// SIG undefined FUN_145971e12(void)

void FUN_145971e12(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar2 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar1 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_145971f50(plVar2,puVar1);
  *param_3 = uVar3;
  FUN_1409ed859(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145971f50 FUN_145971f50 body=94 status=ok
// SIG undefined FUN_145971f50(void)

void FUN_145971f50(undefined8 param_1,byte *param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1411a0942(&local_20,param_1);
  *param_2 = local_1c ^ 1;
  if (local_1c == 0) {
    local_20 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20);
  }
  return;
}



// FUNCTION 145971fb0 FUN_145971fb0 body=124 status=ok
// SIG undefined FUN_145971fb0(void)

undefined4 FUN_145971fb0(longlong *param_1,byte param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  
  if ((char)param_1[0x2f] == '\x03') {
    uVar1 = (ulonglong)param_2;
    uVar3 = thunk_FUN_1456fac0c((longlong)param_1 + uVar1 * 0x40 + 0x2604,param_3);
    FUN_1401861f4(param_1 + uVar1 * 8 + 0x4bd,(int)param_1[uVar1 * 8 + 0x4c1]);
    cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar2 == '\0') {
      *(short *)((longlong)param_1 + (ulonglong)param_2 * 8 + 0x2752) =
           (short)param_1[uVar1 * 8 + 0x4c1];
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14597202c FUN_14597202c body=40 status=ok
// SIG undefined FUN_14597202c(void)

undefined8 FUN_14597202c(undefined8 param_1,int param_2)

{
  FUN_145972054();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145972054 FUN_145972054 body=555 status=ok
// SIG undefined FUN_145972054(void)

void FUN_145972054(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14abadb10;
  param_1[0x72] = &PTR_FUN_14abae2e0;
  if (param_1[0xbb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (param_1[0xb3] != 0) {
    FUN_1400020a8();
  }
  FUN_14597231a(param_1 + 0xab);
  FUN_1459722b7(param_1[0xa9],*(undefined4 *)(param_1 + 0xaa));
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  FUN_1459722e4(param_1 + 0x9f);
  plVar3 = (longlong *)param_1[0x9e];
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
  FUN_145972351(param_1[0x9a],*(undefined4 *)(param_1 + 0x9b));
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  FUN_14597227f(param_1[0x98],*(undefined4 *)(param_1 + 0x99));
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x93));
  FUN_14597227f(param_1[0x91],*(undefined4 *)(param_1 + 0x92));
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  FUN_145972389(param_1[0x8f],*(undefined4 *)(param_1 + 0x90));
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x8e];
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
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14597227f FUN_14597227f body=56 status=ok
// SIG undefined FUN_14597227f(void)

void FUN_14597227f(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459722b7 FUN_1459722b7 body=45 status=ok
// SIG undefined FUN_1459722b7(void)

void FUN_1459722b7(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1459722e4 FUN_1459722e4 body=53 status=ok
// SIG undefined FUN_1459722e4(void)

void FUN_1459722e4(longlong *param_1)

{
  FUN_145972452();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14597231a FUN_14597231a body=55 status=ok
// SIG undefined FUN_14597231a(void)

void FUN_14597231a(longlong *param_1)

{
  FUN_1459723d6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145972351 FUN_145972351 body=56 status=ok
// SIG undefined FUN_145972351(void)

void FUN_145972351(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145972389 FUN_145972389 body=77 status=ok
// SIG undefined FUN_145972389(void)

void FUN_145972389(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x40);
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
      plVar4 = plVar4 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459723d6 FUN_1459723d6 body=123 status=ok
// SIG undefined FUN_1459723d6(void)

void FUN_1459723d6(longlong param_1,int param_2)

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



// FUNCTION 145972452 FUN_145972452 body=378 status=ok
// SIG undefined FUN_145972452(void)

void FUN_145972452(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459725ce FUN_1459725ce body=54 status=ok
// SIG undefined FUN_1459725ce(void)

undefined1 FUN_1459725ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145972604(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 145972604 FUN_145972604 body=104 status=ok
// SIG undefined FUN_145972604(void)

undefined4 * FUN_145972604(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar5 = *(longlong *)(param_2 + 4);
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 4);
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 4) = lVar5;
  lVar5 = *(longlong *)(param_2 + 6);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 6);
    }
  }
  *(longlong *)(param_1 + 6) = lVar5;
  return param_1;
}



// FUNCTION 14597266c FUN_14597266c body=148 status=ok
// SIG undefined FUN_14597266c(void)

bool FUN_14597266c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145972704 FUN_145972704 body=149 status=ok
// SIG undefined FUN_145972704(void)

void FUN_145972704(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) && (lVar1 = FUN_1400d6ce6(), lVar1 != 0)
     ) {
    plVar2 = (longlong *)FUN_145940bc4(param_1);
    lVar4 = *plVar2;
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x1f0));
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x1f0));
    if ((longlong)*(int *)(lVar4 + 0x40) != 0) {
      lVar3 = (longlong)*(int *)(lVar4 + 0x40) * 0x448;
      lVar4 = *(longlong *)(lVar4 + 0x38) + 0x1f0;
      do {
        FUN_140c3e4c2(lVar1,lVar4);
        lVar4 = lVar4 + 0x448;
        lVar3 = lVar3 + -0x448;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 14597279a FUN_14597279a body=29 status=ok
// SIG undefined FUN_14597279a(void)

void FUN_14597279a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1459727b8 FUN_1459727b8 body=59 status=ok
// SIG undefined FUN_1459727b8(void)

undefined8 * FUN_1459727b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c0a00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459727f4 FUN_1459727f4 body=194 status=ok
// SIG undefined FUN_1459727f4(void)

void FUN_1459727f4(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1405f1eac();
  uVar5 = FUN_1447210f0(param_1);
  FUN_1408b794c(&local_28,uVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_1459728b8(local_28 + 0x38,&local_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459728b8 FUN_1459728b8 body=244 status=ok
// SIG undefined FUN_1459728b8(void)

undefined8 FUN_1459728b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b9e1c70;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_140c57f26;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459729ae FUN_1459729ae body=40 status=ok
// SIG undefined FUN_1459729ae(void)

undefined8 FUN_1459729ae(undefined8 param_1,int param_2)

{
  FUN_1459729d6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459729d6 FUN_1459729d6 body=79 status=ok
// SIG undefined FUN_1459729d6(void)

void FUN_1459729d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ade70a0;
  param_1[5] = &PTR_LAB_14ade7340;
  FUN_145972a26(param_1 + 9);
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145972a26 FUN_145972a26 body=149 status=ok
// SIG undefined FUN_145972a26(void)

void FUN_145972a26(longlong param_1)

{
  FUN_145972abb(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_145972abb(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145972abb FUN_145972abb body=49 status=ok
// SIG undefined FUN_145972abb(void)

void FUN_145972abb(longlong param_1,int param_2)

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



// FUNCTION 145972aec FUN_145972aec body=356 status=ok
// SIG undefined FUN_145972aec(void)

undefined4 * FUN_145972aec(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145972cf4(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  puVar1[1] = 0;
  *(int *)(local_40 + 3) = (int)puVar1[2];
  *(undefined4 *)((longlong)local_40 + 0x1c) = *(undefined4 *)((longlong)puVar1 + 0x14);
  puVar1[2] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145972c52(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1413fe0a8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145972c52 FUN_145972c52 body=161 status=ok
// SIG undefined FUN_145972c52(void)

undefined8 FUN_145972c52(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          if (plVar8[2] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_1470a4f40(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 145972cf4 FUN_145972cf4 body=231 status=ok
// SIG undefined FUN_145972cf4(void)

int * FUN_145972cf4(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145972ddc FUN_145972ddc body=651 status=ok
// SIG undefined FUN_145972ddc(void)

void FUN_145972ddc(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[0] = 0;
  local_54 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_78;
  uVar1 = FUN_14477b664(uStack_70);
  local_88 = FUN_14477b664(uVar1);
  local_80 = local_68;
  local_98 = &local_90;
  FUN_145973068(local_20,local_28,puVar2,local_60);
  if ((lStack_30 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lStack_30 + 0x50));
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145973068 FUN_145973068 body=660 status=ok
// SIG undefined FUN_145973068(void)

void FUN_145973068(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined ***local_98;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 == (longlong *)0x0) goto LAB_145973180;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x178) == 0)) goto LAB_145973180;
  lVar4 = FUN_14041aabe();
  lVar3 = *(longlong *)(lVar3 + 0x178);
  if ((lVar3 == 0) ||
     ((((lVar4 == 0 || (lVar6 = *(longlong *)(lVar3 + 0x10), lVar6 == 0)) ||
       (*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38))) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)))) goto LAB_145973180;
  lVar4 = param_5[1];
  if (lVar4 == 0) {
    uVar5 = FUN_1405b1a32();
    lVar4 = FUN_14477b664(uVar5);
    param_5[1] = lVar4;
  }
  lVar6 = param_5[2];
  if (lVar6 == 0) {
    if ((*param_5 != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if (plVar1 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 != '\0') {
          uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar6 = FUN_144aff482(uVar5,param_5);
          param_5[2] = lVar6;
          if (lVar6 != 0) {
            lVar4 = param_5[1];
            goto LAB_14597321b;
          }
          goto LAB_145973131;
        }
      }
      param_5[2] = 0;
    }
LAB_145973131:
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_40 = 0;
    uStack_48 = 0;
  }
  else {
LAB_14597321b:
    if (lVar4 == 0) {
      uVar5 = FUN_1405b1a32();
      lVar4 = FUN_14477b664(uVar5);
      param_5[1] = lVar4;
      lVar6 = param_5[2];
      if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*param_5 != 0)) {
        plVar1 = *(longlong **)(lVar4 + 0xb8);
        if (plVar1 == (longlong *)0x0) {
LAB_1459732f8:
          lVar6 = 0;
        }
        else {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 == '\0') goto LAB_1459732f8;
          uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar6 = FUN_144aff482(uVar5,param_5);
        }
        param_5[2] = lVar6;
      }
    }
    local_88 = &PTR_FUN_14a171dc0;
    FUN_142b15db4(&local_80,lVar6 + 8);
    local_70 = *(undefined8 *)(lVar6 + 0x18);
    uStack_68 = *(undefined8 *)(lVar6 + 0x20);
    local_60 = *(undefined8 *)(lVar6 + 0x28);
    uStack_58 = *(undefined8 *)(lVar6 + 0x30);
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar6 + 0x38));
    uStack_48 = *(undefined8 *)(lVar6 + 0x40);
    local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(lVar6 + 0x48));
  }
  local_88 = &PTR_FUN_14acb7da0;
  local_98 = &local_88;
  FUN_1459732fe(lVar3,param_2,param_3,param_4);
LAB_145973180:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459732fe FUN_1459732fe body=342 status=ok
// SIG undefined FUN_1459732fe(void)

void FUN_1459732fe(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined **local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_90 = 0;
  uStack_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_80 = &PTR_FUN_14acb7da0;
  local_40 = 0;
  local_38 = 0;
  local_b8 = *param_3;
  local_b0 = *(undefined4 *)(param_3 + 1);
  local_a8 = param_3[2];
  local_c0 = param_2;
  uVar1 = FUN_14477b664(param_3[3]);
  local_a0 = FUN_14477b664(uVar1);
  local_98 = param_3[4];
  FUN_144a82394(&local_90,param_3 + 5);
  if (*(char *)(param_5 + 2) == '\0') {
    local_70 = 0;
    local_78 = param_5[1];
  }
  local_48 = *(undefined4 *)(param_5 + 7);
  local_68 = param_5[3];
  uStack_60 = param_5[4];
  local_58 = param_5[5];
  uStack_50 = param_5[6];
  local_38 = *(undefined4 *)(param_5 + 9);
  local_40 = param_5[8];
  uStack_88 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5ef80);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_c0);
  FUN_145973456(&local_c0);
  *param_5 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_5 + 1);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


