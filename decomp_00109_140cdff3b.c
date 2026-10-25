// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140cdff3b FUN_140cdff3b body=469 status=ok
// SIG undefined FUN_140cdff3b(void)

undefined8 FUN_140cdff3b(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(int *)(param_2 + 0x10) == 0) || (iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0)) ||
     (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
LAB_140ce00e5:
    local_48 = DAT_14c948620;
    local_50 = DAT_14c948618;
  }
  else {
    lVar2 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 5)) goto LAB_140ce00e5;
    local_48 = *(undefined4 *)(lVar2 + 0x38);
    local_50 = *(undefined8 *)(lVar2 + 0x30);
  }
  FUN_1408226d0(&local_50,&local_40,1);
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  if (((*(int *)(param_2 + 0x10) != 0) && (iVar1 = *(int *)(param_2 + 0x14), iVar1 != 0)) &&
     (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
    lVar2 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 != 1) && (3 < iVar1)) {
      local_68 = *(undefined4 *)(lVar2 + 0x2c);
      local_70 = *(undefined8 *)(lVar2 + 0x24);
      goto LAB_140ce0034;
    }
  }
  local_68 = DAT_14c948620;
  local_70 = DAT_14c948618;
LAB_140ce0034:
  FUN_1408226d0(&local_70,&local_60,1);
  puVar4 = local_60;
  if (local_58 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_30,L"%ls_%ls",puVar4,puVar3);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(param_1,iVar1,local_30,1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140ce011a FUN_140ce011a body=179 status=ok
// SIG undefined FUN_140ce011a(void)

undefined8 * FUN_140ce011a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ac1c72(param_1,uVar1);
  *param_1 = &PTR_FUN_14b49cf30;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x3f80000000000000;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0xff00;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x17] = 0xbf800000;
  *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
  *(byte *)((longlong)param_1 + 0xc4) = *(byte *)((longlong)param_1 + 0xc4) & 4 | 0x10;
  return param_1;
}



// FUNCTION 140ce01e8 FUN_140ce01e8 body=100 status=ok
// SIG undefined FUN_140ce01e8(void)

void FUN_140ce01e8(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x18) != param_2) {
    *(char *)(param_1 + 0x18) = param_2;
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) {
          return;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar6 = iVar5 == iVar4;
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar6);
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_140ce024c(*(longlong *)(param_1 + 8),param_1);
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
                    /* WARNING: Could not recover jumptable at 0x000140ce0248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140ce024c FUN_140ce024c body=100 status=ok
// SIG undefined FUN_140ce024c(void)

void FUN_140ce024c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x50);
    lVar1 = (longlong)*(int *)(param_1 + 0x58) * 0x18;
    do {
      if (*plVar2 == param_2) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        if ((longlong)*(int *)(param_1 + 0x68) == 0) {
          return;
        }
        lVar1 = (longlong)*(int *)(param_1 + 0x68) * 0x18;
        do {
          FUN_140ce02b0();
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != 0);
        return;
      }
      plVar2 = plVar2 + 3;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 140ce02b0 FUN_140ce02b0 body=301 status=ok
// SIG undefined FUN_140ce02b0(void)

void FUN_140ce02b0(undefined8 param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar6;
  
  uVar2 = *(ulonglong *)(param_3 + 4);
  uVar3 = param_2[2];
  if ((uVar3 & uVar2) == 0) {
    if (((((((*(ulonglong *)(param_3 + 2) & param_2[1]) == 0) ||
           (*(char *)(*param_2 + 0x18) != '\x01')) || (param_3[1] == 0)) ||
         ((uVar1 = *param_3, (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)))) ||
        ((plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar6 == (longlong *)0x0 ||
         ((*(uint *)(plVar6 + 2) != param_3[1] || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))))
       || (lVar4 = *plVar6, lVar4 == 0)) {
      return;
    }
    *(ulonglong *)(param_3 + 4) = uVar3 | uVar2;
    param_2 = (longlong *)*param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 8);
    uVar5 = 0;
  }
  else {
    if (((*(ulonglong *)(param_3 + 2) & param_2[1]) != 0) && (*(char *)(*param_2 + 0x18) != '\0')) {
      return;
    }
    if (param_3[1] == 0) {
      return;
    }
    uVar1 = *param_3;
    if ((int)uVar1 < 0) {
      return;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return;
    }
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    if (*(uint *)(plVar6 + 2) != param_3[1]) {
      return;
    }
    if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
      return;
    }
    lVar4 = *plVar6;
    if (lVar4 == 0) {
      return;
    }
    *(ulonglong *)(param_3 + 4) = uVar2 & ~uVar3;
    param_2 = (longlong *)*param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 8);
    uVar5 = CONCAT71((int7)((ulonglong)*param_2 >> 8),1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140ce03d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,uVar5,lVar4,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 140ce03de FUN_140ce03de body=214 status=ok
// SIG undefined FUN_140ce03de(void)

longlong FUN_140ce03de(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0xa8) + 8);
  if (3 < bVar1) {
    if (bVar1 - 4 < 2) {
      if (param_2 == 0) {
        return 0;
      }
      uVar3 = FUN_144a7b040();
      plVar4 = (longlong *)FUN_144718840(param_2,uVar3);
      if (plVar4 == (longlong *)0x0) {
        return 0;
      }
      lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if (lVar5 == 0) {
        return 0;
      }
      cVar2 = *(char *)(*(longlong *)(param_1 + 0xa8) + 8);
      if (cVar2 != '\x05') {
        if (cVar2 != '\x04') {
          return 0;
        }
        return lVar5 + 0xf8;
      }
      return lVar5 + 0x120;
    }
    if (bVar1 != 6) {
      return 0;
    }
  }
  if (param_2 != 0) {
    uVar3 = FUN_1403ec9c0();
    plVar4 = (longlong *)FUN_144718840(param_2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0xa8) + 8);
      if (((ulonglong)bVar1 < 7) && ((0x4fU >> (bVar1 & 0x1f) & 1) != 0)) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        return lVar5 + *(longlong *)(&DAT_14b42aa38 + (ulonglong)bVar1 * 8);
      }
    }
  }
  return 0;
}



// FUNCTION 140ce04c2 FUN_140ce04c2 body=40 status=ok
// SIG undefined FUN_140ce04c2(void)

undefined8 FUN_140ce04c2(undefined8 param_1,int param_2)

{
  FUN_1408d57a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ce04ea FUN_140ce04ea body=40 status=ok
// SIG undefined FUN_140ce04ea(void)

undefined8 FUN_140ce04ea(undefined8 param_1,int param_2)

{
  FUN_140ce0512();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ce0512 FUN_140ce0512 body=504 status=ok
// SIG undefined FUN_140ce0512(void)

void FUN_140ce0512(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b2c4100;
  param_1[0x79] = &PTR_FUN_14b2c4770;
  param_1[0x7a] = &PTR_FUN_14b2c4790;
  param_1[0x7b] = &PTR_FUN_14b2c4830;
  param_1[0x7c] = &PTR_FUN_14b2c4880;
  FUN_1404d595a(param_1 + 0xbf,1);
  param_1[0xb9] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (*(int *)((longlong)param_1 + 0x5e4) != 0) {
    FUN_140115c12(param_1 + 0xbb,0);
  }
  param_1[0xba] = 0;
  if (param_1[0xbb] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb8] = 0;
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb2] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f4a8(param_1 + 0x97);
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x89],*(undefined4 *)(param_1 + 0x8a));
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x86],*(undefined4 *)(param_1 + 0x87));
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  param_1[0x7c] = &PTR_FUN_14b2c6a40;
  plVar2 = (longlong *)param_1[0x7e];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 140ce0712 FUN_140ce0712 body=653 status=ok
// SIG undefined FUN_140ce0712(void)

undefined8 * FUN_140ce0712(undefined8 *param_1)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a1d8bb0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3d4ccccd;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f99999a00000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3e4ccccd3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3c23d70a;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 100) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3c23d70a;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3e4ccccd3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  FUN_1446f470e(&local_50,L"AS_Launch_InAir",1);
  local_70 = (undefined8 *)0x0;
  local_68 = 1;
  FUN_1401b309e(&local_70,1,0);
  *local_70 = CONCAT44(uStack_4c,local_50);
  FUN_140798412(&local_78);
  param_1[0x14] = local_78;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  local_60 = local_70;
  local_58 = local_68;
  FUN_140ce09a0(param_1 + 0x15);
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_50,L"AS_Getup_Faceup",1);
  FUN_1446f470e(&uStack_48,L"AS_Getup_Facedown",1);
  local_70 = (undefined8 *)0x0;
  local_68 = 2;
  FUN_1401b309e(&local_70,2,0);
  *(undefined4 *)local_70 = local_50;
  *(undefined4 *)((longlong)local_70 + 4) = uStack_4c;
  *(undefined4 *)(local_70 + 1) = uStack_48;
  *(undefined4 *)((longlong)local_70 + 0xc) = uStack_44;
  FUN_14079839a(&local_80);
  param_1[0x1f] = local_80;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  local_60 = local_70;
  local_58 = local_68;
  FUN_140ce09a0(param_1 + 0x20);
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce09a0 FUN_140ce09a0 body=198 status=ok
// SIG undefined FUN_140ce09a0(void)

void FUN_140ce09a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_144732142(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_144869b4a(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_144a13f80(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce0a68 FUN_140ce0a68 body=2453 status=ok
// SIG undefined FUN_140ce0a68(void)

void FUN_140ce0a68(longlong param_1,longlong *param_2)

{
  double dVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  undefined4 *puVar19;
  char cVar20;
  longlong *plVar21;
  bool bVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  longlong local_f8;
  code *local_f0;
  code *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong local_d0 [6];
  longlong local_a0;
  undefined8 local_98;
  uint local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  float local_70;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  undefined4 uStack_69;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = param_2[0x8f];
  local_f8 = param_1;
  if (lVar2 == 0) goto LAB_140ce0fa7;
  lVar7 = param_2[0x87];
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = param_2[0x88];
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(lVar2);
  }
  uVar5 = FUN_1403ec9c0();
  lVar6 = FUN_144718840(lVar2,uVar5);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  if ((lVar7 == lVar2 && lVar8 == lVar6) || ((int)param_2[0xa2] == 0)) goto LAB_140ce0fa7;
  plVar13 = (longlong *)0x0;
  if (param_2[3] != 0) {
    plVar13 = (longlong *)param_2[4];
  }
  lVar7 = (**(code **)(*plVar13 + 0x20))();
  if ((((lVar7 == 0) || ((*(byte *)(lVar7 + 0x7c) & 1) == 0)) ||
      ((*(char *)(lVar7 + 0x90) == '\x01' && ((*(byte *)(lVar7 + 0x7c) & 2) == 0)))) ||
     (((lVar8 = FUN_1402179b4(param_2 + 0x95), lVar8 != 0 && (-1 < *(char *)(lVar8 + 0x18))) &&
      ((*(byte *)(lVar8 + 0x19) & 4) == 0)))) goto LAB_140ce0fa7;
  fVar24 = (float)(**(code **)(*param_2 + 0x140))(param_2,(*(byte *)(param_2 + 0x9b) & 0xfd) == 0);
  uVar23 = -(uint)(0.0 < *(float *)(param_2 + 0xab));
  fVar24 = fVar24 / (float)(~uVar23 & 0x3f800000 | (uint)*(float *)(param_2 + 0xab) & uVar23);
  if (((*(float *)(param_2 + 100) == 0.0) && (!NAN(*(float *)(param_2 + 100)))) &&
     ((fVar24 == 0.0 && (!NAN(fVar24))))) goto LAB_140ce0fa7;
  plVar13 = (longlong *)param_2[10];
  lVar6 = 0;
  if (plVar13 == (longlong *)0x0) {
LAB_140ce10be:
    plVar21 = (longlong *)0x0;
  }
  else {
    lVar9 = (**(code **)(*plVar13 + 8))(plVar13);
    lVar10 = FUN_14018fb44();
    if ((lVar10 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) goto LAB_140ce10be;
    plVar21 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30) {
      plVar21 = plVar13;
    }
  }
  local_e8 = (code *)0x0;
  local_e0 = 0x3002;
  local_d8 = 0;
  local_a0 = 0;
  local_98 = 0x200000000;
  local_8c = 0;
  bStack_6c = 0;
  bStack_6b = 0;
  bStack_6a = 0;
  uStack_69 = 0;
  local_90 = *(uint *)(lVar2 + 0xc);
  if ((int)local_90 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((local_90 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_90 >> 0x10) * 8);
  }
  iVar12 = *(int *)(lVar6 + 0x10);
  local_70 = fVar24;
  if (*(int *)(lVar6 + 0x10) == 0) {
    LOCK();
    iVar12 = DAT_14c964868 + 1;
    UNLOCK();
    iVar18 = DAT_14c964868 + 1;
    bVar22 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar12;
    if (bVar22) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar18);
    }
    LOCK();
    iVar12 = *(int *)(lVar6 + 0x10);
    bVar22 = iVar12 == 0;
    if (bVar22) {
      *(int *)(lVar6 + 0x10) = iVar18;
      iVar12 = 0;
    }
    UNLOCK();
    if (bVar22) {
      iVar12 = iVar18;
    }
  }
  local_88 = (undefined4)param_2[0x3f];
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x1fc);
  uStack_80 = (undefined4)param_2[0x40];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x204);
  local_78 = param_2[0x41];
  local_8c = iVar12;
  if (plVar21 == (longlong *)0x0) {
    pcVar11 = (code *)0x0;
  }
  else {
    puVar19 = &DAT_14c9485f0;
    if ((undefined4 *)plVar21[1] != (undefined4 *)0x0) {
      puVar19 = (undefined4 *)plVar21[1];
    }
    if (DAT_14c947fe0 == 0) {
      lVar6 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar6);
      DAT_14c947fe0 = lVar6;
    }
    FUN_140045924(DAT_14c947fe0,&local_f0,puVar19,1);
    pcVar11 = local_f0;
  }
  if (local_e8 != pcVar11) {
    local_d8 = 0;
  }
  local_e8 = pcVar11;
  if (local_d0 != param_2 + 0xb) {
    plVar13 = param_2 + 0xb;
    if ((longlong *)param_2[0x11] != (longlong *)0x0) {
      plVar13 = (longlong *)param_2[0x11];
    }
    FUN_1400709d4(local_d0,plVar13,(int)param_2[0x12],local_98._4_4_);
  }
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x18) < '\0') {
      bVar17 = *(byte *)(lVar8 + 0x19);
      if (((fVar24 == 0.0) && (!NAN(fVar24))) && ((bVar17 & 1) == 0)) goto LAB_140ce121e;
    }
    else {
LAB_140ce121e:
      bStack_6b = bStack_6b | 0x10;
      bVar17 = *(byte *)(lVar8 + 0x19);
    }
    if ((bVar17 & 2) == 0) {
      bStack_6a = bStack_6a | 1;
    }
    lVar6 = FUN_140ce13fe();
    if ((((*(byte *)(lVar8 + 0x19) & 4) == 0) ||
        (((fVar24 == 0.0 && (!NAN(fVar24))) && ((*(byte *)(lVar8 + 0x19) & 8) == 0)))) ||
       ((lVar6 != 0 && (*(char *)(lVar6 + 0x98) == '\x01')))) {
      bStack_6b = bStack_6b | 0x20;
    }
    if (*(longlong *)(lVar8 + 0x2a8) != 0) {
      lVar6 = FUN_1405831b2();
      if ((longlong)*(int *)(lVar6 + 0x78) != 0) {
        uVar14 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar6 + 0x70) + uVar14) == *(longlong *)(lVar8 + 0x2a8)) {
            iVar12 = (int)(uVar14 >> 3);
            if (iVar12 * -0x55555555 != -1) {
              uVar23 = (uint)CONCAT11((undefined1)uStack_69,bStack_6a) << 0x10 |
                       iVar12 * 0x55560000 + 0x20000U;
              bStack_6a = (byte)(uVar23 >> 0x10);
              uStack_69._0_1_ = (undefined1)(uVar23 >> 0x18);
            }
            break;
          }
          uVar14 = uVar14 + 0x18;
        } while ((longlong)*(int *)(lVar6 + 0x78) * 0x18 != uVar14);
      }
    }
  }
  if ((fVar24 == 0.0) && (!NAN(fVar24))) {
    bStack_6b = bStack_6b | 2;
  }
  bVar17 = *(byte *)((longlong)param_2 + 0x39c);
  if ((bVar17 & 1) != 0) {
    iVar12 = *(int *)((longlong)param_2 + 0x54c);
    lVar8 = *(longlong *)(local_f8 + 0x10);
    iVar18 = *(int *)(local_f8 + 0x18);
    lVar6 = (longlong)iVar18;
    if (lVar6 != 0) {
      lVar9 = 0;
      do {
        if (*(int *)(lVar8 + lVar9) == iVar12) goto LAB_140ce0de0;
        lVar9 = lVar9 + 4;
      } while (lVar6 * 4 - lVar9 != 0);
    }
    *(uint *)(local_f8 + 0x18) = iVar18 + 1U;
    if (*(uint *)(local_f8 + 0x1c) < iVar18 + 1U) {
      plVar13 = (longlong *)(local_f8 + 0x10);
      FUN_1447808da(plVar13,iVar18);
      lVar8 = *plVar13;
    }
    *(int *)(lVar8 + lVar6 * 4) = iVar12;
    bStack_6c = bStack_6c | 2;
    bVar17 = *(byte *)((longlong)param_2 + 0x39c);
  }
LAB_140ce0de0:
  if (((bVar17 & 2) == 0) && (*(char *)(lVar7 + 0x470) < '\0')) {
    bStack_6b = bStack_6b | 0x40;
  }
  if ((plVar21 != (longlong *)0x0) && (*(char *)((longlong)plVar21 + 0x39) == '\x01')) {
    bStack_6c = bStack_6c | 0x80;
  }
  if ((*(byte *)(param_2 + 0x74) & 0xfe) == 2) {
    bStack_6b = bStack_6b | 8;
  }
  lVar7 = param_2[7];
  if (lVar7 != 0) {
    if (DAT_14cb939a8 == 0) {
      local_110 = &local_f0;
      local_f0 = FUN_140940982;
      local_100 = FUN_14081d0ea;
      local_108 = &LAB_146522c26;
      local_118 = &LAB_148a0db91;
      local_120 = &LAB_146572ba7;
      local_128 = L"Engine";
      local_130 = 0;
      local_138 = 0x10000004;
      local_140 = 8;
      local_148 = 0xdd8;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cb939a8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) != DAT_14cb939a8 + 0x30)) {
      lVar7 = param_2[7];
      if (lVar7 != 0) {
        lVar8 = FUN_14071731e();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
           (plVar13 = *(longlong **)(lVar7 + 0xe10), plVar13 != (longlong *)0x0)) {
          lVar7 = (**(code **)(*plVar13 + 8))(plVar13);
          lVar8 = FUN_1405dd292();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
               lVar8 + 0x30 && (*(char *)((longlong)plVar13 + 0x712) == '\x01')))) {
            bVar17 = 0x20;
            goto LAB_140ce0ee9;
          }
        }
      }
    }
    else {
      bVar17 = 4;
      if (*(longlong *)(lVar7 + 0x1b0) == *(longlong *)(*(longlong *)(local_f8 + 0x180) + 0x3d0)) {
LAB_140ce0ee9:
        bStack_6b = bStack_6b | bVar17;
      }
    }
  }
  lVar7 = local_f8;
  if (1 < (int)param_2[0x6d]) {
    fVar24 = *(float *)(param_2[0x6c] + 4);
    if (fVar24 <= 0.0001) {
LAB_140ce1002:
      if (((int)param_2[0x6d] == 2) ||
         (((fVar24 = *(float *)(param_2[0x6c] + 8), fVar24 <= 0.0001 || (local_70 != fVar24)) ||
          (NAN(local_70) || NAN(fVar24))))) goto LAB_140ce0eff;
      bVar17 = 8;
    }
    else {
      if ((local_70 != fVar24) || (NAN(local_70) || NAN(fVar24))) goto LAB_140ce1002;
      bVar17 = 0x10;
    }
    bStack_6c = bStack_6c | bVar17;
  }
LAB_140ce0eff:
  lVar8 = lVar7;
  if ((plVar21 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0x53d) == '\0')) {
    fVar24 = (float)FUN_140ce165c(plVar21 + 0xe,lVar2);
    fVar25 = 1.0;
    if ((longlong)(int)param_2[0x81] != 0) {
      plVar13 = (longlong *)param_2[0x80];
      lVar6 = (longlong)(int)param_2[0x81] << 5;
      do {
        if ((*plVar13 != 0) && ((int)plVar13[1] - 1U < 0xfffffffe)) {
          uVar5 = FUN_1409d448e();
          fVar25 = (float)(**(code **)(*param_2 + 0x158))(param_2,plVar21,uVar5);
          break;
        }
        plVar13 = plVar13 + 4;
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
    lVar6 = FUN_1405831b2();
    if (fVar24 * fVar25 < *(float *)(lVar6 + 0x20)) {
      lVar9 = FUN_1447210f0(*(undefined8 *)(lVar7 + 0x180));
      lVar8 = local_f8;
      dVar1 = *(double *)(lVar9 + 0x6d0);
      lVar9 = lVar7 + 0x2c;
      bVar17 = *(byte *)(lVar7 + 0x28);
      bVar16 = *(byte *)(lVar7 + 0x29);
      bVar3 = bVar16;
      while (bVar16 != bVar17) {
        fVar24 = (float)dVar1 - *(float *)(lVar7 + 0x38 + (ulonglong)bVar16 * 0x10);
        if (fVar24 < *(float *)(lVar6 + 0x24) || fVar24 == *(float *)(lVar6 + 0x24)) {
          cVar20 = *(char *)((longlong)plVar21 + 0x121);
          if (bVar16 == bVar17) goto LAB_140ce12ae;
          goto LAB_140ce13a7;
        }
        puVar15 = (undefined8 *)((ulonglong)bVar16 * 0x10 + lVar9);
        *puVar15 = 0;
        puVar15[1] = 0;
        bVar16 = bVar16 + 1 & 0xf;
        *(byte *)(local_f8 + 0x29) = bVar16;
        bVar3 = bVar17;
      }
      cVar20 = *(char *)((longlong)plVar21 + 0x121);
      bVar17 = bVar3;
      goto LAB_140ce12ae;
    }
  }
  goto LAB_140ce0f87;
  while (bVar17 = bVar16 + 1 & 0xf, bVar16 = bVar17, bVar17 != *(byte *)(lVar8 + 0x28)) {
LAB_140ce13a7:
    lVar6 = (ulonglong)bVar16 * 0x10 + lVar9;
    cVar4 = FUN_14069eaf4(lVar6,lVar2);
    if ((cVar4 != '\0') && (*(char *)(lVar6 + 8) == cVar20)) goto LAB_140ce0f87;
  }
LAB_140ce12ae:
  lVar8 = (ulonglong)bVar17 * 0x10;
  FUN_14485c47a(lVar9 + lVar8,lVar2);
  *(char *)(lVar7 + 0x34 + lVar8) = cVar20;
  *(float *)(lVar7 + 0x38 + lVar8) = (float)dVar1;
  *(byte *)(local_f8 + 0x28) = *(char *)(local_f8 + 0x28) + 1U & 0xf;
  bStack_6b = bStack_6b | 1;
  lVar8 = local_f8;
LAB_140ce0f87:
  FUN_140ce151a(lVar8,&local_e8);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
LAB_140ce0fa7:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce13fe FUN_140ce13fe body=283 status=ok
// SIG undefined FUN_140ce13fe(void)

undefined8 FUN_140ce13fe(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb253f8 == 0) {
    local_30 = &local_18;
    local_18 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f6f09d;
    local_40 = &LAB_146201c25;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  lVar1 = DAT_14cb253f8;
  if (*(longlong *)(DAT_14cb253f8 + 0x110) == 0) {
    FUN_140aa6c08(DAT_14cb253f8);
    if (*(longlong *)(lVar1 + 0x110) != 0) goto LAB_140ce142f;
  }
  else {
LAB_140ce142f:
    if (DAT_14cb25be0 != 0) {
      uVar2 = *(undefined8 *)(DAT_14cb25be0 + 0x108);
      goto LAB_140ce1446;
    }
  }
  uVar2 = 0;
LAB_140ce1446:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce151a FUN_140ce151a body=321 status=ok
// SIG undefined FUN_140ce151a(void)

void FUN_140ce151a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar7 = *(longlong *)(param_1 + 0x180) + 0x2a20;
  lVar9 = 0x330;
  while ((*(char *)(lVar7 + 0x82) != '\x01' || (cVar5 = FUN_1418f00de(lVar7,param_2), cVar5 == '\0')
         )) {
    lVar7 = lVar7 + 0x88;
    lVar9 = lVar9 + -0x88;
    if (lVar9 == 0) {
      iVar6 = *(int *)(param_1 + 8);
      if (*(char *)(*(longlong *)(param_1 + 0x180) + 0x2aa2 + (longlong)iVar6 * 0x88) == '\0') {
        lVar7 = *(longlong *)(param_1 + 0x180) + (longlong)iVar6 * 0x88;
        plVar8 = (longlong *)(lVar7 + 0x2a20);
        cVar5 = *(char *)(lVar7 + 0x2aa0);
        if ((*plVar8 != *param_2) || (*(int *)(lVar7 + 0x2a28) != (int)param_2[1])) {
          *plVar8 = *param_2;
          *(int *)(lVar7 + 0x2a28) = (int)param_2[1];
          *(undefined8 *)(lVar7 + 0x2a30) = 0;
        }
        if (plVar8 != param_2) {
          plVar8 = param_2 + 3;
          if ((longlong *)param_2[9] != (longlong *)0x0) {
            plVar8 = (longlong *)param_2[9];
          }
          FUN_1400709d4(lVar7 + 0x2a38,plVar8,(int)param_2[10],*(undefined4 *)(lVar7 + 0x2a74));
        }
        lVar9 = param_2[0xb];
        lVar1 = param_2[0xc];
        lVar2 = param_2[0xd];
        lVar3 = param_2[0xe];
        uVar4 = *(undefined8 *)((longlong)param_2 + 0x7b);
        *(undefined8 *)(lVar7 + 0x2a93) = *(undefined8 *)((longlong)param_2 + 0x73);
        *(undefined8 *)(lVar7 + 0x2a9b) = uVar4;
        *(longlong *)(lVar7 + 0x2a88) = lVar2;
        *(longlong *)(lVar7 + 0x2a90) = lVar3;
        *(longlong *)(&DAT_00002a78 + lVar7) = lVar9;
        *(longlong *)(lVar7 + 0x2a80) = lVar1;
        *(undefined1 *)(lVar7 + 0x2aa2) = 1;
        *(char *)(lVar7 + 0x2aa0) = cVar5 + '\x01';
        *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x17d) | 4;
        iVar6 = *(int *)(param_1 + 8);
      }
      *(int *)(param_1 + 8) = (iVar6 + 1) % 6;
      return;
    }
  }
  *(float *)(lVar7 + 0x78) = *(float *)(param_2 + 0xf) + *(float *)(lVar7 + 0x78);
  *(uint *)(lVar7 + 0x7c) = *(uint *)(lVar7 + 0x7c) | *(uint *)((longlong)param_2 + 0x7c);
  return;
}



// FUNCTION 140ce165c FUN_140ce165c body=715 status=ok
// SIG undefined FUN_140ce165c(void)

undefined4 FUN_140ce165c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 ****ppppuVar7;
  undefined4 uVar8;
  undefined1 auStack_128 [32];
  char local_108 [16];
  longlong *local_f8;
  longlong local_f0;
  undefined4 local_e0 [2];
  char local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  undefined8 ***local_80 [3];
  ushort local_68;
  byte local_60;
  undefined8 ***local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == 0) {
    local_80[0] = *(undefined8 ****)(param_1 + 0x18);
    FUN_1446dcdd4(local_108);
    lVar5 = FUN_1448fdc6e(local_108);
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x28) = lVar5;
    if (lVar5 == 0) {
      uVar8 = 0x3f800000;
      goto LAB_140ce1807;
    }
  }
  local_108[0] = '\0';
  local_e0[0] = 0;
  FUN_1456bb102(local_108,param_2);
  local_d8 = '\0';
  local_b0[0] = 0;
  FUN_1400606f6(local_80,lVar5,local_108);
  ppppuVar4 = (undefined8 ****)local_50;
  if ((undefined8 ****)local_50 == (undefined8 ****)0x0) {
    ppppuVar4 = local_80;
  }
  ppppuVar7 = (undefined8 ****)&DAT_14c9a40e0;
  if (0 < local_48) {
    ppppuVar7 = ppppuVar4;
  }
  puVar6 = &local_a8;
  FUN_1400603ec(puVar6,lVar5,ppppuVar7);
  ppppuVar4 = (undefined8 ****)local_50;
  if ((undefined8 ****)local_50 == (undefined8 ****)0x0) {
    ppppuVar4 = local_80;
  }
  FUN_1446fdf58(ppppuVar4,local_48);
  if ((undefined8 ****)local_50 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if (local_88 == 3) {
    uVar3 = 3;
    uVar8 = local_a8;
  }
  else {
    FUN_1400b56fe(local_80,&local_a8,3);
    if (local_60 == 0) {
      uVar8 = 0x3f800000;
    }
    else {
      uVar8 = local_80[0]._0_4_;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar4 = local_80;
      if (0x18 < local_68) {
        ppppuVar4 = (undefined8 ****)local_80[0];
      }
      (*pcVar2)(ppppuVar4);
    }
    if (0x18 < local_68) {
      FUN_1400020a8(local_80[0]);
    }
    uVar3 = (uint)local_88;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_90) {
      puVar6 = (undefined4 *)CONCAT44(uStack_a4,local_a8);
    }
    (*pcVar2)(puVar6);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
  }
  FUN_1448173f8(local_b0);
  if (local_d8 != '\0') {
    if (local_d8 == '\x01') {
      local_d0 = 0;
    }
    else if ((local_d8 == '\x03') && (local_c8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
    local_d8 = '\0';
  }
  FUN_1448173f8(local_e0);
  if ((local_108[0] == '\x03') && (local_f8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_f8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
  }
LAB_140ce1807:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce1936 FUN_140ce1936 body=174 status=ok
// SIG undefined FUN_140ce1936(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ce1936(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b71bb40;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
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



// FUNCTION 140ce19e4 FUN_140ce19e4 body=155 status=ok
// SIG undefined FUN_140ce19e4(void)

void FUN_140ce19e4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_140ce25ba();
  local_18 = &local_20;
  local_20 = param_1;
  FUN_140c59946(*(longlong *)(param_1 + 8) + 0x150);
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar1 = FUN_140f42f34(param_1);
    if (lVar1 != 0) {
      FUN_140457ffc(*(longlong *)(lVar1 + 8) + 0x1d0,param_1);
    }
  }
  FUN_140ce1a80(param_1);
  FUN_140ce1cc4(param_1);
  FUN_140ce1ef4(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce1a80 FUN_140ce1a80 body=578 status=ok
// SIG undefined FUN_140ce1a80(void)

void FUN_140ce1a80(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = *(longlong **)(param_1 + 8);
  if (*(char *)((longlong)plVar4 + 0x1c5) == '\0') {
    local_48 = *(undefined4 *)(param_1 + 0x98);
    local_50 = *(undefined8 *)(param_1 + 0x90);
    (**(code **)(*plVar4 + 0x78))();
    plVar4 = *(longlong **)(param_1 + 8);
  }
  plVar4 = (longlong *)FUN_141561c74(plVar4);
  if (plVar4 != (longlong *)0x0) {
    local_48 = *(undefined4 *)(param_1 + 0x98);
    local_50 = *(undefined8 *)(param_1 + 0x90);
    (**(code **)(*plVar4 + 0x30))(plVar4);
  }
  uVar14 = 0;
  FUN_140d82cdc(param_1,0,*(longlong *)(param_1 + 0xa0) + 0x5e0,param_1 + 0x180);
  FUN_140d82f0e(param_1,0,*(longlong *)(param_1 + 0xa0) + 0x5f0,param_1 + 0x1a8);
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 0) {
    uVar15 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x40);
    }
    uVar13 = *puVar5;
    if (uVar13 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140ce1bbb;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar13 = 0xffffffff;
    iVar3 = iVar2;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10 + (longlong)iVar6 * 0x20) != 0) {
        FUN_140ce2548();
        iVar3 = *(int *)(param_1 + 0x58);
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar5 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      iVar6 = (int)uVar14;
      lVar11 = (longlong)iVar6;
      uVar7 = puVar5[lVar11] & uVar13;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar12 = 0;
          do {
            uVar7 = puVar5[lVar11 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar14 = (ulonglong)(iVar6 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140ce1c7b;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar9 - lVar11 != lVar12);
          uVar13 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar14 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_140ce1c7b:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_140ce1bbb:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ce1cc4 FUN_140ce1cc4 body=558 status=ok
// SIG undefined FUN_140ce1cc4(void)

void FUN_140ce1cc4(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ce25ba();
  uVar11 = 0;
  FUN_140f54df0(param_1,0);
  FUN_140d82cdc(param_1,0,*(longlong *)(param_1 + 0xa0) + 0x5e0,param_1 + 0x180);
  FUN_140d82f0e(param_1,0,*(longlong *)(param_1 + 0xa0) + 0x5f0,param_1 + 0x1a8);
  FUN_140ee4988(param_1);
  plVar4 = (longlong *)FUN_141561c74();
  if (plVar4 != (longlong *)0x0) {
    local_48 = *(undefined4 *)(param_1 + 0x98);
    local_50 = *(undefined8 *)(param_1 + 0x90);
    (**(code **)(*plVar4 + 0x30))();
  }
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 0) {
    uVar15 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x40);
    }
    uVar14 = *puVar5;
    if (uVar14 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar11) goto LAB_140ce1dee;
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar5[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar11 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar14 = 0xffffffff;
    iVar3 = iVar2;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10 + (longlong)iVar6 * 0x20) != 0) {
        FUN_140ce2548();
        iVar3 = *(int *)(param_1 + 0x58);
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      puVar5 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      iVar6 = (int)uVar11;
      lVar12 = (longlong)iVar6;
      uVar7 = puVar5[lVar12] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar13 = 0;
          do {
            uVar7 = puVar5[lVar12 + lVar13 + 1];
            if (uVar7 != 0) {
              uVar11 = (ulonglong)(iVar6 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140ce1eac;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar14 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar11 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_140ce1eac:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_140ce1dee:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ce1ef4 FUN_140ce1ef4 body=1287 status=ok
// SIG undefined FUN_140ce1ef4(void)

void FUN_140ce1ef4(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  uint *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 0x1ef) = 0;
  puVar10 = (uint *)(param_1 + 0x40);
  iVar12 = *(int *)(param_1 + 0x58);
  iVar17 = iVar12;
  if (iVar12 == 0) {
    uVar15 = 1;
    uVar18 = 0;
    iVar11 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar4 = puVar10;
    }
    uVar16 = *puVar4;
    if (uVar16 == 0) {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      uVar18 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar18;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar18) goto LAB_140ce1f4a;
        iVar11 = iVar11 + 0x20;
        uVar16 = puVar4[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar18 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar9 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar8 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar8) {
      iVar8 = iVar12;
    }
  }
  if (iVar8 != iVar12) {
    uVar16 = 0xffffffff;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10 + (longlong)iVar8 * 0x20) +
                  0x50))();
      uVar16 = ~(uint)uVar15 & uVar16;
      puVar4 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar4 = puVar10;
      }
      iVar17 = *(int *)(param_1 + 0x58);
      iVar8 = (int)uVar18;
      lVar14 = (longlong)iVar8;
      uVar6 = puVar4[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar7 = iVar17 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar5 = iVar7;
        if (iVar7 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar3 = 0;
          do {
            uVar6 = puVar4[lVar14 + lVar3 + 1];
            if (uVar6 != 0) {
              uVar18 = (ulonglong)(iVar8 + (int)lVar3 + 1);
              uVar16 = 0xffffffff;
              goto LAB_140ce2068;
            }
            iVar11 = iVar11 + 0x20;
            lVar3 = lVar3 + 1;
          } while (iVar5 - lVar14 != lVar3);
          uVar16 = 0xffffffff;
          lVar14 = (longlong)iVar5;
        }
        uVar18 = lVar14 + 1U & 0xffffffff;
        iVar8 = iVar17;
      }
      else {
LAB_140ce2068:
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar9 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar17 <= iVar8) {
          iVar8 = iVar17;
        }
      }
    } while (iVar8 != iVar12);
  }
LAB_140ce1f4a:
  plVar13 = (longlong *)(param_1 + 0x30);
  if (iVar17 == 0) {
    uVar15 = 1;
    uVar18 = 0;
    iVar12 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar4 = puVar10;
    }
    uVar16 = *puVar4;
    if (uVar16 == 0) {
      iVar12 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar12 = iVar17 + -1;
      }
      uVar18 = 0;
      uVar9 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar9 = uVar18;
      }
      iVar12 = 0;
      do {
        if (uVar9 == uVar18) {
          iVar11 = 1;
          goto LAB_140ce1f70;
        }
        iVar12 = iVar12 + 0x20;
        uVar16 = puVar4[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar18 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar9 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar8 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar8) {
      iVar8 = iVar17;
    }
  }
  iVar11 = iVar17;
  if (iVar8 != iVar17) {
    uVar16 = 0xffffffff;
    local_a0 = plVar13;
    local_98 = puVar10;
    do {
      lVar14 = *local_a0;
      puVar1 = *(undefined8 **)(lVar14 + 0x10 + (longlong)iVar8 * 0x20);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined8 *)(lVar14 + (longlong)iVar8 * 0x20 + 0x10) = 0;
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar10 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar10 = local_98;
      }
      iVar11 = *(int *)(param_1 + 0x58);
      iVar8 = (int)uVar18;
      lVar14 = (longlong)iVar8;
      uVar6 = puVar10[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar7 = iVar11 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar5 = iVar7;
        if (iVar7 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar3 = 0;
          do {
            uVar6 = puVar10[lVar14 + lVar3 + 1];
            if (uVar6 != 0) {
              uVar18 = (ulonglong)(iVar8 + (int)lVar3 + 1);
              uVar16 = 0xffffffff;
              goto LAB_140ce2156;
            }
            iVar12 = iVar12 + 0x20;
            lVar3 = lVar3 + 1;
          } while (iVar5 - lVar14 != lVar3);
          uVar16 = 0xffffffff;
          lVar14 = (longlong)iVar5;
        }
        uVar18 = lVar14 + 1U & 0xffffffff;
        iVar8 = iVar11;
      }
      else {
LAB_140ce2156:
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar9 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar8 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar8) {
          iVar8 = iVar11;
        }
      }
      puVar10 = local_98;
      plVar13 = local_a0;
    } while (iVar8 != iVar17);
  }
LAB_140ce1f70:
  iVar12 = *(int *)(param_1 + 0x78);
  if (iVar12 < 2) {
    lVar14 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x70);
    }
    iVar17 = iVar12 + 3;
    if (-1 < iVar12) {
      iVar17 = iVar12;
    }
    if (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100) < iVar17 >> 2) {
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = puVar10;
      if (iVar11 == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar12 = *(int *)(param_1 + 0x58);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78 = local_58;
      uVar2 = local_78;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar17 = local_78._4_4_;
      local_90 = plVar13;
      if ((local_78._4_4_ != iVar12) || (local_78 = uVar2, uStack_60 != puVar10)) {
        do {
          local_78 = uVar2;
          *(undefined4 *)
           (lVar14 + (longlong)*(int *)(*local_90 + 0x1c + (longlong)iVar17 * 0x20) * 4) =
               0xffffffff;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar17 = local_78._4_4_;
          uVar2 = local_78;
        } while (local_90 != plVar13 ||
                 ((uint *)CONCAT44(uStack_7c,uStack_80) != puVar10 || local_78._4_4_ != iVar12));
      }
    }
    else if (iVar12 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)(lVar14 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x78));
    }
    FUN_140ce2412(plVar13);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  FUN_140ce2412(plVar13);
  *(undefined4 *)(param_1 + 0x78) = 1;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140f446c0(plVar13);
  return;
}



// FUNCTION 140ce2412 FUN_140ce2412 body=90 status=ok
// SIG undefined FUN_140ce2412(void)

void FUN_140ce2412(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 140ce246c FUN_140ce246c body=220 status=ok
// SIG undefined FUN_140ce246c(void)

void FUN_140ce246c(longlong param_1)

{
  FUN_140ce28a8();
  FUN_1448a8284(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_140ce2904(param_1 + 0xa8,0);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_140ce2904(param_1 + 0xc0,0);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_140ce2904(param_1 + 0xd8,0);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0xd0) + 0x168,param_1);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_140ce2548(param_1);
  return;
}



// FUNCTION 140ce2548 FUN_140ce2548 body=51 status=ok
// SIG undefined FUN_140ce2548(void)

void FUN_140ce2548(longlong param_1)

{
  FUN_140ce25ba();
  FUN_140ce257c(param_1);
  FUN_140ce27b0(param_1);
  FUN_140457ffc(*(longlong *)(param_1 + 0x28) + 0x1d0,param_1);
  return;
}



// FUNCTION 140ce257c FUN_140ce257c body=62 status=ok
// SIG undefined FUN_140ce257c(void)

void FUN_140ce257c(longlong param_1)

{
  FUN_140d82cdc(param_1,0,*(longlong *)(param_1 + 0x40) + 0x3c0,param_1 + 0x70);
  if (*(char *)(param_1 + 0x59) != '\0') {
    *(undefined1 *)(param_1 + 0x59) = 0;
    FUN_140e7c2fa(param_1);
  }
  FUN_143df1a06(param_1,0);
  return;
}



// FUNCTION 140ce25ba FUN_140ce25ba body=132 status=ok
// SIG undefined FUN_140ce25ba(void)

void FUN_140ce25ba(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x98))(param_1,&local_28);
  if (local_28 != 0) {
    FUN_140ce26f2();
  }
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
  FUN_140ce2640(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce2640 FUN_140ce2640 body=101 status=ok
// SIG undefined FUN_140ce2640(void)

void FUN_140ce2640(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_140ce26f2(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 << 4 != lVar3);
  }
  FUN_140ce26a5(lVar2,iVar1);
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 140ce26a5 FUN_140ce26a5 body=77 status=ok
// SIG undefined FUN_140ce26a5(void)

void FUN_140ce26a5(longlong param_1,int param_2)

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



// FUNCTION 140ce26f2 FUN_140ce26f2 body=180 status=ok
// SIG undefined FUN_140ce26f2(void)

void FUN_140ce26f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x30);
    if (plVar4 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
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
      (**(code **)(*plVar3 + 8))(plVar3,1);
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 140ce27b0 FUN_140ce27b0 body=246 status=ok
// SIG undefined FUN_140ce27b0(void)

void FUN_140ce27b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  void *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  local_40 = (int)param_1[0xd];
  lVar2 = (longlong)local_40;
  pvVar3 = (void *)param_1[0xc];
  if (lVar2 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  }
  else {
    FUN_1446dd7be(&local_48,local_40,0);
    memcpy(local_48,pvVar3,lVar2 * 0xc);
    if ((longlong)local_40 != 0) {
      lVar2 = (longlong)local_40 * 0xc;
      pvVar3 = local_48;
      do {
        plVar1 = (longlong *)(**(code **)(*param_1 + 0x70))(param_1);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0xa8))(plVar1,pvVar3,0);
        }
        local_38 = pvVar3;
        FUN_140bdf3fa(param_1 + 0xc,&local_38);
        pvVar3 = (void *)((longlong)pvVar3 + 0xc);
        lVar2 = lVar2 + -0xc;
      } while (lVar2 != 0);
    }
    *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
    if (local_48 != (void *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ce28a8 FUN_140ce28a8 body=90 status=ok
// SIG undefined FUN_140ce28a8(void)

void FUN_140ce28a8(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_140ce25ba();
  local_18 = &local_20;
  local_20 = param_1;
  FUN_140c59946(*(longlong *)(param_1 + 8) + 0x150);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce2904 FUN_140ce2904 body=310 status=ok
// SIG undefined FUN_140ce2904(void)

void FUN_140ce2904(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 0;
  if (param_2 != 0) {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ce2971;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_140ce2971:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140ce2a3a FUN_140ce2a3a body=205 status=ok
// SIG undefined FUN_140ce2a3a(void)

void FUN_140ce2a3a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x240);
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x3a48) != 0) {
      FUN_140ce2b08(*(longlong *)(param_1 + 0x3a48),param_2);
    }
    if (*(longlong *)(param_1 + 0x3a20) != 0) {
      FUN_140ce2b08(*(longlong *)(param_1 + 0x3a20),param_2);
    }
    iVar3 = *(int *)(param_1 + 0x39c8);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x39c0);
      lVar7 = 0;
      do {
        lVar5 = *(longlong *)(lVar4 + 0x18 + lVar7);
        plVar6 = *(longlong **)(lVar4 + 0x20 + lVar7);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (lVar5 != 0) {
          FUN_140ce2b08(lVar5,param_2);
        }
        if (plVar6 != (longlong *)0x0) {
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
        lVar7 = lVar7 + 0x28;
      } while ((longlong)iVar3 * 0x28 != lVar7);
    }
  }
  return;
}



// FUNCTION 140ce2b08 FUN_140ce2b08 body=266 status=ok
// SIG undefined FUN_140ce2b08(void)

void FUN_140ce2b08(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      plVar2 = (longlong *)*plVar5;
      plVar3 = (longlong *)plVar5[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      }
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
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x38) * 2;
    do {
      plVar2 = (longlong *)*plVar5;
      plVar3 = (longlong *)plVar5[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      }
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
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  plVar5 = *(longlong **)(param_1 + 0xa80);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140ce2c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x38))(plVar5,param_2);
  return;
}



// FUNCTION 140ce2c14 FUN_140ce2c14 body=184 status=ok
// SIG undefined FUN_140ce2c14(void)

void FUN_140ce2c14(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x10))();
  lVar4 = FUN_140ce2d0a(lVar3,*param_2);
  lVar5 = FUN_140ce301e(param_1 + -0x247);
  if (((lVar4 != 0) && (lVar5 != 0)) &&
     ((*(char *)(lVar5 + 0x28) == '\x02' || (*param_2 == DAT_14c9abbf0)))) {
    uVar2 = FUN_140ce2ed6(*(undefined4 *)(lVar3 + 8),param_2);
    lVar3 = FUN_140ce2d9e(lVar5,uVar2);
    if (((lVar3 != 0) && (*(longlong *)(lVar4 + 0x168) != lVar3)) &&
       (cVar1 = FUN_140ce2ccc(lVar3), cVar1 != '\0')) {
      *(undefined1 *)(lVar4 + 0x138) = 1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(lVar4 + 0x168) = lVar3;
      *(undefined1 *)(lVar4 + 0x361) = 1;
    }
  }
  return;
}



// FUNCTION 140ce2ccc FUN_140ce2ccc body=61 status=ok
// SIG undefined FUN_140ce2ccc(void)

undefined4 FUN_140ce2ccc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((((*(longlong *)(param_1 + 0x30) != 0) && (lVar2 = *(longlong *)(param_1 + 0x48), lVar2 != 0))
      && (*(int *)(lVar2 + 0x48) != 0)) &&
     (iVar1 = *(int *)(lVar2 + 0x58), *(int *)(lVar2 + 0x48) < 2 || iVar1 != 0)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(param_1 + 0x40) != 0 || iVar1 == 0);
  }
  return 0;
}



// FUNCTION 140ce2d0a FUN_140ce2d0a body=147 status=ok
// SIG undefined FUN_140ce2d0a(void)

longlong FUN_140ce2d0a(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x50);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x460;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x460) == param_2)
        goto LAB_140ce2d80;
        iVar4 = *(int *)(lVar2 + 0x450);
      } while (iVar4 != -1);
    }
  }
  lVar2 = 0;
LAB_140ce2d80:
  lVar3 = lVar2 + 0x10;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 140ce2d9e FUN_140ce2d9e body=312 status=ok
// SIG undefined FUN_140ce2d9e(void)

longlong FUN_140ce2d9e(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*(byte *)(param_1 + 0x28) < 2) {
    lVar6 = 0;
    if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x38)) {
      iVar1 = *(int *)(param_1 + 0x58);
      iVar5 = 0;
      if (iVar1 != 0) {
        puVar3 = (uint *)(param_1 + 0x40);
        if (*(uint **)(param_1 + 0x50) != (uint *)0x0) {
          puVar3 = *(uint **)(param_1 + 0x50);
        }
        uVar2 = *puVar3;
        if (uVar2 == 0) {
          iVar5 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar5 = iVar1 + -1;
          }
          uVar8 = 0;
          uVar7 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar7 = uVar8;
          }
          iVar4 = 0x3e;
          do {
            iVar5 = iVar1;
            if (uVar7 == uVar8) goto LAB_140ce2ea2;
            uVar2 = puVar3[uVar8 + 1];
            uVar8 = uVar8 + 1;
            iVar4 = iVar4 + 0x20;
          } while (uVar2 == 0);
        }
        else {
          iVar4 = 0x3e;
        }
        uVar7 = (ulonglong)(-uVar2 & uVar2) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar5 = iVar4 - ((uint)lVar6 ^ 0x3f);
        if (iVar1 <= iVar5) {
          iVar5 = iVar1;
        }
      }
LAB_140ce2ea2:
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iVar5 * 0x18);
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
      lVar6 = param_1 + 0x68;
      if (*(longlong *)(param_1 + 0x70) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x70);
      }
      uVar2 = *(uint *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
      if (uVar2 != 0xffffffff) {
        while (puVar3 = (uint *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar2 * 0x18),
              *puVar3 != param_2) {
          uVar2 = puVar3[4];
          if (uVar2 == 0xffffffff) {
            return 0;
          }
        }
        if (puVar3 == (uint *)0x0) {
          return 0;
        }
        if (puVar3 + 2 == (uint *)0x0) {
          return 0;
        }
        lVar6 = *(longlong *)(puVar3 + 2);
        if (DAT_14c950c29 != '\x01') {
          return lVar6;
        }
        if (lVar6 == 0) {
          return 0;
        }
        FUN_1456cec3c(lVar6);
        return lVar6;
      }
    }
    lVar6 = 0;
  }
  return lVar6;
}



// FUNCTION 140ce2ed6 FUN_140ce2ed6 body=326 status=ok
// SIG undefined FUN_140ce2ed6(void)

uint FUN_140ce2ed6(int param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_2,&local_38);
  uVar4 = 0;
  iVar3 = local_30 + -1;
  if (local_30 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    puVar1 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar1 = local_38;
    }
    lVar7 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((uint)(0x19 < (ushort)puVar1[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar1[lVar7]) -
              0x20;
      uVar9 = (uint)(uVar5 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar4) & 0xff) * 4);
      uVar4 = uVar9 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
      uVar5 = (ulonglong)uVar4;
      lVar7 = lVar7 + 1;
    } while (iVar3 != (int)lVar7);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar9 = uVar4 >> 0xd ^ param_1 - uVar4;
  uVar2 = uVar9 << 8 ^ (-0x61c88647 - uVar4) - uVar9;
  uVar4 = uVar2 >> 0xd ^ (uVar4 - uVar9) - uVar2;
  uVar6 = uVar4 >> 0xc ^ (uVar9 - uVar2) - uVar4;
  uVar8 = uVar6 << 0x10 ^ (uVar2 - uVar4) - uVar6;
  uVar9 = uVar8 >> 5 ^ (uVar4 - uVar6) - uVar8;
  uVar2 = uVar9 >> 3 ^ (uVar6 - uVar8) - uVar9;
  uVar4 = uVar2 << 10 ^ (uVar8 - uVar9) - uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 >> 0xf ^ uVar9 - (uVar2 + uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce301e FUN_140ce301e body=461 status=ok
// SIG undefined FUN_140ce301e(void)

longlong FUN_140ce301e(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x14e0) != 0) {
    return *(longlong *)(param_1 + 0x14e0);
  }
  lVar4 = *(longlong *)(param_1 + 0xa8);
  if (lVar4 == 0) {
LAB_140ce318e:
    lVar4 = 0;
  }
  else {
    uVar2 = FUN_140ce31ec();
    plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
    if (plVar3 == (longlong *)0x0) goto LAB_140ce318e;
    lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
    if (lVar4 == 0) {
LAB_140ce31a2:
      lVar4 = 0;
    }
    else {
      lVar5 = FUN_1403561e8();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) goto LAB_140ce31a2;
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3);
    if (plVar3 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
      lVar6 = FUN_140356032();
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        lVar5 = plVar3[0x48];
        if ((DAT_14c950c29 == 1) && (lVar5 != 0)) {
          FUN_1456cec3c(lVar5);
        }
        if (((DAT_14c950c29 & 1) != 0) && (lVar5 != 0)) {
          FUN_1456cec3c(lVar5);
          *(longlong *)(param_1 + 0x14e0) = lVar5;
          return lVar5;
        }
        *(longlong *)(param_1 + 0x14e0) = lVar5;
        if (lVar5 != 0) {
          return lVar5;
        }
        bVar1 = false;
        goto LAB_140ce3136;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x14e0) = 0;
  bVar1 = true;
  plVar3 = (longlong *)0x0;
LAB_140ce3136:
  if (lVar4 == 0) {
    lVar4 = param_1;
  }
  lVar4 = FUN_145795ff2(lVar4,DAT_14c9aba68);
  if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(param_1 + 0x14e0) = lVar4;
  if (!bVar1) {
    if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar4);
      lVar4 = *(longlong *)(param_1 + 0x14e0);
    }
    plVar3[0x48] = lVar4;
    lVar4 = *(longlong *)(param_1 + 0x14e0);
  }
  return lVar4;
}



// FUNCTION 140ce31ec FUN_140ce31ec body=228 status=ok
// SIG undefined FUN_140ce31ec(void)

longlong FUN_140ce31ec(void)

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
  if (DAT_14cb5a8b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14866b8a7;
    local_40 = FUN_1464cb26e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxBodySettingsProvider",&DAT_14cb5a8b8,&DAT_14866b8a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5a8b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce32d2 FUN_140ce32d2 body=283 status=ok
// SIG undefined FUN_140ce32d2(void)

longlong * FUN_140ce32d2(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined1 *)0x0;
  local_38 = 0x100000000;
  local_38._0_4_ = 0;
  while( true ) {
    puVar4 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar4 = local_48;
    }
    if ((int)local_38 != 0) {
      lVar5 = 0;
      do {
        if (*(longlong **)(puVar4 + lVar5) == param_2) {
          param_2 = (longlong *)0x0;
          goto LAB_140ce3338;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)local_38 * 8 != lVar5);
    }
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x2a0))(param_2,param_3);
    uVar1 = local_38;
    if (plVar3 == param_2) goto LAB_140ce3338;
    if ((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 1) >> 0x1e & 1) != 0)) break;
    lVar5 = (longlong)(int)local_38;
    uVar2 = (int)local_38 + 1;
    local_38 = CONCAT44(local_38._4_4_,uVar2);
    if (local_38._4_4_ < uVar2) {
      FUN_1489ac5cc(local_48,uVar1 & 0xffffffff);
    }
    puVar4 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar4 = local_48;
    }
    *(longlong **)(puVar4 + lVar5 * 8) = param_2;
    param_2 = plVar3;
  }
  param_2 = (longlong *)0x0;
LAB_140ce3338:
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140ce33ee FUN_140ce33ee body=98 status=ok
// SIG undefined FUN_140ce33ee(void)

longlong FUN_140ce33ee(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140ce3450((longlong *)(param_1 + 0x98),*param_2,0xbf800000);
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xa0) <= (int)uVar1)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + (ulonglong)uVar1 * 0x10);
    if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
      FUN_1456cec3c(lVar2);
    }
  }
  return lVar2;
}



// FUNCTION 140ce3450 FUN_140ce3450 body=369 status=ok
// SIG undefined FUN_140ce3450(void)

ulonglong FUN_140ce3450(longlong *param_1,undefined8 param_2,float param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  undefined1 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 < 0.0) {
    uVar2 = rand();
    param_3 = (float)(uVar2 & 0x7fff) / 32767.0;
  }
  local_40 = (undefined1 *)0x0;
  local_34 = 0x20;
  local_38 = (int)param_1[1];
  uVar5 = (ulonglong)local_38;
  if (0x20 < uVar5) {
    FUN_140fb08bc(local_c0);
  }
  puVar3 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar3 = local_c0;
  }
  memset(puVar3,0,uVar5 << 2);
  uVar5 = 0xffffffff;
  if (0 < (int)param_1[1]) {
    fVar8 = 0.0;
    lVar4 = 8;
    lVar6 = 0;
    do {
      puVar3 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar3 = local_c0;
      }
      *(undefined4 *)(puVar3 + lVar6 * 4) = *(undefined4 *)(*param_1 + lVar4);
      puVar3 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar3 = local_c0;
      }
      fVar8 = fVar8 + *(float *)(puVar3 + lVar6 * 4);
      lVar6 = lVar6 + 1;
      uVar2 = *(uint *)(param_1 + 1);
      lVar4 = lVar4 + 0x10;
    } while (lVar6 < (int)uVar2);
    if (0 < (int)uVar2) {
      fVar9 = 0.0;
      uVar7 = 0;
      do {
        bVar1 = fVar9 <= param_3 * fVar8;
        fVar9 = fVar9 + *(float *)(puVar3 + uVar7 * 4);
        if ((bVar1) && (param_3 * fVar8 <= fVar9)) {
          uVar5 = uVar7 & 0xffffffff;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140ce35c2 FUN_140ce35c2 body=509 status=ok
// SIG undefined FUN_140ce35c2(void)

longlong FUN_140ce35c2(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  byte bVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_f8 [47];
  byte local_c9;
  char local_c8 [16];
  longlong *local_b8;
  undefined4 local_a0 [2];
  int local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  int local_70;
  undefined4 uStack_6c;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0xa0) << 6;
    lVar5 = *(longlong *)(param_1 + 0x98) + 8;
    do {
      local_c8[0] = '\0';
      local_a0[0] = 0;
      FUN_1456bb102(local_c8,*param_2);
      FUN_1447c3578(lVar5,&local_98,local_c8);
      if (local_78 == 1) {
        bVar7 = local_98 != 0;
        bVar2 = 1;
      }
      else {
        FUN_1400b56fe(&local_70,&local_98,1);
        bVar7 = local_50 != 0;
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        bVar2 = local_70 != 0;
        if (pcVar1 != (code *)0x0) {
          piVar4 = &local_70;
          if (0x18 < local_58) {
            piVar4 = (int *)CONCAT44(uStack_6c,local_70);
          }
          local_c9 = local_70 != 0;
          (*pcVar1)(piVar4);
          bVar2 = local_c9;
        }
        if (0x18 < local_58) {
          local_c9 = bVar2;
          FUN_1400020a8(CONCAT44(uStack_6c,local_70));
          bVar2 = local_c9;
        }
        bVar7 = (bool)(bVar7 & bVar2);
        bVar2 = local_78;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
      if (pcVar1 != (code *)0x0) {
        piVar4 = &local_98;
        if (0x18 < local_80) {
          piVar4 = (int *)CONCAT44(uStack_94,local_98);
        }
        (*pcVar1)(piVar4);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(CONCAT44(uStack_94,local_98));
      }
      FUN_1448173f8(local_a0);
      if ((local_c8[0] == '\x03') && (local_b8 != (longlong *)0x0)) {
        LOCK();
        piVar4 = (int *)((longlong)local_b8 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      if ((bVar7 != false) && (lVar3 = *(longlong *)(lVar5 + -8), lVar3 != 0)) goto LAB_140ce36b2;
      lVar5 = lVar5 + 0x40;
      lVar6 = lVar6 + -0x40;
    } while (lVar6 != 0);
  }
  lVar3 = *(longlong *)(param_1 + 0xa8);
LAB_140ce36b2:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 140ce37cc FUN_140ce37cc body=81 status=ok
// SIG undefined FUN_140ce37cc(void)

undefined8 FUN_140ce37cc(undefined1 *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x28))(param_2);
    if (((byte *)*puVar3 != (byte *)0x0) && ((*(byte *)*puVar3 & 3) == 1)) {
      *param_1 = 0;
      uVar2 = FUN_140e1edd4(puVar3,0);
      *(undefined4 *)(param_1 + 4) = uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ce381e FUN_140ce381e body=833 status=ok
// SIG undefined FUN_140ce381e(void)

undefined8 FUN_140ce381e(longlong param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  double dVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [12];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14087fa96();
  cVar2 = *(char *)(param_1 + 0x120);
LAB_140ce384a:
  do {
    cVar9 = cVar2;
    if (cVar9 == '\x02') {
      lVar4 = FUN_140ce3e30(param_1);
      if (lVar4 != 0) {
        lVar5 = FUN_14061d078();
        if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
            (*(char *)(lVar4 + 0x630) == '\x01')) &&
           ((*(char *)(param_1 + 0x131) == '\0' &&
            ((bVar3 = *(byte *)(param_1 + 0x132), bVar3 != 1 ||
             (*(char *)(param_1 + 0x133) == '\x01')))))) {
          if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x388) == '\0') {
            cVar2 = FUN_140ce3b60(param_1,0);
            if (cVar2 != '\0') goto LAB_140ce38e0;
            bVar3 = *(byte *)(param_1 + 0x132);
          }
          if (((bVar3 & 1) == 0) &&
             (((*(char *)(param_1 + 0x122) != '\0' || (*(char *)(param_1 + 0x130) != '\0')) ||
              (dVar13 = (double)FUN_140ce3fd2(param_1), dVar13 < *(double *)(param_1 + 0x128))))) {
            cVar2 = FUN_140ce3b60(param_1,0);
            if (cVar2 == '\0') {
              FUN_14579634e(param_1);
            }
            goto LAB_140ce38e0;
          }
        }
      }
      FUN_1457963e0(param_1);
      *(undefined1 *)(param_1 + 0x120) = 3;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
      puVar10 = &DAT_14c846480;
      if (lVar4 != 0) {
        puVar10 = (undefined8 *)(lVar4 + 0x240);
      }
      puVar11 = (undefined8 *)(param_1 + 0x140);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
LAB_140ce38e0:
      cVar2 = *(char *)(param_1 + 0x120);
    }
    else {
      if (cVar9 == '\x01') {
        cVar2 = FUN_140ce3b60(param_1,0);
        if (cVar2 != '\0') goto LAB_140ce38e0;
        FUN_1457966be(param_1);
        cVar2 = '\x02';
LAB_140ce3917:
        *(char *)(param_1 + 0x120) = cVar2;
        goto LAB_140ce384a;
      }
      if (cVar9 == '\x03') {
        cVar2 = FUN_140ce3b60(param_1,0);
        if (cVar2 == '\0') {
          cVar2 = '\x04';
          goto LAB_140ce3917;
        }
        goto LAB_140ce38e0;
      }
      if (cVar9 == '\x04') goto LAB_140ce3ad9;
      cVar2 = '\x01';
      FUN_1408838b6(param_1,*(longlong *)(param_1 + 0x1a0) + 0xd8,1,1);
      *(undefined1 *)(param_1 + 0x120) = 1;
    }
    if (cVar2 == cVar9) {
      if (cVar9 == '\x04') {
LAB_140ce3ad9:
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        uVar7 = 0;
        if (((((*(int *)(param_1 + 0x1ac) != 0) &&
              (uVar1 = *(uint *)(param_1 + 0x1a8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)
             ) && ((plVar12 = (longlong *)
                              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   uVar8 = uVar7, plVar12 != (longlong *)0x0 &&
                   ((int)plVar12[2] == *(int *)(param_1 + 0x1ac))))) &&
           (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (lVar4 = *plVar12, lVar4 != 0)))) {
          if (((((*(int *)(param_1 + 0x1b4) == 0) ||
                (uVar1 = *(uint *)(param_1 + 0x1b0), (int)uVar1 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar1 ||
                (((plVar12 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                  plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(param_1 + 0x1b4))) ||
                 ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))))) ||
              ((lVar5 = *plVar12, lVar5 == 0 || (lVar6 = *(longlong *)(lVar5 + 0x638), lVar6 == 0)))
              ) || ((*(char *)(lVar6 + 0x90) != '\x01' || (*(char *)(lVar6 + 0x8b) != '\x03')))) {
            local_38 = 0;
          }
          else {
            puVar10 = (undefined8 *)(lVar5 + 0x240);
            puVar11 = local_98;
            for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            local_38 = 1;
          }
          FUN_140ce3c98(lVar4);
        }
      }
      if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar8;
    }
  } while( true );
}



// FUNCTION 140ce3b60 FUN_140ce3b60 body=311 status=ok
// SIG undefined FUN_140ce3b60(void)

undefined8 FUN_140ce3b60(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    lVar5 = (longlong)*(int *)(param_1 + 0xe0) * 0x50;
    do {
      if (*(char *)(lVar4 + 0x40) == '\x01') {
        if (*(char *)(lVar4 + 8) != '\0') {
          return 1;
        }
        fVar8 = *(float *)(lVar4 + 0x3c);
        if ((char)param_2 != '\0') {
          fVar8 = fVar8 + *(float *)(lVar4 + 0x48);
        }
        if (*(float *)(lVar4 + 0x34) <= fVar8 && fVar8 != *(float *)(lVar4 + 0x34)) {
          return 1;
        }
      }
      else if ((((*(int *)(lVar4 + 0x18) != 0) && (uVar1 = *(uint *)(lVar4 + 0x14), -1 < (int)uVar1)
                ) && ((int)uVar1 < DAT_14c9647dc)) &&
              (((plVar7 = (longlong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(lVar4 + 0x18))) &&
               (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))) {
        if ((*(int *)(lVar4 + 0x10) == 0) || (uVar1 = *(uint *)(lVar4 + 0xc), (int)uVar1 < 0)) {
LAB_140ce3c92:
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            puVar3 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 2) != *(int *)(lVar4 + 0x10)))
               || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)) goto LAB_140ce3c92;
            uVar6 = *puVar3;
          }
        }
        cVar2 = FUN_14489e746(*plVar7,lVar4,uVar6,param_2);
        if (cVar2 != '\0') {
          return 1;
        }
      }
      lVar4 = lVar4 + 0x50;
      lVar5 = lVar5 + -0x50;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 140ce3c98 FUN_140ce3c98 body=406 status=ok
// SIG undefined FUN_140ce3c98(void)

void FUN_140ce3c98(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      if (DAT_14cad2858 == 0) {
        local_40 = &local_28;
        local_28 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146395584;
        local_48 = &LAB_147a0ba80;
        local_50 = &LAB_14575ccce;
        local_58 = L"Engine";
        local_60 = 0x40000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))();
      param_1[0x7c] = lVar2;
    }
  }
  if ((undefined8 *)(lVar2 + 0xb50) != param_2) {
    if (*(char *)(param_2 + 0xc) == '\x01') {
      puVar5 = (undefined8 *)(lVar2 + 0xb50);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *param_2;
        param_2 = param_2 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = 1;
    }
    else {
      if (*(char *)(lVar2 + 0xbb0) != '\x01') goto LAB_140ce3d31;
      uVar3 = 0;
    }
    *(undefined1 *)(lVar2 + 0xbb0) = uVar3;
  }
LAB_140ce3d31:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce3e30 FUN_140ce3e30 body=417 status=ok
// SIG undefined FUN_140ce3e30(void)

undefined8 FUN_140ce3e30(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    uVar2 = (uint)((ulonglong)DAT_14cb88c40 >> 0x10);
    uVar8 = (uint)DAT_14cb88c40 & 0xffff;
    lVar3 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
    }
    iVar9 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)DAT_14cb88c40 >> 0x20) +
                             ((uint)DAT_14cb88c40 << 0x10 | uVar8) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      uVar6 = 0;
      do {
        lVar10 = (longlong)iVar9 * 0x38;
        lVar3 = *(longlong *)(param_1 + 0x48) + lVar10;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + lVar10) == DAT_14cb88c40) {
          uVar6 = 0;
          if ((lVar3 != 0) && (puVar4 = (uint *)(lVar3 + 8), puVar4 != (uint *)0x0)) {
            if (*(char *)(lVar3 + 0x28) == '\x0e') {
              if (*(int *)(lVar3 + 0xc) == 0) goto LAB_140ce3f56;
              uVar2 = *puVar4;
              uVar6 = 0;
              if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                puVar5 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((puVar5 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar5 + 2) != *(int *)(lVar3 + 0xc) ||
                    ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_140ce3f56;
                uVar6 = *puVar5;
              }
            }
            else {
              FUN_1400b56fe(local_48,puVar4,CONCAT71((int7)((ulonglong)lVar10 >> 8),0xe));
              if (local_28 == 0) {
                uVar2 = 0;
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_14479d2ce(local_48);
                uVar2 = (uint)local_28;
              }
              pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
              if (pcVar1 != (code *)0x0) {
                ppppuVar7 = local_48;
                if (0x18 < local_30) {
                  ppppuVar7 = (undefined8 ****)local_48[0];
                }
                (*pcVar1)(ppppuVar7);
              }
              if (0x18 < local_30) {
                FUN_1400020a8(local_48[0]);
              }
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar3 + 0x30);
      } while (iVar9 != -1);
      goto LAB_140ce3f34;
    }
  }
LAB_140ce3f56:
  uVar6 = 0;
LAB_140ce3f34:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140ce3fd2 FUN_140ce3fd2 body=36 status=ok
// SIG undefined FUN_140ce3fd2(void)

undefined8 FUN_140ce3fd2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x38));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x6d0);
  }
  return uVar2;
}



// FUNCTION 140ce3ff6 FUN_140ce3ff6 body=7 status=ok
// SIG undefined FUN_140ce3ff6(void)

void FUN_140ce3ff6(undefined4 param_1)

{
  DAT_14c83e67c = param_1;
  return;
}



// FUNCTION 140ce3ffe FUN_140ce3ffe body=7 status=ok
// SIG undefined FUN_140ce3ffe(void)

undefined4 FUN_140ce3ffe(void)

{
  return DAT_14c83e67c;
}



// FUNCTION 140ce4006 FUN_140ce4006 body=46 status=ok
// SIG undefined FUN_140ce4006(void)

float FUN_140ce4006(void)

{
  float fVar1;
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  
  DAT_14c83e67c = DAT_14c83e67c * 0xbb38435 + 0x3619636b;
  fVar1 = (float)(DAT_14c83e67c & 0x7fffff | 0x3f800000);
  auVar2 = roundss(in_XMM1,ZEXT416((uint)fVar1),0xb);
  return fVar1 - auVar2._0_4_;
}



// FUNCTION 140ce4034 FUN_140ce4034 body=176 status=ok
// SIG undefined FUN_140ce4034(void)

void FUN_140ce4034(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1f0);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xe0))(param_1 + 0x178);
    puVar3 = &DAT_14c846480;
    if (*(longlong *)(lVar1 + 0x1c8) != 0) {
      puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x1c8) + 0x240);
    }
    FUN_140ce40e4(param_1 + 0x1060,puVar3,param_2,param_3,uVar2,param_4);
    FUN_1413d4c10(lVar1,param_2,0,0,0);
    FUN_14485c852(param_1 + 0x1060,lVar1);
    return;
  }
  return;
}



// FUNCTION 140ce40e4 FUN_140ce40e4 body=397 status=ok
// SIG undefined FUN_140ce40e4(void)

void FUN_140ce40e4(undefined8 param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  double dVar2;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = param_2[6] - param_3[6];
  local_88 = param_2[4] - param_3[4];
  dStack_80 = param_2[5] - param_3[5];
  dVar7 = param_3[2] * -1.0;
  dVar8 = param_3[3] * 1.0;
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  dVar6 = param_2[3];
  dVar1 = param_3[1];
  dVar2 = param_3[1];
  local_a8 = dVar4 * dVar7 * -1.0 + ((dVar3 * dVar8 - *param_3 * dVar6 * 1.0) - dVar5 * dVar1);
  dStack_a0 = dVar3 * dVar7 * 1.0 + ((dVar4 * dVar8 - *param_3 * dVar5 * -1.0) - dVar6 * dVar2);
  dVar2 = dVar5 * dVar7 * -1.0 + dVar2 * dVar4 + (dVar8 * dVar6 - *param_3 * dVar3 * -1.0);
  local_98._8_4_ = SUB84(dVar2,0);
  local_98._0_8_ = dVar6 * dVar7 * 1.0 + dVar1 * dVar3 + (dVar8 * dVar5 - *param_3 * dVar4 * 1.0);
  local_98._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_b0 = param_6;
  local_b8 = param_5;
  FUN_140835c94();
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce428a FUN_140ce428a body=880 status=ok
// SIG undefined FUN_140ce428a(void)

void FUN_140ce428a(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,0xd);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_140ce42d2;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_140ce42d2:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar9 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar9 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  uVar4 = (uint)*(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[4]) goto LAB_140ce436e;
      puVar7 = puVar7 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_140ce436e:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x10 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar4 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[5]) goto LAB_140ce43c2;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_140ce43c2:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x14 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar4 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[6]) goto LAB_140ce440f;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_140ce440f:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x18 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar4 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[7]) goto LAB_140ce445c;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_140ce445c:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x1c + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar4 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[8]) goto LAB_140ce44a9;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_140ce44a9:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x20 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  uVar6 = (ushort)uVar4;
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[9]) goto LAB_140ce44f6;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_140ce44f6:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x24 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar6 = *(ushort *)(param_2 + 0xc);
    uVar4 = (uint)uVar6;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[10]) goto LAB_140ce4543;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_140ce4543:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x28 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar6 = *(ushort *)(param_2 + 0xc);
    uVar4 = (uint)uVar6;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[0xb]) goto LAB_140ce4590;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_140ce4590:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x2c + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar6 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar4 = (uint)uVar6;
  }
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[0xc]) goto LAB_140ce45d5;
      puVar1 = puVar1 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_140ce45d5:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + 0x30 + lVar9 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 140ce4600 FUN_140ce4600 body=228 status=ok
// SIG undefined FUN_140ce4600(void)

longlong FUN_140ce4600(void)

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
  if (DAT_14cab37e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633909e;
    local_38 = &LAB_147576293;
    local_40 = &LAB_146340e9b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneSequence",&DAT_14cab37e0,FUN_146340e74);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab37e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce46e6 FUN_140ce46e6 body=40 status=ok
// SIG undefined FUN_140ce46e6(void)

undefined8 FUN_140ce46e6(undefined8 param_1,int param_2)

{
  FUN_140ce470e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ce470e FUN_140ce470e body=1512 status=ok
// SIG undefined FUN_140ce470e(void)

void FUN_140ce470e(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b7dc580;
  param_1[0x72] = &PTR_FUN_14b7dcc70;
  param_1[0x73] = &PTR_FUN_14b7dcce0;
  param_1[0x74] = &PTR_FUN_14b7dcd50;
  param_1[0x75] = &PTR_FUN_14b7dcd80;
  param_1[0x76] = &PTR_FUN_14b7dcdb0;
  param_1[0x77] = &PTR_FUN_14b7dcde0;
  param_1[0x78] = &PTR_FUN_14b7dce20;
  param_1[0x79] = &PTR_FUN_14b7dce40;
  param_1[0x7a] = &PTR_FUN_14b7dce70;
  param_1[0x7b] = &PTR_FUN_14b7dcf40;
  param_1[0x7c] = &PTR_FUN_14b7dcf90;
  param_1[0x7d] = &PTR_FUN_14b7dd050;
  param_1[0x7e] = &PTR_FUN_14b7dd070;
  param_1[0x7f] = &PTR_FUN_14b7dd0f0;
  param_1[0x80] = &PTR_FUN_14b7dd110;
  param_1[0x81] = &PTR_FUN_14b7dd120;
  param_1[0x82] = &PTR_FUN_14b7dd160;
  param_1[0x83] = &PTR_FUN_14b7dd1d0;
  param_1[0x84] = &PTR_FUN_14b7dd200;
  param_1[0x85] = &PTR_FUN_14b7dd2a0;
  param_1[0x86] = &PTR_FUN_14b7dd2c0;
  param_1[0x87] = &PTR_FUN_14b7dd2e0;
  param_1[0x2a7] = &PTR_FUN_14b7dd300;
  param_1[0x2a8] = &PTR_FUN_14b7dd340;
  param_1[0x2a9] = &PTR_FUN_14b7dd360;
  param_1[0x2aa] = &PTR_FUN_14b7dd400;
  param_1[0x2ab] = &PTR_FUN_14b7dd430;
  param_1[0x306] = &PTR_FUN_14b695510;
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x1864) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x1864) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x1864) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x30b) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x30b) + -1;
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
    *(undefined4 *)(param_1 + 0x30b) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x184c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x184c) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x184c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x308) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x308) + -1;
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
    *(undefined4 *)(param_1 + 0x308) = 0;
  }
  param_1[0x303] = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 0x1821) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 0x303);
    *(undefined1 *)((longlong)param_1 + 0x1821) = 0;
  }
  FUN_14079057a(param_1 + 0x2eb);
  if (*(char *)(param_1 + 0x2e6) == '\x01') {
    *(undefined1 *)(param_1 + 0x2e6) = 0;
  }
  FUN_144760e21(param_1[0x2de],*(undefined4 *)(param_1 + 0x2df));
  if (param_1[0x2de] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2dc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2d9],*(undefined4 *)(param_1 + 0x2da));
  if (param_1[0x2d9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2d6],*(undefined4 *)(param_1 + 0x2d7));
  if (param_1[0x2d6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2d3],*(undefined4 *)(param_1 + 0x2d4));
  if (param_1[0x2d3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2cf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2cd] != 0) {
    FUN_1400020a8();
  }
  FUN_140283eaa(param_1 + 0x2c8,1);
  *(undefined4 *)(param_1 + 0x2c7) = 0;
  if (param_1[0x2c6] != 0) {
    FUN_1400020a8();
  }
  FUN_1405308b6(param_1 + 0x2be);
  FUN_1406398aa(param_1 + 0x2b5,1);
  if (param_1[0x2b0] != 0) {
    FUN_1400020a8();
  }
  FUN_140ce4cf6(param_1);
  return;
}



// FUNCTION 140ce4cf6 FUN_140ce4cf6 body=1913 status=ok
// SIG undefined FUN_140ce4cf6(void)

void FUN_140ce4cf6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3affe0;
  param_1[0x72] = &PTR_FUN_14b3b06c0;
  param_1[0x73] = &PTR_FUN_14b3b0730;
  param_1[0x74] = &PTR_FUN_14b3b07a0;
  param_1[0x75] = &PTR_FUN_14b3b07d0;
  param_1[0x76] = &PTR_FUN_14b3b0800;
  param_1[0x77] = &PTR_FUN_14b3b0830;
  param_1[0x78] = &PTR_FUN_14b3b0870;
  param_1[0x79] = &PTR_FUN_14b3b0890;
  param_1[0x7a] = &PTR_FUN_14b3b08c0;
  param_1[0x7b] = &PTR_FUN_14b3b0990;
  param_1[0x7c] = &PTR_FUN_14b3b09e0;
  param_1[0x7d] = &PTR_FUN_14b3b0aa0;
  param_1[0x7e] = &PTR_FUN_14b3b0ac0;
  param_1[0x7f] = &PTR_FUN_14b3b0b40;
  param_1[0x80] = &PTR_FUN_14b3b0b60;
  param_1[0x81] = &PTR_FUN_14b3b0b70;
  param_1[0x82] = &PTR_FUN_14b3b0bb0;
  param_1[0x83] = &PTR_FUN_14b3b0c20;
  param_1[0x84] = &PTR_FUN_14b3b0c50;
  param_1[0x85] = &PTR_FUN_14b3b0cf0;
  param_1[0x86] = &PTR_FUN_14b3b0d10;
  param_1[0x87] = &PTR_FUN_14b3b0d30;
  if (param_1[0x2a5] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  if (param_1[0x2a3] != 0) {
    FUN_1400020a8();
  }
  FUN_140ce5470(param_1 + 0x29b);
  if (param_1[0x298] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x296] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x291] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f4a8(param_1 + 0x276);
  if (param_1[0x273] != 0) {
    FUN_1400020a8();
  }
  FUN_1409998f6(param_1 + 0x26f,1);
  if (param_1[0x26b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x269] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x267] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x265] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x264];
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
  if (param_1[0x25a] != 0) {
    plVar3 = param_1 + 0x25e;
    if ((longlong *)param_1[0x25c] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x25c];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_1403d7b38(param_1 + 0x23f);
  FUN_140ce5524(param_1 + 0x23a,1);
  if (param_1[0x226] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x224] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x200] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1fe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1fc] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1fa) == '\x01') {
    *(undefined1 *)(param_1 + 0x1fa) = 0;
  }
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0xffffffffffffffff;
  param_1[0x1d7] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1da) = 0;
  if (*(int *)((longlong)param_1 + 0xed4) != 0) {
    FUN_140115c12(param_1 + 0x1d9,0);
  }
  param_1[0x1d8] = 0;
  if (param_1[0x1d9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d5] != 0) {
    FUN_1400020a8();
  }
  FUN_1403e0ff1(param_1[0x1ca],*(undefined4 *)(param_1 + 0x1cb));
  if (param_1[0x1ca] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1c4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x1bf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1bd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1bb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1af] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ad] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ab] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a3] != 0) {
    FUN_1400020a8();
  }
  FUN_14063ab46(param_1 + 0x182);
  FUN_140ce54a8(param_1 + 0x17e,1);
  FUN_144760e21(param_1[0x172],*(undefined4 *)(param_1 + 0x173));
  if (param_1[0x172] != 0) {
    FUN_1400020a8();
  }
  FUN_140da32e9(param_1[0x164],*(undefined4 *)(param_1 + 0x165));
  if (param_1[0x164] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x161],*(undefined4 *)(param_1 + 0x162));
  if (param_1[0x161] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a842(param_1 + 0x128);
  plVar3 = (longlong *)param_1[0x125];
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
  FUN_1406399d0(param_1 + 0x105);
  plVar3 = (longlong *)param_1[0x104];
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
  if (param_1[0x100] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7bbc(param_1 + 0xee);
  param_1[0xaa] = &PTR_FUN_14b3b10b0;
  if (param_1[0xb2] != 0) {
    FUN_140872868(param_1 + 0xaa);
  }
  FUN_1403d7c6c(param_1 + 0xaa);
  FUN_1403d7d90(param_1 + 0x88);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140ce5470 FUN_140ce5470 body=55 status=ok
// SIG undefined FUN_140ce5470(void)

void FUN_140ce5470(longlong *param_1)

{
  FUN_140ce55f0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ce54a8 FUN_140ce54a8 body=124 status=ok
// SIG undefined FUN_140ce54a8(void)

void FUN_140ce54a8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140ce5524 FUN_140ce5524 body=203 status=ok
// SIG undefined FUN_140ce5524(void)

void FUN_140ce5524(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 0x38) = *(int *)(param_1[3] + 0x38) + -1;
    UNLOCK();
    lVar2 = param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      lVar4 = lVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      lVar4 = param_1[3];
    }
    LOCK();
    bVar6 = param_1 == *(longlong **)(lVar4 + 0x30);
    if (bVar6) {
      *(longlong *)(lVar4 + 0x30) = lVar3;
    }
    UNLOCK();
    if (!bVar6) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    lVar3 = param_1[2];
    lVar4 = param_1[3];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 == '\0') && ((longlong)*(int *)(lVar4 + 0x20) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x18) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar5) != 0)) {
          FUN_14879b0e2(lVar4 + 0x18,lVar3);
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 0x20) * 0x10 != lVar5);
    }
    LOCK();
    piVar1 = (int *)(lVar2 + 0x38);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140ce55f0 FUN_140ce55f0 body=506 status=ok
// SIG undefined FUN_140ce55f0(void)

void FUN_140ce55f0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140ce56d5;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x30 + (longlong)iVar6 * 0x48) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140ce56d5;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140ce56d5:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140ce57ea FUN_140ce57ea body=228 status=ok
// SIG undefined FUN_140ce57ea(void)

bool FUN_140ce57ea(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    FUN_140ce58ce(param_2,param_1 + 0x88);
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe8);
      lVar6 = (longlong)*(int *)(param_1 + 0xf0) * 0x80 + lVar4;
      do {
        if ((longlong)*(int *)(lVar4 + 0x68) != 0) {
          plVar3 = *(longlong **)(lVar4 + 0x60);
          plVar1 = plVar3 + *(int *)(lVar4 + 0x68);
          do {
            if ((int)param_3[1] != 0) {
              lVar5 = 0;
              do {
                if (*(longlong *)(*param_3 + lVar5) == *plVar3) goto LAB_140ce589b;
                lVar5 = lVar5 + 8;
              } while ((longlong)(int)param_3[1] << 3 != lVar5);
            }
            if ((longlong)(int)param_3[3] == 0) goto LAB_140ce58af;
            lVar5 = 0;
            while (*(longlong *)(param_3[2] + lVar5) != *plVar3) {
              lVar5 = lVar5 + 8;
              if ((longlong)(int)param_3[3] * 8 == lVar5) goto LAB_140ce58af;
            }
LAB_140ce589b:
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar1);
        }
        FUN_140ce58ce(param_2,lVar4);
LAB_140ce58af:
        lVar4 = lVar4 + 0x80;
      } while (lVar4 != lVar6);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 140ce58ce FUN_140ce58ce body=527 status=ok
// SIG undefined FUN_140ce58ce(void)

void FUN_140ce58ce(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  if ((longlong)(int)param_2[1] != 0) {
    lVar13 = (longlong)(int)param_2[1] * 0x28;
    lVar10 = *param_2 + 8;
    do {
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,lVar10,0);
      lVar10 = lVar10 + 0x28;
      lVar13 = lVar13 + -0x28;
    } while (lVar13 != 0);
  }
  iVar2 = (int)param_2[7];
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar5 = 0;
  }
  else {
    puVar4 = (uint *)param_2[6];
    if ((uint *)param_2[6] == (uint *)0x0) {
      puVar4 = (uint *)(param_2 + 4);
    }
    uVar11 = *puVar4;
    if (uVar11 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar12 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar12 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar11 = 0xffffffff;
    iVar3 = iVar2;
    do {
      lVar13 = (longlong)*(int *)(param_2[2] + 0x10 + (longlong)iVar5 * 0x20);
      if (lVar13 != 0) {
        lVar13 = lVar13 * 0x28;
        lVar10 = *(longlong *)(param_2[2] + 8 + (longlong)iVar5 * 0x20) + 8;
        do {
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,lVar10,0);
          lVar10 = lVar10 + 0x28;
          lVar13 = lVar13 + -0x28;
        } while (lVar13 != 0);
        iVar3 = (int)param_2[7];
      }
      uVar11 = uVar11 & ~(uint)uVar12;
      puVar4 = (uint *)param_2[6];
      if ((uint *)param_2[6] == (uint *)0x0) {
        puVar4 = (uint *)(param_2 + 4);
      }
      iVar5 = (int)uVar14;
      lVar13 = (longlong)iVar5;
      uVar6 = puVar4[lVar13] & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar10 = 0;
          do {
            uVar6 = puVar4[lVar13 + lVar10 + 1];
            if (uVar6 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar10 + 1);
              uVar11 = 0xffffffff;
              goto LAB_140ce5a94;
            }
            iVar9 = iVar9 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar8 - lVar13 != lVar10);
          uVar11 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_140ce5a94:
        uVar12 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar12 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return;
}



// FUNCTION 140ce5ade FUN_140ce5ade body=2551 status=ok
// SIG undefined FUN_140ce5ade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ce5ade(longlong param_1,longlong param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  code *pcVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  code **local_180;
  undefined1 *local_178;
  code *local_170;
  double local_168;
  double dStack_160;
  code *local_158;
  double dStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  code *local_f8;
  double dStack_f0;
  double *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar16 = *(longlong *)(param_1 + -0x2d0);
  if (lVar16 == 0) {
    pdVar11 = &DAT_14c8464e0;
    dVar18 = DAT_14c8464f0;
  }
  else {
    pdVar11 = (double *)(lVar16 + 0x260);
    dVar18 = *(double *)(lVar16 + 0x270);
  }
  fVar24 = *(float *)(param_1 + -0xfc);
  lVar16 = param_1 + -0x498;
  dVar1 = pdVar11[1];
  *(double *)(param_2 + 0x50) = *pdVar11 + 0.0;
  *(double *)(param_2 + 0x58) = dVar1 + 0.0;
  *(double *)(param_2 + 0x60) = (double)fVar24 + dVar18;
  lVar12 = *(longlong *)(param_1 + -0x2d0);
  if (lVar12 == 0) {
    local_e8 = DAT_14c846508;
    local_f8 = DAT_14c8464f8;
    dStack_f0 = DAT_14c846500;
  }
  else {
    pcVar4 = *(code **)(lVar12 + 0x240);
    dVar18 = *(double *)(lVar12 + 0x248);
    pdVar5 = *(double **)(lVar12 + 0x250);
    dVar1 = *(double *)(lVar12 + 600);
    pdVar13 = *(double **)(lVar12 + 0x228);
    lVar15 = param_1;
    local_158 = pcVar4;
    dStack_150 = dVar18;
    local_148 = pdVar5;
    uStack_140 = dVar1;
    if (pdVar13 == (double *)0x0) {
      lVar15 = 0x40;
      pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
      dVar6 = DAT_14c8463d8;
      *pdVar13 = DAT_14c8463d0;
      pdVar13[1] = dVar6;
      dVar6 = DAT_14c8463e8;
      pdVar13[2] = DAT_14c8463e0;
      pdVar13[3] = dVar6;
      dVar6 = DAT_14c846500;
      pdVar13[4] = (double)DAT_14c8464f8;
      pdVar13[5] = dVar6;
      pdVar11 = DAT_14c846508;
      pdVar13[6] = (double)DAT_14c846508;
      *(double **)(lVar12 + 0x228) = pdVar13;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar18 != pdVar13[1]);
    auVar2._0_8_ = -(ulonglong)((double)pcVar4 != *pdVar13);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar18 != pdVar13[1]) >> 0x20);
    iVar10 = movmskpd((int)pdVar11,auVar2);
    auVar29._8_4_ = (int)-(ulonglong)(dVar1 != pdVar13[3]);
    auVar29._0_8_ = -(ulonglong)((double)pdVar5 != pdVar13[2]);
    auVar29._12_4_ = (int)(-(ulonglong)(dVar1 != pdVar13[3]) >> 0x20);
    uVar14 = movmskpd((int)lVar15,auVar29);
    if ((uVar14 & 0x3fffffff) != 0 || iVar10 != 0) {
      *(undefined4 *)(pdVar13 + 2) = (undefined4)local_148;
      *(undefined4 *)((longlong)pdVar13 + 0x14) = local_148._4_4_;
      *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_140;
      *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_140._4_4_;
      *pdVar13 = (double)local_158;
      pdVar13[1] = dStack_150;
      FUN_1448052ee(&local_158,&local_f8);
      pdVar13[6] = (double)local_e8;
      pdVar13[4] = (double)local_f8;
      pdVar13[5] = dStack_f0;
    }
    local_e8 = (double *)pdVar13[6];
    local_f8 = (code *)pdVar13[4];
    dStack_f0 = pdVar13[5];
  }
  *(double **)(param_2 + 0xc0) = local_e8;
  *(code **)(param_2 + 0xb0) = local_f8;
  *(double *)(param_2 + 0xb8) = dStack_f0;
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0xb8);
  if ((((lVar16 == 0) || (*(longlong **)(param_1 + -0x70) == (longlong *)0x0)) ||
      (lVar12 = (**(code **)(**(longlong **)(param_1 + -0x70) + 0x7a0))(), lVar12 == 0)) ||
     (*(int *)(lVar12 + 0x60) < 1)) {
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0x58);
    goto LAB_140ce614d;
  }
  lVar12 = FUN_140ce64d6(lVar16);
  pdVar11 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_1 + -0x2d0) != 0) {
    pdVar11 = (double *)(*(longlong *)(param_1 + -0x2d0) + 0x240);
  }
  dVar1 = *pdVar11;
  dVar6 = pdVar11[1];
  dVar7 = pdVar11[2];
  dVar8 = pdVar11[3];
  local_168 = pdVar11[4];
  dStack_160 = pdVar11[5];
  dVar9 = pdVar11[6];
  auVar2 = *(undefined1 (*) [16])(pdVar11 + 8);
  dVar18 = pdVar11[10];
  plVar3 = *(longlong **)(param_1 + -0xd8);
  if (plVar3 == (longlong *)0x0) {
    local_148 = DAT_14c846508;
    local_158 = DAT_14c8464f8;
    dStack_150 = DAT_14c846500;
  }
  else {
    (**(code **)(*plVar3 + 0x680))(plVar3,&local_158);
  }
  dVar19 = (double)FUN_144719204(local_158,0);
  dVar20 = (double)FUN_144719204(dStack_150,0);
  dVar21 = sin(dVar19 * 0.017453292519943295);
  dVar22 = cos(dVar19 * 0.017453292519943295);
  dVar19 = sin(dVar20 * 0.017453292519943295);
  dVar23 = cos(dVar20 * 0.017453292519943295);
  dVar19 = dVar19 * dVar22;
  dVar23 = dVar23 * dVar22;
  dVar28 = -dVar1;
  dVar30 = -dVar6;
  dVar25 = dVar7 * -1.0;
  dVar26 = dVar8 * 1.0;
  dVar31 = dVar23 * dVar25 - dVar28 * dVar21;
  dVar20 = dVar19 * dVar28 - dVar30 * dVar23;
  dVar22 = dVar21 * dVar30 - dVar25 * dVar19;
  dVar22 = dVar22 + dVar22;
  dVar31 = dVar31 + dVar31;
  dVar20 = dVar20 + dVar20;
  auVar29 = divpd(_DAT_149934d80,auVar2);
  dVar23 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar29._0_8_) *
           ((dVar20 * dVar30 - dVar31 * dVar25) + dVar26 * dVar22 + dVar23);
  dVar25 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar29._8_8_) *
           (dVar1 * dVar20 + dVar25 * dVar22 + dVar26 * dVar31 + dVar19);
  dVar31 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar18)) & (ulonglong)(1.0 / dVar18)) *
           (dVar26 * dVar20 + dVar21 + (dVar31 * dVar28 - dVar22 * dVar30));
  fVar27 = (float)SQRT(dVar31 * dVar31 + dVar23 * -0.0 * dVar23 * -0.0 + dVar25 * dVar25);
  fVar24 = (float)SQRT(dVar31 * -0.0 * dVar31 * -0.0 +
                       dVar23 * dVar23 + dVar25 * -0.0 * dVar25 * -0.0);
  dVar22 = DAT_14c8464e8;
  dVar20 = DAT_14c8464f0;
  dVar19 = DAT_14c8464e0;
  if (1e-08 < fVar27) {
    dVar19 = (double)(*(float *)(lVar12 + 0x60) / fVar27);
    dVar22 = -dVar25 * dVar19;
    dVar20 = -dVar31 * dVar19;
    dVar19 = dVar19 * -dVar23;
  }
  if (1e-08 < fVar24) {
    if (fVar27 <= 1e-08) {
      fVar27 = *(float *)(lVar12 + 100) + *(float *)(lVar12 + 0x60);
    }
    else {
      fVar27 = *(float *)(lVar12 + 100) + *(float *)(lVar12 + 0x60);
      if (ABS(dVar19) <= (double)fVar27) goto LAB_140ce5fc4;
    }
    dVar19 = (double)(fVar27 / fVar24);
    dVar20 = -dVar31 * dVar19;
    dVar22 = -dVar25 * dVar19;
    dVar19 = -dVar23 * dVar19;
  }
LAB_140ce5fc4:
  lVar15 = *(longlong *)(param_1 + -0x70);
  if (lVar15 == 0) {
LAB_140ce63b7:
    lVar17 = 0;
  }
  else {
    lVar17 = *(longlong *)(lVar15 + 0x658);
    if (lVar17 == 0) {
      lVar17 = *(longlong *)(lVar15 + 0x660);
      if ((DAT_14c950c29 & lVar17 != 0) != 0) goto LAB_140ce64a2;
      if (lVar17 != 0) goto LAB_140ce5fee;
      goto LAB_140ce63b7;
    }
    if (DAT_14c950c29 == 1) {
LAB_140ce64a2:
      FUN_1456cec3c(lVar17);
    }
LAB_140ce5fee:
    if (DAT_14cb06da8 == 0) {
      local_180 = &local_158;
      local_158 = FUN_1449e2820;
      local_170 = FUN_14081d0ea;
      local_178 = &LAB_1464003b0;
      local_188 = &LAB_147d17bdf;
      local_190 = &LAB_1417edf22;
      local_198 = L"Engine";
      local_1a0 = 0;
      local_1a8 = 0x10000000;
      local_1b0 = 8;
      local_1b8 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_140ce63b7;
  }
  FUN_140ce6516(&local_158,lVar17);
  dVar31 = auVar2._0_8_ * (dVar19 + local_138 + *(double *)(lVar12 + 0x30));
  dVar22 = auVar2._8_8_ * (dVar22 + local_130 + *(double *)(lVar12 + 0x38));
  dVar18 = dVar18 * (dVar20 + local_128 + *(double *)(lVar12 + 0x40));
  dVar20 = dVar22 * dVar1 - dVar6 * dVar31;
  dVar21 = dVar18 * dVar6 - dVar7 * dVar22;
  dVar19 = dVar31 * dVar7 - dVar1 * dVar18;
  dVar21 = dVar21 + dVar21;
  dVar19 = dVar19 + dVar19;
  dVar20 = dVar20 + dVar20;
  *(double *)(param_2 + 200) =
       local_168 + (dVar20 * dVar6 - dVar19 * dVar7) + dVar8 * dVar21 + dVar31;
  *(double *)(param_2 + 0xd0) =
       dStack_160 + (dVar7 * dVar21 - dVar1 * dVar20) + dVar8 * dVar19 + dVar22;
  *(double *)(param_2 + 0xd8) = dVar9 + dVar8 * dVar20 + dVar18 + (dVar19 * dVar1 - dVar21 * dVar6);
LAB_140ce614d:
  lVar12 = *(longlong *)(param_1 + -0x70);
  if ((lVar12 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar12);
  }
  *(longlong *)(param_2 + 0xf0) = lVar12;
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1 + 0x30,&local_158);
  *(code **)(param_2 + 0x108) = local_158;
  *(double *)(param_2 + 0x110) = dStack_150;
  if (param_2 != 0) {
    lVar12 = FUN_140344898();
    if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
      if ((lVar16 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar16);
      }
      *(longlong *)(param_2 + 0xa58) = lVar16;
      if (*(int *)(param_1 + 0x1eb0) < 1) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x1ea8) + 0x20);
        if ((lVar16 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar16);
        }
        if ((lVar16 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(lVar16);
        }
      }
      *(longlong *)(param_2 + 0xa50) = lVar16;
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ce64d6 FUN_140ce64d6 body=64 status=ok
// SIG undefined FUN_140ce64d6(void)

undefined * FUN_140ce64d6(longlong param_1)

{
  longlong lVar1;
  
  if ((((param_1 != 0) && (*(longlong **)(param_1 + 0x428) != (longlong *)0x0)) &&
      (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0x7a0))(), lVar1 != 0)) &&
     (0 < *(int *)(lVar1 + 0x60))) {
    return *(undefined **)(lVar1 + 0x58);
  }
  FUN_148f00bd8();
  return &DAT_14cbe6ef8;
}



// FUNCTION 140ce6516 FUN_140ce6516 body=131 status=ok
// SIG undefined FUN_140ce6516(void)

undefined8 * FUN_140ce6516(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x348))(param_2,local_a8,DAT_14cbe6ef0);
    FUN_1448ac920(param_1,local_a8);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce659a FUN_140ce659a body=379 status=ok
// SIG undefined FUN_140ce659a(void)

undefined8 * FUN_140ce659a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  plVar1 = *(longlong **)(param_1 + -0x108);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
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
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
         DAT_14cbadd90 + 0x30)) && ((*(byte *)(plVar1 + 0x84) & 2) != 0)) {
      cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
      if (cVar2 != '\0') {
        lVar3 = FUN_14030d330(plVar1);
        if (lVar3 != 0) {
          uVar4 = 0;
          if (*(int *)(lVar3 + 1000) != 1) {
            uVar4 = 0x3fc3333340000000;
          }
          *param_2 = 0;
          param_2[1] = uVar4;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  FUN_14570227a(param_2);
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140ce6716 FUN_140ce6716 body=198 status=ok
// SIG undefined FUN_140ce6716(void)

longlong FUN_140ce6716(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x130;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x130) == *param_3) {
          if (lVar3 != 0) goto LAB_140ce677a;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x120);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140ce67de(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x130 + *param_1;
LAB_140ce677a:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 140ce67de FUN_140ce67de body=1773 status=ok
// SIG undefined FUN_140ce67de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_140ce67de(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_188 [40];
  ulonglong local_160;
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
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_145797782(param_1,iVar17);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar9 = iVar19 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar10 = iVar19 + 1;
    iVar13 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar13 = iVar19;
    }
    if (iVar13 >> 5 == iVar9) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar9 = iVar19;
        }
        else {
          uVar12 = iVar19 + 0x20U >> 5;
          local_160 = (ulonglong)uVar12;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar4 = 4;
            if (4 < uVar12) {
              uVar4 = uVar12;
            }
          }
          else {
            uVar4 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar6 = FUN_144a3809e(uVar4 << 2,0);
          iVar9 = (int)(uVar6 >> 2);
          iVar10 = -0x20;
          if ((int)local_160 <= iVar9) {
            iVar10 = iVar9 << 5;
          }
          iVar9 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar15,iVar9);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar9 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar9 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = plVar15;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar19 & 0x1f;
    puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar13 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar5 = (longlong)iVar17;
    iVar19 = *(int *)(*param_1 + 4 + lVar5 * 0x130);
    *(int *)(param_1 + 6) = iVar19;
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x130) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar11 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar11 = puVar1;
  }
  iVar19 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar19 = iVar17;
  }
  puVar11[iVar19 >> 5] = puVar11[iVar19 >> 5] | 1 << ((byte)iVar17 & 0x1f);
  plVar15 = (longlong *)(*param_1 + lVar5 * 0x130);
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_e8 = _DAT_14c846250;
  uStack_e0 = DAT_14c846258;
  local_d8 = _DAT_14c846260;
  uStack_d0 = _DAT_14c846268;
  local_c8 = _DAT_14c846270;
  uStack_c0 = _DAT_14c846278;
  local_b8 = _DAT_14c846280;
  uStack_b0 = _DAT_14c846288;
  local_a8 = _DAT_14c846250;
  uStack_a0 = DAT_14c846258;
  local_98 = _DAT_14c846260;
  uStack_90 = _DAT_14c846268;
  local_88 = _DAT_14c846270;
  uStack_80 = _DAT_14c846278;
  local_78 = _DAT_14c846280;
  uStack_70 = _DAT_14c846288;
  local_68 = 0;
  local_58 = DAT_14c846338;
  local_60 = DAT_14c846330;
  local_4c = DAT_14c846338;
  local_54 = DAT_14c846330;
  pvVar2 = (void *)(*param_1 + 0x60 + lVar5 * 0x130);
  *(undefined8 *)((longlong)pvVar2 + -0x60) = *(undefined8 *)*param_4;
  *(undefined8 *)((longlong)pvVar2 + -0x50) = 0;
  *(undefined8 *)((longlong)pvVar2 + -0x48) = 0;
  local_158 = 0;
  uStack_150 = 0;
  *(undefined8 *)((longlong)pvVar2 + -0x40) = 0;
  *(undefined8 *)((longlong)pvVar2 + -0x38) = 0;
  local_148 = 0;
  uStack_140 = 0;
  *(undefined8 *)((longlong)pvVar2 + -0x30) = 0;
  *(undefined8 *)((longlong)pvVar2 + -0x28) = 0;
  local_138 = 0;
  uStack_130 = 0;
  *(undefined8 *)((longlong)pvVar2 + -0x20) = 0;
  *(undefined8 *)((longlong)pvVar2 + -0x18) = 0;
  local_128 = 0;
  uStack_120 = 0;
  *(undefined8 *)((longlong)pvVar2 + -0x10) = 0;
  *(undefined8 *)((longlong)pvVar2 + -8) = 0;
  local_118 = 0;
  uStack_110 = 0;
  memcpy(pvVar2,&local_108,0xc0);
  FUN_14058aa5c(&local_158);
  *(undefined4 *)((longlong)pvVar2 + 0xc0) = 0xffffffff;
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) ||
     ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34))) {
LAB_140ce698a:
    cVar3 = '\0';
  }
  else {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar19 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar19 == -1) goto LAB_140ce698a;
    do {
      pvVar2 = (void *)(*param_1 + (longlong)iVar19 * 0x130);
      if (*(longlong *)(*param_1 + (longlong)iVar19 * 0x130) == *plVar15) {
        FUN_14058aa5c((longlong)pvVar2 + 0x10);
        memmove(pvVar2,plVar15,0x120);
        FUN_140a0a534(param_1,iVar17);
        cVar3 = '\x01';
        break;
      }
      iVar19 = *(int *)((longlong)pvVar2 + 0x120);
      cVar3 = '\0';
    } while (iVar19 != -1);
  }
  if (param_5 != (char *)0x0) {
    *param_5 = cVar3;
  }
  if (cVar3 != '\0') goto LAB_140ce6a08;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar12 = 1;
  if (3 < uVar4) {
    uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar5 & 0x1f);
  }
  if (((int)uVar4 < 1) || ((int)uVar12 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    *(uint *)((longlong)plVar15 + 0x124) = param_3;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar15 + 0x24) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar17;
    goto LAB_140ce6a08;
  }
  *(uint *)(param_1 + 9) = uVar12;
  plVar15 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar15,0,0,4);
    uVar12 = *(uint *)(param_1 + 9);
  }
  plVar7 = param_1 + 7;
  if (uVar12 == 1) {
    if (*plVar15 != 0) {
      FUN_1446efa72(plVar15,0,0,4);
    }
LAB_140ce6ae4:
    uVar4 = 0;
    do {
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar7;
      }
      *(undefined4 *)((longlong)plVar15 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar12 != uVar4);
  }
  else {
    if (uVar12 == 0) goto LAB_140ce6a08;
    FUN_1446efa72(plVar15,0,uVar12,4);
    if (0 < (int)uVar12) goto LAB_140ce6ae4;
  }
  iVar19 = (int)param_1[5];
  if (iVar19 == 0) {
    uVar6 = 0;
    uVar16 = 1;
    iVar9 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar12 = *puVar11;
    if (uVar12 == 0) {
      iVar9 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar9 = iVar19 + -1;
      }
      uVar6 = 0;
      uVar16 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar16 = uVar6;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar6) goto LAB_140ce6a08;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar11[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar6 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar12 & uVar12);
    uVar20 = uVar16 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar9 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar9) {
      iVar9 = iVar19;
    }
  }
  if (iVar9 < iVar19) {
    uVar12 = 0xffffffff;
    do {
      lVar5 = *param_1;
      lVar18 = (longlong)iVar9 * 0x130;
      uVar20 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar5 + lVar18) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar5 + lVar18)) & (longlong)(int)param_1[9] - 1U;
      iVar19 = (int)uVar20;
      *(int *)(lVar5 + 0x124 + lVar18) = iVar19;
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar7;
      }
      *(undefined4 *)(lVar5 + 0x120 + lVar18) =
           *(undefined4 *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & uVar20) * 4);
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar7;
      }
      *(int *)((longlong)plVar15 + ((longlong)iVar19 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      uVar12 = ~(uint)uVar16 & uVar12;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar19 = (int)param_1[5];
      iVar9 = (int)uVar6;
      lVar5 = (longlong)iVar9;
      uVar4 = puVar11[lVar5] & uVar12;
      if (uVar4 == 0) {
        iVar13 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar13 = iVar19 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar9) {
          iVar14 = iVar9;
        }
        if (iVar13 <= iVar9) break;
        lVar18 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar11[lVar5 + lVar18 + 1];
          if (uVar4 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar14 - lVar5 == lVar18) goto LAB_140ce6a08;
        }
        uVar6 = (ulonglong)(iVar9 + (int)lVar18 + 1);
        uVar12 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar4 & uVar4);
      uVar20 = uVar16 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar9 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar19);
  }
LAB_140ce6a08:
  *param_2 = iVar17;
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce6ecc FUN_140ce6ecc body=725 status=ok
// SIG undefined FUN_140ce6ecc(void)

void FUN_140ce6ecc(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x58);
    lVar4 = (longlong)*(int *)(param_1 + 0x60) << 4;
    do {
      if ((plVar6[1] != 0) || (*plVar6 != 0)) {
        local_a8 = param_5;
        FUN_140ce71a2(plVar6,param_2,param_3,param_4);
      }
      plVar6 = plVar6 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  local_78 = 0;
  uStack_70 = 0;
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    local_90 = *(longlong **)(param_1 + 0x78);
    local_88 = local_90 + (longlong)*(int *)(param_1 + 0x80) * 3;
    do {
      if ((local_90[1] != 0) || (*local_90 != 0)) {
        uVar2 = uStack_70 >> 0x20;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        if ((int)uVar2 != 0) {
          FUN_140824bde(&local_78,0);
        }
        local_a8 = param_5;
        FUN_140ce71a2(local_90,&local_78,param_3,param_4);
        lVar4 = local_78;
        lVar7 = (longlong)(int)uStack_70;
        if (lVar7 != 0) {
          local_98 = (longlong *)CONCAT71(local_98._1_7_,*(undefined1 *)((longlong)local_90 + 0x14))
          ;
          lVar5 = 0;
          do {
            local_80 = *(undefined8 *)(lVar4 + lVar5);
            FUN_1447a7018(param_2);
            if (((ulonglong)local_98 & 1) != 0) {
              FUN_1447a7018(param_3);
            }
            lVar5 = lVar5 + 8;
          } while (lVar7 * 8 != lVar5);
        }
      }
      local_90 = local_90 + 3;
    } while (local_90 != local_88);
  }
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    local_98 = *(longlong **)(param_1 + 0x88);
    local_90 = local_98 + (longlong)*(int *)(param_1 + 0x90) * 3;
    do {
      if (((local_98[1] != 0) || (*local_98 != 0)) &&
         (uVar3 = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b, *(uint *)(param_4 + 4) = uVar3,
         fVar8 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0,
         fVar8 < *(float *)(local_98 + 2) || fVar8 == *(float *)(local_98 + 2))) {
        uVar2 = uStack_70 >> 0x20;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        if ((int)uVar2 != 0) {
          FUN_140824bde(&local_78,0);
        }
        local_a8 = param_5;
        FUN_140ce71a2(local_98,&local_78,param_3,param_4);
        lVar4 = local_78;
        lVar7 = (longlong)(int)uStack_70;
        if (lVar7 != 0) {
          bVar1 = *(byte *)((longlong)local_98 + 0x14);
          lVar5 = 0;
          do {
            local_80 = *(undefined8 *)(lVar4 + lVar5);
            FUN_1447a7018(param_2);
            if ((bVar1 & 1) != 0) {
              FUN_1447a7018(param_3);
            }
            lVar5 = lVar5 + 8;
          } while (lVar7 * 8 != lVar5);
        }
      }
      local_98 = local_98 + 3;
    } while (local_98 != local_90);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ce71a2 FUN_140ce71a2 body=153 status=ok
// SIG undefined FUN_140ce71a2(void)

void FUN_140ce71a2(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)param_1[1];
  if (plVar2 == (longlong *)0x0) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      lVar4 = *param_2;
      iVar1 = (int)param_2[1];
      lVar6 = (longlong)iVar1;
      if (lVar6 != 0) {
        uVar5 = 0;
        do {
          if (*(longlong *)(lVar4 + uVar5) == lVar3) {
            if ((int)(~uVar5 >> 3) != 0) {
              return;
            }
            break;
          }
          uVar5 = uVar5 + 8;
        } while (lVar6 * 8 - uVar5 != 0);
      }
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14023b962(param_2,iVar1);
        lVar4 = *param_2;
      }
      *(longlong *)(lVar4 + lVar6 * 8) = lVar3;
    }
  }
  else if ((int)plVar2[8] != param_5) {
    *(int *)(plVar2 + 8) = param_5;
                    /* WARNING: Could not recover jumptable at 0x000140ce7238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2a8))(plVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 140ce723c FUN_140ce723c body=1673 status=ok
// SIG undefined FUN_140ce723c(void)

void FUN_140ce723c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  ulonglong local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined8 local_270;
  longlong local_268;
  longlong *local_260;
  float local_258;
  char local_254;
  undefined1 local_250 [384];
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined1 local_a0 [32];
  undefined1 *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_258 = 0.0;
  local_254 = '\0';
  local_d0 = (undefined1 *)0x0;
  local_c8 = 0x1000000000;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0;
  iStack_ac = 0x20;
  iStack_a8 = -1;
  iStack_a4 = 0;
  local_80 = (undefined1 *)0x0;
  local_78 = 0;
  local_278 = param_2;
  local_270 = param_3;
  local_268 = param_4;
  FUN_1457978de(local_250,*(undefined4 *)(param_1 + 0x50));
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar15 = *(longlong **)(param_1 + 0x48);
    plVar19 = plVar15 + (longlong)*(int *)(param_1 + 0x50) * 3;
    do {
      iVar20 = iStack_a8;
      uVar10 = local_c8;
      if ((char)plVar15[2] == '\0') {
        plVar16 = plVar15;
        if ((plVar15[1] != 0) || (*plVar15 != 0)) goto LAB_140ce7330;
      }
      else {
        plVar16 = (longlong *)0x0;
LAB_140ce7330:
        fVar3 = *(float *)((longlong)plVar15 + 0x14);
        if ((1e-08 < fVar3) || (local_254 == '\x01')) {
          iVar17 = (int)local_c8;
          if ((int)local_c8 != iStack_a4) {
            uVar11 = ((uint)((ulonglong)plVar16 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar16 >> 4))
                     * -0x7a143595;
            uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
            puVar9 = local_80;
            if (local_80 == (undefined1 *)0x0) {
              puVar9 = local_a0;
            }
            iVar8 = *(int *)(puVar9 + (ulonglong)(local_78 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
            if (iVar8 != -1) {
              puVar9 = local_d0;
              if (local_d0 == (undefined1 *)0x0) {
                puVar9 = local_250;
              }
              do {
                puVar1 = (undefined8 *)(puVar9 + (longlong)iVar8 * 0x18);
                if ((longlong *)*puVar1 == plVar16) {
                  if ((float *)(puVar1 + 1) != (float *)0x0 && puVar1 != (undefined8 *)0x0) {
                    local_258 = local_258 - *(float *)(puVar1 + 1);
                  }
                  break;
                }
                iVar8 = *(int *)(puVar1 + 2);
              } while (iVar8 != -1);
            }
          }
          local_258 = local_258 + fVar3;
          if (iStack_a4 == 0) {
            local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 + 1);
            if (local_c8._4_4_ == iVar17) {
              FUN_14593ecc2(local_250,uVar10 & 0xffffffff);
            }
            iVar20 = local_b0;
            if (local_b0 == 0) {
              iVar8 = -1;
            }
            else {
              iVar8 = local_b0 + 0x1e;
              if (-1 < local_b0 + -1) {
                iVar8 = local_b0 + -1;
              }
              iVar8 = iVar8 >> 5;
            }
            iVar12 = local_b0 + 1;
            iVar14 = local_b0 + 0x1f;
            if (-1 < local_b0) {
              iVar14 = local_b0;
            }
            if (iVar14 >> 5 == iVar8) {
              local_b0 = iVar12;
            }
            else {
              if (iStack_ac <= local_b0) {
                local_280 = plVar19;
                if (local_b0 + 0x20U < 0x40) {
                  iStack_ac = 0x20;
                }
                else {
                  uVar11 = local_b0 + 0x20U >> 5;
                  local_288 = (ulonglong)uVar11;
                  if (iStack_ac + 0x1fU < 0x40) {
                    uVar18 = 4;
                    if (4 < uVar11) {
                      uVar18 = uVar11;
                    }
                  }
                  else {
                    uVar18 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
                  }
                  uVar10 = FUN_144a3809e(uVar18 << 2,0);
                  iVar8 = (int)(uVar10 >> 2);
                  iStack_ac = -0x20;
                  if ((int)local_288 <= iVar8) {
                    iStack_ac = iVar8 << 5;
                  }
                }
                FUN_14008f53c(local_c0,local_b0);
                iVar12 = local_b0 + 1;
                plVar19 = local_280;
              }
              iVar8 = iVar12 + 0x1f;
              if (-1 < iVar12) {
                iVar8 = iVar12;
              }
              local_b0 = iVar12;
              if (iVar12 % 0x20 != 0) {
                puVar9 = local_b8;
                if (local_b8 == (undefined1 *)0x0) {
                  puVar9 = local_c0;
                }
                bVar7 = -(char)(iVar12 % 0x20);
                *(uint *)(puVar9 + (longlong)(iVar8 >> 5) * 4) =
                     (uint)(*(int *)(puVar9 + (longlong)(iVar8 >> 5) * 4) << (bVar7 & 0x1f)) >>
                     (bVar7 & 0x1f);
              }
            }
            lVar13 = (longlong)iVar17;
            puVar9 = local_b8;
            if (local_b8 == (undefined1 *)0x0) {
              puVar9 = local_c0;
            }
            bVar7 = (byte)iVar20 & 0x1f;
            *(uint *)(puVar9 + (longlong)(iVar14 >> 5) * 4) =
                 *(uint *)(puVar9 + (longlong)(iVar14 >> 5) * 4) &
                 (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
            iVar20 = iVar17;
          }
          else {
            puVar9 = local_d0;
            if (local_d0 == (undefined1 *)0x0) {
              puVar9 = local_250;
            }
            lVar13 = (longlong)iStack_a8;
            iStack_a8 = *(int *)(puVar9 + lVar13 * 0x18 + 4);
            iStack_a4 = iStack_a4 + -1;
            if (iStack_a4 != 0) {
              *(undefined4 *)(puVar9 + (longlong)*(int *)(puVar9 + lVar13 * 0x18 + 4) * 0x18) =
                   0xffffffff;
            }
          }
          puVar9 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar9 = local_c0;
          }
          iVar17 = iVar20 + 0x1f;
          if (-1 < iVar20) {
            iVar17 = iVar20;
          }
          *(uint *)(puVar9 + (longlong)(iVar17 >> 5) * 4) =
               *(uint *)(puVar9 + (longlong)(iVar17 >> 5) * 4) | 1 << ((byte)iVar20 & 0x1f);
          puVar9 = local_d0;
          if (local_d0 == (undefined1 *)0x0) {
            puVar9 = local_250;
          }
          puVar1 = (undefined8 *)(puVar9 + lVar13 * 0x18);
          *puVar1 = plVar16;
          *(float *)(puVar1 + 1) = fVar3;
          *(undefined4 *)(puVar1 + 2) = 0xffffffff;
          uVar11 = ((uint)((ulonglong)plVar16 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar16 >> 4)) *
                   -0x7a143595;
          uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
          uVar11 = uVar11 >> 0x10 ^ uVar11;
          uVar18 = (int)local_c8 - iStack_a4;
          if ((uVar18 != 0) && (uVar18 != 1)) {
            puVar9 = local_80;
            if (local_80 == (undefined1 *)0x0) {
              puVar9 = local_a0;
            }
            iVar17 = *(int *)(puVar9 + (ulonglong)(local_78 - 1U & uVar11) * 4);
            if (iVar17 != -1) {
              puVar9 = local_d0;
              if (local_d0 == (undefined1 *)0x0) {
                puVar9 = local_250;
              }
              do {
                puVar2 = (undefined8 *)(puVar9 + (longlong)iVar17 * 0x18);
                if ((longlong *)*puVar2 == plVar16) {
                  uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
                  uVar5 = *(undefined4 *)(puVar1 + 1);
                  uVar6 = *(undefined4 *)((longlong)puVar1 + 0xc);
                  *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
                  *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
                  *(undefined4 *)(puVar2 + 1) = uVar5;
                  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar6;
                  FUN_1488b7298(local_250,iVar20);
                  goto LAB_140ce759a;
                }
                iVar17 = *(int *)(puVar2 + 2);
              } while (iVar17 != -1);
            }
          }
          uVar10 = (ulonglong)(((uVar18 >> 1) - 1) + (uint)(uVar18 >> 1 == 0)) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar17 = 1 << ((byte)lVar13 & 0x1f);
          if ((uint)lVar13 < 3) {
            iVar17 = 8;
          }
          if (uVar18 < 4) {
            iVar17 = 8;
          }
          if (((int)uVar18 < 1) || (iVar17 <= local_78)) {
            uVar11 = local_78 - 1U & uVar11;
            *(uint *)((longlong)puVar1 + 0x14) = uVar11;
            puVar9 = local_80;
            if (local_80 == (undefined1 *)0x0) {
              puVar9 = local_a0;
            }
            *(undefined4 *)(puVar1 + 2) =
                 *(undefined4 *)(puVar9 + ((longlong)local_78 - 1U & (longlong)(int)uVar11) * 4);
            puVar9 = local_80;
            if (local_80 == (undefined1 *)0x0) {
              puVar9 = local_a0;
            }
            *(int *)(puVar9 + ((longlong)local_78 - 1U & (longlong)(int)uVar11) * 4) = iVar20;
          }
          else {
            local_78 = iVar17;
            FUN_140ce78c6(local_250);
          }
        }
      }
LAB_140ce759a:
      plVar15 = plVar15 + 3;
    } while (plVar15 != plVar19);
  }
  lVar13 = local_268;
  uVar11 = *(int *)(local_268 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)(local_268 + 4) = uVar11;
  bVar7 = FUN_145797962(&local_258,&local_260,(float)(uVar11 >> 9 | 0x3f800000) + -1.0);
  if (((bVar7 & local_260 != (longlong *)0x0) != 0) && ((local_260[1] != 0 || (*local_260 != 0)))) {
    local_298 = param_5;
    FUN_140ce71a2(local_260,local_278,local_270,lVar13);
  }
  local_78 = 0;
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145797816(local_250);
  if ((local_70 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ce78c6 FUN_140ce78c6 body=543 status=ok
// SIG undefined FUN_140ce78c6(void)

void FUN_140ce78c6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1446efa72(param_1 + 0x1d0,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 0x1d8);
  uVar2 = local_58;
  if (uVar7 != 0) {
    lVar1 = param_1 + 0x1b0;
    uVar6 = 0;
    FUN_140a8e97c(lVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1d8) + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = param_1 + 400;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x1a0) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar2 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        lVar5 = *(longlong *)(local_70 + 0x180);
        if (*(longlong *)(local_70 + 0x180) == 0) {
          lVar5 = local_70;
        }
        lVar4 = (longlong)iVar3;
        uVar10 = *(ulonglong *)(lVar5 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0x1d8) - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar5 + 0x14 + lVar4 * 0x18) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & uVar10) * 4);
        lVar5 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x1d8) - 1U) * 4) = iVar3;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ce7aee FUN_140ce7aee body=244 status=ok
// SIG undefined FUN_140ce7aee(void)

undefined8 * FUN_140ce7aee(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b91ce20;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0x1010;
  param_1[0x9e] = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  local_20 = "usabilitydata_placeable_default";
  local_18 = 0x1f;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  if (param_1[0x35] != (ulonglong)uVar1) {
    param_1[0x37] = 0;
  }
  param_1[0x35] = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce7be4 FUN_140ce7be4 body=474 status=ok
// SIG undefined FUN_140ce7be4(void)

float FUN_140ce7be4(longlong param_1,double *param_2,undefined8 param_3,float param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auStack_c8 [32];
  float *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined4 local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  auVar6._0_8_ = *param_2 * 1.52587890625e-05 + 0.5;
  auVar6._8_8_ = 0;
  auVar6 = roundpd(auVar6,auVar6,1);
  auVar7._0_8_ = param_2[1] * 1.52587890625e-05 + 0.5;
  auVar7._8_8_ = 0;
  auVar7 = roundpd(auVar7,auVar7,1);
  auVar5._0_8_ = param_2[2] * 1.52587890625e-05 + 0.5;
  auVar5._8_8_ = 0;
  auVar5 = roundpd(auVar5,auVar5,1);
  local_90 = (double)(float)(param_2[2] - auVar5._0_8_ * 65536.0);
  dVar1 = (double)(float)(param_2[1] - auVar7._0_8_ * 65536.0);
  dVar2 = (double)(float)(*param_2 - auVar6._0_8_ * 65536.0);
  local_a0 = dVar2;
  local_98 = dVar1;
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    fVar8 = 0.0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar4 = (longlong)*(int *)(param_1 + 0x38) * 0x48;
    fVar8 = 0.0;
    do {
      local_84 = cosf((float)((*(double *)(lVar3 + 0x28) * dVar2 + *(double *)(lVar3 + 0x30) * dVar1
                              ) - (double)(*(float *)(lVar3 + 0x38) * param_4)));
      local_88 = 0;
      local_a8 = &local_84;
      FUN_140ce7dc0(lVar3,&local_a0);
      fVar8 = fVar8 + local_84 * *(float *)(lVar3 + 4);
      lVar3 = lVar3 + 0x48;
      lVar4 = lVar4 + -0x48;
    } while (lVar4 != 0);
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return fVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce7dc0 FUN_140ce7dc0 body=545 status=ok
// SIG undefined FUN_140ce7dc0(void)

void FUN_140ce7dc0(longlong param_1,double *param_2,float param_3,float *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  dVar1 = 32768.0 - ABS(param_2[1]);
  dVar3 = 32768.0 - ABS(*param_2);
  if ((400.0 <= dVar1) && (400.0 <= dVar3)) {
    return;
  }
  dVar5 = dVar3 / 400.0;
  if (1.0 <= dVar5) {
    dVar5 = 1.0;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  dVar2 = dVar1 / 400.0;
  fVar4 = (float)((dVar3 * *(double *)(param_1 + 0x28) + dVar1 * *(double *)(param_1 + 0x30)) -
                 (double)(param_3 * *(float *)(param_1 + 0x38)));
  if (1.0 <= dVar2) {
    dVar2 = 1.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  fVar4 = (float)(longlong)
                 (fVar4 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar4 < 0.0) * 4)) *
          -6.2831855 + fVar4;
  if (1.5707964 < fVar4) {
    fVar7 = 3.1415927;
  }
  else {
    if (-1.5707964 <= fVar4) {
      fVar7 = 1.0;
      goto LAB_140ce7eea;
    }
    fVar7 = -3.1415927;
  }
  fVar4 = fVar7 - fVar4;
  fVar7 = -1.0;
LAB_140ce7eea:
  fVar6 = fVar4 * fVar4;
  fVar4 = (((((fVar6 * -2.3889859e-08 + 2.7525562e-06) * fVar6 + -0.00019840874) * fVar6 +
            0.008333331) * fVar6 + -0.16666667) * fVar6 + 1.0) * fVar4;
  fVar7 = (((((fVar6 * -2.6051615e-07 + 2.4760495e-05) * fVar6 + -0.0013888378) * fVar6 +
            0.041666638) * fVar6 + -0.5) * fVar6 + 1.0) * fVar7;
  *param_4 = (float)((double)(*param_4 - fVar4) * dVar2 * dVar5 + (double)fVar4);
  *param_5 = (float)((double)(*param_5 - fVar7) * dVar2 * dVar5 + (double)fVar7);
  return;
}



// FUNCTION 140ce7fe2 FUN_140ce7fe2 body=173 status=ok
// SIG undefined FUN_140ce7fe2(void)

void FUN_140ce7fe2(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48 [2];
  longlong *local_38;
  undefined4 local_30;
  undefined1 local_24 [4];
  undefined8 local_20;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0xe] + 0x38 != 0) {
    local_30 = (undefined4)param_1[0x13];
    local_58 = local_48;
    local_48[0] = 0;
    local_48[1] = 0;
    local_24[0] = 1;
    local_20 = 0xffffffff;
    local_14 = 0;
    local_38 = param_1;
    cVar1 = (**(code **)(*param_1 + 0xb8))(param_1,local_24,param_1[0xe] + 0x38,param_2);
    if (cVar1 != '\0') {
      FUN_140ce83e6(param_1,local_48);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140ce8090(&local_38);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce8090 FUN_140ce8090 body=69 status=ok
// SIG undefined FUN_140ce8090(void)

void FUN_140ce8090(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[0x13] != (int)param_1[1]) {
    (**(code **)(*plVar1 + 200))(plVar1);
    FUN_140c5f00a(plVar1);
    FUN_140ce80dc(*(undefined8 *)(*param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 140ce80dc FUN_140ce80dc body=89 status=ok
// SIG undefined FUN_140ce80dc(void)

void FUN_140ce80dc(longlong *param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  (**(code **)(*param_1 + 0x78))();
  cVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (cVar1 == '\0') {
    uVar2 = CONCAT71(uVar3,3);
    if ((char)param_1[0x29] != '\x02') {
      if ((char)param_1[0x29] != '\x01') {
        return;
      }
      FUN_140ce9096(param_1);
      *(undefined1 *)(param_1 + 0x29) = 2;
    }
  }
  FUN_140ce81fa(param_1,uVar2 & 0xffffffff);
  return;
}



// FUNCTION 140ce8136 FUN_140ce8136 body=85 status=ok
// SIG undefined FUN_140ce8136(void)

bool FUN_140ce8136(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar4 = 0;
    do {
      cVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x60))();
      if (cVar3 != '\0') {
        return true;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return 0 < *(int *)(param_1 + 0x160);
}



// FUNCTION 140ce81a4 FUN_140ce81a4 body=85 status=ok
// SIG undefined FUN_140ce81a4(void)

bool FUN_140ce81a4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar4 = 0;
    do {
      cVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x60))();
      if (cVar3 != '\0') {
        return true;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return 0 < *(int *)(param_1 + 0x160);
}



// FUNCTION 140ce81fa FUN_140ce81fa body=246 status=ok
// SIG undefined FUN_140ce81fa(void)

void FUN_140ce81fa(longlong param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)(param_1 + 0x148);
  if (bVar1 != param_2) {
    if (param_2 == 3) {
      if ((bVar1 & 0xfd) == 0) {
        if (bVar1 == 1) {
          FUN_140ce9096(param_1);
        }
        *(undefined1 *)(param_1 + 0x148) = 3;
        FUN_143e421ba(param_1);
        return;
      }
    }
    else if (param_2 == 2) {
      if (bVar1 == 1) {
        FUN_140ce9096(param_1);
        *(undefined1 *)(param_1 + 0x148) = 2;
      }
    }
    else if (param_2 == 1) {
      if ((bVar1 != 0) && (bVar1 != 2)) {
        if (bVar1 != 3) {
          return;
        }
        FUN_140ee7a6a(param_1);
      }
      *(undefined1 *)(param_1 + 0x148) = 1;
      iVar2 = *(int *)(param_1 + 0xa8);
      if ((longlong)iVar2 != 0) {
        lVar3 = *(longlong *)(param_1 + 0xa0);
        lVar5 = 0;
        do {
          plVar4 = *(longlong **)(lVar3 + lVar5);
          *(undefined4 *)(plVar4 + 0xb) = 0;
          (**(code **)(*plVar4 + 0x10))(plVar4);
          FUN_140e13536(plVar4);
          lVar5 = lVar5 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar5);
      }
      FUN_143e41b9a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140ce82f0 FUN_140ce82f0 body=113 status=ok
// SIG undefined FUN_140ce82f0(void)

undefined8 FUN_140ce82f0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  longlong *plVar7;
  
  plVar7 = param_1;
  if (param_3 != (longlong *)0x0) {
    plVar7 = param_3;
    lVar2 = (**(code **)(*param_3 + 8))(param_3);
    lVar3 = FUN_140ce8362();
    if (((lVar3 != 0) &&
        (plVar7 = (longlong *)(longlong)*(int *)(lVar3 + 0x38),
        *(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)plVar7 * 8) == lVar3 + 0x30)) {
      uVar4 = FUN_140ce839c(param_1,param_2,param_4,param_3);
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar1 = 1;
      goto LAB_140ce834f;
    }
  }
  bVar6 = (byte)plVar7;
  bVar1 = 0;
  uVar5 = 0;
LAB_140ce834f:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 140ce8362 FUN_140ce8362 body=57 status=ok
// SIG undefined FUN_140ce8362(void)

void FUN_140ce8362(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66850 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66850 =
         FUN_140002ddd(FUN_1465100c0,uVar1,L"GbxStatusEffectAspectData_AttributeEffectSet");
  }
  return;
}



// FUNCTION 140ce839c FUN_140ce839c body=73 status=ok
// SIG undefined FUN_140ce839c(void)

undefined1 FUN_140ce839c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_140ce8e94();
  uVar2 = FUN_140ce91a4(param_1,param_4);
  lVar3 = FUN_140ce88dc(uVar2,*(undefined8 *)(param_3 + 0x18));
  *(longlong *)(lVar1 + 0x20) = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x24) = *(int *)(lVar3 + 0x24) + 1;
  }
  return 1;
}



// FUNCTION 140ce83e6 FUN_140ce83e6 body=116 status=ok
// SIG undefined FUN_140ce83e6(void)

void FUN_140ce83e6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar3 = (int *)*param_2;
    piVar1 = piVar3 + *(int *)(param_2 + 1);
    do {
      if ((longlong)*(int *)(param_1 + 0x98) != 0) {
        uVar2 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x18 + uVar2) == *piVar3) {
            if ((int)(uVar2 >> 3) * -0x33333333 != -1) {
              FUN_140dbdd56(param_1);
            }
            break;
          }
          uVar2 = uVar2 + 0x28;
        } while ((longlong)*(int *)(param_1 + 0x98) * 0x28 != uVar2);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return;
}



// FUNCTION 140ce845a FUN_140ce845a body=642 status=ok
// SIG undefined FUN_140ce845a(void)

void FUN_140ce845a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar7 = *(byte *)(param_1 + 0xc0);
  if (0 < *(int *)(param_1 + 0x98) != (bool)(bVar7 & 1)) {
    if (*(int *)(param_1 + 0x98) < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    if ((bVar7 & 1) == 0) {
      *(byte *)(param_1 + 0xc0) = bVar7 | 1;
      plStack_30 = *(longlong **)(param_1 + 0x30);
      if (plStack_30 == (longlong *)0x0) {
LAB_140ce867b:
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        bVar9 = true;
      }
      else {
        iVar8 = (int)plStack_30[1];
        do {
          if (iVar8 == 0) goto LAB_140ce867b;
          LOCK();
          iVar6 = (int)plStack_30[1];
          bVar9 = iVar8 == iVar6;
          if (bVar9) {
            *(int *)(plStack_30 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar9);
        lVar4 = *(longlong *)(param_1 + 0x28);
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
        local_38 = lVar4 + 0xa0;
        if (lVar4 == 0) {
          local_38 = 0;
        }
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
        bVar9 = false;
      }
      plVar5 = plStack_30;
      FUN_140ce8a52(&local_38);
      plVar2 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_30)(plStack_30);
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
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      bVar7 = *(byte *)(param_1 + 0xc0);
    }
  }
  if ((bVar7 & 2) == 0) {
    *(byte *)(param_1 + 0xc0) = bVar7 | 2;
    plStack_30 = *(longlong **)(param_1 + 0x30);
    if (plStack_30 == (longlong *)0x0) {
LAB_140ce860a:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar9 = true;
    }
    else {
      iVar8 = (int)plStack_30[1];
      do {
        if (iVar8 == 0) goto LAB_140ce860a;
        LOCK();
        iVar6 = (int)plStack_30[1];
        bVar9 = iVar8 == iVar6;
        if (bVar9) {
          *(int *)(plStack_30 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar9);
      lVar4 = *(longlong *)(param_1 + 0x28);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      local_38 = lVar4 + 0xa0;
      if (lVar4 == 0) {
        local_38 = 0;
      }
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar9 = false;
    }
    plVar5 = plStack_30;
    FUN_140ce86ee(&local_38);
    plVar2 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
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



// FUNCTION 140ce86ee FUN_140ce86ee body=180 status=ok
// SIG undefined FUN_140ce86ee(void)

void FUN_140ce86ee(undefined8 *param_1)

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
  uVar5 = (**(code **)(*(longlong *)*param_1 + 8))();
  FUN_140ce87a4(&local_28,uVar5);
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
        (**(code **)(*(longlong *)*param_1 + 0x18))();
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



// FUNCTION 140ce87a4 FUN_140ce87a4 body=310 status=ok
// SIG undefined FUN_140ce87a4(void)

longlong * FUN_140ce87a4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb8cb20;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce88dc FUN_140ce88dc body=374 status=ok
// SIG undefined FUN_140ce88dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ce88dc(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  
  if (param_2 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x28);
    puVar6 = puVar1;
    do {
      puVar6 = (undefined8 *)*puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = DAT_14cb8c270;
        if (DAT_14cb8c270 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)FUN_140595974(0xb40,0);
          lVar10 = 0x47;
          puVar8 = puVar6;
          do {
            puVar7 = puVar8 + 5;
            *puVar8 = puVar7;
            lVar10 = lVar10 + -1;
            puVar8 = puVar7;
          } while (lVar10 != 0);
          *puVar7 = DAT_14cb8c270;
          _DAT_14cb8c278 = _DAT_14cb8c278 + 0x48;
        }
        DAT_14cb8c270 = (undefined8 *)*puVar6;
        _DAT_14cb8c27c = _DAT_14cb8c27c + 1;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        uVar2 = *(uint *)(param_2 + 0xc);
        *(uint *)(puVar6 + 2) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar4 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar4 = *(int *)(lVar10 + 0x10);
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(lVar10 + 0x10) = iVar9;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar4 = iVar9;
          }
        }
        *(int *)((longlong)puVar6 + 0x14) = iVar4;
        puVar6[3] = param_1;
        puVar6[4] = 0x3f800000;
        if (*(longlong *)(param_1 + 0x28) == 0) {
          uVar5 = 0;
        }
        else {
          *(undefined8 **)(*(longlong *)(param_1 + 0x28) + 8) = puVar6;
          uVar5 = *puVar1;
        }
        *puVar6 = uVar5;
        puVar6[1] = puVar1;
        *puVar1 = puVar6;
        return puVar6;
      }
      cVar3 = FUN_1409d2f40(puVar6 + 2);
    } while (cVar3 == '\0');
  }
  return puVar6;
}



// FUNCTION 140ce8a52 FUN_140ce8a52 body=256 status=ok
// SIG undefined FUN_140ce8a52(void)

void FUN_140ce8a52(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined7 uStack_2f;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = (**(code **)(*(longlong *)*param_1 + 8))();
  FUN_140ce87a4(&local_30,uVar6);
  if (local_28 != (longlong *)0x0) {
    iVar5 = (int)local_28[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_28[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_28 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_28;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      lVar3 = CONCAT71(uStack_2f,local_30);
      if (lVar3 != 0) {
        local_30 = 1;
        local_28 = (longlong *)*param_1;
        plVar2 = (longlong *)param_1[1];
        local_20 = plVar2;
        if (plVar2 == (longlong *)0x0) {
          FUN_140ce8b54(lVar3,&local_30);
        }
        else {
          LOCK();
          *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
          UNLOCK();
          FUN_140ce8b54();
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ce8b54 FUN_140ce8b54 body=461 status=ok
// SIG undefined FUN_140ce8b54(void)

void FUN_140ce8b54(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  ulonglong local_50;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x48);
  lVar7 = (longlong)iVar1;
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_140ce8d22((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  *(undefined1 *)(lVar2 + lVar7 * 0x18) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar7 * 0x18) = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(lVar2 + 0x10 + lVar7 * 0x18) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if ((((*(char *)(param_1 + 0x50) == '\0') && (iVar1 = *(int *)(param_1 + 0xc), iVar1 != 0)) &&
      (uVar4 = *(uint *)(param_1 + 8), -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) {
    lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == iVar1)) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      local_50 = *(ulonglong *)(param_1 + 8);
      lVar7 = 0;
      uVar4 = (uint)local_50;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(local_50 >> 0xd) & 0x3fff8)));
        if ((plVar6 == (longlong *)0x0) ||
           (((int)plVar6[2] != iVar1 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) {
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar6;
        }
      }
      if (*(longlong *)(lVar7 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar7 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
      }
      local_78[0] = FUN_143e4d01c;
      local_68 = 0;
      local_58 = &PTR_LAB_14b42ffe0;
      local_38 = 3;
      FUN_14016fdb0(*puVar5,&local_80,local_78);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(local_78);
      *(undefined8 *)(param_1 + 0x38) = local_80;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce8d22 FUN_140ce8d22 body=370 status=ok
// SIG undefined FUN_140ce8d22(void)

void FUN_140ce8d22(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ce8dab;
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
LAB_140ce8dab:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140ce8e94 FUN_140ce8e94 body=471 status=ok
// SIG undefined FUN_140ce8e94(void)

byte * FUN_140ce8e94(longlong param_1,byte *param_2,longlong *param_3)

{
  float *pfVar1;
  longlong *plVar2;
  byte *pbVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  int iVar13;
  float fVar14;
  
  pfVar1 = (float *)(param_2 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x98);
  iVar13 = 0;
  if ((0 < (int)uVar5 & param_2[0x10]) == 1) {
    pcVar12 = (char *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar5 * 0x28 + -0x14);
    uVar10 = (ulonglong)uVar5;
    do {
      if (*pcVar12 == '\0') {
LAB_140ce8f29:
        iVar13 = (int)uVar10 + -1;
        break;
      }
      fVar4 = *(float *)(pcVar12 + -4);
      fVar14 = fVar4 - (*(float *)(*(longlong *)(param_1 + 0x38) + 0x14c) - *(float *)(pcVar12 + -8)
                       );
      if (fVar4 <= fVar14) {
        fVar14 = fVar4;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (*pfVar1 < fVar14) goto LAB_140ce8f29;
      pcVar12 = pcVar12 + -0x28;
      bVar7 = 1 < uVar10;
      uVar10 = uVar10 - 1;
      iVar13 = 0;
    } while (bVar7);
  }
  plVar2 = (longlong *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x98) = uVar5 + 1;
  if (*(uint *)(param_1 + 0x9c) == uVar5) {
    FUN_140ce93e8(plVar2,uVar5);
  }
  lVar8 = (longlong)iVar13 * 0x28;
  memmove((void *)(*plVar2 + lVar8 + 0x28),(void *)(*plVar2 + lVar8),
          (ulonglong)(uVar5 - iVar13) * 0x28);
  lVar6 = *plVar2;
  pbVar3 = (byte *)(lVar6 + lVar8);
  FUN_140ce906b(pbVar3);
  *(int *)(lVar6 + lVar8) = (int)param_3[4];
  *(byte *)(lVar6 + 0x1c + lVar8) = *(byte *)(lVar6 + 0x1c + lVar8) & 0xfe | *param_2;
  if (pbVar3 != param_2) {
    if (*(int *)(param_2 + 4) == -1) {
      if (*(int *)(pbVar3 + 4) == -1) goto LAB_140ce8fbd;
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + 4);
    }
    *(undefined8 *)(pbVar3 + 4) = uVar11;
  }
LAB_140ce8fbd:
  if (pfVar1 != (float *)(pbVar3 + 0x10)) {
    if (param_2[0x10] == 1) {
      *(float *)(pbVar3 + 0x10) = *pfVar1;
      bVar9 = 1;
    }
    else {
      if (pbVar3[0x14] != 1) goto LAB_140ce8fdb;
      bVar9 = 0;
    }
    pbVar3[0x14] = bVar9;
  }
LAB_140ce8fdb:
  *(undefined4 *)(pbVar3 + 0xc) = *(undefined4 *)(*param_3 + 0x14c);
  iVar13 = *(int *)(param_1 + 0x8c);
  *(int *)(param_1 + 0x8c) = iVar13 + 1;
  *(int *)(pbVar3 + 0x18) = iVar13;
  if ((pbVar3[0x1c] & 1) != 0) {
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  }
  if (*(int *)(pbVar3 + 4) != -1) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  }
  if (pbVar3[0x14] == 1) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
  return pbVar3;
}



// FUNCTION 140ce906b FUN_140ce906b body=42 status=ok
// SIG undefined FUN_140ce906b(void)

void FUN_140ce906b(undefined4 *param_1)

{
  *param_1 = DAT_14cb8c3a0;
  *(undefined8 *)(param_1 + 1) = 0xffffffff;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 140ce9096 FUN_140ce9096 body=269 status=ok
// SIG undefined FUN_140ce9096(void)

void FUN_140ce9096(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  bVar1 = *(byte *)(param_1 + 0x2a);
  *(byte *)(param_1 + 0x2a) = bVar1 | 2;
  FUN_140bbb840();
  if (((*(int *)((longlong)param_1 + 0x74) != 0) &&
      (uVar2 = *(uint *)(param_1 + 0xe), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0x74))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar4;
      }
      else {
        lVar5 = 0;
      }
      FUN_14057bc52(param_1,lVar5 + 0xc0);
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  FUN_143e420aa(param_1);
  FUN_140fdf3f4(param_1);
  lVar5 = param_1[0x11];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = param_1[0x10];
    lVar6 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar6);
      if ((*(byte *)(plVar4 + 0xd) & 2) != 0) {
        *(byte *)(plVar4 + 0xd) = *(byte *)(plVar4 + 0xd) & 0xfd;
        (**(code **)(*plVar4 + 0x20))(plVar4);
        (**(code **)(*plVar4 + 0x90))(plVar4);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar5 * 0x10 != lVar6);
  }
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xfd | bVar1 & 2;
  return;
}



// FUNCTION 140ce91a4 FUN_140ce91a4 body=579 status=ok
// SIG undefined FUN_140ce91a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140ce91a4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar8 = (longlong *)(param_1 + 0xb8);
  plVar1 = plVar8;
LAB_140ce91d7:
  plVar1 = (longlong *)*plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar1 = DAT_14cb8c250;
    if (DAT_14cb8c250 == (longlong *)0x0) {
      plVar1 = (longlong *)FUN_140595974(0xfc0,0);
      lVar7 = 0x47;
      plVar9 = plVar1;
      do {
        plVar2 = plVar9 + 7;
        *plVar9 = (longlong)plVar2;
        lVar7 = lVar7 + -1;
        plVar9 = plVar2;
      } while (lVar7 != 0);
      *plVar2 = (longlong)DAT_14cb8c250;
      _DAT_14cb8c258 = _DAT_14cb8c258 + 0x48;
    }
    DAT_14cb8c250 = (longlong *)*plVar1;
    _DAT_14cb8c25c = _DAT_14cb8c25c + 1;
    *plVar1 = 0;
    plVar1[1] = 0;
    lVar7 = *(longlong *)(param_2 + 0x10);
    plVar1[2] = *(longlong *)(param_2 + 8);
    plVar1[3] = lVar7;
    plVar1[4] = 0;
    plVar1[5] = 0;
    *(undefined4 *)(plVar1 + 6) = 0;
    if (*plVar8 == 0) {
      lVar7 = 0;
    }
    else {
      *(longlong **)(*plVar8 + 8) = plVar1;
      lVar7 = *plVar8;
    }
    *plVar1 = lVar7;
    plVar1[1] = (longlong)plVar8;
    *plVar8 = (longlong)plVar1;
    if ((longlong)*(int *)(param_2 + 0x30) != 0) {
      plVar8 = plVar1 + 4;
      plVar9 = *(longlong **)(param_2 + 0x28);
      plVar2 = plVar9 + (longlong)*(int *)(param_2 + 0x30) * 0xe;
      do {
        plVar4 = DAT_14cb8c260;
        if (DAT_14cb8c260 == (longlong *)0x0) {
          plVar4 = (longlong *)FUN_140595974(0x2ac0,0);
          lVar7 = 0x47;
          plVar6 = plVar4;
          do {
            plVar5 = plVar6 + 0x13;
            *plVar6 = (longlong)plVar5;
            lVar7 = lVar7 + -1;
            plVar6 = plVar5;
          } while (lVar7 != 0);
          *plVar5 = (longlong)DAT_14cb8c260;
          _DAT_14cb8c268 = _DAT_14cb8c268 + 0x48;
        }
        DAT_14cb8c260 = (longlong *)*plVar4;
        _DAT_14cb8c26c = _DAT_14cb8c26c + 1;
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = *plVar9;
        *(int *)(plVar4 + 3) = (int)plVar9[1];
        plVar4[4] = 0;
        *(char *)(plVar4 + 5) = (char)plVar9[3];
        *(int *)(plVar4 + 6) = (int)plVar9[4];
        plVar4[7] = 0;
        plVar4[8] = 0;
        plVar4[9] = 0;
        plVar4[7] = plVar9[5];
        uVar3 = FUN_14477b664(plVar9[6]);
        lVar7 = FUN_14477b664(uVar3);
        plVar4[8] = lVar7;
        plVar4[9] = plVar9[7];
        lVar7 = plVar9[9];
        plVar4[10] = plVar9[8];
        plVar4[0xb] = lVar7;
        plVar4[0xc] = plVar9[10];
        *(int *)(plVar4 + 0xd) = (int)plVar9[0xb];
        plVar4[0xe] = 0;
        *(int *)(plVar4 + 0xf) = (int)plVar9[0xd];
        *(undefined4 *)(plVar4 + 0x10) = 0;
        plVar4[0x11] = 0;
        plVar4[0x12] = 0;
        lVar7 = 0;
        if (*plVar8 != 0) {
          *(longlong **)(*plVar8 + 8) = plVar4;
          lVar7 = *plVar8;
        }
        *plVar4 = lVar7;
        plVar4[1] = (longlong)plVar8;
        *plVar8 = (longlong)plVar4;
        plVar9 = plVar9 + 0xe;
      } while (plVar9 != plVar2);
    }
  }
  else if (((((int)plVar1[2] != *(int *)(param_2 + 8)) ||
            (*(int *)((longlong)plVar1 + 0x14) != *(int *)(param_2 + 0xc))) ||
           ((int)plVar1[3] != *(int *)(param_2 + 0x10))) ||
          (*(int *)((longlong)plVar1 + 0x1c) != *(int *)(param_2 + 0x14))) goto LAB_140ce91d7;
  return plVar1;
}



// FUNCTION 140ce93e8 FUN_140ce93e8 body=370 status=ok
// SIG undefined FUN_140ce93e8(void)

void FUN_140ce93e8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ce9471;
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
LAB_140ce9471:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140ce955a FUN_140ce955a body=281 status=ok
// SIG undefined FUN_140ce955a(void)

bool FUN_140ce955a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  
  if (param_1 == 0) {
LAB_140ce966c:
    bVar4 = false;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c952a58) {
      FUN_144b3d300(&DAT_14c952a58);
      if (DAT_14c952a58 == -1) {
        uVar2 = FUN_1446ddbd2();
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar2,FUN_1403a682c);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
    }
    if (DAT_14c952a10 == 0) {
      bVar4 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c952a08 && bVar4) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar4 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c952a08) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (!bVar4) goto LAB_140ce966c;
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c952a10) == 0) goto LAB_140ce966c;
    lVar1 = FUN_140ce9674();
    bVar4 = *(longlong *)(param_1 + 0x70) == lVar1;
  }
  return bVar4;
}



// FUNCTION 140ce9674 FUN_140ce9674 body=130 status=ok
// SIG undefined FUN_140ce9674(void)

undefined8 FUN_140ce9674(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949308) {
    FUN_144b3d300(&DAT_14c949308);
    if (DAT_14c949308 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949300 = FUN_141473ad5(DAT_14c892c5c);
      _Init_thread_footer(&DAT_14c949308);
    }
  }
  return DAT_14c949300;
}



// FUNCTION 140ce96f6 FUN_140ce96f6 body=290 status=ok
// SIG undefined FUN_140ce96f6(void)

void FUN_140ce96f6(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    uVar4 = FUN_1408e1156();
    plVar5 = (longlong *)FUN_144718840(param_2,uVar4);
    if (plVar5 != (longlong *)0x0) {
      if (((param_3 & 2) != 0) && (*(char *)(param_1 + 0x48) != '\x01')) {
        FUN_140ce981a(param_1 + 0x30,local_40);
        (**(code **)(*plVar5 + 0x90))(plVar5,local_40,2);
        plVar3 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
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
      if (((param_3 & 4) != 0) && (*(char *)(param_1 + 0x48) != '\x02')) {
        FUN_140ce981a(param_1 + 0x30,local_40);
        (**(code **)(*plVar5 + 0x90))(plVar5,local_40,1);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_38 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)local_38 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ce981a FUN_140ce981a body=83 status=ok
// SIG undefined FUN_140ce981a(void)

longlong * FUN_140ce981a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140ce986e();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140ce986e FUN_140ce986e body=57 status=ok
// SIG undefined FUN_140ce986e(void)

void FUN_140ce986e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69ce8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69ce8 = FUN_140002ddd(FUN_1465235fe,uVar1,L"InventoryBodyControl");
  }
  return;
}



// FUNCTION 140ce98b6 FUN_140ce98b6 body=31 status=ok
// SIG undefined FUN_140ce98b6(void)

undefined8 FUN_140ce98b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ce98d6 FUN_140ce98d6 body=47 status=ok
// SIG undefined FUN_140ce98d6(void)

void FUN_140ce98d6(longlong param_1)

{
  FUN_1400bb2d8();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400337aa();
    FUN_140ce9906(param_1);
    return;
  }
  return;
}



// FUNCTION 140ce9906 FUN_140ce9906 body=487 status=ok
// SIG undefined FUN_140ce9906(void)

void FUN_140ce9906(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_148183e2a(param_1 + 8);
  }
  if (param_1[7] != 0) {
    uVar9 = *(uint *)(param_1[7] + 0xc0);
    iVar10 = (int)param_1[9];
    *(uint *)(param_1 + 9) = iVar10 + uVar9;
    if ((uint)(*(int *)((longlong)param_1 + 0x4c) - iVar10) < uVar9) {
      FUN_140ce9b04(param_1 + 8,iVar10);
    }
    FUN_140ce9aed((longlong)iVar10 * 0x18 + param_1[8]);
    lVar16 = param_1[7];
    if (0 < *(int *)(lVar16 + 0xc0)) {
      lVar13 = 0x14;
      lVar14 = 0x40;
      lVar15 = 0;
      do {
        lVar11 = *(longlong *)(lVar16 + 0xb8);
        lVar12 = *(longlong *)(lVar11 + -0x40 + lVar14);
        if (lVar12 != 0) {
          dVar1 = *(double *)(lVar12 + 0x210);
          dVar2 = *(double *)(lVar12 + 0x228);
          dVar3 = *(double *)(lVar12 + 0x200);
          dVar4 = *(double *)(lVar12 + 0x208);
          dVar5 = *(double *)(lVar12 + 0x220);
          dVar6 = *(double *)(lVar12 + 0x218);
          dVar7 = *(double *)(lVar11 + lVar14);
          dVar8 = *(double *)(lVar11 + -8 + lVar14);
          lVar16 = param_1[8];
          *(float *)(lVar16 + -0x14 + lVar13) =
               (float)((dVar3 - dVar6) * *(double *)(lVar11 + -0x10 + lVar14));
          *(float *)(lVar16 + -0x10 + lVar13) = (float)((dVar4 - dVar5) * dVar8);
          *(float *)(lVar16 + -0xc + lVar13) = (float)((dVar1 - dVar2) * dVar7);
          dVar7 = *(double *)(lVar11 + lVar14);
          dVar8 = *(double *)(lVar11 + -8 + lVar14);
          *(float *)(lVar16 + -8 + lVar13) =
               (float)((dVar3 + dVar6) * *(double *)(lVar11 + -0x10 + lVar14));
          *(float *)(lVar16 + -4 + lVar13) = (float)((dVar4 + dVar5) * dVar8);
          *(float *)(lVar16 + lVar13) = (float)((dVar1 + dVar2) * dVar7);
          lVar16 = param_1[7];
        }
        lVar15 = lVar15 + 1;
        lVar13 = lVar13 + 0x18;
        lVar14 = lVar14 + 0x80;
      } while (lVar15 < *(int *)(lVar16 + 0xc0));
    }
  }
  uVar9 = *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar9 | 1;
  if ((~uVar9 & 4) == 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  return;
}



// FUNCTION 140ce9aed FUN_140ce9aed body=22 status=ok
// SIG undefined FUN_140ce9aed(void)

void FUN_140ce9aed(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 140ce9b04 FUN_140ce9b04 body=370 status=ok
// SIG undefined FUN_140ce9b04(void)

void FUN_140ce9b04(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ce9b8d;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140ce9b8d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 140ce9c76 FUN_140ce9c76 body=335 status=ok
// SIG undefined FUN_140ce9c76(void)

undefined4 * FUN_140ce9c76(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ce9e8e(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_40[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_40 = *puVar1;
  *(undefined8 *)(local_40 + 3) = *puVar2;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  if (local_40[2] == 0) {
    uVar6 = *local_40;
  }
  else {
    uVar6 = FUN_144a78877(*local_40,local_40[2]);
  }
  cVar4 = FUN_140ce9dc6(param_1,uVar6,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar8 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_40[6] = uVar6;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[5] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140cea084(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140ce9dc6 FUN_140ce9dc6 body=98 status=ok
// SIG undefined FUN_140ce9dc6(void)

undefined8 FUN_140ce9dc6(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_140ce9e28(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1470a3a50(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 140ce9e28 FUN_140ce9e28 body=102 status=ok
// SIG undefined FUN_140ce9e28(void)

int FUN_140ce9e28(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if ((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + lVar3 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x14 + lVar3);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140ce9e8e FUN_140ce9e8e body=502 status=ok
// SIG undefined FUN_140ce9e8e(void)

int * FUN_140ce9e8e(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x1c);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 140cea084 FUN_140cea084 body=621 status=ok
// SIG undefined FUN_140cea084(void)

void FUN_140cea084(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar13 = param_1 + 7;
    FUN_144a1cbf0(plVar13,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar3 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar13;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar14 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar5 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    plVar9 = local_60;
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x1c);
        iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar11 * 0x1c);
        local_70 = uVar5;
        if (iVar4 == 0) {
          iVar4 = *piVar1;
        }
        else {
          local_78 = plVar13;
          iVar4 = FUN_144a78877(*piVar1,iVar4);
          plVar13 = local_78;
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        piVar1[6] = iVar4;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        piVar1[5] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar8 = (longlong *)plVar9[2];
        if ((longlong *)plVar9[2] == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        iVar4 = (int)plVar9[3];
        iVar11 = (int)local_70;
        lVar12 = (longlong)iVar11;
        uVar3 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar14;
        uVar5 = local_70;
        if (uVar3 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar11) {
            iVar7 = iVar11;
          }
          if (iVar6 <= iVar11) break;
          lVar10 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar3 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar12 == lVar10) goto LAB_140cea287;
          }
          uVar5 = (ulonglong)(iVar11 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar4);
    }
  }
LAB_140cea287:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cea2f2 FUN_140cea2f2 body=40 status=ok
// SIG undefined FUN_140cea2f2(void)

undefined8 FUN_140cea2f2(undefined8 param_1,int param_2)

{
  FUN_140cea31a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cea31a FUN_140cea31a body=156 status=ok
// SIG undefined FUN_140cea31a(void)

void FUN_140cea31a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2d5c60;
  param_1[6] = &PTR_FUN_14b2d5f18;
  param_1[7] = &PTR_FUN_14b2d5f30;
  param_1[9] = &PTR_FUN_14b2d5f50;
  param_1[10] = &PTR_FUN_14b2d5f80;
  if (*(char *)((longlong)param_1 + 0xa1) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140cea3b6 FUN_140cea3b6 body=702 status=ok
// SIG undefined FUN_140cea3b6(void)

longlong * FUN_140cea3b6(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar9 = param_4 * 4;
  if (0x200000 < uVar9) {
    FUN_147a7d31c(param_2,param_3,param_4);
LAB_140cea4b8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
  }
  if (DAT_14cad73d0 == -1) {
    *param_2 = 0;
  }
  else {
    uVar5 = 0;
    uVar7 = 0x10;
    do {
      uVar8 = uVar5 + uVar7 >> 1;
      uVar4 = uVar8;
      if (uVar9 <= (uint)(&DAT_14a8bdfa0)[uVar8 - 1]) {
        uVar4 = uVar5;
        uVar7 = uVar8;
      }
      uVar5 = uVar4;
    } while (1 < uVar7 - uVar5);
    uVar13 = (ulonglong)uVar5;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad6f90);
    if (0 < (longlong)(int)(&DAT_14cad6fc0)[uVar13 * 4]) {
      plVar10 = &DAT_14cad6fb8 + uVar13 * 2;
      lVar6 = (longlong)(int)(&DAT_14cad6fc0)[uVar13 * 4] * 0x10;
      lVar2 = *(longlong *)(*plVar10 + -0x10 + lVar6);
      *(undefined8 *)(*plVar10 + -0x10 + lVar6) = 0;
      iVar12 = (&DAT_14cad6fc0)[uVar13 * 4];
      lVar6 = *plVar10;
      lVar11 = (longlong)iVar12 * 0x10;
      lVar3 = *(longlong *)(lVar6 + -0x10 + lVar11);
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      if ((&DAT_14cad6fc0)[uVar13 * 4] - iVar12 != 0) {
        memmove((void *)(lVar6 + lVar11 + -0x10),(void *)(lVar6 + lVar11),
                (longlong)((&DAT_14cad6fc0)[uVar13 * 4] - iVar12) << 4);
        iVar12 = (&DAT_14cad6fc0)[uVar13 * 4];
      }
      (&DAT_14cad6fc0)[uVar13 * 4] = iVar12 + -1;
      FUN_140cea676(plVar10);
      *param_2 = lVar2;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad6f90);
      goto LAB_140cea4b8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad6f90);
    uVar5 = 0;
    uVar7 = 0x10;
    do {
      uVar8 = uVar5 + uVar7 >> 1;
      uVar4 = uVar8;
      if (uVar9 <= (uint)(&DAT_14a8bdfa0)[uVar8 - 1]) {
        uVar4 = uVar5;
        uVar7 = uVar8;
      }
      uVar5 = uVar4;
    } while (1 < uVar7 - uVar5);
    local_94 = (&DAT_14a8bdfa0)[uVar5];
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 1;
    local_74 = 0;
    uStack_6c = 0;
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_60 = 0;
    local_5c = 0;
    local_58 = L"FGlobalDynamicMeshIndexPolicy";
    local_50 = 0;
    uStack_48 = 0;
    local_90 = 0x800100000004;
    if (*(char *)(param_3 + 0x69) == '\0') {
      FUN_14002049c(param_3,CONCAT71((uint7)(uint3)(local_64 >> 8),1));
      local_a0 = &local_88;
      local_a8 = 8;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_2,param_3,&local_94);
      *(undefined4 *)(*param_2 + 0x18) = 8;
      FUN_14002049c(param_3,0);
    }
    else {
      local_a0 = &local_88;
      local_a8 = 8;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_2,param_3,&local_94);
      *(undefined4 *)(*param_2 + 0x18) = 8;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cea676 FUN_140cea676 body=143 status=ok
// SIG undefined FUN_140cea676(void)

void FUN_140cea676(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 140cea716 FUN_140cea716 body=41 status=ok
// SIG undefined FUN_140cea716(void)

void FUN_140cea716(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,1);
  return;
}



// FUNCTION 140cea73f FUN_140cea73f body=49 status=ok
// SIG undefined FUN_140cea73f(void)

longlong FUN_140cea73f(void)

{
  if (DAT_14c998590 == 0) {
    FUN_140f50038(&DAT_14c998590,&PTR_s__Script_IrisCore_149f82db0);
  }
  return DAT_14c998590;
}



// FUNCTION 140cea770 FUN_140cea770 body=49 status=ok
// SIG undefined FUN_140cea770(void)

longlong FUN_140cea770(void)

{
  if (DAT_14cb1b700 == 0) {
    FUN_140f50038(&DAT_14cb1b700,&PTR_s__Script_GbxNav_14ab6c490);
  }
  return DAT_14cb1b700;
}



// FUNCTION 140cea7a2 FUN_140cea7a2 body=1578 status=ok
// SIG undefined FUN_140cea7a2(void)

void FUN_140cea7a2(longlong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  
  (**(code **)(*param_1 + 0x50))();
  iVar2 = *(int *)(param_2 + 0x80);
  if (iVar2 == 0) {
    uVar21 = 1;
    uVar20 = 0;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar5 = *(uint **)(param_2 + 0x78);
    if (*(uint **)(param_2 + 0x78) == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 0x68);
    }
    uVar22 = *puVar5;
    if (uVar22 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar20 = 0;
      uVar21 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar21 = uVar20;
      }
      iVar11 = 0;
      do {
        if (uVar21 == uVar20) goto LAB_140cea9e4;
        iVar11 = iVar11 + 0x20;
        uVar22 = puVar5[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar20 = 0;
      iVar11 = 0;
    }
    uVar21 = (ulonglong)(-uVar22 & uVar22);
    uVar1 = uVar21 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar22 = 0xffffffff;
    iVar4 = iVar2;
    do {
      if ((int)param_1[0xc] != *(int *)((longlong)param_1 + 0x8c)) {
        lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x58) + (longlong)iVar6 * 0x14);
        uVar7 = (uint)((ulonglong)lVar13 >> 0x10);
        uVar10 = (uint)lVar13 & 0xffff;
        plVar16 = (longlong *)param_1[0x13];
        if ((longlong *)param_1[0x13] == (longlong *)0x0) {
          plVar16 = param_1 + 0x12;
        }
        iVar8 = *(int *)((longlong)plVar16 +
                        (ulonglong)
                        ((int)param_1[0x14] - 1U &
                        (int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar10) +
                        (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar10 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            if (*(longlong *)(param_1[0xb] + (longlong)iVar8 * 0x14) == lVar13) {
              FUN_1408a70b0(param_1,*(undefined4 *)
                                     (*(longlong *)(param_2 + 0x58) + (longlong)iVar6 * 0x14 + 8),
                            lVar13);
              iVar4 = *(int *)(param_2 + 0x80);
              break;
            }
            iVar8 = *(int *)(param_1[0xb] + (longlong)iVar8 * 0x14 + 0xc);
          } while (iVar8 != -1);
        }
      }
      uVar22 = uVar22 & ~(uint)uVar21;
      puVar5 = *(uint **)(param_2 + 0x78);
      if (*(uint **)(param_2 + 0x78) == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 0x68);
      }
      iVar6 = (int)uVar20;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar5[lVar13] & uVar22;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar15 = 0;
          do {
            uVar7 = puVar5[lVar13 + lVar15 + 1];
            if (uVar7 != 0) {
              uVar20 = (ulonglong)(iVar6 + (int)lVar15 + 1);
              uVar22 = 0xffffffff;
              goto LAB_140cea98d;
            }
            iVar11 = iVar11 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar9 - lVar13 != lVar15);
          uVar22 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar20 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_140cea98d:
        uVar21 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar21 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_140cea9e4:
  iVar2 = (int)param_1[6];
  if (iVar2 == 0) {
    uVar21 = 1;
    uVar20 = 0;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar5 = (uint *)param_1[5];
    if ((uint *)param_1[5] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 3);
    }
    uVar22 = *puVar5;
    if (uVar22 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar20 = 0;
      uVar21 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar21 = uVar20;
      }
      iVar11 = 0;
      do {
        if (uVar21 == uVar20) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar22 = puVar5[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar20 = 0;
      iVar11 = 0;
    }
    uVar21 = (ulonglong)(-uVar22 & uVar22);
    uVar1 = uVar21 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar22 = 0xffffffff;
    iVar4 = iVar2;
    do {
      lVar13 = param_1[1];
      lVar14 = (longlong)iVar6 * 0x40;
      lVar15 = *(longlong *)(lVar13 + lVar14);
      lVar3 = *(longlong *)(lVar13 + 8 + lVar14);
      if ((longlong)(int)param_3[1] != 0) {
        lVar19 = 0;
        do {
          if ((*(longlong *)(*param_3 + lVar19) == lVar15) &&
             (*(longlong *)(*param_3 + 8 + lVar19) == lVar3)) goto LAB_140ceac23;
          lVar19 = lVar19 + 0x10;
        } while ((longlong)(int)param_3[1] * 0x10 != lVar19);
      }
      if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x3c)) {
        uVar7 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar18 = (uint)lVar3 & 0xffff;
        uVar10 = (uint)((ulonglong)lVar15 >> 0x10);
        uVar12 = (uint)lVar15 & 0xffff;
        uVar10 = (int)((ulonglong)lVar15 >> 0x20) + ((uint)lVar15 << 0x10 | uVar12) +
                 (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar12 >> 4);
        lVar19 = *(longlong *)(param_2 + 0x48);
        if (*(longlong *)(param_2 + 0x48) == 0) {
          lVar19 = param_2 + 0x40;
        }
        iVar6 = *(int *)(lVar19 + (ulonglong)
                                  (*(int *)(param_2 + 0x50) - 1U &
                                  ((uVar10 >> 2) +
                                   (int)((ulonglong)lVar3 >> 0x20) + (uint)lVar3 * 0x10000 + uVar18
                                   + (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar18 >> 4) +
                                   uVar10 * 0x40 + 0x9e3779b9 ^ uVar10)) * 4);
        if (iVar6 != -1) {
          lVar13 = lVar13 + lVar14;
          lVar14 = *(longlong *)(param_2 + 8);
          do {
            lVar17 = (longlong)iVar6 * 0x40;
            lVar19 = lVar14 + lVar17;
            if ((*(longlong *)(lVar14 + lVar17) == lVar15) &&
               (*(longlong *)(lVar14 + 8 + lVar17) == lVar3)) {
              if ((lVar19 != 0) &&
                 (((char *)(lVar19 + 0x10) != (char *)0x0 &&
                  (*(char *)(lVar13 + 0x10) == *(char *)(lVar19 + 0x10))))) {
                FUN_1448c236a(lVar13 + 0x10);
                (**(code **)(**(longlong **)(lVar13 + 0x30) + 0x20 +
                            (ulonglong)(*(char *)(lVar13 + 0x10) != *(char *)(lVar19 + 0x10)) * 8))
                          (*(longlong **)(lVar13 + 0x30),*(undefined8 *)(lVar19 + 0x30));
                iVar4 = (int)param_1[6];
              }
              break;
            }
            iVar6 = *(int *)(lVar19 + 0x38);
          } while (iVar6 != -1);
        }
      }
LAB_140ceac23:
      uVar22 = uVar22 & ~(uint)uVar21;
      puVar5 = (uint *)param_1[5];
      if ((uint *)param_1[5] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 3);
      }
      iVar6 = (int)uVar20;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar5[lVar13] & uVar22;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar15 = 0;
          do {
            uVar7 = puVar5[lVar13 + lVar15 + 1];
            if (uVar7 != 0) {
              uVar20 = (ulonglong)(iVar6 + (int)lVar15 + 1);
              uVar22 = 0xffffffff;
              goto LAB_140ceac92;
            }
            iVar11 = iVar11 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar9 - lVar13 != lVar15);
          uVar22 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar20 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_140ceac92:
        uVar21 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar21 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar2);
  }
  return;
}



// FUNCTION 140ceadd6 FUN_140ceadd6 body=159 status=ok
// SIG undefined FUN_140ceadd6(void)

undefined8 * FUN_140ceadd6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ac1c72(param_1,uVar1);
  *param_1 = &PTR_FUN_14b4a6720;
  param_1[7] = 0xffffffffffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
  FUN_14020a6cc(param_1 + 10,1);
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  FUN_14020a6cc((longlong)param_1 + 0x5c,1);
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0xd,1);
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  FUN_14020a6cc((longlong)param_1 + 0x74,1);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  return param_1;
}



// FUNCTION 140ceae76 FUN_140ceae76 body=808 status=ok
// SIG undefined FUN_140ceae76(void)

void FUN_140ceae76(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined4 local_64;
  longlong local_60;
  ulonglong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(param_1 + 0xa8);
  local_60 = param_1;
  if (lVar4 != 0) {
    iVar2 = *(int *)(lVar4 + 0x268);
    local_64 = param_2;
    if (iVar2 == 0) {
      uVar15 = 0;
      uVar11 = 1;
      iVar5 = 0;
      iVar10 = 0;
    }
    else {
      puVar6 = *(uint **)(lVar4 + 0x260);
      if (*(uint **)(lVar4 + 0x260) == (uint *)0x0) {
        puVar6 = (uint *)(lVar4 + 0x250);
      }
      uVar14 = *puVar6;
      if (uVar14 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar11 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar11 = uVar15;
        }
        iVar10 = 0;
        do {
          if (uVar11 == uVar15) goto LAB_140ceb07c;
          iVar10 = iVar10 + 0x20;
          uVar14 = puVar6[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar15 = 0;
        iVar10 = 0;
      }
      uVar11 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar11 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 != iVar2) {
      uVar14 = 0xffffffff;
      do {
        lVar12 = *(longlong *)(*(longlong *)(lVar4 + 0x240) + (longlong)iVar5 * 0x10);
        if (lVar12 != 0) {
          if (DAT_14cac6e60 == 0) {
            local_80 = &local_50;
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_142b47bc4;
            local_88 = &LAB_1478989f1;
            local_90 = &LAB_146391124;
            local_98 = L"Engine";
            local_a0 = 0x10000000000;
            local_a8 = 0x10000005;
            local_b0 = 0x10;
            local_b8 = 0x620;
            FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          }
          lVar13 = local_60;
          if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
            local_58 = uVar11;
            FUN_140ceb1a0(lVar12 + 0x599,local_60);
            uVar11 = local_58;
            FUN_140ceb202(lVar12 + 0x59a,lVar13);
          }
        }
        uVar14 = uVar14 & ~(uint)uVar11;
        puVar6 = *(uint **)(lVar4 + 0x260);
        if (*(uint **)(lVar4 + 0x260) == (uint *)0x0) {
          puVar6 = (uint *)(lVar4 + 0x250);
        }
        iVar3 = *(int *)(lVar4 + 0x268);
        iVar5 = (int)uVar15;
        lVar12 = (longlong)iVar5;
        uVar9 = puVar6[lVar12] & uVar14;
        if (uVar9 == 0) {
          iVar7 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar7 = iVar3 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar5 < iVar7) {
            lVar13 = 0;
            do {
              uVar9 = puVar6[lVar12 + lVar13 + 1];
              if (uVar9 != 0) {
                uVar15 = (ulonglong)(iVar5 + (int)lVar13 + 1);
                uVar14 = 0xffffffff;
                goto LAB_140ceb050;
              }
              iVar10 = iVar10 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar8 - lVar12 != lVar13);
            uVar14 = 0xffffffff;
            iVar5 = iVar8;
          }
          uVar15 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar3;
        }
        else {
LAB_140ceb050:
          uVar11 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar11 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar5) {
            iVar5 = iVar3;
          }
        }
      } while (iVar5 != iVar2);
    }
LAB_140ceb07c:
    FUN_1448c4a0e(local_60,local_64);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ceb1a0 FUN_140ceb1a0 body=96 status=ok
// SIG undefined FUN_140ceb1a0(void)

void FUN_140ceb1a0(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == '\x01') {
    FUN_140838726(param_1,&local_28);
    cVar1 = FUN_140819828(param_1 + -0x599,local_28,param_2);
    *param_1 = cVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ceb202 FUN_140ceb202 body=96 status=ok
// SIG undefined FUN_140ceb202(void)

void FUN_140ceb202(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == '\x01') {
    FUN_140852908(param_1,&local_28);
    cVar1 = FUN_140819828(param_1 + -0x59a,local_28,param_2);
    *param_1 = cVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ceb272 FUN_140ceb272 body=90 status=ok
// SIG undefined FUN_140ceb272(void)

undefined8 * FUN_140ceb272(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9456c0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ceb2d4 FUN_140ceb2d4 body=1177 status=ok
// SIG undefined FUN_140ceb2d4(void)

undefined8 * FUN_140ceb2d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_14097c306();
  *param_1 = &PTR_FUN_14b0de370;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x43960000;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6f4) = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x704) = uVar2;
  *(undefined4 *)(param_1 + 0xe1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x70c) = uVar4;
  param_1[0xe2] = DAT_14c846508;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *param_1 = &PTR_FUN_14b701580;
  param_1[0xad] = &PTR_FUN_14b701928;
  param_1[0xc6] = &PTR_FUN_14b701940;
  FUN_140b1ac70(param_1 + 0xee);
  param_1[0x24f] = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24b] = 0;
  param_1[0x24c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1284) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x128c) = 0;
  param_1[0x253] = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  param_1[0x256] = 0;
  *(undefined1 *)(param_1 + 0x264) = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  param_1[0x268] = 0;
  param_1[0x269] = 0;
  param_1[0x26a] = 0;
  param_1[0x26b] = 0;
  *(undefined1 *)(param_1 + 0x26c) = 0;
  param_1[0xee] = &PTR_FUN_14b706ef0;
  param_1[0x26d] = 0;
  puVar6 = &DAT_14c846480;
  puVar7 = param_1 + 0x26e;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x27e] = 0;
  *(undefined4 *)(param_1 + 0x27f) = 0;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1404) = 0;
  param_1[0x282] = 0;
  *(undefined4 *)(param_1 + 0x283) = 0;
  *(undefined1 *)(param_1 + 0x284) = 0;
  *(byte *)(param_1 + 0x286) = *(byte *)(param_1 + 0x286) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x1434) = 0xffffffffffffffff;
  uVar1 = DAT_14c8464e8;
  param_1[0x288] = DAT_14c8464e0;
  param_1[0x289] = uVar1;
  param_1[0x28a] = DAT_14c8464f0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x28d) = 0xffffffff;
  puVar6 = &DAT_14c846480;
  puVar7 = param_1 + 0x28e;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = &DAT_14c846480;
  puVar7 = param_1 + 0x29a;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x2a8] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  *(byte *)(param_1 + 0x2aa) = *(byte *)(param_1 + 0x2aa) & 0xc0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2ab] = DAT_14c8464e0;
  param_1[0x2ac] = uVar1;
  param_1[0x2ad] = DAT_14c8464f0;
  *(undefined8 *)((longlong)param_1 + 0x159c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15ac) = 0;
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  *(undefined8 *)((longlong)param_1 + 0x157f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1587) = 0;
  param_1[0x2b2] = 0;
  *(undefined1 *)(param_1 + 0x2b3) = 0;
  param_1[0x2b6] = 0x40a0000040f00000;
  param_1[0x2b7] = 0x42c80000437a0000;
  param_1[0x2b8] = 0;
  *(undefined2 *)(param_1 + 700) = 1;
  param_1[0x2c0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1609) = 0;
  memset((void *)((longlong)param_1 + 0x1614),0,0x88);
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15f4) = 0;
  *(undefined4 *)(param_1 + 0x2d6) = 1;
  *(undefined1 *)(param_1 + 0x2d7) = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0x2d8] = DAT_14c8463f0;
  param_1[0x2d9] = uVar1;
  param_1[0x2da] = 0;
  *(undefined4 *)(param_1 + 0x2db) = 0;
  param_1[0x2de] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2dc] = DAT_14c8464e0;
  param_1[0x2dd] = uVar1;
  param_1[0x2e1] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2df] = DAT_14c8464e0;
  param_1[0x2e0] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x1714) = 0;
  *(undefined4 *)(param_1 + 0x2e2) = 0;
  param_1[0x2e6] = 0;
  param_1[0x2e7] = 0;
  *(undefined4 *)(param_1 + 0x2e5) = 0;
  param_1[0x2e3] = 0;
  param_1[0x2e4] = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1744) = 0;
  *(undefined4 *)(param_1 + 0x2e9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174c) = 0x3ff00000;
  param_1[0x2ec] = 0;
  param_1[0x2ed] = 0;
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0;
  *(undefined4 *)(param_1 + 0x2ee) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1774) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x2ef) = 0;
  *(undefined4 *)((longlong)param_1 + 0x177c) = 0x3ff00000;
  param_1[0x2f0] = 0x3ff0000000000000;
  param_1[0x2f1] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c4) = 0x3f800000;
  param_1[0x2fc] = 0;
  param_1[0x2fd] = 0;
  param_1[0x2fa] = 0;
  param_1[0x2fb] = 0;
  *(undefined4 *)(param_1 + 0x2fe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17f4) = 0;
  *(undefined4 *)(param_1 + 0x2ff) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17fc) = 0x3ff00000;
  param_1[0x302] = 0;
  param_1[0x303] = 0;
  param_1[0x300] = 0;
  param_1[0x301] = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1824) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x305) = 0;
  *(undefined4 *)((longlong)param_1 + 0x182c) = 0x3ff00000;
  param_1[0x306] = 0x3ff0000000000000;
  param_1[0x307] = 0;
  param_1[0x308] = 0;
  param_1[0x309] = 0;
  *(undefined4 *)(param_1 + 0x30a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1854) = 0;
  *(undefined4 *)(param_1 + 0x30b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x185c) = 0x3ff00000;
  param_1[0x30c] = 0;
  param_1[0x30d] = 0;
  param_1[0x30e] = 0;
  param_1[0x30f] = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1884) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x311) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188c) = 0x3ff00000;
  param_1[0x312] = 0x3ff0000000000000;
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  param_1[0x315] = 0;
  *(undefined4 *)(param_1 + 0x316) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18b4) = 0;
  *(undefined4 *)(param_1 + 0x317) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18bc) = 0x3ff00000;
  param_1[0x318] = 0;
  param_1[0x319] = 0;
  param_1[0x31a] = 0;
  param_1[0x31b] = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18e4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x31d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18ec) = 0x3ff00000;
  param_1[0x31e] = 0x3ff0000000000000;
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  *(undefined4 *)(param_1 + 0x322) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1914) = 0;
  *(undefined4 *)(param_1 + 0x323) = 0;
  *(undefined4 *)((longlong)param_1 + 0x191c) = 0x3ff00000;
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1944) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x329) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194c) = 0x3ff00000;
  param_1[0x32a] = 0x3ff0000000000000;
  param_1[0x32b] = 0;
  lVar5 = FUN_140ceb76e();
  param_1[0x2d4] = *(undefined8 *)(lVar5 + 0x48);
  param_1[0x2d5] = 0;
  *(undefined4 *)(param_1 + 0x2d6) = 0;
  return param_1;
}



// FUNCTION 140ceb76e FUN_140ceb76e body=97 status=ok
// SIG undefined FUN_140ceb76e(void)

longlong FUN_140ceb76e(void)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140ceb8b5();
  lVar1 = FUN_140ceb7d0();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar1 = FUN_140ceb7d0();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    return lVar2;
  }
  return 0;
}



// FUNCTION 140ceb7d0 FUN_140ceb7d0 body=228 status=ok
// SIG undefined FUN_140ceb7d0(void)

longlong FUN_140ceb7d0(void)

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
  if (DAT_14cba6db8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_148bec8b9;
    local_40 = &LAB_145ca661b;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/OakGame",L"OakAnimSettings",&DAT_14cba6db8,&DAT_148bec8b8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba6db8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ceb8b5 FUN_140ceb8b5 body=188 status=ok
// SIG undefined FUN_140ceb8b5(void)

void FUN_140ceb8b5(void)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbc3c98 == 0) {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    lVar1 = DAT_14caa8580;
    FUN_140056680(local_30,L"OakAnimSettings");
    FUN_1446f470e(&local_40,L"AnimSet.Player.3rd.Idle",1);
    FUN_1413e432a(lVar1,&local_38,local_40,local_30);
    DAT_14cbc3c98 = local_38;
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ceb97e FUN_140ceb97e body=6662 status=ok
// SIG undefined FUN_140ceb97e(void)

uint * FUN_140ceb97e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  longlong *plVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  longlong lVar29;
  int iVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong *puVar34;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  uint *local_230;
  longlong *local_228;
  uint local_21c;
  uint *local_218;
  longlong *local_210;
  uint *local_208;
  uint *local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  uint local_1d0;
  int local_1cc;
  uint *local_1c8;
  longlong *local_1c0;
  int local_1b8;
  uint local_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  uint *local_190;
  int *local_188;
  undefined1 local_17c [4];
  undefined4 local_178 [8];
  undefined4 *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_138 [16];
  undefined4 *local_128;
  undefined8 local_120;
  undefined4 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  undefined4 local_f8 [8];
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*(byte *)((longlong)param_3 + 0x10c) & 4) != 0) {
LAB_140cebf00:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_258);
  }
  lVar7 = FUN_1418515c4();
  local_1b0 = lVar7;
  local_1a8 = param_1;
  local_1a0 = param_3;
  local_198 = param_2;
  FUN_143d214de();
  local_228 = param_2;
  local_210 = param_3;
  if (param_2[0xd] == 0) {
    local_1d8 = lVar7;
    if ((longlong *)param_2[0xf] != (longlong *)0x0) {
      local_108 = *(undefined ***)param_2[0xf];
      puVar9 = (uint *)(param_3 + 0xd);
      iVar22 = (int)param_3[0x10];
      if (iVar22 == 0) {
        uVar31 = 1;
        uVar32 = 0;
        iVar30 = 0;
        iVar26 = 0;
      }
      else {
        puVar28 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar28 = puVar9;
        }
        uVar24 = *puVar28;
        if (uVar24 == 0) {
          iVar30 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar30 = iVar22 + -1;
          }
          uVar32 = 0;
          uVar31 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar31 = uVar32;
          }
          iVar30 = 0;
          do {
            if (uVar31 == uVar32) goto LAB_140cebd23;
            iVar30 = iVar30 + 0x20;
            uVar24 = puVar28[uVar32 + 1];
            uVar32 = uVar32 + 1;
          } while (uVar24 == 0);
        }
        else {
          uVar32 = 0;
          iVar30 = 0;
        }
        uVar31 = (ulonglong)(-uVar24 & uVar24);
        uVar1 = uVar31 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar26 = (iVar30 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar26) {
          iVar26 = iVar22;
        }
      }
      if (iVar26 == iVar22) {
LAB_140cebd23:
        local_230 = (uint *)0x0;
        puVar28 = local_230;
      }
      else {
        uVar24 = 0xffffffff;
        local_230 = (uint *)0x0;
        iVar15 = iVar22;
        do {
          lVar7 = param_3[0xb];
          lVar23 = (longlong)iVar26 * 200;
          if (*(int *)(lVar7 + 0x60 + lVar23) != *(int *)(lVar7 + 0x8c + lVar23)) {
            lVar33 = lVar7 + lVar23;
            lVar29 = lVar33 + 0x90;
            if (*(longlong *)(lVar33 + 0x98) != 0) {
              lVar29 = *(longlong *)(lVar33 + 0x98);
            }
            iVar26 = *(int *)(lVar29 + (ulonglong)
                                       (*(int *)(lVar33 + 0xa0) - 1U &
                                       (int)local_108 + (int)((ulonglong)local_108 >> 0x20) * 0x17)
                                       * 4);
            if (iVar26 != -1) {
              local_228 = (longlong *)CONCAT44(local_228._4_4_,iVar30);
              plVar17 = (longlong *)(lVar23 + lVar7 + 0x58);
              lVar7 = *plVar17;
              do {
                if (*(undefined ***)(lVar7 + (longlong)iVar26 * 0x10) == local_108) {
                  lVar33 = lVar33 + 8;
                  FUN_140326250(plVar17,&local_108);
                  FUN_140325a06(lVar33,&local_148,&local_108,0);
                  iVar15 = (int)param_3[0x10];
                  local_230 = (uint *)CONCAT71((int7)((ulonglong)lVar33 >> 8),1);
                  break;
                }
                iVar26 = *(int *)((longlong)iVar26 * 0x10 + lVar7 + 8);
              } while (iVar26 != -1);
              iVar30 = (int)local_228;
            }
          }
          uVar24 = uVar24 & ~(uint)uVar31;
          puVar28 = (uint *)param_3[0xf];
          if ((uint *)param_3[0xf] == (uint *)0x0) {
            puVar28 = puVar9;
          }
          iVar26 = (int)uVar32;
          lVar7 = (longlong)iVar26;
          uVar20 = puVar28[lVar7] & uVar24;
          if (uVar20 == 0) {
            iVar13 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar13 = iVar15 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar30 = iVar30 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar26) {
              iVar14 = iVar26;
            }
            if (iVar26 < iVar13) {
              lVar23 = 0;
              do {
                uVar20 = puVar28[lVar7 + lVar23 + 1];
                if (uVar20 != 0) {
                  uVar32 = (ulonglong)(iVar26 + (int)lVar23 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_140cebe97;
                }
                iVar30 = iVar30 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar14 - lVar7 != lVar23);
              uVar24 = 0xffffffff;
              iVar26 = iVar14;
            }
            uVar32 = (ulonglong)(iVar26 + 1);
            param_3 = local_210;
            iVar26 = iVar15;
          }
          else {
LAB_140cebe97:
            uVar31 = (ulonglong)(-uVar20 & uVar20);
            uVar1 = uVar31 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar26 = (iVar30 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if (iVar15 <= iVar26) {
              iVar26 = iVar15;
            }
          }
          puVar28 = local_230;
        } while (iVar26 != iVar22);
      }
      goto LAB_140ced376;
    }
    local_1e0 = param_1;
    if ((char)param_2[9] == '\x01') {
      local_128 = (undefined4 *)0x0;
      local_120 = 0x800000000;
      puVar9 = (uint *)(param_3 + 0xd);
      iVar22 = (int)param_3[0x10];
      if (iVar22 == 0) {
        uVar31 = 1;
        puVar28 = (uint *)0x0;
        iVar30 = 0;
        iVar26 = 0;
      }
      else {
        puVar16 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar16 = puVar9;
        }
        uVar24 = *puVar16;
        if (uVar24 == 0) {
          iVar30 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar30 = iVar22 + -1;
          }
          puVar28 = (uint *)0x0;
          puVar18 = (uint *)(ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            puVar18 = puVar28;
          }
          iVar30 = 0;
          do {
            if (puVar18 == puVar28) goto LAB_140cec51d;
            iVar30 = iVar30 + 0x20;
            uVar24 = puVar16[(longlong)puVar28 + 1];
            puVar28 = (uint *)((longlong)puVar28 + 1);
          } while (uVar24 == 0);
        }
        else {
          puVar28 = (uint *)0x0;
          iVar30 = 0;
        }
        uVar31 = (ulonglong)(-uVar24 & uVar24);
        uVar32 = uVar31 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar26 = (iVar30 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar26) {
          iVar26 = iVar22;
        }
      }
      if (iVar26 < iVar22) {
        local_200 = (uint *)(param_3 + 0xb);
        local_1c0 = param_3 + 7;
        uVar24 = 0xffffffff;
        local_1c8 = puVar9;
LAB_140cebfb9:
        local_1cc = iVar26;
        puVar18 = (uint *)((longlong)local_1cc * 200 + *(longlong *)local_200);
        puVar16 = puVar18 + 2;
        uVar20 = *puVar18;
        local_230 = puVar16;
        if (((puVar18[4] != puVar18[0xf]) || (puVar18[0x18] != puVar18[0x23])) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          plVar17 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar17 = local_1c0;
          }
          iVar22 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_3[9] - 1U & uVar20) * 4);
          if (iVar22 != -1) {
            do {
              lVar7 = *param_3 + (longlong)iVar22 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar22 * 0x10) == uVar20) {
                if ((lVar7 != 0) && (lVar7 != -4)) {
                  uVar6 = puVar18[0xc];
                  local_1f0 = CONCAT44(local_1f0._4_4_,iVar30);
                  local_218 = puVar28;
                  local_1f8 = uVar31;
                  local_21c = uVar24;
                  local_1d0 = uVar20;
                  if (uVar6 == 0) {
                    uVar31 = 1;
                    uVar32 = 0;
                    iVar22 = 0;
                    uVar24 = 0;
                    goto LAB_140cec113;
                  }
                  puVar28 = *(uint **)(puVar18 + 10);
                  if (*(uint **)(puVar18 + 10) == (uint *)0x0) {
                    puVar28 = puVar18 + 6;
                  }
                  uVar24 = *puVar28;
                  if (uVar24 != 0) {
                    uVar32 = 0;
                    iVar22 = 0;
                    goto LAB_140cec0da;
                  }
                  iVar22 = uVar6 + 0x1e;
                  if (-1 < (int)(uVar6 - 1)) {
                    iVar22 = uVar6 - 1;
                  }
                  uVar32 = 0;
                  uVar31 = (ulonglong)(uint)(iVar22 >> 5);
                  if (iVar22 >> 5 < 1) {
                    uVar31 = uVar32;
                  }
                  iVar22 = 0;
                  goto LAB_140cec0c1;
                }
                break;
              }
              iVar22 = *(int *)(lVar7 + 8);
            } while (iVar22 != -1);
          }
        }
        goto LAB_140cec420;
      }
LAB_140cec51d:
      puVar8 = local_128;
      if (*(int *)((longlong)param_3 + 0x8c) < (int)param_3[0xc]) {
        *(undefined1 *)((longlong)param_2 + 0x4b) = 1;
      }
    }
    else {
      bVar2 = *(byte *)((longlong)param_3 + 0x10c);
      if ((((bVar2 & 1) == 0) &&
          (*(byte *)((longlong)param_3 + 0x10c) = bVar2 | 1, (bVar2 & 2) != 0)) &&
         (*(char *)((longlong)param_2 + 0x4f) != '\0')) {
        *(byte *)((longlong)param_3 + 0x10c) = bVar2 | 5;
        goto LAB_140cebf00;
      }
      plVar17 = (longlong *)*param_2;
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)param_2[1];
        local_d8 = (undefined4 *)0x0;
        local_d0 = 0x800000000;
        cVar5 = FUN_143d21faa(&local_1b0);
        if (cVar5 == '\0') {
LAB_140ced10e:
          if (local_d8 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
LAB_140ced120:
          puVar28 = (uint *)0x0;
          goto LAB_140ced376;
        }
        iVar22 = 0;
        local_128 = (undefined4 *)0x0;
        local_120 = 0x800000000;
        local_158 = (undefined4 *)0x0;
        local_150 = 0x800000000;
        plVar11 = local_228;
        if (0 < local_100) {
          plVar25 = param_3 + 7;
          local_1e8 = param_3 + 0xb;
          do {
            plVar11 = local_1e0;
            local_1b4 = 0;
            puVar34 = (ulonglong *)plVar17[1];
            puVar9 = (uint *)*puVar34 + 1;
            if ((uint *)puVar34[1] < puVar9) {
              if ((*(byte *)((longlong)plVar17 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar17 + 0x170))(plVar17,&local_1b4,4);
              }
              else {
                FUN_14572512c(plVar17,&local_1b4);
              }
            }
            else {
              local_1b4 = *(uint *)*puVar34;
              *puVar34 = (ulonglong)puVar9;
            }
            uVar31 = local_120;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar19 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar19 = plVar25;
              }
              iVar30 = *(int *)((longlong)plVar19 +
                               (ulonglong)((int)param_3[9] - 1U & local_1b4) * 4);
              if (iVar30 != -1) {
                do {
                  lVar7 = *param_3 + (longlong)iVar30 * 0x10;
                  if (*(uint *)(*param_3 + (longlong)iVar30 * 0x10) == local_1b4) {
                    if ((lVar7 != 0) && ((int *)(lVar7 + 4) != (int *)0x0)) {
                      local_1b8 = *(int *)(lVar7 + 4);
                      puVar9 = (uint *)((longlong)local_1b8 * 0x38 + *plVar11);
                      lVar7 = (longlong)(int)local_120;
                      uVar24 = (int)local_120 + 1;
                      local_120 = CONCAT44(local_120._4_4_,uVar24);
                      if (local_120._4_4_ < uVar24) {
                        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
                      }
                      puVar8 = local_128;
                      if (local_128 == (undefined4 *)0x0) {
                        puVar8 = &local_148;
                      }
                      puVar8[lVar7] = local_1b8;
                      goto LAB_140cec78f;
                    }
                    break;
                  }
                  iVar30 = *(int *)(lVar7 + 8);
                } while (iVar30 != -1);
              }
            }
            local_1b8 = 0;
            puVar9 = (uint *)FUN_14882f092(plVar11);
            *puVar9 = local_1b4;
            local_1b8 = (int)plVar11[1] + -1;
            local_190 = &local_1b4;
            local_188 = &local_1b8;
            FUN_140263e2a(param_3,local_17c,&local_190);
            uVar31 = local_150;
            lVar7 = (longlong)(int)local_150;
            uVar24 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar24);
            if (local_150._4_4_ < uVar24) {
              FUN_1400cc390(local_178,uVar31 & 0xffffffff);
            }
            puVar8 = local_158;
            if (local_158 == (undefined4 *)0x0) {
              puVar8 = local_178;
            }
            puVar8[lVar7] = local_1b8;
LAB_140cec78f:
            plVar11 = local_228;
            puVar9[2] = (uint)local_108;
            puVar9[1] = puVar9[1] + 1;
            lVar7 = local_228[4];
            FUN_144958770(lVar7 + 0x30,0);
            FUN_144958770(lVar7 + 0x80,0);
            *(undefined1 *)(lVar7 + 0x28) = 1;
            puVar28 = (uint *)plVar17[0x15];
            plVar11[7] = local_1d8;
            plVar11[6] = (longlong)puVar9;
            local_190 = puVar28;
            (**(code **)(*(longlong *)plVar11[8] + 8))((longlong *)plVar11[8],plVar11);
            if ((*(byte *)((longlong)plVar17 + 0x29) & 2) == 0) {
              lVar7 = plVar11[4];
              if ((*(int *)(lVar7 + 0x38) == *(int *)(lVar7 + 100)) &&
                 (*(int *)(lVar7 + 0x88) == *(int *)(lVar7 + 0xb4))) {
                FUN_1456fd588(local_1e8,local_1b4);
                plVar11 = local_228;
              }
              else {
                local_208 = (uint *)(lVar7 + 0x30);
                puVar9 = (uint *)FUN_1456fd5f6(local_1e8,local_1b4);
                local_230 = puVar9;
                if (puVar9[2] - puVar9[0xd] == *(int *)(lVar7 + 0x38) - *(int *)(lVar7 + 100)) {
                  local_218 = puVar9 + 4;
                  uVar24 = puVar9[10];
                  if (uVar24 == 0) {
                    uVar32 = 1;
                    uVar31 = 0;
                    iVar30 = 0;
                    uVar20 = 0;
                  }
                  else {
                    puVar16 = *(uint **)(puVar9 + 8);
                    if (*(uint **)(puVar9 + 8) == (uint *)0x0) {
                      puVar16 = local_218;
                    }
                    uVar20 = *puVar16;
                    if (uVar20 == 0) {
                      iVar30 = uVar24 + 0x1e;
                      if (-1 < (int)(uVar24 - 1)) {
                        iVar30 = uVar24 - 1;
                      }
                      uVar31 = 0;
                      uVar32 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar32 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar32 == uVar31) goto LAB_140cec9b4;
                        iVar30 = iVar30 + 0x20;
                        uVar20 = puVar16[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar20 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar32 = (ulonglong)(-uVar20 & uVar20);
                    uVar1 = uVar32 * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    uVar20 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    if ((int)uVar24 <= (int)uVar20) {
                      uVar20 = uVar24;
                    }
                  }
                  if (uVar20 != uVar24) {
                    if (*(uint **)(puVar9 + 8) != (uint *)0x0) {
                      local_218 = *(uint **)(puVar9 + 8);
                    }
                    iVar26 = uVar24 + 0x1e;
                    if (-1 < (int)(uVar24 - 1)) {
                      iVar26 = uVar24 - 1;
                    }
                    if (*(int *)(lVar7 + 0x38) == *(int *)(lVar7 + 100)) goto LAB_140cec99c;
                    local_1f0 = *(longlong *)puVar9;
                    iVar26 = iVar26 >> 5;
                    local_1f8 = lVar7 + 0x68;
                    if (*(ulonglong *)(lVar7 + 0x70) != 0) {
                      local_1f8 = *(ulonglong *)(lVar7 + 0x70);
                    }
                    local_21c = *(int *)(lVar7 + 0x78) - 1;
                    local_200 = local_218 + 1;
                    uVar6 = 0xffffffff;
                    do {
                      lVar23 = *(longlong *)(local_1f0 + (longlong)(int)uVar20 * 0x10);
                      iVar15 = *(int *)(local_1f8 +
                                       (ulonglong)
                                       ((int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17 &
                                       local_21c) * 4);
                      if (iVar15 == -1) goto LAB_140cec99c;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar15 * 0x10) !=
                             lVar23) {
                        iVar15 = *(int *)((longlong)iVar15 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar15 == -1) goto LAB_140cec99c;
                      }
                      uVar6 = uVar6 & ~(uint)uVar32;
                      iVar15 = (int)uVar31;
                      lVar23 = (longlong)iVar15;
                      uVar20 = local_218[lVar23] & uVar6;
                      if (uVar20 == 0) {
                        iVar13 = iVar26;
                        if (iVar26 < iVar15) {
                          iVar13 = iVar15;
                        }
                        if (iVar26 <= iVar15) break;
                        lVar33 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar20 = local_200[lVar23 + lVar33];
                          if (uVar20 != 0) break;
                          lVar33 = lVar33 + 1;
                          if (iVar13 - lVar23 == lVar33) goto LAB_140cec9b4;
                        }
                        uVar31 = (ulonglong)(iVar15 + (int)lVar33 + 1);
                        uVar6 = 0xffffffff;
                      }
                      uVar32 = (ulonglong)(-uVar20 & uVar20);
                      uVar1 = uVar32 * 2 + 1;
                      lVar23 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                        }
                      }
                      uVar20 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar20 < (int)uVar24);
                  }
                }
                else {
LAB_140cec99c:
                  FUN_140492002(puVar9,local_208);
                  *(undefined1 *)((longlong)local_228 + 0x4c) = 1;
                }
LAB_140cec9b4:
                local_208 = (uint *)(lVar7 + 0x80);
                if (local_230[0x16] - local_230[0x21] ==
                    *(int *)(lVar7 + 0x88) - *(int *)(lVar7 + 0xb4)) {
                  local_218 = puVar9 + 0x18;
                  uVar24 = local_230[0x1e];
                  if (uVar24 == 0) {
                    uVar32 = 1;
                    uVar31 = 0;
                    iVar30 = 0;
                    uVar20 = 0;
                  }
                  else {
                    puVar16 = *(uint **)(local_230 + 0x1c);
                    if (*(uint **)(local_230 + 0x1c) == (uint *)0x0) {
                      puVar16 = local_218;
                    }
                    uVar20 = *puVar16;
                    if (uVar20 == 0) {
                      iVar30 = uVar24 + 0x1e;
                      if (-1 < (int)(uVar24 - 1)) {
                        iVar30 = uVar24 - 1;
                      }
                      uVar31 = 0;
                      uVar32 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar32 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar32 == uVar31) goto LAB_140cecacc;
                        iVar30 = iVar30 + 0x20;
                        uVar20 = puVar16[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar20 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar32 = (ulonglong)(-uVar20 & uVar20);
                    uVar1 = uVar32 * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    uVar20 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    if ((int)uVar24 <= (int)uVar20) {
                      uVar20 = uVar24;
                    }
                  }
                  if (uVar20 != uVar24) {
                    if (*(uint **)(local_230 + 0x1c) != (uint *)0x0) {
                      local_218 = *(uint **)(local_230 + 0x1c);
                    }
                    iVar26 = uVar24 + 0x1e;
                    if (-1 < (int)(uVar24 - 1)) {
                      iVar26 = uVar24 - 1;
                    }
                    if (*(int *)(lVar7 + 0x88) == *(int *)(lVar7 + 0xb4)) goto LAB_140cecab5;
                    iVar26 = iVar26 >> 5;
                    local_1f0 = lVar7 + 0xb8;
                    if (*(longlong *)(lVar7 + 0xc0) != 0) {
                      local_1f0 = *(longlong *)(lVar7 + 0xc0);
                    }
                    uVar6 = *(int *)(lVar7 + 200) - 1;
                    local_1f8 = CONCAT44(local_1f8._4_4_,uVar6);
                    local_200 = local_218 + 1;
                    local_21c = 0xffffffff;
                    do {
                      lVar23 = *(longlong *)
                                (*(longlong *)(local_230 + 0x14) + (longlong)(int)uVar20 * 0x10);
                      iVar15 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17 &
                                       uVar6) * 4);
                      if (iVar15 == -1) goto LAB_140cecab5;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar15 * 0x10) !=
                             lVar23) {
                        iVar15 = *(int *)((longlong)iVar15 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar15 == -1) goto LAB_140cecab5;
                      }
                      uVar27 = local_21c & ~(uint)uVar32;
                      iVar15 = (int)uVar31;
                      lVar23 = (longlong)iVar15;
                      uVar20 = local_218[lVar23] & uVar27;
                      if (uVar20 == 0) {
                        iVar13 = iVar26;
                        if (iVar26 < iVar15) {
                          iVar13 = iVar15;
                        }
                        if (iVar26 <= iVar15) break;
                        lVar33 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar20 = local_200[lVar23 + lVar33];
                          if (uVar20 != 0) break;
                          lVar33 = lVar33 + 1;
                          if (iVar13 - lVar23 == lVar33) goto LAB_140cecacc;
                        }
                        uVar31 = (ulonglong)(iVar15 + (int)lVar33 + 1);
                        local_21c = 0xffffffff;
                        uVar27 = local_21c;
                      }
                      local_21c = uVar27;
                      uVar32 = (ulonglong)(-uVar20 & uVar20);
                      uVar1 = uVar32 * 2 + 1;
                      lVar23 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                        }
                      }
                      uVar20 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar20 < (int)uVar24);
                  }
                }
                else {
LAB_140cecab5:
                  FUN_140492002(puVar9 + 0x14,local_208);
                  *(undefined1 *)((longlong)local_228 + 0x4c) = 1;
                }
LAB_140cecacc:
                puVar16 = local_230;
                local_230[0x2a] = 0;
                if (local_230[0x2b] != 0) {
                  FUN_144893a1c(puVar9 + 0x28,0);
                }
                puVar16[0x2c] = (int)plVar17[0x15] - (int)puVar28;
                FUN_14049209c(&local_190,plVar17,puVar9 + 0x28);
                plVar11 = local_228;
                if (*(int *)(lVar7 + 0x38) != *(int *)(lVar7 + 100)) {
                  *(undefined1 *)((longlong)local_228 + 0x4b) = 1;
                }
              }
            }
            lVar7 = plVar11[4];
            FUN_144958770(lVar7 + 0x30,0);
            FUN_144958770(lVar7 + 0x80,0);
            *(undefined1 *)(lVar7 + 0x28) = 0;
            if ((*(byte *)((longlong)plVar17 + 0x29) & 2) != 0) {
              if (local_158 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_140ced10e;
            }
            iVar22 = iVar22 + 1;
            param_3 = local_210;
            plVar11 = local_198;
          } while (iVar22 < local_100);
        }
        plVar17 = local_1a8;
        if (((char)plVar11[10] == '\0') && (iVar22 = (int)local_1a8[1], 0 < iVar22)) {
          uVar31 = 0;
          do {
            uVar32 = local_d0;
            iVar30 = *(int *)(*plVar17 + 8 + uVar31 * 0x38);
            if ((iVar30 < (int)(uint)local_108) && (local_108._4_4_ < iVar30)) {
              puVar8 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar8 = local_f8;
              }
              lVar7 = (longlong)(int)local_d0;
              if (lVar7 != 0) {
                lVar23 = 0;
                do {
                  if (uVar31 == *(uint *)((longlong)puVar8 + lVar23)) goto LAB_140ced1e5;
                  lVar23 = lVar23 + 4;
                } while (lVar7 * 4 - lVar23 != 0);
              }
              uVar24 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,uVar24);
              if (local_d0._4_4_ < uVar24) {
                FUN_1400cc390(local_f8,uVar32 & 0xffffffff);
              }
              puVar8 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar8 = local_f8;
              }
              puVar8[lVar7] = (int)uVar31;
              iVar22 = (int)plVar17[1];
            }
LAB_140ced1e5:
            uVar31 = uVar31 + 1;
          } while ((longlong)uVar31 < (longlong)iVar22);
        }
        if ((0 < (int)local_d0) || (0 < local_100)) {
          FUN_140705914(local_1a0);
        }
        plVar17 = local_1a8;
        puVar8 = local_d8;
        if (local_d8 == (undefined4 *)0x0) {
          puVar8 = local_f8;
        }
        if ((int)local_d0 != 0) {
          local_210 = local_210 + 0xb;
          lVar7 = (longlong)(int)local_d0;
          lVar23 = 0;
          do {
            iVar22 = *(int *)((longlong)puVar8 + lVar23);
            if (((-1 < (longlong)iVar22) && (iVar22 < (int)plVar17[1])) &&
               (iVar22 = FUN_1456fd588(local_210,*(undefined4 *)(*plVar17 + (longlong)iVar22 * 0x38)
                                      ), 0 < iVar22)) {
              *(undefined1 *)((longlong)plVar11 + 0x4c) = 1;
            }
            lVar23 = lVar23 + 4;
          } while (lVar7 * 4 != lVar23);
          if (0 < (int)local_d0) {
            puVar8 = local_d8;
            if (local_d8 == (undefined4 *)0x0) {
              puVar8 = local_f8;
            }
            FUN_144958a06(puVar8);
            if (0 < (longlong)(int)local_d0) {
              uVar31 = (longlong)(int)local_d0 + 1;
              do {
                puVar8 = local_d8;
                if (local_d8 == (undefined4 *)0x0) {
                  puVar8 = local_f8;
                }
                uVar24 = puVar8[uVar31 - 2];
                if ((-1 < (longlong)(int)uVar24) && (iVar22 = (int)plVar17[1], (int)uVar24 < iVar22)
                   ) {
                  iVar30 = ~uVar24 + iVar22;
                  if (iVar30 != 0) {
                    if (0 < iVar30) {
                      iVar30 = 1;
                    }
                    memmove((void *)((longlong)(int)uVar24 * 0x38 + *plVar17),
                            (void *)((ulonglong)(uint)(iVar22 - iVar30) * 0x38 + *plVar17),
                            (longlong)iVar30 * 0x38);
                    iVar22 = (int)plVar17[1];
                  }
                  *(int *)(plVar17 + 1) = iVar22 + -1;
                }
                uVar31 = uVar31 - 1;
              } while (1 < uVar31);
            }
            FUN_14010afec(local_1a0,0);
          }
        }
        if (local_158 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        puVar8 = local_d8;
        if (local_128 != (undefined4 *)0x0) {
          FUN_1400020a8();
          puVar8 = local_d8;
        }
        goto LAB_140ced36a;
      }
      lVar7 = param_2[3];
      if (lVar7 == 0) {
        local_230 = (uint *)CONCAT44(local_230._4_4_,0xffffffff);
        lVar7 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lVar7 + 0x70);
        cVar5 = FUN_143d215c0(&local_1b0,uVar3);
        if (cVar5 == '\0') goto LAB_140ced120;
        local_230 = (uint *)CONCAT44(local_230._4_4_,uVar3);
        lVar7 = lVar7 + 0x20;
      }
      puVar10 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = &PTR_FUN_14ab190a0;
      puVar10[8] = 0;
      *(undefined4 *)(puVar10 + 9) = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x4c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar10 + 0x54) = 0;
      puVar10[0xc] = 0;
      *(undefined4 *)(puVar10 + 0xd) = 0;
      *(undefined4 *)(puVar10 + 0xe) = 0xffffffff;
      puVar12 = (undefined8 *)local_228[2];
      plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14ab190c0;
      plVar11[2] = (longlong)puVar10;
      if (puVar10 == (undefined8 *)0x0) {
LAB_140cecec4:
        *puVar12 = puVar10;
        plVar25 = (longlong *)puVar12[1];
        if (plVar11 == plVar25) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar25 = plVar11 + 1;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)*plVar25 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar4 = (int *)((longlong)plVar11 + 0xc);
              *piVar4 = *piVar4 + -1;
              iVar22 = *piVar4;
              UNLOCK();
              plVar25 = plVar11;
              goto joined_r0x000140cecf01;
            }
          }
        }
        else {
          puVar12[1] = plVar11;
          if (plVar25 != (longlong *)0x0) goto LAB_140cecf1d;
        }
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          puVar10[1] = puVar10;
          if ((longlong *)puVar10[2] != plVar11) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            plVar25 = (longlong *)puVar10[2];
            if (plVar25 != (longlong *)0x0) {
              LOCK();
              piVar4 = (int *)((longlong)plVar25 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar25 + 0x10))();
              }
            }
            puVar10[2] = plVar11;
          }
          LOCK();
          plVar25 = plVar11 + 1;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)*plVar25 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar4 = (int *)((longlong)plVar11 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          goto LAB_140cecec4;
        }
        puVar10[1] = puVar10;
        *puVar12 = puVar10;
        plVar25 = (longlong *)puVar12[1];
        if (plVar25 != (longlong *)0x0) {
          puVar12[1] = 0;
LAB_140cecf1d:
          LOCK();
          plVar11 = plVar25 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar25)(plVar25);
            LOCK();
            piVar4 = (int *)((longlong)plVar25 + 0xc);
            *piVar4 = *piVar4 + -1;
            iVar22 = *piVar4;
            UNLOCK();
joined_r0x000140cecf01:
            if (iVar22 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
            }
          }
        }
      }
      local_148 = *(undefined4 *)((longlong)param_3 + 0x54);
      *(undefined4 *)(puVar10 + 0xe) = local_148;
      local_144 = local_230._0_4_;
      local_140 = 0;
      local_118 = (undefined4 *)0x0;
      local_110 = 0x800000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0x800000000;
      if (*(char *)((longlong)local_228 + 0x4e) == '\x01') {
        FUN_143d218aa(&local_1b0,puVar10 + 4,&local_108);
      }
      else {
        local_238 = local_138;
        FUN_143d21992(&local_1b0,puVar10 + 4,lVar7,&local_108);
        *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x54);
      }
      local_140 = (int)local_c0;
      FUN_143d21db8(&local_1b0);
      if (0 < (int)local_c0) {
        lVar7 = 0;
        do {
          puVar12 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar12 = &local_108;
          }
          iVar22 = *(int *)(puVar12 + lVar7);
          lVar23 = *local_1e0;
          local_178[0] = *(undefined4 *)((longlong)puVar12 + lVar7 * 8 + 4);
          puVar34 = (ulonglong *)plVar17[1];
          puVar8 = (undefined4 *)*puVar34 + 1;
          if ((undefined4 *)puVar34[1] < puVar8) {
            if ((*(byte *)((longlong)plVar17 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar17 + 0x170))(plVar17,local_178,4);
            }
            else {
              FUN_14572512c(plVar17,local_178);
            }
          }
          else {
            local_178[0] = *(undefined4 *)*puVar34;
            *puVar34 = (ulonglong)puVar8;
          }
          local_228[7] = local_1d8;
          local_228[6] = (longlong)iVar22 * 0x38 + lVar23;
          (**(code **)(*(longlong *)local_228[8] + 8))();
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)local_c0);
      }
      puVar8 = local_118;
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        puVar8 = local_118;
      }
    }
LAB_140ced36a:
    if (puVar8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar22 = (int)param_3[0x10];
    if (iVar22 == 0) {
      uVar31 = 1;
      iVar26 = 0;
      uVar32 = 0;
      iVar30 = 0;
    }
    else {
      puVar9 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar9 = (uint *)(param_3 + 0xd);
      }
      uVar24 = *puVar9;
      if (uVar24 == 0) {
        iVar30 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar30 = iVar22 + -1;
        }
        uVar32 = 0;
        uVar31 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar31 = uVar32;
        }
        iVar26 = 0;
        do {
          if (uVar31 == uVar32) goto LAB_140ced374;
          iVar26 = iVar26 + 0x20;
          uVar24 = puVar9[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar24 == 0);
      }
      else {
        iVar26 = 0;
        uVar32 = 0;
      }
      uVar31 = (ulonglong)(-uVar24 & uVar24);
      uVar1 = uVar31 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar30 = (iVar26 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar30) {
        iVar30 = iVar22;
      }
    }
    puVar28 = (uint *)0x1;
    if (iVar30 == iVar22) goto LAB_140ced376;
    uVar24 = 0xffffffff;
    local_230 = (uint *)(param_3 + 0xd);
    do {
      lVar7 = local_210[0xb];
      lVar23 = (longlong)iVar30 * 200;
      FUN_1403257c8(param_2[0xd],lVar23 + lVar7 + 8);
      FUN_1403257c8(param_2[0xd],lVar23 + lVar7 + 0x58);
      piVar4 = (int *)param_2[0xe];
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + *(int *)(lVar7 + lVar23 + 0xb0);
      }
      uVar24 = uVar24 & ~(uint)uVar31;
      puVar9 = (uint *)local_210[0xf];
      if ((uint *)local_210[0xf] == (uint *)0x0) {
        puVar9 = local_230;
      }
      iVar15 = (int)local_210[0x10];
      iVar30 = (int)uVar32;
      lVar7 = (longlong)iVar30;
      uVar20 = puVar9[lVar7] & uVar24;
      if (uVar20 == 0) {
        iVar13 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar13 = iVar15 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar26 = iVar26 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar30) {
          iVar14 = iVar30;
        }
        if (iVar30 < iVar13) {
          lVar23 = 0;
          do {
            uVar20 = puVar9[lVar7 + lVar23 + 1];
            if (uVar20 != 0) {
              uVar32 = (ulonglong)(iVar30 + (int)lVar23 + 1);
              uVar24 = 0xffffffff;
              goto LAB_140cebc12;
            }
            iVar26 = iVar26 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar14 - lVar7 != lVar23);
          uVar24 = 0xffffffff;
          iVar30 = iVar14;
        }
        uVar32 = (ulonglong)(iVar30 + 1);
        iVar30 = iVar15;
      }
      else {
LAB_140cebc12:
        uVar31 = (ulonglong)(-uVar20 & uVar20);
        uVar1 = uVar31 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar30 = (iVar26 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar30) {
          iVar30 = iVar15;
        }
      }
    } while (iVar30 != iVar22);
  }
LAB_140ced374:
  puVar28 = (uint *)0x1;
LAB_140ced376:
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return puVar28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    iVar22 = iVar22 + 0x20;
    uVar24 = puVar28[uVar32 + 1];
    uVar32 = uVar32 + 1;
    if (uVar24 != 0) break;
LAB_140cec0c1:
    if (uVar31 == uVar32) goto LAB_140cec3ee;
  }
LAB_140cec0da:
  uVar31 = (ulonglong)(-uVar24 & uVar24);
  uVar1 = uVar31 * 2 + 1;
  lVar7 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  uVar24 = (iVar22 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
  if ((int)uVar6 <= (int)uVar24) {
    uVar24 = uVar6;
  }
LAB_140cec113:
  if ((int)uVar24 < (int)uVar6) {
    local_208 = puVar18 + 0x16;
    uVar20 = 0xffffffff;
    local_1e8 = (longlong *)((ulonglong)local_1e8 & 0xffffffff00000000);
    do {
      plVar17 = local_228;
      puVar34 = (ulonglong *)((longlong)(int)uVar24 * 0x10 + *(longlong *)puVar16);
      cVar5 = (**(code **)(*(longlong *)local_228[4] + 0x330))((longlong *)local_228[4],puVar34,0);
      puVar16 = local_230;
      if (cVar5 == '\0') {
        puVar21 = puVar34;
        lVar7 = (**(code **)(*(longlong *)plVar17[4] + 800))((longlong *)plVar17[4],puVar34);
        puVar16 = local_230;
        if (lVar7 != 0) {
          local_1e8 = (longlong *)
                      CONCAT44(local_1e8._4_4_,(int)CONCAT71((int7)((ulonglong)puVar21 >> 8),1));
          if ((*puVar34 & 1) == 0 && *puVar34 != 0) {
            FUN_140325a06(local_208,&local_108,puVar34,0);
          }
          goto LAB_140cec1a9;
        }
      }
      else {
LAB_140cec1a9:
        FUN_140646052(puVar16,uVar24);
      }
      param_2 = local_228;
      uVar20 = uVar20 & ~(uint)uVar31;
      puVar9 = *(uint **)(puVar16 + 8);
      if (*(uint **)(puVar16 + 8) == (uint *)0x0) {
        puVar9 = puVar18 + 6;
      }
      uVar6 = puVar16[10];
      iVar30 = (int)uVar32;
      lVar7 = (longlong)iVar30;
      uVar24 = puVar9[lVar7] & uVar20;
      if (uVar24 == 0) {
        iVar26 = uVar6 + 0x1e;
        if (-1 < (int)(uVar6 - 1)) {
          iVar26 = uVar6 - 1;
        }
        iVar26 = iVar26 >> 5;
        iVar15 = iVar26;
        if (iVar26 < iVar30) {
          iVar15 = iVar30;
        }
        if (iVar26 <= iVar30) break;
        lVar23 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar24 = puVar9[lVar7 + lVar23 + 1];
          if (uVar24 != 0) break;
          lVar23 = lVar23 + 1;
          if (iVar15 - lVar7 == lVar23) goto LAB_140cec247;
        }
        uVar32 = (ulonglong)(iVar30 + (int)lVar23 + 1);
        uVar20 = 0xffffffff;
      }
      uVar31 = (ulonglong)(-uVar24 & uVar24);
      uVar1 = uVar31 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar24 = (iVar22 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while ((int)uVar24 < (int)uVar6);
LAB_140cec247:
    puVar9 = local_1c8;
    if (((ulonglong)local_1e8 & 1) != 0) {
      *(undefined1 *)((longlong)local_228 + 0x49) = 1;
      if (*(char *)((longlong)local_228 + 0x4a) == '\0') {
        (**(code **)(*(longlong *)local_228[0xb] + 0x210))();
        *(undefined1 *)((longlong)param_2 + 0x4a) = 1;
      }
      uVar31 = local_120;
      lVar7 = local_1d8;
      if ((int)local_210[1] != *(int *)((longlong)local_210 + 0x34)) {
        plVar17 = (longlong *)local_210[8];
        if ((longlong *)local_210[8] == (longlong *)0x0) {
          plVar17 = local_1c0;
        }
        iVar22 = *(int *)((longlong)plVar17 + (ulonglong)((int)local_210[9] - 1U & local_1d0) * 4);
        if (iVar22 != -1) {
          do {
            lVar23 = *local_210 + (longlong)iVar22 * 0x10;
            if (*(uint *)(*local_210 + (longlong)iVar22 * 0x10) == local_1d0) goto LAB_140cec2d8;
            iVar22 = *(int *)(lVar23 + 8);
          } while (iVar22 != -1);
        }
      }
      lVar23 = 0;
LAB_140cec2d8:
      iVar22 = *(int *)(lVar23 + 4);
      lVar23 = *local_1e0;
      lVar33 = (longlong)(int)local_120;
      uVar24 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar24);
      if (local_120._4_4_ < uVar24) {
        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
      }
      puVar8 = local_128;
      if (local_128 == (undefined4 *)0x0) {
        puVar8 = &local_148;
      }
      puVar8[lVar33] = iVar22;
      FUN_1448fcc30(&local_108,param_2[4],*(undefined8 *)(local_230 + 0x28),
                    (longlong)(int)local_230[0x2c]);
      param_2[7] = lVar7;
      param_2[6] = (longlong)iVar22 * 0x38 + lVar23;
      param_2[1] = (longlong)&local_108;
      (**(code **)(*(longlong *)param_2[8] + 8))((longlong *)param_2[8],param_2);
      local_108 = &PTR_FUN_149e73df0;
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      puVar9 = local_1c8;
      local_108 = &PTR_FUN_149e37220;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar17 = local_b0;
      local_108 = &PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar17);
      }
      lVar7 = local_90;
      puVar16 = local_230;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar7);
        puVar16 = local_230;
      }
    }
  }
LAB_140cec3ee:
  uVar20 = (uint)local_1f8;
  param_3 = local_210;
  puVar28 = local_218;
  iVar30 = (int)local_1f0;
  uVar24 = local_21c;
  if ((puVar16[2] == puVar16[0xd]) && (uVar31 = local_1f8, local_230[0x16] == local_230[0x21])) {
LAB_140cec420:
    uVar20 = (uint)uVar31;
    FUN_1456fd4bc(local_200,local_1cc);
  }
  uVar24 = uVar24 & ~uVar20;
  puVar16 = (uint *)param_3[0xf];
  if ((uint *)param_3[0xf] == (uint *)0x0) {
    puVar16 = puVar9;
  }
  iVar22 = (int)param_3[0x10];
  iVar26 = (int)puVar28;
  lVar7 = (longlong)iVar26;
  uVar20 = puVar16[lVar7] & uVar24;
  if (uVar20 == 0) {
    iVar15 = iVar22 + 0x1e;
    if (-1 < iVar22 + -1) {
      iVar15 = iVar22 + -1;
    }
    iVar15 = iVar15 >> 5;
    iVar13 = iVar15;
    if (iVar15 < iVar26) {
      iVar13 = iVar26;
    }
    if (iVar15 <= iVar26) goto LAB_140cec51d;
    lVar23 = 0;
    while( true ) {
      iVar30 = iVar30 + 0x20;
      uVar20 = puVar16[lVar7 + lVar23 + 1];
      if (uVar20 != 0) break;
      lVar23 = lVar23 + 1;
      if (iVar13 - lVar7 == lVar23) goto LAB_140cec51d;
    }
    puVar28 = (uint *)(ulonglong)(iVar26 + (int)lVar23 + 1);
    uVar24 = 0xffffffff;
  }
  uVar31 = (ulonglong)(-uVar20 & uVar20);
  uVar32 = uVar31 * 2 + 1;
  lVar7 = 0x3f;
  if (uVar32 != 0) {
    for (; uVar32 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  iVar26 = (iVar30 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
  if (iVar22 <= iVar26) goto LAB_140cec51d;
  goto LAB_140cebfb9;
}



// FUNCTION 140ced3a6 FUN_140ced3a6 body=145 status=ok
// SIG undefined FUN_140ced3a6(void)

float FUN_140ced3a6(longlong *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)((longlong)param_1 + 0x20c);
  iVar3 = *(int *)((longlong)param_1 + 0x2dc);
  iVar2 = (**(code **)(*param_1 + 0x3c8))();
  if (iVar3 < iVar2) {
    fVar5 = fVar5 * *(float *)(param_1 + 0x43);
  }
  fVar1 = *(float *)((longlong)param_1 + 0x3c4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if ((int)param_1[0x75] < 1) {
      iVar3 = FUN_14119091a(param_1);
      fVar4 = (float)iVar3;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x76);
    }
    fVar5 = fVar1 * fVar5 * fVar4 + fVar5;
  }
  return fVar5;
}



// FUNCTION 140ced438 FUN_140ced438 body=45 status=ok
// SIG undefined FUN_140ced438(void)

int FUN_140ced438(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1a4);
  if ((0 < iVar3) && (iVar1 = *(int *)(param_1 + 0x3d4), iVar1 != 0)) {
    iVar2 = FUN_140ced466();
    iVar3 = iVar3 + iVar2 * iVar1;
  }
  return iVar3;
}



// FUNCTION 140ced466 FUN_140ced466 body=110 status=ok
// SIG undefined FUN_140ced466(void)

int FUN_140ced466(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x3a8);
  if (*(int *)(param_1 + 0x3a8) < 1) {
    iVar4 = 0;
    iVar5 = 0;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar3 = FUN_140086990();
      lVar1 = *(longlong *)(param_1 + 0xb0);
      if ((((lVar1 != 0) && (iVar5 = iVar4, lVar3 != 0)) &&
          (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) && (*(int *)(lVar1 + 0xbc) != 1)))) {
        iVar5 = *(int *)(lVar1 + 0xc4);
      }
    }
  }
  return iVar5;
}



// FUNCTION 140ced4d4 FUN_140ced4d4 body=45 status=ok
// SIG undefined FUN_140ced4d4(void)

undefined8 FUN_140ced4d4(undefined8 param_1,int param_2)

{
  FUN_140ced502();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 140ced502 FUN_140ced502 body=630 status=ok
// SIG undefined FUN_140ced502(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ced502(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ab5d380;
  plVar1 = param_1 + 0x24;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x27)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x27)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x1b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1e)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1e)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x13;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x17) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x16)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x16)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xb;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xf) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xe)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0xe)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 4;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 8) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 7)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 7)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar3 = (undefined8 *)param_1[1], puVar3 != (undefined8 *)0x0)) {
    if (puVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar3 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x000140ced6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140ced798 FUN_140ced798 body=2191 status=ok
// SIG undefined FUN_140ced798(void)

void FUN_140ced798(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  void *pvVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  void *pvVar24;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  int *local_60;
  int local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 2);
  uVar4 = (uint)((ulonglong)param_3 >> 0x20);
  uVar9 = uVar4 >> 0xd ^ (int)param_3 - uVar4;
  uVar15 = uVar9 << 8 ^ (-0x61c88647 - uVar9) - uVar4;
  uVar21 = uVar15 >> 0xd ^ (uVar4 - uVar9) - uVar15;
  uVar23 = uVar21 >> 0xc ^ (uVar9 - uVar15) - uVar21;
  uVar9 = uVar23 << 0x10 ^ (uVar15 - uVar21) - uVar23;
  uVar15 = uVar9 >> 5 ^ (uVar21 - uVar23) - uVar9;
  uVar21 = uVar15 >> 3 ^ (uVar23 - uVar9) - uVar15;
  uVar9 = uVar21 << 10 ^ (uVar9 - uVar15) - uVar21;
  uVar9 = uVar9 >> 0xf ^ uVar15 - (uVar21 + uVar9);
  local_68 = param_4;
  local_60 = param_2;
  if (param_1[4] != param_1[0xf]) {
    piVar6 = param_1 + 0x10;
    if (*(int **)(param_1 + 0x12) != (int *)0x0) {
      piVar6 = *(int **)(param_1 + 0x12);
    }
    iVar16 = piVar6[param_1[0x14] - 1U & uVar9];
    if (iVar16 != -1) {
      do {
        piVar6 = (int *)(*plVar1 + (longlong)iVar16 * 0x14);
        if ((*piVar6 == (int)param_3) && (*(uint *)(*plVar1 + 4 + (longlong)iVar16 * 0x14) == uVar4)
           ) {
          if (piVar6 != (int *)0x0) goto LAB_140ced975;
          break;
        }
        iVar16 = piVar6[3];
      } while (iVar16 != -1);
    }
  }
  FUN_140cee0ca(plVar1,local_58);
  *local_50 = param_3;
  local_50[1] = 0xffffffffffffffff;
  local_78 = 0;
  cVar3 = FUN_140cee028(plVar1,uVar9,local_50,local_58);
  if (cVar3 == '\0') {
    uVar4 = param_1[4] - param_1[0xf];
    if (uVar4 < 4) {
      iVar16 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar16 <= param_1[0x14])) {
      uVar9 = param_1[0x14] - 1U & uVar9;
      *(uint *)(local_50 + 2) = uVar9;
      piVar6 = *(int **)(param_1 + 0x12);
      if (*(int **)(param_1 + 0x12) == (int *)0x0) {
        piVar6 = param_1 + 0x10;
      }
      *(int *)((longlong)local_50 + 0xc) =
           piVar6[(longlong)param_1[0x14] - 1U & (longlong)(int)uVar9];
      piVar6 = *(int **)(param_1 + 0x12);
      if (*(int **)(param_1 + 0x12) == (int *)0x0) {
        piVar6 = param_1 + 0x10;
      }
      piVar6[(longlong)param_1[0x14] - 1U & (longlong)(int)uVar9] = local_58[0];
    }
    else {
      param_1[0x14] = iVar16;
      FUN_140cee2b0(plVar1);
    }
  }
  piVar6 = (int *)(*plVar1 + (longlong)local_58[0] * 0x14);
LAB_140ced975:
  puVar20 = (uint *)(piVar6 + 2);
  uVar4 = *puVar20;
  if (uVar4 == 0xffffffff) {
    if (param_1[0x23] == 0) {
      uVar4 = param_1[0x18];
      param_1[0x18] = uVar4 + 1;
      if (param_1[0x19] == uVar4) {
        FUN_1406a7630(param_1 + 0x16,uVar4);
      }
      iVar16 = param_1[0x20];
      if (iVar16 == 0) {
        iVar22 = -1;
      }
      else {
        iVar22 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar22 = iVar16 + -1;
        }
        iVar22 = iVar22 >> 5;
      }
      piVar6 = param_1 + 0x1a;
      iVar5 = iVar16 + 1;
      iVar10 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar10 = iVar16;
      }
      if (iVar10 >> 5 == iVar22) {
        param_1[0x20] = iVar5;
      }
      else {
        if (param_1[0x21] <= iVar16) {
          if (iVar16 + 0x20U < 0xa0) {
            iVar5 = 0x80;
            iVar22 = iVar16;
          }
          else {
            uVar9 = iVar16 + 0x20U >> 5;
            if (param_1[0x21] + 0x1fU < 0xa0) {
              uVar15 = 4;
              if (4 < uVar9) {
                uVar15 = uVar9;
              }
            }
            else {
              uVar15 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
            }
            uVar11 = FUN_144a3809e(uVar15 << 2,0);
            iVar22 = (int)(uVar11 >> 2);
            iVar5 = -0x20;
            if ((int)uVar9 <= iVar22) {
              iVar5 = iVar22 << 5;
            }
            iVar22 = param_1[0x20];
          }
          param_1[0x21] = iVar5;
          FUN_1446efbd8(piVar6,iVar22);
          iVar5 = param_1[0x20] + 1;
        }
        iVar22 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar22 = iVar5;
        }
        param_1[0x20] = iVar5;
        if (iVar5 % 0x20 != 0) {
          piVar18 = *(int **)(param_1 + 0x1e);
          if (*(int **)(param_1 + 0x1e) == (int *)0x0) {
            piVar18 = piVar6;
          }
          bVar8 = -(char)(iVar5 % 0x20);
          piVar18[iVar22 >> 5] = (uint)(piVar18[iVar22 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
        }
      }
      lVar17 = (longlong)(int)uVar4;
      if (*(int **)(param_1 + 0x1e) != (int *)0x0) {
        piVar6 = *(int **)(param_1 + 0x1e);
      }
      piVar6[iVar10 >> 5] = piVar6[iVar10 >> 5] | 1 << ((byte)iVar16 & 0x1f);
      lVar7 = *(longlong *)(param_1 + 0x16);
    }
    else {
      iVar16 = *param_1;
      piVar6 = param_1 + 0x1a;
      if (*(int **)(param_1 + 0x1e) != (int *)0x0) {
        piVar6 = *(int **)(param_1 + 0x1e);
      }
      uVar9 = param_1[0x20] + 0x1fU >> 5;
      iVar22 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar22 = iVar16;
      }
      iVar22 = iVar22 >> 5;
      uVar4 = 0xffffffff;
      if (iVar22 < (int)uVar9) {
        uVar4 = -1 << ((byte)iVar16 & 0x1f);
        uVar11 = (ulonglong)iVar22;
        iVar22 = iVar22 * -0x20;
LAB_140ced9d7:
        if ((uVar4 & ~piVar6[uVar11]) == 0) goto code_r0x000140ced9e3;
        uVar4 = uVar4 & ~piVar6[uVar11];
        iVar16 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> iVar16 & 1) == 0; iVar16 = iVar16 + 1) {
          }
        }
        uVar9 = iVar16 - iVar22;
        uVar4 = 0xffffffff;
        if (((int)uVar9 < param_1[0x20]) && (iVar16 + 1 != iVar22)) {
          uVar4 = uVar9 + 0x1f;
          if (-1 < (int)uVar9) {
            uVar4 = uVar9;
          }
          piVar6[(int)uVar4 >> 5] = piVar6[(int)uVar4 >> 5] | 1 << ((byte)iVar16 & 0x1f);
          uVar4 = uVar9;
        }
      }
LAB_140ceda35:
      *param_1 = uVar4 + 1;
      lVar7 = *(longlong *)(param_1 + 0x16);
      lVar17 = (longlong)(int)uVar4;
      lVar12 = lVar17 * 0x68;
      uVar9 = *(uint *)(lVar7 + 4 + lVar12);
      if (param_1[0x22] == uVar4) {
        param_1[0x22] = uVar9;
      }
      uVar15 = *(uint *)(lVar7 + lVar12);
      if (-1 < (int)uVar9) {
        *(uint *)(lVar7 + (ulonglong)uVar9 * 0x68) = uVar15;
      }
      if (-1 < (int)uVar15) {
        *(undefined4 *)(lVar7 + 4 + (ulonglong)uVar15 * 0x68) = *(undefined4 *)(lVar12 + lVar7 + 4);
      }
      param_1[0x23] = param_1[0x23] + -1;
    }
    lVar13 = lVar17 * 0x68;
    lVar12 = lVar7 + lVar13;
    *(undefined8 *)(lVar7 + lVar13) = param_3;
    uVar15 = (uint)local_68;
    uVar9 = uVar15 & 0xffff;
    *(undefined8 *)(lVar7 + 0x18 + lVar13) = 0;
    *(undefined4 *)(lVar7 + 0x24 + lVar13) = 0x80;
    *(uint *)(lVar7 + 0x20 + lVar13) = uVar9;
    if ((short)local_68 != 0) {
      pvVar24 = (void *)(lVar7 + lVar13 + 8);
      pvVar14 = pvVar24;
      if (uVar9 < 0x81) {
LAB_140cedac8:
        uVar15 = uVar15 + 0x1f >> 3 & 0x1ffc;
        iVar16 = (int)CONCAT71((int7)((ulonglong)lVar17 >> 8),0xff);
      }
      else {
        uVar15 = uVar9 + 0x1f >> 5;
        lVar17 = 0;
        FUN_14499171c(pvVar24,0,uVar15,4);
        *(uint *)(lVar12 + 0x24) = uVar9 + 0x1f & 0xffffffe0;
        pvVar14 = *(void **)(lVar12 + 0x18);
        if (*(void **)(lVar12 + 0x18) == (void *)0x0) {
          pvVar14 = pvVar24;
        }
        if (uVar9 < 0x101) {
          uVar15 = (uint)local_68;
          goto LAB_140cedac8;
        }
        uVar15 = uVar15 << 2;
        iVar16 = (int)CONCAT71((int7)((ulonglong)lVar17 >> 8),0xff);
      }
      memset(pvVar14,iVar16,(ulonglong)uVar15);
      iVar16 = *(int *)(lVar12 + 0x20);
      iVar22 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar22 = iVar16;
      }
      if (iVar16 % 0x20 != 0) {
        if (*(void **)(lVar12 + 0x18) != (void *)0x0) {
          pvVar24 = *(void **)(lVar12 + 0x18);
        }
        bVar8 = -(char)(iVar16 % 0x20);
        *(uint *)((longlong)pvVar24 + (longlong)(iVar22 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar24 + (longlong)(iVar22 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    *(undefined8 *)(lVar12 + 0x48) = 0;
    *(undefined4 *)(lVar12 + 0x50) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined8 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x54) = 0xffffffff00000080;
    *(undefined4 *)(lVar12 + 0x5c) = 0;
    *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
    *puVar20 = uVar4;
  }
  lVar12 = *(longlong *)(param_1 + 0x16);
  lVar17 = (longlong)(int)uVar4 * 0x68;
  lVar7 = lVar12 + lVar17;
  iVar16 = *(int *)(lVar12 + 0x5c + lVar17);
  if (iVar16 == 0) {
    iVar22 = *(int *)(lVar7 + 0x30);
    *(int *)(lVar7 + 0x30) = iVar22 + 1;
    if (*(int *)(lVar7 + 0x34) == iVar22) {
      FUN_140549c28(lVar17 + lVar12 + 0x28,iVar22);
    }
    iVar16 = *(int *)(lVar7 + 0x50);
    if (iVar16 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar5 = iVar16 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    lVar17 = lVar7 + 0x38;
    iVar10 = iVar16 + 1;
    iVar19 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar19 = iVar16;
    }
    if (iVar19 >> 5 == iVar5) {
      *(int *)(lVar7 + 0x50) = iVar10;
    }
    else {
      if (*(int *)(lVar7 + 0x54) <= iVar16) {
        if (iVar16 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar16;
        }
        else {
          uVar4 = iVar16 + 0x20U >> 5;
          if (*(int *)(lVar7 + 0x54) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar4) {
              uVar9 = uVar4;
            }
          }
          else {
            uVar9 = (uVar4 * 3 >> 3) + uVar4 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar9 << 2,0);
          iVar5 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar4 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = *(int *)(lVar7 + 0x50);
        }
        *(int *)(lVar7 + 0x54) = iVar10;
        FUN_1446efbd8(lVar17,iVar5);
        iVar10 = *(int *)(lVar7 + 0x50) + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(lVar7 + 0x50) = iVar10;
      if (iVar10 % 0x20 != 0) {
        lVar12 = *(longlong *)(lVar7 + 0x48);
        if (*(longlong *)(lVar7 + 0x48) == 0) {
          lVar12 = lVar17;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)(lVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)(lVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar12 = (longlong)iVar22;
    if (*(longlong *)(lVar7 + 0x48) != 0) {
      lVar17 = *(longlong *)(lVar7 + 0x48);
    }
    bVar8 = (byte)iVar16 & 0x1f;
    puVar2 = (uint *)(lVar17 + (longlong)(iVar19 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar22 = *(int *)(lVar7 + 0x58);
    lVar12 = (longlong)iVar22;
    iVar5 = *(int *)(*(longlong *)(lVar7 + 0x28) + 4 + lVar12 * 0x28);
    *(int *)(lVar7 + 0x58) = iVar5;
    iVar16 = iVar16 + -1;
    *(int *)(lVar7 + 0x5c) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(*(longlong *)(lVar7 + 0x28) + (longlong)iVar5 * 0x28) = 0xffffffff;
    }
  }
  bVar8 = (byte)iVar22 & 0x1f;
  uVar4 = 1 << bVar8;
  uVar11 = (ulonglong)uVar4;
  lVar17 = lVar7 + 0x38;
  if (*(longlong *)(lVar7 + 0x48) != 0) {
    lVar17 = *(longlong *)(lVar7 + 0x48);
  }
  iVar16 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar16 = iVar22;
  }
  puVar2 = (uint *)(lVar17 + (longlong)(iVar16 >> 5) * 4);
  *puVar2 = *puVar2 | uVar4;
  pvVar14 = (void *)(*(longlong *)(lVar7 + 0x28) + lVar12 * 0x28);
  uVar4 = *(uint *)(lVar7 + 0x20);
  *(undefined8 *)((longlong)pvVar14 + 0x10) = 0;
  *(undefined4 *)((longlong)pvVar14 + 0x1c) = 0x80;
  *(uint *)((longlong)pvVar14 + 0x18) = uVar4 & 0xffff;
  if ((short)uVar4 == 0) goto LAB_140cedc8e;
  pvVar24 = pvVar14;
  if ((uVar4 & 0xffff) < 0x81) {
LAB_140cedc41:
    uVar9 = uVar4 + 0x1f >> 3 & 0x1ffc;
    iVar16 = (int)CONCAT71((int7)(uVar11 >> 8),0xff);
  }
  else {
    uVar15 = (uVar4 & 0xffff) + 0x1f;
    uVar9 = uVar15 >> 5;
    uVar11 = (ulonglong)(uint)(0 << bVar8);
    FUN_14499171c(pvVar14,uVar11,uVar9,4);
    *(uint *)((longlong)pvVar14 + 0x1c) = uVar15 & 0xffffffe0;
    pvVar24 = *(void **)((longlong)pvVar14 + 0x10);
    if (*(void **)((longlong)pvVar14 + 0x10) == (void *)0x0) {
      pvVar24 = pvVar14;
    }
    if ((uVar4 & 0xffff) < 0x101) goto LAB_140cedc41;
    uVar9 = uVar9 << 2;
    iVar16 = (int)CONCAT71((int7)(uVar11 >> 8),0xff);
  }
  memset(pvVar24,iVar16,(ulonglong)uVar9);
  iVar16 = *(int *)((longlong)pvVar14 + 0x18);
  iVar5 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar5 = iVar16;
  }
  if (iVar16 % 0x20 != 0) {
    pvVar24 = *(void **)((longlong)pvVar14 + 0x10);
    if (*(void **)((longlong)pvVar14 + 0x10) == (void *)0x0) {
      pvVar24 = pvVar14;
    }
    bVar8 = -(char)(iVar16 % 0x20);
    *(uint *)((longlong)pvVar24 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar24 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
         (bVar8 & 0x1f);
  }
LAB_140cedc8e:
  *(byte *)((longlong)pvVar14 + 0x20) = *(byte *)((longlong)pvVar14 + 0x20) & 0xfc | 2;
  uVar4 = *puVar20;
  *local_60 = iVar22;
  local_60[1] = uVar4;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140ced9e3:
  uVar11 = uVar11 + 1;
  iVar22 = iVar22 + -0x20;
  uVar4 = 0xffffffff;
  if (uVar9 == uVar11) goto LAB_140ceda35;
  goto LAB_140ced9d7;
}



// FUNCTION 140cee028 FUN_140cee028 body=161 status=ok
// SIG undefined FUN_140cee028(void)

void FUN_140cee028(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  uVar3 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar3 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar5 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_142a644ec(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          goto LAB_140cee097;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
    uVar3 = 0;
  }
LAB_140cee097:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 140cee0ca FUN_140cee0ca body=485 status=ok
// SIG undefined FUN_140cee0ca(void)

int * FUN_140cee0ca(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 140cee2b0 FUN_140cee2b0 body=772 status=ok
// SIG undefined FUN_140cee2b0(void)

void FUN_140cee2b0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140cee325;
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
  } while (uVar9 != uVar2);
LAB_140cee325:
  iVar16 = (int)param_1[5];
  if (iVar16 == 0) {
    uVar3 = 0;
    uVar13 = 1;
    iVar7 = 0;
    iVar4 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar7 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar7 = iVar16 + -1;
      }
      uVar3 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar13 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar9 = puVar12[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar17 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar7) {
      iVar7 = iVar16;
    }
  }
  if (iVar7 < iVar16) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar14 = (longlong)iVar7;
      uVar2 = *(uint *)(lVar8 + 4 + lVar14 * 0x14);
      uVar15 = uVar2 >> 0xd ^ *(int *)(lVar8 + lVar14 * 0x14) - uVar2;
      uVar6 = uVar15 << 8 ^ (-0x61c88647 - uVar2) - uVar15;
      uVar2 = uVar6 >> 0xd ^ (uVar2 - uVar15) - uVar6;
      uVar15 = uVar2 >> 0xc ^ (uVar15 - uVar6) - uVar2;
      uVar6 = uVar15 << 0x10 ^ (uVar6 - uVar2) - uVar15;
      uVar2 = uVar6 >> 5 ^ (uVar2 - uVar15) - uVar6;
      uVar15 = uVar2 >> 3 ^ (uVar15 - uVar6) - uVar2;
      uVar6 = uVar15 << 10 ^ (uVar6 - uVar2) - uVar15;
      uVar17 = (longlong)(int)(uVar6 >> 0xf ^ uVar2 - (uVar15 + uVar6)) &
               (longlong)(int)param_1[9] - 1U;
      iVar16 = (int)uVar17;
      *(int *)(lVar8 + 0x10 + lVar14 * 0x14) = iVar16;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0xc + lVar14 * 0x14) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar16 = (int)param_1[5];
      iVar7 = (int)uVar3;
      lVar8 = (longlong)iVar7;
      uVar2 = puVar12[lVar8] & uVar9;
      if (uVar2 == 0) {
        iVar10 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar10 = iVar16 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar10 <= iVar7) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar12[lVar8 + lVar14 + 1];
          if (uVar2 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar8 == lVar14) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar7 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar17 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar16);
  }
  return;
}



// FUNCTION 140cee5ba FUN_140cee5ba body=57 status=ok
// SIG undefined FUN_140cee5ba(void)

void FUN_140cee5ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68668 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68668 = FUN_140002ddd(FUN_14651b74d,uVar1,L"GbxTriggerBehaviorMod");
  }
  return;
}



// FUNCTION 140cee602 FUN_140cee602 body=54 status=ok
// SIG undefined FUN_140cee602(void)

undefined8 * FUN_140cee602(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b69d580;
  FUN_140485912(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cee646 FUN_140cee646 body=36 status=ok
// SIG undefined FUN_140cee646(void)

undefined8 FUN_140cee646(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140cee66a FUN_140cee66a body=77 status=ok
// SIG undefined FUN_140cee66a(void)

undefined8 FUN_140cee66a(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_140cee6b8();
    param_1 = plVar1[2];
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (param_1 = *(longlong *)(param_1 + 0x30),
       *(longlong *)(param_1 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      uVar4 = (**(code **)(*plVar1 + 0x638))(plVar1);
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar2 = 1;
      goto LAB_140cee6ab;
    }
  }
  bVar6 = (byte)param_1;
  bVar2 = 0;
  uVar5 = 0;
LAB_140cee6ab:
  return CONCAT71(uVar5,bVar2 & bVar6);
}



// FUNCTION 140cee6b8 FUN_140cee6b8 body=228 status=ok
// SIG undefined FUN_140cee6b8(void)

longlong FUN_140cee6b8(void)

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
  if (DAT_14cb1be20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147e33e17;
    local_40 = &LAB_14641e63d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x3a8;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavMesh",&DAT_14cb1be20,FUN_14641e616);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1be20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cee79e FUN_140cee79e body=151 status=ok
// SIG undefined FUN_140cee79e(void)

ulonglong FUN_140cee79e(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      while (puVar1 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18), *puVar1 != param_2) {
        iVar4 = (int)puVar1[2];
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (puVar1 == (ulonglong *)0x0) {
        return 0;
      }
      if (puVar1 + 1 == (ulonglong *)0x0) {
        return 0;
      }
      return puVar1[1];
    }
  }
  return 0;
}



// FUNCTION 140cee836 FUN_140cee836 body=204 status=ok
// SIG undefined FUN_140cee836(void)

void FUN_140cee836(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_140495e96(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140cee904(lVar1);
    if (lVar1 != 0) {
      if (param_4 == '\0') {
        FUN_1410290ea(lVar1,param_2,param_3,0);
      }
      else {
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        FUN_1404e49fa(&local_58,param_3);
        local_68 = *param_2;
        local_60 = *(undefined4 *)(param_2 + 1);
        FUN_140ceeaa0(lVar1,&local_68,&local_58,0);
      }
    }
  }
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cee904 FUN_140cee904 body=105 status=ok
// SIG undefined FUN_140cee904(void)

void FUN_140cee904(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140cee9ba();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140cee96e(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cee96e FUN_140cee96e body=76 status=ok
// SIG undefined FUN_140cee96e(void)

void FUN_140cee96e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140cee9ba();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140cee9ab;
    }
  }
  lVar2 = 0;
LAB_140cee9ab:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140cee9ba FUN_140cee9ba body=228 status=ok
// SIG undefined FUN_140cee9ba(void)

longlong FUN_140cee9ba(void)

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
  if (DAT_14cbb2fc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_1411b127e;
    local_38 = &LAB_148c5abbb;
    local_40 = FUN_1465f725c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_Pips",&DAT_14cbb2fc8,&DAT_148c5abba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2fc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ceeaa0 FUN_140ceeaa0 body=126 status=ok
// SIG undefined FUN_140ceeaa0(void)

void FUN_140ceeaa0(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1409801a0();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x28));
  *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  FUN_140ceeb1e(lVar1,param_2,param_3);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x28));
  if (param_4 == '\0') {
    FUN_140ceeb80(param_1);
  }
  if (*(longlong *)(param_3 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ceeb1e FUN_140ceeb1e body=96 status=ok
// SIG undefined FUN_140ceeb1e(void)

void FUN_140ceeb1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1407156ca(param_1,local_28,param_2,param_3);
  FUN_1405e9454(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ceeb80 FUN_140ceeb80 body=165 status=ok
// SIG undefined FUN_140ceeb80(void)

void FUN_140ceeb80(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_140059518((longlong)param_1 + 0x44);
  uVar1 = *(undefined4 *)(lVar3 + 0xe0);
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar3 = FUN_1400f6f32(uVar4);
  if (((lVar3 != 0) && (lVar2 = *(longlong *)(lVar3 + 0x30), lVar2 != 0)) &&
     (*(longlong *)(lVar3 + 0x68) != 0)) {
    FUN_140ceec26(*(longlong *)(lVar3 + 0x68),local_24,uVar1);
    if (-1 < local_24[0]) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_140ceec8e(lVar2,local_40,local_24);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ceec26 FUN_140ceec26 body=104 status=ok
// SIG undefined FUN_140ceec26(void)

void FUN_140ceec26(longlong param_1,undefined2 *param_2,int param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined2 uVar4;
  
  uVar2 = 0xffff;
  if ((param_3 < 0) || ((longlong)*(int *)(param_1 + 0x10) == 0)) {
    uVar4 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar3);
      if ((((lVar1 != 0) && (*(short *)(lVar1 + 4) < 0)) && (*(longlong *)(lVar1 + 0x10) != 0)) &&
         (*(int *)(*(longlong *)(lVar1 + 0x10) + 8) == param_3)) {
        uVar2 = *(undefined2 *)(lVar1 + 2);
        uVar4 = *(undefined2 *)(lVar1 + 8);
        break;
      }
      lVar3 = lVar3 + 8;
      uVar4 = 0;
    } while ((longlong)*(int *)(param_1 + 0x10) * 8 != lVar3);
  }
  *param_2 = uVar2;
  param_2[1] = uVar4;
  return;
}



// FUNCTION 140ceec8e FUN_140ceec8e body=416 status=ok
// SIG undefined FUN_140ceec8e(void)

undefined8 *
FUN_140ceec8e(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x1b0) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x1b0) + 0x419) != '\x01')) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xffff;
    lVar3 = FUN_140b9fe48(param_1,param_3,&local_58);
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0x158) == '\x01')) goto LAB_140ceedd3;
    if (((int)param_4[1] == 0) || ((longlong *)*param_4 == (longlong *)0x0)) {
LAB_140ceed15:
      *param_2 = 0;
    }
    else {
      cVar2 = (**(code **)(*(longlong *)*param_4 + 0x30))();
      if (cVar2 == '\0') goto LAB_140ceed15;
      local_68 = 0;
      local_60 = 0;
      FUN_1457cd628(&local_68,param_4);
      FUN_1457cd6ac(lVar3,param_2,&local_68);
    }
    *(undefined1 *)(lVar3 + 0x88) = 1;
    if ((((*(longlong *)(param_1 + 0x218) == 0) || (*(longlong *)(param_1 + 0x220) == 0)) ||
        (*(int *)(*(longlong *)(param_1 + 0x220) + 8) < 1)) &&
       (((*(longlong *)(param_1 + 0x228) == 0 || (*(longlong *)(param_1 + 0x230) == 0)) ||
        (*(int *)(*(longlong *)(param_1 + 0x230) + 8) < 1)))) {
      FUN_140ceee2f(param_1 + 0x218,param_1 + 0x228,param_1);
    }
  }
  else {
LAB_140ceedd3:
    *param_2 = 0;
  }
  if ((int)param_4[1] != 0) {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 == (undefined8 *)0x0) goto LAB_140ceed82;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
LAB_140ceed82:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ceee2f FUN_140ceee2f body=639 status=ok
// SIG undefined FUN_140ceee2f(void)

void FUN_140ceee2f(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_68;
  int local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = FUN_1401cb356();
  lVar9 = *param_2;
  if (((lVar9 != 0) && (lVar6 = param_2[1], lVar6 != 0)) && (0 < *(int *)(lVar6 + 8))) {
    LOCK();
    *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
    UNLOCK();
    local_48 = lVar9;
    local_40 = lVar6;
    FUN_140d61352();
    plVar3 = (longlong *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if (((*param_1 == 0) || (param_1[1] == 0)) || (*(int *)(param_1[1] + 8) < 1)) {
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,3,0x10);
    puVar4 = local_68;
    local_60 = 3;
    *local_68 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_68[2] = lVar6;
    *local_68 = &PTR_FUN_14b434880;
    local_68[3] = 0;
    iVar8 = 0;
    if (param_3 != 0) {
      uVar2 = *(uint *)(param_3 + 0xc);
      *(uint *)(local_68 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar8 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar8 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar8 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar7;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar8 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar8;
    puVar4[4] = FUN_140a9967c;
    local_78 = 0;
    FUN_1405f67fc(uVar5,&local_58,&local_68,L"OnTimerSaveProfiles_Rapid");
    *param_1 = local_58;
    local_58 = 0;
    plVar3 = (longlong *)param_1[1];
    param_1[1] = (longlong)local_50;
    local_50 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
    }
    if (local_60 != 0) {
      if (local_68 == (undefined8 *)0x0) goto LAB_140cef022;
      (**(code **)*local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      local_60 = 0;
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140cef022:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cef0b0 FUN_140cef0b0 body=26 status=ok
// SIG undefined FUN_140cef0b0(void)

void FUN_140cef0b0(undefined8 param_1)

{
  FUN_140cef0ca();
  FUN_140ceface(param_1);
  return;
}



// FUNCTION 140cef0ca FUN_140cef0ca body=41 status=ok
// SIG undefined FUN_140cef0ca(void)

void FUN_140cef0ca(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140cef0f4(param_1,1,0);
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 140cef0f4 FUN_140cef0f4 body=181 status=ok
// SIG undefined FUN_140cef0f4(void)

ulonglong FUN_140cef0f4(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 1);
  if (((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) &&
     ((*(byte *)((longlong)param_1 + 0x31) & 8) == 0)) {
    if (param_1[5] == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1[5] + 0x58);
    }
    uVar3 = (**(code **)(*param_1 + 0x338))(param_1,param_2);
    if ((char)uVar3 != '\0') {
      if ((lVar4 != 0) && ((char)param_2 == '\0')) {
        uVar3 = FUN_140cef1aa(lVar4,param_1);
      }
      if ((*(byte *)((longlong)param_1 + 0x31) & 8) == 0) {
        FUN_144757f48(param_1,0x40000000);
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        do {
          uVar2 = *(uint *)(lVar4 + 8);
          uVar3 = (ulonglong)uVar2;
          if ((uVar2 >> 0x15 & 1) != 0) {
            return uVar3;
          }
          LOCK();
          uVar1 = *(uint *)(lVar4 + 8);
          if (uVar2 == uVar1) {
            *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
          }
          else {
            uVar3 = (ulonglong)uVar1;
          }
          UNLOCK();
        } while (uVar2 != uVar1);
      }
    }
  }
  return uVar3;
}



// FUNCTION 140cef1aa FUN_140cef1aa body=296 status=ok
// SIG undefined FUN_140cef1aa(void)

void FUN_140cef1aa(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  uVar5 = param_2[8];
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  lVar2 = DAT_14caf2228;
  if (uVar5 == DAT_14c892cd8) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar5 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar5 = 1;
    }
    if (*(int *)(lVar2 + uVar5 * 4) != 0) {
      if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x270);
      *(uint *)(param_1 + 0x270) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x274) < iVar1 + 1U) {
        FUN_1405f7400((longlong *)(param_1 + 0x268),iVar1);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x268) + (longlong)iVar1 * 8) = param_2;
      if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
                    /* WARNING: Could not recover jumptable at 0x000140cef293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 800))(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140cef2d2 FUN_140cef2d2 body=2042 status=ok
// SIG undefined FUN_140cef2d2(void)

undefined8 FUN_140cef2d2(longlong *param_1,char param_2,char param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_70;
  int local_6c;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(**(longlong **)(param_1[5] + 0x58) + 0x460))
            (*(longlong **)(param_1[5] + 0x58),param_1);
  uVar8 = (**(code **)(**(longlong **)(param_1[5] + 0x58) + 0x3c0))();
  bVar6 = true;
  if ((byte)uVar8 == 0) {
    if (((0 < (int)param_1[0x20]) && (-1 < *(int *)((longlong)param_1 + 0x34) && param_2 == '\0'))
       && (lVar10 = param_1[0xe], lVar10 != 0)) {
      plVar11 = (longlong *)
                FUN_147a4e9fa(param_1[5] + 0x1580,
                              (int)((ulonglong)lVar10 >> 0x20) * 0x17 + (int)lVar10,param_1 + 0xe);
      lVar10 = param_1[5];
      FUN_140cefc70(param_1,0);
      if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar10);
      }
      param_1[5] = lVar10;
      *(char *)(param_1 + 0x32) = param_3;
      iVar20 = (int)plVar11[1];
      *(uint *)(plVar11 + 1) = iVar20 + 1U;
      if (*(uint *)((longlong)plVar11 + 0xc) < iVar20 + 1U) {
        FUN_147a4ef9e(plVar11,iVar20);
      }
      *(longlong **)(*plVar11 + (longlong)iVar20 * 8) = param_1;
      if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
      uVar14 = 0;
      goto LAB_140cefa67;
    }
    lVar10 = param_1[0xd];
    if (lVar10 != 0) {
      if ((param_3 == '\x04') && ((*(byte *)(lVar10 + 0x61) & 1) == 0)) {
        *(byte *)(lVar10 + 0x61) = *(byte *)(lVar10 + 0x61) | 1;
        lVar10 = param_1[0xd];
      }
      if (((*(byte *)(lVar10 + 0x61) & 1) == 0) ||
         (cVar7 = (**(code **)(**(longlong **)(param_1[5] + 0x58) + 0x3f0))(), cVar7 != '\0')) {
        if ((param_3 == '\x01') && ((*(uint *)(param_1 + 6) & 4) != 0)) {
          lVar10 = param_1[0xd];
          if ((*(byte *)(lVar10 + 0x61) & 1) == 0) {
            (**(code **)(**(longlong **)(param_1[5] + 0x58) + 0x470))();
            FUN_141089d6e(*(undefined8 *)(param_1[5] + 0x58),param_1[0xd]);
            bVar6 = false;
            goto LAB_140cef8e8;
          }
        }
        else {
          lVar10 = param_1[0xd];
          if ((param_3 == '\x02') && (DAT_14c761491 != '\0')) {
            cVar7 = FUN_1449e2a3e(lVar10);
            if (cVar7 != '\0') goto LAB_140cef8e8;
            lVar10 = param_1[0xd];
          }
        }
        if (((((*(byte *)(lVar10 + 0x60) & 1) == 0) && (lVar10 = FUN_1447210f0(lVar10), lVar10 != 0)
             ) && (DAT_14c872bd8 == '\0')) &&
           (cVar7 = (**(code **)(**(longlong **)(param_1[5] + 0x58) + 0x450))(), cVar7 != '\0')) {
          if ((longlong)(int)param_1[0x2d] != 0) {
            plVar22 = (longlong *)param_1[0x2c];
            plVar11 = plVar22 + (int)param_1[0x2d];
            do {
              plVar3 = (longlong *)*plVar22;
              if (plVar3 != (longlong *)0x0) {
                if ((param_1[5] != 0) && (lVar10 = *(longlong *)(param_1[5] + 0x58), lVar10 != 0)) {
                  FUN_1435a0250(lVar10,plVar3);
                  if ((param_1[5] != 0) && (lVar10 = *(longlong *)(param_1[5] + 0x58), lVar10 != 0))
                  {
                    FUN_14098f3d0(lVar10,plVar3);
                  }
                }
                (**(code **)(*(longlong *)param_1[0xd] + 0x2e0))((longlong *)param_1[0xd],plVar3);
                (**(code **)(*plVar3 + 0x228))(plVar3);
                FUN_144757f48();
                uVar9 = *(uint *)((longlong)plVar3 + 0xc);
                if ((int)uVar9 < DAT_14c9647dc) {
                  lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                }
                else {
                  lVar10 = 0;
                }
                do {
                  uVar9 = *(uint *)(lVar10 + 8);
                  if ((uVar9 >> 0x15 & 1) != 0) break;
                  LOCK();
                  bVar24 = uVar9 == *(uint *)(lVar10 + 8);
                  if (bVar24) {
                    *(uint *)(lVar10 + 8) = uVar9 | 0x200000;
                  }
                  UNLOCK();
                } while (!bVar24);
              }
              plVar22 = plVar22 + 1;
            } while (plVar22 != plVar11);
          }
          *(undefined4 *)(param_1 + 0x2d) = 0;
          if (*(int *)((longlong)param_1 + 0x16c) != 0) {
            FUN_140c6998c(param_1 + 0x2c);
          }
          plVar11 = (longlong *)param_1[0xd];
          if (plVar11 != (longlong *)0x0) {
            uVar9 = *(uint *)(plVar11 + 0x4d);
            puVar1 = (uint *)(plVar11 + 0x4a);
            if (uVar9 == 0) {
              uVar19 = 0;
              uVar23 = 1;
              uVar17 = 0;
              iVar20 = 0;
            }
            else {
              puVar12 = (uint *)plVar11[0x4c];
              if ((uint *)plVar11[0x4c] == (uint *)0x0) {
                puVar12 = puVar1;
              }
              uVar17 = *puVar12;
              if (uVar17 == 0) {
                iVar20 = uVar9 + 0x1e;
                if (-1 < (int)(uVar9 - 1)) {
                  iVar20 = uVar9 - 1;
                }
                uVar19 = 0;
                uVar23 = (ulonglong)(uint)(iVar20 >> 5);
                if (iVar20 >> 5 < 1) {
                  uVar23 = uVar19;
                }
                iVar20 = 0;
                do {
                  if (uVar23 == uVar19) goto LAB_140cef7e1;
                  iVar20 = iVar20 + 0x20;
                  uVar17 = puVar12[uVar19 + 1];
                  uVar19 = uVar19 + 1;
                } while (uVar17 == 0);
              }
              else {
                uVar19 = 0;
                iVar20 = 0;
              }
              uVar23 = (ulonglong)(-uVar17 & uVar17);
              uVar2 = uVar23 * 2 + 1;
              lVar10 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              uVar17 = (iVar20 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
              if ((int)uVar9 <= (int)uVar17) {
                uVar17 = uVar9;
              }
            }
            if (uVar17 != uVar9) {
              local_70 = 0xffffffff;
              local_68 = plVar11;
              local_60 = (ulonglong)uVar9;
              do {
                local_6c = iVar20;
                if ((param_1[5] != 0) && (lVar10 = *(longlong *)(param_1[5] + 0x58), lVar10 != 0)) {
                  FUN_1435a0250(lVar10,*(undefined8 *)(plVar11[0x48] + (longlong)(int)uVar17 * 0x10)
                               );
                  uVar9 = *(uint *)(local_68 + 0x4d);
                  plVar11 = local_68;
                }
                local_70 = local_70 & ~(uint)uVar23;
                puVar12 = (uint *)plVar11[0x4c];
                if ((uint *)plVar11[0x4c] == (uint *)0x0) {
                  puVar12 = puVar1;
                }
                iVar18 = (int)uVar19;
                lVar10 = (longlong)iVar18;
                uVar17 = puVar12[lVar10] & local_70;
                iVar20 = local_6c;
                if (uVar17 == 0) {
                  iVar15 = uVar9 + 0x1e;
                  if (-1 < (int)(uVar9 - 1)) {
                    iVar15 = uVar9 - 1;
                  }
                  iVar15 = iVar15 >> 5;
                  iVar20 = local_6c + 0x20;
                  iVar16 = iVar15;
                  if (iVar15 < iVar18) {
                    iVar16 = iVar18;
                  }
                  plVar11 = local_68;
                  if (iVar18 < iVar15) {
                    lVar13 = 0;
                    do {
                      uVar17 = puVar12[lVar10 + lVar13 + 1];
                      if (uVar17 != 0) {
                        uVar19 = (ulonglong)(iVar18 + (int)lVar13 + 1);
                        local_70 = 0xffffffff;
                        goto LAB_140cef78a;
                      }
                      iVar20 = iVar20 + 0x20;
                      lVar13 = lVar13 + 1;
                    } while (iVar16 - lVar10 != lVar13);
                    local_70 = 0xffffffff;
                    iVar18 = iVar16;
                  }
                  uVar19 = (ulonglong)(iVar18 + 1);
                  uVar17 = uVar9;
                }
                else {
LAB_140cef78a:
                  uVar23 = (ulonglong)(-uVar17 & uVar17);
                  uVar2 = uVar23 * 2 + 1;
                  lVar10 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                    }
                  }
                  uVar17 = (iVar20 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
                  if ((int)uVar9 <= (int)uVar17) {
                    uVar17 = uVar9;
                  }
                }
              } while (uVar17 != (uint)local_60);
              plVar11 = (longlong *)param_1[0xd];
            }
LAB_140cef7e1:
            if (DAT_14c75f435 != '\0') {
              local_58 = 0;
              uStack_50 = 0;
              local_78 = 0;
              FUN_14086ecde(plVar11,&local_58,1,0);
              lVar10 = local_58;
              lVar13 = (longlong)(int)uStack_50;
              if (lVar13 != 0) {
                lVar21 = 0;
                do {
                  plVar11 = *(longlong **)(lVar10 + lVar21);
                  cVar7 = (**(code **)(*plVar11 + 0x1f8))(plVar11);
                  if (((cVar7 != '\0') && (param_1[5] != 0)) &&
                     (lVar4 = *(longlong *)(param_1[5] + 0x58), lVar4 != 0)) {
                    FUN_1435a0250(lVar4,plVar11);
                  }
                  lVar21 = lVar21 + 8;
                } while (lVar13 * 8 != lVar21);
              }
              if (local_58 != 0) {
                FUN_1400020a8(local_58);
              }
              plVar11 = (longlong *)param_1[0xd];
            }
            if ((param_1[5] != 0) && (lVar10 = *(longlong *)(param_1[5] + 0x58), lVar10 != 0)) {
              FUN_1435a0250(lVar10,plVar11);
              plVar11 = (longlong *)param_1[0xd];
            }
            (**(code **)(*plVar11 + 0x228))(plVar11);
            FUN_140aeefbc(param_1[0xd],1,1);
          }
          if (((DAT_14c761628 != 0) && (param_1[0xe] != 0)) &&
             ((param_1[5] != 0 &&
              ((lVar10 = *(longlong *)(param_1[5] + 0x58), lVar10 != 0 &&
               (lVar10 = *(longlong *)(lVar10 + 0x1b8), lVar10 != 0)))))) {
            FUN_140326250(lVar10 + 0xa8,param_1 + 0xe);
          }
        }
      }
      else if ((*(uint *)(param_1 + 6) & 0x40) == 0) {
        *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 0x40;
        (**(code **)(**(longlong **)(param_1[5] + 0x58) + 0x478))
                  (*(longlong **)(param_1[5] + 0x58),param_1[0xd]);
      }
    }
  }
LAB_140cef8e8:
  (**(code **)(*param_1 + 0x2b0))(param_1);
  if (bVar6 || param_2 != '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = CONCAT31((int3)((uint)uVar8 >> 8),(byte)uVar8 ^ 1 | DAT_14caf2745);
  }
  FUN_140c692ee(param_1,uVar9 & 0xffffff01);
  FUN_144958770(param_1 + 0x22,0);
  FUN_140b1a8d4(param_1 + 0x4b);
  lVar10 = param_1[0x31];
  if ((longlong)(int)lVar10 != 0) {
    lVar13 = param_1[0x30];
    lVar21 = 0;
    do {
      puVar5 = *(undefined8 **)(lVar13 + lVar21);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      lVar21 = lVar21 + 8;
    } while ((longlong)(int)lVar10 * 8 != lVar21);
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (*(int *)((longlong)param_1 + 0x18c) != 0) {
    FUN_1401b0cea(param_1 + 0x30,0);
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (*(int *)((longlong)param_1 + 0x17c) != 0) {
    FUN_1417c3e4a(param_1 + 0x2e,0);
  }
  lVar10 = param_1[0x20];
  if (0 < (longlong)(int)lVar10) {
    lVar13 = param_1[0x1f];
    lVar21 = 0;
    do {
      puVar5 = *(undefined8 **)(lVar13 + lVar21);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      lVar21 = lVar21 + 8;
    } while ((longlong)(int)lVar10 * 8 != lVar21);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)((longlong)param_1 + 0x104) != 0) {
      FUN_147a4f234(param_1 + 0x1f);
    }
    lVar10 = param_1[5];
    if (*(longlong *)(lVar10 + 0x68) != 0) {
      lVar13 = FUN_1413dbcfa();
      plVar11 = *(longlong **)(lVar10 + 0x68);
      if ((((plVar11 != (longlong *)0x0) && (lVar13 != 0)) && (lVar10 = plVar11[2], lVar10 != 0)) &&
         ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar10 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
           lVar13 + 0x30)))) {
        (**(code **)(*plVar11 + 0x348))(plVar11,param_1 + 0xe,0);
      }
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) < 0) {
    param_1[5] = 0;
  }
  else {
    FUN_140cefc70(param_1,0);
  }
  uVar14 = 1;
LAB_140cefa67:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 140ceface FUN_140ceface body=224 status=ok
// SIG undefined FUN_140ceface(void)

void FUN_140ceface(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  FUN_140cefbef(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_145797f74(param_1 + 0xa8);
  }
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    FUN_145797fa4(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_140cefbae(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_148990022(param_1 + 0xc0);
  }
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfc;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 140cefbae FUN_140cefbae body=65 status=ok
// SIG undefined FUN_140cefbae(void)

void FUN_140cefbae(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(puVar1 + -0x12);
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cefbef FUN_140cefbef body=128 status=ok
// SIG undefined FUN_140cefbef(void)

void FUN_140cefbef(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  
  if (param_2 != 0) {
    pcVar4 = (char *)(param_1 + 0x28);
    do {
      if (*pcVar4 == '\x01') {
        *pcVar4 = '\0';
      }
      plVar3 = *(longlong **)(pcVar4 + -0x10);
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
      plVar3 = *(longlong **)(pcVar4 + -0x20);
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
      pcVar4 = pcVar4 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cefc70 FUN_140cefc70 body=499 status=ok
// SIG undefined FUN_140cefc70(void)

undefined8 FUN_140cefc70(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  longlong *local_58 [3];
  longlong local_40;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0x34) == 0) && ((*(byte *)(param_1 + 0x30) & 2) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    FUN_1459b235e(local_58,0x42);
    FUN_143587ad8(uVar3,local_58);
    if (local_30 != 0) {
      (**(code **)(local_30 + -0x10))(local_30 + -0x10);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  if (puVar4 != (undefined8 *)0x0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 2) == 0) {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1420) +
       (longlong)*(int *)(param_1 + 0x34) * 4) = *(undefined4 *)((longlong)puVar4 + 0xec);
      puVar4 = *(undefined8 **)(param_1 + 0x58);
      if (*(undefined8 **)(param_1 + 0x58) == (undefined8 *)0x0) goto LAB_140cefce5;
    }
    do {
      puVar1 = (undefined8 *)puVar4[0x19];
      (**(code **)*puVar4)(puVar4,1);
      puVar4 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
LAB_140cefce5:
  *(undefined8 *)(param_1 + 0x58) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  while (puVar4 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar4[0x19];
    (**(code **)*puVar4)(puVar4,1);
    puVar4 = puVar1;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if ((*(int *)(param_1 + 0x34) != -1) &&
     (*(char *)(*(longlong *)(param_1 + 0x28) + 0x19f8) == '\x01')) {
    local_58[0] = (longlong *)CONCAT44(local_58[0]._4_4_,*(int *)(param_1 + 0x34));
    FUN_1447cbafe(*(longlong *)(param_1 + 0x28) + 0x19a8,&local_28,local_58,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_28 = param_1;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  local_58[0] = &local_28;
  FUN_1434b872a(lVar2 + 0x70);
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_28 = param_1;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  local_58[0] = &local_28;
  FUN_1434b872a(lVar2 + 0x16c8);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x13f0);
  *(undefined8 *)(lVar2 + (longlong)*(int *)(param_1 + 0x34) * 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 140cefe72 FUN_140cefe72 body=40 status=ok
// SIG undefined FUN_140cefe72(void)

undefined8 FUN_140cefe72(undefined8 param_1,int param_2)

{
  FUN_140cefe9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cefe9a FUN_140cefe9a body=387 status=ok
// SIG undefined FUN_140cefe9a(void)

void FUN_140cefe9a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b94e2f0;
  param_1[0x3f] = &DAT_14a176f00;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3f] = &PTR_FUN_14a177080;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    FUN_14472eb64(param_1 + 0x40,0);
  }
  param_1[0x46] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x22c)) {
    *(undefined4 *)((longlong)param_1 + 0x22c) = 0x80;
    FUN_1446efbd8(param_1 + 0x42,0);
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140cf001e(param_1);
  return;
}



// FUNCTION 140cf001e FUN_140cf001e body=101 status=ok
// SIG undefined FUN_140cf001e(void)

void FUN_140cf001e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b49c260;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cf0084 FUN_140cf0084 body=505 status=ok
// SIG undefined FUN_140cf0084(void)

void FUN_140cf0084(undefined8 param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [64];
  longlong local_188;
  longlong *local_178;
  longlong local_168 [4];
  undefined1 local_148 [24];
  longlong local_130;
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [4];
  char local_d6;
  longlong *local_48;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_140cf02e4(param_2,local_148);
  iVar3 = 0x7fffffff;
  if ((local_130 != 0) && ((*(byte *)(local_130 + 0x155) & 0x20) == 0)) {
    if (DAT_14c761fc8 == '\x01') {
      switch(*param_2) {
      case 0:
        FUN_140e7cc9e(param_1,local_1c8,local_148);
        uVar4 = FUN_140e7cf58(param_1,local_148,local_1c8);
        if (local_188 != 0) {
          if (local_178 == (longlong *)0x0) {
            local_178 = local_168;
          }
          (**(code **)(*local_178 + 0x10))();
        }
LAB_140cf0141:
        FUN_140e7cb28(param_2,uVar4);
        break;
      case 1:
        FUN_140cf027e(param_2);
        FUN_140e7cdd6();
        break;
      case 2:
        uVar4 = FUN_140cf027e(param_2);
        FUN_140e7d272(param_1,local_148,uVar4);
        break;
      case 3:
        goto switchD_140cf0102_caseD_3;
      default:
        goto switchD_140cf0102_default;
      }
      iVar3 = *param_2 + 1;
    }
    else if (*param_2 == 0) {
      uVar4 = FUN_140e7cbd2(param_1,local_148);
      goto LAB_140cf0141;
    }
  }
switchD_140cf0102_caseD_3:
  *param_2 = iVar3;
switchD_140cf0102_default:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_30 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_d6 == '\x01') {
    local_d6 = '\0';
  }
  if (local_118 != 0) {
    if (local_108 == (longlong *)0x0) {
      local_108 = local_f8;
    }
    (**(code **)(*local_108 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf027e FUN_140cf027e body=102 status=ok
// SIG undefined FUN_140cf027e(void)

undefined8 FUN_140cf027e(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  
  if (0 < *(int *)(param_1 + 0x308)) {
    puVar4 = (uint *)(param_1 + 0x140);
    if (*(uint **)(param_1 + 0x300) != (uint *)0x0) {
      puVar4 = *(uint **)(param_1 + 0x300);
    }
    if (puVar4[1] != 0) {
      uVar1 = *puVar4;
      uVar2 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar3 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (puVar3 == (undefined8 *)0x0) {
          return 0;
        }
        if (*(uint *)(puVar3 + 2) != puVar4[1]) {
          return 0;
        }
        if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
          return 0;
        }
        uVar2 = *puVar3;
      }
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140cf02e4 FUN_140cf02e4 body=997 status=ok
// SIG undefined FUN_140cf02e4(void)

undefined4 * FUN_140cf02e4(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar10 = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x72) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  puVar13 = &DAT_14c846480;
  puVar14 = (undefined8 *)(param_2 + 0x20);
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined8 *)(param_2 + 0x44) = 0;
  *(undefined8 *)(param_2 + 0x46) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x42) = 0;
  *(undefined8 *)(param_2 + 0x3c) = 0;
  *(undefined8 *)(param_2 + 0x3e) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x3a) = 0;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x28);
    uVar10 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar13 == (undefined8 *)0x0) ||
         ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x2c) ||
          ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) {
        uVar10 = 0;
      }
      else {
        uVar10 = *puVar13;
      }
    }
  }
  *(undefined8 *)(param_2 + 6) = uVar10;
  lVar12 = *(longlong *)(param_1 + 0x38);
  if (lVar12 == 0) {
    uVar10 = FUN_140927942();
    lVar12 = FUN_14477b664(uVar10);
    *(longlong *)(param_1 + 0x38) = lVar12;
  }
  lVar11 = *(longlong *)(param_1 + 0x40);
  if (((lVar11 == 0) && (lVar11 = 0, lVar12 != 0)) && (*(longlong *)(param_1 + 0x30) != 0)) {
    plVar4 = *(longlong **)(lVar12 + 0xb8);
    if (plVar4 == (longlong *)0x0) {
LAB_140cf06c5:
      lVar11 = 0;
    }
    else {
      cVar8 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar8 == '\0') goto LAB_140cf06c5;
      uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar11 = FUN_144aff482(uVar10);
    }
    *(longlong *)(param_1 + 0x40) = lVar11;
  }
  *(longlong *)(param_2 + 8) = lVar11;
  if (*(int *)(param_1 + 0x4c) == 0) {
LAB_140cf05fb:
    uVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x48);
    uVar10 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar13 == (undefined8 *)0x0) ||
         ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x4c) ||
          ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_140cf05fb;
      uVar10 = *puVar13;
    }
  }
  *(undefined8 *)(param_2 + 10) = uVar10;
  FUN_140cf06ca(param_2 + 0xc);
  *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)(param_1 + 0x90);
  if ((undefined1 *)(param_1 + 0x91) != (undefined1 *)((longlong)param_2 + 0x71)) {
    if (*(char *)(param_1 + 0x92) == '\x01') {
      *(undefined1 *)((longlong)param_2 + 0x71) = *(undefined1 *)(param_1 + 0x91);
      uVar9 = 1;
    }
    else {
      if (*(char *)((longlong)param_2 + 0x72) != '\x01') goto LAB_140cf046e;
      uVar9 = 0;
    }
    *(undefined1 *)((longlong)param_2 + 0x72) = uVar9;
  }
LAB_140cf046e:
  puVar13 = (undefined8 *)(param_1 + 0xa0);
  puVar14 = (undefined8 *)(param_2 + 0x20);
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  if (*(int *)(param_1 + 0x104) == 0) {
LAB_140cf0602:
    uVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x100);
    uVar10 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar13 == (undefined8 *)0x0) ||
         ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x104) ||
          ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_140cf0602;
      uVar10 = *puVar13;
    }
  }
  *(undefined8 *)(param_2 + 0x38) = uVar10;
  if (*(int *)(param_1 + 0x10c) == 0) {
LAB_140cf0609:
    uVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x108);
    uVar10 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar13 == (undefined8 *)0x0) ||
         ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x10c) ||
          ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_140cf0609;
      uVar10 = *puVar13;
    }
  }
  *(undefined8 *)(param_2 + 0x3a) = uVar10;
  if (*(int *)(param_1 + 0x114) != 0) {
    uVar3 = *(uint *)(param_1 + 0x110);
    uVar10 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140cf05a2;
    puVar13 = (undefined8 *)
              ((ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar13 != (undefined8 *)0x0) &&
       ((*(int *)(puVar13 + 2) == *(int *)(param_1 + 0x114) &&
        ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)))) {
      uVar10 = *puVar13;
      goto LAB_140cf05a2;
    }
  }
  uVar10 = 0;
LAB_140cf05a2:
  *(undefined8 *)(param_2 + 0x3c) = uVar10;
  uVar10 = *(undefined8 *)(param_1 + 0x118);
  lVar12 = *(longlong *)(param_1 + 0x120);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x3e) = uVar10;
  *(longlong *)(param_2 + 0x40) = lVar12;
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
  *(undefined8 *)(param_2 + 0x42) = *(undefined8 *)(param_1 + 0x128);
  return param_2;
}



// FUNCTION 140cf06ca FUN_140cf06ca body=292 status=ok
// SIG undefined FUN_140cf06ca(void)

longlong * FUN_140cf06ca(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf07f6 FUN_140cf07f6 body=221 status=ok
// SIG undefined FUN_140cf07f6(void)

longlong FUN_140cf07f6(void)

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
  if (DAT_14cace840 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14797d5f1;
    local_40 = FUN_1463aea6a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"BlueprintFunctionLibrary",&DAT_14cace840,&DAT_14797d5f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cace840;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf08d4 thunk_FUN_144b46480 body=5 status=ok
// SIG undefined thunk_FUN_144b46480(void)

void thunk_FUN_144b46480(undefined8 *param_1)

{
  *param_1 = 0xbb67ae856a09e667;
  param_1[1] = 0xa54ff53a3c6ef372;
  param_1[2] = 0x9b05688c510e527f;
  param_1[3] = 0x5be0cd191f83d9ab;
  param_1[4] = 0xbb67ae856a09e667;
  param_1[5] = 0xa54ff53a3c6ef372;
  param_1[8] = 0;
  param_1[6] = 0x9b05688c510e527f;
  param_1[7] = 0x5be0cd191f83d9ab;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}



// FUNCTION 140cf08da FUN_140cf08da body=157 status=ok
// SIG undefined FUN_140cf08da(void)

void FUN_140cf08da(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  double dVar10;
  
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar4 = *(longlong *)(lVar2 + 0x20);
  lVar6 = 0;
  lVar5 = lVar4 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    lVar5 = lVar6;
  }
  lVar3 = lVar4 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar3 = lVar6;
  }
  lVar4 = lVar4 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar6;
  }
  uVar7 = (ulonglong)*(ushort *)(lVar2 + 0xe);
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      fVar9 = (float)FUN_140cf0978(*(undefined8 *)(lVar3 + uVar8 * 8),
                                   *(undefined8 *)(lVar4 + uVar8 * 8));
      dVar10 = (double)fVar9;
      if (dVar10 <= 0.0) {
        dVar10 = 0.0;
      }
      *(double *)(lVar5 + uVar8 * 8) = dVar10;
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
  }
  return;
}



// FUNCTION 140cf0978 FUN_140cf0978 body=413 status=ok
// SIG undefined FUN_140cf0978(void)

undefined8 FUN_140cf0978(longlong param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  fVar3 = (float)((ulonglong)param_2 >> 0x20);
  uVar4 = *(ulonglong *)(param_1 + 0x98) & 0xff;
  fVar9 = 1.0;
  fVar7 = 1.0;
  uVar8 = 0;
  if (uVar4 != 2) {
    lVar5 = param_1 + 0x1c;
    if (*(char *)(param_1 + 0x78) == '\0') {
      lVar5 = param_1;
    }
    fVar7 = 1.0;
    uVar8 = 0;
    if ((0 < *(int *)(lVar5 + 0x60)) &&
       (fVar7 = fVar9, uVar8 = 0, *(longlong *)(param_1 + 0x68) != 0)) {
      fVar2 = (fVar3 + (float)(int)(((int)param_2 - (int)(*(ulonglong *)(param_1 + 0x98) >> 0x20)) -
                                   (uint)((int)uVar4 != 1))) / (float)*(int *)(lVar5 + 0x60);
      if (fVar2 < 0.0) {
        fVar7 = 0.0;
        uVar8 = 0;
      }
      else {
        fVar7 = 1.0;
        uVar8 = 0;
        if (fVar2 <= 1.0) {
          uVar6 = FUN_140cf0b16(param_1 + 0x68,fVar2);
          fVar7 = (float)uVar6;
          uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
        }
      }
    }
  }
  uVar4 = *(ulonglong *)(param_1 + 0xa0) & 0xff;
  if (uVar4 != 2) {
    lVar5 = param_1 + 4;
    if (*(char *)(param_1 + 0x90) != '\0') {
      lVar5 = param_1 + 0x34;
    }
    iVar1 = *(int *)(lVar5 + 0x60);
    if ((0 < iVar1) && (*(longlong *)(param_1 + 0x80) != 0)) {
      fVar3 = (fVar3 + (float)(int)((((int)param_2 - (int)(*(ulonglong *)(param_1 + 0xa0) >> 0x20))
                                    - (uint)((int)uVar4 == 1)) + iVar1)) / (float)iVar1;
      if (0.0 <= fVar3) {
        if (1.0 < fVar3) {
          fVar9 = 0.0;
        }
        else {
          fVar9 = (float)FUN_140cf0b16(param_1 + 0x80,fVar3);
          fVar9 = 1.0 - fVar9;
        }
      }
    }
  }
  return CONCAT44(uVar8,fVar7 * fVar9);
}



// FUNCTION 140cf0b16 FUN_140cf0b16 body=41 status=ok
// SIG undefined FUN_140cf0b16(void)

void FUN_140cf0b16(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  
  plVar1 = (longlong *)*param_1;
  if ((plVar1 != (longlong *)0x0) && (plVar2 = (longlong *)param_1[1], plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140cf0b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,*(code **)(*plVar2 + 0x10));
    return;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_34 = 0;
  lVar3 = FUN_14171b860(plVar1,DAT_14cab1d18);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uStack_38 = param_2;
    (**(code **)(*plVar1 + 0x248))(plVar1,lVar3,&uStack_38);
    uVar4 = uStack_34;
  }
  if ((uStack_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar4);
}



// FUNCTION 140cf0b40 FUN_140cf0b40 body=1271 status=ok
// SIG undefined FUN_140cf0b40(void)

float FUN_140cf0b40(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2 + param_2;
  fVar2 = param_2 + -0.5 + param_2 + -0.5;
  if (*(char *)(param_1 + 8) == '\n') {
    if (1.0 <= fVar1) {
      fVar1 = 3.0;
      goto LAB_140cf0bf1;
    }
    fVar2 = 3.0;
    goto LAB_140cf0b86;
  }
  fVar3 = param_2;
  switch(*(char *)(param_1 + 8)) {
  case '\x01':
    fVar3 = sinf((1.0 - param_2) * 1.5707964);
    goto LAB_140cf0e00;
  case '\x02':
                    /* WARNING: Could not recover jumptable at 0x000140cf0c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = sinf(param_2 * 1.5707964);
    return fVar1;
  case '\x03':
    if (1.0 <= fVar1) {
      fVar1 = sinf(fVar2 * 1.5707964);
LAB_140cf1022:
      return fVar1 * 0.5 + 0.5;
    }
    fVar1 = sinf((1.0 - fVar1) * 1.5707964);
    goto LAB_140cf0c56;
  case '\x04':
    fVar3 = param_2 * param_2;
    break;
  case '\x05':
    fVar3 = 1.0 - (1.0 - param_2) * (1.0 - param_2);
    break;
  case '\x06':
    if (1.0 <= fVar1) {
      return (1.0 - (1.0 - fVar2) * (1.0 - fVar2)) * 0.5 + 0.5;
    }
    fVar3 = fVar1 * fVar1 * 0.5;
    break;
  case '\a':
    fVar2 = param_2 * param_2;
    fVar1 = fVar2 * param_2;
    fVar3 = (fVar2 * 3.0 - (fVar1 + fVar1)) +
            (fVar1 - fVar2) * 0.0 +
            (((fVar1 + fVar1) - fVar2 * 3.0) + 1.0) * 0.0 +
            ((fVar1 - (fVar2 + fVar2)) + param_2) * 0.0;
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    break;
  case '\b':
    fVar1 = 3.0;
    goto LAB_140cf0dcb;
  case '\t':
    fVar1 = 3.0;
    goto LAB_140cf0dfa;
  case '\v':
    fVar3 = 0.0;
    if ((0.0 <= param_2) && (fVar3 = 1.0, param_2 < 1.0)) {
      fVar3 = (3.0 - fVar1) * param_2 * param_2;
    }
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    break;
  case '\f':
    fVar1 = 4.0;
    goto LAB_140cf0dcb;
  case '\r':
    fVar1 = 4.0;
    goto LAB_140cf0dfa;
  case '\x0e':
    if (1.0 <= fVar1) {
      fVar1 = 4.0;
LAB_140cf0bf1:
      fVar1 = powf(1.0 - fVar2,fVar1);
LAB_140cf0bf7:
      return (1.0 - fVar1) * 0.5 + 0.5;
    }
    fVar2 = 4.0;
    goto LAB_140cf0b86;
  case '\x0f':
    fVar1 = 5.0;
LAB_140cf0dcb:
                    /* WARNING: Could not recover jumptable at 0x000140cf0ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = powf(param_2,fVar1);
    return fVar1;
  case '\x10':
    fVar1 = 5.0;
LAB_140cf0dfa:
    fVar3 = powf(1.0 - param_2,fVar1);
    goto LAB_140cf0e00;
  case '\x11':
    if (1.0 <= fVar1) {
      fVar1 = 5.0;
      goto LAB_140cf0bf1;
    }
    fVar2 = 5.0;
LAB_140cf0b86:
    fVar1 = powf(fVar1,fVar2);
    goto LAB_140cf0b8f;
  case '\x12':
    fVar1 = (float)exp2f((param_2 + -1.0) * 10.0);
    return fVar1;
  case '\x13':
    fVar3 = (float)exp2f(((1.0 - param_2) + -1.0) * 10.0);
    goto LAB_140cf0e00;
  case '\x14':
    if (1.0 <= fVar1) {
      fVar1 = (float)exp2f(((1.0 - fVar2) + -1.0) * 10.0);
      goto LAB_140cf0bf7;
    }
    fVar1 = (float)exp2f((fVar1 + -1.0) * 10.0);
    goto LAB_140cf0b8f;
  case '\x15':
    fVar3 = 1.0 - param_2 * param_2;
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
LAB_140cf0e00:
    fVar3 = 1.0 - fVar3;
    break;
  case '\x16':
    fVar1 = 1.0 - (1.0 - param_2) * (1.0 - param_2);
    if (fVar1 < 0.0) {
      fVar1 = sqrtf(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    fVar3 = fVar1 + -1.0 + 1.0;
    break;
  case '\x17':
    if (1.0 <= fVar1) {
      fVar1 = 1.0 - (1.0 - fVar2) * (1.0 - fVar2);
      if (fVar1 < 0.0) {
        fVar1 = sqrtf(fVar1);
      }
      else {
        fVar1 = SQRT(fVar1);
      }
      fVar1 = fVar1 + -1.0 + 1.0;
      goto LAB_140cf1022;
    }
    fVar1 = 1.0 - fVar1 * fVar1;
    if (fVar1 < 0.0) {
      fVar1 = sqrtf(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
LAB_140cf0c56:
    fVar1 = 1.0 - fVar1;
LAB_140cf0b8f:
    fVar3 = fVar1 * 0.5;
  }
  return fVar3;
}



// FUNCTION 140cf1038 FUN_140cf1038 body=65 status=ok
// SIG undefined FUN_140cf1038(void)

void FUN_140cf1038(longlong param_1)

{
  float fVar1;
  
  FUN_140cf107a();
  fVar1 = cosf(*(float *)(param_1 + 0x528) * 0.017453292);
  *(float *)(param_1 + 0x548) = fVar1;
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_1 + 0x1a8);
  return;
}



// FUNCTION 140cf107a FUN_140cf107a body=317 status=ok
// SIG undefined FUN_140cf107a(void)

void FUN_140cf107a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401c3ca6();
  lVar1 = *(longlong *)(param_1 + 0x4c8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 == 0) || ((DAT_14c950c29 & 1) == 0)) {
    if (lVar1 != 0) goto LAB_140cf10d8;
    local_28 = 0;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_140cf10d8:
    local_28 = lVar1 + 0x3d0;
  }
  local_30 = lVar1;
  FUN_14047894e(param_1 + 0x3a0);
  lVar1 = *(longlong *)(param_1 + 0x4c8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 == 0) || ((DAT_14c950c29 & 1) == 0)) {
    if (lVar1 == 0) {
      local_38 = 0;
      goto LAB_140cf1128;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
  }
  local_38 = lVar1 + 0x3d0;
LAB_140cf1128:
  local_40 = lVar1;
  FUN_1407042f6(param_1 + 0x410);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_140cf11b8(param_1 + 0x3a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf11b8 FUN_140cf11b8 body=143 status=ok
// SIG undefined FUN_140cf11b8(void)

void FUN_140cf11b8(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  
  bVar1 = *(byte *)(param_1 + 9);
  *(byte *)(param_1 + 9) = bVar1 | 1;
  if (((bVar1 & 2) != 0) && (param_1[7] == 0)) {
    if (*param_1 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)param_1[1];
    }
    lVar3 = (**(code **)(*plVar5 + 0x48))();
    if ((*(byte *)(lVar3 + 0x80) & 1) != 0) {
      if (*param_1 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)param_1[1];
      }
      cVar2 = (**(code **)(*plVar5 + 0x50))();
      if (cVar2 == '\0') {
        uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(lVar3 + 0x80)) &
                0xffffffffffffff02;
        uVar4 = FUN_1407a0dc0(lVar3 + 0x88);
        FUN_14118111e(param_1,uVar4,CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 1) & 0xffffffff);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cf1248 FUN_140cf1248 body=126 status=ok
// SIG undefined FUN_140cf1248(void)

undefined8 FUN_140cf1248(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x30) == lVar2) {
          FUN_140cf12c6();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x30 + *param_1 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140cf12c6 FUN_140cf12c6 body=100 status=ok
// SIG undefined FUN_140cf12c6(void)

void FUN_140cf12c6(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x30 + 0x28);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_140cf132a(param_1,param_2,1);
  return;
}



// FUNCTION 140cf132a FUN_140cf132a body=105 status=ok
// SIG undefined FUN_140cf132a(void)

void FUN_140cf132a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x30 + *param_1 + 0x18);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      if (plVar2[-2] != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 6;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_140cf1394(param_1,param_2,param_3);
  return;
}



// FUNCTION 140cf1394 FUN_140cf1394 body=144 status=ok
// SIG undefined FUN_140cf1394(void)

void FUN_140cf1394(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x30 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140cf1424 FUN_140cf1424 body=21 status=ok
// SIG undefined FUN_140cf1424(void)

undefined8 FUN_140cf1424(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140cf1452 FUN_140cf1452 body=1019 status=ok
// SIG undefined FUN_140cf1452(void)

void FUN_140cf1452(char *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  uint *local_70;
  uint *puStack_68;
  uint local_60;
  int *local_58;
  int local_50;
  uint *local_48;
  uint local_40;
  uint local_3c;
  byte local_38 [4];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1447eef60(local_80,param_1);
  if (*param_1 == '\x01') {
    iVar9 = *(int *)(param_1 + 0x30);
    local_60 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar9);
    *(int *)(param_1 + 0x30) = iVar9 + 1;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 8);
    piVar10 = (int *)(param_1 + 0x44);
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar6 + 1;
    uVar7 = uVar4 & 0x7fff;
    local_60 = (uint)(uVar4 >> 0xf);
    lVar8 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar4 < 0) {
      lVar11 = (ulonglong)(uVar7 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70);
    }
    else {
      iVar9 = **(int **)(lVar8 + 0x20);
      lVar11 = 0;
      if (iVar9 <= (int)uVar7) {
        do {
          uVar7 = uVar7 - iVar9;
          iVar9 = (*(int **)(lVar8 + 0x20))[lVar11 + 1];
          lVar11 = lVar11 + 1;
        } while (iVar9 <= (int)uVar7);
      }
      lVar11 = (longlong)(int)uVar7 + *(longlong *)(*(longlong *)(lVar8 + 0x18) + lVar11 * 8);
    }
    piVar10 = (int *)(lVar8 + 0x4c);
  }
  local_70 = (uint *)(lVar11 + (ulonglong)local_60 * (longlong)*piVar10 * 4);
  puStack_68 = local_70;
  FUN_140126e42(&local_58,param_1);
  if (*param_1 == '\x01') {
    iVar9 = *(int *)(param_1 + 0x30);
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar9);
    local_40 = (uint)bVar3;
    *(int *)(param_1 + 0x30) = iVar9 + 1;
    local_48 = (uint *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar3 * 4 +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar6 + 1;
    uVar7 = uVar4 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_48 = &local_3c;
      local_40 = 0;
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x80);
      local_40 = 1;
      local_48 = (uint *)((ulonglong)(uVar7 * *(int *)(lVar11 + 0x80)) +
                          *(longlong *)(lVar11 + 0x70) + (longlong)*(int *)(lVar11 + 0x4c) * 4);
    }
  }
  lVar11 = *(longlong *)(local_78 + 8);
  if (lVar11 != 0) {
    lVar8 = *(longlong *)(lVar11 + 0x10);
    if (((*(longlong *)(lVar8 + 0x78) != 0) &&
        (iVar9 = *(int *)(*(longlong *)(lVar8 + 0x78) + 0x120), iVar9 != 0)) &&
       (*(longlong *)(lVar11 + 0x18) == 0)) {
      local_38[0] = 1;
      local_34 = -1;
      FUN_140aa8fc4(local_38,*(undefined8 *)(lVar8 + 8),param_2);
      bVar3 = local_38[0];
      if ((local_34 != -1) && (lVar11 = *(longlong *)(lVar8 + 0x78), lVar11 != 0)) {
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar10) {
          lVar8 = (ulonglong)
                  (uint)(local_34 * *(int *)(lVar11 + 0x128 + (ulonglong)(local_38[0] ^ 1) * 8)) +
                  *(longlong *)(lVar11 + 0x18 + (ulonglong)((local_38[0] ^ 1) << 5));
          iVar5 = *(int *)(lVar11 + 0x120);
          iVar13 = 0;
          do {
            puVar1 = local_70 + (int)local_60;
            uVar7 = *local_70;
            uVar14 = 0;
            if (((int)uVar7 < iVar9 && -1 < (int)uVar7) && ((int)uVar7 < iVar5)) {
              if (bVar3 == 0) {
                uVar4 = *(ushort *)(lVar8 + (ulonglong)uVar7 * 2);
                uVar14 = (uint)uVar4 << 0xd;
                if ((uVar14 & 0xf800000) == 0xf800000) {
                  fVar15 = (float)(uVar14 | 0x70000000);
                }
                else if ((uVar14 & 0xf800000) == 0) {
                  fVar15 = (float)(uVar14 | 0x38800000) + -6.1035156e-05;
                }
                else {
                  fVar15 = (float)((uVar14 & 0xfffe000) + 0x38000000);
                }
                uVar14 = (int)(short)uVar4 & 0x80000000U | (uint)fVar15;
              }
              else {
                uVar14 = *(uint *)(lVar8 + (ulonglong)uVar7 * 4);
              }
            }
            piVar10 = local_58 + local_50;
            *local_58 = -(uint)((int)uVar7 < iVar9 && -1 < (int)uVar7);
            puVar2 = local_48 + (int)local_40;
            *local_48 = uVar14;
            iVar13 = iVar13 + 1;
            piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar12 = (int *)(param_1 + 0x3c);
            }
            local_70 = puVar1;
            local_58 = piVar10;
            local_48 = puVar2;
          } while (iVar13 < *piVar12);
        }
        goto LAB_140cf16de;
      }
    }
  }
  piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar10 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar10) {
    iVar9 = 0;
    do {
      piVar10 = local_58 + local_50;
      *local_58 = 0;
      puVar1 = local_48 + (int)local_40;
      *local_48 = 0;
      iVar9 = iVar9 + 1;
      piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar12 = (int *)(param_1 + 0x3c);
      }
      local_58 = piVar10;
      local_48 = puVar1;
    } while (iVar9 < *piVar12);
  }
LAB_140cf16de:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf184e FUN_140cf184e body=62 status=ok
// SIG undefined FUN_140cf184e(void)

void FUN_140cf184e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (DAT_14c8445d0 != 0) {
    FUN_140cf188c(DAT_14c8445d0,param_1 + 0x10);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140cf1888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140cf188c FUN_140cf188c body=245 status=ok
// SIG undefined FUN_140cf188c(void)

void FUN_140cf188c(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)param_2[1];
  if (plVar6 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  iVar5 = (int)plVar6[1];
  do {
    iVar4 = iVar5;
    if (iVar4 == 0) {
      plVar6 = (longlong *)0x0;
      goto LAB_140cf190a;
    }
    LOCK();
    iVar5 = (int)plVar6[1];
    bVar7 = iVar4 == iVar5;
    if (bVar7) {
      *(int *)(plVar6 + 1) = iVar4 + 1;
      iVar5 = iVar4;
    }
    UNLOCK();
  } while (!bVar7);
  lVar2 = *param_2;
  if (lVar2 != 0) {
    EnterCriticalSection(param_1);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_40 = lVar2;
    local_38 = plVar6;
    FUN_140cf1a06(param_1 + 1);
    if (param_1 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_1);
    }
  }
LAB_140cf190a:
  plVar3 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (iVar4 != 0) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf1984 FUN_140cf1984 body=42 status=ok
// SIG undefined FUN_140cf1984(void)

void FUN_140cf1984(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140cf19b0(lVar1);
    FUN_1401773f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 140cf19b0 FUN_140cf19b0 body=50 status=ok
// SIG undefined FUN_140cf19b0(void)

void FUN_140cf19b0(longlong param_1)

{
  FUN_1424b6840();
  FUN_140859a90(param_1 + 0x28);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 140cf19f0 Unwind@140cf19f0 body=20 status=ok
// SIG undefined Unwind@140cf19f0(void)

void Unwind_140cf19f0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 140cf1a06 FUN_140cf1a06 body=620 status=ok
// SIG undefined FUN_140cf1a06(void)

undefined8 FUN_140cf1a06(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  
  uVar6 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar9 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar7 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar14 = (int *)((longlong)plVar7 + 0xc);
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (*piVar14 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    uVar6 = 0;
    uVar8 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    uVar9 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
    iVar3 = *(int *)((longlong)plVar7 + uVar9 * 4);
    if (iVar3 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar9 * 4);
      do {
        puVar11 = (ulonglong *)((longlong)iVar3 * 0x18 + *param_1);
        uVar9 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar4 = *puVar11;
        plVar5 = (longlong *)puVar11[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar14 = (int *)((longlong)plVar5 + 0xc);
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (*piVar14 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar7 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar14 = (int *)((longlong)plVar7 + 0xc);
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (*piVar14 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        uVar6 = 0;
        if (uVar4 == uVar9) {
          iVar3 = (int)*puVar10;
          plVar7 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[8];
          }
          lVar2 = *param_1 + (longlong)iVar3 * 0x18;
          lVar13 = (longlong)*(int *)(lVar2 + 0x14);
          iVar12 = *(int *)((longlong)plVar7 + lVar13 * 4);
          if (iVar12 == iVar3) {
            piVar14 = (int *)((longlong)plVar7 + lVar13 * 4);
          }
          else {
            do {
              piVar14 = (int *)(*param_1 + (longlong)iVar12 * 0x18 + 0x10);
              iVar12 = *piVar14;
            } while (iVar12 != iVar3);
          }
          *piVar14 = *(int *)(lVar2 + 0x10);
          plVar7 = *(longlong **)(*param_1 + 8 + (longlong)iVar3 * 0x18);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar7 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar14 = (int *)((longlong)plVar7 + 0xc);
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (*piVar14 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          FUN_140cf1c72(param_1,iVar3);
          uVar6 = 1;
          break;
        }
        iVar3 = (int)puVar11[2];
        puVar10 = puVar11 + 2;
      } while (iVar3 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar14 = (int *)((longlong)plVar7 + 0xc);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return uVar6;
}



// FUNCTION 140cf1c72 FUN_140cf1c72 body=116 status=ok
// SIG undefined FUN_140cf1c72(void)

void FUN_140cf1c72(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 140cf1ce6 FUN_140cf1ce6 body=78 status=ok
// SIG undefined FUN_140cf1ce6(void)

void FUN_140cf1ce6(longlong *param_1)

{
  undefined8 uVar1;
  
  FUN_140cf1d34();
  if ((char)param_1[0x766] == '\x01') {
    FUN_14056e6be(param_1 + 0x75c);
  }
  uVar1 = FUN_14477b072(param_1,DAT_14cb5b9e8);
                    /* WARNING: Could not recover jumptable at 0x000140cf1d23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 140cf1d34 FUN_140cf1d34 body=560 status=ok
// SIG undefined FUN_140cf1d34(void)

void FUN_140cf1d34(longlong *param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  
  cVar1 = (**(code **)(*param_1 + 0x600))();
  if (cVar1 == '\0') {
    return;
  }
  FUN_140cf1f64(param_1);
  *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) | 0x20;
  (**(code **)(*param_1 + 0xa78))(param_1);
  lVar3 = *(longlong *)(param_1[0x3e] + 0x450);
  if (((lVar3 == 0) || ((~*(uint *)(param_1 + 0x93) & 3) != 0)) ||
     (2.4 < *(float *)((longlong)param_1 + 0x49c))) {
LAB_140cf1d8a:
    *(uint *)(param_1 + 0x93) = *(uint *)(param_1 + 0x93) & 0xfffffff8;
    *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
    bVar7 = false;
    memset(param_1 + 0x95,0,0x100);
    *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x54c) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x3f800000;
  }
  else {
    if (0.0 < (-(double)param_1[0x46] * (double)param_1[0x25] -
              (double)param_1[0x26] * (double)param_1[0x47]) -
              (double)param_1[0x27] * (double)param_1[0x48]) goto LAB_140cf1d8a;
    lVar4 = FUN_14479d2ce(param_1 + 0xb0);
    bVar7 = lVar4 != 0;
  }
  cVar1 = *(char *)((longlong)param_1 + 0x291);
  bVar6 = cVar1 == *(char *)((longlong)param_1 + 0x5a9);
  cVar2 = (**(code **)(param_1[0x2f] + 0x128))(param_1 + 0x2f);
  if (cVar2 == '\0') {
LAB_140cf1e17:
    if ((!(bool)(lVar3 != 0 & (bVar7 ^ 1U))) && ((*(uint *)(param_1 + 0x93) & 3) == 3)) {
      if (!bVar7) goto LAB_140cf1e61;
      if (cVar1 != '\x04' && !bVar6) {
        if (cVar1 == '\x03') {
          (**(code **)(*param_1 + 0x7a8))(param_1,param_1 + 0x95,0,0);
        }
        goto LAB_140cf1e61;
      }
      uVar5 = (undefined1)param_1[0xb5];
      goto LAB_140cf1f1a;
    }
    if ((cVar1 == '\x03') || (*(byte *)((longlong)param_1 + 0x291) - 5 < 2)) goto LAB_140cf1e61;
    lVar3 = *param_1;
    uVar5 = 3;
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x4b8))(param_1);
    if (cVar2 == '\0') goto LAB_140cf1e17;
    if (cVar1 == '\x04' || bVar6) goto LAB_140cf1e61;
    uVar5 = *(undefined1 *)((longlong)param_1 + 0x5a9);
LAB_140cf1f1a:
    lVar3 = *param_1;
  }
  (**(code **)(lVar3 + 0x5d0))(param_1,uVar5,0);
LAB_140cf1e61:
                    /* WARNING: Could not recover jumptable at 0x000140cf1e71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x658))(param_1);
  return;
}



// FUNCTION 140cf1f64 FUN_140cf1f64 body=113 status=ok
// SIG undefined FUN_140cf1f64(void)

void FUN_140cf1f64(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  if (lVar1 != 0) {
    if ((*(longlong *)(lVar1 + 0x170) != 0) && (DAT_14c87ead8 == '\0')) {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    iVar3 = FUN_14487fd02(lVar1);
    if (iVar3 == 3) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x700))();
      if (cVar2 != '\0') {
        FUN_140bdc5b6(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cf1fd6 FUN_140cf1fd6 body=2281 status=ok
// SIG undefined FUN_140cf1fd6(void)

void FUN_140cf1fd6(longlong param_1,ulonglong param_2,int *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  LPCRITICAL_SECTION local_80;
  undefined4 *local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(param_1 + 0xe8);
  EnterCriticalSection(lpCriticalSection_00);
  if (((param_3[1] == 0 && *param_3 == 0) && param_3[2] == 0) && param_3[3] == 0) {
    FUN_1468b52f2(param_1,param_2);
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x58);
    EnterCriticalSection(lpCriticalSection);
    if (*(ulonglong *)(param_1 + 0x80) != param_2) {
      *(ulonglong *)(param_1 + 0x80) = param_2;
      if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
        uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        lVar7 = param_1 + 0x40;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x48);
        }
        iVar9 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(param_1 + 0x50) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar9 != -1) {
          do {
            lVar7 = *(longlong *)(param_1 + 8) + (longlong)iVar9 * 0x20;
            if (*(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar9 * 0x20) == param_2) {
              if ((undefined4 *)(lVar7 + 8) != (undefined4 *)0x0 && lVar7 != 0) {
                uVar19 = *(undefined4 *)(lVar7 + 8);
                uVar20 = *(undefined4 *)(lVar7 + 0xc);
                uVar21 = *(undefined4 *)(lVar7 + 0x10);
                uVar22 = *(undefined4 *)(lVar7 + 0x14);
                goto LAB_140cf20b6;
              }
              break;
            }
            iVar9 = *(int *)(lVar7 + 0x18);
          } while (iVar9 != -1);
        }
      }
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
LAB_140cf20b6:
      *(undefined4 *)(param_1 + 0x88) = uVar19;
      *(undefined4 *)(param_1 + 0x8c) = uVar20;
      *(undefined4 *)(param_1 + 0x90) = uVar21;
      *(undefined4 *)(param_1 + 0x94) = uVar22;
    }
    local_58 = *(undefined4 *)(param_1 + 0x88);
    uStack_54 = *(undefined4 *)(param_1 + 0x8c);
    uStack_50 = *(undefined4 *)(param_1 + 0x90);
    uStack_4c = *(undefined4 *)(param_1 + 0x94);
    local_80 = lpCriticalSection_00;
    local_70 = param_2;
    LeaveCriticalSection(lpCriticalSection);
    local_88 = (longlong *)(param_1 + 0x98);
    FUN_140cf28c0(local_88,&local_58);
    iVar9 = *param_3;
    iVar14 = param_3[1];
    iVar12 = param_3[2];
    iVar10 = param_3[3];
    if (((iVar14 == 0 && iVar9 == 0) && iVar12 == 0) && iVar10 == 0) {
      FUN_1468b8ab0(param_1,local_70);
      plVar17 = local_88;
    }
    else {
      local_78 = (undefined4 *)(param_1 + 0x88);
      EnterCriticalSection(lpCriticalSection);
      plVar17 = local_88;
      local_90 = (longlong *)(param_1 + 8);
      iVar13 = *(int *)(param_1 + 0x10);
      iVar5 = *(int *)(param_1 + 0x3c);
      *(ulonglong *)(param_1 + 0x80) = local_70;
      *(int *)(param_1 + 0x88) = iVar9;
      *(int *)(param_1 + 0x8c) = iVar14;
      *(int *)(param_1 + 0x90) = iVar12;
      *(int *)(param_1 + 0x94) = iVar10;
      if (iVar5 == 0) {
        *(int *)(param_1 + 0x10) = iVar13 + 1;
        if (*(int *)(param_1 + 0x14) == iVar13) {
          FUN_1447711aa(local_90);
        }
        iVar9 = *(int *)(param_1 + 0x30);
        if (iVar9 == 0) {
          iVar14 = -1;
        }
        else {
          iVar14 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar14 = iVar9 + -1;
          }
          iVar14 = iVar14 >> 5;
        }
        lVar7 = param_1 + 0x18;
        iVar12 = iVar9 + 1;
        iVar10 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar10 = iVar9;
        }
        if (iVar10 >> 5 == iVar14) {
          *(int *)(param_1 + 0x30) = iVar12;
        }
        else {
          if (*(int *)(param_1 + 0x34) <= iVar9) {
            local_68 = lVar7;
            if (iVar9 + 0x20U < 0xa0) {
              iVar12 = 0x80;
              iVar14 = iVar9;
            }
            else {
              uVar6 = iVar9 + 0x20U >> 5;
              local_60 = (ulonglong)uVar6;
              if (*(int *)(param_1 + 0x34) + 0x1fU < 0xa0) {
                uVar18 = 4;
                if (4 < uVar6) {
                  uVar18 = uVar6;
                }
              }
              else {
                uVar18 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
              }
              uVar11 = FUN_144a3809e(uVar18 << 2,0);
              iVar14 = (int)(uVar11 >> 2);
              iVar12 = -0x20;
              if ((int)local_60 <= iVar14) {
                iVar12 = iVar14 << 5;
              }
              iVar14 = *(int *)(param_1 + 0x30);
            }
            *(int *)(param_1 + 0x34) = iVar12;
            FUN_1446efbd8(local_68,iVar14);
            iVar12 = *(int *)(param_1 + 0x30) + 1;
            lVar7 = local_68;
          }
          iVar14 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar14 = iVar12;
          }
          *(int *)(param_1 + 0x30) = iVar12;
          if (iVar12 % 0x20 != 0) {
            lVar16 = *(longlong *)(param_1 + 0x28);
            if (*(longlong *)(param_1 + 0x28) == 0) {
              lVar16 = lVar7;
            }
            bVar8 = -(char)(iVar12 % 0x20);
            *(uint *)(lVar16 + (longlong)(iVar14 >> 5) * 4) =
                 (uint)(*(int *)(lVar16 + (longlong)(iVar14 >> 5) * 4) << (bVar8 & 0x1f)) >>
                 (bVar8 & 0x1f);
          }
        }
        lVar16 = (longlong)iVar13;
        if (*(longlong *)(param_1 + 0x28) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x28);
        }
        bVar8 = (byte)iVar9 & 0x1f;
        puVar1 = (uint *)(lVar7 + (longlong)(iVar10 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
        iVar9 = iVar13;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x38);
        lVar16 = (longlong)iVar9;
        iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar16 * 0x20);
        *(int *)(param_1 + 0x38) = iVar14;
        *(int *)(param_1 + 0x3c) = iVar5 + -1;
        if (iVar5 + -1 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar14 * 0x20) = 0xffffffff;
        }
      }
      iVar14 = 1;
      lVar7 = param_1 + 0x18;
      if (*(longlong *)(param_1 + 0x28) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x28);
      }
      iVar12 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar12 = iVar9;
      }
      puVar1 = (uint *)(lVar7 + (longlong)(iVar12 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
      lVar16 = lVar16 * 0x20;
      lVar7 = *(longlong *)(param_1 + 8);
      uVar11 = *(ulonglong *)(param_1 + 0x80);
      puVar2 = (undefined4 *)(lVar7 + lVar16);
      *(ulonglong *)(lVar7 + lVar16) = uVar11;
      uVar19 = local_78[1];
      uVar20 = local_78[2];
      uVar21 = local_78[3];
      puVar4 = (undefined4 *)(lVar7 + 8 + lVar16);
      *puVar4 = *local_78;
      puVar4[1] = uVar19;
      puVar4[2] = uVar20;
      puVar4[3] = uVar21;
      *(undefined4 *)(lVar7 + 0x18 + lVar16) = 0xffffffff;
      uVar6 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar6 = uVar6 >> 0x10 ^ uVar6;
      uVar18 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
      if ((uVar18 != 0) && (uVar18 != 1)) {
        lVar7 = param_1 + 0x40;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x48);
        }
        iVar12 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar6) * 4);
        if (iVar12 != -1) {
          do {
            puVar4 = (undefined4 *)(*local_90 + (longlong)iVar12 * 0x20);
            if (*(ulonglong *)(*local_90 + (longlong)iVar12 * 0x20) == uVar11) {
              uVar19 = *puVar2;
              uVar20 = puVar2[1];
              uVar21 = puVar2[2];
              uVar22 = puVar2[3];
              *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar2 + 4);
              *puVar4 = uVar19;
              puVar4[1] = uVar20;
              puVar4[2] = uVar21;
              puVar4[3] = uVar22;
              FUN_140b3a24c(local_90,iVar9,1);
              goto LAB_140cf22f8;
            }
            iVar12 = puVar4[6];
          } while (iVar12 != -1);
        }
      }
      if (3 < uVar18) {
        uVar11 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
        lVar7 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar14 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((int)uVar18 < 1) || (iVar14 <= *(int *)(param_1 + 0x50))) {
        uVar6 = *(int *)(param_1 + 0x50) - 1U & uVar6;
        puVar2[7] = uVar6;
        lVar7 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar7 = param_1 + 0x40;
        }
        puVar2[6] = *(undefined4 *)
                     (lVar7 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar6) * 4);
        lVar7 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar7 = param_1 + 0x40;
        }
        *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar6) * 4) =
             iVar9;
      }
      else {
        *(int *)(param_1 + 0x50) = iVar14;
        FUN_140cf2a94(local_90);
      }
LAB_140cf22f8:
      if (iVar13 == iVar5) {
        FUN_140f9708a(&DAT_14c9647b8,param_1);
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    FUN_140cf28c0(plVar17,param_3);
    if (*(int *)(param_1 + 0xcc) == 0) {
      iVar9 = *(int *)(param_1 + 0xa0);
      *(int *)(param_1 + 0xa0) = iVar9 + 1;
      if (*(int *)(param_1 + 0xa4) == iVar9) {
        FUN_1447711aa(plVar17,iVar9);
      }
      iVar14 = *(int *)(param_1 + 0xc0);
      if (iVar14 == 0) {
        iVar12 = -1;
      }
      else {
        iVar12 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar12 = iVar14 + -1;
        }
        iVar12 = iVar12 >> 5;
      }
      lVar7 = param_1 + 0xa8;
      iVar10 = iVar14 + 1;
      iVar13 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar13 = iVar14;
      }
      if (iVar13 >> 5 == iVar12) {
        *(int *)(param_1 + 0xc0) = iVar10;
      }
      else {
        if (*(int *)(param_1 + 0xc4) <= iVar14) {
          if (iVar14 + 0x20U < 0xa0) {
            iVar10 = 0x80;
            iVar12 = iVar14;
          }
          else {
            uVar6 = iVar14 + 0x20U >> 5;
            if (*(int *)(param_1 + 0xc4) + 0x1fU < 0xa0) {
              uVar18 = 4;
              if (4 < uVar6) {
                uVar18 = uVar6;
              }
            }
            else {
              uVar18 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
            }
            uVar11 = FUN_144a3809e(uVar18 << 2,0);
            iVar12 = (int)(uVar11 >> 2);
            iVar10 = -0x20;
            if ((int)uVar6 <= iVar12) {
              iVar10 = iVar12 << 5;
            }
            iVar12 = *(int *)(param_1 + 0xc0);
          }
          *(int *)(param_1 + 0xc4) = iVar10;
          FUN_1446efbd8(lVar7,iVar12);
          iVar10 = *(int *)(param_1 + 0xc0) + 1;
          plVar17 = local_88;
        }
        iVar12 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar12 = iVar10;
        }
        *(int *)(param_1 + 0xc0) = iVar10;
        if (iVar10 % 0x20 != 0) {
          lVar16 = *(longlong *)(param_1 + 0xb8);
          if (*(longlong *)(param_1 + 0xb8) == 0) {
            lVar16 = lVar7;
          }
          bVar8 = -(char)(iVar10 % 0x20);
          *(uint *)(lVar16 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)(lVar16 + (longlong)(iVar12 >> 5) * 4) << (bVar8 & 0x1f)) >>
               (bVar8 & 0x1f);
        }
      }
      lVar16 = (longlong)iVar9;
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        lVar7 = *(longlong *)(param_1 + 0xb8);
      }
      bVar8 = (byte)iVar14 & 0x1f;
      puVar1 = (uint *)(lVar7 + (longlong)(iVar13 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    }
    else {
      iVar9 = *(int *)(param_1 + 200);
      lVar16 = (longlong)iVar9;
      iVar14 = *(int *)(*(longlong *)(param_1 + 0x98) + 4 + lVar16 * 0x20);
      *(int *)(param_1 + 200) = iVar14;
      iVar12 = *(int *)(param_1 + 0xcc) + -1;
      *(int *)(param_1 + 0xcc) = iVar12;
      if (iVar12 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar14 * 0x20) = 0xffffffff;
      }
    }
    lVar7 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xb8);
    }
    iVar14 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar14 = iVar9;
    }
    puVar1 = (uint *)(lVar7 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
    iVar13 = 1;
    lVar7 = *(longlong *)(param_1 + 0x98);
    lVar16 = lVar16 * 0x20;
    puVar2 = (undefined4 *)(lVar7 + lVar16);
    iVar14 = param_3[1];
    iVar12 = param_3[2];
    iVar10 = param_3[3];
    piVar3 = (int *)(lVar7 + lVar16);
    *piVar3 = *param_3;
    piVar3[1] = iVar14;
    piVar3[2] = iVar12;
    piVar3[3] = iVar10;
    *(ulonglong *)(lVar7 + 0x10 + lVar16) = local_70;
    *(undefined4 *)(lVar7 + 0x18 + lVar16) = 0xffffffff;
    uVar11 = *(ulonglong *)(lVar7 + 8 + lVar16);
    uVar15 = *(longlong *)(lVar7 + lVar16) + 0x9ae16a3b2f90404f;
    uVar15 = ((uVar15 << 0x27 | uVar15 >> 0x19) + uVar11) * -0x651e95c4d06fbf91;
    uVar11 = ((uVar11 << 0x1b | uVar11 >> 0x25) * -0x651e95c4d06fbf91 +
              *(longlong *)(lVar7 + lVar16) + 0x9ae16a3b2f90404f ^ uVar15) * -0x651e95c4d06fbf91;
    lVar7 = (uVar11 >> 0x2f ^ uVar15 ^ uVar11) * -0x651e95c4d06fbf91;
    uVar6 = ((uint)((ulonglong)lVar7 >> 0x2f) ^ (uint)lVar7) * 0x2f90406f;
    uVar18 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0xcc);
    if (uVar18 != 1) {
      iVar14 = FUN_140971140(plVar17,uVar6,puVar2);
      if (iVar14 != -1) {
        lVar7 = *plVar17;
        uVar19 = *puVar2;
        uVar20 = puVar2[1];
        uVar21 = puVar2[2];
        uVar22 = puVar2[3];
        *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar14 * 0x20) = *(undefined8 *)(puVar2 + 4);
        puVar2 = (undefined4 *)(lVar7 + (longlong)iVar14 * 0x20);
        *puVar2 = uVar19;
        puVar2[1] = uVar20;
        puVar2[2] = uVar21;
        puVar2[3] = uVar22;
        FUN_140cf2a0c(plVar17,iVar9,1);
        lpCriticalSection_00 = local_80;
        goto LAB_140cf24cc;
      }
      if (3 < uVar18) {
        uVar11 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
        lVar7 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar13 = 1 << ((byte)lVar7 & 0x1f);
      }
    }
    if (((int)uVar18 < 1) || (iVar13 <= *(int *)(param_1 + 0xe0))) {
      uVar6 = *(int *)(param_1 + 0xe0) - 1U & uVar6;
      puVar2[7] = uVar6;
      lVar7 = *(longlong *)(param_1 + 0xd8);
      if (*(longlong *)(param_1 + 0xd8) == 0) {
        lVar7 = param_1 + 0xd0;
      }
      puVar2[6] = *(undefined4 *)
                   (lVar7 + ((longlong)*(int *)(param_1 + 0xe0) - 1U & (longlong)(int)uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0xd8);
      if (*(longlong *)(param_1 + 0xd8) == 0) {
        lVar7 = param_1 + 0xd0;
      }
      *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0xe0) - 1U & (longlong)(int)uVar6) * 4) = iVar9
      ;
      lpCriticalSection_00 = local_80;
    }
    else {
      *(int *)(param_1 + 0xe0) = iVar13;
      FUN_140cf2ce8(plVar17);
      lpCriticalSection_00 = local_80;
    }
  }
LAB_140cf24cc:
  LeaveCriticalSection(lpCriticalSection_00);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf28c0 FUN_140cf28c0 body=235 status=ok
// SIG undefined FUN_140cf28c0(void)

undefined8 FUN_140cf28c0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = ((lVar2 + 0x9ae16a3b2f90404fU << 0x27 | lVar2 + 0x9ae16a3b2f90404fU >> 0x19) + uVar3) *
            -0x651e95c4d06fbf91;
    uVar6 = (lVar2 + (uVar3 << 0x1b | uVar3 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
            uVar4) * -0x651e95c4d06fbf91;
    lVar7 = (uVar6 >> 0x2f ^ uVar4 ^ uVar6) * -0x651e95c4d06fbf91;
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar8 +
                    ((longlong)(int)(((uint)((ulonglong)lVar7 >> 0x2f) ^ (uint)lVar7) * 0x2f90406f)
                    & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar7 = *param_1;
      do {
        lVar5 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar7 + lVar5) == (int)lVar2) &&
             (*(int *)(lVar7 + 4 + lVar5) == (int)((ulonglong)lVar2 >> 0x20))) &&
            (*(int *)(lVar7 + 8 + lVar5) == (int)uVar3)) &&
           (*(int *)(lVar7 + 0xc + lVar5) == (int)(uVar3 >> 0x20))) {
          FUN_140cf29ac();
          return 1;
        }
        iVar1 = *(int *)(lVar5 + lVar7 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140cf29ac FUN_140cf29ac body=95 status=ok
// SIG undefined FUN_140cf29ac(void)

void FUN_140cf29ac(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_140cf2a0c(param_1,param_2,1);
  return;
}



// FUNCTION 140cf2a0c FUN_140cf2a0c body=136 status=ok
// SIG undefined FUN_140cf2a0c(void)

void FUN_140cf2a0c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140cf2a94 FUN_140cf2a94 body=594 status=ok
// SIG undefined FUN_140cf2a94(void)

void FUN_140cf2a94(longlong *param_1)

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
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140cf2c9d;
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
LAB_140cf2c9d:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf2ce8 FUN_140cf2ce8 body=648 status=ok
// SIG undefined FUN_140cf2ce8(void)

void FUN_140cf2ce8(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar9,4);
    if (0 < (int)uVar9) {
      uVar3 = 0;
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar9 != uVar3);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] == 0) {
      uVar11 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar11 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar9 = (uint)local_50;
    iVar10 = local_50._4_4_;
    iVar8 = local_48;
    if (local_50._4_4_ < (int)local_58[3]) {
      do {
        lVar7 = *param_1;
        lVar6 = (longlong)iVar10 * 0x20;
        uVar14 = *(ulonglong *)(lVar7 + 8 + lVar6);
        uVar12 = *(longlong *)(lVar7 + lVar6) + 0x9ae16a3b2f90404f;
        uVar12 = ((uVar12 << 0x27 | uVar12 >> 0x19) + uVar14) * -0x651e95c4d06fbf91;
        uVar14 = (*(longlong *)(lVar7 + lVar6) +
                  (uVar14 << 0x1b | uVar14 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
                 uVar12) * -0x651e95c4d06fbf91;
        lVar15 = (uVar14 >> 0x2f ^ uVar12 ^ uVar14) * -0x651e95c4d06fbf91;
        uVar14 = (longlong)(int)(((uint)((ulonglong)lVar15 >> 0x2f) ^ (uint)lVar15) * 0x2f90406f) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar7 + 0x1c + lVar6) = iVar13;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar7 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar10;
        uVar9 = ~(uint)uVar11 & uVar9;
        plVar5 = (longlong *)local_58[2];
        if ((longlong *)local_58[2] == (longlong *)0x0) {
          plVar5 = local_58;
        }
        iVar13 = (int)local_58[3];
        lVar7 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar5 + lVar7 * 4) & uVar9;
        if (uVar3 == 0) {
          iVar10 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar10 = iVar13 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar2 = iVar10;
          if (iVar10 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar10 <= iVar4) break;
          lVar6 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar3 = *(uint *)((longlong)plVar5 + lVar6 * 4 + lVar7 * 4 + 4);
            if (uVar3 != 0) break;
            lVar6 = lVar6 + 1;
            if (iVar2 - lVar7 == lVar6) goto LAB_140cf2f24;
          }
          iVar4 = iVar4 + (int)lVar6 + 1;
          uVar9 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar3 & uVar3);
        uVar14 = uVar11 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar10 = (iVar8 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      } while (iVar10 < iVar13);
    }
  }
LAB_140cf2f24:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf2f80 FUN_140cf2f80 body=45 status=ok
// SIG undefined FUN_140cf2f80(void)

undefined8 FUN_140cf2f80(undefined8 param_1,int param_2)

{
  FUN_140cf2fae();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 140cf2fae FUN_140cf2fae body=285 status=ok
// SIG undefined FUN_140cf2fae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cf2fae(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14afddb30;
  FUN_140cf30cb(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140cf30cb(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140cf30cb(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140cf30a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140cf30cb FUN_140cf30cb body=41 status=ok
// SIG undefined FUN_140cf30cb(void)

void FUN_140cf30cb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140cf30f4(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 140cf30f4 FUN_140cf30f4 body=150 status=ok
// SIG undefined FUN_140cf30f4(void)

void FUN_140cf30f4(longlong *param_1)

{
  FUN_1447a1747(param_1[0x10],(int)param_1[0x11]);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_143c259f9(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140cf318a FUN_140cf318a body=147 status=ok
// SIG undefined FUN_140cf318a(void)

void FUN_140cf318a(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_3 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14018fb44();
    if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)) && (*(char *)((longlong)plVar1 + 0x122) == '\x01')) {
      FUN_140cf321e(param_1,param_2,param_3 + 0x58);
      return;
    }
  }
  FUN_140cf338a(param_1,param_2,param_3);
  return;
}



// FUNCTION 140cf321e FUN_140cf321e body=228 status=ok
// SIG undefined FUN_140cf321e(void)

void FUN_140cf321e(longlong param_1,float param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_a8 [40];
  float local_80;
  float local_7c;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  float *local_50;
  longlong local_48;
  float *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = &local_7c;
  local_7c = 1.0;
  local_80 = *(float *)(param_1 + 0x5fc);
  local_40 = &local_80;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14b967090;
  local_78[0] = FUN_14410fbf4;
  local_48 = param_1;
  FUN_140cf3304(param_3,local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((0.0 < local_7c) && (0.0 < local_80)) {
    FUN_140cf3424(param_1,local_7c * param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf3304 FUN_140cf3304 body=134 status=ok
// SIG undefined FUN_140cf3304(void)

void FUN_140cf3304(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar1 = *(byte *)(param_1 + 0x38);
  if ((ulonglong)bVar1 != 0) {
    uVar7 = 1;
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = param_1;
      }
      lVar4 = FUN_14033465a(lVar4 + lVar8);
      if (lVar4 == 0) {
        return;
      }
      pcVar2 = (code *)*param_2;
      plVar6 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar6 = param_2 + 4;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      bVar3 = (*pcVar2)(uVar5,lVar4);
      bVar9 = uVar7 < bVar1;
      lVar8 = lVar8 + 0x18;
      uVar7 = uVar7 + 1;
    } while ((bVar3 & bVar9) != 0);
  }
  return;
}



// FUNCTION 140cf338a FUN_140cf338a body=154 status=ok
// SIG undefined FUN_140cf338a(void)

void FUN_140cf338a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_1[0x4b] == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)param_1[0x4c];
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))();
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (cVar1 == '\0') {
      param_2 = 0;
    }
  }
  FUN_143d06ffa(param_3,param_2);
  (**(code **)(*param_1 + 0x70))(param_1,param_3);
  (**(code **)(*param_1 + 0x78))(param_1,param_3);
  plVar2 = (longlong *)param_1[0x4a];
  if ((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar2 + 99) & 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140cf341d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x578))();
    return;
  }
  return;
}



// FUNCTION 140cf3424 FUN_140cf3424 body=1150 status=ok
// SIG undefined FUN_140cf3424(void)

void FUN_140cf3424(longlong param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined8 *local_f0;
  int local_e8;
  undefined2 local_e0 [2];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  byte local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((*(longlong *)(param_1 + 600) != 0) && (*(longlong **)(param_1 + 0x260) != (longlong *)0x0))
     && (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))(), lVar6 != 0)) {
    uVar5 = *(uint *)(param_1 + 0x648);
    if (*(int *)(param_1 + 0x638) <= (int)uVar5) {
      lVar7 = *(longlong *)(param_1 + 0x640);
      if ((int)uVar5 < 2) {
        uVar13 = 0;
      }
      else {
        pfVar8 = (float *)(lVar7 + 0x14);
        uVar13 = 0;
        uVar12 = 1;
        do {
          fVar16 = *(float *)(lVar7 + 4 + (longlong)(int)uVar13 * 0x10);
          uVar4 = (uint)uVar12;
          if (fVar16 < *pfVar8 || fVar16 == *pfVar8) {
            uVar4 = uVar13;
          }
          uVar13 = uVar4;
          uVar12 = uVar12 + 1;
          pfVar8 = pfVar8 + 4;
        } while (uVar5 != uVar12);
      }
      if (param_2 < *(float *)(lVar7 + 4 + (longlong)(int)uVar13 * 0x10)) goto LAB_140cf3552;
      iVar11 = ~uVar13 + uVar5;
      if (iVar11 != 0) {
        iVar14 = 1;
        if (iVar11 < 1) {
          iVar14 = iVar11;
        }
        memmove((void *)((longlong)(int)uVar13 * 0x10 + lVar7),
                (void *)((longlong)(int)(uVar5 - iVar14) * 0x10 + lVar7),(longlong)iVar14 << 4);
        uVar5 = *(uint *)(param_1 + 0x648);
      }
      *(uint *)(param_1 + 0x648) = uVar5 - 1;
    }
    if (*(longlong *)(param_1 + 0x250) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_1447210f0();
    }
    dVar2 = *(double *)(lVar7 + 0x6d0);
    if (*(int *)(lVar6 + 0x40) < 1) {
      fVar16 = -1.0;
    }
    else {
      fVar16 = (float)FUN_1405583ce(*(undefined8 *)(lVar6 + 0x38));
    }
    iVar11 = *(int *)(param_1 + 0x648);
    *(uint *)(param_1 + 0x648) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x64c) < iVar11 + 1U) {
      FUN_148d13358((longlong *)(param_1 + 0x640),iVar11);
    }
    lVar6 = *(longlong *)(param_1 + 0x640);
    lVar7 = (longlong)iVar11 * 0x10;
    *(float *)(lVar6 + lVar7) = (float)dVar2;
    *(float *)(lVar6 + 4 + lVar7) = param_2;
    fVar16 = param_2 / (fVar16 * param_3);
    *(float *)(lVar6 + 8 + lVar7) = fVar16;
    *(float *)(lVar6 + 0xc + lVar7) = param_2 / fVar16;
    if (*(longlong *)(param_1 + 0x650) == 0) {
      lVar6 = FUN_1405831b2();
      *(float *)(param_1 + 0x63c) = (float)dVar2;
      if (*(longlong *)(param_1 + 0x250) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = FUN_1447210f0();
      }
      if (*(longlong *)(lVar7 + 0x1f0) == 0) {
        puVar9 = (undefined8 *)(lVar7 + 0x458);
      }
      else {
        puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
      }
      uVar3 = *puVar9;
      uVar1 = *(undefined4 *)(lVar6 + 0xf48);
      lVar6 = *(longlong *)(param_1 + 0x250);
      local_f0 = (undefined8 *)0x0;
      local_e8 = 0;
      FUN_1446efa72(&local_f0,0,3,0x10);
      puVar9 = local_f0;
      local_e8 = 3;
      *local_f0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_f0[2] = lVar10;
      *local_f0 = &PTR_FUN_14b9670b0;
      local_f0[3] = 0;
      iVar11 = 0;
      if (lVar6 != 0) {
        uVar5 = *(uint *)(lVar6 + 0xc);
        *(uint *)(local_f0 + 3) = uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        iVar11 = *(int *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar15 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar15) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
          }
          LOCK();
          iVar11 = *(int *)(lVar6 + 0x10);
          bVar15 = iVar11 == 0;
          if (bVar15) {
            *(int *)(lVar6 + 0x10) = iVar14;
            iVar11 = 0;
          }
          UNLOCK();
          if (bVar15) {
            iVar11 = iVar14;
          }
        }
      }
      *(int *)((longlong)puVar9 + 0x1c) = iVar11;
      puVar9[4] = param_1;
      local_d8 = 0;
      local_d0 = 0;
      FUN_14487d8d8(&local_d8,&local_f0);
      local_98 = 1;
      local_f8 = local_e0;
      local_e0[0] = 1;
      local_dc = 0xbf800000;
      FUN_1406f4044(uVar3,param_1 + 0x650,&local_d8,uVar1);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(&local_d8);
      if (local_e8 != 0) {
        if (local_f0 == (undefined8 *)0x0) goto LAB_140cf3552;
        (**(code **)*local_f0)(local_f0,0);
        FUN_1446efa72(&local_f0,0,0,0x10);
        local_e8 = 0;
      }
      if (local_f0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140cf3552:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf38a4 FUN_140cf38a4 body=277 status=ok
// SIG undefined FUN_140cf38a4(void)

undefined8 FUN_140cf38a4(longlong param_1)

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
    if (iVar1 == 2) goto LAB_140cf39b3;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140cf39b3;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140cf39b3:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140cf3961;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_140cf3961;
    }
  }
  uVar6 = 0;
LAB_140cf3961:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf39ba FUN_140cf39ba body=967 status=ok
// SIG undefined FUN_140cf39ba(void)

void FUN_140cf39ba(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_88 [47];
  char local_59;
  undefined8 *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(int *)(param_1 + 0x54) == 0) || (uVar2 = *(uint *)(param_1 + 0x50), (int)uVar2 < 0)) ||
      (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0x54))) ||
      ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_140cf3c45;
  if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
    lVar9 = *plVar8;
  }
  else {
    lVar9 = 0;
  }
  if (*(int *)(lVar9 + 0xbf0) < 1) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = *(longlong **)(*(longlong *)(lVar9 + 0xbe8) + 0x10);
  }
  if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
    lVar9 = *plVar8;
  }
  else {
    lVar9 = 0;
  }
  if (*(int *)(lVar9 + 0xbf0) < 2) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)(*(longlong *)(lVar9 + 0xbe8) + 0x98);
  }
  if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
    lVar9 = *plVar8;
  }
  else {
    lVar9 = 0;
  }
  local_59 = *(char *)(lVar9 + 0xbd8);
  FUN_1449027d0(param_1,&local_58);
  pcVar3 = (char *)*local_58;
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x70));
  *(int *)(pcVar3 + 0x68) = *(int *)(pcVar3 + 0x68) + 1;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  iVar5 = *(int *)(pcVar3 + 4);
  if ((bool)*pcVar3 == (plVar11 != (longlong *)0x0)) {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_140cf3d32;
    }
  }
  else {
LAB_140cf3d32:
    *pcVar3 = plVar11 != (longlong *)0x0;
    *(int *)(pcVar3 + 4) = iVar5 + 1;
  }
  if (plVar11 != (longlong *)0x0) {
    if (((plVar10 == (longlong *)0x0) || (local_59 == '\0')) ||
       (plVar8 = plVar10, (*(byte *)((longlong)plVar10 + 0x91) & 8) == 0)) {
      plVar8 = plVar11;
    }
    iVar5 = (**(code **)(*plVar8 + 0x2c0))(plVar8);
    iVar6 = (**(code **)(*plVar8 + 0x2b8))(plVar8);
    iVar7 = (**(code **)(*plVar8 + 0x2d8))();
    if (iVar6 == 0) {
      lVar9 = 0;
      iVar5 = iVar7;
    }
    else {
      cVar4 = (**(code **)(*plVar8 + 0x2f8))();
      lVar9 = 0;
      if (cVar4 == '\0') {
        lVar9 = (longlong)iVar7;
      }
    }
    if (*(longlong *)(pcVar3 + 8) == (longlong)iVar5) {
      if (*(int *)(pcVar3 + 0x10) == 0) {
        iVar6 = 1;
        goto LAB_140cf3b7d;
      }
    }
    else {
      iVar6 = *(int *)(pcVar3 + 0x10) + 1;
LAB_140cf3b7d:
      *(longlong *)(pcVar3 + 8) = (longlong)iVar5;
      *(int *)(pcVar3 + 0x10) = iVar6;
    }
    if (*(longlong *)(pcVar3 + 0x18) == lVar9) {
      if (*(int *)(pcVar3 + 0x20) == 0) {
        iVar5 = 1;
        goto LAB_140cf3c88;
      }
    }
    else {
      iVar5 = *(int *)(pcVar3 + 0x20) + 1;
LAB_140cf3c88:
      *(longlong *)(pcVar3 + 0x18) = lVar9;
      *(int *)(pcVar3 + 0x20) = iVar5;
    }
    iVar5 = *(int *)(pcVar3 + 0x34);
    if (pcVar3[0x30] == '\0') {
      if (iVar5 == 0) {
        iVar5 = 1;
        goto LAB_140cf3ce0;
      }
    }
    else {
      iVar5 = iVar5 + 1;
LAB_140cf3ce0:
      pcVar3[0x30] = '\0';
      *(int *)(pcVar3 + 0x34) = iVar5;
    }
    if (((plVar10 == plVar11) || (plVar10 == (longlong *)0x0)) ||
       ((*(byte *)((longlong)plVar10 + 0x91) & 8) != 0)) {
      if (pcVar3[0x28] == '\0') {
        if (*(int *)(pcVar3 + 0x2c) != 0) goto LAB_140cf3c3c;
        iVar5 = 1;
      }
      else {
        iVar5 = *(int *)(pcVar3 + 0x2c) + 1;
      }
      pcVar3[0x28] = '\0';
      *(int *)(pcVar3 + 0x2c) = iVar5;
    }
    else {
      if (pcVar3[0x28] == '\0') {
        iVar6 = *(int *)(pcVar3 + 0x2c) + 1;
LAB_140cf3ca8:
        pcVar3[0x28] = '\x01';
        *(int *)(pcVar3 + 0x2c) = iVar6;
      }
      else if (*(int *)(pcVar3 + 0x2c) == 0) {
        iVar6 = 1;
        goto LAB_140cf3ca8;
      }
      if ((local_59 != '\0') || (iVar5 == 0)) {
        pcVar3[0x30] = local_59 != '\0';
        *(int *)(pcVar3 + 0x34) = iVar5 + 1;
      }
      iVar5 = (**(code **)(*plVar10 + 0x2c0))(plVar10);
      if (*(longlong *)(pcVar3 + 0x38) == (longlong)iVar5) {
        if (*(int *)(pcVar3 + 0x40) != 0) goto LAB_140cf3c3c;
        iVar6 = 1;
      }
      else {
        iVar6 = *(int *)(pcVar3 + 0x40) + 1;
      }
      *(longlong *)(pcVar3 + 0x38) = (longlong)iVar5;
      *(int *)(pcVar3 + 0x40) = iVar6;
    }
  }
LAB_140cf3c3c:
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x70));
LAB_140cf3c45:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf3d82 FUN_140cf3d82 body=450 status=ok
// SIG undefined FUN_140cf3d82(void)

void FUN_140cf3d82(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
  plVar1 = (longlong *)FUN_14026506e(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
      lVar2 = (**(code **)(*plVar1 + 0x5d8))(plVar1);
      if ((lVar2 != 0) && (DAT_14cbadd90 == 0)) {
        local_30 = &local_18;
        local_18 = FUN_141030f22;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_1459f2e4c;
        local_38 = &LAB_148c39de3;
        local_40 = &LAB_1457a9eb2;
        local_48 = &DAT_149e063b2;
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 0x10;
        local_68 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf3f46 FUN_140cf3f46 body=47 status=ok
// SIG undefined FUN_140cf3f46(void)

void FUN_140cf3f46(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_140cf3f76(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x40) = 0;
    FUN_14016fae4(param_1);
    return;
  }
  return;
}



// FUNCTION 140cf3f76 FUN_140cf3f76 body=122 status=ok
// SIG undefined FUN_140cf3f76(void)

void FUN_140cf3f76(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  FUN_140a2ca92(param_1 + -0x30);
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x1c))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
      FUN_1401073f6(*plVar2 + 0x5fc0,param_1 + -0x30);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}



// FUNCTION 140cf3ff0 FUN_140cf3ff0 body=709 status=ok
// SIG undefined FUN_140cf3ff0(void)

void FUN_140cf3ff0(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x20);
  uVar6 = *param_2;
  uVar8 = param_2[2];
  if (uVar8 != 0) {
    uVar6 = uVar8 >> 0xd ^ uVar6 - uVar8;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar8) - uVar6;
    uVar12 = uVar10 >> 0xd ^ (uVar8 - uVar6) - uVar10;
    uVar8 = uVar12 >> 0xc ^ (uVar6 - uVar10) - uVar12;
    uVar6 = uVar8 << 0x10 ^ (uVar10 - uVar12) - uVar8;
    uVar10 = uVar6 >> 5 ^ (uVar12 - uVar8) - uVar6;
    uVar8 = uVar10 >> 3 ^ (uVar8 - uVar6) - uVar10;
    uVar6 = uVar8 << 10 ^ (uVar6 - uVar10) - uVar8;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar8 + uVar6);
  }
  iVar7 = FUN_140cf42ca(plVar1,uVar6,param_2);
  if (iVar7 != -1) {
    lVar11 = *plVar1 + (longlong)iVar7 * 0x28;
    if ((lVar11 != 0) && (*plVar1 + (longlong)iVar7 * 0x28 != -0x10)) {
      local_38 = *(undefined8 *)(lVar11 + 0x10);
      plVar5 = *(longlong **)(lVar11 + 0x18);
      local_30 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        FUN_14107f182(&local_38);
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        FUN_14107f182();
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
        uVar6 = *param_2;
        uVar8 = param_2[2];
        uVar10 = uVar6;
        if (uVar8 != 0) {
          uVar10 = uVar8 >> 0xd ^ uVar6 - uVar8;
          uVar12 = uVar10 << 8 ^ (-0x61c88647 - uVar8) - uVar10;
          uVar13 = uVar12 >> 0xd ^ (uVar8 - uVar10) - uVar12;
          uVar14 = uVar13 >> 0xc ^ (uVar10 - uVar12) - uVar13;
          uVar10 = uVar14 << 0x10 ^ (uVar12 - uVar13) - uVar14;
          uVar13 = uVar10 >> 5 ^ (uVar13 - uVar14) - uVar10;
          uVar12 = uVar13 >> 3 ^ (uVar14 - uVar10) - uVar13;
          uVar10 = uVar12 << 10 ^ (uVar10 - uVar13) - uVar12;
          uVar10 = uVar10 >> 0xf ^ uVar13 - (uVar12 + uVar10);
        }
        lVar11 = param_1 + 0x58;
        if (*(longlong *)(param_1 + 0x60) != 0) {
          lVar11 = *(longlong *)(param_1 + 0x60);
        }
        uVar10 = *(uint *)(lVar11 + ((longlong)(int)uVar10 & (longlong)*(int *)(param_1 + 0x68) - 1U
                                    ) * 4);
        if (uVar10 != 0xffffffff) {
          do {
            puVar4 = (uint *)(*plVar1 + (longlong)(int)uVar10 * 0x28);
            if ((*puVar4 == uVar6) && (puVar4[2] == uVar8)) {
              uVar6 = *(uint *)(lVar11 + (longlong)(int)puVar4[9] * 4);
              if (uVar6 == uVar10) {
                puVar9 = (uint *)(lVar11 + (longlong)(int)puVar4[9] * 4);
              }
              else {
                do {
                  puVar9 = (uint *)(*plVar1 + (longlong)(int)uVar6 * 0x28 + 0x20);
                  uVar6 = *puVar9;
                } while (uVar6 != uVar10);
              }
              *puVar9 = puVar4[8];
              plVar1 = *(longlong **)(*plVar1 + 0x18 + (longlong)(int)uVar10 * 0x28);
              if (plVar1 != (longlong *)0x0) {
                LOCK();
                plVar5 = plVar1 + 1;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)*plVar5 == 0) {
                  (**(code **)*plVar1)(plVar1);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar1 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
            }
            uVar10 = puVar4[8];
          } while (uVar10 != 0xffffffff);
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



// FUNCTION 140cf42ca FUN_140cf42ca body=95 status=ok
// SIG undefined FUN_140cf42ca(void)

int FUN_140cf42ca(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x28 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x20 + lVar4 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140cf432a FUN_140cf432a body=114 status=ok
// SIG undefined FUN_140cf432a(void)

void FUN_140cf432a(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 140cf43aa FUN_140cf43aa body=88 status=ok
// SIG undefined FUN_140cf43aa(void)

undefined8 * FUN_140cf43aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b07e620;
  FUN_140cf4402(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cf4402 FUN_140cf4402 body=91 status=ok
// SIG undefined FUN_140cf4402(void)

void FUN_140cf4402(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x28);
    do {
      FUN_140cd0f82(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -10) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cf445e FUN_140cf445e body=284 status=ok
// SIG undefined FUN_140cf445e(void)

undefined8 FUN_140cf445e(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140cf4574;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140cf4574;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140cf4574:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140cf4521;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140cf4521;
    }
  }
  uVar6 = 0;
LAB_140cf4521:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf457c FUN_140cf457c body=585 status=ok
// SIG undefined FUN_140cf457c(void)

void FUN_140cf457c(longlong param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
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
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14011be0c(param_1 + 0x30);
  if (lVar4 == 0) {
LAB_140cf473a:
    plVar5 = (longlong *)FUN_148e1f0a6(param_1 + 0x30);
    if (plVar5 != (longlong *)0x0) {
      lVar4 = FUN_1402095ca();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) && (lVar4 = (**(code **)(*plVar5 + 0x5d8))(plVar5), lVar4 != 0)) {
        lVar6 = FUN_144a5dd5e();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) goto LAB_140cf45ea;
      }
    }
    lVar4 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140cf473a;
  }
LAB_140cf45ea:
  cVar2 = FUN_14011bf50(lVar4);
  if (cVar2 == '\0') {
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_1403adc5e(&local_38,lVar4);
  lVar4 = *(longlong *)(local_38 + 0x60);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
  *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (*(char *)(lVar4 + 0x20) == param_2) {
    if (*(int *)(lVar4 + 0x24) != 0) goto LAB_140cf464f;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x24) + 1;
  }
  *(char *)(lVar4 + 0x20) = param_2;
  *(int *)(lVar4 + 0x24) = iVar3;
LAB_140cf464f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 140cf47dc FUN_140cf47dc body=37 status=ok
// SIG undefined FUN_140cf47dc(void)

void FUN_140cf47dc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe0);
  FUN_140cf4802(param_2);
  return;
}



// FUNCTION 140cf4802 FUN_140cf4802 body=906 status=ok
// SIG undefined FUN_140cf4802(void)

undefined8 * FUN_140cf4802(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_14b7f2890;
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
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  iVar3 = DAT_14c844850;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (iVar1 < iVar3) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  param_1[0x13] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x14) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  param_1[0x15] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x16) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  param_1[0x17] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x18) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  param_1[0x19] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x1a) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 140cf4ba2 FUN_140cf4ba2 body=81 status=ok
// SIG undefined FUN_140cf4ba2(void)

void FUN_140cf4ba2(longlong *param_1)

{
  if ((char)param_1[0x126f] == '\0') {
    FUN_1400bc8c2(param_1 + 0x6d,&DAT_14cbc1db8);
    if (-1 < (char)param_1[0xc] == (bool)(char)param_1[0x6d]) {
                    /* WARNING: Could not recover jumptable at 0x000140cf4be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x608))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140cf4bf4 FUN_140cf4bf4 body=41 status=ok
// SIG undefined FUN_140cf4bf4(void)

void FUN_140cf4bf4(longlong param_1,undefined8 param_2)

{
  FUN_140cf4cae();
  FUN_140cf4c1e(param_1 + 0x1488,param_2);
  return;
}



// FUNCTION 140cf4c1e FUN_140cf4c1e body=142 status=ok
// SIG undefined FUN_140cf4c1e(void)

void FUN_140cf4c1e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_140789e1e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      local_20 = &local_28;
      FUN_1487c0578(param_1 + 0x30);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf4cae FUN_140cf4cae body=337 status=ok
// SIG undefined FUN_140cf4cae(void)

void FUN_140cf4cae(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cad00c8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1479b7a0c;
      local_50 = &LAB_1463b464e;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) == DAT_14cad00c8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
    uVar1 = FUN_140c83220();
    lVar2 = FUN_144718840(param_2,uVar1);
    if (lVar2 != 0) {
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



// FUNCTION 140cf4e28 FUN_140cf4e28 body=41 status=ok
// SIG undefined FUN_140cf4e28(void)

void FUN_140cf4e28(longlong param_1)

{
  FUN_140cf4e52();
  if (*(char *)(param_1 + 0xf69) == '\0') {
    return;
  }
  FUN_146075b90(param_1);
  return;
}



// FUNCTION 140cf4e52 FUN_140cf4e52 body=1379 status=ok
// SIG undefined FUN_140cf4e52(void)

void FUN_140cf4e52(longlong *param_1,char param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong unaff_RBP;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = param_1[0x36];
  if (lVar2 != 0) {
    FUN_140cf596e(param_1,1);
    if (((param_1[0x163] != 0) && (param_1[0x164] != 0)) && ((*(byte *)(param_1 + 0x7c) & 2) != 0))
    {
      *(undefined1 *)(param_1 + 0x19f) = 1;
      lVar3 = param_1[0xc];
      if ((char)lVar3 < '\0') {
        FUN_1405bab3a(param_1,0);
      }
      lVar6 = param_1[0x1a2];
      if ((longlong)(int)lVar6 != 0) {
        lVar10 = param_1[0x1a1];
        unaff_RBP = 0;
        do {
          lVar11 = *(longlong *)(lVar10 + unaff_RBP);
          pbVar1 = (byte *)(lVar11 + 0x78);
          *pbVar1 = *pbVar1 | 8;
          FUN_140cf5864(lVar11);
          FUN_140cf57c4();
          unaff_RBP = unaff_RBP + 8;
        } while ((longlong)(int)lVar6 * 8 != unaff_RBP);
        if (0 < (int)param_1[0x1a2]) {
          if (*(longlong *)(*(longlong *)param_1[0x1a1] + 0xc) == 0) {
            if (param_1[0x163] == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = (longlong *)param_1[0x164];
            }
            (**(code **)(*plVar8 + 0x28))
                      (plVar8,&local_68,*(undefined1 *)((longlong)param_1 + 0xd44));
            *(undefined8 *)(*(longlong *)param_1[0x1a1] + 0xc) = local_68;
          }
          if (((param_2 != '\0') && ((int)param_1[0x1a4] == 0)) &&
             (((char)param_1[0x2f] == '\x03' ||
              ((*(longlong **)(lVar2 + 0x3c0) != (longlong *)0x0 &&
               (cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x3c0) + 0x6c8))(), cVar4 != '\0'))))))
          {
            if (param_1[0x163] == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = (longlong *)param_1[0x164];
            }
            lVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,1);
            if (lVar6 != 0) {
              iVar9 = (int)param_1[0x1a2];
              if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar9);
              }
              local_78 = param_1 + 0x1a3;
              if (*(int *)((longlong)param_1 + 0xd24) < iVar9) {
                FUN_140c7335e();
                iVar9 = (int)param_1[0x1a2];
              }
              if (iVar9 != 0) {
                local_70 = param_1[0x1a1];
                unaff_RBP = (longlong)iVar9 * 8;
                lVar6 = 0;
                do {
                  uVar7 = FUN_1457981f6(param_1,*(undefined8 *)(local_70 + lVar6),
                                        (char)param_1[0x1a4]);
                  iVar9 = (int)param_1[0x1a4];
                  *(uint *)(param_1 + 0x1a4) = iVar9 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xd24) < iVar9 + 1U) {
                    FUN_140e4fdb0(local_78,iVar9);
                  }
                  *(undefined8 *)(*local_78 + (longlong)iVar9 * 8) = uVar7;
                  lVar6 = lVar6 + 8;
                } while (unaff_RBP != lVar6);
              }
              (**(code **)(*param_1 + 0x670))(param_1,4);
              lVar6 = param_1[0x1a4];
              if ((longlong)(int)lVar6 != 0) {
                lVar10 = param_1[0x1a3];
                lVar11 = 0;
                do {
                  (**(code **)(*param_1 + 0x8c8))(param_1,*(undefined8 *)(lVar10 + lVar11));
                  lVar11 = lVar11 + 8;
                } while ((longlong)(int)lVar6 * 8 != lVar11);
              }
            }
          }
        }
      }
      if (param_1[0x163] == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)param_1[0x164];
      }
      lVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,0);
      if (lVar6 != 0) {
        if (param_1[0x163] == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)param_1[0x164];
        }
        uVar12 = (**(code **)(*plVar8 + 0x30))(plVar8,*(undefined1 *)((longlong)param_1 + 0xd44),0);
        lVar10 = param_1[0x1a2];
        if ((longlong)(int)lVar10 != 0) {
          lVar11 = param_1[0x1a1];
          unaff_RBP = 0;
          do {
            FUN_140cf6364(*(undefined8 *)(lVar11 + unaff_RBP),lVar6,0,uVar12);
            unaff_RBP = unaff_RBP + 8;
          } while ((longlong)(int)lVar10 * 8 != unaff_RBP);
        }
      }
      if ((param_2 != '\0') && (lVar6 = param_1[0x1a4], 0 < (longlong)(int)lVar6)) {
        lVar10 = param_1[0x1a3];
        lVar11 = 0;
        do {
          FUN_140cf579c(*(undefined8 *)(lVar10 + lVar11),1);
          lVar11 = lVar11 + 8;
        } while ((longlong)(int)lVar6 * 8 != lVar11);
        if (param_1[0x163] == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)param_1[0x164];
        }
        lVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,1);
        if (lVar6 != 0) {
          if ((char)param_1[0x2f] == '\x03') {
            uVar5 = 0;
          }
          else if (*(longlong **)(lVar2 + 0x3c0) == (longlong *)0x0) {
            uVar5 = (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
          }
          else {
            uVar5 = (**(code **)(**(longlong **)(lVar2 + 0x3c0) + 0x6c8))();
            uVar5 = uVar5 ^ 1;
          }
          if (param_1[0x163] == 0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            plVar8 = (longlong *)param_1[0x164];
          }
          uVar12 = (**(code **)(*plVar8 + 0x30))
                             (plVar8,*(undefined1 *)((longlong)param_1 + 0xd44),1);
          lVar2 = param_1[0x1a4];
          if ((longlong)(int)lVar2 != 0) {
            lVar10 = param_1[0x1a3];
            lVar11 = 0;
            do {
              FUN_140cf6364(*(undefined8 *)(lVar10 + lVar11),lVar6,uVar5,uVar12);
              lVar11 = lVar11 + 8;
            } while ((longlong)(int)lVar2 * 8 != lVar11);
          }
        }
      }
      lVar2 = param_1[0x17e];
      if ((longlong)(int)lVar2 != 0) {
        lVar6 = param_1[0x17d];
        lVar10 = 0;
        do {
          plVar8 = *(longlong **)(lVar6 + 8 + lVar10);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x388))();
          }
          lVar10 = lVar10 + 0x88;
        } while ((longlong)(int)lVar2 * 0x88 != lVar10);
      }
      if ((char)lVar3 < '\0') {
        FUN_1405bab3a(param_1,1);
      }
      lVar2 = param_1[0x1a2];
      if ((longlong)(int)lVar2 != 0) {
        lVar3 = param_1[0x1a1];
        lVar6 = 0;
        do {
          FUN_140cf53b6(*(undefined8 *)(lVar3 + lVar6),1);
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)lVar2 * 8 != lVar6);
      }
      if ((param_2 != '\0') && (lVar2 = param_1[0x1a4], (longlong)(int)lVar2 != 0)) {
        lVar3 = param_1[0x1a3];
        lVar6 = 0;
        do {
          FUN_140cf53b6(*(undefined8 *)(lVar3 + lVar6),1);
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)lVar2 * 8 != lVar6);
      }
      plVar8 = (longlong *)param_1[0x120];
      if (plVar8 != (longlong *)0x0) {
        if (*(char *)((longlong)plVar8 + 0x3c) == '\0') {
          *(undefined1 *)((longlong)plVar8 + 0x3c) = 1;
          (**(code **)(*plVar8 + 0x10))();
          plVar8 = (longlong *)param_1[0x120];
        }
        (**(code **)(*plVar8 + 0xa0))();
      }
      FUN_1447cd2ec(param_1 + 0x131,0);
      uVar12 = (**(code **)(*param_1 + 0x968))(param_1);
      (**(code **)(*param_1 + 0x400))(param_1,uVar12);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf53b6 FUN_140cf53b6 body=366 status=ok
// SIG undefined FUN_140cf53b6(void)

void FUN_140cf53b6(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(byte *)(param_1 + 0x78) & 1) == 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x48), plVar2 != (longlong *)0x0)) {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      plVar2 = *(longlong **)(param_1 + 0x48);
      if (plVar2 == (longlong *)0x0) goto LAB_140cf5512;
    }
    if ((((DAT_14cad2858 != 0) && (lVar1 = plVar2[2], lVar1 != 0)) &&
        (*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
         == DAT_14cad2858 + 0x30 &&
        ((**(code **)(*plVar2 + 0xc68))(plVar2,param_2), (*(byte *)(param_1 + 0x78) & 1) == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
LAB_140cf5512:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf579c FUN_140cf579c body=39 status=ok
// SIG undefined FUN_140cf579c(void)

void FUN_140cf579c(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf7 | param_2 << 3;
  FUN_140cf5864();
  FUN_140cf57c4(param_1);
  return;
}



// FUNCTION 140cf57c4 FUN_140cf57c4 body=159 status=ok
// SIG undefined FUN_140cf57c4(void)

void FUN_140cf57c4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar4 = '\x01';
  if ((~*(byte *)(param_1 + 0x78) & 0x48) == 0) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0xe8 + lVar6);
      if (lVar3 != 0) {
        if ((cVar4 == '\0') &&
           (((*(byte *)(lVar2 + 0x10 + lVar6) & 8) == 0 || ((*(byte *)(param_1 + 0x78) & 0x20) == 0)
            ))) {
          if ((*(byte *)(lVar3 + 0x1f9) & 8) != 0) {
            uVar5 = 0;
            goto LAB_140cf5845;
          }
        }
        else {
          uVar5 = 1;
          if ((*(byte *)(lVar3 + 0x1f9) & 8) == 0) {
LAB_140cf5845:
            FUN_1449e3cec(lVar3,uVar5,1);
          }
        }
      }
      lVar6 = lVar6 + 0xf0;
    } while ((longlong)iVar1 * 0xf0 - lVar6 != 0);
  }
  return;
}



// FUNCTION 140cf5864 FUN_140cf5864 body=206 status=ok
// SIG undefined FUN_140cf5864(void)

void FUN_140cf5864(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((*(byte *)(param_1 + 0x78) & 0x28) == 8) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    uVar5 = (ulonglong)uVar3;
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if ((lVar4 != 0) && ((*(byte *)(param_1 + 0x78) & 1) == 0)) {
    if (((*(byte *)(param_1 + 0x78) & 0x10) == 0) && (*(char *)(param_1 + 8) != '\0')) {
      if ((char)uVar5 == '\0') {
        FUN_1449e3cec(lVar4,0,1);
        lVar4 = *(longlong *)(param_1 + 0x48);
      }
      FUN_140cf5932(lVar4,uVar5 & 0xffffffff);
    }
    else {
      FUN_1449e3cec(lVar4,uVar5 & 0xffffffff,1);
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar6);
        if (lVar2 != 0) {
          if (*(char *)(param_1 + 8) == '\x01') {
            if ((char)uVar5 == '\0') {
              FUN_1449e3cec(lVar2,0,1);
            }
            FUN_140cf5932(lVar2);
          }
          else {
            FUN_1449e3cec(lVar2,uVar5 & 0xffffffff,1);
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 140cf5932 FUN_140cf5932 body=59 status=ok
// SIG undefined FUN_140cf5932(void)

void FUN_140cf5932(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x1f9) & 8) == 0) &&
     (((*(byte *)(param_1 + 0x2a0) & 2) == 0) == (bool)param_2)) {
    *(byte *)(param_1 + 0x2a0) = *(byte *)(param_1 + 0x2a0) & 0xfd | param_2 * '\x02';
    if (*(longlong *)(param_1 + 0x3b8) != 0) {
      FUN_140cf5e9c();
      return;
    }
  }
  return;
}



// FUNCTION 140cf596e FUN_140cf596e body=1007 status=ok
// SIG undefined FUN_140cf596e(void)

void FUN_140cf596e(longlong param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  longlong *local_78;
  int local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0x178) != '\x03') &&
     ((*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0 ||
      (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x700))(), cVar6 == '\0'))))
  goto LAB_140cf5be4;
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  if (lVar3 == 0) {
    if (param_2 == '\0') goto LAB_140cf5cc8;
    goto LAB_140cf5be4;
  }
  piVar1 = (int *)(lVar3 + 0x70);
  iVar7 = *(int *)(lVar3 + 0x70);
  if (iVar7 == 0) {
    FUN_1402a453c(piVar1);
    iVar7 = *piVar1;
  }
  FUN_140457ffc(DAT_14c9a3d60 + (longlong)iVar7 * 0x88 + -0x18,param_1);
  if (param_2 == '\0') {
LAB_140cf5cc8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
  }
  iVar7 = *piVar1;
  if (iVar7 == 0) {
    FUN_1402a453c(piVar1);
    iVar7 = *piVar1;
  }
  lVar4 = DAT_14c9a3d60;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,3,0x10);
  plVar11 = local_78;
  local_70 = 3;
  *local_78 = (longlong)&PTR_LAB_14a1c8700;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  local_78[2] = lVar9;
  *local_78 = (longlong)&PTR_FUN_14b4ab9f0;
  local_78[3] = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_78 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar8 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar8 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar8 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar10;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar8 = iVar10;
      }
    }
  }
  *(int *)((longlong)plVar11 + 0x1c) = iVar8;
  plVar11[4] = (longlong)&LAB_140f7f068;
  *(undefined4 *)(plVar11 + 5) = 0;
  if (((local_70 == 0) || (local_78 == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*local_78 + 0x30))(), cVar6 == '\0')) {
    if (local_70 == 0) goto LAB_140cf5bae;
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      goto LAB_140cf5ba1;
    }
  }
  else {
    lVar12 = lVar4 + (longlong)iVar7 * 0x88;
    plVar11 = (longlong *)(lVar4 + (longlong)iVar7 * 0x88 + -0x18);
    if (*(int *)(lVar12 + -4) < 1) {
      iVar7 = *(int *)(lVar12 + -0x10);
      iVar8 = *(int *)(lVar12 + -8) + -1;
      *(int *)(lVar12 + -8) = iVar8;
      if (iVar8 <= iVar7) {
        iVar8 = iVar7;
        if (0 < iVar7) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar11 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar5 = *(longlong **)(*plVar11 + (longlong)iVar10 * 0x10),
                plVar5 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar5 + 0x28))(), cVar6 != '\0')) {
              FUN_14005b288(plVar11,iVar10);
              FUN_14005b248(plVar11);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar8 = *(int *)(lVar12 + -0x10);
          } while (iVar10 < iVar8);
        }
        iVar10 = 2;
        if (2 < iVar8 * 2) {
          iVar10 = iVar8 * 2;
        }
        *(int *)(lVar12 + -8) = iVar10;
        if ((iVar10 < iVar7) && (*(int *)(lVar12 + -0xc) != iVar8)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x38))(local_78,local_68);
    }
    iVar7 = *(int *)(lVar12 + -0x10);
    *(uint *)(lVar12 + -0x10) = iVar7 + 1U;
    if (*(uint *)(lVar12 + -0xc) < iVar7 + 1U) {
      FUN_1447a71f6(plVar11,iVar7);
    }
    lVar4 = *plVar11;
    lVar12 = (longlong)iVar7 * 0x10;
    *(undefined8 *)(lVar4 + lVar12) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar12) = 0;
    *(longlong **)(lVar4 + lVar12) = local_78;
    local_78 = (longlong *)0x0;
    *(int *)(lVar4 + 8 + lVar12) = local_70;
LAB_140cf5ba1:
    local_70 = 0;
LAB_140cf5bae:
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140cf5d7e(param_1,*(undefined4 *)(lVar3 + 0x74));
LAB_140cf5be4:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf5d7e FUN_140cf5d7e body=208 status=ok
// SIG undefined FUN_140cf5d7e(void)

void FUN_140cf5d7e(longlong param_1,float param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((*(float *)(param_1 + 0x78) != param_2) || (NAN(*(float *)(param_1 + 0x78)) || NAN(param_2)))
  {
    *(float *)(param_1 + 0x78) = param_2;
    FUN_14020a6cc(param_1 + 0x70,1);
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140cf5e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,5);
      return;
    }
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x20;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 140cf5e9c FUN_140cf5e9c body=1223 status=ok
// SIG undefined FUN_140cf5e9c(void)

void FUN_140cf5e9c(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  char local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_140cf5edc;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_140cf5ee1;
      goto LAB_140cf5f0e;
    }
  }
  else {
LAB_140cf5edc:
    if (iVar7 != 0x10) {
LAB_140cf5f0e:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_140cf5ee1;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_140cf5ee1;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_140cf6069;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14365fa42);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_140cf6069:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x17);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_140cf60e9;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_140cf60e9:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aa59e18;
        puVar17[0x15] = param_1;
        *(char *)(puVar17 + 0x16) = param_2;
        uVar5 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar17 + 0xb1) = uVar5;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = local_68._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_69 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_69 = 1;
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa59dd0;
        local_68 = &LAB_143661fc8;
        local_40 = param_1;
        local_38 = param_2;
        FUN_14005a792(&DAT_14ca9a440,L"GbxSetForceHidden",&DAT_14cafe1c4);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_140cf5fa8;
    }
  }
LAB_140cf5ee1:
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xef | param_2 << 4;
LAB_140cf5fa8:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cf6364 FUN_140cf6364 body=3327 status=ok
// SIG undefined FUN_140cf6364(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cf6364(longlong param_1,longlong *param_2,undefined1 param_3,float param_4)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  undefined *puVar16;
  uint *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  code **ppcVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  code *pcVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined8 local_210;
  wchar_t *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  code **local_1f0;
  code *local_1e8;
  code *local_1e0;
  longlong local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  uint local_19c;
  code *local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  code **local_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_2 == (longlong *)0x0) goto LAB_140cf6b5a;
  *(undefined1 *)(param_1 + 9) = param_3;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfb;
  plVar19 = (longlong *)param_2[0x15];
  if (plVar19 != (longlong *)0x0) {
    if (DAT_14caf64b8 == 0) {
      local_1f0 = &local_198;
      local_198 = FUN_141030f22;
      local_1e0 = FUN_14081d0ea;
      local_1e8 = FUN_142b4754c;
      local_1f8 = &LAB_147c45ce0;
      local_200 = &LAB_1463f1ff4;
      local_208 = L"Game";
      local_210 = 0x4000000000;
      local_218 = 0x10000004;
      local_220 = 8;
      local_228 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
        DAT_14caf64b8 + 0x30)) {
      pcVar26 = *(code **)(*plVar19 + 0x5e8);
      if (pcVar26 == FUN_140972dde) {
        if (plVar19[0x76] == 0) {
          pcVar26 = *(code **)(*plVar19 + 0x5f8);
          if (pcVar26 == FUN_144784df4) {
            if (*(code **)(plVar19[0x784] + 0x18) == (code *)&LAB_144904684) {
              if ((((*(int *)((longlong)plVar19 + 0x75b4) == 0) ||
                   (uVar15 = *(uint *)(plVar19 + 0xeb6), (int)uVar15 < 0)) ||
                  (DAT_14c9647dc <= (int)uVar15)) ||
                 (((plVar18 = (longlong *)
                              ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                   plVar18 == (longlong *)0x0 ||
                   ((int)plVar18[2] != *(int *)((longlong)plVar19 + 0x75b4))) ||
                  ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_140cf64fd;
              if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
                lVar12 = *plVar18;
              }
              else {
                lVar12 = 0;
              }
              lVar12 = lVar12 + 0x110;
            }
            else {
              lVar12 = (**(code **)(plVar19[0x784] + 0x18))(plVar19 + 0x784);
            }
            if (lVar12 == 0) goto LAB_140cf64fd;
            lVar12 = *(longlong *)(lVar12 + 0x20);
          }
          else {
            lVar12 = (*pcVar26)(plVar19);
          }
          if (lVar12 == 0) goto LAB_140cf64fd;
          lVar12 = *(longlong *)(lVar12 + 0x3b0);
          goto LAB_140cf64f4;
        }
      }
      else {
        lVar12 = (*pcVar26)(plVar19);
LAB_140cf64f4:
        if (lVar12 == 0) goto LAB_140cf64fd;
      }
      *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 4;
    }
  }
LAB_140cf64fd:
  if (DAT_14cac6e60 == 0) {
    local_1f0 = &local_198;
    local_198 = FUN_144a7958c;
    local_1e0 = FUN_14081d0ea;
    local_1e8 = FUN_142b47bc4;
    local_1f8 = &LAB_1478989f1;
    local_200 = &LAB_146391124;
    local_208 = L"Engine";
    local_210 = 0x10000000000;
    local_218 = 0x10000005;
    local_220 = 0x10;
    local_228 = 0x620;
    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
  }
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
     (plVar19 = param_2,
     *(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
     != DAT_14cac6e60 + 0x30)) {
    plVar19 = (longlong *)0x0;
  }
  if ((*(byte *)(param_1 + 0x78) & 1) == 0 && *(longlong *)(param_1 + 0x48) != 0) {
    cVar9 = (**(code **)(*param_2 + 0x4c8))(param_2,*(undefined8 *)(param_1 + 0xc));
    if ((cVar9 == '\0') && (plVar18 = (longlong *)param_2[0x15], plVar18 != (longlong *)0x0)) {
      lVar12 = *(longlong *)(param_1 + 0xc);
      if (lVar12 != 0) {
        local_d8 = (code **)0x0;
        local_d0 = 0x1800000000;
        FUN_140a44582(plVar18,&local_198,0);
        ppcVar20 = &local_198;
        if (local_d8 != (code **)0x0) {
          ppcVar20 = local_d8;
        }
        if ((longlong)(int)local_d0 != 0) {
          local_1d8 = (longlong)(int)local_d0 << 3;
          lVar21 = 0;
          do {
            plVar14 = *(longlong **)((longlong)ppcVar20 + lVar21);
            if ((plVar14 != (longlong *)0x0) &&
               (cVar9 = (**(code **)(*plVar14 + 0x4c8))(plVar14,lVar12), cVar9 != '\0')) {
              if (local_d8 != (code **)0x0) {
                FUN_1400020a8();
              }
              goto LAB_140cf6596;
            }
            lVar21 = lVar21 + 8;
          } while (local_1d8 != lVar21);
        }
        if (local_d8 != (code **)0x0) {
          FUN_1400020a8();
        }
      }
      if (*(code **)(*plVar18 + 0x3a8) == (code *)&LAB_144a8179a) {
        plVar14 = (longlong *)plVar18[0x39];
      }
      else {
        plVar14 = (longlong *)(**(code **)(*plVar18 + 0x3a8))(plVar18);
      }
LAB_140cf6596:
      if (plVar14 != (longlong *)0x0) {
        param_2 = plVar14;
      }
    }
    lVar12 = *(longlong *)(param_1 + 0xc);
    if ((((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x62) & 4) == 0) &&
        (*(char *)(param_1 + 8) == '\0')) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x65) & 1) != 0)) {
      iVar11 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x570))();
      local_19c = 0x202;
      if ((plVar19 != (longlong *)0x0) && (iVar11 != 0)) {
        if (DAT_14cb63950 == 0) {
          local_1f0 = &local_198;
          local_198 = FUN_144a7958c;
          local_1e0 = FUN_14081d0ea;
          local_1e8 = (code *)&LAB_1464ec72a;
          local_1f8 = &LAB_1486f5f75;
          local_200 = &LAB_140945686;
          local_208 = L"Engine";
          local_210 = 0;
          local_218 = 0x10000004;
          local_220 = 0x10;
          local_228 = 0x19d0;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee)
          ;
        }
        if (((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
             DAT_14cb63950 + 0x30)) &&
           (plVar18 = *(longlong **)(param_1 + 0x48), plVar18 != (longlong *)0x0)) {
          if (DAT_14cad2858 == 0) {
            local_1f0 = &local_198;
            local_198 = FUN_144a7958c;
            local_1e0 = FUN_14081d0ea;
            local_1e8 = (code *)&LAB_146395584;
            local_1f8 = &LAB_147a0ba80;
            local_200 = &LAB_14575ccce;
            local_208 = L"Engine";
            local_210 = 0x40000000000;
            local_218 = 0x10000004;
            local_220 = 0x10;
            local_228 = 0x1180;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
            plVar18 = *(longlong **)(param_1 + 0x48);
            if (plVar18 == (longlong *)0x0) goto LAB_140cf65c6;
          }
          if ((((DAT_14cad2858 != 0) && (lVar21 = plVar18[2], lVar21 != 0)) &&
              (*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar21 + 0x38))) &&
             (*(longlong *)
               (*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
              DAT_14cad2858 + 0x30)) {
            local_198 = (code *)0x0;
            dStack_190 = 0.0;
            lVar21 = (**(code **)(*plVar18 + 0xb98))();
            dStack_190 = (double)CONCAT44(dStack_190._4_4_,1);
            FUN_145a46462(&local_198,0);
            pcVar26 = local_198;
            *(longlong *)local_198 = lVar21;
            if ((lVar21 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar21);
            }
            *(longlong *)(pcVar26 + 8) = lVar12;
            FUN_145a46298(plVar19,&local_198);
            if (local_198 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
    else {
      local_19c = 0x202;
    }
LAB_140cf65c6:
    plVar18 = *(longlong **)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x14) != 0) {
      cVar9 = (**(code **)(*plVar18 + 0x4c8))();
      plVar18 = *(longlong **)(param_1 + 0x48);
      if (cVar9 != '\0') {
        local_19c = local_19c & 0xffff0000;
        uVar10 = (**(code **)(*plVar18 + 0x4a8))
                           (plVar18,&local_198,*(undefined8 *)(param_1 + 0x14),2);
        lVar21 = -(ulonglong)(9.99999993922529e-09 < ABS(local_158._8_8_));
        auVar23._8_4_ = (int)lVar21;
        auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_158._0_8_));
        auVar23._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
        iVar11 = movmskpd(uVar10,auVar23);
        lVar21 = -(ulonglong)(9.99999993922529e-09 < ABS(local_148._8_8_));
        auVar27._8_4_ = (int)lVar21;
        auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_148._0_8_));
        auVar27._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
        uVar15 = movmskpd((int)plVar18,auVar27);
        dVar4 = DAT_14c846490;
        dVar5 = DAT_14c846498;
        dVar7 = DAT_14c8464a0;
        dVar8 = DAT_14c8464a8;
        dVar22 = DAT_14c8464b0;
        pcVar26 = DAT_14c846480;
        dVar28 = DAT_14c846488;
        if ((uVar15 & 0x3fffffff) != 0 || iVar11 != 0) {
          auVar27 = divpd(_DAT_149934d80,local_158);
          auVar23 = divpd(ZEXT816(0x3ff0000000000000),local_148);
          dVar4 = (double)local_188._0_8_ * -1.0;
          dVar5 = (double)local_188._8_8_ * 1.0;
          local_178 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_158._0_8_)) &
                              auVar27._0_8_) * local_178;
          dStack_170 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_158._8_8_)) &
                               auVar27._8_8_) * dStack_170;
          local_168 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_148._0_8_)) &
                              auVar23._0_8_) * local_168;
          pcVar26 = (code *)-(double)local_198;
          dVar28 = -dStack_190;
          dVar22 = dStack_170 * (double)pcVar26 - dVar28 * local_178;
          dVar24 = local_168 * dVar28 - dVar4 * dStack_170;
          dVar25 = local_178 * dVar4 - (double)pcVar26 * local_168;
          dVar24 = dVar24 + dVar24;
          dVar25 = dVar25 + dVar25;
          dVar22 = dVar22 + dVar22;
          dVar7 = 0.0 - ((dVar22 * dVar28 - dVar25 * dVar4) + dVar5 * dVar24 + local_178);
          dVar8 = 0.0 - (dVar22 * (double)local_198 + dVar4 * dVar24 + dVar5 * dVar25 + dStack_170);
          dVar22 = 0.0 - (dVar5 * dVar22 + local_168 + (dVar25 * (double)pcVar26 - dVar24 * dVar28))
          ;
        }
        dVar25 = (double)(*(float *)(param_1 + 0x60) * param_4);
        lVar21 = *(longlong *)(param_1 + 0x48);
        uVar3 = *(ulonglong *)(lVar21 + 0x38);
        if (uVar3 < 0xffffffff00000000) {
          plVar18 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar18 = (longlong *)0x0;
          }
          (**(code **)(*plVar18 + 0x58))(plVar18,lVar21,uVar3,5);
        }
        else {
          uVar15 = (uint)uVar3;
          if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c998088)) {
            puVar16 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar16 = DAT_14c998080;
            }
            if ((*(uint *)(puVar16 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar15 & 0x1f) & 1) != 0)
            {
              lVar13 = DAT_14c998060 + (ulonglong)(uVar15 & 0x7fffffff) * 0x68;
              puVar17 = *(uint **)(lVar13 + 0x18);
              if (*(uint **)(lVar13 + 0x18) == (uint *)0x0) {
                puVar17 = (uint *)(lVar13 + 8);
              }
              *puVar17 = *puVar17 | 0x20;
              *(byte *)(lVar13 + 0x60) = *(byte *)(lVar13 + 0x60) | 1;
            }
          }
        }
        auVar6._8_4_ = SUB84(dVar25 * dVar8,0);
        auVar6._0_8_ = dVar25 * dVar7;
        auVar6._12_4_ = (int)((ulonglong)(dVar25 * dVar8) >> 0x20);
        *(undefined1 (*) [16])(lVar21 + 0x198) = auVar6;
        *(double *)(lVar21 + 0x1a8) = dVar22 * dVar25;
        lVar21 = *(longlong *)(param_1 + 0x48);
        local_188._8_4_ = SUB84(dVar5,0);
        local_188._0_8_ = dVar4;
        local_188._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        local_198 = pcVar26;
        dStack_190 = dVar28;
        FUN_1448052ee(&local_198,&local_1b8);
        uVar3 = *(ulonglong *)(lVar21 + 0x38);
        if (uVar3 < 0xffffffff00000000) {
          plVar18 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar18 = (longlong *)0x0;
          }
          (**(code **)(*plVar18 + 0x58))(plVar18,lVar21,uVar3,6);
        }
        else {
          uVar15 = (uint)uVar3;
          if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c998088)) {
            puVar16 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar16 = DAT_14c998080;
            }
            if ((*(uint *)(puVar16 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar15 & 0x1f) & 1) != 0)
            {
              lVar13 = DAT_14c998060 + (ulonglong)(uVar15 & 0x7fffffff) * 0x68;
              puVar17 = *(uint **)(lVar13 + 0x18);
              if (*(uint **)(lVar13 + 0x18) == (uint *)0x0) {
                puVar17 = (uint *)(lVar13 + 8);
              }
              *puVar17 = *puVar17 | 0x40;
              *(byte *)(lVar13 + 0x60) = *(byte *)(lVar13 + 0x60) | 1;
            }
          }
        }
        *(undefined8 *)(lVar21 + 0x1c0) = local_1a8;
        *(undefined8 *)(lVar21 + 0x1b0) = local_1b8;
        *(undefined8 *)(lVar21 + 0x1b8) = uStack_1b0;
        plVar18 = *(longlong **)(param_1 + 0x48);
      }
    }
    local_1d0 = (double)(param_4 * *(float *)(param_1 + 0x60));
    local_1c8 = local_1d0;
    local_1c0 = local_1d0;
    FUN_14084f00a(plVar18);
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x490))
              (*(longlong **)(param_1 + 0x48),param_2,&local_19c,lVar12);
    if (*(char *)(param_1 + 8) == '\x01') {
      FUN_1401c4d5c(*(longlong *)(param_1 + 0x48) + 0x40,param_2,param_2 + 8);
      FUN_14082bc44(param_2 + 8,*(longlong *)(param_1 + 0x48),*(longlong *)(param_1 + 0x48) + 0x40);
    }
    FUN_140c05210(param_1,*(undefined8 *)(param_1 + 0x48),plVar19);
    iVar11 = *(int *)(param_1 + 0x58);
    if ((longlong)iVar11 != 0) {
      lVar12 = *(longlong *)(param_1 + 0x50);
      lVar21 = 0;
      do {
        FUN_140c05210(param_1,*(undefined8 *)(lVar12 + lVar21),plVar19);
        lVar21 = lVar21 + 8;
      } while ((longlong)iVar11 * 8 != lVar21);
    }
  }
  else {
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 1;
    lVar12 = FUN_14081cebe();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar12 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
        lVar12 + 0x30)) {
      param_2 = (longlong *)0x0;
    }
    else if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong **)(param_1 + 0x48) = param_2;
  }
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 0x82;
  FUN_1409d56ca(param_1);
  if ((*(char *)(param_1 + 9) == '\0') && (iVar11 = *(int *)(param_1 + 0x98), (longlong)iVar11 != 0)
     ) {
    lVar12 = *(longlong *)(param_1 + 0x90);
    lVar21 = 0;
    do {
      bVar2 = *(byte *)(lVar12 + 0x15 + lVar21);
      *(byte *)(lVar12 + 0x15 + lVar21) = bVar2 & 0xfe;
      if ((((*(byte *)(param_1 + 0x78) & 2) != 0) && ((*(byte *)(param_1 + 0x78) & 4) == 0)) &&
         ((*(uint *)(lVar12 + 0x10 + lVar21) & 0x20) != 0)) {
        *(byte *)(lVar12 + 0x15 + lVar21) = bVar2 | 1;
      }
      lVar21 = lVar21 + 0xf0;
    } while ((longlong)iVar11 * 0xf0 - lVar21 != 0);
  }
  FUN_14168cd3e(param_1);
  iVar11 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar11 != 0) {
    lVar12 = *(longlong *)(param_1 + 0xa0);
    lVar21 = 0;
    do {
      pbVar1 = (byte *)(*(longlong *)(lVar12 + lVar21) + 0x20);
      *pbVar1 = *pbVar1 | 8;
      lVar21 = lVar21 + 8;
    } while ((longlong)iVar11 * 8 != lVar21);
    *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 2;
  }
LAB_140cf6b5a:
  if ((local_c0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf7064 FUN_140cf7064 body=117 status=ok
// SIG undefined FUN_140cf7064(void)

void FUN_140cf7064(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140cf70da(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_147a4fb6c(param_1,param_2,iVar1 - param_2);
  FUN_147a4fbc6(param_1);
  return;
}



// FUNCTION 140cf70da FUN_140cf70da body=269 status=ok
// SIG undefined FUN_140cf70da(void)

void FUN_140cf70da(longlong param_1,int param_2)

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



// FUNCTION 140cf71e8 FUN_140cf71e8 body=1374 status=ok
// SIG undefined FUN_140cf71e8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cf71e8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  size_t _Size;
  undefined8 *_Dst;
  undefined *puVar10;
  bool bVar11;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                  FUN_140b31576);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,0);
    }
  }
  puVar9 = &local_48;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
LAB_140cf76dd:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    puVar10 = *(undefined **)(lVar4 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                    FUN_140b31576);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar11 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c951a90 && bVar11) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar11 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c951a90) break;
        } while (puVar10 != (undefined *)0x0);
      }
      if (!bVar11) goto LAB_140cf76dd;
    }
    else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c951a98) == 0) goto LAB_140cf76dd;
    plVar5 = *(longlong **)(lVar4 + 0x78);
    _Size = (longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34);
    if ((int)_Size == 0) {
      _Dst = (undefined8 *)0x0;
      puVar9 = &local_48;
    }
    else {
      lVar6 = -(_Size + 0x1e & 0xfffffffffffffff0);
      _Dst = (undefined8 *)((longlong)&local_48 + lVar6);
      puVar9 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    if ((*(byte *)((longlong)plVar5 + 0x39) & 2) == 0) {
      pcVar3 = *(code **)(*plVar5 + 0x160);
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf7704;
      (*pcVar3)(plVar5,_Dst);
    }
    else {
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf734b;
      memset(_Dst,0,_Size);
    }
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951a88) {
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf75fe;
      FUN_144b3d300(&DAT_14c951a88);
      if (DAT_14c951a88 == -1) {
        *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf7618;
        uVar8 = FUN_140342cba();
        *(code **)((longlong)puVar9 + -8) = FUN_1468c7f1e;
        *(undefined8 *)((longlong)puVar9 + -0x10) = uVar8;
        *(undefined8 *)((longlong)puVar9 + -0x18) = 0;
        *(undefined8 *)((longlong)puVar9 + -0x20) = 0x8001;
        *(undefined8 *)((longlong)puVar9 + -0x48) = 0x140cf765b;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf766b;
        atexit(FUN_14280c819);
        *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf7677;
        _Init_thread_footer(&DAT_14c951a88);
      }
    }
    pbVar1 = *(byte **)(param_2 + 0x20);
    if (pbVar1 == (byte *)0x0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf772a;
      FUN_144a5ded6(param_2,_Dst);
    }
    else {
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      *(byte **)(param_2 + 0x20) = pbVar1 + 1;
      pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
      if (pcVar3 == FUN_14002ddda) {
        *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf73ed;
        FUN_14002ddda(uVar8,param_2,_Dst);
      }
      else if (pcVar3 == FUN_14002dfbe) {
        *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf7484;
        FUN_14002dfbe(uVar8,param_2,_Dst);
      }
      else if (pcVar3 == (code *)&LAB_1428293cc) {
        uVar8 = *(undefined8 *)(pbVar1 + 1);
        *(byte **)(param_2 + 0x20) = pbVar1 + 9;
        *_Dst = uVar8;
      }
      else {
        *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf73dc;
        (*pcVar3)(uVar8,param_2,_Dst);
      }
    }
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf7410;
    FUN_140cf7806(plVar5,_Dst);
    *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf741e;
    iVar7 = FUN_140cf774c(uVar2,lVar4,_Dst);
    *(bool *)param_3 = -1 < iVar7;
    if ((*(byte *)((longlong)plVar5 + 0x3c) & 0x10) == 0) {
      pcVar3 = *(code **)(*plVar5 + 0x148);
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140cf7742;
      (*pcVar3)(plVar5,_Dst);
    }
  }
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar9 + -0x28) = &UNK_140cf745c;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cf774c FUN_140cf774c body=185 status=ok
// SIG undefined FUN_140cf774c(void)

int FUN_140cf774c(ulonglong *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  iVar5 = -1;
  if (param_1 != (ulonglong *)0x0) {
    bVar1 = *(byte *)(param_2 + 0x70);
    (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
    if (0 < (int)param_1[1]) {
      plVar2 = *(longlong **)(param_2 + 0x78);
      iVar5 = *(int *)((longlong)plVar2 + 0x34);
      iVar9 = -1;
      lVar7 = 0;
      lVar8 = 1;
      do {
        if ((bVar1 & 1) == 0) {
          uVar6 = *param_1;
        }
        else {
          uVar6 = *param_1;
          if ((uVar6 & 1) != 0) {
            uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)param_1;
          }
        }
        cVar4 = (**(code **)(*plVar2 + 200))(plVar2,param_3,uVar6 + lVar7,0);
        iVar9 = iVar9 + 1;
        if (cVar4 != '\0') break;
        lVar7 = lVar7 + iVar5;
        bVar3 = lVar8 < (int)param_1[1];
        lVar8 = lVar8 + 1;
      } while (bVar3);
      iVar5 = -1;
      if (cVar4 != '\0') {
        iVar5 = iVar9;
      }
    }
  }
  return iVar5;
}



// FUNCTION 140cf7806 FUN_140cf7806 body=302 status=ok
// SIG undefined FUN_140cf7806(void)

void FUN_140cf7806(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  byte bVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      uVar1 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,uVar1,FUN_14067a048);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar4 = puVar2 != (undefined8 *)0x0;
      if (puVar2 != &DAT_14c951cd0 && bVar4) {
        do {
          puVar2 = (undefined8 *)puVar2[6];
          bVar4 = puVar2 != (undefined8 *)0x0;
          if (puVar2 == &DAT_14c951cd0) break;
        } while (puVar2 != (undefined8 *)0x0);
      }
      if (!bVar4) {
        return;
      }
    }
    else if ((puVar2[3] & DAT_14c951cd8) == 0) {
      return;
    }
    if (*param_2 == '\0') {
      bVar3 = 0;
    }
    else {
      bVar3 = *(byte *)(param_1 + 0x72);
    }
    param_2[*(byte *)(param_1 + 0x71)] =
         param_2[*(byte *)(param_1 + 0x71)] & ~*(byte *)(param_1 + 0x73) | bVar3;
  }
  return;
}



// FUNCTION 140cf7934 FUN_140cf7934 body=1749 status=ok
// SIG undefined FUN_140cf7934(void)

void FUN_140cf7934(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 unaff_RBP;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x9a28) = 0;
  *(undefined1 *)(param_1 + 0x3ebc) = 0;
  FUN_140cf8304(param_1 + 0x6718,param_1);
  FUN_140790e84(param_1 + 0x9050);
  FUN_1409998f6(param_1 + 0x99d0,0);
  *(undefined8 *)(param_1 + 0x99c8) = 0;
  *(undefined1 *)(param_1 + 0x9a00) = 0;
  FUN_140457ffc(param_1 + 0x42b8,param_1);
  if (((*(byte *)(param_1 + 0x73e8) & 1) != 0) && ((&DAT_000073ed)[param_1] == '\x01')) {
    FUN_1459baa40(param_1 + 0x71a8,0);
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_1401073f6(param_1 + 0x6140,param_1);
    FUN_140cfc92a(param_1 + 0x4f48);
    FUN_140cfaa8a(param_1 + 0x70d0);
    FUN_140457ffc(param_1 + 0x4af0,param_1);
    FUN_140457ffc(param_1 + 0x4ad8,param_1);
    FUN_140457ffc(param_1 + 0x4220,param_1);
    FUN_140457ffc(param_1 + 0x4280,param_1);
    FUN_140d916fa(param_1 + 0x4780,param_1 + 0x9b10);
    if (*(longlong *)(param_1 + 0x3f70) != 0) {
      uStack_48 = 0;
      uStack_44 = 0;
      local_58 = 0;
      local_50 = 0;
      uStack_4c = 0;
      local_3c = CONCAT31(local_3c._1_3_,0xff);
      if (0 < *(int *)(param_1 + 0x47c0)) {
        lVar4 = *(longlong *)(param_1 + 0x47b8);
        uVar10 = *(uint *)(lVar4 + 0x30);
        local_58 = *(undefined8 *)(lVar4 + 0x30);
        local_50 = *(undefined4 *)(lVar4 + 0x38);
        uStack_4c = *(undefined4 *)(lVar4 + 0x3c);
        plVar7 = *(longlong **)(lVar4 + 0x38);
        uStack_48 = *(undefined4 *)(lVar4 + 0x40);
        uStack_44 = *(undefined8 *)(lVar4 + 0x44);
        local_3c = *(undefined4 *)(lVar4 + 0x4c);
        if ((((plVar7 != (longlong *)0x0) && (*(int *)(lVar4 + 0x34) != 0)) && (-1 < (int)uVar10))
           && ((((int)uVar10 < DAT_14c9647dc &&
                (lVar9 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar9 != 0)
                ) && ((*(int *)(lVar9 + 0x10) == *(int *)(lVar4 + 0x34) &&
                      ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))))) {
          if (*(code **)(*plVar7 + 0x10) == (code *)&LAB_1447a1f2e) {
            plVar7 = plVar7 + 0xd9;
          }
          else {
            plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))();
          }
          cVar2 = FUN_14486eb0e(plVar7,&local_58);
          if (cVar2 != '\0') {
            lVar4 = FUN_14008e0ae(&local_58);
            FUN_140457ffc(lVar4 + 0x1b0,param_1);
            lVar4 = FUN_14008e0ae(&local_58);
            FUN_140457ffc(lVar4 + 0x168,param_1);
            lVar4 = FUN_14008e0ae(&local_58);
            FUN_140457ffc(lVar4 + 0x180,param_1);
          }
        }
      }
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x3f70) + 0x80))();
      if (cVar2 != '\0') {
        uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        do {
          FUN_140cfd7bc(param_1 + 0x4f48,uVar5 & 0xffffffff);
          cVar2 = (char)uVar5 + '\x01';
          uVar5 = CONCAT71((int7)(uVar5 >> 8),cVar2);
        } while (cVar2 != '\x1e');
      }
    }
    if (*(longlong *)(param_1 + 0x9cc8) != 0) {
      FUN_14480f766(param_1 + 0x3a50);
      *(undefined8 *)(param_1 + 0x9cc8) = 0;
    }
  }
  if (((*(longlong *)(param_1 + 0x8360) != 0) && (lVar4 = FUN_1447210f0(param_1), lVar4 != 0)) &&
     (lVar4 = *(longlong *)(lVar4 + 0x178), lVar4 != 0)) {
    lVar9 = FUN_14030d660();
    if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
         == lVar9 + 0x30)) && (*(longlong *)(param_1 + 0x8360) != 0)) {
      FUN_14480f766(lVar4 + 0x5c8);
    }
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_140cf87a4(param_1 + 0x60e8,1);
    FUN_140cf9a2a(param_1);
  }
  puVar6 = *(undefined4 **)(param_1 + 0x47e0);
  if (puVar6 != (undefined4 *)0x0) {
    do {
      FUN_145cfd944(param_1 + 0x4780,*puVar6);
      puVar6 = *(undefined4 **)(param_1 + 0x47e0);
    } while (puVar6 != (undefined4 *)0x0);
  }
  FUN_140cf818e(param_1 + 0x4128,0);
  FUN_140cf98d6(param_1 + 0x4978);
  FUN_140cf86ea(param_1 + 0x60e8);
  FUN_140c2d000(param_1 + 0x40e8);
  FUN_140cf800a(param_1 + 0x6890);
  (&DAT_00006bd0)[param_1] = (&DAT_00006bd0)[param_1] & 0xfe;
  FUN_140beee24(param_1 + 0x6aa0);
  FUN_140cfbd92(param_1 + 0x6c48);
  FUN_140cf8082(param_1 + 0x7c78);
  *(undefined8 *)(param_1 + 0x7f88) = 0;
  FUN_1406398aa(param_1 + 0x7fa0,0);
  FUN_140cf8040(param_1 + 0x88d0);
  FUN_140cf963c(param_1 + 0x5d80);
  FUN_140c2cc50(param_1 + 0x8fc0);
  FUN_140cfafa2(param_1 + 0x9138);
  *(undefined8 *)(param_1 + 0x8388) = 0;
  FUN_140cfb5d6(param_1 + 0x81a0);
  if (*(longlong *)(param_1 + 0x93d0) != 0) {
    FUN_140cf8432(param_1 + 0x9388);
    *(undefined8 *)(param_1 + 0x93d0) = 0;
    *(undefined8 *)(param_1 + 0x93d8) = 0;
  }
  FUN_140cf8288(param_1 + 0x9410);
  FUN_140cf9788(param_1 + 0x4ea0);
  FUN_140cf863e(param_1 + 0x3b70);
  FUN_140b3b8ec(param_1 + 0x3a90);
  if (*(longlong *)(param_1 + 0x35d0) != 0) {
    FUN_140521208();
  }
  FUN_140cbde20(param_1 + 0x83b0,0);
  *(undefined8 *)(param_1 + 0x83c0) = 0;
  *(undefined8 *)(param_1 + 0x83b0) = 0;
  *(undefined8 *)(param_1 + 0x83b8) = 0;
  *(undefined8 *)(param_1 + 0x8640) = 0;
  *(undefined8 *)(param_1 + 0x8648) = 0;
  *(undefined8 *)(param_1 + 0x87d0) = 0;
  FUN_140283eaa(param_1 + 0x8838,0);
  (**(code **)(*(longlong *)(param_1 + 0x3c50) + 0x18))(param_1 + 0x3c50);
  if (*(longlong *)(param_1 + 0x3f78) != 0) {
    FUN_14480f766(&DAT_14cb7df50);
    *(undefined8 *)(param_1 + 0x3f78) = 0;
  }
  lVar4 = FUN_140cf8388(param_1);
  if (lVar4 != 0) {
    if (param_1 == 0) {
      uVar10 = 0;
      uVar5 = 0;
    }
    else {
      uVar10 = *(uint *)(param_1 + 0xc);
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar5 = (ulonglong)*(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar3 = *(uint *)(lVar9 + 0x10);
        bVar11 = uVar3 == 0;
        if (bVar11) {
          *(uint *)(lVar9 + 0x10) = uVar8;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar11) {
          uVar3 = uVar8;
        }
        uVar5 = (ulonglong)uVar3;
      }
    }
    FUN_140cf9510(lVar4,(ulonglong)uVar10 | uVar5 << 0x20);
  }
  if ((((*(int *)(param_1 + 0x9cb4) != 0) &&
       (uVar10 = *(uint *)(param_1 + 0x9cb0), -1 < (int)uVar10)) &&
      (((int)uVar10 < DAT_14c9647dc &&
       ((lVar4 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar4 != 0 &&
        (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x9cb4))))))) &&
     ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
    plVar7 = (longlong *)FUN_14479d2ce();
    (**(code **)(*plVar7 + 0xa48))(plVar7);
  }
  if (((((*(int *)(param_1 + 0x9cbc) != 0) &&
        (uVar10 = *(uint *)(param_1 + 0x9cb8), -1 < (int)uVar10)) && ((int)uVar10 < DAT_14c9647dc))
      && ((lVar4 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar4 != 0 &&
          (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x9cbc))))) &&
     ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
    plVar7 = (longlong *)FUN_14479d2ce();
    (**(code **)(*plVar7 + 0xa48))(plVar7);
  }
  FUN_140cf9b18(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


