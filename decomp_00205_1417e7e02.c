// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1417e7e02 FUN_1417e7e02 body=104 status=ok
// SIG undefined FUN_1417e7e02(void)

undefined8 FUN_1417e7e02(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48 [2];
  undefined8 local_38;
  undefined **local_28;
  undefined8 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = local_48;
  local_38 = 0;
  local_28 = &PTR_LAB_14aa2ac80;
  local_20 = in_stack_00000028;
  local_48[0] = FUN_14363fa76;
  FUN_140b24bb2();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e7e6c FUN_1417e7e6c body=54 status=ok
// SIG undefined FUN_1417e7e6c(void)

undefined1 FUN_1417e7e6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140a2b238(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1417e7ea2 FUN_1417e7ea2 body=31 status=ok
// SIG undefined FUN_1417e7ea2(void)

undefined1
FUN_1417e7ea2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_140a4b76c(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1417e7ec2 FUN_1417e7ec2 body=213 status=ok
// SIG undefined FUN_1417e7ec2(void)

undefined8 FUN_1417e7ec2(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)param_2 * 0x130;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x6c) {
        uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
      }
      else {
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
      }
    }
    else {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xd79435e50d79435f),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x130)) {
    uVar4 = uVar2 / 0x130 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x130,8);
  }
  return uVar3;
}



// FUNCTION 1417e7f98 FUN_1417e7f98 body=275 status=ok
// SIG undefined FUN_1417e7f98(void)

void FUN_1417e7f98(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1417e80ac FUN_1417e80ac body=29 status=ok
// SIG undefined FUN_1417e80ac(void)

undefined8 FUN_1417e80ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417e80ca FUN_1417e80ca body=326 status=ok
// SIG undefined FUN_1417e80ca(void)

void FUN_1417e80ca(ulonglong *param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  uint uVar6;
  LPVOID lpTlsValue;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = (uint)param_1[1];
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar2) {
      uVar6 = uVar2;
    }
  }
  else {
    uVar6 = (int)((ulonglong)uVar2 * 3 >> 3) + uVar2 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar2 <= (int)uVar6) {
    uVar8 = uVar6;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_146815189(uVar8,0x70);
  }
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar10 = DAT_14c7585d0 != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar10) {
      DVar5 = DAT_14c7585d0;
      DVar3 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar3;
    UNLOCK();
    if (bVar10) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar5;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_31);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  puVar1 = (ulonglong *)((longlong)lpTlsValue + 0x10);
  iVar4 = uVar8 * 0x70;
  uVar7 = *(longlong *)((longlong)lpTlsValue + 0x10) + 0xfU & 0xfffffffffffffff0;
  uVar9 = uVar7 + (longlong)iVar4;
  if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
    FUN_140023dd8(puVar1,iVar4 + 0x10);
    uVar7 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar9 = (longlong)iVar4 + uVar7;
  }
  *puVar1 = uVar9;
  *param_1 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417e8212 FUN_1417e8212 body=49 status=ok
// SIG undefined FUN_1417e8212(void)

longlong FUN_1417e8212(void)

{
  if (DAT_14caf7e60 == 0) {
    FUN_14073dd9a(&DAT_14caf7e60,&PTR_LAB_14aa2f0f0);
  }
  return DAT_14caf7e60;
}



// FUNCTION 1417e8244 FUN_1417e8244 body=142 status=ok
// SIG undefined FUN_1417e8244(void)

void FUN_1417e8244(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1c8);
  }
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e82ee FUN_1417e82ee body=42 status=ok
// SIG undefined FUN_1417e82ee(void)

void FUN_1417e82ee(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    FUN_140691d54(lVar1,param_1);
  }
  FUN_1407fb560(param_1);
  return;
}



// FUNCTION 1417e8318 FUN_1417e8318 body=45 status=ok
// SIG undefined FUN_1417e8318(void)

void FUN_1417e8318(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140475d9a();
  plVar1 = (longlong *)*plVar1;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001417e8342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  return;
}



// FUNCTION 1417e8346 FUN_1417e8346 body=511 status=ok
// SIG undefined FUN_1417e8346(void)

void FUN_1417e8346(undefined8 param_1,double *param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = *param_2;
  dVar1 = (double)FUN_144719204((double)param_4 - (double)param_3,0x4076800000000000);
  dVar3 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0)) * 0.5;
  dVar1 = (double)FUN_144719204((double)param_3 + dVar3,0x4076800000000000);
  dVar4 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  dVar1 = (double)FUN_144719204(dVar2 - dVar4,0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  dVar1 = (double)(~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1));
  if (dVar3 < dVar1) {
    dVar2 = dVar3 + dVar4;
  }
  else if (dVar1 < -dVar3) {
    dVar2 = dVar4 - dVar3;
  }
  dVar2 = (double)FUN_144719204(dVar2,0x4076800000000000);
  dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                  (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
  dVar2 = (double)(~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
                  (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2));
  *param_2 = dVar2;
  dVar2 = (double)FUN_144719204(dVar2,0x4076800000000000);
  *param_2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                     (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
  return;
}



// FUNCTION 1417e8546 FUN_1417e8546 body=514 status=ok
// SIG undefined FUN_1417e8546(void)

void FUN_1417e8546(undefined8 param_1,longlong param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = *(double *)(param_2 + 0x10);
  dVar1 = (double)FUN_144719204((double)param_4 - (double)param_3,0x4076800000000000);
  dVar4 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0)) * 0.5;
  dVar1 = (double)FUN_144719204((double)param_3 + dVar4,0x4076800000000000);
  dVar5 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  dVar1 = (double)FUN_144719204(dVar2 - dVar5,0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  dVar1 = (double)(~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1));
  if (dVar4 < dVar1) {
    dVar2 = dVar4 + dVar5;
  }
  else if (dVar1 < -dVar4) {
    dVar2 = dVar5 - dVar4;
  }
  dVar2 = (double)FUN_144719204(dVar2,0x4076800000000000);
  dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                  (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
  uVar3 = ~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
          (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2);
  *(ulonglong *)(param_2 + 0x10) = uVar3;
  dVar2 = (double)FUN_144719204(uVar3,0x4076800000000000);
  *(ulonglong *)(param_2 + 0x10) =
       ~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
       (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0);
  return;
}



// FUNCTION 1417e8748 FUN_1417e8748 body=514 status=ok
// SIG undefined FUN_1417e8748(void)

void FUN_1417e8748(undefined8 param_1,longlong param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = *(double *)(param_2 + 8);
  dVar1 = (double)FUN_144719204((double)param_4 - (double)param_3,0x4076800000000000);
  dVar4 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0)) * 0.5;
  dVar1 = (double)FUN_144719204((double)param_3 + dVar4,0x4076800000000000);
  dVar5 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  dVar1 = (double)FUN_144719204(dVar2 - dVar5,0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  dVar1 = (double)(~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1));
  if (dVar4 < dVar1) {
    dVar2 = dVar4 + dVar5;
  }
  else if (dVar1 < -dVar4) {
    dVar2 = dVar5 - dVar4;
  }
  dVar2 = (double)FUN_144719204(dVar2,0x4076800000000000);
  dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                  (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
  uVar3 = ~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
          (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2);
  *(ulonglong *)(param_2 + 8) = uVar3;
  dVar2 = (double)FUN_144719204(uVar3,0x4076800000000000);
  *(ulonglong *)(param_2 + 8) =
       ~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
       (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0);
  return;
}



// FUNCTION 1417e894a FUN_1417e894a body=49 status=ok
// SIG undefined FUN_1417e894a(void)

longlong FUN_1417e894a(void)

{
  if (DAT_14caf9cd8 == 0) {
    FUN_14073dd9a(&DAT_14caf9cd8,&PTR_LAB_14aa48bd0);
  }
  return DAT_14caf9cd8;
}



// FUNCTION 1417e897c FUN_1417e897c body=215 status=ok
// SIG undefined FUN_1417e897c(void)

void FUN_1417e897c(longlong *param_1,void **param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  void *_Src;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  if (&local_68 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    _Src = *param_2;
    uStack_60 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1446dd670(&local_68,uVar1,0);
      memcpy(local_68,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_58 = param_3;
  local_50 = param_4;
  uVar2 = FUN_14477b072(param_1,DAT_14caf9648);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_68);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e8a54 FUN_1417e8a54 body=67 status=ok
// SIG undefined FUN_1417e8a54(void)

undefined8 FUN_1417e8a54(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_1[0x7a] == param_2) && (iVar1 = FUN_14487fd02(), iVar1 != 3)) {
    if (param_1[0x87] == param_1[0x7a]) {
      return 1;
    }
    (**(code **)(*param_1 + 0xc78))(param_1);
  }
  return 0;
}



// FUNCTION 1417e8a98 FUN_1417e8a98 body=136 status=ok
// SIG undefined FUN_1417e8a98(void)

void FUN_1417e8a98(longlong *param_1,float param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x758))();
  if (cVar1 == '\0') {
    plVar2 = (longlong *)FUN_140389788();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    if ((*(byte *)(lVar3 + 0x48) & 0x40) == 0) {
      fVar4 = 1.0;
    }
    else {
      fVar4 = *(float *)((longlong)param_1 + 0x62c);
    }
    dVar5 = (double)(fVar4 * param_2);
  }
  else {
    dVar5 = 0.0;
  }
  param_1[0xc2] = (longlong)(dVar5 + (double)param_1[0xc2]);
  return;
}



// FUNCTION 1417e8b20 FUN_1417e8b20 body=136 status=ok
// SIG undefined FUN_1417e8b20(void)

void FUN_1417e8b20(longlong *param_1,float param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x758))();
  if (cVar1 == '\0') {
    plVar2 = (longlong *)FUN_140389788();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    if ((*(byte *)(lVar3 + 0x48) & 0x40) == 0) {
      fVar4 = 1.0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0xc5);
    }
    dVar5 = (double)(fVar4 * param_2);
  }
  else {
    dVar5 = 0.0;
  }
  param_1[0xc3] = (longlong)(dVar5 + (double)param_1[0xc3]);
  return;
}



// FUNCTION 1417e8ba8 FUN_1417e8ba8 body=326 status=ok
// SIG undefined FUN_1417e8ba8(void)

undefined8 * FUN_1417e8ba8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aa2fac0;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xc;
  if (*(int *)(param_1 + 0xd) == 0) {
LAB_1417e8bd8:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0xd) = 0;
      goto LAB_1417e8bd8;
    }
  }
  plVar1 = param_1 + 10;
  if (*(int *)(param_1 + 0xb) == 0) {
LAB_1417e8bee:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0xb) = 0;
      goto LAB_1417e8bee;
    }
  }
  plVar1 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1417e8c14;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1417e8c14:
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417e8cee FUN_1417e8cee body=22 status=ok
// SIG undefined FUN_1417e8cee(void)

undefined4 FUN_1417e8cee(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baee();
  return *(undefined4 *)(lVar1 + 0x210);
}



// FUNCTION 1417e8d04 FUN_1417e8d04 body=20 status=ok
// SIG undefined FUN_1417e8d04(void)

undefined1 FUN_1417e8d04(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baee();
  return *(undefined1 *)(lVar1 + 0xf8);
}



// FUNCTION 1417e8d18 FUN_1417e8d18 body=22 status=ok
// SIG undefined FUN_1417e8d18(void)

undefined4 FUN_1417e8d18(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baee();
  return *(undefined4 *)(lVar1 + 0xfc);
}



// FUNCTION 1417e8d2e FUN_1417e8d2e body=20 status=ok
// SIG undefined FUN_1417e8d2e(void)

undefined1 FUN_1417e8d2e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baee();
  return *(undefined1 *)(lVar1 + 0x100);
}



// FUNCTION 1417e8d42 FUN_1417e8d42 body=22 status=ok
// SIG undefined FUN_1417e8d42(void)

undefined4 FUN_1417e8d42(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baee();
  return *(undefined4 *)(lVar1 + 0x104);
}



// FUNCTION 1417e8d58 FUN_1417e8d58 body=20 status=ok
// SIG undefined FUN_1417e8d58(void)

undefined1 FUN_1417e8d58(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baee();
  return *(undefined1 *)(lVar1 + 0x108);
}



// FUNCTION 1417e8d6c FUN_1417e8d6c body=20 status=ok
// SIG undefined FUN_1417e8d6c(void)

undefined1 FUN_1417e8d6c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baee();
  return *(undefined1 *)(lVar1 + 0x110);
}



// FUNCTION 1417e8d80 FUN_1417e8d80 body=22 status=ok
// SIG undefined FUN_1417e8d80(void)

undefined4 FUN_1417e8d80(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baee();
  return *(undefined4 *)(lVar1 + 0xf4);
}



// FUNCTION 1417e8d96 FUN_1417e8d96 body=126 status=ok
// SIG undefined FUN_1417e8d96(void)

void FUN_1417e8d96(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_2 + 0x1c) < 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    FUN_147ca52a4(param_2 + 0x10);
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  if (*(int *)(param_2 + 0x2c) < 0) {
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_147ca52a4(param_2 + 0x20);
  }
  else {
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 1417e8e14 FUN_1417e8e14 body=277 status=ok
// SIG undefined FUN_1417e8e14(void)

undefined8 FUN_1417e8e14(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1417e8f23;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1417e8f23;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1417e8f23:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1417e8ed1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1417e8ed1;
    }
  }
  uVar6 = 0;
LAB_1417e8ed1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e8f2f FUN_1417e8f2f body=49 status=ok
// SIG undefined FUN_1417e8f2f(void)

longlong FUN_1417e8f2f(void)

{
  if (DAT_14cafa6a0 == 0) {
    FUN_14073dd9a(&DAT_14cafa6a0,&PTR_LAB_14aa50090);
  }
  return DAT_14cafa6a0;
}



// FUNCTION 1417e8f60 FUN_1417e8f60 body=149 status=ok
// SIG undefined FUN_1417e8f60(void)

void FUN_1417e8f60(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 1417e8ff5 FUN_1417e8ff5 body=139 status=ok
// SIG undefined FUN_1417e8ff5(void)

void FUN_1417e8ff5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1405ba846(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aa50c90;
  puVar1[0x79] = &PTR_FUN_14aa51300;
  FUN_144894d4c(puVar1 + 0x7a);
  (**(code **)(*(longlong *)puVar1[0x75] + 0x728))((longlong *)puVar1[0x75],DAT_14cad0f30,1);
  *(byte *)(puVar1[0x75] + 0x2d3) = *(byte *)(puVar1[0x75] + 0x2d3) | 4;
  *(undefined1 *)(puVar1[0x75] + 0x1fb) = 2;
  *(byte *)((longlong)puVar1 + 0xc9c) = *(byte *)((longlong)puVar1 + 0xc9c) | 1;
  *(undefined8 *)((longlong)puVar1 + 0xc94) = 0x3f80000042c80000;
  return;
}



// FUNCTION 1417e9086 FUN_1417e9086 body=52 status=ok
// SIG undefined FUN_1417e9086(void)

ulonglong FUN_1417e9086(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar1 != 0) {
    uVar2 = ((ulonglong)*(byte *)(lVar1 + 8) & 0xffffffffffffff04) >> 2;
  }
  return uVar2;
}



// FUNCTION 1417e90ba FUN_1417e90ba body=261 status=ok
// SIG undefined FUN_1417e90ba(void)

void FUN_1417e90ba(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined4 local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (local_58 == 0) {
    local_50 = (code *)0x0;
    local_58 = (**(code **)(param_1[0x57] + 0x18))(param_1 + 0x57);
    if (local_58 != 0) {
      local_60 = 1;
      local_68 = &local_58;
      FUN_14015671e(&local_50);
      local_70 = 1;
      local_78 = &local_58;
      FUN_146e2155e(local_38,&local_78,param_2);
      FUN_1448635f4(&local_50);
    }
  }
  else {
    *(undefined4 *)(local_58 + 0xa8) = param_2;
    local_48 = &local_58;
    local_50 = FUN_1436220d4;
    FUN_144966906(local_58 + 0x138);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e91c0 FUN_1417e91c0 body=261 status=ok
// SIG undefined FUN_1417e91c0(void)

void FUN_1417e91c0(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined4 local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (local_58 == 0) {
    local_50 = (code *)0x0;
    local_58 = (**(code **)(param_1[0x57] + 0x18))(param_1 + 0x57);
    if (local_58 != 0) {
      local_60 = 1;
      local_68 = &local_58;
      FUN_14015671e(&local_50);
      local_70 = 1;
      local_78 = &local_58;
      FUN_146e21644(local_38,&local_78,param_2);
      FUN_1448635f4(&local_50);
    }
  }
  else {
    *(undefined4 *)(local_58 + 0xac) = param_2;
    local_48 = &local_58;
    local_50 = FUN_1436220d4;
    FUN_144966906(local_58 + 0x138);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e92c6 FUN_1417e92c6 body=89 status=ok
// SIG undefined FUN_1417e92c6(void)

void FUN_1417e92c6(longlong *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_2,1,0xffffffff);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) & 0xfd | param_4 * '\x02';
    *(undefined4 *)(lVar1 + 0x9c) = param_3;
    FUN_14034b25c(lVar1);
    return;
  }
  return;
}



// FUNCTION 1417e9320 FUN_1417e9320 body=505 status=ok
// SIG undefined FUN_1417e9320(void)

ulonglong FUN_1417e9320(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  int local_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  int local_b0;
  ulonglong local_a8;
  int local_a0;
  undefined4 local_9c;
  ulonglong *local_98;
  undefined4 local_90;
  ulonglong local_88;
  undefined1 *local_80;
  ulonglong **local_78;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar4 == 0) {
    (**(code **)(param_1[0x57] + 0x20))(param_1 + 0x57,&local_a8);
    if (local_a0 == 0) {
      uVar6 = 0;
    }
    else {
      local_b8 = local_a8;
      local_b0 = local_a0;
      FUN_14015671e(&local_80);
      uVar6 = local_a8;
      local_c8 = 0;
      uStack_c0 = 0;
      if ((longlong)local_a0 != 0) {
        lVar4 = 0;
        do {
          local_88 = *(ulonglong *)(uVar6 + lVar4);
          local_90 = 1;
          local_98 = &local_88;
          cVar2 = FUN_144b06fd6(local_68,&local_98);
          uVar1 = uStack_c0;
          if (cVar2 == '\0') {
            lVar5 = (longlong)(int)uStack_c0;
            uVar3 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar3);
            if (uStack_c0._4_4_ < uVar3) {
              FUN_14075a758(&local_c8,uVar1 & 0xffffffff);
            }
            *(undefined8 *)(local_c8 + lVar5 * 8) = *(undefined8 *)(uVar6 + lVar4);
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)local_a0 * 8 != lVar4);
      }
      if (local_a8 != 0) {
        FUN_1400020a8(local_a8);
      }
      local_a8 = local_c8;
      local_a0 = (int)uStack_c0;
      local_9c = uStack_c0._4_4_;
      local_d8 = local_c8;
      local_d0 = (int)uStack_c0;
      uVar6 = FUN_140b2620e(local_68);
      FUN_1448635f4(&local_80);
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_98 = &local_a8;
    local_a8 = local_a8 & 0xffffffff00000000;
    local_78 = &local_98;
    local_80 = &LAB_14362051c;
    FUN_1448e6002(lVar4 + 0x138);
    uVar6 = local_a8 & 0xffffffff;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1417e951a FUN_1417e951a body=55 status=ok
// SIG undefined FUN_1417e951a(void)

void FUN_1417e951a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_140e1c5ee(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1417e9552 FUN_1417e9552 body=129 status=ok
// SIG undefined FUN_1417e9552(void)

ulonglong FUN_1417e9552(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar1 != 0) {
    local_11 = 0;
    local_20 = &local_30;
    local_28 = &LAB_143622136;
    local_30 = &local_11;
    FUN_1448e6002(lVar1 + 0x138);
    uVar2 = CONCAT71((int7)((ulonglong)&local_11 >> 8),local_11);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e95d4 FUN_1417e95d4 body=31 status=ok
// SIG undefined FUN_1417e95d4(void)

undefined8 FUN_1417e95d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1447f067c(param_3,param_2,1,0);
  return param_2;
}



// FUNCTION 1417e95f3 FUN_1417e95f3 body=526 status=ok
// SIG undefined FUN_1417e95f3(void)

longlong * FUN_1417e95f3(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)param_1[0x24];
  if (plVar4 != (longlong *)0x0) {
    if (DAT_14cac6e60 == 0) {
      local_50 = &local_38;
      local_38 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b47bc4;
      local_58 = &LAB_1478989f1;
      local_60 = &LAB_146391124;
      local_68 = L"Engine";
      local_70 = 0x10000000000;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) goto LAB_1417e965f;
  }
  plVar4 = (longlong *)0x0;
LAB_1417e965f:
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_2,0,0xffffffff);
  if (((lVar1 == 0 || param_4 != '\0') || (*(longlong *)(lVar1 + 0x108) != 0)) ||
     ((*(byte *)(lVar1 + 8) & 0x10) != 0)) {
    if (plVar4 == (longlong *)0x0) {
      lVar1 = 0;
      plVar3 = (longlong *)0x0;
    }
    else {
      while( true ) {
        plVar3 = plVar4;
        lVar1 = param_2;
        param_2 = plVar3[0x25];
        lVar2 = (**(code **)(*plVar3 + 0x7b8))(plVar3,lVar1,0,0xffffffff);
        if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x108) == 0)) ||
           (plVar4 = (longlong *)plVar3[0x24], plVar4 == (longlong *)0x0)) break;
        lVar2 = FUN_144a3a302();
        if ((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) break;
      }
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar1;
    }
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 1417e9802 FUN_1417e9802 body=53 status=ok
// SIG undefined FUN_1417e9802(void)

void FUN_1417e9802(longlong param_1,undefined1 param_2)

{
  *(undefined8 *)(param_1 + 0x454) = DAT_14cad0ef0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(byte *)(param_1 + 0x44d) = *(byte *)(param_1 + 0x44d) & 0xbf;
  *(undefined1 *)(param_1 + 0x425) = param_2;
  FUN_1400bcfd8(param_1 + 0x410);
  return;
}



// FUNCTION 1417e9838 FUN_1417e9838 body=43 status=ok
// SIG undefined FUN_1417e9838(void)

void FUN_1417e9838(longlong *param_1)

