// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14384ab8f FUN_14384ab8f body=55 status=ok
// SIG undefined FUN_14384ab8f(void)

void FUN_14384ab8f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1f0f0 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1f0f0 = FUN_14171c317(FUN_146429f04,uVar1,L"EBTDecoratorLogic");
  }
  return;
}



// FUNCTION 14384abc6 FUN_14384abc6 body=364 status=ok
// SIG undefined FUN_14384abc6(void)

ulonglong FUN_14384abc6(longlong *param_1,longlong *param_2,ulonglong param_3,int *param_4,
                       int *param_5,undefined1 *param_6)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar8;
  void *_Dst;
  int iVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  int iVar7;
  
  param_3 = param_3 & 0xffffffff;
  iVar5 = (int)param_2[1];
  while (iVar5 != 0) {
    lVar4 = *param_2;
    lVar8 = (longlong)(iVar5 + -1);
    psVar1 = (short *)(lVar4 + lVar8 * 4);
    *psVar1 = *psVar1 + -1;
    cVar2 = *(char *)(lVar4 + 2 + lVar8 * 4);
    bVar11 = (byte)param_3;
    if (cVar2 == '\x03') {
      bVar3 = *(byte *)(lVar4 + 3 + lVar8 * 4);
      if (((~bVar11 | bVar3) & 1) == 0) {
        *(byte *)(lVar4 + 3 + lVar8 * 4) = bVar3 | 3;
        param_3 = 1;
      }
    }
    else if (cVar2 == '\x02') {
      bVar3 = *(byte *)(lVar4 + 3 + lVar8 * 4);
      if (((bVar11 | bVar3) & 1) == 0) {
        *(byte *)(lVar4 + 3 + lVar8 * 4) = (bVar3 & 0xfc) + 1;
        param_3 = 0;
      }
    }
    else {
      param_3 = (ulonglong)(bVar11 ^ cVar2 == '\x04');
    }
    if (((int)param_2[1] == 1) && (*param_6 = 1, *param_4 == -1 && (param_3 & 1) == 0)) {
      *param_4 = *param_5;
    }
    bVar11 = *(byte *)(lVar4 + 3 + lVar8 * 4);
    param_3 = param_3 & 0xff;
    if ((bVar11 & 1) != 0) {
      param_3 = (ulonglong)((bVar11 & 2) >> 1);
    }
    if (*(short *)(lVar4 + lVar8 * 4) != 0) break;
    iVar5 = (int)param_1[1];
    iVar9 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar9 = 0;
    }
    iVar7 = 2;
    if (2 < iVar9) {
      iVar7 = iVar9;
    }
    uVar6 = iVar7 - 2;
    uVar10 = iVar9 - uVar6;
    uVar12 = uVar10;
    if (1 < (int)uVar10) {
      uVar12 = 2;
    }
    if ((int)uVar12 < 1) {
      uVar12 = 0;
    }
    if (0 < (int)uVar10) {
      iVar9 = iVar5 - (uVar6 + uVar12);
      if (iVar9 != 0) {
        _Dst = (void *)((ulonglong)uVar6 * 2 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar12 * 2),(longlong)iVar9 * 2);
        iVar5 = (int)param_1[1];
      }
      *(uint *)(param_1 + 1) = iVar5 - uVar12;
    }
    *(int *)(param_2 + 1) = (int)param_2[1] + -1;
    FUN_147ed1978(param_2);
    iVar5 = (int)param_2[1];
  }
  return param_3 & 0xffffffffffffff01;
}



// FUNCTION 14384ad32 FUN_14384ad32 body=239 status=ok
// SIG undefined FUN_14384ad32(void)

undefined8 FUN_14384ad32(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    lVar3 = FUN_145993f3e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      return *(undefined8 *)(param_2 + 0x68);
    }
    if (*(int *)(param_2 + 0x5c) != 0) {
      uVar1 = *(uint *)(param_2 + 0x58);
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_2 + 0x5c))) &&
          ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (lVar3 = *plVar4, lVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014384ae15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*(longlong *)(lVar3 + 0x110) + 0x18))(lVar3 + 0x110,param_2);
        return uVar5;
      }
    }
    return 0;
  }
  if ((*(byte *)(param_1 + 0x2d) & 1) == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + -8);
  if (lVar3 != 0) {
    lVar2 = FUN_14113c790();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14384ad71;
  }
  lVar3 = 0;
LAB_14384ad71:
  return *(undefined8 *)(lVar3 + 0x120);
}



// FUNCTION 14384ae22 FUN_14384ae22 body=255 status=ok
// SIG undefined FUN_14384ae22(void)

undefined8 FUN_14384ae22(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    lVar3 = FUN_145993f3e();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) != lVar3 + 0x30)) {
      if (*(int *)(param_2 + 0x5c) != 0) {
        uVar1 = *(uint *)(param_2 + 0x58);
        if ((int)uVar1 < 0) {
          return 0;
        }
        if (DAT_14c9647dc <= (int)uVar1) {
          return 0;
        }
        plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_2 + 0x5c))) &&
            ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (lVar3 = *plVar4, lVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014384af05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*(longlong *)(lVar3 + 0x110) + 0x20))(lVar3 + 0x110,param_2);
          return uVar5;
        }
      }
    }
    else if (*(longlong *)(param_2 + 0x68) != 0) {
      return *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x3d0);
    }
    return 0;
  }
  if ((*(byte *)(param_1 + 0x2d) & 1) == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + -8);
  if (lVar3 != 0) {
    lVar2 = FUN_14113c790();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14384ae61;
  }
  lVar3 = 0;
LAB_14384ae61:
  return *(undefined8 *)(lVar3 + 0x120);
}



// FUNCTION 14384af2c FUN_14384af2c body=55 status=ok
// SIG undefined FUN_14384af2c(void)

void FUN_14384af2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1f2d0 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1f2d0 = FUN_14171c317(FUN_14642a736,uVar1,L"EBTParallelMode");
  }
  return;
}



// FUNCTION 14384af63 FUN_14384af63 body=46 status=ok
// SIG undefined FUN_14384af63(void)

void FUN_14384af63(void)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    if (*(longlong *)(lVar1 + 0x14cb1f2f0) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14384af91 FUN_14384af91 body=55 status=ok
// SIG undefined FUN_14384af91(void)

void FUN_14384af91(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1f330 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1f330 = FUN_14171c317(FUN_14642a794,uVar1,L"EBTBlackboardRestart");
  }
  return;
}



// FUNCTION 14384afc8 FUN_14384afc8 body=132 status=ok
// SIG undefined FUN_14384afc8(void)

void FUN_14384afc8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  bVar2 = DAT_14c950c29;
  if (param_2 == 0 || DAT_14c950c29 != 1) {
    *(longlong *)(param_1 + 0x40) = param_2;
    if (param_2 == 0) goto LAB_14384b01d;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x40) = param_2;
    bVar2 = DAT_14c950c29;
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
LAB_14384b01d:
    *(undefined4 *)(param_1 + 0x88) = 0xffff;
    return;
  }
  FUN_14384992e(param_1 + 0x68,lVar1);
  return;
}



// FUNCTION 14384b04c FUN_14384b04c body=128 status=ok
// SIG undefined FUN_14384b04c(void)

undefined8 FUN_14384b04c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_2 + 0x118) != 0) &&
     (lVar1 = FUN_147eb9650(*(longlong *)(param_2 + 0x118),*(undefined2 *)(param_1 + 0x88)),
     lVar1 != 0)) {
    uVar2 = FUN_1403ad4e4();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x90) == '\x01') {
        lVar1 = 0x20;
      }
      else {
        if (*(char *)(param_1 + 0x90) != '\0') {
          return 0;
        }
        lVar1 = 0x28;
      }
                    /* WARNING: Could not recover jumptable at 0x00014384b0c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + lVar1))(plVar3,param_1 + 0x98,*(code **)(*plVar3 + lVar1));
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14384b0cc FUN_14384b0cc body=55 status=ok
// SIG undefined FUN_14384b0cc(void)

void FUN_14384b0cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1f478 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1f478 = FUN_14171c317(FUN_14642ab43,uVar1,L"EBlackBoardEntryComparison");
  }
  return;
}



// FUNCTION 14384b103 FUN_14384b103 body=55 status=ok
// SIG undefined FUN_14384b103(void)

void FUN_14384b103(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1f4f0 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1f4f0 = FUN_14171c317(FUN_14642ac2e,uVar1,L"EPathExistanceQueryType");
  }
  return;
}



// FUNCTION 14384b13a FUN_14384b13a body=193 status=ok
// SIG undefined FUN_14384b13a(void)

void FUN_14384b13a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((-1 < (short)*(undefined4 *)(param_2 + 8)) && (*(longlong *)(param_2 + 0xa8) != 0)) {
    FUN_147eb3d35(param_2,param_1);
    lVar1 = param_1[0xe];
    if ((char)*(uint *)(param_1 + 0x12) < '\0' && lVar1 != 0) {
      local_20 = *(undefined8 *)(lVar1 + 0x3d0);
      uVar2 = DAT_14cb1f640;
      local_28 = lVar1;
    }
    else {
      if ((*(uint *)(param_1 + 0x12) & 0x40) == 0) goto LAB_14384b161;
      uVar2 = DAT_14cb1f630;
      local_28 = param_1[0xf];
    }
    uVar2 = FUN_14477b072(param_1,uVar2);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_28);
  }
LAB_14384b161:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14384b1fc FUN_14384b1fc body=953 status=ok
// SIG undefined FUN_14384b1fc(void)

void FUN_14384b1fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *param_2;
  if ((((*(int *)(lVar5 + 0x28) == 3) || (*(int *)(lVar5 + 0x38) == 0)) ||
      (uVar3 = *(uint *)(lVar5 + 0x34), (int)uVar3 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar3 ||
       (plVar9 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0)) ||
      (((int)plVar9[2] != *(int *)(lVar5 + 0x38) ||
       (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar5 = *plVar9, lVar5 == 0))))))))
  goto LAB_14384b2f1;
  if (DAT_14cac9ca8 == 0) {
    local_60 = &local_40;
    local_40 = FUN_141030f22;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_1478c0a72;
    local_70 = &LAB_1417b2375;
    local_78 = L"Engine";
    local_80 = 0x1000000000;
    local_88 = 0x10000004;
    local_90 = 8;
    local_98 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  lVar4 = *(longlong *)(lVar5 + 0x10);
  iVar7 = *(int *)(lVar4 + 0x38);
  if ((iVar7 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
      DAT_14cac9ca8 + 0x30)) goto LAB_14384b2f1;
  if (DAT_14caf64b8 == 0) {
    local_60 = &local_40;
    local_40 = FUN_141030f22;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_142b4754c;
    local_68 = &LAB_147c45ce0;
    local_70 = &LAB_1463f1ff4;
    local_78 = L"Game";
    local_80 = 0x4000000000;
    local_88 = 0x10000004;
    local_90 = 8;
    local_98 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    lVar4 = *(longlong *)(lVar5 + 0x10);
    iVar7 = *(int *)(lVar4 + 0x38);
  }
  if (((*(int *)(DAT_14caf64b8 + 0x38) <= iVar7) &&
      (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
       DAT_14caf64b8 + 0x30)) && (lVar5 = *(longlong *)(lVar5 + 0x3c0), lVar5 == 0))
  goto LAB_14384b2f1;
  lVar5 = FUN_147ec5362(lVar5);
  if (lVar5 == 0) goto LAB_14384b2f1;
  uVar3 = FUN_147ea72f6(lVar5,param_1);
  if (((int)uVar3 < 0) || (*(int *)(lVar5 + 0x170) <= (int)uVar3)) goto LAB_14384b2f1;
  piVar10 = (int *)((ulonglong)*(ushort *)(param_1 + 0x52) +
                   *(longlong *)(*(longlong *)(lVar5 + 0x168) + 0x30 + (ulonglong)uVar3 * 0x58));
  if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) goto LAB_14384b2f1;
  lVar4 = *param_2;
  if ((*(int *)(lVar4 + 0x28) == 1) && (0 < *(int *)(lVar4 + 8))) {
    uVar2 = *(undefined8 *)(lVar5 + 0x118);
    lVar5 = *(longlong *)(lVar4 + 0x10);
    if (lVar5 == 0) {
LAB_14384b40d:
      plVar9 = (longlong *)0x0;
    }
    else {
      lVar6 = FUN_1412474be();
      if (((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) goto LAB_14384b40d;
      plVar9 = *(longlong **)(lVar4 + 0x10);
    }
    plVar8 = (longlong *)plVar9[0x22];
    if (plVar8 == (longlong *)0x0) {
      (**(code **)(*plVar9 + 1000))(plVar9);
      plVar8 = (longlong *)plVar9[0x22];
    }
    (**(code **)(*plVar8 + 0x2a8))
              (plVar8,param_1 + 0x70,uVar2,
               ((longlong)((ulonglong)*(uint *)(*(longlong *)*param_2 + 4) << 0x21) >> 0x21) +
               ((longlong *)*param_2)[3]);
  }
  else if (*(char *)(param_1 + 0xe0) == '\x01') {
    FUN_147eb038a(*(undefined8 *)(lVar5 + 0x118),*(undefined2 *)(param_1 + 0x90));
  }
  *piVar10 = -1;
LAB_14384b2f1:
  puVar1 = (undefined8 *)param_2[1];
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    piVar10 = (int *)(puVar1 + 1);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)*puVar1)(puVar1);
      LOCK();
      piVar10 = (int *)((longlong)puVar1 + 0xc);
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14384b5d0 FUN_14384b5d0 body=152 status=ok
// SIG undefined FUN_14384b5d0(void)

void FUN_14384b5d0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < (longlong)*(int *)(param_1 + 0x48)) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar3);
      if ((*(int *)(lVar2 + 0x30) == param_2) && (*(int *)(lVar2 + 0x28) == 0)) {
        *(undefined4 *)(lVar2 + 0x28) = 3;
        local_20 = *(longlong *)(lVar1 + lVar3);
        local_18 = *(longlong *)(lVar1 + 8 + lVar3);
        if (local_18 != 0) {
          LOCK();
          *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
          UNLOCK();
        }
        FUN_147ed098a(local_20 + 0x60,&local_20);
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x48) * 0x10 != lVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14384b66a FUN_14384b66a body=123 status=ok
// SIG undefined FUN_14384b66a(void)

void FUN_14384b66a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  bVar2 = DAT_14c950c29;
  if (param_2 == 0 || DAT_14c950c29 != 1) {
    *(longlong *)(param_1 + 0x40) = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x40) = param_2;
    bVar2 = DAT_14c950c29;
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  FUN_14384992e(param_1 + 0x70,lVar1);
  return;
}



// FUNCTION 14384b6e6 FUN_14384b6e6 body=364 status=ok
// SIG undefined FUN_14384b6e6(void)

undefined8 FUN_14384b6e6(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  
  uVar9 = 1;
  if (((*(longlong *)(param_1 + 0x80) != 0) && (cVar3 = FUN_1438465cc(param_2), cVar3 != '\0')) &&
     (0 < (longlong)*(int *)(param_2 + 0x170))) {
    lVar6 = *(longlong *)(param_2 + 0x168);
    lVar5 = (longlong)*(int *)(param_2 + 0x170) * 0x58;
    lVar7 = lVar6 + lVar5;
    plVar10 = (longlong *)(lVar7 + -0x10);
    if (*(int *)(lVar7 + -8) != 3) {
      FUN_1446efa72(plVar10,0,3,0x10);
      *(undefined4 *)(lVar6 + lVar5 + -8) = 3;
    }
    puVar2 = (undefined8 *)*plVar10;
    *puVar2 = &PTR_LAB_14ac046a0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar2[2] = lVar6;
    *puVar2 = &PTR_FUN_14ac04710;
    puVar2[3] = 0;
    if (param_1 == 0) {
      iVar4 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(puVar2 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar4 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar4 = *(int *)(lVar7 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar7 + 0x10) = iVar8;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar4;
    puVar2[4] = &LAB_147ec95e8;
    *(undefined4 *)(puVar2 + 5) = 0;
    uVar9 = 3;
  }
  return uVar9;
}



// FUNCTION 14384b852 FUN_14384b852 body=1068 status=ok
// SIG undefined FUN_14384b852(void)

void FUN_14384b852(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  uint local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar12 = *param_2;
  if (((((*(int *)(lVar12 + 0x28) != 3) && (*(int *)(lVar12 + 0x38) != 0)) &&
       (uVar2 = *(uint *)(lVar12 + 0x34), -1 < (int)uVar2)) &&
      (((int)uVar2 < DAT_14c9647dc &&
       (plVar9 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0)))) &&
     (((int)plVar9[2] == *(int *)(lVar12 + 0x38) &&
      (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (lVar12 = *plVar9, lVar12 != 0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1478c0a72;
      local_80 = &LAB_1417b2375;
      local_88 = L"Engine";
      local_90 = 0x1000000000;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    lVar5 = *(longlong *)(lVar12 + 0x10);
    iVar7 = *(int *)(lVar5 + 0x38);
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar7) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      if (DAT_14caf64b8 == 0) {
        local_70 = &local_58;
        local_58 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_142b4754c;
        local_78 = &LAB_147c45ce0;
        local_80 = &LAB_1463f1ff4;
        local_88 = L"Game";
        local_90 = 0x4000000000;
        local_98 = 0x10000004;
        local_a0 = 8;
        local_a8 = 0x428;
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
        lVar5 = *(longlong *)(lVar12 + 0x10);
        iVar7 = *(int *)(lVar5 + 0x38);
      }
      if ((((iVar7 < *(int *)(DAT_14caf64b8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
            DAT_14caf64b8 + 0x30)) || (lVar12 = *(longlong *)(lVar12 + 0x3c0), lVar12 != 0)) &&
         (plVar9 = (longlong *)FUN_147ec5362(lVar12), plVar9 != (longlong *)0x0)) {
        lVar12 = *param_2;
        if ((*(int *)(lVar12 + 0x28) == 1) && (0 < *(int *)(lVar12 + 8))) {
          lVar5 = plVar9[0x23];
          lVar4 = *(longlong *)(lVar12 + 0x10);
          if (((lVar4 == 0) || (lVar6 = FUN_1412474be(), lVar6 == 0)) ||
             ((*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38) ||
              (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
               lVar6 + 0x30)))) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(lVar12 + 0x10);
          }
          plVar8 = (longlong *)plVar11[0x22];
          if (plVar8 == (longlong *)0x0) {
            (**(code **)(*plVar11 + 1000))(plVar11);
            plVar8 = (longlong *)plVar11[0x22];
          }
          local_44 = (**(code **)(*plVar8 + 0x2a8))
                               (plVar8,param_1 + 0x70,lVar5,
                                ((longlong)((ulonglong)*(uint *)(*(longlong *)*param_2 + 4) << 0x21)
                                >> 0x21) + ((longlong *)*param_2)[3]);
        }
        else {
          if (*(char *)(param_1 + 0x140) == '\x01') {
            FUN_147eb038a(plVar9[0x23],*(undefined2 *)(param_1 + 0x90));
          }
          local_44 = 0;
        }
        uVar3 = *(undefined4 *)(*param_2 + 0x30);
        local_58 = DAT_14cb1f8e0;
        local_4c = 0;
        if (param_1 == 0) {
          local_50 = 0;
          iVar7 = 0;
        }
        else {
          local_50 = *(uint *)(param_1 + 0xc);
          if ((int)local_50 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((local_50 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          iVar7 = *(int *)(lVar12 + 0x10);
          if (*(int *)(lVar12 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            LOCK();
            iVar7 = *(int *)(lVar12 + 0x10);
            bVar13 = iVar7 == 0;
            if (bVar13) {
              *(int *)(lVar12 + 0x10) = iVar10;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar13) {
              iVar7 = iVar10;
            }
          }
        }
        local_43 = 0;
        local_4c = iVar7;
        local_48 = uVar3;
        (**(code **)(*plVar9 + 0x4c0))(plVar9);
      }
    }
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14384bc80 FUN_14384bc80 body=2182 status=ok
// SIG undefined FUN_14384bc80(void)

longlong FUN_14384bc80(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                      undefined4 param_5,byte param_6)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  longlong local_120;
  undefined4 local_118;
  char local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_f0;
  uint local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar9 = param_2;
  if (param_1 == (longlong *)0x0) {
LAB_14384bcea:
    if (param_2 != (longlong *)0x0) {
LAB_14384bcef:
      plVar3 = (longlong *)param_2[0x78];
      if (plVar3 != (longlong *)0x0) {
        lVar5 = FUN_14104c5c4();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          lVar5 = (**(code **)(*plVar9 + 0x180))(plVar9);
          if (lVar5 == 0) {
            lVar5 = DAT_14cb10918;
          }
          lVar6 = FUN_147ecd160(lVar5);
          local_110 = 0;
          local_108 = DAT_14cb1e7b0;
          uStack_100 = DAT_14cb1e7b8;
          local_f8 = DAT_14cb1e7c0;
          local_f0 = 0;
          local_e0 = 0x7f7fffff;
          local_dc = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          local_e4 = param_5;
          local_e8 = (uint)param_6 * 0x100 + 0x25c;
          if (param_4 == 0) {
            local_f8 = param_3[2];
            local_108 = *param_3;
            uStack_100 = param_3[1];
            local_e8 = (uint)param_6 * 0x100 | 0x25d;
          }
          else {
            uVar2 = *(uint *)(param_4 + 0xc);
            local_110 = (ulonglong)uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar4 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              LOCK();
              iVar4 = *(int *)(lVar12 + 0x10);
              bVar13 = iVar4 == 0;
              if (bVar13) {
                *(int *)(lVar12 + 0x10) = iVar11;
                iVar4 = 0;
              }
              UNLOCK();
              uVar2 = (uint)local_110;
              if (bVar13) {
                iVar4 = iVar11;
              }
            }
            local_110._0_4_ = uVar2;
            local_110 = CONCAT44(iVar4,(uint)local_110);
            local_e8 = local_e8 | 3;
          }
          lVar12 = plVar3[0x93];
          if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
            FUN_1456cec3c(lVar12);
          }
          if (((DAT_14c950c29 & 1) != 0) && (lVar12 != 0)) {
            FUN_1456cec3c(lVar12);
          }
          local_f0 = lVar12;
          (**(code **)(*plVar3 + 0x7a8))(plVar3,&local_118,&local_110,0);
          if (local_114 == '\x01') {
            if (*(longlong *)(lVar5 + 0x1f0) == 0) {
              puVar7 = (undefined8 *)(lVar5 + 0x458);
            }
            else {
              puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
            }
            uVar10 = *puVar7;
            local_c0 = (undefined8 *)0x0;
            local_b8 = 0;
            FUN_1446efa72(&local_c0,0,3,0x10);
            puVar7 = local_c0;
            local_b8 = 3;
            *local_c0 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 1;
            lVar5 = DAT_14c758608 + 1;
            if (lVar12 == 0) {
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 2;
              lVar5 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar5;
            local_c0[2] = lVar12;
            *local_c0 = &PTR_FUN_14ac04810;
            local_c0[3] = 0;
            iVar4 = 0;
            if (lVar6 != 0) {
              uVar2 = *(uint *)(lVar6 + 0xc);
              *(uint *)(local_c0 + 3) = uVar2;
              if ((int)uVar2 < DAT_14c9647dc) {
                lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
              }
              else {
                lVar5 = 0;
              }
              iVar4 = *(int *)(lVar5 + 0x10);
              if (*(int *)(lVar5 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                iVar11 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar11);
                }
                LOCK();
                iVar4 = *(int *)(lVar5 + 0x10);
                bVar13 = iVar4 == 0;
                if (bVar13) {
                  *(int *)(lVar5 + 0x10) = iVar11;
                  iVar4 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar4 = iVar11;
                }
              }
            }
            *(int *)((longlong)puVar7 + 0x1c) = iVar4;
            pcVar8 = FUN_147ecd0b4;
LAB_14384c05b:
            puVar7[4] = pcVar8;
            local_a8 = 0;
            uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
            FUN_14487d8d8(&local_a8,&local_c0);
            local_68 = 1;
            local_128 = local_b0;
            local_b0[0] = 0;
            local_ac = 0xbf800000;
            FUN_1406f4044(uVar10,lVar6 + 0x60,&local_a8,0x3dcccccd);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
            if (local_b8 != 0) {
              if (local_c0 == (undefined8 *)0x0) goto LAB_14384c11d;
              (**(code **)*local_c0)(local_c0,0);
              FUN_1446efa72(&local_c0,0,0,0x10);
              local_b8 = 0;
            }
            if (local_c0 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (local_114 != '\x02') {
              if (*(longlong *)(lVar5 + 0x1f0) == 0) {
                puVar7 = (undefined8 *)(lVar5 + 0x458);
              }
              else {
                puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
              }
              uVar10 = *puVar7;
              local_c0 = (undefined8 *)0x0;
              local_b8 = 0;
              FUN_1446efa72(&local_c0,0,3,0x10);
              puVar7 = local_c0;
              local_b8 = 3;
              *local_c0 = &PTR_LAB_14a1c8830;
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 1;
              lVar5 = DAT_14c758608 + 1;
              if (lVar12 == 0) {
                LOCK();
                UNLOCK();
                lVar12 = DAT_14c758608 + 2;
                lVar5 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar5;
              local_c0[2] = lVar12;
              *local_c0 = &PTR_FUN_14ac04810;
              local_c0[3] = 0;
              iVar4 = 0;
              if (lVar6 != 0) {
                uVar2 = *(uint *)(lVar6 + 0xc);
                *(uint *)(local_c0 + 3) = uVar2;
                if ((int)uVar2 < DAT_14c9647dc) {
                  lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                }
                else {
                  lVar5 = 0;
                }
                iVar4 = *(int *)(lVar5 + 0x10);
                if (*(int *)(lVar5 + 0x10) == 0) {
                  LOCK();
                  iVar4 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar11 = DAT_14c964868 + 1;
                  bVar13 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar4;
                  if (bVar13) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar11);
                  }
                  LOCK();
                  iVar4 = *(int *)(lVar5 + 0x10);
                  bVar13 = iVar4 == 0;
                  if (bVar13) {
                    *(int *)(lVar5 + 0x10) = iVar11;
                    iVar4 = 0;
                  }
                  UNLOCK();
                  if (bVar13) {
                    iVar4 = iVar11;
                  }
                }
              }
              *(int *)((longlong)puVar7 + 0x1c) = iVar4;
              pcVar8 = FUN_147ecd004;
              goto LAB_14384c05b;
            }
            uVar2 = *(uint *)((longlong)plVar3 + 0xc);
            *(uint *)(lVar6 + 0x48) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar4 = *(int *)(lVar5 + 0x10);
            if (iVar4 == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              lVar12 = 0;
              LOCK();
              iVar4 = *(int *)(lVar5 + 0x10);
              bVar13 = iVar4 == 0;
              if (bVar13) {
                *(int *)(lVar5 + 0x10) = iVar11;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar13) {
                iVar4 = iVar11;
              }
              *(int *)(lVar6 + 0x4c) = iVar4;
              if (iVar4 != 0) goto LAB_14384c1af;
            }
            else {
              *(int *)(lVar6 + 0x4c) = iVar4;
LAB_14384c1af:
              uVar2 = *(uint *)(lVar6 + 0x48);
              lVar12 = 0;
              if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                plVar9 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((plVar9 == (longlong *)0x0) ||
                   (((int)plVar9[2] != iVar4 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) {
                  lVar12 = 0;
                }
                else {
                  lVar12 = *plVar9;
                }
              }
            }
            FUN_147eccf52(&local_120);
            local_a8 = 0;
            uStack_a0 = 0;
            lVar5 = local_120;
            if (lVar6 != 0) {
              uVar2 = *(uint *)(lVar6 + 0xc);
              local_a8 = (ulonglong)uVar2;
              if ((int)uVar2 < DAT_14c9647dc) {
                lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
              }
              else {
                lVar5 = 0;
              }
              iVar4 = *(int *)(lVar5 + 0x10);
              if (*(int *)(lVar5 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                iVar11 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar11);
                }
                LOCK();
                iVar4 = *(int *)(lVar5 + 0x10);
                bVar13 = iVar4 == 0;
                if (bVar13) {
                  *(int *)(lVar5 + 0x10) = iVar11;
                  iVar4 = 0;
                }
                UNLOCK();
                uVar2 = (uint)local_a8;
                if (bVar13) {
                  iVar4 = iVar11;
                }
              }
              local_a8._0_4_ = uVar2;
              local_a8 = CONCAT44(iVar4,(uint)local_a8);
              uStack_a0 = local_120;
              lVar5 = uStack_a0;
              if (((((local_120 != 0) && (iVar4 != 0)) && (-1 < (int)(uint)local_a8)) &&
                  (((int)(uint)local_a8 < DAT_14c9647dc &&
                   (plVar9 = (longlong *)
                             ((ulonglong)(((uint)local_a8 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_a8 >> 0x10) * 8))
                   , plVar9 != (longlong *)0x0)))) &&
                 (((int)plVar9[2] == iVar4 &&
                  (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
                FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),local_120,1);
                lVar5 = uStack_a0;
              }
            }
            uStack_a0 = lVar5;
            FUN_14053c012(lVar12 + 0x4a0,&local_a8);
            *(undefined4 *)(lVar6 + 0x50) = local_118;
          }
LAB_14384c11d:
          plVar9 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar9 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          goto LAB_14384bd1d;
        }
      }
    }
  }
  else {
    plVar9 = param_1;
    if (param_2 != (longlong *)0x0) goto LAB_14384bcef;
    lVar5 = FUN_14104c5c4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      param_2 = (longlong *)param_1[0x7a];
      goto LAB_14384bcea;
    }
  }
  lVar6 = 0;
LAB_14384bd1d:
  if ((local_50 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14384c508 FUN_14384c508 body=1985 status=ok
// SIG undefined FUN_14384c508(void)

void FUN_14384c508(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  undefined8 local_310;
  undefined1 local_308;
  undefined8 *local_2f8;
  longlong *local_2f0;
  undefined1 local_2e8 [168];
  undefined8 *local_240;
  longlong *local_238;
  int local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined *local_200;
  undefined4 local_1f8;
  undefined1 local_1f4;
  longlong local_158;
  undefined4 local_150;
  undefined8 local_140;
  longlong *local_138;
  longlong *local_130 [2];
  undefined1 local_120 [16];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  ulonglong local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (param_1 != 0) {
    lVar6 = FUN_1447210f0();
    if ((lVar6 != 0) && (plVar2 = *(longlong **)(lVar6 + 0x168), plVar2 != (longlong *)0x0)) {
      lVar6 = FUN_1409035a4();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (((param_2 != 0 &&
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) && (*(longlong *)(param_1 + 0x3d0) != 0)))) {
        plVar7 = (longlong *)FUN_14384d47c(param_1);
        if (plVar7 == (longlong *)0x0) {
          local_200 = &DAT_14a492018;
          local_1f8 = 3;
          local_1f4 = 0;
          uVar5 = FUN_14001a6c0(&local_200,1);
          local_c0 = (ulonglong)uVar5;
          FUN_14276766e(&local_200);
          local_e8 = *(undefined8 *)(param_1 + 0x18);
          FUN_145715fae(local_e0);
          local_98 = L"SimpleMoveErrorNoComp";
          uStack_90._0_4_ = 0x15;
          FUN_1446e940c(local_10c,&local_98);
          local_98 = L"AIBlueprintHelperLibrary";
          uStack_90._0_4_ = 0x18;
          FUN_1446e940c(local_110,&local_98);
          local_98 = L"SimpleMove failed for {0}: missing components";
          uStack_90 = CONCAT44(uStack_90._4_4_,0x2d);
          FUN_140208c1e(local_108,local_110,local_10c,&local_98);
          FUN_14023409e(&local_f8,local_108,1);
          local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
          FUN_14023423e(local_88,local_e0);
          local_238 = local_78;
          local_240 = &local_98;
          FUN_14010d304(&local_158);
          local_a8 = local_f8;
          local_a0 = local_f0;
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_d0,&local_a8,&local_158);
          FUN_14007f2db(local_158,local_150);
          if (local_158 != 0) {
            FUN_1400020a8();
          }
          if (local_88[0] != (longlong *)0x0) {
            (**(code **)(*local_88[0] + 0x10))();
          }
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_f0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_f0)(local_f0);
              LOCK();
              piVar1 = (int *)((longlong)local_f0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_f0 + 0x10))(local_f0);
              }
            }
          }
          if (local_e0[0] != (longlong *)0x0) {
            (**(code **)(*local_e0[0] + 0x10))();
          }
          puVar9 = local_b8;
        }
        else {
          cVar4 = (**(code **)(*plVar7 + 0x508))(plVar7);
          if (cVar4 != '\0') {
            local_328 = (undefined8 *)CONCAT71(local_328._1_7_,1);
            cVar4 = FUN_147efaa92(plVar7,param_2,3,0xbf800000);
            if (*(char *)((longlong)plVar7 + 0x2a4) != '\0') {
              local_328 = (undefined8 *)(CONCAT71(local_328._1_7_,cVar4) ^ 1);
              (**(code **)(*plVar7 + 0x498))(plVar7,plVar2,0x180,DAT_14cb1efa4);
            }
            if (cVar4 == '\0') {
              (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390,&local_158);
              uVar8 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x10))(param_1 + 0x390);
              lVar6 = (**(code **)(*plVar2 + 0x340))(plVar2,uVar8,&local_158,&DAT_14c8464e0);
              if (lVar6 != 0) {
                local_218 = 0;
                uStack_210 = 0;
                local_228 = 0;
                uStack_220 = 0;
                lVar3 = *(longlong *)(param_2 + 0x1c8);
                if (lVar3 == 0) {
                  local_88[0] = DAT_14c8464f0;
                  local_98 = (wchar_t *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                }
                else {
                  local_98 = *(wchar_t **)(lVar3 + 0x260);
                  uStack_90 = *(undefined8 *)(lVar3 + 0x268);
                  local_88[0] = *(longlong **)(lVar3 + 0x270);
                }
                local_310 = 0x7fefffffffffffff;
                local_318 = &local_218;
                local_320 = &local_228;
                local_328 = &local_98;
                local_308 = 1;
                FUN_147e6fa80(&local_200,param_1,lVar6,&local_158);
                FUN_147e7045e(local_2e8,&local_200);
                FUN_14383659e(plVar2,&local_240,local_2e8,0);
                if (local_230 == 3) {
                  FUN_143834864(local_240,param_2,0x42c80000);
                  local_2f8 = local_240;
                  local_2f0 = local_238;
                  if (local_238 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_238 + 1) = (int)local_238[1] + 1;
                    UNLOCK();
                  }
                  FUN_147ea4334(&local_98,param_2);
                  (**(code **)(*plVar7 + 0x490))(plVar7,&local_a8,&local_98,&local_2f8);
                  if (local_58 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = local_58 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)*plVar2 == 0) {
                      (**(code **)*local_58)(local_58);
                      LOCK();
                      piVar1 = (int *)((longlong)local_58 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*local_58 + 0x10))(local_58);
                      }
                    }
                  }
                }
                else if (*(char *)((longlong)plVar7 + 0x2a4) != '\0') {
                  FUN_147ef8328(plVar7,&local_98,5,0);
                }
                plVar2 = local_238;
                if (local_238 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = local_238 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    (**(code **)*local_238)(local_238);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar2 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar2 + 0x10))(plVar2);
                    }
                  }
                }
                FUN_147e70c18(&local_200);
              }
            }
            else {
              FUN_147ef8328(plVar7,&local_200,0,0);
            }
            goto LAB_14384c55e;
          }
          local_200 = &DAT_14a492018;
          local_1f8 = 3;
          local_1f4 = 0;
          uVar5 = FUN_14001a6c0(&local_200,1);
          local_c0 = (ulonglong)uVar5;
          FUN_14276766e(&local_200);
          local_e8 = *(undefined8 *)(param_1 + 0x18);
          FUN_145715fae(local_130);
          local_98 = L"SimpleMoveErrorMovement";
          uStack_90._0_4_ = 0x17;
          FUN_1446e940c(local_10c,&local_98);
          local_98 = L"AIBlueprintHelperLibrary";
          uStack_90._0_4_ = 0x18;
          FUN_1446e940c(local_110,&local_98);
          local_98 = L"SimpleMove failed for {0}: movement not allowed";
          uStack_90 = CONCAT44(uStack_90._4_4_,0x2f);
          FUN_140208c1e(local_108,local_110,local_10c,&local_98);
          FUN_14023409e(&local_140,local_108,1);
          local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
          FUN_14023423e(local_88,local_130);
          local_238 = local_78;
          local_240 = &local_98;
          FUN_14010d304(&local_158);
          local_a8 = local_140;
          local_a0 = local_138;
          if (local_138 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_138 + 1) = (int)local_138[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_d0,&local_a8,&local_158);
          FUN_14007f2db(local_158,local_150);
          if (local_158 != 0) {
            FUN_1400020a8();
          }
          if (local_88[0] != (longlong *)0x0) {
            (**(code **)(*local_88[0] + 0x10))();
          }
          if (local_138 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_138 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_138)(local_138);
              LOCK();
              piVar1 = (int *)((longlong)local_138 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_138 + 0x10))(local_138);
              }
            }
          }
          if (local_130[0] != (longlong *)0x0) {
            (**(code **)(*local_130[0] + 0x10))();
          }
          puVar9 = local_120;
        }
        FUN_1427679d4(&local_200,puVar9,local_d0);
        plVar2 = *(longlong **)(puVar9 + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar2 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        if (local_d0[0] != (longlong *)0x0) {
          (**(code **)(*local_d0[0] + 0x10))();
        }
        if (local_108[0] != (longlong *)0x0) {
          (**(code **)(*local_108[0] + 0x10))();
        }
        FUN_1427678c0(&local_200);
      }
    }
  }
LAB_14384c55e:
  if ((local_40 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14384ccca FUN_14384ccca body=1969 status=ok
// SIG undefined FUN_14384ccca(void)

void FUN_14384ccca(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined8 local_300;
  undefined1 local_2f8;
  wchar_t **local_2e8;
  longlong *local_2e0;
  undefined1 local_2d8 [168];
  wchar_t **local_230;
  longlong *local_228;
  int local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  longlong local_150;
  undefined4 local_148;
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128 [2];
  undefined1 local_118 [16];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  longlong *local_100 [2];
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  ulonglong local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  longlong *local_98;
  wchar_t *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if (param_1 != 0) {
    lVar5 = FUN_1447210f0();
    if ((lVar5 != 0) && (plVar2 = *(longlong **)(lVar5 + 0x168), plVar2 != (longlong *)0x0)) {
      lVar5 = FUN_1409035a4();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         ((*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30 && (*(longlong *)(param_1 + 0x3d0) != 0)))) {
        plVar6 = (longlong *)FUN_14384d47c(param_1);
        if (plVar6 == (longlong *)0x0) {
          local_1f8 = &DAT_14a492018;
          local_1f0 = 3;
          local_1ec = 0;
          uVar4 = FUN_14001a6c0(&local_1f8,1);
          local_b8 = (ulonglong)uVar4;
          FUN_14276766e(&local_1f8);
          local_e0 = *(undefined8 *)(param_1 + 0x18);
          FUN_145715fae(local_d8);
          local_90 = L"SimpleMoveErrorNoComp";
          local_88._0_4_ = 0x15;
          FUN_1446e940c(local_104,&local_90);
          local_90 = L"AIBlueprintHelperLibrary";
          local_88._0_4_ = 0x18;
          FUN_1446e940c(local_108,&local_90);
          local_90 = L"SimpleMove failed for {0}: missing components";
          local_88 = CONCAT44(local_88._4_4_,0x2d);
          FUN_140208c1e(local_100,local_108,local_104,&local_90);
          FUN_14023409e(&local_f0,local_100,1);
          local_90 = (wchar_t *)CONCAT44(local_90._4_4_,4);
          FUN_14023423e(&plStack_80,local_d8);
          local_228 = &local_70;
          local_230 = &local_90;
          FUN_14010d304(&local_150);
          local_a0 = local_f0;
          local_98 = local_e8;
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_c8,&local_a0,&local_150);
          FUN_14007f2db(local_150,local_148);
          if (local_150 != 0) {
            FUN_1400020a8();
          }
          if (plStack_80 != (longlong *)0x0) {
            (**(code **)(*plStack_80 + 0x10))();
          }
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_e8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_e8)(local_e8);
              LOCK();
              piVar1 = (int *)((longlong)local_e8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_e8 + 0x10))(local_e8);
              }
            }
          }
          if (local_d8[0] != (longlong *)0x0) {
            (**(code **)(*local_d8[0] + 0x10))();
          }
          puVar8 = local_b0;
        }
        else {
          cVar3 = (**(code **)(*plVar6 + 0x508))(plVar6);
          if (cVar3 != '\0') {
            cVar3 = FUN_147efa850(plVar6,param_2,1,0xbf800000);
            if (*(char *)((longlong)plVar6 + 0x2a4) != '\0') {
              local_318 = (undefined8 *)(CONCAT71(local_318._1_7_,cVar3) ^ 1);
              (**(code **)(*plVar6 + 0x498))(plVar6,plVar2,0x180,DAT_14cb1efa4);
              if (*(char *)((longlong)plVar6 + 0x2a4) != '\0') {
                local_318 = (undefined8 *)((ulonglong)local_318 & 0xffffffffffffff00);
                (**(code **)(*plVar6 + 0x498))(plVar6,plVar2,0x180,DAT_14cb1effc);
              }
            }
            if (cVar3 == '\0') {
              (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390,&local_150);
              uVar7 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x10))(param_1 + 0x390);
              lVar5 = (**(code **)(*plVar2 + 0x340))(plVar2,uVar7,&local_150,&DAT_14c8464e0);
              if (lVar5 != 0) {
                local_308 = &local_208;
                local_208 = 0;
                uStack_200 = 0;
                local_310 = &local_218;
                local_218 = 0;
                uStack_210 = 0;
                local_300 = 0x7fefffffffffffff;
                local_2f8 = 1;
                local_318 = param_2;
                FUN_147e6fa80(&local_1f8,param_1,lVar5,&local_150);
                FUN_147e7045e(local_2d8,&local_1f8);
                FUN_14383659e(plVar2,&local_230,local_2d8,0);
                if (local_220 == 3) {
                  local_2e8 = local_230;
                  local_2e0 = local_228;
                  uVar4 = 0x35d;
                  if (local_228 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_228 + 1) = (int)local_228[1] + 1;
                    UNLOCK();
                    uVar4 = local_68 & 0xfffff800 | 0x35d;
                  }
                  local_90 = (wchar_t *)0x0;
                  local_88 = *param_2;
                  plStack_80 = (longlong *)param_2[1];
                  local_78 = param_2[2];
                  local_70 = 0;
                  local_64 = 0x7f7fffffbf800000;
                  local_5c = 0;
                  uStack_54 = 0;
                  uStack_50 = 0;
                  uStack_4c = 0;
                  uStack_48 = 0;
                  local_68 = uVar4;
                  (**(code **)(*plVar6 + 0x490))(plVar6,&local_a0,&local_90,&local_2e8);
                  plVar2 = (longlong *)CONCAT44(uStack_4c,uStack_50);
                  if (plVar2 != (longlong *)0x0) {
                    LOCK();
                    plVar6 = plVar2 + 1;
                    *(int *)plVar6 = (int)*plVar6 + -1;
                    UNLOCK();
                    if ((int)*plVar6 == 0) {
                      (**(code **)*plVar2)(plVar2);
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
                else if (*(char *)((longlong)plVar6 + 0x2a4) != '\0') {
                  FUN_147ef8328(plVar6,&local_90,5,0);
                }
                plVar2 = local_228;
                if (local_228 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = local_228 + 1;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)*plVar6 == 0) {
                    (**(code **)*local_228)(local_228);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar2 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar2 + 0x10))(plVar2);
                    }
                  }
                }
                FUN_147e70c18(&local_1f8);
              }
            }
            else {
              FUN_147ef8328(plVar6,&local_1f8,0,0);
            }
            goto LAB_14384cd38;
          }
          local_1f8 = &DAT_14a492018;
          local_1f0 = 3;
          local_1ec = 0;
          uVar4 = FUN_14001a6c0(&local_1f8,1);
          local_b8 = (ulonglong)uVar4;
          FUN_14276766e(&local_1f8);
          local_e0 = *(undefined8 *)(param_1 + 0x18);
          FUN_145715fae(local_128);
          local_90 = L"SimpleMoveErrorMovement";
          local_88._0_4_ = 0x17;
          FUN_1446e940c(local_104,&local_90);
          local_90 = L"AIBlueprintHelperLibrary";
          local_88._0_4_ = 0x18;
          FUN_1446e940c(local_108,&local_90);
          local_90 = L"SimpleMove failed for {0}: movement not allowed";
          local_88 = CONCAT44(local_88._4_4_,0x2f);
          FUN_140208c1e(local_100,local_108,local_104,&local_90);
          FUN_14023409e(&local_138,local_100,1);
          local_90 = (wchar_t *)CONCAT44(local_90._4_4_,4);
          FUN_14023423e(&plStack_80,local_128);
          local_228 = &local_70;
          local_230 = &local_90;
          FUN_14010d304(&local_150);
          local_a0 = local_138;
          local_98 = local_130;
          if (local_130 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_130 + 1) = (int)local_130[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_c8,&local_a0,&local_150);
          FUN_14007f2db(local_150,local_148);
          if (local_150 != 0) {
            FUN_1400020a8();
          }
          if (plStack_80 != (longlong *)0x0) {
            (**(code **)(*plStack_80 + 0x10))();
          }
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_130 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_130)(local_130);
              LOCK();
              piVar1 = (int *)((longlong)local_130 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_130 + 0x10))(local_130);
              }
            }
          }
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          puVar8 = local_118;
        }
        FUN_1427679d4(&local_1f8,puVar8,local_c8);
        plVar2 = *(longlong **)(puVar8 + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar2 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        if (local_c8[0] != (longlong *)0x0) {
          (**(code **)(*local_c8[0] + 0x10))();
        }
        if (local_100[0] != (longlong *)0x0) {
          (**(code **)(*local_100[0] + 0x10))();
        }
        FUN_1427678c0(&local_1f8);
      }
    }
  }
LAB_14384cd38:
  if ((local_40 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14384d47c FUN_14384d47c body=121 status=ok
// SIG undefined FUN_14384d47c(void)

longlong * FUN_14384d47c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14104c5c4();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30)) {
    plVar2 = (longlong *)FUN_147ecd24c(param_1);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)FUN_147ed1ed3(param_1);
      uVar3 = FUN_1447210f0(param_1);
      FUN_140b506dc(plVar2,uVar3,0);
      (**(code **)(*plVar2 + 0x478))(plVar2);
    }
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x468);
  }
  return plVar2;
}



// FUNCTION 14384d506 FUN_14384d506 body=372 status=ok
// SIG undefined FUN_14384d506(void)

bool FUN_14384d506(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong *local_48;
  longlong local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  if (param_2 == 0) {
    bVar8 = false;
  }
  else {
    uVar3 = FUN_145a75b0c();
    if (uVar3 != param_2) {
      if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
        uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        lVar4 = param_1 + 0xf8;
        if (*(longlong *)(param_1 + 0x100) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x100);
        }
        iVar7 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0x108) - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
        if (iVar7 != -1) {
          lVar4 = *(longlong *)(param_1 + 0xc0);
          do {
            lVar1 = lVar4 + (longlong)iVar7 * 0x30;
            if (*(ulonglong *)(lVar4 + (longlong)iVar7 * 0x30) == param_2) {
              if (lVar1 != -8 && lVar1 != 0) {
                FUN_147ecf02c(param_3);
                goto LAB_14384d562;
              }
              break;
            }
            iVar7 = *(int *)(lVar1 + 0x28);
          } while (iVar7 != -1);
        }
      }
      uVar5 = FUN_147ec5440(*(undefined8 *)(param_1 + 0x58));
      local_58 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      plVar6 = (longlong *)FUN_147ecede6(uVar5,&local_58);
      (**(code **)(*plVar6 + 0x2a0))(plVar6,param_1,param_3);
      local_48 = &local_50;
      local_40 = param_3;
      FUN_147ed679c((longlong *)(param_1 + 0xc0),local_34);
    }
LAB_14384d562:
    bVar8 = *(int *)(param_3 + 8) != 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar8;
}



// FUNCTION 14384d67c FUN_14384d67c body=647 status=ok
// SIG undefined FUN_14384d67c(void)

ulonglong FUN_14384d67c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  double *pdVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  longlong *local_70;
  int local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    uVar9 = 0;
  }
  else {
    local_70 = (longlong *)0x0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    cVar5 = FUN_14384d506();
    plVar7 = local_70;
    if ((((cVar5 != '\0') && (local_70 != (longlong *)0x0)) &&
        (lVar6 = FUN_1412474be(), plVar10 = local_70, lVar6 != 0)) &&
       ((*(int *)(lVar6 + 0x38) <= (int)plVar7[7] &&
        (local_70 != (longlong *)0x0 &&
         *(longlong *)(plVar7[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)))) {
      lVar6 = FUN_1412474be();
      if ((lVar6 == 0) ||
         (((int)plVar10[7] < *(int *)(lVar6 + 0x38) ||
          (plVar7 = local_70,
          *(longlong *)(plVar10[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)))) {
        plVar7 = (longlong *)0x0;
      }
      lVar6 = FUN_145869c20();
      plVar10 = local_70;
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= (int)plVar7[7])) &&
         (*(longlong *)(plVar7[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        if (((local_70 == (longlong *)0x0) || (lVar6 = FUN_1412474be(), lVar6 == 0)) ||
           (((int)plVar10[7] < *(int *)(lVar6 + 0x38) ||
            (plVar7 = local_70,
            *(longlong *)(plVar10[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)))) {
          plVar7 = (longlong *)0x0;
        }
        plVar10 = (longlong *)plVar7[0x22];
        if (plVar10 == (longlong *)0x0) {
          (**(code **)(*plVar7 + 1000))(plVar7);
          plVar10 = (longlong *)plVar7[0x22];
        }
        lVar6 = local_60;
        if (local_68 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_68);
        }
        uVar2 = *(ushort *)(plVar10 + 5);
        if (*(int *)((longlong)param_3 + 0xc) < local_68) {
          FUN_1447a8aa0(param_3);
        }
        if (0 < local_68) {
          iVar8 = 0;
          do {
            (**(code **)(*plVar10 + 0x2b8))(plVar10,&local_88,lVar6);
            if (((-DAT_14cb1f0a0 < local_88) && (local_88 < DAT_14cb1f0a0)) &&
               ((-DAT_14cb1f0a8 < dStack_80 &&
                (((dStack_80 < DAT_14cb1f0a8 && (-DAT_14cb1f0b0 < local_78)) &&
                 (local_78 < DAT_14cb1f0b0)))))) {
              iVar3 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
                FUN_1403e3958(param_3,iVar3);
              }
              lVar4 = *param_3;
              *(double *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = local_78;
              pdVar1 = (double *)(lVar4 + (longlong)iVar3 * 0x18);
              *pdVar1 = local_88;
              pdVar1[1] = dStack_80;
            }
            lVar6 = lVar6 + (ulonglong)uVar2;
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_68);
        }
      }
    }
    uVar9 = CONCAT71((int7)((ulonglong)param_3 >> 8),0 < (int)param_3[1]);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14384d906 FUN_14384d906 body=579 status=ok
// SIG undefined FUN_14384d906(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14384d906(undefined8 param_1,longlong param_2,longlong *param_3)

{
  double *pdVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  longlong *local_60;
  int local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    uVar9 = 0;
  }
  else {
    local_60 = (longlong *)0x0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    cVar5 = FUN_14384d506();
    plVar7 = local_60;
    if ((((cVar5 != '\0') && (local_60 != (longlong *)0x0)) &&
        (lVar6 = FUN_1412474be(), plVar10 = local_60, lVar6 != 0)) &&
       ((*(int *)(lVar6 + 0x38) <= (int)plVar7[7] &&
        (local_60 != (longlong *)0x0 &&
         *(longlong *)(plVar7[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)))) {
      lVar6 = FUN_1412474be();
      if ((lVar6 == 0) ||
         (((int)plVar10[7] < *(int *)(lVar6 + 0x38) ||
          (plVar7 = local_60,
          *(longlong *)(plVar10[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)))) {
        plVar7 = (longlong *)0x0;
      }
      lVar6 = FUN_145869c20();
      plVar10 = local_60;
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= (int)plVar7[7])) &&
         (*(longlong *)(plVar7[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        if (((local_60 == (longlong *)0x0) || (lVar6 = FUN_1412474be(), lVar6 == 0)) ||
           (((int)plVar10[7] < *(int *)(lVar6 + 0x38) ||
            (plVar7 = local_60,
            *(longlong *)(plVar10[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)))) {
          plVar7 = (longlong *)0x0;
        }
        plVar10 = (longlong *)plVar7[0x22];
        if (plVar10 == (longlong *)0x0) {
          (**(code **)(*plVar7 + 1000))(plVar7);
          plVar10 = (longlong *)plVar7[0x22];
        }
        lVar6 = local_50;
        if (local_58 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_58);
        }
        uVar2 = *(ushort *)(plVar10 + 5);
        if (*(int *)((longlong)param_3 + 0xc) < local_58) {
          FUN_147ed6cde(param_3);
        }
        if (0 < local_58) {
          iVar8 = 0;
          do {
            (**(code **)(*plVar10 + 0x2c0))(plVar10,&local_78,lVar6);
            if (((local_78 != DAT_14cb1f060) || (NAN(local_78) || NAN(DAT_14cb1f060))) ||
               ((dStack_70 != DAT_14cb1f068 || (NAN(dStack_70) || NAN(DAT_14cb1f068))))) {
LAB_14384dae8:
              iVar3 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
                FUN_147ed6d50(param_3,iVar3);
              }
              lVar4 = *param_3;
              *(double *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = local_68;
              pdVar1 = (double *)(lVar4 + (longlong)iVar3 * 0x18);
              *pdVar1 = local_78;
              pdVar1[1] = dStack_70;
            }
            else if ((local_68 != _DAT_14cb1f070) || (NAN(local_68) || NAN(_DAT_14cb1f070)))
            goto LAB_14384dae8;
            lVar6 = lVar6 + (ulonglong)uVar2;
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_58);
        }
      }
    }
    uVar9 = CONCAT71((int7)((ulonglong)param_3 >> 8),0 < (int)param_3[1]);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14384db4c FUN_14384db4c body=2016 status=ok
// SIG undefined FUN_14384db4c(void)

/* WARNING: Removing unreachable block (ram,0x00014384e0ea) */

void FUN_14384db4c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(int *)(param_1 + 7) == 0) ||
       (uVar2 = *(uint *)((longlong)param_1 + 0x34), (int)uVar2 < 0)) ||
      (DAT_14c9647dc <= (int)uVar2)) ||
     (((lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 == 0 ||
       (*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 7))) ||
      ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))) {
    *(undefined4 *)(param_1 + 5) = 4;
    goto LAB_14384dbbf;
  }
  iVar9 = *(int *)((longlong)param_1 + 0x2c);
  if (((longlong)iVar9 < 0) || (*(int *)(param_1 + 0x23) <= iVar9)) {
    *(undefined4 *)(param_1 + 0x27) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_a8);
  }
  lVar11 = param_1[0x22];
  lVar14 = (longlong)iVar9 * 0x30;
  puVar1 = (undefined8 *)(lVar11 + lVar14);
  QueryPerformanceCounter(&local_88);
  dVar4 = (double)local_88.QuadPart * DAT_14c83f420;
  iVar9 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(lVar11 + 0x10 + lVar14);
  *(byte *)((longlong)param_1 + 0x13e) = *(byte *)((longlong)param_1 + 0x13e) & 0xf7;
  dVar4 = dVar4 + 16777216.0;
  param_1[0x2a] = param_2;
  if ((longlong)iVar9 < 0) {
    cVar6 = (**(code **)(*(longlong *)*puVar1 + 0x2b8))();
    if (cVar6 == '\0') {
      if (*(int *)((longlong)param_1 + 0x24) < 0) {
        *(undefined4 *)(param_1 + 4) = 0;
        FUN_144893a1c(param_1 + 3,0);
      }
      else {
        *(undefined4 *)(param_1 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) < 0) {
        FUN_147ed747a(param_1,0);
      }
      if (DAT_14c950c29 == '\x01') {
        if (puVar1[4] != 0) {
          FUN_1456cec3c();
          goto LAB_14384de82;
        }
        param_1[2] = 0;
        *(byte *)((longlong)param_1 + 0x13e) = *(byte *)((longlong)param_1 + 0x13e) & 0xfd;
LAB_14384debc:
        plVar13 = (longlong *)0x0;
      }
      else {
LAB_14384de82:
        lVar11 = puVar1[4];
        param_1[2] = lVar11;
        *(byte *)((longlong)param_1 + 0x13e) = *(byte *)((longlong)param_1 + 0x13e) & 0xfd;
        if ((((lVar11 == 0) || (lVar14 = FUN_1412474be(), lVar14 == 0)) ||
            (*(int *)(lVar11 + 0x38) < *(int *)(lVar14 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
            lVar14 + 0x30)) goto LAB_14384debc;
        plVar13 = (longlong *)param_1[2];
      }
      lVar11 = plVar13[0x22];
      if (lVar11 == 0) {
        (**(code **)(*plVar13 + 1000))(plVar13);
        lVar11 = plVar13[0x22];
      }
      *(undefined2 *)((longlong)param_1 + 0x13c) = *(undefined2 *)(lVar11 + 0x28);
    }
    (**(code **)(*(longlong *)*puVar1 + 0x2c0))((longlong *)*puVar1,param_1);
    bVar8 = (**(code **)(*(longlong *)*puVar1 + 0x2b8))();
    bVar8 = (*(byte *)((longlong)param_1 + 0x13e) & 8) >> 3 | bVar8;
    *(byte *)((longlong)param_1 + 0x13e) =
         *(byte *)((longlong)param_1 + 0x13e) & 0xf7 | bVar8 * '\b';
    if (bVar8 == 0) {
      uVar2 = *(uint *)(param_1[0x22] + 0x10 + (longlong)*(int *)((longlong)param_1 + 0x2c) * 0x30);
      *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_1 + 1);
      plVar13 = param_1 + 0x25;
      iVar9 = *(int *)((longlong)param_1 + 0x134);
      FUN_147ed369c(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
      *(undefined4 *)(param_1 + 0x26) = 0;
      if ((iVar9 < 0) && (*(int *)((longlong)param_1 + 0x134) != 0)) {
        FUN_147ed7514(plVar13,0);
      }
      *(byte *)((longlong)param_1 + 0x13e) = *(byte *)((longlong)param_1 + 0x13e) & 0xfe;
      if ((0 < *(int *)(param_1 + 0x27)) &&
         ((*(int *)(param_1 + 0x27) <= *(int *)((longlong)param_1 + 0x134) ||
          (FUN_147ed7514(), 0 < *(int *)(param_1 + 0x27))))) {
        iVar9 = 0;
        do {
          local_88.QuadPart = 0;
          uStack_80 = (ulonglong)uVar2;
          if (uVar2 != 0) {
            FUN_14475e4ac(&local_88);
          }
          memset((void *)local_88,0,(longlong)(int)uVar2 << 2);
          iVar3 = *(int *)(param_1 + 0x26);
          uVar10 = iVar3 + 1;
          *(uint *)(param_1 + 0x26) = uVar10;
          if (*(uint *)((longlong)param_1 + 0x134) < uVar10) {
            FUN_147ed7574(plVar13);
          }
          lVar11 = *plVar13;
          lVar14 = (longlong)iVar3 * 0x10;
          *(undefined8 *)(lVar11 + lVar14) = 0;
          *(LARGE_INTEGER *)(lVar11 + lVar14) = local_88;
          *(undefined4 *)(lVar11 + 8 + lVar14) = (undefined4)uStack_80;
          *(undefined4 *)(lVar11 + 0xc + lVar14) = uStack_80._4_4_;
          uStack_80 = 0;
          local_88.QuadPart = 0;
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x27));
      }
      lVar11 = param_1[2];
      if (lVar11 == 0) {
LAB_14384e1d5:
        param_1[0x2c] = 0;
LAB_14384e1e0:
        lVar11 = 0;
      }
      else {
        lVar14 = FUN_1412474be();
        if (((lVar14 == 0) || (*(int *)(lVar11 + 0x38) < *(int *)(lVar14 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
            lVar14 + 0x30)) {
LAB_14384e15a:
          lVar11 = 0;
        }
        else {
          lVar11 = param_1[2];
          if (lVar11 == 0) goto LAB_14384e1d5;
          lVar14 = FUN_1412474be();
          if (((lVar14 == 0) || (*(int *)(lVar11 + 0x38) < *(int *)(lVar14 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
              lVar14 + 0x30)) {
            lVar11 = 0;
          }
          else {
            lVar11 = param_1[2];
          }
          lVar14 = FUN_145869c20();
          if (((lVar14 == 0) || (*(int *)(lVar11 + 0x38) < *(int *)(lVar14 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
              lVar14 + 0x30)) goto LAB_14384e15a;
          lVar11 = param_1[2];
          if ((((lVar11 == 0) || (lVar14 = FUN_1412474be(), lVar14 == 0)) ||
              (*(int *)(lVar11 + 0x38) < *(int *)(lVar14 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
              lVar14 + 0x30)) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = (longlong *)param_1[2];
          }
          lVar11 = plVar13[0x22];
          if (lVar11 == 0) {
            (**(code **)(*plVar13 + 1000))(plVar13);
            lVar11 = plVar13[0x22];
          }
        }
        lVar14 = param_1[2];
        param_1[0x2c] = lVar11;
        if (((lVar14 == 0) || (lVar11 = FUN_1412474be(), lVar11 == 0)) ||
           ((*(int *)(lVar14 + 0x38) < *(int *)(lVar11 + 0x38) ||
            ((*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
              lVar11 + 0x30 || (lVar11 = param_1[2], lVar11 == 0)))))) goto LAB_14384e1e0;
        lVar14 = FUN_1412474be();
        if ((lVar14 == 0) ||
           ((*(int *)(lVar11 + 0x38) < *(int *)(lVar14 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
             lVar14 + 0x30)))) {
          lVar11 = 0;
        }
        else {
          lVar11 = param_1[2];
        }
        lVar14 = FUN_1459eb736();
        if (((lVar14 == 0) || (*(int *)(lVar11 + 0x38) < *(int *)(lVar14 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
            lVar14 + 0x30)) goto LAB_14384e1e0;
        lVar11 = param_1[2];
        if (((lVar11 == 0) || (lVar14 = FUN_1412474be(), lVar14 == 0)) ||
           ((*(int *)(lVar11 + 0x38) < *(int *)(lVar14 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
             lVar14 + 0x30)))) {
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = (longlong *)param_1[2];
        }
        lVar11 = plVar13[0x22];
        if (lVar11 == 0) {
          (**(code **)(*plVar13 + 1000))(plVar13);
          lVar11 = plVar13[0x22];
        }
      }
      param_1[0x2d] = lVar11;
      goto LAB_14384e1e9;
    }
LAB_14384df2f:
    bVar5 = false;
LAB_14384df31:
    QueryPerformanceCounter(&local_88);
    param_1[0x29] =
         (((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) - dVar4) + (double)param_1[0x29];
    if (bVar5) goto LAB_14384df6c;
  }
  else {
    if (iVar9 < *(int *)(puVar1 + 2)) {
      plVar13 = *(longlong **)(puVar1[1] + (longlong)iVar9 * 8);
      cVar6 = (**(code **)(*plVar13 + 0x2b8))(plVar13);
      if (cVar6 == '\0') {
        if (((iVar9 < iVar3 + -1) || (*(int *)(param_1 + 0x2b) != 0)) ||
           ((*(char *)((longlong)plVar13 + 0x34) != '\0' &&
            ((*(char *)((longlong)plVar13 + 0x34) == '\x01' ||
             (*(char *)((longlong)plVar13 + 0xf9) != '\x04')))))) {
          *(byte *)((longlong)param_1 + 0x13e) = *(byte *)((longlong)param_1 + 0x13e) & 0xfd;
        }
        else {
          *(byte *)((longlong)param_1 + 0x13e) = *(byte *)((longlong)param_1 + 0x13e) | 2;
          if ((*(int *)((longlong)param_1 + 0x124) == 0) && (1 < *(int *)(puVar1 + 2))) {
            uVar12 = 0;
            do {
              if (*(char *)(*(longlong *)(puVar1[1] + uVar12 * 8) + 0x34) != '\0') {
                FUN_147ed6de4(*param_1,*(undefined4 *)(param_1 + 1));
                break;
              }
              uVar12 = uVar12 + 1;
            } while (*(int *)(puVar1 + 2) - 1 != uVar12);
          }
        }
      }
      iVar9 = *(int *)((longlong)param_1 + 0x124);
      (**(code **)(*plVar13 + 0x2c0))(plVar13,param_1);
      bVar7 = (**(code **)(*plVar13 + 0x2b8))(plVar13);
      bVar8 = *(byte *)((longlong)param_1 + 0x13e);
      bVar7 = (bVar8 & 8) >> 3 | bVar7;
      *(byte *)((longlong)param_1 + 0x13e) = bVar8 & 0xf7 | bVar7 * '\b';
      if ((bVar7 != 0) ||
         ((((bVar8 & 1) == 0 && (*(int *)((longlong)param_1 + 0x124) < *(int *)(param_1 + 1))) &&
          (iVar9 != *(int *)((longlong)param_1 + 0x124))))) goto LAB_14384df2f;
      FUN_147ecf266(param_1);
LAB_14384e1e9:
      bVar5 = true;
      goto LAB_14384df31;
    }
    QueryPerformanceCounter(&local_88);
    param_1[0x29] =
         (((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) - dVar4) + (double)param_1[0x29];
LAB_14384df6c:
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  if (((*(byte *)((longlong)param_1 + 0x13e) & 8) != 0) || (*(int *)(param_1 + 5) != 0))
  goto LAB_14384dbbf;
  if (*(int *)(puVar1 + 2) == *(int *)(param_1 + 0x24)) {
    if (*(int *)(param_1 + 0x27) < 1) goto LAB_14384dfb4;
  }
  else {
    if (0 < *(int *)(param_1 + 0x27)) goto LAB_14384dbbf;
LAB_14384dfb4:
    iVar9 = *(int *)((longlong)param_1 + 0x2c) + 1;
    if (iVar9 < *(int *)(param_1 + 0x23)) {
      *(int *)((longlong)param_1 + 0x2c) = iVar9;
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      goto LAB_14384dbbf;
    }
  }
  FUN_14384e350(param_1);
LAB_14384dbbf:
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14384e350 FUN_14384e350 body=206 status=ok
// SIG undefined FUN_14384e350(void)

void FUN_14384e350(undefined8 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x27) < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    uVar1 = 2;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_147ed747a(param_1,0);
    }
  }
  else if (*(int *)(param_1 + 0x2b) == 0) {
    uVar1 = 1;
    if ((*(byte *)((longlong)param_1 + 0x13e) & 3) == 0) {
      FUN_147ed6de4(*param_1,*(undefined4 *)(param_1 + 1));
      FUN_14384e454(param_1,0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x2b) - 1U < 2) {
      FUN_147ed6de4(*param_1,*(undefined4 *)(param_1 + 1));
      FUN_147ecf688(param_1,*(float *)*param_1 *
                            *(float *)(&DAT_14abe5b98 +
                                      (ulonglong)(*(int *)(param_1 + 0x2b) == 1) * 4));
    }
    else {
      FUN_147ed6de4(*param_1,*(undefined4 *)(param_1 + 1));
      FUN_147ecf610(param_1,*(undefined4 *)(param_1 + 0x27));
      FUN_147ecf58c(param_1);
    }
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 5) = uVar1;
  return;
}



// FUNCTION 14384e41e FUN_14384e41e body=52 status=ok
// SIG undefined FUN_14384e41e(void)

void FUN_14384e41e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)*(ushort *)(param_1 + 0x13c) * param_2 + *(int *)(param_1 + 0x20);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)(param_1 + 0x24) < iVar1) {
    FUN_144893a1c(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 14384e454 FUN_14384e454 body=134 status=ok
// SIG undefined FUN_14384e454(void)

void FUN_14384e454(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar5 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[1])) {
    uVar5 = (ulonglong)param_2;
  }
  uVar1 = *(undefined4 *)(*param_1 + uVar5 * 8);
  uVar2 = *(uint *)(*param_1 + 4 + uVar5 * 8);
  *(undefined4 *)(param_1 + 1) = 0;
  uVar4 = 1;
  if (*(int *)((longlong)param_1 + 0xc) != 1) {
    FUN_147ed747a(param_1,1);
    iVar6 = (int)param_1[1];
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
  }
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (uVar4 < iVar6 + 1U) {
    FUN_147ed7358(param_1,iVar6);
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + (longlong)iVar6 * 8) = uVar1;
  *(uint *)(lVar3 + 4 + (longlong)iVar6 * 8) = uVar2 & 0x7fffffff;
  *(undefined4 *)(param_1 + 0x27) = 1;
  return;
}



// FUNCTION 14384e4da FUN_14384e4da body=83 status=ok
// SIG undefined FUN_14384e4da(void)

undefined8 FUN_14384e4da(void)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_20,L"not available in shipping");
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14384e52e FUN_14384e52e body=231 status=ok
// SIG undefined FUN_14384e52e(void)

undefined8 FUN_14384e52e(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    if ((longlong *)*param_3 == (longlong *)0x0 || (int)param_3[1] == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return 0xffffffff;
    }
    plVar2 = (longlong *)(**(code **)(*(longlong *)*param_3 + 8))();
    if ((plVar2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
      *(longlong **)(param_1 + 8) = plVar2;
      if (plVar2 == (longlong *)0x0) {
        return 0xffffffff;
      }
    }
    else {
      FUN_1456cec3c(plVar2);
      *(longlong **)(param_1 + 8) = plVar2;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*plVar2 + 0x180))(plVar2);
    if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x10) = lVar1;
      if (lVar1 == 0) {
        return 0xffffffff;
      }
    }
    else {
      FUN_1456cec3c(lVar1);
      *(longlong *)(param_1 + 0x10) = lVar1;
    }
  }
  lVar1 = FUN_147ec5440(lVar1);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  uVar3 = FUN_147ed0816(lVar1,param_1,param_2,param_3);
  return uVar3;
}



// FUNCTION 14384e62a FUN_14384e62a body=3957 status=ok
// SIG undefined FUN_14384e62a(void)

longlong * FUN_14384e62a(longlong param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  LARGE_INTEGER *pLVar14;
  undefined2 *puVar15;
  LARGE_INTEGER LVar16;
  DWORD DVar17;
  uint uVar18;
  uint uVar19;
  LARGE_INTEGER LVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_318;
  longlong local_310;
  uint local_308;
  uint local_304;
  LARGE_INTEGER local_300;
  uint local_2f4;
  longlong local_2f0;
  longlong local_2e8;
  uint local_2e0;
  int local_2dc;
  longlong *local_2d8;
  longlong local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined2 *local_2a8;
  int iStack_2a0;
  undefined2 *local_298;
  undefined8 uStack_290;
  LARGE_INTEGER local_288;
  LARGE_INTEGER LStack_280;
  undefined2 *local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined2 *local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined8 uStack_21c;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined6 uStack_150;
  undefined2 uStack_14a;
  undefined6 uStack_148;
  byte local_142;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined8 local_120;
  undefined8 uStack_118;
  LARGE_INTEGER local_110;
  undefined2 local_68 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  lVar10 = *param_3;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x40) != 0)) {
    local_298 = (undefined2 *)0x0;
    uStack_290 = 0;
    local_308 = param_4;
    FUN_14005eb28(&local_298,0x80);
    local_288.QuadPart = (LONGLONG)&local_268;
    uStack_270 = uStack_270 & 0xffffffffffffff00;
    local_278 = local_68;
    local_2a8 = *(undefined2 **)(*(longlong *)(lVar10 + 0x10) + 0x18);
    LStack_280.QuadPart = local_288.QuadPart;
    FUN_14005eb5c(&local_2a8,&local_288);
    if (local_278 <= (undefined2 *)(LStack_280.QuadPart + 2)) {
      FUN_140213274(&local_288,1);
    }
    *(undefined2 *)LStack_280 = 0x20;
    LStack_280.QuadPart = LStack_280.QuadPart + 2;
    FUN_144750bde(lVar10,0,&local_288);
    FUN_1400020e8(&local_298,local_288.QuadPart,
                  (ulonglong)(LStack_280.QuadPart - (longlong)local_288) >> 1);
    if ((char)uStack_270 == '\x01') {
      FUN_1400020a8(local_288.QuadPart);
    }
    iVar22 = (int)uStack_290 + -1;
    if ((int)uStack_290 == 0) {
      iVar22 = 0;
    }
    FUN_1446f82e2(&local_288,iVar22,local_298,1);
    LVar16 = local_288;
    if (local_298 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar11 = (longlong *)(param_1 + 0xa8);
    if (0 < (longlong)*(int *)(param_1 + 0xb0)) {
      lVar23 = *plVar11;
      lVar6 = 0;
      do {
        if ((*(undefined8 **)(lVar23 + 0x178 + lVar6) == (undefined8 *)LVar16.QuadPart) &&
           (*(uint *)(lVar23 + 0x160 + lVar6) == local_308)) {
          lVar23 = lVar23 + lVar6 + 8;
          if (lVar23 != 0) goto LAB_14384f2e3;
          break;
        }
        lVar6 = lVar6 + 0x180;
      } while ((longlong)*(int *)(param_1 + 0xb0) * 0x180 != lVar6);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb1fcb0) && (FUN_144b3d300(&DAT_14cb1fcb0), DAT_14cb1fcb0 == -1)) {
      DAT_14cb1fca8 = FUN_147e9a81a();
      _Init_thread_footer(&DAT_14cb1fcb0);
    }
    local_2c8 = param_3;
    if (DAT_14cb1fca8 == 0) {
      local_2b8 = *(undefined8 *)(lVar10 + 0x18);
      FUN_1400021e4(&local_2b8,&local_288);
      LVar20 = local_288;
      if (LStack_280.s.LowPart == 0) {
        LVar20.QuadPart = (LONGLONG)&DAT_149dfb77a;
      }
      FUN_140002266(&local_298,L"%s_%d",LVar20.QuadPart,local_308 & 0xff);
    }
    else {
      FUN_1401cfad2(DAT_14cb1fca8,&local_288,(longlong)(int)local_308);
      LVar20.QuadPart = (LONGLONG)&DAT_149dfb77a;
      if (LStack_280.s.LowPart != 0) {
        LVar20 = local_288;
      }
      local_2b0 = *(undefined8 *)(lVar10 + 0x18);
      FUN_1400021e4(&local_2b0,&local_2a8);
      puVar15 = &DAT_149dfb77a;
      if (iStack_2a0 != 0) {
        puVar15 = local_2a8;
      }
      FUN_140002266(&local_298,L"%s_%s",puVar15,LVar20.QuadPart);
      if (local_2a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((undefined8 *)local_288.QuadPart != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    puVar15 = local_298;
    if ((int)uStack_290 == 0) {
      puVar15 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_2c0,puVar15,1);
    local_320 = 0;
    local_328 = 0;
    local_318 = 0xfff00007;
    local_300.QuadPart = FUN_14092e7b3(lVar10,param_1,local_2c0,0xffffffff);
    local_1f0 = 0;
    local_1e8 = 0;
    local_240 = (undefined2 *)0x0;
    uStack_238 = 0;
    local_230 = 0;
    uStack_228 = 0;
    uStack_224 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_288.QuadPart = 0;
    LStack_280.QuadPart = 0;
    local_278 = (undefined2 *)0x0;
    uStack_270 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    local_1e4 = 0xffffffff00000080;
    local_1dc = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_194 = 0xffffffff00000080;
    local_18c = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0xffffffffffffffff;
    uStack_148 = 0;
    local_158 = 0;
    uStack_150 = 0;
    uStack_14a = 0;
    local_142 = local_142 & 0xf0;
    local_140 = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110.s = LVar16.s;
    if (((undefined8 *)local_300.QuadPart != (undefined8 *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_230 = *(undefined8 *)(local_300.QuadPart + 0x18);
    local_2b0 = *(undefined8 *)(local_300.QuadPart + 0x30);
    local_288 = local_300;
    FUN_1400021e4(&local_2b0,&local_2a8);
    if (local_240 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_240 = local_2a8;
    uStack_12c = CONCAT44(local_308,(undefined4)uStack_12c);
    iVar22 = *(int *)(param_1 + 0xb0);
    *(uint *)(param_1 + 0xb0) = iVar22 + 1U;
    if (*(uint *)(param_1 + 0xb4) < iVar22 + 1U) {
      FUN_147ed80b8(plVar11,iVar22);
    }
    FUN_147ed806a(*plVar11 + (longlong)iVar22 * 0x180,&local_288);
    lVar23 = *plVar11 + (longlong)iVar22 * 0x180 + 8;
    FUN_143851c62(&LStack_280);
    iVar22 = *(int *)(local_300.QuadPart + 0x40);
    if (0 < iVar22) {
      uVar19 = 0;
      iVar21 = 0;
      LVar16 = local_300;
      local_2d8 = param_2;
      do {
        lVar6 = (longlong)(int)uVar19;
        lVar10 = *(longlong *)(*(longlong *)(LVar16.QuadPart + 0x38) + lVar6 * 8);
        if ((lVar10 == 0) || (*(longlong **)(lVar10 + 0x28) == (longlong *)0x0)) {
LAB_14384ec64:
          if (~uVar19 + iVar22 != 0) {
            memmove((void *)(*(longlong *)(LVar16.QuadPart + 0x38) + lVar6 * 8),
                    (void *)(*(longlong *)(LVar16.QuadPart + 0x38) + lVar6 * 8 + 8),
                    (longlong)(int)(~uVar19 + iVar22) << 3);
            iVar22 = *(int *)(local_300.QuadPart + 0x40);
            LVar16 = local_300;
          }
          *(int *)(LVar16.QuadPart + 0x40) = iVar22 + -1;
          uVar19 = uVar19 - 1;
        }
        else {
          cVar4 = (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x2c8))();
          if (cVar4 == '\0') {
            iVar22 = *(int *)(local_300.QuadPart + 0x40);
            LVar16 = local_300;
            goto LAB_14384ec64;
          }
          local_318 = 0xfff00007;
          local_320 = 0;
          local_328 = 0;
          local_2dc = iVar21;
          lVar7 = FUN_14092e7b3(lVar10,param_1,0,0xffffffff);
          local_318 = 0xfff00007;
          local_320 = 0;
          local_328 = 0;
          lVar8 = FUN_14092e7b3(*(undefined8 *)(lVar10 + 0x28),param_1,0,0xffffffff);
          lVar9 = *(longlong *)(local_300.QuadPart + 0x38);
          if (lVar7 != 0 && DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar7);
          }
          param_2 = local_2d8;
          bVar3 = DAT_14c950c29;
          *(longlong *)(lVar9 + lVar6 * 8) = lVar7;
          local_310 = lVar7;
          if ((lVar8 != 0) && ((bVar3 & 1) != 0)) {
            FUN_1456cec3c(lVar8);
          }
          *(longlong *)(local_310 + 0x28) = lVar8;
          LVar16.s.HighPart = 0;
          LVar16.s.LowPart = *(uint *)(lVar10 + 0x38);
          if ((undefined2 *)LVar16.QuadPart == (undefined2 *)0x0) {
            local_288.QuadPart = 0;
            LStack_280.QuadPart = 0;
            pLVar14 = &local_288;
            lVar10 = local_310;
          }
          else {
            if (((1 < (int)*(uint *)(lVar10 + 0x38)) &&
                (lVar6 = *(longlong *)(*(longlong *)(lVar10 + 0x30) + -8 + LVar16.QuadPart * 8),
                lVar6 != 0)) && (*(int *)(lVar6 + 0x30) == 0)) {
              lVar6 = 0;
              do {
                lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x30) + lVar6 * 8);
                if (lVar9 != 0) {
                  *(int *)(lVar9 + 0x30) = (int)lVar6;
                  LVar16.s.HighPart = 0;
                  LVar16.s.LowPart = *(uint *)(lVar10 + 0x38);
                }
                lVar6 = lVar6 + 1;
              } while (lVar6 < (int)LVar16.s.LowPart);
            }
            if (local_308 == 0) {
              local_304 = (uint)CONCAT71((int7)((ulonglong)lVar8 >> 8),*(undefined1 *)(lVar8 + 0x48)
                                        ) & 0xffffff01;
            }
            else {
              local_304 = 0;
            }
            local_288.QuadPart = 0;
            _Src = *(void **)(lVar10 + 0x30);
            DVar17 = LVar16.s.LowPart;
            LStack_280.s.LowPart = DVar17;
            local_2d0 = lVar8;
            if (DVar17 != 0) {
              FUN_147ed814c(&local_288,LVar16.QuadPart,0);
              memcpy((void *)local_288,_Src,(longlong)(int)DVar17 << 3);
              LVar16 = LStack_280;
            }
            LStack_280 = LVar16;
            lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x28) + 0x40);
            if ((DAT_14c950c29 == 1) && (lVar10 != 0)) {
              FUN_1456cec3c(lVar10);
            }
            if ((longlong)(int)LStack_280.s.LowPart < 1) {
              pLVar14 = (LARGE_INTEGER *)(local_310 + 0x30);
              FUN_147ed0a24(pLVar14,LStack_280.QuadPart & 0xffffffff);
LAB_14384f149:
              if ((int)LStack_280.s.LowPart < 1) {
                lVar10 = local_310;
                lVar6 = 0;
              }
              else {
                lVar10 = 0;
                do {
                  local_318 = 0xfff00007;
                  local_320 = 0;
                  local_328 = 0;
                  lVar6 = FUN_14092e7b3(*(undefined8 *)(local_288.QuadPart + lVar10 * 8),param_1,0,
                                        0xffffffff);
                  if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c(lVar6);
                  }
                  iVar22 = *(int *)(local_310 + 0x38);
                  *(uint *)(local_310 + 0x38) = iVar22 + 1U;
                  if (*(uint *)(local_310 + 0x3c) < iVar22 + 1U) {
                    FUN_147ed820e(pLVar14,iVar22);
                  }
                  *(longlong *)(pLVar14->QuadPart + (longlong)iVar22 * 8) = lVar6;
                  if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c(lVar6);
                  }
                  lVar10 = lVar10 + 1;
                } while (lVar10 < (int)LStack_280.s.LowPart);
                lVar10 = local_310;
                lVar6 = 0;
              }
            }
            else {
              iVar22 = -LStack_280.s.LowPart;
              local_2e0 = 0;
              local_2f4 = 0xffffffff;
              uVar13 = (longlong)(int)LStack_280.s.LowPart;
              local_2e8 = param_1;
              do {
                lVar6 = ((undefined8 *)(local_288.QuadPart + -8))[uVar13];
                if (lVar6 == 0) {
LAB_14384ee22:
                  if (uVar13 != (LStack_280.QuadPart & 0xffffffffU)) {
                    memmove((undefined8 *)(local_288.QuadPart + uVar13 * 8) + -1,
                            (undefined8 *)(local_288.QuadPart + uVar13 * 8),
                            (longlong)(int)(LStack_280.s.LowPart + iVar22) << 3);
                  }
                  LStack_280.s.LowPart = LStack_280.s.LowPart - 1;
                }
                else {
                  if ((DAT_14c950c29 == 1) && (lVar10 != 0)) {
                    FUN_1456cec3c(lVar10);
                  }
                  else if (lVar10 == 0) goto LAB_14384ee22;
                  lVar9 = FUN_1412474be();
                  if (((lVar9 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38))) ||
                     (*(longlong *)
                       (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                      lVar9 + 0x30)) goto LAB_14384ee22;
                  lVar9 = FUN_1412474be();
                  if (((lVar9 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38))) ||
                     (lVar7 = lVar10,
                     *(longlong *)
                      (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                     lVar9 + 0x30)) {
                    lVar7 = 0;
                  }
                  lVar9 = *(longlong *)(lVar6 + 0x1e8);
                  if (((lVar9 == 0) || (lVar8 = FUN_1412474be(), lVar8 == 0)) ||
                     ((*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38) ||
                      (*(longlong *)
                        (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
                       lVar8 + 0x30)))) {
                    lVar9 = 0;
                  }
                  else {
                    lVar9 = *(longlong *)(lVar6 + 0x1e8);
                  }
                  param_1 = local_2e8;
                  if (lVar7 != lVar9) {
                    lVar9 = FUN_1412474be();
                    if ((lVar9 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38))) {
                      local_2f0 = 0;
                    }
                    else {
                      local_2f0 = lVar10;
                      if (*(longlong *)
                           (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                          lVar9 + 0x30) {
                        local_2f0 = 0;
                      }
                    }
                    lVar9 = *(longlong *)(lVar6 + 0x1e8);
                    if (((((lVar9 == 0) || (lVar7 = FUN_1412474be(), lVar7 == 0)) ||
                         (*(int *)(lVar9 + 0x38) < *(int *)(lVar7 + 0x38))) ||
                        ((*(longlong *)
                           (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
                          lVar7 + 0x30 || (lVar9 = *(longlong *)(lVar6 + 0x1e8), lVar9 == 0)))) ||
                       ((*(int *)(local_2f0 + 0x38) < *(int *)(lVar9 + 0x38) ||
                        (*(longlong *)
                          (*(longlong *)(local_2f0 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                         != lVar9 + 0x30)))) goto LAB_14384ee22;
                  }
                  if ((((byte)local_304 != '\0') && (*(char *)(lVar6 + 0x34) == '\0')) &&
                     (local_2f4 == 0xffffffff || (int)local_2e0 < (int)(uint)*(byte *)(lVar6 + 0xf8)
                     )) {
                    local_2f4 = (int)uVar13 - 1;
                    local_2e0 = (uint)*(byte *)(lVar6 + 0xf8);
                  }
                }
                iVar22 = iVar22 + 1;
                bVar24 = 1 < uVar13;
                uVar13 = uVar13 - 1;
              } while (bVar24);
              pLVar14 = (LARGE_INTEGER *)(local_310 + 0x30);
              FUN_147ed0a24(pLVar14,LStack_280.QuadPart & 0xffffffff);
              uVar18 = local_2f4;
              param_2 = local_2d8;
              if (((byte)local_304 & local_2f4 != 0xffffffff) == 0) goto LAB_14384f149;
              local_318 = 0xfff00007;
              local_320 = 0;
              local_328 = 0;
              lVar6 = FUN_14092e7b3(*(undefined8 *)
                                     (local_288.QuadPart + (longlong)(int)local_2f4 * 8),param_1,0,
                                    0xffffffff);
              lVar10 = local_310;
              param_2 = local_2d8;
              if (0 < (int)LStack_280.s.LowPart) {
                uVar13 = 0;
                local_2f0 = lVar6;
                do {
                  if (uVar18 != uVar13) {
                    local_318 = 0xfff00007;
                    local_320 = 0;
                    local_328 = 0;
                    lVar6 = FUN_14092e7b3(*(undefined8 *)(local_288.QuadPart + uVar13 * 8),param_1,0
                                          ,0xffffffff);
                    if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
                      FUN_1456cec3c(lVar6);
                    }
                    iVar22 = *(int *)(local_310 + 0x38);
                    *(uint *)(local_310 + 0x38) = iVar22 + 1U;
                    if (*(uint *)(local_310 + 0x3c) < iVar22 + 1U) {
                      FUN_147ed820e(pLVar14,iVar22);
                    }
                    *(longlong *)(pLVar14->QuadPart + (longlong)iVar22 * 8) = lVar6;
                    lVar10 = local_310;
                    if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
                      FUN_1456cec3c(lVar6);
                      lVar10 = local_310;
                    }
                  }
                  uVar13 = uVar13 + 1;
                  lVar6 = local_2f0;
                  param_2 = local_2d8;
                } while ((longlong)uVar13 < (longlong)(int)LStack_280.s.LowPart);
              }
            }
            if (((LStack_280.s.LowPart != 0) && ((*(byte *)(local_2d0 + 0x48) & 1) != 0)) &&
               (FUN_147ed8293(*(undefined8 *)(local_310 + 0x30),*(undefined4 *)(local_310 + 0x38)),
               lVar10 = local_310, (char)local_304 == '\x01' && lVar6 != 0)) {
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar6);
              }
              iVar22 = *(int *)(local_310 + 0x38);
              *(uint *)(local_310 + 0x38) = iVar22 + 1U;
              if (*(uint *)(local_310 + 0x3c) < iVar22 + 1U) {
                FUN_147ed820e(pLVar14,iVar22);
              }
              *(longlong *)(pLVar14->QuadPart + (longlong)iVar22 * 8) = lVar6;
              lVar10 = local_310;
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar6);
                lVar10 = local_310;
              }
            }
          }
          iVar21 = local_2dc;
          FUN_14384fb64(lVar10,local_2dc,pLVar14,lVar23);
          LVar16 = local_300;
          if ((undefined8 *)local_288.QuadPart != (undefined8 *)0x0) {
            FUN_1400020a8();
            LVar16 = local_300;
          }
        }
        uVar19 = uVar19 + 1;
        iVar21 = iVar21 + 1;
        iVar22 = *(int *)(LVar16.QuadPart + 0x40);
      } while ((int)uVar19 < iVar22);
    }
    param_3 = local_2c8;
    if (local_298 != (undefined2 *)0x0) {
      FUN_1400020a8();
      param_3 = local_2c8;
    }
LAB_14384f2e3:
    if (*(int *)(lVar23 + 0x118) != 0) {
      lVar10 = FUN_14001cc68(0x170,0x10);
      FUN_143851bb4(lVar10,lVar23);
      plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14ac04910;
      plVar11[2] = lVar10;
      if (lVar10 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        goto LAB_14384f423;
      }
      uVar12 = FUN_14012483a(param_1);
      *(undefined8 *)(lVar10 + 0x58) = uVar12;
      lVar23 = param_3[1];
      if ((lVar23 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar23);
LAB_14384f375:
        uVar19 = *(uint *)(lVar23 + 0xc);
        if ((int)uVar19 < DAT_14c9647dc) {
          lVar23 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
        }
        else {
          lVar23 = 0;
        }
        uVar13 = (ulonglong)*(uint *)(lVar23 + 0x10);
        if (*(uint *)(lVar23 + 0x10) == 0) {
          LOCK();
          iVar22 = DAT_14c964868 + 1;
          UNLOCK();
          uVar18 = DAT_14c964868 + 1;
          bVar24 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar22;
          if (bVar24) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar18);
          }
          LOCK();
          uVar5 = *(uint *)(lVar23 + 0x10);
          bVar24 = uVar5 == 0;
          if (bVar24) {
            *(uint *)(lVar23 + 0x10) = uVar18;
            uVar5 = 0;
          }
          UNLOCK();
          if (bVar24) {
            uVar5 = uVar18;
          }
          uVar13 = (ulonglong)uVar5;
        }
      }
      else {
        if (lVar23 != 0) goto LAB_14384f375;
        uVar19 = 0;
        uVar13 = 0;
      }
      *(ulonglong *)(lVar10 + 0x34) = (ulonglong)uVar19 | uVar13 << 0x20;
      QueryPerformanceCounter(&local_288);
      *(double *)(lVar10 + 0x140) = (double)local_288.QuadPart * DAT_14c83f420 + 16777216.0;
      FUN_140d188f2(lVar10 + 0x70,param_3 + 3);
      iVar22 = *(int *)(param_1 + 0x128);
      *(int *)(param_1 + 0x128) = iVar22 + 1;
      *(int *)(lVar10 + 0x30) = iVar22;
      *param_2 = lVar10;
      param_2[1] = (longlong)plVar11;
      goto LAB_14384f423;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14384f423:
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14384f5a0 FUN_14384f5a0 body=121 status=ok
// SIG undefined FUN_14384f5a0(void)

undefined4 FUN_14384f5a0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  if (*param_2 != 0) {
    FUN_147ed7936(*param_2 + 0x60,param_3);
    iVar1 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
      FUN_147ed79ba((longlong *)(param_1 + 0x40),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
    lVar3 = param_2[1];
    *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    uVar4 = *(undefined4 *)(*param_2 + 0x30);
  }
  return uVar4;
}



// FUNCTION 14384f61a FUN_14384f61a body=1011 status=ok
// SIG undefined FUN_14384f61a(void)

void FUN_14384f61a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  void *_Dst;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  longlong local_c8;
  longlong *local_c0;
  LARGE_INTEGER local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 0x18);
  iVar9 = *(int *)(param_1 + 0x20);
  iVar12 = 0;
  if (0 < iVar9 && 0.0 < *(float *)(param_1 + 0x104)) {
    dVar5 = (double)*(float *)(param_1 + 0x104);
    iVar12 = 0;
    local_d0 = 0;
    iVar15 = 0;
    while ((int)local_d0 + iVar12 + *(int *)(param_1 + 0x28) < iVar9) {
      QueryPerformanceCounter(&local_b8);
      dVar6 = (double)local_b8.QuadPart * DAT_14c83f420;
      lVar14 = *(longlong *)(*plVar1 + (longlong)iVar15 * 0x10);
      plVar4 = *(longlong **)(*plVar1 + 8 + (longlong)iVar15 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if ((lVar14 == 0) || (*(int *)(lVar14 + 0x28) != 0)) {
        iVar16 = iVar15 + 1;
        dVar8 = 0.0;
      }
      else {
        FUN_14384db4c(lVar14,SUB84(dVar5,0));
        if (*(int *)(lVar14 + 0x28) == 0) {
          if ((*(byte *)(lVar14 + 0x13e) & 8) != 0) {
            local_d0 = (ulonglong)((int)local_d0 + 1);
            dVar8 = 0.0;
            goto LAB_14384f7f7;
          }
          uVar13 = (uint)*(byte *)(param_1 + 0x108);
          dVar8 = 0.0;
        }
        else {
          if (*(double *)(param_1 + 0x118) <= *(double *)(lVar14 + 0x148) &&
              *(double *)(lVar14 + 0x148) != *(double *)(param_1 + 0x118)) {
            *(byte *)(lVar14 + 0x13e) = *(byte *)(lVar14 + 0x13e) | 4;
          }
          QueryPerformanceCounter(&local_b8);
          dVar8 = (double)local_b8.QuadPart * DAT_14c83f420;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          local_c8 = lVar14;
          local_c0 = plVar4;
          FUN_147ed098a(lVar14 + 0x60,&local_c8);
          QueryPerformanceCounter(&local_b8);
          dVar8 = ((double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar8 + 16777216.0);
          if (*(double *)(param_1 + 0x120) <= dVar8 && dVar8 != *(double *)(param_1 + 0x120)) {
            FUN_1446f470e(&local_b8,L"Unavailable",1);
          }
          iVar12 = iVar12 + 1;
LAB_14384f7f7:
          uVar13 = 1;
        }
        iVar16 = uVar13 + iVar15;
        if ((*(double *)(param_1 + 0x118) <= *(double *)(lVar14 + 0x148) &&
             *(double *)(lVar14 + 0x148) != *(double *)(param_1 + 0x118)) &&
           ((*(byte *)(lVar14 + 0x13e) & 4) == 0)) {
          *(byte *)(lVar14 + 0x13e) = *(byte *)(lVar14 + 0x13e) | 4;
        }
      }
      iVar15 = iVar16;
      if (iVar16 == iVar9) {
        iVar15 = 0;
      }
      if (*(char *)(param_1 + 0x108) == '\0') {
        iVar15 = iVar16;
      }
      QueryPerformanceCounter(&local_b8);
      dVar7 = (double)local_b8.QuadPart * DAT_14c83f420;
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
      dVar5 = dVar5 + (dVar8 - ((dVar7 + 16777216.0) - (dVar6 + 16777216.0)));
      if ((dVar5 <= 0.0) || (iVar9 <= iVar15)) break;
    }
  }
  iVar9 = *(int *)(param_1 + 0x28);
  uVar13 = iVar12 + iVar9;
  if (uVar13 != 0 && SCARRY4(iVar12,iVar9) == (int)uVar13 < 0) {
    uVar10 = *(uint *)(param_1 + 0x20);
    uVar17 = (ulonglong)uVar10;
    uVar11 = uVar13;
    if ((uVar13 == uVar10) || ((iVar9 < 1 && (*(char *)(param_1 + 0x108) == '\0')))) {
      do {
        QueryPerformanceCounter(&local_b8);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      _Dst = *(void **)(param_1 + 0x18);
      FUN_14597130d(_Dst,uVar13);
      iVar9 = *(int *)(param_1 + 0x20) - uVar13;
      uVar10 = uVar13;
      if (iVar9 != 0) {
        memmove(_Dst,(void *)((ulonglong)uVar13 * 0x10 + (longlong)_Dst),(longlong)iVar9 << 4);
        uVar10 = *(uint *)(param_1 + 0x20);
      }
      *(uint *)(param_1 + 0x20) = uVar10 - uVar13;
    }
    else if (0 < (int)uVar10) {
      lVar14 = uVar17 << 4;
      do {
        lVar14 = lVar14 + -0x10;
        if (*(longlong *)(*plVar1 + lVar14) == 0) {
          FUN_147ed7a40(plVar1,(int)uVar17 + -1);
        }
        else if (*(int *)(*(longlong *)(*plVar1 + lVar14) + 0x28) != 0) {
          QueryPerformanceCounter(&local_b8);
          FUN_147ed7a40(plVar1,(int)uVar17 + -1);
          uVar13 = uVar13 - 1;
        }
      } while ((1 < uVar17) && (uVar17 = uVar17 - 1, 0 < (int)uVar13));
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14384fa0e FUN_14384fa0e body=340 status=ok
// SIG undefined FUN_14384fa0e(void)

void FUN_14384fa0e(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x48);
  if (0 < iVar2) {
    local_38 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    local_30 = iVar2;
    FUN_147ed7ab6(&local_38,iVar2);
    FUN_147ed7b0c(local_38,uVar1,iVar2);
    iVar2 = *(int *)(param_1 + 0x4c);
    FUN_14597130d(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    if ((iVar2 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
      FUN_147ed7b34(param_1 + 0x40);
    }
    if (0 < local_30) {
      lVar3 = 0;
      lVar4 = 0;
      iVar2 = local_30;
      do {
        if (*(int *)(*(longlong *)(local_38 + lVar3) + 0x28) == 0) {
          *(undefined4 *)(*(longlong *)(local_38 + lVar3) + 0x28) = 2;
          local_48 = *(longlong *)(local_38 + lVar3);
          local_40 = *(longlong *)(local_38 + 8 + lVar3);
          if (local_40 != 0) {
            LOCK();
            *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
            UNLOCK();
          }
          FUN_147ed098a(local_48 + 0x60,&local_48);
          iVar2 = local_30;
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < iVar2);
    }
    FUN_14597130d(local_38);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0xd4) < 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_147ed7b64(param_1 + 200);
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14384fb64 FUN_14384fb64 body=218 status=ok
// SIG undefined FUN_14384fb64(void)

void FUN_14384fb64(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58 [2];
  undefined4 local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0;
  local_58[1] = 0;
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_40 = *(longlong *)(lVar2 + 0x40);
  local_60 = lVar2;
  if (DAT_14c950c29 == '\x01') {
    if (local_40 == 0) {
      local_40 = 0;
    }
    else {
      FUN_1456cec3c();
      local_40 = *(longlong *)(lVar2 + 0x40);
    }
  }
  local_48 = param_2;
  FUN_147ed0a4e(local_58,param_3);
  iVar1 = *(int *)(param_4 + 0x118);
  *(uint *)(param_4 + 0x118) = iVar1 + 1U;
  if (*(uint *)(param_4 + 0x11c) < iVar1 + 1U) {
    FUN_147ed859e((longlong *)(param_4 + 0x110),iVar1);
  }
  FUN_147ed35fc((longlong)iVar1 * 0x30 + *(longlong *)(param_4 + 0x110),&local_60);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14384fc44 FUN_14384fc44 body=48 status=ok
// SIG undefined FUN_14384fc44(void)

longlong FUN_14384fc44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14384fc74 FUN_14384fc74 body=48 status=ok
// SIG undefined FUN_14384fc74(void)

longlong FUN_14384fc74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14384fca4 FUN_14384fca4 body=48 status=ok
// SIG undefined FUN_14384fca4(void)

longlong FUN_14384fca4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x430;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14384fd6e FUN_14384fd6e body=3463 status=ok
// SIG undefined FUN_14384fd6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14384fd6e(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&DAT_14cb1f058,L"SelfActor",1);
  DAT_14cb1f060 = 0x47efffffe0000000;
  DAT_14cb1f068 = 0x47efffffe0000000;
  _DAT_14cb1f070 = 0x47efffffe0000000;
  _DAT_14cb1f080 = 0x47efffffe0000000;
  _DAT_14cb1f088 = 0x47efffffe0000000;
  _DAT_14cb1f090 = 0x47efffffe0000000;
  _DAT_14cb1f098 = 0x47efffffe0000000;
  DAT_14cb1f0a0 = 0x47efffffe0000000;
  DAT_14cb1f0a8 = 0x47efffffe0000000;
  DAT_14cb1f0b0 = 0x47efffffe0000000;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe5f90,1,0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14abe69e0;
  local_68 = 2;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe6a70,1,&PTR_FUN_14abe6a20);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe6fa0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe9590,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe9a70,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe9ff0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abea550,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abea9a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abeadf0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14abeb310;
  local_68 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abeb330,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14abeba90;
  local_68 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abebab0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abebf90,1,0);
  FUN_1446f470e(&DAT_14cb1f380,L"PerformConditionCheck",1);
  FUN_1446f470e(&DAT_14cb1f390,L"PerformConditionCheckAI",1);
  FUN_1446f470e(&DAT_14cb1f3a0,L"ReceiveExecutionFinish",1);
  FUN_1446f470e(&DAT_14cb1f3b0,L"ReceiveExecutionFinishAI",1);
  FUN_1446f470e(&DAT_14cb1f3c0,L"ReceiveExecutionStart",1);
  FUN_1446f470e(&DAT_14cb1f3d0,L"ReceiveExecutionStartAI",1);
  FUN_1446f470e(&DAT_14cb1f3e0,L"ReceiveObserverActivated",1);
  FUN_1446f470e(&DAT_14cb1f3f0,L"ReceiveObserverActivatedAI",1);
  FUN_1446f470e(&DAT_14cb1f400,L"ReceiveObserverDeactivated",1);
  FUN_1446f470e(&DAT_14cb1f410,L"ReceiveObserverDeactivatedAI",1);
  FUN_1446f470e(&DAT_14cb1f420,L"ReceiveTick",1);
  FUN_1446f470e(&DAT_14cb1f430,L"ReceiveTickAI",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abed580,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abedb60,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14abee170;
  local_68 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abee190,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abee650,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abeec00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abef170,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14abef870;
  local_68 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abef890,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abefd70,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf0450,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf0910,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf0f70,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf1530,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf1a30,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf1f70,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf2540,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf2a40,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf2ee0,1,0);
  FUN_1446f470e(&DAT_14cb1f610,L"ReceiveActivation",1);
  FUN_1446f470e(&DAT_14cb1f620,L"ReceiveActivationAI",1);
  FUN_1446f470e(&DAT_14cb1f630,L"ReceiveDeactivation",1);
  FUN_1446f470e(&DAT_14cb1f640,L"ReceiveDeactivationAI",1);
  FUN_1446f470e(&DAT_14cb1f650,L"ReceiveSearchStart",1);
  FUN_1446f470e(&DAT_14cb1f660,L"ReceiveSearchStartAI",1);
  FUN_1446f470e(&DAT_14cb1f670,L"ReceiveTick",1);
  FUN_1446f470e(&DAT_14cb1f680,L"ReceiveTickAI",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf3d00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf4260,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf4770,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf4cd0,1,0);
  FUN_1446f470e(&DAT_14cb1f710,L"ReceiveAbort",1);
  FUN_1446f470e(&DAT_14cb1f720,L"ReceiveAbortAI",1);
  FUN_1446f470e(&DAT_14cb1f730,L"ReceiveExecute",1);
  FUN_1446f470e(&DAT_14cb1f740,L"ReceiveExecuteAI",1);
  FUN_1446f470e(&DAT_14cb1f750,L"ReceiveTick",1);
  FUN_1446f470e(&DAT_14cb1f760,L"ReceiveTickAI",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf5c40,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf60c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf6560,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf69e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf6e20,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf7690,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf7b00,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb1f828);
  if (cVar1 == '\0') {
    _DAT_14cb1f828 = 0;
    uRam000000014cb1f830 = 0;
  }
  if (local_50 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_50 = &DAT_14a19662d;
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf80e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf85a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf8a30,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf8ee0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf9410,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abf9990,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abfa0d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abfa630,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abfab00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abfafd0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abfc8f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abfd410,1,0);
  FUN_1446f470e(&DAT_14cb1fce0,L"MoveFinished",1);
  FUN_1446f470e(&DAT_14cb1fcc8,L"RepathFailed",1);
  FUN_1446f470e(&DAT_14cb1f8e0,L"QueryFinished",1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abfde00,1,&PTR_FUN_14abfdd10);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abfe2e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abfe750,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abff1a0,1,0);
  FUN_1446f470e(&DAT_14cb1faf8,L"ProvideActorsSet",1);
  FUN_1446f470e(&DAT_14cb1fb08,L"ProvideLocationsSet",1);
  FUN_1446f470e(&DAT_14cb1fb18,L"ProvideSingleActor",1);
  FUN_1446f470e(&DAT_14cb1fb28,L"ProvideSingleLocation",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abffbc0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abfff30,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac002a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac006c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac00a20,1,0);
  FUN_140056680(&DAT_14cb1fbb0,L"LogEQS");
  atexit((_func_5014 *)&LAB_14384d4f5);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac00d80,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac01250,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac01f30,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac02ed0,1,&PTR_FUN_14ac02e50);
  DAT_14cb1fcd0 = 0;
  _DAT_14cb1fcd8 = 0;
  atexit((_func_5014 *)&LAB_14384e615);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143850af8 FUN_143850af8 body=55 status=ok
// SIG undefined FUN_143850af8(void)

void FUN_143850af8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1fd28 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1fd28 = FUN_14171c317(FUN_14642d5cd,uVar1,L"EEQSNormalizationType");
  }
  return;
}



// FUNCTION 143850b30 FUN_143850b30 body=256 status=ok
// SIG undefined FUN_143850b30(void)

void FUN_143850b30(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_11);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (((int)param_1[5] < 2) && ((char)param_1[0x3c] == '\x01')) {
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar2 == 0) {
      if (param_1[0x30] == 0) {
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) ^ 0x80000000;
      }
      else if (*(char *)((longlong)param_1 + 0xf9) == '\x02') {
        *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
      }
      else if (*(char *)((longlong)param_1 + 0xf9) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0xf9) = 2;
      }
      FUN_14282b7b8(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143850bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a0))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143850c31 FUN_143850c31 body=1577 status=ok
// SIG undefined FUN_143850c31(void)

void FUN_143850c31(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 auStack_258 [32];
  double *local_238;
  undefined1 local_230;
  longlong *local_220;
  longlong local_218;
  double local_210;
  double local_208;
  double local_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  ulonglong local_c8 [2];
  byte local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_1c0 = *(longlong *)(param_3 + 8);
  local_218 = param_3;
  if ((local_1c0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_220 = param_1;
  FUN_147e6f964(&local_1b8,param_1,param_2,&local_1c0);
  local_1d8 = 0;
  uStack_1d0 = 0;
  iVar9 = (int)param_5[1];
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  if (iVar9 != 0) {
    FUN_147ef0a0a(&local_1d8);
    lVar16 = param_5[1];
    if ((longlong)(int)lVar16 != 0) {
      lVar20 = *param_5;
      lVar13 = 0;
      do {
        uVar15 = uStack_1d0;
        local_198 = param_4[2];
        local_1a8 = (char *)*param_4;
        uStack_1a0 = param_4[1];
        uStack_180 = *(undefined8 *)(lVar20 + 0x10 + lVar13);
        uStack_190 = *(undefined8 *)(lVar20 + lVar13);
        uStack_188 = ((undefined8 *)(lVar20 + lVar13))[1];
        local_168 = *(undefined8 *)(lVar20 + 0x10 + lVar13);
        puVar3 = (undefined4 *)(lVar20 + lVar13);
        local_178 = *puVar3;
        uStack_174 = puVar3[1];
        uStack_170 = puVar3[2];
        uStack_16c = puVar3[3];
        lVar17 = (longlong)(int)uStack_1d0;
        uVar10 = (int)uStack_1d0 + 1;
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar10);
        if (uStack_1d0._4_4_ < uVar10) {
          FUN_147ef0a6e(&local_1d8,uVar15 & 0xffffffff);
        }
        lVar17 = lVar17 * 0x58;
        puVar18 = &local_1a8;
        puVar19 = (undefined8 *)(local_1d8 + lVar17);
        for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar19 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar19 = puVar19 + 1;
        }
        *(undefined8 *)(local_1d8 + 0x48 + lVar17) = 0;
        *(undefined2 *)(local_1d8 + 0x50 + lVar17) = 0;
        lVar13 = lVar13 + 0x20;
      } while ((longlong)(int)lVar16 * 0x20 != lVar13);
    }
  }
  local_1e8 = local_1b8;
  local_1e0 = local_1b0;
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
    UNLOCK();
  }
  (**(code **)(*local_220 + 0x730))(local_220,&local_1d8,&local_1e8,0);
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) < 0) {
    FUN_147ef0afe(param_5,0);
  }
  local_1f8 = 0;
  uStack_1f0 = 0;
  uVar15 = uStack_1d0 & 0xffffffff;
  if (0 < (int)uStack_1d0) {
    lVar16 = 0;
    lVar20 = 0;
    do {
      lVar13 = local_1d8;
      if (*(char *)(local_1d8 + 0x50 + lVar16) == '\x01') {
        uVar10 = (uint)uStack_1f0;
        uVar8 = uStack_1f0._4_4_;
        if (uStack_1f0._4_4_ == (uint)uStack_1f0) {
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar15 & 0xffffffff);
          }
          uVar10 = uStack_1f0._4_4_;
          if ((int)uStack_1f0._4_4_ < (int)uVar15) {
            FUN_147ef0b5e(&local_1f8);
            uVar10 = (uint)uStack_1f0;
            uVar8 = uStack_1f0._4_4_;
          }
        }
        local_198 = *(undefined8 *)(local_1d8 + 0x40 + lVar16);
        puVar18 = (undefined8 *)(local_1d8 + 0x30 + lVar16);
        local_1a8 = (char *)*puVar18;
        uStack_1a0 = puVar18[1];
        uStack_180 = *(undefined8 *)(local_1d8 + 0x28 + lVar16);
        puVar18 = (undefined8 *)(local_1d8 + 0x18 + lVar16);
        uStack_190 = *puVar18;
        uStack_188 = puVar18[1];
        uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar10 + 1);
        if (uVar8 < uVar10 + 1) {
          FUN_147ef0bce(&local_1f8,uVar10);
        }
        lVar13 = (longlong)(int)uVar10 * 0x30;
        puVar18 = (undefined8 *)(local_1f8 + 0x20 + lVar13);
        *puVar18 = uStack_188;
        puVar18[1] = uStack_180;
        puVar18 = (undefined8 *)(local_1f8 + 0x10 + lVar13);
        *puVar18 = local_198;
        puVar18[1] = uStack_190;
        puVar3 = (undefined4 *)(local_1f8 + lVar13);
        *puVar3 = (undefined4)local_1a8;
        puVar3[1] = local_1a8._4_4_;
        puVar3[2] = (undefined4)uStack_1a0;
        puVar3[3] = uStack_1a0._4_4_;
      }
      else {
        iVar9 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar9 + 1U) {
          FUN_147ef0984(param_5,iVar9);
        }
        lVar13 = lVar13 + lVar16;
        lVar17 = *param_5;
        uVar4 = *(undefined4 *)(lVar13 + 0x30);
        uVar5 = *(undefined4 *)(lVar13 + 0x34);
        uVar6 = *(undefined4 *)(lVar13 + 0x38);
        uVar7 = *(undefined4 *)(lVar13 + 0x3c);
        uVar12 = *(undefined8 *)(lVar13 + 0x48);
        puVar18 = (undefined8 *)(lVar17 + 0x10 + (longlong)iVar9 * 0x20);
        *puVar18 = *(undefined8 *)(lVar13 + 0x40);
        puVar18[1] = uVar12;
        puVar3 = (undefined4 *)(lVar17 + (longlong)iVar9 * 0x20);
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
      }
      lVar13 = local_218;
      lVar20 = lVar20 + 1;
      uVar15 = (ulonglong)(int)uStack_1d0;
      lVar16 = lVar16 + 0x58;
    } while (lVar20 < (longlong)uVar15);
    if (0 < (int)(uint)uStack_1f0) {
      local_200 = (double)*(float *)(local_218 + 0x20);
      local_208 = (double)*(float *)(local_218 + 0x1c);
      local_210 = (double)*(float *)(local_218 + 0x18);
      uVar4 = *(undefined4 *)(local_218 + 0x38);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb20330) && (FUN_144b3d300(), DAT_14cb20330 == -1)) {
        local_1a8 = "EnvQueryTrace";
        uStack_1a0 = CONCAT35(uStack_1a0._5_3_,0xd);
        uVar10 = FUN_14001a6c0(&local_1a8,1);
        DAT_14cb20328 = (ulonglong)uVar10;
        _Init_thread_footer();
      }
      local_b8 = (byte)uVar4 & 1;
      local_a4 = 0;
      local_c8[1] = 0;
      local_a0 = 0x101;
      local_78 = 0;
      local_70 = 0x800000000;
      local_58 = (undefined1 *)0x0;
      local_50 = 0x400000000;
      local_ac = 0;
      local_c8[0] = DAT_14cb20328;
      local_b7 = 1;
      local_b5 = 0;
      local_a8 = 0;
      local_b4 = 0x1000000;
      local_b0 = 1;
      iVar9 = (int)param_6[1];
      if (0 < iVar9) {
        lVar16 = 0;
        do {
          uVar15 = local_50;
          lVar20 = *(longlong *)(*param_6 + lVar16 * 8);
          if (lVar20 != 0) {
            uVar4 = *(undefined4 *)(lVar20 + 0xc);
            lVar20 = (longlong)(int)local_50;
            uVar10 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar10);
            if (local_50._4_4_ < uVar10) {
              FUN_1447de67e(local_68,uVar15 & 0xffffffff);
            }
            puVar11 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar11 = local_68;
            }
            *(undefined4 *)(puVar11 + lVar20 * 4) = uVar4;
            iVar9 = (int)param_6[1];
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < iVar9);
      }
      uVar12 = FUN_1447210f0(local_220);
      local_238 = &local_210;
      local_230 = 0;
      FUN_147edd3b6(&local_1a8,uVar12,lVar13,local_c8);
      switch(*(undefined1 *)(lVar13 + 0x34)) {
      case 0:
        FUN_147edc5de(&local_1a8,&local_1f8,param_5);
        break;
      case 1:
        FUN_147edc734(&local_1a8,&local_1f8,param_5);
        break;
      case 2:
        FUN_147edc88a(&local_1a8,&local_1f8,param_5);
        break;
      case 3:
        FUN_147edc9e0(&local_1a8,&local_1f8,param_5);
      }
      FUN_147edd45c(&local_1a8);
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_1f8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar2 = (int *)((longlong)local_1b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1b0 + 0x10))(local_1b0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438512a0 FUN_1438512a0 body=721 status=ok
// SIG undefined FUN_1438512a0(void)

void FUN_1438512a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  ulonglong local_c8 [2];
  byte local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1a8 = (double)*(float *)(param_2 + 0x20);
  local_1b0 = (double)*(float *)(param_2 + 0x1c);
  local_1b8 = (double)*(float *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  local_1c0 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb20340) && (FUN_144b3d300(), DAT_14cb20340 == -1)) {
    local_1a0 = "EnvQueryTrace";
    local_198 = 0xd;
    local_194 = 0;
    uVar4 = FUN_14001a6c0(&local_1a0,1);
    DAT_14cb20338 = (ulonglong)uVar4;
    _Init_thread_footer();
  }
  local_b8 = (byte)uVar1 & 1;
  local_a4 = 0;
  local_c8[1] = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  local_ac = 0;
  local_c8[0] = DAT_14cb20338;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  iVar3 = (int)param_5[1];
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      uVar2 = local_50;
      lVar7 = *(longlong *)(*param_5 + lVar6 * 8);
      if (lVar7 != 0) {
        uVar1 = *(undefined4 *)(lVar7 + 0xc);
        lVar7 = (longlong)(int)local_50;
        uVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar4);
        if (local_50._4_4_ < uVar4) {
          FUN_1447de67e(local_68,uVar2 & 0xffffffff);
        }
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_68;
        }
        *(undefined4 *)(puVar5 + lVar7 * 4) = uVar1;
        iVar3 = (int)param_5[1];
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  local_1d8 = &local_1b8;
  local_1d0 = 0;
  FUN_147edd3b6(&local_1a0,param_1,param_2,local_c8);
  switch(*(undefined1 *)(param_2 + 0x34)) {
  case 0:
    FUN_147edbd6a(&local_1a0,param_3,local_1c0);
    break;
  case 1:
    FUN_147edbf40(&local_1a0,param_3,local_1c0);
    break;
  case 2:
    FUN_147edc1d2(&local_1a0,param_3,local_1c0);
    break;
  case 3:
    FUN_147edc3d2(&local_1a0,param_3,local_1c0);
  }
  FUN_147edd45c(&local_1a0);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143851572 FUN_143851572 body=602 status=ok
// SIG undefined FUN_143851572(void)

void FUN_143851572(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_1c8 [32];
  double *local_1a8;
  undefined1 local_1a0;
  double local_198;
  double local_190;
  double local_188;
  char *local_180;
  undefined4 local_178;
  undefined1 local_174;
  ulonglong local_a8;
  undefined8 local_a0;
  byte local_98;
  undefined2 local_97;
  undefined1 local_95;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  undefined2 local_80;
  longlong local_58;
  undefined8 local_50;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = (double)*(float *)(param_2 + 0x20);
  local_190 = (double)*(float *)(param_2 + 0x1c);
  local_198 = (double)*(float *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb20350) && (FUN_144b3d300(&DAT_14cb20350), DAT_14cb20350 == -1)) {
    local_180 = "EnvQueryTrace";
    local_178 = 0xd;
    local_174 = 0;
    uVar2 = FUN_14001a6c0();
    DAT_14cb20348 = (ulonglong)uVar2;
    _Init_thread_footer(&DAT_14cb20350);
  }
  local_98 = (byte)uVar1 & 1;
  local_84 = 0;
  local_a0 = 0;
  local_80 = 0x101;
  local_58 = 0;
  local_50 = 0x800000000;
  local_38 = 0;
  local_30 = 0x400000000;
  local_8c = 0;
  local_a8 = DAT_14cb20348;
  local_97 = 1;
  local_95 = 0;
  local_88 = 0;
  local_94 = 0x1000000;
  local_90 = 1;
  local_1a0 = 1;
  local_1a8 = &local_198;
  FUN_147edd3b6(&local_180,param_1,param_2);
  switch(*(undefined1 *)(param_2 + 0x34)) {
  case 0:
    local_1a8 = (double *)CONCAT44(local_1a8._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_147edcb36(&local_180,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
    break;
  case 1:
    local_1a8 = (double *)CONCAT44(local_1a8._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_147edcd56(&local_180,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
    break;
  case 2:
    local_1a8 = (double *)CONCAT44(local_1a8._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_147edcf76(&local_180,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
    break;
  case 3:
    local_1a8 = (double *)CONCAT44(local_1a8._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_147edd196(&local_180,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
  }
  FUN_147edd45c(&local_180);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438517e1 FUN_1438517e1 body=781 status=ok
// SIG undefined FUN_1438517e1(void)

void FUN_1438517e1(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  size_t _Size;
  longlong lVar6;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  undefined1 local_1c0;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  char *local_198;
  undefined4 local_190;
  undefined1 local_18c;
  void *local_d0;
  uint local_c8;
  int local_c4;
  ulonglong local_c0;
  undefined8 local_b8;
  byte local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  longlong local_70;
  undefined8 local_68;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1a0 = (double)*(float *)(param_2 + 0x20);
  local_1a8 = (double)*(float *)(param_2 + 0x1c);
  local_1b0 = (double)*(float *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb20360) && (FUN_144b3d300(), DAT_14cb20360 == -1)) {
    local_198 = "EnvQueryTrace";
    local_190 = 0xd;
    local_18c = 0;
    uVar5 = FUN_14001a6c0(&local_198,1);
    DAT_14cb20358 = (ulonglong)uVar5;
    _Init_thread_footer();
  }
  local_b0 = (byte)uVar1 & 1;
  local_9c = 0;
  local_b8 = 0;
  local_98 = 0x101;
  local_70 = 0;
  local_68 = 0x800000000;
  local_50 = 0;
  local_48 = 0x400000000;
  local_a4 = 0;
  local_c0 = DAT_14cb20358;
  local_af = 1;
  local_ad = 0;
  local_a0 = 0;
  local_ac = 0x1000000;
  local_a8 = 1;
  local_1c0 = 0;
  local_1c8 = &local_1b0;
  FUN_147edd3b6(&local_198,param_1,param_2);
  uVar5 = *(uint *)(param_3 + 8);
  lVar6 = (longlong)(int)local_c8;
  uVar3 = local_c8 + uVar5;
  uVar4 = local_c4 - local_c8;
  local_c8 = uVar3;
  if (uVar4 < uVar5) {
    FUN_1447403be(&local_d0);
  }
  memset((void *)(lVar6 + (longlong)local_d0),0,(longlong)(int)uVar5);
  switch(*(undefined1 *)(param_2 + 0x34)) {
  case 0:
    local_1c8 = (double *)CONCAT44(local_1c8._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_147edcb36(&local_198,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
    break;
  case 1:
    local_1c8 = (double *)CONCAT44(local_1c8._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_147edcd56(&local_198,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
    break;
  case 2:
    local_1c8 = (double *)CONCAT44(local_1c8._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_147edcf76(&local_198,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
    break;
  case 3:
    local_1c8 = (double *)CONCAT44(local_1c8._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_147edd196(&local_198,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
  }
  _Size = (size_t)(int)local_c8;
  if (_Size != 0) {
    iVar2 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar2 + local_c8;
    if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar2) < local_c8) {
      FUN_1447403be(param_4,iVar2);
    }
    memcpy((void *)((longlong)iVar2 + *param_4),local_d0,_Size);
  }
  FUN_147edd45c(&local_198);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143851af0 FUN_143851af0 body=195 status=ok
// SIG undefined FUN_143851af0(void)

void FUN_143851af0(undefined8 *param_1)

{
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x136) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(byte *)((longlong)param_1 + 0x13e) = *(byte *)((longlong)param_1 + 0x13e) & 0xf0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  return;
}



// FUNCTION 143851bb4 FUN_143851bb4 body=173 status=ok
// SIG undefined FUN_143851bb4(void)

undefined8 * FUN_143851bb4(undefined8 *param_1)

{
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_147ed3044(param_1);
  return param_1;
}



// FUNCTION 143851c62 FUN_143851c62 body=281 status=ok
// SIG undefined FUN_143851c62(void)

void FUN_143851c62(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_147ed369c(param_1[0x25],(int)param_1[0x26]);
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_147ed3525(param_1[0x22],(int)param_1[0x23]);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_147ef0668(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0xe);
  plVar1 = param_1 + 0xc;
  if ((int)param_1[0xd] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143851d3d;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143851d3d:
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143851d7b FUN_143851d7b body=55 status=ok
// SIG undefined FUN_143851d7b(void)

void FUN_143851d7b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1fe20 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1fe20 = FUN_14171c317(FUN_14642d667,uVar1,L"EEnvQueryHightlightMode");
  }
  return;
}



// FUNCTION 143851db2 FUN_143851db2 body=383 status=ok
// SIG undefined FUN_143851db2(void)

void FUN_143851db2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *(longlong *)(param_1 + 0x40);
  if ((((lVar6 == 0) || (lVar4 = FUN_1412474be(), lVar4 == 0)) ||
      (*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x40);
  }
  lVar4 = FUN_1459eb736();
  if (((lVar4 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    if (param_2 != 0) {
      lVar6 = *(longlong *)(param_2 + 0x1c8);
      if (lVar6 == 0) {
        puVar5 = (uint *)&DAT_14c8464e0;
        local_38 = DAT_14c8464f0;
      }
      else {
        puVar5 = (uint *)(lVar6 + 0x260);
        local_38 = *(undefined8 *)(lVar6 + 0x270);
      }
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      uStack_3c = puVar5[3];
      local_30 = 0;
      FUN_1438520fa(*(undefined8 *)(param_1 + 0x70));
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    uStack_44 = 0;
    if (param_2 == 0) {
      local_48 = 0;
      uVar3 = 0;
    }
    else {
      local_48 = *(uint *)(param_2 + 0xc);
      if ((int)local_48 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      uVar3 = *(uint *)(lVar6 + 0x10);
      if (*(uint *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar6 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar6 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
    }
    uStack_44 = uVar3;
    FUN_1438575ac(uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143851f32 FUN_143851f32 body=177 status=ok
// SIG undefined FUN_143851f32(void)

void FUN_143851f32(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (lVar2 != 0) {
    lVar1 = FUN_1412474be();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      goto LAB_143851f80;
    }
  }
  lVar2 = 0;
LAB_143851f80:
  lVar1 = FUN_1459eb736();
  if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_30 = 0;
    FUN_1438520fa(*(undefined8 *)(param_1 + 0x70));
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143851fe4 FUN_143851fe4 body=277 status=ok
// SIG undefined FUN_143851fe4(void)

void FUN_143851fe4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  if (*(int *)(param_1 + 0x78) == 2) {
    local_38[0] = 0;
    local_38[1] = 0;
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (lVar1 == 0) {
LAB_1438520c7:
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_1411b2cec();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) goto LAB_1438520c7;
      uVar3 = *(undefined8 *)(param_1 + 0x60);
    }
    FUN_147ecf078(param_2,uVar3,local_38);
    FUN_147ee186c(param_1,local_38);
  }
  else {
    if (*(int *)(param_1 + 0x78) != 1) goto LAB_143852011;
    local_38[0] = 0;
    local_38[1] = 0;
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (lVar1 == 0) {
LAB_1438520a8:
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_1411b2cec();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) goto LAB_1438520a8;
      uVar3 = *(undefined8 *)(param_1 + 0x60);
    }
    FUN_14384d67c(param_2,uVar3,local_38);
    FUN_147ee17f4(param_1,local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_143852011:
  *(undefined8 *)(param_1 + 0x70) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438520fa FUN_1438520fa body=149 status=ok
// SIG undefined FUN_1438520fa(void)

void FUN_1438520fa(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  
  uVar2 = *(ushort *)((longlong)param_1 + 0x13c);
  uVar3 = *(uint *)(param_1 + 4);
  lVar13 = (longlong)(int)uVar3;
  *(uint *)(param_1 + 4) = uVar3 + uVar2;
  if (*(int *)((longlong)param_1 + 0x24) - uVar3 < (uint)uVar2) {
    FUN_1447403be(param_1 + 3);
  }
  memset((void *)(param_1[3] + lVar13),0,(ulonglong)uVar2);
  lVar5 = param_1[3];
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[6];
  uVar12 = param_2[7];
  puVar1 = (undefined4 *)(lVar5 + lVar13);
  *puVar1 = *param_2;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar13);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_147ed7358(param_1,iVar4);
  }
  lVar13 = *param_1;
  *(undefined4 *)(lVar13 + (longlong)iVar4 * 8) = 0;
  *(uint *)(lVar13 + 4 + (longlong)iVar4 * 8) = uVar3 & 0x7fffffff;
  return;
}



// FUNCTION 14385218f FUN_14385218f body=55 status=ok
// SIG undefined FUN_14385218f(void)

void FUN_14385218f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ff28 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1ff28 = FUN_14171c317(FUN_14642d963,uVar1,L"EPointOnCircleSpacingMethod");
  }
  return;
}



// FUNCTION 1438521c6 FUN_1438521c6 body=55 status=ok
// SIG undefined FUN_1438521c6(void)

void FUN_1438521c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20048 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb20048 = FUN_14171c317(FUN_14642dc46,uVar1,L"EEnvTestDistance");
  }
  return;
}



// FUNCTION 1438521fe FUN_1438521fe body=160 status=ok
// SIG undefined FUN_1438521fe(void)

void FUN_1438521fe(longlong param_1,int param_2,int param_3,float param_4,float param_5,
                  float param_6)

{
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    return;
  }
  if (param_2 != 1) {
    if (param_3 == 2) {
      if (param_4 < param_5) goto LAB_143852289;
    }
    else if (param_3 != 1) {
      if ((param_3 != 0) || (param_4 < param_5)) goto LAB_143852289;
      goto LAB_14385220d;
    }
    if (param_6 < param_4) goto LAB_143852289;
  }
LAB_14385220d:
  switch(*(undefined1 *)(param_1 + 0x21)) {
  case 0:
    param_4 = param_4 + *(float *)(param_1 + 0x18);
    goto LAB_143852280;
  case 1:
    if ((*(short *)(param_1 + 0x1c) == 0) || (param_4 < *(float *)(param_1 + 0x18)))
    goto LAB_143852280;
    break;
  case 2:
    if ((*(short *)(param_1 + 0x1c) == 0) ||
       (*(float *)(param_1 + 0x18) <= param_4 && param_4 != *(float *)(param_1 + 0x18)))
    goto LAB_143852280;
    break;
  case 3:
    if (*(short *)(param_1 + 0x1e) != 0) {
      param_4 = param_4 * *(float *)(param_1 + 0x18);
    }
LAB_143852280:
    *(float *)(param_1 + 0x18) = param_4;
  }
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
LAB_143852289:
  *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + 1;
  return;
}



// FUNCTION 14385229e FUN_14385229e body=55 status=ok
// SIG undefined FUN_14385229e(void)

void FUN_14385229e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20078 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb20078 = FUN_14171c317(FUN_14642dca4,uVar1,L"EEnvTestDot");
  }
  return;
}



// FUNCTION 1438522d6 FUN_1438522d6 body=2753 status=ok
// SIG undefined FUN_1438522d6(void)

void FUN_1438522d6(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_248 [32];
  longlong *local_228;
  undefined4 local_220;
  LARGE_INTEGER *local_218;
  undefined8 *local_210;
  byte local_1fa;
  byte local_1f9;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  LARGE_INTEGER local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  longlong local_190;
  int local_188;
  double local_180;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  ulonglong uStack_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if ((((((int)param_2[7] == 0) || (uVar4 = *(uint *)((longlong)param_2 + 0x34), (int)uVar4 < 0)) ||
       (DAT_14c9647dc <= (int)uVar4)) ||
      ((plVar13 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar13 == (longlong *)0x0 || ((int)plVar13[2] != (int)param_2[7])))) ||
     (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (lVar15 = *plVar13, lVar15 == 0))))
  goto LAB_14385239c;
  FUN_147ec268e(param_1 + 0x88,lVar15,(int)param_2[6]);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10 = (undefined4 *)
              ((longlong)*(int *)(*(longlong *)(param_1 + 0x90) + 0x44) +
              *(longlong *)(param_1 + 0x98));
  }
  puVar12 = (undefined4 *)(param_1 + 0xb8);
  if (puVar10 != (undefined4 *)0x0) {
    puVar12 = puVar10;
  }
  uVar1 = *puVar12;
  FUN_147ec268e(param_1 + 0xc0,lVar15,(int)param_2[6]);
  if (*(longlong *)(param_1 + 200) == 0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10 = (undefined4 *)
              ((longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x44) +
              *(longlong *)(param_1 + 0xd0));
  }
  puVar12 = (undefined4 *)(param_1 + 0xf0);
  if (puVar10 != (undefined4 *)0x0) {
    puVar12 = puVar10;
  }
  uVar2 = *puVar12;
  local_f8 = 0;
  uStack_f0 = 0;
  cVar8 = *(char *)(param_1 + 0x210);
  local_100 = *(longlong *)(param_1 + 0x208);
  if ((local_100 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_108 = *(longlong *)(param_1 + 0x200);
  if ((local_108 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_110 = *(longlong *)(param_1 + 0x1f8);
  if ((local_110 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar6 = FUN_147ee89da(&local_110,&local_108,&local_100,cVar8 == '\x01');
  if (bVar6 == 0) {
    cVar8 = *(char *)(param_1 + 0x210);
    local_118 = *(longlong *)(param_1 + 0x208);
    if ((local_118 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_120 = *(longlong *)(param_1 + 0x200);
    if ((local_120 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_128 = *(longlong *)(param_1 + 0x1f8);
    if ((local_128 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_210 = &DAT_14c8464f8;
    local_218 = (LARGE_INTEGER *)&DAT_14c8464e0;
    local_220 = CONCAT31(local_220._1_3_,cVar8 == '\x01');
    local_228 = &local_118;
    FUN_147ee8a86(&local_f8,param_2,&local_128,&local_120);
    if ((int)uStack_f0 != 0) goto LAB_14385254f;
  }
  else {
LAB_14385254f:
    local_138 = 0;
    uStack_130 = 0;
    cVar8 = *(char *)(param_1 + 0x230);
    local_140 = *(longlong *)(param_1 + 0x228);
    if ((local_140 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_148 = *(longlong *)(param_1 + 0x220);
    if ((local_148 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_150 = *(longlong *)(param_1 + 0x218);
    if ((local_150 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    bVar7 = FUN_147ee89da(&local_150,&local_148,&local_140,cVar8 == '\x01');
    if (bVar7 == 0) {
      cVar8 = *(char *)(param_1 + 0x230);
      local_158 = *(longlong *)(param_1 + 0x228);
      if ((local_158 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_160 = *(longlong *)(param_1 + 0x220);
      if ((local_160 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_168 = *(longlong *)(param_1 + 0x218);
      if ((local_168 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_210 = &DAT_14c8464f8;
      local_218 = (LARGE_INTEGER *)&DAT_14c8464e0;
      local_220 = CONCAT31(local_220._1_3_,cVar8 == '\x01');
      local_228 = &local_158;
      FUN_147ee8a86(&local_138,param_2,&local_168,&local_160);
      if ((int)uStack_130 != 0) goto LAB_143852608;
    }
    else {
LAB_143852608:
      FUN_147ecf2f6(&local_190,param_1,param_2,0xffffffff);
      if ((local_188 < *(int *)(local_190 + 8)) && ((*(byte *)(local_190 + 0x13e) & 1) == 0)) {
        local_1f9 = bVar6 | bVar7;
        local_1fa = bVar7;
        while ((bVar7 = local_1fa, local_180 < 0.0 ||
               (QueryPerformanceCounter(&local_1a8),
               (double)CONCAT44(local_1a8.s.HighPart,local_1a8.s.LowPart) * DAT_14c83f420 +
               16777216.0 < local_180))) {
          if (local_1f9 != 0) {
            cVar8 = *(char *)(param_1 + 0x210);
            if ((cVar8 == '\x01') && (*(char *)(param_1 + 0x230) == '\x01')) {
              local_198 = DAT_14c8464f0;
              local_1a8.s.LowPart = (DWORD)DAT_14c8464e0;
              local_1a8.s.HighPart = DAT_14c8464e0._4_4_;
              uStack_1a0 = (undefined4)DAT_14c8464e8;
              uStack_19c = DAT_14c8464e8._4_4_;
LAB_14385277b:
              plVar13 = (longlong *)param_2[0x2c];
              if (plVar13 == (longlong *)0x0) goto LAB_143852787;
              (**(code **)(*plVar13 + 0x2c0))
                        (plVar13,&local_1c8,
                         ((longlong)
                          ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_188 * 8) << 0x21) >>
                         0x21) + param_2[3]);
            }
            else {
              plVar13 = (longlong *)param_2[0x2c];
              if (plVar13 == (longlong *)0x0) {
                local_198 = DAT_14c8464f0;
                local_1a8.s.LowPart = (DWORD)DAT_14c8464e0;
                local_1a8.s.HighPart = DAT_14c8464e0._4_4_;
                uStack_1a0 = (undefined4)DAT_14c8464e8;
                uStack_19c = DAT_14c8464e8._4_4_;
              }
              else {
                (**(code **)(*plVar13 + 0x2b8))
                          (plVar13,&local_1a8,
                           ((longlong)
                            ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_188 * 8) << 0x21)
                           >> 0x21) + param_2[3]);
                cVar8 = *(char *)(param_1 + 0x210);
              }
              if ((cVar8 == '\x01') || (*(char *)(param_1 + 0x230) == '\x01')) goto LAB_14385277b;
LAB_143852787:
              local_1b8 = DAT_14c846508;
              local_1c8 = (undefined4)DAT_14c8464f8;
              uStack_1c4 = DAT_14c8464f8._4_4_;
              uStack_1c0 = (undefined4)DAT_14c846500;
              uStack_1bc = DAT_14c846500._4_4_;
            }
            if (bVar6 != 0) {
              bVar17 = (longlong)uStack_f0 < 0;
              uStack_f0 = uStack_f0 & 0xffffffff00000000;
              if (bVar17) {
                FUN_1447a8aa0(&local_f8,0);
              }
              cVar8 = *(char *)(param_1 + 0x210);
              local_1d0 = *(longlong *)(param_1 + 0x208);
              if ((local_1d0 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_1d8 = *(longlong *)(param_1 + 0x200);
              if ((local_1d8 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_1e0 = *(longlong *)(param_1 + 0x1f8);
              if ((local_1e0 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_210 = (undefined8 *)&local_1c8;
              local_218 = &local_1a8;
              local_220 = CONCAT31(local_220._1_3_,cVar8 == '\x01');
              local_228 = &local_1d0;
              FUN_147ee8a86(&local_f8,param_2,&local_1e0,&local_1d8);
            }
            if (bVar7 != 0) {
              bVar17 = (longlong)uStack_130 < 0;
              uStack_130 = uStack_130 & 0xffffffff00000000;
              if (bVar17) {
                FUN_1447a8aa0(&local_138,0);
              }
              cVar8 = *(char *)(param_1 + 0x230);
              local_1e8 = *(longlong *)(param_1 + 0x228);
              if ((local_1e8 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_1f0 = *(longlong *)(param_1 + 0x220);
              if ((local_1f0 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_1f8 = *(longlong *)(param_1 + 0x218);
              if ((local_1f8 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_210 = (undefined8 *)&local_1c8;
              local_218 = &local_1a8;
              local_220 = CONCAT31(local_220._1_3_,cVar8 == '\x01');
              local_228 = &local_1e8;
              FUN_147ee8a86(&local_138,param_2,&local_1f8,&local_1f0);
            }
          }
          if (0 < (int)uStack_f0) {
            uVar11 = uStack_130 & 0xffffffff;
            lVar15 = 0;
            iVar9 = (int)uStack_f0;
            do {
              if (0 < (int)uVar11) {
                lVar16 = 8;
                lVar14 = 0;
                do {
                  if (*(char *)(param_1 + 0x238) == '\x01') {
                    dVar18 = *(double *)(local_f8 + lVar15 * 0x18);
                    dVar3 = *(double *)(local_f8 + 8 + lVar15 * 0x18);
                    dVar19 = dVar18 * dVar18 + dVar3 * dVar3;
                    dVar20 = 0.0;
                    if (dVar19 <= 9.99999993922529e-09) {
                      dVar19 = 0.0;
                    }
                    else {
                      dVar19 = 1.0 / SQRT(dVar19);
                      dVar18 = dVar18 * dVar19;
                      dVar3 = dVar3 * dVar19;
                      dVar19 = dVar19 * 0.0;
                    }
                    dVar22 = *(double *)(local_138 + -8 + lVar16);
                    dVar21 = *(double *)(local_138 + lVar16);
                    dVar5 = dVar22 * dVar22 + dVar21 * dVar21;
                    if (9.99999993922529e-09 < dVar5) {
                      dVar20 = 1.0 / SQRT(dVar5);
                      dVar22 = dVar22 * dVar20;
                      dVar21 = dVar21 * dVar20;
                      dVar20 = dVar20 * 0.0;
                    }
                    fVar23 = (float)(dVar3 * dVar21 + dVar18 * dVar22 + dVar19 * dVar20);
                  }
                  else {
                    fVar23 = 0.0;
                    if (*(char *)(param_1 + 0x238) == '\0') {
                      fVar23 = (float)(*(double *)(local_f8 + 0x10 + lVar15 * 0x18) *
                                       *(double *)(local_138 + 8 + lVar16) +
                                      *(double *)(local_f8 + lVar15 * 0x18) *
                                      *(double *)(local_138 + -8 + lVar16) +
                                      *(double *)(local_f8 + 8 + lVar15 * 0x18) *
                                      *(double *)(local_138 + lVar16));
                    }
                  }
                  iVar9 = _isnan((double)fVar23);
                  fVar24 = 0.0;
                  if ((iVar9 == 0) && (fVar24 = fVar23, *(char *)(param_1 + 0x239) != '\0')) {
                    fVar24 = ABS(fVar23);
                  }
                  local_228 = (longlong *)CONCAT44(local_228._4_4_,uVar1);
                  local_220 = uVar2;
                  FUN_1438521fe(&local_190,*(undefined1 *)(param_1 + 0x34),
                                *(undefined1 *)(param_1 + 0x4a),fVar24);
                  lVar14 = lVar14 + 1;
                  uVar11 = (ulonglong)(int)uStack_130;
                  lVar16 = lVar16 + 0x18;
                } while (lVar14 < (longlong)uVar11);
                iVar9 = (int)uStack_f0;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < iVar9);
          }
          FUN_147ee880a(&local_190);
          if ((*(int *)(local_190 + 8) <= local_188) || ((*(byte *)(local_190 + 0x13e) & 1) != 0))
          break;
        }
      }
      *(int *)(local_190 + 0x124) = local_188;
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
LAB_14385239c:
  if ((local_e0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143852d98 FUN_143852d98 body=142 status=ok
// SIG undefined FUN_143852d98(void)

void FUN_143852d98(longlong param_1,undefined8 param_2,int param_3,byte param_4,byte param_5)

{
  float fVar1;
  
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    return;
  }
  if ((param_3 == 3 & (param_4 ^ param_5 ^ 1)) == 0) {
    fVar1 = 0.0;
    if ((*(byte *)(param_1 + 0x22) & 4) != 0) goto LAB_143852e21;
  }
  else {
    fVar1 = 1.0;
  }
  switch(*(undefined1 *)(param_1 + 0x21)) {
  case 0:
    fVar1 = fVar1 + *(float *)(param_1 + 0x18);
    goto LAB_143852e18;
  case 1:
    if ((*(short *)(param_1 + 0x1c) == 0) || (fVar1 < *(float *)(param_1 + 0x18)))
    goto LAB_143852e18;
    break;
  case 2:
    if ((*(short *)(param_1 + 0x1c) == 0) ||
       (*(float *)(param_1 + 0x18) <= fVar1 && fVar1 != *(float *)(param_1 + 0x18)))
    goto LAB_143852e18;
    break;
  case 3:
    if (*(short *)(param_1 + 0x1e) != 0) {
      fVar1 = fVar1 * *(float *)(param_1 + 0x18);
    }
LAB_143852e18:
    *(float *)(param_1 + 0x18) = fVar1;
  }
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
LAB_143852e21:
  *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + 1;
  return;
}



// FUNCTION 143852e26 FUN_143852e26 body=1325 status=ok
// SIG undefined FUN_143852e26(void)

void FUN_143852e26(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  code *pcVar14;
  longlong lVar15;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  uint local_180;
  char **local_178;
  double local_170;
  double local_168;
  double local_160;
  LARGE_INTEGER local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  longlong local_140;
  int local_138;
  double local_130;
  longlong local_118;
  undefined8 uStack_110;
  undefined4 local_100;
  undefined4 local_fc [3];
  char *local_f0;
  undefined8 local_e8;
  byte local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((int)param_2[7] == 0) {
LAB_1438532f3:
    uVar10 = 0;
  }
  else {
    uVar6 = *(uint *)((longlong)param_2 + 0x34);
    uVar10 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != (int)param_2[7] || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0))
         )) goto LAB_1438532f3;
      uVar10 = *puVar12;
    }
  }
  FUN_147ec268e(param_1 + 0x50,uVar10,(int)param_2[6]);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    puVar8 = (undefined1 *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x44) +
             *(longlong *)(param_1 + 0x60));
  }
  puVar11 = (undefined1 *)(param_1 + 0x80);
  if (puVar8 != (undefined1 *)0x0) {
    puVar11 = puVar8;
  }
  uVar2 = *puVar11;
  uVar7 = *(undefined4 *)(param_1 + 0x224);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb20370) && (FUN_144b3d300(), DAT_14cb20370 == -1)) {
    local_f0 = "EnvQueryOverlap";
    local_e8 = CONCAT35(local_e8._5_3_,0xf);
    uVar6 = FUN_14001a6c0(&local_f0,1);
    DAT_14cb20368 = (char *)(ulonglong)uVar6;
    _Init_thread_footer();
  }
  local_e0 = (byte)uVar7 >> 1 & 1;
  local_cc = 0;
  local_e8 = 0;
  local_c8 = 0x101;
  local_a0 = 0;
  local_98 = 0x800000000;
  local_80 = 0;
  local_78 = 0x400000000;
  local_d4 = 0;
  local_f0 = DAT_14cb20368;
  local_df = 1;
  local_dd = 0;
  local_d0 = 0;
  local_dc = 0x1000000;
  local_d8 = 1;
  bVar3 = *(byte *)(param_1 + 0x220);
  uVar7 = *(undefined4 *)(param_1 + 0x200);
  uVar1 = *(undefined4 *)(param_1 + 0x1f8);
  cVar4 = *(char *)(param_1 + 0x221);
  if (cVar4 == '\0') {
    puVar9 = local_fc + 2;
    local_fc[1] = *(undefined4 *)(param_1 + 0x1fc);
    local_100 = 1;
    local_fc[0] = uVar1;
  }
  else if (cVar4 == '\x01') {
    puVar9 = local_fc;
    local_100 = 2;
    uVar7 = uVar1;
  }
  else {
    if (cVar4 != '\x02') goto LAB_143852fe2;
    puVar9 = local_fc + 1;
    local_100 = 3;
    local_fc[0] = uVar1;
  }
  *puVar9 = uVar7;
  pcVar14 = FUN_147ee97d6;
  if ((*(uint *)(param_1 + 0x224) & 1) == 0) {
    pcVar14 = FUN_147ee98a8;
  }
  local_118 = 0;
  uStack_110 = 0;
  if ((*(uint *)(param_1 + 0x224) & 4) != 0) {
    uVar10 = FUN_1411e5f92();
    FUN_147ecf078(param_2,uVar10,&local_118);
  }
  FUN_147ecf2f6(&local_140,param_1,param_2,0xffffffff);
  if ((local_138 < *(int *)(local_140 + 8)) && ((*(byte *)(local_140 + 0x13e) & 1) == 0)) {
    while ((local_130 < 0.0 ||
           (QueryPerformanceCounter(&local_158),
           (double)CONCAT44(local_158.s.HighPart,local_158.s.LowPart) * DAT_14c83f420 + 16777216.0 <
           local_130))) {
      plVar5 = (longlong *)param_2[0x2c];
      if (plVar5 == (longlong *)0x0) {
        local_148 = DAT_14c8464f0;
        local_158.s.LowPart = (DWORD)DAT_14c8464e0;
        local_158.s.HighPart = DAT_14c8464e0._4_4_;
        uStack_150 = (undefined4)DAT_14c8464e8;
        uStack_14c = DAT_14c8464e8._4_4_;
      }
      else {
        (**(code **)(*plVar5 + 0x2b8))
                  (plVar5,&local_158,
                   ((longlong)((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_138 * 8) << 0x21)
                   >> 0x21) + param_2[3]);
      }
      plVar5 = (longlong *)param_2[0x2d];
      if (plVar5 == (longlong *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar5 + 0x2c8))
                           (plVar5,((longlong)
                                    ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_138 * 8) <<
                                    0x21) >> 0x21) + param_2[3]);
      }
      lVar15 = (longlong)(int)(uint)uStack_110;
      uVar6 = (uint)uStack_110 + 1;
      if (uStack_110._4_4_ < uVar6) {
        uVar13 = uStack_110 & 0xffffffff;
        uStack_110._0_4_ = uVar6;
        FUN_1447d05f2(&local_118,uVar13);
        uVar6 = (uint)uStack_110;
      }
      uStack_110._0_4_ = uVar6;
      *(undefined8 *)(local_118 + lVar15 * 8) = uVar10;
      local_160 = local_148 + *(double *)(param_1 + 0x218);
      local_168 = (double)CONCAT44(uStack_14c,uStack_150) + *(double *)(param_1 + 0x210);
      local_170 = (double)CONCAT44(local_158.s.HighPart,local_158.s.LowPart) +
                  *(double *)(param_1 + 0x208);
      local_188 = param_2[0xb];
      local_178 = &local_f0;
      local_180 = (uint)bVar3;
      uVar7 = (*pcVar14)(param_1,&local_170,&local_100,&local_118);
      local_188 = CONCAT71(local_188._1_7_,uVar2);
      FUN_143852d98(&local_140,*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x4a),uVar7
                   );
      uStack_110 = CONCAT44(uStack_110._4_4_,(uint)uStack_110 - 1);
      FUN_147ee880a(&local_140);
      if ((*(int *)(local_140 + 8) <= local_138) || ((*(byte *)(local_140 + 0x13e) & 1) != 0))
      break;
    }
  }
  *(int *)(local_140 + 0x124) = local_138;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_143852fe2:
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143853354 FUN_143853354 body=55 status=ok
// SIG undefined FUN_143853354(void)

void FUN_143853354(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb200d8 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb200d8 = FUN_14171c317(FUN_14642dd60,uVar1,L"EEnvTestPathfinding");
  }
  return;
}



// FUNCTION 14385338c FUN_14385338c body=13260 status=ok
// SIG undefined FUN_14385338c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14385338c(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  longlong *plVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  LARGE_INTEGER LVar12;
  uint uVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  float *pfVar22;
  longlong lVar23;
  undefined8 uVar24;
  undefined1 *puVar25;
  char *pcVar26;
  LARGE_INTEGER LVar27;
  undefined8 *puVar28;
  char *pcVar29;
  float *pfVar30;
  undefined8 unaff_R12;
  undefined7 uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined1 auStack_2d8 [32];
  LARGE_INTEGER *local_2b8;
  LARGE_INTEGER *local_2b0;
  LARGE_INTEGER *local_2a8;
  LARGE_INTEGER *local_2a0;
  undefined1 local_295;
  uint local_294;
  ulonglong local_290;
  ulonglong local_288;
  ulonglong local_280;
  longlong local_278;
  longlong *local_270;
  longlong local_268;
  undefined8 uStack_260;
  ulonglong local_258;
  ulonglong uStack_250;
  LARGE_INTEGER local_248;
  LARGE_INTEGER LStack_240;
  double local_238;
  double local_228;
  double dStack_220;
  double local_218;
  LARGE_INTEGER local_210;
  int local_208;
  double local_200;
  LARGE_INTEGER local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  uint local_1bc;
  LARGE_INTEGER local_1b8;
  double dStack_1b0;
  byte local_1a8;
  undefined2 uStack_1a7;
  undefined1 uStack_1a5;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined2 uStack_19e;
  undefined2 uStack_19c;
  undefined2 uStack_19a;
  undefined1 local_198;
  undefined1 uStack_197;
  undefined2 uStack_196;
  undefined2 local_194;
  undefined2 uStack_192;
  undefined2 local_190;
  undefined1 local_188 [32];
  undefined1 *local_168;
  ulonglong local_160;
  undefined1 local_158 [16];
  undefined1 *local_148;
  undefined8 local_140;
  LARGE_INTEGER local_138;
  undefined8 uStack_130;
  double local_128;
  undefined2 uStack_120;
  undefined4 uStack_11e;
  undefined2 uStack_11a;
  undefined2 uStack_118;
  undefined4 uStack_116;
  undefined4 uStack_112;
  undefined1 local_108 [32];
  undefined1 *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 *local_c8;
  uint local_c0;
  uint local_bc;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if ((int)param_2[7] == 0) {
LAB_143853977:
    uVar24 = 0;
  }
  else {
    uVar17 = *(uint *)((longlong)param_2 + 0x34);
    uVar24 = 0;
    if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
      puVar28 = (undefined8 *)
                ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
      if ((puVar28 == (undefined8 *)0x0) ||
         ((*(int *)(puVar28 + 2) != (int)param_2[7] || ((*(uint *)(puVar28 + 1) & 0x10200000) != 0))
         )) goto LAB_143853977;
      uVar24 = *puVar28;
    }
  }
  FUN_147ec268e(param_1 + 0x50,uVar24,(int)param_2[6]);
  FUN_147ec268e(param_1 + 0x238,uVar24,(int)param_2[6]);
  FUN_147ec268e(param_1 + 0x270,uVar24,(int)param_2[6]);
  FUN_147ec268e();
  if (*(longlong *)(param_1 + 0x58) == 0) {
    puVar25 = (undefined1 *)0x0;
  }
  else {
    puVar25 = (undefined1 *)
              ((longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x44) +
              *(longlong *)(param_1 + 0x60));
  }
  puVar21 = (undefined1 *)(param_1 + 0x80);
  if (puVar25 != (undefined1 *)0x0) {
    puVar21 = puVar25;
  }
  if (*(longlong *)(param_1 + 0x240) == 0) {
    pcVar29 = (char *)0x0;
  }
  else {
    pcVar29 = (char *)((longlong)*(int *)(*(longlong *)(param_1 + 0x240) + 0x44) +
                      *(longlong *)(param_1 + 0x248));
  }
  pcVar26 = (char *)(param_1 + 0x268);
  if (pcVar29 != (char *)0x0) {
    pcVar26 = pcVar29;
  }
  if (*(longlong *)(param_1 + 0x278) == 0) {
    pfVar30 = (float *)0x0;
  }
  else {
    pfVar30 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x278) + 0x44) +
                       *(longlong *)(param_1 + 0x280));
  }
  pfVar22 = (float *)(param_1 + 0x2a0);
  if (pfVar30 != (float *)0x0) {
    pfVar22 = pfVar30;
  }
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    pfVar30 = (float *)0x0;
  }
  else {
    pfVar30 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x2b0) + 0x44) +
                       *(longlong *)(param_1 + 0x2b8));
  }
  uVar3 = *puVar21;
  uVar31 = (undefined7)((ulonglong)unaff_R12 >> 8);
  cVar15 = *pcVar26;
  fVar1 = *pfVar22;
  pfVar22 = (float *)(param_1 + 0x2d8);
  if (pfVar30 != (float *)0x0) {
    pfVar22 = pfVar30;
  }
  fVar2 = *pfVar22;
  local_258 = 0;
  uStack_250 = 0;
  lVar35 = *(longlong *)(param_1 + 0x2e0);
  if ((((lVar35 == 0) || (lVar23 = FUN_1411b2cec(), lVar23 == 0)) ||
      (*(int *)(lVar35 + 0x38) < *(int *)(lVar23 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar35 + 0x30) + (longlong)*(int *)(lVar23 + 0x38) * 8) !=
      lVar23 + 0x30)) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(undefined8 *)(param_1 + 0x2e0);
  }
  cVar14 = FUN_14384d67c(param_2,uVar24,&local_258);
  if (cVar14 == '\0') goto LAB_14385375a;
  uVar20 = *(undefined4 *)(param_1 + 0x230);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb20380) && (FUN_144b3d300(&DAT_14cb20380), DAT_14cb20380 == -1)) {
    local_138.QuadPart = 0x14ac14f9c;
    uStack_130 = (double)CONCAT35(uStack_130._5_3_,0xd);
    DAT_14cb20378._0_4_ = FUN_14001a6c0();
    DAT_14cb20378.s.HighPart = 0;
    _Init_thread_footer(&DAT_14cb20380);
  }
  local_1a8 = (byte)uVar20 & 1;
  uVar24 = 0;
  local_194 = 0;
  uStack_192 = 0;
  dStack_1b0 = 0.0;
  local_190 = 0x101;
  local_168 = (undefined1 *)0x0;
  local_160 = 0x800000000;
  local_148 = (undefined1 *)0x0;
  local_140 = 0x400000000;
  uStack_19c = 0;
  uStack_19a = 0;
  local_1b8 = DAT_14cb20378;
  uStack_1a7 = 1;
  uStack_1a5 = 0;
  local_198 = 0;
  uStack_1a4 = 0x1000000;
  uStack_1a0 = 1;
  local_268 = 0;
  uStack_260 = 0;
  lVar35 = *(longlong *)(param_1 + 0x2e0);
  if (lVar35 != 0) {
    lVar23 = FUN_1411b2cec();
    if (((lVar23 == 0) || (*(int *)(lVar35 + 0x38) < *(int *)(lVar23 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar35 + 0x30) + (longlong)*(int *)(lVar23 + 0x38) * 8) !=
        lVar23 + 0x30)) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined8 *)(param_1 + 0x2e0);
    }
  }
  cVar14 = FUN_147ecf078(param_2,uVar24,&local_268);
  if ((cVar14 != '\0') && (0 < (int)uStack_260)) {
    lVar35 = 0;
    iVar16 = (int)uStack_260;
    do {
      uVar33 = local_140;
      lVar23 = *(longlong *)(local_268 + lVar35 * 8);
      if (lVar23 != 0) {
        uVar20 = *(undefined4 *)(lVar23 + 0xc);
        lVar23 = (longlong)(int)(uint)local_140;
        uVar17 = (uint)local_140 + 1;
        local_140 = CONCAT44(local_140._4_4_,uVar17);
        if (local_140._4_4_ < uVar17) {
          FUN_1447de67e(local_158,uVar33 & 0xffffffff);
        }
        puVar25 = local_148;
        if (local_148 == (undefined1 *)0x0) {
          puVar25 = local_158;
        }
        *(undefined4 *)(puVar25 + lVar23 * 4) = uVar20;
        iVar16 = (int)uStack_260;
      }
      lVar35 = lVar35 + 1;
    } while (lVar35 < iVar16);
  }
  uVar33 = local_258;
  iVar16 = (int)uStack_250;
  uVar17 = (uint)CONCAT71(uVar31,uVar3);
  switch(*(undefined1 *)(param_1 + 0x22c)) {
  case 0:
    local_294 = (uint)*(byte *)(param_1 + 0x4a);
    bVar4 = *(byte *)(param_1 + 0x34);
    local_290 = local_258;
    uVar33 = uStack_250 & 0xffffffff;
    if (cVar15 == '\0') {
      local_1bc = 0;
      local_1d8 = _DAT_14cad0f20;
      uStack_1d0 = uRam000000014cad0f28;
      local_1e8.s.LowPart = _DAT_14cad0f10;
      local_1e8.s.HighPart = _DAT_14cad0f14;
      uStack_1e0 = _DAT_14cad0f18;
      uStack_1dc = _DAT_14cad0f1c;
      if (*(char *)(param_1 + 0x22d) == '\x02') {
        uVar5 = *(undefined1 *)(param_1 + 0x220);
        local_295 = uVar3;
        uVar24 = FUN_144a9f2d6();
        local_1bc = FUN_1434274ae(uVar24,1,uVar5);
      }
      else {
        local_295 = uVar3;
        if ((*(char *)(param_1 + 0x22d) == '\x03') &&
           (cVar15 = FUN_1479b02fa(*(undefined8 *)(param_1 + 0x224),&local_1bc,&local_1e8),
           cVar15 == '\0')) {
          FUN_147ecf2f6(&local_138,param_1,param_2,0xffffffff);
          uVar3 = local_295;
          LVar27 = local_138;
          local_208 = (int)uStack_130;
          if (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
             (uVar24 = CONCAT71(uVar31,local_295), (*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0)
             ) {
            do {
              if ((0.0 <= local_128) &&
                 (QueryPerformanceCounter(&local_210),
                 local_128 <= (double)local_210.QuadPart * DAT_14c83f420 + 16777216.0))
              goto LAB_1438566ee;
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_138,bVar4,local_294,(uint)uVar24 ^ 1);
              FUN_147ee880a(&local_138);
              LVar27 = local_138;
              local_208 = (int)uStack_130;
            } while (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
                    ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0));
          }
          break;
        }
      }
      if (0 < iVar16) {
        lVar35 = 0;
        do {
          *(double *)(local_290 + 0x10 + lVar35) =
               *(double *)(local_290 + 0x10 + lVar35) + (double)fVar2;
          lVar35 = lVar35 + 0x18;
        } while (uVar33 * 0x18 != lVar35);
      }
      FUN_147ecf2f6(&local_210,param_1,param_2,0xffffffff);
      uVar17 = local_1bc;
      LVar27 = local_210;
      local_208 = local_208;
      if ((local_208 < *(int *)(local_210.QuadPart + 8)) &&
         (LVar27 = local_210, local_208 = local_208, local_288 = uVar33,
         (*(byte *)(local_210.QuadPart + 0x13e) & 1) == 0)) {
        local_280 = CONCAT44(local_280._4_4_,(uint)bVar4);
        while ((local_200 < 0.0 ||
               (QueryPerformanceCounter(&local_138), LVar27 = local_210,
               (double)local_138.QuadPart * DAT_14c83f420 + 16777216.0 < local_200))) {
          plVar8 = (longlong *)param_2[0x2c];
          if (plVar8 == (longlong *)0x0) {
            local_128 = DAT_14c8464f0;
            local_138.s.HighPart = DAT_14c8464e0._4_4_;
            local_138.s.LowPart = (undefined4)DAT_14c8464e0;
            uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,&local_138,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          dVar9 = local_128 + (double)fVar1;
          LVar27 = (LARGE_INTEGER)(uStack_130 + 0.0);
          LVar12.s = (_struct_19)(local_138.s + 0.0);
          plVar8 = (longlong *)param_2[0x2d];
          if (plVar8 == (longlong *)0x0) {
            lVar35 = 0;
          }
          else {
            lVar35 = (**(code **)(*plVar8 + 0x2c8))
                               (plVar8,((longlong)
                                        ((ulonglong)
                                         *(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21)
                                       >> 0x21) + param_2[3]);
          }
          local_128 = (double)CONCAT44(uStack_1a4,
                                       CONCAT13(uStack_1a5,CONCAT21(uStack_1a7,local_1a8)));
          uStack_120 = CONCAT11(uStack_19f,uStack_1a0);
          uStack_116 = CONCAT22(local_194,uStack_196);
          uStack_112 = CONCAT22(local_190,uStack_192);
          uStack_118 = (undefined2)(CONCAT13(uStack_197,CONCAT12(local_198,uStack_19a)) >> 0x10);
          uStack_11e = (undefined4)(CONCAT24(uStack_19c,CONCAT22(uStack_19e,uStack_120)) >> 0x10);
          uStack_11a = uStack_19a;
          local_138 = local_1b8;
          uStack_130 = dStack_1b0;
          local_e8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)local_160;
          local_e0 = (int)local_160;
          if (lVar23 == 0) {
            local_dc = 8;
          }
          else {
            puVar25 = local_168;
            if (local_168 == (undefined1 *)0x0) {
              puVar25 = local_188;
            }
            local_278 = lVar35;
            FUN_14470be6c(local_108,local_160 & 0xffffffff,0);
            puVar21 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar21 = local_108;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
            lVar35 = local_278;
          }
          local_c8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)(uint)local_140;
          local_c0 = (uint)local_140;
          if (lVar23 == 0) {
            local_bc = 4;
          }
          else {
            puVar25 = local_148;
            if (local_148 == (undefined1 *)0x0) {
              puVar25 = local_158;
            }
            FUN_1447163e6(local_d8,local_140 & 0xffffffff,0);
            puVar21 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar21 = local_d8;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          uVar13 = local_c0;
          if (lVar35 != 0) {
            uVar20 = *(undefined4 *)(lVar35 + 0xc);
            lVar35 = (longlong)(int)local_c0;
            local_c0 = local_c0 + 1;
            if (local_bc < local_c0) {
              FUN_1447de67e(local_d8,uVar13);
            }
            puVar25 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar25 = local_d8;
            }
            *(undefined4 *)(puVar25 + lVar35 * 4) = uVar20;
          }
          if (0 < (int)local_288) {
            lVar35 = 0;
            local_270 = param_2;
            do {
              local_228 = *(double *)(local_290 + lVar35);
              dStack_220 = ((double *)(local_290 + lVar35))[1];
              local_218 = *(double *)(local_290 + 0x10 + lVar35);
              local_2a8 = (LARGE_INTEGER *)&DAT_14cad0f08;
              local_2b8 = &local_138;
              local_2b0 = &local_1e8;
              local_248 = LVar12;
              LStack_240 = LVar27;
              local_238 = dVar9;
              uVar20 = FUN_140386a8e(local_270[0xb],&local_248,&local_228,uVar17);
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,local_295);
              FUN_143852d98(&local_210,local_280 & 0xffffffff,local_294,uVar20);
              lVar35 = lVar35 + 0x18;
              param_2 = local_270;
            } while (uVar33 * 0x18 != lVar35);
          }
          if (local_c8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_147ee880a(&local_210);
          LVar27 = local_210;
          local_208 = local_208;
          if ((*(int *)(local_210.QuadPart + 8) <= local_208) ||
             (LVar27 = local_210, local_208 = local_208,
             (*(byte *)(local_210.QuadPart + 0x13e) & 1) != 0)) break;
        }
      }
    }
    else {
      local_1bc = 0;
      local_1d8 = _DAT_14cad0f20;
      uStack_1d0 = uRam000000014cad0f28;
      local_1e8.s.LowPart = _DAT_14cad0f10;
      local_1e8.s.HighPart = _DAT_14cad0f14;
      uStack_1e0 = _DAT_14cad0f18;
      uStack_1dc = _DAT_14cad0f1c;
      if (*(char *)(param_1 + 0x22d) == '\x02') {
        uVar5 = *(undefined1 *)(param_1 + 0x220);
        local_295 = uVar3;
        uVar24 = FUN_144a9f2d6();
        local_1bc = FUN_1434274ae(uVar24,1,uVar5);
      }
      else {
        local_295 = uVar3;
        if ((*(char *)(param_1 + 0x22d) == '\x03') &&
           (cVar15 = FUN_1479b02fa(*(undefined8 *)(param_1 + 0x224),&local_1bc,&local_1e8),
           cVar15 == '\0')) {
          FUN_147ecf2f6(&local_138,param_1,param_2,0xffffffff);
          uVar3 = local_295;
          LVar27 = local_138;
          local_208 = (int)uStack_130;
          if (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
             (uVar24 = CONCAT71(uVar31,local_295), (*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0)
             ) {
            do {
              if ((0.0 <= local_128) &&
                 (QueryPerformanceCounter(&local_210),
                 local_128 <= (double)local_210.QuadPart * DAT_14c83f420 + 16777216.0))
              goto LAB_1438566ee;
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_138,bVar4,local_294,(uint)uVar24 ^ 1);
              FUN_147ee880a(&local_138);
              LVar27 = local_138;
              local_208 = (int)uStack_130;
            } while (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
                    ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0));
          }
          break;
        }
      }
      if (0 < iVar16) {
        lVar35 = 0;
        do {
          *(double *)(local_290 + 0x10 + lVar35) =
               *(double *)(local_290 + 0x10 + lVar35) + (double)fVar2;
          lVar35 = lVar35 + 0x18;
        } while (uVar33 * 0x18 != lVar35);
      }
      FUN_147ecf2f6(&local_210,param_1,param_2,0xffffffff);
      uVar17 = local_1bc;
      LVar27 = local_210;
      local_208 = local_208;
      if ((local_208 < *(int *)(local_210.QuadPart + 8)) &&
         (LVar27 = local_210, local_208 = local_208, local_288 = uVar33,
         (*(byte *)(local_210.QuadPart + 0x13e) & 1) == 0)) {
        local_280 = CONCAT44(local_280._4_4_,(uint)bVar4);
        while ((local_200 < 0.0 ||
               (QueryPerformanceCounter(&local_138), LVar27 = local_210,
               (double)local_138.QuadPart * DAT_14c83f420 + 16777216.0 < local_200))) {
          plVar8 = (longlong *)param_2[0x2c];
          if (plVar8 == (longlong *)0x0) {
            local_128 = DAT_14c8464f0;
            local_138.s.HighPart = DAT_14c8464e0._4_4_;
            local_138.s.LowPart = (undefined4)DAT_14c8464e0;
            uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,&local_138,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          dVar9 = local_128 + (double)fVar1;
          dVar10 = uStack_130 + 0.0;
          dVar11 = (double)local_138 + 0.0;
          plVar8 = (longlong *)param_2[0x2d];
          if (plVar8 == (longlong *)0x0) {
            lVar35 = 0;
          }
          else {
            lVar35 = (**(code **)(*plVar8 + 0x2c8))
                               (plVar8,((longlong)
                                        ((ulonglong)
                                         *(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21)
                                       >> 0x21) + param_2[3]);
          }
          local_128 = (double)CONCAT44(uStack_1a4,
                                       CONCAT13(uStack_1a5,CONCAT21(uStack_1a7,local_1a8)));
          uStack_120 = CONCAT11(uStack_19f,uStack_1a0);
          uStack_116 = CONCAT22(local_194,uStack_196);
          uStack_112 = CONCAT22(local_190,uStack_192);
          uStack_118 = (undefined2)(CONCAT13(uStack_197,CONCAT12(local_198,uStack_19a)) >> 0x10);
          uStack_11e = (undefined4)(CONCAT24(uStack_19c,CONCAT22(uStack_19e,uStack_120)) >> 0x10);
          uStack_11a = uStack_19a;
          local_138 = local_1b8;
          uStack_130 = dStack_1b0;
          local_e8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)local_160;
          local_e0 = (int)local_160;
          if (lVar23 == 0) {
            local_dc = 8;
          }
          else {
            puVar25 = local_168;
            if (local_168 == (undefined1 *)0x0) {
              puVar25 = local_188;
            }
            local_278 = lVar35;
            FUN_14470be6c(local_108,local_160 & 0xffffffff,0);
            puVar21 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar21 = local_108;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
            lVar35 = local_278;
          }
          local_c8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)(uint)local_140;
          local_c0 = (uint)local_140;
          if (lVar23 == 0) {
            local_bc = 4;
          }
          else {
            puVar25 = local_148;
            if (local_148 == (undefined1 *)0x0) {
              puVar25 = local_158;
            }
            FUN_1447163e6(local_d8,local_140 & 0xffffffff,0);
            puVar21 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar21 = local_d8;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          uVar13 = local_c0;
          if (lVar35 != 0) {
            uVar20 = *(undefined4 *)(lVar35 + 0xc);
            lVar35 = (longlong)(int)local_c0;
            local_c0 = local_c0 + 1;
            if (local_bc < local_c0) {
              FUN_1447de67e(local_d8,uVar13);
            }
            puVar25 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar25 = local_d8;
            }
            *(undefined4 *)(puVar25 + lVar35 * 4) = uVar20;
          }
          if (0 < (int)local_288) {
            lVar35 = 0;
            do {
              local_2b0 = &local_1e8;
              local_248 = *(LARGE_INTEGER *)(local_290 + lVar35);
              LStack_240 = ((LARGE_INTEGER *)(local_290 + lVar35))[1];
              local_238 = *(double *)(local_290 + 0x10 + lVar35);
              local_2a8 = (LARGE_INTEGER *)&DAT_14cad0f08;
              local_2b8 = &local_138;
              local_228 = dVar11;
              dStack_220 = dVar10;
              local_218 = dVar9;
              uVar20 = FUN_140386a8e(param_2[0xb],&local_248,&local_228,uVar17);
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,local_295);
              FUN_143852d98(&local_210,local_280 & 0xffffffff,local_294,uVar20);
              lVar35 = lVar35 + 0x18;
            } while (uVar33 * 0x18 != lVar35);
          }
          if (local_c8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_147ee880a(&local_210);
          LVar27 = local_210;
          local_208 = local_208;
          if ((*(int *)(local_210.QuadPart + 8) <= local_208) ||
             (LVar27 = local_210, (*(byte *)(local_210.QuadPart + 0x13e) & 1) != 0)) break;
        }
      }
    }
    break;
  case 1:
    uVar5 = *(undefined1 *)(param_1 + 0x4a);
    uVar6 = *(undefined1 *)(param_1 + 0x34);
    uVar32 = uStack_250 & 0xffffffff;
    uVar31 = (undefined7)(local_258 >> 8);
    if (cVar15 == '\0') {
      local_1bc = 0;
      local_1d8 = _DAT_14cad0f20;
      uStack_1d0 = uRam000000014cad0f28;
      local_1e8.s.LowPart = _DAT_14cad0f10;
      local_1e8.s.HighPart = _DAT_14cad0f14;
      uStack_1e0 = _DAT_14cad0f18;
      uStack_1dc = _DAT_14cad0f1c;
      if (*(char *)(param_1 + 0x22d) == '\x02') {
        uVar7 = *(undefined1 *)(param_1 + 0x220);
        local_295 = uVar3;
        uVar24 = FUN_144a9f2d6();
        local_1bc = FUN_1434274ae(uVar24,1,uVar7);
      }
      else {
        local_295 = uVar3;
        if ((*(char *)(param_1 + 0x22d) == '\x03') &&
           (cVar15 = FUN_1479b02fa(*(undefined8 *)(param_1 + 0x224),&local_1bc,&local_1e8),
           cVar15 == '\0')) {
          FUN_147ecf2f6(&local_138,param_1,param_2,0xffffffff);
          uVar3 = local_295;
          LVar27 = local_138;
          local_208 = (int)uStack_130;
          if (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
             (uVar24 = CONCAT71(uVar31,local_295), (*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0)
             ) {
            do {
              if ((0.0 <= local_128) &&
                 (QueryPerformanceCounter(&local_210),
                 local_128 <= (double)local_210.QuadPart * DAT_14c83f420 + 16777216.0))
              goto LAB_1438566ee;
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_138,uVar6,uVar5,(uint)uVar24 ^ 1);
              FUN_147ee880a(&local_138);
              LVar27 = local_138;
              local_208 = (int)uStack_130;
            } while (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
                    ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0));
          }
          break;
        }
      }
      local_248 = *(LARGE_INTEGER *)(param_1 + 0x210);
      LStack_240.s.LowPart = *(undefined4 *)(param_1 + 0x218);
      if (0 < iVar16) {
        lVar35 = 0;
        do {
          *(double *)(uVar33 + 0x10 + lVar35) = *(double *)(uVar33 + 0x10 + lVar35) + (double)fVar2;
          lVar35 = lVar35 + 0x18;
        } while (uVar32 * 0x18 != lVar35);
      }
      FUN_147ecf2f6(&local_210,param_1,param_2,0xffffffff);
      LVar27 = local_210;
      local_208 = local_208;
      if ((local_208 < *(int *)(local_210.QuadPart + 8)) &&
         (LVar27 = local_210, local_208 = local_208, local_290 = uVar32,
         (*(byte *)(local_210.QuadPart + 0x13e) & 1) == 0)) {
        local_294 = local_1bc;
        while ((local_200 < 0.0 ||
               (QueryPerformanceCounter(&local_138), LVar27 = local_210,
               (double)local_138.QuadPart * DAT_14c83f420 + 16777216.0 < local_200))) {
          plVar8 = (longlong *)param_2[0x2c];
          if (plVar8 == (longlong *)0x0) {
            local_128 = DAT_14c8464f0;
            local_138.s.HighPart = DAT_14c8464e0._4_4_;
            local_138.s.LowPart = (undefined4)DAT_14c8464e0;
            uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,&local_138,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          local_218 = local_128 + (double)fVar1;
          dStack_220 = uStack_130 + 0.0;
          local_228 = (double)local_138 + 0.0;
          plVar8 = (longlong *)param_2[0x2d];
          if (plVar8 == (longlong *)0x0) {
            lVar35 = 0;
          }
          else {
            lVar35 = (**(code **)(*plVar8 + 0x2c8))
                               (plVar8,((longlong)
                                        ((ulonglong)
                                         *(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21)
                                       >> 0x21) + param_2[3]);
          }
          local_128 = (double)CONCAT44(uStack_1a4,
                                       CONCAT13(uStack_1a5,CONCAT21(uStack_1a7,local_1a8)));
          uStack_120 = CONCAT11(uStack_19f,uStack_1a0);
          uStack_116 = CONCAT22(local_194,uStack_196);
          uStack_112 = CONCAT22(local_190,uStack_192);
          uStack_118 = (undefined2)(CONCAT13(uStack_197,CONCAT12(local_198,uStack_19a)) >> 0x10);
          uStack_11e = (undefined4)(CONCAT24(uStack_19c,CONCAT22(uStack_19e,uStack_120)) >> 0x10);
          uStack_11a = uStack_19a;
          local_138 = local_1b8;
          uStack_130 = dStack_1b0;
          local_e8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)local_160;
          local_e0 = (int)local_160;
          if (lVar23 == 0) {
            local_dc = 8;
          }
          else {
            puVar25 = local_168;
            if (local_168 == (undefined1 *)0x0) {
              puVar25 = local_188;
            }
            FUN_14470be6c(local_108,local_160 & 0xffffffff,0);
            puVar21 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar21 = local_108;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          local_c8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)(uint)local_140;
          local_c0 = (uint)local_140;
          if (lVar23 == 0) {
            local_bc = 4;
          }
          else {
            puVar25 = local_148;
            if (local_148 == (undefined1 *)0x0) {
              puVar25 = local_158;
            }
            FUN_1447163e6(local_d8,local_140 & 0xffffffff,0);
            puVar21 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar21 = local_d8;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          uVar17 = local_c0;
          if (lVar35 != 0) {
            uVar20 = *(undefined4 *)(lVar35 + 0xc);
            lVar35 = (longlong)(int)local_c0;
            local_c0 = local_c0 + 1;
            if (local_bc < local_c0) {
              FUN_1447de67e(local_d8,uVar17);
            }
            puVar25 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar25 = local_d8;
            }
            *(undefined4 *)(puVar25 + lVar35 * 4) = uVar20;
          }
          uVar17 = local_294;
          uVar3 = local_295;
          uVar32 = local_290;
          uVar34 = uVar33;
          if (0 < (int)local_290) {
            do {
              local_2a8 = &local_1e8;
              local_2b0 = &local_248;
              local_2b8 = &local_138;
              uVar20 = FUN_147ef1a1a(&local_228,uVar34,param_2[0xb],uVar17);
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_210,uVar6,uVar5,uVar20);
              uVar34 = uVar34 + 0x18;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          if (local_c8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_147ee880a(&local_210);
          LVar27 = local_210;
          local_208 = local_208;
          if ((*(int *)(local_210.QuadPart + 8) <= local_208) ||
             (LVar27 = local_210, local_208 = local_208,
             (*(byte *)(local_210.QuadPart + 0x13e) & 1) != 0)) break;
        }
      }
    }
    else {
      local_1bc = 0;
      local_1d8 = _DAT_14cad0f20;
      uStack_1d0 = uRam000000014cad0f28;
      local_1e8.s.LowPart = _DAT_14cad0f10;
      local_1e8.s.HighPart = _DAT_14cad0f14;
      uStack_1e0 = _DAT_14cad0f18;
      uStack_1dc = _DAT_14cad0f1c;
      if (*(char *)(param_1 + 0x22d) == '\x02') {
        uVar7 = *(undefined1 *)(param_1 + 0x220);
        local_295 = uVar3;
        uVar24 = FUN_144a9f2d6();
        local_1bc = FUN_1434274ae(uVar24,1,uVar7);
      }
      else {
        local_295 = uVar3;
        if ((*(char *)(param_1 + 0x22d) == '\x03') &&
           (cVar15 = FUN_1479b02fa(*(undefined8 *)(param_1 + 0x224),&local_1bc,&local_1e8),
           cVar15 == '\0')) {
          FUN_147ecf2f6(&local_138,param_1,param_2,0xffffffff);
          uVar3 = local_295;
          LVar27 = local_138;
          local_208 = (int)uStack_130;
          if (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
             (uVar24 = CONCAT71(uVar31,local_295), (*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0)
             ) {
            do {
              if ((0.0 <= local_128) &&
                 (QueryPerformanceCounter(&local_210),
                 local_128 <= (double)local_210.QuadPart * DAT_14c83f420 + 16777216.0))
              goto LAB_1438566ee;
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_138,uVar6,uVar5,(uint)uVar24 ^ 1);
              FUN_147ee880a(&local_138);
              LVar27 = local_138;
              local_208 = (int)uStack_130;
            } while (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
                    ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0));
          }
          break;
        }
      }
      local_248 = *(LARGE_INTEGER *)(param_1 + 0x210);
      LStack_240.s.LowPart = *(undefined4 *)(param_1 + 0x218);
      if (0 < iVar16) {
        lVar35 = 0;
        do {
          *(double *)(uVar33 + 0x10 + lVar35) = *(double *)(uVar33 + 0x10 + lVar35) + (double)fVar2;
          lVar35 = lVar35 + 0x18;
        } while (uVar32 * 0x18 != lVar35);
      }
      FUN_147ecf2f6(&local_210,param_1,param_2,0xffffffff);
      LVar27 = local_210;
      local_208 = local_208;
      if ((local_208 < *(int *)(local_210.QuadPart + 8)) &&
         (LVar27 = local_210, local_208 = local_208, local_290 = uVar32,
         (*(byte *)(local_210.QuadPart + 0x13e) & 1) == 0)) {
        local_294 = local_1bc;
        while ((local_200 < 0.0 ||
               (QueryPerformanceCounter(&local_138), LVar27 = local_210,
               (double)local_138.QuadPart * DAT_14c83f420 + 16777216.0 < local_200))) {
          plVar8 = (longlong *)param_2[0x2c];
          if (plVar8 == (longlong *)0x0) {
            local_128 = DAT_14c8464f0;
            local_138.s.HighPart = DAT_14c8464e0._4_4_;
            local_138.s.LowPart = (undefined4)DAT_14c8464e0;
            uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,&local_138,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          local_218 = local_128 + (double)fVar1;
          dStack_220 = uStack_130 + 0.0;
          local_228 = (double)local_138 + 0.0;
          plVar8 = (longlong *)param_2[0x2d];
          if (plVar8 == (longlong *)0x0) {
            lVar35 = 0;
          }
          else {
            lVar35 = (**(code **)(*plVar8 + 0x2c8))
                               (plVar8,((longlong)
                                        ((ulonglong)
                                         *(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21)
                                       >> 0x21) + param_2[3]);
          }
          local_128 = (double)CONCAT44(uStack_1a4,
                                       CONCAT13(uStack_1a5,CONCAT21(uStack_1a7,local_1a8)));
          uStack_120 = CONCAT11(uStack_19f,uStack_1a0);
          uStack_116 = CONCAT22(local_194,uStack_196);
          uStack_112 = CONCAT22(local_190,uStack_192);
          uStack_118 = (undefined2)(CONCAT13(uStack_197,CONCAT12(local_198,uStack_19a)) >> 0x10);
          uStack_11e = (undefined4)(CONCAT24(uStack_19c,CONCAT22(uStack_19e,uStack_120)) >> 0x10);
          uStack_11a = uStack_19a;
          local_138 = local_1b8;
          uStack_130 = dStack_1b0;
          local_e8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)local_160;
          local_e0 = (int)local_160;
          if (lVar23 == 0) {
            local_dc = 8;
          }
          else {
            puVar25 = local_168;
            if (local_168 == (undefined1 *)0x0) {
              puVar25 = local_188;
            }
            FUN_14470be6c(local_108,local_160 & 0xffffffff,0);
            puVar21 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar21 = local_108;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          local_c8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)(uint)local_140;
          local_c0 = (uint)local_140;
          if (lVar23 == 0) {
            local_bc = 4;
          }
          else {
            puVar25 = local_148;
            if (local_148 == (undefined1 *)0x0) {
              puVar25 = local_158;
            }
            FUN_1447163e6(local_d8,local_140 & 0xffffffff,0);
            puVar21 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar21 = local_d8;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          uVar17 = local_c0;
          if (lVar35 != 0) {
            uVar20 = *(undefined4 *)(lVar35 + 0xc);
            lVar35 = (longlong)(int)local_c0;
            local_c0 = local_c0 + 1;
            if (local_bc < local_c0) {
              FUN_1447de67e(local_d8,uVar17);
            }
            puVar25 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar25 = local_d8;
            }
            *(undefined4 *)(puVar25 + lVar35 * 4) = uVar20;
          }
          uVar17 = local_294;
          uVar3 = local_295;
          uVar32 = local_290;
          uVar34 = uVar33;
          if (0 < (int)local_290) {
            do {
              local_2a8 = &local_1e8;
              local_2b0 = &local_248;
              local_2b8 = &local_138;
              uVar20 = FUN_147ef1a1a(uVar34,&local_228,param_2[0xb],uVar17);
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_210,uVar6,uVar5,uVar20);
              uVar34 = uVar34 + 0x18;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          if (local_c8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_147ee880a(&local_210);
          LVar27 = local_210;
          local_208 = local_208;
          if ((*(int *)(local_210.QuadPart + 8) <= local_208) ||
             (LVar27 = local_210, local_208 = local_208,
             (*(byte *)(local_210.QuadPart + 0x13e) & 1) != 0)) break;
        }
      }
    }
    break;
  case 2:
    uVar5 = *(undefined1 *)(param_1 + 0x4a);
    uVar6 = *(undefined1 *)(param_1 + 0x34);
    uVar32 = uStack_250 & 0xffffffff;
    local_290 = uVar32;
    if (cVar15 == '\0') {
      local_1bc = 0;
      local_1d8 = _DAT_14cad0f20;
      uStack_1d0 = uRam000000014cad0f28;
      local_1e8.s.LowPart = _DAT_14cad0f10;
      local_1e8.s.HighPart = _DAT_14cad0f14;
      uStack_1e0 = _DAT_14cad0f18;
      uStack_1dc = _DAT_14cad0f1c;
      if (*(char *)(param_1 + 0x22d) == '\x02') {
        uVar7 = *(undefined1 *)(param_1 + 0x220);
        local_295 = uVar3;
        uVar24 = FUN_144a9f2d6();
        uVar32 = local_290;
        local_1bc = FUN_1434274ae(uVar24,1,uVar7);
      }
      else {
        local_295 = uVar3;
        if ((*(char *)(param_1 + 0x22d) == '\x03') &&
           (cVar15 = FUN_1479b02fa(*(undefined8 *)(param_1 + 0x224),&local_1bc,&local_1e8),
           cVar15 == '\0')) {
          FUN_147ecf2f6(&local_138,param_1,param_2,0xffffffff);
          LVar27 = local_138;
          local_208 = (int)uStack_130;
          if (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
             ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0)) {
            do {
              if ((0.0 <= local_128) &&
                 (QueryPerformanceCounter(&local_210),
                 local_128 <= (double)local_210.QuadPart * DAT_14c83f420 + 16777216.0))
              goto LAB_1438566ee;
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_138,uVar6,uVar5,uVar17 ^ 1);
              FUN_147ee880a(&local_138);
              LVar27 = local_138;
              local_208 = (int)uStack_130;
            } while (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
                    ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0));
          }
          break;
        }
      }
      uVar20 = *(undefined4 *)(param_1 + 0x210);
      if (0 < (int)uVar32) {
        lVar35 = 0;
        do {
          *(double *)(uVar33 + 0x10 + lVar35) = *(double *)(uVar33 + 0x10 + lVar35) + (double)fVar2;
          lVar35 = lVar35 + 0x18;
        } while (uVar32 * 0x18 != lVar35);
      }
      FUN_147ecf2f6(&local_210,param_1,param_2,0xffffffff);
      LVar27 = local_210;
      local_208 = local_208;
      if ((local_208 < *(int *)(local_210.QuadPart + 8)) &&
         (LVar27 = local_210, local_208 = local_208,
         (*(byte *)(local_210.QuadPart + 0x13e) & 1) == 0)) {
        local_280 = uVar33;
        local_294 = local_1bc;
        while ((uVar33 = local_280, local_200 < 0.0 ||
               (QueryPerformanceCounter(&local_138), LVar27 = local_210,
               (double)local_138.QuadPart * DAT_14c83f420 + 16777216.0 < local_200))) {
          plVar8 = (longlong *)param_2[0x2c];
          if (plVar8 == (longlong *)0x0) {
            local_128 = DAT_14c8464f0;
            local_138.s.HighPart = DAT_14c8464e0._4_4_;
            local_138.s.LowPart = (undefined4)DAT_14c8464e0;
            uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,&local_138,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          local_218 = local_128 + (double)fVar1;
          dStack_220 = uStack_130 + 0.0;
          local_228 = (double)local_138 + 0.0;
          plVar8 = (longlong *)param_2[0x2d];
          if (plVar8 == (longlong *)0x0) {
            lVar35 = 0;
          }
          else {
            lVar35 = (**(code **)(*plVar8 + 0x2c8))
                               (plVar8,((longlong)
                                        ((ulonglong)
                                         *(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21)
                                       >> 0x21) + param_2[3]);
          }
          local_128 = (double)CONCAT44(uStack_1a4,
                                       CONCAT13(uStack_1a5,CONCAT21(uStack_1a7,local_1a8)));
          uStack_120 = CONCAT11(uStack_19f,uStack_1a0);
          uStack_116 = CONCAT22(local_194,uStack_196);
          uStack_112 = CONCAT22(local_190,uStack_192);
          uStack_118 = (undefined2)(CONCAT13(uStack_197,CONCAT12(local_198,uStack_19a)) >> 0x10);
          uStack_11e = (undefined4)(CONCAT24(uStack_19c,CONCAT22(uStack_19e,uStack_120)) >> 0x10);
          uStack_11a = uStack_19a;
          local_138 = local_1b8;
          uStack_130 = dStack_1b0;
          local_e8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)local_160;
          local_e0 = (int)local_160;
          if (lVar23 == 0) {
            local_dc = 8;
          }
          else {
            puVar25 = local_168;
            if (local_168 == (undefined1 *)0x0) {
              puVar25 = local_188;
            }
            FUN_14470be6c(local_108,local_160 & 0xffffffff,0);
            puVar21 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar21 = local_108;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          local_c8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)(uint)local_140;
          local_c0 = (uint)local_140;
          if (lVar23 == 0) {
            local_bc = 4;
          }
          else {
            puVar25 = local_148;
            if (local_148 == (undefined1 *)0x0) {
              puVar25 = local_158;
            }
            FUN_1447163e6(local_d8,local_140 & 0xffffffff,0);
            puVar21 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar21 = local_d8;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          uVar17 = local_c0;
          if (lVar35 != 0) {
            uVar18 = *(undefined4 *)(lVar35 + 0xc);
            lVar35 = (longlong)(int)local_c0;
            local_c0 = local_c0 + 1;
            if (local_bc < local_c0) {
              FUN_1447de67e(local_d8,uVar17);
            }
            puVar25 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar25 = local_d8;
            }
            *(undefined4 *)(puVar25 + lVar35 * 4) = uVar18;
          }
          uVar17 = local_294;
          uVar3 = local_295;
          uVar32 = local_290;
          if (0 < (int)local_290) {
            do {
              local_248.s.HighPart = uVar20;
              local_248.s.LowPart = 2;
              local_2a0 = &local_1e8;
              local_2b0 = &local_248;
              local_2b8 = (LARGE_INTEGER *)CONCAT44(local_2b8._4_4_,uVar17);
              local_2a8 = &local_138;
              uVar18 = FUN_140386f30(param_2[0xb],&local_228,uVar33,&DAT_14c8463d0);
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_210,uVar6,uVar5,uVar18);
              uVar33 = uVar33 + 0x18;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          if (local_c8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_147ee880a(&local_210);
          LVar27 = local_210;
          local_208 = local_208;
          if ((*(int *)(local_210.QuadPart + 8) <= local_208) ||
             (LVar27 = local_210, local_208 = local_208,
             (*(byte *)(local_210.QuadPart + 0x13e) & 1) != 0)) break;
        }
      }
    }
    else {
      local_1bc = 0;
      local_1d8 = _DAT_14cad0f20;
      uStack_1d0 = uRam000000014cad0f28;
      local_1e8.s.LowPart = _DAT_14cad0f10;
      local_1e8.s.HighPart = _DAT_14cad0f14;
      uStack_1e0 = _DAT_14cad0f18;
      uStack_1dc = _DAT_14cad0f1c;
      if (*(char *)(param_1 + 0x22d) == '\x02') {
        uVar7 = *(undefined1 *)(param_1 + 0x220);
        local_295 = uVar3;
        uVar24 = FUN_144a9f2d6();
        uVar32 = local_290;
        local_1bc = FUN_1434274ae(uVar24,1,uVar7);
      }
      else {
        local_295 = uVar3;
        if ((*(char *)(param_1 + 0x22d) == '\x03') &&
           (cVar15 = FUN_1479b02fa(*(undefined8 *)(param_1 + 0x224),&local_1bc,&local_1e8),
           cVar15 == '\0')) {
          FUN_147ecf2f6(&local_138,param_1,param_2,0xffffffff);
          LVar27 = local_138;
          local_208 = (int)uStack_130;
          if (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
             ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0)) {
            do {
              if ((0.0 <= local_128) &&
                 (QueryPerformanceCounter(&local_210),
                 local_128 <= (double)local_210.QuadPart * DAT_14c83f420 + 16777216.0))
              goto LAB_1438566ee;
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_138,uVar6,uVar5,uVar17 ^ 1);
              FUN_147ee880a(&local_138);
              LVar27 = local_138;
              local_208 = (int)uStack_130;
            } while (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
                    ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0));
          }
          break;
        }
      }
      uVar20 = *(undefined4 *)(param_1 + 0x210);
      if (0 < (int)uVar32) {
        lVar35 = 0;
        do {
          *(double *)(uVar33 + 0x10 + lVar35) = *(double *)(uVar33 + 0x10 + lVar35) + (double)fVar2;
          lVar35 = lVar35 + 0x18;
        } while (uVar32 * 0x18 != lVar35);
      }
      FUN_147ecf2f6(&local_210,param_1,param_2,0xffffffff);
      LVar27 = local_210;
      local_208 = local_208;
      if ((local_208 < *(int *)(local_210.QuadPart + 8)) &&
         (LVar27 = local_210, local_208 = local_208,
         (*(byte *)(local_210.QuadPart + 0x13e) & 1) == 0)) {
        local_294 = local_1bc;
        while ((local_200 < 0.0 ||
               (QueryPerformanceCounter(&local_138), LVar27 = local_210,
               (double)local_138.QuadPart * DAT_14c83f420 + 16777216.0 < local_200))) {
          plVar8 = (longlong *)param_2[0x2c];
          if (plVar8 == (longlong *)0x0) {
            local_128 = DAT_14c8464f0;
            local_138.s.HighPart = DAT_14c8464e0._4_4_;
            local_138.s.LowPart = (undefined4)DAT_14c8464e0;
            uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,&local_138,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          local_218 = local_128 + (double)fVar1;
          dStack_220 = uStack_130 + 0.0;
          local_228 = (double)local_138 + 0.0;
          plVar8 = (longlong *)param_2[0x2d];
          if (plVar8 == (longlong *)0x0) {
            lVar35 = 0;
          }
          else {
            lVar35 = (**(code **)(*plVar8 + 0x2c8))
                               (plVar8,((longlong)
                                        ((ulonglong)
                                         *(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21)
                                       >> 0x21) + param_2[3]);
          }
          local_128 = (double)CONCAT44(uStack_1a4,
                                       CONCAT13(uStack_1a5,CONCAT21(uStack_1a7,local_1a8)));
          uStack_120 = CONCAT11(uStack_19f,uStack_1a0);
          uStack_116 = CONCAT22(local_194,uStack_196);
          uStack_112 = CONCAT22(local_190,uStack_192);
          uStack_118 = (undefined2)(CONCAT13(uStack_197,CONCAT12(local_198,uStack_19a)) >> 0x10);
          uStack_11e = (undefined4)(CONCAT24(uStack_19c,CONCAT22(uStack_19e,uStack_120)) >> 0x10);
          uStack_11a = uStack_19a;
          local_138 = local_1b8;
          uStack_130 = dStack_1b0;
          local_e8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)local_160;
          local_e0 = (int)local_160;
          if (lVar23 == 0) {
            local_dc = 8;
          }
          else {
            puVar25 = local_168;
            if (local_168 == (undefined1 *)0x0) {
              puVar25 = local_188;
            }
            FUN_14470be6c(local_108,local_160 & 0xffffffff,0);
            puVar21 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar21 = local_108;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          local_c8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)(uint)local_140;
          local_c0 = (uint)local_140;
          if (lVar23 == 0) {
            local_bc = 4;
          }
          else {
            puVar25 = local_148;
            if (local_148 == (undefined1 *)0x0) {
              puVar25 = local_158;
            }
            FUN_1447163e6(local_d8,local_140 & 0xffffffff,0);
            puVar21 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar21 = local_d8;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          uVar17 = local_c0;
          if (lVar35 != 0) {
            uVar18 = *(undefined4 *)(lVar35 + 0xc);
            lVar35 = (longlong)(int)local_c0;
            local_c0 = local_c0 + 1;
            if (local_bc < local_c0) {
              FUN_1447de67e(local_d8,uVar17);
            }
            puVar25 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar25 = local_d8;
            }
            *(undefined4 *)(puVar25 + lVar35 * 4) = uVar18;
          }
          uVar17 = local_294;
          uVar3 = local_295;
          uVar32 = local_290;
          uVar34 = uVar33;
          if (0 < (int)local_290) {
            do {
              local_248.s.HighPart = uVar20;
              local_248.s.LowPart = 2;
              local_2a0 = &local_1e8;
              local_2a8 = &local_138;
              local_2b0 = &local_248;
              local_2b8 = (LARGE_INTEGER *)CONCAT44(local_2b8._4_4_,uVar17);
              uVar18 = FUN_140386f30(param_2[0xb],uVar34,&local_228,&DAT_14c8463d0);
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_210,uVar6,uVar5,uVar18);
              uVar34 = uVar34 + 0x18;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          if (local_c8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_147ee880a(&local_210);
          LVar27 = local_210;
          local_208 = local_208;
          if ((*(int *)(local_210.QuadPart + 8) <= local_208) ||
             (LVar27 = local_210, local_208 = local_208,
             (*(byte *)(local_210.QuadPart + 0x13e) & 1) != 0)) break;
        }
      }
    }
    break;
  case 3:
    uVar5 = *(undefined1 *)(param_1 + 0x4a);
    uVar6 = *(undefined1 *)(param_1 + 0x34);
    uVar32 = uStack_250 & 0xffffffff;
    local_290 = uVar32;
    if (cVar15 == '\0') {
      local_1bc = 0;
      local_1d8 = _DAT_14cad0f20;
      uStack_1d0 = uRam000000014cad0f28;
      local_1e8.s.LowPart = _DAT_14cad0f10;
      local_1e8.s.HighPart = _DAT_14cad0f14;
      uStack_1e0 = _DAT_14cad0f18;
      uStack_1dc = _DAT_14cad0f1c;
      if (*(char *)(param_1 + 0x22d) == '\x02') {
        uVar7 = *(undefined1 *)(param_1 + 0x220);
        local_295 = uVar3;
        uVar24 = FUN_144a9f2d6();
        uVar32 = local_290;
        local_1bc = FUN_1434274ae(uVar24,1,uVar7);
      }
      else {
        local_295 = uVar3;
        if ((*(char *)(param_1 + 0x22d) == '\x03') &&
           (cVar15 = FUN_1479b02fa(*(undefined8 *)(param_1 + 0x224),&local_1bc,&local_1e8),
           cVar15 == '\0')) {
          FUN_147ecf2f6(&local_138,param_1,param_2,0xffffffff);
          LVar27 = local_138;
          local_208 = (int)uStack_130;
          if (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
             ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0)) {
            do {
              if ((0.0 <= local_128) &&
                 (QueryPerformanceCounter(&local_210),
                 local_128 <= (double)local_210.QuadPart * DAT_14c83f420 + 16777216.0))
              goto LAB_1438566ee;
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_138,uVar6,uVar5,uVar17 ^ 1);
              FUN_147ee880a(&local_138);
              LVar27 = local_138;
              local_208 = (int)uStack_130;
            } while (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
                    ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0));
          }
          break;
        }
      }
      uVar20 = *(undefined4 *)(param_1 + 0x210);
      uVar18 = *(undefined4 *)(param_1 + 0x218);
      if (0 < (int)uVar32) {
        lVar35 = 0;
        do {
          *(double *)(uVar33 + 0x10 + lVar35) = *(double *)(uVar33 + 0x10 + lVar35) + (double)fVar2;
          lVar35 = lVar35 + 0x18;
        } while (uVar32 * 0x18 != lVar35);
      }
      FUN_147ecf2f6(&local_210,param_1,param_2,0xffffffff);
      LVar27 = local_210;
      local_208 = local_208;
      if ((local_208 < *(int *)(local_210.QuadPart + 8)) &&
         (LVar27 = local_210, local_208 = local_208,
         (*(byte *)(local_210.QuadPart + 0x13e) & 1) == 0)) {
        local_294 = local_1bc;
        while ((local_200 < 0.0 ||
               (QueryPerformanceCounter(&local_138), LVar27 = local_210,
               (double)local_138.QuadPart * DAT_14c83f420 + 16777216.0 < local_200))) {
          plVar8 = (longlong *)param_2[0x2c];
          if (plVar8 == (longlong *)0x0) {
            local_128 = DAT_14c8464f0;
            local_138.s.HighPart = DAT_14c8464e0._4_4_;
            local_138.s.LowPart = (undefined4)DAT_14c8464e0;
            uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,&local_138,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          local_218 = local_128 + (double)fVar1;
          dStack_220 = uStack_130 + 0.0;
          local_228 = (double)local_138 + 0.0;
          plVar8 = (longlong *)param_2[0x2d];
          if (plVar8 == (longlong *)0x0) {
            lVar35 = 0;
          }
          else {
            lVar35 = (**(code **)(*plVar8 + 0x2c8))
                               (plVar8,((longlong)
                                        ((ulonglong)
                                         *(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21)
                                       >> 0x21) + param_2[3]);
          }
          local_128 = (double)CONCAT44(uStack_1a4,
                                       CONCAT13(uStack_1a5,CONCAT21(uStack_1a7,local_1a8)));
          uStack_120 = CONCAT11(uStack_19f,uStack_1a0);
          uStack_116 = CONCAT22(local_194,uStack_196);
          uStack_112 = CONCAT22(local_190,uStack_192);
          uStack_118 = (undefined2)(CONCAT13(uStack_197,CONCAT12(local_198,uStack_19a)) >> 0x10);
          uStack_11e = (undefined4)(CONCAT24(uStack_19c,CONCAT22(uStack_19e,uStack_120)) >> 0x10);
          uStack_11a = uStack_19a;
          local_138 = local_1b8;
          uStack_130 = dStack_1b0;
          local_e8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)local_160;
          local_e0 = (int)local_160;
          if (lVar23 == 0) {
            local_dc = 8;
          }
          else {
            puVar25 = local_168;
            if (local_168 == (undefined1 *)0x0) {
              puVar25 = local_188;
            }
            FUN_14470be6c(local_108,local_160 & 0xffffffff,0);
            puVar21 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar21 = local_108;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          local_c8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)(uint)local_140;
          local_c0 = (uint)local_140;
          if (lVar23 == 0) {
            local_bc = 4;
          }
          else {
            puVar25 = local_148;
            if (local_148 == (undefined1 *)0x0) {
              puVar25 = local_158;
            }
            FUN_1447163e6(local_d8,local_140 & 0xffffffff,0);
            puVar21 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar21 = local_d8;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          uVar17 = local_c0;
          if (lVar35 != 0) {
            uVar19 = *(undefined4 *)(lVar35 + 0xc);
            lVar35 = (longlong)(int)local_c0;
            local_c0 = local_c0 + 1;
            if (local_bc < local_c0) {
              FUN_1447de67e(local_d8,uVar17);
            }
            puVar25 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar25 = local_d8;
            }
            *(undefined4 *)(puVar25 + lVar35 * 4) = uVar19;
          }
          uVar17 = local_294;
          uVar3 = local_295;
          uVar32 = local_290;
          uVar34 = uVar33;
          if (0 < (int)local_290) {
            do {
              local_248.s.HighPart = uVar20;
              local_248.s.LowPart = 3;
              LStack_240.s.LowPart = uVar18;
              local_2a0 = &local_1e8;
              local_2a8 = &local_138;
              local_2b0 = &local_248;
              local_2b8 = (LARGE_INTEGER *)CONCAT44(local_2b8._4_4_,uVar17);
              uVar19 = FUN_140386f30(param_2[0xb],&local_228,uVar34,&DAT_14c8463d0);
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_210,uVar6,uVar5,uVar19);
              uVar34 = uVar34 + 0x18;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          if (local_c8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_147ee880a(&local_210);
          LVar27 = local_210;
          local_208 = local_208;
          if ((*(int *)(local_210.QuadPart + 8) <= local_208) ||
             (LVar27 = local_210, local_208 = local_208,
             (*(byte *)(local_210.QuadPart + 0x13e) & 1) != 0)) break;
        }
      }
    }
    else {
      local_1bc = 0;
      local_1d8 = _DAT_14cad0f20;
      uStack_1d0 = uRam000000014cad0f28;
      local_1e8.s.LowPart = _DAT_14cad0f10;
      local_1e8.s.HighPart = _DAT_14cad0f14;
      uStack_1e0 = _DAT_14cad0f18;
      uStack_1dc = _DAT_14cad0f1c;
      if (*(char *)(param_1 + 0x22d) == '\x02') {
        uVar7 = *(undefined1 *)(param_1 + 0x220);
        local_295 = uVar3;
        uVar24 = FUN_144a9f2d6();
        uVar32 = local_290;
        local_1bc = FUN_1434274ae(uVar24,1,uVar7);
      }
      else {
        local_295 = uVar3;
        if ((*(char *)(param_1 + 0x22d) == '\x03') &&
           (cVar15 = FUN_1479b02fa(*(undefined8 *)(param_1 + 0x224),&local_1bc,&local_1e8),
           cVar15 == '\0')) {
          FUN_147ecf2f6(&local_138,param_1,param_2,0xffffffff);
          LVar27 = local_138;
          local_208 = (int)uStack_130;
          if (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
             ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0)) {
            do {
              if ((0.0 <= local_128) &&
                 (QueryPerformanceCounter(&local_210),
                 local_128 <= (double)local_210.QuadPart * DAT_14c83f420 + 16777216.0))
              goto LAB_1438566ee;
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_138,uVar6,uVar5,uVar17 ^ 1);
              FUN_147ee880a(&local_138);
              LVar27 = local_138;
              local_208 = (int)uStack_130;
            } while (((int)uStack_130 < *(int *)(local_138.QuadPart + 8)) &&
                    ((*(byte *)(local_138.QuadPart + 0x13e) & 1) == 0));
          }
          break;
        }
      }
      uVar20 = *(undefined4 *)(param_1 + 0x210);
      uVar18 = *(undefined4 *)(param_1 + 0x218);
      if (0 < (int)uVar32) {
        lVar35 = 0;
        do {
          *(double *)(uVar33 + 0x10 + lVar35) = *(double *)(uVar33 + 0x10 + lVar35) + (double)fVar2;
          lVar35 = lVar35 + 0x18;
        } while (uVar32 * 0x18 != lVar35);
      }
      FUN_147ecf2f6(&local_210,param_1,param_2,0xffffffff);
      LVar27 = local_210;
      local_208 = local_208;
      if ((local_208 < *(int *)(local_210.QuadPart + 8)) &&
         (LVar27 = local_210, local_208 = local_208,
         (*(byte *)(local_210.QuadPart + 0x13e) & 1) == 0)) {
        local_294 = local_1bc;
        while ((local_200 < 0.0 ||
               (QueryPerformanceCounter(&local_138), LVar27 = local_210,
               (double)local_138.QuadPart * DAT_14c83f420 + 16777216.0 < local_200))) {
          plVar8 = (longlong *)param_2[0x2c];
          if (plVar8 == (longlong *)0x0) {
            local_128 = DAT_14c8464f0;
            local_138.s.HighPart = DAT_14c8464e0._4_4_;
            local_138.s.LowPart = (undefined4)DAT_14c8464e0;
            uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,&local_138,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          local_218 = local_128 + (double)fVar1;
          dStack_220 = uStack_130 + 0.0;
          local_228 = (double)local_138 + 0.0;
          plVar8 = (longlong *)param_2[0x2d];
          if (plVar8 == (longlong *)0x0) {
            lVar35 = 0;
          }
          else {
            lVar35 = (**(code **)(*plVar8 + 0x2c8))
                               (plVar8,((longlong)
                                        ((ulonglong)
                                         *(uint *)(*param_2 + 4 + (longlong)local_208 * 8) << 0x21)
                                       >> 0x21) + param_2[3]);
          }
          local_128 = (double)CONCAT44(uStack_1a4,
                                       CONCAT13(uStack_1a5,CONCAT21(uStack_1a7,local_1a8)));
          uStack_120 = CONCAT11(uStack_19f,uStack_1a0);
          uStack_116 = CONCAT22(local_194,uStack_196);
          uStack_112 = CONCAT22(local_190,uStack_192);
          uStack_118 = (undefined2)(CONCAT13(uStack_197,CONCAT12(local_198,uStack_19a)) >> 0x10);
          uStack_11e = (undefined4)(CONCAT24(uStack_19c,CONCAT22(uStack_19e,uStack_120)) >> 0x10);
          uStack_11a = uStack_19a;
          local_138 = local_1b8;
          uStack_130 = dStack_1b0;
          local_e8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)local_160;
          local_e0 = (int)local_160;
          if (lVar23 == 0) {
            local_dc = 8;
          }
          else {
            puVar25 = local_168;
            if (local_168 == (undefined1 *)0x0) {
              puVar25 = local_188;
            }
            FUN_14470be6c(local_108,local_160 & 0xffffffff,0);
            puVar21 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar21 = local_108;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          local_c8 = (undefined1 *)0x0;
          lVar23 = (longlong)(int)(uint)local_140;
          local_c0 = (uint)local_140;
          if (lVar23 == 0) {
            local_bc = 4;
          }
          else {
            puVar25 = local_148;
            if (local_148 == (undefined1 *)0x0) {
              puVar25 = local_158;
            }
            FUN_1447163e6(local_d8,local_140 & 0xffffffff,0);
            puVar21 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar21 = local_d8;
            }
            memcpy(puVar21,puVar25,lVar23 << 2);
          }
          uVar17 = local_c0;
          if (lVar35 != 0) {
            uVar19 = *(undefined4 *)(lVar35 + 0xc);
            lVar35 = (longlong)(int)local_c0;
            local_c0 = local_c0 + 1;
            if (local_bc < local_c0) {
              FUN_1447de67e(local_d8,uVar17);
            }
            puVar25 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar25 = local_d8;
            }
            *(undefined4 *)(puVar25 + lVar35 * 4) = uVar19;
          }
          uVar17 = local_294;
          uVar3 = local_295;
          uVar32 = local_290;
          uVar34 = uVar33;
          if (0 < (int)local_290) {
            do {
              local_248.s.HighPart = uVar20;
              local_248.s.LowPart = 3;
              LStack_240.s.LowPart = uVar18;
              local_2a0 = &local_1e8;
              local_2a8 = &local_138;
              local_2b0 = &local_248;
              local_2b8 = (LARGE_INTEGER *)CONCAT44(local_2b8._4_4_,uVar17);
              uVar19 = FUN_140386f30(param_2[0xb],uVar34,&local_228,&DAT_14c8463d0);
              local_2b8 = (LARGE_INTEGER *)CONCAT71(local_2b8._1_7_,uVar3);
              FUN_143852d98(&local_210,uVar6,uVar5,uVar19);
              uVar34 = uVar34 + 0x18;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          if (local_c8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_147ee880a(&local_210);
          LVar27 = local_210;
          local_208 = local_208;
          if ((*(int *)(local_210.QuadPart + 8) <= local_208) ||
             (LVar27 = local_210, local_208 = local_208,
             (*(byte *)(local_210.QuadPart + 0x13e) & 1) != 0)) break;
        }
      }
    }
    break;
  default:
    goto switchD_1438537e1_default;
  }
LAB_1438566e3:
  *(int *)(LVar27.QuadPart + 0x124) = local_208;
switchD_1438537e1_default:
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  if (local_148 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14385375a:
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1438566ee:
  LVar27 = local_138;
  local_208 = (int)uStack_130;
  goto LAB_1438566e3;
}



// FUNCTION 14385675a FUN_14385675a body=73 status=ok
// SIG undefined FUN_14385675a(void)

void FUN_14385675a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  lVar1 = FUN_147eedcd2(lVar1);
  if ((param_1 != 0) && (lVar1 != 0)) {
    uVar2 = FUN_145a74e24();
    FUN_144718840(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 1438567a3 FUN_1438567a3 body=46 status=ok
// SIG undefined FUN_1438567a3(void)

void FUN_1438567a3(void)

{
  longlong lVar1;
  
  lVar1 = 0x30;
  do {
    if (*(longlong *)(lVar1 + 0x14cb201c0) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1438567d2 FUN_1438567d2 body=129 status=ok
// SIG undefined FUN_1438567d2(void)

void FUN_1438567d2(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x394) == '\0') && (*(char *)(param_1 + 0x2a4) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x338);
    if ((param_4 != -1 && iVar1 != -1) && (((iVar1 == 0 || (param_4 == 0)) || (iVar1 == param_4))))
    {
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(param_1);
      }
      FUN_147eedcd2(lVar2);
    }
  }
  FUN_147ef828c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143856854 FUN_143856854 body=115 status=ok
// SIG undefined FUN_143856854(void)

void FUN_143856854(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x394) == '\0') && (*(char *)(param_1 + 0x2a4) != '\x02')) {
    iVar1 = *(int *)(param_1 + 0x338);
    if ((param_2 != -1 && iVar1 != -1) && (((iVar1 == 0 || (param_2 == 0)) || (iVar1 == param_2))))
    {
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(param_1);
      }
      FUN_147eedcd2(lVar2);
    }
  }
  FUN_147ef83e2(param_1,param_2,param_3);
  return;
}



// FUNCTION 1438568c8 FUN_1438568c8 body=157 status=ok
// SIG undefined FUN_1438568c8(void)

void FUN_1438568c8(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x394) == '\0') && (*(char *)(param_1 + 0x2a4) == '\x02')) {
    iVar1 = *(int *)(param_1 + 0x338);
    if ((param_2 != -1 && iVar1 != -1) && (((iVar1 == 0 || (param_2 == 0)) || (iVar1 == param_2))))
    {
      lVar5 = *(longlong *)(param_1 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
      }
      lVar5 = FUN_147eedcd2(lVar5);
      if ((lVar5 != 0) && ((*(byte *)(param_1 + 0x392) & 1) != 0)) {
        FUN_147ef86b2(param_1);
      }
      *(undefined8 *)(param_1 + 0x388) = DAT_14c8464f0;
      uVar4 = DAT_14c8464e8._4_4_;
      uVar3 = (undefined4)DAT_14c8464e8;
      uVar2 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(param_1 + 0x378) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)(param_1 + 0x37c) = uVar2;
      *(undefined4 *)(param_1 + 0x380) = uVar3;
      *(undefined4 *)(param_1 + 900) = uVar4;
    }
  }
  FUN_147ef853c(param_1,param_2);
  return;
}



// FUNCTION 143856966 FUN_143856966 body=93 status=ok
// SIG undefined FUN_143856966(void)

void FUN_143856966(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 0x279) = *(byte *)(param_1 + 0x279) & 0xdf;
  if (*(char *)(param_1 + 0x27c) == '\0') {
    lVar1 = *(longlong *)(param_1 + -0x68);
    param_1 = param_1 + -0x118;
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
    }
    lVar1 = FUN_147eedcd2(lVar1);
    if ((param_1 != 0) && (lVar1 != 0)) {
      uVar2 = FUN_145a74e24();
      FUN_144718840(param_1,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1438569c4 FUN_1438569c4 body=57 status=ok
// SIG undefined FUN_1438569c4(void)

void FUN_1438569c4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  FUN_147eedcd2(lVar1);
  FUN_147ef87b8(param_1,param_2);
  return;
}



// FUNCTION 1438569fe FUN_1438569fe body=624 status=ok
// SIG undefined FUN_1438569fe(void)

void FUN_1438569fe(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x394) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  *(undefined4 *)(param_1 + 0x3a8) = param_2;
  *(undefined4 *)(param_1 + 0x3ac) = param_2;
  lVar6 = *(longlong *)(param_1 + 0x178);
  if ((((lVar6 != 0) && ((*(uint *)(lVar6 + 0x98) & 2) != 0)) &&
      ((*(uint *)(lVar6 + 0x98) & 1) != 0 && 1 < (longlong)*(int *)(lVar6 + 0x30))) &&
     (*(longlong *)(param_1 + 0xa8) != 0)) {
    lVar7 = (longlong)*(int *)(lVar6 + 0x30) * 0x30;
    local_28 = *(double *)(*(longlong *)(lVar6 + 0x28) + -0x20 + lVar7);
    puVar1 = (undefined4 *)(*(longlong *)(lVar6 + 0x28) + -0x30 + lVar7);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    piVar5 = (int *)(lVar6 + 0x70);
    piVar10 = piVar5;
    do {
      iVar2 = *piVar10;
      if (iVar2 == DAT_14cb1dbc8) break;
      piVar10 = *(int **)(piVar10 + 2);
    } while (piVar10 != (int *)0x0);
    do {
      if (*piVar5 == DAT_14cb1d3d8) {
        if (iVar2 != DAT_14cb1dbc8) {
          (**(code **)(**(longlong **)(param_1 + 0x158) + 0x80))
                    (*(longlong **)(param_1 + 0x158),&local_50);
          *(byte *)(param_1 + 0x391) = *(byte *)(param_1 + 0x391) | 0x90;
          *(byte *)(param_1 + 0x390) = *(byte *)(param_1 + 0x390) | 4;
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x178) + 0x3c);
          if (iVar2 == 0) {
LAB_143856c78:
            uVar8 = 0;
          }
          else {
            uVar3 = *(uint *)(*(longlong *)(param_1 + 0x178) + 0x38);
            uVar8 = 0;
            if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
              puVar9 = (undefined8 *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if ((puVar9 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar9 + 2) != iVar2 || ((*(uint *)(puVar9 + 1) & 0x10200000) != 0))))
              goto LAB_143856c78;
              uVar8 = *puVar9;
            }
          }
          FUN_14797bda6(param_1 + 0x1d0,uVar8,&local_38);
          local_40 = local_28 - local_40;
          local_48 = (double)CONCAT44(uStack_2c,uStack_30) - local_48;
          local_50 = (double)CONCAT44(uStack_34,local_38) - local_50;
          dVar13 = local_40 * local_40 + local_50 * local_50 + local_48 * local_48;
          if (((dVar13 != 1.0) ||
              (dVar11 = local_50, dVar12 = local_48, dVar4 = local_40, NAN(dVar13))) &&
             (dVar11 = DAT_14c8464e0, dVar12 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
             9.99999993922529e-09 <= dVar13)) {
            dVar13 = 1.0 / SQRT(dVar13);
            dVar11 = local_50 * dVar13;
            dVar12 = local_48 * dVar13;
            dVar4 = local_40 * dVar13;
          }
          *(double *)(param_1 + 0x378) = dVar11;
          *(double *)(param_1 + 0x380) = dVar12;
          *(double *)(param_1 + 0x388) = dVar4;
          *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x378);
          *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x37c);
          *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x380);
          *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 900);
          *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x388);
          lVar6 = *(longlong *)(param_1 + 0xb0);
          if (lVar6 == 0) {
            lVar6 = FUN_1448abda6(param_1);
          }
          FUN_147eedcd2(lVar6);
        }
        break;
      }
      piVar5 = *(int **)(piVar5 + 2);
    } while (piVar5 != (int *)0x0);
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143856c80 FUN_143856c80 body=799 status=ok
// SIG undefined FUN_143856c80(void)

void FUN_143856c80(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  double dVar7;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)((longlong)param_1 + 0x394) != '\0') {
    FUN_147efa4ee(param_1);
    goto LAB_143856e78;
  }
  if ((*(byte *)(param_1 + 0x72) & 4) == 0) goto LAB_143856e78;
  if (((*(int *)((longlong)param_1 + 0x1c4) == 0) ||
      (uVar1 = *(uint *)(param_1 + 0x38), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
LAB_143856d1d:
    FUN_14797c16e(param_1 + 0x3a,&local_68);
  }
  else {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != *(int *)((longlong)param_1 + 0x1c4))) ||
       ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) goto LAB_143856d1d;
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar4;
    }
    else {
      lVar3 = 0;
    }
    lVar3 = *(longlong *)(lVar3 + 0x1c8);
    if (lVar3 == 0) {
      local_58 = DAT_14c8464f0;
      local_68 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_60 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_68 = *(double *)(lVar3 + 0x260);
      uStack_60 = *(double *)(lVar3 + 0x268);
      local_58 = *(double *)(lVar3 + 0x270);
    }
  }
  (**(code **)(param_1[0x6c] + 0x10))(param_1 + 0x6c,&local_80);
  local_70 = local_58 - local_70;
  local_78 = uStack_60 - local_78;
  local_80 = local_68 - local_80;
  dVar7 = local_70 * local_70 + local_80 * local_80 + local_78 * local_78;
  if ((dVar7 != 1.0) || (NAN(dVar7))) {
    if (9.99999993922529e-09 <= dVar7) {
      dVar7 = 1.0 / SQRT(dVar7);
      local_70 = local_70 * dVar7;
      local_78 = local_78 * dVar7;
      local_80 = local_80 * dVar7;
    }
    else {
      local_80 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      local_78 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_70 = DAT_14c8464f0;
    }
  }
  if (((ABS(local_80 - (double)param_1[0x6f]) <= 9.999999747378752e-05) &&
      (ABS(local_78 - (double)param_1[0x70]) <= 9.999999747378752e-05)) &&
     (ABS(local_70 - (double)param_1[0x71]) <= 9.999999747378752e-05)) goto LAB_143856e78;
  iVar2 = *(int *)(param_1[0x2f] + 0x3c);
  if (iVar2 == 0) {
LAB_143856f95:
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1[0x2f] + 0x38);
    uVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != iVar2 || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_143856f95;
      uVar5 = *puVar6;
    }
  }
  FUN_14797bda6(param_1 + 0x3a,uVar5,&local_68);
  param_1[0x6f] = (longlong)local_80;
  param_1[0x70] = (longlong)local_78;
  param_1[0x71] = (longlong)local_70;
  param_1[0x5e] = (longlong)local_80;
  param_1[0x5f] = (longlong)local_78;
  param_1[0x60] = (longlong)local_70;
  lVar3 = param_1[0x16];
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_1);
  }
  FUN_147eedcd2(lVar3);
LAB_143856e78:
  (**(code **)(*param_1 + 0x5a8))(param_1);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143856fa0 FUN_143856fa0 body=69 status=ok
// SIG undefined FUN_143856fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143856fa0(void)

{
  _DAT_14cb20258 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143856fe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb20260,1);
  return;
}



// FUNCTION 143856fe5 FUN_143856fe5 body=69 status=ok
// SIG undefined FUN_143856fe5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143856fe5(void)

{
  _DAT_14cb20270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143857027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb20278,1);
  return;
}



// FUNCTION 14385702a FUN_14385702a body=69 status=ok
// SIG undefined FUN_14385702a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14385702a(void)

{
  _DAT_14cb20280 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014385706c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb20288,1);
  return;
}



// FUNCTION 14385706f FUN_14385706f body=69 status=ok
// SIG undefined FUN_14385706f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14385706f(void)

{
  _DAT_14cb20290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438570b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb20298,1);
  return;
}



// FUNCTION 1438570b4 FUN_1438570b4 body=69 status=ok
// SIG undefined FUN_1438570b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438570b4(void)

{
  _DAT_14cb202a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438570f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb202a8,1);
  return;
}



// FUNCTION 1438570f9 FUN_1438570f9 body=69 status=ok
// SIG undefined FUN_1438570f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438570f9(void)

{
  _DAT_14cb202b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014385713b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb202b8,1);
  return;
}



// FUNCTION 14385713e FUN_14385713e body=69 status=ok
// SIG undefined FUN_14385713e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14385713e(void)

{
  _DAT_14cb202c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143857180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb202c8,1);
  return;
}



// FUNCTION 143857183 FUN_143857183 body=69 status=ok
// SIG undefined FUN_143857183(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143857183(void)

{
  _DAT_14cb202d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438571c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb202d8,1);
  return;
}



// FUNCTION 1438571c8 FUN_1438571c8 body=69 status=ok
// SIG undefined FUN_1438571c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438571c8(void)

{
  _DAT_14cb202e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014385720a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb202f0,1);
  return;
}



// FUNCTION 143857210 FUN_143857210 body=599 status=ok
// SIG undefined FUN_143857210(void)

void FUN_143857210(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  int iVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  lVar4 = param_1[0x6c];
  if ((lVar4 != 0) && (param_1[0x2f] != 0)) {
    iVar1 = FUN_143859120(lVar4);
    if (iVar1 == -1) {
      param_1[0x6d] = -1;
      *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xfd;
    }
    else {
      iVar6 = *(int *)(*(longlong *)(lVar4 + 0x28) + 0xa0 + (longlong)iVar1 * 0xc0);
      if (*(int *)((longlong)param_1 + 0x36c) != iVar6) {
        pfVar5 = (float *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar1 * 0xc0);
        *(int *)((longlong)param_1 + 0x36c) = iVar6;
        *(int *)(param_1 + 0x6d) = iVar1;
        FUN_147ef64fe(lVar4,iVar1);
        FUN_147ef4034(pfVar5,param_1[0x2f],param_2,(int)param_1[0x5b],param_1 + 0x6f,
                      (longlong)param_1 + 0x38c);
        uVar2 = (*(uint *)(param_1 + 0x6e) & 0xfffffffd) + (uint)(1 < (int)param_1[0x70]) * 2;
        *(uint *)(param_1 + 0x6e) = uVar2;
        if (1 < (int)param_1[0x70]) {
          *(undefined4 *)(param_1 + 0x71) = 1;
          lVar4 = (longlong)*(int *)(param_1[0x2f] + 0x30);
          if (lVar4 < 1) {
            pdVar7 = (double *)&DAT_14a83cd78;
          }
          else {
            pdVar7 = (double *)(*(longlong *)(param_1[0x2f] + 0x28) + lVar4 * 0x30 + -0x30);
          }
          uVar3 = 0;
          iVar1 = (int)(longlong)((*pdVar7 - *(double *)(pfVar5 + 0x10)) / (double)*pfVar5);
          if ((((-1 < iVar1) &&
               (iVar6 = (int)(longlong)((pdVar7[1] - *(double *)(pfVar5 + 0x12)) / (double)*pfVar5),
               -1 < iVar6)) && (iVar1 < (int)pfVar5[0x1c])) && (iVar6 < (int)pfVar5[0x1d])) {
            uVar3 = (uint)((int)pfVar5[0x1d] * iVar1 + iVar6 != -1);
          }
          *(uint *)(param_1 + 0x6e) = uVar2 & 0xfffffffe | uVar3;
          FUN_14797bda6(param_1 + 0x3a,0,param_1[0x6f] + 0x18);
          pdVar7 = (double *)param_1[0x6f];
          dVar8 = pdVar7[5] - pdVar7[2];
          dVar12 = pdVar7[4] - pdVar7[1];
          dVar10 = pdVar7[3] - *pdVar7;
          dVar14 = dVar8 * dVar8 + dVar10 * dVar10 + dVar12 * dVar12;
          if (((dVar14 != 1.0) || (dVar9 = dVar8, dVar11 = dVar10, dVar13 = dVar12, NAN(dVar14))) &&
             (dVar9 = DAT_14c8464f0, dVar11 = DAT_14c8464e0, dVar13 = DAT_14c8464e8,
             9.99999993922529e-09 <= dVar14)) {
            dVar14 = 1.0 / SQRT(dVar14);
            dVar9 = dVar8 * dVar14;
            dVar11 = dVar10 * dVar14;
            dVar13 = dVar12 * dVar14;
          }
          param_1[0x5e] = (longlong)dVar11;
          param_1[0x5f] = (longlong)dVar13;
          param_1[0x60] = (longlong)dVar9;
                    /* WARNING: Could not recover jumptable at 0x000143857460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x5a8))(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143857468 FUN_143857468 body=48 status=ok
// SIG undefined FUN_143857468(void)

longlong FUN_143857468(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145d33890(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143857498 FUN_143857498 body=48 status=ok
// SIG undefined FUN_143857498(void)

longlong FUN_143857498(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x748;
  FUN_145d33890(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438574c8 FUN_1438574c8 body=48 status=ok
// SIG undefined FUN_1438574c8(void)

longlong FUN_1438574c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438574f8 FUN_1438574f8 body=48 status=ok
// SIG undefined FUN_1438574f8(void)

longlong FUN_1438574f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143857528 FUN_143857528 body=48 status=ok
// SIG undefined FUN_143857528(void)

longlong FUN_143857528(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x430;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143857558 FUN_143857558 body=48 status=ok
// SIG undefined FUN_143857558(void)

longlong FUN_143857558(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x360;
  FUN_145a270d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438575ac FUN_1438575ac body=140 status=ok
// SIG undefined FUN_1438575ac(void)

void FUN_1438575ac(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0x13c);
  uVar2 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar2 + uVar1;
  if (*(int *)((longlong)param_1 + 0x24) - uVar2 < (uint)uVar1) {
    FUN_1447403be(param_1 + 3);
  }
  memset((void *)(param_1[3] + (longlong)(int)uVar2),0,(ulonglong)uVar1);
  *(undefined8 *)(param_1[3] + (longlong)(int)uVar2) = *param_2;
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_147ed7358(param_1,iVar3);
  }
  lVar4 = *param_1;
  *(undefined4 *)(lVar4 + (longlong)iVar3 * 8) = 0;
  *(uint *)(lVar4 + 4 + (longlong)iVar3 * 8) = uVar2 & 0x7fffffff;
  return;
}



// FUNCTION 143857638 FUN_143857638 body=208 status=ok
// SIG undefined FUN_143857638(void)

void FUN_143857638(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x200) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 4]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 143857708 FUN_143857708 body=248 status=ok
// SIG undefined FUN_143857708(void)

void FUN_143857708(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143857800 FUN_143857800 body=2177 status=ok
// SIG undefined FUN_143857800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143857800(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&DAT_14cb1fce8,L"SelfActor",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac04e10,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac05250,1,0);
  ppuStack_50 = &PTR_FUN_14ac05d00;
  local_58 = 0;
  local_48 = 1;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac05d20,1,0);
  _DAT_14cb1fd50 = 0x47efffffe0000000;
  _DAT_14cb1fd58 = 0x47efffffe0000000;
  DAT_14cb1fd60 = 0x47efffffe0000000;
  _DAT_14cb1fd70 = 0x47efffffe0000000;
  _DAT_14cb1fd78 = 0x47efffffe0000000;
  _DAT_14cb1fd80 = 0x47efffffe0000000;
  _DAT_14cb1fd88 = 0x47efffffe0000000;
  DAT_14cb1fd90 = 0x47efffffe0000000;
  DAT_14cb1fd98 = 0x47efffffe0000000;
  DAT_14cb1fda0 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb1fdb4);
  if (cVar1 == '\0') {
    _DAT_14cb1fdb4 = 0;
    uRam000000014cb1fdbc = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac07320,1,0);
  _DAT_14cb1fde0 = 0x41f0000041f00000;
  _DAT_14cb1fde8 = 0x41f00000;
  local_40 = &DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14ac082d0;
  local_58 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac082f0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac08820,1,0);
  FUN_1446f470e(&DAT_14cb1fe80,L"DoItemGeneration",1);
  FUN_1446f470e(&DAT_14cb1fe90,L"DoItemGenerationFromActors",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac09400,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac09a70,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0a060,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0a600,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0acf0,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14ac0b8a0;
  local_58 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0b8c0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0c010,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0c570,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0cba0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0d040,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0d4f0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0d890,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0dc20,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0dfb0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0e380,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0e720,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14ac0ec20;
  local_58 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0ec40,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14ac0f1e0;
  local_58 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0f200,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0f7c0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac0fba0,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14ac10230;
  local_58 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac10250,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac10700,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac10b10,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac10eb0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac113f0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac11910,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac12400,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac12750,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac130a0,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac13f40,1,&PTR_FUN_14ac13ef0);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb20258,L"ai.crowd.DebugSelectedActors",&DAT_14cb20250,
                L"Enable debug drawing for selected crowd agent.\n0: Disable, 1: Enable");
  atexit(FUN_143856fa0);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb20270,L"ai.crowd.DebugVisLog",&DAT_14cb20268,
                L"Enable detailed vislog recording for all crowd agents.\n0: Disable, 1: Enable");
  atexit(FUN_143856fe5);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb20280,L"ai.crowd.DrawDebugCorners",&DAT_14c76239c,
                L"Draw path corners data, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
               );
  atexit(FUN_14385702a);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb20290,L"ai.crowd.DrawDebugCollisionSegments",&DAT_14c7623a0,
                L"Draw colliding navmesh edges, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
               );
  atexit(FUN_14385706f);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb202a0,L"ai.crowd.DrawDebugPath",&DAT_14c7623a4,
                L"Draw active paths, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable")
  ;
  atexit(FUN_1438570b4);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb202b0,L"ai.crowd.DrawDebugVelocityObstacles",&DAT_14c7623a8,
                L"Draw velocity obstacle sampling, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
               );
  atexit(FUN_1438570f9);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb202c0,L"ai.crowd.DrawDebugPathOptimization",&DAT_14c7623ac,
                L"Draw path optimization data, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
               );
  atexit(FUN_14385713e);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb202d0,L"ai.crowd.DrawDebugNeighbors",&DAT_14c7623b0,
                L"Draw current neighbors data, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
               );
  atexit(FUN_143857183);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb202e8,L"ai.crowd.DrawDebugBoundaries",&DAT_14cb202e0,
                L"Draw shared navmesh boundaries used by crowd simulation.\n0: Disable, 1: Enable");
  atexit(FUN_1438571c8);
  _DAT_14cb202f8 = 0;
  uRam000000014cb20300 = 0;
  _DAT_14cb20308 = 0x4034000000000000;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac14f00,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143858084 FUN_143858084 body=805 status=ok
// SIG undefined FUN_143858084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_143858084(undefined8 param_1,undefined8 param_2,double *param_3,undefined1 (*param_4) [16],
             int param_5,float param_6,undefined1 param_7)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_1b8 [32];
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined1 local_170 [24];
  double local_158;
  double local_140;
  longlong local_f8;
  longlong local_e8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar10 = FUN_147ef67ca();
  uVar9 = 0;
  if (0 < param_5 && lVar10 != 0) {
    dStack_190 = param_3[1] + (double)((float)param_5 * DAT_14c7623b4);
    local_198 = (double)((float)param_5 * DAT_14c7623b4) + *param_3;
    FUN_147ef3434(local_170,param_2,&local_198);
    local_140 = (local_140 + local_158) * 0.5;
    local_158 = local_140 - (double)(float)((double)param_6 + param_3[2]);
    local_140 = local_140 + (double)(float)((double)param_6 + param_3[2]);
    auVar1 = *param_4;
    auVar11 = divpd(auVar1,_DAT_1499387d0);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(double *)param_4[1];
    auVar12 = divpd(auVar12,_DAT_1499387d0);
    auVar11 = roundpd(auVar11,auVar11,3);
    auVar12 = roundpd(auVar12,auVar12,3);
    dVar7 = (auVar1._0_8_ - auVar11._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar8 = (auVar1._8_8_ - auVar11._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar5 = (*(double *)param_4[1] - auVar12._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar6 = (0.0 - auVar12._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar2 = sin(dVar7);
    dVar3 = sin(dVar8);
    dVar4 = sin(dVar5);
    sin(dVar6);
    dVar7 = cos(dVar7);
    dVar8 = cos(dVar8);
    dVar5 = cos(dVar5);
    cos(dVar6);
    dVar6 = dVar3 * dVar2 * dVar4 + dVar8 * dVar7 * dVar5;
    local_198 = dVar2 * dVar3 * dVar5 - dVar7 * dVar8 * dVar4;
    dStack_190 = -(dVar2 * dVar8 * dVar5) - dVar7 * dVar3 * dVar4;
    local_188._8_4_ = SUB84(dVar6,0);
    local_188._0_8_ = -(dVar8 * dVar2 * dVar4) + dVar3 * dVar7 * dVar5;
    local_188._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    FUN_147ef3878(local_170,param_2,param_3,&local_198);
    uVar9 = FUN_147ef6316(lVar10,local_170,param_7);
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438583aa FUN_1438583aa body=363 status=ok
// SIG undefined FUN_1438583aa(void)

undefined4
FUN_1438583aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,int param_5,
             float param_6,undefined1 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_148 [40];
  double local_120;
  double local_118;
  undefined1 local_110 [24];
  double local_f8;
  double local_e0;
  longlong local_98;
  longlong local_88;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar2 = FUN_147ef67ca();
  uVar1 = 0;
  if (0 < param_5 && lVar2 != 0) {
    local_120 = (double)((float)param_5 * DAT_14c7623b4 + (float)param_3);
    local_118 = local_120;
    FUN_147ef3434(local_110,param_2);
    local_e0 = (local_e0 + local_f8) * 0.5;
    local_f8 = local_e0 - (double)(param_6 + param_4);
    local_e0 = local_e0 + (double)(param_6 + param_4);
    FUN_147ef3f02(local_110,param_2,param_3,param_4);
    uVar1 = FUN_147ef6316(lVar2,local_110,param_7);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143858516 FUN_143858516 body=370 status=ok
// SIG undefined FUN_143858516(void)

undefined4
FUN_143858516(undefined8 param_1,double *param_2,undefined8 param_3,float param_4,undefined1 param_5
             )

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int in_R8D;
  undefined4 uVar5;
  undefined1 auStack_118 [40];
  float local_f0 [6];
  double local_d8;
  double local_c0;
  double local_b0;
  double local_a8;
  int local_80;
  int local_7c;
  longlong local_78;
  longlong local_68;
  ulonglong local_40;
  
  uVar5 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = FUN_147ef67ca();
  uVar2 = 0;
  if (0 < in_R8D && lVar3 != 0) {
    FUN_147ef30ce(local_f0,param_2,CONCAT44(uVar5,(float)in_R8D * DAT_14c7623b4));
    local_c0 = (local_c0 + local_d8) * 0.5;
    local_d8 = local_c0 - (double)param_4;
    local_c0 = local_c0 + (double)param_4;
    iVar1 = (int)(longlong)((*param_2 - local_b0) / (double)local_f0[0]);
    if (-1 < iVar1) {
      iVar4 = (int)(longlong)((param_2[1] - local_a8) / (double)local_f0[0]);
      if ((((-1 < iVar4) && (iVar1 < local_80)) && (iVar4 < local_7c)) &&
         (iVar4 = local_7c * iVar1 + iVar4, iVar4 != -1)) {
        *(undefined1 *)(local_78 + iVar4) = 1;
      }
    }
    uVar2 = FUN_147ef6316(lVar3,local_f0,param_5);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385868a FUN_14385868a body=712 status=ok
// SIG undefined FUN_14385868a(void)

undefined4
FUN_14385868a(undefined8 param_1,longlong *param_2,int param_3,float param_4,undefined1 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  double local_128;
  float local_120 [6];
  double local_108;
  double local_f0;
  double local_e0;
  double local_d8;
  int local_b0;
  int local_ac;
  longlong local_a8;
  longlong local_98;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar7 = FUN_147ef67ca();
  uVar6 = 0;
  if ((lVar7 != 0) && (0 < param_3 && 0 < (longlong)(int)param_2[1])) {
    lVar8 = *param_2;
    bVar4 = true;
    dVar12 = 0.0;
    lVar9 = 0;
    dVar13 = 0.0;
    dVar14 = 0.0;
    dVar15 = 0.0;
    uVar6 = 0;
    uVar17 = 0;
    dVar16 = 0.0;
    do {
      dVar1 = *(double *)(lVar8 + lVar9);
      if (bVar4) {
        dVar12 = *(double *)(lVar8 + 8 + lVar9);
        dVar13 = *(double *)(lVar8 + 0x10 + lVar9);
        dVar14 = dVar1;
        dVar15 = dVar12;
        dVar16 = dVar1;
        uVar6 = SUB84(dVar13,0);
        uVar17 = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        if (dVar1 <= dVar16) {
          dVar16 = dVar1;
        }
        dVar2 = *(double *)(lVar8 + 8 + lVar9);
        dVar3 = *(double *)(lVar8 + 0x10 + lVar9);
        if (dVar2 <= dVar12) {
          dVar12 = dVar2;
        }
        if (dVar3 <= dVar13) {
          dVar13 = dVar3;
        }
        if (dVar14 <= dVar1) {
          dVar14 = dVar1;
        }
        if (dVar15 <= dVar2) {
          dVar15 = dVar2;
        }
        if ((double)CONCAT44(uVar17,uVar6) <= dVar3) {
          uVar6 = SUB84(dVar3,0);
          uVar17 = (int)((ulonglong)dVar3 >> 0x20);
        }
      }
      lVar9 = lVar9 + 0x18;
      bVar4 = false;
    } while ((longlong)(int)param_2[1] * 0x18 != lVar9);
    dVar1 = dVar14 - dVar16;
    if (dVar14 - dVar16 <= dVar15 - dVar12) {
      dVar1 = dVar15 - dVar12;
    }
    local_128 = (dVar13 + (double)CONCAT44(uVar17,uVar6)) * 0.5;
    local_130 = (dVar12 + dVar15) * 0.5;
    local_138 = (dVar14 + dVar16) * 0.5;
    FUN_147ef30ce(local_120,&local_138,(float)param_3 * DAT_14c7623b4 + (float)dVar1);
    local_f0 = (local_f0 + local_108) * 0.5;
    local_108 = local_f0 - (double)param_4;
    local_f0 = local_f0 + (double)param_4;
    iVar5 = (int)param_2[1];
    if (0 < iVar5) {
      lVar8 = 8;
      lVar9 = 0;
      do {
        iVar10 = (int)(longlong)
                      ((*(double *)(*param_2 + -8 + lVar8) - local_e0) / (double)local_120[0]);
        if ((((-1 < iVar10) &&
             (iVar11 = (int)(longlong)
                            ((*(double *)(*param_2 + lVar8) - local_d8) / (double)local_120[0]),
             -1 < iVar11)) && (iVar10 < local_b0)) &&
           ((iVar11 < local_ac && (iVar11 = local_ac * iVar10 + iVar11, iVar11 != -1)))) {
          *(undefined1 *)(local_a8 + iVar11) = 1;
          iVar5 = (int)param_2[1];
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x18;
      } while (lVar9 < iVar5);
    }
    uVar6 = FUN_147ef6316(lVar7,local_120,param_5);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 143858954 FUN_143858954 body=1853 status=ok
// SIG undefined FUN_143858954(void)

void FUN_143858954(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong *plVar16;
  void *pvVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  int iVar27;
  longlong lVar28;
  double *pdVar29;
  bool bVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_1b8 [40];
  longlong *local_190;
  undefined1 local_188 [160];
  int local_e8;
  void *local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98 [2];
  void *local_88;
  ulonglong uStack_80;
  longlong local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((*(byte *)((longlong)param_1 + 0x54) & 1) != 0) {
    local_70 = 0;
    iVar21 = (int)param_1[6];
    lVar19 = param_1[5];
    local_68 = iVar21;
    if (iVar21 == 0) {
      local_64 = 0;
    }
    else {
      FUN_147f0c2ac(&local_70,iVar21);
      FUN_147f0c315(local_70,lVar19,iVar21);
      lVar19 = param_1[5];
    }
    iVar21 = *(int *)((longlong)param_1 + 0x34);
    FUN_1458dfbed(lVar19);
    *(undefined4 *)(param_1 + 6) = 0;
    if ((iVar21 < 0) && (*(int *)((longlong)param_1 + 0x34) != 0)) {
      FUN_147f0c3c4(param_1 + 5);
    }
    *(byte *)((longlong)param_1 + 0x54) = *(byte *)((longlong)param_1 + 0x54) & 0xfe;
    uVar6 = *(uint *)(param_1 + 8);
    uVar23 = (ulonglong)uVar6;
    if (uVar23 == 0) {
      *(int *)(param_1 + 9) = (int)param_1[9] + 1;
    }
    else {
      local_88 = (void *)0x0;
      uStack_80 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      if ((int)uVar6 < 1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar23);
      }
      uStack_80 = (ulonglong)uVar6;
      lVar25 = 0;
      local_190 = param_1 + 5;
      FUN_1446f48e2(&local_88);
      memset(local_88,0,uVar23 * 4);
      FUN_140ee07f2(local_98,uVar6,1);
      lVar19 = 8;
      uVar20 = 0;
      do {
        *(int *)((longlong)local_88 + uVar20 * 4) = (int)uVar20;
        lVar28 = param_1[7];
        *(undefined8 *)(local_98[0] + 0x30 + lVar25) = *(undefined8 *)(lVar28 + 0x30 + lVar19);
        uVar8 = *(undefined8 *)(lVar28 + lVar19);
        uVar9 = ((undefined8 *)(lVar28 + lVar19))[1];
        puVar2 = (undefined8 *)(lVar28 + 0x10 + lVar19);
        uVar10 = *puVar2;
        uVar11 = puVar2[1];
        puVar2 = (undefined8 *)(lVar28 + 0x20 + lVar19);
        uVar12 = puVar2[1];
        puVar3 = (undefined8 *)(local_98[0] + 0x20 + lVar25);
        *puVar3 = *puVar2;
        puVar3[1] = uVar12;
        puVar2 = (undefined8 *)(local_98[0] + 0x10 + lVar25);
        *puVar2 = uVar10;
        puVar2[1] = uVar11;
        *(undefined8 *)(local_98[0] + lVar25) = uVar8;
        ((undefined8 *)(local_98[0] + lVar25))[1] = uVar9;
        uVar20 = uVar20 + 1;
        lVar25 = lVar25 + 0x38;
        lVar19 = lVar19 + 0xb0;
      } while (uVar23 != uVar20);
      iVar21 = 0;
      do {
        lVar19 = 0;
        uVar20 = 0;
        iVar27 = 0;
        do {
          if (uVar20 == *(uint *)((longlong)local_88 + uVar20 * 4)) {
            lVar25 = 0;
            uVar26 = 0;
            do {
              if ((lVar19 != lVar25) && (uVar26 == *(uint *)((longlong)local_88 + uVar26 * 4))) {
                lVar28 = uVar20 * 0x38;
                pdVar4 = (double *)(local_98[0] + 0x18 + lVar25);
                if (*(double *)(local_98[0] + lVar28) < *pdVar4 ||
                    *(double *)(local_98[0] + lVar28) == *pdVar4) {
                  lVar1 = local_98[0] + lVar28;
                  if ((((*(double *)(local_98[0] + lVar25) < *(double *)(lVar1 + 0x18) ||
                         *(double *)(local_98[0] + lVar25) == *(double *)(lVar1 + 0x18)) &&
                       (pdVar4 = (double *)(local_98[0] + 0x20 + lVar25),
                       *(double *)(lVar1 + 8) < *pdVar4 || *(double *)(lVar1 + 8) == *pdVar4)) &&
                      (dVar31 = *(double *)(local_98[0] + 8 + lVar25),
                      dVar31 < *(double *)(lVar1 + 0x20) || dVar31 == *(double *)(lVar1 + 0x20))) &&
                     ((pdVar4 = (double *)(local_98[0] + 0x28 + lVar25),
                      *(double *)(lVar1 + 0x10) < *pdVar4 || *(double *)(lVar1 + 0x10) == *pdVar4 &&
                      (dVar31 = *(double *)(local_98[0] + 0x10 + lVar25),
                      dVar31 < *(double *)(lVar1 + 0x28) || dVar31 == *(double *)(lVar1 + 0x28)))))
                  {
                    *(int *)((longlong)local_88 + uVar26 * 4) = (int)uVar20;
                    pdVar4 = (double *)(local_98[0] + lVar28);
                    cVar5 = *(char *)(local_98[0] + 0x30 + lVar25);
                    if ((*(char *)(local_98[0] + 0x30 + lVar28) == '\0') || (cVar5 == '\0')) {
                      if (cVar5 != '\0') {
                        pdVar29 = (double *)(local_98[0] + lVar25);
                        pdVar4[6] = pdVar29[6];
                        dVar31 = *pdVar29;
                        dVar32 = pdVar29[1];
                        dVar13 = pdVar29[2];
                        dVar14 = pdVar29[3];
                        dVar15 = pdVar29[5];
                        pdVar4[4] = pdVar29[4];
                        pdVar4[5] = dVar15;
                        pdVar4[2] = dVar13;
                        pdVar4[3] = dVar14;
                        *pdVar4 = dVar31;
                        pdVar4[1] = dVar32;
                      }
                    }
                    else {
                      dVar31 = *pdVar4;
                      if (*(double *)(local_98[0] + lVar25) <= *pdVar4) {
                        dVar31 = *(double *)(local_98[0] + lVar25);
                      }
                      *pdVar4 = dVar31;
                      dVar31 = *(double *)(local_98[0] + 8 + lVar25);
                      dVar32 = pdVar4[1];
                      if (dVar31 <= pdVar4[1]) {
                        dVar32 = dVar31;
                      }
                      pdVar4[1] = dVar32;
                      dVar31 = *(double *)(local_98[0] + 0x10 + lVar25);
                      dVar32 = pdVar4[2];
                      if (dVar31 <= pdVar4[2]) {
                        dVar32 = dVar31;
                      }
                      pdVar4[2] = dVar32;
                      dVar31 = *(double *)(local_98[0] + 0x18 + lVar25);
                      dVar32 = pdVar4[3];
                      if (pdVar4[3] <= dVar31) {
                        dVar32 = dVar31;
                      }
                      pdVar4[3] = dVar32;
                      dVar31 = *(double *)(local_98[0] + 0x20 + lVar25);
                      dVar32 = pdVar4[4];
                      if (pdVar4[4] <= dVar31) {
                        dVar32 = dVar31;
                      }
                      pdVar4[4] = dVar32;
                      dVar31 = *(double *)(local_98[0] + 0x28 + lVar25);
                      dVar32 = pdVar4[5];
                      if (pdVar4[5] <= dVar31) {
                        dVar32 = dVar31;
                      }
                      pdVar4[5] = dVar32;
                    }
                    iVar27 = iVar27 + 1;
                  }
                }
              }
              uVar26 = uVar26 + 1;
              lVar25 = lVar25 + 0x38;
            } while (uVar23 * 0x38 - lVar25 != 0);
          }
          uVar20 = uVar20 + 1;
          lVar19 = lVar19 + 0x38;
        } while (uVar20 != uVar23);
      } while ((iVar27 != 0) &&
              (iVar21 = iVar21 + 1, iVar21 != uVar6 * uVar6 + (uint)(uVar6 * uVar6 == 0)));
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (void *)0x0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      uVar24 = 0;
      do {
        uVar26 = uStack_a0;
        FUN_1458dfc18(local_a8,uStack_a0 & 0xffffffff);
        uVar20 = uStack_a0 >> 0x20;
        uStack_a0 = uStack_a0 & 0xffffffff00000000;
        if (((longlong)uVar26 < 0) && ((int)uVar20 != 0)) {
          FUN_147f0c3f4(&local_a8);
        }
        bVar30 = (longlong)uStack_b0 < 0;
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
        if (bVar30) {
          FUN_14481578e(&local_b8,0);
        }
        uVar20 = 0;
        do {
          uVar26 = uStack_a0;
          uVar18 = *(uint *)((longlong)local_88 + uVar20 * 4);
          do {
            uVar22 = uVar18;
            uVar18 = *(uint *)((longlong)local_88 + (longlong)(int)uVar22 * 4);
          } while (uVar22 != uVar18);
          if (uVar22 == uVar24) {
            lVar19 = param_1[7];
            lVar25 = (longlong)(int)uStack_a0;
            uVar18 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar18);
            if (uStack_a0._4_4_ < uVar18) {
              FUN_147f0c1a8(&local_a8,uVar26 & 0xffffffff);
            }
            FUN_147f0c0b6(lVar25 * 0xb0 + local_a8,lVar19 + uVar20 * 0xb0);
            uVar26 = uStack_b0;
            uVar7 = *(undefined4 *)(param_1[7] + 0xa0 + uVar20 * 0xb0);
            lVar19 = (longlong)(int)uStack_b0;
            uVar18 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
            if (uStack_b0._4_4_ < uVar18) {
              FUN_1446f48e2(&local_b8,uVar26 & 0xffffffff);
            }
            *(undefined4 *)((longlong)local_b8 + lVar19 * 4) = uVar7;
          }
          pvVar17 = local_b8;
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar23);
        if ((int)uStack_a0 != 0) {
          lVar19 = (longlong)local_68;
          if (0 < lVar19) {
            iVar21 = (int)uStack_b0;
            lVar28 = (longlong)(int)uStack_b0;
            lVar25 = local_70;
            do {
              if (*(int *)(lVar25 + 0xb8) == iVar21) {
                if (iVar21 != 0) {
                  iVar27 = memcmp(*(void **)(lVar25 + 0xb0),pvVar17,lVar28 << 2);
                  if (iVar27 != 0) goto LAB_143858eb0;
                }
                plVar16 = local_190;
                iVar21 = (int)param_1[6];
                *(uint *)(param_1 + 6) = iVar21 + 1U;
                if (*(uint *)((longlong)param_1 + 0x34) < iVar21 + 1U) {
                  FUN_147f0c424(local_190,iVar21);
                }
                FUN_147f0c34c((longlong)iVar21 * 0xc0 + *plVar16,lVar25);
                goto LAB_143858ff0;
              }
LAB_143858eb0:
              lVar25 = lVar25 + 0xc0;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          FUN_147ef3622(local_188,&local_a8);
          pvVar17 = local_b8;
          local_d8 = (void *)0x0;
          iVar21 = *(int *)((longlong)param_1 + 0x4c);
          lVar19 = (longlong)(int)uStack_b0;
          uStack_d0 = uStack_b0 & 0xffffffff;
          local_e8 = iVar21;
          if (lVar19 != 0) {
            FUN_144a06ca8(&local_d8,uStack_b0 & 0xffffffff,0);
            memcpy(local_d8,pvVar17,lVar19 << 2);
            iVar21 = *(int *)((longlong)param_1 + 0x4c);
          }
          uVar20 = uStack_c0;
          *(int *)((longlong)param_1 + 0x4c) = iVar21 + 1;
          lVar19 = param_1[6];
          lVar25 = (longlong)(int)uStack_c0;
          uVar18 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar18);
          if (uStack_c0._4_4_ < uVar18) {
            FUN_1446f48e2(&local_c8,uVar20 & 0xffffffff);
          }
          plVar16 = local_190;
          *(int *)(local_c8 + lVar25 * 4) = (int)lVar19;
          iVar21 = (int)param_1[6];
          *(uint *)(param_1 + 6) = iVar21 + 1U;
          if (*(uint *)((longlong)param_1 + 0x34) < iVar21 + 1U) {
            FUN_147f0c424(local_190,iVar21);
          }
          FUN_147f0c34c((longlong)iVar21 * 0xc0 + *plVar16,local_188);
          FUN_147ef64ba(local_188);
        }
LAB_143858ff0:
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar6);
      if ((int)uStack_c0 != 0) {
        (**(code **)(*param_1 + 0x2a0))(param_1,&local_c8);
        *(int *)(param_1 + 9) = (int)param_1[9] + 1;
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_1458dfc18(local_a8,uStack_a0 & 0xffffffff);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1458dfbed(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143859092 FUN_143859092 body=142 status=ok
// SIG undefined FUN_143859092(void)

void FUN_143859092(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30 && (lVar1 = *(longlong *)(lVar1 + 0x28), lVar1 != 0)) &&
        (0 < (int)param_2[1])))) {
      lVar2 = 0;
      do {
        FUN_147ef519a((longlong)*(int *)(*param_2 + lVar2 * 4) * 0xc0 + param_1[5],lVar1);
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)param_2[1]);
    }
  }
  return;
}



// FUNCTION 143859120 FUN_143859120 body=110 status=ok
// SIG undefined FUN_143859120(void)

ulonglong FUN_143859120(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  ulonglong uVar5;
  
  if (0 < (longlong)*(int *)(param_1 + 0x30)) {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x28) + 0x30);
    uVar5 = 0;
    do {
      if ((((pdVar4[-5] <= dVar1 && dVar1 != pdVar4[-5]) && (dVar1 < pdVar4[-2])) &&
          (pdVar4[-4] <= dVar2 && dVar2 != pdVar4[-4])) &&
         (((dVar2 < pdVar4[-1] && (pdVar4[-3] <= dVar3 && dVar3 != pdVar4[-3])) && (dVar3 < *pdVar4)
          ))) {
        return uVar5 & 0xffffffff;
      }
      uVar5 = uVar5 + 1;
      pdVar4 = pdVar4 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x30) != uVar5);
  }
  return 0xffffffff;
}



// FUNCTION 14385918e FUN_14385918e body=55 status=ok
// SIG undefined FUN_14385918e(void)

void FUN_14385918e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb204e8 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb204e8 = FUN_14171c317(FUN_14642ec45,uVar1,L"EPathFollowingStatus");
  }
  return;
}



// FUNCTION 1438591c5 FUN_1438591c5 body=55 status=ok
// SIG undefined FUN_1438591c5(void)

void FUN_1438591c5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20500 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb20500 = FUN_14171c317(FUN_14642ec74,uVar1,L"EPathFollowingResult");
  }
  return;
}



// FUNCTION 1438591fc FUN_1438591fc body=55 status=ok
// SIG undefined FUN_1438591fc(void)

void FUN_1438591fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20518 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb20518 = FUN_14171c317(FUN_14642eca5,uVar1,L"EPathFollowingAction");
  }
  return;
}



// FUNCTION 143859233 FUN_143859233 body=55 status=ok
// SIG undefined FUN_143859233(void)

void FUN_143859233(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20530 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb20530 = FUN_14171c317(FUN_14642ecd4,uVar1,L"EPathFollowingRequestResult");
  }
  return;
}



// FUNCTION 14385926a FUN_14385926a body=512 status=ok
// SIG undefined FUN_14385926a(void)

ulonglong FUN_14385926a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  double dVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0.0;
  dStack_40 = 0.0;
  uVar8 = 0;
  cVar3 = FUN_14493c216(&local_48,0);
  dVar6 = 0.0;
  if (cVar3 != '\0') {
    dVar6 = dStack_40;
  }
  if (*(double *)(param_1 + 0x158) == dVar6) goto LAB_1438592bd;
  if (((((*(byte *)(param_1 + 0x2a6) & 8) == 0) || (*(int *)(param_1 + 0x16c) == 0)) ||
      (uVar4 = *(uint *)(param_1 + 0x168), (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4)) {
LAB_143859342:
    FUN_14797c16e(param_1 + 0x1d0,&local_48);
    FUN_147ef9156(param_1,&local_60);
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x80))
              (*(longlong **)(param_1 + 0x158),&local_78);
    uVar8 = CONCAT71((int7)((ulonglong)&local_48 >> 8),1);
    if ((local_38 - local_68) * local_50 +
        (local_48 - local_78) * local_60 + (dStack_40 - local_70) * local_58 < 0.0)
    goto LAB_1438592bd;
    local_90 = *(undefined4 *)(param_1 + 0x1a0);
    local_88 = 0x3d4ccccd;
    local_98 = param_2;
    uVar4 = FUN_147efa92e(param_1,&local_48,0,0);
  }
  else {
    plVar7 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(param_1 + 0x16c))) ||
       (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar2 = *plVar7, lVar2 == 0))))
    goto LAB_143859342;
    uVar5 = FUN_1459eab3a();
    plVar7 = (longlong *)FUN_144718840(lVar2,uVar5);
    if ((plVar7 == (longlong *)0x0) || (lVar2 = *(longlong *)(param_1 + 0x178), lVar2 == 0))
    goto LAB_143859342;
    iVar1 = *(int *)(param_1 + 0x2dc);
    if (((longlong)iVar1 < -1) || (*(int *)(lVar2 + 0x30) <= iVar1 + 1)) goto LAB_143859342;
    local_98 = (longlong)iVar1 * 0x30 + *(longlong *)(lVar2 + 0x28) + 0x30;
    uVar4 = (**(code **)(*plVar7 + 0x78))(plVar7,param_1,param_2);
  }
  uVar8 = (ulonglong)uVar4;
LAB_1438592bd:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385946c FUN_14385946c body=579 status=ok
// SIG undefined FUN_14385946c(void)

void FUN_14385946c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  uint local_a0 [21];
  uint local_4c;
  uint *local_48;
  uint *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
  }
  uVar1 = *(uint *)(param_2 + 0x144);
  FUN_145eea1a4(local_a0);
  if (uVar1 == local_a0[0]) {
    local_4c = DAT_14cb20784;
    uVar1 = DAT_14cb20784 + 1;
    *(uint *)(param_2 + 0x144) = DAT_14cb20784;
    DAT_14cb20784 = uVar1;
    FUN_147f013a6(local_a0,param_2);
    local_48 = &local_4c;
    local_40 = local_a0;
    FUN_147f0eef4((longlong *)(param_1 + 0x38),&local_34);
    FUN_147f01308(*(longlong *)(param_1 + 0x38) + (longlong)local_34 * 0x60 + 8);
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      lVar4 = param_1 + 0x70;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x78);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & local_4c) * 4);
      if (iVar5 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x38);
        do {
          lVar6 = lVar4 + (longlong)iVar5 * 0x60;
          if (*(uint *)(lVar4 + (longlong)iVar5 * 0x60) == local_4c) goto LAB_14385959d;
          iVar5 = *(int *)(lVar6 + 0x58);
        } while (iVar5 != -1);
      }
    }
    lVar6 = 0;
LAB_14385959d:
    FUN_147f012a2(param_1,lVar6 + 8);
  }
  else {
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      lVar4 = param_1 + 0x70;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x78);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & uVar1) * 4);
      if (iVar5 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x60;
          if (*(uint *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x60) == uVar1)
          goto LAB_1438595fb;
          iVar5 = *(int *)(lVar4 + 0x58);
        } while (iVar5 != -1);
      }
    }
    lVar4 = 0;
LAB_1438595fb:
    FUN_147ea553e(local_a0,*(undefined8 *)(param_2 + 0xa8));
    *(undefined1 *)(lVar4 + 0x48) = (undefined1)local_a0[0];
    *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_2 + 0x140);
    iVar5 = *(int *)(param_1 + 0x90);
    if ((longlong)iVar5 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x88);
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar6 + lVar7);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x60) != 0)) &&
           (plVar3 = *(longlong **)(lVar2 + 0x58), plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x60))(plVar3,lVar4 + 8);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar5 * 8 != lVar7);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438596ca FUN_1438596ca body=244 status=ok
// SIG undefined FUN_1438596ca(void)

void FUN_1438596ca(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_2 + 0x144);
  local_2c = uVar1;
  FUN_145eea1a4(&local_30);
  if ((uVar1 != local_30) && (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c))) {
    lVar2 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x78);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x38);
      iVar4 = iVar3;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0x60) == uVar1) goto LAB_143859771;
        iVar4 = *(int *)((longlong)iVar4 * 0x60 + lVar2 + 0x58);
      } while (iVar4 != -1);
    }
  }
  goto LAB_14385974f;
  while (iVar3 = *(int *)(lVar5 + 0x58), iVar3 != -1) {
LAB_143859771:
    lVar5 = lVar2 + (longlong)iVar3 * 0x60;
    if (*(uint *)(lVar2 + (longlong)iVar3 * 0x60) == uVar1) goto LAB_14385978f;
  }
  lVar5 = 0;
LAB_14385978f:
  FUN_147f01340(param_1,lVar5 + 8);
  FUN_147f0f1bc((longlong *)(param_1 + 0x38),&local_2c);
  FUN_145eea1a4(&local_34);
  *(undefined4 *)(param_2 + 0x144) = local_34;
LAB_14385974f:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438597c0 FUN_1438597c0 body=516 status=ok
// SIG undefined FUN_1438597c0(void)

void FUN_1438597c0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined1 local_39;
  undefined8 *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = &local_39;
  local_38 = (undefined8 *)&LAB_14385e56a;
  cVar4 = FUN_147eff458(param_1,&local_38,param_2);
  if (cVar4 != '\0') {
    local_38 = (undefined8 *)0x0;
    local_30 = (undefined1 *)((ulonglong)local_30 & 0xffffffff00000000);
    FUN_1446efa72(&local_38,0,3,0x10);
    puVar3 = local_38;
    local_30 = (undefined1 *)CONCAT44(local_30._4_4_,3);
    *local_38 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_38[2] = lVar5;
    *local_38 = &PTR_FUN_14ac258e0;
    local_38[3] = 0;
    iVar7 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_38 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar7 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar7 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar7 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar6;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar7 = iVar6;
        }
      }
    }
    *(int *)((longlong)puVar3 + 0x1c) = iVar7;
    puVar3[4] = FUN_147eff5e0;
    *(undefined4 *)(puVar3 + 5) = 0;
    local_58 = 1;
    FUN_142c039ac(&local_48,&local_38);
    if (local_48 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_48 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_48)(local_48,1);
      }
    }
    if ((int)local_30 != 0) {
      if (local_38 == (undefined8 *)0x0) goto LAB_14385993b;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      local_30 = (undefined1 *)((ulonglong)local_30 & 0xffffffff00000000);
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14385993b:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438599c6 FUN_1438599c6 body=611 status=ok
// SIG undefined FUN_1438599c6(void)

void FUN_1438599c6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  char local_64 [4];
  undefined8 local_60;
  code *local_58;
  char *local_50;
  longlong local_48;
  char local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *param_2;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147efe688(local_3c,&local_48);
  FUN_1458872f0(&local_58);
  if (local_3c[0] != (char)local_58) {
    local_50 = local_64;
    local_64[0] = local_3c[0];
    local_60 = local_38;
    local_58 = FUN_14385e57c;
    cVar4 = FUN_147eff458(param_1,&local_58,param_3);
    if (cVar4 != '\0') {
      local_58 = (code *)0x0;
      local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
      FUN_1446efa72(&local_58,0,3,0x10);
      pcVar3 = local_58;
      local_50 = (char *)CONCAT44(local_50._4_4_,3);
      *(undefined ***)local_58 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      *(longlong *)(local_58 + 0x10) = lVar5;
      *(undefined ***)local_58 = &PTR_FUN_14ac258e0;
      *(undefined8 *)(local_58 + 0x18) = 0;
      iVar7 = 0;
      if (param_1 != 0) {
        uVar2 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_58 + 0x18) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar7 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar7 = *(int *)(lVar8 + 0x10);
          bVar9 = iVar7 == 0;
          if (bVar9) {
            *(int *)(lVar8 + 0x10) = iVar6;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar7 = iVar6;
          }
        }
      }
      *(int *)(pcVar3 + 0x1c) = iVar7;
      *(code **)(pcVar3 + 0x20) = FUN_147eff5e0;
      *(undefined4 *)(pcVar3 + 0x28) = 0;
      local_78 = 1;
      FUN_142c039ac(&local_70,&local_58);
      if (local_70 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_70 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_70)(local_70,1);
        }
      }
      if ((int)local_50 != 0) {
        if (local_58 == (code *)0x0) goto LAB_143859a29;
        (*(code *)**(undefined8 **)local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
      }
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143859a29:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143859c3c FUN_143859c3c body=6437 status=ok
// SIG undefined FUN_143859c3c(void)

void FUN_143859c3c(longlong param_1,float param_2)

{
  byte *pbVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  double *pdVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  uint *puVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  double *pdVar23;
  double *pdVar24;
  undefined8 uVar25;
  int iVar26;
  longlong lVar27;
  double *pdVar28;
  int iVar29;
  uint uVar30;
  uint *puVar31;
  double *pdVar32;
  double *pdVar33;
  double *pdVar34;
  double *pdVar35;
  byte bVar36;
  double *pdVar37;
  double *pdVar38;
  double *pdVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint *puVar43;
  double *pdVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  bool bVar47;
  bool bVar48;
  undefined4 uVar49;
  double dVar50;
  float fVar51;
  undefined1 auStack_508 [40];
  uint *local_4e0;
  longlong local_4d8;
  uint *local_4d0;
  longlong *local_4c8;
  int local_4c0;
  int local_4bc;
  uint local_4b8;
  int local_4b4;
  longlong local_4b0;
  uint *local_4a8;
  longlong *local_4a0;
  longlong *local_498;
  uint *local_490;
  uint *local_488;
  ulonglong local_480;
  longlong local_478;
  undefined8 uStack_470;
  longlong local_468;
  undefined8 uStack_460;
  uint *local_450;
  uint *local_448;
  int local_43c;
  uint local_438;
  undefined4 uStack_434;
  undefined8 uStack_430;
  double local_428 [9];
  undefined1 local_3e0;
  undefined8 local_3dc;
  undefined1 local_3d4;
  double local_130 [9];
  undefined1 local_e8;
  undefined8 local_e4;
  undefined1 local_dc;
  longlong local_c0 [8];
  longlong *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_508;
  if (*(longlong **)(param_1 + -8) == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (**(code **)(**(longlong **)(param_1 + -8) + 0x180))();
    if (lVar7 == 0) {
      lVar7 = DAT_14cb10918;
    }
  }
  if ((*(byte *)(lVar7 + 0x155) & 4) != 0) goto LAB_14385ac79;
  dVar50 = *(double *)(lVar7 + 0x6d0);
  *(double *)(param_1 + 0x108) = dVar50;
  iVar6 = *(int *)(param_1 + 0xf8);
  local_4d8 = param_1;
  if (0 < (longlong)iVar6) {
    puVar18 = (uint *)(param_1 + 0xf0);
    lVar17 = *(longlong *)(param_1 + 0xf0);
    lVar7 = param_1 + 0x88;
    lVar27 = 0;
    do {
      iVar26 = *(int *)(lVar17 + 0x10 + lVar27);
      if ((((iVar26 != 0) && (uVar30 = *(uint *)(lVar17 + 0xc + lVar27), -1 < (int)uVar30)) &&
          ((int)uVar30 < DAT_14c9647dc)) &&
         ((((plVar16 = (longlong *)
                       ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
            plVar16 != (longlong *)0x0 && ((int)plVar16[2] == iVar26)) &&
           (((*(uint *)(plVar16 + 1) & 0x10200000) == 0 &&
            ((local_c0[0] = *plVar16, local_c0[0] != 0 && ((*(byte *)(local_c0[0] + 0x65) & 2) == 0)
             ))))) &&
          (((*(uint *)(local_c0[0] + 8) >> 0x1e & 1) == 0 &&
           (plVar16 = *(longlong **)
                       (*(longlong *)(param_1 + 0x60) + (ulonglong)*(byte *)(lVar17 + lVar27) * 8),
           plVar16 != (longlong *)0x0)))))) {
        local_4e0 = puVar18;
        (**(code **)(*plVar16 + 0x2a0))();
        lVar22 = local_c0[0];
        uVar30 = *(uint *)(param_1 + 0x74);
        uVar49 = *(undefined4 *)(param_1 + 0x78);
        uVar3 = *(undefined4 *)(param_1 + 0x7c);
        uVar4 = *(undefined4 *)(param_1 + 0x80);
        FUN_1402599be(local_c0[0] + 0x20f,local_130);
        local_438 = uVar30;
        uStack_434 = uVar49;
        uStack_430._0_4_ = uVar3;
        uStack_430._4_4_ = uVar4;
        bVar36 = FUN_140a28ca8(lVar22,local_130[0],&local_438);
        pbVar1 = (byte *)(lVar22 + 0x20f);
        *pbVar1 = *pbVar1 | bVar36;
        puVar18 = (uint *)FUN_147f0e66a(lVar7);
        if (local_c0[0] == 0) {
          *puVar18 = 0;
          uVar30 = 0;
        }
        else {
          uVar30 = *(uint *)(local_c0[0] + 0xc);
          *puVar18 = uVar30;
          if ((int)uVar30 < DAT_14c9647dc) {
            lVar22 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
          }
          else {
            lVar22 = 0;
          }
          uVar30 = *(uint *)(lVar22 + 0x10);
          if (*(uint *)(lVar22 + 0x10) == 0) {
            LOCK();
            iVar26 = DAT_14c964868 + 1;
            UNLOCK();
            uVar8 = DAT_14c964868 + 1;
            bVar48 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar26;
            if (bVar48) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar8);
            }
            LOCK();
            uVar30 = *(uint *)(lVar22 + 0x10);
            bVar48 = uVar30 == 0;
            if (bVar48) {
              *(uint *)(lVar22 + 0x10) = uVar8;
              uVar30 = 0;
            }
            UNLOCK();
            if (bVar48) {
              uVar30 = uVar8;
            }
          }
        }
        puVar18[1] = uVar30;
        puVar18[2] = puVar18[2] | 1 << (*(byte *)(lVar17 + lVar27) & 0x1f);
        param_1 = local_4d8;
        puVar18 = local_4e0;
      }
      lVar27 = lVar27 + 0x14;
    } while ((longlong)iVar6 * 0x14 != lVar27);
    *(undefined4 *)(param_1 + 0xf8) = 0;
    if (*(int *)(param_1 + 0xfc) < 0) {
      FUN_147f0ebfe();
    }
    dVar50 = *(double *)(param_1 + 0x108);
  }
  dVar2 = *(double *)(param_1 + 0x100);
  uVar46 = 0;
  bVar36 = 0;
  if (dVar2 <= dVar50) {
    fVar51 = *(float *)(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0x38);
    uVar45 = 1;
    iVar29 = 0;
    iVar26 = 0;
    if (iVar6 != 0) {
      puVar18 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar18 = (uint *)(param_1 + 0x20);
      }
      uVar30 = *puVar18;
      if (uVar30 == 0) {
        iVar26 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar26 = iVar6 + -1;
        }
        uVar46 = 0;
        uVar45 = (ulonglong)(uint)(iVar26 >> 5);
        if (iVar26 >> 5 < 1) {
          uVar45 = uVar46;
        }
        iVar29 = 0;
        do {
          if (uVar45 == uVar46) goto LAB_143859f3f;
          iVar29 = iVar29 + 0x20;
          uVar30 = puVar18[uVar46 + 1];
          uVar46 = uVar46 + 1;
        } while (uVar30 == 0);
      }
      else {
        uVar46 = 0;
        iVar29 = 0;
      }
      uVar45 = (ulonglong)(-uVar30 & uVar30);
      uVar12 = uVar45 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar26 = (iVar29 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      if (iVar6 <= iVar26) {
        iVar26 = iVar6;
      }
    }
    if (iVar26 < iVar6) {
      uVar30 = 0xffffffff;
      bVar36 = 0;
      do {
        iVar6 = *(int *)(*(longlong *)(local_4d8 + 0x10) + 0xc + (longlong)iVar26 * 0x60);
        if (iVar6 != 0) {
          lVar7 = *(longlong *)(local_4d8 + 0x10) + (longlong)iVar26 * 0x60;
          uVar8 = *(uint *)(lVar7 + 8);
          if ((((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) &&
              (puVar19 = (undefined8 *)
                         ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
              puVar19 != (undefined8 *)0x0)) &&
             ((*(int *)(puVar19 + 2) == iVar6 && ((*(uint *)(puVar19 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar19 + 1) & 0x10200000) == 0) {
              uVar25 = *puVar19;
            }
            else {
              uVar25 = 0;
            }
            cVar5 = FUN_147effca6(uVar25,(float)(dVar50 - dVar2) + fVar51);
            if (cVar5 != '\0') {
              pbVar1 = (byte *)(lVar7 + 0x4c);
              *pbVar1 = *pbVar1 | 1;
              bVar36 = 1;
            }
          }
        }
        uVar30 = uVar30 & ~(uint)uVar45;
        puVar18 = *(uint **)(local_4d8 + 0x30);
        if (*(uint **)(local_4d8 + 0x30) == (uint *)0x0) {
          puVar18 = (uint *)(param_1 + 0x20);
        }
        iVar6 = *(int *)(local_4d8 + 0x38);
        iVar26 = (int)uVar46;
        lVar7 = (longlong)iVar26;
        uVar8 = puVar18[lVar7] & uVar30;
        if (uVar8 == 0) {
          iVar9 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar9 = iVar6 + -1;
          }
          iVar10 = iVar9 >> 5;
          if (iVar9 >> 5 < iVar26) {
            iVar10 = iVar26;
          }
          lVar17 = 0;
          do {
            if (iVar10 - lVar7 == lVar17) goto LAB_143859f42;
            iVar29 = iVar29 + 0x20;
            uVar8 = puVar18[lVar7 + lVar17 + 1];
            lVar17 = lVar17 + 1;
          } while (uVar8 == 0);
          uVar46 = (ulonglong)(uint)(iVar26 + (int)lVar17);
          uVar30 = 0xffffffff;
        }
        uVar45 = (ulonglong)(-uVar8 & uVar8);
        uVar12 = uVar45 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar26 = (iVar29 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      } while (iVar26 < iVar6);
    }
    else {
LAB_143859f3f:
      bVar36 = 0;
    }
LAB_143859f42:
    *(double *)(local_4d8 + 0x100) =
         (double)*(float *)(local_4d8 + 0x70) + *(double *)(local_4d8 + 0x108);
    param_1 = local_4d8;
  }
  iVar6 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar6 == 0) {
    bVar48 = false;
  }
  else {
    puVar18 = (uint *)(param_1 + -0x28);
    lVar7 = *(longlong *)(param_1 + 0x60);
    lVar17 = 0;
    bVar47 = false;
    do {
      lVar27 = *(longlong *)(lVar7 + lVar17);
      if (lVar27 == 0) {
        bVar48 = false;
      }
      else {
        fVar51 = *(float *)(lVar27 + 0x38) - param_2;
        *(float *)(lVar27 + 0x38) = fVar51;
        bVar48 = fVar51 <= 0.0;
      }
      bVar47 = (bool)(bVar47 | bVar48);
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar6 * 8 != lVar17);
    uVar46 = 0;
    bVar48 = false;
    if (bVar47) {
      iVar6 = *(int *)(param_1 + 0x38);
      local_4e0 = puVar18;
      if (iVar6 == 0) {
        uVar45 = 1;
        iVar29 = 0;
        iVar26 = 0;
      }
      else {
        puVar18 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar18 = (uint *)(param_1 + 0x20);
        }
        uVar30 = *puVar18;
        if (uVar30 == 0) {
          iVar26 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar26 = iVar6 + -1;
          }
          uVar46 = 0;
          uVar45 = (ulonglong)(uint)(iVar26 >> 5);
          if (iVar26 >> 5 < 1) {
            uVar45 = uVar46;
          }
          iVar29 = 0;
          do {
            if (uVar45 == uVar46) goto LAB_14385a17a;
            iVar29 = iVar29 + 0x20;
            uVar30 = puVar18[uVar46 + 1];
            uVar46 = uVar46 + 1;
          } while (uVar30 == 0);
        }
        else {
          uVar46 = 0;
          iVar29 = 0;
        }
        uVar45 = (ulonglong)(-uVar30 & uVar30);
        uVar12 = uVar45 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar26 = (iVar29 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar26) {
          iVar26 = iVar6;
        }
      }
      if (iVar26 < iVar6) {
        plVar16 = (longlong *)(local_4d8 + 0x10);
        uVar30 = 0xffffffff;
        do {
          lVar7 = *plVar16 + (longlong)iVar26 * 0x60;
          puVar18 = (uint *)(lVar7 + 8);
          iVar6 = *(int *)(lVar7 + 0xc);
          if (((iVar6 == 0) || (uVar8 = *puVar18, (int)uVar8 < 0)) ||
             ((DAT_14c9647dc <= (int)uVar8 ||
              (((lVar7 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8), lVar7 == 0
                || (*(int *)(lVar7 + 0x10) != iVar6)) || ((*(uint *)(lVar7 + 8) & 0x10200000) != 0))
              )))) {
            FUN_147f01340(local_4e0);
            FUN_147f0ee1a(plVar16,iVar26);
          }
          else {
            FUN_147f01308(puVar18);
          }
          uVar30 = uVar30 & ~(uint)uVar45;
          puVar18 = *(uint **)(local_4d8 + 0x30);
          if (*(uint **)(local_4d8 + 0x30) == (uint *)0x0) {
            puVar18 = (uint *)(param_1 + 0x20);
          }
          iVar6 = *(int *)(local_4d8 + 0x38);
          iVar26 = (int)uVar46;
          lVar7 = (longlong)iVar26;
          uVar8 = puVar18[lVar7] & uVar30;
          if (uVar8 == 0) {
            iVar9 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar9 = iVar6 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar26) {
              iVar10 = iVar26;
            }
            if (iVar9 <= iVar26) break;
            lVar17 = 0;
            while( true ) {
              iVar29 = iVar29 + 0x20;
              uVar8 = puVar18[lVar7 + lVar17 + 1];
              if (uVar8 != 0) break;
              lVar17 = lVar17 + 1;
              if (iVar10 - lVar7 == lVar17) goto LAB_14385a17a;
            }
            uVar46 = (ulonglong)(iVar26 + (int)lVar17 + 1);
            uVar30 = 0xffffffff;
          }
          uVar45 = (ulonglong)(-uVar8 & uVar8);
          uVar12 = uVar45 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar26 = (iVar29 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        } while (iVar26 < iVar6);
      }
LAB_14385a17a:
      param_1 = local_4d8;
      iVar6 = *(int *)(local_4d8 + 0x68);
      bVar48 = true;
      if ((longlong)iVar6 != 0) {
        lVar7 = *(longlong *)(local_4d8 + 0x60);
        lVar17 = 0;
        do {
          plVar16 = *(longlong **)(lVar7 + lVar17);
          if ((plVar16 != (longlong *)0x0) && (*(float *)(plVar16 + 7) <= 0.0)) {
            uVar49 = (**(code **)(*plVar16 + 0x2e0))();
            *(undefined4 *)(plVar16 + 7) = uVar49;
          }
          lVar17 = lVar17 + 8;
        } while ((longlong)iVar6 * 8 != lVar17);
      }
    }
  }
  iVar6 = *(int *)(param_1 + 0xe8);
  if (0 < (longlong)iVar6) {
    if (bVar48 && iVar6 != 1) {
      lVar7 = *(longlong *)(param_1 + 0xe0);
      memset(local_428,0,0x2f0);
      local_438 = (uint)lVar7;
      uStack_434 = (undefined4)((ulonglong)lVar7 >> 0x20);
      uStack_430 = (longlong)iVar6 * 0x70 + lVar7 + -0x70;
      fVar51 = logf((float)iVar6);
      local_428[0]._0_4_ = (int)(longlong)(fVar51 + fVar51);
      local_4e0 = &local_438;
      do {
        pdVar28 = *(double **)local_4e0;
        pdVar24 = *(double **)(local_4e0 + 2);
        uVar8 = local_4e0[4];
        iVar6 = (int)((ulonglong)((longlong)pdVar24 - (longlong)pdVar28) >> 4) * -0x49249249;
        uVar30 = iVar6 + 1;
        pdVar39 = pdVar24;
        pdVar13 = pdVar28;
        if (uVar8 != 0) {
LAB_14385ad8b:
          if (8 < (int)uVar30) {
            pdVar35 = pdVar28 + (ulonglong)(uVar30 >> 1) * 0xe;
            pdVar23 = local_130;
            for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pdVar23 = *pdVar35;
              pdVar35 = pdVar35 + 1;
              pdVar23 = pdVar23 + 1;
            }
            pdVar35 = pdVar28;
            pdVar23 = pdVar28 + (ulonglong)(uVar30 >> 1) * 0xe;
            for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pdVar23 = *pdVar35;
              pdVar35 = pdVar35 + 1;
              pdVar23 = pdVar23 + 1;
            }
            pdVar35 = local_130;
            pdVar23 = pdVar28;
            for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pdVar23 = *pdVar35;
              pdVar35 = pdVar35 + 1;
              pdVar23 = pdVar23 + 1;
            }
            pdVar35 = pdVar39 + 0xe;
            pdVar23 = pdVar28;
            do {
              pdVar34 = pdVar23 + 0xe;
              pdVar37 = pdVar23 + 0xe;
              do {
                pdVar23 = pdVar37;
                pdVar44 = pdVar34;
                if (pdVar39 < pdVar23) break;
                pdVar34 = pdVar44 + 0xe;
                pdVar37 = pdVar23 + 0xe;
              } while (*pdVar23 < *pdVar28 || *pdVar23 == *pdVar28);
              pdVar34 = pdVar35 + -0x1c;
              do {
                pdVar37 = pdVar35;
                pdVar32 = pdVar34;
                pdVar35 = pdVar37 + -0xe;
                if (pdVar35 <= pdVar28) break;
                pdVar34 = pdVar32 + -0xe;
              } while (*pdVar28 < *pdVar35 || *pdVar28 == *pdVar35);
              lVar7 = 0xe;
              pdVar34 = pdVar28;
              pdVar33 = pdVar23;
              pdVar38 = local_130;
              if (pdVar35 < pdVar23) goto code_r0x00014385ae5d;
              for (; lVar7 != 0; lVar7 = lVar7 + -1) {
                *pdVar38 = *pdVar33;
                pdVar33 = pdVar33 + 1;
                pdVar38 = pdVar38 + 1;
              }
              pdVar34 = pdVar35;
              pdVar37 = pdVar23;
              for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                *pdVar37 = *pdVar34;
                pdVar34 = pdVar34 + 1;
                pdVar37 = pdVar37 + 1;
              }
              pdVar34 = local_130;
              pdVar37 = pdVar35;
              for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                *pdVar37 = *pdVar34;
                pdVar34 = pdVar34 + 1;
                pdVar37 = pdVar37 + 1;
              }
            } while( true );
          }
          if (pdVar28 < pdVar39) {
            do {
              pdVar24 = pdVar28;
              if (pdVar28 + 0xe <= pdVar39) {
                dVar50 = *pdVar28;
                pdVar13 = pdVar28 + 0xe;
                do {
                  dVar2 = *pdVar13;
                  pdVar35 = pdVar13;
                  if (*pdVar13 <= dVar50) {
                    dVar2 = dVar50;
                    pdVar35 = pdVar24;
                  }
                  pdVar24 = pdVar35;
                  dVar50 = dVar2;
                  pdVar13 = pdVar13 + 0xe;
                } while (pdVar13 <= pdVar39);
              }
              pdVar13 = pdVar39 + -0xe;
              pdVar35 = pdVar24;
              pdVar23 = local_130;
              for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                *pdVar23 = *pdVar35;
                pdVar35 = pdVar35 + 1;
                pdVar23 = pdVar23 + 1;
              }
              pdVar35 = pdVar39;
              for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                *pdVar24 = *pdVar35;
                pdVar35 = pdVar35 + 1;
                pdVar24 = pdVar24 + 1;
              }
              pdVar24 = local_130;
              for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                *pdVar39 = *pdVar24;
                pdVar24 = pdVar24 + 1;
                pdVar39 = pdVar39 + 1;
              }
              pdVar39 = pdVar13;
            } while (pdVar28 < pdVar13);
          }
          goto LAB_14385b183;
        }
LAB_14385af1e:
        if (uVar30 != 0) {
          iVar26 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
          iVar6 = iVar26;
joined_r0x00014385af46:
          do {
            iVar29 = iVar6 * 2 + 1;
            if (iVar29 < (int)uVar30) {
              iVar9 = iVar6 * 2 + 2;
              if ((iVar9 < (int)uVar30) &&
                 (pdVar28[(longlong)iVar29 * 0xe] < pdVar28[(longlong)iVar9 * 0xe] ||
                  pdVar28[(longlong)iVar29 * 0xe] == pdVar28[(longlong)iVar9 * 0xe])) {
                iVar29 = iVar9;
              }
              if (pdVar28[(longlong)iVar6 * 0xe] <= pdVar28[(longlong)iVar29 * 0xe] &&
                  pdVar28[(longlong)iVar29 * 0xe] != pdVar28[(longlong)iVar6 * 0xe]) {
                pdVar24 = pdVar28 + (longlong)iVar6 * 0xe;
                pdVar39 = local_130;
                for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *pdVar39 = *pdVar24;
                  pdVar24 = pdVar24 + 1;
                  pdVar39 = pdVar39 + 1;
                }
                pdVar24 = pdVar28 + (longlong)iVar29 * 0xe;
                pdVar39 = pdVar28 + (longlong)iVar6 * 0xe;
                for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *pdVar39 = *pdVar24;
                  pdVar24 = pdVar24 + 1;
                  pdVar39 = pdVar39 + 1;
                }
                pdVar24 = local_130;
                pdVar39 = pdVar28 + (longlong)iVar29 * 0xe;
                for (lVar7 = 0xe; iVar6 = iVar29, lVar7 != 0; lVar7 = lVar7 + -1) {
                  *pdVar39 = *pdVar24;
                  pdVar24 = pdVar24 + 1;
                  pdVar39 = pdVar39 + 1;
                }
                goto joined_r0x00014385af46;
              }
            }
            bVar47 = iVar26 != 0;
            iVar26 = iVar26 + -1;
            iVar6 = iVar26;
          } while (bVar47);
          if (1 < (int)uVar30) {
            pdVar24 = pdVar28;
            pdVar39 = local_130;
            for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pdVar39 = *pdVar24;
              pdVar24 = pdVar24 + 1;
              pdVar39 = pdVar39 + 1;
            }
            pdVar24 = pdVar28 + ((ulonglong)uVar30 - 1) * 0xe;
            pdVar39 = pdVar28;
            for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pdVar39 = *pdVar24;
              pdVar24 = pdVar24 + 1;
              pdVar39 = pdVar39 + 1;
            }
            pdVar24 = local_130;
            pdVar39 = pdVar28 + ((ulonglong)uVar30 - 1) * 0xe;
            for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pdVar39 = *pdVar24;
              pdVar24 = pdVar24 + 1;
              pdVar39 = pdVar39 + 1;
            }
            uVar46 = (ulonglong)uVar30 - 1;
            if (uVar30 != 2) {
              do {
                iVar6 = 0;
                iVar29 = 1;
                iVar26 = 0;
                do {
                  iVar6 = iVar6 + 2;
                  iVar9 = iVar29;
                  if (((longlong)iVar6 < (longlong)uVar46) &&
                     (pdVar28[(longlong)iVar29 * 0xe] < pdVar28[(longlong)iVar6 * 0xe] ||
                      pdVar28[(longlong)iVar29 * 0xe] == pdVar28[(longlong)iVar6 * 0xe])) {
                    iVar9 = iVar6;
                  }
                  if (pdVar28[(longlong)iVar9 * 0xe] < pdVar28[(longlong)iVar26 * 0xe] ||
                      pdVar28[(longlong)iVar9 * 0xe] == pdVar28[(longlong)iVar26 * 0xe]) break;
                  pdVar24 = pdVar28 + (longlong)iVar26 * 0xe;
                  pdVar39 = local_130;
                  for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *pdVar39 = *pdVar24;
                    pdVar24 = pdVar24 + 1;
                    pdVar39 = pdVar39 + 1;
                  }
                  pdVar24 = pdVar28 + (longlong)iVar9 * 0xe;
                  pdVar39 = pdVar28 + (longlong)iVar26 * 0xe;
                  for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *pdVar39 = *pdVar24;
                    pdVar24 = pdVar24 + 1;
                    pdVar39 = pdVar39 + 1;
                  }
                  pdVar24 = local_130;
                  pdVar39 = pdVar28 + (longlong)iVar9 * 0xe;
                  for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *pdVar39 = *pdVar24;
                    pdVar24 = pdVar24 + 1;
                    pdVar39 = pdVar39 + 1;
                  }
                  iVar6 = iVar9 * 2;
                  iVar29 = iVar9 * 2 + 1;
                  iVar26 = iVar9;
                } while ((longlong)iVar29 < (longlong)uVar46);
                pdVar24 = pdVar28;
                pdVar39 = local_130;
                for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *pdVar39 = *pdVar24;
                  pdVar24 = pdVar24 + 1;
                  pdVar39 = pdVar39 + 1;
                }
                pdVar24 = pdVar28 + (uVar46 - 1) * 0xe;
                pdVar39 = pdVar28;
                for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *pdVar39 = *pdVar24;
                  pdVar24 = pdVar24 + 1;
                  pdVar39 = pdVar39 + 1;
                }
                pdVar24 = local_130;
                pdVar39 = pdVar28 + (uVar46 - 1) * 0xe;
                for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *pdVar39 = *pdVar24;
                  pdVar24 = pdVar24 + 1;
                  pdVar39 = pdVar39 + 1;
                }
                bVar47 = 2 < uVar46;
                uVar46 = uVar46 - 1;
              } while (bVar47);
            }
          }
        }
LAB_14385b183:
        local_4e0 = local_4e0 + -6;
      } while (&local_438 <= local_4e0);
      param_1 = local_4d8;
      if (*(int *)(local_4d8 + 0xe8) < 1) goto LAB_14385a1d2;
    }
    pdVar28 = *(double **)(param_1 + 0xe0);
    if (*pdVar28 <= *(double *)(param_1 + 0x108) && *(double *)(param_1 + 0x108) != *pdVar28) {
      uVar46 = 0;
LAB_14385b1db:
      uVar30 = *(uint *)(pdVar28 + 1);
      FUN_145eea1a4();
      if ((uVar30 != local_438) && (*(int *)(local_4d8 + 0x18) != *(int *)(local_4d8 + 0x44))) {
        uVar30 = *(uint *)(pdVar28 + 1);
        lVar7 = *(longlong *)(local_4d8 + 0x50);
        if (*(longlong *)(local_4d8 + 0x50) == 0) {
          lVar7 = param_1 + 0x48;
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(local_4d8 + 0x58) - 1U & uVar30) * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(local_4d8 + 0x10);
          iVar26 = iVar6;
          do {
            if (*(uint *)(lVar7 + (longlong)iVar26 * 0x60) == uVar30) goto LAB_14385b28d;
            iVar26 = *(int *)((longlong)iVar26 * 0x60 + lVar7 + 0x58);
          } while (iVar26 != -1);
        }
      }
      goto LAB_14385b248;
    }
  }
LAB_14385a1d2:
  if (!(bool)(bVar36 | bVar48)) goto LAB_14385ac79;
LAB_14385a1df:
  puVar18 = (uint *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x38);
  if (iVar6 == 0) {
    uVar45 = 1;
    uVar46 = 0;
    iVar26 = 0;
    iVar29 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar11 = puVar18;
    }
    uVar30 = *puVar11;
    if (uVar30 == 0) {
      iVar26 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar26 = iVar6 + -1;
      }
      uVar46 = 0;
      uVar45 = (ulonglong)(uint)(iVar26 >> 5);
      if (iVar26 >> 5 < 1) {
        uVar45 = uVar46;
      }
      iVar26 = 0;
      do {
        if (uVar45 == uVar46) goto LAB_14385ac79;
        iVar26 = iVar26 + 0x20;
        uVar30 = puVar11[uVar46 + 1];
        uVar46 = uVar46 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar46 = 0;
      iVar26 = 0;
    }
    uVar45 = (ulonglong)(-uVar30 & uVar30);
    uVar12 = uVar45 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar29 = (iVar26 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar29) {
      iVar29 = iVar6;
    }
  }
  if (iVar29 < iVar6) {
    uVar30 = 0xffffffff;
    local_4a8 = puVar18;
    do {
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x4c + (longlong)iVar29 * 0x60) & 1) != 0) {
        lVar7 = (longlong)iVar29 * 0x60 + *(longlong *)(param_1 + 0x10);
        local_488 = (uint *)(lVar7 + 8);
        iVar6 = *(int *)(lVar7 + 0xc);
        if ((iVar6 == 0) || (uVar8 = *local_488, (int)uVar8 < 0)) {
LAB_14385ac71:
          plVar16 = (longlong *)0x0;
        }
        else {
          plVar16 = (longlong *)0x0;
          if ((int)uVar8 < DAT_14c9647dc) {
            puVar19 = (undefined8 *)
                      ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
            if (((puVar19 == (undefined8 *)0x0) || (*(int *)(puVar19 + 2) != iVar6)) ||
               ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)) goto LAB_14385ac71;
            plVar16 = (longlong *)*puVar19;
          }
        }
        uVar8 = *(uint *)(plVar16 + 0x34);
        uVar12 = (ulonglong)uVar8;
        local_4b8 = uVar30;
        local_4b4 = iVar26;
        local_480 = uVar46;
        if (uVar12 != 0) {
          local_4c0 = (int)plVar16[0x3d];
          local_4bc = (int)plVar16[0x3f];
          puVar11 = (uint *)plVar16[0x33];
          plVar16[0x33] = 0;
          plVar16[0x34] = 0;
          local_468 = 0;
          uStack_460 = 0;
          if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar12);
          }
          local_4a0 = plVar16 + 0x3c;
          local_498 = plVar16 + 0x3e;
          FUN_140c5c1ec(&local_468,uVar12);
          local_478 = 0;
          uStack_470 = 0;
          FUN_140c5c1ec(&local_478,uVar8);
          local_80 = (longlong *)0x0;
          local_78 = 0x800000000;
          puVar43 = puVar11 + uVar12 * 0x18;
          plVar21 = plVar16 + 0x29;
          puVar31 = (uint *)(plVar16 + 0x30);
          local_4e0 = puVar31;
          local_4d0 = puVar43;
          local_4c8 = plVar21;
          local_490 = puVar11;
          do {
            uVar30 = *puVar11;
            uVar8 = puVar11[1];
            if ((int)plVar16[0x2a] != *(int *)((longlong)plVar16 + 0x17c)) {
              uVar40 = uVar8 >> 0xd ^ uVar30 - uVar8;
              uVar15 = uVar40 << 8 ^ (-0x61c88647 - uVar8) - uVar40;
              uVar41 = uVar15 >> 0xd ^ (uVar8 - uVar40) - uVar15;
              uVar42 = uVar41 >> 0xc ^ (uVar40 - uVar15) - uVar41;
              uVar40 = uVar42 << 0x10 ^ (uVar15 - uVar41) - uVar42;
              uVar15 = uVar40 >> 5 ^ (uVar41 - uVar42) - uVar40;
              uVar41 = uVar15 >> 3 ^ (uVar42 - uVar40) - uVar15;
              uVar40 = uVar41 << 10 ^ (uVar40 - uVar15) - uVar41;
              puVar18 = (uint *)plVar16[0x31];
              if ((uint *)plVar16[0x31] == (uint *)0x0) {
                puVar18 = puVar31;
              }
              uVar15 = puVar18[(int)plVar16[0x32] - 1U &
                               (uVar40 >> 0xf ^ uVar15 - (uVar41 + uVar40))];
              if (uVar15 != 0xffffffff) {
                lVar7 = *plVar21;
                do {
                  lVar27 = (longlong)(int)uVar15 * 0x38;
                  lVar17 = lVar7 + lVar27;
                  if ((*(uint *)(lVar7 + lVar27) == uVar30) &&
                     (*(uint *)(lVar7 + 4 + lVar27) == uVar8)) {
                    if (lVar17 != 0) {
                      lVar7 = 0;
                      goto LAB_14385a613;
                    }
                    break;
                  }
                  uVar15 = *(uint *)(lVar17 + 0x30);
                } while (uVar15 != 0xffffffff);
              }
            }
            lVar27 = uStack_430;
            if (((uVar8 != 0 && (puVar11[0x17] & 2) != 0) && (-1 < (int)uVar30)) &&
               (((int)uVar30 < DAT_14c9647dc &&
                ((((plVar20 = (longlong *)
                              ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
                   plVar20 != (longlong *)0x0 && (*(uint *)(plVar20 + 2) == uVar8)) &&
                  ((*(uint *)(plVar20 + 1) & 0x10200000) == 0)) && (lVar7 = *plVar20, lVar7 != 0))))
               )) {
              FUN_147eff96e(&local_438,lVar7);
              local_450 = puVar11;
              local_448 = &local_438;
              FUN_147f0d78c(plVar21,&local_43c,&local_450);
              lVar27 = (longlong)local_43c;
              lVar17 = *plVar21;
              if (uStack_430 != 0) {
                FUN_1400020a8();
              }
              lVar17 = lVar17 + lVar27 * 0x38;
              *(char *)(lVar17 + 0x20) = (char)plVar16[0x25];
              *(undefined8 *)(lVar17 + 0x24) = *(undefined8 *)((longlong)plVar16 + 300);
              iVar6 = FUN_147ea5586(plVar16[0x15],lVar7);
              uVar30 = *(uint *)(lVar17 + 0x2c) & 0xfffffffe | (uint)(iVar6 == 2);
              uVar8 = 0;
              *(uint *)(lVar17 + 0x2c) = uVar30;
              if (iVar6 != 2) {
                iVar6 = FUN_147ea5586(plVar16[0x15],lVar7);
                uVar8 = (uint)(iVar6 == 0) * 2;
                uVar30 = *(uint *)(lVar17 + 0x2c);
              }
              *(uint *)(lVar17 + 0x2c) = uVar30 & 0xfffffffd | uVar8;
              puVar43 = local_4d0;
LAB_14385a613:
              bVar36 = (byte)puVar11[0x14];
              if (*(int *)(lVar17 + 0x18) <= (int)(uint)bVar36) {
                FUN_147eff9b4((longlong *)(lVar17 + 0x10),
                              ((uint)bVar36 - *(int *)(lVar17 + 0x18)) + 1);
                bVar36 = (byte)puVar11[0x14];
                puVar43 = local_4d0;
              }
              pdVar28 = (double *)((ulonglong)bVar36 * 0x58 + *(longlong *)(lVar17 + 0x10));
              uVar30 = puVar11[0x17];
              bVar36 = 1;
              if ((uVar30 & 1) != 0) {
                bVar36 = (*(byte *)((longlong)pdVar28 + 0x54) & 2) >> 1 ^ (byte)((uVar30 & 2) >> 1);
              }
              if ((uVar30 & 2) == 0) {
                if ((*(uint *)((longlong)pdVar28 + 0x54) & 4) != 0) {
                  (**(code **)(*plVar16 + 0x490))(plVar16,pdVar28);
                  if ((*(byte *)(plVar16 + 0x37) & 1) != 0) {
                    cVar5 = FUN_147eff9f2();
                    if (((cVar5 == '\0') && (*(int *)(lVar17 + 0xc) != 0)) &&
                       ((((uVar30 = *(uint *)(lVar17 + 8), -1 < (int)uVar30 &&
                          (((int)uVar30 < DAT_14c9647dc &&
                           (plVar21 = (longlong *)
                                      ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)
                                      ), plVar21 != (longlong *)0x0)))) &&
                         ((int)plVar21[2] == *(int *)(lVar17 + 0xc))) &&
                        (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 &&
                         (lVar27 = *plVar21, lVar27 != 0)))))) {
                      lVar22 = (longlong)(int)uStack_470;
                      uVar30 = (int)uStack_470 + 1;
                      uStack_470 = CONCAT44(uStack_470._4_4_,uVar30);
                      if (uStack_470._4_4_ < uVar30) {
                        local_4b0 = lVar22;
                        FUN_1447d05f2(&local_478,lVar22);
                        lVar22 = local_4b0;
                      }
                      *(longlong *)(local_478 + lVar22 * 8) = lVar27;
                    }
                  }
                  goto LAB_14385a6b1;
                }
                puVar31 = local_4e0;
                plVar21 = local_4c8;
                lVar27 = uStack_430;
                if (bVar36 == 0) goto LAB_14385a547;
                *(uint *)((longlong)pdVar28 + 0x54) =
                     *(uint *)((longlong)pdVar28 + 0x54) & 0xfffffff9;
                *(undefined4 *)pdVar28 = 0;
              }
              else {
                (**(code **)(*plVar16 + 0x488))(plVar16,pdVar28,puVar11 + 2);
LAB_14385a6b1:
                puVar31 = local_4e0;
                plVar21 = local_4c8;
                puVar43 = local_4d0;
                lVar27 = uStack_430;
                if (bVar36 == 0) goto LAB_14385a547;
              }
              uVar12 = local_78;
              uVar46 = uStack_460;
              plVar21 = local_4c8;
              if ((lVar7 == 0) &&
                 ((((puVar11[1] == 0 || (uVar30 = *puVar11, (int)uVar30 < 0)) ||
                   (DAT_14c9647dc <= (int)uVar30)) ||
                  (((plVar20 = (longlong *)
                               ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
                    plVar20 == (longlong *)0x0 || (*(uint *)(plVar20 + 2) != puVar11[1])) ||
                   (((*(uint *)(plVar20 + 1) & 0x10200000) != 0 || (lVar7 = *plVar20, lVar7 == 0))))
                  )))) {
                lVar7 = (longlong)(int)local_78;
                uVar30 = (int)local_78 + 1;
                local_78 = CONCAT44(local_78._4_4_,uVar30);
                if (local_78._4_4_ < uVar30) {
                  FUN_147f0daf6(local_c0,uVar12 & 0xffffffff);
                  puVar43 = local_4d0;
                }
                plVar20 = local_80;
                if (local_80 == (longlong *)0x0) {
                  plVar20 = local_c0;
                }
                plVar20[lVar7] = *(longlong *)puVar11;
                puVar31 = local_4e0;
                lVar27 = uStack_430;
              }
              else {
                lVar27 = (longlong)(int)uStack_460;
                if (lVar27 != 0) {
                  uVar12 = 0;
                  do {
                    if (*(longlong *)(local_468 + uVar12) == lVar7) {
                      if ((~uVar12 & 0x7fffffff8) != 0) goto LAB_14385a7a6;
                      break;
                    }
                    uVar12 = uVar12 + 8;
                  } while (lVar27 * 8 - uVar12 != 0);
                }
                uVar30 = (int)uStack_460 + 1;
                uStack_460 = CONCAT44(uStack_460._4_4_,uVar30);
                if (uStack_460._4_4_ < uVar30) {
                  FUN_1447d05f2(&local_468,uVar46 & 0xffffffff);
                  puVar43 = local_4d0;
                }
                *(longlong *)(local_468 + lVar27 * 8) = lVar7;
LAB_14385a7a6:
                plVar20 = local_4c8;
                puVar31 = local_4e0;
                lVar27 = uStack_430;
                if (0 < local_4c0) {
                  pdVar24 = pdVar28;
                  pdVar39 = local_130;
                  for (lVar27 = 9; lVar27 != 0; lVar27 = lVar27 + -1) {
                    *pdVar39 = *pdVar24;
                    pdVar24 = pdVar24 + 1;
                    pdVar39 = pdVar39 + 1;
                  }
                  local_e8 = *(undefined1 *)(pdVar28 + 9);
                  local_e4 = *(undefined8 *)((longlong)pdVar28 + 0x4c);
                  local_dc = *(undefined1 *)((longlong)pdVar28 + 0x54);
                  FUN_147effaa8(local_4a0,lVar7);
                  plVar21 = plVar20;
                  puVar43 = local_4d0;
                  lVar27 = uStack_430;
                }
              }
              plVar20 = local_4c8;
              puVar18 = local_4e0;
              uStack_430._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
              if (0 < local_4bc) {
                uVar30 = puVar11[1];
                uVar15 = uVar30 >> 0xd ^ *puVar11 - uVar30;
                uVar8 = uVar15 << 8 ^ (-0x61c88647 - uVar30) - uVar15;
                uVar30 = uVar8 >> 0xd ^ (uVar30 - uVar15) - uVar8;
                uVar15 = uVar30 >> 0xc ^ (uVar15 - uVar8) - uVar30;
                uVar8 = uVar15 << 0x10 ^ (uVar8 - uVar30) - uVar15;
                uVar30 = uVar8 >> 5 ^ (uVar30 - uVar15) - uVar8;
                uVar15 = uVar30 >> 3 ^ (uVar15 - uVar8) - uVar30;
                uVar8 = uVar15 << 10 ^ (uVar8 - uVar30) - uVar15;
                local_438 = uVar8 >> 0xf ^ uVar30 - (uVar15 + uVar8);
                uVar25 = *(undefined8 *)(lVar17 + 8);
                uStack_434 = (undefined4)uVar25;
                uStack_430._0_4_ = (undefined4)((ulonglong)uVar25 >> 0x20);
                pdVar24 = pdVar28;
                pdVar39 = local_428;
                for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *pdVar39 = *pdVar24;
                  pdVar24 = pdVar24 + 1;
                  pdVar39 = pdVar39 + 1;
                }
                local_3e0 = *(undefined1 *)(pdVar28 + 9);
                local_3dc = *(undefined8 *)((longlong)pdVar28 + 0x4c);
                local_3d4 = *(undefined1 *)((longlong)pdVar28 + 0x54);
                FUN_147efd208(local_498,&local_438);
                puVar31 = puVar18;
                plVar21 = plVar20;
                puVar43 = local_4d0;
                lVar27 = CONCAT44(uStack_430._4_4_,(undefined4)uStack_430);
              }
            }
LAB_14385a547:
            uStack_430 = lVar27;
            puVar18 = local_4a8;
            param_1 = local_4d8;
            puVar11 = puVar11 + 0x18;
          } while (puVar11 != puVar43);
          if (0 < (int)uStack_460) {
            plVar21 = (longlong *)plVar16[0x27];
            if (plVar21 != (longlong *)0x0) {
              (**(code **)(*plVar21 + 0x810))(plVar21,&local_468);
            }
            FUN_147efd1a7(plVar16 + 0x38,&local_468);
          }
          lVar7 = local_478;
          lVar17 = (longlong)(int)uStack_470;
          if (lVar17 != 0) {
            lVar27 = 0;
            do {
              FUN_147effb66(plVar16,*(undefined8 *)(lVar7 + lVar27));
              lVar27 = lVar27 + 8;
            } while (lVar17 * 8 != lVar27);
          }
          lVar7 = local_478;
          if (0 < (int)plVar16[0x3b]) {
            lVar17 = (longlong)(int)uStack_470;
            if (lVar17 != 0) {
              lVar27 = 0;
              do {
                local_438 = (uint)*(undefined8 *)(lVar7 + lVar27);
                uStack_434 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + lVar27) >> 0x20);
                FUN_1447cd2ec(plVar16 + 0x3a,&local_438);
                lVar27 = lVar27 + 8;
              } while (lVar17 * 8 != lVar27);
            }
          }
          plVar16 = local_4c8;
          plVar21 = local_80;
          if (local_80 == (longlong *)0x0) {
            plVar21 = local_c0;
          }
          if ((longlong)(int)local_78 != 0) {
            lVar7 = (longlong)(int)local_78 << 3;
            do {
              FUN_147f0dbea(plVar16,plVar21);
              plVar21 = plVar21 + 1;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
          if (local_80 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_478 != 0) {
            FUN_1400020a8();
          }
          if (local_468 != 0) {
            FUN_1400020a8();
          }
          if (local_490 != (uint *)0x0) {
            FUN_1400020a8();
          }
        }
        *(byte *)(local_488 + 0x11) = (byte)local_488[0x11] & 0xfe;
        iVar6 = *(int *)(param_1 + 0x38);
        uVar46 = local_480;
        iVar26 = local_4b4;
        uVar30 = local_4b8;
      }
      uVar30 = uVar30 & ~(uint)uVar45;
      puVar11 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar11 = puVar18;
      }
      iVar29 = (int)uVar46;
      lVar7 = (longlong)iVar29;
      uVar8 = puVar11[lVar7] & uVar30;
      if (uVar8 == 0) {
        iVar9 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar9 = iVar6 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar29) {
          iVar10 = iVar29;
        }
        if (iVar9 <= iVar29) break;
        lVar17 = 0;
        while( true ) {
          iVar26 = iVar26 + 0x20;
          uVar8 = puVar11[lVar7 + lVar17 + 1];
          if (uVar8 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar10 - lVar7 == lVar17) goto LAB_14385ac79;
        }
        uVar46 = (ulonglong)(iVar29 + (int)lVar17 + 1);
        uVar30 = 0xffffffff;
      }
      uVar45 = (ulonglong)(-uVar8 & uVar8);
      uVar12 = uVar45 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar29 = (iVar26 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar29 < iVar6);
  }
LAB_14385ac79:
  if ((local_70 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014385ae5d:
  for (; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pdVar38 = *pdVar34;
    pdVar34 = pdVar34 + 1;
    pdVar38 = pdVar38 + 1;
  }
  pdVar34 = pdVar35;
  pdVar33 = pdVar28;
  for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pdVar33 = *pdVar34;
    pdVar34 = pdVar34 + 1;
    pdVar33 = pdVar33 + 1;
  }
  pdVar34 = local_130;
  pdVar33 = pdVar35;
  for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pdVar33 = *pdVar34;
    pdVar34 = pdVar34 + 1;
    pdVar33 = pdVar33 + 1;
  }
  uVar8 = uVar8 - 1;
  pdVar37 = pdVar37 + -0x1c;
  if ((longlong)pdVar32 - (longlong)pdVar13 < (longlong)pdVar24 - (longlong)pdVar44) {
    if (pdVar23 < pdVar39) {
      *(double **)local_4e0 = pdVar23;
      *(double **)(local_4e0 + 2) = pdVar39;
      local_4e0[4] = uVar8;
      local_4e0 = local_4e0 + 6;
    }
    pdVar24 = pdVar32;
    pdVar44 = pdVar28;
    if (pdVar35 <= pdVar28 + 0xe) goto LAB_14385b183;
  }
  else {
    if (pdVar28 + 0xe < pdVar35) {
      *(double **)local_4e0 = pdVar28;
      *(double **)(local_4e0 + 2) = pdVar37;
      local_4e0[4] = uVar8;
      local_4e0 = local_4e0 + 6;
    }
    pdVar28 = pdVar23;
    pdVar37 = pdVar39;
    pdVar24 = pdVar39;
    if (pdVar39 <= pdVar23) goto LAB_14385b183;
  }
  iVar6 = (int)((ulonglong)((longlong)pdVar24 - (longlong)pdVar44) >> 4) * -0x49249249;
  uVar30 = iVar6 + 1;
  pdVar39 = pdVar37;
  pdVar13 = pdVar44;
  if (uVar8 == 0) goto LAB_14385af1e;
  goto LAB_14385ad8b;
  while (iVar6 = *(int *)(lVar17 + 0x58), iVar6 != -1) {
LAB_14385b28d:
    lVar17 = lVar7 + (longlong)iVar6 * 0x60;
    if (*(uint *)(lVar7 + (longlong)iVar6 * 0x60) == uVar30) goto LAB_14385b2ab;
  }
  lVar17 = 0;
LAB_14385b2ab:
  if ((*(int *)(pdVar28 + 2) == 0) || (uVar30 = *(uint *)((longlong)pdVar28 + 0xc), (int)uVar30 < 0)
     ) {
LAB_14385b35f:
    uVar25 = 0;
  }
  else {
    uVar25 = 0;
    if ((int)uVar30 < DAT_14c9647dc) {
      puVar19 = (undefined8 *)
                ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8));
      if (((puVar19 == (undefined8 *)0x0) || (*(int *)(puVar19 + 2) != *(int *)(pdVar28 + 2))) ||
         ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)) goto LAB_14385b35f;
      uVar25 = *puVar19;
    }
  }
  *(byte *)(lVar17 + 0x4c) = *(byte *)(lVar17 + 0x4c) | 1;
  if ((*(int *)(lVar17 + 0xc) != 0) && (uVar30 = *(uint *)(lVar17 + 8), -1 < (int)uVar30)) {
    uVar14 = 0;
    if (DAT_14c9647dc <= (int)uVar30) goto LAB_14385b34e;
    puVar19 = (undefined8 *)
              ((ulonglong)((uVar30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8));
    if (((puVar19 != (undefined8 *)0x0) && (*(int *)(puVar19 + 2) == *(int *)(lVar17 + 0xc))) &&
       ((*(uint *)(puVar19 + 1) & 0x10200000) == 0)) {
      uVar14 = *puVar19;
      goto LAB_14385b34e;
    }
  }
  uVar14 = 0;
LAB_14385b34e:
  FUN_147eff856(uVar14,uVar25,pdVar28 + 3);
LAB_14385b248:
  lVar7 = local_4d8;
  uVar46 = uVar46 + 1;
  iVar6 = *(int *)(local_4d8 + 0xe8);
  if (((longlong)iVar6 <= (longlong)uVar46) ||
     (pdVar28 = (double *)(*(longlong *)(local_4d8 + 0xe0) + uVar46 * 0x70),
     pdVar24 = (double *)(*(longlong *)(local_4d8 + 0xe0) + uVar46 * 0x70),
     *(double *)(local_4d8 + 0x108) < *pdVar24 || *(double *)(local_4d8 + 0x108) == *pdVar24))
  goto LAB_14385b50b;
  goto LAB_14385b1db;
LAB_14385b50b:
  iVar26 = (int)uVar46;
  param_1 = local_4d8;
  if (iVar26 == 0) goto LAB_14385a1d2;
  if (iVar6 - iVar26 != 0) {
    memmove(*(void **)(local_4d8 + 0xe0),
            (void *)((uVar46 & 0xffffffff) * 0x70 + (longlong)*(void **)(local_4d8 + 0xe0)),
            (longlong)(iVar6 - iVar26) * 0x70);
    iVar6 = *(int *)(lVar7 + 0xe8);
  }
  *(int *)(local_4d8 + 0xe8) = iVar6 - iVar26;
  param_1 = local_4d8;
  goto LAB_14385a1df;
}



// FUNCTION 14385b562 FUN_14385b562 body=260 status=ok
// SIG undefined FUN_14385b562(void)

void FUN_14385b562(longlong param_1,undefined4 param_2,longlong param_3,undefined4 *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1;
  if ((param_1 != 0) || (lVar1 = param_3, param_3 != 0)) {
    lVar1 = FUN_1447210f0(lVar1);
    if (lVar1 != 0) {
      local_58 = param_1;
      if (param_3 != 0) {
        local_58 = param_3;
      }
      local_80[0] = 0;
      local_78 = *param_4;
      uStack_74 = param_4[1];
      uStack_70 = param_4[2];
      uStack_6c = param_4[3];
      local_68 = *(undefined8 *)(param_4 + 4);
      local_5c = param_5;
      local_60 = param_2;
      if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_58);
      }
      local_50 = param_6;
      local_48 = DAT_14cb1f000;
      FUN_147f0314a();
      lVar1 = FUN_147efe474(lVar1);
      if (lVar1 != 0) {
        FUN_147f03574(lVar1,local_80);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385b667 FUN_14385b667 body=55 status=ok
// SIG undefined FUN_14385b667(void)

void FUN_14385b667(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20740 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb20740 = FUN_14171c317(FUN_14642f6f6,uVar1,L"EAISenseNotifyType");
  }
  return;
}



// FUNCTION 14385b69e FUN_14385b69e body=41 status=ok
// SIG undefined FUN_14385b69e(void)

void FUN_14385b69e(void)

{
  DAT_14cb208e0 = 0;
  if (DAT_14cb208d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d7150e();
  return;
}



// FUNCTION 14385b6c8 FUN_14385b6c8 body=1504 status=ok
// SIG undefined FUN_14385b6c8(void)

void FUN_14385b6c8(longlong param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  uint *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_158 [40];
  uint local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined ***local_118;
  undefined **local_108;
  longlong *local_100;
  longlong local_e8 [2];
  longlong *local_d8;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_12c = FUN_147f017dc(param_2);
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar7 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xb8);
    }
    iVar14 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & local_12c) * 4);
    if (iVar14 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x78) + (longlong)iVar14 * 0x38;
        if (*(uint *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar14 * 0x38) == local_12c) {
          puVar15 = (uint *)(lVar7 + 8);
          if (puVar15 != (uint *)0x0 && lVar7 != 0) {
            if (((((*(int *)(lVar7 + 0xc) == 0) || (uVar4 = *puVar15, (int)uVar4 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar4)) ||
                ((lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar8 == 0
                 || (*(int *)(lVar8 + 0x10) != *(int *)(lVar7 + 0xc))))) ||
               ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)) {
              local_e8[0] = 0;
              local_d8 = (longlong *)0x0;
              FUN_14385d654(param_1,&local_12c,local_e8);
              if (local_e8[0] != 0) {
                plVar11 = local_d8;
                if (local_d8 == (longlong *)0x0) {
                  plVar11 = &local_c8;
                }
                (**(code **)(*plVar11 + 0x10))();
              }
            }
            else {
              local_c8 = 0;
              local_c0 = 0;
              local_e8[0] = 0;
              local_e8[1] = 0;
              local_bc = 0xffffffff00000080;
              local_b4 = 0;
              local_a8 = 0;
              local_a0 = 0;
              local_118 = (undefined ***)0x0;
              local_108 = &PTR_LAB_14ac25d90;
              local_128 = 0x4385e802;
              uStack_124 = 1;
              local_100 = local_e8;
              FUN_14385d654(param_1,&local_12c,&local_128);
              if (CONCAT44(uStack_124,local_128) != 0) {
                pppuVar10 = local_118;
                if (local_118 == (undefined ***)0x0) {
                  pppuVar10 = &local_108;
                }
                (*(code *)(*pppuVar10)[2])();
              }
              local_118 = (undefined ***)0x0;
              local_108 = &PTR_LAB_14ac25db0;
              local_128 = 0x4385e892;
              uStack_124 = 1;
              if (*(int *)(lVar7 + 0xc) == 0) {
LAB_14385bca2:
                uVar12 = 0;
              }
              else {
                uVar4 = *puVar15;
                uVar12 = 0;
                if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
                  puVar13 = (undefined8 *)
                            ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                  if ((puVar13 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar13 + 2) != *(int *)(lVar7 + 0xc) ||
                      ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_14385bca2;
                  uVar12 = *puVar13;
                }
              }
              local_100 = local_e8;
              FUN_14385d6d4(param_1,uVar12,&local_128);
              if (CONCAT44(uStack_124,local_128) != 0) {
                pppuVar10 = &local_108;
                if (local_118 != (undefined ***)0x0) {
                  pppuVar10 = local_118;
                }
                (*(code *)(*pppuVar10)[2])(pppuVar10);
              }
              local_a0 = 0;
              if (local_a8 != 0) {
                FUN_1400020a8();
              }
              FUN_147f1274c(local_e8);
            }
          }
          break;
        }
        iVar14 = *(int *)(lVar7 + 0x30);
      } while (iVar14 != -1);
    }
  }
  uVar4 = param_2[0x12];
  local_130 = uVar4;
  if ((param_2[2] >> (*(uint *)(param_1 + 0x3c) & 0x1f) & 1) == 0) {
    local_e8[0] = 0;
    local_d8 = (longlong *)0x0;
    FUN_14385deb2(param_1,param_2,local_e8);
    if (local_e8[0] != 0) {
      plVar11 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar11 = &local_c8;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    FUN_147f12e38(param_1 + 200,&local_130);
    goto LAB_14385bc4b;
  }
  local_c8 = 0;
  local_c0 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_118 = (undefined ***)0x0;
  local_108 = &PTR_LAB_14ac25dd0;
  local_128 = 0x4385e946;
  uStack_124 = 1;
  local_100 = local_e8;
  FUN_14385deb2(param_1,param_2,&local_128);
  if (CONCAT44(uStack_124,local_128) != 0) {
    pppuVar10 = local_118;
    if (local_118 == (undefined ***)0x0) {
      pppuVar10 = &local_108;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  if (param_2[1] == 0) {
LAB_14385bc9b:
    uVar12 = 0;
  }
  else {
    uVar5 = *param_2;
    uVar12 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((puVar13 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar13 + 2) != param_2[1] || ((*(uint *)(puVar13 + 1) & 0x10200000) != 0))))
      goto LAB_14385bc9b;
      uVar12 = *puVar13;
    }
  }
  local_128 = CONCAT31(local_128._1_3_,*(undefined1 *)(param_1 + 0x3c));
  uStack_124 = (undefined4)*(undefined8 *)(param_1 + 0x40);
  uStack_120 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  lVar7 = FUN_147efe5b2(uVar12);
  if (lVar7 == 0) {
LAB_14385baf9:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_145b5ff4c();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        != lVar8 + 0x30)) goto LAB_14385baf9;
  }
  pfVar9 = (float *)FUN_147f12c60(param_1 + 200,uVar4,&local_130);
  fVar1 = *(float *)(lVar7 + 100);
  fVar18 = *(float *)(lVar7 + 0x50) + fVar1;
  fVar19 = *(float *)(lVar7 + 0x54) + fVar1;
  fVar2 = *(float *)(lVar7 + 0x68);
  fVar16 = *(float *)(lVar7 + 0x58) * 0.017453292;
  if (3.1415927 <= fVar16) {
    fVar16 = 3.1415927;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar17 = cosf(fVar16);
  bVar3 = *(byte *)(lVar7 + 0x5c);
  bVar6 = bVar3 << 4;
  fVar16 = *(float *)(lVar7 + 0x60);
  *pfVar9 = fVar17;
  pfVar9[1] = fVar18 * fVar18;
  pfVar9[2] = (float)(~-(uint)(fVar16 == -1.0) & (uint)(fVar16 * fVar16) |
                     -(uint)(fVar16 == -1.0) & 0xbf800000);
  pfVar9[3] = fVar19 * fVar19;
  pfVar9[4] = fVar1;
  pfVar9[5] = fVar2 * fVar2;
  *(byte *)(pfVar9 + 6) =
       (byte)((bVar6 | bVar3 >> 4) * '\x02' & 0x40 |
             ((bVar6 & 0x10) << 2 | (bVar6 & 0x40) >> 2) * '\x02') >> 5;
  local_118 = (undefined ***)0x0;
  local_108 = &PTR_LAB_14ac25df0;
  local_128 = 0x4385e9da;
  uStack_124 = 1;
  local_100 = local_e8;
  FUN_147f052ba(param_1,param_2,pfVar9,&local_128);
  if (CONCAT44(uStack_124,local_128) != 0) {
    pppuVar10 = &local_108;
    if (local_118 != (undefined ***)0x0) {
      pppuVar10 = local_118;
    }
    (*(code *)(*pppuVar10)[2])(pppuVar10);
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(local_e8);
LAB_14385bc4b:
  if ((local_90 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14385bcaa FUN_14385bcaa body=168 status=ok
// SIG undefined FUN_14385bcaa(void)

void FUN_14385bcaa(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 local_28 [8];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    uVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x140) + uVar1) == *param_2) &&
         (*(int *)(*(longlong *)(param_1 + 0x140) + 4 + uVar1) == param_2[1])) {
        if ((int)(uVar1 >> 3) * -0x49249249 != -1) {
          local_38 = local_28;
          local_20 = 0;
          local_40 = param_6;
          local_48 = param_5;
          FUN_147f04b04();
        }
        break;
      }
      uVar1 = uVar1 + 0x38;
    } while ((longlong)*(int *)(param_1 + 0x148) * 0x38 - uVar1 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14385bd54 FUN_14385bd54 body=522 status=ok
// SIG undefined FUN_14385bd54(void)

void FUN_14385bd54(longlong param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 unaff_RBP;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 *local_60;
  longlong *local_58;
  undefined1 local_48 [4];
  undefined1 local_44;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  undefined8 uVar8;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x140);
    lVar2 = 0;
    do {
      if ((*(int *)(lVar3 + 0x34 + lVar2) == *param_2) &&
         (*(uint *)(lVar3 + 0x30 + lVar2) >> 1 == param_2[1])) {
        uVar6 = (lVar2 >> 3) * 0x6db6db6db6db6db7;
        iVar5 = (int)uVar6;
        if (iVar5 != -1) {
          if (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0xac)) goto LAB_14385be66;
          uVar1 = *(uint *)(lVar3 + 4 + (longlong)iVar5 * 0x38);
          lVar3 = param_1 + 0xb0;
          if (*(longlong *)(param_1 + 0xb8) != 0) {
            lVar3 = *(longlong *)(param_1 + 0xb8);
          }
          iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & uVar1) * 4);
          if (iVar5 == -1) goto LAB_14385be66;
          lVar3 = 0;
          goto LAB_14385be31;
        }
        break;
      }
      lVar2 = lVar2 + 0x38;
    } while ((longlong)*(int *)(param_1 + 0x148) * 0x38 - lVar2 != 0);
  }
  goto LAB_14385bdc8;
  while (iVar5 = *(int *)(lVar2 + 0x30), iVar5 != -1) {
LAB_14385be31:
    lVar2 = *(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 0x38;
    if (*(uint *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 0x38) == uVar1) {
      if (((uint *)(lVar2 + 8) == (uint *)0x0 || lVar2 == 0) || (*(int *)(lVar2 + 0xc) == 0))
      goto LAB_14385be66;
      uVar1 = *(uint *)(lVar2 + 8);
      lVar3 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != *(int *)(lVar2 + 0xc))) ||
           ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) {
LAB_14385be66:
          lVar3 = 0;
        }
        else {
          lVar3 = *plVar4;
        }
      }
      break;
    }
  }
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  uVar7 = (undefined4)uVar8;
  if (*(longlong *)(param_3 + 0x130) != 0 && 0 < *(int *)(param_3 + 0x138)) {
    lVar2 = FUN_14485cccc(*(longlong *)(param_3 + 0x130) + 0xb8);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else if (lVar2 != lVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x168);
        uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),lVar2 != 0);
        uVar7 = (undefined4)uVar8;
        if (lVar2 == lVar3) break;
      } while (lVar2 != 0);
    }
  }
  local_58 = &local_40;
  local_38 = 1;
  local_60 = local_48;
  local_44 = 0;
  local_68 = param_3 + 0xe8;
  local_40 = lVar3;
  FUN_147f04b04(param_1,uVar6 & 0xffffffff,uVar7,0x3f800000);
LAB_14385bdc8:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14385bf60 FUN_14385bf60 body=5874 status=ok
// SIG undefined FUN_14385bf60(void)

void FUN_14385bf60(longlong *param_1)

{
  undefined4 *puVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint *puVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  _struct_19 _Var17;
  _struct_19 *p_Var18;
  longlong *plVar19;
  ulonglong uVar20;
  _struct_19 _Var21;
  _struct_19 *p_Var22;
  longlong lVar23;
  ulonglong uVar24;
  uint *puVar25;
  uint *puVar26;
  longlong *plVar27;
  longlong *plVar28;
  int iVar29;
  longlong lVar30;
  uint *puVar31;
  undefined4 *puVar32;
  undefined7 uVar36;
  LARGE_INTEGER *pLVar33;
  undefined8 *puVar34;
  uint *puVar35;
  uint uVar37;
  longlong lVar38;
  longlong lVar39;
  uint *puVar40;
  uint *puVar41;
  DWORD DVar42;
  int iVar43;
  _struct_19 *p_Var44;
  uint *puVar45;
  uint *puVar46;
  byte bVar47;
  uint *puVar48;
  byte *pbVar49;
  byte *pbVar50;
  uint uVar51;
  bool bVar52;
  undefined4 uVar53;
  float fVar54;
  undefined1 auStack_568 [32];
  _struct_19 local_548;
  _struct_19 *local_540;
  _struct_19 local_538;
  LARGE_INTEGER *local_530;
  longlong *local_528;
  undefined4 local_520;
  int local_510;
  int local_50c;
  _struct_19 *local_508;
  int local_4fc;
  undefined4 local_4f8;
  uint local_4f4;
  longlong local_4f0;
  _struct_19 *local_4e8;
  _struct_19 local_4e0;
  longlong local_4d8;
  ulonglong local_4d0;
  longlong *local_4c8;
  longlong local_4c0;
  longlong *local_4b8;
  uint *local_4b0;
  LARGE_INTEGER *local_4a8;
  longlong *local_4a0;
  longlong *local_498;
  longlong *local_490;
  longlong local_488;
  LARGE_INTEGER local_480;
  LARGE_INTEGER local_478;
  byte *pbStack_470;
  longlong *local_468;
  undefined1 local_45c [4];
  undefined4 *local_458;
  undefined8 uStack_450;
  byte *local_448;
  undefined8 uStack_440;
  LARGE_INTEGER local_438;
  byte *pbStack_430;
  longlong *local_428;
  LARGE_INTEGER local_418;
  byte *pbStack_410;
  longlong *local_408;
  undefined8 local_400;
  longlong local_3f8;
  _struct_19 *local_3f0;
  undefined4 local_374;
  undefined1 local_360 [24];
  undefined4 local_348;
  _struct_19 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined2 local_107;
  undefined1 local_105;
  undefined2 local_104;
  undefined1 local_102;
  undefined2 local_101;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined2 local_f0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_568;
  lVar16 = FUN_1402ad3be(DAT_14cb0d2b0,*(undefined8 *)(param_1[6] + 0x20));
  lVar30 = DAT_14c872be0;
  if (lVar16 == 0) {
    uVar53 = 0x7f7fffff;
    goto LAB_14385bfd3;
  }
  if (*(char *)((longlong)param_1 + 0x11c) == '\x01') {
    lVar23 = param_1[0x24];
    lVar39 = param_1[0x25];
    uVar53 = 0;
    if ((longlong)(int)lVar39 != 0) {
      lVar38 = 0;
      do {
        *(float *)(lVar23 + 8 + lVar38) =
             (float)(lVar30 - (*(ulonglong *)(lVar23 + 0x30 + lVar38) >> 1)) +
             *(float *)(lVar23 + 0xc + lVar38);
        lVar38 = lVar38 + 0x38;
      } while ((longlong)(int)lVar39 * 0x38 - lVar38 != 0);
      uVar53 = (undefined4)param_1[0x25];
      lVar23 = param_1[0x24];
    }
    FUN_147f112b6(lVar23,uVar53);
    *(undefined4 *)(param_1 + 0x23) = 0;
    *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  }
  lVar23 = DAT_14c872be0;
  local_4e8 = (_struct_19 *)(param_1 + 0x26);
  _Var21 = *(_struct_19 *)(param_1 + 0x26);
  local_4c8 = param_1 + 0x27;
  lVar30 = param_1[0x27];
  local_510 = 0;
  if ((longlong)(int)lVar30 == 0) {
    iVar13 = 0;
  }
  else {
    lVar39 = 0;
    do {
      *(float *)((longlong)_Var21 + 8 + lVar39) =
           (float)(lVar23 - (*(ulonglong *)((longlong)_Var21 + 0x30 + lVar39) >> 1)) +
           *(float *)((longlong)_Var21 + 0xc + lVar39);
      lVar39 = lVar39 + 0x38;
    } while ((longlong)(int)lVar30 * 0x38 - lVar39 != 0);
    iVar13 = (int)*local_4c8;
    _Var21 = *local_4e8;
  }
  FUN_147f112b6(_Var21,iVar13);
  iVar13 = (int)((float)(int)param_1[0x29] * *(float *)(param_1 + 0x2f));
  if (0 < iVar13) {
    local_510 = iVar13;
  }
  pLVar33 = &local_418;
  QueryPerformanceCounter(pLVar33);
  dVar4 = (double)local_418.QuadPart * DAT_14c83f420;
  dVar2 = (double)param_1[0x2c];
  local_448 = (byte *)0x0;
  uStack_440 = 0;
  local_458 = (undefined4 *)0x0;
  uStack_450 = 0;
  FUN_14385e616();
  if ((int)uStack_450._4_4_ < 0x10) {
    FUN_14480809c(&local_458,0x10);
  }
  local_4b8 = param_1 + 0x24;
  iVar13 = (int)param_1[0x25];
  iVar29 = 0;
  iVar14 = (int)param_1[0x27] + iVar13;
  if (iVar14 != 0 && SCARRY4((int)param_1[0x27],iVar13) == iVar14 < 0) {
    lVar30 = param_1[6];
    local_488 = lVar30 + 0x70;
    local_490 = param_1 + 0x16;
    local_498 = param_1 + 0x20;
    local_4a8 = (LARGE_INTEGER *)(param_1 + 0x31);
    local_4a0 = param_1 + 0x33;
    local_50c = 0;
    iVar14 = 0;
    uVar51 = 0;
    iVar29 = 0;
    local_4f0 = lVar30;
    do {
      iVar14 = iVar14 + 1;
      if ((((iVar14 % (int)param_1[0x2b] == 0) &&
           (QueryPerformanceCounter(&local_418), lVar30 = local_4f0,
           dVar4 + 16777216.0 + dVar2 < (double)local_418.QuadPart * DAT_14c83f420 + 16777216.0)) ||
          (uVar20 = uStack_440, (int)param_1[0x2a] <= local_50c)) ||
         (*(int *)((longlong)param_1 + 0x154) <= local_510)) {
        iVar13 = (int)param_1[0x25];
        break;
      }
      if ((int)uVar51 < (int)*local_4c8) {
        p_Var22 = (_struct_19 *)((ulonglong)uVar51 * 0x38 + (longlong)*local_4e8);
        uVar15 = uVar51;
      }
      else {
        uVar15 = 0xffffffff;
        p_Var22 = (_struct_19 *)0x0;
      }
      uVar36 = (undefined7)((ulonglong)pLVar33 >> 8);
      local_4f8 = (undefined4)CONCAT71(uVar36,1);
      p_Var18 = p_Var22;
      if (iVar29 < (int)param_1[0x25]) {
        uVar24 = (longlong)((int)param_1[0x23] + iVar29) % (longlong)(int)param_1[0x25];
        iVar13 = (int)uVar24;
        if (iVar13 == -1) goto LAB_14385c37a;
        uVar24 = uVar24 & 0xffffffff;
        p_Var44 = (_struct_19 *)((longlong)iVar13 * 0x38 + *local_4b8);
        if (p_Var44 != (_struct_19 *)0x0) {
          fVar54 = (float)(DAT_14c872be0 - ((ulonglong)p_Var44[6] >> 1)) +
                   (float)p_Var44[1].HighPart;
          p_Var44[1].LowPart = (DWORD)fVar54;
          p_Var18 = p_Var44;
          if (p_Var22 == (_struct_19 *)0x0) {
            local_4f8 = 0;
          }
          else {
            local_4f8 = (undefined4)CONCAT71(uVar36,fVar54 < (float)p_Var22[1].LowPart);
            if (fVar54 < (float)p_Var22[1].LowPart) {
              p_Var18 = p_Var22;
            }
          }
        }
      }
      else {
LAB_14385c37a:
        uVar24 = 0xffffffff;
      }
      if (*(int *)(lVar30 + 0x40) != *(int *)(lVar30 + 0x6c)) {
        lVar23 = *(longlong *)(lVar30 + 0x78);
        if (*(longlong *)(lVar30 + 0x78) == 0) {
          lVar23 = local_488;
        }
        iVar13 = *(int *)(lVar23 + (ulonglong)(*(int *)(lVar30 + 0x80) - 1U & p_Var18->LowPart) * 4)
        ;
        if (iVar13 != -1) {
          do {
            lVar23 = *(longlong *)(lVar30 + 0x38) + (longlong)iVar13 * 0x60;
            if (*(uint *)(*(longlong *)(lVar30 + 0x38) + (longlong)iVar13 * 0x60) ==
                p_Var18->LowPart) goto LAB_14385c3d8;
            iVar13 = *(int *)(lVar23 + 0x58);
          } while (iVar13 != -1);
        }
      }
      lVar23 = 0;
LAB_14385c3d8:
      if ((int)param_1[0x10] != *(int *)((longlong)param_1 + 0xac)) {
        plVar28 = (longlong *)param_1[0x17];
        if ((longlong *)param_1[0x17] == (longlong *)0x0) {
          plVar28 = local_490;
        }
        iVar13 = *(int *)((longlong)plVar28 +
                         (ulonglong)((int)param_1[0x18] - 1U & p_Var18->HighPart) * 4);
        if (iVar13 != -1) {
          do {
            lVar39 = param_1[0xf] + (longlong)iVar13 * 0x38;
            if (*(uint *)(param_1[0xf] + (longlong)iVar13 * 0x38) == p_Var18->HighPart)
            goto LAB_14385c430;
            iVar13 = *(int *)(lVar39 + 0x30);
          } while (iVar13 != -1);
        }
      }
      lVar39 = 0;
LAB_14385c430:
      if ((*(DWORD *)(lVar39 + 0xc) == 0) || (uVar37 = *(uint *)(lVar39 + 8), (int)uVar37 < 0)) {
LAB_14385c7f0:
        _Var21.LowPart = 0;
        _Var21.HighPart = 0;
      }
      else {
        _Var21.LowPart = 0;
        _Var21.HighPart = 0;
        if ((int)uVar37 < DAT_14c9647dc) {
          p_Var22 = (_struct_19 *)
                    ((ulonglong)((uVar37 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar37 >> 0x10) * 8));
          if (((p_Var22 == (_struct_19 *)0x0) || (p_Var22[2].LowPart != *(DWORD *)(lVar39 + 0xc)))
             || ((p_Var22[1].LowPart & 0x10200000) != 0)) goto LAB_14385c7f0;
          _Var21 = *p_Var22;
        }
      }
      local_4d0 = (ulonglong)(byte)local_4f8;
      local_4fc = iVar14;
      if (*(int *)(lVar23 + 0xc) == 0) {
LAB_14385c4fd:
        if ((byte)local_4f8 != 0) {
          uVar24 = (ulonglong)uVar15;
        }
        pLVar33 = (LARGE_INTEGER *)(longlong)(int)uStack_440;
        uVar15 = (int)uStack_440 + 1;
        uStack_440 = CONCAT44(uStack_440._4_4_,uVar15);
        if (uStack_440._4_4_ < uVar15) {
          FUN_14385e6a8(&local_448,uVar20 & 0xffffffff);
          lVar30 = local_4f0;
        }
        uVar10 = uStack_450;
        uVar20 = local_4d0;
        iVar14 = local_4fc;
        *(ulonglong *)(local_448 + (longlong)pLVar33 * 8) = local_4d0 + (uVar24 << 0x20);
        if (_Var21 == (_struct_19)0x0) {
          pLVar33 = (LARGE_INTEGER *)(longlong)(int)uStack_450;
          if (pLVar33 != (LARGE_INTEGER *)0x0) {
            uVar24 = 0;
            do {
              if (*(int *)((longlong)local_458 + uVar24) == p_Var18->HighPart) {
                if ((~uVar24 & 0x3fffffffc) != 0) goto LAB_14385c5ef;
                break;
              }
              uVar24 = uVar24 + 4;
            } while ((longlong)pLVar33 * 4 - uVar24 != 0);
          }
          uVar15 = (int)uStack_450 + 1;
          uStack_450 = CONCAT44(uStack_450._4_4_,uVar15);
          if (uStack_450._4_4_ < uVar15) {
            FUN_1447808da(&local_458,uVar10 & 0xffffffff);
            lVar30 = local_4f0;
          }
          local_458[(longlong)pLVar33] = p_Var18->HighPart;
        }
      }
      else {
        local_4b0 = (uint *)(lVar23 + 8);
        uVar37 = *local_4b0;
        if ((((((int)uVar37 < 0) || (DAT_14c9647dc <= (int)uVar37)) ||
             (plVar28 = (longlong *)
                        ((ulonglong)((uVar37 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar37 >> 0x10) * 8)),
             plVar28 == (longlong *)0x0)) ||
            (((int)plVar28[2] != *(int *)(lVar23 + 0xc) ||
             ((*(uint *)(plVar28 + 1) & 0x10200000) != 0)))) ||
           ((_Var21 == (_struct_19)0x0 || (*plVar28 == 0)))) goto LAB_14385c4fd;
        if ((int)param_1[0x1a] != *(int *)((longlong)param_1 + 0xfc)) {
          plVar28 = (longlong *)param_1[0x21];
          if ((longlong *)param_1[0x21] == (longlong *)0x0) {
            plVar28 = local_498;
          }
          uVar37 = *(uint *)((longlong)plVar28 +
                            (ulonglong)((int)param_1[0x22] - 1U & p_Var18->LowPart) * 4);
          if (uVar37 != 0xffffffff) {
            do {
              puVar40 = (uint *)(param_1[0x19] + (longlong)(int)uVar37 * 0x28);
              if (*puVar40 == p_Var18->LowPart) goto LAB_14385c6ce;
              uVar37 = puVar40[8];
            } while (uVar37 != 0xffffffff);
          }
        }
        puVar40 = (uint *)0x0;
LAB_14385c6ce:
        local_4e0 = (_struct_19)(puVar40 + 1);
        local_508 = p_Var18;
        local_4f4 = uVar15;
        local_4d8 = lVar16;
        local_4c0 = FUN_147eff7e6();
        local_45c = (undefined1  [4])0x3f800000;
        local_478.QuadPart = 0;
        pbStack_470 = (byte *)0x0;
        local_468 = (longlong *)0x0;
        local_480.s.HighPart = 0;
        local_480.s.LowPart = 0;
        local_540 = (_struct_19 *)local_45c;
        local_548 = _Var21;
        cVar12 = (**(code **)(*param_1 + 0x2e8))(param_1,local_4e0,local_508,local_4b0);
        if (cVar12 == '\0') {
          _Var17 = *(_struct_19 *)((longlong)_Var21 + 0x1c8);
          if (_Var17 == (_struct_19)0x0) {
            local_428 = DAT_14c8464f0;
            local_438 = DAT_14c8464e0;
            pbStack_430 = DAT_14c8464e8;
          }
          else {
            local_438 = *(LARGE_INTEGER *)((longlong)_Var17 + 0x260);
            pbStack_430 = *(byte **)((longlong)_Var17 + 0x268);
            local_428 = *(longlong **)((longlong)_Var17 + 0x270);
          }
          local_4e0 = local_508[6];
          puVar34 = (undefined8 *)(lVar23 + 0x18);
          local_538 = (_struct_19)&local_438;
          local_540 = (_struct_19 *)
                      CONCAT44(local_540._4_4_,puVar40[(ulonglong)(local_4e0.LowPart & 1) * 2 + 2]);
          local_548.LowPart = puVar40[6];
          cVar12 = FUN_147ea541b(puVar34,lVar23 + 0x30,puVar40[1],puVar40[5]);
          if (cVar12 == '\0') {
            local_50c = local_50c + local_480.s.HighPart;
            local_510 = local_510 + local_480.s.LowPart;
            iVar13 = 1;
            p_Var22 = local_508;
            goto LAB_14385c791;
          }
          if (((*(_struct_19 *)(lVar39 + 0x18) == (_struct_19)0x0) || (*(int *)(lVar39 + 0x14) == 0)
              ) || (((uVar15 = *(uint *)(lVar39 + 0x10), (int)uVar15 < 0 ||
                     (((DAT_14c9647dc <= (int)uVar15 ||
                       (lVar30 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8),
                       lVar30 == 0)) || (*(int *)(lVar30 + 0x10) != *(int *)(lVar39 + 0x14))))) ||
                    ((*(uint *)(lVar30 + 8) & 0x10200000) != 0)))) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb20b88) && (FUN_144b3d300(), DAT_14cb20b88 == -1)) {
              local_418.QuadPart = 0x14ac25240;
              pbStack_410 = (byte *)CONCAT35(pbStack_410._5_3_,0xd);
              DAT_14cb20b80.LowPart = FUN_14001a6c0(&local_418,1);
              DAT_14cb20b80.HighPart = 0;
              _Init_thread_footer();
            }
            local_f4 = 0;
            uStack_110 = 0;
            local_f0 = 0x101;
            local_c8 = 0;
            local_c0 = 0x800000000;
            local_a8 = 0;
            local_a0 = 0x400000000;
            local_108 = 1;
            local_fc = 0;
            local_118 = DAT_14cb20b80;
            local_107 = 1;
            local_105 = 0;
            local_f8 = 0;
            local_104 = 0;
            local_102 = 0;
            if (local_4c0 != 0) {
              local_b8 = *(undefined4 *)(local_4c0 + 0xc);
              local_a0 = 0x400000001;
              uStack_110 = *(ulonglong *)(local_4c0 + 0x18);
            }
            local_101 = 0x101;
            if (*(char *)((longlong)param_1 + 0x17c) == '\x01') {
              local_528 = local_4a0;
              local_530 = (LARGE_INTEGER *)&DAT_14cad0f10;
              local_538 = (_struct_19)&local_118;
              local_540 = (_struct_19 *)CONCAT44(local_540._4_4_,(int)param_1[0x30]);
              local_548 = (_struct_19)&local_438;
              local_520 = 0;
              FUN_1447de878(local_4d8,&local_418,1,puVar34);
              if ((byte *)local_418.QuadPart == (byte *)0x0) {
                iVar13 = 1;
              }
              else {
                local_480.s.LowPart = local_480.s.LowPart + 1;
                local_508[6].LowPart =
                     local_508[6].LowPart & 1 |
                     (uint)((ulonglong)local_418.QuadPart >> 0x1f) & 0xfffffffe;
                local_508[6].HighPart = local_418.s.LowPart;
                iVar13 = 2;
              }
            }
            else {
              memset(&local_418,0,0x100);
              local_348 = 0xffffffff;
              local_418.s.HighPart = 0x3f800000;
              local_374 = 0xffffffff;
              local_538 = (_struct_19)&DAT_14cad0f10;
              local_540 = &local_118;
              local_548.LowPart = (int)param_1[0x30];
              cVar12 = FUN_1400b50cc(local_4d8,&local_418,puVar34,&local_438);
              local_480.s.HighPart = local_480.s.HighPart + 1;
              if (cVar12 != '\0') {
                _Var17 = (_struct_19)FUN_14485cccc(local_360);
                iVar13 = 1;
                if (_Var17 == (_struct_19)0x0) goto LAB_14385cc59;
                if (_Var17 != _Var21) {
                  do {
                    _Var17 = *(_struct_19 *)((longlong)_Var17 + 0x168);
                    if (_Var17 == _Var21) break;
                  } while (_Var17 != (_struct_19)0x0);
                  if (_Var17 == (_struct_19)0x0) goto LAB_14385cc59;
                }
              }
              local_468 = local_428;
              local_478 = local_438;
              pbStack_470 = pbStack_430;
              iVar13 = 0;
            }
LAB_14385cc59:
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            p_Var22 = local_508;
            if (local_c8 != 0) {
              FUN_1400020a8();
              p_Var22 = local_508;
            }
          }
          else {
            local_118 = (_struct_19)
                        (CONCAT71(local_118._1_7_,(char)local_4e0.LowPart) & 0xffffffffffffff01);
            local_4e0 = *(_struct_19 *)(lVar39 + 0x18);
            FUN_145eea1a4(&local_418);
            p_Var22 = local_508;
            local_418.s = *local_508;
            local_400 = *(undefined8 *)(lVar23 + 0x28);
            pbStack_410 = (byte *)*puVar34;
            local_408 = *(longlong **)(lVar23 + 0x20);
            local_3f8 = local_4c0;
            local_3f0 = &local_118;
            local_538 = (_struct_19)(local_508 + 5);
            local_530 = local_4a8;
            local_540 = (_struct_19 *)local_45c;
            local_548 = (_struct_19)&local_480;
            iVar13 = (**(code **)(*(longlong *)local_4e0 + 0x18))
                               (local_4e0,&local_418,&local_478,&local_480.s.HighPart);
            if (iVar13 == 2) {
              p_Var22[6].LowPart = p_Var22[6].LowPart & 1;
              p_Var22[6].HighPart = 0;
            }
          }
          uVar20 = uStack_440;
          local_50c = local_50c + local_480.s.HighPart;
          local_510 = local_510 + local_480.s.LowPart;
          if (iVar13 != 2) goto LAB_14385c791;
          if ((byte)local_4f8 != '\0') {
            uVar24 = (ulonglong)local_4f4;
          }
          pLVar33 = (LARGE_INTEGER *)(longlong)(int)uStack_440;
          uVar15 = (int)uStack_440 + 1;
          uStack_440 = CONCAT44(uStack_440._4_4_,uVar15);
          if (uStack_440._4_4_ < uVar15) {
            FUN_14385e6a8(&local_448,uVar20 & 0xffffffff);
          }
          *(ulonglong *)(local_448 + (longlong)pLVar33 * 8) = local_4d0 + (uVar24 << 0x20) + 0x200;
          uVar20 = local_4d0;
          lVar30 = local_4f0;
          lVar16 = local_4d8;
          iVar14 = local_4fc;
        }
        else {
          local_468 = DAT_14cb203e0;
          local_50c = local_50c + local_480.s.HighPart;
          local_478 = DAT_14cb203d0;
          pbStack_470 = DAT_14cb203d8;
          local_510 = local_510 + local_480.s.LowPart;
          iVar13 = 0;
          p_Var22 = local_508;
LAB_14385c791:
          puVar26 = local_4b0;
          _Var17 = *(_struct_19 *)((longlong)_Var21 + 0x1c8);
          if (_Var17 == (_struct_19)0x0) {
            local_408 = DAT_14c8464f0;
            local_418 = DAT_14c8464e0;
            pbStack_410 = DAT_14c8464e8;
          }
          else {
            local_418 = *(LARGE_INTEGER *)((longlong)_Var17 + 0x260);
            pbStack_410 = *(byte **)((longlong)_Var17 + 0x268);
            local_408 = *(longlong **)((longlong)_Var17 + 0x270);
          }
          _Var17 = p_Var22[6];
          pLVar33 = &local_418;
          local_540 = (_struct_19 *)CONCAT44(local_540._4_4_,local_45c);
          local_548 = (_struct_19)&local_478;
          local_538 = _Var21;
          local_530 = pLVar33;
          FUN_147f04808(param_1,p_Var22,local_4b0,iVar13 == 0);
          fVar54 = (float)FUN_147f046c4(param_1,puVar26,pLVar33,
                                        puVar40[(ulonglong)(_Var17.LowPart & 1) * 2 + 2]);
          uVar20 = uStack_440;
          lVar16 = local_4d8;
          iVar14 = local_4fc;
          local_508[1].HighPart = (LONG)fVar54;
          if (fVar54 <= 0.0 == (bool)(char)local_4f8) {
            if ((char)local_4f8 != '\0') {
              uVar24 = (ulonglong)local_4f4;
            }
            pLVar33 = (LARGE_INTEGER *)(longlong)(int)uStack_440;
            uVar15 = (int)uStack_440 + 1;
            uStack_440 = CONCAT44(uStack_440._4_4_,uVar15);
            if (uStack_440._4_4_ < uVar15) {
              FUN_14385e6a8(&local_448,uVar20 & 0xffffffff);
            }
            *(ulonglong *)(local_448 + (longlong)pLVar33 * 8) = local_4d0 + (uVar24 << 0x20) + 0x100
            ;
          }
          local_508[6] = (_struct_19)((ulonglong)(local_508[6].LowPart & 1) + DAT_14c872be0 * 2);
          uVar20 = local_4d0;
          lVar30 = local_4f0;
        }
      }
LAB_14385c5ef:
      iVar29 = iVar29 + (uint)(byte)((byte)uVar20 ^ 1);
      uVar51 = uVar51 + (int)uVar20;
      iVar13 = (int)param_1[0x25];
    } while (iVar14 < (int)param_1[0x27] + iVar13);
  }
  pbVar50 = local_448;
  iVar14 = 0;
  if (0 < iVar13) {
    iVar14 = (iVar29 + (int)param_1[0x23]) % iVar13;
  }
  *(int *)(param_1 + 0x23) = iVar14;
  iVar13 = (int)uStack_440;
  lVar30 = (longlong)(int)uStack_440;
  if (0 < lVar30) {
    if ((int)uStack_440 == 1) {
      local_118.LowPart = 0;
      local_118.HighPart = 0;
      uStack_110 = 0;
      pbVar50 = local_448 + 8;
LAB_14385d31a:
      uStack_110 = 0;
      local_118.LowPart = 0;
      local_118.HighPart = 0;
      p_Var22 = (_struct_19 *)(param_1 + 0x28);
      plVar28 = param_1 + 0x23;
      plVar27 = local_4c8;
      pbVar49 = local_448;
      do {
        uVar20 = uStack_110;
        p_Var18 = local_4e8;
        if (pbVar49[1] == 2) {
          puVar32 = (undefined4 *)
                    ((longlong)*(int *)(pbVar49 + 4) * 0x38 +
                    param_1[(ulonglong)*pbVar49 * 2 + 0x24]);
          iVar13 = (int)param_1[0x29];
          *(uint *)(param_1 + 0x29) = iVar13 + 1U;
          p_Var18 = p_Var22;
          if (*(uint *)((longlong)param_1 + 0x14c) < iVar13 + 1U) {
            FUN_147f11a2a(p_Var22,iVar13);
          }
LAB_14385d3f1:
          _Var21 = *p_Var18;
          lVar30 = (longlong)iVar13 * 0x38;
          *(undefined4 *)((longlong)_Var21 + lVar30) = *puVar32;
          uVar53 = puVar32[2];
          uVar5 = puVar32[3];
          uVar6 = puVar32[4];
          uVar3 = *(undefined8 *)(puVar32 + 5);
          uVar7 = *(undefined8 *)(puVar32 + 7);
          uVar8 = *(undefined8 *)(puVar32 + 9);
          uVar9 = *(undefined8 *)(puVar32 + 0xb);
          puVar1 = (undefined4 *)((longlong)_Var21 + 4 + lVar30);
          *puVar1 = puVar32[1];
          puVar1[1] = uVar53;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          puVar34 = (undefined8 *)((longlong)_Var21 + 0x14 + lVar30);
          *puVar34 = uVar3;
          puVar34[1] = uVar7;
          puVar34 = (undefined8 *)((longlong)_Var21 + 0x24 + lVar30);
          *puVar34 = uVar8;
          puVar34[1] = uVar9;
          *(undefined4 *)((longlong)_Var21 + 0x34 + lVar30) = puVar32[0xd];
          plVar27 = local_4c8;
        }
        else if (pbVar49[1] == 1) {
          if (*pbVar49 == 1) {
            puVar32 = (undefined4 *)((longlong)*(int *)(pbVar49 + 4) * 0x38 + (longlong)*local_4e8);
            iVar13 = (int)uStack_110;
            uVar51 = (int)uStack_110 + 1;
            uStack_110 = CONCAT44(uStack_110._4_4_,uVar51);
            if (uStack_110._4_4_ < uVar51) {
              FUN_147f11a2a(&local_118,uVar20 & 0xffffffff);
            }
            p_Var18 = &local_118;
          }
          else {
            puVar32 = (undefined4 *)((longlong)*(int *)(pbVar49 + 4) * 0x38 + param_1[0x24]);
            iVar13 = (int)param_1[0x27];
            *(uint *)(param_1 + 0x27) = iVar13 + 1U;
            if (*(uint *)((longlong)param_1 + 0x13c) < iVar13 + 1U) {
              FUN_147f11a2a(local_4e8,iVar13);
            }
          }
          goto LAB_14385d3f1;
        }
        uVar51 = *(uint *)(pbVar49 + 4);
        if (*pbVar49 == 1) {
          iVar13 = (int)*plVar27;
          iVar14 = ~uVar51 + iVar13;
          plVar19 = plVar27;
          if (iVar14 != 0) {
            if (0 < iVar14) {
              iVar14 = 1;
            }
            memmove((void *)((longlong)(int)uVar51 * 0x38 + (longlong)*local_4e8),
                    (void *)((longlong)(iVar13 - iVar14) * 0x38 + (longlong)*local_4e8),
                    (longlong)iVar14 * 0x38);
            iVar13 = (int)*plVar27;
          }
LAB_14385d4be:
          *(int *)plVar19 = iVar13 + -1;
        }
        else {
          iVar13 = (int)param_1[0x25];
          iVar14 = ~uVar51 + iVar13;
          if (iVar14 != 0) {
            lVar30 = (longlong)(int)uVar51 * 0x38;
            memmove((void *)(param_1[0x24] + lVar30),(void *)(param_1[0x24] + lVar30 + 0x38),
                    (longlong)iVar14 * 0x38);
            iVar13 = (int)param_1[0x25];
          }
          *(int *)(param_1 + 0x25) = iVar13 + -1;
          iVar13 = (int)param_1[0x23];
          plVar19 = plVar28;
          if (*(int *)(pbVar49 + 4) < iVar13) goto LAB_14385d4be;
        }
        pbVar49 = pbVar49 + 8;
      } while (pbVar49 != pbVar50);
      if (0 < (int)uStack_110) {
        FUN_147f04a84(local_4b8,local_118,uStack_110 & 0xffffffff,(int)*plVar28);
        *(int *)plVar28 = (int)*plVar28 + (int)uStack_110;
      }
    }
    else {
      memset(&local_408,0,0x2f0);
      local_418.QuadPart = (LONGLONG)pbVar50;
      pbStack_410 = pbVar50 + lVar30 * 8 + -8;
      fVar54 = logf((float)iVar13);
      local_408 = (longlong *)CONCAT44(local_408._4_4_,(int)(longlong)(fVar54 + fVar54));
      pLVar33 = &local_418;
      do {
        puVar26 = (uint *)pLVar33->QuadPart;
        puVar35 = (uint *)pLVar33[1].QuadPart;
        DVar42 = pLVar33[2].s.LowPart;
        iVar13 = (int)((ulonglong)((longlong)puVar35 - (longlong)puVar26) >> 3);
        uVar51 = iVar13 + 1;
        puVar31 = puVar26;
        puVar40 = puVar35;
        if (DVar42 != 0) {
LAB_14385cf8a:
          if (8 < (int)uVar51) {
            uVar3 = *(undefined8 *)(puVar26 + (ulonglong)(uVar51 >> 1) * 2);
            *(undefined8 *)(puVar26 + (ulonglong)(uVar51 >> 1) * 2) = *(undefined8 *)puVar26;
            *(undefined8 *)puVar26 = uVar3;
            puVar45 = puVar40 + 2;
            puVar25 = puVar26;
            do {
              puVar11 = puVar25 + 2;
              puVar41 = puVar25 + 2;
              do {
                puVar25 = puVar41;
                puVar46 = puVar11;
                if (puVar40 < puVar25) break;
                bVar47 = (int)puVar25[1] < (int)puVar26[1];
                if ((byte)*puVar26 != (byte)*puVar25) {
                  bVar47 = (byte)*puVar26;
                }
                puVar11 = puVar46 + 2;
                puVar41 = puVar25 + 2;
              } while (bVar47 != 1);
              puVar11 = puVar45 + -4;
              do {
                puVar41 = puVar45;
                puVar48 = puVar11;
                puVar45 = puVar41 + -2;
                if (puVar45 <= puVar26) break;
                bVar47 = (int)puVar26[1] < (int)puVar41[-1];
                if ((byte)*puVar45 != (byte)*puVar26) {
                  bVar47 = (byte)*puVar45;
                }
                puVar11 = puVar48 + -2;
              } while (bVar47 != 1);
              if (puVar45 < puVar25) goto LAB_14385d03a;
              uVar3 = *(undefined8 *)puVar25;
              *(undefined8 *)puVar25 = *(undefined8 *)puVar45;
              *(undefined8 *)puVar45 = uVar3;
            } while( true );
          }
          if (puVar26 < puVar40) {
            do {
              puVar35 = puVar26;
              if (puVar26 + 2 <= puVar40) {
                uVar51 = (uint)(byte)*puVar26;
                puVar31 = puVar26 + 2;
                do {
                  uVar15 = (uint)((int)puVar31[1] < (int)puVar35[1]);
                  if ((char)uVar51 != (char)*puVar31) {
                    uVar15 = uVar51 & 0xff;
                  }
                  uVar51 = uVar51 & 0xff;
                  if ((uVar15 & 1) != 0) {
                    puVar35 = puVar31;
                    uVar51 = *puVar31;
                  }
                  puVar31 = puVar31 + 2;
                } while (puVar31 <= puVar40);
              }
              uVar3 = *(undefined8 *)puVar35;
              *(undefined8 *)puVar35 = *(undefined8 *)puVar40;
              *(undefined8 *)puVar40 = uVar3;
              puVar40 = puVar40 + -2;
            } while (puVar26 < puVar40);
          }
          goto LAB_14385d2d5;
        }
LAB_14385d0cd:
        if (uVar51 != 0) {
          iVar13 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
          iVar14 = iVar13;
joined_r0x00014385d0f0:
          do {
            iVar29 = iVar13 * 2 + 1;
            if (iVar29 < (int)uVar51) {
              iVar43 = iVar13 * 2 + 2;
              if (iVar43 < (int)uVar51) {
                bVar47 = (int)puVar26[(longlong)iVar29 * 2 + 1] <
                         (int)puVar26[(longlong)iVar43 * 2 + 1];
                if ((byte)puVar26[(longlong)iVar43 * 2] != (byte)puVar26[(longlong)iVar29 * 2]) {
                  bVar47 = (byte)puVar26[(longlong)iVar43 * 2];
                }
                if (bVar47 == 0) {
                  iVar29 = iVar43;
                }
              }
              lVar16 = (longlong)iVar13;
              lVar30 = (longlong)iVar29;
              bVar47 = (byte)puVar26[lVar16 * 2];
              if ((byte)puVar26[lVar16 * 2] == (byte)puVar26[lVar30 * 2]) {
                bVar47 = (int)puVar26[lVar30 * 2 + 1] < (int)puVar26[lVar16 * 2 + 1];
              }
              if (bVar47 == 1) {
                uVar3 = *(undefined8 *)(puVar26 + lVar16 * 2);
                *(undefined8 *)(puVar26 + lVar16 * 2) = *(undefined8 *)(puVar26 + lVar30 * 2);
                *(undefined8 *)(puVar26 + lVar30 * 2) = uVar3;
                iVar13 = iVar29;
                goto joined_r0x00014385d0f0;
              }
            }
            bVar52 = iVar14 != 0;
            iVar13 = iVar14 + -1;
            iVar14 = iVar13;
          } while (bVar52);
          if (1 < (int)uVar51) {
            uVar20 = (ulonglong)uVar51;
            uVar3 = *(undefined8 *)puVar26;
            *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + uVar20 * 2 + -2);
            *(undefined8 *)(puVar26 + uVar20 * 2 + -2) = uVar3;
            if (uVar51 != 2) {
              do {
                uVar20 = uVar20 - 1;
                iVar13 = 0;
                iVar29 = 1;
                iVar14 = 0;
                do {
                  lVar30 = (longlong)(iVar13 + 2);
                  iVar43 = iVar29;
                  if (lVar30 < (longlong)uVar20) {
                    bVar47 = (int)puVar26[(longlong)iVar29 * 2 + 1] < (int)puVar26[lVar30 * 2 + 1];
                    if ((byte)puVar26[lVar30 * 2] != (byte)puVar26[(longlong)iVar29 * 2]) {
                      bVar47 = (byte)puVar26[lVar30 * 2];
                    }
                    if (bVar47 == 0) {
                      iVar43 = iVar13 + 2;
                    }
                  }
                  lVar30 = (longlong)iVar14;
                  lVar16 = (longlong)iVar43;
                  bVar47 = (byte)puVar26[lVar30 * 2];
                  if ((byte)puVar26[lVar30 * 2] == (byte)puVar26[lVar16 * 2]) {
                    bVar47 = (int)puVar26[lVar16 * 2 + 1] < (int)puVar26[lVar30 * 2 + 1];
                  }
                  if (bVar47 != 1) break;
                  uVar3 = *(undefined8 *)(puVar26 + lVar30 * 2);
                  *(undefined8 *)(puVar26 + lVar30 * 2) = *(undefined8 *)(puVar26 + lVar16 * 2);
                  *(undefined8 *)(puVar26 + lVar16 * 2) = uVar3;
                  iVar13 = iVar43 * 2;
                  iVar29 = iVar43 * 2 + 1;
                  iVar14 = iVar43;
                } while ((longlong)iVar29 < (longlong)uVar20);
                uVar3 = *(undefined8 *)puVar26;
                *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + uVar20 * 2 + -2);
                *(undefined8 *)(puVar26 + uVar20 * 2 + -2) = uVar3;
              } while (2 < uVar20);
            }
          }
        }
LAB_14385d2d5:
        pLVar33 = pLVar33 + -3;
      } while (&local_418 <= pLVar33);
      local_118.LowPart = 0;
      local_118.HighPart = 0;
      uStack_110 = 0;
      if ((longlong)(int)uStack_440 != 0) {
        pbVar50 = local_448 + (longlong)(int)uStack_440 * 8;
        goto LAB_14385d31a;
      }
    }
    if (0 < (longlong)(int)uStack_450) {
      plVar28 = param_1 + 0xf;
      lVar30 = (longlong)(int)uStack_450 << 2;
      puVar32 = local_458;
      do {
        local_418.QuadPart = 0;
        local_408 = (longlong *)0x0;
        FUN_14385d654(param_1,puVar32,&local_418);
        if ((byte *)local_418.QuadPart != (byte *)0x0) {
          plVar27 = local_408;
          if (local_408 == (longlong *)0x0) {
            plVar27 = &local_3f8;
          }
          (**(code **)(*plVar27 + 0x10))();
        }
        FUN_147f11af6(plVar28,*puVar32);
        puVar32 = puVar32 + 1;
        lVar30 = lVar30 + -4;
      } while (lVar30 != 0);
      cVar12 = FUN_147f11c14(plVar28);
      if (cVar12 != '\0') {
        uVar51 = (int)param_1[0x10] - *(int *)((longlong)param_1 + 0xac);
        iVar13 = 1;
        if (3 < uVar51) {
          uVar20 = (ulonglong)(uVar51 & 0xfffffffe) + 0xf;
          lVar30 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar30 & 0x1f);
        }
        *(int *)(param_1 + 0x18) = iVar13;
        FUN_147f11d84(plVar28);
      }
    }
    if (local_118 != (_struct_19)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_458 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_448 != (byte *)0x0) {
    FUN_1400020a8();
  }
  uVar53 = 0;
LAB_14385bfd3:
  if ((local_90 ^ (ulonglong)auStack_568) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar53);
LAB_14385d03a:
  uVar3 = *(undefined8 *)puVar26;
  *(undefined8 *)puVar26 = *(undefined8 *)puVar45;
  *(undefined8 *)puVar45 = uVar3;
  DVar42 = DVar42 - 1;
  puVar41 = puVar41 + -4;
  if ((longlong)puVar48 - (longlong)puVar31 < (longlong)puVar35 - (longlong)puVar46) {
    if (puVar25 < puVar40) {
      pLVar33->QuadPart = (LONGLONG)puVar25;
      pLVar33[1].QuadPart = (LONGLONG)puVar40;
      pLVar33[2].s.LowPart = DVar42;
      pLVar33 = pLVar33 + 3;
    }
    puVar46 = puVar26;
    puVar35 = puVar48;
    if (puVar45 <= puVar26 + 2) goto LAB_14385d2d5;
  }
  else {
    if (puVar26 + 2 < puVar45) {
      pLVar33->QuadPart = (LONGLONG)puVar26;
      pLVar33[1].QuadPart = (LONGLONG)puVar41;
      pLVar33[2].s.LowPart = DVar42;
      pLVar33 = pLVar33 + 3;
    }
    puVar26 = puVar25;
    puVar41 = puVar40;
    puVar35 = puVar40;
    if (puVar40 <= puVar25) goto LAB_14385d2d5;
  }
  iVar13 = (int)((ulonglong)((longlong)puVar35 - (longlong)puVar46) >> 3);
  uVar51 = iVar13 + 1;
  puVar31 = puVar46;
  puVar40 = puVar41;
  if (DVar42 == 0) goto LAB_14385d0cd;
  goto LAB_14385cf8a;
}



// FUNCTION 14385d654 FUN_14385d654 body=126 status=ok
// SIG undefined FUN_14385d654(void)

void FUN_14385d654(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  FUN_14385e01a(param_1 + 0x130,&local_28);
  cVar1 = FUN_14385e01a(param_1 + 0x120,&local_28);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 1;
  }
  FUN_14385e01a(param_1 + 0x140,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385d6d4 FUN_14385d6d4 body=1375 status=ok
// SIG undefined FUN_14385d6d4(void)

void FUN_14385d6d4(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStack_f8 [32];
  uint *local_d8;
  undefined8 *local_d0;
  uint *local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  uint *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  uint local_6c [4];
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  uVar3 = DAT_14cb1f000;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 0x78);
  uVar23 = *(uint *)(param_2 + 0xc);
  local_90 = param_3;
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar19 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar19 = *(longlong *)(param_1 + 0xb8);
    }
    iVar12 = *(int *)(lVar19 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & uVar23) * 4);
    if (iVar12 != -1) {
      do {
        lVar19 = *plVar1 + (longlong)iVar12 * 0x38;
        if (*(uint *)(*plVar1 + (longlong)iVar12 * 0x38) == uVar23) {
          if (lVar19 != 0) {
            puVar21 = (uint *)(lVar19 + 8);
            if (*(int *)(lVar19 + 0xc) == 0) {
LAB_14385dc09:
              lVar5 = 0;
            }
            else {
              uVar8 = *puVar21;
              lVar5 = 0;
              if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
                plVar14 = (longlong *)
                          ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                if ((plVar14 == (longlong *)0x0) ||
                   (((int)plVar14[2] != *(int *)(lVar19 + 0xc) ||
                    ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_14385dc09;
                lVar5 = *plVar14;
              }
            }
            if (lVar5 == param_2) goto LAB_14385d8d5;
          }
          break;
        }
        iVar12 = *(int *)(lVar19 + 0x30);
      } while (iVar12 != -1);
    }
  }
  if (param_2 == 0) {
    local_88._0_4_ = 0;
    iVar12 = 0;
    uVar23 = (uint)local_88;
  }
  else {
    local_88 = (ulonglong)uVar23;
    if ((int)uVar23 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    iVar12 = *(int *)(lVar19 + 0x10);
    if (*(int *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar24) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar12 = *(int *)(lVar19 + 0x10);
      bVar24 = iVar12 == 0;
      if (bVar24) {
        *(int *)(lVar19 + 0x10) = iVar7;
        iVar12 = 0;
      }
      UNLOCK();
      uVar23 = (uint)local_88;
      if (bVar24) {
        iVar12 = iVar7;
      }
    }
  }
  local_88._0_4_ = uVar23;
  local_58 = local_6c;
  local_88 = CONCAT44(iVar12,(uint)local_88);
  uStack_80 = 0;
  uStack_78 = 0;
  local_70 = uVar3;
  local_6c[1] = 0;
  local_6c[2] = 0;
  local_6c[0] = -(uint)(param_2 == 0) | *(uint *)(param_2 + 0xc);
  uStack_50 = &local_88;
  FUN_147f11f28(plVar1,&local_5c);
  lVar19 = *plVar1 + (longlong)local_5c * 0x38;
  puVar21 = (uint *)(lVar19 + 8);
  lVar5 = FUN_147f05152(param_2);
  if (lVar5 == 0) {
    if (param_2 == 0) {
      lVar5 = 0;
    }
    else {
      uVar6 = FUN_145b64782();
      lVar5 = FUN_144718840(param_2,uVar6);
    }
  }
  FUN_147f121d0(&local_58,lVar5);
  *(undefined4 *)(lVar19 + 0x10) = (undefined4)local_58;
  *(undefined4 *)(lVar19 + 0x14) = local_58._4_4_;
  *(undefined4 *)(lVar19 + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)(lVar19 + 0x1c) = uStack_50._4_4_;
LAB_14385d8d5:
  FUN_147ea553e(&local_88,param_2);
  *(undefined1 *)(puVar21 + 6) = (undefined1)local_88;
  lVar19 = *(longlong *)(param_1 + 0x30);
  lVar5 = *(longlong *)(param_2 + 0x1c8);
  if (lVar5 == 0) {
    uStack_78 = DAT_14c8464f0;
    local_88 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_80 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_88 = *(undefined8 *)(lVar5 + 0x260);
    uStack_80 = *(undefined8 *)(lVar5 + 0x268);
    uStack_78 = *(undefined8 *)(lVar5 + 0x270);
  }
  puVar18 = (uint *)(lVar19 + 0x48);
  iVar12 = *(int *)(lVar19 + 0x60);
  local_a8 = param_2;
  if (iVar12 == 0) {
    uVar16 = 1;
    uVar20 = 0;
    iVar22 = 0;
    iVar7 = 0;
  }
  else {
    puVar11 = *(uint **)(lVar19 + 0x58);
    if (*(uint **)(lVar19 + 0x58) == (uint *)0x0) {
      puVar11 = puVar18;
    }
    uVar23 = *puVar11;
    if (uVar23 == 0) {
      iVar7 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar7 = iVar12 + -1;
      }
      uVar20 = 0;
      uVar16 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar16 = uVar20;
      }
      iVar22 = 0;
      do {
        if (uVar16 == uVar20) goto LAB_14385db96;
        iVar22 = iVar22 + 0x20;
        uVar23 = puVar11[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar20 = 0;
      iVar22 = 0;
    }
    uVar16 = (ulonglong)(-uVar23 & uVar23);
    uVar2 = uVar16 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar7 = (iVar22 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar7) {
      iVar7 = iVar12;
    }
  }
  if (iVar7 < iVar12) {
    local_98 = param_1 + 0x100;
    uVar23 = 0xffffffff;
    local_b8 = 0;
    local_b0 = puVar18;
    do {
      if ((*(uint *)(*(longlong *)(lVar19 + 0x38) + 0x10 + (longlong)iVar7 * 0x60) >>
           (*(uint *)(param_1 + 0x3c) & 0x1f) & 1) != 0) {
        lVar5 = *(longlong *)(lVar19 + 0x38) + (longlong)iVar7 * 0x60;
        lVar17 = lVar5 + 8;
        lVar15 = FUN_147f01816(lVar17);
        puVar18 = local_b0;
        if (lVar15 != local_a8) {
          if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
            uVar8 = *(uint *)(lVar5 + 0x50);
            lVar5 = *(longlong *)(param_1 + 0x108);
            if (*(longlong *)(param_1 + 0x108) == 0) {
              lVar5 = local_98;
            }
            uVar13 = *(uint *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & uVar8) * 4);
            if (uVar13 != 0xffffffff) {
              do {
                puVar18 = (uint *)(*(longlong *)(param_1 + 200) + (longlong)(int)uVar13 * 0x28);
                if (*puVar18 == uVar8) goto LAB_14385db35;
                uVar13 = puVar18[8];
              } while (uVar13 != 0xffffffff);
            }
          }
          puVar18 = (uint *)0x0;
LAB_14385db35:
          local_a0 = param_1;
          uVar6 = FUN_147f01844();
          param_1 = local_a0;
          local_c0 = local_90;
          local_d0 = &local_88;
          local_d8 = puVar21 + 7;
          local_c8 = puVar18 + 1;
          bVar4 = FUN_147f051d2(local_a0,lVar17,uVar6,local_a8);
          local_b8 = CONCAT71((int7)(local_b8 >> 8),(byte)local_b8 | bVar4);
          puVar18 = local_b0;
        }
      }
      uVar23 = uVar23 & ~(uint)uVar16;
      puVar11 = *(uint **)(lVar19 + 0x58);
      if (*(uint **)(lVar19 + 0x58) == (uint *)0x0) {
        puVar11 = puVar18;
      }
      iVar12 = *(int *)(lVar19 + 0x60);
      iVar7 = (int)uVar20;
      lVar5 = (longlong)iVar7;
      uVar8 = puVar11[lVar5] & uVar23;
      if (uVar8 == 0) {
        iVar9 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar9 = iVar12 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar15 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar8 = puVar11[lVar5 + lVar15 + 1];
          if (uVar8 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar10 - lVar5 == lVar15) goto LAB_14385db88;
        }
        uVar20 = (ulonglong)(iVar7 + (int)lVar15 + 1);
        uVar23 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar16 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = (iVar22 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar12);
LAB_14385db88:
    if ((local_b8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
LAB_14385db96:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385dc34 FUN_14385dc34 body=636 status=ok
// SIG undefined FUN_14385dc34(void)

undefined8 FUN_14385dc34(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_1 + 1);
  if ((longlong)(int)uVar1 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar11 = (ulonglong)uVar1;
    uVar14 = (longlong)(int)uVar1;
    do {
      lVar13 = (uVar14 - 1) * 0x38;
      if (*(int *)(*param_1 + 4 + lVar13) == *(int *)param_2[2]) {
        puVar7 = (uint *)(*param_1 + lVar13);
        if (((puVar7[0xc] & 1) != 0) && (*(longlong *)param_2[3] != 0)) {
          plVar2 = (longlong *)param_2[1];
          if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
            plVar12 = plVar2 + 7;
            if ((longlong *)plVar2[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar2[8];
            }
            iVar10 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar2[9] - 1U & *puVar7) * 4);
            if (iVar10 != -1) {
              do {
                lVar15 = *plVar2 + (longlong)iVar10 * 0x60;
                if (*(uint *)(*plVar2 + (longlong)iVar10 * 0x60) == *puVar7) goto LAB_14385dd41;
                iVar10 = *(int *)(lVar15 + 0x58);
              } while (iVar10 != -1);
            }
          }
          lVar15 = 0;
LAB_14385dd41:
          lVar3 = *param_2;
          local_a0 = 0x7f7fffff00000000;
          local_98 = 0xbf800000;
          local_80 = *(undefined8 *)(puVar7 + 8);
          local_90 = *(undefined8 *)(puVar7 + 4);
          uStack_88 = *(undefined8 *)(puVar7 + 6);
          local_68 = *(undefined8 *)(lVar15 + 0x28);
          local_78 = *(undefined4 *)(lVar15 + 0x18);
          uStack_74 = *(undefined4 *)(lVar15 + 0x1c);
          uStack_70 = *(undefined4 *)(lVar15 + 0x20);
          uStack_6c = *(undefined4 *)(lVar15 + 0x24);
          local_60 = 0;
          local_58 = 0xff;
          FUN_1446f470e(&local_54,L"Invalid",1);
          local_4c = local_4c & 0xfffffff8 | (uint)(*(char *)(lVar3 + 0x28) == '\x01');
          local_58 = *(undefined1 *)(lVar3 + 0x3c);
          local_54 = *(undefined8 *)(lVar3 + 0x40);
          uVar6 = *(undefined8 *)param_2[3];
          *(uint *)(lVar15 + 0x4c) = *(uint *)(lVar15 + 0x4c) | 1;
          if (*(int *)(lVar15 + 0xc) == 0) {
            uVar8 = 0;
          }
          else {
            uVar1 = *(uint *)(lVar15 + 8);
            if ((int)uVar1 < 0) {
LAB_14385de7d:
              uVar8 = 0;
            }
            else {
              uVar8 = 0;
              if ((int)uVar1 < DAT_14c9647dc) {
                puVar9 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if (((puVar9 == (undefined8 *)0x0) ||
                    (*(int *)(puVar9 + 2) != *(int *)(lVar15 + 0xc))) ||
                   ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_14385de7d;
                uVar8 = *puVar9;
              }
            }
          }
          FUN_147eff856(uVar8,uVar6,&local_a0);
          uVar11 = (ulonglong)*(uint *)(param_1 + 1);
        }
        iVar10 = (int)uVar11;
        if (uVar14 != uVar11) {
          iVar5 = iVar10 - (int)uVar14;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove((void *)(lVar13 + *param_1),(void *)((longlong)(iVar10 - iVar5) * 0x38 + *param_1)
                  ,(longlong)iVar5 * 0x38);
          iVar10 = (int)param_1[1];
        }
        uVar11 = (ulonglong)(iVar10 - 1U);
        *(uint *)(param_1 + 1) = iVar10 - 1U;
        uVar6 = 1;
      }
      bVar4 = 1 < (longlong)uVar14;
      uVar14 = uVar14 - 1;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385deb2 FUN_14385deb2 body=136 status=ok
// SIG undefined FUN_14385deb2(void)

void FUN_14385deb2(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = *(undefined4 *)(param_2 + 0x48);
  local_30 = &local_1c;
  local_28 = param_3;
  FUN_14385df3b(param_1 + 0x130,&local_30);
  cVar1 = FUN_14385df3b(param_1 + 0x120,&local_30);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 1;
  }
  FUN_14385df3b(param_1 + 0x140,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385df3b FUN_14385df3b body=223 status=ok
// SIG undefined FUN_14385df3b(void)

undefined8 FUN_14385df3b(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar12 = (ulonglong)(int)uVar1;
  if ((longlong)uVar12 < 1) {
    uVar7 = 0;
  }
  else {
    iVar13 = -uVar1;
    lVar11 = uVar12 * 0x38;
    uVar7 = 0;
    uVar10 = (ulonglong)uVar1;
    do {
      lVar11 = lVar11 + -0x38;
      lVar2 = *param_1;
      if (*(int *)(lVar2 + lVar11) == *(int *)*param_2) {
        puVar3 = (undefined8 *)param_2[1];
        pcVar4 = (code *)*puVar3;
        if (pcVar4 != (code *)0x0) {
          plVar8 = puVar3 + 4;
          if ((longlong *)puVar3[2] != (longlong *)0x0) {
            plVar8 = (longlong *)puVar3[2];
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          (*pcVar4)(uVar7,lVar2 + lVar11);
          uVar10 = (ulonglong)*(uint *)(param_1 + 1);
        }
        iVar9 = (int)uVar10;
        if (uVar12 != uVar10) {
          iVar6 = iVar9 + iVar13;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(*param_1 + lVar11),(void *)((longlong)(iVar9 - iVar6) * 0x38 + *param_1),
                  (longlong)iVar6 * 0x38);
          iVar9 = (int)param_1[1];
        }
        uVar10 = (ulonglong)(iVar9 - 1U);
        *(uint *)(param_1 + 1) = iVar9 - 1U;
        uVar7 = 1;
      }
      iVar13 = iVar13 + 1;
      bVar5 = 1 < uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar5);
  }
  return uVar7;
}



// FUNCTION 14385e01a FUN_14385e01a body=224 status=ok
// SIG undefined FUN_14385e01a(void)

undefined8 FUN_14385e01a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar12 = (ulonglong)(int)uVar1;
  if ((longlong)uVar12 < 1) {
    uVar7 = 0;
  }
  else {
    iVar13 = -uVar1;
    lVar11 = uVar12 * 0x38;
    uVar7 = 0;
    uVar10 = (ulonglong)uVar1;
    do {
      lVar11 = lVar11 + -0x38;
      lVar2 = *param_1;
      if (*(int *)(lVar2 + 4 + lVar11) == *(int *)*param_2) {
        puVar3 = (undefined8 *)param_2[1];
        pcVar4 = (code *)*puVar3;
        if (pcVar4 != (code *)0x0) {
          plVar8 = puVar3 + 4;
          if ((longlong *)puVar3[2] != (longlong *)0x0) {
            plVar8 = (longlong *)puVar3[2];
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          (*pcVar4)(uVar7,lVar2 + lVar11);
          uVar10 = (ulonglong)*(uint *)(param_1 + 1);
        }
        iVar9 = (int)uVar10;
        if (uVar12 != uVar10) {
          iVar6 = iVar9 + iVar13;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(*param_1 + lVar11),(void *)((longlong)(iVar9 - iVar6) * 0x38 + *param_1),
                  (longlong)iVar6 * 0x38);
          iVar9 = (int)param_1[1];
        }
        uVar10 = (ulonglong)(iVar9 - 1U);
        *(uint *)(param_1 + 1) = iVar9 - 1U;
        uVar7 = 1;
      }
      iVar13 = iVar13 + 1;
      bVar5 = 1 < uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar5);
  }
  return uVar7;
}



// FUNCTION 14385e0fa FUN_14385e0fa body=120 status=ok
// SIG undefined FUN_14385e0fa(void)

void FUN_14385e0fa(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((param_1[0x15] != 0) && ((*(uint *)(param_1[0x15] + 8) >> 0x1e & 1) == 0)) {
    lVar2 = FUN_1447210f0();
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
      cVar1 = (**(code **)(*param_1 + 0x498))(param_1);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x4f0))(param_1);
      }
      if ((*(byte *)((longlong)param_1 + 0x124) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014385e16f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x4e8))(param_1,*(undefined4 *)((longlong)param_1 + 0x11c));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14385e172 FUN_14385e172 body=679 status=ok
// SIG undefined FUN_14385e172(void)

ulonglong FUN_14385e172(longlong *param_1,double *param_2,float param_3,char param_4)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_158 [32];
  char **local_138;
  undefined1 *local_130;
  undefined4 *local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined2 local_b9;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((0.0 < param_3) && (lVar1 = param_1[0x15], lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    (**(code **)(*param_1 + 0x4c8))(param_1,&local_120);
    dVar7 = (double)CONCAT44(uStack_114,uStack_118) - param_2[1];
    dVar6 = (double)CONCAT44(uStack_11c,local_120) - *param_2;
    dVar6 = ((local_110 - param_2[2]) * (local_110 - param_2[2]) + dVar6 * dVar6 + dVar7 * dVar7) /
            (double)(param_3 * param_3);
    bVar2 = dVar6 <= (double)(*(float *)(param_1 + 0x22) * *(float *)(param_1 + 0x22));
    uVar5 = CONCAT71((int7)((ulonglong)&local_120 >> 8),bVar2);
    if (param_4 != '\0' || bVar2) goto LAB_14385e25c;
    if (dVar6 <= (double)(*(float *)((longlong)param_1 + 0x114) *
                         *(float *)((longlong)param_1 + 0x114))) {
      uVar4 = FUN_1447210f0(lVar1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb20ba0) {
        FUN_144b3d300();
        if (DAT_14cb20ba0 == -1) {
          local_d0 = "CanHear";
          local_c8 = CONCAT35(local_c8._5_3_,7);
          uVar3 = FUN_14001a6c0(&local_d0,1);
          DAT_14cb20b98 = (char *)(ulonglong)uVar3;
          _Init_thread_footer();
        }
      }
      local_138 = &local_d0;
      local_ac = 0;
      local_a8 = 0x101;
      local_80 = 0;
      local_78 = 0x800000000;
      local_60 = 0;
      local_54 = 4;
      local_c0 = 1;
      local_b4 = 0;
      local_d0 = DAT_14cb20b98;
      local_bf = 1;
      local_bd = 0;
      local_b0 = 0;
      local_bc = 0;
      local_ba = 0;
      local_70 = *(undefined4 *)(lVar1 + 0xc);
      local_58 = 1;
      local_c8 = *(undefined8 *)(lVar1 + 0x18);
      local_b9 = 0x101;
      local_e8 = *param_2;
      dStack_e0 = param_2[1];
      local_d8 = param_2[2];
      local_108 = local_120;
      uStack_104 = uStack_11c;
      uStack_100 = uStack_118;
      uStack_fc = uStack_114;
      local_f8 = local_110;
      local_128 = &DAT_14cad0f08;
      local_130 = &DAT_14cad0f10;
      uVar3 = FUN_140386a8e(uVar4,&local_108,&local_e8,3);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      uVar5 = (ulonglong)uVar3 ^ 1;
      goto LAB_14385e25c;
    }
  }
  uVar5 = 0;
LAB_14385e25c:
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385e41a FUN_14385e41a body=55 status=ok
// SIG undefined FUN_14385e41a(void)

void FUN_14385e41a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20aa0 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb20aa0 = FUN_14171c317(FUN_14643037a,uVar1,L"EAITaskPriority");
  }
  return;
}



// FUNCTION 14385e470 FUN_14385e470 body=48 status=ok
// SIG undefined FUN_14385e470(void)

longlong FUN_14385e470(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145d49b78(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14385e4a0 FUN_14385e4a0 body=48 status=ok
// SIG undefined FUN_14385e4a0(void)

longlong FUN_14385e4a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145d49b78(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14385e57c FUN_14385e57c body=153 status=ok
// SIG undefined FUN_14385e57c(void)

undefined8 FUN_14385e57c(byte *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float *pfVar5;
  undefined1 auStack_68 [44];
  char local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_2 + 0x24) & 1) != 0) && ((int)(uint)*param_1 < *(int *)(param_2 + 0x10))) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar4 = (ulonglong)*param_1 * 0x58;
    cVar1 = *(char *)(lVar2 + 0x48 + lVar4);
    FUN_1458872f0(local_3c);
    if (cVar1 != local_3c[0]) {
      pfVar5 = (float *)(lVar2 + lVar4);
      if ((0.0 < pfVar5[2]) && (*pfVar5 <= 3.4028235e+38 && *pfVar5 != 3.4028235e+38)) {
        uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 8) >> 8),
                         (*(byte *)(*(longlong *)(param_2 + 8) + 0x54 + lVar4) & 4) == 0);
        goto LAB_14385e5a8;
      }
    }
  }
  uVar3 = 0;
LAB_14385e5a8:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385e616 FUN_14385e616 body=145 status=ok
// SIG undefined FUN_14385e616(void)

void FUN_14385e616(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x80;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e08];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x80,4);
  }
  uVar2 = 0x7fffffff;
  if (0xf < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14385e6a8 FUN_14385e6a8 body=346 status=ok
// SIG undefined FUN_14385e6a8(void)

void FUN_14385e6a8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14385e73a;
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
LAB_14385e73a:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14385e802 FUN_14385e802 body=70 status=ok
// SIG undefined FUN_14385e802(void)

void FUN_14385e802(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    FUN_147f127da(*param_1,local_c,param_2);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385e868 FUN_14385e868 body=12 status=ok
// SIG undefined FUN_14385e868(void)

void FUN_14385e868(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014385e871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14385e874 FUN_14385e874 body=29 status=ok
// SIG undefined FUN_14385e874(void)

undefined8 FUN_14385e874(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14385e91c FUN_14385e91c body=12 status=ok
// SIG undefined FUN_14385e91c(void)

void FUN_14385e91c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014385e925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14385e928 FUN_14385e928 body=29 status=ok
// SIG undefined FUN_14385e928(void)

undefined8 FUN_14385e928(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14385e946 FUN_14385e946 body=75 status=ok
// SIG undefined FUN_14385e946(void)

void FUN_14385e946(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    FUN_144980568(*param_1,local_c,param_2 + 4,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385e9b0 FUN_14385e9b0 body=12 status=ok
// SIG undefined FUN_14385e9b0(void)

void FUN_14385e9b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014385e9b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14385e9bc FUN_14385e9bc body=29 status=ok
// SIG undefined FUN_14385e9bc(void)

undefined8 FUN_14385e9bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14385ea64 FUN_14385ea64 body=12 status=ok
// SIG undefined FUN_14385ea64(void)

void FUN_14385ea64(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014385ea6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14385ea70 FUN_14385ea70 body=29 status=ok
// SIG undefined FUN_14385ea70(void)

undefined8 FUN_14385ea70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14385ea8d FUN_14385ea8d body=1745 status=ok
// SIG undefined FUN_14385ea8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14385ea8d(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  undefined8 extraout_XMM0_Qb;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  DAT_14cacb150 = DAT_14cacb150 + 1;
  _DAT_14cb20390 = &DAT_14cb1dbc8;
  _DAT_14cb20398 = 0x47efffffe0000000;
  _DAT_14cb203a0 = 0x47efffffe0000000;
  _DAT_14cb203a8 = 0x47efffffe0000000;
  _DAT_14cb203b0 = 0x47efffffe0000000;
  _DAT_14cb203b8 = 0x47efffffe0000000;
  _DAT_14cb203c0 = 0x47efffffe0000000;
  _DAT_14cb203c8 = 0x47efffffe0000000;
  DAT_14cb203d0 = 0x47efffffe0000000;
  DAT_14cb203d8 = 0x47efffffe0000000;
  DAT_14cb203e0 = 0x47efffffe0000000;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  DAT_14cb20388 = DAT_14cacb150;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac15b70,1,0);
  FUN_1446f470e(&DAT_14cb20418,L"ReceiveSmartLinkReached",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  auVar2._0_8_ = FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac16a20,1,0);
  auVar2._8_8_ = extraout_XMM0_Qb;
  _DAT_14cb20450 = pmovsxbd(auVar2,0xff010001);
  _DAT_14cb20460 = 0;
  _DAT_14cb20464 = 0xffffffff;
  uRam000000014cb20468 = 0xffffffff;
  uRam000000014cb2046c = 0xffffffff;
  uRam000000014cb20470 = 0xffffffff;
  _DAT_14cb20474 = 0xffffffff00000000;
  uRam000000014cb2047c = 1;
  _DAT_14cb20484 = &DAT_100000001;
  _DAT_14cb2048c = 1;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac17c90,1,0);
  ppuStack_60 = &PTR_FUN_14ac18b30;
  local_68 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac18bb0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac18ff0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/AIModule",0,0,&PTR_FUN_14ac190f0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac1abe0,1,&PTR_FUN_14ac1ab90);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac1af50,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac1b8e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac1c3a0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ac1c860;
  local_68 = 2;
  FUN_14282b410(L"/Script/AIModule",0,0,&PTR_FUN_14ac1c880);
  DAT_14cb20780 = 0;
  DAT_14cb20784 = 0;
  _DAT_14cb20788 = 0;
  _DAT_14cb20790 = 0;
  _DAT_14cb20798 = DAT_14c8464e0;
  uRam000000014cb207a0 = DAT_14c8464e8;
  _DAT_14cb207a8 = DAT_14c8464f0;
  _DAT_14cb207b0 = DAT_14c8462c0;
  uRam000000014cb207b8 = DAT_14c8462c8;
  _DAT_14cb207c0 = DAT_14c8462d0;
  DAT_14cb207c8 = 0xff;
  DAT_14cb207cc = DAT_14cb207cc & 0xfe;
  FUN_145eea1a4(&DAT_14cb207d0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac1ce20,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac1d1e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac1d540,1,0);
  FUN_1446f470e(&DAT_14cb20830,L"K2_OnNewPawn",1);
  FUN_1446f470e(&DAT_14cb20840,L"OnListenerRegistered",1);
  FUN_1446f470e(&DAT_14cb20850,L"OnListenerUnregistered",1);
  FUN_1446f470e(&DAT_14cb20860,L"OnListenerUpdated",1);
  FUN_1446f470e(&DAT_14cb20870,L"OnUpdate",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac1e260,1,0);
  DAT_14cb208b8 = 0;
  DAT_14cb208c0 = 0;
  DAT_14cb20898 = 0;
  _DAT_14cb208a0 = 0;
  _DAT_14cb208c4 = 0xffffffff00000080;
  DAT_14cb208cc = 0;
  DAT_14cb208d8 = 0;
  DAT_14cb208e0 = 0;
  atexit(FUN_14385b69e);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac1eb50,1,&PTR_FUN_14ac1eb20);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac1f3e0,1,&PTR_FUN_14ac1f3b0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac1fc30,1,&PTR_FUN_14ac1fc00);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac20460,1,&PTR_FUN_14ac20430);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac209e0,1,&PTR_FUN_14ac209b0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac210e0,1,&PTR_FUN_14ac210b0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac21440,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac22510,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ac229e0;
  local_68 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac22a00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac22e00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac238a0,1,0);
  FUN_1446f470e(&DAT_14cb20b14,L"SelfActor",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac23de0,1,0);
  FUN_140056680(&DAT_14cb20b40,L"LogEQS");
  atexit((_func_5014 *)&LAB_14385e45f);
  FUN_1400b22c2(local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_50,&DAT_14cb20b50);
  if (cVar1 == '\0') {
    _DAT_14cb20b50 = 0;
    uRam000000014cb20b58 = 0;
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14ac24140,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385f160 FUN_14385f160 body=55 status=ok
// SIG undefined FUN_14385f160(void)

void FUN_14385f160(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20c58 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb20c58 = FUN_14171c317(FUN_146430b03,uVar1,L"ECoverViewFailReason");
  }
  return;
}



// FUNCTION 14385f197 FUN_14385f197 body=55 status=ok
// SIG undefined FUN_14385f197(void)

void FUN_14385f197(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20d20 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb20d20 = FUN_14171c317(FUN_146430dec,uVar1,L"ECoverSlotHeight");
  }
  return;
}



// FUNCTION 14385f1ce FUN_14385f1ce body=55 status=ok
// SIG undefined FUN_14385f1ce(void)

void FUN_14385f1ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20d58 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb20d58 = FUN_14171c317(FUN_146430ef5,uVar1,L"ECoverStyleAnimType");
  }
  return;
}



// FUNCTION 14385f205 FUN_14385f205 body=55 status=ok
// SIG undefined FUN_14385f205(void)

void FUN_14385f205(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20e78 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb20e78 = FUN_14171c317(FUN_14643143a,uVar1,L"EGbxAggroType");
  }
  return;
}



// FUNCTION 14385f23c FUN_14385f23c body=55 status=ok
// SIG undefined FUN_14385f23c(void)

void FUN_14385f23c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb20ec0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb20ec0 = FUN_14171c317(FUN_146431598,uVar1,L"EGbxAggroValue");
  }
  return;
}



// FUNCTION 14385f274 FUN_14385f274 body=146 status=ok
// SIG undefined FUN_14385f274(void)

void FUN_14385f274(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xbf80000000000002;
  *(undefined2 *)((longlong)param_1 + 0x104) = 0;
  return;
}



// FUNCTION 14385f306 FUN_14385f306 body=48 status=ok
// SIG undefined FUN_14385f306(void)

longlong FUN_14385f306(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140cbad32(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14385f336 FUN_14385f336 body=48 status=ok
// SIG undefined FUN_14385f336(void)

longlong FUN_14385f336(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x748;
  FUN_140cbad32(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14385f366 FUN_14385f366 body=48 status=ok
// SIG undefined FUN_14385f366(void)

longlong FUN_14385f366(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x750;
  FUN_140cbad32(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14385f3be FUN_14385f3be body=48 status=ok
// SIG undefined FUN_14385f3be(void)

longlong FUN_14385f3be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x878;
  FUN_140cbad32(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14385f4a2 FUN_14385f4a2 body=193 status=ok
// SIG undefined FUN_14385f4a2(void)

void FUN_14385f4a2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  *(undefined2 *)((longlong)param_2 + 0x28) = 4;
  *(undefined4 *)((longlong)param_2 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x30) = 3;
  *(char *)((longlong)param_2 + 0x38) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined2 *)((longlong)param_2 + 0x60) = 4;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  *(undefined1 *)((longlong)param_2 + 0x68) = 3;
  *(char *)((longlong)param_2 + 0x70) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined2 *)((longlong)param_2 + 0xa0) = 4;
  *(undefined4 *)((longlong)param_2 + 0x88) = 0;
  *(undefined1 *)((longlong)param_2 + 0xa8) = 3;
  *(char *)((longlong)param_2 + 0xb0) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined1 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  return;
}



// FUNCTION 14385f5c6 FUN_14385f5c6 body=960 status=ok
// SIG undefined FUN_14385f5c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14385f5c6(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac26be0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac272d0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac27630,1,0);
  FUN_14098d3d2(FUN_14385f160,L"/Script/GbxAI",L"ECoverViewFailReason",&DAT_14cb20c50);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac27870);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac27f90,1,0);
  FUN_1400b22c2(local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_50,&DAT_14cb20c98);
  if (cVar1 == '\0') {
    _DAT_14cb20c98 = 0;
    uRam000000014cb20ca0 = 0;
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac29390,1,&PTR_FUN_14ac29340);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac29aa0,1,0);
  FUN_14098d3d2(FUN_14385f197,L"/Script/GbxAI",L"ECoverSlotHeight",&DAT_14cb20d18);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac2a030,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ac2a7d0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac2a7f0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac2c4f0,2,&PTR_FUN_14ac2c400);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac2cac0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac2ce10,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ac2cf90;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac2cfb0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ac2d190;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac2d1b0);
  _DAT_14cb20f00 = 0x47efffffe0000000;
  _DAT_14cb20f08 = 0x47efffffe0000000;
  _DAT_14cb20f10 = 0x47efffffe0000000;
  _DAT_14cb20f18 = 0x47efffffe0000000;
  _DAT_14cb20f20 = 0x47efffffe0000000;
  _DAT_14cb20f28 = 0x47efffffe0000000;
  _DAT_14cb20f30 = 0x47efffffe0000000;
  _DAT_14cb20f38 = 0x47efffffe0000000;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac2dfa0,1,0);
  FUN_1446f470e(&DAT_14cb20f68,L"ServerSetClientListening",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac2e8f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac2ebe0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac304b0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14385f988 FUN_14385f988 body=55 status=ok
// SIG undefined FUN_14385f988(void)

void FUN_14385f988(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21060 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21060 = FUN_14171c317(FUN_146431ec6,uVar1,L"EGbxAITicketHoldType");
  }
  return;
}



// FUNCTION 14385f9bf FUN_14385f9bf body=55 status=ok
// SIG undefined FUN_14385f9bf(void)

void FUN_14385f9bf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21078 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21078 = FUN_14171c317(FUN_146431ef7,uVar1,L"EGbxAITicketInterruptCondition");
  }
  return;
}



// FUNCTION 14385f9f6 FUN_14385f9f6 body=55 status=ok
// SIG undefined FUN_14385f9f6(void)

void FUN_14385f9f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21180 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21180 = FUN_14171c317(FUN_146432312,uVar1,L"ECanSeeAspectTestMode");
  }
  return;
}



// FUNCTION 14385fa2d FUN_14385fa2d body=55 status=ok
// SIG undefined FUN_14385fa2d(void)

void FUN_14385fa2d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21258 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21258 = FUN_14171c317(FUN_1464326ac,uVar1,L"EGbxCompareType");
  }
  return;
}



// FUNCTION 14385fa64 FUN_14385fa64 body=55 status=ok
// SIG undefined FUN_14385fa64(void)

void FUN_14385fa64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb212a0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb212a0 = FUN_14171c317(FUN_146432808,uVar1,L"EGbxBrainAspectSettingsConditionContext");
  }
  return;
}



// FUNCTION 14385fa9b FUN_14385fa9b body=55 status=ok
// SIG undefined FUN_14385fa9b(void)

void FUN_14385fa9b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21330 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21330 =
         FUN_14171c317(FUN_146432a86,uVar1,L"EGbxBrainAspectSettingsGameplayTagQueryContext");
  }
  return;
}



// FUNCTION 14385fad2 FUN_14385fad2 body=55 status=ok
// SIG undefined FUN_14385fad2(void)

void FUN_14385fad2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21378 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21378 = FUN_14171c317(FUN_146432be2,uVar1,L"EGpsBrainStyle");
  }
  return;
}



// FUNCTION 14385fb09 FUN_14385fb09 body=55 status=ok
// SIG undefined FUN_14385fb09(void)

void FUN_14385fb09(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21460 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21460 = FUN_14171c317(FUN_146432ebe,uVar1,L"EIsInRangeAspectDistanceTest");
  }
  return;
}



// FUNCTION 14385fb40 FUN_14385fb40 body=55 status=ok
// SIG undefined FUN_14385fb40(void)

void FUN_14385fb40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21478 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21478 = FUN_14171c317(FUN_146432eed,uVar1,L"EIsInRangeAspectCheckType");
  }
  return;
}



// FUNCTION 14385fb77 FUN_14385fb77 body=55 status=ok
// SIG undefined FUN_14385fb77(void)

void FUN_14385fb77(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb214f0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb214f0 = FUN_14171c317(FUN_14643310a,uVar1,L"EGbxBrainTerritoryRestriction");
  }
  return;
}



// FUNCTION 14385fc02 FUN_14385fc02 body=57 status=ok
// SIG undefined FUN_14385fc02(void)

void FUN_14385fc02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21150 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21150 = FUN_140002ddd(FUN_146432253,uVar1,L"GbxBrainAspectSettings_AttachTerritory");
  }
  return;
}



// FUNCTION 14385fc58 FUN_14385fc58 body=57 status=ok
// SIG undefined FUN_14385fc58(void)

void FUN_14385fc58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21198 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21198 = FUN_140002ddd(FUN_146432341,uVar1,L"GbxBrainAspectSettings_CanSee");
  }
  return;
}



// FUNCTION 14385fca0 FUN_14385fca0 body=155 status=ok
// SIG undefined FUN_14385fca0(void)

void FUN_14385fca0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  *param_2 = &PTR_FUN_14ac38c50;
  return;
}



// FUNCTION 14385fd3c FUN_14385fd3c body=57 status=ok
// SIG undefined FUN_14385fd3c(void)

void FUN_14385fd3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb211b0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb211b0 = FUN_140002ddd(FUN_1464323a0,uVar1,L"GbxBrainAspect_CanSee");
  }
  return;
}



// FUNCTION 14385fd84 FUN_14385fd84 body=57 status=ok
// SIG undefined FUN_14385fd84(void)

void FUN_14385fd84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb211c8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb211c8 = FUN_140002ddd(FUN_146432437,uVar1,L"GbxBrainAspectSettings_CanSense");
  }
  return;
}



// FUNCTION 14385fdcc FUN_14385fdcc body=155 status=ok
// SIG undefined FUN_14385fdcc(void)

void FUN_14385fdcc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  *param_2 = &PTR_FUN_14ac39030;
  return;
}



// FUNCTION 14385fe68 FUN_14385fe68 body=57 status=ok
// SIG undefined FUN_14385fe68(void)

void FUN_14385fe68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb211e0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb211e0 = FUN_140002ddd(FUN_146432496,uVar1,L"GbxBrainAspect_CanSense");
  }
  return;
}



// FUNCTION 14385fecc FUN_14385fecc body=57 status=ok
// SIG undefined FUN_14385fecc(void)

void FUN_14385fecc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21228 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21228 = FUN_140002ddd(FUN_1464325ec,uVar1,L"GbxBrainAspectSettings_ClaimCover");
  }
  return;
}



// FUNCTION 14385ff14 FUN_14385ff14 body=159 status=ok
// SIG undefined FUN_14385ff14(void)

void FUN_14385ff14(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14ac39890;
  return;
}



// FUNCTION 14385ffb4 FUN_14385ffb4 body=57 status=ok
// SIG undefined FUN_14385ffb4(void)

void FUN_14385ffb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21240 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21240 = FUN_140002ddd(FUN_14643264c,uVar1,L"GbxBrainAspect_ClaimCover");
  }
  return;
}



// FUNCTION 143860026 FUN_143860026 body=57 status=ok
// SIG undefined FUN_143860026(void)

void FUN_143860026(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb212d0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb212d0 = FUN_140002ddd(FUN_1464328d0,uVar1,L"GbxBrainAspectSettings_Condition");
  }
  return;
}



// FUNCTION 14386006e FUN_14386006e body=159 status=ok
// SIG undefined FUN_14386006e(void)

void FUN_14386006e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14ac3a2b0;
  return;
}



// FUNCTION 14386010e FUN_14386010e body=57 status=ok
// SIG undefined FUN_14386010e(void)

void FUN_14386010e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb212e8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb212e8 = FUN_140002ddd(FUN_146432930,uVar1,L"GbxBrainAspect_Condition");
  }
  return;
}



// FUNCTION 143860156 FUN_143860156 body=57 status=ok
// SIG undefined FUN_143860156(void)

void FUN_143860156(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21300 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21300 = FUN_140002ddd(FUN_1464329c7,uVar1,L"GbxBrainAspectSettings_CountAllies");
  }
  return;
}



// FUNCTION 1438601c8 FUN_1438601c8 body=57 status=ok
// SIG undefined FUN_1438601c8(void)

void FUN_1438601c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21390 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21390 = FUN_140002ddd(FUN_146432c13,uVar1,L"GbxBrainAspectSettings_Gps");
  }
  return;
}



// FUNCTION 143860210 FUN_143860210 body=245 status=ok
// SIG undefined FUN_143860210(void)

void FUN_143860210(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x1f8);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14ac3afe0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x1d) = 2;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x104) = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_2 + 300) = 0xffffffff00000080;
  param_2[0x2b] = 0;
  *(undefined1 *)(param_2 + 0x32) = 0;
  *(undefined1 *)(param_2 + 0x3f) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x40] = 0xffffffff;
  param_2[0x41] = 0;
  return;
}



// FUNCTION 143860306 FUN_143860306 body=146 status=ok
// SIG undefined FUN_143860306(void)

void FUN_143860306(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0;
  return;
}



// FUNCTION 143860398 FUN_143860398 body=57 status=ok
// SIG undefined FUN_143860398(void)

void FUN_143860398(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb213a8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb213a8 = FUN_140002ddd(FUN_146432c72,uVar1,L"GbxBrainAspect_Gps");
  }
  return;
}



// FUNCTION 1438603e0 FUN_1438603e0 body=57 status=ok
// SIG undefined FUN_1438603e0(void)

void FUN_1438603e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21400 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21400 = FUN_140002ddd(FUN_146432cd2,uVar1,L"GbxBrainAspectSettings_HasNavLoS");
  }
  return;
}



// FUNCTION 143860428 FUN_143860428 body=162 status=ok
// SIG undefined FUN_143860428(void)

void FUN_143860428(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  *param_2 = &PTR_FUN_14ac3b3c0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 1438604ca FUN_1438604ca body=57 status=ok
// SIG undefined FUN_1438604ca(void)

void FUN_1438604ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21418 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21418 = FUN_140002ddd(FUN_146432d32,uVar1,L"GbxBrainAspect_HasNavLoS");
  }
  return;
}



// FUNCTION 143860504 FUN_143860504 body=74 status=ok
// SIG undefined FUN_143860504(void)

void FUN_143860504(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3b3c0;
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 14386054e FUN_14386054e body=105 status=ok
// SIG undefined FUN_14386054e(void)

longlong FUN_14386054e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_147f186d8();
  uVar3 = *(undefined8 *)(param_2 + 0xd8);
  lVar4 = *(longlong *)(param_2 + 0xe0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  *(longlong *)(param_1 + 0xe0) = lVar4;
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
  return param_1;
}



// FUNCTION 1438605fe FUN_1438605fe body=57 status=ok
// SIG undefined FUN_1438605fe(void)

void FUN_1438605fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb214c0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb214c0 = FUN_140002ddd(FUN_14643304a,uVar1,L"GbxBrainAspectSettings_IsInRange");
  }
  return;
}



// FUNCTION 143860646 FUN_143860646 body=152 status=ok
// SIG undefined FUN_143860646(void)

void FUN_143860646(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xd8);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14ac3bfe0;
  return;
}



// FUNCTION 1438606de FUN_1438606de body=57 status=ok
// SIG undefined FUN_1438606de(void)

void FUN_1438606de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb214d8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb214d8 = FUN_140002ddd(FUN_1464330aa,uVar1,L"GbxBrainAspect_IsInRange");
  }
  return;
}



// FUNCTION 143860726 FUN_143860726 body=57 status=ok
// SIG undefined FUN_143860726(void)

void FUN_143860726(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21508 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21508 = FUN_140002ddd(FUN_14643313b,uVar1,L"GbxBrainAspectSettings_IsInTerritory");
  }
  return;
}



// FUNCTION 14386076e FUN_14386076e body=176 status=ok
// SIG undefined FUN_14386076e(void)

void FUN_14386076e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x110);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14ac3c4a0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *(undefined4 *)(param_2 + 0x22) = 0xff7fffff;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  return;
}



// FUNCTION 14386081e FUN_14386081e body=265 status=ok
// SIG undefined FUN_14386081e(void)

undefined8 FUN_14386081e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  
  do {
    if (param_4 == 0) {
      return 1;
    }
    FUN_147f186d8(param_2,param_3);
    uVar3 = *(undefined8 *)(param_3 + 0xe0);
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_3 + 0xd8);
    *(undefined8 *)(param_2 + 0xe0) = uVar3;
    *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_3 + 0xe8);
    if (param_3 != param_2) {
      if (*(char *)(param_3 + 0x108) == '\x01') {
        *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(param_3 + 0x100);
        uVar3 = *(undefined8 *)(param_3 + 0xf8);
        *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_3 + 0xf0);
        *(undefined8 *)(param_2 + 0xf8) = uVar3;
        uVar6 = 1;
      }
      else {
        if (*(char *)(param_2 + 0x108) != '\x01') goto LAB_1438608a9;
        uVar6 = 0;
      }
      *(undefined1 *)(param_2 + 0x108) = uVar6;
    }
LAB_1438608a9:
    *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_3 + 0x110);
    uVar3 = *(undefined8 *)(param_3 + 0x118);
    lVar4 = *(longlong *)(param_3 + 0x120);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_2 + 0x120);
    *(undefined8 *)(param_2 + 0x118) = uVar3;
    *(longlong *)(param_2 + 0x120) = lVar4;
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
    param_2 = param_2 + 0x128;
    param_3 = param_3 + 0x128;
    param_4 = param_4 + -1;
  } while( true );
}



// FUNCTION 143860928 FUN_143860928 body=107 status=ok
// SIG undefined FUN_143860928(void)

void FUN_143860928(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x25) == '\x01') {
    *param_2 = &PTR_FUN_14ac3c4a0;
    plVar3 = (longlong *)param_2[0x24];
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
    if (*(char *)(param_2 + 0x21) == '\x01') {
      *(undefined1 *)(param_2 + 0x21) = 0;
    }
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x25) = 0;
  }
  return;
}



// FUNCTION 143860994 FUN_143860994 body=110 status=ok
// SIG undefined FUN_143860994(void)

undefined8 * FUN_143860994(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3c4a0;
  plVar3 = (longlong *)param_1[0x24];
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
  if (*(char *)(param_1 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143860a02 FUN_143860a02 body=57 status=ok
// SIG undefined FUN_143860a02(void)

void FUN_143860a02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21520 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21520 = FUN_140002ddd(FUN_14643319a,uVar1,L"GbxBrainAspect_IsInTerritory");
  }
  return;
}



// FUNCTION 143860a3b FUN_143860a3b body=838 status=ok
// SIG undefined FUN_143860a3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143860a3b(void)

{
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac32370,1,0,0);
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac329e0,1,&PTR_FUN_14ac329b0,1,&PTR_FUN_14ac32970,2);
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac33640,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac33990,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac33a30,1,0,0);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac33d20,2,0,0);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac34280,2,0,0);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac345a0,2,&PTR_FUN_14ac34580,1);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac34910,2,0,0);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac34ba0,2,0,0);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac34d70,2,0,0);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac35160,2,&PTR_FUN_14ac35140,1);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac358c0,3,&PTR_FUN_14ac358a0,1);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac35b60,2,0,0);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac35ec0,2,&PTR_FUN_14ac35ea0,1);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac36260,2,&PTR_FUN_14ac36240,1);
  _DAT_14cb213b8 = 0x47efffffe0000000;
  _DAT_14cb213c0 = 0x47efffffe0000000;
  _DAT_14cb213c8 = 0x47efffffe0000000;
  _DAT_14cb213d0 = 0x47efffffe0000000;
  _DAT_14cb213d8 = 0x47efffffe0000000;
  _DAT_14cb213e0 = 0x47efffffe0000000;
  _DAT_14cb213e8 = 0x47efffffe0000000;
  _DAT_14cb213f0 = 0x47efffffe0000000;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac36630,2,0,0);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac368b0,2,0,0);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac37260,4,&PTR_FUN_14ac37220,2);
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac37980,2,&PTR_FUN_14ac37960,1);
  return;
}



// FUNCTION 143860d84 FUN_143860d84 body=55 status=ok
// SIG undefined FUN_143860d84(void)

void FUN_143860d84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb215b0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb215b0 = FUN_14171c317(FUN_14643389d,uVar1,L"EGbxBrainAspectIsOnTerrainContext");
  }
  return;
}



// FUNCTION 143860dbb FUN_143860dbb body=55 status=ok
// SIG undefined FUN_143860dbb(void)

void FUN_143860dbb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb216e8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb216e8 = FUN_14171c317(FUN_146433e47,uVar1,L"EAINavAspectType");
  }
  return;
}



// FUNCTION 143860df2 FUN_143860df2 body=55 status=ok
// SIG undefined FUN_143860df2(void)

void FUN_143860df2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21700 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21700 = FUN_14171c317(FUN_146433e76,uVar1,L"EGbxNavGoalCustomRotationContext");
  }
  return;
}



// FUNCTION 143860e29 FUN_143860e29 body=55 status=ok
// SIG undefined FUN_143860e29(void)

void FUN_143860e29(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21778 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21778 = FUN_14171c317(FUN_146434059,uVar1,L"EOrbitDirection");
  }
  return;
}



// FUNCTION 143860e60 FUN_143860e60 body=55 status=ok
// SIG undefined FUN_143860e60(void)

void FUN_143860e60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21808 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21808 = FUN_14171c317(FUN_146434283,uVar1,L"EGbxBrainAspectSetParamContext");
  }
  return;
}



// FUNCTION 143860e97 FUN_143860e97 body=55 status=ok
// SIG undefined FUN_143860e97(void)

void FUN_143860e97(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21820 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21820 = FUN_14171c317(FUN_1464342b2,uVar1,L"EGbxBrainAspectSetParamValueContext");
  }
  return;
}



// FUNCTION 143860ece FUN_143860ece body=55 status=ok
// SIG undefined FUN_143860ece(void)

void FUN_143860ece(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21838 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21838 = FUN_14171c317(FUN_1464342e1,uVar1,L"EGbxBrainAspectSetParamOnStartBehavior");
  }
  return;
}



// FUNCTION 143860f05 FUN_143860f05 body=55 status=ok
// SIG undefined FUN_143860f05(void)

void FUN_143860f05(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21850 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21850 = FUN_14171c317(FUN_146434310,uVar1,L"EGbxBrainAspectSetParamOnStopBehavior");
  }
  return;
}



// FUNCTION 143860f4a FUN_143860f4a body=57 status=ok
// SIG undefined FUN_143860f4a(void)

void FUN_143860f4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21580 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21580 = FUN_140002ddd(FUN_1464337e9,uVar1,L"GbxBrainAspectSettings_IsNavReachable");
  }
  return;
}



// FUNCTION 143860fca FUN_143860fca body=159 status=ok
// SIG undefined FUN_143860fca(void)

void FUN_143860fca(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14ac43540;
  return;
}



// FUNCTION 14386106a FUN_14386106a body=57 status=ok
// SIG undefined FUN_14386106a(void)

void FUN_14386106a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21610 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21610 = FUN_140002ddd(FUN_146433a49,uVar1,L"GbxBrainAspect_LockTarget");
  }
  return;
}



// FUNCTION 1438610b2 FUN_1438610b2 body=57 status=ok
// SIG undefined FUN_1438610b2(void)

void FUN_1438610b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21628 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21628 = FUN_140002ddd(FUN_146433adb,uVar1,L"GbxBrainAspectSettings_Loop");
  }
  return;
}



// FUNCTION 143861108 FUN_143861108 body=57 status=ok
// SIG undefined FUN_143861108(void)

void FUN_143861108(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21658 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21658 = FUN_140002ddd(FUN_146433bc7,uVar1,L"GbxBrainAspectSettings_MaxRuns");
  }
  return;
}



// FUNCTION 143861150 FUN_143861150 body=152 status=ok
// SIG undefined FUN_143861150(void)

void FUN_143861150(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xd8);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14ac43d00;
  return;
}



// FUNCTION 1438611e8 FUN_1438611e8 body=57 status=ok
// SIG undefined FUN_1438611e8(void)

void FUN_1438611e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21670 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21670 = FUN_140002ddd(FUN_146433c21,uVar1,L"GbxBrainAspect_MaxRuns");
  }
  return;
}



// FUNCTION 143861230 FUN_143861230 body=57 status=ok
// SIG undefined FUN_143861230(void)

void FUN_143861230(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21688 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21688 = FUN_140002ddd(FUN_146433c7b,uVar1,L"GbxBrainAspectSettings_NavAttribute");
  }
  return;
}



// FUNCTION 143861278 FUN_143861278 body=183 status=ok
// SIG undefined FUN_143861278(void)

void FUN_143861278(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x100);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x23] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf1) = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14ac44180;
  return;
}



// FUNCTION 143861330 FUN_143861330 body=57 status=ok
// SIG undefined FUN_143861330(void)

void FUN_143861330(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb216a0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb216a0 = FUN_140002ddd(FUN_146433d07,uVar1,L"GbxBrainAspect_NavAttribute");
  }
  return;
}



// FUNCTION 14386137c FUN_14386137c body=57 status=ok
// SIG undefined FUN_14386137c(void)

void FUN_14386137c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb216b8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb216b8 = FUN_140002ddd(FUN_146433d93,uVar1,L"GbxBrainAspectSettings_NavGps");
  }
  return;
}



// FUNCTION 1438613c4 FUN_1438613c4 body=280 status=ok
// SIG undefined FUN_1438613c4(void)

void FUN_1438613c4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x240);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x23] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf1) = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14ac44760;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined4 *)(param_2 + 0x26) = 2;
  *(undefined8 *)((longlong)param_2 + 0x134) = 0;
  *(undefined8 *)((longlong)param_2 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x144) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x154) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0xffffffff00000080;
  param_2[0x34] = 0;
  *(undefined1 *)(param_2 + 0x3b) = 0;
  *(undefined1 *)(param_2 + 0x48) = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x49] = 0xffffffff;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 1438614dc FUN_1438614dc body=57 status=ok
// SIG undefined FUN_1438614dc(void)

void FUN_1438614dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb216d0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb216d0 = FUN_140002ddd(FUN_146433ded,uVar1,L"GbxBrainAspect_NavGps");
  }
  return;
}



// FUNCTION 143861540 FUN_143861540 body=57 status=ok
// SIG undefined FUN_143861540(void)

void FUN_143861540(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21748 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21748 = FUN_140002ddd(FUN_146433fa5,uVar1,L"GbxBrainAspectSettings_NavLink");
  }
  return;
}



// FUNCTION 1438615a4 FUN_1438615a4 body=57 status=ok
// SIG undefined FUN_1438615a4(void)

void FUN_1438615a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb217a8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb217a8 = FUN_140002ddd(FUN_14643411b,uVar1,L"GbxBrainAspectSettings_Orbit");
  }
  return;
}



// FUNCTION 1438615ec FUN_1438615ec body=230 status=ok
// SIG undefined FUN_1438615ec(void)

void FUN_1438615ec(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x1b8);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x23] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf1) = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14ac455e0;
  *(undefined8 *)((longlong)param_2 + 0x12e) = 0;
  *(undefined8 *)((longlong)param_2 + 0x136) = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined4 *)(param_2 + 0x2a) = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  param_2[0x2f] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 1438616d2 FUN_1438616d2 body=232 status=ok
// SIG undefined FUN_1438616d2(void)

void FUN_1438616d2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *param_2 = &PTR_FUN_14ac455e0;
    plVar3 = (longlong *)param_2[0x39];
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
    if (*(char *)(param_2 + 0x37) == '\x01') {
      *(undefined1 *)(param_2 + 0x37) = 0;
    }
    if (*(char *)(param_2 + 0x2e) == '\x01') {
      *(undefined1 *)(param_2 + 0x2e) = 0;
    }
    *param_2 = &PTR_FUN_14ac442c0;
    plVar3 = (longlong *)param_2[0x22];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    plVar3 = (longlong *)param_2[0x1e];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    plVar3 = (longlong *)param_2[0x1c];
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
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x3a) = 0;
  }
  return;
}



// FUNCTION 1438617ba FUN_1438617ba body=231 status=ok
// SIG undefined FUN_1438617ba(void)

undefined8 * FUN_1438617ba(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac455e0;
  plVar3 = (longlong *)param_1[0x39];
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
  if (*(char *)(param_1 + 0x37) == '\x01') {
    *(undefined1 *)(param_1 + 0x37) = 0;
  }
  if (*(char *)(param_1 + 0x2e) == '\x01') {
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  *param_1 = &PTR_FUN_14ac442c0;
  plVar3 = (longlong *)param_1[0x22];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438618a2 FUN_1438618a2 body=57 status=ok
// SIG undefined FUN_1438618a2(void)

void FUN_1438618a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb217c0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb217c0 = FUN_140002ddd(FUN_146434175,uVar1,L"GbxBrainAspect_Orbit");
  }
  return;
}



// FUNCTION 1438618e0 FUN_1438618e0 body=368 status=ok
// SIG undefined FUN_1438618e0(void)

longlong FUN_1438618e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  
  FUN_147f1f36a();
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  uVar13 = *(undefined8 *)(param_2 + 0x130);
  uVar14 = *(undefined8 *)(param_2 + 0x138);
  uVar6 = *(undefined4 *)(param_2 + 0x140);
  uVar7 = *(undefined4 *)(param_2 + 0x144);
  uVar8 = *(undefined4 *)(param_2 + 0x148);
  uVar9 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar3;
  *(undefined8 *)(param_1 + 0x130) = uVar13;
  *(undefined8 *)(param_1 + 0x138) = uVar14;
  *(undefined4 *)(param_1 + 0x140) = uVar6;
  *(undefined4 *)(param_1 + 0x144) = uVar7;
  *(undefined4 *)(param_1 + 0x148) = uVar8;
  *(undefined4 *)(param_1 + 0x14c) = uVar9;
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  if (param_2 == param_1) {
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
    uVar6 = *(undefined4 *)(param_2 + 0x178);
    uVar7 = *(undefined4 *)(param_2 + 0x17c);
    uVar8 = *(undefined4 *)(param_2 + 0x180);
    uVar9 = *(undefined4 *)(param_2 + 0x184);
    uVar10 = *(undefined4 *)(param_2 + 0x18c);
    uVar11 = *(undefined4 *)(param_2 + 400);
    uVar12 = *(undefined4 *)(param_2 + 0x194);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
    *(undefined4 *)(param_1 + 0x18c) = uVar10;
    *(undefined4 *)(param_1 + 400) = uVar11;
    *(undefined4 *)(param_1 + 0x194) = uVar12;
    *(undefined4 *)(param_1 + 0x178) = uVar6;
    *(undefined4 *)(param_1 + 0x17c) = uVar7;
    *(undefined4 *)(param_1 + 0x180) = uVar8;
    *(undefined4 *)(param_1 + 0x184) = uVar9;
    goto LAB_1438619f8;
  }
  if (*(char *)(param_2 + 0x170) == '\x01') {
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
    uVar3 = *(undefined8 *)(param_2 + 0x160);
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
    *(undefined8 *)(param_1 + 0x160) = uVar3;
    uVar15 = 1;
LAB_14386198a:
    *(undefined1 *)(param_1 + 0x170) = uVar15;
  }
  else if (*(char *)(param_1 + 0x170) != '\0') {
    uVar15 = 0;
    goto LAB_14386198a;
  }
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  uVar6 = *(undefined4 *)(param_2 + 0x178);
  uVar7 = *(undefined4 *)(param_2 + 0x17c);
  uVar8 = *(undefined4 *)(param_2 + 0x180);
  uVar9 = *(undefined4 *)(param_2 + 0x184);
  uVar10 = *(undefined4 *)(param_2 + 0x18c);
  uVar11 = *(undefined4 *)(param_2 + 400);
  uVar12 = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x18c) = uVar10;
  *(undefined4 *)(param_1 + 400) = uVar11;
  *(undefined4 *)(param_1 + 0x194) = uVar12;
  *(undefined4 *)(param_1 + 0x178) = uVar6;
  *(undefined4 *)(param_1 + 0x17c) = uVar7;
  *(undefined4 *)(param_1 + 0x180) = uVar8;
  *(undefined4 *)(param_1 + 0x184) = uVar9;
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
    uVar6 = *(undefined4 *)(param_2 + 0x1a4);
    uVar7 = *(undefined4 *)(param_2 + 0x1a8);
    uVar8 = *(undefined4 *)(param_2 + 0x1ac);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a4) = uVar6;
    *(undefined4 *)(param_1 + 0x1a8) = uVar7;
    *(undefined4 *)(param_1 + 0x1ac) = uVar8;
    *(undefined1 *)(param_1 + 0x1b8) = 1;
  }
  else if (*(char *)(param_1 + 0x1b8) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b8) = 0;
  }
LAB_1438619f8:
  uVar3 = *(undefined8 *)(param_2 + 0x1c0);
  lVar4 = *(longlong *)(param_2 + 0x1c8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar3;
  *(longlong *)(param_1 + 0x1c8) = lVar4;
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
  return param_1;
}



// FUNCTION 143861a5e FUN_143861a5e body=57 status=ok
// SIG undefined FUN_143861a5e(void)

void FUN_143861a5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb217d8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb217d8 = FUN_140002ddd(FUN_1464341cf,uVar1,L"GbxBrainAspectSettings_ReserveLineOfFire");
  }
  return;
}



// FUNCTION 143861aa6 FUN_143861aa6 body=169 status=ok
// SIG undefined FUN_143861aa6(void)

void FUN_143861aa6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  *param_2 = &PTR_FUN_14ac459e0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 143861b50 FUN_143861b50 body=57 status=ok
// SIG undefined FUN_143861b50(void)

void FUN_143861b50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb217f0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb217f0 = FUN_140002ddd(FUN_146434229,uVar1,L"GbxBrainAspect_ReserveLineOfFire");
  }
  return;
}



// FUNCTION 143861ba6 FUN_143861ba6 body=57 status=ok
// SIG undefined FUN_143861ba6(void)

void FUN_143861ba6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21880 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21880 = FUN_140002ddd(FUN_1464343d3,uVar1,L"GbxBrainAspectSettings_SetParam");
  }
  return;
}



// FUNCTION 143861bee FUN_143861bee body=152 status=ok
// SIG undefined FUN_143861bee(void)

void FUN_143861bee(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xf8);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14ac46220;
  return;
}



// FUNCTION 143861c86 FUN_143861c86 body=57 status=ok
// SIG undefined FUN_143861c86(void)

void FUN_143861c86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21898 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21898 = FUN_140002ddd(FUN_14643442d,uVar1,L"GbxBrainAspect_SetParam");
  }
  return;
}



// FUNCTION 143861cdc FUN_143861cdc body=162 status=ok
// SIG undefined FUN_143861cdc(void)

void FUN_143861cdc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  *param_2 = &PTR_FUN_14ac46600;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 143861d7e FUN_143861d7e body=57 status=ok
// SIG undefined FUN_143861d7e(void)

void FUN_143861d7e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb218c8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb218c8 = FUN_140002ddd(FUN_1464344e1,uVar1,L"GbxBrainAspect_Stance");
  }
  return;
}



// FUNCTION 143861dc6 FUN_143861dc6 body=57 status=ok
// SIG undefined FUN_143861dc6(void)

void FUN_143861dc6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb218e0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb218e0 = FUN_140002ddd(FUN_146434575,uVar1,L"GbxBrainAspectSettings_StopMoving");
  }
  return;
}



// FUNCTION 143861e0e FUN_143861e0e body=155 status=ok
// SIG undefined FUN_143861e0e(void)

void FUN_143861e0e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  *param_2 = &PTR_FUN_14ac469e0;
  return;
}



// FUNCTION 143861eaa FUN_143861eaa body=57 status=ok
// SIG undefined FUN_143861eaa(void)

void FUN_143861eaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb218f8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb218f8 = FUN_140002ddd(FUN_1464345cf,uVar1,L"GbxBrainAspect_StopMoving");
  }
  return;
}



// FUNCTION 143861ef2 FUN_143861ef2 body=57 status=ok
// SIG undefined FUN_143861ef2(void)

void FUN_143861ef2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21910 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21910 = FUN_140002ddd(FUN_146434629,uVar1,L"GbxBrainAspectSettings_Ticket");
  }
  return;
}



// FUNCTION 143861f3a FUN_143861f3a body=162 status=ok
// SIG undefined FUN_143861f3a(void)

void FUN_143861f3a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xd8);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14ac46e60;
  *(undefined4 *)(param_2 + 0x1b) = 0x7f7fffff;
  return;
}



// FUNCTION 143861fdc FUN_143861fdc body=57 status=ok
// SIG undefined FUN_143861fdc(void)

void FUN_143861fdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21928 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21928 = FUN_140002ddd(FUN_146434683,uVar1,L"GbxBrainAspect_Ticket");
  }
  return;
}



// FUNCTION 143862024 FUN_143862024 body=57 status=ok
// SIG undefined FUN_143862024(void)

void FUN_143862024(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21940 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21940 = FUN_140002ddd(FUN_1464346dd,uVar1,L"GbxBrainAspectSettings_Timer");
  }
  return;
}



// FUNCTION 14386206c FUN_14386206c body=193 status=ok
// SIG undefined FUN_14386206c(void)

void FUN_14386206c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x100);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14ac47240;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0xbf800000bf800000;
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}



// FUNCTION 14386212e FUN_14386212e body=57 status=ok
// SIG undefined FUN_14386212e(void)

void FUN_14386212e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21958 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21958 = FUN_140002ddd(FUN_146434737,uVar1,L"GbxBrainAspect_Timer");
  }
  return;
}



// FUNCTION 143862176 FUN_143862176 body=57 status=ok
// SIG undefined FUN_143862176(void)

void FUN_143862176(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21970 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21970 = FUN_140002ddd(FUN_146434791,uVar1,L"GbxBrainAspectSettings_UseCover");
  }
  return;
}



// FUNCTION 1438621be FUN_1438621be body=176 status=ok
// SIG undefined FUN_1438621be(void)

void FUN_1438621be(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xf8);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14ac476d0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 14386226e FUN_14386226e body=57 status=ok
// SIG undefined FUN_14386226e(void)

void FUN_14386226e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21988 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21988 = FUN_140002ddd(FUN_1464347eb,uVar1,L"GbxBrainAspect_UseCover");
  }
  return;
}



// FUNCTION 1438622b6 FUN_1438622b6 body=833 status=ok
// SIG undefined FUN_1438622b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438622b6(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cb21530 = 0x47efffffe0000000;
  _DAT_14cb21538 = 0x47efffffe0000000;
  _DAT_14cb21540 = 0x47efffffe0000000;
  _DAT_14cb21548 = 0x47efffffe0000000;
  _DAT_14cb21550 = 0x47efffffe0000000;
  _DAT_14cb21558 = 0x47efffffe0000000;
  _DAT_14cb21560 = 0x47efffffe0000000;
  _DAT_14cb21568 = 0x47efffffe0000000;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb21570 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac3d530);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14ac3d8c0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac3d8e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac3db10);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac3df30);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac3e280);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac3e460);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac3e6b0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14ac3ef40;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac3ef80);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac3f180);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14ac3f8a0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac3f8c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac3fbc0);
  ppuStack_60 = &PTR_FUN_14ac40450;
  local_68 = 3;
  uStack_58 = 4;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac404d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac406b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac40890);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac40b20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac41450);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac41750);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAI",0,0,&PTR_FUN_14ac419b0);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/GbxAI",&PTR_FUN_14ac429f0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438625f8 FUN_1438625f8 body=55 status=ok
// SIG undefined FUN_1438625f8(void)

void FUN_1438625f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21ab0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21ab0 = FUN_14171c317(FUN_14643544c,uVar1,L"EGbxBrainExec");
  }
  return;
}



// FUNCTION 14386262f FUN_14386262f body=55 status=ok
// SIG undefined FUN_14386262f(void)

void FUN_14386262f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21af8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21af8 = FUN_14171c317(FUN_146435572,uVar1,L"EGbxBrainTaskDebugShapeMode");
  }
  return;
}



// FUNCTION 143862666 FUN_143862666 body=55 status=ok
// SIG undefined FUN_143862666(void)

void FUN_143862666(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21b70 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21b70 = FUN_14171c317(FUN_1464357c0,uVar1,L"EGbxBrainTaskState");
  }
  return;
}



// FUNCTION 14386269d FUN_14386269d body=55 status=ok
// SIG undefined FUN_14386269d(void)

void FUN_14386269d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21b88 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21b88 = FUN_14171c317(FUN_1464357ef,uVar1,L"EGbxBrainTaskExecutionStage");
  }
  return;
}



// FUNCTION 1438626d4 FUN_1438626d4 body=55 status=ok
// SIG undefined FUN_1438626d4(void)

void FUN_1438626d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21ba0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21ba0 = FUN_14171c317(FUN_14643581e,uVar1,L"EGbxBrainTaskCanStartResult");
  }
  return;
}



// FUNCTION 14386270b FUN_14386270b body=55 status=ok
// SIG undefined FUN_14386270b(void)

void FUN_14386270b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21bb8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21bb8 = FUN_14171c317(FUN_14643584d,uVar1,L"EGbxBrainTaskResult");
  }
  return;
}