{
  FUN_1400bcfd8(param_1 + 0x82);
                    /* WARNING: Could not recover jumptable at 0x0001417e9860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x950))(param_1,0);
  return;
}



// FUNCTION 1417e9863 FUN_1417e9863 body=99 status=ok
// SIG undefined FUN_1417e9863(void)

undefined8 FUN_1417e9863(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(int *)(param_1 + 0xb0) == 1) && (-1 < *(int *)(param_1 + 0xe4))) &&
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x30))(),
     (*(byte *)(lVar1 + 0x28) & 0x40) != 0)) {
    lVar2 = FUN_14485b2b4(*(undefined8 *)(param_1 + 0xc0),param_2);
    lVar1 = 0;
    if ((*(longlong *)(lVar2 + 0x18) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x28), *(int *)(lVar1 + 0x118) < 1)) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1417e98c6 FUN_1417e98c6 body=758 status=ok
// SIG undefined FUN_1417e98c6(void)

void FUN_1417e98c6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  byte bVar9;
  void *_Dst;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined8 *local_c0;
  longlong local_b0;
  uint local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar5 = *(byte *)(param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar7 = *(uint *)(param_1 + 0x20);
  bVar9 = bVar5 + 1 & 0x1f;
  uVar11 = uVar7 << bVar9;
  if (uVar7 << bVar9 == 0) goto LAB_1417e9a71;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"FRawIndexBuffer";
  local_60 = 0;
  uStack_58 = 0;
  local_a0 = bVar5 + 2 + (uint)bVar5;
  local_9c = 0x8001;
  local_a4 = uVar11;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((uint7)(uint3)(local_74 >> 8),1));
    local_c0 = &local_98;
    local_c8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a4);
    *(undefined4 *)(local_b0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_c0 = &local_98;
    local_c8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a4);
    *(undefined4 *)(local_b0 + 0x18) = 0x78;
  }
  plVar2 = (longlong *)(param_1 + 0x10);
  if (plVar2 == &local_b0) {
LAB_1417e9b40:
    if (local_b0 != 0) {
      LOCK();
      puVar3 = (uint *)(local_b0 + 8);
      uVar4 = *puVar3;
      *puVar3 = *puVar3 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    lVar8 = *plVar2;
    *plVar2 = local_b0;
    local_b0 = 0;
    if (lVar8 != 0) {
      LOCK();
      puVar3 = (uint *)(lVar8 + 8);
      uVar4 = *puVar3;
      *puVar3 = *puVar3 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      goto LAB_1417e9b40;
    }
  }
  lVar8 = *plVar2;
  cVar6 = *(char *)(param_2 + 0x69);
  if (cVar6 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,1);
  local_c8 = uVar11;
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar8,0);
  if (cVar6 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (0 < (int)uVar7) {
      uVar10 = 0;
      do {
        *(undefined2 *)((longlong)_Dst + uVar10 * 2) = *(undefined2 *)(*plVar1 + uVar10 * 4);
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
  }
  else {
    memcpy(_Dst,(void *)*plVar1,(ulonglong)uVar11);
  }
  lVar8 = *plVar2;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar8);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar8);
  }
LAB_1417e9a71:
  if ((DAT_14c872bf0 == '\0') &&
     (*(undefined4 *)(param_1 + 0x20) = 0, *(int *)(param_1 + 0x24) != 0)) {
    FUN_14480809c(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e9bbe FUN_1417e9bbe body=1049 status=ok
// SIG undefined FUN_1417e9bbe(void)

longlong * FUN_1417e9bbe(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined8 *puVar8;
  uint *puVar9;
  size_t sVar10;
  uint uVar11;
  ulonglong *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  longlong local_b0;
  undefined8 local_a8;
  uint local_a0;
  uint local_98 [2];
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  uint local_6c;
  undefined1 local_68;
  undefined4 local_64;
  wchar_t *local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar2 = *(byte *)(param_1 + 0x3c);
  iVar4 = *(int *)(param_1 + 0x28);
  iVar14 = *(int *)(param_1 + 0x38);
  if (iVar14 < 0) {
    if (bVar2 == 0) {
      iVar14 = iVar4 / 2;
    }
    else {
      iVar14 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar14 = iVar4;
      }
      iVar14 = iVar14 >> 2;
    }
  }
  if (iVar14 < 1) {
    *param_2 = 0;
  }
  else {
    uVar11 = 1;
    if ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) == 0) {
      bVar7 = FUN_147430c75();
      uVar11 = (uint)bVar7;
    }
    bVar7 = *(byte *)(param_1 + 0x30);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cafda50) {
      FUN_144b3d300(&DAT_14cafda50);
      if (DAT_14cafda50 == -1) {
        DAT_14cafda40 = 0x800000014a3d4638;
        local_90 = CONCAT44(local_90._4_4_,0x17);
        DAT_14cafda48 = FUN_14577453c();
        DAT_14cafda4c = 1;
        _Init_thread_footer(&DAT_14cafda50);
      }
    }
    lVar1 = param_1 + 0x18;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cafda68) {
      FUN_144b3d300(&DAT_14cafda68);
      if (DAT_14cafda68 == -1) {
        DAT_14cafda58 = 0x800000014a3d4608;
        local_90 = CONCAT44(local_90._4_4_,0x17);
        DAT_14cafda60 = FUN_14577453c();
        DAT_14cafda64 = 1;
        _Init_thread_footer(&DAT_14cafda68);
      }
    }
    iVar14 = (uint)bVar2 * 2 + 2;
    cVar3 = *(char *)(param_1 + 0x3c);
    local_60 = L"FRawStaticIndexBuffer16";
    if (cVar3 != '\0') {
      local_60 = L"FRawStaticIndexBuffer32";
    }
    local_90 = 0;
    local_80 = 1;
    local_7c = 0;
    uStack_74 = 0;
    local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_64 = 0;
    local_58 = 0;
    puVar13 = &DAT_14cafda58;
    puVar12 = &DAT_14cafda58;
    if (cVar3 != '\0') {
      puVar12 = &DAT_14cafda40;
    }
    uVar6 = *puVar12;
    local_88 = lVar1;
    if ((longlong)uVar6 < 0) {
      puVar8 = &DAT_14cafda58;
      if (cVar3 != '\0') {
        puVar8 = &DAT_14cafda40;
      }
      local_a8 = (char *)(uVar6 & 0x7fffffffffffffff);
      local_b0 = param_3;
      if ((*(byte *)((longlong)puVar8 + 0xc) & 1) == 0) {
        if (local_a8 == (char *)0x0) {
          local_a0 = 0;
        }
        else {
          sVar10 = strlen(local_a8);
          local_a0 = (uint)sVar10;
        }
        FUN_14001c09c(local_98,&local_a8,1);
        puVar9 = local_98;
      }
      else {
        FUN_1446f470e(&local_a8,local_a8,1);
        puVar9 = (uint *)&local_a8;
      }
      uVar5 = *puVar9;
      *puVar12 = (ulonglong)uVar5;
      if (cVar3 != '\0') {
        puVar13 = &DAT_14cafda40;
      }
      local_58 = CONCAT44(*(undefined4 *)(puVar13 + 1),uVar5);
      param_3 = local_b0;
    }
    else {
      if (cVar3 != '\0') {
        puVar13 = &DAT_14cafda40;
      }
      local_58 = uVar6 & 0xffffffff | (ulonglong)*(uint *)(puVar13 + 1) << 0x20;
    }
    local_50 = 0;
    local_68 = iVar4 == 0;
    if ((bool)local_68) {
      iVar14 = 0;
    }
    local_a0 = 0x100000;
    if (!(bool)local_68) {
      local_a0 = (uVar11 | bVar7) << 8 | 0x8001;
    }
    local_a8 = (char *)CONCAT44(iVar14,iVar4);
    if (*(char *)(param_3 + 0x69) == '\0') {
      FUN_14002049c(param_3,1);
      local_c0 = &local_90;
      local_c8 = 0x78;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_2,param_3,&local_a8);
      *(undefined4 *)(*param_2 + 0x18) = 0x78;
      FUN_14002049c(param_3,0);
    }
    else {
      local_c0 = &local_90;
      local_c8 = 0x78;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_2,param_3,&local_a8);
      *(undefined4 *)(*param_2 + 0x18) = 0x78;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ea000 FUN_1417ea000 body=373 status=ok
// SIG undefined FUN_1417ea000(void)

void FUN_1417ea000(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417ea08b;
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
LAB_1417ea08b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1417ea19e FUN_1417ea19e body=353 status=ok
// SIG undefined FUN_1417ea19e(void)

void FUN_1417ea19e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417ea223;
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
LAB_1417ea223:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417ea300 FUN_1417ea300 body=345 status=ok
// SIG undefined FUN_1417ea300(void)

void FUN_1417ea300(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417ea381;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_1417ea381:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 1417ea45a FUN_1417ea45a body=149 status=ok
// SIG undefined FUN_1417ea45a(void)

void FUN_1417ea45a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
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
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 1417ea4f0 FUN_1417ea4f0 body=226 status=ok
// SIG undefined FUN_1417ea4f0(void)

void FUN_1417ea4f0(char *param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  pcVar2 = *(char **)param_2[1];
  if ((char *)((undefined8 *)param_2[1])[1] < pcVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *pcVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 == (undefined8 *)0x0) {
    cVar1 = *param_1;
    puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *(undefined4 *)(puVar3 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)puVar3 + 0xc) = 0x105;
    *(undefined1 *)((longlong)puVar3 + 0xe) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    if (cVar1 == '\x02') {
      ppuVar4 = &PTR_FUN_14a3d4440;
      *puVar3 = &PTR_FUN_14a3d4440;
      puVar3[5] = 0;
      puVar3[6] = 0;
      ppuVar5 = &PTR_FUN_14a3d46e0;
    }
    else {
      ppuVar4 = &PTR_FUN_14a3d4570;
      *puVar3 = &PTR_FUN_14a3d4570;
      puVar3[5] = 0;
      puVar3[6] = 0;
      ppuVar5 = &PTR_FUN_14a355380;
    }
    puVar3[4] = ppuVar5;
    *(undefined1 *)(puVar3 + 7) = param_3;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined8 **)(param_1 + 8) = puVar3;
  }
  else {
    ppuVar4 = (undefined **)*puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001417ea59a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)ppuVar4[7])(puVar3,param_2,ppuVar4[7]);
  return;
}



// FUNCTION 1417ea5d2 FUN_1417ea5d2 body=381 status=ok
// SIG undefined FUN_1417ea5d2(void)

longlong FUN_1417ea5d2(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  undefined1 auStack_238 [32];
  undefined **local_218 [17];
  longlong local_190;
  char local_70;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  memset(local_218,0,0x1e0);
  FUN_1401ea154(local_218);
  local_218[0] = &PTR_FUN_14a975858;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  FUN_1401ea2d0(local_218,param_3);
  FUN_1401eba66(param_1,param_2,local_218,&local_58);
  plVar3 = plStack_50;
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfd;
  *(undefined4 *)(param_1 + 0x348) = local_48._4_4_;
  local_218[0] = &PTR_FUN_14a975858;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_70 == '\x01') {
    local_70 = '\0';
  }
  local_218[0] = &PTR_FUN_14a9758a8;
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  bVar4 = *(byte *)(param_1 + 0x74);
  *(byte *)(param_1 + 0x74) = bVar4 | 0x40;
  if (*(char *)(param_3 + 0xca0) == '\x01') {
    *(undefined1 *)(param_1 + 700) = 4;
    bVar4 = 4;
  }
  else if (*(char *)(param_3 + 0xca0) == '\0') {
    *(undefined1 *)(param_1 + 700) = 8;
    *(byte *)(param_1 + 0x74) = bVar4 | 0xc0;
    bVar4 = 8;
  }
  else {
    *(undefined1 *)(param_1 + 700) = 2;
    bVar4 = 2;
  }
  *(byte *)(param_1 + 700) = ((*(char *)(param_3 + 0x1fb) != '\0') << 5 | bVar4) + 0x20;
  if ((local_38 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ea750 FUN_1417ea750 body=335 status=ok
// SIG undefined FUN_1417ea750(void)

undefined8 FUN_1417ea750(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  undefined8 local_80 [2];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40 [3];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_2 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_80[0] = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(local_80,&local_b0);
  local_80[0] = CONCAT44(local_80[0]._4_4_,3);
  local_70 = (undefined4)local_b0;
  uStack_6c = local_b0._4_4_;
  uStack_68 = (undefined4)uStack_a8;
  uStack_64 = uStack_a8._4_4_;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1401031ac(param_2,0,&local_c8);
  local_60 = 3;
  local_50 = (undefined4)local_c8;
  uStack_4c = local_c8._4_4_;
  uStack_48 = (undefined4)uStack_c0;
  uStack_44 = uStack_c0._4_4_;
  local_c8 = 0;
  uStack_c0 = 0;
  local_98 = local_40;
  local_a0 = local_80;
  FUN_1407adb6e(&local_90);
  FUN_140230a63();
  FUN_140230ad0(&DAT_14c8731a8,param_1,L"{0} - {1}",&local_90);
  FUN_1407adb3e(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  if ((local_40[0] ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ea8a0 FUN_1417ea8a0 body=255 status=ok
// SIG undefined FUN_1417ea8a0(void)

undefined8 * FUN_1417ea8a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  
  uVar4 = 0;
  lVar2 = FUN_144735dd8(param_2,param_1 + 0x268,0);
  if ((*(byte *)(lVar2 + 0x68) & 0x80) != 0) {
    uVar4 = 0x1c;
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar3) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x50);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar3;
  puVar5[1] = *(undefined8 *)(lVar2 + 8);
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 3;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
  *puVar5 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar5 + 5) = uVar4;
  *(undefined8 *)((longlong)puVar5 + 0x2c) = 0xffffffff00000000;
  puVar5[7] = 0;
  puVar5[8] = lVar2;
  iVar1 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar1 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar1 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  return puVar5;
}



// FUNCTION 1417ea9a0 FUN_1417ea9a0 body=1422 status=ok
// SIG undefined FUN_1417ea9a0(void)

longlong * FUN_1417ea9a0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  size_t sVar4;
  char *pcVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  longlong local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caffe80) {
    FUN_144b3d300(&DAT_14caffe80);
    if (DAT_14caffe80 == -1) {
      DAT_14caffe70 = 0x800000014aa66c40;
      local_88 = CONCAT44(local_88._4_4_,0x1b);
      DAT_14caffe78 = FUN_14577453c();
      DAT_14caffe7c = '\x01';
      _Init_thread_footer(&DAT_14caffe80);
    }
  }
  if (*(uint *)(param_1 + 0x20) < 0x40000000) {
    uVar6 = *(uint *)(param_1 + 0x20) << 2;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,4);
    uVar6 = 0;
  }
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"VertexToEdgeData";
  local_50 = 0;
  uStack_48 = 0;
  if ((longlong)DAT_14caffe70 < 0) {
    pcVar5 = (char *)(DAT_14caffe70 & 0x7fffffffffffffff);
    if (DAT_14caffe7c == '\x01') {
      puVar7 = &local_a0;
      FUN_1446f470e(puVar7,pcVar5,1);
    }
    else {
      local_a0 = (uint)pcVar5;
      uStack_9c = (undefined4)((ulonglong)pcVar5 >> 0x20);
      if (pcVar5 == (char *)0x0) {
        uStack_98 = 0;
      }
      else {
        sVar4 = strlen(pcVar5);
        uStack_98 = (undefined4)sVar4;
      }
      puVar7 = (uint *)&local_90;
      FUN_14001c09c(puVar7,&local_a0,1);
    }
    uVar3 = (ulonglong)*puVar7;
    local_50 = (ulonglong)DAT_14caffe78 << 0x20;
    DAT_14caffe70 = uVar3;
  }
  else {
    uVar3 = (ulonglong)DAT_14caffe78 << 0x20;
    local_50 = DAT_14caffe70 & 0xffffffff;
  }
  local_50 = local_50 | uVar3;
  uStack_48 = 0;
  if (uVar6 != 0) {
    lStack_80 = param_1 + 0x10;
  }
  local_a0 = 4;
  if (4 < uVar6) {
    local_a0 = uVar6;
  }
  uStack_9c = 4;
  uStack_98 = 0x10101;
  if (*(char *)(param_3 + 0x69) == '\0') {
    FUN_14002049c(param_3,1);
    local_b0 = &local_88;
    local_b8 = 0x70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_3,&local_a0);
    *(undefined4 *)(local_90 + 0x18) = 0x70;
    FUN_14002049c(param_3,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = 0x70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_3,&local_a0);
    *(undefined4 *)(local_90 + 0x18) = 0x70;
  }
  if (&local_90 == param_2) {
    if (local_90 != 0) {
      LOCK();
      puVar7 = (uint *)(local_90 + 8);
      uVar6 = *puVar7;
      *puVar7 = *puVar7 - 1;
      UNLOCK();
      if ((uVar6 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    *param_2 = local_90;
  }
  if (*(uint *)(param_1 + 0x40) < 0x40000000) {
    uVar6 = *(uint *)(param_1 + 0x40) << 2;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,4);
    uVar6 = 0;
  }
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"EdgeToTwinEdgeData";
  local_50 = 0;
  if ((longlong)DAT_14caffe70 < 0) {
    pcVar5 = (char *)(DAT_14caffe70 & 0x7fffffffffffffff);
    if (DAT_14caffe7c == '\x01') {
      puVar7 = &local_a0;
      FUN_1446f470e(puVar7,pcVar5,1);
    }
    else {
      local_a0 = (uint)pcVar5;
      uStack_9c = (undefined4)((ulonglong)pcVar5 >> 0x20);
      if (pcVar5 == (char *)0x0) {
        uStack_98 = 0;
      }
      else {
        sVar4 = strlen(pcVar5);
        uStack_98 = (undefined4)sVar4;
      }
      puVar7 = (uint *)&local_90;
      FUN_14001c09c(puVar7,&local_a0,1);
    }
    uVar3 = (ulonglong)*puVar7;
    local_50 = (ulonglong)DAT_14caffe78 << 0x20;
    DAT_14caffe70 = uVar3;
  }
  else {
    uVar3 = (ulonglong)DAT_14caffe78 << 0x20;
    local_50 = DAT_14caffe70 & 0xffffffff;
  }
  local_50 = local_50 | uVar3;
  uStack_48 = 0;
  if (uVar6 != 0) {
    lStack_80 = param_1 + 0x30;
  }
  plVar1 = param_2 + 1;
  local_a0 = 4;
  if (4 < uVar6) {
    local_a0 = uVar6;
  }
  uStack_9c = 4;
  uStack_98 = 0x10101;
  if (*(char *)(param_3 + 0x69) == '\0') {
    FUN_14002049c(param_3,1);
    local_b0 = &local_88;
    local_b8 = 0x70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_3,&local_a0);
    *(undefined4 *)(local_90 + 0x18) = 0x70;
    FUN_14002049c(param_3,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = 0x70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_3,&local_a0);
    *(undefined4 *)(local_90 + 0x18) = 0x70;
  }
  if (plVar1 != &local_90) {
    lVar2 = *plVar1;
    *plVar1 = local_90;
    local_90 = 0;
    if (lVar2 == 0) goto LAB_1417eac20;
    LOCK();
    puVar7 = (uint *)(lVar2 + 8);
    uVar6 = *puVar7;
    *puVar7 = *puVar7 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar7 = (uint *)(local_90 + 8);
    uVar6 = *puVar7;
    *puVar7 = *puVar7 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1417eac20:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417eaf30 FUN_1417eaf30 body=445 status=ok
// SIG undefined FUN_1417eaf30(void)

void FUN_1417eaf30(longlong param_1,longlong *param_2,longlong param_3)

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
  
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*param_2 != 0)) {
    iVar4 = *(int *)(param_3 + 0x10);
    lVar10 = (longlong)iVar4;
    *(uint *)(param_3 + 0x10) = iVar4 + 1U;
    if (*(uint *)(param_3 + 0x14) < iVar4 + 1U) {
      FUN_14742d27e((longlong *)(param_3 + 8),iVar4);
    }
    lVar5 = *(longlong *)(param_3 + 8);
    lVar6 = *param_2;
    *(undefined8 *)(lVar5 + lVar10 * 0x18) = *(undefined8 *)(param_1 + 0x50);
    *(longlong *)(lVar5 + 8 + lVar10 * 0x18) = lVar6;
    *(undefined1 *)(lVar5 + 0x10 + lVar10 * 0x18) = 0;
  }
  if ((*(longlong *)(param_1 + 0x60) != 0) && (param_2[1] != 0)) {
    iVar4 = *(int *)(param_3 + 0x10);
    lVar10 = (longlong)iVar4;
    *(uint *)(param_3 + 0x10) = iVar4 + 1U;
    if (*(uint *)(param_3 + 0x14) < iVar4 + 1U) {
      FUN_14742d27e((longlong *)(param_3 + 8),iVar4);
    }
    lVar5 = *(longlong *)(param_3 + 8);
    lVar6 = param_2[1];
    *(undefined8 *)(lVar5 + lVar10 * 0x18) = *(undefined8 *)(param_1 + 0x60);
    *(longlong *)(lVar5 + 8 + lVar10 * 0x18) = lVar6;
    *(undefined1 *)(lVar5 + 0x10 + lVar10 * 0x18) = 0;
  }
  lVar10 = param_2[1];
  if (lVar10 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar10 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar10 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
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
  lVar10 = *param_2;
  if (lVar10 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar10 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar10 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
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
  return;
}



// FUNCTION 1417eb0ee FUN_1417eb0ee body=364 status=ok
// SIG undefined FUN_1417eb0ee(void)

void FUN_1417eb0ee(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x60);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
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



// FUNCTION 1417eb25a FUN_1417eb25a body=147 status=ok
// SIG undefined FUN_1417eb25a(void)

void FUN_1417eb25a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 1417eb2ee FUN_1417eb2ee body=190 status=ok
// SIG undefined FUN_1417eb2ee(void)

void FUN_1417eb2ee(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  plVar2 = (longlong *)FUN_140564ffa(param_2,param_1 + 0x20);
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,(undefined4 *)(param_1 + 0x40),4);
    }
    else {
      FUN_14572512c(plVar2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  puVar3 = (undefined4 *)(param_1 + 0x44);
  puVar1 = *(undefined4 **)plVar2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)plVar2[1])[1]) {
    *puVar3 = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001417eb38e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x170))(plVar2,puVar3,4);
    return;
  }
  FUN_14572512c(plVar2,puVar3);
  return;
}



// FUNCTION 1417eb3ac FUN_1417eb3ac body=65 status=ok
// SIG undefined FUN_1417eb3ac(void)

void FUN_1417eb3ac(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 1417eb3ee FUN_1417eb3ee body=147 status=ok
// SIG undefined FUN_1417eb3ee(void)

void FUN_1417eb3ee(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 1417eb482 FUN_1417eb482 body=45 status=ok
// SIG undefined FUN_1417eb482(void)

void FUN_1417eb482(longlong param_1)

{
  FUN_140414380(param_1 + 0x48,&DAT_14cb00c08);
  FUN_140414380(param_1,&DAT_14cb00c08);
  return;
}



// FUNCTION 1417eb4b0 FUN_1417eb4b0 body=40 status=ok
// SIG undefined FUN_1417eb4b0(void)

undefined8 FUN_1417eb4b0(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417eb4d8 FUN_1417eb4d8 body=40 status=ok
// SIG undefined FUN_1417eb4d8(void)

undefined8 FUN_1417eb4d8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417eb500 FUN_1417eb500 body=356 status=ok
// SIG undefined FUN_1417eb500(void)

void FUN_1417eb500(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417eb585;
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
LAB_1417eb585:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1417eb666 FUN_1417eb666 body=637 status=ok
// SIG undefined FUN_1417eb666(void)

void FUN_1417eb666(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
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
    local_50 = DAT_14caffef8;
    if (DAT_14caffef8 != 0) {
      LOCK();
      *(int *)(DAT_14caffef8 + 8) = *(int *)(DAT_14caffef8 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14caffeb0;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,param_4);
    *puVar16 = &PTR_FUN_14aa67fc0;
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
    local_50 = DAT_14caffef8;
    if (DAT_14caffef8 != 0) {
      LOCK();
      *(int *)(DAT_14caffef8 + 8) = *(int *)(DAT_14caffef8 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14caffeb0;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14aa67fc0;
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
    *puVar16 = &PTR_FUN_14aa67fa0;
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



// FUNCTION 1417eb8e4 FUN_1417eb8e4 body=40 status=ok
// SIG undefined FUN_1417eb8e4(void)

undefined8 FUN_1417eb8e4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417eb90c FUN_1417eb90c body=40 status=ok
// SIG undefined FUN_1417eb90c(void)

undefined8 FUN_1417eb90c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417eb934 FUN_1417eb934 body=40 status=ok
// SIG undefined FUN_1417eb934(void)

undefined8 FUN_1417eb934(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417eb95c FUN_1417eb95c body=148 status=ok
// SIG undefined FUN_1417eb95c(void)

void FUN_1417eb95c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0x30);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x30);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0x30);
  return;
}



// FUNCTION 1417eb9f0 FUN_1417eb9f0 body=128 status=ok
// SIG undefined FUN_1417eb9f0(void)

void FUN_1417eb9f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1400ea36e(param_1 + 0x20,param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1417eba70 FUN_1417eba70 body=574 status=ok
// SIG undefined FUN_1417eba70(void)

void FUN_1417eba70(void)

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
  if (DAT_14cb01118 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb01118,0,0,4);
  }
  uVar4 = DAT_14cb01120;
  if (DAT_14cb01120 != 0) {
    FUN_144a1cbf0(&DAT_14cb01110,0,DAT_14cb01120,4);
    if (0 < (int)uVar4) {
      uVar2 = 0;
      do {
        puVar6 = DAT_14cb01118;
        if (DAT_14cb01118 == (undefined *)0x0) {
          puVar6 = &DAT_14cb01110;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb01120 + 0x7fffffff & uVar2) * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cb010e8;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cb01100 == 0) {
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
        lVar10 = DAT_14cb010d8;
        lVar9 = (longlong)iVar5;
        uVar12 = (longlong)(int)DAT_14cb01120 - 1U &
                 (longlong)*(int *)(DAT_14cb010d8 + lVar9 * 0x18);
        iVar11 = (int)uVar12;
        *(int *)(DAT_14cb010d8 + 0x14 + lVar9 * 0x18) = iVar11;
        puVar6 = DAT_14cb01118;
        if (DAT_14cb01118 == (undefined *)0x0) {
          puVar6 = &DAT_14cb01110;
        }
        *(undefined4 *)(lVar10 + 0x10 + lVar9 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb01120 - 1U & uVar12) * 4);
        puVar6 = DAT_14cb01118;
        if (DAT_14cb01118 == (undefined *)0x0) {
          puVar6 = &DAT_14cb01110;
        }
        *(int *)(puVar6 + ((longlong)iVar11 & (longlong)(int)DAT_14cb01120 - 1U) * 4) = iVar5;
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
            if (iVar1 - lVar10 == lVar9) goto LAB_1417ebc6a;
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
LAB_1417ebc6a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ebcb0 FUN_1417ebcb0 body=66 status=ok
// SIG undefined FUN_1417ebcb0(void)

undefined8 * FUN_1417ebcb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa68e10;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ebcf2 FUN_1417ebcf2 body=296 status=ok
// SIG undefined FUN_1417ebcf2(void)

void FUN_1417ebcf2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
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
  FUN_14010eabe(param_1 + 0x10);
  FUN_14010eabe(param_1 + 0x28);
  return;
}



// FUNCTION 1417ebe1a FUN_1417ebe1a body=304 status=ok
// SIG undefined FUN_1417ebe1a(void)

undefined8 FUN_1417ebe1a(longlong param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  uint local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  undefined2 local_2a;
  char local_28;
  undefined2 local_27;
  byte local_25;
  undefined2 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = 0;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    local_28 = (char)param_2;
    bVar3 = *(char *)(param_1 + 0x5b) - local_28;
    local_25 = *(byte *)(param_1 + 0x84);
    uVar1 = *(uint *)((longlong)&DAT_14c87341c + (ulonglong)((uint)local_25 * 0x30));
    uVar5 = *(uint *)((longlong)&DAT_14c873420 + (ulonglong)((uint)local_25 * 0x30));
    uVar6 = *(uint *)(param_1 + 0x6c) >> (bVar3 & 0x1f);
    if (uVar6 < uVar5) {
      uVar6 = uVar5;
    }
    uVar5 = *(uint *)(param_1 + 0x68) >> (bVar3 & 0x1f);
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
    local_2a = *(undefined2 *)(param_1 + 0x70);
    local_34 = CONCAT44(uVar6,uVar5);
    local_3c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_58 = *(undefined8 *)(param_1 + 0x88);
    local_38 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x10);
    local_24 = 0xff00;
    local_2c = 1;
    local_27 = 0x101;
    local_50 = 1;
    local_4c = 0;
    uStack_44 = 0;
    cVar2 = FUN_14490ad04(&local_58,&DAT_149dfb77a,0);
    uVar4 = 0;
    if (cVar2 != '\0') {
      (**(code **)(*DAT_14ca83900 + 0x180))(DAT_14ca83900,local_68,&local_58,0);
      uVar4 = local_68[0];
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ebf4c FUN_1417ebf4c body=263 status=ok
// SIG undefined FUN_1417ebf4c(void)

void FUN_1417ebf4c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    FUN_1406f6d7e(param_1);
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))
              (DAT_14ca83900,&DAT_14ca85100,*(longlong *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x10));
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x18);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x18) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
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
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x20);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x20) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1417ec054 FUN_1417ec054 body=670 status=ok
// SIG undefined FUN_1417ec054(void)

undefined8 FUN_1417ec054(longlong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70 [2];
  ulonglong local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  uint local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  byte local_30;
  undefined2 local_2f;
  byte local_2d;
  undefined2 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = 0;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb019d8) {
      FUN_144b3d300(&DAT_14cb019d8);
      if (DAT_14cb019d8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar4 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.VirtualTextureReducedMemory",1);
        if (plVar4 == (longlong *)0x0) {
          DAT_14cb019d0 = 0;
        }
        else {
          DAT_14cb019d0 = (**(code **)(*plVar4 + 0x68))(plVar4);
        }
        _Init_thread_footer(&DAT_14cb019d8);
      }
    }
    if ((*(char *)(param_1 + 0x90) == '\x01') &&
       ((*(int *)(DAT_14cb019d0 + 4) == 0 || (*(byte *)(param_1 + 0x59) < param_2)))) {
      local_2d = *(byte *)(param_1 + 0x84);
      local_3c = *(undefined8 *)(param_1 + 0x68);
      local_44 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_54 = 0;
      uStack_4c = 0;
      bVar5 = *(byte *)(param_1 + 0x5b);
      local_60 = *(ulonglong *)(param_1 + 0x88) | 0x800000;
      local_2c = 0xff00;
      local_34 = 0x10001;
      local_2f = 1;
      local_58 = 1;
      local_40 = 0;
      uVar7 = 0;
      local_30 = bVar5;
      cVar2 = FUN_14490ad04(&local_60,&DAT_149dfb77a,0);
      if (cVar2 == '\0') goto LAB_1417ec197;
      iVar8 = bVar5 - param_2;
      lVar3 = *DAT_14ca83900;
    }
    else {
      bVar5 = *(char *)(param_1 + 0x5b) - *(char *)(param_1 + 0x5e);
      local_2d = *(byte *)(param_1 + 0x84);
      uVar1 = *(uint *)((longlong)&DAT_14c87341c + (ulonglong)((uint)local_2d * 0x30));
      uVar6 = *(uint *)((longlong)&DAT_14c873420 + (ulonglong)((uint)local_2d * 0x30));
      uVar9 = *(uint *)(param_1 + 0x6c) >> (bVar5 & 0x1f);
      if (uVar9 < uVar6) {
        uVar9 = uVar6;
      }
      uVar6 = *(uint *)(param_1 + 0x68) >> (bVar5 & 0x1f);
      if (uVar6 < uVar1) {
        uVar6 = uVar1;
      }
      local_3c = CONCAT44(uVar9,uVar6);
      local_44 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_60 = *(ulonglong *)(param_1 + 0x88);
      local_40 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x10);
      local_2c = 0xff00;
      local_34 = 0x10001;
      local_30 = (byte)param_2;
      local_2f = 1;
      local_58 = 1;
      local_54 = 0;
      uStack_4c = 0;
      cVar2 = FUN_14490ad04(&local_60,&DAT_149dfb77a,0);
      uVar7 = 0;
      if (cVar2 == '\0') goto LAB_1417ec197;
      lVar3 = *DAT_14ca83900;
      iVar8 = 0;
    }
    (**(code **)(lVar3 + 0x180))(DAT_14ca83900,local_70,&local_60,iVar8);
    uVar7 = local_70[0];
  }
LAB_1417ec197:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ec2f4 FUN_1417ec2f4 body=75 status=ok
// SIG undefined FUN_1417ec2f4(void)

void FUN_1417ec2f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = -0x78;
  do {
    if (*(longlong *)(param_1 + 0x80 + lVar1) != 0) {
      FUN_1400020a8();
      *(undefined8 *)(param_1 + 0x80 + lVar1) = 0;
    }
    *(undefined8 *)(param_1 + 0xf8 + lVar1) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1417ec340 FUN_1417ec340 body=762 status=ok
// SIG undefined FUN_1417ec340(void)

void FUN_1417ec340(longlong param_1,longlong *param_2,int param_3,int param_4,longlong param_5,
                  short param_6,char param_7,longlong *param_8)

{
  longlong lVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  int local_a0;
  char local_98;
  void **local_90;
  int local_7c;
  int local_78;
  int local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  do {
    if (param_4 <= param_3) {
      if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    lVar1 = *(longlong *)(param_1 + 0x38) + (longlong)param_3 * 0x20;
    if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x1c + (longlong)param_3 * 0x20) == '\0') {
      local_68 = (longlong)*(int *)(lVar1 + 0xc);
      local_60 = *(longlong *)(param_5 + local_68);
      local_58 = (void *)0x0;
      uStack_50 = 0;
      if (*(int *)(param_5 + 8 + local_68) < 1) {
LAB_1417ec55f:
        if (param_7 != '\0') {
          sVar2 = *(short *)(lVar1 + 0x14);
          iVar5 = (int)param_8[1];
          *(uint *)(param_8 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_8 + 0xc) < iVar5 + 1U) {
            FUN_14488eebe(param_8,iVar5);
          }
          *(short *)(*param_8 + (longlong)iVar5 * 2) = sVar2 + param_6;
          iVar5 = (int)param_8[1];
          *(uint *)(param_8 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_8 + 0xc) < iVar5 + 1U) {
            FUN_14488eebe(param_8,iVar5);
          }
          *(undefined2 *)(*param_8 + (longlong)iVar5 * 2) = 0;
          goto LAB_1417ec5aa;
        }
      }
      else {
        local_70 = *(longlong *)(*param_2 + -8 + (ulonglong)*(ushort *)(lVar1 + 0x14) * 0x10);
        local_78 = *(ushort *)(lVar1 + 8) - 1;
        local_7c = *(int *)(local_70 + 8);
        iVar6 = 0;
        iVar5 = 0;
        do {
          local_74 = iVar5;
          local_a8 = (ulonglong)((uint)*(ushort *)(lVar1 + 10) * local_74) + local_60;
          local_90 = &local_58;
          local_98 = param_7;
          local_a0 = iVar6;
          FUN_1417ec340(param_1,local_70,param_3 + 1,local_78);
          iVar6 = iVar6 + local_7c;
          iVar5 = local_74 + 1;
        } while (local_74 + 1 < *(int *)(param_5 + 8 + local_68));
        if ((uint)uStack_50 == 0) goto LAB_1417ec55f;
        sVar2 = *(short *)(lVar1 + 0x14);
        iVar5 = (int)param_8[1];
        *(uint *)(param_8 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_8 + 0xc) < iVar5 + 1U) {
          FUN_14488eebe(param_8,iVar5);
        }
        *(short *)(*param_8 + (longlong)iVar5 * 2) = sVar2 + param_6;
        uVar4 = (undefined2)uStack_50;
        iVar5 = (int)param_8[1];
        *(uint *)(param_8 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_8 + 0xc) < iVar5 + 1U) {
          FUN_14488eebe(param_8,iVar5);
        }
        *(undefined2 *)(*param_8 + (longlong)iVar5 * 2) = uVar4;
        lVar7 = (longlong)(int)(uint)uStack_50;
        if (lVar7 != 0) {
          iVar5 = (int)param_8[1];
          *(uint *)(param_8 + 1) = iVar5 + (uint)uStack_50;
          if ((uint)(*(int *)((longlong)param_8 + 0xc) - iVar5) < (uint)uStack_50) {
            FUN_14488eebe(param_8,iVar5);
          }
          memcpy((void *)((longlong)iVar5 * 2 + *param_8),local_58,lVar7 * 2);
        }
LAB_1417ec5aa:
        iVar5 = (int)param_8[1];
        *(uint *)(param_8 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_8 + 0xc) < iVar5 + 1U) {
          FUN_14488eebe(param_8,iVar5);
        }
        *(undefined2 *)(*param_8 + (longlong)iVar5 * 2) = 0;
      }
      uVar3 = *(ushort *)(lVar1 + 8);
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      param_3 = uVar3 - 1;
    }
    else {
      sVar2 = *(short *)(lVar1 + 0x14);
      iVar5 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar5 + 1U) {
        FUN_14488eebe(param_8,iVar5);
      }
      *(short *)(*param_8 + (longlong)iVar5 * 2) = sVar2 + param_6;
    }
    param_3 = param_3 + 1;
  } while( true );
}



// FUNCTION 1417ec63c FUN_1417ec63c body=1448 status=ok
// SIG undefined FUN_1417ec63c(void)

undefined8 * FUN_1417ec63c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14aa6b300;
  puVar8 = (undefined8 *)param_1[0x13];
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar16 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1417ec695;
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1417ec69e;
      goto LAB_1417ec7a4;
    }
LAB_1417ec69e:
    if (puVar8 == (undefined8 *)0x0) goto LAB_1417ec6b0;
    puVar7 = (undefined8 *)*puVar8;
    puVar15 = puVar8;
  }
  else {
LAB_1417ec695:
    if (iVar6 == 0x10) goto LAB_1417ec69e;
LAB_1417ec7a4:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar16 + 0xc60), iVar6 == 2))
      goto LAB_1417ec69e;
      if (iVar6 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_1417ec69e;
      }
    }
    if (DAT_14ca9a43c != 0) {
      local_88 = local_78;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14aa6e740;
      local_78[0] = &LAB_143699d2c;
      local_50 = puVar8;
      FUN_14005a792(&DAT_14ca9a440,L"DeleteResourceMem",&DAT_14cb026a0);
      if (local_78[0] != (undefined1 *)0x0) {
        pppuVar13 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar13 = &local_58;
        }
        (*(code *)(*pppuVar13)[2])();
      }
      goto LAB_1417ec6b0;
    }
    puVar7 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar7;
    if (puVar10 != (uint *)0x0) goto LAB_1417ec906;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_143698d57);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar16 + 0x310);
      *(undefined8 *)(lVar16 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar7 = puVar9;
      FUN_140217a48(puVar7);
      puVar10 = (uint *)*puVar7;
LAB_1417ec906:
      puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar15 + 0x16);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar2 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar7;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar7 = puVar10;
        puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x16);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_1417ec986;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_1417ec986:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar15,0);
    *puVar15 = &PTR_FUN_14aa6e788;
    puVar15[0x15] = puVar8;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
    }
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar15[9] = puVar15;
    puVar15[10] = puVar15;
    lVar16 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar16 == 0) {
      uVar3 = 1;
      if ((char)uVar17 != '\x06') {
        uVar3 = uVar17;
      }
      uVar17 = uVar3;
      uVar11 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar16 + 0x30);
    }
    puVar15[0xf] = uVar11;
    puVar15[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar15 + 0x1c) = iVar6;
    if (puVar15 == (undefined8 *)0x0) {
      local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(0);
      goto LAB_1417ec6b0;
    }
    LOCK();
    *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
    UNLOCK();
    local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
    FUN_1447439e4(puVar15);
    LOCK();
    piVar1 = (int *)(puVar15 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1417ec6b0;
    puVar7 = (undefined8 *)*puVar15;
  }
  (*(code *)*puVar7)(puVar15,1);
LAB_1417ec6b0:
  if (0 < *(int *)(param_1 + 0x25)) {
    lVar16 = 0;
    do {
      puVar8 = (undefined8 *)param_1[0x24];
      puVar7 = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar7 = param_1 + 0x15;
      }
      if (puVar7[lVar16] != 0) {
        FUN_1400020a8();
        puVar8 = (undefined8 *)param_1[0x24];
      }
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = param_1 + 0x15;
      }
      puVar8[lVar16] = 0;
      puVar8 = (undefined8 *)param_1[0x35];
      if ((undefined8 *)param_1[0x35] == (undefined8 *)0x0) {
        puVar8 = param_1 + 0x26;
      }
      puVar8[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x25));
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1401c04d8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ecbe6 FUN_1417ecbe6 body=467 status=ok
// SIG undefined FUN_1417ecbe6(void)

undefined8 * FUN_1417ecbe6(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 9);
  plVar1 = param_1 + 8;
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_1417ecc28;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  puVar5 = param_1 + 7;
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*plVar1;
  }
  puVar7 = param_2 + 7;
  if ((undefined8 *)param_2[8] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_2[8];
  }
  memcpy(puVar5,puVar7,(longlong)iVar2 << 2);
LAB_1417ecc28:
  *(int *)(param_1 + 9) = iVar2;
  uVar3 = *(uint *)(param_2 + 1);
  FUN_140442afe(param_1,(ulonglong)uVar3);
  iVar2 = *(int *)(param_1 + 1);
  *(uint *)(param_1 + 1) = iVar2 + uVar3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar3) {
    FUN_1447711aa(param_1);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar6 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(param_1 + 2,0);
  }
  iVar2 = *(int *)(param_2 + 5);
  *(int *)(param_1 + 5) = iVar2;
  if (iVar2 != 0) {
    puVar5 = (undefined8 *)param_2[4];
    if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
      puVar5 = param_2 + 2;
    }
    puVar7 = param_1 + 2;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)param_1[4];
    }
    memcpy(puVar7,puVar5,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar3) {
    puVar9 = (undefined4 *)*param_1;
    puVar10 = (undefined4 *)*param_2;
    uVar8 = 0;
    do {
      puVar5 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar5 = param_2 + 2;
      }
      if ((*(uint *)((longlong)puVar5 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
          == 0) {
        *puVar9 = *puVar10;
        puVar9[1] = puVar10[1];
      }
      else {
        FUN_147ce43a4(puVar9,puVar10);
      }
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 8;
      puVar9 = puVar9 + 8;
    } while (uVar3 != uVar8);
  }
  return param_1;
}



// FUNCTION 1417ecdba FUN_1417ecdba body=135 status=ok
// SIG undefined FUN_1417ecdba(void)

void FUN_1417ecdba(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xe0;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0xdc + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0xe0 + 0xd8);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0xd8);
  FUN_14041f8ca(*param_1 + lVar2 + 8);
  FUN_14041f692(param_1,param_2);
  return;
}



// FUNCTION 1417ece42 FUN_1417ece42 body=110 status=ok
// SIG undefined FUN_1417ece42(void)

void FUN_1417ece42(longlong *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_1448759c8(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_14488eebe(param_1,iVar1);
      }
      *(undefined2 *)(*param_1 + (longlong)iVar1 * 2) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 1417eceb2 FUN_1417eceb2 body=127 status=ok
// SIG undefined FUN_1417eceb2(void)

undefined8 * FUN_1417eceb2(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1403080ec();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1417ecf31 FUN_1417ecf31 body=43 status=ok
// SIG undefined FUN_1417ecf31(void)

void FUN_1417ecf31(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1417ecfac FUN_1417ecfac body=48 status=ok
// SIG undefined FUN_1417ecfac(void)

void FUN_1417ecfac(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 1417ecfdc FUN_1417ecfdc body=373 status=ok
// SIG undefined FUN_1417ecfdc(void)

void FUN_1417ecfdc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417ed065;
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
LAB_1417ed065:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1417ed152 FUN_1417ed152 body=29 status=ok
// SIG undefined FUN_1417ed152(void)

undefined8 FUN_1417ed152(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ed170 FUN_1417ed170 body=230 status=ok
// SIG undefined FUN_1417ed170(void)

void FUN_1417ed170(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x2ab) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1417ed256 FUN_1417ed256 body=29 status=ok
// SIG undefined FUN_1417ed256(void)

undefined8 FUN_1417ed256(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ed274 FUN_1417ed274 body=115 status=ok
// SIG undefined FUN_1417ed274(void)

void FUN_1417ed274(longlong param_1)

{
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_140441f12(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_140441eda(param_1 + 0x20);
  FUN_140441f4a(param_1);
  return;
}



// FUNCTION 1417ed2e8 FUN_1417ed2e8 body=109 status=ok
// SIG undefined FUN_1417ed2e8(void)

void FUN_1417ed2e8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Src;
  void *_Dst;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  _Src = (void *)FUN_144788782(param_3);
  _Dst = *(void **)(param_1 + 0x28);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FUN_14001cc68(0x360,0x10);
    *(void **)(param_1 + 0x28) = _Dst;
  }
  memcpy(_Dst,_Src,0x360);
  FUN_1447fd100(param_1 + 8,param_2);
  FUN_14006bf18(param_1 + 8,param_2);
  return;
}



// FUNCTION 1417ed356 FUN_1417ed356 body=334 status=ok
// SIG undefined FUN_1417ed356(void)

void FUN_1417ed356(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_be8 [32];
  undefined1 local_bc8 [2984];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_be8;
  puVar3 = param_2;
  puVar4 = (undefined8 *)(param_1 + 0x1d20);
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  dVar1 = *(double *)(param_1 + 0x1d70);
  if (1.0 < *(double *)(param_1 + 0x1d98) || *(double *)(param_1 + 0x1d98) == 1.0) {
    fVar6 = (float)(1.0 - *(double *)(param_1 + 0x1d90) / dVar1);
    fVar9 = (float)(1.0 / dVar1);
    fVar8 = 0.0;
    fVar7 = 1.0;
  }
  else {
    fVar8 = (float)*(double *)(param_1 + 0x1d90);
    fVar6 = 0.0;
    uVar5 = -(uint)(fVar8 == 0.0);
    fVar8 = (float)(~uVar5 & (uint)fVar8 | uVar5 & 0x322bcc77);
    fVar7 = (float)dVar1 / fVar8 + -1e-08;
    fVar8 = 1.0 / fVar8;
    fVar9 = 0.0;
  }
  *(float *)(param_1 + 0x23a0) = fVar9;
  *(float *)(param_1 + 0x23a4) = fVar6;
  *(float *)(param_1 + 0x23a8) = fVar8;
  *(float *)(param_1 + 0x23ac) = fVar7;
  puVar3 = (undefined8 *)(param_1 + 0xe0);
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_144896358(local_bc8,param_1 + 0x40);
  memcpy((void *)(param_1 + 0x500),local_bc8,0xba0);
  FUN_1401899e7(param_1);
  if ((local_20 ^ (ulonglong)auStack_be8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ed4a6 FUN_1417ed4a6 body=281 status=ok
// SIG undefined FUN_1417ed4a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417ed4a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03e98) {
    FUN_144b3d300(&DAT_14cb03e98);
    if (DAT_14cb03e98 == -1) {
      FUN_145d5cf48();
      FUN_140db5666(&DAT_14cb03df0,0,&DAT_14cb03d88,L"FScreenVS",
                    L"/Engine/Private/ScreenVertexShader.usf",L"Main",0,1,FUN_147cf1528,
                    FUN_147cf1500,&LAB_147cf14fc,&LAB_147cf14f8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14cb03df0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436a4eed);
      _Init_thread_footer(&DAT_14cb03e98);
    }
  }
  return &DAT_14cb03df0;
}



// FUNCTION 1417ed6aa FUN_1417ed6aa body=204 status=ok
// SIG undefined FUN_1417ed6aa(void)

void FUN_1417ed6aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((((*(byte *)(param_2 + 0x28) & 1) != 0) && ((*(byte *)(param_2 + 0x29) & 1) != 0)) &&
     ((*(ushort *)(param_2 + 0x35) & 0x4010) == 0)) {
    if ((*(longlong *)(param_1 + 0x28) == 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x28) = lVar1;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1c8);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ed78e FUN_1417ed78e body=323 status=ok
// SIG undefined FUN_1417ed78e(void)

longlong FUN_1417ed78e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb04044) && (FUN_144b3d300(&DAT_14cb04044), DAT_14cb04044 == -1)) {
    FUN_1456c1f72(&DAT_14cb04040,L"Kismet",L"bEnableInheritableComponents",&DAT_14c872ce8);
    _Init_thread_footer(&DAT_14cb04044);
  }
  if ((DAT_14cb04040 == '\x01') &&
     (lVar1 = *(longlong *)(param_1 + 0x20), *(longlong *)(param_2 + 0x2b8) != lVar1)) {
    FUN_147af1772(local_50,param_1);
    do {
      lVar2 = FUN_14797dbe8(param_2,0);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_147af1658(lVar2,local_50);
      }
      param_2 = *(longlong *)(param_2 + 0x40);
      if (param_2 == 0) {
LAB_1417ed8c4:
        if (lVar2 != 0) goto LAB_1417ed7e9;
        break;
      }
      lVar3 = FUN_14043ab18();
      if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) || (lVar2 != 0)
          ) || (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_1417ed8c4;
    } while (*(longlong *)(param_2 + 0x2b8) != lVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
LAB_1417ed7e9:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1417ed8d2 FUN_1417ed8d2 body=127 status=ok
// SIG undefined FUN_1417ed8d2(void)

void FUN_1417ed8d2(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1417ed966 FUN_1417ed966 body=38 status=ok
// SIG undefined FUN_1417ed966(void)

undefined8 FUN_1417ed966(undefined8 param_1,int param_2)

{
  FUN_14475059c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ed98c FUN_1417ed98c body=21 status=ok
// SIG undefined FUN_1417ed98c(void)

void FUN_1417ed98c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1400b285e(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1417ed9b8 FUN_1417ed9b8 body=123 status=ok
// SIG undefined FUN_1417ed9b8(void)

void FUN_1417ed9b8(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001417eda2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x218))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1c8,&DAT_149e38ef4);
}



// FUNCTION 1417eda34 FUN_1417eda34 body=364 status=ok
// SIG undefined FUN_1417eda34(void)

void FUN_1417eda34(longlong param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (DAT_14cac7648 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_143242436;
      local_38 = &LAB_14789ef1f;
      local_40 = &LAB_1417b008f;
      local_48 = L"Engine";
      local_50 = 0x8000000000;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
    }
    if ((((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) &&
        (lVar1 = *(longlong *)(param_1 + 0x120), lVar1 != 0)) &&
       ((*(longlong *)(lVar1 + 0xa8) == *(longlong *)(param_1 + 0xa8) &&
        ((*(byte *)(lVar1 + 0x9c) & 1) == 0)))) {
      FUN_1417eda34();
    }
    if ((((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) && ((*(byte *)(param_1 + 0x9c) & 1) == 0)) &&
       ((*(byte *)(param_1 + 0x9d) & 0x20) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417edbb2 FUN_1417edbb2 body=229 status=ok
// SIG undefined FUN_1417edbb2(void)

undefined8 * FUN_1417edbb2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa855c0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_144727cd0(param_1 + 0xb,0);
  }
  param_1[0x11] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x84)) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
    FUN_1446efbd8(param_1 + 0xd,0);
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417edc98 FUN_1417edc98 body=114 status=ok
// SIG undefined FUN_1417edc98(void)

undefined8 FUN_1417edc98(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x388))();
  if ((plVar2 != (longlong *)0x0) && ((longlong)(int)plVar2[1] != 0)) {
    plVar3 = (longlong *)*plVar2;
    plVar2 = plVar3 + (int)plVar2[1];
    do {
      lVar4 = (longlong)*(int *)(*plVar3 + 0x18);
      if (0 < lVar4) {
        lVar1 = *(longlong *)(*plVar3 + 0x10);
        lVar5 = 0;
        do {
          if (((*(int *)(lVar1 + 0x58 + lVar5) != 0 || *(int *)(lVar1 + 0x54 + lVar5) != 0) ||
              *(int *)(lVar1 + 0x5c + lVar5) != 0) || *(int *)(lVar1 + 0x60 + lVar5) != 0) {
            return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
          }
          lVar5 = lVar5 + 0xf8;
        } while (lVar4 * 0xf8 - lVar5 != 0);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
  }
  return 0;
}



// FUNCTION 1417edd0a FUN_1417edd0a body=86 status=ok
// SIG undefined FUN_1417edd0a(void)

void FUN_1417edd0a(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 500);
  FUN_14074f57f(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1f0));
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 500) != 0)) {
    FUN_147d1f0ae(param_1 + 0x1e8,0);
    return;
  }
  return;
}



// FUNCTION 1417edd60 FUN_1417edd60 body=228 status=ok
// SIG undefined FUN_1417edd60(void)

void FUN_1417edd60(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = (**(code **)(*param_1 + 0x3a0))();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x56) = param_2;
  }
  else {
    local_50 = 0;
    local_48 = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_44 = 0xffffffff00000080;
    local_3c = 0;
    local_30 = 0;
    local_28 = 0;
    local_78 = param_2;
    if (param_1 + 0x49 != local_88) {
      *(undefined4 *)(param_1 + 0x4a) = 0;
      if (*(int *)((longlong)param_1 + 0x254) != 0) {
        FUN_1446dd670(param_1 + 0x49,0);
      }
    }
    *(undefined4 *)(param_1 + 0x4b) = local_78;
    FUN_140308010(param_1 + 0x4c,&local_70);
    FUN_141491f98(local_88);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ede46 FUN_1417ede46 body=170 status=ok
// SIG undefined FUN_1417ede46(void)

void FUN_1417ede46(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
  if (iVar1 < 3) {
    *(undefined8 *)(param_1 + 0x68) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x70) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x78) = 0x3ff0000000000000;
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417edef1 FUN_1417edef1 body=49 status=ok
// SIG undefined FUN_1417edef1(void)

longlong FUN_1417edef1(void)

{
  if (DAT_14cb06db0 == 0) {
    FUN_14073dd9a(&DAT_14cb06db0,&PTR_LAB_14aa8c5b0);
  }
  return DAT_14cb06db0;
}



// FUNCTION 1417edf2e FUN_1417edf2e body=2383 status=ok
// SIG undefined FUN_1417edf2e(void)

void FUN_1417edf2e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined1 auStack_2d8 [44];
  undefined4 local_2ac;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong local_298;
  uint local_28c;
  longlong local_288;
  longlong local_280;
  undefined4 *local_278;
  ulonglong local_270;
  longlong *local_268;
  longlong local_260;
  ulonglong local_258;
  undefined1 local_250 [168];
  undefined1 *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  longlong lStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined1 local_168;
  longlong local_160 [21];
  longlong *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 uStack_80;
  uint uStack_7c;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_2a0 = param_2;
  if (((param_1[0x54] != 0) && ((*(byte *)((longlong)param_1 + 0x6c) & 0x20) == 0)) &&
     ((*(byte *)((longlong)param_1 + 0x77) & 0x40) == 0)) {
    uVar13 = (**(code **)(*param_1 + 0x168))(param_1);
    local_270 = (ulonglong)*(int *)(param_1[0x55] + 8);
    if (0 < (longlong)local_270) {
      local_2a8 = &local_a8;
      local_28c = (uVar13 & 7) << 0x11;
      local_278 = &local_198;
      uVar19 = 0;
      do {
        if ((0 < (int)param_1[0x5d]) &&
           (lVar23 = *(longlong *)(*(longlong *)param_1[0x55] + uVar19 * 8),
           *(int *)(lVar23 + 0xec) != 0)) {
          if ((int)uVar19 < *(int *)(param_1[0x54] + 0x10)) {
            uVar25 = *(undefined4 *)(*(longlong *)(param_1[0x54] + 8) + 0x10 + uVar19 * 0x18);
          }
          else {
            uVar25 = 0;
          }
          if (0 < *(int *)(lVar23 + 0x18)) {
            local_298 = uVar19 * 0x10;
            plVar20 = (longlong *)(param_1[0x5c] + local_298);
            local_288 = (longlong)(int)uVar19 * 3;
            uVar22 = 0;
            local_268 = plVar20;
            local_260 = lVar23;
            local_258 = uVar19;
            do {
              if ((longlong)(int)plVar20[1] <= (longlong)uVar22) break;
              lVar24 = uVar22 * 0xf8 + *(longlong *)(lVar23 + 0x10);
              lVar14 = (**(code **)(*(longlong *)param_1[0x54] + 0x30))
                                 ((longlong *)param_1[0x54],uVar19 & 0xffffffff,uVar22 & 0xffffffff,
                                  0);
              if (lVar14 != 0) {
                iVar3 = *(int *)(*plVar20 + 0xc + uVar22 * 0x18);
                if (((((longlong)iVar3 < 0) ||
                     (*(int *)(*(longlong *)(param_1[0x54] + 8) + 8 + local_288 * 8) <= iVar3)) ||
                    (*(char *)(*(longlong *)(*(longlong *)(param_1[0x54] + 8) + local_288 * 8) +
                              (longlong)iVar3) == '\0')) && (*(char *)(lVar24 + 0xf0) == '\0')) {
                  puVar1 = (undefined8 *)(*plVar20 + uVar22 * 0x18);
                  uVar13 = 0;
                  local_b8 = (longlong *)0x0;
                  local_ac = 1;
                  local_2a8[2] = 0;
                  *local_2a8 = 0;
                  local_2a8[1] = 0;
                  uStack_90 = 0xffffffff;
                  local_88 = 0xff0000ffffffff;
                  uStack_80 = 0;
                  uStack_7c = 0x40c00f07;
                  local_78 = local_78 & 0xfc;
                  local_b0 = 1;
                  local_280 = lVar24;
                  FUN_14470b9e0(local_160,1);
                  plVar20 = local_b8;
                  plVar15 = local_b8;
                  if (local_b8 == (longlong *)0x0) {
                    plVar15 = local_160;
                  }
                  uStack_7c = uStack_7c & 0xfff1ffff | local_28c;
                  local_a8 = lVar14;
                  uStack_a0 = (**(code **)(*(longlong *)*puVar1 + 0x2f0))();
                  uVar19 = local_258;
                  lVar23 = local_260;
                  bVar2 = *(byte *)(puVar1 + 1);
                  if (bVar2 != 0) {
                    uVar13 = (uint)(*(byte *)(param_1 + 0xe) & 1) << 0x1e;
                  }
                  uStack_7c = uStack_7c & 0xbffe3ebf |
                              (*(byte *)((longlong)param_1 + 0x6b) & 1) << 6 | (uint)bVar2 << 8 |
                              uVar13;
                  local_88 = CONCAT26(CONCAT11(local_88._7_1_,(char)local_258),
                                      CONCAT24((short)uVar22,(int)uVar22));
                  *plVar15 = param_1[0x4a];
                  plVar15 = plVar20;
                  if (plVar20 == (longlong *)0x0) {
                    plVar15 = local_160;
                  }
                  *(undefined4 *)(plVar15 + 0xb) = *(undefined4 *)(local_280 + 4);
                  *(undefined4 *)(plVar15 + 0xd) = *(undefined4 *)(local_280 + 0x10);
                  *(int *)((longlong)plVar15 + 0x6c) = *(int *)(local_260 + 0xec) + -1;
                  *(undefined4 *)((longlong)plVar15 + 0x5c) = *(undefined4 *)(local_280 + 8);
                  plVar15[3] = *(longlong *)(local_260 + 0x28);
                  lVar14 = param_1[0x54];
                  if (*(longlong *)(lVar14 + 0x120) == 0) {
                    if (plVar20 == (longlong *)0x0) {
                      plVar20 = local_160;
                    }
                    plVar20[9] = 0;
                    *(undefined4 *)(plVar20 + 10) = 0;
                    *(undefined1 *)(plVar20 + 0x10) = 0;
                    *(undefined4 *)(plVar20 + 0x12) = 0xffffffff;
                  }
                  else {
                    if (((longlong)local_258 < (longlong)*(int *)(lVar14 + 0x88)) &&
                       ((longlong)uVar22 <
                        (longlong)*(int *)(*(longlong *)(lVar14 + 0x80) + 8 + local_298))) {
                      lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x80) + local_298);
                      *(undefined4 *)((longlong)plVar15 + 0x5c) = 0;
                      plVar15 = plVar20;
                      if (plVar20 == (longlong *)0x0) {
                        plVar15 = local_160;
                      }
                      plVar15[9] = *(longlong *)(param_1[0x54] + 0x120);
                      iVar3 = *(int *)(lVar14 + 4 + uVar22 * 8) * 0x14;
                      *(int *)(plVar15 + 10) = iVar3;
                      *(undefined1 *)(plVar15 + 0x10) = 1;
                      uVar16 = *(undefined4 *)(lVar14 + uVar22 * 8);
                      local_2ac = (undefined4)CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
                    }
                    else {
                      uVar16 = 0;
                      *(undefined4 *)((longlong)plVar15 + 0x5c) = 0;
                      plVar15 = plVar20;
                      if (plVar20 == (longlong *)0x0) {
                        plVar15 = local_160;
                      }
                      plVar15[9] = *(longlong *)(param_1[0x54] + 0x120);
                      *(undefined4 *)(plVar15 + 10) = 0;
                      *(undefined1 *)(plVar15 + 0x10) = 1;
                      local_2ac = 0;
                    }
                    if (plVar20 == (longlong *)0x0) {
                      plVar20 = local_160;
                    }
                    *(undefined4 *)(plVar20 + 0x12) = uVar16;
                    iVar3 = local_b0;
                    if ((uStack_7c >> 8 & 1) != 0) {
                      plVar20 = local_b8;
                      if (local_b8 == (longlong *)0x0) {
                        plVar20 = local_160;
                      }
                      if ((char)plVar20[0x10] == '\x01') {
                        local_1a8 = (undefined1 *)0x0;
                        local_1a0 = local_b0;
                        if (local_b0 == 0) {
                          local_19c = 1;
                        }
                        else {
                          FUN_14473945a(local_250,local_b0,0);
                          puVar17 = local_1a8;
                          if (local_1a8 == (undefined1 *)0x0) {
                            puVar17 = local_250;
                          }
                          FUN_1447393f1(puVar17,plVar20,iVar3);
                        }
                        lVar12 = local_280;
                        *(char *)(local_278 + 0xc) = (char)local_2a8[6];
                        lVar14 = *local_2a8;
                        uVar16 = *(undefined4 *)((longlong)local_2a8 + 4);
                        lVar24 = local_2a8[1];
                        uVar4 = *(undefined4 *)((longlong)local_2a8 + 0xc);
                        lVar9 = local_2a8[2];
                        uVar5 = *(undefined4 *)((longlong)local_2a8 + 0x14);
                        lVar10 = local_2a8[3];
                        uVar6 = *(undefined4 *)((longlong)local_2a8 + 0x1c);
                        uVar7 = *(undefined4 *)((longlong)local_2a8 + 0x24);
                        lVar11 = local_2a8[5];
                        uVar8 = *(undefined4 *)((longlong)local_2a8 + 0x2c);
                        local_278[8] = (int)local_2a8[4];
                        local_278[9] = uVar7;
                        local_278[10] = (int)lVar11;
                        local_278[0xb] = uVar8;
                        local_278[4] = (int)lVar9;
                        local_278[5] = uVar5;
                        local_278[6] = (int)lVar10;
                        local_278[7] = uVar6;
                        *local_278 = (int)lVar14;
                        local_278[1] = uVar16;
                        local_278[2] = (int)lVar24;
                        local_278[3] = uVar4;
                        uStack_7c = uStack_7c & 0xfffffeff;
                        uStack_16c = uStack_16c & 0xff7ff9ff;
                        if ((char)local_2ac == '\x01' && *(longlong *)(param_1[0x54] + 0x120) != 0)
                        {
                          uVar13 = *(uint *)(*(longlong *)
                                              (*(longlong *)(param_1[0x54] + 0x80) + local_298) +
                                            uVar22 * 8);
                        }
                        else {
                          uVar13 = 1;
                        }
                        FUN_1400ccf58(local_250,0);
                        FUN_1400ccfb2(local_250);
                        if (0 < (int)uVar13) {
                          lVar14 = 0x90;
                          uVar18 = 0;
                          do {
                            puVar17 = local_1a8;
                            if (local_1a8 == (undefined1 *)0x0) {
                              puVar17 = local_250;
                            }
                            *(undefined4 *)(puVar17 + lVar14 + -0x38) = *(undefined4 *)(lVar12 + 4);
                            *(undefined8 *)(puVar17 + lVar14 + -0x78) =
                                 *(undefined8 *)(lVar23 + 0x28);
                            *(undefined4 *)(puVar17 + lVar14 + -0x28) =
                                 *(undefined4 *)(lVar12 + 0x10);
                            *(int *)(puVar17 + lVar14 + -0x24) = *(int *)(lVar23 + 0xec) + -1;
                            *(longlong *)(puVar17 + lVar14 + -0x90) = param_1[0x4a];
                            *(undefined4 *)(puVar17 + lVar14 + -0x34) = *(undefined4 *)(lVar12 + 8);
                            if (*(longlong *)(param_1[0x54] + 0x120) == 0) {
                              *(undefined8 *)(puVar17 + lVar14 + -0x48) = 0;
                              *(undefined4 *)(puVar17 + lVar14 + -0x40) = 0;
                              puVar17[lVar14 + -0x10] = 0;
                              *(undefined8 *)(puVar17 + lVar14 + -8) = 0;
                              *(undefined4 *)(puVar17 + lVar14) = 0xffffffff;
                            }
                            else if ((char)local_2ac == '\0') {
                              *(undefined4 *)(puVar17 + lVar14 + -0x34) = 0;
                              *(undefined8 *)(puVar17 + lVar14 + -0x48) =
                                   *(undefined8 *)(param_1[0x54] + 0x120);
                              *(undefined4 *)(puVar17 + lVar14 + -0x40) = 0;
                              puVar17[lVar14 + -0x10] = 1;
                              *(undefined4 *)(puVar17 + lVar14) = 0;
                            }
                            else {
                              iVar3 = *(int *)(*(longlong *)
                                                (*(longlong *)(param_1[0x54] + 0x80) + local_298) +
                                               4 + uVar22 * 8) + (int)uVar18;
                              *(undefined4 *)(puVar17 + lVar14 + -0x34) = 0;
                              *(undefined8 *)(puVar17 + lVar14 + -0x48) =
                                   *(undefined8 *)(param_1[0x54] + 0x120);
                              *(int *)(puVar17 + lVar14 + -0x40) = iVar3 * 0x14;
                              puVar17[lVar14 + -0x10] = 1;
                              *(undefined4 *)(puVar17 + lVar14) = 1;
                              uVar21 = *(ulonglong *)(param_1[0x54] + 0x108);
                              if ((uVar21 & 1) != 0) {
                                uVar21 = ((longlong)uVar21 >> 0x18) + param_1[0x54] + 0x108;
                              }
                              *(ulonglong *)(puVar17 + lVar14 + -8) =
                                   uVar21 + (longlong)iVar3 * 0x14;
                            }
                            uVar18 = uVar18 + 1;
                            lVar14 = lVar14 + 0xa8;
                          } while (uVar13 != uVar18);
                        }
                        (**(code **)(*local_2a0 + 0x18))(local_2a0,local_250,uVar25);
                        puVar17 = local_1a8;
                        if (local_1a8 == (undefined1 *)0x0) {
                          puVar17 = local_250;
                        }
                        FUN_1446fc26f(puVar17,local_1a0);
                        if (local_1a8 != (undefined1 *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                    }
                  }
                  (**(code **)(*local_2a0 + 0x18))(local_2a0,local_160,uVar25);
                  iVar3 = local_b0;
                  plVar20 = (longlong *)param_1[0x58];
                  if (plVar20 != (longlong *)0x0) {
                    local_1a8 = (undefined1 *)0x0;
                    local_1a0 = local_b0;
                    if (local_b0 == 0) {
                      local_19c = 1;
                    }
                    else {
                      plVar20 = local_b8;
                      if (local_b8 == (longlong *)0x0) {
                        plVar20 = local_160;
                      }
                      FUN_14473945a(local_250,local_b0,0);
                      puVar17 = local_1a8;
                      if (local_1a8 == (undefined1 *)0x0) {
                        puVar17 = local_250;
                      }
                      FUN_1447393f1(puVar17,plVar20,iVar3);
                      plVar20 = (longlong *)param_1[0x58];
                    }
                    local_198 = (undefined4)*local_2a8;
                    uStack_194 = *(undefined4 *)((longlong)local_2a8 + 4);
                    lStack_190 = local_2a8[1];
                    local_188 = (undefined4)local_2a8[2];
                    uStack_184 = *(undefined4 *)((longlong)local_2a8 + 0x14);
                    uStack_180 = (undefined4)local_2a8[3];
                    uStack_17c = *(undefined4 *)((longlong)local_2a8 + 0x1c);
                    local_178 = (undefined4)local_2a8[4];
                    uStack_174 = *(undefined4 *)((longlong)local_2a8 + 0x24);
                    uStack_170 = (undefined4)local_2a8[5];
                    local_168 = (undefined1)local_2a8[6];
                    uStack_16c = *(uint *)((longlong)local_2a8 + 0x2c) & 0xdf7ffeff | 0x20000000;
                    lStack_190 = (**(code **)(*plVar20 + 0x2f0))();
                    uStack_174 = CONCAT22(uStack_174._2_2_,
                                          (short)uStack_174 + *(short *)(lVar23 + 0x18));
                    (**(code **)(*local_2a0 + 0x18))(local_2a0,local_250,(int)param_1[0x59]);
                    puVar17 = local_1a8;
                    if (local_1a8 == (undefined1 *)0x0) {
                      puVar17 = local_250;
                    }
                    FUN_1446fc26f(puVar17,local_1a0);
                    if (local_1a8 != (undefined1 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  plVar20 = local_b8;
                  if (local_b8 == (longlong *)0x0) {
                    plVar20 = local_160;
                  }
                  FUN_1446fc26f(plVar20,local_b0);
                  plVar20 = local_268;
                  if (local_b8 != (longlong *)0x0) {
                    FUN_1400020a8();
                    plVar20 = local_268;
                  }
                }
              }
              uVar22 = uVar22 + 1;
            } while ((longlong)uVar22 < (longlong)*(int *)(lVar23 + 0x18));
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != local_270);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417ee87e FUN_1417ee87e body=77 status=ok
// SIG undefined FUN_1417ee87e(void)

byte FUN_1417ee87e(longlong *param_1,int param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2 < local_20 & local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ee8cc FUN_1417ee8cc body=1281 status=ok
// SIG undefined FUN_1417ee8cc(void)

longlong FUN_1417ee8cc(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((char)param_1[0x18e] < '\0') {
    lVar7 = param_1[0x192];
    if (lVar7 != 0) goto LAB_1417eeafe;
    plVar6 = param_1 + 0x192;
    FUN_147d18c28(param_1);
LAB_1417eeafb:
    lVar7 = *plVar6;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0xb98))(param_1);
    lVar10 = param_1[0xcb];
    if (lVar10 == 0) {
      lVar10 = param_1[0xcc];
      if ((DAT_14c950c29 & lVar10 != 0) != 0) goto LAB_1417eedc1;
      if (lVar10 != 0) goto LAB_1417ee92a;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_1417eedc1:
        FUN_1456cec3c(lVar10);
      }
LAB_1417ee92a:
      if (DAT_14cb06da8 == 0) {
        local_60 = &local_40;
        local_40 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_1464003b0;
        local_68 = &LAB_147d17bdf;
        local_70 = &LAB_1417edf22;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10000000;
        local_90 = 8;
        local_98 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if (*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) {
        lVar7 = 0;
        if ((lVar2 == 0) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
        goto LAB_1417eeafe;
        lVar7 = 0;
        lVar10 = 0;
        do {
          plVar6 = (longlong *)param_1[0xcb];
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)param_1[0xcc];
            if ((DAT_14c950c29 & plVar6 != (longlong *)0x0) != 0) goto LAB_1417eed83;
            if (plVar6 != (longlong *)0x0) goto LAB_1417ee994;
LAB_1417eeb4e:
            plVar6 = (longlong *)0x0;
          }
          else {
            if (DAT_14c950c29 == 1) {
LAB_1417eed83:
              FUN_1456cec3c(plVar6);
            }
LAB_1417ee994:
            if (DAT_14cb06da8 == 0) {
              local_60 = &local_40;
              local_40 = FUN_1449e2820;
              local_50 = FUN_14081d0ea;
              local_58 = &LAB_1464003b0;
              local_68 = &LAB_147d17bdf;
              local_70 = &LAB_1417edf22;
              local_78 = L"Engine";
              local_80 = 0;
              local_88 = 0x10000000;
              local_90 = 8;
              local_98 = 0x588;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
            }
            if ((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
                DAT_14cb06da8 + 0x30)) goto LAB_1417eeb4e;
          }
          lVar3 = (**(code **)(*plVar6 + 0x310))(plVar6);
          if (*(int *)(lVar3 + 0x28) <= lVar10) goto LAB_1417eeafe;
          plVar6 = (longlong *)param_1[0xcb];
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)param_1[0xcc];
            if ((DAT_14c950c29 & plVar6 != (longlong *)0x0) != 0) goto LAB_1417eed90;
            if (plVar6 != (longlong *)0x0) goto LAB_1417ee9fd;
LAB_1417eeb78:
            plVar6 = (longlong *)0x0;
          }
          else {
            if (DAT_14c950c29 == 1) {
LAB_1417eed90:
              FUN_1456cec3c(plVar6);
            }
LAB_1417ee9fd:
            if (DAT_14cb06da8 == 0) {
              local_60 = &local_40;
              local_40 = FUN_1449e2820;
              local_50 = FUN_14081d0ea;
              local_58 = &LAB_1464003b0;
              local_68 = &LAB_147d17bdf;
              local_70 = &LAB_1417edf22;
              local_78 = L"Engine";
              local_80 = 0;
              local_88 = 0x10000000;
              local_90 = 8;
              local_98 = 0x588;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
            }
            if ((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
                DAT_14cb06da8 + 0x30)) goto LAB_1417eeb78;
          }
          lVar3 = (**(code **)(*plVar6 + 0x310))(plVar6);
          iVar4 = -1;
          if (*(int *)(lVar2 + 0xa0) != *(int *)(lVar2 + 0xcc)) {
            lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + lVar10 * 0xc);
            uVar1 = (uint)((ulonglong)lVar3 >> 0x10);
            uVar8 = (uint)lVar3 & 0xffff;
            lVar5 = *(longlong *)(lVar2 + 0xd8);
            if (*(longlong *)(lVar2 + 0xd8) == 0) {
              lVar5 = lVar2 + 0xd0;
            }
            iVar9 = *(int *)(lVar5 + (ulonglong)
                                     (*(int *)(lVar2 + 0xe0) - 1U &
                                     (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8)
                                     + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
            if (iVar9 != -1) {
              do {
                plVar6 = (longlong *)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar9 * 0x14);
                if (*plVar6 == lVar3) {
                  if ((plVar6 != (longlong *)0x0) && (plVar6 + 1 != (longlong *)0x0)) {
                    iVar4 = (int)plVar6[1];
                  }
                  break;
                }
                iVar9 = *(int *)((longlong)plVar6 + 0xc);
              } while (iVar9 != -1);
            }
          }
          lVar10 = lVar10 + 1;
        } while (iVar4 == -1);
        plVar6 = (longlong *)((longlong)iVar4 * 8 + *(longlong *)(lVar2 + 0x40));
        goto LAB_1417eeafb;
      }
    }
    lVar7 = 0;
  }
LAB_1417eeafe:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 1417eedce FUN_1417eedce body=181 status=ok
// SIG undefined FUN_1417eedce(void)

char FUN_1417eedce(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  char *local_60;
  undefined1 *local_58;
  char **local_50;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xd78) < 1) {
    cVar1 = '\0';
  }
  else {
    lVar2 = 0;
    do {
      local_41 = '\0';
      local_58 = &LAB_143622136;
      local_60 = &local_41;
      local_50 = &local_60;
      FUN_1448e6002(*(longlong *)(*(longlong *)(param_1 + 0xd70) + lVar2 * 8) + 0x138,&local_58);
      cVar1 = local_41;
      if (local_41 == '\x01') break;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0xd78));
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar1;
}



// FUNCTION 1417eee84 FUN_1417eee84 body=70 status=ok
// SIG undefined FUN_1417eee84(void)

void FUN_1417eee84(longlong param_1)

{
  longlong lVar1;
  
  FUN_1406cc568(param_1 + 0x410);
  if (0 < *(int *)(param_1 + 0xd78)) {
    lVar1 = 0;
    do {
      FUN_1406cc5aa(*(undefined8 *)(*(longlong *)(param_1 + 0xd70) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xd78));
  }
  return;
}



// FUNCTION 1417eeeca FUN_1417eeeca body=1230 status=ok
// SIG undefined FUN_1417eeeca(void)

int FUN_1417eeeca(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = (int)param_1[0x19c];
  if (iVar2 != -1) goto LAB_1417ef0ea;
  lVar3 = param_1[0xcb];
  if (lVar3 == 0) {
    lVar3 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar3 != 0) != 0) goto LAB_1417ef38c;
    iVar2 = -1;
    if (lVar3 == 0) goto LAB_1417ef0ea;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1417ef38c:
    FUN_1456cec3c(lVar3);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464003b0;
    local_58 = &LAB_147d17bdf;
    local_60 = &LAB_1417edf22;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) ||
     (lVar3 = (**(code **)(*param_1 + 0xb98))(param_1), lVar3 == 0)) {
LAB_1417ef18e:
    iVar2 = -1;
  }
  else {
    lVar9 = 0;
    do {
      plVar6 = (longlong *)param_1[0xcb];
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)param_1[0xcc];
        if ((DAT_14c950c29 & plVar6 != (longlong *)0x0) != 0) goto LAB_1417ef372;
        if (plVar6 != (longlong *)0x0) goto LAB_1417eef8b;
LAB_1417ef132:
        plVar6 = (longlong *)0x0;
      }
      else {
        if (DAT_14c950c29 == 1) {
LAB_1417ef372:
          FUN_1456cec3c(plVar6);
        }
LAB_1417eef8b:
        if (DAT_14cb06da8 == 0) {
          local_50 = &local_38;
          local_38 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1464003b0;
          local_58 = &LAB_147d17bdf;
          local_60 = &LAB_1417edf22;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
            DAT_14cb06da8 + 0x30)) goto LAB_1417ef132;
      }
      lVar4 = (**(code **)(*plVar6 + 0x310))(plVar6);
      if (*(int *)(lVar4 + 0x28) <= lVar9) goto LAB_1417ef18e;
      plVar6 = (longlong *)param_1[0xcb];
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)param_1[0xcc];
        if ((DAT_14c950c29 & plVar6 != (longlong *)0x0) != 0) goto LAB_1417ef37f;
        if (plVar6 != (longlong *)0x0) goto LAB_1417eeff4;
LAB_1417ef15b:
        plVar6 = (longlong *)0x0;
      }
      else {
        if (DAT_14c950c29 == 1) {
LAB_1417ef37f:
          FUN_1456cec3c(plVar6);
        }
LAB_1417eeff4:
        if (DAT_14cb06da8 == 0) {
          local_50 = &local_38;
          local_38 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1464003b0;
          local_58 = &LAB_147d17bdf;
          local_60 = &LAB_1417edf22;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
            DAT_14cb06da8 + 0x30)) goto LAB_1417ef15b;
      }
      lVar4 = (**(code **)(*plVar6 + 0x310))(plVar6);
      iVar2 = -1;
      if (*(int *)(lVar3 + 0xa0) != *(int *)(lVar3 + 0xcc)) {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + lVar9 * 0xc);
        uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
        uVar7 = (uint)lVar4 & 0xffff;
        lVar5 = *(longlong *)(lVar3 + 0xd8);
        if (*(longlong *)(lVar3 + 0xd8) == 0) {
          lVar5 = lVar3 + 0xd0;
        }
        iVar8 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(lVar3 + 0xe0) - 1U &
                                 (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar7) +
                                 (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            plVar6 = (longlong *)(*(longlong *)(lVar3 + 0x98) + (longlong)iVar8 * 0x14);
            if (*plVar6 == lVar4) {
              if ((plVar6 != (longlong *)0x0) && (plVar6 + 1 != (longlong *)0x0)) {
                iVar2 = (int)plVar6[1];
              }
              break;
            }
            iVar8 = *(int *)((longlong)plVar6 + 0xc);
          } while (iVar8 != -1);
        }
      }
      lVar9 = lVar9 + 1;
    } while (iVar2 == -1);
  }
LAB_1417ef0ea:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 1417ef39a FUN_1417ef39a body=170 status=ok
// SIG undefined FUN_1417ef39a(void)

void FUN_1417ef39a(longlong *param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0xb98))();
  if (lVar2 != 0) {
    if (0 < (int)param_1[0x1af]) {
      lVar2 = 0;
      do {
        lVar1 = *(longlong *)(param_1[0x1ae] + lVar2 * 8);
        if (((lVar1 != 0) && (lVar3 = FUN_140aa2aee(lVar1), lVar3 != 0)) &&
           ((param_3 == '\0' || (*(char *)(lVar3 + 0x30) == '\0')))) {
          *(undefined4 *)(lVar1 + 0x134) = param_2;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)param_1[0x1af]);
    }
    *(byte *)((longlong)param_1 + 0xc61) = *(byte *)((longlong)param_1 + 0xc61) & 0xdf;
    FUN_14048cbac(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001417ef426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xce8))(param_1);
    return;
  }
  return;
}



// FUNCTION 1417ef444 FUN_1417ef444 body=102 status=ok
// SIG undefined FUN_1417ef444(void)

byte FUN_1417ef444(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar2 = FUN_1401f938a();
  bVar4 = true;
  if ((((*(int *)(param_1 + 0x66c) != 0) && (uVar1 = *(uint *)(param_1 + 0x668), -1 < (int)uVar1))
      && ((int)uVar1 < DAT_14c9647dc)) &&
     ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0 &&
      (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x66c))))) {
    bVar4 = (*(uint *)(lVar3 + 8) & 0x10200000) != 0;
  }
  return bVar2 & bVar4;
}



// FUNCTION 1417ef4aa FUN_1417ef4aa body=380 status=ok
// SIG undefined FUN_1417ef4aa(void)

void FUN_1417ef4aa(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = (**(code **)(*param_1 + 0xb98))();
  if (0 < (int)param_1[0x1af]) {
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(param_1[0x1ae] + lVar8 * 8);
      if ((lVar2 != 0) &&
         ((*(longlong *)(lVar2 + 0x108) != 0 ||
          (((char)param_4 != '\0' && ((*(byte *)(lVar2 + 8) & 0x10) != 0)))))) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1405a36b0(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
        if ((lVar5 == 0) ||
           (lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x40) + lVar8 * 8), lVar2 == 0)) {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = 0;
        }
        else {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x28);
        }
        lVar2 = param_1[0x28];
        if ((longlong)(int)lVar2 != 0) {
          lVar3 = param_1[0x27];
          lVar7 = 0;
          do {
            plVar4 = *(longlong **)(lVar3 + lVar7);
            if (plVar4 != (longlong *)0x0) {
              lVar6 = FUN_144a3a302();
              if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                  lVar6 + 0x30)) {
                (**(code **)(*plVar4 + 0x7e8))(plVar4,param_2,param_3,param_4);
              }
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)(int)lVar2 << 3 != lVar7);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[0x1af]);
  }
  return;
}



// FUNCTION 1417ef626 FUN_1417ef626 body=153 status=ok
// SIG undefined FUN_1417ef626(void)

void FUN_1417ef626(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if (0 < (int)param_1[0x1af]) {
    lVar5 = (**(code **)(*param_1 + 0xb98))();
    if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x48))) {
      lVar6 = 0;
      bVar3 = 0;
      do {
        bVar2 = bVar3;
        iVar4 = FUN_144909502(param_1,*(undefined8 *)
                                       (*(longlong *)(*(longlong *)(lVar5 + 0x40) + lVar6 * 8) +
                                       0x28));
        lVar1 = *(longlong *)(param_1[0x1ae] + lVar6 * 8);
        bVar7 = (iVar4 != -1) != (*(longlong *)(lVar1 + 0x138) != 0);
        *(short *)(lVar1 + 0x10) = (short)iVar4;
        lVar6 = lVar6 + 1;
        bVar3 = bVar2 | bVar7;
      } while (lVar6 < *(int *)(lVar5 + 0x48));
      if ((bool)(bVar2 | bVar7)) {
        FUN_1406cc378(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1417ef6c0 FUN_1417ef6c0 body=672 status=ok
// SIG undefined FUN_1417ef6c0(void)

longlong FUN_1417ef6c0(longlong param_1,undefined4 *param_2,float *param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  float local_7c;
  code *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_4[2] = *(undefined8 *)(param_2 + 4);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)param_4 = *param_2;
  *(undefined4 *)((longlong)param_4 + 4) = uVar4;
  *(undefined4 *)(param_4 + 1) = uVar5;
  *(undefined4 *)((longlong)param_4 + 0xc) = uVar6;
  if (*(int *)(param_1 + 0xd78) < 1) {
    lVar11 = 0;
  }
  else {
    lVar9 = 0;
    lVar11 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd70) + lVar9 * 8);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x138) != 0)) {
        if (((*(int *)(lVar2 + 0x144) == 0) ||
            ((((uVar1 = *(uint *)(lVar2 + 0x140), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1))
              || (plVar8 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar8 == (longlong *)0x0)) ||
             (((int)plVar8[2] != *(int *)(lVar2 + 0x144) ||
              ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))))) || (lVar3 = *plVar8, lVar3 == 0)) {
LAB_1417ef7db:
          pcVar10 = (char *)(lVar2 + 0x17);
        }
        else {
          if ((*(longlong *)(lVar3 + 0xa8) != 0) &&
             ((*(byte *)(*(longlong *)(lVar3 + 0xa8) + 0x65) & 1) == 0)) goto LAB_1417ef827;
          if (DAT_14cad2858 == 0) {
            local_78 = FUN_144a7958c;
            local_90 = FUN_14081d0ea;
            local_98 = &LAB_146395584;
            local_a0 = &local_78;
            local_a8 = &LAB_147a0ba80;
            local_b0 = &LAB_14575ccce;
            local_b8 = L"Engine";
            local_c0 = 0x40000000000;
            local_c8 = 0x10000004;
            local_d0 = 0x10;
            local_d8 = 0x1180;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          }
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
          goto LAB_1417ef7db;
          pcVar10 = (char *)(lVar3 + 0x427);
        }
        if (*pcVar10 != '\0') {
          local_7c = -1.0;
          cVar7 = FUN_14004245a(*(undefined8 *)(*(longlong *)(param_1 + 0xd70) + lVar9 * 8),param_2,
                                &local_7c,&local_78);
          if ((cVar7 != '\0') && ((lVar11 == 0 || (local_7c < *param_3)))) {
            *param_3 = local_7c;
            param_4[2] = local_68;
            *param_4 = local_78;
            param_4[1] = uStack_70;
            lVar11 = 1;
            if (local_7c <= 0.0001) {
              lVar11 = 1;
              break;
            }
          }
        }
      }
LAB_1417ef827:
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0xd78));
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar11;
}



// FUNCTION 1417ef962 FUN_1417ef962 body=66 status=ok
// SIG undefined FUN_1417ef962(void)

undefined8 FUN_1417ef962(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x2b8) + 0x7b8))
                    (param_1 + -0x2b8,*param_2,1,0xffffffff);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x138) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x138) + 0x50);
  }
  return uVar2;
}



// FUNCTION 1417ef9a4 FUN_1417ef9a4 body=266 status=ok
// SIG undefined FUN_1417ef9a4(void)

bool FUN_1417ef9a4(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb06fb8) {
    FUN_144b3d300(&DAT_14cb06fb8);
    if (DAT_14cb06fb8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.FreeSkeletalMeshBuffers",1);
      if (plVar5 == (longlong *)0x0) {
        DAT_14cb06fb0 = 0;
      }
      else {
        DAT_14cb06fb0 = (**(code **)(*plVar5 + 0x68))(plVar5);
      }
      _Init_thread_footer(&DAT_14cb06fb8);
    }
  }
  lVar2 = DAT_14cb06fb0;
  if (DAT_14cb06fb0 == 0) {
    bVar7 = true;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar6 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar6 = 1;
    }
    bVar7 = *(int *)(lVar2 + uVar6 * 4) == 0;
  }
  return bVar7;
}



// FUNCTION 1417efaae FUN_1417efaae body=40 status=ok
// SIG undefined FUN_1417efaae(void)

undefined8 FUN_1417efaae(undefined8 param_1,int param_2)

{
  FUN_14074f0b4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417efad6 FUN_1417efad6 body=226 status=ok
// SIG undefined FUN_1417efad6(void)

void FUN_1417efad6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1417efbb8 FUN_1417efbb8 body=332 status=ok
// SIG undefined FUN_1417efbb8(void)

void FUN_1417efbb8(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417efc26;
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
LAB_1417efc26:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 1417efd04 FUN_1417efd04 body=651 status=ok
// SIG undefined FUN_1417efd04(void)

void FUN_1417efd04(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  int iVar12;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0);
    }
LAB_1417efd49:
    uVar4 = 0;
    do {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar8 != uVar4);
  }
  else {
    if (uVar8 == 0) goto LAB_1417efe3b;
    FUN_1446efa72(plVar6,0);
    if (0 < (int)uVar8) goto LAB_1417efd49;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar9 = (int)param_1[5];
  local_4c = 1;
  if (iVar9 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = local_48;
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar12 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar12 = iVar9 + -1;
      }
      uVar7 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar7;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar12 = 0;
      do {
        local_3c = iVar9;
        if (uVar10 == uVar7) goto LAB_1417efe0d;
        iVar12 = iVar12 + 0x20;
        uVar8 = puVar11[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar8 == 0);
      local_50 = (int)uVar7;
      local_38 = iVar12;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar8 & uVar8;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar9 <= local_3c) {
      local_3c = iVar9;
    }
  }
LAB_1417efe0d:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar9) {
    do {
      lVar3 = *local_58;
      lVar5 = (longlong)local_3c;
      uVar2 = *(undefined8 *)(lVar3 + lVar5 * 0x18);
      uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar4 = (uint)uVar2 & 0xffff;
      uVar10 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar4) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar9 = (int)uVar10;
      *(int *)(lVar3 + 0x14 + lVar5 * 0x18) = iVar9;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar3 + 0x10 + lVar5 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_1417efe3b:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417eff90 FUN_1417eff90 body=101 status=ok
// SIG undefined FUN_1417eff90(void)

void FUN_1417eff90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa8f540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1417efff6 FUN_1417efff6 body=34 status=ok
// SIG undefined FUN_1417efff6(void)

void FUN_1417efff6(longlong param_1)

{
  FUN_14013ffd6(param_1 + 0x10);
  FUN_14013ffd6(param_1 + 0x20);
  return;
}



// FUNCTION 1417f0018 FUN_1417f0018 body=340 status=ok
// SIG undefined FUN_1417f0018(void)

void FUN_1417f0018(longlong param_1,uint param_2)

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
    uVar3 = (ulonglong)param_2 * 0xf8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x85) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0xfffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417f0084;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0xfffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1417f0084:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0xf8)) {
      uVar4 = uVar3 / 0xf8 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xf8,8);
  }
  return;
}



// FUNCTION 1417f016c FUN_1417f016c body=108 status=ok
// SIG undefined FUN_1417f016c(void)

bool FUN_1417f016c(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = 0;
  iVar3 = FUN_1401a8bec(0);
  if (param_3 < (int)param_1[1]) {
    lVar5 = (longlong)param_3;
    iVar4 = 0;
    do {
      lVar2 = *(longlong *)(*param_1 + lVar5 * 8);
      lVar6 = (longlong)*(int *)(lVar2 + 0x18);
      if (0 < lVar6) {
        lVar7 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x40 + lVar7);
          if (iVar4 < iVar1) {
            iVar4 = iVar1;
          }
          lVar7 = lVar7 + 0xf8;
        } while (lVar6 * 0xf8 - lVar7 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != (int)param_1[1]);
  }
  return iVar3 < iVar4;
}



// FUNCTION 1417f01d8 FUN_1417f01d8 body=104 status=ok
// SIG undefined FUN_1417f01d8(void)

void FUN_1417f01d8(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x18);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar4 = *(longlong *)(param_1 + 0x140);
  *(longlong *)(param_1 + 0x140) = lVar3;
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1409552c0(param_1 + 0x148,*(longlong *)(param_2 + 0x20) + 0x20);
  return;
}



// FUNCTION 1417f0240 FUN_1417f0240 body=169 status=ok
// SIG undefined FUN_1417f0240(void)

bool FUN_1417f0240(char param_1)

{
  char cVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb07e28) {
    FUN_144b3d300(&DAT_14cb07e28);
    if (DAT_14cb07e28 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb07e20 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SkinCache.DefaultBehavior",1);
      _Init_thread_footer(&DAT_14cb07e28);
    }
  }
  cVar1 = (**(code **)(*DAT_14cb07e20 + 0xb0))();
  if (param_1 == '\0') {
    param_1 = cVar1;
  }
  return param_1 == '\x01';
}



// FUNCTION 1417f02e9 FUN_1417f02e9 body=375 status=ok
// SIG undefined FUN_1417f02e9(void)

longlong * FUN_1417f02e9(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cc28);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3ca30);
  (**(code **)(*param_1 + 0x138))(param_1,param_2);
  iVar5 = FUN_1448332aa(param_1,&DAT_149e3cc28);
  if (7 < iVar5) {
    (**(code **)(*param_1 + 0x160))(param_1,param_2 + 8);
    lVar2 = param_1[0xd];
    uVar6 = 1;
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) {
      bVar4 = (**(code **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 0x80))
                        (*(longlong *)(lVar2 + 8) + 8);
      uVar6 = (uint)bVar4;
    }
    iVar5 = FUN_1448332aa(param_1,&DAT_149e3ca30);
    if (2 < iVar5) {
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar1) {
        local_30 = CONCAT44(local_30._4_4_,uVar6);
        (**(code **)(*param_1 + 0x170))(param_1,&local_30,4);
        uVar6 = (uint)local_30;
        if (1 < (uint)local_30) {
          FUN_14572541c(param_1);
          uVar6 = (uint)local_30;
        }
      }
      else {
        uVar6 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
      }
      if (uVar6 != 0) {
        local_30 = 0;
        (**(code **)(*param_1 + 0x160))(param_1);
      }
    }
  }
  if (((*(byte *)(param_1 + 5) & 1) == 0) ||
     (iVar5 = FUN_1448332aa(param_1,&DAT_149e3cb60), 9 < iVar5)) {
    FUN_1404901a3(param_1,param_2 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f0462 FUN_1417f0462 body=208 status=ok
// SIG undefined FUN_1417f0462(void)

double * FUN_1417f0462(longlong param_1,double *param_2)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x1f8) != 0) && (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x1f8) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x1f0);
      }
      lVar3 = (**(code **)(*plVar4 + 0x58))();
      *(longlong *)(param_1 + 0x1e0) = lVar3;
      goto LAB_1417f048d;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x1e0);
LAB_1417f048d:
  dVar1 = DAT_14c8463f8;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(lVar3 + 8) + 0x28))(lVar3 + 8,local_20);
    *param_2 = (double)local_20._0_4_;
    param_2[1] = (double)local_20._4_4_;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *param_2 = DAT_14c8463f0;
  param_2[1] = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1417f0534 FUN_1417f0534 body=162 status=ok
// SIG undefined FUN_1417f0534(void)

undefined8 * FUN_1417f0534(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + -0x90) != 0) {
    plVar1 = (longlong *)(param_1 + -0xc0);
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_38);
    if ((local_38 != (int)DAT_14c967818) || (local_34 != DAT_14c967818._4_4_)) {
      (**(code **)(**(longlong **)(param_1 + -0x90) + 0xc0))
                (*(longlong **)(param_1 + -0x90),param_2,plVar1,param_3);
      goto LAB_1417f05a9;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1417f05a9:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f05d8 FUN_1417f05d8 body=104 status=ok
// SIG undefined FUN_1417f05d8(void)

void FUN_1417f05d8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1407a4be8(param_1 + -200);
  lVar1 = param_1 + -0xc0;
  plVar2 = *(longlong **)(param_1 + -0x90);
  uVar3 = (**(code **)(*(longlong *)(param_1 + -0xc0) + 0x108))(lVar1);
  uVar4 = (**(code **)(*(longlong *)(param_1 + -0xc0) + 0x100))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001417f063d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x90))(plVar2,lVar1,uVar4,uVar3);
  return;
}



// FUNCTION 1417f0640 FUN_1417f0640 body=615 status=ok
// SIG undefined FUN_1417f0640(void)

undefined8 FUN_1417f0640(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_f8 = (undefined8 *)CONCAT71(local_f8._1_7_,1);
  local_d8 = 0;
  local_f0 = (undefined1 *)0x0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  lVar1 = param_1 + 8;
  FUN_1403d4924(lVar1);
  FUN_14493db24(&local_f8);
  local_118 = *(undefined8 *)(param_4 + 0x20);
  uStack_110 = *(undefined8 *)(param_4 + 0x28);
  local_108 = *(longlong **)(param_4 + 0x30);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_1403e7f2a(&local_118);
  if (cVar5 != '\0') {
    local_f0 = &local_119;
    local_119 = 0;
    local_f8 = &local_118;
    FUN_1403d4e02(param_1 + 0xc0,local_fc);
    if (*(longlong *)(param_1 + -0x90) == 0) goto LAB_1417f07c2;
    plVar3 = (longlong *)(param_1 + -0xc0);
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_f8);
    if (((int)local_f8 == (int)DAT_14c967818) && (local_f8._4_4_ == DAT_14c967818._4_4_))
    goto LAB_1417f07c2;
    plVar4 = *(longlong **)(param_1 + -0x90);
    local_138 = (undefined4)local_118;
    uStack_134 = local_118._4_4_;
    uStack_130 = (undefined4)uStack_110;
    uStack_12c = uStack_110._4_4_;
    local_128 = local_108;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
    }
    local_148 = 1;
    FUN_1408c19c4(&local_f8,plVar3,*(undefined4 *)(param_4 + 0x10),&local_138);
    cVar5 = (**(code **)(*plVar4 + 0x48))(plVar4);
    plVar3 = (longlong *)CONCAT71(uStack_d7,local_d8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (cVar5 != '\0') goto LAB_1417f07c2;
  }
  local_f8 = (undefined8 *)((ulonglong)local_f8 & 0xffffffffffffff00);
  local_d8 = 0;
  local_f0 = (undefined1 *)0x0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = CONCAT35(local_48._5_3_,0x20702);
  FUN_1403d4924(lVar1,&local_f8);
  FUN_14493db24(&local_f8);
LAB_1417f07c2:
  FUN_1403d4c6e(param_2,lVar1);
  plVar3 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_108 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f08a8 FUN_1417f08a8 body=336 status=ok
// SIG undefined FUN_1417f08a8(void)

undefined8 FUN_1417f08a8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_118 [40];
  uint local_f0;
  int local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0;
  undefined1 local_c8 [136];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = CONCAT31(local_f0._1_3_,1);
  local_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  memset(local_c8,0,0x88);
  local_40 = 0x20702;
  lVar1 = param_1 + 8;
  FUN_1403d4924(lVar1,&local_f0);
  FUN_14493db24(&local_f0);
  if (*(longlong *)(param_1 + -0x90) != 0) {
    plVar2 = (longlong *)(param_1 + -0xc0);
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_f0);
    if ((local_f0 != (uint)DAT_14c967818) || (local_ec != DAT_14c967818._4_4_)) {
      cVar3 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x60))
                        (*(longlong **)(param_1 + -0x90),plVar2,*(undefined4 *)(param_4 + 0xc),
                         *(undefined2 *)(param_4 + 0x20));
      if (cVar3 == '\0') {
        local_f0 = local_f0 & 0xffffff00;
        local_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        memset(local_c8,0,0x88);
        local_40 = 0x20702;
        FUN_1403d4924(lVar1,&local_f0);
        FUN_14493db24(&local_f0);
      }
    }
  }
  FUN_1403d4c6e(param_2,lVar1);
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f09fa FUN_1417f09fa body=275 status=ok
// SIG undefined FUN_1417f09fa(void)

void FUN_1417f09fa(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x38))(param_1 + 0xc0);
  if (cVar4 == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x2d8);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x2d8) = 0;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    local_68 = 0;
    FUN_14011af16(*(undefined8 *)(param_1 + 0x2e0),&local_68,0,0);
  }
  else if (*(longlong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)*(int *)(param_1 + 0x2e8) * 8)
           != 0) {
    local_40 = *(undefined8 *)(param_1 + 0x2d8);
    local_60 = &local_50;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffff;
    local_38 = 1;
    local_34 = 0x7000000000;
    local_2c = 0;
    local_20 = 0;
    local_58 = 1;
    FUN_144760590(param_2,&local_60,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f0b0e FUN_1417f0b0e body=97 status=ok
// SIG undefined FUN_1417f0b0e(void)

void FUN_1417f0b0e(longlong *param_1)

{
  FUN_14074f529(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f4c0(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f4e6(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417f0b70 FUN_1417f0b70 body=337 status=ok
// SIG undefined FUN_1417f0b70(void)

void FUN_1417f0b70(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417f0bdd;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1417f0bdd:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
  }
  return;
}



// FUNCTION 1417f0cc2 FUN_1417f0cc2 body=230 status=ok
// SIG undefined FUN_1417f0cc2(void)

void FUN_1417f0cc2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0xcd) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if ((int)param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,8);
  }
  return;
}



// FUNCTION 1417f0da8 FUN_1417f0da8 body=29 status=ok
// SIG undefined FUN_1417f0da8(void)

undefined8 FUN_1417f0da8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f0dc5 FUN_1417f0dc5 body=49 status=ok
// SIG undefined FUN_1417f0dc5(void)

longlong FUN_1417f0dc5(void)

{
  if (DAT_14cb08928 == 0) {
    FUN_14086a14e(&DAT_14cb08928,&PTR_FUN_14aa9ef00);
  }
  return DAT_14cb08928;
}



// FUNCTION 1417f0df6 FUN_1417f0df6 body=49 status=ok
// SIG undefined FUN_1417f0df6(void)

longlong FUN_1417f0df6(void)

{
  if (DAT_14cb08978 == 0) {
    FUN_14073dd9a(&DAT_14cb08978,&PTR_LAB_14aa9f628);
  }
  return DAT_14cb08978;
}



// FUNCTION 1417f0e2d FUN_1417f0e2d body=49 status=ok
// SIG undefined FUN_1417f0e2d(void)

longlong FUN_1417f0e2d(void)

{
  if (DAT_14cb08e18 == 0) {
    FUN_14073dd9a(&DAT_14cb08e18,&PTR_LAB_14aaaa410);
  }
  return DAT_14cb08e18;
}



// FUNCTION 1417f0e5e FUN_1417f0e5e body=326 status=ok
// SIG undefined FUN_1417f0e5e(void)

void FUN_1417f0e5e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  FUN_1446e0b6e();
  uVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
  *(undefined4 *)(param_1 + 8) = uVar5;
  for (plVar1 = param_1; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[4]) {
    if ((*(uint *)(plVar1 + 1) & 0x30) != 0) {
      return;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar3 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return;
    }
    bVar3 = DAT_14c8442b8 & 1;
  }
  if (bVar3 != 0) {
    return;
  }
  lVar4 = param_1[0x14];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = param_1[0x13];
    lVar6 = 0;
    do {
      FUN_1412f4220(*(undefined8 *)(lVar2 + lVar6));
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0001417f0f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_14cb091a0)(&DAT_14cb091a0,param_1);
  return;
}



// FUNCTION 1417f0faa FUN_1417f0faa body=241 status=ok
// SIG undefined FUN_1417f0faa(void)

void FUN_1417f0faa(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  switchD_143c3d4dc::caseD_1d();
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) {
      return;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return;
    }
    bVar2 = DAT_14c8442b8 & 1;
  }
  if (bVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001417f1021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_14cb091a0 + 8))(&DAT_14cb091a0,param_1);
  return;
}



// FUNCTION 1417f109c FUN_1417f109c body=1329 status=ok
// SIG undefined FUN_1417f109c(void)

void FUN_1417f109c(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,byte param_6,byte param_7)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xe) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_4;
  *(undefined4 *)(param_1 + 0xf) = param_5;
  *(byte *)((longlong)param_1 + 0x7c) = param_6;
  *(byte *)((longlong)param_1 + 0x7d) = param_7;
  *(undefined4 *)(param_1 + 0x10) =
       *(undefined4 *)((longlong)&DAT_14c873428 + (ulonglong)((uint)param_6 * 0x30));
  *(undefined4 *)((longlong)param_1 + 0x84) =
       *(undefined4 *)((longlong)&DAT_14c873428 + (ulonglong)((uint)param_7 * 0x30));
  local_68 = param_1 + 2;
  if (param_1[2] != 0) {
    local_60 = *(ulonglong *)(param_1[2] + 0x28);
    plVar8 = (longlong *)FUN_1449ed75e(param_2 + 0x250);
    if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
      puVar6 = (undefined8 *)*param_1;
      if (puVar6 != (undefined8 *)0x0) {
        *param_1 = 0;
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      puVar6 = (undefined8 *)param_1[1];
      if (puVar6 != (undefined8 *)0x0) {
        param_1[1] = 0;
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      puVar6 = (undefined8 *)*local_68;
      if (puVar6 != (undefined8 *)0x0) {
        *local_68 = 0;
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      puVar6 = (undefined8 *)param_1[3];
      if (puVar6 != (undefined8 *)0x0) {
        param_1[3] = 0;
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      puVar6 = (undefined8 *)param_1[4];
      if (puVar6 != (undefined8 *)0x0) {
        param_1[4] = 0;
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x7c) == '\0') {
    iVar11 = 1;
  }
  else {
    iVar11 = 2 - (uint)(*(char *)((longlong)param_1 + 0x7d) == '\0');
  }
  if (0 < (int)param_1[0xe]) {
    lVar4 = *(longlong *)(param_2 + 0x18);
    uVar10 = (int)param_1[0xe] * iVar11 * 0x2dc;
    local_50 = 0;
    local_60 = CONCAT44(uVar10 >> 2,4);
    local_58 = 0x10112;
    FUN_1449ed2ff(&local_60,param_1,L"SparseVolumeTexture.OccupancyBitsUploadBuffer",1);
    uVar5 = *(undefined8 *)(*param_1 + 0x28);
    cVar2 = *(char *)(lVar4 + 0x69);
    if (cVar2 == '\0') {
      FUN_14002049c(lVar4,1);
    }
    local_70 = 1;
    local_78 = uVar10;
    lVar7 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar4,uVar5,0);
    if (cVar2 == '\0') {
      FUN_14002049c(lVar4,0);
    }
    param_1[7] = lVar7;
    lVar9 = (longlong)(int)param_1[0xe] * 0x2dc;
    if (*(char *)((longlong)param_1 + 0x7c) == '\0') {
      lVar9 = 0;
    }
    param_1[8] = lVar7 + lVar9;
    local_50 = 0;
    local_60 = CONCAT44((int)param_1[0xe] * iVar11,4) & 0x3fffffffffffffff;
    local_58 = 0x10112;
    FUN_1449ed2ff(&local_60,param_1 + 1,L"SparseVolumeTexture.TileDataOffsetsUploadBuffer",1);
    FUN_14017c08a(param_1 + 5,iVar11 * (int)param_1[0xe],1);
    param_1[9] = param_1[5];
    iVar11 = (int)param_1[0xe];
    lVar7 = (longlong)iVar11 * 4;
    if (*(char *)((longlong)param_1 + 0x7c) == '\0') {
      lVar7 = 0;
    }
    param_1[10] = lVar7 + param_1[5];
    local_50 = 0;
    local_60 = CONCAT44(iVar11,4) & 0x3fffffffffffffff;
    local_58 = 0x10112;
    FUN_1449ed2ff(&local_60,local_68,L"SparseVolumeTexture.TileCoordsUploadBuffer",1);
    uVar5 = *(undefined8 *)(param_1[2] + 0x28);
    cVar2 = *(char *)(lVar4 + 0x69);
    if (cVar2 == '\0') {
      FUN_14002049c(lVar4,1);
    }
    local_70 = 1;
    local_78 = iVar11 * 4;
    lVar7 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar4,uVar5,0);
    if (cVar2 == '\0') {
      FUN_14002049c(lVar4,0);
    }
    param_1[0xb] = lVar7;
    if (0 < (int)param_1[0x10]) {
      iVar11 = *(int *)((longlong)param_1 + 0x74);
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      local_50 = 0;
      local_60 = CONCAT44(iVar11,(int)param_1[0x10]);
      local_58 = 0x4102;
      FUN_1449ed2ff(&local_60,param_1 + 3,L"SparseVolumeTexture.TileDataAUploadBuffer",1);
      iVar11 = 1;
      if (1 < *(int *)((longlong)param_1 + 0x74)) {
        iVar11 = *(int *)((longlong)param_1 + 0x74);
      }
      lVar7 = param_1[0x10];
      uVar5 = *(undefined8 *)(param_1[3] + 0x28);
      cVar2 = *(char *)(lVar4 + 0x69);
      if (cVar2 == '\0') {
        FUN_14002049c(lVar4,1);
      }
      local_70 = 1;
      local_78 = iVar11 * (int)lVar7;
      lVar7 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar4,uVar5,0);
      if (cVar2 == '\0') {
        FUN_14002049c(lVar4,0);
      }
      param_1[0xc] = lVar7;
    }
    if (0 < *(int *)((longlong)param_1 + 0x84)) {
      iVar11 = (int)param_1[0xf];
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      local_50 = 0;
      local_60 = CONCAT44(iVar11,*(int *)((longlong)param_1 + 0x84));
      local_58 = 0x4102;
      FUN_1449ed2ff(&local_60,param_1 + 4,L"SparseVolumeTexture.TileDataBUploadBuffer",1);
      iVar11 = 1;
      if (1 < (int)param_1[0xf]) {
        iVar11 = (int)param_1[0xf];
      }
      iVar3 = *(int *)((longlong)param_1 + 0x84);
      uVar5 = *(undefined8 *)(param_1[4] + 0x28);
      cVar2 = *(char *)(lVar4 + 0x69);
      if (cVar2 == '\0') {
        FUN_14002049c(lVar4,1);
      }
      local_70 = 1;
      local_78 = iVar11 * iVar3;
      lVar7 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar4,uVar5,0);
      if (cVar2 == '\0') {
        FUN_14002049c(lVar4,0);
      }
      param_1[0xd] = lVar7;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f15da FUN_1417f15da body=257 status=ok
// SIG undefined FUN_1417f15da(void)

void FUN_1417f15da(longlong param_1)

{
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (float)(*(double *)(param_1 + 0x1c8) - *(double *)(param_1 + 0x1e0));
  local_54 = (float)(*(double *)(param_1 + 0x1c0) - *(double *)(param_1 + 0x1d8));
  local_58 = (float)(*(double *)(param_1 + 0x1b8) - *(double *)(param_1 + 0x1d0));
  local_44 = (float)(*(double *)(param_1 + 0x1c8) + *(double *)(param_1 + 0x1e0));
  local_48 = (float)(*(double *)(param_1 + 0x1c0) + *(double *)(param_1 + 0x1d8));
  local_4c = (float)(*(double *)(param_1 + 0x1b8) + *(double *)(param_1 + 0x1d0));
  FUN_140782c80(param_1 + 0x9d8,param_1 + 0x100);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f16dc FUN_1417f16dc body=49 status=ok
// SIG undefined FUN_1417f16dc(void)

longlong FUN_1417f16dc(void)

{
  if (DAT_14cb09aa8 == 0) {
    FUN_14073dd9a(&DAT_14cb09aa8,&PTR_LAB_14aab92f0);
  }
  return DAT_14cb09aa8;
}



// FUNCTION 1417f170d FUN_1417f170d body=634 status=ok
// SIG undefined FUN_1417f170d(void)

void FUN_1417f170d(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined4 local_88;
  longlong local_80;
  ulonglong uStack_78;
  undefined1 local_70 [16];
  longlong local_60;
  undefined4 local_58;
  uint local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined8 *)*param_1;
  FUN_140307e00(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aab9330;
  puVar1[0x19] = &PTR_FUN_14aab9650;
  puVar1[0x1a] = &PTR_FUN_14aab9690;
  puVar1[0x1b] = &PTR_FUN_14aab96d0;
  puVar1[0x24] = 0;
  *(undefined4 *)(puVar1 + 0x25) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(undefined8 *)((longlong)puVar1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x134) = 0;
  puVar1[0x28] = 0;
  *(undefined4 *)(puVar1 + 0x29) = 0;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x31] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x49] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x39] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  *(undefined1 *)(puVar1 + 0x4c) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x16c) = 4;
  puVar1[0x2a] = 0xffffffff00000000;
  *(byte *)((longlong)puVar1 + 0x194) = *(byte *)((longlong)puVar1 + 0x194) & 0x93 | 0x24;
  *(byte *)((longlong)puVar1 + 0x195) = *(byte *)((longlong)puVar1 + 0x195) & 0xfe;
  local_60 = 0;
  local_58 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0x80;
  uStack_50 = 0xffffffff;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  local_88 = 0;
  if (puVar1 + 0x1d != local_98) {
    *(undefined4 *)(puVar1 + 0x1e) = 0;
  }
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  FUN_140308010(puVar1 + 0x20,&local_80);
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  uVar2 = uStack_78 >> 0x20;
  uStack_78 = uStack_78 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    FUN_14472eb64(&local_80,0);
  }
  uStack_50 = 0xffffffff;
  local_4c = 0;
  local_58 = 0;
  if (0x80 < local_54) {
    local_54 = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14030806e(puVar1 + 0x1d,L"r.StaticMesh.MinLodQualityLevel",L"ViewDistanceQuality");
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f1988 FUN_1417f1988 body=80 status=ok
// SIG undefined FUN_1417f1988(void)

void FUN_1417f1988(longlong param_1)

{
  FUN_140414380(param_1,0);
  FUN_140414380(param_1 + 0x220,0);
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_140414380(*(longlong *)(param_1 + 0x440),0);
  }
  if (*(longlong *)(param_1 + 0x448) == 0) {
    return;
  }
  FUN_140414380(*(longlong *)(param_1 + 0x448),0);
  return;
}



// FUNCTION 1417f19d8 FUN_1417f19d8 body=82 status=ok
// SIG undefined FUN_1417f19d8(void)

undefined8 FUN_1417f19d8(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14016398c();
  if (cVar1 != '\0') {
    cVar1 = FUN_1402bfec4(param_1,0);
    if (cVar1 == '\0') {
      if ((*(byte *)((longlong)param_1 + 0x195) & 1) != 0) {
        (**(code **)(*param_1 + 0x310))(param_1);
      }
      uVar2 = FUN_1447fa3ae(param_1 + 0x33);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1417f1a2a FUN_1417f1a2a body=170 status=ok
// SIG undefined FUN_1417f1a2a(void)

void FUN_1417f1a2a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
  if (iVar1 < 3) {
    *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x68) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x70) = 0x3ff0000000000000;
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f1ad6 FUN_1417f1ad6 body=86 status=ok
// SIG undefined FUN_1417f1ad6(void)

longlong FUN_1417f1ad6(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0xaa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x8b8) = &PTR_LAB_14aabc508;
  FUN_14006e4b8(param_1 + 0x970);
  FUN_140208272(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f1b2c FUN_1417f1b2c body=67 status=ok
// SIG undefined FUN_1417f1b2c(void)

longlong FUN_1417f1b2c(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x920) = &PTR_LAB_14aabc518;
  FUN_14006e4b8(param_1 + 0x9d8);
  FUN_140064a96(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f1b70 FUN_1417f1b70 body=40 status=ok
// SIG undefined FUN_1417f1b70(void)

undefined8 FUN_1417f1b70(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f1b98 FUN_1417f1b98 body=212 status=ok
// SIG undefined FUN_1417f1b98(void)

void FUN_1417f1b98(longlong param_1,uint param_2)

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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,4);
  }
  return;
}



// FUNCTION 1417f1c6c FUN_1417f1c6c body=325 status=ok
// SIG undefined FUN_1417f1c6c(void)

void FUN_1417f1c6c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417f1db2 FUN_1417f1db2 body=325 status=ok
// SIG undefined FUN_1417f1db2(void)

void FUN_1417f1db2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417f1ef8 FUN_1417f1ef8 body=40 status=ok
// SIG undefined FUN_1417f1ef8(void)

undefined8 FUN_1417f1ef8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f1f20 FUN_1417f1f20 body=40 status=ok
// SIG undefined FUN_1417f1f20(void)

undefined8 FUN_1417f1f20(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f1f48 FUN_1417f1f48 body=287 status=ok
// SIG undefined FUN_1417f1f48(void)

void FUN_1417f1f48(ulonglong *param_1,uint param_2,undefined8 param_3,code *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = (uint)param_1[1];
  if ((int)uVar1 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar1) {
      uVar4 = uVar1;
    }
    uVar2 = (ulonglong)(int)uVar4;
  }
  else {
    uVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
  }
  uVar3 = uVar2 * 0x40;
  if (DAT_14c872d28 != (longlong *)0x0) {
    param_4 = *(code **)(*DAT_14c872d28 + 0x60);
    if (param_4 != (code *)&LAB_14489e5c8) goto LAB_1417f203d;
    if (uVar3 < 0x7ff1) {
      uVar3 = (ulonglong)
              (ushort)(&DAT_14c841d90)
                      [0x32 - (byte)(&DAT_14c841e00)[(uVar2 & 0x3ffffffffffffff) * 4]];
    }
    else {
      uVar2 = 0x10;
      if (0x10 < DAT_14c841df8) {
        uVar2 = (ulonglong)DAT_14c841df8;
      }
      uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
    }
  }
  do {
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar2 = uVar3 >> 6 & 0xffffffff;
    }
    uVar4 = (uint)uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      if ((uVar3 == 0) && ((int)uVar4 < 1)) {
        return;
      }
      if (-1 < (int)uVar4) {
        uVar2 = FUN_14001fdce(uVar3,uVar2 << 6,8);
        *param_1 = uVar2;
        return;
      }
    }
    else if (uVar4 <= param_2) {
      return;
    }
    FUN_1467ac767(uVar2,0x40);
LAB_1417f203d:
    uVar3 = (*param_4)();
  } while( true );
}



// FUNCTION 1417f2068 FUN_1417f2068 body=29 status=ok
// SIG undefined FUN_1417f2068(void)

undefined8 FUN_1417f2068(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f2086 FUN_1417f2086 body=327 status=ok
// SIG undefined FUN_1417f2086(void)

void FUN_1417f2086(undefined8 *param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_1 + 2);
  if (0 < iVar2) {
    uVar5 = 0;
    do {
      lVar3 = param_1[1];
      if ((*(uint *)(*(longlong *)(lVar3 + (longlong)(int)uVar5 * 8) + 8) >> 0x1e & 1) == 0) {
        uVar5 = uVar5 + 1;
      }
      else {
        iVar6 = ~uVar5 + iVar2;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar3 + (longlong)(int)uVar5 * 8),
                  (void *)(lVar3 + (longlong)(iVar2 - iVar6) * 8),(longlong)iVar6 << 3);
          iVar2 = *(int *)(param_1 + 2);
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 2) = iVar2;
      }
    } while ((int)uVar5 < iVar2);
  }
  if (iVar2 != 0) {
    local_30 = param_1[1];
    local_28 = iVar2;
    (**(code **)(*(longlong *)*param_1 + 0x38))();
    iVar2 = *(int *)(param_1 + 2);
    if ((longlong)iVar2 != 0) {
      lVar3 = param_1[1];
      lVar4 = 0;
      do {
        pbVar1 = (byte *)(*(longlong *)(lVar3 + lVar4) + 0x2d3);
        *pbVar1 = *pbVar1 & 0xfd;
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar2 * 8 != lVar4);
    }
  }
  lVar3 = param_1[3];
  iVar2 = *(int *)(param_1 + 4);
  if ((longlong)iVar2 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(*(longlong *)(lVar3 + lVar4) + 0xa8) = 0;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
    lVar3 = param_1[3];
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417f21ce FUN_1417f21ce body=225 status=ok
// SIG undefined FUN_1417f21ce(void)

ulonglong FUN_1417f21ce(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0x12) == '\0')) {
    plVar1 = (longlong *)(param_1 + 0x18);
    lVar2 = *param_2;
    *param_2 = 0;
    lVar4 = param_2[1];
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
LAB_1417f2210:
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar3 = (undefined8 *)*plVar1;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)(param_1 + 0x20) = 0;
        goto LAB_1417f2210;
      }
    }
    *(longlong *)(param_1 + 0x18) = lVar2;
    *(int *)(param_1 + 0x20) = (int)lVar4;
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  if ((int)param_2[1] != 0) {
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1417f2234;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
LAB_1417f2234:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1417f22b0 FUN_1417f22b0 body=231 status=ok
// SIG undefined FUN_1417f22b0(void)

float FUN_1417f22b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  
  fVar6 = 0.0;
  if ((((*param_1 != 0) && (lVar1 = *(longlong *)(*param_1 + 0xc0), lVar1 != 0)) &&
      ((*(longlong *)(lVar1 + 0x30) == 0 ||
       (((lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar5 == 0 ||
         (*(longlong *)(lVar5 + 0x588) == 0)) ||
        (*(double *)(lVar1 + 0x6d0) < *(double *)(lVar1 + 0x708))))))) &&
     (((*(byte *)(lVar1 + 0x154) & 0x40) == 0 || (iVar4 = FUN_14490d72a(lVar1), iVar4 != 3)))) {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar5);
        if (*(longlong *)(lVar2 + 0x360) == lVar1) {
          if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x278) & 1) != 0)) {
            return 0.0;
          }
          break;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar5);
    }
    cVar3 = FUN_144a80e00(lVar1);
    if ((cVar3 == '\0') || (-1 < *(char *)(lVar1 + 0x155))) {
      fVar6 = (float)*(double *)(lVar1 + 0x6d0);
    }
  }
  return fVar6;
}



// FUNCTION 1417f2398 FUN_1417f2398 body=177 status=ok
// SIG undefined FUN_1417f2398(void)

void FUN_1417f2398(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  if (*(longlong **)(param_1 + 0x650) != (longlong *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x650);
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x650) + 0x20))();
    plVar6 = (longlong *)*plVar2;
    if (iVar4 == 1) {
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))();
      }
      FUN_146888c0a(plVar2);
      plVar6 = (longlong *)*plVar2;
    }
    *plVar2 = 0;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 *)((longlong)puVar5 + 10) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x12) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)((longlong)puVar5 + 0xc) = *(int *)((longlong)puVar5 + 0xc) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)(param_1 + 0x658);
  *(undefined8 **)(param_1 + 0x658) = puVar5;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar3);
      FUN_1400020a8(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1417f244a FUN_1417f244a body=260 status=ok
// SIG undefined FUN_1417f244a(void)

void FUN_1417f244a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  lVar5 = *(longlong *)(param_1 + 0x6d8);
  if (lVar5 != 0) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != *(DWORD *)(lVar5 + 0x20)) {
      FUN_140082318(*(undefined8 *)(param_1 + 0x6d8));
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (0 < iVar3) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      plVar2 = *(longlong **)(lVar1 + lVar5);
      if ((plVar2 != (longlong *)0x0) && (0.0 <= (float)((double)plVar2[8] - DAT_14c866ff8))) {
        (**(code **)(*plVar2 + 0x2a0))(plVar2);
        *(byte *)((longlong)plVar2 + 0xbc) = *(byte *)((longlong)plVar2 + 0xbc) & 0xdf;
        plVar2[8] = (longlong)(DAT_14c866ff8 + -1.0);
        *(undefined8 *)(lVar1 + 0x58 + lVar5) = 0xc7efffffe0000000;
        (**(code **)(**(longlong **)(lVar1 + lVar5) + 0x2d0))();
        iVar3 = *(int *)(param_1 + 0x18);
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xa8;
    } while (lVar6 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x410) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001417f24df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  return;
}



// FUNCTION 1417f254e FUN_1417f254e body=138 status=ok
// SIG undefined FUN_1417f254e(void)

undefined8 * FUN_1417f254e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aac0630;
  if (param_1[0x18] != 0) {
    plVar1 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar1 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *param_1 = &PTR_LAB_14aabfdc0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f25d8 FUN_1417f25d8 body=353 status=ok
// SIG undefined FUN_1417f25d8(void)

void FUN_1417f25d8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417f265d;
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
LAB_1417f265d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417f273a FUN_1417f273a body=1200 status=ok
// SIG undefined FUN_1417f273a(void)

void FUN_1417f273a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  
  plVar10 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar10,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar19 = *(uint *)(param_1 + 9);
  if (uVar19 == 1) {
    if (*plVar10 != 0) {
      FUN_1446efa72(plVar10,0,0,4);
    }
  }
  else {
    if (uVar19 == 0) {
      return;
    }
    FUN_1446efa72(plVar10,0,uVar19,4);
    if ((int)uVar19 < 1) goto LAB_1417f27af;
  }
  uVar4 = 0;
  do {
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = plVar1;
    }
    *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar19 != uVar4);
LAB_1417f27af:
  iVar12 = (int)param_1[5];
  if (iVar12 == 0) {
    uVar22 = 0;
    uVar24 = 1;
    iVar21 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar19 = *puVar8;
    if (uVar19 == 0) {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      uVar22 = 0;
      uVar24 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar24 = uVar22;
      }
      iVar11 = 0;
      do {
        if (uVar24 == uVar22) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar19 = puVar8[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar22 = 0;
      iVar11 = 0;
    }
    uVar24 = (ulonglong)(-uVar19 & uVar19);
    uVar13 = uVar24 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar21 = (iVar11 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar21) {
      iVar21 = iVar12;
    }
  }
  if (iVar21 < iVar12) {
    uVar19 = 0xffffffff;
    do {
      lVar18 = *param_1;
      lVar20 = (longlong)iVar21 * 0x30;
      lVar17 = lVar18 + lVar20;
      iVar12 = *(int *)(lVar18 + 0x18 + lVar20);
      iVar6 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar6 = 0;
      }
      uVar4 = 0;
      if (0 < iVar6) {
        puVar9 = &DAT_149dfb77a;
        if (iVar12 != 0) {
          puVar9 = *(undefined2 **)(lVar17 + 0x10);
        }
        lVar23 = 0;
        uVar4 = 0;
        do {
          uVar14 = ((uint)(ushort)puVar9[lVar23] +
                   (uint)(0x19 < (ushort)puVar9[lVar23] - 0x61) * 0x20) - 0x20;
          uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar4 ^ uVar14) & 0xff) * 4);
          uVar4 = uVar4 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar4 & 0xff ^ uVar14 >> 8 & 0xff) * 4);
          lVar23 = lVar23 + 1;
        } while (iVar6 != (int)lVar23);
      }
      uVar2 = *(undefined8 *)(lVar18 + lVar20);
      uVar3 = *(undefined8 *)(lVar18 + 8 + lVar20);
      uVar14 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar15 = (uint)uVar2 & 0xffff;
      uVar5 = ((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar15 >> 4);
      uVar15 = (uint)uVar3 & 0xffff;
      uVar5 = (uVar5 >> 2) + 0x9e3779b9 +
              ((uint)uVar3 << 0x10 | uVar15) + (int)((ulonglong)uVar3 >> 0x20) +
              (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar15 >> 4) + uVar5 * 0x40 ^ uVar5;
      uVar15 = uVar5 >> 0xd ^ -uVar5;
      uVar14 = uVar15 << 8 ^ (-0x61c88647 - uVar5) - uVar15;
      uVar16 = uVar14 >> 0xd ^ (uVar5 - uVar15) - uVar14;
      uVar15 = uVar16 >> 0xc ^ (uVar15 - uVar14) - uVar16;
      uVar5 = uVar15 << 0x10 ^ (uVar14 - uVar16) - uVar15;
      uVar14 = uVar5 >> 5 ^ (uVar16 - uVar15) - uVar5;
      uVar15 = uVar14 >> 3 ^ (uVar15 - uVar5) - uVar14;
      uVar5 = uVar15 << 10 ^ (uVar5 - uVar14) - uVar15;
      uVar14 = uVar4 >> 0xd ^ (uVar5 >> 0xf ^ uVar14 - (uVar15 + uVar5)) - uVar4;
      uVar5 = uVar14 << 8 ^ (-0x61c88647 - uVar4) - uVar14;
      uVar15 = uVar5 >> 0xd ^ (uVar4 - uVar14) - uVar5;
      uVar16 = uVar15 >> 0xc ^ (uVar14 - uVar5) - uVar15;
      uVar4 = uVar16 << 0x10 ^ (uVar5 - uVar15) - uVar16;
      uVar14 = uVar4 >> 5 ^ (uVar15 - uVar16) - uVar4;
      uVar5 = uVar14 >> 3 ^ (uVar16 - uVar4) - uVar14;
      uVar4 = uVar5 << 10 ^ (uVar4 - uVar14) - uVar5;
      uVar13 = (longlong)(int)(uVar4 >> 0xf ^ uVar14 - (uVar5 + uVar4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar12 = (int)uVar13;
      *(int *)(lVar17 + 0x2c) = iVar12;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar1;
      }
      *(undefined4 *)(lVar17 + 0x28) =
           *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar1;
      }
      *(int *)((longlong)plVar10 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar21
      ;
      uVar19 = uVar19 & ~(uint)uVar24;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar12 = (int)param_1[5];
      iVar21 = (int)uVar22;
      lVar17 = (longlong)iVar21;
      uVar4 = puVar8[lVar17] & uVar19;
      if (uVar4 == 0) {
        iVar6 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar6 = iVar12 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar21) {
          iVar7 = iVar21;
        }
        if (iVar6 <= iVar21) {
          return;
        }
        lVar18 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar8[lVar17 + lVar18 + 1];
          if (uVar4 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar7 - lVar17 == lVar18) {
            return;
          }
        }
        uVar22 = (ulonglong)(iVar21 + (int)lVar18 + 1);
        uVar19 = 0xffffffff;
      }
      uVar24 = (ulonglong)(-uVar4 & uVar4);
      uVar13 = uVar24 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar21 = (iVar11 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar21 < iVar12);
  }
  return;
}



// FUNCTION 1417f2bea FUN_1417f2bea body=478 status=ok
// SIG undefined FUN_1417f2bea(void)

int * FUN_1417f2bea(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
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
      FUN_140044672(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x30);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x30) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1417f2dc8 FUN_1417f2dc8 body=128 status=ok
// SIG undefined FUN_1417f2dc8(void)

undefined8 FUN_1417f2dc8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_1448b08d8(), iVar10 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x30);
    if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar10 * 0x30) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 8);
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_140509bf2(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 1417f2e48 FUN_1417f2e48 body=94 status=ok
// SIG undefined FUN_1417f2e48(void)

undefined8 * FUN_1417f2e48(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aac2170;
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14aac21e0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f2ea6 FUN_1417f2ea6 body=206 status=ok
// SIG undefined FUN_1417f2ea6(void)

void FUN_1417f2ea6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14aac21e0;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar4;
  *(undefined4 *)(puVar2 + 2) = uVar5;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar6;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
  }
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar2 = &PTR_FUN_14aac2170;
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 1417f2f74 FUN_1417f2f74 body=29 status=ok
// SIG undefined FUN_1417f2f74(void)

undefined8 FUN_1417f2f74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f2f92 FUN_1417f2f92 body=304 status=ok
// SIG undefined FUN_1417f2f92(void)

void FUN_1417f2f92(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
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
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417f2ff3;
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
LAB_1417f2ff3:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1417f30c2 FUN_1417f30c2 body=119 status=ok
// SIG undefined FUN_1417f30c2(void)

undefined8 * FUN_1417f30c2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aac25f0;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)puVar2 + 100);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (((*piVar1 == 0) && (*(int *)(puVar2 + 0xc) == 0)) && (*(int *)(puVar2 + 0xb) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f313a FUN_1417f313a body=208 status=ok
// SIG undefined FUN_1417f313a(void)

void FUN_1417f313a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined7 uVar7;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar8;
  int iVar9;
  
  if (*param_1 == 0) {
    return;
  }
  cVar2 = FUN_1402bfec4(*param_1,0);
  if (cVar2 == '\0') {
    plVar1 = (longlong *)*param_1;
    uVar4 = plVar1[0x18];
    uVar7 = (undefined7)((ulonglong)param_3 >> 8);
    cVar2 = (char)(uVar4 >> 0x28);
    *(char *)((longlong)param_1 + 0x7a) = cVar2;
    uVar8 = (uint)*(char *)((longlong)param_1 + 0x82);
    iVar9 = (int)cVar2;
    uVar5 = uVar4 >> 0x10 & 0xff;
    iVar3 = (int)uVar5;
    uVar4 = (ulonglong)uVar8;
    if (iVar3 < (int)uVar8) {
      uVar4 = uVar5;
    }
    if (iVar3 <= iVar9) {
      uVar4 = (ulonglong)uVar8;
    }
    iVar3 = (int)uVar4;
    if (iVar3 != iVar9) {
      if (iVar3 < iVar9) {
        (**(code **)(*plVar1 + 0x2c0))();
      }
      else {
        if (((*(byte *)((longlong)param_1 + 0x87) & 2) == 0) &&
           (uVar5 = CONCAT71(uVar7,*(byte *)((longlong)param_1 + 0x87)) & 0xffffffffffffff01,
           uVar7 = (undefined7)(uVar5 >> 8),
           (char)uVar5 == '\0' && (*(byte *)((longlong)param_1 + 0x86) & 3) == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = CONCAT71(uVar7,iVar3 <= *(char *)((longlong)param_1 + 0x83));
        }
        (**(code **)(*plVar1 + 0x2c8))(plVar1,uVar4,uVar6);
      }
      if (*param_1 != 0) {
        FUN_1400980f0(*param_1,1,0);
        *(undefined2 *)((longlong)param_1 + 0x7a) = *(undefined2 *)(*param_1 + 0xc5);
      }
      return;
    }
    return;
  }
  return;
}



// FUNCTION 1417f320a FUN_1417f320a body=1443 status=ok
// SIG undefined FUN_1417f320a(void)

uint FUN_1417f320a(undefined8 *param_1,longlong param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  uint local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  uint local_17c;
  undefined8 *local_178;
  longlong local_170;
  undefined8 *local_168;
  longlong local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  longlong local_148;
  longlong *local_138 [2];
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  code *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong *local_b8 [2];
  longlong local_a8 [4];
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uStack_150 = *(undefined8 *)(param_5 + 8);
  local_c8 = *(longlong *)(param_5 + 0x10);
  local_b8[0] = (longlong *)0x0;
  local_160 = param_2;
  local_158 = param_1;
  if (local_c8 == 0) {
    local_148 = 0;
    local_138[0] = (longlong *)0x0;
  }
  else {
    puVar13 = (undefined8 *)(param_5 + 0x30);
    if (*(undefined8 **)(param_5 + 0x20) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_5 + 0x20);
    }
    (**(code **)*puVar13)(puVar13,local_b8);
    local_148 = local_c8;
    local_138[0] = (longlong *)0x0;
    if (local_c8 != 0) {
      plVar16 = local_b8[0];
      if (local_b8[0] == (longlong *)0x0) {
        plVar16 = local_a8;
      }
      (**(code **)*plVar16)(plVar16,local_138);
    }
  }
  local_108 = (code *)0x0;
  puVar13 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar13 = &PTR_FUN_14aace5c0;
  puVar13[2] = local_158;
  puVar13[3] = uStack_150;
  puVar13[4] = local_148;
  puVar13[6] = local_138[0];
  local_138[0] = (longlong *)0x0;
  puVar13[10] = local_118;
  puVar13[0xb] = uStack_110;
  puVar13[8] = local_128;
  puVar13[9] = uStack_120;
  if (local_148 != 0) {
    local_148 = 0;
  }
  if (puVar13 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_108 = FUN_14372ca60;
  }
  local_88 = param_1[0x26];
  uStack_80 = param_1[0x27];
  local_78 = (longlong *)param_1[0x28];
  uStack_70 = param_1[0x29];
  local_68 = param_1[0x2a];
  uStack_60 = param_1[0x2b];
  local_58 = param_1[0x2c];
  uStack_50 = param_1[0x2d];
  uVar8 = local_58;
  uVar9 = uStack_50;
  uVar6 = local_68;
  uVar7 = uStack_60;
  uVar5 = uStack_70;
  uVar4 = uStack_80;
  param_1[0x2c] = CONCAT44(uStack_d4,local_d8);
  param_1[0x2d] = CONCAT44(uStack_cc,uStack_d0);
  param_1[0x2a] = CONCAT44(uStack_e4,local_e8);
  param_1[0x2b] = CONCAT44(uStack_dc,uStack_e0);
  param_1[0x28] = puVar13;
  param_1[0x29] = CONCAT44(uStack_ec,uStack_f0);
  param_1[0x26] = local_108;
  param_1[0x27] = CONCAT44(uStack_fc,uStack_100);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_d8 = (undefined4)local_58;
  uStack_d4 = local_58._4_4_;
  uStack_d0 = (undefined4)uStack_50;
  uStack_cc = uStack_50._4_4_;
  local_e8 = (undefined4)local_68;
  uStack_e4 = local_68._4_4_;
  uStack_e0 = (undefined4)uStack_60;
  uStack_dc = uStack_60._4_4_;
  local_f8 = local_78;
  uStack_f0 = (undefined4)uStack_70;
  uStack_ec = uStack_70._4_4_;
  local_108 = (code *)local_88;
  uStack_100 = (undefined4)uStack_80;
  uStack_fc = uStack_80._4_4_;
  uStack_80 = uVar4;
  uStack_70 = uVar5;
  local_68 = uVar6;
  uStack_60 = uVar7;
  local_58 = uVar8;
  uStack_50 = uVar9;
  if (local_88 != 0) {
    plVar16 = local_f8;
    if (local_78 == (longlong *)0x0) {
      plVar16 = (longlong *)&local_e8;
    }
    (**(code **)(*plVar16 + 0x10))();
    if (local_148 != 0) {
      plVar16 = local_138[0];
      if (local_138[0] == (longlong *)0x0) {
        plVar16 = &local_128;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  if (local_c8 != 0) {
    plVar16 = local_b8[0];
    if (local_b8[0] == (longlong *)0x0) {
      plVar16 = local_a8;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if ((int)param_3 < *(int *)(param_1 + 2)) {
    local_168 = param_1 + 0x26;
    puVar13 = param_1 + 4;
    lVar19 = (ulonglong)param_3 * 8;
    lVar20 = (ulonglong)param_3 * 0x30;
    local_17c = param_3;
    local_170 = param_4;
    while ((-1 < (int)local_17c && ((int)param_3 < *(int *)(local_170 + 0x2d8)))) {
      lVar17 = *(longlong *)(local_170 + 0x2d0);
      if (*(longlong *)(local_170 + 0x2d0) == 0) {
        lVar17 = local_170;
      }
      puVar14 = (undefined8 *)param_1[0x22];
      if ((undefined8 *)param_1[0x22] == (undefined8 *)0x0) {
        puVar14 = puVar13;
      }
      if (*(int *)((longlong)puVar14 + lVar19 * 2) == 0) break;
      lVar1 = *(longlong *)(*(longlong *)(local_160 + 0x10) + lVar19);
      uVar18 = *(ulonglong *)(lVar17 + 8 + lVar20);
      if (((uVar18 != 0) && (uVar18 < *(uint5 *)(lVar1 + 0x28))) ||
         (*(longlong *)(lVar17 + lVar20) == 0)) break;
      LOCK();
      **(int **)(param_5 + 8) = **(int **)(param_5 + 8) + 1;
      UNLOCK();
      uVar12 = 1;
      if (*(char *)(param_1 + 0x25) == '\x01') {
        local_178 = puVar13;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb0a988) &&
           (FUN_144b3d300(&DAT_14cb0a988), DAT_14cb0a988 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          DAT_14cb0a980 =
               (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"s.AsyncLoadingPrecachePriority",1);
          _Init_thread_footer(&DAT_14cb0a988);
        }
        lVar3 = DAT_14cb0b180;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar18 = 0;
        }
        else {
          bVar10 = FUN_144a61b4f();
          uVar18 = (ulonglong)(bVar10 ^ 1);
        }
        uVar12 = 2;
        puVar13 = local_178;
        if (*(int *)(lVar3 + uVar18 * 4) == 2 && DAT_14cb0a980 != (longlong *)0x0) {
          iVar11 = (**(code **)(*DAT_14cb0a980 + 0xb0))();
          iVar15 = 4;
          if (iVar11 < 4) {
            iVar15 = iVar11;
          }
          iVar11 = 1;
          if (1 < iVar15) {
            iVar11 = iVar15;
          }
          uVar12 = iVar11 + 1;
          puVar13 = local_178;
        }
      }
      puVar14 = (undefined8 *)param_1[0x22];
      if ((undefined8 *)param_1[0x22] == (undefined8 *)0x0) {
        puVar14 = puVar13;
      }
      local_190 = *(undefined8 *)(lVar17 + lVar20);
      local_1a0 = uVar12 | 0x200;
      local_1a8 = (ulonglong)*(uint5 *)(lVar1 + 0x28);
      uVar18 = (ulonglong)*(uint5 *)(lVar1 + 0x2d);
      if (uVar18 == 0xffffffffff) {
        uVar18 = 0xffffffffffffffff;
      }
      local_198 = local_168;
      FUN_1411dbd50(&local_158,0xffffffffffffffff,lVar1 + 0x38,uVar18);
      puVar2 = *(undefined8 **)((longlong)puVar14 + lVar19 * 2 + 8);
      if ((puVar2 != local_158) &&
         (*(undefined8 **)((longlong)puVar14 + lVar19 * 2 + 8) = local_158,
         puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)(puVar2,1);
      }
      param_3 = param_3 + 1;
      lVar19 = lVar19 + 8;
      lVar20 = lVar20 + 0x30;
      if (*(int *)(param_1 + 2) <= (int)param_3) break;
    }
  }
  param_1[3] = 2;
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1417f37ae FUN_1417f37ae body=279 status=ok
// SIG undefined FUN_1417f37ae(void)

void FUN_1417f37ae(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if (((*(char *)(param_1 + 0x5c) == '\0') && (*(longlong *)(param_2 + 8) != 0)) &&
     (lVar8 = (longlong)*(int *)(param_1 + 0x14),
     *(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10))) {
    lVar10 = lVar8 << 4;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar8 * 8);
      uVar1 = *(ushort *)(lVar5 + 0x4a);
      uVar9 = (ulonglong)((uint)*(byte *)(*(longlong *)(param_2 + 8) + 0x84) * 0x30);
      uVar2 = *(uint *)((longlong)&DAT_14c87341c + uVar9);
      if ((int)uVar2 < 1) {
        uVar7 = 0;
      }
      else {
        iVar3 = *(int *)(lVar5 + 0x48);
        uVar7 = (ulonglong)(((iVar3 + (uint)((short)iVar3 == 0) & 0xffff) + uVar2) - 1) /
                (ulonglong)uVar2;
      }
      uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar9);
      if ((int)uVar2 < 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulonglong)((((uint)uVar1 + (uint)(uVar1 == 0) & 0xffff) + uVar2) - 1) /
                (ulonglong)uVar2;
      }
      uVar4 = FUN_14001cc68((longlong)*(int *)((longlong)&DAT_14c873428 + uVar9) * uVar6 * uVar7);
      lVar5 = *(longlong *)(param_1 + 0x1f8);
      if (*(longlong *)(param_1 + 0x1f8) == 0) {
        lVar5 = param_1 + 0x108;
      }
      *(undefined8 *)(lVar5 + lVar10) = uVar4;
      lVar5 = *(longlong *)(param_1 + 0x1f8);
      if (*(longlong *)(param_1 + 0x1f8) == 0) {
        lVar5 = param_1 + 0x108;
      }
      *(undefined4 *)(lVar5 + 8 + lVar10) = 0;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar8 < *(int *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1417f38c6 FUN_1417f38c6 body=138 status=ok
// SIG undefined FUN_1417f38c6(void)

void FUN_1417f38c6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) < iVar2) {
    lVar1 = param_1 + 0x108;
    lVar5 = lVar4 << 4;
    do {
      lVar3 = *(longlong *)(param_1 + 0x1f8);
      if (*(longlong *)(param_1 + 0x1f8) == 0) {
        lVar3 = lVar1;
      }
      if (*(longlong *)(lVar3 + lVar5) != 0) {
        FUN_1400020a8();
        lVar3 = *(longlong *)(param_1 + 0x1f8);
        if (*(longlong *)(param_1 + 0x1f8) == 0) {
          lVar3 = lVar1;
        }
        *(undefined8 *)(lVar3 + lVar5) = 0;
        lVar3 = *(longlong *)(param_1 + 0x1f8);
        if (*(longlong *)(param_1 + 0x1f8) == 0) {
          lVar3 = lVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar5) = 0xffffffff;
        iVar2 = *(int *)(param_1 + 0x10);
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 < iVar2);
  }
  return;
}



// FUNCTION 1417f3950 FUN_1417f3950 body=49 status=ok
// SIG undefined FUN_1417f3950(void)

longlong FUN_1417f3950(void)

{
  if (DAT_14cb0acd8 == 0) {
    FUN_14073dd9a(&DAT_14cb0acd8,&PTR_LAB_14aac72c8);
  }
  return DAT_14cb0acd8;
}



// FUNCTION 1417f3981 FUN_1417f3981 body=49 status=ok
// SIG undefined FUN_1417f3981(void)

longlong FUN_1417f3981(void)

{
  if (DAT_14cb0acf0 == 0) {
    FUN_14073dd9a(&DAT_14cb0acf0,&PTR_LAB_14aac7648);
  }
  return DAT_14cb0acf0;
}



// FUNCTION 1417f39c4 FUN_1417f39c4 body=49 status=ok
// SIG undefined FUN_1417f39c4(void)

longlong FUN_1417f39c4(void)

{
  if (DAT_14cb0ae00 == 0) {
    FUN_14073dd9a(&DAT_14cb0ae00,&PTR_LAB_14aac9128);
  }
  return DAT_14cb0ae00;
}



// FUNCTION 1417f39f5 FUN_1417f39f5 body=49 status=ok
// SIG undefined FUN_1417f39f5(void)

longlong FUN_1417f39f5(void)

{
  if (DAT_14cb0af78 == 0) {
    FUN_14086a14e(&DAT_14cb0af78,&PTR_FUN_14aaca7f8);
  }
  return DAT_14cb0af78;
}



// FUNCTION 1417f3a26 FUN_1417f3a26 body=146 status=ok
// SIG undefined FUN_1417f3a26(void)

undefined8 * FUN_1417f3a26(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14aac2d40;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  puVar3 = param_1 + 5;
  if ((undefined8 *)param_1[0x14] != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[0x14];
  }
  FUN_140eeefa1(puVar3,*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
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



// FUNCTION 1417f3ab8 FUN_1417f3ab8 body=38 status=ok
// SIG undefined FUN_1417f3ab8(void)

undefined8 FUN_1417f3ab8(undefined8 param_1,int param_2)

{
  FUN_1402594a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f3ade FUN_1417f3ade body=289 status=ok
// SIG undefined FUN_1417f3ade(void)

undefined8 * FUN_1417f3ade(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aac39d0;
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    plVar2 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  puVar1 = param_1 + 0x22;
  if ((undefined8 *)param_1[0x24] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0x24];
  }
  FUN_14105bde2(puVar1,*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x21];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = &PTR_FUN_14aac3990;
  if (param_1[0x18] != 0) {
    plVar2 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar2 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  *param_1 = &PTR_LAB_14aabfdc0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f3c00 FUN_1417f3c00 body=40 status=ok
// SIG undefined FUN_1417f3c00(void)

undefined8 FUN_1417f3c00(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f3c28 FUN_1417f3c28 body=121 status=ok
// SIG undefined FUN_1417f3c28(void)

undefined8 * FUN_1417f3c28(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aace960;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)puVar2 + 100);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (((*piVar1 == 0) && (*(int *)(puVar2 + 0xc) == 0)) && (*(int *)(puVar2 + 0xb) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f3ca2 FUN_1417f3ca2 body=441 status=ok
// SIG undefined FUN_1417f3ca2(void)

undefined8 FUN_1417f3ca2(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  
  puVar1 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar3 = *puVar1;
  lVar6 = 0x118;
  if (((uVar3 != 0x40000002) && (DAT_14c86a9f8 == '\x01')) && (uVar3 != 2)) {
    if (uVar3 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1417f3cd7;
      uVar3 = *puVar1;
    }
    if ((uVar3 != 4) && (cVar2 = (*(code *)PTR_FUN_14c758760)(), cVar2 == '\0')) {
      uVar3 = *puVar1;
      if (uVar3 != 8) {
        if (DAT_14c86a9fc == 0) {
          lVar6 = 0x120;
          if (((0x20 < uVar3) || ((0x100010004U >> ((ulonglong)uVar3 & 0x3f) & 1) == 0)) &&
             (uVar3 != 0x40000010)) {
            return 0;
          }
        }
        else {
          lVar6 = 0x120;
          if (((uVar3 - 0x10 & 0xbfffffef) != 0) && (uVar3 != 0x20)) {
            return 0;
          }
        }
      }
    }
  }
LAB_1417f3cd7:
  if (*(longlong *)(param_1 + lVar6) == 0) {
    return 0;
  }
  uVar3 = *puVar1;
  lVar6 = 0x118;
  if (((uVar3 != 0x40000002) && (DAT_14c86a9f8 == '\x01')) && (uVar3 != 2)) {
    if (uVar3 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1417f3ced;
      uVar3 = *puVar1;
    }
    if (((uVar3 != 4) && (cVar2 = (*(code *)PTR_FUN_14c758760)(), cVar2 == '\0')) &&
       (uVar3 = *puVar1, uVar3 != 8)) {
      if (DAT_14c86a9fc == 0) {
        lVar6 = 0x120;
        if (((0x20 < uVar3) || ((0x100010004U >> ((ulonglong)uVar3 & 0x3f) & 1) == 0)) &&
           (uVar3 != 0x40000010)) goto LAB_1417f3dba;
      }
      else {
        lVar6 = 0x120;
        if (((uVar3 - 0x10 & 0xbfffffef) != 0) && (uVar3 != 0x20)) {
LAB_1417f3dba:
          lVar6 = 0;
          goto LAB_1417f3cf1;
        }
      }
    }
  }
LAB_1417f3ced:
  lVar6 = *(longlong *)(param_1 + lVar6);
LAB_1417f3cf1:
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),*(int *)(lVar6 + 8) == -1);
}



// FUNCTION 1417f3e5c FUN_1417f3e5c body=355 status=ok
// SIG undefined FUN_1417f3e5c(void)

ulonglong FUN_1417f3e5c(longlong *param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar3 = *(uint *)(lVar8 + 0xc60);
  lVar9 = 0x118;
  if (((uVar3 != 0x40000002) && (DAT_14c86a9f8 == '\x01')) && (uVar3 != 2)) {
    puVar1 = (uint *)(lVar8 + 0xc60);
    if (uVar3 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1417f3e8d;
      uVar3 = *puVar1;
    }
    if (((uVar3 != 4) && (cVar2 = (*(code *)PTR_FUN_14c758760)(), cVar2 == '\0')) &&
       (uVar3 = *puVar1, uVar3 != 8)) {
      if (DAT_14c86a9fc == 0) {
        lVar9 = 0x120;
        if (((0x20 < uVar3) || ((0x100010004U >> ((ulonglong)uVar3 & 0x3f) & 1) == 0)) &&
           (uVar3 != 0x40000010)) {
          return 0;
        }
      }
      else {
        lVar9 = 0x120;
        if (((uVar3 - 0x10 & 0xbfffffef) != 0) && (uVar3 != 0x20)) {
          return 0;
        }
      }
    }
  }
LAB_1417f3e8d:
  uVar7 = 0;
  if (*(longlong *)((longlong)param_1 + lVar9) != 0) {
    cVar2 = (**(code **)(*param_1 + 0x330))(param_1);
    if (cVar2 != '\0') {
      plVar6 = (longlong *)FUN_1448463c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001417f3f47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      return uVar7;
    }
    if (param_1[0x18] == 0) {
      lVar8 = FUN_1448463c0(param_1);
      if (*(longlong **)(lVar8 + 0x10) != (longlong *)0x0) {
        lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 8))();
        uVar7 = (ulonglong)*(byte *)(lVar8 + 0x30);
      }
    }
    else {
      uVar7 = (ulonglong)param_1[0x18] >> 0x28 & 0xff;
    }
  }
  return uVar7;
}



// FUNCTION 1417f3fbf FUN_1417f3fbf body=81 status=ok
// SIG undefined FUN_1417f3fbf(void)

void FUN_1417f3fbf(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140307c5a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aad3280;
  puVar1[0x19] = &PTR_FUN_14aad3620;
  puVar1[0x1a] = &PTR_FUN_14aad3660;
  puVar1[0x27] = 0;
  *(byte *)((longlong)puVar1 + 0xfe) = *(byte *)((longlong)puVar1 + 0xfe) | 1;
  return;
}



// FUNCTION 1417f401c FUN_1417f401c body=40 status=ok
// SIG undefined FUN_1417f401c(void)

undefined8 FUN_1417f401c(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f4044 FUN_1417f4044 body=62 status=ok
// SIG undefined FUN_1417f4044(void)

void FUN_1417f4044(longlong param_1,int param_2)

{
  FUN_1400ea328();
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1447ab16c(param_1,param_2);
  return;
}



// FUNCTION 1417f4084 FUN_1417f4084 body=153 status=ok
// SIG undefined FUN_1417f4084(void)

undefined8 * FUN_1417f4084(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14aad43f0;
  puVar3 = param_1 + 0xc;
  lVar4 = 0;
  do {
    lVar5 = 0;
    do {
      if (puVar3[lVar5] != 0) {
        FUN_1400020a8();
      }
      puVar3[lVar5] = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0xf);
    lVar4 = lVar4 + 1;
    puVar3 = puVar3 + 0xf;
  } while (lVar4 != 6);
  if (param_1[0xb] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xb] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1401c04d8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f411e FUN_1417f411e body=1204 status=ok
// SIG undefined FUN_1417f411e(void)

int FUN_1417f411e(longlong param_1,longlong *param_2,char param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = *param_2;
  if (*(code **)(lVar10 + 0x350) == (code *)&LAB_144b1f41c) {
    if ((int *)param_2[0x29] == (int *)0x0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = (float)*(int *)param_2[0x29];
    }
  }
  else {
    fVar17 = (float)(**(code **)(lVar10 + 0x350))(param_2);
    lVar10 = *param_2;
  }
  if (*(code **)(lVar10 + 0x358) == (code *)&LAB_144b1f432) {
    if (param_2[0x29] == 0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = (float)*(int *)(param_2[0x29] + 4);
    }
  }
  else {
    fVar18 = (float)(**(code **)(lVar10 + 0x358))(param_2);
    lVar10 = *param_2;
  }
  if (*(code **)(lVar10 + 0x330) == (code *)&LAB_14014d366) {
    if ((((*(byte *)((longlong)param_2 + 0xfe) & 4) == 0) || (param_2[0x29] == 0)) ||
       (cVar6 = '\x01', *(longlong *)(param_2[0x29] + 0x28) == 0)) {
      cVar6 = '\0';
    }
  }
  else {
    cVar6 = (**(code **)(lVar10 + 0x330))(param_2);
  }
  iVar7 = 0;
  if (param_3 != '\0') {
    iVar7 = (int)param_2[9];
  }
  uVar12 = (int)ROUND(fVar18 + fVar18 + 0.5) >> 1;
  uVar13 = (int)ROUND(fVar17 + fVar17 + 0.5) >> 1;
  lVar10 = *(longlong *)(param_1 + 0x28);
  lVar11 = (ulonglong)*(byte *)((longlong)param_2 + 0xf6) * 0x5c;
  if ((int)uVar13 < (int)uVar12) {
    uVar13 = uVar12;
  }
  uVar12 = 1;
  if (1 < (int)uVar13) {
    uVar12 = uVar13;
  }
  if (cVar6 != '\0') {
    iVar7 = 0;
  }
  iVar16 = 0;
  if ((ulonglong)*(byte *)((longlong)param_2 + 0xf6) == 0x10) {
    iVar16 = DAT_14cb0b6c0;
  }
  iVar16 = iVar16 + iVar7;
  pbVar1 = (byte *)(lVar10 + lVar11);
  uVar13 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> uVar13 == 0; uVar13 = uVar13 - 1) {
    }
  }
  iVar7 = *(int *)(lVar10 + 0x18 + lVar11);
  iVar3 = *(int *)(lVar10 + 0x1c + lVar11);
  if (cVar6 == '\0') {
    uVar2 = (ulonglong)(iVar7 + -1 + (uint)(iVar7 == 0)) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (uint)lVar10;
    uVar2 = (ulonglong)(iVar3 + -1 + (uint)(iVar3 == 0)) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (uint)lVar10;
    uVar14 = uVar15 ^ 0x3f;
    if ((DAT_14cb0b6d8 == '\x01') && (bVar5 = *pbVar1, bVar5 < 0x49)) {
      if (DAT_14cb0b6d9 == '\0') {
        DAT_14cb0b6d9 = '\x01';
        lVar10 = 0;
        do {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar4 = DAT_14c8407a8;
          lVar11 = FUN_140032fdb();
          if ((longlong)*(int *)(lVar11 + 0x48) != 0) {
            lVar9 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar11 + 0x40) + 8 + lVar9) == lVar10) {
                local_80 = *(undefined2 **)(*(longlong *)(lVar11 + 0x40) + lVar9);
                goto LAB_1417f4404;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)*(int *)(lVar11 + 0x48) * 0x10 != lVar9);
          }
          local_80 = (undefined2 *)0x0;
LAB_1417f4404:
          FUN_1400021e4(&local_80,&local_90);
          puVar8 = &DAT_149dfb77a;
          if (local_88 != 0) {
            puVar8 = local_90;
          }
          FUN_140002266(&local_80,L"r.gbx.lodgroup.%s.LODBias",puVar8);
          puVar8 = &DAT_149dfb77a;
          if (local_78 != 0) {
            puVar8 = local_80;
          }
          local_98 = 0;
          (**(code **)(*plVar4 + 0x38))
                    (plVar4,puVar8,&DAT_14cb0b6f0 + lVar10 * 8,L"Adjust runtime LODBias");
          if (local_80 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_90 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar4 = DAT_14c8407a8;
          lVar11 = FUN_140032fdb();
          if ((longlong)*(int *)(lVar11 + 0x48) != 0) {
            lVar9 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar11 + 0x40) + 8 + lVar9) == lVar10) {
                local_80 = *(undefined2 **)(*(longlong *)(lVar11 + 0x40) + lVar9);
                goto LAB_1417f44ce;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)*(int *)(lVar11 + 0x48) * 0x10 != lVar9);
          }
          local_80 = (undefined2 *)0x0;
LAB_1417f44ce:
          FUN_1400021e4(&local_80,&local_90);
          puVar8 = &DAT_149dfb77a;
          if (local_88 != 0) {
            puVar8 = local_90;
          }
          FUN_140002266(&local_80,L"r.gbx.lodgroup.%s.MaxLODSize",puVar8);
          puVar8 = &DAT_149dfb77a;
          if (local_78 != 0) {
            puVar8 = local_80;
          }
          local_98 = 0;
          (**(code **)(*plVar4 + 0x38))
                    (plVar4,puVar8,&DAT_14cb0b6f4 + lVar10 * 8,L"Adjust runtime MaxLODSize");
          if (local_80 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_90 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x49);
        bVar5 = *pbVar1;
      }
      if ((int *)(&DAT_14cb0b6f0 + (ulonglong)bVar5 * 8) != (int *)0x0) {
        iVar7 = *(int *)(&DAT_14cb0b6f4 + (ulonglong)bVar5 * 8);
        iVar16 = (*(int *)(&DAT_14cb0b6f0 + (ulonglong)bVar5 * 8) - *(int *)(pbVar1 + 8)) + iVar16;
        if ((0 < iVar7) && (iVar7 < *(int *)(pbVar1 + 0x1c))) {
          uVar2 = (ulonglong)(iVar7 - 1) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar14 = (uint)lVar10 ^ 0x3f;
        }
      }
      uVar15 = uVar14 ^ 0x3f;
    }
  }
  else {
    uVar12 = 0;
    uVar15 = uVar13;
    if (0 < *(int *)(pbVar1 + 0x28)) {
      uVar2 = (ulonglong)(*(int *)(pbVar1 + 0x28) - 1) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar15 = (uint)lVar10;
    }
  }
  uVar14 = uVar13 - iVar16;
  if ((int)uVar15 <= (int)(uVar13 - iVar16)) {
    uVar14 = uVar15;
  }
  if ((int)uVar14 < (int)uVar12) {
    uVar14 = uVar12;
  }
  if ((int)uVar13 <= (int)uVar14) {
    uVar14 = uVar13;
  }
  uVar12 = 0;
  if (0 < (int)uVar14) {
    uVar12 = uVar14;
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 - uVar12;
}



// FUNCTION 1417f45d4 FUN_1417f45d4 body=333 status=ok
// SIG undefined FUN_1417f45d4(void)

undefined8 * FUN_1417f45d4(longlong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  
  if ((*(byte *)((longlong)param_1 + 0x15c) & 1) != 0) {
    *(byte *)((longlong)param_1 + 0x13c) = *(byte *)((longlong)param_1 + 0x13c) | 2;
  }
  iVar6 = 1;
  if ((*(byte *)((longlong)param_1 + 0x15c) & 2) != 0) {
    uVar7 = *(uint *)(param_1 + 0x28);
    if ((int)*(uint *)(param_1 + 0x28) < (int)*(uint *)((longlong)param_1 + 0x144)) {
      uVar7 = *(uint *)((longlong)param_1 + 0x144);
    }
    uVar1 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    iVar6 = 1;
    if (uVar7 != 0) {
      iVar6 = (uVar1 ^ 0xffffffe0) + 0x21;
    }
  }
  *(int *)((longlong)param_1 + 0x164) = iVar6;
  puVar8 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  *(undefined4 *)(puVar8 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar8 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar8 + 0xe) = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0xc7efffffe0000000;
  puVar8[6] = 0;
  puVar8[7] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x3f) = 0;
  puVar8[9] = 0;
  puVar8[0xb] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x71) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x79) = 0;
  puVar8[0x11] = &DAT_100000001;
  *puVar8 = &PTR_FUN_14aad7d00;
  puVar8[10] = &PTR_FUN_14aad7dd0;
  puVar8[0xc] = &PTR_FUN_14aad7e50;
  puVar8[0x12] = param_1;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x14c);
  lVar4 = param_1[0x2a];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x154);
  *(int *)(puVar8 + 0x15) = (int)param_1[0x29];
  *(undefined4 *)((longlong)puVar8 + 0xac) = uVar2;
  *(int *)(puVar8 + 0x16) = (int)lVar4;
  *(undefined4 *)((longlong)puVar8 + 0xb4) = uVar3;
  uVar5 = (**(code **)(*param_1 + 0x3b8))(param_1);
  *(undefined1 *)(puVar8 + 0x17) = uVar5;
  *(int *)((longlong)puVar8 + 0xbc) = (int)param_1[0x28];
  *(undefined4 *)(puVar8 + 0x18) = *(undefined4 *)((longlong)param_1 + 0x144);
  *(undefined4 *)((longlong)puVar8 + 0xc4) = *(undefined4 *)((longlong)param_1 + 0x164);
  puVar8[0x19] = 0;
  return puVar8;
}



// FUNCTION 1417f47a4 FUN_1417f47a4 body=183 status=ok
// SIG undefined FUN_1417f47a4(void)

void FUN_1417f47a4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  FUN_14047a8f2();
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x128) + 0x10);
  if (lVar3 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar3,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  plVar4 = *(longlong **)(param_1 + 200);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 200) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  puVar5 = *(undefined8 **)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 0x68) + 8) = puVar5;
  }
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = *(undefined8 *)(param_1 + 0x68);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 1417f485c FUN_1417f485c body=630 status=ok
// SIG undefined FUN_1417f485c(void)

void FUN_1417f485c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined2 local_f2;
  longlong local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  char local_e3;
  char local_e2;
  undefined1 local_e1;
  longlong local_e0;
  undefined4 local_d8;
  char local_d4;
  char local_d3;
  char local_d2;
  undefined1 local_d1;
  undefined8 local_90;
  longlong local_88;
  int7 iStack_80;
  undefined1 uStack_79;
  undefined8 *local_78;
  int6 iStack_70;
  undefined2 uStack_6a;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_90 = 0x400000000;
  local_88 = 0;
  _iStack_80 = 0;
  local_78 = (undefined8 *)0x0;
  _iStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0xff;
  uVar6 = 0;
  local_42 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  lVar2 = *(longlong *)(param_1 + 0x220);
  local_100 = lVar2 + 0x88;
  local_f3 = *(undefined1 *)(lVar2 + 0xb8);
  local_f8 = 0;
  local_f4 = 0;
  local_f2 = 3;
  local_68 = *(undefined8 *)(lVar2 + 0xa0);
  uStack_60 = *(undefined8 *)(lVar2 + 0x48);
  cVar1 = *(char *)(lVar2 + 0x81);
  local_f0 = lVar2 + 0x10;
  local_e3 = cVar1 * '\b' + '\b';
  local_e2 = (cVar1 != '\0') * '\t' + '\x05';
  local_e8 = 0;
  local_e4 = 0;
  local_e1 = 4;
  local_d4 = cVar1 * '\x04' + '\x04';
  local_d8 = 0;
  local_d1 = 4;
  local_e0 = local_f0;
  local_d3 = local_e3;
  local_d2 = local_e2;
  FUN_14472d638(lVar2,param_1,&local_100,0xffffffff);
  lVar2 = *(longlong *)(param_1 + 0x220);
  uVar5 = *(int *)(lVar2 + 0x78) - 1;
  if (0 < *(int *)(lVar2 + 0x78)) {
    uVar5 = 0;
  }
  local_44 = CONCAT11(*(undefined1 *)(lVar2 + 0x78),(char)uVar5);
  local_58 = *(undefined8 *)(lVar2 + 0x58);
  if ((-1 < (int)uVar5) && (uVar5 < *(uint *)(lVar2 + 0x78))) {
    bVar4 = *(char *)(lVar2 + 0x80) + 2;
    local_88 = lVar2 + 0x28;
    uVar7 = 0xc;
    if (*(char *)(lVar2 + 0x80) != '\0') {
      uVar7 = 2;
    }
    _iStack_80 = CONCAT17(4,(uint7)CONCAT12(uVar7,CONCAT11((char)(*(uint *)(lVar2 + 0x78) <<
                                                                 (bVar4 & 0x1f)),
                                                           (char)(uVar5 << (bVar4 & 0x1f)))) << 0x20
                         );
  }
  if (*(int *)(lVar2 + 0xfc) == 0) {
    local_78 = &DAT_14ca94d98;
    puVar3 = &DAT_14ca94db0;
    bVar4 = 0;
  }
  else {
    local_78 = (undefined8 *)(lVar2 + 200);
    bVar4 = *(byte *)(lVar2 + 0xf8);
    puVar3 = (undefined8 *)(lVar2 + 0xe8);
    uVar6 = 0xffffffff;
  }
  uStack_50 = *puVar3;
  _iStack_70 = CONCAT26(0x408,(uint6)bVar4 << 0x28);
  local_48 = uVar6;
  FUN_140ba0b60(param_1,param_2);
  FUN_14006bf18(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f4ad4 FUN_1417f4ad4 body=281 status=ok
// SIG undefined FUN_1417f4ad4(void)

undefined8 * FUN_1417f4ad4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *param_1;
  puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4 + 0x1f;
  if (*(undefined8 **)(lVar2 + 0x78) < puVar3) {
    FUN_140023dd8((longlong *)(lVar2 + 0x70),0x108);
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar4 + 0x1f;
  }
  *(undefined8 **)(lVar2 + 0x70) = puVar3;
  *puVar4 = &PTR_FUN_14aae00e8;
  puVar4[0x16] = 0;
  puVar4[0x18] = 0;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = 0xffffffff;
  puVar4[0x1c] = 0xff0000ffffffff;
  *(undefined1 *)(puVar4 + 0x1d) = 0;
  *(undefined4 *)((longlong)puVar4 + 0xec) = 0x40c00f07;
  *(byte *)(puVar4 + 0x1e) = *(byte *)(puVar4 + 0x1e) & 0xfc;
  puVar4[0x17] = &DAT_100000001;
  FUN_14470b9e0(puVar4 + 1,1);
  iVar1 = *(int *)(lVar2 + 0xa0);
  *(uint *)(lVar2 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(lVar2 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 8) = puVar4;
  return puVar4 + 1;
}



// FUNCTION 1417f4bee FUN_1417f4bee body=177 status=ok
// SIG undefined FUN_1417f4bee(void)

bool FUN_1417f4bee(uint *param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  cVar1 = (char)param_1[0x10];
  if (cVar1 == '\x01') {
    if ((param_1[2] != 0) && (*(longlong **)param_1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001417f4c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)param_1 + 0x30))();
      return (bool)uVar3;
    }
  }
  else if (cVar1 == '\x02') {
    if ((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) {
      uVar2 = *param_1;
      if ((int)uVar2 < 0) {
        return false;
      }
      if (DAT_14c9647dc <= (int)uVar2) {
        return false;
      }
      plVar4 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
          ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (*plVar4 != 0)) {
        lVar5 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_1 + 2),1);
        goto LAB_1417f4c88;
      }
    }
  }
  else if (cVar1 == '\x03') {
    lVar5 = *(longlong *)param_1;
LAB_1417f4c88:
    return lVar5 != 0;
  }
  return false;
}



// FUNCTION 1417f4ca0 FUN_1417f4ca0 body=307 status=ok
// SIG undefined FUN_1417f4ca0(void)

longlong FUN_1417f4ca0(longlong *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar5 = (ulonglong *)(**(code **)(*param_1 + 0x10))();
  uVar2 = *puVar5;
  uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar4 = uVar3 & 0x7fffffff ^ uVar3 >> 0x10;
  uVar3 = *(uint *)(param_2 + 0x248);
  uVar9 = uVar4 & uVar3;
  lVar6 = param_2 + 0x230;
  if (*(longlong *)(param_2 + 0x238) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x238);
  }
  do {
    if (*(uint *)(lVar6 + (longlong)(int)uVar9 * 4) == uVar4) {
      lVar8 = *(longlong *)(param_2 + 0x220);
      if (*(longlong *)(param_2 + 0x220) == 0) {
        lVar8 = param_2 + 0x218;
      }
      iVar1 = *(int *)(lVar8 + (longlong)(int)uVar9 * 4);
      lVar8 = (longlong)iVar1 * 0x10;
      if (*(ulonglong *)(*(longlong *)(param_2 + 0x1d8) + lVar8) == uVar2) {
        if (((iVar1 != -1) &&
            (plVar7 = (longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar8 + 8),
            plVar7 != (longlong *)0x0)) && (lVar6 = *plVar7, lVar6 != 0)) goto LAB_1417f4db0;
        goto LAB_1417f4d7d;
      }
    }
    uVar9 = uVar9 + 1 & uVar3;
    if (uVar9 == (*(int *)(param_2 + 0x24c) + uVar4 + 1 & uVar3)) {
LAB_1417f4d7d:
      FUN_1447ec05f(&local_30,uVar2,L"RenderTarget");
      lVar6 = FUN_14473c272(param_2,&local_30,0);
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x38))();
      }
LAB_1417f4db0:
      if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return lVar6;
    }
  } while( true );
}



// FUNCTION 1417f4dd4 FUN_1417f4dd4 body=40 status=ok
// SIG undefined FUN_1417f4dd4(void)

undefined8 FUN_1417f4dd4(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f4dfc FUN_1417f4dfc body=1281 status=ok
// SIG undefined FUN_1417f4dfc(void)

undefined8 * FUN_1417f4dfc(undefined8 *param_1,int param_2)

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
  
  *param_1 = &PTR_FUN_14aadc598;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x1e;
  puVar2 = (uint *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x23);
  if (iVar3 == 0) {
    uVar14 = 1;
    iVar11 = 0;
    uVar15 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[0x22];
    if ((uint *)param_1[0x22] == (uint *)0x0) {
      puVar8 = puVar2;
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_1417f4e67;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar13 == 0);
    }
    else {
      iVar11 = 0;
      uVar15 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar9 = uVar14 * 2 + 1;
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
      lVar12 = *plVar1;
      lVar10 = (longlong)iVar7 * 0x60;
      *(undefined4 *)(lVar12 + 0x50 + lVar10) = 0;
      if (*(longlong *)(lVar12 + 0x48 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_1401acfe2(lVar12 + lVar10 + 8);
      uVar13 = uVar13 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[0x22];
      if ((uint *)param_1[0x22] == (uint *)0x0) {
        puVar8 = puVar2;
      }
      iVar3 = *(int *)(param_1 + 0x23);
      iVar7 = (int)uVar15;
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
          if (iVar6 - lVar12 == lVar10) goto LAB_1417f4e67;
        }
        uVar15 = (ulonglong)(iVar7 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_1417f4e67:
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    FUN_1448fc38a(plVar1,0);
  }
  param_1[0x24] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x11c)) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1401acfe2(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1401acfe2(param_1 + 10);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (uint *)(param_1 + 3);
  iVar3 = *(int *)(param_1 + 6);
  if (iVar3 == 0) {
    uVar14 = 1;
    iVar11 = 0;
    uVar15 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[5];
    if ((uint *)param_1[5] == (uint *)0x0) {
      puVar8 = puVar2;
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_1417f4f3f;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar9 = uVar14 * 2 + 1;
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
      (*(code *)(&PTR_LAB_14a1c87a0)[*(byte *)((longlong)iVar7 * 0x70 + param_1[1] + 0x50)])();
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar8 = (uint *)param_1[5];
      if ((uint *)param_1[5] == (uint *)0x0) {
        puVar8 = puVar2;
      }
      iVar3 = *(int *)(param_1 + 6);
      iVar7 = (int)uVar15;
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
          if (iVar6 - lVar12 == lVar10) goto LAB_1417f4f3f;
        }
        uVar15 = (ulonglong)(iVar7 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_1417f4f3f:
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    FUN_141154a24(param_1 + 1,0);
  }
  param_1[7] = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x34)) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[5] != 0) {
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



// FUNCTION 1417f52fe FUN_1417f52fe body=353 status=ok
// SIG undefined FUN_1417f52fe(void)

void FUN_1417f52fe(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417f5383;
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
LAB_1417f5383:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417f5460 FUN_1417f5460 body=83 status=ok
// SIG undefined FUN_1417f5460(void)

longlong FUN_1417f5460(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 8;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xb0);
  }
  FUN_1446fc26f(lVar1,*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f54b4 FUN_1417f54b4 body=75 status=ok
// SIG undefined FUN_1417f54b4(void)

longlong FUN_1417f54b4(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f5500 FUN_1417f5500 body=255 status=ok
// SIG undefined FUN_1417f5500(void)

void FUN_1417f5500(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
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



// FUNCTION 1417f55ff FUN_1417f55ff body=502 status=ok
// SIG undefined FUN_1417f55ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417f55ff(void)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  QueryPerformanceCounter(&local_48);
  dVar1 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  dVar2 = dVar1 - _DAT_14cb0cbe0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0cbf0) {
    FUN_144b3d300(&DAT_14cb0cbf0);
    if (DAT_14cb0cbf0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0cbe8 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VSync",1);
      _Init_thread_footer(&DAT_14cb0cbf0);
    }
  }
  lVar3 = DAT_14cb0cb48;
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
  fVar9 = (float)(dVar2 * 1000.0);
  if (*(int *)(lVar3 + uVar7 * 4) == 2) {
    iVar4 = (**(code **)(*DAT_14cb0cbe8 + 0xb0))();
    if (iVar4 != 0) {
      fVar8 = (float)FUN_147413d25();
      fVar9 = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar9 | (uint)fVar8 & -(uint)(fVar8 != 0.0));
    }
  }
  DAT_14cb0cbdc = DAT_14cb0cbdc * 0.75 + fVar9 * 0.25;
  _DAT_14cb0cbe0 = dVar1;
  DAT_14cb0d290 = 1000.0 / DAT_14cb0cbdc;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f57f6 FUN_1417f57f6 body=477 status=ok
// SIG undefined FUN_1417f57f6(void)

void FUN_1417f57f6(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1)) {
    FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
    _Init_thread_footer(&DAT_14cb0d2a8);
  }
  uVar1 = DAT_14cb0d2a0;
  local_58 = 0;
  uStack_50 = 0;
  iVar4 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cb0d2a0);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      lVar6 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar1,iVar8);
      uVar3 = uStack_50;
      lVar7 = lVar6 + -8;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      lVar6 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_1448c32a0(&local_58,uVar3 & 0xffffffff);
      }
      lVar2 = local_58;
      *(longlong *)(local_58 + lVar6 * 8) = lVar7;
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
    lVar7 = (longlong)(int)uStack_50;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x30))(*(longlong **)(lVar2 + lVar6),param_1);
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417f59d4 FUN_1417f59d4 body=477 status=ok
// SIG undefined FUN_1417f59d4(void)

void FUN_1417f59d4(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1)) {
    FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
    _Init_thread_footer(&DAT_14cb0d2a8);
  }
  uVar1 = DAT_14cb0d2a0;
  local_58 = 0;
  uStack_50 = 0;
  iVar4 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cb0d2a0);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      lVar6 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar1,iVar8);
      uVar3 = uStack_50;
      lVar7 = lVar6 + -8;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      lVar6 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_1448c32a0(&local_58,uVar3 & 0xffffffff);
      }
      lVar2 = local_58;
      *(longlong *)(local_58 + lVar6 * 8) = lVar7;
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
    lVar7 = (longlong)(int)uStack_50;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x38))(*(longlong **)(lVar2 + lVar6),param_1);
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417f5bb2 FUN_1417f5bb2 body=477 status=ok
// SIG undefined FUN_1417f5bb2(void)

void FUN_1417f5bb2(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1)) {
    FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
    _Init_thread_footer(&DAT_14cb0d2a8);
  }
  uVar1 = DAT_14cb0d2a0;
  local_58 = 0;
  uStack_50 = 0;
  iVar4 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cb0d2a0);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      lVar6 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar1,iVar8);
      uVar3 = uStack_50;
      lVar7 = lVar6 + -8;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      lVar6 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_1448c32a0(&local_58,uVar3 & 0xffffffff);
      }
      lVar2 = local_58;
      *(longlong *)(local_58 + lVar6 * 8) = lVar7;
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
    lVar7 = (longlong)(int)uStack_50;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x40))(*(longlong **)(lVar2 + lVar6),param_1);
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417f5d90 FUN_1417f5d90 body=713 status=ok
// SIG undefined FUN_1417f5d90(void)

void FUN_1417f5d90(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1)) {
    FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
    _Init_thread_footer(&DAT_14cb0d2a8);
  }
  uVar1 = DAT_14cb0d2a0;
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cb0d2a0);
  if (0 < iVar3) {
    iVar6 = 0;
    do {
      lVar5 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar1,iVar6);
      uVar2 = uStack_50;
      lVar7 = lVar5 + -8;
      if (lVar5 == 0) {
        lVar7 = 0;
      }
      lVar5 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_1448c32a0(&local_58,uVar2 & 0xffffffff);
      }
      *(longlong *)(local_58 + lVar5 * 8) = lVar7;
      iVar6 = iVar6 + 1;
    } while (iVar3 != iVar6);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
  lVar7 = local_58;
  lVar5 = (longlong)(int)uStack_50;
  if (lVar5 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar7 + lVar8) + 0x48))(*(longlong **)(lVar7 + lVar8),param_1);
      lVar8 = lVar8 + 8;
    } while (lVar5 * 8 != lVar8);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417f605a FUN_1417f605a body=713 status=ok
// SIG undefined FUN_1417f605a(void)

void FUN_1417f605a(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1)) {
    FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
    _Init_thread_footer(&DAT_14cb0d2a8);
  }
  uVar1 = DAT_14cb0d2a0;
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cb0d2a0);
  if (0 < iVar3) {
    iVar6 = 0;
    do {
      lVar5 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar1,iVar6);
      uVar2 = uStack_50;
      lVar7 = lVar5 + -8;
      if (lVar5 == 0) {
        lVar7 = 0;
      }
      lVar5 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_1448c32a0(&local_58,uVar2 & 0xffffffff);
      }
      *(longlong *)(local_58 + lVar5 * 8) = lVar7;
      iVar6 = iVar6 + 1;
    } while (iVar3 != iVar6);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
  lVar7 = local_58;
  lVar5 = (longlong)(int)uStack_50;
  if (lVar5 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar7 + lVar8) + 0x50))(*(longlong **)(lVar7 + lVar8),param_1);
      lVar8 = lVar8 + 8;
    } while (lVar5 * 8 != lVar8);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417f6324 FUN_1417f6324 body=713 status=ok
// SIG undefined FUN_1417f6324(void)

void FUN_1417f6324(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1)) {
    FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
    _Init_thread_footer(&DAT_14cb0d2a8);
  }
  uVar1 = DAT_14cb0d2a0;
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cb0d2a0);
  if (0 < iVar3) {
    iVar6 = 0;
    do {
      lVar5 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar1,iVar6);
      uVar2 = uStack_50;
      lVar7 = lVar5 + -8;
      if (lVar5 == 0) {
        lVar7 = 0;
      }
      lVar5 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_1448c32a0(&local_58,uVar2 & 0xffffffff);
      }
      *(longlong *)(local_58 + lVar5 * 8) = lVar7;
      iVar6 = iVar6 + 1;
    } while (iVar3 != iVar6);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
  lVar7 = local_58;
  lVar5 = (longlong)(int)uStack_50;
  if (lVar5 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar7 + lVar8) + 0x58))(*(longlong **)(lVar7 + lVar8),param_1);
      lVar8 = lVar8 + 8;
    } while (lVar5 * 8 != lVar8);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417f65ee FUN_1417f65ee body=713 status=ok
// SIG undefined FUN_1417f65ee(void)

void FUN_1417f65ee(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1)) {
    FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
    _Init_thread_footer(&DAT_14cb0d2a8);
  }
  uVar1 = DAT_14cb0d2a0;
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cb0d2a0);
  if (0 < iVar3) {
    iVar6 = 0;
    do {
      lVar5 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar1,iVar6);
      uVar2 = uStack_50;
      lVar7 = lVar5 + -8;
      if (lVar5 == 0) {
        lVar7 = 0;
      }
      lVar5 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_1448c32a0(&local_58,uVar2 & 0xffffffff);
      }
      *(longlong *)(local_58 + lVar5 * 8) = lVar7;
      iVar6 = iVar6 + 1;
    } while (iVar3 != iVar6);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
  lVar7 = local_58;
  lVar5 = (longlong)(int)uStack_50;
  if (lVar5 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar7 + lVar8) + 0x60))(*(longlong **)(lVar7 + lVar8),param_1);
      lVar8 = lVar8 + 8;
    } while (lVar5 * 8 != lVar8);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417f68b8 FUN_1417f68b8 body=477 status=ok
// SIG undefined FUN_1417f68b8(void)

void FUN_1417f68b8(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1)) {
    FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
    _Init_thread_footer(&DAT_14cb0d2a8);
  }
  uVar1 = DAT_14cb0d2a0;
  local_58 = 0;
  uStack_50 = 0;
  iVar4 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cb0d2a0);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      lVar6 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar1,iVar8);
      uVar3 = uStack_50;
      lVar7 = lVar6 + -8;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      lVar6 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_1448c32a0(&local_58,uVar3 & 0xffffffff);
      }
      lVar2 = local_58;
      *(longlong *)(local_58 + lVar6 * 8) = lVar7;
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
    lVar7 = (longlong)(int)uStack_50;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x68))(*(longlong **)(lVar2 + lVar6),param_1);
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417f6a96 FUN_1417f6a96 body=445 status=ok
// SIG undefined FUN_1417f6a96(void)

void FUN_1417f6a96(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0xf50) != 0) {
    FUN_1479735aa(*(longlong *)(param_1 + 0xf50),param_2);
  }
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x1148);
    plVar1 = plVar6 + *(int *)(param_1 + 0x1150);
    do {
      lVar3 = *plVar6;
      (**(code **)(*param_2 + 0x88))(param_2,lVar3 + 0x230,param_1,0);
      iVar2 = *(int *)(lVar3 + 0x240);
      if ((longlong)iVar2 != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x238);
        lVar4 = 0;
        do {
          (**(code **)(*param_2 + 0x90))
                    (param_2,*(undefined8 *)(lVar5 + 0x28 + lVar4),
                     *(undefined4 *)(lVar5 + 0x30 + lVar4),param_1,0);
          lVar4 = lVar4 + 0x38;
        } while ((longlong)iVar2 * 0x38 != lVar4);
      }
      (**(code **)(*param_2 + 0x90))
                (param_2,*(undefined8 *)(lVar3 + 600),*(undefined4 *)(lVar3 + 0x260),param_1,0);
      (**(code **)(*param_2 + 0x90))
                (param_2,*(undefined8 *)(lVar3 + 0x280),*(undefined4 *)(lVar3 + 0x288),param_1,0);
      (**(code **)(*param_2 + 0x88))(param_2,lVar3 + 0x2a0,param_1);
      (**(code **)(*param_2 + 0x88))(param_2,lVar3 + 0x2a8,param_1);
      if ((longlong)*(int *)(lVar3 + 0x2b8) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x2b0);
        lVar4 = (longlong)*(int *)(lVar3 + 0x2b8) << 4;
        do {
          (**(code **)(*param_2 + 0x88))(param_2,lVar5,param_1);
          lVar5 = lVar5 + 0x10;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
      (**(code **)(*param_2 + 0x88))(param_2,lVar3 + 0x360,param_1);
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  FUN_140754fec(param_1 + 0x1160,param_1,param_2);
  return;
}



// FUNCTION 1417f6c54 FUN_1417f6c54 body=17 status=ok
// SIG undefined FUN_1417f6c54(void)

undefined4 FUN_1417f6c54(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14062842a();
  return *(undefined4 *)(lVar1 + 8);
}



// FUNCTION 1417f6c66 FUN_1417f6c66 body=135 status=ok
// SIG undefined FUN_1417f6c66(void)

void FUN_1417f6c66(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  if (*(byte *)(param_1 + 0xd5c) < 2) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0);
    }
    uVar3 = *(longlong *)(lVar1 + 0x588) != 0;
LAB_1417f6c95:
    *(undefined1 *)(param_1 + 0xd5c) = uVar3;
  }
  else if (*(byte *)(param_1 + 0xd5c) == 4) {
    *(undefined1 *)(param_1 + 0xd5c) = 0;
    lVar1 = FUN_1405e677a(param_1);
    lVar1 = *(longlong *)(lVar1 + 0x2a8);
    if ((lVar1 != 0) && (0 < (longlong)*(int *)(lVar1 + 0x40))) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar2 * 8) + 0x30) == 0) {
          uVar3 = 4;
          goto LAB_1417f6c95;
        }
        lVar2 = lVar2 + 1;
      } while (*(int *)(lVar1 + 0x40) != lVar2);
    }
  }
  return;
}



// FUNCTION 1417f6cee FUN_1417f6cee body=185 status=ok
// SIG undefined FUN_1417f6cee(void)

undefined8 FUN_1417f6cee(longlong param_1)

{
  int iVar1;
  undefined1 auStack_98 [32];
  tagINPUT local_78;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    iVar1 = 0;
LAB_1417f6d31:
    do {
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        FUN_14000f986(0x3f800000);
        iVar1 = iVar1 + 1;
        if (iVar1 != 0x32) goto LAB_1417f6d31;
      }
      local_78.field1_0x8.ki.dwExtraInfo = 0;
      local_78.type = 0;
      local_78._4_4_ = 0;
      local_78.field1_0x8.mi.dx = 0;
      local_78.field1_0x8.hi.wParamL = 0;
      local_78.field1_0x8.hi.wParamH = 0;
      local_78.field1_0x8._8_8_ = 0x100000000;
      local_78.field1_0x8.mi.dwExtraInfo = 0;
      SendInput(1,&local_78,0x28);
      iVar1 = 0;
    } while ((*(byte *)(param_1 + 8) & 1) != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f6da8 FUN_1417f6da8 body=543 status=ok
// SIG undefined FUN_1417f6da8(void)

void FUN_1417f6da8(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x88);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0x10;
    _Src = *(void **)((longlong)param_1 + 0x80);
joined_r0x0001417f6f54:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)((longlong)param_1 + 0x8c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_1417f6e40;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_1417f6e40:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x80);
    }
    else {
      *(uint *)((longlong)param_1 + 0x8c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x80);
      if (uVar6 < 0x11) goto joined_r0x0001417f6f54;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x80,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,uVar8,8);
  return;
}



// FUNCTION 1417f6fc7 FUN_1417f6fc7 body=224 status=ok
// SIG undefined FUN_1417f6fc7(void)

undefined8 FUN_1417f6fc7(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  uVar2 = FUN_14021219d();
  uVar2 = FUN_14021219d(uVar2,param_2 + 0x10);
  uVar2 = FUN_14021219d(uVar2,param_2 + 0x28);
  uVar2 = FUN_14021219d(uVar2,param_2 + 0x58);
  plVar3 = (longlong *)FUN_1405d0c38(uVar2,param_2 + 0x48);
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar3 + 0x170))(plVar3,(undefined4 *)(param_2 + 0x20),4);
    }
    else {
      thunk_FUN_14572512c(plVar3);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  puVar4 = (undefined4 *)(param_2 + 0x24);
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar3 + 0x170))(plVar3,puVar4,4);
    }
    else {
      thunk_FUN_14572512c(plVar3,puVar4);
    }
  }
  else {
    *puVar4 = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  return param_1;
}



// FUNCTION 1417f70a7 FUN_1417f70a7 body=93 status=ok
// SIG undefined FUN_1417f70a7(void)

void FUN_1417f70a7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1409ce95c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aae7ba0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x9c) = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  return;
}



// FUNCTION 1417f7104 FUN_1417f7104 body=22 status=ok
// SIG undefined FUN_1417f7104(void)

undefined8 FUN_1417f7104(undefined8 param_1,undefined8 param_2)

{
  FUN_1409673a0();
  return param_2;
}



// FUNCTION 1417f711a FUN_1417f711a body=323 status=ok
// SIG undefined FUN_1417f711a(void)

longlong * FUN_1417f711a(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401cfb1c(param_1,&local_40);
  puVar6 = local_40;
  if (local_38 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_30,puVar6,1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    uVar2 = (uint)((ulonglong)local_30 >> 0x10);
    uVar4 = (uint)local_30 & 0xffff;
    lVar3 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xa8);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb0) - 1U &
                             (int)((ulonglong)local_30 >> 0x20) + ((uint)local_30 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x68) + (longlong)iVar5 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar5 * 0x20) == local_30) {
          if ((lVar3 != 0) && ((longlong *)(lVar3 + 8) != (longlong *)0x0)) {
            plVar1 = *(longlong **)(lVar3 + 8);
            *param_2 = (longlong)plVar1;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x10);
            goto LAB_1417f722a;
          }
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x18);
      } while (iVar5 != -1);
    }
  }
  FUN_1406f1de0(param_1,param_2,param_3);
LAB_1417f722a:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1417f725e FUN_1417f725e body=459 status=ok
// SIG undefined FUN_1417f725e(void)

undefined8 FUN_1417f725e(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0 [4];
  undefined4 local_ac;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = *(longlong *)(param_1 + 8);
  local_c0 = param_3;
  if ((((*(int *)(lVar4 + 8) == 0) && (*(int *)(lVar4 + 0x18) == 0)) &&
      (*(int *)(lVar4 + 0x68) == 0)) &&
     (((*(int *)(lVar4 + 0x170) == 0 && (*(int *)(lVar4 + 0x58) == 0)) &&
      (*(int *)(lVar4 + 0x28) < 1)))) {
    uVar6 = 0;
  }
  else {
    plVar7 = *(longlong **)(param_2 + 0x58);
    fVar8 = (float)(**(code **)(*plVar7 + 0x30))(plVar7);
    local_c8 = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(param_2 + 0x60);
    local_b8 = param_1;
    (**(code **)(*plVar7 + 0x28))(plVar7,local_a8);
    uVar5 = local_a8[0]._0_4_;
    (**(code **)(*plVar7 + 0x28))(plVar7,local_b0);
    uVar2 = *(undefined4 *)(param_2 + 0x78);
    iVar3 = *(int *)(param_2 + 0x9c);
    uVar1 = *(undefined2 *)(&DAT_14ca85070 + (longlong)iVar3 * 2);
    local_a8[0] = (code *)0x0;
    local_98 = (longlong *)FUN_14001cc68(0x38,8);
    *local_98 = (longlong)&PTR_FUN_14aaf9150;
    local_98[1] = (longlong)L"CanvasBatchedElements";
    local_98[2] = local_c8;
    *(uint *)(local_98 + 3) = (uint)(lVar4 != 0);
    *(undefined4 *)((longlong)local_98 + 0x1c) = uVar5;
    *(undefined4 *)(local_98 + 4) = local_ac;
    *(float *)((longlong)local_98 + 0x24) = 1.0 / fVar8;
    *(undefined4 *)(local_98 + 5) = uVar2;
    *(int *)((longlong)local_98 + 0x2c) = iVar3;
    *(undefined2 *)(local_98 + 6) = uVar1;
    if (local_98 + 1 != (longlong *)0x0) {
      local_a8[0] = FUN_14377b3c2;
    }
    FUN_14031f22a(local_c0,local_a8);
    if (local_a8[0] != (code *)0x0) {
      plVar7 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar7 = local_88;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    uVar6 = 1;
    param_1 = local_b8;
  }
  if ((*(byte *)(param_2 + 0x78) & 2) != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f742a FUN_1417f742a body=955 status=ok
// SIG undefined FUN_1417f742a(void)

void FUN_1417f742a(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar10;
  double dVar12;
  double dVar14;
  double dVar16;
  double dVar18;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  longlong lVar39;
  double *pdVar40;
  undefined1 auStack_1a8 [32];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  ulonglong local_d0;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar9;
  double dVar11;
  double dVar13;
  double dVar15;
  double dVar17;
  double dVar19;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(int *)(param_1 + 0x30) < 1) {
    pdVar40 = (double *)local_168;
    for (lVar39 = 0x10; lVar39 != 0; lVar39 = lVar39 + -1) {
      *pdVar40 = *param_2;
      param_2 = param_2 + 1;
      pdVar40 = pdVar40 + 1;
    }
    local_e8 = FUN_1448eb174(local_168,0x80,0);
  }
  else {
    pdVar40 = *(double **)(param_1 + 0x28);
    local_178 = *pdVar40;
    dStack_170 = pdVar40[1];
    local_188 = pdVar40[2];
    dStack_180 = pdVar40[3];
    dVar28 = pdVar40[4];
    dVar21 = pdVar40[5];
    dVar29 = pdVar40[6];
    dVar30 = pdVar40[7];
    dVar31 = pdVar40[8];
    dVar32 = pdVar40[9];
    dVar33 = pdVar40[10];
    dVar34 = pdVar40[0xb];
    dVar35 = pdVar40[0xc];
    dVar36 = pdVar40[0xd];
    dVar37 = pdVar40[0xe];
    dVar38 = pdVar40[0xf];
    dVar1 = param_2[1];
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar4 = param_2[2];
    dVar5 = param_2[3];
    dVar6 = param_2[3];
    dVar23 = dVar36 * dVar6 + dVar32 * dVar4 + dVar21 * dVar2 + dStack_170 * *param_2;
    dVar22 = dVar6 * dVar38 + dVar4 * dVar34 + dVar2 * dVar30 + *param_2 * dStack_180;
    dVar4 = param_2[4];
    dVar2 = param_2[4];
    dVar7 = param_2[5];
    dVar6 = param_2[5];
    dVar8 = param_2[6];
    dVar9 = param_2[6];
    dVar10 = param_2[7];
    dVar11 = param_2[7];
    dVar25 = dVar36 * dVar11 + dVar32 * dVar9 + dVar21 * dVar6 + dStack_170 * dVar2;
    dVar24 = dVar11 * dVar38 + dVar9 * dVar34 + dVar6 * dVar30 + dVar2 * dStack_180;
    dVar2 = param_2[8];
    dVar6 = param_2[8];
    dVar9 = param_2[9];
    dVar11 = param_2[9];
    dVar12 = param_2[10];
    dVar13 = param_2[10];
    dVar14 = param_2[0xb];
    dVar15 = param_2[0xb];
    dVar27 = dVar36 * dVar15 + dVar32 * dVar13 + dVar21 * dVar11 + dStack_170 * dVar6;
    dVar26 = dVar15 * dVar38 + dVar13 * dVar34 + dVar11 * dVar30 + dVar6 * dStack_180;
    dVar11 = param_2[0xc];
    dVar6 = param_2[0xc];
    dVar13 = param_2[0xd];
    dVar15 = param_2[0xd];
    dVar16 = param_2[0xe];
    dVar17 = param_2[0xe];
    dVar18 = param_2[0xf];
    dVar19 = param_2[0xf];
    dVar21 = dVar36 * dVar19 + dVar32 * dVar17 + dVar21 * dVar15 + dStack_170 * dVar6;
    dVar6 = dVar38 * dVar19 + dVar34 * dVar17 + dVar30 * dVar15 + dStack_180 * dVar6;
    local_168._8_4_ = SUB84(dVar23,0);
    local_168._0_8_ = dVar35 * dVar5 + dVar31 * dVar3 + dVar28 * dVar1 + local_178 * *param_2;
    local_168._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    local_158._8_4_ = SUB84(dVar22,0);
    local_158._0_8_ = dVar5 * dVar37 + dVar3 * dVar33 + dVar1 * dVar29 + *param_2 * local_188;
    local_158._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    local_148._8_4_ = SUB84(dVar25,0);
    local_148._0_8_ = dVar35 * dVar10 + dVar31 * dVar8 + dVar28 * dVar7 + local_178 * dVar4;
    local_148._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    local_138._8_4_ = SUB84(dVar24,0);
    local_138._0_8_ = dVar10 * dVar37 + dVar8 * dVar33 + dVar7 * dVar29 + dVar4 * local_188;
    local_138._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    local_128._8_4_ = SUB84(dVar27,0);
    local_128._0_8_ = dVar35 * dVar14 + dVar31 * dVar12 + dVar28 * dVar9 + local_178 * dVar2;
    local_128._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    local_118._8_4_ = SUB84(dVar26,0);
    local_118._0_8_ = dVar14 * dVar37 + dVar12 * dVar33 + dVar9 * dVar29 + dVar2 * local_188;
    local_118._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    local_108._8_4_ = SUB84(dVar21,0);
    local_108._0_8_ = dVar35 * dVar18 + dVar31 * dVar16 + dVar28 * dVar13 + local_178 * dVar11;
    local_108._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    local_f8._8_4_ = SUB84(dVar6,0);
    local_f8._0_8_ = dVar37 * dVar18 + dVar33 * dVar16 + dVar29 * dVar13 + local_188 * dVar11;
    local_f8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_e8 = FUN_1448eb174(local_168,0x80,0);
  }
  iVar20 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar20 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar20 + 1U) {
    FUN_1401fb018((longlong *)(param_1 + 0x28),iVar20);
  }
  memcpy((void *)((longlong)iVar20 * 0x90 + *(longlong *)(param_1 + 0x28)),local_168,0x90);
  if ((local_d0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f77e6 FUN_1417f77e6 body=54 status=ok
// SIG undefined FUN_1417f77e6(void)

void FUN_1417f77e6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  (**(code **)(*param_2 + 0x10))(param_2,lVar1);
  if (*(int *)(lVar1 + 0xac) != 1) {
    return;
  }
  FUN_14376e4da(lVar1,0);
  return;
}



// FUNCTION 1417f781c FUN_1417f781c body=143 status=ok
// SIG undefined FUN_1417f781c(void)

bool FUN_1417f781c(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    bVar2 = false;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x208);
    if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))();
    }
    FUN_1447a1fc0(plVar3);
    plVar3 = *(longlong **)(param_1 + 0x208);
    pcVar1 = *(code **)(*plVar3 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar4 = plVar3 + 3;
      if (plVar3[5] != 0) {
        plVar4 = (longlong *)(plVar3[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar4 = plVar3 + 2;
    }
    else {
      plVar4 = (longlong *)(*pcVar1)(plVar3);
    }
    bVar2 = 1 < (int)plVar4[1];
  }
  return bVar2;
}



// FUNCTION 1417f78ac FUN_1417f78ac body=101 status=ok
// SIG undefined FUN_1417f78ac(void)

void FUN_1417f78ac(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1[0x1b] != 0) {
    FUN_1404838ec(param_2);
    lVar1 = 0x318;
    if ((param_1[0x1b] == DAT_14cb0dd38) || (lVar1 = 0x350, param_1[0x1b] == DAT_14cb0dd40)) {
      (**(code **)(*param_1 + lVar1))(param_1,param_2);
    }
    FUN_1404835a8(param_2);
    return;
  }
  return;
}



// FUNCTION 1417f7912 FUN_1417f7912 body=521 status=ok
// SIG undefined FUN_1417f7912(void)

void FUN_1417f7912(longlong param_1,undefined8 param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0e270) {
    FUN_144b3d300(&DAT_14cb0e270);
    if (DAT_14cb0e270 == -1) {
      FUN_1446ddc76(&DAT_14cb0e268,"LogConsoleResponse",1);
      _Init_thread_footer(&DAT_14cb0e270);
    }
  }
  if (*param_4 != DAT_14cb0e268) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0e280) {
      FUN_144b3d300(&DAT_14cb0e280);
      if (DAT_14cb0e280 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar5 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"con.MinLogVerbosity",1);
        if (plVar5 == (longlong *)0x0) {
          DAT_14cb0e278 = 0;
        }
        else {
          DAT_14cb0e278 = (**(code **)(*plVar5 + 0x68))(plVar5);
        }
        _Init_thread_footer(&DAT_14cb0e280);
      }
    }
    lVar2 = DAT_14cb0e278;
    if (DAT_14cb0e278 == 0) goto LAB_1417f79ea;
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar6 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar6 = 1;
    }
    if (*(int *)(lVar2 + uVar6 * 4) < (int)(param_3 & 0xff)) goto LAB_1417f79ea;
  }
  FUN_140056680(local_40,param_2);
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2c0))((longlong *)(param_1 + -0x28),local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_1417f79ea:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f7b1c FUN_1417f7b1c body=552 status=ok
// SIG undefined FUN_1417f7b1c(void)

void FUN_1417f7b1c(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [36];
  int local_b4;
  longlong local_b0;
  int *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_b4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      local_b0 = (longlong)local_b4 * 0x18 + *(longlong *)(param_1 + 0x28);
      local_a8 = &local_b4;
      FUN_140171856(&local_98,local_9c,&local_b0);
      local_b4 = local_b4 + 1;
      uVar5 = *(uint *)(param_1 + 0x30);
    } while (local_b4 < (int)uVar5);
    if (0 < (int)uVar5) {
      uVar11 = (ulonglong)uVar5;
      do {
        uVar1 = uVar11 - 1;
        lVar2 = *(longlong *)(param_1 + 0x28);
        if ((int)uStack_90 != local_64) {
          lVar3 = *(longlong *)(lVar2 + uVar1 * 0x18);
          uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar8 = (uint)lVar3 & 0xffff;
          puVar7 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar7 = local_60;
          }
          iVar9 = *(int *)(puVar7 + (ulonglong)
                                    (local_50 - 1U &
                                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8)
                                    + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
          while (iVar9 != -1) {
            plVar10 = (longlong *)(local_98 + (longlong)iVar9 * 0x14);
            if (*plVar10 == lVar3) goto LAB_1417f7c84;
            iVar9 = *(int *)((longlong)plVar10 + 0xc);
          }
        }
        plVar10 = (longlong *)0x0;
LAB_1417f7c84:
        if (uVar1 != *(uint *)(plVar10 + 1)) {
          uVar5 = *(uint *)(param_1 + 0x30);
          if (uVar11 != uVar5) {
            iVar6 = uVar5 - (int)uVar11;
            iVar9 = 1;
            if (iVar6 < 1) {
              iVar9 = iVar6;
            }
            memmove((void *)(lVar2 + uVar1 * 0x18),
                    (void *)(lVar2 + (longlong)(int)(uVar5 - iVar9) * 0x18),(longlong)iVar9 * 0x18);
            uVar5 = *(uint *)(param_1 + 0x30);
          }
          *(uint *)(param_1 + 0x30) = uVar5 - 1;
          FUN_147da06b0((longlong *)(param_1 + 0x28));
        }
        bVar4 = 1 < (longlong)uVar11;
        uVar11 = uVar1;
      } while (bVar4);
    }
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&local_98);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f7d46 FUN_1417f7d46 body=155 status=ok
// SIG undefined FUN_1417f7d46(void)

undefined8 FUN_1417f7d46(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined4)DAT_14c965448;
  uStack_24 = DAT_14c965448._4_4_;
  uStack_20 = (undefined4)DAT_14c965450;
  uStack_1c = DAT_14c965450._4_4_;
  local_18 = DAT_14c965458;
  if (DAT_14c965458 != 0) {
    LOCK();
    *(int *)(DAT_14c965458 + 8) = *(int *)(DAT_14c965458 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_14482ef28(param_1,&local_28);
  if (cVar1 == '\0') {
    local_40 = (undefined4)DAT_14c965460;
    uStack_3c = DAT_14c965460._4_4_;
    uStack_38 = (undefined4)DAT_14c965468;
    uStack_34 = DAT_14c965468._4_4_;
    local_30 = DAT_14c965470;
    if (DAT_14c965470 != 0) {
      LOCK();
      *(int *)(DAT_14c965470 + 8) = *(int *)(DAT_14c965470 + 8) + 1;
      UNLOCK();
    }
    uVar2 = FUN_14482ef28(param_1,&local_40);
  }
  else {
    uVar2 = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f7de2 FUN_1417f7de2 body=155 status=ok
// SIG undefined FUN_1417f7de2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1417f7de2(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined4)DAT_14c9654a8;
  uStack_24 = DAT_14c9654a8._4_4_;
  uStack_20 = _DAT_14c9654b0;
  uStack_1c = uRam000000014c9654b4;
  local_18 = DAT_14c9654b8;
  if (DAT_14c9654b8 != 0) {
    LOCK();
    *(int *)(DAT_14c9654b8 + 8) = *(int *)(DAT_14c9654b8 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_14482ef28(param_1,&local_28);
  if (cVar1 == '\0') {
    local_40 = (undefined4)DAT_14c9654c0;
    uStack_3c = DAT_14c9654c0._4_4_;
    uStack_38 = _DAT_14c9654c8;
    uStack_34 = uRam000000014c9654cc;
    local_30 = DAT_14c9654d0;
    if (DAT_14c9654d0 != 0) {
      LOCK();
      *(int *)(DAT_14c9654d0 + 8) = *(int *)(DAT_14c9654d0 + 8) + 1;
      UNLOCK();
    }
    uVar2 = FUN_14482ef28(param_1,&local_40);
  }
  else {
    uVar2 = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f7e7e FUN_1417f7e7e body=1243 status=ok
// SIG undefined FUN_1417f7e7e(void)

double * FUN_1417f7e7e(longlong param_1,double *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  double dVar4;
  longlong *plVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined1 local_b4 [4];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_2[2] = *(double *)(param_4 + 4);
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *(undefined4 *)param_2 = *param_4;
  *(undefined4 *)((longlong)param_2 + 4) = uVar7;
  *(undefined4 *)(param_2 + 1) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar9;
  iVar11 = *(int *)(param_1 + 0x1f8);
  iVar12 = *(int *)(param_1 + 0x224);
  if (iVar11 == iVar12) {
    if ((longlong)*(int *)(param_1 + 0x1b8) == 0) goto LAB_1417f7ffd;
    lVar15 = (longlong)*(int *)(param_1 + 0x1b8) * 0x18;
    lVar14 = *(longlong *)(param_1 + 0x1b0) + 8;
    do {
      local_e0 = *(undefined8 *)(lVar14 + -8);
      local_d8 = 0;
      plStack_d0 = (longlong *)0x0;
      cVar10 = FUN_1403e7f2a(&local_e0);
      if (cVar10 != '\0') {
        local_c8 = &local_e0;
        local_c0 = lVar14;
        FUN_14090b41a((longlong *)(param_1 + 0x1f0),local_b4,&local_c8,0);
      }
      plVar5 = plStack_d0;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar14 = lVar14 + 0x18;
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != 0);
    iVar11 = *(int *)(param_1 + 0x1f8);
    iVar12 = *(int *)(param_1 + 0x224);
  }
  if (iVar11 != iVar12) {
    lVar15 = *param_3;
    uVar16 = (uint)((ulonglong)lVar15 >> 0x10);
    uVar13 = (uint)lVar15 & 0xffff;
    lVar14 = param_1 + 0x228;
    if (*(longlong *)(param_1 + 0x230) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x230);
    }
    iVar11 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(param_1 + 0x238) - 1U &
                               (int)((ulonglong)lVar15 >> 0x20) + ((uint)lVar15 << 0x10 | uVar13) +
                               (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar11 != -1) {
      lVar14 = *(longlong *)(param_1 + 0x1f0);
      do {
        lVar3 = lVar14 + (longlong)iVar11 * 0x30;
        if (*(longlong *)(lVar14 + (longlong)iVar11 * 0x30) == lVar15) {
          if ((lVar3 != 0) && ((float *)(lVar3 + 0x18) != (float *)0x0)) {
            fVar18 = *(float *)(lVar3 + 0x18);
            dVar22 = *param_2;
            if (0.0 < fVar18) {
              fVar17 = (float)dVar22;
              if (fVar17 <= 0.0) {
                fVar19 = -(-fVar17 - fVar18);
                uVar16 = -(uint)(-fVar17 - fVar18 < fVar19);
                fVar19 = (float)(~uVar16 & (uint)fVar19 | uVar16 & 0x80000000);
              }
              else {
                fVar19 = 0.0;
                if (0.0 <= fVar17 - fVar18) {
                  fVar19 = fVar17 - fVar18;
                }
              }
              fVar20 = (float)param_2[1];
              fVar17 = 1.0 - fVar18;
              if (fVar20 <= 0.0) {
                fVar21 = -(-fVar20 - fVar18);
                uVar16 = -(uint)(-fVar20 - fVar18 < fVar21);
                fVar21 = (float)(~uVar16 & (uint)fVar21 | uVar16 & 0x80000000);
              }
              else {
                fVar21 = 0.0;
                if (0.0 <= fVar20 - fVar18) {
                  fVar21 = fVar20 - fVar18;
                }
              }
              param_2[1] = (double)(fVar21 / fVar17);
              fVar20 = (float)param_2[2];
              if (fVar20 <= 0.0) {
                fVar21 = -(-fVar20 - fVar18);
                uVar16 = -(uint)(-fVar20 - fVar18 < fVar21);
                fVar21 = (float)(~uVar16 & (uint)fVar21 | uVar16 & 0x80000000);
              }
              else {
                fVar21 = 0.0;
                if (0.0 <= fVar20 - fVar18) {
                  fVar21 = fVar20 - fVar18;
                }
              }
              dVar22 = (double)(fVar19 / fVar17);
              param_2[2] = (double)(fVar21 / fVar17);
            }
            fVar18 = *(float *)(lVar3 + 0x20);
            if ((fVar18 != 1.0) || (NAN(fVar18))) {
              fVar17 = (float)dVar22;
              fVar18 = powf(ABS(fVar17),fVar18);
              fVar19 = (float)param_2[1];
              dVar22 = (double)(fVar18 * (float)(-(uint)(0.0 < fVar17) & 0x3f800000 |
                                                ~-(uint)(0.0 < fVar17) &
                                                -(uint)(fVar17 < 0.0) & 0xbf800000));
              fVar18 = powf(ABS(fVar19),*(float *)(lVar3 + 0x20));
              fVar17 = (float)param_2[2];
              dVar23 = (double)(fVar18 * (float)(-(uint)(0.0 < fVar19) & 0x3f800000 |
                                                ~-(uint)(0.0 < fVar19) &
                                                -(uint)(fVar19 < 0.0) & 0xbf800000));
              fVar18 = powf(ABS(fVar17),*(float *)(lVar3 + 0x20));
              dVar4 = (double)(fVar18 * (float)(-(uint)(0.0 < fVar17) & 0x3f800000 |
                                               ~-(uint)(0.0 < fVar17) &
                                               -(uint)(fVar17 < 0.0) & 0xbf800000));
            }
            else {
              dVar23 = param_2[1];
              dVar4 = param_2[2];
            }
            dVar6 = (double)*(float *)(lVar3 + 0x1c);
            *param_2 = dVar22 * dVar6;
            param_2[1] = dVar23 * dVar6;
            param_2[2] = dVar4 * dVar6;
            if ((*(byte *)(lVar3 + 0x24) & 1) != 0) {
              *param_2 = -(dVar22 * dVar6);
              param_2[1] = -(dVar23 * dVar6);
              param_2[2] = -(dVar4 * dVar6);
            }
          }
          break;
        }
        iVar11 = *(int *)(lVar3 + 0x28);
      } while (iVar11 != -1);
    }
  }
LAB_1417f7ffd:
  plVar5 = (longlong *)param_3[2];
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
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1417f835a FUN_1417f835a body=114 status=ok
// SIG undefined FUN_1417f835a(void)

longlong * FUN_1417f835a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_14001cc68(8,0x10);
    lVar2 = *param_2;
    *plVar5 = lVar2;
    if (lVar2 == 0) {
      *param_1 = (longlong)plVar5;
    }
    else {
      LOCK();
      *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
      UNLOCK();
      plVar3 = (longlong *)*param_1;
      *param_1 = (longlong)plVar5;
      if (plVar3 != (longlong *)0x0) {
        puVar4 = (undefined8 *)*plVar3;
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        FUN_1400020a8(plVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1417f83cc FUN_1417f83cc body=59 status=ok
// SIG undefined FUN_1417f83cc(void)

void FUN_1417f83cc(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 1417f8407 FUN_1417f8407 body=3600 status=ok
// SIG undefined FUN_1417f8407(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417f8407(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  uint uVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  DAT_14cb0e978 = 0;
  _DAT_14cb0e980 = 0;
  FUN_140cd20a6(&DAT_14cb0e978,0xff);
  uVar7 = 0;
  do {
    uVar4 = uVar7 & 0xff;
    if (uVar4 < 100) {
      switch(uVar4) {
      case 0:
        local_58 = L"UViewModeUtils_VMI_BrushWireframe";
        local_50 = 0x21;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Wireframe";
        break;
      case 1:
        local_58 = L"UViewModeUtils_VMI_Wireframe";
        local_50 = 0x1c;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"CSG Wireframe";
        break;
      case 2:
        local_58 = L"UViewModeUtils_VMI_Unlit";
        local_50 = 0x18;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Unlit";
        break;
      case 3:
        local_58 = L"UViewModeUtils_VMI_Lit";
        local_50 = 0x16;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Lit";
        break;
      case 4:
        local_58 = L"UViewModeUtils_VMI_Lit_DetailLighting";
        local_50 = 0x25;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Detail Lighting";
        break;
      case 5:
        local_58 = L"UViewModeUtils_VMI_LightingOnly";
        local_50 = 0x1f;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Lighting Only";
        break;
      case 6:
        local_58 = L"UViewModeUtils_VMI_LightComplexity";
        local_50 = 0x22;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Light Complexity";
        break;
      default:
switchD_1417f847d_caseD_7:
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
        uVar3 = _DAT_14cb0e980;
        lVar5 = (longlong)DAT_14cb0e980;
        uVar4 = DAT_14cb0e980 + 1;
        _DAT_14cb0e980 = CONCAT44(DAT_14cb0e984,uVar4);
        if (DAT_14cb0e984 < uVar4) {
          FUN_14001d63e(&DAT_14cb0e978,uVar3 & 0xffffffff);
        }
        lVar2 = DAT_14cb0e978;
        plVar1 = DAT_14c844840;
        *(longlong **)(DAT_14cb0e978 + lVar5 * 0x10) = DAT_14c844840;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        *(undefined4 *)(lVar2 + lVar5 * 0x10 + 8) = DAT_14c844848;
        goto LAB_1417f8566;
      case 8:
        local_58 = L"UViewModeUtils_VMI_ShaderComplexity";
        local_50 = 0x23;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Shader Complexity";
        break;
      case 9:
        local_58 = L"UViewModeUtils_VMI_LightmapDensity";
        local_50 = 0x22;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Lightmap Density";
        break;
      case 10:
        local_58 = L"UViewModeUtils_VMI_LitLightmapDensity";
        local_50 = 0x25;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Lit Lightmap Density";
        break;
      case 0xb:
        local_58 = L"UViewModeUtils_VMI_ReflectionOverride";
        local_50 = 0x25;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Reflections";
        break;
      case 0xc:
        local_58 = L"UViewModeUtils_VMI_VisualizeBuffer";
        local_50 = 0x22;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Buffer Visualization";
        break;
      case 0xe:
        local_58 = L"UViewModeUtils_VMI_StationaryLightOverlap";
        local_50 = 0x29;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Stationary Light Overlap";
        break;
      case 0xf:
        local_58 = L"UViewModeUtils_VMI_CollisionPawn";
        local_50 = 0x20;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Player Collision";
        break;
      case 0x10:
        local_58 = L"UViewModeUtils_VMI_CollisionVisibility";
        local_50 = 0x26;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Visibility Collision";
        break;
      case 0x12:
        local_58 = L"UViewModeUtils_VMI_LODColoration";
        local_50 = 0x20;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Mesh LOD Coloration";
        break;
      case 0x13:
        local_58 = L"UViewModeUtils_VMI_QuadOverdraw";
        local_50 = 0x1f;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Quad Overdraw";
        break;
      case 0x14:
        local_58 = L"UViewModeUtils_VMI_PrimitiveDistanceAccuracy";
        local_50 = 0x2c;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Primitive Distance";
        break;
      case 0x15:
        local_58 = L"UViewModeUtils_VMI_MeshUVDensityAccuracy";
        local_50 = 0x28;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Mesh UV Density";
        break;
      case 0x16:
        local_58 = L"UViewModeUtils_VMI_ShaderComplexityWithQuadOverdraw";
        local_50 = 0x33;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Shader Complexity & Quads";
        break;
      case 0x17:
        local_58 = L"UViewModeUtils_VMI_HLODColoration";
        local_50 = 0x21;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Hierarchical LOD Coloration";
        break;
      case 0x18:
        local_58 = L"UViewModeUtils_VMI_GroupLODColoration";
        local_50 = 0x25;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Group LOD Coloration";
        break;
      case 0x19:
        local_58 = L"UViewModeUtils_VMI_MaterialTextureScaleAccuracy";
        local_50 = 0x2f;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Material Texture Scales";
        break;
      case 0x1a:
        local_58 = L"UViewModeUtils_VMI_RequiredTextureResolution";
        local_50 = 0x2c;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Required Texture Resolution";
        break;
      case 0x1b:
        local_58 = L"UViewModeUtils_VMI_PathTracing";
        local_50 = 0x1e;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Path Tracing";
        break;
      case 0x1c:
        local_58 = L"UViewModeUtils_VMI_RayTracingDebug";
        local_50 = 0x22;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Ray Tracing Debug";
        break;
      case 0x1d:
        local_58 = L"UViewModeUtils_VMI_VisualizeNanite";
        local_50 = 0x22;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Nanite Visualization";
        break;
      case 0x1e:
        local_58 = L"UViewModeUtils_VMI_VirtualTexturePendingMips";
        local_50 = 0x2c;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Virtual Texture Pending Mips";
        break;
      case 0x1f:
        local_58 = L"UViewModeUtils_VMI_VisualizeLumen";
        local_50 = 0x21;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Lumen Visualization";
        break;
      case 0x20:
        local_58 = L"UViewModeUtils_VMI_VisualizeVirtualShadowMap";
        local_50 = 0x2c;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Virtual Shadow Map Visualization";
        break;
      case 0x21:
        local_58 = L"UViewModeUtils_VMI_VisualizeGPUSkinCache";
        local_50 = 0x28;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"GPU Skin Cache";
        break;
      case 0x24:
        local_58 = L"UViewModeUtils_VMI_VisualizeLWCComplexity";
        local_50 = 0x29;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Material LWC Function Usage";
        break;
      case 0x25:
        local_58 = L"UViewModeUtils_VMI_Lit_Wireframe";
        local_50 = 0x20;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Lit Wireframe";
        break;
      case 0x26:
        local_58 = L"UViewModeUtils_VMI_VisualizeActorColoration";
        local_50 = 0x2b;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Actor Coloration Visualization";
      }
      FUN_140208bae(&local_58,local_60,local_5c,pwVar6);
      uVar3 = _DAT_14cb0e980;
      lVar5 = (longlong)DAT_14cb0e980;
      uVar4 = DAT_14cb0e980 + 1;
      _DAT_14cb0e980 = CONCAT44(DAT_14cb0e984,uVar4);
      if (DAT_14cb0e984 < uVar4) {
        FUN_14001d63e(&DAT_14cb0e978,uVar3 & 0xffffffff);
      }
      FUN_14023423e(lVar5 * 0x10 + DAT_14cb0e978,&local_58);
    }
    else {
      if (uVar4 == 100) {
        local_58 = L"UViewModeUtils_VMI_GameDifficultyHeat";
        local_50 = 0x25;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Game Difficulty Heat Map";
      }
      else if (uVar4 == 0x65) {
        local_58 = L"UViewModeUtils_VMI_Max";
        local_50 = 0x16;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Max EViewModeIndex value";
      }
      else {
        if (uVar4 != 0xff) goto switchD_1417f847d_caseD_7;
        local_58 = L"UViewModeUtils_VMI_Unknown";
        local_50 = 0x1a;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UViewModeUtils";
        local_50 = 0xe;
        FUN_1446e940c(local_60,&local_58);
        pwVar6 = L"Unknown EViewModeIndex value";
      }
      FUN_140208bae(&local_58,local_60,local_5c,pwVar6);
      uVar3 = _DAT_14cb0e980;
      lVar5 = (longlong)DAT_14cb0e980;
      uVar4 = DAT_14cb0e980 + 1;
      _DAT_14cb0e980 = CONCAT44(DAT_14cb0e984,uVar4);
      if (DAT_14cb0e984 < uVar4) {
        FUN_14001d63e(&DAT_14cb0e978,uVar3 & 0xffffffff);
      }
      FUN_14023423e(lVar5 * 0x10 + DAT_14cb0e978,&local_58);
    }
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
LAB_1417f8566:
    uVar7 = uVar7 + 1;
    if (uVar7 == 0x100) {
      if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1417f9218 FUN_1417f9218 body=29 status=ok
// SIG undefined FUN_1417f9218(void)

undefined8 FUN_1417f9218(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f9236 FUN_1417f9236 body=370 status=ok
// SIG undefined FUN_1417f9236(void)

void FUN_1417f9236(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417f92bf;
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
LAB_1417f92bf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,4);
  return;
}



// FUNCTION 1417f93a8 FUN_1417f93a8 body=235 status=ok
// SIG undefined FUN_1417f93a8(void)

undefined8 FUN_1417f93a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  void *_Src;
  undefined8 *puVar7;
  int *piVar8;
  
  if (param_4 != 0) {
    piVar8 = (int *)(param_3 + 0x20);
    puVar7 = (undefined8 *)(param_2 + 0x18);
    do {
      puVar7[-3] = *(undefined8 *)(piVar8 + -8);
      uVar4 = *(undefined8 *)(piVar8 + -6);
      lVar5 = *(longlong *)(piVar8 + -4);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)puVar7[-1];
      puVar7[-2] = uVar4;
      puVar7[-1] = lVar5;
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
      if ((int *)(puVar7 + -3) != piVar8 + -8) {
        iVar3 = *piVar8;
        _Src = *(void **)(piVar8 + -2);
        *(int *)(puVar7 + 1) = iVar3;
        if (iVar3 == 0 && *(int *)((longlong)puVar7 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar7,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar7,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      *(short *)(puVar7 + 2) = (short)piVar8[2];
      piVar8 = piVar8 + 0xc;
      puVar7 = puVar7 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1417f9494 FUN_1417f9494 body=91 status=ok
// SIG undefined FUN_1417f9494(void)

longlong FUN_1417f9494(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x2a0);
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FUN_144734080(lVar2);
    FUN_1400020a8(lVar2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417f94f0 FUN_1417f94f0 body=353 status=ok
// SIG undefined FUN_1417f94f0(void)

void FUN_1417f94f0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417f9575;
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
LAB_1417f9575:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417f9652 FUN_1417f9652 body=48 status=ok
// SIG undefined FUN_1417f9652(void)

void FUN_1417f9652(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1417f9682 FUN_1417f9682 body=170 status=ok
// SIG undefined FUN_1417f9682(void)

int FUN_1417f9682(longlong *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *param_1;
  iVar3 = (int)param_1[1];
  lVar7 = (longlong)iVar3;
  if (lVar7 != 0) {
    uVar5 = 0;
    do {
      if ((*(double *)(lVar6 + uVar5) == *param_2) &&
         (!NAN(*(double *)(lVar6 + uVar5)) && !NAN(*param_2))) {
        dVar2 = *(double *)(lVar6 + 8 + uVar5);
        if ((dVar2 == param_2[1]) && (!NAN(dVar2) && !NAN(param_2[1]))) {
          dVar2 = *(double *)(lVar6 + 0x10 + uVar5);
          if ((dVar2 == param_2[2]) && (!NAN(dVar2) && !NAN(param_2[2]))) {
            iVar4 = (int)(uVar5 >> 3) * -0x55555555;
            if (iVar4 != -1) {
              return iVar4;
            }
            break;
          }
        }
      }
      uVar5 = uVar5 + 0x18;
    } while (lVar7 * 0x18 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_1403e3958(param_1,iVar3);
    lVar6 = *param_1;
  }
  *(double *)(lVar6 + 0x10 + lVar7 * 0x18) = param_2[2];
  dVar2 = param_2[1];
  pdVar1 = (double *)(lVar6 + lVar7 * 0x18);
  *pdVar1 = *param_2;
  pdVar1[1] = dVar2;
  return iVar3;
}



// FUNCTION 1417f9731 FUN_1417f9731 body=49 status=ok
// SIG undefined FUN_1417f9731(void)

longlong FUN_1417f9731(void)

{
  if (DAT_14cb0f440 == 0) {
    FUN_14073dd9a(&DAT_14cb0f440,&PTR_LAB_14aafbcb8);
  }
  return DAT_14cb0f440;
}


