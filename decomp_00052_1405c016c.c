// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1405c016c FUN_1405c016c body=314 status=ok
// SIG undefined FUN_1405c016c(void)

uint FUN_1405c016c(uint *param_1,uint param_2,undefined2 param_3,undefined4 param_4,
                  undefined4 param_5,byte param_6,undefined8 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = **(uint **)(param_1 + 4);
  uVar7 = (ulonglong)uVar1;
  if (param_2 <= *(uint *)(*(longlong *)(param_1 + 6) + 4 + uVar7 * 8)) {
    return 0xffffffff;
  }
  lVar4 = *(longlong *)(param_1 + 10);
  lVar8 = (longlong)
          (int)(((uVar1 >> 0x10 & 0xff) * param_1[0xf] + (uVar1 >> 8 & 0xff)) * param_1[0xe] +
               (uVar1 & 0xff));
  if ((*(byte *)(lVar4 + 6 + lVar8 * 8) & 2) == 0) {
    *param_7 = 0;
  }
  else {
    *param_7 = *(undefined8 *)(lVar4 + lVar8 * 8);
    param_1[0x12] = param_1[0x12] - 1;
  }
  *(undefined2 *)(lVar4 + 4 + lVar8 * 8) = param_3;
  *(undefined4 *)(lVar4 + lVar8 * 8) = param_4;
  *(ushort *)(lVar4 + 6 + lVar8 * 8) =
       (*(ushort *)(lVar4 + 6 + lVar8 * 8) & 0xfffc) + (ushort)param_6 + 2;
  if (param_6 == 0) {
    *(ulonglong *)(*(longlong *)(param_1 + 6) + uVar7 * 8) = CONCAT44(param_2,param_5);
    iVar6 = *(int *)(*(longlong *)(param_1 + 8) + uVar7 * 4);
    if ((iVar6 != 0) &&
       (CONCAT44(param_2,param_5) <
        *(ulonglong *)
         (*(longlong *)(param_1 + 6) +
         (ulonglong)*(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)(iVar6 - 1U >> 1) * 4) * 8)))
    {
      FUN_14071c5fe(param_1);
      goto LAB_1405c0234;
    }
  }
  else {
    puVar5 = *(uint **)(param_1 + 4);
    uVar2 = *puVar5;
    uVar3 = *param_1;
    *param_1 = uVar3 - 1;
    *puVar5 = puVar5[uVar3 - 1];
    *(undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)**(uint **)(param_1 + 4) * 4) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 4) = 0xffffffff;
    iVar6 = 0;
  }
  FUN_1405c02a6(param_1,iVar6);
LAB_1405c0234:
  param_1[0x12] = param_1[0x12] + 1;
  return uVar1;
}



// FUNCTION 1405c02a6 FUN_1405c02a6 body=189 status=ok
// SIG undefined FUN_1405c02a6(void)

void FUN_1405c02a6(uint *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = param_2 * 2 + 1;
  uVar4 = *param_1;
  if (uVar5 < uVar4) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)param_2 * 4);
    uVar7 = param_2;
    do {
      uVar8 = uVar7 * 2 + 2;
      lVar2 = *(longlong *)(param_1 + 4);
      lVar3 = *(longlong *)(param_1 + 6);
      uVar6 = uVar5;
      if ((uVar8 < uVar4) &&
         (*(ulonglong *)(lVar3 + (ulonglong)*(uint *)(lVar2 + (ulonglong)uVar8 * 4) * 8) <=
          *(ulonglong *)(lVar3 + (ulonglong)*(uint *)(lVar2 + (ulonglong)uVar5 * 4) * 8))) {
        uVar6 = uVar8;
      }
      uVar4 = *(uint *)(lVar2 + (ulonglong)uVar6 * 4);
      if (*(ulonglong *)(lVar3 + (ulonglong)uVar1 * 8) <=
          *(ulonglong *)(lVar3 + (ulonglong)uVar4 * 8)) break;
      *(uint *)(lVar2 + (ulonglong)uVar7 * 4) = uVar4;
      *(uint *)(*(longlong *)(param_1 + 8) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar7 * 4) * 4) = uVar7;
      uVar5 = uVar6 * 2 + 1;
      uVar4 = *param_1;
      uVar7 = uVar6;
    } while (uVar5 < uVar4);
    if (uVar7 != param_2) {
      *(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar7 * 4) = uVar1;
      *(uint *)(*(longlong *)(param_1 + 8) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar7 * 4) * 4) = uVar7;
    }
  }
  return;
}



// FUNCTION 1405c0364 FUN_1405c0364 body=69 status=ok
// SIG undefined FUN_1405c0364(void)

void FUN_1405c0364(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1401fc455(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1405c03aa(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1405c03aa FUN_1405c03aa body=225 status=ok
// SIG undefined FUN_1405c03aa(void)

void FUN_1405c03aa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
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
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 1405c048c FUN_1405c048c body=52 status=ok
// SIG undefined FUN_1405c048c(void)

undefined8 FUN_1405c048c(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x108) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x13c8) != 0)) {
    uVar1 = FUN_1405c052c();
    uVar1 = FUN_1405c04c0(uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1405c04c0 FUN_1405c04c0 body=49 status=ok
// SIG undefined FUN_1405c04c0(void)

longlong FUN_1405c04c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_1405c04f2();
    cVar1 = FUN_1448093f4(param_1,uVar2);
    lVar3 = 0;
    if (cVar1 != '\0') {
      lVar3 = param_1;
    }
  }
  return lVar3;
}



// FUNCTION 1405c04f2 FUN_1405c04f2 body=57 status=ok
// SIG undefined FUN_1405c04f2(void)

void FUN_1405c04f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f540 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f540 = FUN_140002ddd(FUN_1465408fe,uVar1,L"TaggedAnimDef_GbxGame");
  }
  return;
}



// FUNCTION 1405c052c FUN_1405c052c body=151 status=ok
// SIG undefined FUN_1405c052c(void)

void FUN_1405c052c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x98);
  if (lVar4 == 0) {
    uVar3 = FUN_145723f28();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x98) = lVar4;
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x90));
    }
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    return;
  }
  return;
}



// FUNCTION 1405c05c4 FUN_1405c05c4 body=468 status=ok
// SIG undefined FUN_1405c05c4(void)

undefined8 FUN_1405c05c4(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x118);
  if ((lVar4 == 0) || (lVar1 = *(longlong *)(param_1 + 0xf0), lVar1 == 0)) {
LAB_1405c0781:
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x3c) == '\x01') {
      cVar2 = FUN_1405c0798(*(undefined8 *)(param_1 + 0x268),1);
      if ((cVar2 == '\0') &&
         (cVar2 = FUN_1405c07f8(*(undefined8 *)(param_1 + 0x268),1), cVar2 == '\0'))
      goto LAB_1405c0781;
    }
    else if (*(char *)(param_1 + 0x3c) == '\0') {
      if (*(char *)(lVar4 + 0x348) == '\0') goto LAB_1405c0781;
      if (*(char *)(lVar4 + 0x348) == '\x04') {
        if ((*(int *)(lVar4 + 0x1e0) < 1) &&
           ((0 < *(int *)(lVar4 + 0x1f8) || (*(int *)(lVar4 + 0x368) != 0)))) goto LAB_1405c06de;
      }
      else if (*(int *)(lVar4 + 0x1e0) < 1) {
LAB_1405c06de:
        if ((*(int *)(lVar4 + 0x1f8) < 1) && (*(int *)(lVar4 + 0x368) == 0)) goto LAB_1405c0781;
      }
      if (*(char *)(lVar1 + 0x348) == '\0') goto LAB_1405c0781;
      if (*(char *)(lVar1 + 0x348) == '\x04') {
        if ((*(int *)(lVar1 + 0x1e0) < 1) &&
           ((0 < *(int *)(lVar1 + 0x1f8) || (*(int *)(lVar1 + 0x368) != 0)))) goto LAB_1405c0713;
      }
      else if (*(int *)(lVar1 + 0x1e0) < 1) {
LAB_1405c0713:
        if ((*(int *)(lVar1 + 0x1f8) < 1) && (*(int *)(lVar1 + 0x368) == 0)) goto LAB_1405c0781;
      }
      if (0 < (longlong)*(int *)(param_1 + 0x88)) {
        lVar4 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar4);
          if (*(char *)(lVar1 + 0x348) == '\0') goto LAB_1405c0781;
          if (*(char *)(lVar1 + 0x348) == '\x04') {
            if ((*(int *)(lVar1 + 0x1e0) < 1) &&
               ((0 < *(int *)(lVar1 + 0x1f8) || (*(int *)(lVar1 + 0x368) != 0))))
            goto LAB_1405c0765;
          }
          else if (*(int *)(lVar1 + 0x1e0) < 1) {
LAB_1405c0765:
            if ((*(int *)(lVar1 + 0x1f8) < 1) && (*(int *)(lVar1 + 0x368) == 0)) goto LAB_1405c0781;
          }
          lVar4 = lVar4 + 0x58;
        } while ((longlong)*(int *)(param_1 + 0x88) * 0x58 - lVar4 != 0);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1405c0798 FUN_1405c0798 body=96 status=ok
// SIG undefined FUN_1405c0798(void)

bool FUN_1405c0798(longlong param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  
  if (param_2 == '\0') {
    if (((*(char *)(param_1 + 0x348) == '\x04') && (*(int *)(param_1 + 0x1e0) < 1)) &&
       (*(int *)(param_1 + 0x1f8) < 1)) {
      return *(int *)(param_1 + 0x368) == 0;
    }
  }
  else if ((*(longlong *)(param_1 + 0x1c8) != 0) && (cVar1 = FUN_1405c0872(), cVar1 == '\0')) {
    bVar2 = FUN_14804ea16(*(undefined8 *)(param_1 + 0x1c8));
    return (bool)(bVar2 ^ 1);
  }
  return false;
}



// FUNCTION 1405c07f8 FUN_1405c07f8 body=121 status=ok
// SIG undefined FUN_1405c07f8(void)

ulonglong FUN_1405c07f8(longlong param_1,char param_2)

{
  char cVar1;
  ulonglong unaff_RSI;
  undefined7 uVar2;
  
  uVar2 = (undefined7)(unaff_RSI >> 8);
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x348) != '\0') {
      unaff_RSI = CONCAT71(uVar2,1);
      if ((*(int *)(param_1 + 0x1e0) < 1) && (*(int *)(param_1 + 0x1f8) < 1)) {
        unaff_RSI = CONCAT71(uVar2,*(int *)(param_1 + 0x368) != 0);
      }
      goto LAB_1405c081d;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      cVar1 = FUN_1405c0872();
      unaff_RSI = CONCAT71(uVar2,1);
      if (cVar1 != '\0') goto LAB_1405c081d;
      cVar1 = FUN_14804ea16(*(undefined8 *)(param_1 + 0x1c8));
      if (cVar1 != '\0') goto LAB_1405c086d;
    }
    unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
    cVar1 = FUN_143938162();
    if (cVar1 == '\0') goto LAB_1405c081d;
  }
LAB_1405c086d:
  unaff_RSI = 0;
LAB_1405c081d:
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 1405c0872 FUN_1405c0872 body=656 status=ok
// SIG undefined FUN_1405c0872(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1405c0872(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar10 = *(longlong *)(param_1 + 0x10);
  if (((lVar10 == 0) || ((~*(uint *)(lVar10 + 0x54) & 6) != 0)) ||
     (*(char *)(lVar10 + 0x50) != '\0')) {
LAB_1405c0a05:
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < *(int *)(param_1 + 0xb4)) {
      uVar11 = 0;
      iVar2 = DAT_14cb2f758;
      do {
        puVar1 = *(ulonglong **)(*(longlong *)(param_1 + 0x10) + 0x28);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < iVar2) &&
           (FUN_144b3d300(&DAT_14cb2f758), iVar2 = DAT_14cb2f758, DAT_14cb2f758 == -1)) {
          FUN_146087666();
          FUN_140db5666(&DAT_14cb2f6b0,3,&DAT_14cb2f648,L"FNiagaraShader",
                        L"/Plugin/FX/Niagara/Private/NiagaraEmitterInstanceShader.usf",
                        L"SimulateMain",5,1,FUN_14804db30,FUN_14804db08,&LAB_14804db04,
                        &LAB_14804db00,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0);
          _DAT_14cb2f6b0 = &PTR_FUN_14ad4b7e0;
          atexit((_func_5014 *)&LAB_1438fa290);
          _Init_thread_footer(&DAT_14cb2f758);
          iVar2 = DAT_14cb2f758;
        }
        uVar3 = puVar1[3];
        if ((uVar3 & 1) != 0) {
          uVar3 = (longlong)puVar1 + ((longlong)uVar3 >> 0x18) + 0x18;
        }
        uVar5 = puVar1[5];
        if ((uVar5 & 1) != 0) {
          uVar5 = (longlong)puVar1 + ((longlong)uVar5 >> 0x18) + 0x28;
        }
        uVar6 = puVar1[1];
        if ((uVar6 & 1) != 0) {
          uVar6 = (longlong)puVar1 + ((longlong)uVar6 >> 0x18) + 8;
        }
        uVar8 = *puVar1;
        if ((uVar8 & 1) != 0) {
          uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar1;
        }
        uVar9 = (DAT_14cb2f6d8 ^ uVar11) * -0x622015f714c7d297;
        lVar10 = (uVar9 >> 0x2f ^ uVar11 ^ uVar9) * -0x622015f714c7d297;
        uVar7 = *(uint *)(uVar8 + (ulonglong)
                                  ((uint)puVar1[2] &
                                   ((uint)((ulonglong)lVar10 >> 0x2f) ^ (uint)lVar10) * 0x2d69 &
                                  0xffff) * 4);
        if (uVar7 == 0xffffffff) goto LAB_1405c0a05;
        while ((uVar8 = (ulonglong)uVar7, *(ulonglong *)(uVar3 + uVar8 * 8) != DAT_14cb2f6d8 ||
               (uVar11 != *(uint *)(uVar5 + uVar8 * 4)))) {
          uVar7 = *(uint *)(uVar6 + uVar8 * 4);
          if (uVar7 == 0xffffffff) goto LAB_1405c0a05;
        }
        uVar3 = puVar1[7];
        if ((uVar3 & 1) != 0) {
          uVar3 = (longlong)(puVar1 + 7) + ((longlong)uVar3 >> 0x18);
        }
        uVar5 = *(ulonglong *)(uVar3 + (longlong)(int)uVar7 * 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = ((longlong)uVar5 >> 0x18) + uVar3 + (longlong)(int)uVar7 * 8;
        }
        if (uVar5 == 0) goto LAB_1405c0a05;
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < (longlong)*(int *)(param_1 + 0xb4));
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1405c0b02 FUN_1405c0b02 body=494 status=ok
// SIG undefined FUN_1405c0b02(void)

void FUN_1405c0b02(longlong *param_1,longlong param_2,undefined4 param_3,uint param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405c0cf2();
  *(undefined4 *)(param_1 + 4) = param_3;
  uVar8 = 0x10;
  if (0x10 < param_4) {
    uVar8 = param_4;
  }
  *(uint *)((longlong)param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 5) = param_5;
  plVar1 = param_1 + 1;
  if (param_1[1] != 0) {
    local_48 = *(undefined8 *)(param_1[1] + 0x28);
    plVar10 = (longlong *)FUN_1449ed75e(param_2 + 0x250);
    if ((plVar10 != (longlong *)0x0) && (*plVar10 != 0)) {
      puVar6 = (undefined8 *)*plVar1;
      if (puVar6 != (undefined8 *)0x0) {
        *plVar1 = 0;
        LOCK();
        piVar2 = (int *)(puVar6 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      puVar6 = (undefined8 *)*param_1;
      if (puVar6 != (undefined8 *)0x0) {
        *param_1 = 0;
        LOCK();
        piVar2 = (int *)(puVar6 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      puVar6 = (undefined8 *)param_1[2];
      if (puVar6 != (undefined8 *)0x0) {
        param_1[2] = 0;
        LOCK();
        piVar2 = (int *)(puVar6 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    }
  }
  uVar3 = (ulonglong)
          (*(int *)((longlong)param_1 + 0x24) + -1 + (uint)(*(int *)((longlong)param_1 + 0x24) == 0)
          ) * 2 + 1;
  lVar7 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  local_38 = 0;
  local_40 = 0x10110;
  local_48 = CONCAT44((uint)(1 << ((byte)lVar7 & 0x1f)) >> 2,4);
  if (DAT_14caff730 != 0) {
    local_40 = 0x10112;
  }
  FUN_1449ed2ff(&local_48,plVar1,L"Nanite.PageUploadBuffer",1);
  lVar7 = *(longlong *)(param_2 + 0x18);
  local_58 = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar5 = *(undefined8 *)(param_1[1] + 0x28);
  cVar4 = *(char *)(lVar7 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(lVar7,1);
  }
  local_50 = 1;
  lVar9 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar7,uVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(lVar7,0);
  }
  param_1[3] = lVar9;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c0cf2 FUN_1405c0cf2 body=220 status=ok
// SIG undefined FUN_1405c0cf2(void)

void FUN_1405c0cf2(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x44) < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_147ccfd14(param_1 + 0x38);
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    FUN_1449ed11e(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) < 0) {
      FUN_1401ad22e(param_1 + 0x48,0);
    }
    *(undefined8 *)(param_1 + 0x78) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0xa4) < 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_14480809c(param_1 + 0x98,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (-1 < *(int *)(param_1 + 0xb4)) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_147ccfd44(param_1 + 0xa8);
  return;
}



// FUNCTION 1405c0ddc FUN_1405c0ddc body=158 status=ok
// SIG undefined FUN_1405c0ddc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1405c0ddc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b392a10;
  if (param_1[8] != 0) {
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



// FUNCTION 1405c0e8c FUN_1405c0e8c body=131 status=ok
// SIG undefined FUN_1405c0e8c(void)

void FUN_1405c0e8c(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_2 + 0x388);
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x388);
    *(uint *)(param_1 + 0x388) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x38c) - iVar2) < uVar1) {
      FUN_14052e0a0(param_1,iVar2);
    }
    lVar4 = *(longlong *)(param_2 + 0x380);
    if (*(longlong *)(param_2 + 0x380) == 0) {
      lVar4 = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x380);
    if (*(longlong *)(param_1 + 0x380) == 0) {
      lVar3 = param_1;
    }
    FUN_1403489b5((longlong)iVar2 * 0x38 + lVar3,lVar4,uVar1);
    return;
  }
  return;
}



// FUNCTION 1405c0f10 FUN_1405c0f10 body=587 status=ok
// SIG undefined FUN_1405c0f10(void)

void FUN_1405c0f10(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  double dVar14;
  double *pdVar15;
  undefined4 uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double local_60;
  
  dVar14 = (double)(DAT_14c707940 ^ (ulonglong)auStack_b8);
  plVar3 = *(longlong **)(param_1 + -0x3710);
  local_60 = dVar14;
  if (plVar3 == (longlong *)0x0) {
    lVar4 = *(longlong *)(param_1 + -0x3908);
    if (lVar4 == 0) {
      local_68 = DAT_14c846508;
      local_78 = (undefined4)DAT_14c8464f8;
      uStack_74 = DAT_14c8464f8._4_4_;
      uStack_70 = (undefined4)DAT_14c846500;
      uStack_6c = DAT_14c846500._4_4_;
    }
    else {
      dVar7 = *(double *)(lVar4 + 0x240);
      dVar8 = *(double *)(lVar4 + 0x248);
      dVar9 = *(double *)(lVar4 + 0x250);
      dVar10 = *(double *)(lVar4 + 600);
      pdVar15 = *(double **)(lVar4 + 0x228);
      uVar16 = 0;
      local_98 = dVar7;
      uStack_90 = dVar8;
      local_88 = dVar9;
      uStack_80 = dVar10;
      if (pdVar15 == (double *)0x0) {
        uVar16 = 0x40;
        pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
        dVar14 = DAT_14c8463d8;
        *pdVar15 = DAT_14c8463d0;
        pdVar15[1] = dVar14;
        dVar14 = DAT_14c8463e8;
        pdVar15[2] = DAT_14c8463e0;
        pdVar15[3] = dVar14;
        dVar14 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar15[5] = dVar14;
        dVar14 = DAT_14c846508;
        pdVar15[6] = DAT_14c846508;
        *(double **)(lVar4 + 0x228) = pdVar15;
      }
      auVar5._8_4_ = (int)-(ulonglong)(dVar8 != pdVar15[1]);
      auVar5._0_8_ = -(ulonglong)(dVar7 != *pdVar15);
      auVar5._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar15[1]) >> 0x20);
      iVar13 = movmskpd(SUB84(dVar14,0),auVar5);
      auVar6._8_4_ = (int)-(ulonglong)(dVar10 != pdVar15[3]);
      auVar6._0_8_ = -(ulonglong)(dVar9 != pdVar15[2]);
      auVar6._12_4_ = (int)(-(ulonglong)(dVar10 != pdVar15[3]) >> 0x20);
      uVar17 = movmskpd(uVar16,auVar6);
      if ((uVar17 & 0x3fffffff) != 0 || iVar13 != 0) {
        *(undefined4 *)(pdVar15 + 2) = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar15 + 0x14) = local_88._4_4_;
        *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_80._4_4_;
        *(undefined4 *)pdVar15 = (undefined4)local_98;
        *(undefined4 *)((longlong)pdVar15 + 4) = local_98._4_4_;
        *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_90._4_4_;
        FUN_1448052ee(&local_98,&local_78);
        pdVar15[6] = local_68;
        pdVar15[4] = (double)CONCAT44(uStack_74,local_78);
        pdVar15[5] = (double)CONCAT44(uStack_6c,uStack_70);
      }
      local_68 = pdVar15[6];
      local_78 = *(undefined4 *)(pdVar15 + 4);
      uStack_74 = *(undefined4 *)((longlong)pdVar15 + 0x24);
      uStack_70 = *(undefined4 *)(pdVar15 + 5);
      uStack_6c = *(undefined4 *)((longlong)pdVar15 + 0x2c);
    }
  }
  else {
    (**(code **)(*plVar3 + 0x680))(plVar3,&local_78);
  }
  plVar3 = *(longlong **)(param_1 + 0x3b10);
  if (plVar3 != (longlong *)0x0) {
    iVar13 = (int)plVar3[1];
    do {
      if (iVar13 == 0) goto LAB_1405c0fb4;
      LOCK();
      iVar11 = (int)plVar3[1];
      bVar18 = iVar13 == iVar11;
      if (bVar18) {
        *(int *)(plVar3 + 1) = iVar13 + 1;
        iVar11 = iVar13;
      }
      iVar13 = iVar11;
      UNLOCK();
    } while (!bVar18);
    if (*(longlong *)(param_1 + 0x3b08) != 0) {
      FUN_1405c11a2(*(longlong *)(param_1 + 0x3b08),param_2,&local_78,param_3);
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
LAB_1405c0fb4:
  *(double *)(param_2 + 0xa8) = local_68;
  *(ulonglong *)(param_2 + 0x98) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_2 + 0xa0) = CONCAT44(uStack_6c,uStack_70);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x60);
  cVar12 = (**(code **)(*(longlong *)(param_1 + -0x3ad0) + 0x798))((longlong *)(param_1 + -0x3ad0));
  if ((cVar12 != '\0') && (*(char *)(param_1 + -0x3958) == '\x02')) {
    FUN_1405c115c(param_1 + 0x2618);
  }
  if (((ulonglong)local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405c115c FUN_1405c115c body=70 status=ok
// SIG undefined FUN_1405c115c(void)

void FUN_1405c115c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x20 + lVar3) != 0) {
        FUN_1405c12ca();
      }
      lVar3 = lVar3 + 0x170;
    } while ((longlong)iVar1 * 0x170 - lVar3 != 0);
  }
  return;
}



// FUNCTION 1405c11a2 FUN_1405c11a2 body=296 status=ok
// SIG undefined FUN_1405c11a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405c11a2(longlong param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  
  if (param_2 != 0) {
    dVar11 = *(double *)(param_2 + 0x60);
    dVar1 = *(double *)(param_2 + 0x78);
    dVar2 = *(double *)(param_2 + 0x58);
    dVar6 = *(double *)(param_2 + 0x70);
    *(double *)(param_1 + 0x5a0) = *(double *)(param_2 + 0x50) - *(double *)(param_2 + 0x68);
    *(double *)(param_1 + 0x5a8) = dVar2 - dVar6;
    *(double *)(param_1 + 0x5b0) = dVar11 - dVar1;
    dVar2 = param_3[2] - *(double *)(param_2 + 0xa8);
    dVar6 = param_3[1] - *(double *)(param_2 + 0xa0);
    dVar14 = *param_3 - *(double *)(param_2 + 0x98);
    dVar11 = (double)DAT_1499387d0;
    dVar1 = DAT_1499387d0._8_8_;
    auVar7._8_8_ = dVar6;
    auVar7._0_8_ = dVar14;
    auVar8 = divpd(auVar7,_DAT_1499387d0);
    auVar3._0_8_ = dVar2 / 360.0;
    auVar3._8_8_ = 0;
    auVar9 = roundpd(auVar8,auVar8,3);
    auVar8 = roundpd(auVar3,auVar3,3);
    auVar15._0_8_ = dVar2 - auVar8._0_8_ * dVar11;
    auVar15._8_8_ = 0.0 - auVar8._8_8_ * dVar1;
    dVar14 = dVar14 - auVar9._0_8_ * dVar11;
    dVar6 = dVar6 - auVar9._8_8_ * dVar1;
    auVar13._0_8_ = dVar14 + dVar11;
    auVar13._8_8_ = dVar6 + dVar1;
    auVar12._0_8_ = dVar11 + auVar15._0_8_;
    auVar12._8_8_ = dVar1 + auVar15._8_8_;
    auVar9._8_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar9._0_8_ = -(ulonglong)(0.0 <= dVar14);
    auVar8._8_8_ = dVar6;
    auVar8._0_8_ = dVar14;
    auVar3 = blendvpd(auVar13,auVar8,auVar9);
    auVar4._8_8_ = -(ulonglong)(0.0 <= auVar15._8_8_);
    auVar4._0_8_ = -(ulonglong)(0.0 <= auVar15._0_8_);
    auVar8 = blendvpd(auVar12,auVar15,auVar4);
    auVar10._0_8_ = auVar3._0_8_ + -360.0;
    auVar10._8_8_ = auVar3._8_8_ + -360.0;
    auVar5._8_8_ = -(ulonglong)(180.0 < auVar3._8_8_);
    auVar5._0_8_ = -(ulonglong)(180.0 < auVar3._0_8_);
    auVar3 = blendvpd(auVar3,auVar10,auVar5);
    dVar11 = auVar8._0_8_;
    *(undefined1 (*) [16])(param_1 + 0x5b8) = auVar3;
    *(ulonglong *)(param_1 + 0x5c8) =
         ~-(ulonglong)(180.0 < dVar11) & (ulonglong)dVar11 |
         (ulonglong)(dVar11 + -360.0) & -(ulonglong)(180.0 < dVar11);
  }
  return;
}



// FUNCTION 1405c12ca FUN_1405c12ca body=1145 status=ok
// SIG undefined FUN_1405c12ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405c12ca(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_128 [44];
  float local_fc;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((char)param_1[0x2f] != '\x03') {
    lVar10 = FUN_1447210f0();
    local_fc = (float)*(double *)(lVar10 + 0x6d0);
    plVar2 = (longlong *)param_1[0x36];
    dVar14 = 0.0;
    dVar4 = 0.0;
    dVar5 = 0.0;
    if (plVar2 != (longlong *)0x0) {
      bVar1 = *(byte *)((longlong)param_1 + 0xbd9);
      lVar10 = 0xd18;
      dVar14 = 0.0;
      if ((((int)(uint)bVar1 < (int)param_1[0x1a4]) ||
          (lVar10 = 0xd08, dVar4 = 0.0, dVar5 = 0.0, (int)(uint)bVar1 < (int)param_1[0x1a2])) &&
         (lVar10 = *(longlong *)(*(longlong *)((longlong)param_1 + lVar10) + (ulonglong)bVar1 * 8),
         dVar4 = 0.0, dVar5 = 0.0, lVar10 != 0)) {
        lVar10 = *(longlong *)(lVar10 + 0x48);
        if (lVar10 == 0) {
          uVar21 = 0;
          uVar22 = 0;
          uVar12 = 0;
          uVar23 = 0;
          uVar24 = 0;
          uVar25 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(lVar10 + 0x260);
          uVar23 = *(undefined4 *)(lVar10 + 0x264);
          uVar24 = *(undefined4 *)(lVar10 + 0x268);
          uVar25 = *(undefined4 *)(lVar10 + 0x26c);
          uVar21 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
          uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
        }
        (**(code **)(*plVar2 + 0x588))(plVar2,local_d8,&local_f8);
        auVar15._8_8_ = dStack_f0;
        auVar15._0_8_ = local_f8;
        auVar15 = divpd(auVar15,_DAT_1499387d0);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = local_e8;
        auVar18 = divpd(auVar18,_DAT_1499387d0);
        auVar15 = roundpd(auVar15,auVar15,3);
        auVar18 = roundpd(auVar18,auVar18,3);
        dVar6 = (local_f8 - auVar15._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar19 = (dStack_f0 - auVar15._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar20 = (local_e8 - auVar18._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar8 = (0.0 - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar4 = sin(dVar6);
        dVar5 = sin(dVar19);
        dVar14 = sin(dVar20);
        sin(dVar8);
        dVar6 = cos(dVar6);
        dVar19 = cos(dVar19);
        dVar20 = cos(dVar20);
        cos(dVar8);
        dVar8 = -(dVar19 * dVar4 * dVar14) + dVar5 * dVar6 * dVar20;
        dVar7 = dVar5 * dVar4 * dVar14 + dVar19 * dVar6 * dVar20;
        dVar9 = (double)CONCAT44(uVar22,uVar21) - local_c8;
        dVar13 = (double)CONCAT44(uVar25,uVar24) - (double)local_d8._8_8_;
        dVar17 = dVar4 * dVar5 * dVar20 - dVar6 * dVar19 * dVar14;
        dVar19 = -(dVar4 * dVar19 * dVar20) - dVar6 * dVar5 * dVar14;
        dVar4 = (double)CONCAT44(uVar23,uVar12) - (double)local_d8._0_8_;
        dVar20 = dVar4 * dVar19 - dVar17 * dVar13;
        dVar5 = dVar9 * dVar17 - dVar8 * dVar4;
        dVar5 = dVar5 + dVar5;
        dVar20 = dVar20 + dVar20;
        dVar6 = dVar13 * dVar8 - dVar19 * dVar9;
        dVar6 = dVar6 + dVar6;
        dVar14 = (dVar19 * dVar6 - dVar17 * dVar5) + dVar7 * dVar20 + dVar9;
        dVar4 = (dVar5 * dVar8 - dVar20 * dVar19) + dVar7 * dVar6 + dVar4;
        dVar5 = (dVar17 * dVar20 - dVar6 * dVar8) + dVar7 * dVar5 + dVar13;
      }
    }
    uVar12 = (undefined4)((ulonglong)dVar5 >> 0x20);
    fVar16 = (float)((dVar14 - (double)param_1[0x189]) * (dVar14 - (double)param_1[0x189]) +
                    (dVar4 - (double)param_1[0x187]) * (dVar4 - (double)param_1[0x187]) +
                    (dVar5 - (double)param_1[0x188]) * (dVar5 - (double)param_1[0x188]));
    if ((100.0 < fVar16) ||
       ((1.0 < fVar16 &&
        (*(float *)(param_1 + 0x18a) <= local_fc && local_fc != *(float *)(param_1 + 0x18a))))) {
      *(float *)(param_1 + 0x18a) = local_fc + 1.0;
      auVar3._8_4_ = SUB84(dVar5,0);
      auVar3._0_8_ = dVar4;
      auVar3._12_4_ = uVar12;
      *(undefined1 (*) [16])(param_1 + 0x187) = auVar3;
      param_1[0x189] = (longlong)dVar14;
      local_d8._8_4_ = SUB84(dVar5,0);
      local_d8._0_8_ = dVar4;
      local_d8._12_4_ = uVar12;
      local_c8 = dVar14;
      uVar11 = FUN_14477b072(param_1,DAT_14cb93988);
      (**(code **)(*param_1 + 0x248))(param_1,uVar11,local_d8);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405c1744 FUN_1405c1744 body=193 status=ok
// SIG undefined FUN_1405c1744(void)

void FUN_1405c1744(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    local_30 = lVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    lVar1 = FUN_1405c1806(param_1,&local_30);
    local_78 = *(undefined4 *)(lVar1 + 0x38);
    uStack_74 = *(undefined4 *)(lVar1 + 0x3c);
    uStack_70 = *(undefined4 *)(lVar1 + 0x40);
    uStack_6c = *(undefined4 *)(lVar1 + 0x44);
    local_68 = *(undefined4 *)(lVar1 + 0x48);
    uStack_64 = *(undefined4 *)(lVar1 + 0x4c);
    uStack_60 = *(undefined4 *)(lVar1 + 0x50);
    uStack_5c = *(undefined4 *)(lVar1 + 0x54);
    local_88 = 0;
    FUN_1402a4dc8(param_1,&local_50,param_2 + 0x10);
    *(undefined4 *)(lVar1 + 0x48) = local_40;
    *(undefined4 *)(lVar1 + 0x4c) = uStack_3c;
    *(undefined4 *)(lVar1 + 0x50) = uStack_38;
    *(undefined4 *)(lVar1 + 0x54) = uStack_34;
    *(undefined4 *)(lVar1 + 0x38) = local_50;
    *(undefined4 *)(lVar1 + 0x3c) = uStack_4c;
    *(undefined4 *)(lVar1 + 0x40) = uStack_48;
    *(undefined4 *)(lVar1 + 0x44) = uStack_44;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c1806 FUN_1405c1806 body=573 status=ok
// SIG undefined FUN_1405c1806(void)

longlong FUN_1405c1806(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [24];
  longlong local_98;
  longlong local_88;
  ulonglong *local_50;
  undefined1 *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = *param_2;
  if ((uVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar3);
  }
  if ((uVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar3);
  }
  if ((uVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar3);
  }
  plVar1 = (longlong *)(param_1 + 0x5a0);
  if (*(int *)(param_1 + 0x5a8) != *(int *)(param_1 + 0x5d4)) {
    uVar7 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    lVar8 = param_1 + 0x5d8;
    if (*(longlong *)(param_1 + 0x5e0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x5e0);
    }
    iVar2 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x5e8) - 1U & (uVar7 >> 0x10 ^ uVar7)) *
                             4);
    bVar6 = DAT_14c950c29;
    while (iVar2 != -1) {
      if ((uVar3 != 0 & bVar6) == 1) {
        FUN_1456cec3c(uVar3);
        bVar6 = DAT_14c950c29;
      }
      lVar8 = (longlong)iVar2 * 0x70;
      uVar4 = *(ulonglong *)(*plVar1 + lVar8);
      if (((bVar6 & 1) != 0) && (uVar4 != 0)) {
        FUN_1456cec3c(uVar4);
        bVar6 = DAT_14c950c29;
      }
      if ((uVar3 != 0 & bVar6) == 1) {
        FUN_1456cec3c(uVar3);
        bVar6 = DAT_14c950c29;
      }
      lVar5 = *plVar1;
      if (uVar4 == uVar3) {
        if (lVar5 + lVar8 != 0) {
          lVar5 = lVar5 + lVar8;
          goto LAB_1405c199a;
        }
        break;
      }
      iVar2 = *(int *)(lVar5 + 0x68 + lVar8);
    }
  }
  FUN_1402a4eda(local_b0,*param_2);
  local_50 = param_2;
  local_48 = local_b0;
  FUN_1402a5614(plVar1,&local_3c);
  lVar5 = *plVar1;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar5 = lVar5 + (longlong)local_3c * 0x70;
LAB_1405c199a:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar5 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c1a44 FUN_1405c1a44 body=353 status=ok
// SIG undefined FUN_1405c1a44(void)

void FUN_1405c1a44(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405c1acb;
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
LAB_1405c1acb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1405c1ba6 FUN_1405c1ba6 body=179 status=ok
// SIG undefined FUN_1405c1ba6(void)

void FUN_1405c1ba6(longlong *param_1,longlong *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001405c1c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar4 = *param_2;
  lVar3 = param_2[1];
  iVar2 = *(int *)(lVar3 + 0x44);
  bVar1 = *(byte *)(lVar3 + 0x70);
  (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
  if (*(int *)(lVar4 + 8 + (longlong)iVar2) == 0) {
    lVar4 = 0;
  }
  else {
    puVar5 = (ulonglong *)(lVar4 + iVar2);
    if ((bVar1 & 1) == 0) {
      uVar6 = *puVar5;
    }
    else {
      uVar6 = *puVar5;
      if ((uVar6 & 1) != 0) {
        uVar6 = (longlong)puVar5 + ((longlong)uVar6 >> 0x18);
      }
    }
    lVar4 = (longlong)param_3 * (longlong)*(int *)(*(longlong *)(lVar3 + 0x78) + 0x34) + uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405c1c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_2[2] + 0x10))((longlong *)param_2[2],param_1,lVar4);
  return;
}



// FUNCTION 1405c1c5a FUN_1405c1c5a body=1145 status=ok
// SIG undefined FUN_1405c1c5a(void)

longlong FUN_1405c1c5a(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  size_t sVar4;
  longlong *plVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  wchar_t *_Str;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  code *local_130;
  undefined8 local_128;
  code *local_120;
  int local_10c;
  longlong local_108;
  longlong local_100 [2];
  wchar_t *local_f0;
  int local_e8;
  undefined8 local_e0 [16];
  undefined8 *local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (lVar7 == 0) {
    lVar7 = 0;
    lVar11 = 0;
  }
  else {
    puVar6 = *(undefined **)(lVar7 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      local_128 = FUN_1446ddbd2();
      local_120 = FUN_1403a682c;
      local_130 = (code *)0x0;
      local_138 = (undefined1 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar12 = puVar6 != (undefined *)0x0;
      if (puVar6 != &DAT_14c952a08 && bVar12) {
        do {
          puVar6 = *(undefined **)(puVar6 + 0x30);
          bVar12 = puVar6 != (undefined *)0x0;
          if (puVar6 == &DAT_14c952a08) break;
        } while (puVar6 != (undefined *)0x0);
      }
    }
    else {
      bVar12 = (*(ulonglong *)(puVar6 + 0x18) & DAT_14c952a10) != 0;
    }
    lVar11 = 0;
    if (bVar12) {
      lVar11 = lVar7;
    }
    lVar7 = *(longlong *)(param_1 + 0x18);
  }
  if (*(uint *)(lVar7 + 0x30) < 2) {
    lVar7 = *(int *)(lVar11 + 0x44) + param_3;
    uVar2 = *(ulonglong *)(lVar11 + 0x70);
    local_108 = param_3;
    (**(code **)(*param_2 + 0x28))(param_2);
    if (DAT_14cb90f60 != DAT_14cb90f8c) {
      uVar9 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      puVar6 = &DAT_14cb90f90;
      if (DAT_14cb90f98 != (undefined *)0x0) {
        puVar6 = DAT_14cb90f98;
      }
      iVar10 = *(int *)(puVar6 + (ulonglong)(DAT_14cb90fa0 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
      while (iVar10 != -1) {
        puVar1 = (ulonglong *)(DAT_14cb90f58 + (longlong)iVar10 * 0x18);
        if (*puVar1 == uVar2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            (*(code *)puVar1[1])(param_2,lVar7);
            param_3 = local_108;
            goto LAB_1405c1e11;
          }
          break;
        }
        iVar10 = (int)puVar1[2];
      }
    }
    local_10c = (**(code **)(*param_2 + 0x88))(param_2);
    local_e0[0] = *(undefined8 *)(uVar2 + 0x18);
    FUN_1400021e4(local_e0,&local_f0);
    _Str = local_f0;
    if (local_e8 == 0) {
      _Str = L"";
    }
    local_60 = (undefined8 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
    }
    else {
      sVar4 = wcslen(_Str);
      local_50 = FUN_14475aa65(0,_Str,sVar4 & 0xffffffff);
      uVar9 = local_50 + 1;
      puVar8 = (undefined8 *)0x0;
      if (0x80 < uVar9) {
        FUN_1446efa72(&local_60,0,uVar9,1);
        puVar8 = local_60;
      }
      local_58 = local_e0;
      if (puVar8 != (undefined8 *)0x0) {
        local_58 = puVar8;
      }
      FUN_14475a98a(local_58,uVar9,_Str,(int)sVar4 + 1);
    }
    (**(code **)(*param_2 + 0x10))(param_2,local_100,local_58,lVar7);
    param_3 = local_108;
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_100[0] != 0) {
      FUN_14475ab45(param_2,lVar7,uVar2,local_10c == 0);
      FUN_140066842(param_2,uVar2);
    }
    cohtml::TypeDescription::~TypeDescription((TypeDescription *)local_100);
    if (local_f0 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
LAB_1405c1e11:
    (**(code **)(*param_2 + 0x48))(param_2,lVar7);
  }
  else {
    plVar5 = (longlong *)FUN_1489e59be(param_1,param_3);
    *plVar5 = param_3;
    plVar5[1] = *(longlong *)(param_1 + 0x18);
    local_130 = FUN_143e9dc4a;
    local_138 = &LAB_143e9109a;
    cVar3 = (**(code **)(*param_2 + 0x158))(param_2,plVar5,FUN_1489e5b48,FUN_1489e5aaa);
    if (cVar3 == '\0') {
      (**(code **)(*param_2 + 0x160))
                (param_2,(longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x30));
      lVar7 = *(longlong *)(param_1 + 0x18);
      if (0 < *(int *)(lVar7 + 0x30)) {
        iVar10 = 0;
        do {
          FUN_1401e1be1(param_2,(longlong)*(int *)(lVar7 + 0x34) * (longlong)iVar10 +
                                *(int *)(lVar11 + 0x44) + param_3,*(undefined8 *)(lVar11 + 0x70));
          iVar10 = iVar10 + 1;
          lVar7 = *(longlong *)(param_1 + 0x18);
        } while (iVar10 < *(int *)(lVar7 + 0x30));
      }
      (**(code **)(*param_2 + 0x168))(param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c20d4 FUN_1405c20d4 body=681 status=ok
// SIG undefined FUN_1405c20d4(void)

longlong FUN_1405c20d4(longlong param_1,longlong *param_2,longlong param_3)

{
  void *_Src;
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  undefined *puVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  code *local_50;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar6 = 0;
  }
  else {
    puVar7 = *(undefined **)(lVar4 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = (code *)0x0;
      local_68 = (undefined1 *)0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
    if (DAT_14c963e40 == 0) {
      bVar8 = puVar7 != (undefined *)0x0;
      if (puVar7 != &DAT_14c963e38 && bVar8) {
        do {
          puVar7 = *(undefined **)(puVar7 + 0x30);
          bVar8 = puVar7 != (undefined *)0x0;
          if (puVar7 == &DAT_14c963e38) break;
        } while (puVar7 != (undefined *)0x0);
      }
    }
    else {
      bVar8 = (*(ulonglong *)(puVar7 + 0x18) & DAT_14c963e40) != 0;
    }
    lVar6 = 0;
    if (bVar8) {
      lVar6 = lVar4;
    }
    lVar4 = *(longlong *)(param_1 + 0x18);
  }
  if (1 < *(uint *)(lVar4 + 0x30)) {
    plVar2 = (longlong *)FUN_1489e9010(param_1,param_3);
    *plVar2 = param_3;
    plVar2[1] = *(longlong *)(param_1 + 0x18);
    local_60 = FUN_143ea1815;
    local_68 = &LAB_143e9109a;
    cVar1 = (**(code **)(*param_2 + 0x158))(param_2,plVar2,FUN_143ea19cf,FUN_143ea1bd5);
    if (cVar1 == '\0') {
      (**(code **)(*param_2 + 0x160))(param_2,(longlong)*(int *)(lVar6 + 0x30));
      if (0 < *(int *)(lVar6 + 0x30)) {
        piVar5 = (int *)(*(int *)(*(longlong *)(param_1 + 0x18) + 0x44) + param_3 + 8);
        lVar4 = 0;
        do {
          puVar3 = &DAT_149dfb77a;
          if (*piVar5 != 0) {
            puVar3 = *(undefined2 **)(piVar5 + -2);
          }
          (**(code **)(*param_2 + 0xd0))(param_2,puVar3);
          lVar4 = lVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (lVar4 < *(int *)(lVar6 + 0x30));
      }
      (**(code **)(*param_2 + 0x168))(param_2);
    }
    goto LAB_1405c21d7;
  }
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_3 + 8 + (longlong)*(int *)(lVar6 + 0x44));
  lVar4 = (longlong)local_40;
  _Src = *(void **)(param_3 + *(int *)(lVar6 + 0x44));
  if (lVar4 == 0) {
    local_3c = 0;
LAB_1405c21b5:
    puVar3 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar4 * 2);
    puVar3 = local_48;
    if (local_40 == 0) goto LAB_1405c21b5;
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar3);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1405c21d7:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1405c237e FUN_1405c237e body=373 status=ok
// SIG undefined FUN_1405c237e(void)

undefined8 *
FUN_1405c237e(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,float *param_7,undefined1 param_8,float param_9)

{
  byte bVar1;
  undefined8 unaff_RBX;
  float fVar2;
  float fVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_149f5fc00;
  local_60 = param_8;
  local_68 = param_2;
  FUN_1405c24f4(param_1,param_1 + 1,param_5);
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_78 = param_1[1];
  local_70 = *(undefined4 *)(param_1 + 2);
  local_58 = DAT_14c84635c;
  local_80 = 0;
  local_88 = 0x10;
  local_98 = param_3;
  local_90 = param_4;
  FUN_14025efd6(param_1 + 8,&local_58,param_6);
  param_1[8] = &PTR_FUN_149f57478;
  param_1[0xf] = 0x40dd0c55447a0000;
  param_1[0x10] = 0;
  fVar2 = param_7[1];
  if (param_9 <= param_7[1]) {
    fVar2 = param_9;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = *param_7;
  if (param_9 <= *param_7) {
    fVar3 = param_9;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  bVar1 = 1;
  if ((*(float *)(param_1 + 0xd) == fVar3) && (!NAN(*(float *)(param_1 + 0xd)) && !NAN(fVar3))) {
    bVar1 = -(*(float *)((longlong)param_1 + 0x6c) != fVar2) & 1;
  }
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | bVar1;
  *(float *)(param_1 + 0xd) = fVar3;
  *(float *)((longlong)param_1 + 0x6c) = fVar2;
  FUN_1405c3284(param_1,param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_8) & 0xffffffff);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c24f4 FUN_1405c24f4 body=544 status=ok
// SIG undefined FUN_1405c24f4(void)

undefined8
FUN_1405c24f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  int local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  int local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar8 = *(uint *)(param_3 + 1);
  if ((longlong)(int)uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_1405c2af6(&local_a8,uVar8);
    if (uVar8 < 4) {
      iVar6 = 1;
    }
    else {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_60 == 0) || (local_60 < iVar6)) {
      local_60 = iVar6;
      FUN_1405c2fea();
    }
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      piVar7 = (int *)*param_3;
      piVar1 = piVar7 + (longlong)*(int *)(param_3 + 1) * 3;
      do {
        iVar6 = *piVar7;
        iVar3 = piVar7[1];
        iVar4 = piVar7[2];
        if ((char)param_4[1] == '\x01') {
          lVar5 = *(longlong *)(*param_4 + 0x90);
          fVar2 = *(float *)(lVar5 + (longlong)iVar6 * 4);
          if (((((fVar2 != 0.0) || (NAN(fVar2))) ||
               (fVar2 = *(float *)(lVar5 + (longlong)iVar3 * 4), fVar2 != 0.0)) ||
              ((NAN(fVar2) || (fVar2 = *(float *)(lVar5 + (longlong)iVar4 * 4), fVar2 != 0.0)))) ||
             (NAN(fVar2))) goto LAB_1405c2609;
        }
        else {
LAB_1405c2609:
          local_ac = iVar4;
          if (iVar3 < iVar6) {
            local_b0 = iVar6;
            local_b4 = iVar3;
            if ((iVar4 < iVar6) && (local_ac = iVar6, local_b0 = iVar4, iVar4 < iVar3)) {
              local_b0 = iVar3;
              local_b4 = iVar4;
            }
          }
          else {
            local_b0 = iVar3;
            local_b4 = iVar6;
            if ((iVar4 < iVar3) && (local_ac = iVar3, local_b0 = iVar4, iVar4 < iVar6)) {
              local_b0 = iVar6;
              local_b4 = iVar4;
            }
          }
          FUN_1405c2716(&local_a8,local_b8,&local_b4,0);
        }
        piVar7 = piVar7 + 3;
      } while (piVar7 != piVar1);
    }
  }
  FUN_1405c2cc0(&local_a8,param_2);
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1405c2a3c(&local_a8);
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1405c2716 FUN_1405c2716 body=353 status=ok
// SIG undefined FUN_1405c2716(void)

undefined4 *
FUN_1405c2716(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405c2956(param_1,local_50);
  local_48[2] = *(uint *)(param_3 + 1);
  *(undefined8 *)local_48 = *param_3;
  local_48[3] = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = *local_48;
  uVar3 = (uVar3 >> 2) + 0x9e3779b9 + uVar3 * 0x40 + local_48[1] ^ uVar3;
  uVar3 = (uVar3 >> 2) + 0x9e3779b9 + uVar3 * 0x40 + local_48[2] ^ uVar3;
  local_68 = param_4;
  cVar1 = FUN_1405c2878(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[4] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[3] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1405c2fea(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c2878 FUN_1405c2878 body=118 status=ok
// SIG undefined FUN_1405c2878(void)

void FUN_1405c2878(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar4 = FUN_1405c28ee();
    if (iVar4 != -1) {
      lVar1 = *param_1;
      uVar2 = *param_3;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar4 * 0x14) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar4 * 0x14) = uVar2;
      FUN_146ddc93e(param_1,*param_4,1);
      *param_4 = iVar4;
      uVar3 = 1;
      goto LAB_1405c28a7;
    }
  }
  uVar3 = 0;
LAB_1405c28a7:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 1405c28ee FUN_1405c28ee body=103 status=ok
// SIG undefined FUN_1405c28ee(void)

int FUN_1405c28ee(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if (((*(int *)(lVar3 + lVar5 * 0x14) == *param_3) &&
            (lVar1 = lVar3 + lVar5 * 0x14, *(int *)(lVar1 + 4) == param_3[1])) &&
           (*(int *)(lVar1 + 8) == param_3[2])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0xc + lVar5 * 0x14);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1405c2956 FUN_1405c2956 body=230 status=ok
// SIG undefined FUN_1405c2956(void)

int * FUN_1405c2956(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1405c2a3c FUN_1405c2a3c body=55 status=ok
// SIG undefined FUN_1405c2a3c(void)

void FUN_1405c2a3c(longlong *param_1)

{
  FUN_1405c2a74(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405c2a74 FUN_1405c2a74 body=128 status=ok
// SIG undefined FUN_1405c2a74(void)

void FUN_1405c2a74(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1405c2af6 FUN_1405c2af6 body=457 status=ok
// SIG undefined FUN_1405c2af6(void)

void FUN_1405c2af6(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = (int)param_1[1];
  uVar9 = param_2 - iVar1;
  if (uVar9 != 0 && iVar1 <= (int)param_2) {
    uVar8 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    iVar13 = iVar1;
    if (iVar12 < (int)param_2) {
      FUN_1401ad22e(param_1);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar13 + uVar9;
    if ((uint)(iVar12 - iVar13) < uVar9) {
      FUN_140171ad2(param_1);
    }
    if (iVar13 < (int)param_2) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(lVar2 + uVar8 * 0x14 + -0x10);
      do {
        iVar10 = (int)uVar8;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar10 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar8 = uVar8 - 1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar10 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar6 = puVar6 + -5;
      } while ((longlong)iVar13 < (longlong)uVar8);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar9;
      if (param_2 != 0) {
        uVar7 = uVar9 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar7) {
          if ((0x80 < uVar9) || (param_1[4] != 0)) {
            uVar11 = 0;
            if (0x80 < uVar9) {
              uVar11 = uVar7;
            }
            FUN_1446efa72(param_1 + 4,0,uVar11,4);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar9 + 0x1f & 0xffffffe0;
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        if (uVar9 < 0x101) {
          uVar7 = uVar7 + (uVar7 == 0);
        }
        memset(plVar5,0,(ulonglong)(uVar7 << 2));
        iVar1 = (int)param_1[5];
        iVar12 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar12 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar9) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar9);
      FUN_1447c6044(param_1 + 2,uVar3,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 1405c2cc0 FUN_1405c2cc0 body=478 status=ok
// SIG undefined FUN_1405c2cc0(void)

longlong * FUN_1405c2cc0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar7 != 0) {
    FUN_1405c2e9e();
  }
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar11 = 1;
    uVar14 = 0;
    iVar2 = 0;
    iVar9 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar2 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar2 = iVar7 + -1;
      }
      uVar14 = 0;
      uVar11 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar11 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar11 == uVar14) {
          return param_2;
        }
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar11 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar2) {
      iVar2 = iVar7;
    }
  }
  if (iVar2 < iVar7) {
    uVar12 = 0xffffffff;
    do {
      puVar13 = (undefined8 *)((longlong)iVar2 * 0x14 + *param_1);
      iVar7 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
        FUN_141087970(param_2,iVar7);
      }
      lVar10 = *param_2;
      *(undefined4 *)(lVar10 + 8 + (longlong)iVar7 * 0xc) = *(undefined4 *)(puVar13 + 1);
      *(undefined8 *)(lVar10 + (longlong)iVar7 * 0xc) = *puVar13;
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar2 = (int)uVar14;
      lVar10 = (longlong)iVar2;
      uVar3 = puVar6[lVar10] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar4 = iVar7 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar4 <= iVar2) {
          return param_2;
        }
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar6[lVar10 + lVar8 + 1];
          if (uVar3 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar5 - lVar10 == lVar8) {
            return param_2;
          }
        }
        uVar14 = (ulonglong)(iVar2 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar11 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar2 < iVar7);
  }
  return param_2;
}



// FUNCTION 1405c2e9e FUN_1405c2e9e body=332 status=ok
// SIG undefined FUN_1405c2e9e(void)

void FUN_1405c2e9e(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0xc;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1405c2f0c;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1405c2f0c:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0xc)) {
      uVar5 = uVar3 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0xc,4);
  }
  return;
}



// FUNCTION 1405c2fea FUN_1405c2fea body=665 status=ok
// SIG undefined FUN_1405c2fea(void)

void FUN_1405c2fea(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
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
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0);
  }
  plVar1 = param_1 + 7;
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0);
    }
LAB_1405c302f:
    uVar3 = 0;
    do {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar11 != uVar3);
  }
  else {
    if (uVar11 == 0) goto LAB_1405c3121;
    FUN_1446efa72(plVar5,0);
    if (0 < (int)uVar11) goto LAB_1405c302f;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar7 = (int)param_1[5];
  local_4c = 1;
  if (iVar7 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = local_48;
    }
    uVar11 = *puVar8;
    if (uVar11 == 0) {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      uVar6 = 0;
      uVar9 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar9 = uVar6;
      }
      local_50 = (int)uVar9 + 1;
      local_38 = (int)uVar9 * 0x20 + 0x20;
      iVar10 = 0;
      do {
        local_3c = iVar7;
        if (uVar9 == uVar6) goto LAB_1405c30f3;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar11 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar10;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar11 & uVar11;
    uVar9 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar7 <= local_3c) {
      local_3c = iVar7;
    }
  }
LAB_1405c30f3:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar7) {
    do {
      lVar2 = *local_58;
      lVar4 = (longlong)local_3c;
      uVar11 = *(uint *)(lVar2 + lVar4 * 0x14);
      uVar11 = (uVar11 >> 2) + 0x9e3779b9 + uVar11 * 0x40 + *(int *)(lVar2 + 4 + lVar4 * 0x14) ^
               uVar11;
      uVar9 = (longlong)
              (int)((uVar11 >> 2) + 0x9e3779b9 + uVar11 * 0x40 + *(int *)(lVar2 + 8 + lVar4 * 0x14)
                   ^ uVar11) & (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar9;
      *(int *)(lVar2 + 0x10 + lVar4 * 0x14) = iVar7;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar2 + 0xc + lVar4 * 0x14) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_1405c3121:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405c3284 FUN_1405c3284 body=1287 status=ok
// SIG undefined FUN_1405c3284(void)

void FUN_1405c3284(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  FUN_14005ea14(param_1 + 0x20,*(undefined4 *)(param_1 + 0x10));
  plVar1 = (longlong *)(param_1 + 0x30);
  FUN_14005ea14(plVar1,*(undefined4 *)(param_1 + 0x10));
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar13 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 8);
      lVar7 = (longlong)(int)uVar13;
      iVar10 = *(int *)(lVar4 + lVar7 * 0xc);
      iVar8 = *(int *)(lVar4 + 4 + lVar7 * 0xc);
      iVar15 = *(int *)(lVar4 + 8 + lVar7 * 0xc);
      lVar16 = *(longlong *)(param_2 + 0x28);
      lVar17 = (longlong)iVar10;
      lVar9 = (longlong)iVar8;
      lVar11 = (longlong)iVar15;
      fVar27 = *(float *)(lVar16 + 8 + lVar11 * 0xc);
      fVar32 = *(float *)(lVar16 + 8 + lVar9 * 0xc);
      fVar20 = fVar27 - fVar32;
      fVar30 = *(float *)(lVar16 + lVar11 * 0xc);
      fVar33 = *(float *)(lVar16 + 4 + lVar11 * 0xc);
      fVar31 = *(float *)(lVar16 + lVar9 * 0xc);
      fVar29 = *(float *)(lVar16 + 4 + lVar9 * 0xc);
      fVar23 = fVar33 - fVar29;
      fVar25 = fVar30 - fVar31;
      fVar18 = *(float *)(lVar16 + 8 + lVar17 * 0xc);
      fVar19 = *(float *)(lVar16 + lVar17 * 0xc);
      fVar22 = *(float *)(lVar16 + 4 + lVar17 * 0xc);
      fVar20 = ((fVar27 - fVar18) * fVar20 + (fVar30 - fVar19) * fVar25 + (fVar33 - fVar22) * fVar23
               ) / (fVar20 * fVar20 + fVar25 * fVar25 + fVar23 * fVar23);
      fVar21 = fVar29 - fVar22;
      fVar26 = fVar22 - fVar33;
      fVar25 = fVar31 - fVar19;
      fVar28 = fVar19 - fVar30;
      fVar24 = fVar32 - fVar18;
      fVar23 = fVar18 - fVar27;
      fVar18 = ((fVar18 - fVar32) * fVar23 + (fVar19 - fVar31) * fVar28 + (fVar22 - fVar29) * fVar26
               ) / (fVar23 * fVar23 + fVar28 * fVar28 + fVar26 * fVar26);
      fVar32 = fVar32 - fVar27;
      fVar29 = fVar29 - fVar33;
      fVar31 = fVar31 - fVar30;
      if (1.0 <= fVar20) {
        fVar20 = 1.0;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar19 = (fVar24 * fVar32 + fVar25 * fVar31 + fVar29 * fVar21) /
               (fVar24 * fVar24 + fVar25 * fVar25 + fVar21 * fVar21);
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar22 = ABS(fVar18 + -0.5);
      fVar23 = ABS(fVar19 + -0.5);
      if (((fVar23 < fVar22) &&
          (lVar5 = lVar17, lVar12 = lVar11, lVar6 = lVar9, iVar14 = iVar10,
          fVar23 < ABS(fVar20 + -0.5))) ||
         ((fVar22 < ABS(fVar20 + -0.5) &&
          (lVar5 = lVar11, lVar12 = lVar9, lVar6 = lVar17, fVar19 = fVar18, iVar14 = iVar15,
          iVar15 = iVar8, iVar8 = iVar10, fVar22 < fVar23)))) {
        lVar11 = lVar6;
        lVar9 = lVar5;
        piVar2 = (int *)(lVar4 + lVar7 * 0xc);
        *piVar2 = iVar15;
        piVar2[1] = iVar14;
        piVar2[2] = iVar8;
        lVar16 = *(longlong *)(param_2 + 0x28);
        fVar27 = *(float *)(lVar16 + 8 + lVar11 * 0xc);
        fVar30 = *(float *)(lVar16 + lVar11 * 0xc);
        fVar33 = *(float *)(lVar16 + 4 + lVar11 * 0xc);
        fVar32 = *(float *)(lVar16 + 8 + lVar9 * 0xc) - fVar27;
        fVar29 = *(float *)(lVar16 + 4 + lVar9 * 0xc) - fVar33;
        fVar31 = *(float *)(lVar16 + lVar9 * 0xc) - fVar30;
        lVar17 = lVar12;
        fVar20 = fVar19;
      }
      if ((param_3 == '\0') ||
         (lVar4 = *(longlong *)(param_2 + 0x90),
         1e-08 <= (1.0 - fVar20) * *(float *)(lVar4 + lVar11 * 4) +
                  *(float *)(lVar4 + lVar9 * 4) * fVar20 + *(float *)(lVar4 + lVar17 * 4))) {
        iVar10 = *(int *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x2c) < iVar10 + 1U) {
          FUN_14475e4ac(param_1 + 0x20,iVar10);
        }
        pfVar3 = (float *)(lVar16 + lVar17 * 0xc);
        *(float *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 4) = fVar20;
        fVar18 = pfVar3[2];
        fVar19 = *pfVar3;
        fVar22 = pfVar3[1];
        iVar10 = *(int *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar10 + 1U) {
          FUN_14475e4ac(plVar1,iVar10);
        }
        fVar18 = fVar18 - (fVar27 + fVar32 * fVar20);
        fVar22 = fVar22 - (fVar33 + fVar29 * fVar20);
        fVar19 = fVar19 - (fVar30 + fVar31 * fVar20);
        *(float *)(*plVar1 + (longlong)iVar10 * 4) =
             SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar22 * fVar22);
        uVar13 = uVar13 + 1;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x10);
        iVar8 = ~uVar13 + iVar10;
        if (iVar8 != 0) {
          iVar15 = 1;
          if (iVar8 < 1) {
            iVar15 = iVar8;
          }
          memmove((void *)(*(longlong *)(param_1 + 8) + lVar7 * 0xc),
                  (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar10 - iVar15) * 0xc),
                  (longlong)iVar15 * 0xc);
          iVar10 = *(int *)(param_1 + 0x10);
        }
        *(int *)(param_1 + 0x10) = iVar10 + -1;
        FUN_146d8b5fc((longlong *)(param_1 + 8));
      }
    } while ((int)uVar13 < *(int *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1405c378c FUN_1405c378c body=704 status=ok
// SIG undefined FUN_1405c378c(void)

void FUN_1405c378c(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  ushort *puVar12;
  undefined1 auStack_98 [32];
  ushort *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c760ff1 == '\x01') {
    FUN_14009d97a();
    lVar6 = *(longlong *)(param_1 + 0xb0);
    if (lVar6 == 0) {
      lVar6 = FUN_14001cc68(0x1c0,0x40);
      FUN_1405c470c(lVar6,param_2);
      lVar7 = *(longlong *)(param_1 + 0xb0);
      *(longlong *)(param_1 + 0xb0) = lVar6;
      if (lVar7 != 0) {
        FUN_140b63254(lVar7);
        FUN_1400020a8(lVar7);
        lVar6 = *(longlong *)(param_1 + 0xb0);
      }
    }
    FUN_1405c422c(lVar6);
    if (0 < *(int *)(param_1 + 0x60)) {
      lVar6 = 0;
      do {
        lVar7 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar7 = param_1 + 0x38;
        }
        plVar4 = *(longlong **)
                  (*(longlong *)(param_1 + 0xb8) + 0x20 +
                  (ulonglong)*(ushort *)(lVar7 + lVar6 * 2) * 0x28);
        FUN_1405c3abe(*(undefined8 *)(param_1 + 0xb0));
        uVar10 = *(undefined8 *)(param_1 + 0xb0);
        if (*(char *)((longlong)plVar4 + 0x3c) == '\x01') {
          lVar7 = plVar4[5];
          uVar3 = *(ushort *)((longlong)plVar4 + 0x36);
          uVar8 = (uint)uVar3;
          if ((int)(uint)uVar3 < *(int *)(lVar7 + 0x748)) {
            lVar11 = lVar7 + 0x730;
            if (*(longlong *)(lVar7 + 0x740) != 0) {
              lVar11 = *(longlong *)(lVar7 + 0x740);
            }
            if ((*(uint *)(lVar11 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0)
            goto LAB_1405c38b9;
          }
          if ((int)uVar8 < *(int *)(lVar7 + 0x728)) {
            lVar11 = lVar7 + 0x710;
            if (*(longlong *)(lVar7 + 0x720) != 0) {
              lVar11 = *(longlong *)(lVar7 + 0x720);
            }
            if ((*(uint *)(lVar11 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
            goto LAB_1405c388b;
          }
          else {
LAB_1405c388b:
            if (((*(uint *)(lVar7 + 0x70c) & *(uint *)(plVar4 + 7)) != 0) ||
               ((*(uint *)(lVar7 + 0x708) & *(uint *)(plVar4 + 7)) == 0)) goto LAB_1405c38b9;
          }
          *(longlong *)(lVar7 + 0x270) = *(longlong *)(lVar7 + 0x270) + 1;
          (**(code **)(*plVar4 + 0x2a8))(plVar4);
          uVar10 = *(undefined8 *)(param_1 + 0xb0);
        }
LAB_1405c38b9:
        cVar5 = FUN_1405c3d04(uVar10);
        if (cVar5 != '\0') {
          local_78 = (ushort *)0x0;
          uStack_70 = 0;
          FUN_14009e4cc(*(undefined2 *)((longlong)plVar4 + 0x36),&local_78);
          if ((longlong)(int)uStack_70 != 0) {
            puVar1 = local_78 + (int)uStack_70;
            puVar12 = local_78;
            do {
              if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
                lVar7 = *(longlong *)(param_1 + 0x130);
                if (*(longlong *)(param_1 + 0x130) == 0) {
                  lVar7 = param_1 + 0x128;
                }
                iVar9 = *(int *)(lVar7 + (ulonglong)
                                         (*(int *)(param_1 + 0x138) - 1U & (uint)*puVar12) * 4);
                if (iVar9 != -1) {
                  do {
                    puVar2 = (ushort *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar9 * 0xc);
                    if (*puVar2 == *puVar12) {
                      if ((puVar2 != (ushort *)0x0) && (puVar2 + 1 != (ushort *)0x0)) {
                        FUN_1405c3a4e(*(undefined8 *)(param_1 + 0xb0),puVar2[1]);
                      }
                      break;
                    }
                    iVar9 = *(int *)(puVar2 + 2);
                  } while (iVar9 != -1);
                }
              }
              puVar12 = puVar12 + 1;
            } while (puVar12 != puVar1);
          }
          if (local_78 != (ushort *)0x0) {
            FUN_1400020a8(local_78);
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x60));
    }
    FUN_1405c47f8(*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x248);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405c3a4e FUN_1405c3a4e body=111 status=ok
// SIG undefined FUN_1405c3a4e(void)

void FUN_1405c3a4e(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = param_2;
  lVar1 = FUN_1405c3c3c(param_1 + 0x98,param_2);
  FUN_1405c3e2a(lVar1,param_1 + 0x18);
  FUN_1405c3e2a(lVar1 + 0x10,param_1 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c3abe FUN_1405c3abe body=146 status=ok
// SIG undefined FUN_1405c3abe(void)

void FUN_1405c3abe(longlong param_1,ushort param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_1405c3b50(param_1 + 0x18);
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar1 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xd8);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & (uint)param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 0x30;
        if (*(ushort *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 0x30) == param_2) break;
        iVar3 = *(int *)(lVar1 + 0x28);
        lVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1405c3b36;
    }
  }
  lVar1 = 0;
LAB_1405c3b36:
  lVar2 = lVar1 + 8;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  return;
}



// FUNCTION 1405c3b50 FUN_1405c3b50 body=157 status=ok
// SIG undefined FUN_1405c3b50(void)

void FUN_1405c3b50(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1405c3bee(param_1,&local_48);
  FUN_1405c4362(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_1405c3bee(param_1 + 0x10,&local_48);
  FUN_1405c4362(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c3bee FUN_1405c3bee body=78 status=ok
// SIG undefined FUN_1405c3bee(void)

longlong * FUN_1405c3bee(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1405c4362(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1405c3c3c FUN_1405c3c3c body=199 status=ok
// SIG undefined FUN_1405c3c3c(void)

longlong FUN_1405c3c3c(longlong *param_1,uint param_2,short *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  short *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x30;
        if (*(short *)(*param_1 + (longlong)iVar1 * 0x30) == *param_3) {
          if (lVar3 != 0) goto LAB_1405c3cdb;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x28);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1405c4390(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x30 + *param_1;
LAB_1405c3cdb:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1405c3d04 FUN_1405c3d04 body=294 status=ok
// SIG undefined FUN_1405c3d04(void)

int FUN_1405c3d04(longlong param_1)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x20) * 4;
    iVar8 = 0;
    do {
      uVar6 = (ulonglong)*(uint *)(plVar3 + 2) -
              (ulonglong)(*(uint *)(plVar3 + 2) >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
      uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      iVar5 = 0;
      if (uVar6 != 0) {
        uVar9 = 0;
        iVar5 = 0;
        do {
          uVar1 = *(ushort *)(*plVar3 + uVar9 * 2);
          uVar10 = (ulonglong)uVar1 - (ulonglong)(uVar1 >> 1 & 0x5555);
          uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
          iVar5 = iVar5 + (uint)(byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38);
          uVar9 = uVar9 + 1;
        } while (uVar6 != uVar9);
      }
      iVar8 = iVar8 + iVar5;
      plVar3 = plVar3 + 4;
    } while (plVar3 != plVar2);
    if (iVar8 != 0) {
      return 1;
    }
  }
  iVar8 = 0;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x28);
    lVar4 = (longlong)*(int *)(param_1 + 0x30) << 5;
    do {
      iVar5 = FUN_1432dc2aa(lVar7);
      iVar8 = iVar8 + iVar5;
      lVar7 = lVar7 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    iVar8 = CONCAT31((int3)((uint)iVar8 >> 8),iVar8 != 0);
  }
  return iVar8;
}



// FUNCTION 1405c3e2a FUN_1405c3e2a body=681 status=ok
// SIG undefined FUN_1405c3e2a(void)

longlong * FUN_1405c3e2a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  
  uVar16 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar16 == 0) {
    return param_1;
  }
  if ((int)param_1[1] == 0) {
    if (param_1 == param_2) {
      return param_1;
    }
    FUN_1405c4362(*param_1,0);
    iVar13 = (int)param_2[1];
    lVar6 = *param_2;
    *(int *)(param_1 + 1) = iVar13;
    if (iVar13 != 0 || *(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_1405c4154(param_1,iVar13);
      FUN_1405c40d3(*param_1,lVar6,iVar13);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  if (0 < (int)uVar16) {
    puVar15 = (uint *)(*param_2 + 0x18);
    uVar11 = 0;
    do {
      if (*(uint *)(*param_1 + 0x18) <= *puVar15) goto LAB_1405c3ec0;
      uVar11 = uVar11 + 1;
      puVar15 = puVar15 + 8;
    } while (uVar16 != uVar11);
    uVar11 = (ulonglong)uVar16;
LAB_1405c3ec0:
    if ((int)uVar11 != 0) {
      FUN_1475654fc(param_1);
      uVar16 = *(uint *)(param_2 + 1);
      goto LAB_1405c3ecc;
    }
  }
  uVar11 = 0;
LAB_1405c3ecc:
  if ((int)uVar11 < (int)uVar16) {
    iVar13 = 0;
    do {
      if ((int)param_1[1] <= iVar13) {
        return param_1;
      }
      iVar14 = (int)uVar11;
      plVar1 = (longlong *)(*param_2 + (longlong)iVar14 * 0x20);
      plVar2 = (longlong *)(*param_1 + (longlong)iVar13 * 0x20);
      uVar16 = *(uint *)(*param_1 + 0x18 + (longlong)iVar13 * 0x20);
      uVar9 = *(uint *)(*param_2 + 0x18 + (longlong)iVar14 * 0x20);
      if (uVar9 < uVar16) {
        FUN_147565560(param_1,plVar1);
        uVar11 = (ulonglong)(iVar14 + 1);
      }
      else {
        if (uVar9 == uVar16) {
          uVar16 = *(uint *)(plVar1 + 2);
          if (uVar16 == 0) {
            uVar9 = 0x20;
          }
          else {
            uVar9 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
              }
            }
          }
          if (uVar9 < 0x20) {
            uVar8 = *(uint *)(plVar2 + 2);
            iVar17 = 0;
            do {
              uVar12 = 1 << ((byte)uVar9 & 0x1f);
              uVar10 = uVar12 - 1 & uVar8;
              uVar11 = (ulonglong)uVar10 - (ulonglong)(uVar10 >> 1 & 0x15555555);
              uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
              uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              uVar4 = *(ushort *)(*plVar1 + (longlong)iVar17 * 2);
              if ((uVar8 >> (uVar9 & 0x1f) & 1) == 0) {
                iVar5 = (int)plVar2[1];
                *(uint *)(plVar2 + 1) = iVar5 + 1U;
                if (*(uint *)((longlong)plVar2 + 0xc) < iVar5 + 1U) {
                  FUN_14488eebe(plVar2,iVar5);
                }
                bVar7 = (byte)(uVar11 >> 0x38);
                uVar11 = (ulonglong)((uint)bVar7 * 2);
                memmove((void *)(*plVar2 + uVar11 + 2),(void *)(*plVar2 + uVar11),
                        (ulonglong)(iVar5 - (uint)bVar7) * 2);
                *(ushort *)(*plVar2 + uVar11) = uVar4;
              }
              else {
                puVar3 = (ushort *)(*plVar2 + (uVar11 >> 0x38) * 2);
                *puVar3 = *puVar3 | uVar4;
              }
              uVar8 = *(uint *)(plVar2 + 2) | uVar12;
              *(uint *)(plVar2 + 2) = uVar8;
              uVar16 = uVar16 & ~uVar12;
              if (uVar16 == 0) {
                uVar9 = 0x20;
              }
              else {
                uVar9 = 0;
                if (uVar16 != 0) {
                  for (; (uVar16 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                  }
                }
              }
              iVar17 = iVar17 + 1;
            } while (uVar9 < 0x20);
          }
          uVar11 = (ulonglong)(iVar14 + 1);
        }
        iVar13 = iVar13 + 1;
      }
    } while ((int)uVar11 < (int)param_2[1]);
  }
  return param_1;
}



// FUNCTION 1405c40d3 FUN_1405c40d3 body=128 status=ok
// SIG undefined FUN_1405c40d3(void)

void FUN_1405c40d3(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x18);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-4];
      _Src = *(void **)(puVar2 + -6);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_140817052(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined4 *)(param_1 + 2) = puVar2[-2];
      *(undefined4 *)(param_1 + 3) = *puVar2;
      param_1 = param_1 + 4;
      puVar2 = puVar2 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405c4154 FUN_1405c4154 body=216 status=ok
// SIG undefined FUN_1405c4154(void)

void FUN_1405c4154(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405c422c FUN_1405c422c body=175 status=ok
// SIG undefined FUN_1405c422c(void)

void FUN_1405c422c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *(undefined8 *)(param_1[0x1d] + 0x248);
  param_1[0x30] = uVar2;
  *(int *)(param_1 + 0x31) = (int)uVar2;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_1405c42dc(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_14179ea92(param_1,0);
  }
  local_28 = 0;
  uStack_20 = 0;
  FUN_1405c3bee(param_1 + 7,&local_28);
  FUN_1405c4362(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c42dc FUN_1405c42dc body=134 status=ok
// SIG undefined FUN_1405c42dc(void)

void FUN_1405c42dc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)param_1[6];
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
    FUN_1405c4362(param_1[2],(int)param_1[3]);
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    FUN_1405c4362(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0xf;
  }
  return;
}



// FUNCTION 1405c4362 FUN_1405c4362 body=45 status=ok
// SIG undefined FUN_1405c4362(void)

void FUN_1405c4362(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1405c4390 FUN_1405c4390 body=892 status=ok
// SIG undefined FUN_1405c4390(void)

int * FUN_1405c4390(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  char cVar25;
  short *psVar26;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar23 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_140044672(param_1,iVar23);
    }
    iVar21 = (int)param_1[5];
    if (iVar21 == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar13 = iVar21 + -1;
      }
      iVar13 = iVar13 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar19 = iVar21 + 1;
    iVar24 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar24 = iVar21;
    }
    if (iVar24 >> 5 == iVar13) {
      *(int *)(param_1 + 5) = iVar19;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar19 = 0x80;
          iVar13 = iVar21;
        }
        else {
          uVar14 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar14) {
              uVar18 = uVar14;
            }
          }
          else {
            uVar18 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
          }
          uVar20 = FUN_144a3809e(uVar18 << 2,0);
          iVar13 = (int)(uVar20 >> 2);
          iVar19 = -0x20;
          if ((int)uVar14 <= iVar13) {
            iVar19 = iVar13 << 5;
          }
          iVar13 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar19;
        FUN_1446efbd8(plVar16,iVar13);
        iVar19 = (int)param_1[5] + 1;
      }
      iVar13 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar13 = iVar19;
      }
      *(int *)(param_1 + 5) = iVar19;
      if (iVar19 % 0x20 != 0) {
        plVar22 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar22 = plVar16;
        }
        bVar17 = -(char)(iVar19 % 0x20);
        *(uint *)((longlong)plVar22 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar13 >> 5) * 4) << (bVar17 & 0x1f)) >>
             (bVar17 & 0x1f);
      }
    }
    lVar15 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar17 = (byte)iVar21 & 0x1f;
    puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar24 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar15 = (longlong)iVar23;
    iVar21 = *(int *)(*param_1 + 4 + lVar15 * 0x30);
    *(int *)(param_1 + 6) = iVar21;
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x30) = 0xffffffff;
    }
  }
  plVar16 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar16 = (longlong *)param_1[4];
  }
  iVar21 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar21 = iVar23;
  }
  puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar21 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar23 & 0x1f);
  lVar4 = *param_1;
  lVar15 = lVar15 * 0x30;
  psVar26 = (short *)(lVar4 + lVar15);
  *(undefined2 *)(lVar4 + lVar15) = *(undefined2 *)*param_4;
  puVar3 = (undefined8 *)(lVar4 + 8 + lVar15);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar4 + 0x18 + lVar15);
  *puVar3 = 0;
  puVar3[1] = 0;
  cVar25 = '\0';
  FUN_1405c4362(0,0);
  FUN_1405c4362(0,0);
  *(undefined4 *)(lVar4 + 0x28 + lVar15) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar16 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar16 = (longlong *)param_1[8];
      }
      iVar21 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar21 != -1) {
        do {
          puVar2 = (undefined4 *)(*param_1 + (longlong)iVar21 * 0x30);
          if (*(short *)(*param_1 + (longlong)iVar21 * 0x30) == *psVar26) {
            FUN_147553054(puVar2 + 2);
            uVar5 = *(undefined4 *)psVar26;
            uVar6 = *(undefined4 *)(psVar26 + 2);
            uVar7 = *(undefined4 *)(psVar26 + 4);
            uVar8 = *(undefined4 *)(psVar26 + 6);
            uVar9 = *(undefined4 *)(psVar26 + 8);
            uVar10 = *(undefined4 *)(psVar26 + 10);
            uVar11 = *(undefined4 *)(psVar26 + 0xc);
            uVar12 = *(undefined4 *)(psVar26 + 0xe);
            *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(psVar26 + 0x10);
            puVar2[4] = uVar9;
            puVar2[5] = uVar10;
            puVar2[6] = uVar11;
            puVar2[7] = uVar12;
            *puVar2 = uVar5;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            FUN_147565482(param_1,iVar23);
            cVar25 = '\x01';
            goto LAB_1405c451b;
          }
          iVar21 = puVar2[10];
        } while (iVar21 != -1);
      }
    }
    cVar25 = '\0';
  }
LAB_1405c451b:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar25;
  }
  if (cVar25 == '\0') {
    uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar21 = 1;
    if (3 < uVar14) {
      uVar20 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
      lVar15 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar21 = 1 << ((byte)lVar15 & 0x1f);
    }
    if (((int)uVar14 < 1) || (iVar21 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      *(uint *)(psVar26 + 0x16) = param_3;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = param_1 + 7;
      }
      *(undefined4 *)(psVar26 + 0x14) =
           *(undefined4 *)
            ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = param_1 + 7;
      }
      *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar23;
    }
    else {
      *(int *)(param_1 + 9) = iVar21;
      FUN_1405c4dc4(param_1);
    }
  }
  *param_2 = iVar23;
  return param_2;
}



// FUNCTION 1405c470c FUN_1405c470c body=235 status=ok
// SIG undefined FUN_1405c470c(void)

undefined8 * FUN_1405c470c(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = param_2;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  uVar1 = FUN_14493c560();
  param_1[0x20] = param_1[0x20] & 0xfffffffffc000000 | (ulonglong)uVar1;
  param_1[0x28] = param_1[0x28] & 0xfffffffffc000000 | (ulonglong)uVar1;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
  return param_1;
}



// FUNCTION 1405c47f8 FUN_1405c47f8 body=1483 status=ok
// SIG undefined FUN_1405c47f8(void)

void FUN_1405c47f8(longlong *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  uint *puVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  
  iVar5 = 0;
  if ((ulonglong)*(uint *)(param_1 + 0x31) <= *(ulonglong *)(param_1[0x1d] + 0x248)) {
    iVar5 = (int)*(ulonglong *)(param_1[0x1d] + 0x248) - *(uint *)(param_1 + 0x31);
  }
  *(int *)(param_1 + 0x31) = iVar5;
  if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
    FUN_14179ea92(param_1);
  }
  plVar13 = param_1 + 0x13;
  iVar5 = (int)param_1[0x1c];
  if (iVar5 < 2) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x1b];
    }
    iVar14 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar14 = iVar5;
    }
    if ((int)param_1[0x14] - *(int *)((longlong)param_1 + 0xcc) < iVar14 >> 2) {
      iVar5 = (int)param_1[0x18];
      if (iVar5 != 0) {
        puVar16 = (uint *)param_1[0x17];
        if ((uint *)param_1[0x17] == (uint *)0x0) {
          puVar16 = (uint *)(param_1 + 0x15);
        }
        uVar7 = *puVar16;
        if (uVar7 == 0) {
          iVar14 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar14 = iVar5 + -1;
          }
          uVar8 = 0;
          uVar15 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar15 = uVar8;
          }
          iVar14 = 0;
          do {
            if (uVar15 == uVar8) goto LAB_1405c48af;
            iVar14 = iVar14 + 0x20;
            uVar7 = puVar16[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar7 == 0);
        }
        else {
          iVar14 = 0;
          uVar8 = 0;
        }
        uVar18 = (ulonglong)(-uVar7 & uVar7);
        uVar15 = uVar18 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar17 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar17 < iVar5) {
          uVar7 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)plVar4 +
             (longlong)*(int *)(param_1[0x13] + 0x2c + (longlong)iVar17 * 0x30) * 4) = 0xffffffff;
            uVar7 = ~(uint)uVar18 & uVar7;
            puVar16 = (uint *)param_1[0x17];
            if ((uint *)param_1[0x17] == (uint *)0x0) {
              puVar16 = (uint *)(param_1 + 0x15);
            }
            iVar3 = (int)param_1[0x18];
            iVar17 = (int)uVar8;
            lVar6 = (longlong)iVar17;
            uVar10 = puVar16[lVar6] & uVar7;
            if (uVar10 == 0) {
              iVar11 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar11 = iVar3 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar14 = iVar14 + 0x20;
              iVar9 = iVar11;
              if (iVar11 < iVar17) {
                iVar9 = iVar17;
              }
              if (iVar17 < iVar11) {
                lVar19 = 0;
                do {
                  uVar10 = puVar16[lVar6 + lVar19 + 1];
                  if (uVar10 != 0) {
                    uVar8 = (ulonglong)(iVar17 + (int)lVar19 + 1);
                    uVar7 = 0xffffffff;
                    goto LAB_1405c4bf9;
                  }
                  iVar14 = iVar14 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar9 - lVar6 != lVar19);
                uVar7 = 0xffffffff;
                lVar6 = (longlong)iVar9;
              }
              uVar8 = lVar6 + 1U & 0xffffffff;
              iVar17 = iVar3;
            }
            else {
LAB_1405c4bf9:
              uVar18 = (ulonglong)(-uVar10 & uVar10);
              uVar15 = uVar18 * 2 + 1;
              lVar6 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              iVar17 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar17) {
                iVar17 = iVar3;
              }
            }
          } while (iVar17 != iVar5);
        }
      }
    }
    else if (iVar5 == 1) {
      lVar6 = 0;
      do {
        *(undefined4 *)((longlong)plVar4 + lVar6 * 4) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_1[0x1c]);
    }
LAB_1405c48af:
    FUN_140b637ec(plVar13,0);
  }
  else {
    FUN_140b637ec(plVar13,0);
    *(undefined4 *)(param_1 + 0x1c) = 1;
    FUN_1405c4dc4(plVar13);
  }
  plVar13 = param_1 + 9;
  iVar5 = (int)param_1[0x12];
  if (iVar5 < 2) {
    plVar4 = param_1 + 0x10;
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x11];
    }
    iVar14 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar14 = iVar5;
    }
    if ((int)param_1[10] - *(int *)((longlong)param_1 + 0x7c) < iVar14 >> 2) {
      iVar5 = (int)param_1[0xe];
      if (iVar5 != 0) {
        puVar16 = (uint *)param_1[0xd];
        if ((uint *)param_1[0xd] == (uint *)0x0) {
          puVar16 = (uint *)(param_1 + 0xb);
        }
        uVar7 = *puVar16;
        if (uVar7 == 0) {
          iVar14 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar14 = iVar5 + -1;
          }
          uVar8 = 0;
          uVar15 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar15 = uVar8;
          }
          iVar14 = 0;
          do {
            if (uVar15 == uVar8) goto LAB_1405c4917;
            iVar14 = iVar14 + 0x20;
            uVar7 = puVar16[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar8 = 0;
          iVar14 = 0;
        }
        uVar18 = (ulonglong)(-uVar7 & uVar7);
        uVar15 = uVar18 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar17 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar17 < iVar5) {
          uVar7 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)plVar4 + (longlong)*(int *)(param_1[9] + 0x1c + (longlong)iVar17 * 0x20) * 4
             ) = 0xffffffff;
            uVar7 = ~(uint)uVar18 & uVar7;
            puVar16 = (uint *)param_1[0xd];
            if ((uint *)param_1[0xd] == (uint *)0x0) {
              puVar16 = (uint *)(param_1 + 0xb);
            }
            iVar3 = (int)param_1[0xe];
            iVar17 = (int)uVar8;
            lVar6 = (longlong)iVar17;
            uVar10 = puVar16[lVar6] & uVar7;
            if (uVar10 == 0) {
              iVar11 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar11 = iVar3 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar14 = iVar14 + 0x20;
              iVar9 = iVar11;
              if (iVar11 < iVar17) {
                iVar9 = iVar17;
              }
              if (iVar17 < iVar11) {
                lVar19 = 0;
                do {
                  uVar10 = puVar16[lVar6 + lVar19 + 1];
                  if (uVar10 != 0) {
                    uVar8 = (ulonglong)(iVar17 + (int)lVar19 + 1);
                    uVar7 = 0xffffffff;
                    goto LAB_1405c4d63;
                  }
                  iVar14 = iVar14 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar9 - lVar6 != lVar19);
                uVar7 = 0xffffffff;
                lVar6 = (longlong)iVar9;
              }
              uVar8 = lVar6 + 1U & 0xffffffff;
              iVar17 = iVar3;
            }
            else {
LAB_1405c4d63:
              uVar18 = (ulonglong)(-uVar10 & uVar10);
              uVar15 = uVar18 * 2 + 1;
              lVar6 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              iVar17 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar17) {
                iVar17 = iVar3;
              }
            }
          } while (iVar17 != iVar5);
        }
      }
    }
    else if (iVar5 == 1) {
      lVar6 = 0;
      do {
        *(undefined4 *)((longlong)plVar4 + lVar6 * 4) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_1[0x12]);
    }
LAB_1405c4917:
    FUN_140b635d0(plVar13,0);
  }
  else {
    FUN_140b635d0(plVar13,0);
    *(undefined4 *)(param_1 + 0x12) = 1;
    FUN_1406ae400(plVar13);
  }
  FUN_1405c3b50(param_1 + 3);
  param_1[2] = 0;
  if (0 < (int)param_1[1]) {
    uVar8 = 0;
    do {
      lVar6 = *param_1 + uVar8 * 0x78;
      uVar2 = *(undefined4 *)(*param_1 + 0x60 + uVar8 * 0x78);
      if (*(char *)((longlong)param_1 + 0x18c) == '\0') {
        *(undefined4 *)(lVar6 + 100) = uVar2;
      }
      else {
        LOCK();
        *(undefined4 *)(lVar6 + 100) = uVar2;
        UNLOCK();
      }
      if ((longlong)*(int *)(lVar6 + 0x18) == 0) {
        iVar5 = 0;
      }
      else {
        plVar13 = *(longlong **)(lVar6 + 0x10);
        plVar4 = plVar13 + (longlong)*(int *)(lVar6 + 0x18) * 4;
        iVar5 = 0;
        do {
          uVar15 = (ulonglong)*(uint *)(plVar13 + 2) -
                   (ulonglong)(*(uint *)(plVar13 + 2) >> 1 & 0x55555555);
          uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
          uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          iVar14 = 0;
          if (uVar15 != 0) {
            uVar18 = 0;
            iVar14 = 0;
            do {
              uVar1 = *(ushort *)(*plVar13 + uVar18 * 2);
              uVar12 = (ulonglong)uVar1 - (ulonglong)(uVar1 >> 1 & 0x5555);
              uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
              iVar14 = iVar14 + (uint)(byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) *
                                             0x101010101010101 >> 0x38);
              uVar18 = uVar18 + 1;
            } while (uVar15 != uVar18);
          }
          iVar5 = iVar5 + iVar14;
          plVar13 = plVar13 + 4;
        } while (plVar13 != plVar4);
      }
      if (*(char *)((longlong)param_1 + 0x18c) == '\0') {
        *(int *)(lVar6 + 0x68) = iVar5;
      }
      else {
        LOCK();
        *(int *)(lVar6 + 0x68) = iVar5;
        UNLOCK();
      }
      if (*(int *)(lVar6 + 0x60) == 0) {
        FUN_1406adb7c(param_1 + 7,uVar8 & 0xffffffff);
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)(int)param_1[1]);
  }
  return;
}



// FUNCTION 1405c4dc4 FUN_1405c4dc4 body=631 status=ok
// SIG undefined FUN_1405c4dc4(void)

void FUN_1405c4dc4(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar7,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_1405c4e26;
  }
  uVar4 = 0;
  do {
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar9 != uVar4);
LAB_1405c4e26:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar5 = 0;
    uVar13 = 1;
    iVar14 = 0;
    iVar6 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar14 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar14 = iVar3 + -1;
      }
      uVar5 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar5;
      }
      iVar6 = 0;
      do {
        if (uVar13 == uVar5) {
          return;
        }
        iVar6 = iVar6 + 0x20;
        uVar9 = puVar12[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar5 = 0;
      iVar6 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar14 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar14) {
      iVar14 = iVar3;
    }
  }
  if (iVar14 < iVar3) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar15 = (longlong)iVar14 * 0x30;
      uVar4 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar8 + lVar15);
      *(uint *)(lVar8 + 0x2c + lVar15) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0x28 + lVar15) =
           *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4) = iVar14;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar14 = (int)uVar5;
      lVar8 = (longlong)iVar14;
      uVar4 = puVar12[lVar8] & uVar9;
      if (uVar4 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar14) {
          iVar11 = iVar14;
        }
        if (iVar10 <= iVar14) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar4 = puVar12[lVar8 + lVar15 + 1];
          if (uVar4 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar11 - lVar8 == lVar15) {
            return;
          }
        }
        uVar5 = (ulonglong)(iVar14 + (int)lVar15 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar2 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar14 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar3);
  }
  return;
}



// FUNCTION 1405c503c FUN_1405c503c body=3891 status=ok
// SIG undefined FUN_1405c503c(void)

void FUN_1405c503c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined1 **local_200;
  undefined1 *local_1f8;
  longlong **local_1f0;
  undefined4 *local_1e8;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined2 local_1c0;
  undefined2 local_1be;
  undefined1 local_1bb;
  undefined4 local_1b8;
  undefined1 local_1b4;
  uint local_1b0;
  undefined4 local_1ac;
  ushort local_1a6;
  uint local_1a4;
  longlong *local_1a0;
  longlong *local_198;
  undefined1 *local_190;
  undefined8 **local_188;
  undefined8 *local_180;
  undefined8 local_178;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [40];
  uint local_140 [8];
  int local_120;
  int local_11c;
  longlong local_118;
  undefined1 local_108 [32];
  int local_e8;
  undefined1 local_e0 [32];
  int local_c0;
  code *local_b8;
  byte local_b0;
  undefined8 local_a8;
  byte local_a0;
  undefined4 local_98;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar12 = param_1 + 0x40;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548);
  local_98._1_1_ = 0;
  uStack_170 = uStack_170 & 0xffffff00;
  local_178 = &LAB_140522b36;
  plVar11 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14a475770;
  local_70 = plVar11 + 2;
  plVar11[2] = (longlong)&PTR_FUN_14a475788;
  plVar11[3] = lVar5;
  plVar11[4] = lVar12;
  local_208 = &local_178;
  local_1d8 = lVar12;
  local_68 = plVar11;
  if (plVar11 == (longlong *)0x0) {
    FUN_1406abf4a(param_2,&local_1ac,&local_98,&local_70);
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    FUN_1406abf4a(param_2,&local_1ac,&local_98,&local_70);
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
  lVar12 = FUN_14009d2a0();
  local_1c0 = *(undefined2 *)(lVar12 + 0x4e);
  local_1be = *(undefined2 *)(lVar12 + 0x54);
  local_1bb = 0;
  local_1b8 = 0x6ff;
  local_1b4 = 0;
  uVar4 = *(ushort *)(lVar12 + 0x128);
  FUN_14179e2a2(&local_178);
  iVar15 = local_120;
  iVar14 = uVar4 + 1;
  iVar18 = iVar14 - local_120;
  if (iVar18 != 0 && local_120 <= iVar14) {
    if (local_120 == 0) {
LAB_1405c51a0:
      if (local_11c <= (int)(uint)uVar4) {
        local_11c = 0x100;
        FUN_14497ddce(local_140,local_120);
        iVar14 = local_120 + iVar18;
      }
      iVar16 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar16 = iVar14;
      }
      local_120 = iVar14;
      iVar14 = local_120;
      if (iVar14 % 0x20 != 0) {
        bVar13 = -(char)(iVar14 % 0x20);
        local_140[iVar16 >> 5] = (local_140[iVar16 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        iVar14 = local_120;
      }
    }
    else {
      iVar16 = local_120 + 0x1e;
      if (-1 < local_120 + -1) {
        iVar16 = local_120 + -1;
      }
      if (iVar16 >> 5 != (uint)(uVar4 >> 5)) goto LAB_1405c51a0;
    }
    local_120 = iVar14;
    FUN_1447c45ca(local_140,iVar15,iVar18,0);
  }
  local_140[uVar4 >> 5] = local_140[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  local_1c4 = CONCAT22(local_1c4._2_2_,(short)((ulonglong)local_178 >> 0x20)) & 0xfffffdff;
  local_b8 = FUN_144b1f232;
  local_b0 = 3;
  if (((ushort)local_178 == -1) || (local_178._2_2_ == -1)) {
LAB_1405c596d:
    local_1b0 = 0xffffffff;
  }
  else {
    cVar9 = FUN_14179e3fe(&local_178,*(longlong *)(param_1 + 0x28) + 0x28);
    if (cVar9 == '\0') goto LAB_1405c596d;
    plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14a475790;
    plVar11[2] = (longlong)&PTR_FUN_14a4757a8;
    plVar11[3] = local_1d8;
    *(undefined4 *)(plVar11 + 4) = (undefined4)local_178;
    *(undefined4 *)((longlong)plVar11 + 0x24) = local_178._4_4_;
    *(uint *)(plVar11 + 5) = uStack_170;
    *(undefined4 *)((longlong)plVar11 + 0x2c) = uStack_16c;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
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
    local_50 = 0;
    uVar10 = local_e8 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar10) {
      uVar17 = 0x100;
      if (0x100 < uVar10) {
        uVar17 = uVar10;
      }
      local_50 = (ulonglong)uVar17 << 0x20;
      FUN_14497ddce(&local_70,0);
    }
    local_50 = CONCAT44(local_50._4_4_,local_e8);
    if (local_e8 != 0) {
      memcpy(&local_70,local_108,(ulonglong)(local_e8 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_78 = 0;
    uVar10 = local_c0 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar10) {
      uVar17 = 0x100;
      if (0x100 < uVar10) {
        uVar17 = uVar10;
      }
      local_78 = (ulonglong)uVar17 << 0x20;
      FUN_14497ddce(&local_98,0);
    }
    local_78 = CONCAT44(local_78._4_4_,local_c0);
    local_1d0 = param_2;
    if (local_c0 != 0) {
      memcpy(&local_98,local_e0,(ulonglong)(local_c0 + 0x1fU >> 3 & 0xfffffffc));
    }
    uVar8 = local_50;
    puVar6 = local_178;
    uVar4 = (ushort)local_178;
    iVar15 = (ushort)local_178 + 1;
    iVar14 = iVar15 - (int)local_50;
    if (iVar14 != 0 && (int)local_50 <= iVar15) {
      if ((int)local_50 == 0) {
LAB_1405c53ff:
        if (local_50._4_4_ <= (int)(uint)(ushort)local_178) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,uVar8 & 0xffffffff);
          iVar15 = (int)local_50 + iVar14;
        }
        iVar18 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar18 = iVar15;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar13 = -(char)(iVar15 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar18 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar18 >> 5) * 4) << (bVar13 & 0x1f)
                     ) >> (bVar13 & 0x1f);
        }
      }
      else {
        iVar18 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar18 = (int)local_50 + -1;
        }
        if (iVar18 >> 5 != (uint)((ushort)local_178 >> 5)) goto LAB_1405c53ff;
        local_50 = CONCAT44(local_50._4_4_,iVar15);
      }
      FUN_1447c45ca(&local_70,uVar8 & 0xffffffff,iVar14,0);
    }
    puVar7 = local_178;
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)puVar6 & 0x1f);
    uVar8 = local_50;
    uVar4 = local_178._2_2_;
    uVar10 = (uint)local_178._2_2_;
    iVar15 = local_178._2_2_ + 1;
    iVar14 = iVar15 - (int)local_50;
    if (iVar14 != 0 && (int)local_50 <= iVar15) {
      if ((int)local_50 == 0) {
LAB_1405c54b8:
        if (local_50._4_4_ <= (int)uVar10) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,uVar8 & 0xffffffff);
          iVar15 = (int)local_50 + iVar14;
        }
        iVar18 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar18 = iVar15;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar13 = -(char)(iVar15 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar18 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar18 >> 5) * 4) << (bVar13 & 0x1f)
                     ) >> (bVar13 & 0x1f);
        }
      }
      else {
        iVar18 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar18 = (int)local_50 + -1;
        }
        if (iVar18 >> 5 != (uint)(local_178._2_2_ >> 5)) goto LAB_1405c54b8;
        local_50 = CONCAT44(local_50._4_4_,iVar15);
      }
      FUN_1447c45ca(&local_70,uVar8 & 0xffffffff,iVar14,0);
      uVar10 = (uint)local_178._2_2_;
      iVar15 = local_178._2_2_ + 1;
    }
    uVar8 = local_78;
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)((ulonglong)puVar7 >> 0x10) & 0x1f);
    iVar14 = iVar15 - (int)local_78;
    if (iVar14 != 0 && (int)local_78 <= iVar15) {
      if ((int)local_78 == 0) {
LAB_1405c557d:
        if (local_78._4_4_ <= (int)uVar10) {
          local_78 = CONCAT44(0x100,(int)local_78);
          FUN_14497ddce(&local_98,uVar8 & 0xffffffff);
          iVar15 = (int)local_78 + iVar14;
        }
        iVar18 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar18 = iVar15;
        }
        local_78 = CONCAT44(local_78._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar13 = -(char)(iVar15 % 0x20);
          (&local_98)[iVar18 >> 5] =
               (uint)((&local_98)[iVar18 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        }
      }
      else {
        iVar18 = (int)local_78 + 0x1e;
        if (-1 < (int)local_78 + -1) {
          iVar18 = (int)local_78 + -1;
        }
        if (iVar18 >> 5 != (uint)(local_178._2_2_ >> 5)) goto LAB_1405c557d;
        local_78 = CONCAT44(local_78._4_4_,iVar15);
      }
      FUN_1447c45ca(&local_98,uVar8 & 0xffffffff,iVar14,0);
    }
    (&local_98)[uVar10 >> 5] = (&local_98)[uVar10 >> 5] | 1 << ((byte)uVar10 & 0x1f);
    local_188 = &local_180;
    local_190 = &LAB_1407f0cc0;
    local_a0 = local_b0;
    local_180 = &local_178;
    (*(code *)(&PTR_LAB_14a475bc0)[local_b0])(&local_a8);
    param_2 = local_1d0;
    local_1f8 = local_168;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_1e8 = &local_98;
    local_1f0 = &local_70;
    local_200 = &local_190;
    local_208 = &local_a8;
    local_1a0 = plVar11 + 2;
    local_198 = plVar11;
    FUN_1406ac01c(local_1d0,&local_1b0,&local_1c4,&local_1a0);
    if (local_1b0 == 0xffffffff) {
      if ((local_1c4 & 0x400) != 0) {
        FUN_145c71394(param_2,&local_1a4);
        local_1b0 = local_1a4;
        if (local_1a4 != 0xffffffff) goto LAB_1405c56c1;
      }
    }
    else {
LAB_1405c56c1:
      FUN_1407ce0e2(param_2,local_1b0,0xffffffff);
      FUN_1407cdf34(param_2,local_1b0,0xffffffff);
    }
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
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  local_1c0 = *(undefined2 *)(lVar12 + 0x4e);
  local_1be = *(undefined2 *)(lVar12 + 0x56);
  local_1bb = 0;
  local_1b8 = 0x6ff;
  local_1b4 = 0;
  uVar4 = *(ushort *)(lVar12 + 0x128);
  FUN_14179e48c(&local_178);
  iVar15 = local_120;
  iVar14 = uVar4 + 1;
  iVar18 = iVar14 - local_120;
  if (iVar18 != 0 && local_120 <= iVar14) {
    if (local_120 == 0) {
LAB_1405c5771:
      if (local_11c <= (int)(uint)uVar4) {
        local_11c = 0x100;
        FUN_14497ddce(local_140,local_120);
        iVar14 = local_120 + iVar18;
      }
      iVar16 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar16 = iVar14;
      }
      local_120 = iVar14;
      iVar14 = local_120;
      if (iVar14 % 0x20 != 0) {
        bVar13 = -(char)(iVar14 % 0x20);
        local_140[iVar16 >> 5] = (local_140[iVar16 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        iVar14 = local_120;
      }
    }
    else {
      iVar16 = local_120 + 0x1e;
      if (-1 < local_120 + -1) {
        iVar16 = local_120 + -1;
      }
      if (iVar16 >> 5 != (uint)(uVar4 >> 5)) goto LAB_1405c5771;
    }
    local_120 = iVar14;
    FUN_1447c45ca(local_140,iVar15,iVar18,0);
  }
  local_140[uVar4 >> 5] = local_140[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  local_1a6 = local_178._4_2_ & 0xfdff;
  local_b8 = FUN_14755048e;
  local_b0 = 3;
  if (((ushort)local_178 != -1) && (local_178._2_2_ != -1)) {
    cVar9 = FUN_14179e5e8(&local_178,*(longlong *)(param_1 + 0x28) + 0x28);
    if (cVar9 != '\0') {
      plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14a4757b0;
      plVar11[2] = (longlong)&PTR_FUN_14a4757c8;
      plVar11[3] = local_1d8;
      *(undefined4 *)(plVar11 + 4) = (undefined4)local_178;
      *(undefined4 *)((longlong)plVar11 + 0x24) = local_178._4_4_;
      *(uint *)(plVar11 + 5) = uStack_170;
      *(undefined4 *)((longlong)plVar11 + 0x2c) = uStack_16c;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
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
      local_50 = 0;
      uVar10 = local_e8 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar10) {
        uVar17 = 0x100;
        if (0x100 < uVar10) {
          uVar17 = uVar10;
        }
        local_50 = (ulonglong)uVar17 << 0x20;
        FUN_14497ddce(&local_70,0);
      }
      local_50 = CONCAT44(local_50._4_4_,local_e8);
      if (local_e8 != 0) {
        memcpy(&local_70,local_108,(ulonglong)(local_e8 + 0x1fU >> 3 & 0xfffffffc));
      }
      local_78 = 0;
      uVar10 = local_c0 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar10) {
        uVar17 = 0x100;
        if (0x100 < uVar10) {
          uVar17 = uVar10;
        }
        local_78 = (ulonglong)uVar17 << 0x20;
        FUN_14497ddce(&local_98,0);
      }
      local_78 = CONCAT44(local_78._4_4_,local_c0);
      if (local_c0 != 0) {
        memcpy(&local_98,local_e0,(ulonglong)(local_c0 + 0x1fU >> 3 & 0xfffffffc));
      }
      uVar8 = local_50;
      puVar6 = local_178;
      uVar4 = (ushort)local_178;
      iVar15 = (ushort)local_178 + 1;
      iVar14 = iVar15 - (int)local_50;
      if (iVar14 != 0 && (int)local_50 <= iVar15) {
        if ((int)local_50 == 0) {
LAB_1405c5bc5:
          if (local_50._4_4_ <= (int)(uint)(ushort)local_178) {
            local_50 = CONCAT44(0x100,(int)local_50);
            FUN_14497ddce(&local_70,uVar8 & 0xffffffff);
            iVar15 = (int)local_50 + iVar14;
          }
          iVar18 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar18 = iVar15;
          }
          local_50 = CONCAT44(local_50._4_4_,iVar15);
          if (iVar15 % 0x20 != 0) {
            bVar13 = -(char)(iVar15 % 0x20);
            *(uint *)((longlong)&local_70 + (longlong)(iVar18 >> 5) * 4) =
                 (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar18 >> 5) * 4) <<
                       (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
          }
        }
        else {
          iVar18 = (int)local_50 + 0x1e;
          if (-1 < (int)local_50 + -1) {
            iVar18 = (int)local_50 + -1;
          }
          if (iVar18 >> 5 != (uint)((ushort)local_178 >> 5)) goto LAB_1405c5bc5;
          local_50 = CONCAT44(local_50._4_4_,iVar15);
        }
        FUN_1447c45ca(&local_70,uVar8 & 0xffffffff,iVar14,0);
      }
      puVar7 = local_178;
      puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)puVar6 & 0x1f);
      uVar8 = local_50;
      uVar4 = local_178._2_2_;
      uVar10 = (uint)local_178._2_2_;
      iVar15 = local_178._2_2_ + 1;
      iVar14 = iVar15 - (int)local_50;
      if (iVar14 != 0 && (int)local_50 <= iVar15) {
        if ((int)local_50 == 0) {
LAB_1405c5c7c:
          if (local_50._4_4_ <= (int)uVar10) {
            local_50 = CONCAT44(0x100,(int)local_50);
            FUN_14497ddce(&local_70,uVar8 & 0xffffffff);
            iVar15 = (int)local_50 + iVar14;
          }
          iVar18 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar18 = iVar15;
          }
          local_50 = CONCAT44(local_50._4_4_,iVar15);
          if (iVar15 % 0x20 != 0) {
            bVar13 = -(char)(iVar15 % 0x20);
            *(uint *)((longlong)&local_70 + (longlong)(iVar18 >> 5) * 4) =
                 (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar18 >> 5) * 4) <<
                       (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
          }
        }
        else {
          iVar18 = (int)local_50 + 0x1e;
          if (-1 < (int)local_50 + -1) {
            iVar18 = (int)local_50 + -1;
          }
          if (iVar18 >> 5 != (uint)(local_178._2_2_ >> 5)) goto LAB_1405c5c7c;
          local_50 = CONCAT44(local_50._4_4_,iVar15);
        }
        FUN_1447c45ca(&local_70,uVar8 & 0xffffffff,iVar14,0);
        uVar10 = (uint)local_178._2_2_;
        iVar15 = local_178._2_2_ + 1;
      }
      uVar8 = local_78;
      puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)((ulonglong)puVar7 >> 0x10) & 0x1f);
      iVar14 = iVar15 - (int)local_78;
      if (iVar14 != 0 && (int)local_78 <= iVar15) {
        if ((int)local_78 == 0) {
LAB_1405c5d40:
          if (local_78._4_4_ <= (int)uVar10) {
            local_78 = CONCAT44(0x100,(int)local_78);
            FUN_14497ddce(&local_98,uVar8 & 0xffffffff);
            iVar15 = (int)local_78 + iVar14;
          }
          iVar18 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar18 = iVar15;
          }
          local_78 = CONCAT44(local_78._4_4_,iVar15);
          if (iVar15 % 0x20 != 0) {
            bVar13 = -(char)(iVar15 % 0x20);
            (&local_98)[iVar18 >> 5] =
                 (uint)((&local_98)[iVar18 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
          }
        }
        else {
          iVar18 = (int)local_78 + 0x1e;
          if (-1 < (int)local_78 + -1) {
            iVar18 = (int)local_78 + -1;
          }
          if (iVar18 >> 5 != (uint)(local_178._2_2_ >> 5)) goto LAB_1405c5d40;
          local_78 = CONCAT44(local_78._4_4_,iVar15);
        }
        FUN_1447c45ca(&local_98,uVar8 & 0xffffffff,iVar14,0);
      }
      (&local_98)[uVar10 >> 5] = (&local_98)[uVar10 >> 5] | 1 << ((byte)uVar10 & 0x1f);
      local_188 = &local_180;
      local_190 = &LAB_147550546;
      local_a0 = local_b0;
      local_180 = &local_178;
      (*(code *)(&PTR_LAB_14a475bc0)[local_b0])(&local_a8);
      local_1f8 = local_168;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_1e8 = &local_98;
      local_1f0 = &local_70;
      local_200 = &local_190;
      local_208 = &local_a8;
      local_1a0 = plVar11 + 2;
      local_198 = plVar11;
      FUN_1406ac01c(param_2,&local_1c4,&local_1a6,&local_1a0);
      if (local_1c4 == 0xffffffff) {
        if ((local_1a6 & 0x400) != 0) {
          FUN_145c71394(param_2,&local_1a4);
          local_1c4 = local_1a4;
          if (local_1a4 != 0xffffffff) goto LAB_1405c5e7b;
        }
      }
      else {
LAB_1405c5e7b:
        FUN_1407ce0e2(param_2,local_1c4,0xffffffff);
        FUN_1407cdf34(param_2,local_1c4,0xffffffff);
      }
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
      goto LAB_1405c584d;
    }
  }
  local_1c4 = 0xffffffff;
LAB_1405c584d:
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_1406adae8(param_2,local_1ac,local_1b0);
  FUN_1406adae8(param_2,local_1ac,local_1c4);
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405c5f70 FUN_1405c5f70 body=50 status=ok
// SIG undefined FUN_1405c5f70(void)

undefined8 * FUN_1405c5f70(undefined8 *param_1)

{
  FUN_1405c5fa2();
  param_1[1] = &DAT_14cb769e8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b0394b0;
  return param_1;
}



// FUNCTION 1405c5fa2 FUN_1405c5fa2 body=189 status=ok
// SIG undefined FUN_1405c5fa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1405c5fa2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb76a58) {
    FUN_144b3d300(&DAT_14cb76a58);
    if (DAT_14cb76a58 == -1) {
      _DAT_14cb76a08 = 0;
      _DAT_14cb76a10 = 0;
      _DAT_14cb769e8 = 0;
      uRam000000014cb769f0 = 0;
      _DAT_14cb76a14 = 0xffffffff00000080;
      _DAT_14cb76a1c = 0;
      DAT_14cb76a28 = 0;
      _DAT_14cb76a30 = 0;
      DAT_14cb76a38 = 0;
      uRam000000014cb76a40 = 0;
      _DAT_14cb76a48 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb76a50);
      atexit(FUN_143d0858d);
      _Init_thread_footer(&DAT_14cb76a58);
    }
  }
  return &DAT_14cb769e8;
}



// FUNCTION 1405c6060 FUN_1405c6060 body=100 status=ok
// SIG undefined FUN_1405c6060(void)

void FUN_1405c6060(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x68) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_140115c12(param_1 + 0x78,0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405c60c4 FUN_1405c60c4 body=32 status=ok
// SIG undefined FUN_1405c60c4(void)

undefined4 * FUN_1405c60c4(longlong param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_1 + 8);
    }
    return puVar1;
  }
  return &DAT_14c9485f0;
}



// FUNCTION 1405c60e4 FUN_1405c60e4 body=145 status=ok
// SIG undefined FUN_1405c60e4(void)

void FUN_1405c60e4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x18a) == '\x01')) {
        FUN_1449ede4a(lVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x160);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x158);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x182) == '\x01')) {
        FUN_146dfd456(lVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1405c6176 FUN_1405c6176 body=1308 status=ok
// SIG undefined FUN_1405c6176(void)

longlong * FUN_1405c6176(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong ****pppplVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  byte bVar13;
  undefined1 auStack_a8 [32];
  longlong local_88;
  byte local_80;
  undefined8 local_78;
  longlong ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_1447262c2(param_4);
  if (lVar5 == 0) {
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    goto LAB_1405c6374;
  }
  lVar5 = FUN_1405c6693(lVar5);
  if (lVar5 == 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = *(byte *)(lVar5 + 0x5f4);
  }
  lVar5 = FUN_1405c673d();
  if ((int)(uint)bVar13 < *(int *)(lVar5 + 0x30)) {
    puVar11 = (undefined8 *)((ulonglong)bVar13 * 0x170 + *(longlong *)(lVar5 + 0x28));
  }
  else {
    puVar11 = (undefined8 *)(lVar5 + 0x38);
  }
  uVar1 = *puVar11;
  lVar5 = *(longlong *)(param_1 + 0x10);
  local_78 = uVar1;
  if (lVar5 == 0) {
    uVar9 = FUN_140261af2();
    lVar5 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  plVar12 = (longlong *)(param_1 + 8);
  lVar10 = *(longlong *)(param_1 + 0x18);
  if (lVar10 == 0) {
    if ((lVar5 != 0) && (*plVar12 != 0)) {
      plVar3 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 != '\0')) {
        uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar10 = FUN_144aff482(uVar9,plVar12);
        *(longlong *)(param_1 + 0x18) = lVar10;
        *(undefined2 *)(param_2 + 3) = 0;
        *(undefined1 *)(param_2 + 4) = 0;
        if (lVar10 != 0) goto LAB_1405c621d;
        goto LAB_1405c6536;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
LAB_1405c621d:
    lVar5 = *(longlong *)(lVar10 + 0x48);
    if (*(longlong *)(lVar10 + 0x48) == 0) {
      if (*(longlong *)(lVar10 + 0x20) != 0) {
        lVar6 = FUN_14000e0c8(lVar10 + 0x18);
        lVar5 = *(longlong *)(lVar10 + 0x48);
        if (lVar6 != 0) {
          if (lVar5 != lVar6) {
            if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
              FUN_140113f48();
            }
            FUN_1401924dc(lVar6);
            *(longlong *)(lVar10 + 0x48) = lVar6;
            lVar5 = lVar6;
          }
          goto LAB_1405c622b;
        }
        if (lVar5 != 0) {
          if (DAT_14c872a72 == '\0') {
            FUN_140113f48();
          }
          *(undefined8 *)(lVar10 + 0x48) = 0;
        }
      }
    }
    else {
LAB_1405c622b:
      lVar6 = FUN_140168c2c();
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        pppplVar7 = (longlong ****)FUN_1405c68fe(lVar10,uVar1,&DAT_149dfb77a,1);
        if (pppplVar7 != (longlong ****)0x0) {
          local_70[0] = (longlong ***)pppplVar7;
          FUN_140238d32(&local_88,&DAT_14c9a66d0);
          if (local_80 == 0) {
            (*(code *)(*pppplVar7)[3])(pppplVar7,local_70,param_4);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                               (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
            if (pcVar2 != (code *)0x0) {
              plVar12 = param_2;
              if (0x18 < *(ushort *)(param_2 + 3)) {
                plVar12 = (longlong *)*param_2;
              }
              (*pcVar2)(plVar12);
            }
            if (0x18 < *(ushort *)(param_2 + 3)) {
              FUN_1400020a8(*param_2);
            }
            *(ushort *)(param_2 + 3) = local_58;
            if (local_58 < 0x19) {
              uVar8 = (ulonglong)((uint)local_50 * 0x120);
              if (*(code **)((longlong)&DAT_14c9a85b8 + uVar8) == (code *)0x0) {
                if (*(code **)((longlong)&DAT_14c9a85b0 + uVar8) == (code *)0x0) {
                  memcpy(param_2,local_70,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
                }
                else {
                  (**(code **)((longlong)&DAT_14c9a85b0 + uVar8))(param_2,local_70);
                }
              }
              else {
                (**(code **)((longlong)&DAT_14c9a85b8 + uVar8))(param_2,local_70);
              }
            }
            else {
              *param_2 = (longlong)local_70[0];
              local_70[0] = (longlong ***)0x0;
              local_58 = 0;
            }
            *(byte *)(param_2 + 4) = local_50;
            local_50 = 0;
            if (DAT_14c9a85d0 != (code *)0x0) {
              pppplVar7 = local_70;
              if (0x18 < local_58) {
                pppplVar7 = (longlong ****)local_70[0];
              }
              (*DAT_14c9a85d0)(pppplVar7);
            }
            if (0x18 < local_58) {
              FUN_1400020a8(local_70[0]);
            }
          }
          if ((local_80 & 1) == 0) {
            *(int *)(local_88 + 0x28) = *(int *)(local_88 + 0x28) + -1;
          }
        }
        goto LAB_1405c6374;
      }
    }
  }
LAB_1405c6536:
  FUN_1470e0be8(plVar12,local_70,&local_78,param_4);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar12 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      plVar12 = (longlong *)*param_2;
    }
    (*pcVar2)(plVar12);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
  }
  *(ushort *)(param_2 + 3) = local_58;
  if (local_58 < 0x19) {
    uVar8 = (ulonglong)((uint)local_50 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar8) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar8) == (code *)0x0) {
        memcpy(param_2,local_70,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar8))(param_2,local_70);
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar8))(param_2,local_70);
    }
  }
  else {
    *param_2 = (longlong)local_70[0];
    local_70[0] = (longlong ***)0x0;
    local_58 = 0;
  }
  *(byte *)(param_2 + 4) = local_50;
  local_50 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    pppplVar7 = local_70;
    if (0x18 < local_58) {
      pppplVar7 = (longlong ****)local_70[0];
    }
    (*DAT_14c9a85d0)(pppplVar7);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
LAB_1405c6374:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1405c6693 FUN_1405c6693 body=106 status=ok
// SIG undefined FUN_1405c6693(void)

longlong FUN_1405c6693(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x178) != 0)) {
    lVar3 = FUN_14030d660();
    lVar2 = *(longlong *)(lVar2 + 0x178);
    if (lVar2 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1405c66fe FUN_1405c66fe body=63 status=ok
// SIG undefined FUN_1405c66fe(void)

undefined8 FUN_1405c66fe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1405c6a5c(param_2,param_3,param_1 + 8,param_1 + 0x58,param_1 + 0xa8,param_1 + 0xf8);
  return param_2;
}



// FUNCTION 1405c673d FUN_1405c673d body=448 status=ok
// SIG undefined FUN_1405c673d(void)

longlong * FUN_1405c673d(void)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbc40b8 == (longlong *)0x0) {
    FUN_1461155da(&DAT_14cbc40c0);
    DAT_14cbc40b8 = (longlong *)&DAT_14cbc40c0;
  }
  plVar3 = DAT_14cbc40b8;
  plVar2 = DAT_14cbc40b8 + 1;
  cVar4 = (char)DAT_14cbc40b8[2];
  plVar6 = plVar2;
  if (cVar4 == '\0') {
LAB_1405c6771:
    if (*plVar6 == 0) goto LAB_1405c6837;
    plVar6 = plVar2;
    if (cVar4 == '\0') {
LAB_1405c6782:
      if (*plVar6 == 0) goto LAB_1405c67d8;
      if ((((int)DAT_14cbc40b8[3] == *(int *)(*plVar6 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         (*plVar2 == 0)) goto LAB_1405c6796;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if ((((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) ||
         (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
         plVar2 == (longlong *)0x0)) goto LAB_1405c6796;
      cVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2,DAT_14cbc40b8);
    }
    else {
      if (cVar4 == '\x02') {
        plVar6 = (longlong *)(*plVar2 + 0x30);
        goto LAB_1405c6782;
      }
LAB_1405c67d8:
      if ((DAT_14c9a1ab0 == 0) || (*plVar2 == 0)) goto LAB_1405c6796;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if (((short)uVar1 < 0) ||
         ((*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1 ||
          (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
          plVar2 == (longlong *)0x0)))) goto LAB_1405c6796;
      cVar4 = (**(code **)(*plVar2 + 0x2a0))(plVar2,DAT_14cbc40b8);
    }
    if (cVar4 == '\0') goto LAB_1405c6796;
  }
  else {
    if (cVar4 == '\x02') {
      plVar6 = (longlong *)(*plVar2 + 0x30);
      goto LAB_1405c6771;
    }
LAB_1405c6837:
    lVar5 = FUN_140162146();
    if (lVar5 == 0) goto LAB_1405c6796;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_oak_balance",0);
    FUN_140024ada(&local_48,plVar3);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
LAB_1405c6796:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 1405c68fe FUN_1405c68fe body=350 status=ok
// SIG undefined FUN_1405c68fe(void)

longlong FUN_1405c68fe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  FUN_14016a17c();
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) goto LAB_1405c691d;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0;
  }
  lVar3 = FUN_14000e0c8(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar3 == 0) {
    if (lVar4 == 0) {
      return 0;
    }
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
LAB_1405c6a23:
    *(longlong *)(param_1 + 0x48) = lVar3;
    lVar4 = lVar3;
  }
  else if (lVar4 != lVar3) {
    if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar3);
    goto LAB_1405c6a23;
  }
  if (lVar4 == 0) {
    return 0;
  }
LAB_1405c691d:
  lVar3 = FUN_140168c2c();
  if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
      (param_2 != 0 &&
       *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
       lVar3 + 0x30)) && (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x90);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 0x18),
            *plVar1 != param_2) {
        iVar6 = (int)plVar1[2];
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 1405c6a5c FUN_1405c6a5c body=477 status=ok
// SIG undefined FUN_1405c6a5c(void)

undefined8 *
FUN_1405c6a5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_78 [32];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  lVar3 = FUN_14049cbd6(param_2);
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x170), lVar3 != 0)) {
    lVar4 = FUN_1411531be();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        ((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30 && (iVar1 = *(int *)(lVar3 + 0x6d0), 1 < iVar1)))) &&
       ((iVar1 == 3 || (param_5 = param_6, param_3 = param_4, iVar1 != 2)))) {
      param_3 = param_5;
    }
  }
  FUN_1448729ea(param_3,local_58,param_2);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
  if (pcVar2 != (code *)0x0) {
    puVar6 = param_1;
    if (0x18 < *(ushort *)(param_1 + 3)) {
      puVar6 = (undefined8 *)*param_1;
    }
    (*pcVar2)(puVar6);
  }
  if (0x18 < *(ushort *)(param_1 + 3)) {
    FUN_1400020a8(*param_1);
  }
  *(ushort *)(param_1 + 3) = local_40;
  if (local_40 < 0x19) {
    uVar5 = (ulonglong)((uint)local_38 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar5) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar5) == (code *)0x0) {
        memcpy(param_1,local_58,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar5))(param_1,local_58);
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar5))(param_1,local_58);
    }
  }
  else {
    *param_1 = local_58[0];
    local_58[0] = (undefined8 ****)0x0;
    local_40 = 0;
  }
  *(byte *)(param_1 + 4) = local_38;
  local_38 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar7 = local_58;
    if (0x18 < local_40) {
      ppppuVar7 = (undefined8 ****)local_58[0];
    }
    (*DAT_14c9a85d0)(ppppuVar7);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405c6c3a FUN_1405c6c3a body=988 status=ok
// SIG undefined FUN_1405c6c3a(void)

undefined8
FUN_1405c6c3a(int *param_1,double param_2,double param_3,double param_4,double *param_5,
             double *param_6,double *param_7,undefined4 *param_8,undefined8 param_9)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_90;
  int local_88;
  int local_80;
  int *local_78;
  undefined1 *local_70;
  undefined1 local_68 [12];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar13 = (param_2 - *(double *)(param_1 + 0x1c)) * *(double *)(param_1 + 0xc);
  iVar11 = (int)dVar13 - (uint)(dVar13 < 0.0);
  if (iVar11 < 0) {
LAB_1405c6e81:
    if ((char)param_1[0x28] == '\x01') {
      iVar9 = *param_1;
      if (iVar11 < 0) {
        iVar8 = (iVar11 + 1) / iVar9 + -1;
      }
      else {
        iVar8 = iVar11 / iVar9;
      }
      param_2 = param_2 - (*(double *)(param_1 + 0x1e) - *(double *)(param_1 + 0x1c)) *
                          (double)iVar8;
      iVar11 = iVar11 - iVar8 * iVar9;
      goto LAB_1405c6c97;
    }
  }
  else {
    iVar9 = *param_1;
    iVar8 = 0;
    if (iVar9 <= iVar11) goto LAB_1405c6e81;
LAB_1405c6c97:
    dVar13 = (param_3 - *(double *)(param_1 + 0x20)) * *(double *)(param_1 + 0xe);
    iVar12 = (int)dVar13 - (uint)(dVar13 < 0.0);
    if ((iVar12 < 0) || (iVar6 = 0, param_1[1] <= iVar12)) {
      if (*(char *)((longlong)param_1 + 0xa1) != '\x01') goto LAB_1405c6f4f;
      iVar10 = param_1[1];
      if (iVar12 < 0) {
        iVar6 = (iVar12 + 1) / iVar10 + -1;
      }
      else {
        iVar6 = iVar12 / iVar10;
      }
      param_3 = param_3 - (*(double *)(param_1 + 0x22) - *(double *)(param_1 + 0x20)) *
                          (double)iVar6;
      iVar12 = iVar12 - iVar10 * iVar6;
    }
    dVar13 = (param_4 - *(double *)(param_1 + 0x24)) * *(double *)(param_1 + 0x10);
    iVar10 = (int)dVar13 - (uint)(dVar13 < 0.0);
    if ((iVar10 < 0) || (iVar7 = 0, param_1[2] <= iVar10)) {
      if (*(char *)((longlong)param_1 + 0xa2) != '\x01') goto LAB_1405c6f4f;
      iVar2 = param_1[2];
      if (iVar10 < 0) {
        iVar7 = (iVar10 + 1) / iVar2 + -1;
      }
      else {
        iVar7 = iVar10 / iVar2;
      }
      param_4 = param_4 - (*(double *)(param_1 + 0x26) - *(double *)(param_1 + 0x24)) *
                          (double)iVar7;
      iVar10 = iVar10 - iVar2 * iVar7;
    }
    local_80 = param_1[3] * iVar10 + iVar9 * iVar12 + iVar11;
    local_70 = local_68;
    local_78 = &local_5c;
    local_98 = iVar11;
    local_90 = iVar12;
    local_88 = iVar10;
    FUN_1405c7018(param_9,param_2,param_3,param_4);
    lVar5 = (longlong)local_5c;
    if (lVar5 != -1) {
      if ((char)param_1[0x28] == '\x01') {
        iVar11 = iVar11 + local_54;
        iVar9 = *param_1;
        if (iVar11 < 0) {
          iVar11 = (iVar11 + 1) / iVar9 + -1;
        }
        else {
          if (iVar11 < iVar9) goto LAB_1405c6d6f;
          iVar11 = iVar11 / iVar9;
        }
        iVar8 = iVar8 + iVar11;
      }
LAB_1405c6d6f:
      if (*(char *)((longlong)param_1 + 0xa1) == '\x01') {
        iVar12 = iVar12 + local_50;
        iVar11 = param_1[1];
        if (iVar12 < 0) {
          iVar12 = (iVar12 + 1) / iVar11 + -1;
        }
        else {
          if (iVar12 < iVar11) goto LAB_1405c6d7c;
          iVar12 = iVar12 / iVar11;
        }
        iVar6 = iVar6 + iVar12;
      }
LAB_1405c6d7c:
      if (*(char *)((longlong)param_1 + 0xa2) == '\x01') {
        iVar10 = iVar10 + local_4c;
        iVar11 = param_1[2];
        if (iVar10 < 0) {
          iVar10 = (iVar10 + 1) / iVar11 + -1;
        }
        else {
          if (iVar10 < iVar11) goto LAB_1405c6da9;
          iVar10 = iVar10 / iVar11;
        }
        iVar7 = iVar7 + iVar10;
      }
LAB_1405c6da9:
      lVar3 = (longlong)local_58 * 0x18;
      *param_5 = (*(double *)(param_1 + 0x1e) - *(double *)(param_1 + 0x1c)) * (double)iVar8 +
                 *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x2c) + lVar5 * 8) + lVar3);
      *param_6 = (*(double *)(param_1 + 0x22) - *(double *)(param_1 + 0x20)) * (double)iVar6 +
                 *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x2c) + lVar5 * 8) + 8 + lVar3);
      *param_7 = (*(double *)(param_1 + 0x26) - *(double *)(param_1 + 0x24)) * (double)iVar7 +
                 *(double *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x2c) + lVar5 * 8) + 0x10 + lVar3);
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2a) + lVar5 * 8) + (longlong)local_58 * 4);
      *param_8 = uVar1;
      uVar4 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      goto LAB_1405c6e59;
    }
  }
LAB_1405c6f4f:
  uVar4 = 0;
LAB_1405c6e59:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c7018 FUN_1405c7018 body=4655 status=ok
// SIG undefined FUN_1405c7018(void)

void FUN_1405c7018(longlong *param_1,double param_2,double param_3,double param_4,int param_5,
                  int param_6,int param_7,int param_8,int *param_9,double *param_10)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int **ppiVar6;
  double dVar7;
  int *piVar8;
  char cVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  int iVar28;
  double *pdVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  int iVar33;
  longlong lVar34;
  int **ppiVar35;
  double dVar36;
  double dVar37;
  int **ppiVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStack_1b8 [32];
  int **local_198;
  double local_190;
  int **local_188;
  double local_180;
  longlong *local_170;
  int local_168;
  int local_164;
  ulonglong local_160;
  uint local_154;
  ulonglong local_150;
  int local_144;
  ulonglong local_140;
  int local_134;
  longlong local_130;
  undefined8 local_128;
  uint *local_120;
  ulonglong local_118;
  longlong local_110;
  longlong local_108;
  int *local_100;
  int *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *param_9 = -1;
  *param_10 = 1e+30;
  piVar18 = (int *)*param_1;
  iVar11 = param_5;
  if ((char)piVar18[0x28] == '\x01') {
    iVar11 = *piVar18;
  }
  local_144 = param_6;
  if (*(char *)((longlong)piVar18 + 0xa1) == '\x01') {
    local_144 = piVar18[1];
  }
  local_168 = param_7;
  if (*(char *)((longlong)piVar18 + 0xa2) == '\x01') {
    local_168 = piVar18[2];
  }
  iVar14 = piVar18[1];
  iVar33 = *piVar18;
  lVar22 = (longlong)param_8;
  iVar28 = *(int *)(param_1[0xc] + lVar22 * 4);
  if (0 < iVar28) {
    iVar13 = 0;
    bVar12 = false;
    do {
      lVar15 = (longlong)iVar13;
      pdVar29 = (double *)
                (*(longlong *)(param_1[0xb] + lVar22 * 8) +
                 lVar15 * *(int *)((longlong)param_1 + 0x4c) * 8 + 0x10);
      while (dVar36 = (*pdVar29 - param_4) * (*pdVar29 - param_4) +
                      (pdVar29[-2] - param_2) * (pdVar29[-2] - param_2) +
                      (pdVar29[-1] - param_3) * (pdVar29[-1] - param_3), *param_10 <= dVar36) {
        lVar15 = lVar15 + 1;
        pdVar29 = pdVar29 + *(int *)((longlong)param_1 + 0x4c);
        if (iVar28 <= lVar15) {
          if (bVar12) goto LAB_1405c71ed;
          goto LAB_1405c71fe;
        }
      }
      *param_10 = dVar36;
      param_9[1] = (int)lVar15;
      iVar13 = (int)lVar15 + 1;
      iVar28 = *(int *)(param_1[0xc] + lVar22 * 4);
      bVar12 = true;
    } while (iVar13 < iVar28);
LAB_1405c71ed:
    *param_9 = param_8;
    param_9[2] = 0;
    param_9[3] = 0;
    param_9[4] = 0;
  }
LAB_1405c71fe:
  lVar22 = *param_1;
  ppiVar5 = (int **)((param_2 - *(double *)(lVar22 + 0x70)) -
                    (double)param_5 * *(double *)(lVar22 + 0x18));
  dVar36 = (param_3 - *(double *)(lVar22 + 0x80)) - (double)param_6 * *(double *)(lVar22 + 0x20);
  ppiVar6 = (int **)((param_4 - *(double *)(lVar22 + 0x90)) -
                    (double)param_7 * *(double *)(lVar22 + 0x28));
  iVar28 = (int)((double)param_1[4] * (double)ppiVar5 * 8.0);
  iVar13 = (int)((double)param_1[5] * dVar36 * 8.0);
  if (iVar28 < 4) {
    local_154 = 0;
    local_128 = (ulonglong)local_128._4_4_ << 0x20;
    ppiVar35 = ppiVar5;
  }
  else {
    iVar23 = 7 - iVar28;
    iVar28 = 0;
    if (0 < iVar23) {
      iVar28 = iVar23;
    }
    local_128 = CONCAT44(local_128._4_4_,0x200001);
    local_154 = 0x60007f;
    ppiVar35 = (int **)((double)param_1[1] - (double)ppiVar5);
  }
  iVar23 = (int)((double)param_1[6] * (double)ppiVar6 * 8.0);
  dVar37 = dVar36;
  if (3 < iVar13) {
    local_154 = local_154 | 0x3003f80;
    local_128 = local_128 | 0x1000080;
    iVar27 = 7 - iVar13;
    dVar37 = (double)param_1[2] - dVar36;
    iVar13 = 0;
    if (0 < iVar27) {
      iVar13 = iVar27;
    }
  }
  local_134 = param_8;
  ppiVar38 = ppiVar6;
  if (3 < iVar23) {
    local_154 = local_154 | 0x181fc000;
    local_128 = local_128 | 0x8004000;
    iVar27 = 7 - iVar23;
    ppiVar38 = (int **)((double)param_1[3] - (double)ppiVar6);
    iVar23 = 0;
    if (0 < iVar27) {
      iVar23 = iVar27;
    }
  }
  dVar2 = *param_10;
  local_170 = param_1;
  local_164 = iVar11;
  if (((dVar2 < (double)ppiVar35 * (double)ppiVar35) && (dVar2 < dVar37 * dVar37)) &&
     (dVar2 < (double)ppiVar38 * (double)ppiVar38)) goto LAB_1405c7c93;
  local_134 = param_8 - ((iVar14 * local_168 + local_144) * iVar33 + iVar11);
  local_140 = param_1[0xf];
  local_150 = (ulonglong)(iVar28 * 0x40 + iVar13 * 0x100 + iVar23 * 0x400);
  lVar22 = param_1[0x10] + local_150 * 8;
  puVar26 = (uint *)(local_140 + local_150 * 4);
  uVar30 = 1;
  if (1 < (int)*puVar26) {
    uVar30 = (ulonglong)*puVar26;
  }
  dVar37 = 0.0;
  dVar2 = 0.0;
  dVar7 = 0.0;
  uVar31 = 0;
  local_160 = uVar30;
  local_130 = lVar22;
  local_120 = puVar26;
  iVar14 = local_168;
  do {
    uVar17 = uVar31;
    dVar40 = *param_10;
    if (dVar40 < *(double *)(lVar22 + uVar17 * 8)) goto LAB_1405c7c93;
    uVar19 = (puVar26[uVar17 + 1] ^ local_154) + (int)local_128;
    iVar28 = (uVar19 & 0x7f) - 0x40;
    iVar33 = iVar28 + iVar11;
    if ((-1 < iVar33) && (iVar33 < (int)param_1[7])) {
      iVar23 = (uVar19 >> 7 & 0x7f) - 0x40;
      iVar13 = iVar23 + local_144;
      if ((-1 < iVar13) && (iVar13 < *(int *)((longlong)param_1 + 0x3c))) {
        iVar20 = (uVar19 >> 0xe & 0x7f) - 0x40;
        iVar27 = iVar20 + iVar14;
        if (((-1 < iVar27) && (iVar27 < (int)param_1[8])) &&
           (local_198 = ppiVar5, local_190 = dVar36, local_188 = ppiVar6, local_180 = dVar40,
           cVar9 = FUN_1405c8248(dVar40,iVar28,iVar23,iVar20), lVar22 = local_130,
           puVar26 = local_120, uVar30 = local_160, iVar11 = local_164, iVar14 = local_168,
           cVar9 == '\0')) {
          piVar18 = (int *)*param_1;
          if ((char)piVar18[0x28] == '\x01') {
            iVar25 = *piVar18;
            if (iVar33 + param_5 < iVar25) {
              iVar33 = iVar25 + iVar33;
              dVar7 = -(*(double *)(piVar18 + 0x1e) - *(double *)(piVar18 + 0x1c));
              param_1 = local_170;
            }
            else {
              dVar7 = 0.0;
              param_1 = local_170;
              if (iVar25 * 2 <= iVar33 + param_5) {
                iVar33 = iVar33 - iVar25;
                dVar7 = *(double *)(piVar18 + 0x1e) - *(double *)(piVar18 + 0x1c);
              }
            }
          }
          if (*(char *)((longlong)piVar18 + 0xa1) == '\x01') {
            iVar25 = piVar18[1];
            if (iVar13 + param_6 < iVar25) {
              iVar13 = iVar25 + iVar13;
              dVar37 = -(*(double *)(piVar18 + 0x22) - *(double *)(piVar18 + 0x20));
              param_1 = local_170;
            }
            else {
              dVar37 = 0.0;
              param_1 = local_170;
              if (iVar25 * 2 <= iVar13 + param_6) {
                iVar13 = iVar13 - iVar25;
                dVar37 = *(double *)(piVar18 + 0x22) - *(double *)(piVar18 + 0x20);
              }
            }
          }
          if (*(char *)((longlong)piVar18 + 0xa2) == '\x01') {
            iVar25 = piVar18[2];
            if (iVar27 + param_7 < iVar25) {
              iVar27 = iVar25 + iVar27;
              dVar2 = -(*(double *)(piVar18 + 0x26) - *(double *)(piVar18 + 0x24));
              param_1 = local_170;
            }
            else {
              dVar2 = 0.0;
              param_1 = local_170;
              if (iVar25 * 2 <= iVar27 + param_7) {
                iVar27 = iVar27 - iVar25;
                dVar2 = *(double *)(piVar18 + 0x26) - *(double *)(piVar18 + 0x24);
              }
            }
          }
          iVar13 = (iVar27 * piVar18[1] + iVar13) * *piVar18 + iVar33 + local_134;
          lVar15 = (longlong)iVar13;
          iVar33 = *(int *)(param_1[0xc] + lVar15 * 4);
          if (0 < iVar33) {
            iVar27 = 0;
            bVar12 = false;
            do {
              lVar34 = (longlong)iVar27;
              pdVar29 = (double *)
                        (*(longlong *)(param_1[0xb] + lVar15 * 8) +
                         lVar34 * *(int *)((longlong)param_1 + 0x4c) * 8 + 0x10);
              while (dVar41 = pdVar29[-2] - (param_2 - dVar7),
                    dVar40 = pdVar29[-1] - (param_3 - dVar37), dVar39 = *pdVar29 - (param_4 - dVar2)
                    , dVar40 = dVar39 * dVar39 + dVar41 * dVar41 + dVar40 * dVar40,
                    *param_10 <= dVar40) {
                lVar34 = lVar34 + 1;
                pdVar29 = pdVar29 + *(int *)((longlong)param_1 + 0x4c);
                if (iVar33 <= lVar34) {
                  param_1 = local_170;
                  if (bVar12) goto LAB_1405c75ea;
                  goto LAB_1405c7632;
                }
              }
              *param_10 = dVar40;
              param_9[1] = (int)lVar34;
              iVar27 = (int)lVar34 + 1;
              iVar33 = *(int *)(local_170[0xc] + lVar15 * 4);
              bVar12 = true;
              param_1 = local_170;
            } while (iVar27 < iVar33);
LAB_1405c75ea:
            *param_9 = iVar13;
            param_9[2] = iVar28;
            param_9[3] = iVar23;
            param_9[4] = iVar20;
            param_1 = local_170;
          }
        }
      }
    }
LAB_1405c7632:
    uVar31 = uVar17 + 1;
  } while (uVar17 + 1 != uVar30);
  plVar1 = param_1 + 0xe;
  *(int *)plVar1 = (int)*plVar1 + 1;
  if ((int)*plVar1 == 0) {
    if (0 < (int)param_1[9]) {
      puVar10 = (undefined4 *)local_170[0x11];
      do {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      } while (puVar10 < (undefined4 *)((longlong)(int)local_170[9] * 4 + local_170[0x11]));
    }
    *(undefined4 *)(local_170 + 0xe) = 1;
    param_1 = local_170;
    lVar22 = local_130;
    iVar11 = local_164;
    iVar14 = local_168;
  }
  local_100 = (int *)param_1[0x12];
  local_f8 = local_100;
  if (uVar17 < 0x3e) {
    local_110 = local_140 + local_150 * 4 + 4;
LAB_1405c769f:
    uVar31 = (ulonglong)(int)uVar30;
    uVar42 = SUB84(*param_10,0);
    uVar43 = (undefined4)((ulonglong)*param_10 >> 0x20);
    local_120 = (uint *)(local_110 + uVar31 * 4);
    local_160 = lVar22 + uVar31 * 8;
    lVar15 = 0;
    uVar19 = local_154;
    local_118 = uVar30;
    do {
      dVar40 = *(double *)(local_160 + lVar15 * 8);
      if ((double)CONCAT44(uVar43,uVar42) <= dVar40 && dVar40 != (double)CONCAT44(uVar43,uVar42))
      goto LAB_1405c7c93;
      uVar21 = (local_120[lVar15] ^ uVar19) + (int)local_128;
      iVar33 = (uVar21 & 0x7f) - 0x40;
      uVar16 = iVar33 + iVar11;
      if ((-1 < (int)uVar16) && ((int)uVar16 < (int)param_1[7])) {
        iVar28 = (uVar21 >> 7 & 0x7f) - 0x40;
        uVar24 = iVar28 + local_144;
        if ((-1 < (int)uVar24) && ((int)uVar24 < *(int *)((longlong)param_1 + 0x3c))) {
          iVar13 = (uVar21 >> 0xe & 0x7f) - 0x40;
          uVar32 = iVar13 + iVar14;
          uVar30 = (ulonglong)uVar32;
          if ((-1 < (int)uVar32) && ((int)uVar32 < (int)param_1[8])) {
            local_108 = (ulonglong)uVar16 * 4 + param_1[0x11];
            uVar17 = (ulonglong)
                     ((*(int *)((longlong)param_1 + 0x3c) * uVar32 + uVar24) * (int)param_1[7]);
            *(int *)(local_108 + uVar17 * 4) = (int)param_1[0xe];
            local_180 = *param_10;
            uVar42 = SUB84(local_180,0);
            uVar43 = (undefined4)((ulonglong)local_180 >> 0x20);
            local_198 = ppiVar5;
            local_190 = dVar36;
            local_188 = ppiVar6;
            local_150 = uVar31;
            local_140 = (ulonglong)uVar24;
            cVar9 = FUN_1405c8248(dVar40,iVar33,iVar28,iVar13);
            iVar23 = (int)local_140;
            param_1 = local_170;
            uVar31 = local_150;
            iVar11 = local_164;
            uVar19 = local_154;
            iVar14 = local_168;
            if (cVar9 == '\0') goto LAB_1405c780c;
          }
        }
      }
      lVar22 = uVar31 + lVar15;
      lVar15 = lVar15 + 1;
      if (0x3d < lVar22) {
        uVar30 = (ulonglong)(uint)((int)local_118 + (int)lVar15);
        lVar22 = local_130;
        break;
      }
    } while( true );
  }
LAB_1405c7a33:
  dVar40 = *param_10;
  uVar42 = SUB84(dVar40,0);
  uVar43 = (undefined4)((ulonglong)dVar40 >> 0x20);
  piVar18 = local_f8;
  piVar8 = local_100;
  if (*(double *)(lVar22 + (uVar30 & 0xffffffff) * 8) <= dVar40) {
    while (piVar18 != piVar8) {
      if (piVar18 == (int *)local_170[0x13]) {
        piVar18 = (int *)local_170[0x12];
      }
      iVar33 = *piVar18;
      iVar28 = piVar18[1];
      iVar13 = piVar18[2];
      piVar18 = piVar18 + 3;
      iVar23 = iVar33 - iVar11;
      iVar20 = iVar28 - local_144;
      iVar27 = iVar13 - iVar14;
      local_180 = (double)CONCAT44(uVar43,uVar42);
      local_198 = ppiVar5;
      local_190 = dVar36;
      local_188 = ppiVar6;
      cVar9 = FUN_1405c8248(local_170,iVar23,iVar20,iVar27);
      iVar11 = local_164;
      iVar14 = local_168;
      if (cVar9 == '\0') {
        piVar4 = (int *)*local_170;
        iVar11 = iVar33;
        if ((char)piVar4[0x28] == '\x01') {
          iVar14 = *piVar4;
          if (iVar33 + param_5 < iVar14) {
            dVar7 = -(*(double *)(piVar4 + 0x1e) - *(double *)(piVar4 + 0x1c));
            iVar11 = iVar14 + iVar33;
          }
          else {
            dVar7 = 0.0;
            if (iVar14 * 2 <= iVar33 + param_5) {
              iVar11 = iVar33 - iVar14;
              dVar7 = *(double *)(piVar4 + 0x1e) - *(double *)(piVar4 + 0x1c);
            }
          }
        }
        iVar14 = iVar28;
        if (*(char *)((longlong)piVar4 + 0xa1) == '\x01') {
          iVar25 = piVar4[1];
          if (iVar28 + param_6 < iVar25) {
            dVar37 = -(*(double *)(piVar4 + 0x22) - *(double *)(piVar4 + 0x20));
            iVar14 = iVar25 + iVar28;
          }
          else {
            dVar37 = 0.0;
            if (iVar25 * 2 <= iVar28 + param_6) {
              iVar14 = iVar28 - iVar25;
              dVar37 = *(double *)(piVar4 + 0x22) - *(double *)(piVar4 + 0x20);
            }
          }
        }
        iVar25 = iVar13;
        if (*(char *)((longlong)piVar4 + 0xa2) == '\x01') {
          iVar3 = piVar4[2];
          if (iVar13 + param_7 < iVar3) {
            dVar2 = -(*(double *)(piVar4 + 0x26) - *(double *)(piVar4 + 0x24));
            iVar25 = iVar3 + iVar13;
          }
          else {
            dVar2 = 0.0;
            if (iVar3 * 2 <= iVar13 + param_7) {
              iVar25 = iVar13 - iVar3;
              dVar2 = *(double *)(piVar4 + 0x26) - *(double *)(piVar4 + 0x24);
            }
          }
        }
        iVar14 = (iVar25 * piVar4[1] + iVar14) * *piVar4 + iVar11 + local_134;
        lVar22 = (longlong)iVar14;
        iVar11 = *(int *)(local_170[0xc] + lVar22 * 4);
        if (0 < iVar11) {
          iVar25 = 0;
          uVar30 = 0;
          do {
            local_128 = uVar30;
            lVar15 = (longlong)iVar25;
            pdVar29 = (double *)
                      (*(longlong *)(local_170[0xb] + lVar22 * 8) +
                       lVar15 * *(int *)((longlong)local_170 + 0x4c) * 8 + 0x10);
            while (dVar41 = pdVar29[-2] - (param_2 - dVar7),
                  dVar40 = pdVar29[-1] - (param_3 - dVar37), dVar39 = *pdVar29 - (param_4 - dVar2),
                  dVar40 = dVar39 * dVar39 + dVar41 * dVar41 + dVar40 * dVar40, *param_10 <= dVar40)
            {
              lVar15 = lVar15 + 1;
              pdVar29 = pdVar29 + *(int *)((longlong)local_170 + 0x4c);
              if (iVar11 <= lVar15) {
                if ((char)local_128 != '\0') goto LAB_1405c7c79;
                goto LAB_1405c7b2f;
              }
            }
            *param_10 = dVar40;
            param_9[1] = (int)lVar15;
            iVar25 = (int)lVar15 + 1;
            iVar11 = *(int *)(local_170[0xc] + lVar22 * 4);
            uVar30 = CONCAT71((int7)((ulonglong)local_170[0xc] >> 8),1);
          } while (iVar25 < iVar11);
LAB_1405c7c79:
          *param_9 = iVar14;
          param_9[2] = iVar23;
          param_9[3] = iVar20;
          param_9[4] = iVar27;
        }
LAB_1405c7b2f:
        if (piVar18 < piVar8 || (longlong)piVar18 - (longlong)piVar8 == 0) {
          lVar22 = ((longlong)piVar18 - local_170[0x12] >> 2) +
                   (local_170[0x13] - (longlong)piVar8 >> 2);
        }
        else {
          lVar22 = (longlong)piVar18 - (longlong)piVar8 >> 2;
        }
        local_f8 = piVar18;
        if (lVar22 < 0x12) {
          FUN_146c968be(local_170,&local_f8,&local_100);
        }
        local_198 = &local_100;
        FUN_1403b1b6e(local_170,iVar33,iVar28,iVar13);
        uVar42 = SUB84(*param_10,0);
        uVar43 = (undefined4)((ulonglong)*param_10 >> 0x20);
        piVar18 = local_f8;
        iVar11 = local_164;
        iVar14 = local_168;
        piVar8 = local_100;
      }
    }
  }
LAB_1405c7c93:
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1405c780c:
  piVar18 = (int *)*local_170;
  uVar19 = uVar16;
  if ((char)piVar18[0x28] == '\x01') {
    iVar11 = *piVar18;
    if ((int)(uVar16 + param_5) < iVar11) {
      dVar7 = -(*(double *)(piVar18 + 0x1e) - *(double *)(piVar18 + 0x1c));
      uVar19 = iVar11 + uVar16;
    }
    else {
      dVar7 = 0.0;
      if (iVar11 * 2 <= (int)(uVar16 + param_5)) {
        uVar19 = uVar16 - iVar11;
        dVar7 = *(double *)(piVar18 + 0x1e) - *(double *)(piVar18 + 0x1c);
      }
    }
  }
  if (*(char *)((longlong)piVar18 + 0xa1) == '\x01') {
    iVar11 = piVar18[1];
    if (iVar23 + param_6 < iVar11) {
      iVar23 = iVar11 + iVar23;
      dVar37 = -(*(double *)(piVar18 + 0x22) - *(double *)(piVar18 + 0x20));
    }
    else {
      dVar37 = 0.0;
      if (iVar11 * 2 <= iVar23 + param_6) {
        iVar23 = iVar23 - iVar11;
        dVar37 = *(double *)(piVar18 + 0x22) - *(double *)(piVar18 + 0x20);
      }
    }
  }
  if (*(char *)((longlong)piVar18 + 0xa2) == '\x01') {
    iVar11 = piVar18[2];
    if ((int)(uVar32 + param_7) < iVar11) {
      uVar32 = iVar11 + uVar32;
      dVar2 = -(*(double *)(piVar18 + 0x26) - *(double *)(piVar18 + 0x24));
    }
    else {
      dVar2 = 0.0;
      if (iVar11 * 2 <= (int)(uVar32 + param_7)) {
        uVar32 = uVar32 - iVar11;
        dVar2 = *(double *)(piVar18 + 0x26) - *(double *)(piVar18 + 0x24);
      }
    }
  }
  iVar14 = (uVar32 * piVar18[1] + iVar23) * *piVar18 + uVar19 + local_134;
  lVar22 = (longlong)iVar14;
  iVar11 = *(int *)(local_170[0xc] + lVar22 * 4);
  if (0 < iVar11) {
    iVar23 = 0;
    bVar12 = false;
    do {
      lVar34 = (longlong)iVar23;
      pdVar29 = (double *)
                (*(longlong *)(local_170[0xb] + lVar22 * 8) +
                 lVar34 * *(int *)((longlong)local_170 + 0x4c) * 8 + 0x10);
      while (dVar41 = pdVar29[-2] - (param_2 - dVar7), dVar40 = pdVar29[-1] - (param_3 - dVar37),
            dVar39 = *pdVar29 - (param_4 - dVar2),
            dVar40 = dVar39 * dVar39 + dVar41 * dVar41 + dVar40 * dVar40, *param_10 <= dVar40) {
        lVar34 = lVar34 + 1;
        pdVar29 = pdVar29 + *(int *)((longlong)local_170 + 0x4c);
        if (iVar11 <= lVar34) {
          if (bVar12) goto LAB_1405c79de;
          goto LAB_1405c786f;
        }
      }
      *param_10 = dVar40;
      param_9[1] = (int)lVar34;
      iVar23 = (int)lVar34 + 1;
      iVar11 = *(int *)(local_170[0xc] + lVar22 * 4);
      bVar12 = true;
    } while (iVar23 < iVar11);
LAB_1405c79de:
    *param_9 = iVar14;
    param_9[2] = iVar33;
    param_9[3] = iVar28;
    param_9[4] = iVar13;
  }
LAB_1405c786f:
  local_160 = uVar30;
  if ((int *)(local_170[0x13] + -0x48) < local_100) {
    FUN_146c968be(local_170,&local_f8,&local_100);
  }
  uVar30 = (local_150 & 0xffffffff) + lVar15 + 1;
  lVar34 = local_150 + lVar15;
  local_188 = &local_100;
  local_190 = (double)CONCAT44(local_190._4_4_,(int)local_160);
  local_198 = (int **)CONCAT44(local_198._4_4_,(int)local_140);
  FUN_1403b138c(local_170,uVar21,local_108 + uVar17 * 4,uVar16);
  param_1 = local_170;
  lVar22 = local_130;
  iVar11 = local_164;
  iVar14 = local_168;
  if (0x3d < lVar34) goto LAB_1405c7d2c;
  goto LAB_1405c769f;
LAB_1405c7d2c:
  uVar30 = (ulonglong)((int)local_118 + (int)lVar15 + 1);
  goto LAB_1405c7a33;
}



// FUNCTION 1405c8248 FUN_1405c8248 body=118 status=ok
// SIG undefined FUN_1405c8248(void)

bool FUN_1405c8248(longlong param_1,int param_2,int param_3,int param_4,double param_5,
                  double param_6,double param_7,double param_8)

{
  double dVar1;
  
  if (param_2 < 1) {
    dVar1 = 0.0;
    if (param_2 < 0) {
      param_2 = param_2 + 1;
      goto LAB_1405c8254;
    }
  }
  else {
LAB_1405c8254:
    param_5 = (double)param_2 * *(double *)(param_1 + 8) - param_5;
    dVar1 = param_5 * param_5;
  }
  if (param_3 < 1) {
    if (param_3 < 0) {
      param_3 = param_3 + 1;
      goto LAB_1405c8274;
    }
  }
  else {
LAB_1405c8274:
    param_6 = (double)param_3 * *(double *)(param_1 + 0x10) - param_6;
    dVar1 = dVar1 + param_6 * param_6;
  }
  if (param_4 < 1) {
    if (-1 < param_4) goto LAB_1405c8299;
    param_4 = param_4 + 1;
  }
  param_7 = (double)param_4 * *(double *)(param_1 + 0x18) - param_7;
  dVar1 = dVar1 + param_7 * param_7;
LAB_1405c8299:
  return param_8 < dVar1;
}



// FUNCTION 1405c82be FUN_1405c82be body=4326 status=ok
// SIG undefined FUN_1405c82be(void)

void FUN_1405c82be(byte *param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auVar6 [16];
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint *puVar26;
  byte *pbVar27;
  byte bVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  float fVar33;
  undefined1 auStack_238 [40];
  float *local_210;
  uint local_208;
  float local_204;
  float *local_200;
  uint local_1f8;
  float local_1f4;
  float *local_1f0;
  uint local_1e8;
  float local_1e4;
  undefined4 *local_1e0;
  uint local_1d8;
  undefined4 local_1d4;
  undefined8 *local_1d0;
  uint local_1c8;
  undefined1 local_1c4 [12];
  uint local_1b8;
  undefined1 local_1b4 [12];
  uint local_1a8;
  undefined4 local_1a4;
  undefined8 *local_1a0;
  uint local_198;
  undefined1 local_194 [12];
  uint local_188;
  undefined1 local_184 [12];
  uint local_178;
  undefined1 local_174 [12];
  uint local_168;
  float local_164;
  float *local_160;
  uint local_158;
  float local_154;
  float *local_150;
  uint local_148;
  float local_144;
  undefined1 local_140 [8];
  longlong local_138;
  undefined8 *local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [72];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1405c93a6(local_140,param_1);
  local_130 = (undefined8 *)0x0;
  puVar24 = (undefined8 *)FUN_1405c943a(local_138,local_128);
  puVar22 = local_130;
  puVar12 = local_130;
  if (local_130 != puVar24) {
    if (puVar24 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
      UNLOCK();
    }
    puVar12 = puVar24;
    if (local_130 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_130 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        puVar12 = (undefined8 *)*local_130;
        local_130 = puVar24;
        (*(code *)*puVar12)(puVar22,1);
        puVar12 = local_130;
      }
    }
  }
  local_130 = puVar12;
  if (*param_1 == 1) {
    iVar30 = *(int *)(param_1 + 0x30);
    uVar23 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar30);
    *(int *)(param_1 + 0x30) = iVar30 + 1;
    lVar31 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar30 * 8);
    iVar30 = *(int *)(param_1 + 0x44) * uVar23;
    bVar28 = 1;
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    uVar23 = (uint)(uVar7 >> 0xf);
    lVar10 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar7 < 0) {
      lVar31 = (ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70);
    }
    else {
      iVar30 = **(int **)(lVar10 + 0x20);
      lVar31 = 0;
      if (iVar30 <= (int)uVar25) {
        do {
          uVar25 = uVar25 - iVar30;
          iVar30 = (*(int **)(lVar10 + 0x20))[lVar31 + 1];
          lVar31 = lVar31 + 1;
        } while (iVar30 <= (int)uVar25);
      }
      lVar31 = (longlong)(int)uVar25 + *(longlong *)(*(longlong *)(lVar10 + 0x18) + lVar31 * 8);
    }
    iVar30 = *(int *)(lVar10 + 0x4c) * uVar23;
    bVar28 = *param_1;
  }
  if ((bVar28 & 1) == 0) {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_174._4_8_ = &local_164;
      local_168 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_168 = 1;
      local_174._4_8_ =
           (ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70) +
           (longlong)*(int *)(lVar10 + 0x4c) * 4;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_168 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_174._4_8_ =
         (longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8);
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_158 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_160 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_160 = &local_154;
      local_158 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_158 = 1;
      local_160 = (float *)((ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) +
                            *(longlong *)(lVar10 + 0x70) + (longlong)*(int *)(lVar10 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_148 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_150 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_150 = &local_144;
      local_148 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_148 = 1;
      local_150 = (float *)((ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) +
                            *(longlong *)(lVar10 + 0x70) + (longlong)*(int *)(lVar10 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_1a8 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_1b4._4_8_ =
         (longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8);
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_1b4._4_8_ = &local_1a4;
      local_1a8 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_1a8 = 1;
      local_1b4._4_8_ =
           (ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70) +
           (longlong)*(int *)(lVar10 + 0x4c) * 4;
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_198 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_1a0 = (undefined8 *)
                ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_1a0 = (undefined8 *)local_194;
      local_198 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_198 = 1;
      local_1a0 = (undefined8 *)
                  ((ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70) +
                  (longlong)*(int *)(lVar10 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_188 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_194._4_8_ =
         (longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8);
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_194._4_8_ = local_184;
      local_188 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_188 = 1;
      local_194._4_8_ =
           (ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70) +
           (longlong)*(int *)(lVar10 + 0x4c) * 4;
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_178 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_184._4_8_ =
         (longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8);
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_184._4_8_ = local_174;
      local_178 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_178 = 1;
      local_184._4_8_ =
           (ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70) +
           (longlong)*(int *)(lVar10 + 0x4c) * 4;
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_1d8 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_1e0 = (undefined4 *)
                ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_1e0 = &local_1d4;
      local_1d8 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_1d8 = 1;
      local_1e0 = (undefined4 *)
                  ((ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70) +
                  (longlong)*(int *)(lVar10 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_1c8 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_1d0 = (undefined8 *)
                ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_1d0 = (undefined8 *)local_1c4;
      local_1c8 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_1c8 = 1;
      local_1d0 = (undefined8 *)
                  ((ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70) +
                  (longlong)*(int *)(lVar10 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_1b8 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_1c4._4_8_ =
         (longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8);
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_1c4._4_8_ = local_1b4;
      local_1b8 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_1b8 = 1;
      local_1c4._4_8_ =
           (ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70) +
           (longlong)*(int *)(lVar10 + 0x4c) * 4;
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_208 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_210 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_210 = &local_204;
      local_208 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_208 = 1;
      local_210 = (float *)((ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) +
                            *(longlong *)(lVar10 + 0x70) + (longlong)*(int *)(lVar10 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_1f8 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_200 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_200 = &local_1f4;
      local_1f8 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_1f8 = 1;
      local_200 = (float *)((ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) +
                            *(longlong *)(lVar10 + 0x70) + (longlong)*(int *)(lVar10 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar28 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_1e8 = (uint)bVar28;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_1f0 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar28 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar25 = uVar7 & 0x7fff;
    if (uVar25 == 0x7fff) {
      local_1f0 = &local_1e4;
      local_1e8 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x80);
      local_1e8 = 1;
      local_1f0 = (float *)((ulonglong)(uVar25 * *(int *)(lVar10 + 0x80)) +
                            *(longlong *)(lVar10 + 0x70) + (longlong)*(int *)(lVar10 + 0x4c) * 4);
    }
  }
  fVar13 = DAT_14c846338;
  fVar33 = DAT_14c846330._4_4_;
  fVar5 = (float)DAT_14c846330;
  if (*(int *)(local_138 + 0x3c0) < 1) {
    FUN_144a928e2(local_118,local_138 + 0x40);
    uVar21 = DAT_14c846358;
    uVar20 = DAT_14c846350._4_4_;
    uVar19 = (undefined4)DAT_14c846350;
    uVar18 = DAT_14c84634c;
    uVar17 = DAT_14c846348;
    uVar16 = DAT_14c846344;
    uVar15 = DAT_14c84633c._4_4_;
    FUN_144a928e2(local_118,local_138 + 0xc0);
    pbVar27 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != 0) {
      pbVar27 = param_1 + 0x3c;
    }
    if (0 < *(int *)pbVar27) {
      iVar30 = 0;
      do {
        *(float *)local_174._4_8_ = fVar5;
        *local_160 = fVar33;
        *local_150 = fVar13;
        local_174._4_8_ = (float *)(local_174._4_8_ + (longlong)(int)local_168 * 4);
        local_160 = local_160 + (int)local_158;
        local_150 = local_150 + (int)local_148;
        *(undefined4 *)local_1b4._4_8_ = uVar15;
        *(undefined4 *)local_1a0 = uVar16;
        *(undefined4 *)local_194._4_8_ = uVar17;
        *(undefined4 *)local_184._4_8_ = uVar18;
        local_1b4._4_8_ = (undefined4 *)(local_1b4._4_8_ + (longlong)(int)local_1a8 * 4);
        local_1a0 = (undefined8 *)((longlong)local_1a0 + (longlong)(int)local_198 * 4);
        local_194._4_8_ = (undefined8 *)(local_194._4_8_ + (longlong)(int)local_188 * 4);
        local_184._4_8_ = (undefined8 *)(local_184._4_8_ + (longlong)(int)local_178 * 4);
        *local_1e0 = uVar19;
        *(undefined4 *)local_1d0 = uVar20;
        *(undefined4 *)local_1c4._4_8_ = uVar21;
        pfVar4 = local_210 + (int)local_208;
        local_1e0 = local_1e0 + (int)local_1d8;
        local_1d0 = (undefined8 *)((longlong)local_1d0 + (longlong)(int)local_1c8 * 4);
        local_1c4._4_8_ = (undefined8 *)(local_1c4._4_8_ + (longlong)(int)local_1b8 * 4);
        *local_210 = (float)DAT_14c846330;
        pfVar2 = local_200 + (int)local_1f8;
        *local_200 = DAT_14c846330._4_4_;
        pfVar3 = local_1f0 + (int)local_1e8;
        *local_1f0 = DAT_14c846338;
        iVar30 = iVar30 + 1;
        pbVar27 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != 0) {
          pbVar27 = param_1 + 0x3c;
        }
        local_210 = pfVar4;
        local_200 = pfVar2;
        local_1f0 = pfVar3;
      } while (iVar30 < *(int *)pbVar27);
    }
  }
  else {
    pbVar27 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != 0) {
      pbVar27 = param_1 + 0x3c;
    }
    if (0 < *(int *)pbVar27) {
      puVar26 = (uint *)(lVar31 + (longlong)iVar30 * 4);
      uVar25 = *(int *)(local_138 + 0x3c0) - 1;
      iVar30 = 0;
      do {
        uVar32 = *puVar26;
        if ((int)uVar25 <= (int)*puVar26) {
          uVar32 = uVar25;
        }
        if ((int)uVar32 < 1) {
          uVar32 = 0;
        }
        lVar31 = *(longlong *)(local_138 + 0x3b0);
        uVar29 = (ulonglong)
                 ((uint)*(ushort *)(*(longlong *)(local_138 + 0x3c8) + (ulonglong)uVar32 * 2) * 0x30
                 );
        pfVar4 = (float *)(lVar31 + 0x10 + uVar29);
        fVar13 = *pfVar4;
        fVar14 = pfVar4[1];
        fVar5 = *(float *)(lVar31 + 0x18 + uVar29);
        fVar33 = *(float *)(local_138 + 0x2f0);
        *(float *)local_174._4_8_ = fVar13;
        *local_160 = fVar14;
        *local_150 = fVar5;
        auVar6 = *(undefined1 (*) [16])(lVar31 + uVar29);
        local_174._4_8_ = (float *)(local_174._4_8_ + (longlong)(int)local_168 * 4);
        local_160 = local_160 + (int)local_158;
        local_150 = local_150 + (int)local_148;
        *(int *)local_1b4._4_8_ = auVar6._0_4_;
        uVar11 = extractps(auVar6,1);
        *local_1a0 = uVar11;
        fVar33 = (float)(-(uint)(0.0 < fVar33) & (uint)(1.0 / fVar33));
        uVar11 = extractps(auVar6,2);
        *(undefined8 *)local_194._4_8_ = uVar11;
        uVar11 = extractps(auVar6,3);
        *(undefined8 *)local_184._4_8_ = uVar11;
        auVar6 = *(undefined1 (*) [16])(lVar31 + 0x20 + uVar29);
        local_1b4._4_8_ = (undefined4 *)(local_1b4._4_8_ + (longlong)(int)local_1a8 * 4);
        local_1a0 = (undefined8 *)((longlong)local_1a0 + (longlong)(int)local_198 * 4);
        local_194._4_8_ = (undefined8 *)(local_194._4_8_ + (longlong)(int)local_188 * 4);
        local_184._4_8_ = (undefined8 *)(local_184._4_8_ + (longlong)(int)local_178 * 4);
        *local_1e0 = auVar6._0_4_;
        uVar11 = extractps(auVar6,1);
        *local_1d0 = uVar11;
        uVar11 = extractps(auVar6,2);
        *(undefined8 *)local_1c4._4_8_ = uVar11;
        pfVar4 = local_210 + (int)local_208;
        local_1e0 = local_1e0 + (int)local_1d8;
        local_1d0 = (undefined8 *)((longlong)local_1d0 + (longlong)(int)local_1c8 * 4);
        local_1c4._4_8_ = (undefined8 *)(local_1c4._4_8_ + (longlong)(int)local_1b8 * 4);
        *local_210 = fVar33 * (fVar13 - fVar13);
        pfVar2 = local_200 + (int)local_1f8;
        *local_200 = (fVar14 - fVar14) * fVar33;
        pfVar3 = local_1f0 + (int)local_1e8;
        *local_1f0 = (fVar5 - fVar5) * fVar33;
        iVar30 = iVar30 + 1;
        pbVar27 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != 0) {
          pbVar27 = param_1 + 0x3c;
        }
        puVar26 = (uint *)((longlong)puVar26 + (ulonglong)(uVar23 << 2));
        local_210 = pfVar4;
        local_200 = pfVar2;
        local_1f0 = pfVar3;
      } while (iVar30 < *(int *)pbVar27);
    }
  }
  if (local_130 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_130 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_130)(local_130,1);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405c93a6 FUN_1405c93a6 body=148 status=ok
// SIG undefined FUN_1405c93a6(void)

void FUN_1405c93a6(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 1405c943a FUN_1405c943a body=726 status=ok
// SIG undefined FUN_1405c943a(void)

longlong FUN_1405c943a(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((param_1[3] == 0) || (uVar5 = param_1[2], (int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5))
     || (((plVar6 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[3])) ||
         ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) {
    *param_2 = 0;
  }
  else {
    lVar2 = *plVar6;
    *param_2 = 0;
    lVar3 = 0;
    if ((lVar2 == 0) || ((param_1[0xca] & 8) == 0)) goto LAB_1405c960c;
    plVar6 = *(longlong **)(lVar2 + 0xe0);
    iVar1 = (int)plVar6[1];
    iVar4 = -1;
    if (0 < iVar1) {
      uVar5 = (uint)*(byte *)((longlong)plVar6 + 0x8f);
      if ((int)(uint)*(byte *)((longlong)plVar6 + 0x8f) < (int)param_1[0xd9]) {
        uVar5 = param_1[0xd9];
      }
      if (iVar1 - 1U <= uVar5) {
        uVar5 = iVar1 - 1U;
      }
      uVar7 = (ulonglong)uVar5;
      plVar6 = (longlong *)(uVar7 * 8 + *plVar6);
      do {
        iVar4 = (int)uVar7;
        if ((*(int *)(*plVar6 + 0x10c) != 0) && (*(int *)(*plVar6 + 100) != 0)) break;
        uVar5 = iVar4 + 1;
        uVar7 = (ulonglong)uVar5;
        plVar6 = plVar6 + 1;
        iVar4 = -1;
      } while ((int)uVar5 < iVar1);
    }
    uVar5 = param_1[0xda];
    if ((((int)uVar5 < iVar1) && (iVar4 <= (int)uVar5)) && (-1 < (int)uVar5)) {
      if (((((param_1[1] != 0) && (uVar5 = *param_1, -1 < (int)uVar5)) &&
           (((int)uVar5 < DAT_14c9647dc &&
            ((plVar6 = (longlong *)
                       ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == param_1[1])))))) &&
          ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (lVar3 = *plVar6, lVar3 != 0)) {
        if (DAT_14cad3688 == 0) {
          local_50 = &local_30;
          local_30 = FUN_144b223ce;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1417963e0;
          local_58 = &LAB_147a2f4c9;
          local_60 = &LAB_1400ea6f8;
          local_68 = L"Engine";
          local_70 = 0x200000000000;
          local_78 = 0x10000004;
          local_80 = 0x10;
          local_88 = 0x720;
          FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
        }
        if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) == DAT_14cad3688 + 0x30)) {
          uVar5 = param_1[0xda];
          if ((-1 < (longlong)(int)uVar5) && ((int)uVar5 < *(int *)(lVar3 + 0x6b0))) {
            *param_2 = *(undefined8 *)
                        (*(longlong *)(lVar3 + 0x6a8) + 0x40 + (longlong)(int)uVar5 * 0xa0);
          }
        }
      }
      lVar3 = *(longlong *)(**(longlong **)(lVar2 + 0xe0) + (longlong)(int)param_1[0xda] * 8);
      if (((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x10c))) && (*(int *)(lVar3 + 100) != 0))
      goto LAB_1405c960c;
    }
  }
  lVar3 = 0;
LAB_1405c960c:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1405c9712 FUN_1405c9712 body=25 status=ok
// SIG undefined FUN_1405c9712(void)

undefined8 FUN_1405c9712(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1405c9736 FUN_1405c9736 body=194 status=ok
// SIG undefined FUN_1405c9736(void)

void FUN_1405c9736(longlong param_1)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x68))(param_1 + -8);
  if (cVar2 != '\0') {
    QueryPerformanceCounter(&local_38);
    dVar5 = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
    dVar1 = dVar5 - *(double *)(param_1 + 0x218);
    if (0.10000000149011612 < dVar1) {
      *(double *)(param_1 + 0x218) = dVar5;
      lVar3 = FUN_141054386();
      (**(code **)(**(longlong **)(lVar3 + 0x20) + 8))(*(longlong **)(lVar3 + 0x20),0);
      uVar4 = (**(code **)(*(longlong *)(param_1 + -8) + 0xa0))(param_1 + -8);
      FUN_14485dd80(uVar4,(float)dVar1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c97fa FUN_1405c97fa body=99 status=ok
// SIG undefined FUN_1405c97fa(void)

void FUN_1405c97fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001405c9859. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001405c983c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1405c9868 FUN_1405c9868 body=652 status=ok
// SIG undefined FUN_1405c9868(void)

/* WARNING: Removing unreachable block (ram,0x0001405c9ab6) */
/* WARNING: Removing unreachable block (ram,0x0001405c9ac0) */

void FUN_1405c9868(uint *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_a8 [40];
  uint local_80 [2];
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = param_1[0x302];
  if (uVar9 != 0) {
    param_1[0x304] = param_1[0x304] + 1;
    if ((char)param_1[0x305] == '\x01') {
      FUN_140c41752(param_1);
      *(undefined1 *)(param_1 + 0x305) = 0;
      uVar9 = param_1[0x302];
    }
    if (0 < (int)uVar9) {
      do {
        puVar10 = *(uint **)(param_1 + 0x300);
        if (*(uint **)(param_1 + 0x300) == (uint *)0x0) {
          puVar10 = param_1;
        }
        if (param_1[0x304] < *puVar10) break;
        local_78 = 0;
        plStack_70 = (longlong *)0x0;
        local_80[0] = *puVar10;
        if (puVar10 != local_80) {
          local_78 = *(longlong *)(puVar10 + 2);
          puVar10[2] = 0;
          puVar10[3] = 0;
          plStack_70 = *(longlong **)(puVar10 + 4);
          puVar10[4] = 0;
          puVar10[5] = 0;
        }
        FUN_14053e0c4(param_1,0);
        plVar8 = plStack_70;
        uVar9 = param_1[0x302];
        puVar10 = *(uint **)(param_1 + 0x300);
        if (*(uint **)(param_1 + 0x300) == (uint *)0x0) {
          puVar10 = param_1;
        }
        if (1 < (int)uVar9) {
          iVar11 = 0;
          iVar13 = 1;
          iVar14 = 0;
          do {
            iVar11 = iVar11 + 2;
            iVar12 = iVar13;
            if ((iVar11 < (int)uVar9) &&
               (puVar10[(longlong)iVar11 * 6] <= puVar10[(longlong)iVar13 * 6])) {
              iVar12 = iVar11;
            }
            if (puVar10[(longlong)iVar14 * 6] <= puVar10[(longlong)iVar12 * 6]) break;
            puVar3 = puVar10 + (longlong)iVar14 * 6;
            puVar4 = puVar10 + (longlong)iVar12 * 6;
            local_58 = *(undefined8 *)(puVar3 + 4);
            uVar5 = *(undefined8 *)puVar3;
            uVar6 = *(undefined8 *)(puVar3 + 2);
            *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar4 + 4);
            uVar7 = *(undefined8 *)(puVar4 + 2);
            *(undefined8 *)puVar3 = *(undefined8 *)puVar4;
            *(undefined8 *)(puVar3 + 2) = uVar7;
            *(undefined8 *)(puVar4 + 4) = local_58;
            local_68._0_4_ = (uint)uVar5;
            local_68._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
            uStack_60._0_4_ = (uint)uVar6;
            uStack_60._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
            *puVar4 = (uint)local_68;
            puVar4[1] = local_68._4_4_;
            puVar4[2] = (uint)uStack_60;
            puVar4[3] = uStack_60._4_4_;
            iVar11 = iVar12 * 2;
            iVar13 = iVar12 * 2 + 1;
            local_68 = uVar5;
            uStack_60 = uVar6;
            iVar14 = iVar12;
          } while (iVar13 < (int)uVar9);
        }
        if (plStack_70 != (longlong *)0x0) {
          iVar11 = (int)plStack_70[1];
          do {
            if (iVar11 == 0) goto LAB_1405c9a5e;
            LOCK();
            iVar14 = (int)plStack_70[1];
            bVar15 = iVar11 == iVar14;
            if (bVar15) {
              *(int *)(plStack_70 + 1) = iVar11 + 1;
              iVar14 = iVar11;
            }
            iVar11 = iVar14;
            UNLOCK();
          } while (!bVar15);
          if (local_78 != 0) {
            FUN_14030896c(local_78,local_78 + 0x78,*(undefined1 *)(local_78 + 0x24),
                          *(undefined4 *)(local_78 + 0x28));
          }
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
LAB_1405c9a5e:
          if (local_78 == 0) {
LAB_1405c9a96:
            if (plStack_70 != (longlong *)0x0) {
LAB_1405c9a9b:
              LOCK();
              piVar2 = (int *)((longlong)plStack_70 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plStack_70 + 0x10))();
              }
            }
          }
          else if (plStack_70 != (longlong *)0x0) {
            if (0 < (int)plStack_70[1]) {
              local_80[0] = param_1[0x304] + 5;
              FUN_140c403ba(param_1,local_80,&local_68);
              goto LAB_1405c9a96;
            }
            goto LAB_1405c9a9b;
          }
        }
      } while (0 < (int)param_1[0x302]);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405c9af5 FUN_1405c9af5 body=2260 status=ok
// SIG undefined FUN_1405c9af5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1405c9af5(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double *local_1f0;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 local_1b8 [12];
  undefined1 local_158 [16];
  double *local_148;
  double *pdStack_140;
  double *local_138;
  undefined8 *puStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [24];
  ulonglong local_f0;
  
  pdVar5 = param_6;
  pdVar4 = param_5;
  auVar30 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  bVar1 = *(byte *)(param_1 + 0x1c);
  if (bVar1 == 4) {
    FUN_1447dc19e(param_1 + 0x30,local_158,param_2);
    local_1f0 = pdVar5;
    local_1f8 = pdVar4;
    cVar6 = FUN_1405c9af5(*(undefined8 *)(param_1 + 0x20),local_158,param_3,param_4);
    goto LAB_1405c9f5b;
  }
  local_158 = ZEXT816(0);
  local_148 = (double *)0x0;
  pdStack_140 = (double *)&DAT_3ff0000000000000;
  local_138 = (double *)0x0;
  puStack_130 = (undefined8 *)0x0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_118 = _DAT_149934d80;
  local_108._0_16_ = ZEXT816(0x3ff0000000000000);
  dVar17 = param_2[2] * param_2[2] + *param_2 * *param_2;
  dVar21 = param_2[3] * param_2[3] + param_2[1] * param_2[1];
  auVar16._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar17 + dVar21)));
  auVar16._0_8_ =
       -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar17 + dVar21)));
  iVar7 = movmskpd((int)(DAT_14c707940 ^ (ulonglong)auStack_218),auVar16);
  if (iVar7 == 0) {
    auVar16 = minpd(*(undefined1 (*) [16])(param_4 + 8),*(undefined1 (*) [16])(param_2 + 8));
    auVar19 = minpd(*(undefined1 (*) [16])(param_4 + 10),*(undefined1 (*) [16])(param_2 + 10));
    auVar33._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
    iVar7 = movmskpd(0,auVar33);
    auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
    auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
    uVar8 = movmskpd((int)param_1,auVar20);
    if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8460b0) && (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1))
      {
        DAT_14c8460a0 = 0x322bcc77322bcc77;
        DAT_14c8460a8 = 0x322bcc77322bcc77;
        _Init_thread_footer(&DAT_14c8460b0);
      }
      auVar16 = *(undefined1 (*) [16])(param_2 + 8);
      auVar33 = divpd(auVar30,auVar16);
      auVar30 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_2 + 10));
      dVar18 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar16._0_8_)) &
                       auVar33._0_8_);
      dVar22 = (double)(-(ulonglong)
                         ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(auVar16._8_8_)) &
                       auVar33._8_8_);
      dVar12 = (double)(-(ulonglong)
                         ((double)(float)DAT_14c8460a8 <
                         ABS(SUB168(*(undefined1 (*) [16])(param_2 + 10),0))) & auVar30._0_8_);
      dVar27 = param_4[4] - param_2[4];
      dVar28 = param_4[5] - param_2[5];
      dVar32 = param_4[6] - param_2[6];
      dVar29 = -*param_2;
      dVar31 = -param_2[1];
      dVar23 = param_2[2] * -1.0;
      dVar25 = param_2[3] * 1.0;
      dVar13 = dVar28 * dVar29 - dVar27 * dVar31;
      dVar15 = dVar32 * dVar31 - dVar28 * dVar23;
      dVar34 = dVar27 * dVar23 - dVar32 * dVar29;
      dVar35 = dVar25 * 0.0 - dVar25 * 0.0;
      dVar15 = dVar15 + dVar15;
      dVar34 = dVar34 + dVar34;
      dVar13 = dVar13 + dVar13;
      dVar35 = dVar35 + dVar35;
      dVar2 = *param_4;
      dVar3 = param_4[1];
      dVar14 = param_4[2];
      dVar26 = param_4[3];
      dVar21 = param_2[1];
      dVar17 = param_2[1];
      dVar24 = dVar2 * dVar23 * 1.0 +
               ((dVar3 * dVar25 - *param_2 * dVar14 * -1.0) - dVar26 * dVar17);
      local_118._8_8_ = param_4[9] * dVar22;
      local_118._0_8_ = param_4[8] * dVar18;
      local_108._8_8_ = param_4[0xb] * 0.0;
      local_108._0_8_ = param_4[10] * dVar12;
      local_138 = (double *)
                  (((dVar13 * dVar31 - dVar23 * dVar34) + dVar25 * dVar15 + dVar27) * dVar18);
      puStack_130 = (undefined8 *)
                    (((dVar15 * dVar23 - dVar13 * dVar29) + dVar25 * dVar34 + dVar28) * dVar22);
      local_128 = ((dVar34 * dVar29 - dVar31 * dVar15) + dVar25 * dVar13 + dVar32) * dVar12;
      dStack_120 = ((dVar35 * dVar25 - dVar35 * dVar25) + dVar25 * dVar35 + 0.0) * 0.0;
      local_158._8_4_ = SUB84(dVar24,0);
      local_158._0_8_ =
           dVar3 * dVar23 * -1.0 + ((dVar2 * dVar25 - *param_2 * dVar26 * 1.0) - dVar14 * dVar21);
      local_158._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      local_148 = (double *)
                  (dVar26 * dVar23 * 1.0 +
                  dVar21 * dVar2 + (dVar25 * dVar14 - *param_2 * dVar3 * 1.0));
      pdStack_140 = (double *)
                    (dVar14 * dVar23 * -1.0 +
                    dVar17 * dVar3 + (dVar25 * dVar26 - *param_2 * dVar2 * -1.0));
    }
    else {
      FUN_1402db8fa(local_158,param_4,param_2);
    }
    puVar10 = (undefined8 *)local_158;
  }
  else {
    puVar10 = &DAT_14c846480;
  }
  puVar11 = local_1b8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_1c0 = param_2[6] - param_4[6];
    local_1d0 = param_2[4] - param_4[4];
    dStack_1c8 = param_2[5] - param_4[5];
    if (pdVar5 == (double *)0x0) {
      local_158._8_8_ = &param_5;
      local_158._0_8_ = param_3;
      local_148 = &local_1d0;
      cVar6 = FUN_1405ca3ca(param_1,local_1b8);
    }
    else {
      local_158._8_8_ = &param_6;
      local_158._0_8_ = param_3;
      local_148 = (double *)&param_5;
      pdStack_140 = &local_1d0;
      local_138 = param_2;
      cVar6 = FUN_146cc660a(param_1,local_1b8);
    }
    goto LAB_1405c9f5b;
  }
  if (bVar1 == 0xc) {
    local_1f8 = pdVar5;
    cVar6 = FUN_1405cb3a6(param_1,param_3,local_1b8,pdVar4);
  }
  else if (bVar1 < 0xb) {
    if (bVar1 == 5) {
LAB_1405ca33d:
      local_1d0 = (double)((ulonglong)local_1d0 & 0xffffffffffffff00);
      local_1d8 = local_158;
      local_158._8_8_ = param_2;
      local_158._0_8_ = &local_1d0;
      local_138 = pdVar4;
      puStack_130 = &param_6;
      local_1e0 = &LAB_146cc8d76;
      local_148 = param_3;
      pdStack_140 = param_4;
      FUN_146db006e(param_1);
      cVar6 = local_1d0._0_1_;
      goto LAB_1405c9f5b;
    }
    if (bVar1 == 6) {
      local_1f8 = pdVar5;
      cVar6 = FUN_146dd792c(param_1,param_3,local_1b8,pdVar4);
    }
    else {
LAB_1405ca232:
      if (-1 < (char)bVar1) {
        if (bVar1 < 0x40) {
          cVar6 = '\0';
          goto LAB_1405c9f5b;
        }
        param_1 = *(longlong *)(param_1 + 0x28);
        goto LAB_1405ca28f;
      }
      local_1f8 = pdVar5;
      cVar6 = FUN_1405cc2a8(param_1,param_3,local_1b8,pdVar4);
    }
  }
  else {
    if (bVar1 != 0xb) {
      if (bVar1 != 0xf) goto LAB_1405ca232;
      goto LAB_1405ca33d;
    }
LAB_1405ca28f:
    local_158._8_8_ = 0x3ff0000000000000;
    local_158._0_8_ = 0x3ff0000000000000;
    local_1f0 = (double *)local_158;
    local_1f8 = pdVar5;
    local_148 = (double *)&DAT_3ff0000000000000;
    cVar6 = FUN_1405ce58a(param_1,param_3,local_1b8,pdVar4);
  }
  if (cVar6 == '\x01' && param_6 != (double *)0x0) {
    dVar13 = *param_6;
    dVar35 = param_6[1];
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar14 = param_2[2];
    dVar21 = param_2[3];
    dVar17 = param_2[3];
    dVar24 = dVar35 * dVar2 - dVar13 * dVar3;
    dVar26 = param_6[2] * dVar3 - dVar35 * dVar14;
    dVar12 = dVar13 * dVar14 - dVar2 * param_6[2];
    dVar26 = dVar26 + dVar26;
    dVar12 = dVar12 + dVar12;
    dVar24 = dVar24 + dVar24;
    *param_6 = (dVar24 * dVar3 - dVar12 * dVar14) + dVar21 * dVar26 + dVar13;
    param_6[1] = (dVar14 * dVar26 - dVar2 * dVar24) + dVar17 * dVar12 + dVar35;
    param_6[2] = dVar24 * dVar21 + param_6[2] + (dVar12 * dVar2 - dVar26 * dVar3);
    dVar26 = param_6[3] * param_2[8];
    dVar12 = param_6[4] * param_2[9];
    dVar14 = param_6[5] * param_2[10];
    dVar35 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar21 = param_2[3];
    dVar17 = param_2[3];
    dVar15 = dVar12 * dVar35 - dVar26 * dVar2;
    dVar34 = dVar14 * dVar2 - dVar12 * dVar3;
    dVar18 = dVar26 * dVar3 - dVar35 * dVar14;
    dVar34 = dVar34 + dVar34;
    dVar18 = dVar18 + dVar18;
    dVar15 = dVar15 + dVar15;
    dVar13 = param_2[5];
    dVar24 = param_2[6];
    param_6[3] = (dVar15 * dVar2 - dVar18 * dVar3) + dVar21 * dVar34 + dVar26 + param_2[4];
    param_6[4] = (dVar3 * dVar34 - dVar35 * dVar15) + dVar17 * dVar18 + dVar12 + dVar13;
    param_6[5] = dVar15 * dVar21 + dVar14 + (dVar18 * dVar35 - dVar34 * dVar2) + dVar24;
    cVar6 = '\x01';
  }
LAB_1405c9f5b:
  if ((local_f0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar6;
}



// FUNCTION 1405ca3ca FUN_1405ca3ca body=1151 status=ok
// SIG undefined FUN_1405ca3ca(void)

void FUN_1405ca3ca(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  double *local_98;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_1405cb177(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    break;
  case 1:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_1405ca8e6(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    break;
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_1405ca40d_caseD_2;
  case 3:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_1405cacb2(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    break;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,&local_88,param_2);
    FUN_1405ca3ca(*(undefined8 *)(param_1 + 0x20),&local_88,param_3);
    break;
  case 8:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    uVar3 = *param_3;
    uVar4 = *(undefined8 *)param_3[1];
LAB_1405ca61d:
    local_98 = &local_88;
    FUN_1405caf63(param_1,uVar3,param_2,uVar4);
    break;
  default:
    switch(uVar1) {
    case 0x80:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    case 0x81:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    case 0x82:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
      goto switchD_1405ca40d_caseD_2;
    case 0x83:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    case 0x88:
      pdVar2 = (double *)param_3[2];
      if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
        local_88 = 1.0;
        dStack_80 = 0.0;
        local_78 = 0.0;
      }
      else {
        local_78 = pdVar2[2];
        local_88 = *pdVar2;
        dStack_80 = pdVar2[1];
      }
      local_98 = &local_88;
      FUN_1405caac7(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
      goto LAB_1405ca47a;
    default:
      switch(uVar1) {
      case 0x40:
      default:
switchD_1405ca40d_caseD_2:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
      case 0x41:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
      case 0x43:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
      case 0x48:
        param_1 = *(longlong *)(param_1 + 0x28);
        pdVar2 = (double *)param_3[2];
        if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
          local_88 = 1.0;
          dStack_80 = 0.0;
          local_78 = 0.0;
        }
        else {
          local_78 = pdVar2[2];
          local_88 = *pdVar2;
          dStack_80 = pdVar2[1];
        }
        uVar3 = *param_3;
        uVar4 = *(undefined8 *)param_3[1];
      }
    }
    goto LAB_1405ca61d;
  }
LAB_1405ca47a:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ca8e6 FUN_1405ca8e6 body=480 status=ok
// SIG undefined FUN_1405ca8e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405ca8e6(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
  dVar1 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
  dVar6 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
  dVar1 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_144857b9e;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144857b9e;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405caac7 FUN_1405caac7 body=490 status=ok
// SIG undefined FUN_1405caac7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405caac7(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
  dVar1 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
  dVar6 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_144857b9e;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144a12d46;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405cacb2 FUN_1405cacb2 body=688 status=ok
// SIG undefined FUN_1405cacb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405cacb2(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  longlong local_d8;
  float local_d0;
  float local_cc;
  undefined1 *local_c8;
  longlong local_c0;
  float local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar12 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
  dVar2 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
  dVar11 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
  if ((dVar11 <= dVar12 || dVar11 <= dVar2) && (dVar11 = dVar2, dVar2 <= dVar12)) {
    dVar11 = dVar12;
  }
  dVar2 = *(double *)(param_1 + 0x10);
  dVar12 = *(double *)(param_1 + 0x20);
  dVar14 = *(double *)(param_1 + 0x28);
  dVar16 = *(double *)(param_1 + 0x30);
  dVar1 = *(double *)(param_1 + 0x50);
  dVar3 = *(double *)(param_1 + 0x48) * dVar1 + dVar16;
  dVar4 = *(double *)(param_1 + 0x40) * dVar1 + dVar14;
  dVar19 = dVar1 * *(double *)(param_1 + 0x38) + dVar12;
  dVar1 = dVar16;
  if (dVar3 <= dVar16) {
    dVar1 = dVar3;
  }
  dVar5 = dVar14;
  if (dVar4 <= dVar14) {
    dVar5 = dVar4;
  }
  dVar6 = dVar12;
  if (dVar19 <= dVar12) {
    dVar6 = dVar19;
  }
  if (dVar16 <= dVar3) {
    dVar16 = dVar3;
  }
  if (dVar14 <= dVar4) {
    dVar14 = dVar4;
  }
  if (dVar12 <= dVar19) {
    dVar12 = dVar19;
  }
  dVar12 = (dVar12 + dVar2) - (dVar6 - dVar2);
  dVar16 = (dVar16 + dVar2) - (dVar1 - dVar2);
  dVar14 = (dVar14 + dVar2) - (dVar5 - dVar2);
  if ((dVar12 <= dVar14 || dVar12 <= dVar16) && (dVar12 = dVar14, dVar14 <= dVar16)) {
    dVar12 = dVar16;
  }
  local_b8 = (float)*(double *)(param_2 + 0x10);
  local_b4 = 0;
  local_b0 = FUN_144857b9e;
  local_d0 = (float)dVar2;
  local_c8 = &LAB_144a386e2;
  fVar7 = (float)param_3[2];
  fVar9 = (float)param_3[3];
  fVar13 = (float)*param_3;
  fVar15 = (float)param_3[1];
  local_98._0_4_ = (float)param_3[4];
  local_98._4_4_ = (float)param_3[5];
  local_98._8_4_ = (float)param_3[6];
  local_98._12_4_ = 0;
  fVar8 = fVar13 * fVar13 + fVar15 * fVar15;
  fVar10 = fVar7 * fVar7 + fVar9 * fVar9;
  auVar17._0_4_ = fVar10 + fVar8;
  auVar17._4_4_ = fVar10 + fVar8;
  auVar17._8_4_ = fVar8 + fVar10;
  auVar17._12_4_ = fVar8 + fVar10;
  auVar18 = sqrtps(auVar17,auVar17);
  auVar18 = divps(_DAT_1499314a0,auVar18);
  auVar20._0_4_ = auVar18._0_4_ * fVar13;
  auVar20._4_4_ = auVar18._4_4_ * fVar15;
  auVar20._8_4_ = auVar18._8_4_ * fVar7;
  auVar20._12_4_ = auVar18._12_4_ * fVar9;
  auVar18._4_4_ = -(uint)(1e-08 <= auVar17._4_4_);
  auVar18._0_4_ = -(uint)(1e-08 <= auVar17._0_4_);
  auVar18._8_4_ = -(uint)(1e-08 <= auVar17._8_4_);
  auVar18._12_4_ = -(uint)(1e-08 <= auVar17._12_4_);
  local_88 = blendvps(_DAT_149932320,auVar20,auVar18);
  local_f8 = local_88;
  if (dVar12 <= dVar11) {
    dVar12 = dVar11;
  }
  local_e8 = local_a8;
  local_a8._4_4_ = (float)param_5[1];
  local_a8._0_4_ = (float)*param_5;
  local_a8._8_4_ = (float)param_5[2];
  local_a8._12_4_ = 0;
  local_f0 = param_4;
  local_d8 = param_1;
  local_cc = local_d0;
  local_c0 = param_2;
  FUN_144946907(&local_d8,&local_c0,dVar12);
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405caf63 FUN_1405caf63 body=531 status=ok
// SIG undefined FUN_1405caf63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405caf63(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_98;
  float local_90;
  undefined4 local_8c;
  code *local_88;
  longlong local_80;
  float local_78;
  undefined4 local_74;
  code *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar7 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
  dVar1 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
  dVar6 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
  if ((dVar6 <= dVar1 || dVar6 <= dVar7) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar7 = (double)*(float *)(param_1 + 0x4c) - (double)*(float *)(param_1 + 0x40);
  dVar1 = (double)*(float *)(param_1 + 0x54) - (double)*(float *)(param_1 + 0x48);
  dVar9 = (double)*(float *)(param_1 + 0x50) - (double)*(float *)(param_1 + 0x44);
  if ((dVar7 <= dVar9 || dVar7 <= dVar1) && (dVar7 = dVar9, dVar9 <= dVar1)) {
    dVar7 = dVar1;
  }
  local_78 = (float)*(double *)(param_2 + 0x10);
  local_74 = 0;
  local_70 = FUN_144857b9e;
  local_90 = (float)*(double *)(param_1 + 0x10);
  local_8c = 0;
  local_88 = FUN_14172546a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_b8 = local_48;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_a8 = local_68;
  local_68._4_4_ = (float)param_5[1];
  local_68._0_4_ = (float)*param_5;
  local_68._8_4_ = (float)param_5[2];
  local_68._12_4_ = 0;
  local_b0 = param_4;
  local_98 = param_1;
  local_80 = param_2;
  FUN_144946907(&local_98,&local_80,dVar7);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405cb177 FUN_1405cb177 body=558 status=ok
// SIG undefined FUN_1405cb177(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405cb177(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  undefined1 *local_98;
  longlong local_90;
  float local_88;
  undefined4 local_84;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar7 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
  dVar1 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
  dVar6 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar1 = *(double *)(param_1 + 0x10);
  dVar7 = (dVar1 + *(double *)(param_1 + 0x20)) - (*(double *)(param_1 + 0x20) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_1 + 0x30)) - (*(double *)(param_1 + 0x30) - dVar1);
  dVar11 = (dVar1 + *(double *)(param_1 + 0x28)) - (*(double *)(param_1 + 0x28) - dVar1);
  if ((dVar7 <= dVar11 || dVar7 <= dVar9) && (dVar7 = dVar11, dVar11 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_88 = (float)*(double *)(param_2 + 0x10);
  local_84 = 0;
  local_80 = FUN_144857b9e;
  local_a0 = (float)dVar1;
  local_98 = &LAB_144a386ca;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_c8 = local_58;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_b8 = local_78;
  local_78._4_4_ = (float)param_5[1];
  local_78._0_4_ = (float)*param_5;
  local_78._8_4_ = (float)param_5[2];
  local_78._12_4_ = 0;
  local_c0 = param_4;
  local_a8 = param_1;
  local_9c = local_a0;
  local_90 = param_2;
  FUN_144946907(&local_a8,&local_90,dVar7);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405cb3a6 FUN_1405cb3a6 body=2239 status=ok
// SIG undefined FUN_1405cb3a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1405cb3a6(longlong param_1,longlong param_2,double *param_3,double param_4,
                       undefined8 *param_5)

{
  int *piVar1;
  double dVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  double dVar17;
  float fVar20;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auVar33 [16];
  double dVar34;
  float fVar35;
  double dVar36;
  undefined1 auVar37 [16];
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined1 local_238 [8];
  float fStack_230;
  float fStack_22c;
  double local_228 [3];
  double local_210 [4];
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  int *local_1b8;
  undefined8 uStack_1b0;
  double local_1a8 [3];
  double local_190 [4];
  double *local_170;
  double *local_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_168 = &local_160;
  local_1a8[0] = *(double *)(param_2 + 0x20) - param_4;
  local_1a8[1] = *(double *)(param_2 + 0x28) - param_4;
  local_1a8[2] = *(double *)(param_2 + 0x30) - param_4;
  local_190[0] = *(double *)(param_2 + 0x38) + param_4;
  local_190[1] = *(double *)(param_2 + 0x40) + param_4;
  local_190[2] = param_4 + *(double *)(param_2 + 0x48);
  local_190[3] = (double)param_2;
  local_170 = param_3;
  local_160 = param_4;
  FUN_1400c6592(local_1a8,&local_158);
  local_1a8[2] = local_148;
  local_1a8[0] = local_158;
  local_1a8[1] = uStack_150;
  local_190[2] = uStack_130;
  local_190[0] = uStack_140;
  local_190[1] = uStack_138;
  fVar32 = (float)local_148;
  local_1b8 = (int *)0x0;
  uStack_1b0 = 0;
  fVar38 = (float)local_158;
  fVar40 = (float)uStack_150;
  fVar27 = (float)uStack_130;
  fVar42 = (float)uStack_140;
  fVar43 = (float)uStack_138;
  local_1d8._4_4_ = fVar40;
  local_1d8._0_4_ = fVar38;
  local_1d8._8_4_ = fVar32;
  local_1d8._12_4_ = 0;
  local_1c8._4_4_ = fVar43;
  local_1c8._0_4_ = fVar42;
  local_1c8._8_4_ = fVar27;
  local_1c8._12_4_ = 0;
  local_210[3] = local_158;
  dStack_1f0 = uStack_150;
  local_1e8 = uStack_140;
  dStack_1e0 = uStack_138;
  cVar6 = FUN_144947e24(param_1);
  if (cVar6 != '\0') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      param_5[1] = 0;
      uVar14 = 0;
      param_5[2] = 0;
      param_5[6] = 0xffefffffffffffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      if ((longlong)(int)uStack_1b0 != 0) {
        piVar1 = local_1b8 + (longlong)(int)uStack_1b0 * 2;
        uVar14 = 0;
        piVar13 = local_1b8;
        do {
          uVar3 = *(ushort *)(param_1 + 0x92);
          uVar12 = (uint)uVar3;
          iVar9 = piVar13[1] * uVar12 + *piVar13;
          local_100 = *(double *)(param_1 + 0x80);
          lVar11 = *(longlong *)(param_1 + 0x20);
          lVar10 = (longlong)iVar9;
          dVar34 = *(double *)(param_1 + 0xa0);
          dVar17 = (double)*(ushort *)(lVar11 + lVar10 * 2) * dVar34 + local_100;
          dVar28 = (double)*(ushort *)(lVar11 + 2 + lVar10 * 2) * dVar34 + local_100;
          dVar36 = (double)*(ushort *)(lVar11 + ((ulonglong)uVar3 + lVar10) * 2) * dVar34 +
                   local_100;
          local_100 = (double)*(ushort *)(lVar11 + 2 + ((ulonglong)uVar3 + lVar10) * 2) * dVar34 +
                      local_100;
          dVar34 = dVar36;
          if (local_100 <= dVar36) {
            dVar34 = local_100;
          }
          uVar39 = SUB84(dVar28,0);
          uVar41 = (undefined4)((ulonglong)dVar28 >> 0x20);
          if (dVar34 <= dVar28) {
            uVar39 = SUB84(dVar34,0);
            uVar41 = (undefined4)((ulonglong)dVar34 >> 0x20);
          }
          local_210[2] = dVar17;
          if ((double)CONCAT44(uVar41,uVar39) <= dVar17) {
            local_210[2] = (double)CONCAT44(uVar41,uVar39);
          }
          dVar34 = dVar36;
          if (dVar36 <= local_100) {
            dVar34 = local_100;
          }
          dVar2 = dVar28;
          if (dVar28 <= dVar34) {
            dVar2 = dVar34;
          }
          dVar34 = dVar17;
          if (dVar17 <= dVar2) {
            dVar34 = dVar2;
          }
          local_158 = *(double *)(param_1 + 0x50) * (double)(iVar9 % (int)uVar12);
          uStack_150 = (double)(iVar9 / (int)uVar12) * *(double *)(param_1 + 0x58);
          dVar2 = *(double *)(param_1 + 0x60);
          local_148 = dVar17 * dVar2;
          uStack_140 = ((double)(iVar9 % (int)uVar12) + 1.0) * *(double *)(param_1 + 0x50);
          uStack_138 = uStack_150;
          uStack_130 = dVar28 * dVar2;
          local_128 = local_158;
          local_108 = ((double)(iVar9 / (int)uVar12) + 1.0) * *(double *)(param_1 + 0x58);
          uStack_120 = local_108;
          local_118 = dVar36 * dVar2;
          local_110 = uStack_140;
          local_100 = local_100 * dVar2;
          dVar34 = dVar34 * dVar2;
          local_210[2] = local_210[2] * dVar2;
          local_228[2] = local_210[2];
          if (dVar34 <= local_210[2]) {
            local_228[2] = dVar34;
          }
          local_228[1] = uStack_150;
          if (local_108 <= uStack_150) {
            local_228[1] = local_108;
          }
          local_228[0] = local_158;
          if (uStack_140 <= local_158) {
            local_228[0] = uStack_140;
          }
          if (local_210[2] <= dVar34) {
            local_210[2] = dVar34;
          }
          local_210[1] = uStack_150;
          if (uStack_150 <= local_108) {
            local_210[1] = local_108;
          }
          local_210[0] = local_158;
          if (local_158 <= uStack_140) {
            local_210[0] = uStack_140;
          }
          lVar11 = -3;
          do {
            if ((local_190[lVar11 + 3] <= local_210[lVar11] &&
                 local_210[lVar11] != local_190[lVar11 + 3]) ||
               (local_210[lVar11 + 3] <= local_190[lVar11] &&
                local_190[lVar11] != local_210[lVar11 + 3])) goto LAB_1405cbbfa;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0);
          if (((int)*(uint *)(param_1 + 0x48) < 1) ||
             ((uVar12 = (uVar3 - 1) * piVar13[1] + *piVar13, uVar12 < *(uint *)(param_1 + 0x48) &&
              (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar12) != -1)))) {
            local_258 = param_5;
            bVar7 = FUN_146da0eba(local_190 + 3,&local_158,&uStack_140,&local_110);
            local_258 = param_5;
            bVar8 = FUN_146da0eba(local_190 + 3,&local_158,&local_110,&local_128);
            uVar14 = (ulonglong)(byte)((byte)uVar14 | bVar8 | bVar7);
          }
LAB_1405cbbfa:
          piVar13 = piVar13 + 2;
        } while (piVar13 != piVar1);
      }
      goto LAB_1405cb585;
    }
    local_228[0] = 0.0;
    local_228[1] = 0.0;
    FUN_1405cc1da(local_228,param_2);
    fVar15 = (float)param_3[2];
    fVar18 = (float)param_3[3];
    fVar20 = (float)*param_3;
    fVar23 = (float)param_3[1];
    fVar16 = fVar20 * fVar20 + fVar23 * fVar23;
    fVar19 = fVar15 * fVar15 + fVar18 * fVar18;
    auVar29._0_4_ = fVar19 + fVar16;
    auVar29._4_4_ = fVar19 + fVar16;
    auVar29._8_4_ = fVar16 + fVar19;
    auVar29._12_4_ = fVar16 + fVar19;
    auVar37._4_4_ = -(uint)(1e-08 <= auVar29._4_4_);
    auVar37._0_4_ = -(uint)(1e-08 <= auVar29._0_4_);
    auVar37._8_4_ = -(uint)(1e-08 <= auVar29._8_4_);
    auVar37._12_4_ = -(uint)(1e-08 <= auVar29._12_4_);
    auVar29 = sqrtps(auVar29,auVar29);
    auVar29 = divps(_DAT_1499314a0,auVar29);
    auVar33._0_4_ = auVar29._0_4_ * fVar20 * -1.0;
    auVar33._4_4_ = auVar29._4_4_ * fVar23 * -1.0;
    auVar33._8_4_ = auVar29._8_4_ * fVar15 * -1.0;
    auVar33._12_4_ = auVar29._12_4_ * fVar18 * 1.0;
    auVar37 = blendvps(_DAT_149f51f60,auVar33,auVar37);
    if ((longlong)(int)uStack_1b0 != 0) {
      local_238._0_4_ = (undefined4)param_3[4];
      local_238._4_4_ = (undefined4)param_3[5];
      fStack_230 = (float)param_3[6];
      fStack_22c = 0.0;
      piVar1 = local_1b8 + (longlong)(int)uStack_1b0 * 2;
      fVar15 = auVar37._0_4_;
      fVar16 = auVar37._4_4_;
      fVar18 = auVar37._8_4_;
      fVar19 = auVar37._12_4_;
      piVar13 = local_1b8;
      local_248 = fVar19;
      fStack_244 = fVar19;
      fStack_240 = fVar19;
      fStack_23c = fVar19;
      do {
        uVar3 = *(ushort *)(param_1 + 0x92);
        uVar12 = (uint)uVar3;
        iVar9 = piVar13[1] * uVar12 + *piVar13;
        dVar34 = *(double *)(param_1 + 0x80);
        lVar11 = *(longlong *)(param_1 + 0x20);
        lVar10 = (longlong)iVar9;
        dVar17 = *(double *)(param_1 + 0xa0);
        uVar4 = *(ushort *)(lVar11 + ((ulonglong)uVar3 + lVar10) * 2);
        dVar28 = (double)*(ushort *)(lVar11 + lVar10 * 2) * dVar17 + dVar34;
        auVar30._0_4_ = (float)dVar28;
        auVar30._4_8_ = (ulonglong)dVar28 >> 0x20;
        auVar30._12_4_ = 0;
        fVar35 = (float)((double)*(ushort *)(lVar11 + 2 + lVar10 * 2) * dVar17 + dVar34);
        fVar23 = (float)((double)uVar4 * dVar17 + dVar34);
        fVar47 = (float)(iVar9 / (int)uVar12);
        fVar20 = (float)(iVar9 % (int)uVar12);
        fVar44 = (float)((double)*(ushort *)(lVar11 + 2 + ((ulonglong)uVar3 + lVar10) * 2) * dVar17
                        + dVar34);
        auVar37 = insertps(ZEXT416((uint)fVar20),ZEXT416((uint)fVar47),0x1c);
        auVar45 = insertps(auVar37,auVar30,0x20);
        auVar29 = insertps(ZEXT416((uint)(fVar20 + 1.0)),ZEXT416((uint)fVar47),0x1c);
        auVar46 = insertps(auVar29,ZEXT416((uint)fVar35),0x20);
        auVar29 = insertps(ZEXT416((uint)fVar20),ZEXT416((uint)(fVar47 + 1.0)),0x1c);
        auVar33 = insertps(auVar29,ZEXT416((uint)fVar23),0x20);
        auVar29 = insertps(ZEXT416((uint)(fVar20 + 1.0)),ZEXT416((uint)(fVar47 + 1.0)),0x1c);
        auVar48._4_4_ = unaff_XMM12_Db;
        auVar48._0_4_ = fVar44;
        auVar48._8_4_ = unaff_XMM12_Dc;
        auVar48._12_4_ = unaff_XMM12_Dd;
        auVar48 = insertps(auVar29,auVar48,0x20);
        fVar20 = fVar23;
        if (fVar44 <= fVar23) {
          fVar20 = fVar44;
        }
        fVar47 = fVar35;
        if (fVar20 <= fVar35) {
          fVar47 = fVar20;
        }
        fVar20 = auVar30._0_4_;
        if (fVar47 <= auVar30._0_4_) {
          fVar20 = fVar47;
        }
        if (fVar23 <= fVar44) {
          fVar23 = fVar44;
        }
        if (fVar35 <= fVar23) {
          fVar35 = fVar23;
        }
        if (auVar30._0_4_ <= fVar35) {
          auVar30._0_4_ = fVar35;
          auVar30._12_4_ = 0;
        }
        auVar29 = insertps(auVar29,auVar30,0x20);
        auVar5._4_4_ = (int)((ulonglong)dVar28 >> 0x20);
        auVar5._0_4_ = fVar20;
        auVar5._8_8_ = 0;
        auVar37 = insertps(auVar37,auVar5,0x20);
        fVar20 = *(float *)(param_1 + 0x70);
        fVar23 = *(float *)(param_1 + 0x74);
        fVar35 = *(float *)(param_1 + 0x78);
        fVar44 = *(float *)(param_1 + 0x7c);
        local_158 = (double)CONCAT44(auVar45._4_4_ * fVar23,auVar45._0_4_ * fVar20);
        uStack_150 = (double)CONCAT44(auVar45._12_4_ * fVar44,auVar45._8_4_ * fVar35);
        local_148 = (double)CONCAT44(auVar46._4_4_ * fVar23,auVar46._0_4_ * fVar20);
        uStack_140 = (double)CONCAT44(auVar46._12_4_ * fVar44,auVar46._8_4_ * fVar35);
        uStack_138 = (double)CONCAT44(auVar33._4_4_ * fVar23,auVar33._0_4_ * fVar20);
        uStack_130 = (double)CONCAT44(auVar33._12_4_ * fVar44,auVar33._8_4_ * fVar35);
        local_128 = (double)CONCAT44(auVar48._4_4_ * fVar23,auVar48._0_4_ * fVar20);
        uStack_120 = (double)CONCAT44(auVar48._12_4_ * fVar44,auVar48._8_4_ * fVar35);
        auVar45._0_8_ = CONCAT44(auVar37._4_4_ * fVar23,auVar37._0_4_ * fVar20);
        auVar45._8_4_ = auVar37._8_4_ * fVar35;
        auVar45._12_4_ = auVar37._12_4_ * fVar44;
        auVar21._0_4_ = auVar29._0_4_ * fVar20;
        auVar21._4_4_ = auVar29._4_4_ * fVar23;
        auVar21._8_4_ = auVar29._8_4_ * fVar35;
        auVar21._12_4_ = auVar29._12_4_ * fVar44;
        auVar31._8_4_ = auVar45._8_4_;
        auVar31._0_8_ = auVar45._0_8_;
        auVar31._12_4_ = auVar45._12_4_;
        auVar29 = minps(auVar31,auVar21);
        auVar37 = maxps(auVar45,auVar21);
        auVar46._4_4_ = -(uint)(auVar37._4_4_ < fVar40);
        auVar46._0_4_ = -(uint)(auVar37._0_4_ < fVar38);
        auVar46._8_4_ = -(uint)(auVar37._8_4_ < fVar32);
        auVar46._12_4_ = -(uint)(auVar37._12_4_ < 0.0);
        auVar22._4_4_ = -(uint)(fVar43 < auVar29._4_4_);
        auVar22._0_4_ = -(uint)(fVar42 < auVar29._0_4_);
        auVar22._8_4_ = -(uint)(fVar27 < auVar29._8_4_);
        auVar22._12_4_ = -(uint)(0.0 < auVar29._12_4_);
        iVar9 = movmskps(iVar9 / (int)uVar12,auVar22 | auVar46);
        if ((iVar9 == 0) &&
           (((int)*(uint *)(param_1 + 0x48) < 1 ||
            ((uVar12 = (uVar3 - 1) * piVar13[1] + *piVar13, uVar12 < *(uint *)(param_1 + 0x48) &&
             (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar12) != -1)))))) {
          lVar11 = 0;
          do {
            fVar20 = *(float *)((longlong)&local_158 + lVar11) - (float)local_238._0_4_;
            fVar23 = *(float *)((longlong)&local_158 + lVar11 + 4) - (float)local_238._4_4_;
            fVar35 = *(float *)((longlong)&uStack_150 + lVar11) - fStack_230;
            fVar44 = *(float *)((longlong)&uStack_150 + lVar11 + 4) - fStack_22c;
            fVar47 = fVar23 * fVar15 - fVar16 * fVar20;
            fVar24 = fVar35 * fVar16 - fVar18 * fVar23;
            fVar25 = fVar20 * fVar18 - fVar15 * fVar35;
            fVar26 = fVar44 * fVar19 - fVar19 * fVar44;
            fVar47 = fVar47 + fVar47;
            fVar24 = fVar24 + fVar24;
            fVar25 = fVar25 + fVar25;
            fVar26 = fVar26 + fVar26;
            *(float *)((longlong)&local_158 + lVar11) =
                 (fVar47 * fVar16 - fVar25 * fVar18) + local_248 * fVar24 + fVar20;
            *(float *)((longlong)&local_158 + lVar11 + 4) =
                 (fVar24 * fVar18 - fVar47 * fVar15) + fStack_244 * fVar25 + fVar23;
            *(float *)((longlong)&uStack_150 + lVar11) =
                 (fVar25 * fVar15 - fVar24 * fVar16) + fStack_240 * fVar47 + fVar35;
            *(float *)((longlong)&uStack_150 + lVar11 + 4) =
                 (fVar26 * fVar19 - fVar26 * fVar19) + fStack_23c * fVar26 + fVar44;
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != 0x40);
          cVar6 = FUN_1405cbc66(local_228,&local_158,&local_148,&local_128);
          if ((cVar6 != '\0') ||
             (cVar6 = FUN_1405cbc66(local_228,&local_158,&local_128,&uStack_138), cVar6 != '\0')) {
            uVar14 = CONCAT71((uint7)(byte)(uVar4 >> 8),1);
            goto LAB_1405cb585;
          }
        }
        piVar13 = piVar13 + 2;
      } while (piVar13 != piVar1);
    }
  }
  uVar14 = 0;
LAB_1405cb585:
  if (local_1b8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffffffffff01;
}



// FUNCTION 1405cbc66 FUN_1405cbc66 body=1395 status=ok
// SIG undefined FUN_1405cbc66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1405cbc66(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  undefined4 in_EAX;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar25 = param_1[3];
  fVar7 = param_1[4];
  fVar8 = param_1[5];
  fVar9 = param_1[6];
  fVar37 = *param_2;
  fVar41 = param_2[1];
  fVar31 = param_2[2];
  auVar26._0_8_ = CONCAT44(fVar41 - fVar5,fVar37 - fVar4);
  auVar26._8_4_ = fVar31 - fVar6;
  auVar26._12_4_ = param_2[3] - fVar25;
  fVar10 = *param_3;
  fVar11 = param_3[1];
  fVar12 = param_3[2];
  fVar27 = param_3[3];
  fVar21 = fVar10 - fVar4;
  fVar22 = fVar11 - fVar5;
  fVar23 = fVar12 - fVar6;
  fVar24 = fVar27 - fVar25;
  fVar13 = *param_4;
  fVar14 = param_4[1];
  fVar15 = param_4[2];
  auVar32._0_4_ = fVar13 - fVar4;
  auVar32._4_4_ = fVar14 - fVar5;
  auVar32._8_4_ = fVar15 - fVar6;
  auVar32._12_4_ = param_4[3] - fVar25;
  auVar43._8_4_ = auVar26._8_4_;
  auVar43._0_8_ = auVar26._0_8_;
  auVar43._12_4_ = auVar26._12_4_;
  auVar42._4_4_ = fVar22;
  auVar42._0_4_ = fVar21;
  auVar42._8_4_ = fVar23;
  auVar42._12_4_ = fVar24;
  auVar42 = minps(auVar43,auVar42);
  auVar43 = minps(auVar42,auVar32);
  auVar29._4_4_ = fVar22;
  auVar29._0_4_ = fVar21;
  auVar29._8_4_ = fVar23;
  auVar29._12_4_ = fVar24;
  auVar42 = maxps(auVar26,auVar29);
  auVar42 = maxps(auVar42,auVar32);
  uVar16 = CONCAT44(auVar32._4_4_,auVar32._0_4_);
  auVar33._0_8_ = uVar16 & 0x7fffffff7fffffff;
  auVar33._8_4_ = ABS(auVar32._8_4_);
  auVar33._12_4_ = ABS(auVar32._12_4_);
  auVar28._0_8_ = CONCAT44(fVar41 - fVar5,fVar37 - fVar4) & 0x7fffffff7fffffff;
  auVar28._8_4_ = ABS(auVar26._8_4_);
  auVar28._12_4_ = ABS(auVar26._12_4_);
  auVar1._8_4_ = ABS(fVar23);
  auVar1._0_8_ = CONCAT44(fVar22,fVar21) & 0x7fffffff7fffffff;
  auVar1._12_4_ = ABS(fVar24);
  auVar29 = minps(auVar28,auVar1);
  auVar29 = minps(auVar29,auVar33);
  auVar34._0_4_ =
       -(uint)((float)((int)(auVar42._0_4_ & _DAT_14c9931f0) >> 1) ==
               (float)((int)(auVar43._0_4_ & _DAT_14c9931f0) >> 1) && fVar7 < auVar29._0_4_);
  auVar34._4_4_ =
       -(uint)((float)((int)(auVar42._4_4_ & uRam000000014c9931f4) >> 1) ==
               (float)((int)(auVar43._4_4_ & uRam000000014c9931f4) >> 1) && fVar8 < auVar29._4_4_);
  auVar34._8_4_ =
       -(uint)((float)((int)(auVar42._8_4_ & uRam000000014c9931f8) >> 1) ==
               (float)((int)(auVar43._8_4_ & uRam000000014c9931f8) >> 1) && fVar9 < auVar29._8_4_);
  auVar34._12_4_ =
       -(uint)((float)((int)(auVar42._12_4_ & uRam000000014c9931fc) >> 1) ==
               (float)((int)(auVar43._12_4_ & uRam000000014c9931fc) >> 1) &&
              param_1[7] < auVar29._12_4_);
  iVar17 = movmskps(in_EAX,auVar34);
  if (iVar17 == 0) {
    fVar44 = fVar10 - fVar37;
    fVar45 = fVar11 - fVar41;
    fVar46 = fVar12 - fVar31;
    fVar47 = fVar27 - param_2[3];
    fVar25 = fVar13 - fVar10;
    fVar21 = fVar14 - fVar11;
    fVar22 = fVar15 - fVar12;
    fVar27 = param_4[3] - fVar27;
    fVar23 = fVar44 * fVar21 - fVar45 * fVar25;
    fVar24 = fVar45 * fVar22 - fVar46 * fVar21;
    fVar38 = fVar46 * fVar25 - fVar44 * fVar22;
    fVar27 = fVar47 * fVar27 - fVar47 * fVar27;
    fVar27 = fVar27 * fVar27;
    auVar35._0_4_ = fVar38 * fVar38 + fVar24 * fVar24;
    auVar35._4_4_ = fVar24 * fVar24 + fVar38 * fVar38;
    auVar35._8_4_ = fVar27 + fVar23 * fVar23;
    auVar35._12_4_ = fVar23 * fVar23 + fVar27;
    auVar2._4_4_ = auVar35._12_4_ + auVar35._4_4_;
    auVar2._0_4_ = auVar35._8_4_ + auVar35._0_4_;
    auVar2._8_4_ = auVar35._0_4_ + auVar35._8_4_;
    auVar2._12_4_ = auVar35._4_4_ + auVar35._12_4_;
    auVar42 = sqrtps(auVar35,auVar2);
    auVar42 = divps(_DAT_1499314a0,auVar42);
    fVar24 = auVar42._0_4_ * fVar24;
    fVar38 = auVar42._4_4_ * fVar38;
    fVar23 = auVar42._8_4_ * fVar23;
    fVar27 = fVar45 * fVar24 - fVar44 * fVar38;
    fVar47 = fVar46 * fVar38 - fVar45 * fVar23;
    fVar39 = fVar44 * fVar23 - fVar46 * fVar24;
    if (((fVar31 - ((float)(uRam000000014c9931f8 & (uint)fVar27 | (uint)fVar9) + fVar6)) * fVar27 +
         (fVar37 - ((float)(_DAT_14c9931f0 & (uint)fVar47 | (uint)fVar7) + fVar4)) * fVar47 +
         (fVar41 - ((float)(uRam000000014c9931f4 & (uint)fVar39 | (uint)fVar8) + fVar5)) * fVar39 <=
         0.0) && (fVar27 = fVar21 * fVar24 - fVar25 * fVar38,
                 fVar47 = fVar22 * fVar38 - fVar21 * fVar23,
                 fVar39 = fVar25 * fVar23 - fVar22 * fVar24,
                 (fVar12 - ((float)(uRam000000014c9931f8 & (uint)fVar27 | (uint)fVar9) + fVar6)) *
                 fVar27 + (fVar10 - ((float)(_DAT_14c9931f0 & (uint)fVar47 | (uint)fVar7) + fVar4))
                          * fVar47 +
                          (fVar11 - ((float)(uRam000000014c9931f4 & (uint)fVar39 | (uint)fVar8) +
                                    fVar5)) * fVar39 <= 0.0)) {
      fVar30 = fVar37 - fVar13;
      fVar36 = fVar41 - fVar14;
      fVar40 = fVar31 - fVar15;
      fVar27 = fVar36 * fVar24 - fVar38 * fVar30;
      fVar47 = fVar40 * fVar38 - fVar23 * fVar36;
      fVar39 = fVar30 * fVar23 - fVar24 * fVar40;
      if ((fVar15 - ((float)(uRam000000014c9931f8 & (uint)fVar27 | (uint)fVar9) + fVar6)) * fVar27 +
          (fVar13 - ((float)(_DAT_14c9931f0 & (uint)fVar47 | (uint)fVar7) + fVar4)) * fVar47 +
          (fVar14 - ((float)(uRam000000014c9931f4 & (uint)fVar39 | (uint)fVar8) + fVar5)) * fVar39
          <= 0.0) {
        fVar48 = (fVar37 + fVar10 + fVar13) * 0.33333334;
        fVar49 = (fVar41 + fVar11 + fVar14) * 0.33333334;
        fVar50 = (fVar31 + fVar12 + fVar15) * 0.33333334;
        fVar27 = (float)(_DAT_14c9931f0 & (uint)fVar24 | (uint)fVar7);
        fVar47 = (float)(uRam000000014c9931f4 & (uint)fVar38 | (uint)fVar8);
        fVar39 = (float)(uRam000000014c9931f8 & (uint)fVar23 | (uint)fVar9);
        fVar51 = ((fVar6 + fVar39) - fVar50) * fVar23 +
                 ((fVar4 + fVar27) - fVar48) * fVar24 + ((fVar5 + fVar47) - fVar49) * fVar38;
        if ((0.0001 < ABS(fVar51)) &&
           (fVar27 = fVar23 * ((fVar6 - fVar39) - fVar50) +
                     fVar24 * ((fVar4 - fVar27) - fVar48) + fVar38 * ((fVar5 - fVar47) - fVar49),
           0.0001 < ABS(fVar27))) {
          fVar23 = (float)(-(uint)(0.0 < fVar51) & 0x3f800000 |
                          ~-(uint)(0.0 < fVar51) & -(uint)(fVar51 < 0.0) & 0xbf800000);
          fVar27 = (float)(-(uint)(0.0 < fVar27) & 0x3f800000 |
                          ~-(uint)(0.0 < fVar27) & -(uint)(fVar27 < 0.0) & 0xbf800000);
          if ((fVar23 == fVar27) && (!NAN(fVar23) && !NAN(fVar27))) {
            return false;
          }
        }
        lVar18 = 0;
        do {
          fVar24 = fVar45 * *(float *)(&DAT_149f4f990 + lVar18) -
                   *(float *)(&UNK_149f4f994 + lVar18) * fVar44;
          fVar27 = fVar46 * *(float *)(&UNK_149f4f994 + lVar18) -
                   *(float *)(&UNK_149f4f998 + lVar18) * fVar45;
          fVar23 = fVar44 * *(float *)(&UNK_149f4f998 + lVar18) -
                   *(float *)(&DAT_149f4f990 + lVar18) * fVar46;
          uVar20 = -(uint)((fVar31 - fVar50) * fVar24 +
                           (fVar37 - fVar48) * fVar27 + (fVar41 - fVar49) * fVar23 < 0.0);
          fVar27 = (float)(uVar20 & _DAT_14c9931f0 ^ (uint)fVar27);
          fVar23 = (float)(uVar20 & uRam000000014c9931f4 ^ (uint)fVar23);
          fVar24 = (float)(uVar20 & uRam000000014c9931f8 ^ (uint)fVar24);
          if (0.0001 < (((float)(~(uint)fVar24 & uRam000000014c9931f8 | (uint)fVar9) + fVar6) -
                       fVar31) * fVar24 +
                       (((float)(~(uint)fVar27 & _DAT_14c9931f0 | (uint)fVar7) + fVar4) - fVar37) *
                       fVar27 + (((float)(~(uint)fVar23 & uRam000000014c9931f4 | (uint)fVar8) +
                                 fVar5) - fVar41) * fVar23) {
            return false;
          }
          lVar18 = lVar18 + 0x10;
        } while (lVar18 != 0x30);
        lVar18 = 0;
        while (fVar31 = fVar21 * *(float *)(&DAT_149f4f990 + lVar18) -
                        *(float *)(&UNK_149f4f994 + lVar18) * fVar25,
              fVar37 = fVar22 * *(float *)(&UNK_149f4f994 + lVar18) -
                       *(float *)(&UNK_149f4f998 + lVar18) * fVar21,
              fVar41 = fVar25 * *(float *)(&UNK_149f4f998 + lVar18) -
                       *(float *)(&DAT_149f4f990 + lVar18) * fVar22,
              uVar20 = -(uint)((fVar12 - fVar50) * fVar31 +
                               (fVar10 - fVar48) * fVar37 + (fVar11 - fVar49) * fVar41 < 0.0),
              fVar37 = (float)(uVar20 & _DAT_14c9931f0 ^ (uint)fVar37),
              fVar41 = (float)(uVar20 & uRam000000014c9931f4 ^ (uint)fVar41),
              fVar31 = (float)(uVar20 & uRam000000014c9931f8 ^ (uint)fVar31),
              (((float)(~(uint)fVar31 & uRam000000014c9931f8 | (uint)fVar9) + fVar6) - fVar12) *
              fVar31 + (((float)(~(uint)fVar37 & _DAT_14c9931f0 | (uint)fVar7) + fVar4) - fVar10) *
                       fVar37 + (((float)(~(uint)fVar41 & uRam000000014c9931f4 | (uint)fVar8) +
                                 fVar5) - fVar11) * fVar41 <= 0.0001) {
          lVar18 = lVar18 + 0x10;
          if (lVar18 == 0x30) {
            lVar18 = 0;
            do {
              fVar41 = fVar36 * *(float *)(&DAT_149f4f990 + lVar18) -
                       *(float *)(&UNK_149f4f994 + lVar18) * fVar30;
              fVar25 = fVar40 * *(float *)(&UNK_149f4f994 + lVar18) -
                       *(float *)(&UNK_149f4f998 + lVar18) * fVar36;
              fVar37 = fVar30 * *(float *)(&UNK_149f4f998 + lVar18) -
                       *(float *)(&DAT_149f4f990 + lVar18) * fVar40;
              uVar20 = -(uint)((fVar15 - fVar50) * fVar41 +
                               (fVar13 - fVar48) * fVar25 + (fVar14 - fVar49) * fVar37 < 0.0);
              fVar25 = (float)(uVar20 & _DAT_14c9931f0 ^ (uint)fVar25);
              fVar37 = (float)(uVar20 & uRam000000014c9931f4 ^ (uint)fVar37);
              fVar41 = (float)(uVar20 & uRam000000014c9931f8 ^ (uint)fVar41);
              bVar3 = (((float)(~(uint)fVar41 & uRam000000014c9931f8 | (uint)fVar9) + fVar6) -
                      fVar15) * fVar41 +
                      (((float)(~(uint)fVar25 & _DAT_14c9931f0 | (uint)fVar7) + fVar4) - fVar13) *
                      fVar25 + (((float)(~(uint)fVar37 & uRam000000014c9931f4 | (uint)fVar8) + fVar5
                                ) - fVar14) * fVar37 <= 0.0001;
              bVar19 = lVar18 != 0x20;
              lVar18 = lVar18 + 0x10;
            } while (bVar3 && bVar19);
            return bVar3;
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 1405cc1da FUN_1405cc1da body=206 status=ok
// SIG undefined FUN_1405cc1da(void)

undefined1 (*) [16] FUN_1405cc1da(undefined1 (*param_1) [16],longlong param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  dVar1 = (*(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30)) * 0.5 +
          *(double *)(param_2 + 0x30);
  auVar2 = insertps(ZEXT416((uint)(float)((*(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20)
                                          ) * 0.5 + *(double *)(param_2 + 0x20))),
                    ZEXT416((uint)(float)((*(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28)
                                          ) * 0.5 + *(double *)(param_2 + 0x28))),0x1c);
  auVar3._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar3._0_4_ = (float)dVar1;
  auVar3._8_8_ = 0;
  auVar3 = insertps(auVar2,auVar3,0x28);
  *param_1 = auVar3;
  auVar3 = insertps(ZEXT416((uint)(float)((*(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20)
                                          ) * 0.5)),
                    ZEXT416((uint)(float)((*(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28)
                                          ) * 0.5)),0x1c);
  auVar3 = insertps(auVar3,ZEXT416((uint)(float)((*(double *)(param_2 + 0x48) -
                                                 *(double *)(param_2 + 0x30)) * 0.5)),0x28);
  param_1[1] = auVar3;
  return param_1;
}



// FUNCTION 1405cc2a8 FUN_1405cc2a8 body=283 status=ok
// SIG undefined FUN_1405cc2a8(void)

undefined4
FUN_1405cc2a8(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1405cc404(local_d0,param_2,param_1 + 0x38,0);
  local_148 = *param_3;
  uStack_140 = param_3[1];
  local_118 = (double)param_3[6] * *(double *)(param_1 + 0x48);
  local_138 = *(undefined4 *)(param_3 + 2);
  uStack_134 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_130 = *(undefined4 *)(param_3 + 3);
  uStack_12c = *(undefined4 *)((longlong)param_3 + 0x1c);
  dStack_120 = (double)param_3[5] * *(double *)(param_1 + 0x40);
  local_128 = (double)param_3[4] * *(double *)(param_1 + 0x38);
  uStack_110 = 0;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  local_d8 = *(undefined8 *)(param_1 + 0x30);
  local_150 = &local_e8;
  local_e8 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = *(undefined8 *)(param_1 + 0x28);
  local_158 = param_5;
  uVar1 = FUN_1405cc60c(*(undefined8 *)(param_1 + 0x88),local_d0,&local_148,param_4);
  FUN_1405cc3c4(local_d0);
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405cc3c4 FUN_1405cc3c4 body=63 status=ok
// SIG undefined FUN_1405cc3c4(void)

undefined4 FUN_1405cc3c4(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0x11];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 1);
}



// FUNCTION 1405cc404 FUN_1405cc404 body=216 status=ok
// SIG undefined FUN_1405cc404(void)

undefined8 *
FUN_1405cc404(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar1;
  *(byte *)((longlong)param_1 + 0x1d) = bVar1;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4bc50;
  param_1[0x11] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
    if (*(int *)(param_2 + 8) == 1) {
      LOCK();
      *(undefined4 *)(param_2 + 0xc) = 1;
      UNLOCK();
    }
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1[0x11] + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_1[0x11] + 0x19);
  param_1[10] = param_4;
  FUN_1405cc4dc(param_1,param_3);
  return param_1;
}



// FUNCTION 1405cc4dc FUN_1405cc4dc body=128 status=ok
// SIG undefined FUN_1405cc4dc(void)

void FUN_1405cc4dc(longlong param_1,longlong param_2)

{
  double dVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 4;
  do {
    dVar1 = *(double *)(param_2 + -0x20 + lVar2 * 8);
    uVar3 = -(ulonglong)(ABS(dVar1) < 9.999999974752427e-07);
    dVar1 = (double)(uVar3 & 0x3eb0c6f7a0000000 | ~uVar3 & (ulonglong)dVar1);
    *(double *)(param_1 + lVar2 * 8) = dVar1;
    *(double *)(param_1 + 0x18 + lVar2 * 8) = 1.0 / dVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  *(double *)(param_1 + 0x10) =
       *(double *)(param_1 + 0x20) * *(double *)(*(longlong *)(param_1 + 0x88) + 0x10) +
       *(double *)(param_1 + 0x50);
  FUN_1405cc55c();
  return;
}



// FUNCTION 1405cc55c FUN_1405cc55c body=175 status=ok
// SIG undefined FUN_1405cc55c(void)

void FUN_1405cc55c(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  dVar5 = *(double *)(lVar1 + 0x30) * *(double *)(param_1 + 0x30);
  dVar9 = *(double *)(lVar1 + 0x28) * *(double *)(param_1 + 0x28);
  dVar10 = *(double *)(lVar1 + 0x20) * *(double *)(param_1 + 0x20);
  dVar6 = *(double *)(param_1 + 0x30) * *(double *)(lVar1 + 0x48);
  dVar8 = *(double *)(param_1 + 0x28) * *(double *)(lVar1 + 0x40);
  dVar7 = *(double *)(param_1 + 0x20) * *(double *)(lVar1 + 0x38);
  dVar2 = dVar5;
  if (dVar6 <= dVar5) {
    dVar2 = dVar6;
  }
  dVar3 = dVar9;
  if (dVar8 <= dVar9) {
    dVar3 = dVar8;
  }
  dVar4 = dVar10;
  if (dVar7 <= dVar10) {
    dVar4 = dVar7;
  }
  *(double *)(param_1 + 0x58) = dVar4;
  *(double *)(param_1 + 0x60) = dVar3;
  *(double *)(param_1 + 0x68) = dVar2;
  if (dVar5 <= dVar6) {
    dVar5 = dVar6;
  }
  if (dVar9 <= dVar8) {
    dVar9 = dVar8;
  }
  if (dVar10 <= dVar7) {
    dVar10 = dVar7;
  }
  *(double *)(param_1 + 0x70) = dVar10;
  *(double *)(param_1 + 0x78) = dVar9;
  *(double *)(param_1 + 0x80) = dVar5;
  return;
}



// FUNCTION 1405cc60c FUN_1405cc60c body=2975 status=ok
// SIG undefined FUN_1405cc60c(void)

ulonglong FUN_1405cc60c(double param_1,undefined8 param_2,double *param_3,double param_4,
                       undefined8 *param_5,double *param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  ulonglong uVar21;
  double *pdVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  longlong *plVar31;
  double dVar32;
  double dVar33;
  double *pdVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_438 [32];
  double local_418;
  double local_410;
  undefined8 local_408;
  double dStack_400;
  double *local_3f8;
  longlong *plStack_3f0;
  undefined1 local_3e8 [16];
  double local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  double local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  double local_328 [4];
  double local_308;
  double dStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  double local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8 [11];
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_218;
  float local_210;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  dVar7 = 1.0 / param_6[2];
  dVar6 = 1.0 / param_6[1];
  dVar5 = 1.0 / *param_6;
  local_2c0 = param_4;
  FUN_1405cd2ed(local_2a8,param_2,param_6);
  if (param_5 != (undefined8 *)0x0) {
    pdVar34 = param_3;
    pdVar22 = (double *)&local_218;
    for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pdVar22 = *pdVar34;
      pdVar34 = pdVar34 + 1;
      pdVar22 = pdVar22 + 1;
    }
    local_1e8 = local_1e8 * param_6[2];
    dStack_1f0 = dStack_1f0 * param_6[1];
    local_1f8 = local_1f8 * *param_6;
    uStack_1e0 = 0;
    (**(code **)(local_2a8[0] + 0x80))(local_2a8,&local_3a8);
    FUN_1400c6592(&local_3a8,local_328,&local_218);
    param_4 = ABS(param_4);
    dVar35 = (dStack_300 + param_4) * dVar7;
    dVar4 = (local_308 + param_4) * dVar6;
    dVar32 = (local_328[3] + param_4) * dVar5;
    dStack_300 = (local_328[2] - param_4) * dVar7;
    local_308 = (local_328[1] - param_4) * dVar6;
    local_328[3] = (local_328[0] - param_4) * dVar5;
    local_328[2] = dStack_300;
    if (dVar35 <= dStack_300) {
      local_328[2] = dVar35;
    }
    local_328[1] = local_308;
    if (dVar4 <= local_308) {
      local_328[1] = dVar4;
    }
    local_328[0] = local_328[3];
    if (dVar32 <= local_328[3]) {
      local_328[0] = dVar32;
    }
    if (dStack_300 <= dVar35) {
      dStack_300 = dVar35;
    }
    if (local_308 <= dVar4) {
      local_308 = dVar4;
    }
    if (local_328[3] <= dVar32) {
      local_328[3] = dVar32;
    }
    FUN_140d8788e((longlong)param_1 + 0xe0,&local_2b8,local_328);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[6] = 0xffefffffffffffff;
    local_378 = param_3[6] * param_6[2];
    local_3a8 = *param_3;
    dStack_3a0 = param_3[1];
    local_398 = param_3[2];
    dStack_390 = param_3[3];
    local_388._8_8_ = param_3[5] * param_6[1];
    local_388._0_8_ = param_3[4] * *param_6;
    uStack_370 = 0;
    local_368 = 0x3ff0000000000000;
    uStack_360 = 0x3ff0000000000000;
    local_358 = 0x3ff0000000000000;
    uStack_350 = 0;
    local_3f8 = param_6;
    local_3e8._8_8_ = &local_2c0;
    local_3e8._0_8_ = &local_3a8;
    plStack_3f0 = local_2a8;
    dStack_400 = param_1;
    local_408 = &local_2b8;
    if (*(char *)((longlong)param_1 + 0x80) == '\x01') {
      uVar15 = FUN_146e588b0(&local_408,(longlong)param_1 + 0x60,param_5);
    }
    else {
      uVar15 = FUN_146e58b80(&local_408,(longlong)param_1 + 0x70,param_5);
    }
    uVar21 = (ulonglong)uVar15;
    if (local_2b8 != 0) {
      FUN_1400020a8();
    }
    goto LAB_1405ccb65;
  }
  pdVar34 = param_3;
  pdVar22 = local_328;
  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
    *pdVar22 = *pdVar34;
    pdVar34 = pdVar34 + 1;
    pdVar22 = pdVar22 + 1;
  }
  local_2f8 = local_2f8 * param_6[2];
  dStack_300 = dStack_300 * param_6[1];
  local_308 = local_308 * *param_6;
  uStack_2f0 = 0;
  local_418 = param_1;
  if ((0.9 < ABS(param_3[3])) || (ABS(param_3[3] + -0.7071067690849304) <= 0.01)) {
    (**(code **)(local_2a8[0] + 0x80))(local_2a8,&local_218);
    FUN_1400c6592(&local_218,&local_408,local_328);
    param_4 = ABS(param_4);
    pdVar34 = (double *)(((double)local_3e8._8_8_ + param_4) * dVar7);
    dVar4 = ((double)local_3e8._0_8_ + param_4) * dVar6;
    plVar31 = (longlong *)(((double)plStack_3f0 + param_4) * dVar5);
    local_3e8._8_8_ = ((double)local_3f8 - param_4) * dVar7;
    local_3e8._0_8_ = (dStack_400 - param_4) * dVar6;
    plStack_3f0 = (longlong *)(((double)local_408 - param_4) * dVar5);
    local_3f8 = (double *)local_3e8._8_8_;
    if ((double)pdVar34 <= (double)local_3e8._8_8_) {
      local_3f8 = pdVar34;
    }
    dStack_400 = (double)local_3e8._0_8_;
    if (dVar4 <= (double)local_3e8._0_8_) {
      dStack_400 = dVar4;
    }
    local_408 = plStack_3f0;
    if ((double)plVar31 <= (double)plStack_3f0) {
      local_408 = plVar31;
    }
    if ((double)local_3e8._8_8_ <= (double)pdVar34) {
      local_3e8._8_8_ = pdVar34;
    }
    if ((double)local_3e8._0_8_ <= dVar4) {
      local_3e8._0_8_ = dVar4;
    }
    if ((double)plStack_3f0 <= (double)plVar31) {
      plStack_3f0 = plVar31;
    }
    local_3a8 = *param_3;
    dStack_3a0 = param_3[1];
    local_398 = param_3[2];
    dStack_390 = param_3[3];
    local_378 = param_3[6] * param_6[2];
    dVar5 = param_3[5] * param_6[1];
    local_388._8_4_ = SUB84(dVar5,0);
    local_388._0_8_ = param_3[4] * *param_6;
    local_388._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_370 = 0;
    local_368 = 0x3ff0000000000000;
    uStack_360 = 0x3ff0000000000000;
    local_358 = 0x3ff0000000000000;
    uStack_350 = 0;
    local_2b8 = CONCAT44((float)param_6[1],(float)*param_6);
    uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(float)param_6[2]);
    FUN_1405cd498(&local_218,&local_3a8,local_2a8);
    plVar10 = plStack_3f0;
    pdVar34 = local_3f8;
    dVar5 = dStack_400;
    plVar31 = local_408;
    if (*(int *)((longlong)param_1 + 0xe8) != 0) {
      uVar11 = local_3e8._0_8_;
      uVar12 = local_3e8._8_8_;
      local_2b8 = 0;
      uStack_2b0 = 0;
      FUN_14481578e(&local_2b8,0x10);
      uVar21 = uStack_2b0;
      lVar18 = (longlong)(int)uStack_2b0;
      uVar15 = (int)uStack_2b0 + 1;
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar15);
      if (uStack_2b0._4_4_ < uVar15) {
        FUN_1446f48e2(&local_2b8,uVar21 & 0xffffffff);
      }
      *(undefined4 *)(local_2b8 + lVar18 * 4) = 0;
      if ((int)uStack_2b0 != 0) {
        do {
          lVar18 = (longlong)(int)uStack_2b0;
          uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(int)uStack_2b0 + -1);
          lVar23 = (longlong)*(int *)(local_2b8 + -4 + lVar18 * 4) * 0x50 +
                   *(longlong *)((longlong)param_1 + 0xe0);
          lVar18 = 0;
          bVar13 = true;
          do {
            bVar20 = bVar13;
            uVar21 = uStack_2b0;
            iVar3 = *(int *)(lVar23 + 0x40 + lVar18 * 4);
            uVar24 = (ulonglong)iVar3;
            if (uVar24 != 0xffffffffffffffff) {
              lVar19 = lVar18 * 0x20;
              pfVar2 = (float *)(lVar23 + 0x10 + lVar19);
              pfVar1 = (float *)(lVar23 + lVar19);
              auVar27._4_4_ = -(uint)((float)(double)uVar11 < pfVar1[1]);
              auVar27._0_4_ = -(uint)((float)(double)plVar10 < *pfVar1);
              auVar27._8_4_ = -(uint)((float)(double)uVar12 < pfVar1[2]);
              auVar27._12_4_ = -(uint)(0.0 < pfVar1[3]);
              auVar25._4_4_ = -(uint)(pfVar2[1] < (float)dVar5);
              auVar25._0_4_ = -(uint)(*pfVar2 < (float)(double)plVar31);
              auVar25._8_4_ = -(uint)(pfVar2[2] < (float)(double)pdVar34);
              auVar25._12_4_ = -(uint)(pfVar2[3] < 0.0);
              iVar17 = movmskps((int)lVar19,auVar27 | auVar25);
              if (iVar17 == 0) {
                iVar17 = *(int *)(lVar23 + 0x48 + lVar18 * 4);
                if (iVar17 == 0) {
                  lVar18 = (longlong)(int)uStack_2b0;
                  uVar15 = (int)uStack_2b0 + 1;
                  uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar15);
                  if (uStack_2b0._4_4_ < uVar15) {
                    FUN_1446f48e2(&local_2b8,uVar21 & 0xffffffff);
                  }
                  *(int *)(local_2b8 + lVar18 * 4) = iVar3;
                }
                else if (0 < iVar17) {
                  uVar21 = uVar24 << 5 | 0x10;
                  do {
                    lVar18 = *(longlong *)((longlong)param_1 + 0xf0);
                    pfVar1 = (float *)(lVar18 + uVar21);
                    pfVar2 = (float *)(lVar18 + -0x10 + uVar21);
                    auVar28._4_4_ = -(uint)((float)(double)uVar11 < pfVar2[1]);
                    auVar28._0_4_ = -(uint)((float)(double)plVar10 < *pfVar2);
                    auVar28._8_4_ = -(uint)((float)(double)uVar12 < pfVar2[2]);
                    auVar28._12_4_ = -(uint)(0.0 < pfVar2[3]);
                    auVar26._4_4_ = -(uint)(pfVar1[1] < (float)dVar5);
                    auVar26._0_4_ = -(uint)(*pfVar1 < (float)(double)plVar31);
                    auVar26._8_4_ = -(uint)(pfVar1[2] < (float)(double)pdVar34);
                    auVar26._12_4_ = -(uint)(pfVar1[3] < 0.0);
                    iVar16 = movmskps((int)lVar18,auVar28 | auVar26);
                    if ((iVar16 == 0) &&
                       (cVar14 = FUN_1405cd1ac(&local_218,uVar24 & 0xffffffff), cVar14 == '\0'))
                    goto LAB_1405ccb4c;
                    uVar24 = uVar24 + 1;
                    uVar21 = uVar21 + 0x20;
                  } while ((longlong)uVar24 < (longlong)(iVar17 + iVar3));
                }
              }
            }
            lVar18 = 1;
            bVar13 = false;
          } while (bVar20);
        } while ((int)uStack_2b0 != 0);
      }
      goto LAB_1405ccb4c;
    }
  }
  else {
    param_4 = ABS(param_4);
    dVar4 = ((local_228 + param_4) - (local_240 - param_4)) * 0.5;
    dVar29 = ((local_230 + param_4) - (local_248 - param_4)) * 0.5;
    dVar30 = ((local_238 + param_4) - (local_250 - param_4)) * 0.5;
    dVar33 = (local_240 - param_4) + dVar4;
    dVar32 = (local_248 - param_4) + dVar29;
    dVar9 = (local_250 - param_4) + dVar30;
    dVar36 = dVar9 * local_328[2] - local_328[0] * dVar33;
    dVar35 = dVar32 * local_328[0] - local_328[1] * dVar9;
    dVar8 = dVar33 * local_328[1] - local_328[2] * dVar32;
    dVar8 = dVar8 + dVar8;
    dVar36 = dVar36 + dVar36;
    dVar35 = dVar35 + dVar35;
    local_308 = local_308 +
                (dVar35 * local_328[1] - dVar36 * local_328[2]) + local_328[3] * dVar8 + dVar9;
    dStack_300 = dStack_300 +
                 (local_328[2] * dVar8 - local_328[0] * dVar35) + local_328[3] * dVar36 + dVar32;
    local_2f8 = local_2f8 +
                dVar35 * local_328[3] + dVar33 + (dVar36 * local_328[0] - dVar8 * local_328[1]);
    uStack_2f0 = 0;
    local_218._0_4_ = (float)dVar5;
    local_210 = (float)dVar7;
    local_218._4_4_ = (float)dVar6;
    local_408 = (longlong *)CONCAT44((float)dVar29,(float)dVar30);
    dStack_400 = (double)CONCAT44(dStack_400._4_4_,(float)dVar4);
    local_410 = dVar6;
    FUN_1402e7b1c(&local_3a8,local_328,&local_408);
    local_408 = (longlong *)*param_3;
    dStack_400 = param_3[1];
    local_3f8 = (double *)param_3[2];
    plStack_3f0 = (longlong *)param_3[3];
    local_3d8 = param_3[6] * param_6[2];
    dVar5 = param_3[5] * param_6[1];
    local_3e8._8_4_ = SUB84(dVar5,0);
    local_3e8._0_8_ = param_3[4] * *param_6;
    local_3e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_3d0 = 0;
    local_3c8 = 0x3ff0000000000000;
    uStack_3c0 = 0x3ff0000000000000;
    local_3b8 = 0x3ff0000000000000;
    uStack_3b0 = 0;
    local_2b8 = CONCAT44((float)param_6[1],(float)*param_6);
    uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(float)param_6[2]);
    FUN_1405cd498(&local_218,&local_408,local_2a8);
    if (*(int *)((longlong)param_1 + 0xe8) != 0) {
      local_2b8 = 0;
      uStack_2b0 = 0;
      FUN_14481578e(&local_2b8,0x10);
      uVar21 = uStack_2b0;
      lVar18 = (longlong)(int)uStack_2b0;
      uVar15 = (int)uStack_2b0 + 1;
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar15);
      if (uStack_2b0._4_4_ < uVar15) {
        FUN_1446f48e2(&local_2b8,uVar21 & 0xffffffff);
      }
      *(undefined4 *)(local_2b8 + lVar18 * 4) = 0;
      if ((int)uStack_2b0 != 0) {
        do {
          lVar18 = (longlong)(int)uStack_2b0;
          uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(int)uStack_2b0 + -1);
          lVar18 = (longlong)*(int *)(local_2b8 + -4 + lVar18 * 4) * 0x50 +
                   *(longlong *)((longlong)param_1 + 0xe0);
          lVar23 = 0;
          bVar13 = true;
          do {
            bVar20 = bVar13;
            iVar3 = *(int *)(lVar18 + 0x40 + lVar23 * 4);
            uVar21 = (ulonglong)iVar3;
            if ((uVar21 != 0xffffffffffffffff) &&
               (cVar14 = FUN_1402e78fc(&local_3a8,lVar23 * 0x20 + lVar18), uVar24 = uStack_2b0,
               cVar14 != '\0')) {
              iVar17 = *(int *)(lVar18 + 0x48 + lVar23 * 4);
              if (iVar17 == 0) {
                lVar23 = (longlong)(int)uStack_2b0;
                uVar15 = (int)uStack_2b0 + 1;
                uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar15);
                if (uStack_2b0._4_4_ < uVar15) {
                  FUN_1446f48e2(&local_2b8,uVar24 & 0xffffffff);
                }
                *(int *)(local_2b8 + lVar23 * 4) = iVar3;
              }
              else if (0 < iVar17) {
                lVar23 = uVar21 << 5;
                do {
                  cVar14 = FUN_1402e78fc(&local_3a8,*(longlong *)((longlong)param_1 + 0xf0) + lVar23
                                        );
                  if ((cVar14 != '\0') &&
                     (cVar14 = FUN_1405cd1ac(&local_218,uVar21 & 0xffffffff), cVar14 == '\0'))
                  goto LAB_1405ccb4c;
                  uVar21 = uVar21 + 1;
                  lVar23 = lVar23 + 0x20;
                } while ((longlong)uVar21 < (longlong)(iVar17 + iVar3));
              }
            }
            lVar23 = 1;
            bVar13 = false;
          } while (bVar20);
        } while ((int)uStack_2b0 != 0);
      }
LAB_1405ccb4c:
      if (local_2b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar21 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_100);
LAB_1405ccb65:
  FUN_1405cc3c4(local_2a8);
  if ((local_f0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21 & 0xffffffff;
}



// FUNCTION 1405cd1ac FUN_1405cd1ac body=320 status=ok
// SIG undefined FUN_1405cd1ac(void)

ulonglong FUN_1405cd1ac(char *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_68 [32];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x110);
  lVar4 = (longlong)param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar1 + 0x80) == '\x01') {
    lVar1 = *(longlong *)(lVar1 + 0x60);
    lVar5 = (longlong)*(int *)(lVar1 + lVar4 * 0xc);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(lVar2 + lVar5 * 0xc);
    auVar6 = insertps(auVar6,*(undefined4 *)(lVar2 + 8 + lVar5 * 0xc),0x28);
    lVar5 = (longlong)*(int *)(lVar1 + 4 + lVar4 * 0xc);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)(lVar2 + lVar5 * 0xc);
    auVar8 = insertps(auVar8,*(undefined4 *)(lVar2 + 8 + lVar5 * 0xc),0x28);
    uVar3 = (ulonglong)*(int *)(lVar1 + 8 + lVar4 * 0xc);
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x70);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + lVar4 * 6);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
    auVar6 = insertps(auVar10,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + 2 + lVar4 * 6);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
    auVar8 = insertps(auVar7,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + 4 + lVar4 * 6);
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
  auVar10 = insertps(auVar9,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
  local_48 = *(float *)(param_1 + 0x100);
  fStack_44 = *(float *)(param_1 + 0x104);
  fStack_40 = *(float *)(param_1 + 0x108);
  fStack_3c = *(float *)(param_1 + 0x10c);
  local_28 = auVar6._0_4_ * local_48;
  fStack_24 = auVar6._4_4_ * fStack_44;
  fStack_20 = auVar6._8_4_ * fStack_40;
  fStack_1c = auVar6._12_4_ * fStack_3c;
  local_38 = auVar8._0_4_ * local_48;
  fStack_34 = auVar8._4_4_ * fStack_44;
  fStack_30 = auVar8._8_4_ * fStack_40;
  fStack_2c = auVar8._12_4_ * fStack_3c;
  local_48 = auVar10._0_4_ * local_48;
  fStack_44 = auVar10._4_4_ * fStack_44;
  fStack_40 = auVar10._8_4_ * fStack_40;
  fStack_3c = auVar10._12_4_ * fStack_3c;
  if (*param_1 == '\x01') {
    uVar3 = FUN_1405cbc66(param_1 + 0xe0,&local_28,&local_38,&local_48);
  }
  else {
    uVar3 = FUN_1405cd6c0(param_1 + 0x10,&local_28,&local_38,&local_48);
  }
  param_1[0x118] = (char)uVar3;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405cd2ed FUN_1405cd2ed body=184 status=ok
// SIG undefined FUN_1405cd2ed(void)

undefined8 FUN_1405cd2ed(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_e8 [32];
  longlong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_3[2] * *(double *)(param_2 + 0x30);
  local_b8 = param_3[1] * *(double *)(param_2 + 0x28);
  local_c0 = *param_3 * *(double *)(param_2 + 0x20);
  local_c8 = *(longlong *)(param_2 + 0x88);
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  FUN_1405cd3a6(local_a8,&local_c8,&local_c0,0);
  FUN_1405cd5a8(param_1,local_a8);
  FUN_1405cc3c4(local_a8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405cd3a6 FUN_1405cd3a6 body=242 status=ok
// SIG undefined FUN_1405cd3a6(void)

undefined8 *
FUN_1405cd3a6(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  
  bVar3 = *(byte *)(*param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar3;
  *(byte *)((longlong)param_1 + 0x1d) = bVar3;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4bc50;
  lVar4 = *param_2;
  param_1[0x11] = lVar4;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar4 = param_1[0x11];
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar4 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(lVar4 + 0x19);
  param_1[10] = param_4;
  FUN_1405cc4dc(param_1,param_3);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_1;
}



// FUNCTION 1405cd498 FUN_1405cd498 body=270 status=ok
// SIG undefined FUN_1405cd498(void)

longlong FUN_1405cd498(longlong param_1,longlong param_2,undefined8 param_3,ulonglong *param_4,
                      undefined8 param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar1 = ABS(*(double *)(param_2 + 0x18));
  *(bool *)param_1 = dVar1 == 1.0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x110) = param_5;
  *(undefined1 *)(param_1 + 0x118) = 0;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    FUN_1405ce1d4(&local_f8);
    memcpy((void *)(param_1 + 0x10),&local_f8,0xd0);
  }
  else {
    local_118 = *(undefined8 *)(param_2 + 0x20);
    uStack_110 = *(undefined8 *)(param_2 + 0x28);
    local_108 = *(undefined8 *)(param_2 + 0x30);
    FUN_1405cf72c(&local_f8);
    *(undefined8 *)(param_1 + 0xe0) = local_f8;
    *(undefined8 *)(param_1 + 0xe8) = uStack_f0;
    *(undefined8 *)(param_1 + 0xf0) = local_e8;
    *(undefined8 *)(param_1 + 0xf8) = uStack_e0;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_4;
  auVar2 = insertps(auVar2,(int)param_4[1],0x28);
  *(undefined1 (*) [16])(param_1 + 0x100) = auVar2;
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405cd5a8 FUN_1405cd5a8 body=279 status=ok
// SIG undefined FUN_1405cd5a8(void)

void FUN_1405cd5a8(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(*(longlong *)(param_2 + 0x88) + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar2;
  *(byte *)((longlong)param_1 + 0x1d) = bVar2;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4bc50;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1[0x11] + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_1[0x11] + 0x19);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = uVar1;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar1;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return;
}



// FUNCTION 1405cd6c0 FUN_1405cd6c0 body=2836 status=ok
// SIG undefined FUN_1405cd6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1405cd6c0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_EAX;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar43;
  float fVar46;
  undefined1 auVar14 [16];
  float fVar50;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar44;
  float fVar47;
  float fVar48;
  float fVar51;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar45;
  float fVar49;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar70;
  float fVar78;
  float fVar79;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar89 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  float fVar106;
  float fVar109;
  float fVar110;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  
  fVar106 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar13 = param_1[4];
  fVar58 = param_1[5];
  fVar66 = param_1[6];
  fVar12 = *param_2;
  fVar45 = param_2[1];
  fVar49 = param_2[2];
  fVar11 = fVar12 - fVar106;
  fVar43 = fVar45 - fVar4;
  fVar46 = fVar49 - fVar5;
  fVar84 = *param_3;
  fVar86 = param_3[1];
  fVar87 = param_3[2];
  fVar70 = fVar84 - fVar106;
  fVar78 = fVar86 - fVar4;
  fVar79 = fVar87 - fVar5;
  fVar6 = *param_4;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar56 = fVar6 - fVar106;
  fVar64 = fVar7 - fVar4;
  fVar67 = fVar8 - fVar5;
  fVar96 = fVar66 * fVar67 + fVar13 * fVar56 + fVar58 * fVar64;
  fVar80 = fVar11 * fVar13 + fVar43 * fVar58 + fVar46 * fVar66;
  fVar82 = fVar70 * fVar13 + fVar78 * fVar58 + fVar79 * fVar66;
  fVar90 = ABS(fVar80);
  fVar91 = ABS(fVar82);
  fVar92 = ABS(fVar96);
  fVar94 = ABS(fVar96);
  auVar16._4_4_ = -(uint)(fVar82 != fVar91);
  auVar16._0_4_ = -(uint)(fVar80 != fVar90);
  auVar16._8_4_ = -(uint)(fVar96 != fVar92);
  auVar16._12_4_ = -(uint)(fVar96 != fVar94);
  iVar9 = movmskps(in_EAX,auVar16);
  if (((iVar9 != 0) &&
      (auVar61._4_4_ = -(uint)(0.0 - fVar91 != fVar82),
      auVar61._0_4_ = -(uint)(0.0 - fVar90 != fVar80),
      auVar61._8_4_ = -(uint)(0.0 - fVar92 != fVar96),
      auVar61._12_4_ = -(uint)(0.0 - fVar94 != fVar96), iVar9 = movmskps(iVar9,auVar61), iVar9 != 0)
      ) || (auVar63._4_4_ = -(uint)(fVar91 <= param_1[0x11]),
           auVar63._0_4_ = -(uint)(fVar90 <= param_1[0x10]),
           auVar63._8_4_ = -(uint)(fVar92 <= param_1[0x12]),
           auVar63._12_4_ = -(uint)(fVar94 <= param_1[0x13]), iVar9 = movmskps(0,auVar63),
           iVar9 != 0)) {
    fVar80 = param_1[8];
    fVar82 = param_1[9];
    fVar90 = param_1[10];
    fVar97 = fVar67 * fVar90 + fVar56 * fVar80 + fVar64 * fVar82;
    fVar91 = fVar11 * fVar80 + fVar43 * fVar82 + fVar46 * fVar90;
    fVar92 = fVar70 * fVar80 + fVar78 * fVar82 + fVar79 * fVar90;
    fVar94 = ABS(fVar91);
    fVar96 = ABS(fVar92);
    fVar93 = ABS(fVar97);
    fVar95 = ABS(fVar97);
    auVar101._4_4_ = -(uint)(fVar92 != fVar96);
    auVar101._0_4_ = -(uint)(fVar91 != fVar94);
    auVar101._8_4_ = -(uint)(fVar97 != fVar93);
    auVar101._12_4_ = -(uint)(fVar97 != fVar95);
    iVar9 = movmskps(iVar9,auVar101);
    if (((iVar9 != 0) &&
        (auVar103._4_4_ = -(uint)(0.0 - fVar96 != fVar92),
        auVar103._0_4_ = -(uint)(0.0 - fVar94 != fVar91),
        auVar103._8_4_ = -(uint)(0.0 - fVar93 != fVar97),
        auVar103._12_4_ = -(uint)(0.0 - fVar95 != fVar97), iVar9 = movmskps(iVar9,auVar103),
        iVar9 != 0)) ||
       (auVar107._4_4_ = -(uint)(fVar96 <= param_1[0x15]),
       auVar107._0_4_ = -(uint)(fVar94 <= param_1[0x14]),
       auVar107._8_4_ = -(uint)(fVar93 <= param_1[0x16]),
       auVar107._12_4_ = -(uint)(fVar95 <= param_1[0x17]), iVar9 = movmskps(0,auVar107), iVar9 != 0)
       ) {
      fVar91 = param_1[0xc];
      fVar92 = param_1[0xd];
      fVar94 = param_1[0xe];
      fVar56 = fVar67 * fVar94 + fVar56 * fVar91 + fVar64 * fVar92;
      fVar11 = fVar11 * fVar91 + fVar43 * fVar92 + fVar46 * fVar94;
      fVar43 = fVar70 * fVar91 + fVar78 * fVar92 + fVar79 * fVar94;
      fVar46 = ABS(fVar11);
      fVar64 = ABS(fVar43);
      fVar67 = ABS(fVar56);
      fVar70 = ABS(fVar56);
      auVar71._4_4_ = -(uint)(fVar43 != fVar64);
      auVar71._0_4_ = -(uint)(fVar11 != fVar46);
      auVar71._8_4_ = -(uint)(fVar56 != fVar67);
      auVar71._12_4_ = -(uint)(fVar56 != fVar70);
      iVar9 = movmskps(iVar9,auVar71);
      if (((iVar9 != 0) &&
          (auVar72._4_4_ = -(uint)(0.0 - fVar64 != fVar43),
          auVar72._0_4_ = -(uint)(0.0 - fVar46 != fVar11),
          auVar72._8_4_ = -(uint)(0.0 - fVar67 != fVar56),
          auVar72._12_4_ = -(uint)(0.0 - fVar70 != fVar56), iVar9 = movmskps(iVar9,auVar72),
          iVar9 != 0)) ||
         (auVar14._4_4_ = -(uint)(fVar64 <= param_1[0x19]),
         auVar14._0_4_ = -(uint)(fVar46 <= param_1[0x18]),
         auVar14._8_4_ = -(uint)(fVar67 <= param_1[0x1a]),
         auVar14._12_4_ = -(uint)(fVar70 <= param_1[0x1b]), iVar9 = movmskps(0,auVar14), iVar9 != 0)
         ) {
        fVar57 = fVar84 - fVar12;
        fVar65 = fVar86 - fVar45;
        fVar68 = fVar87 - fVar49;
        fVar69 = param_3[3] - param_2[3];
        fVar81 = fVar6 - fVar84;
        fVar83 = fVar7 - fVar86;
        fVar85 = fVar8 - fVar87;
        fVar88 = param_4[3] - param_3[3];
        fVar78 = fVar57 * fVar83 - fVar65 * fVar81;
        fVar96 = fVar65 * fVar85 - fVar68 * fVar83;
        fVar95 = fVar68 * fVar81 - fVar57 * fVar85;
        fVar50 = fVar69 * fVar88 - fVar69 * fVar88;
        auVar15._0_4_ = fVar95 * fVar95 + fVar96 * fVar96;
        auVar15._4_4_ = fVar96 * fVar96 + fVar95 * fVar95;
        auVar15._8_4_ = fVar50 * fVar50 + fVar78 * fVar78;
        auVar15._12_4_ = fVar78 * fVar78 + fVar50 * fVar50;
        auVar73._0_4_ = auVar15._8_4_ + auVar15._0_4_;
        auVar73._4_4_ = auVar15._12_4_ + auVar15._4_4_;
        auVar73._8_4_ = auVar15._0_4_ + auVar15._8_4_;
        auVar73._12_4_ = auVar15._4_4_ + auVar15._12_4_;
        auVar16 = sqrtps(auVar15,auVar73);
        auVar16 = divps(_DAT_1499314a0,auVar16);
        fVar96 = auVar16._0_4_ * fVar96;
        fVar95 = auVar16._4_4_ * fVar95;
        fVar78 = auVar16._8_4_ * fVar78;
        fVar50 = auVar16._12_4_ * fVar50;
        fVar79 = fVar57 * fVar95 - fVar65 * fVar96;
        fVar93 = fVar65 * fVar78 - fVar68 * fVar95;
        fVar97 = fVar68 * fVar96 - fVar57 * fVar78;
        fVar11 = fVar69 * fVar50 - fVar69 * fVar50;
        fVar11 = fVar11 * fVar11;
        auVar17._0_4_ = fVar97 * fVar97 + fVar93 * fVar93;
        auVar17._4_4_ = fVar93 * fVar93 + fVar97 * fVar97;
        auVar17._8_4_ = fVar11 + fVar79 * fVar79;
        auVar17._12_4_ = fVar79 * fVar79 + fVar11;
        auVar98._0_4_ = auVar17._8_4_ + auVar17._0_4_;
        auVar98._4_4_ = auVar17._12_4_ + auVar17._4_4_;
        auVar98._8_4_ = auVar17._0_4_ + auVar17._8_4_;
        auVar98._12_4_ = auVar17._4_4_ + auVar17._12_4_;
        auVar16 = sqrtps(auVar17,auVar98);
        auVar16 = divps(_DAT_1499314a0,auVar16);
        fVar93 = auVar16._0_4_ * fVar93;
        fVar97 = auVar16._4_4_ * fVar97;
        fVar79 = auVar16._8_4_ * fVar79;
        auVar16 = *(undefined1 (*) [16])(param_1 + 0x1c);
        fVar11 = auVar16._0_4_;
        fVar56 = auVar16._4_4_;
        fVar67 = auVar16._8_4_;
        auVar61 = *(undefined1 (*) [16])(param_1 + 0x20);
        fVar43 = auVar61._0_4_;
        auVar99._0_4_ = 0.0 - fVar11;
        auVar99._4_4_ = 0.0 - fVar56;
        auVar99._8_4_ = 0.0 - fVar67;
        auVar99._12_4_ = 0.0 - auVar16._12_4_;
        iVar9 = -(uint)(0.0 < fVar79 * fVar67 + fVar93 * fVar11 + fVar97 * fVar56);
        auVar18._4_4_ = iVar9;
        auVar18._0_4_ = iVar9;
        auVar18._8_4_ = iVar9;
        auVar18._12_4_ = iVar9;
        auVar103 = blendvps(auVar16,auVar99,auVar18);
        auVar63 = *(undefined1 (*) [16])(param_1 + 0x24);
        fVar46 = auVar63._0_4_;
        fVar64 = auVar63._4_4_;
        fVar70 = auVar63._8_4_;
        fVar52 = auVar61._4_4_;
        fVar53 = auVar61._8_4_;
        auVar100._0_4_ = 0.0 - fVar43;
        auVar100._4_4_ = 0.0 - fVar52;
        auVar100._8_4_ = 0.0 - fVar53;
        auVar100._12_4_ = 0.0 - auVar61._12_4_;
        iVar9 = -(uint)(0.0 < fVar79 * fVar53 + fVar93 * fVar43 + fVar97 * fVar52);
        auVar19._4_4_ = iVar9;
        auVar19._0_4_ = iVar9;
        auVar19._8_4_ = iVar9;
        auVar19._12_4_ = iVar9;
        auVar107 = blendvps(auVar61,auVar100,auVar19);
        iVar9 = -(uint)(0.0 < fVar79 * fVar70 + fVar93 * fVar46 + fVar97 * fVar64);
        auVar104._0_4_ = 0.0 - fVar46;
        auVar104._4_4_ = 0.0 - fVar64;
        auVar104._8_4_ = 0.0 - fVar70;
        auVar104._12_4_ = 0.0 - auVar63._12_4_;
        auVar20._4_4_ = iVar9;
        auVar20._0_4_ = iVar9;
        auVar20._8_4_ = iVar9;
        auVar20._12_4_ = iVar9;
        auVar101 = blendvps(auVar63,auVar104,auVar20);
        if (((auVar101._8_4_ + auVar107._8_4_ + auVar103._8_4_ + fVar5) - fVar49) * fVar79 +
            ((auVar101._0_4_ + auVar107._0_4_ + auVar103._0_4_ + fVar106) - fVar12) * fVar93 +
            ((auVar101._4_4_ + auVar107._4_4_ + auVar103._4_4_ + fVar4) - fVar45) * fVar97 <= 0.0) {
          fVar79 = fVar12 - fVar6;
          fVar97 = fVar45 - fVar7;
          fVar47 = fVar49 - fVar8;
          fVar51 = param_2[3] - param_4[3];
          fVar93 = (fVar12 + fVar84 + fVar6) * 0.33333334;
          fVar44 = (fVar45 + fVar86 + fVar7) * 0.33333334;
          fVar48 = (fVar49 + fVar87 + fVar8) * 0.33333334;
          lVar10 = 0;
          do {
            pfVar1 = (float *)((longlong)param_1 + lVar10 + 0xa0);
            fVar105 = fVar65 * *pfVar1 - pfVar1[1] * fVar57;
            fVar109 = fVar68 * pfVar1[1] - pfVar1[2] * fVar65;
            fVar110 = fVar57 * pfVar1[2] - *pfVar1 * fVar68;
            auVar108._12_4_ = fVar69 * pfVar1[3] - pfVar1[3] * fVar69;
            auVar108._4_4_ = fVar110;
            auVar108._0_4_ = fVar109;
            auVar108._8_4_ = fVar105;
            auVar74._0_4_ = 0.0 - fVar109;
            auVar74._4_4_ = 0.0 - fVar110;
            auVar74._8_4_ = 0.0 - fVar105;
            auVar74._12_4_ = 0.0 - auVar108._12_4_;
            iVar9 = -(uint)((fVar49 - fVar48) * fVar105 +
                            (fVar12 - fVar93) * fVar109 + (fVar45 - fVar44) * fVar110 < 0.0);
            auVar21._4_4_ = iVar9;
            auVar21._0_4_ = iVar9;
            auVar21._8_4_ = iVar9;
            auVar21._12_4_ = iVar9;
            auVar101 = blendvps(auVar108,auVar74,auVar21);
            fVar105 = auVar101._0_4_;
            fVar109 = auVar101._4_4_;
            fVar110 = auVar101._8_4_;
            iVar9 = -(uint)(0.0 < fVar67 * fVar110 + fVar11 * fVar105 + fVar56 * fVar109);
            auVar22._4_4_ = iVar9;
            auVar22._0_4_ = iVar9;
            auVar22._8_4_ = iVar9;
            auVar22._12_4_ = iVar9;
            auVar101 = blendvps(auVar16,auVar99,auVar22);
            iVar9 = -(uint)(0.0 < fVar53 * fVar110 + fVar43 * fVar105 + fVar52 * fVar109);
            auVar23._4_4_ = iVar9;
            auVar23._0_4_ = iVar9;
            auVar23._8_4_ = iVar9;
            auVar23._12_4_ = iVar9;
            auVar107 = blendvps(auVar61,auVar100,auVar23);
            iVar9 = -(uint)(0.0 < fVar70 * fVar110 + fVar46 * fVar105 + fVar64 * fVar109);
            auVar24._4_4_ = iVar9;
            auVar24._0_4_ = iVar9;
            auVar24._8_4_ = iVar9;
            auVar24._12_4_ = iVar9;
            auVar103 = blendvps(auVar63,auVar104,auVar24);
            if (0.0001 < ((auVar103._8_4_ + auVar107._8_4_ + auVar101._8_4_ + fVar5) - fVar49) *
                         fVar110 + ((auVar103._0_4_ + auVar107._0_4_ + auVar101._0_4_ + fVar106) -
                                   fVar12) * fVar105 +
                                   ((auVar103._4_4_ + auVar107._4_4_ + auVar101._4_4_ + fVar4) -
                                   fVar45) * fVar109) {
              return 0;
            }
            lVar10 = lVar10 + 0x10;
          } while (lVar10 != 0x30);
          fVar12 = fVar81 * fVar95 - fVar83 * fVar96;
          fVar45 = fVar83 * fVar78 - fVar85 * fVar95;
          fVar49 = fVar85 * fVar96 - fVar81 * fVar78;
          fVar57 = fVar88 * fVar50 - fVar88 * fVar50;
          fVar57 = fVar57 * fVar57;
          auVar25._0_4_ = fVar49 * fVar49 + fVar45 * fVar45;
          auVar25._4_4_ = fVar45 * fVar45 + fVar49 * fVar49;
          auVar25._8_4_ = fVar57 + fVar12 * fVar12;
          auVar25._12_4_ = fVar12 * fVar12 + fVar57;
          auVar59._0_4_ = auVar25._8_4_ + auVar25._0_4_;
          auVar59._4_4_ = auVar25._12_4_ + auVar25._4_4_;
          auVar59._8_4_ = auVar25._0_4_ + auVar25._8_4_;
          auVar59._12_4_ = auVar25._4_4_ + auVar25._12_4_;
          auVar101 = sqrtps(auVar25,auVar59);
          auVar101 = divps(_DAT_1499314a0,auVar101);
          fVar45 = auVar101._0_4_ * fVar45;
          fVar49 = auVar101._4_4_ * fVar49;
          fVar12 = auVar101._8_4_ * fVar12;
          iVar9 = -(uint)(0.0 < fVar12 * fVar67 + fVar45 * fVar11 + fVar49 * fVar56);
          auVar26._4_4_ = iVar9;
          auVar26._0_4_ = iVar9;
          auVar26._8_4_ = iVar9;
          auVar26._12_4_ = iVar9;
          auVar101 = blendvps(auVar16,auVar99,auVar26);
          iVar9 = -(uint)(0.0 < fVar12 * fVar53 + fVar45 * fVar43 + fVar49 * fVar52);
          auVar27._4_4_ = iVar9;
          auVar27._0_4_ = iVar9;
          auVar27._8_4_ = iVar9;
          auVar27._12_4_ = iVar9;
          auVar107 = blendvps(auVar61,auVar100,auVar27);
          iVar9 = -(uint)(0.0 < fVar12 * fVar70 + fVar45 * fVar46 + fVar49 * fVar64);
          auVar28._4_4_ = iVar9;
          auVar28._0_4_ = iVar9;
          auVar28._8_4_ = iVar9;
          auVar28._12_4_ = iVar9;
          auVar103 = blendvps(auVar63,auVar104,auVar28);
          if (((auVar103._8_4_ + auVar107._8_4_ + auVar101._8_4_ + fVar5) - fVar87) * fVar12 +
              ((auVar103._0_4_ + auVar107._0_4_ + auVar101._0_4_ + fVar106) - fVar84) * fVar45 +
              ((auVar103._4_4_ + auVar107._4_4_ + auVar101._4_4_ + fVar4) - fVar86) * fVar49 <= 0.0)
          {
            lVar10 = 0;
            do {
              pfVar1 = (float *)((longlong)param_1 + lVar10 + 0xa0);
              fVar12 = fVar83 * *pfVar1 - pfVar1[1] * fVar81;
              fVar45 = fVar85 * pfVar1[1] - pfVar1[2] * fVar83;
              fVar49 = fVar81 * pfVar1[2] - *pfVar1 * fVar85;
              auVar102._12_4_ = fVar88 * pfVar1[3] - pfVar1[3] * fVar88;
              auVar102._4_4_ = fVar49;
              auVar102._0_4_ = fVar45;
              auVar102._8_4_ = fVar12;
              auVar75._0_4_ = 0.0 - fVar45;
              auVar75._4_4_ = 0.0 - fVar49;
              auVar75._8_4_ = 0.0 - fVar12;
              auVar75._12_4_ = 0.0 - auVar102._12_4_;
              iVar9 = -(uint)((fVar87 - fVar48) * fVar12 +
                              (fVar84 - fVar93) * fVar45 + (fVar86 - fVar44) * fVar49 < 0.0);
              auVar29._4_4_ = iVar9;
              auVar29._0_4_ = iVar9;
              auVar29._8_4_ = iVar9;
              auVar29._12_4_ = iVar9;
              auVar101 = blendvps(auVar102,auVar75,auVar29);
              fVar12 = auVar101._0_4_;
              fVar45 = auVar101._4_4_;
              fVar49 = auVar101._8_4_;
              iVar9 = -(uint)(0.0 < fVar67 * fVar49 + fVar11 * fVar12 + fVar56 * fVar45);
              auVar30._4_4_ = iVar9;
              auVar30._0_4_ = iVar9;
              auVar30._8_4_ = iVar9;
              auVar30._12_4_ = iVar9;
              auVar101 = blendvps(auVar16,auVar99,auVar30);
              iVar9 = -(uint)(0.0 < fVar53 * fVar49 + fVar43 * fVar12 + fVar52 * fVar45);
              auVar31._4_4_ = iVar9;
              auVar31._0_4_ = iVar9;
              auVar31._8_4_ = iVar9;
              auVar31._12_4_ = iVar9;
              auVar107 = blendvps(auVar61,auVar100,auVar31);
              iVar9 = -(uint)(0.0 < fVar70 * fVar49 + fVar46 * fVar12 + fVar64 * fVar45);
              auVar32._4_4_ = iVar9;
              auVar32._0_4_ = iVar9;
              auVar32._8_4_ = iVar9;
              auVar32._12_4_ = iVar9;
              auVar103 = blendvps(auVar63,auVar104,auVar32);
              if (0.0001 < ((auVar103._8_4_ + auVar107._8_4_ + auVar101._8_4_ + fVar5) - fVar87) *
                           fVar49 + ((auVar103._0_4_ + auVar107._0_4_ + auVar101._0_4_ + fVar106) -
                                    fVar84) * fVar12 +
                                    ((auVar103._4_4_ + auVar107._4_4_ + auVar101._4_4_ + fVar4) -
                                    fVar86) * fVar45) {
                return 0;
              }
              lVar10 = lVar10 + 0x10;
            } while (lVar10 != 0x30);
            fVar12 = fVar95 * fVar79 - fVar97 * fVar96;
            fVar49 = fVar78 * fVar97 - fVar47 * fVar95;
            fVar86 = fVar96 * fVar47 - fVar79 * fVar78;
            fVar50 = fVar50 * fVar51 - fVar51 * fVar50;
            fVar50 = fVar50 * fVar50;
            fVar45 = fVar86 * fVar86 + fVar49 * fVar49;
            fVar84 = fVar49 * fVar49 + fVar86 * fVar86;
            fVar87 = fVar50 + fVar12 * fVar12;
            fVar50 = fVar12 * fVar12 + fVar50;
            auVar76._0_4_ = fVar87 + fVar45;
            auVar76._4_4_ = fVar50 + fVar84;
            auVar76._8_4_ = fVar45 + fVar87;
            auVar76._12_4_ = fVar84 + fVar50;
            auVar101 = sqrtps(auVar76,auVar76);
            auVar101 = divps(_DAT_1499314a0,auVar101);
            fVar49 = auVar101._0_4_ * fVar49;
            fVar86 = auVar101._4_4_ * fVar86;
            fVar12 = auVar101._8_4_ * fVar12;
            iVar9 = -(uint)(0.0 < fVar12 * fVar67 + fVar49 * fVar11 + fVar86 * fVar56);
            auVar33._4_4_ = iVar9;
            auVar33._0_4_ = iVar9;
            auVar33._8_4_ = iVar9;
            auVar33._12_4_ = iVar9;
            auVar101 = blendvps(auVar16,auVar99,auVar33);
            iVar9 = -(uint)(0.0 < fVar12 * fVar53 + fVar49 * fVar43 + fVar86 * fVar52);
            auVar34._4_4_ = iVar9;
            auVar34._0_4_ = iVar9;
            auVar34._8_4_ = iVar9;
            auVar34._12_4_ = iVar9;
            auVar107 = blendvps(auVar61,auVar100,auVar34);
            iVar9 = -(uint)(0.0 < fVar12 * fVar70 + fVar49 * fVar46 + fVar86 * fVar64);
            auVar35._4_4_ = iVar9;
            auVar35._0_4_ = iVar9;
            auVar35._8_4_ = iVar9;
            auVar35._12_4_ = iVar9;
            auVar103 = blendvps(auVar63,auVar104,auVar35);
            if (((auVar103._8_4_ + auVar107._8_4_ + auVar101._8_4_ + fVar5) - fVar8) * fVar12 +
                ((auVar103._0_4_ + auVar107._0_4_ + auVar101._0_4_ + fVar106) - fVar6) * fVar49 +
                ((auVar103._4_4_ + auVar107._4_4_ + auVar101._4_4_ + fVar4) - fVar7) * fVar86 <= 0.0
               ) {
              lVar10 = 0;
              while( true ) {
                pfVar1 = (float *)((longlong)param_1 + lVar10 + 0xa0);
                fVar12 = fVar97 * *pfVar1 - pfVar1[1] * fVar79;
                fVar45 = fVar47 * pfVar1[1] - pfVar1[2] * fVar97;
                fVar49 = fVar79 * pfVar1[2] - *pfVar1 * fVar47;
                auVar89._12_4_ = fVar51 * pfVar1[3] - pfVar1[3] * fVar51;
                auVar89._4_4_ = fVar49;
                auVar89._0_4_ = fVar45;
                auVar89._8_4_ = fVar12;
                auVar77._0_4_ = 0.0 - fVar45;
                auVar77._4_4_ = 0.0 - fVar49;
                auVar77._8_4_ = 0.0 - fVar12;
                auVar77._12_4_ = 0.0 - auVar89._12_4_;
                iVar9 = -(uint)((fVar8 - fVar48) * fVar12 +
                                (fVar6 - fVar93) * fVar45 + (fVar7 - fVar44) * fVar49 < 0.0);
                auVar36._4_4_ = iVar9;
                auVar36._0_4_ = iVar9;
                auVar36._8_4_ = iVar9;
                auVar36._12_4_ = iVar9;
                auVar101 = blendvps(auVar89,auVar77,auVar36);
                fVar12 = auVar101._0_4_;
                fVar45 = auVar101._4_4_;
                fVar49 = auVar101._8_4_;
                iVar9 = -(uint)(0.0 < fVar67 * fVar49 + fVar11 * fVar12 + fVar56 * fVar45);
                auVar37._4_4_ = iVar9;
                auVar37._0_4_ = iVar9;
                auVar37._8_4_ = iVar9;
                auVar37._12_4_ = iVar9;
                auVar101 = blendvps(auVar16,auVar99,auVar37);
                iVar9 = -(uint)(0.0 < fVar53 * fVar49 + fVar43 * fVar12 + fVar52 * fVar45);
                auVar38._4_4_ = iVar9;
                auVar38._0_4_ = iVar9;
                auVar38._8_4_ = iVar9;
                auVar38._12_4_ = iVar9;
                auVar107 = blendvps(auVar61,auVar100,auVar38);
                iVar9 = -(uint)(0.0 < fVar70 * fVar49 + fVar46 * fVar12 + fVar64 * fVar45);
                auVar39._4_4_ = iVar9;
                auVar39._0_4_ = iVar9;
                auVar39._8_4_ = iVar9;
                auVar39._12_4_ = iVar9;
                auVar103 = blendvps(auVar63,auVar104,auVar39);
                if (0.0001 < ((auVar103._8_4_ + auVar107._8_4_ + auVar101._8_4_ + fVar5) - fVar8) *
                             fVar49 + ((auVar103._0_4_ + auVar107._0_4_ + auVar101._0_4_ + fVar106)
                                      - fVar6) * fVar12 +
                                      ((auVar103._4_4_ + auVar107._4_4_ + auVar101._4_4_ + fVar4) -
                                      fVar7) * fVar45) break;
                lVar10 = lVar10 + 0x10;
                if (lVar10 == 0x30) {
                  auVar54._0_4_ = fVar13 * param_1[0x10];
                  auVar54._4_4_ = fVar58 * param_1[0x11];
                  auVar54._8_4_ = fVar66 * param_1[0x12];
                  auVar54._12_4_ = param_1[7] * param_1[0x13];
                  auVar60._0_4_ = 0.0 - auVar54._0_4_;
                  auVar60._4_4_ = 0.0 - auVar54._4_4_;
                  auVar60._8_4_ = 0.0 - auVar54._8_4_;
                  auVar60._12_4_ = 0.0 - auVar54._12_4_;
                  iVar9 = -(uint)(0.0 < fVar78 * auVar54._8_4_ +
                                        fVar96 * auVar54._0_4_ + fVar95 * auVar54._4_4_);
                  auVar40._4_4_ = iVar9;
                  auVar40._0_4_ = iVar9;
                  auVar40._8_4_ = iVar9;
                  auVar40._12_4_ = iVar9;
                  auVar61 = blendvps(auVar60,auVar54,auVar40);
                  fVar80 = fVar80 * param_1[0x14];
                  fVar82 = fVar82 * param_1[0x15];
                  fVar90 = fVar90 * param_1[0x16];
                  auVar55._0_4_ = 0.0 - fVar80;
                  auVar55._4_4_ = 0.0 - fVar82;
                  auVar55._8_4_ = 0.0 - fVar90;
                  auVar55._12_4_ = 0.0 - param_1[0xb] * param_1[0x17];
                  iVar9 = -(uint)(0.0 < fVar78 * fVar90 + fVar96 * fVar80 + fVar95 * fVar82);
                  auVar41._4_4_ = iVar9;
                  auVar41._0_4_ = iVar9;
                  auVar41._8_4_ = iVar9;
                  auVar41._12_4_ = iVar9;
                  auVar2._4_4_ = fVar82;
                  auVar2._0_4_ = fVar80;
                  auVar2._8_4_ = fVar90;
                  auVar2._12_4_ = param_1[0xb] * param_1[0x17];
                  auVar16 = blendvps(auVar55,auVar2,auVar41);
                  fVar91 = fVar91 * param_1[0x18];
                  fVar92 = fVar92 * param_1[0x19];
                  fVar94 = fVar94 * param_1[0x1a];
                  auVar62._0_4_ = 0.0 - fVar91;
                  auVar62._4_4_ = 0.0 - fVar92;
                  auVar62._8_4_ = 0.0 - fVar94;
                  auVar62._12_4_ = 0.0 - param_1[0xf] * param_1[0x1b];
                  iVar9 = -(uint)(0.0 < fVar78 * fVar94 + fVar96 * fVar91 + fVar95 * fVar92);
                  auVar42._4_4_ = iVar9;
                  auVar42._0_4_ = iVar9;
                  auVar42._8_4_ = iVar9;
                  auVar42._12_4_ = iVar9;
                  auVar3._4_4_ = fVar92;
                  auVar3._0_4_ = fVar91;
                  auVar3._8_4_ = fVar94;
                  auVar3._12_4_ = param_1[0xf] * param_1[0x1b];
                  auVar63 = blendvps(auVar62,auVar3,auVar42);
                  fVar58 = auVar63._0_4_ + auVar16._0_4_ + auVar61._0_4_;
                  fVar66 = auVar63._4_4_ + auVar16._4_4_ + auVar61._4_4_;
                  fVar12 = auVar63._8_4_ + auVar16._8_4_ + auVar61._8_4_;
                  fVar13 = ((fVar5 + fVar12) - fVar48) * fVar78 +
                           ((fVar106 + fVar58) - fVar93) * fVar96 +
                           ((fVar4 + fVar66) - fVar44) * fVar95;
                  if (ABS(fVar13) <= 0.0001) {
                    return 1;
                  }
                  fVar106 = fVar78 * ((fVar5 - fVar12) - fVar48) +
                            fVar96 * ((fVar106 - fVar58) - fVar93) +
                            fVar95 * ((fVar4 - fVar66) - fVar44);
                  if (0.0001 < ABS(fVar106)) {
                    return -((float)(-(uint)(0.0 < fVar106) & 0x3f800000 |
                                    ~-(uint)(0.0 < fVar106) & -(uint)(fVar106 < 0.0) & 0xbf800000)
                            != (float)(-(uint)(0.0 < fVar13) & 0x3f800000 |
                                      ~-(uint)(0.0 < fVar13) & -(uint)(fVar13 < 0.0) & 0xbf800000))
                           & 1;
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1405ce1d4 FUN_1405ce1d4 body=948 status=ok
// SIG undefined FUN_1405ce1d4(void)

undefined1 (*) [16] FUN_1405ce1d4(undefined1 (*param_1) [16],double *param_2,longlong param_3)

{
  float *pfVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_188 [44];
  float local_15c;
  double local_158;
  double dStack_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  double dVar3;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar13 = *param_2;
  dVar14 = param_2[1];
  local_158 = param_2[2];
  dStack_150 = param_2[3];
  lVar18 = *(longlong *)(param_3 + 0x88);
  dVar19 = (*(double *)(lVar18 + 0x48) - *(double *)(lVar18 + 0x30)) * 0.5;
  dVar21 = (*(double *)(lVar18 + 0x40) - *(double *)(lVar18 + 0x28)) * 0.5;
  dVar23 = (*(double *)(lVar18 + 0x38) - *(double *)(lVar18 + 0x20)) * 0.5;
  dVar25 = (*(double *)(lVar18 + 0x30) + dVar19) * *(double *)(param_3 + 0x30);
  dVar8 = (*(double *)(lVar18 + 0x28) + dVar21) * *(double *)(param_3 + 0x28);
  dVar11 = (*(double *)(lVar18 + 0x20) + dVar23) * *(double *)(param_3 + 0x20);
  dVar2 = param_2[3];
  dVar3 = param_2[3];
  dVar39 = dVar11 * local_158 - dVar13 * dVar25;
  dVar38 = dVar8 * dVar13 - dVar14 * dVar11;
  dVar9 = dVar25 * dVar14 - local_158 * dVar8;
  dVar9 = dVar9 + dVar9;
  dVar39 = dVar39 + dVar39;
  dVar38 = dVar38 + dVar38;
  dVar12 = local_158 * dVar9;
  dVar10 = dVar39 * local_158;
  local_15c = (float)dVar2;
  local_140 = (float)local_158;
  local_148 = (float)dVar13;
  dVar5 = param_2[4];
  dVar6 = param_2[5];
  dVar4 = param_2[6];
  fVar26 = (float)((*(double *)(param_3 + 0x30) + 9.99999993922529e-09) * dVar19);
  fVar34 = (float)((*(double *)(param_3 + 0x28) + 9.99999993922529e-09) * dVar21);
  fVar30 = (float)((*(double *)(param_3 + 0x20) + 9.99999993922529e-09) * dVar23);
  local_144 = (float)param_2[1];
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_13c = local_15c;
  FUN_1402e7ce8(&local_148,&local_108);
  auVar20._8_8_ = uStack_100;
  auVar20._0_8_ = local_108;
  auVar20 = blendps(auVar20,ZEXT816(0),8);
  param_1[1] = auVar20;
  auVar22._8_8_ = uStack_f0;
  auVar22._0_8_ = local_f8;
  auVar22 = blendps(auVar22,ZEXT816(0),8);
  param_1[2] = auVar22;
  auVar24._8_8_ = uStack_e0;
  auVar24._0_8_ = local_e8;
  auVar24 = blendps(auVar24,ZEXT816(0),8);
  param_1[3] = auVar24;
  auVar7._4_4_ = (float)((dVar12 - dVar13 * dVar38) + dVar3 * dVar39 + dVar8 + dVar6);
  auVar7._0_4_ = (float)((dVar38 * dVar14 - dVar10) + dVar2 * dVar9 + dVar11 + dVar5);
  auVar7._8_4_ = (float)(dVar38 * dVar2 + dVar25 + (dVar39 * dVar13 - dVar9 * dVar14) + dVar4);
  auVar7._12_4_ = 0;
  *param_1 = auVar7;
  *(float *)param_1[4] = fVar30;
  *(float *)(param_1[4] + 4) = fVar30;
  *(float *)(param_1[4] + 8) = fVar30;
  *(float *)(param_1[4] + 0xc) = fVar30;
  *(float *)param_1[5] = fVar34;
  *(float *)(param_1[5] + 4) = fVar34;
  *(float *)(param_1[5] + 8) = fVar34;
  *(float *)(param_1[5] + 0xc) = fVar34;
  *(float *)param_1[6] = fVar26;
  *(float *)(param_1[6] + 4) = fVar26;
  *(float *)(param_1[6] + 8) = fVar26;
  *(float *)(param_1[6] + 0xc) = fVar26;
  fVar31 = fVar30 * auVar20._0_4_;
  fVar32 = fVar30 * auVar20._4_4_;
  fVar33 = fVar30 * auVar20._8_4_;
  fVar30 = fVar30 * auVar20._12_4_;
  *(float *)param_1[7] = fVar31;
  *(float *)(param_1[7] + 4) = fVar32;
  *(float *)(param_1[7] + 8) = fVar33;
  *(float *)(param_1[7] + 0xc) = fVar30;
  fVar35 = fVar34 * auVar22._0_4_;
  fVar36 = fVar34 * auVar22._4_4_;
  fVar37 = fVar34 * auVar22._8_4_;
  fVar34 = fVar34 * auVar22._12_4_;
  *(float *)param_1[8] = fVar35;
  *(float *)(param_1[8] + 4) = fVar36;
  *(float *)(param_1[8] + 8) = fVar37;
  *(float *)(param_1[8] + 0xc) = fVar34;
  fVar27 = fVar26 * auVar24._0_4_;
  fVar28 = fVar26 * auVar24._4_4_;
  fVar29 = fVar26 * auVar24._8_4_;
  fVar26 = fVar26 * auVar24._12_4_;
  *(float *)param_1[9] = fVar27;
  *(float *)(param_1[9] + 4) = fVar28;
  *(float *)(param_1[9] + 8) = fVar29;
  *(float *)(param_1[9] + 0xc) = fVar26;
  local_138[0] = (0.0 - fVar31) + fVar35 + fVar27;
  local_138[1] = (0.0 - fVar32) + fVar36 + fVar28;
  local_138[2] = (0.0 - fVar33) + fVar37 + fVar29;
  local_138[3] = (0.0 - fVar30) + fVar34 + fVar26;
  local_138[4] = (0.0 - fVar35) + fVar31 + fVar27;
  local_138[5] = (0.0 - fVar36) + fVar32 + fVar28;
  local_138[6] = (0.0 - fVar37) + fVar33 + fVar29;
  local_138[7] = (0.0 - fVar34) + fVar30 + fVar26;
  local_138[8] = (0.0 - fVar27) + fVar31 + fVar35;
  local_138[9] = (0.0 - fVar28) + fVar32 + fVar36;
  local_138[10] = (0.0 - fVar29) + fVar33 + fVar37;
  local_138[0xb] = (0.0 - fVar26) + fVar30 + fVar34;
  lVar18 = 0;
  do {
    fVar15 = *(float *)((longlong)local_138 + lVar18 + 4);
    fVar16 = *(float *)((longlong)local_138 + lVar18 + 8);
    fVar17 = *(float *)((longlong)local_138 + lVar18 + 0xc);
    pfVar1 = (float *)(param_1[10] + lVar18);
    *pfVar1 = *(float *)((longlong)local_138 + lVar18) - (fVar31 + fVar35 + fVar27);
    pfVar1[1] = fVar15 - (fVar32 + fVar36 + fVar28);
    pfVar1[2] = fVar16 - (fVar33 + fVar37 + fVar29);
    pfVar1[3] = fVar17 - (fVar30 + fVar34 + fVar26);
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x30);
  if ((local_c0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ce58a FUN_1405ce58a body=2904 status=ok
// SIG undefined FUN_1405ce58a(void)

ulonglong FUN_1405ce58a(double param_1,longlong *param_2,double *param_3,double param_4,
                       undefined8 *param_5,double *param_6)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  ulonglong uVar21;
  double *pdVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  longlong *plVar31;
  double dVar32;
  double dVar33;
  double *pdVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_3a8 [32];
  double local_388;
  double local_380;
  undefined8 local_378;
  double dStack_370;
  double *local_368;
  longlong *plStack_360;
  undefined1 local_358 [16];
  double local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  double local_298 [4];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  float local_210;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  dVar3 = param_6[2];
  dVar7 = 1.0 / dVar3;
  dVar32 = *param_6;
  dVar35 = param_6[1];
  dVar6 = 1.0 / dVar35;
  dVar5 = 1.0 / dVar32;
  local_230 = param_4;
  if (param_5 != (undefined8 *)0x0) {
    pdVar34 = param_3;
    pdVar22 = (double *)&local_218;
    for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pdVar22 = *pdVar34;
      pdVar34 = pdVar34 + 1;
      pdVar22 = pdVar22 + 1;
    }
    local_1e8 = dVar3 * local_1e8;
    dStack_1f0 = dVar35 * dStack_1f0;
    local_1f8 = dVar32 * local_1f8;
    uStack_1e0 = 0;
    (**(code **)(*param_2 + 0x80))(param_2,&local_318);
    FUN_1400c6592(&local_318,local_298,&local_218);
    param_4 = ABS(param_4);
    dVar35 = (dStack_270 + param_4) * dVar7;
    dVar3 = (local_278 + param_4) * dVar6;
    dVar32 = (local_298[3] + param_4) * dVar5;
    dStack_270 = (local_298[2] - param_4) * dVar7;
    local_278 = (local_298[1] - param_4) * dVar6;
    local_298[3] = (local_298[0] - param_4) * dVar5;
    local_298[2] = dStack_270;
    if (dVar35 <= dStack_270) {
      local_298[2] = dVar35;
    }
    local_298[1] = local_278;
    if (dVar3 <= local_278) {
      local_298[1] = dVar3;
    }
    local_298[0] = local_298[3];
    if (dVar32 <= local_298[3]) {
      local_298[0] = dVar32;
    }
    if (dStack_270 <= dVar35) {
      dStack_270 = dVar35;
    }
    if (local_278 <= dVar3) {
      local_278 = dVar3;
    }
    if (local_298[3] <= dVar32) {
      local_298[3] = dVar32;
    }
    FUN_140d8788e((longlong)param_1 + 0xe0,&local_228,local_298);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[6] = 0xffefffffffffffff;
    local_2e8 = param_3[6] * param_6[2];
    local_318 = *param_3;
    dStack_310 = param_3[1];
    local_308 = param_3[2];
    dStack_300 = param_3[3];
    local_2f8._8_8_ = param_3[5] * param_6[1];
    local_2f8._0_8_ = param_3[4] * *param_6;
    uStack_2e0 = 0;
    local_2d8 = 0x3ff0000000000000;
    uStack_2d0 = 0x3ff0000000000000;
    local_2c8 = 0x3ff0000000000000;
    uStack_2c0 = 0;
    local_368 = param_6;
    local_358._8_8_ = &local_230;
    local_358._0_8_ = &local_318;
    plStack_360 = param_2;
    dStack_370 = param_1;
    local_378 = &local_228;
    if (*(char *)((longlong)param_1 + 0x80) == '\x01') {
      uVar15 = FUN_146e574b2(&local_378,(longlong)param_1 + 0x60,param_5);
    }
    else {
      uVar15 = FUN_146e57782(&local_378,(longlong)param_1 + 0x70,param_5);
    }
    uVar21 = (ulonglong)uVar15;
    if (local_228 != 0) {
      FUN_1400020a8();
    }
    goto LAB_1405ceac5;
  }
  pdVar34 = param_3;
  pdVar22 = local_298;
  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
    *pdVar22 = *pdVar34;
    pdVar34 = pdVar34 + 1;
    pdVar22 = pdVar22 + 1;
  }
  local_268 = dVar3 * local_268;
  dStack_270 = dVar35 * dStack_270;
  local_278 = dVar32 * local_278;
  uStack_260 = 0;
  local_388 = param_1;
  if ((0.9 < ABS(param_3[3])) || (ABS(param_3[3] + -0.7071067690849304) <= 0.01)) {
    (**(code **)(*param_2 + 0x80))(param_2,&local_218);
    FUN_1400c6592(&local_218,&local_378,local_298);
    param_4 = ABS(param_4);
    pdVar34 = (double *)(((double)local_358._8_8_ + param_4) * dVar7);
    dVar3 = ((double)local_358._0_8_ + param_4) * dVar6;
    plVar31 = (longlong *)(((double)plStack_360 + param_4) * dVar5);
    local_358._8_8_ = ((double)local_368 - param_4) * dVar7;
    local_358._0_8_ = (dStack_370 - param_4) * dVar6;
    plStack_360 = (longlong *)(((double)local_378 - param_4) * dVar5);
    local_368 = (double *)local_358._8_8_;
    if ((double)pdVar34 <= (double)local_358._8_8_) {
      local_368 = pdVar34;
    }
    dStack_370 = (double)local_358._0_8_;
    if (dVar3 <= (double)local_358._0_8_) {
      dStack_370 = dVar3;
    }
    local_378 = plStack_360;
    if ((double)plVar31 <= (double)plStack_360) {
      local_378 = plVar31;
    }
    if ((double)local_358._8_8_ <= (double)pdVar34) {
      local_358._8_8_ = pdVar34;
    }
    if ((double)local_358._0_8_ <= dVar3) {
      local_358._0_8_ = dVar3;
    }
    if ((double)plStack_360 <= (double)plVar31) {
      plStack_360 = plVar31;
    }
    local_318 = *param_3;
    dStack_310 = param_3[1];
    local_308 = param_3[2];
    dStack_300 = param_3[3];
    local_2e8 = param_3[6] * param_6[2];
    dVar3 = param_3[5] * param_6[1];
    local_2f8._8_4_ = SUB84(dVar3,0);
    local_2f8._0_8_ = param_3[4] * *param_6;
    local_2f8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uStack_2e0 = 0;
    local_2d8 = 0x3ff0000000000000;
    uStack_2d0 = 0x3ff0000000000000;
    local_2c8 = 0x3ff0000000000000;
    uStack_2c0 = 0;
    local_228 = CONCAT44((float)param_6[1],(float)*param_6);
    uStack_220 = CONCAT44(uStack_220._4_4_,(float)param_6[2]);
    FUN_1405cf226(&local_218,&local_318,param_2);
    plVar10 = plStack_360;
    pdVar34 = local_368;
    dVar3 = dStack_370;
    plVar31 = local_378;
    if (*(int *)((longlong)param_1 + 0xe8) != 0) {
      uVar11 = local_358._0_8_;
      uVar12 = local_358._8_8_;
      local_228 = 0;
      uStack_220 = 0;
      FUN_14481578e(&local_228,0x10);
      uVar21 = uStack_220;
      lVar18 = (longlong)(int)uStack_220;
      uVar15 = (int)uStack_220 + 1;
      uStack_220 = CONCAT44(uStack_220._4_4_,uVar15);
      if (uStack_220._4_4_ < uVar15) {
        FUN_1446f48e2(&local_228,uVar21 & 0xffffffff);
      }
      *(undefined4 *)(local_228 + lVar18 * 4) = 0;
      if ((int)uStack_220 != 0) {
        do {
          lVar18 = (longlong)(int)uStack_220;
          uStack_220 = CONCAT44(uStack_220._4_4_,(int)uStack_220 + -1);
          lVar23 = (longlong)*(int *)(local_228 + -4 + lVar18 * 4) * 0x50 +
                   *(longlong *)((longlong)param_1 + 0xe0);
          lVar18 = 0;
          bVar13 = true;
          do {
            bVar20 = bVar13;
            uVar21 = uStack_220;
            iVar4 = *(int *)(lVar23 + 0x40 + lVar18 * 4);
            uVar24 = (ulonglong)iVar4;
            if (uVar24 != 0xffffffffffffffff) {
              lVar19 = lVar18 * 0x20;
              pfVar2 = (float *)(lVar23 + 0x10 + lVar19);
              pfVar1 = (float *)(lVar23 + lVar19);
              auVar27._4_4_ = -(uint)((float)(double)uVar11 < pfVar1[1]);
              auVar27._0_4_ = -(uint)((float)(double)plVar10 < *pfVar1);
              auVar27._8_4_ = -(uint)((float)(double)uVar12 < pfVar1[2]);
              auVar27._12_4_ = -(uint)(0.0 < pfVar1[3]);
              auVar25._4_4_ = -(uint)(pfVar2[1] < (float)dVar3);
              auVar25._0_4_ = -(uint)(*pfVar2 < (float)(double)plVar31);
              auVar25._8_4_ = -(uint)(pfVar2[2] < (float)(double)pdVar34);
              auVar25._12_4_ = -(uint)(pfVar2[3] < 0.0);
              iVar17 = movmskps((int)lVar19,auVar27 | auVar25);
              if (iVar17 == 0) {
                iVar17 = *(int *)(lVar23 + 0x48 + lVar18 * 4);
                if (iVar17 == 0) {
                  lVar18 = (longlong)(int)uStack_220;
                  uVar15 = (int)uStack_220 + 1;
                  uStack_220 = CONCAT44(uStack_220._4_4_,uVar15);
                  if (uStack_220._4_4_ < uVar15) {
                    FUN_1446f48e2(&local_228,uVar21 & 0xffffffff);
                  }
                  *(int *)(local_228 + lVar18 * 4) = iVar4;
                }
                else if (0 < iVar17) {
                  uVar21 = uVar24 << 5 | 0x10;
                  do {
                    lVar18 = *(longlong *)((longlong)param_1 + 0xf0);
                    pfVar1 = (float *)(lVar18 + uVar21);
                    pfVar2 = (float *)(lVar18 + -0x10 + uVar21);
                    auVar28._4_4_ = -(uint)((float)(double)uVar11 < pfVar2[1]);
                    auVar28._0_4_ = -(uint)((float)(double)plVar10 < *pfVar2);
                    auVar28._8_4_ = -(uint)((float)(double)uVar12 < pfVar2[2]);
                    auVar28._12_4_ = -(uint)(0.0 < pfVar2[3]);
                    auVar26._4_4_ = -(uint)(pfVar1[1] < (float)dVar3);
                    auVar26._0_4_ = -(uint)(*pfVar1 < (float)(double)plVar31);
                    auVar26._8_4_ = -(uint)(pfVar1[2] < (float)(double)pdVar34);
                    auVar26._12_4_ = -(uint)(pfVar1[3] < 0.0);
                    iVar16 = movmskps((int)lVar18,auVar28 | auVar26);
                    if ((iVar16 == 0) &&
                       (cVar14 = FUN_1405cf0e4(&local_218,uVar24 & 0xffffffff), cVar14 == '\0'))
                    goto LAB_1405ceaac;
                    uVar24 = uVar24 + 1;
                    uVar21 = uVar21 + 0x20;
                  } while ((longlong)uVar24 < (longlong)(iVar17 + iVar4));
                }
              }
            }
            lVar18 = 1;
            bVar13 = false;
          } while (bVar20);
        } while ((int)uStack_220 != 0);
      }
      goto LAB_1405ceaac;
    }
  }
  else {
    param_4 = ABS(param_4);
    dVar3 = (((double)param_2[9] + param_4) - ((double)param_2[6] - param_4)) * 0.5;
    dVar29 = (((double)param_2[8] + param_4) - ((double)param_2[5] - param_4)) * 0.5;
    dVar30 = (((double)param_2[7] + param_4) - ((double)param_2[4] - param_4)) * 0.5;
    dVar33 = ((double)param_2[6] - param_4) + dVar3;
    dVar32 = ((double)param_2[5] - param_4) + dVar29;
    dVar9 = ((double)param_2[4] - param_4) + dVar30;
    dVar36 = dVar9 * local_298[2] - local_298[0] * dVar33;
    dVar35 = dVar32 * local_298[0] - local_298[1] * dVar9;
    dVar8 = dVar33 * local_298[1] - local_298[2] * dVar32;
    dVar8 = dVar8 + dVar8;
    dVar36 = dVar36 + dVar36;
    dVar35 = dVar35 + dVar35;
    local_278 = local_278 +
                (dVar35 * local_298[1] - dVar36 * local_298[2]) + local_298[3] * dVar8 + dVar9;
    dStack_270 = dStack_270 +
                 (local_298[2] * dVar8 - local_298[0] * dVar35) + local_298[3] * dVar36 + dVar32;
    local_268 = local_268 +
                dVar35 * local_298[3] + dVar33 + (dVar36 * local_298[0] - dVar8 * local_298[1]);
    uStack_260 = 0;
    local_218._0_4_ = (float)dVar5;
    local_210 = (float)dVar7;
    local_218._4_4_ = (float)dVar6;
    local_378 = (longlong *)CONCAT44((float)dVar29,(float)dVar30);
    dStack_370 = (double)CONCAT44(dStack_370._4_4_,(float)dVar3);
    local_380 = dVar6;
    FUN_1402e7b1c(&local_318,local_298,&local_378);
    local_378 = (longlong *)*param_3;
    dStack_370 = param_3[1];
    local_368 = (double *)param_3[2];
    plStack_360 = (longlong *)param_3[3];
    local_348 = param_3[6] * param_6[2];
    dVar3 = param_3[5] * param_6[1];
    local_358._8_4_ = SUB84(dVar3,0);
    local_358._0_8_ = param_3[4] * *param_6;
    local_358._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uStack_340 = 0;
    local_338 = 0x3ff0000000000000;
    uStack_330 = 0x3ff0000000000000;
    local_328 = 0x3ff0000000000000;
    uStack_320 = 0;
    local_228 = CONCAT44((float)param_6[1],(float)*param_6);
    uStack_220 = CONCAT44(uStack_220._4_4_,(float)param_6[2]);
    FUN_1405cf226(&local_218,&local_378,param_2);
    if (*(int *)((longlong)param_1 + 0xe8) != 0) {
      local_228 = 0;
      uStack_220 = 0;
      FUN_14481578e(&local_228,0x10);
      uVar21 = uStack_220;
      lVar18 = (longlong)(int)uStack_220;
      uVar15 = (int)uStack_220 + 1;
      uStack_220 = CONCAT44(uStack_220._4_4_,uVar15);
      if (uStack_220._4_4_ < uVar15) {
        FUN_1446f48e2(&local_228,uVar21 & 0xffffffff);
      }
      *(undefined4 *)(local_228 + lVar18 * 4) = 0;
      if ((int)uStack_220 != 0) {
        do {
          lVar18 = (longlong)(int)uStack_220;
          uStack_220 = CONCAT44(uStack_220._4_4_,(int)uStack_220 + -1);
          lVar18 = (longlong)*(int *)(local_228 + -4 + lVar18 * 4) * 0x50 +
                   *(longlong *)((longlong)param_1 + 0xe0);
          lVar23 = 0;
          bVar13 = true;
          do {
            bVar20 = bVar13;
            iVar4 = *(int *)(lVar18 + 0x40 + lVar23 * 4);
            uVar21 = (ulonglong)iVar4;
            if ((uVar21 != 0xffffffffffffffff) &&
               (cVar14 = FUN_1402e78fc(&local_318,lVar23 * 0x20 + lVar18), uVar24 = uStack_220,
               cVar14 != '\0')) {
              iVar17 = *(int *)(lVar18 + 0x48 + lVar23 * 4);
              if (iVar17 == 0) {
                lVar23 = (longlong)(int)uStack_220;
                uVar15 = (int)uStack_220 + 1;
                uStack_220 = CONCAT44(uStack_220._4_4_,uVar15);
                if (uStack_220._4_4_ < uVar15) {
                  FUN_1446f48e2(&local_228,uVar24 & 0xffffffff);
                }
                *(int *)(local_228 + lVar23 * 4) = iVar4;
              }
              else if (0 < iVar17) {
                lVar23 = uVar21 << 5;
                do {
                  cVar14 = FUN_1402e78fc(&local_318,*(longlong *)((longlong)param_1 + 0xf0) + lVar23
                                        );
                  if ((cVar14 != '\0') &&
                     (cVar14 = FUN_1405cf0e4(&local_218,uVar21 & 0xffffffff), cVar14 == '\0'))
                  goto LAB_1405ceaac;
                  uVar21 = uVar21 + 1;
                  lVar23 = lVar23 + 0x20;
                } while ((longlong)uVar21 < (longlong)(iVar17 + iVar4));
              }
            }
            lVar23 = 1;
            bVar13 = false;
          } while (bVar20);
        } while ((int)uStack_220 != 0);
      }
LAB_1405ceaac:
      if (local_228 != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar21 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_100);
LAB_1405ceac5:
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21 & 0xffffffff;
}



// FUNCTION 1405cf0e4 FUN_1405cf0e4 body=320 status=ok
// SIG undefined FUN_1405cf0e4(void)

ulonglong FUN_1405cf0e4(char *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_68 [32];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x110);
  lVar4 = (longlong)param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar1 + 0x80) == '\x01') {
    lVar1 = *(longlong *)(lVar1 + 0x60);
    lVar5 = (longlong)*(int *)(lVar1 + lVar4 * 0xc);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(lVar2 + lVar5 * 0xc);
    auVar6 = insertps(auVar6,*(undefined4 *)(lVar2 + 8 + lVar5 * 0xc),0x28);
    lVar5 = (longlong)*(int *)(lVar1 + 4 + lVar4 * 0xc);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)(lVar2 + lVar5 * 0xc);
    auVar8 = insertps(auVar8,*(undefined4 *)(lVar2 + 8 + lVar5 * 0xc),0x28);
    uVar3 = (ulonglong)*(int *)(lVar1 + 8 + lVar4 * 0xc);
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x70);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + lVar4 * 6);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
    auVar6 = insertps(auVar10,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + 2 + lVar4 * 6);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
    auVar8 = insertps(auVar7,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + 4 + lVar4 * 6);
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
  auVar10 = insertps(auVar9,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
  local_48 = *(float *)(param_1 + 0x100);
  fStack_44 = *(float *)(param_1 + 0x104);
  fStack_40 = *(float *)(param_1 + 0x108);
  fStack_3c = *(float *)(param_1 + 0x10c);
  local_28 = auVar6._0_4_ * local_48;
  fStack_24 = auVar6._4_4_ * fStack_44;
  fStack_20 = auVar6._8_4_ * fStack_40;
  fStack_1c = auVar6._12_4_ * fStack_3c;
  local_38 = auVar8._0_4_ * local_48;
  fStack_34 = auVar8._4_4_ * fStack_44;
  fStack_30 = auVar8._8_4_ * fStack_40;
  fStack_2c = auVar8._12_4_ * fStack_3c;
  local_48 = auVar10._0_4_ * local_48;
  fStack_44 = auVar10._4_4_ * fStack_44;
  fStack_40 = auVar10._8_4_ * fStack_40;
  fStack_3c = auVar10._12_4_ * fStack_3c;
  if (*param_1 == '\x01') {
    uVar3 = FUN_1405cbc66(param_1 + 0xe0,&local_28,&local_38,&local_48);
  }
  else {
    uVar3 = FUN_1405cd6c0(param_1 + 0x10,&local_28,&local_38,&local_48);
  }
  param_1[0x118] = (char)uVar3;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405cf226 FUN_1405cf226 body=429 status=ok
// SIG undefined FUN_1405cf226(void)

longlong FUN_1405cf226(longlong param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_158 [32];
  undefined1 local_138 [216];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar1 = ABS(*(double *)(param_2 + 0x18));
  *(bool *)param_1 = dVar1 == 1.0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x110) = param_5;
  *(undefined1 *)(param_1 + 0x118) = 0;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    FUN_1405cf3d4(local_138);
    memcpy((void *)(param_1 + 0x10),local_138,0xd0);
  }
  else {
    dVar2 = (*(double *)(param_3 + 0x48) - *(double *)(param_3 + 0x30)) * 0.5;
    dVar1 = (*(double *)(param_3 + 0x40) - *(double *)(param_3 + 0x28)) * 0.5;
    dVar4 = (*(double *)(param_3 + 0x38) - *(double *)(param_3 + 0x20)) * 0.5;
    auVar3 = insertps(ZEXT416((uint)(float)dVar4),ZEXT416((uint)(float)dVar1),0x1c);
    auVar5 = insertps(auVar3,ZEXT416((uint)(float)dVar2),0x28);
    auVar3._4_4_ = (float)(dVar1 + *(double *)(param_3 + 0x28) + *(double *)(param_2 + 0x28));
    auVar3._0_4_ = (float)(dVar4 + *(double *)(param_3 + 0x20) + *(double *)(param_2 + 0x20));
    auVar3._8_4_ = (float)(dVar2 + *(double *)(param_3 + 0x30) + *(double *)(param_2 + 0x30));
    auVar3._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xe0) = auVar3;
    *(undefined1 (*) [16])(param_1 + 0xf0) = auVar5;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_4;
  auVar3 = insertps(auVar5,(int)param_4[1],0x28);
  *(undefined1 (*) [16])(param_1 + 0x100) = auVar3;
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405cf3d4 FUN_1405cf3d4 body=854 status=ok
// SIG undefined FUN_1405cf3d4(void)

undefined1 (*) [16] FUN_1405cf3d4(undefined1 (*param_1) [16],double *param_2,longlong param_3)

{
  float *pfVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_168 [32];
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  double dVar3;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  dVar11 = *param_2;
  dVar12 = param_2[1];
  dVar13 = param_2[2];
  dVar18 = (*(double *)(param_3 + 0x48) - *(double *)(param_3 + 0x30)) * 0.5;
  dVar20 = (*(double *)(param_3 + 0x40) - *(double *)(param_3 + 0x28)) * 0.5;
  dVar22 = (*(double *)(param_3 + 0x38) - *(double *)(param_3 + 0x20)) * 0.5;
  dVar24 = *(double *)(param_3 + 0x30) + dVar18;
  dVar8 = *(double *)(param_3 + 0x28) + dVar20;
  dVar10 = *(double *)(param_3 + 0x20) + dVar22;
  dVar2 = param_2[3];
  dVar3 = param_2[3];
  local_140 = (float)dVar13;
  dVar37 = dVar10 * dVar13 - dVar11 * dVar24;
  dVar38 = dVar8 * dVar11 - dVar12 * dVar10;
  dVar9 = dVar24 * dVar12 - dVar13 * dVar8;
  dVar9 = dVar9 + dVar9;
  dVar37 = dVar37 + dVar37;
  dVar38 = dVar38 + dVar38;
  local_148 = (float)dVar11;
  local_13c = (float)dVar2;
  dVar5 = param_2[4];
  dVar6 = param_2[5];
  dVar4 = param_2[6];
  fVar25 = (float)dVar18;
  fVar33 = (float)dVar20;
  fVar29 = (float)dVar22;
  local_144 = (float)param_2[1];
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1402e7ce8(&local_148,&local_108);
  auVar19._8_8_ = uStack_100;
  auVar19._0_8_ = local_108;
  auVar19 = blendps(auVar19,ZEXT816(0),8);
  param_1[1] = auVar19;
  auVar21._8_8_ = uStack_f0;
  auVar21._0_8_ = local_f8;
  auVar21 = blendps(auVar21,ZEXT816(0),8);
  param_1[2] = auVar21;
  auVar23._8_8_ = uStack_e0;
  auVar23._0_8_ = local_e8;
  auVar23 = blendps(auVar23,ZEXT816(0),8);
  param_1[3] = auVar23;
  auVar7._4_4_ = (float)((dVar13 * dVar9 - dVar11 * dVar38) + dVar3 * dVar37 + dVar8 + dVar6);
  auVar7._0_4_ = (float)((dVar38 * dVar12 - dVar37 * dVar13) + dVar2 * dVar9 + dVar10 + dVar5);
  auVar7._8_4_ = (float)(dVar38 * dVar2 + dVar24 + (dVar37 * dVar11 - dVar9 * dVar12) + dVar4);
  auVar7._12_4_ = 0;
  *param_1 = auVar7;
  *(float *)param_1[4] = fVar29;
  *(float *)(param_1[4] + 4) = fVar29;
  *(float *)(param_1[4] + 8) = fVar29;
  *(float *)(param_1[4] + 0xc) = fVar29;
  *(float *)param_1[5] = fVar33;
  *(float *)(param_1[5] + 4) = fVar33;
  *(float *)(param_1[5] + 8) = fVar33;
  *(float *)(param_1[5] + 0xc) = fVar33;
  *(float *)param_1[6] = fVar25;
  *(float *)(param_1[6] + 4) = fVar25;
  *(float *)(param_1[6] + 8) = fVar25;
  *(float *)(param_1[6] + 0xc) = fVar25;
  fVar30 = fVar29 * auVar19._0_4_;
  fVar31 = fVar29 * auVar19._4_4_;
  fVar32 = fVar29 * auVar19._8_4_;
  fVar29 = fVar29 * auVar19._12_4_;
  *(float *)param_1[7] = fVar30;
  *(float *)(param_1[7] + 4) = fVar31;
  *(float *)(param_1[7] + 8) = fVar32;
  *(float *)(param_1[7] + 0xc) = fVar29;
  fVar34 = fVar33 * auVar21._0_4_;
  fVar35 = fVar33 * auVar21._4_4_;
  fVar36 = fVar33 * auVar21._8_4_;
  fVar33 = fVar33 * auVar21._12_4_;
  *(float *)param_1[8] = fVar34;
  *(float *)(param_1[8] + 4) = fVar35;
  *(float *)(param_1[8] + 8) = fVar36;
  *(float *)(param_1[8] + 0xc) = fVar33;
  fVar26 = fVar25 * auVar23._0_4_;
  fVar27 = fVar25 * auVar23._4_4_;
  fVar28 = fVar25 * auVar23._8_4_;
  fVar25 = fVar25 * auVar23._12_4_;
  *(float *)param_1[9] = fVar26;
  *(float *)(param_1[9] + 4) = fVar27;
  *(float *)(param_1[9] + 8) = fVar28;
  *(float *)(param_1[9] + 0xc) = fVar25;
  local_138[0] = (0.0 - fVar30) + fVar34 + fVar26;
  local_138[1] = (0.0 - fVar31) + fVar35 + fVar27;
  local_138[2] = (0.0 - fVar32) + fVar36 + fVar28;
  local_138[3] = (0.0 - fVar29) + fVar33 + fVar25;
  local_138[4] = (0.0 - fVar34) + fVar30 + fVar26;
  local_138[5] = (0.0 - fVar35) + fVar31 + fVar27;
  local_138[6] = (0.0 - fVar36) + fVar32 + fVar28;
  local_138[7] = (0.0 - fVar33) + fVar29 + fVar25;
  local_138[8] = (0.0 - fVar26) + fVar30 + fVar34;
  local_138[9] = (0.0 - fVar27) + fVar31 + fVar35;
  local_138[10] = (0.0 - fVar28) + fVar32 + fVar36;
  local_138[0xb] = (0.0 - fVar25) + fVar29 + fVar33;
  lVar17 = 0;
  do {
    fVar14 = *(float *)((longlong)local_138 + lVar17 + 4);
    fVar15 = *(float *)((longlong)local_138 + lVar17 + 8);
    fVar16 = *(float *)((longlong)local_138 + lVar17 + 0xc);
    pfVar1 = (float *)(param_1[10] + lVar17);
    *pfVar1 = *(float *)((longlong)local_138 + lVar17) - (fVar30 + fVar34 + fVar26);
    pfVar1[1] = fVar14 - (fVar31 + fVar35 + fVar27);
    pfVar1[2] = fVar15 - (fVar32 + fVar36 + fVar28);
    pfVar1[3] = fVar16 - (fVar29 + fVar33 + fVar25);
    lVar17 = lVar17 + 0x10;
  } while (lVar17 != 0x30);
  if ((local_c0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405cf72c FUN_1405cf72c body=308 status=ok
// SIG undefined FUN_1405cf72c(void)

void FUN_1405cf72c(undefined1 (*param_1) [16],double *param_2,longlong param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar1 = *(longlong *)(param_3 + 0x88);
  dVar6 = (*(double *)(lVar1 + 0x48) - *(double *)(lVar1 + 0x30)) * 0.5;
  dVar2 = (*(double *)(lVar1 + 0x40) - *(double *)(lVar1 + 0x28)) * 0.5;
  dVar7 = (*(double *)(lVar1 + 0x38) - *(double *)(lVar1 + 0x20)) * 0.5;
  dVar3 = (*(double *)(param_3 + 0x30) + 9.99999993922529e-09) * dVar6;
  dVar5 = (*(double *)(param_3 + 0x28) + 9.99999993922529e-09) * dVar2;
  dVar8 = (*(double *)(param_3 + 0x20) + 9.99999993922529e-09) * dVar7;
  auVar9._0_4_ = (float)dVar8;
  auVar9._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar9._8_8_ = 0;
  auVar4._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar4._0_4_ = (float)dVar5;
  auVar4._8_8_ = 0;
  auVar10 = insertps(auVar9,auVar4,0x1c);
  auVar11._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar11._0_4_ = (float)dVar3;
  auVar11._8_8_ = 0;
  auVar11 = insertps(auVar10,auVar11,0x28);
  auVar10._4_4_ =
       (float)((dVar2 + *(double *)(lVar1 + 0x28)) * *(double *)(param_3 + 0x28) + param_2[1]);
  auVar10._0_4_ =
       (float)((dVar7 + *(double *)(lVar1 + 0x20)) * *(double *)(param_3 + 0x20) + *param_2);
  auVar10._8_4_ =
       (float)((dVar6 + *(double *)(lVar1 + 0x30)) * *(double *)(param_3 + 0x30) + param_2[2]);
  auVar10._12_4_ = 0;
  *param_1 = auVar10;
  param_1[1] = auVar11;
  return;
}



// FUNCTION 1405cf860 FUN_1405cf860 body=4439 status=ok
// SIG undefined FUN_1405cf860(void)

undefined8 FUN_1405cf860(undefined8 param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  int *piVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  byte bVar19;
  byte bVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  longlong lVar25;
  int iVar26;
  undefined2 *puVar27;
  ulonglong *puVar28;
  int iVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  uint uVar34;
  longlong *unaff_R12;
  undefined7 uVar35;
  longlong *unaff_R13;
  undefined7 uVar36;
  uint uVar37;
  undefined ***pppuVar38;
  longlong lVar39;
  longlong lVar40;
  longlong *plVar41;
  longlong lVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  char cVar46;
  bool bVar47;
  undefined1 auStack_1b8 [47];
  char local_189;
  ulonglong local_188;
  undefined8 *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  ulonglong local_150;
  undefined8 local_148;
  int iStack_140;
  int iStack_13c;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined8 uStack_134;
  uint local_12c;
  undefined8 local_128;
  byte local_120;
  undefined1 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  byte local_f1;
  ulonglong local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar22 = 1;
  if (((char)param_2[9] != '\0') || (lVar39 = *param_3, lVar39 == 0)) goto LAB_1405cf895;
  plVar10 = (longlong *)*param_2;
  local_170 = param_3;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)param_2[1];
    if (plVar10 != (longlong *)0x0) {
      local_64 = 0;
      puVar11 = (ulonglong *)plVar10[1];
      piVar14 = (int *)*puVar11 + 1;
      if ((int *)puVar11[1] < piVar14) {
        if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar10 + 0x170))(plVar10,&local_64,4);
        }
        else {
          FUN_14572512c(plVar10,&local_64);
        }
      }
      else {
        local_64 = *(int *)*puVar11;
        *puVar11 = (ulonglong)piVar14;
      }
      local_d0 = 0;
      uStack_c8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      iVar29 = 0;
      local_c0 = 0;
      local_e8 = &PTR_FUN_14b5afdc0;
      local_b8 = 0;
      local_b4 = 0xcc;
      local_b0 = 0xffffffff;
      local_a8 = 0xffefffffffffffff;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      if (0 < local_64) {
        bVar20 = 0;
        do {
          local_f0 = 0;
          (**(code **)(*plVar10 + 0x160))(plVar10,&local_f0);
          iVar26 = *(int *)(*param_3 + 0x3f0);
          lVar39 = *(longlong *)(*param_3 + 1000);
          uVar30 = (longlong)iVar26 << 4;
          do {
            if (uVar30 == 0) {
              uVar33 = 0xffffffff;
              goto LAB_1405cfb1d;
            }
            plVar24 = (longlong *)(lVar39 + -0x10 + uVar30);
            uVar30 = uVar30 - 0x10;
          } while (*(ulonglong *)(*plVar24 + 0x48) != local_f0);
          uVar33 = (uint)(uVar30 >> 4);
          if ((int)uVar33 < iVar26 && -1 < (int)uVar33) {
            pppuVar38 = *(undefined ****)(lVar39 + (ulonglong)(uVar33 & 0x7fffffff) * 0x10);
          }
          else {
LAB_1405cfb1d:
            pppuVar38 = &local_e8;
          }
          bVar19 = *(byte *)((longlong)plVar10 + 0x29);
          if ((bVar19 & 2) == 0) {
            uVar30 = plVar10[0x15];
            if (plVar10[0x14] <= (longlong)uVar30) {
              FUN_1405d09b8(plVar10,1);
              bVar19 = *(byte *)((longlong)plVar10 + 0x29);
              goto LAB_1405cfb7d;
            }
            bVar43 = (*(byte *)(plVar10[0x12] + (longlong)(int)(uVar30 >> 3)) >> ((uint)uVar30 & 7)
                     & 1) != 0;
            plVar10[0x15] = uVar30 + 1;
          }
          else {
LAB_1405cfb7d:
            bVar43 = false;
          }
          if ((bVar19 & 2) == 0) {
            uVar30 = plVar10[0x15];
            if (plVar10[0x14] <= (longlong)uVar30) {
              FUN_1405d09b8(plVar10,1);
              bVar19 = *(byte *)((longlong)plVar10 + 0x29);
              goto LAB_1405cfbd5;
            }
            bVar44 = (*(byte *)(plVar10[0x12] + (longlong)(int)(uVar30 >> 3)) >> ((uint)uVar30 & 7)
                     & 1) != 0;
            plVar10[0x15] = uVar30 + 1;
          }
          else {
LAB_1405cfbd5:
            bVar44 = false;
          }
          if ((bVar19 & 2) == 0) {
            uVar30 = plVar10[0x15];
            if (plVar10[0x14] <= (longlong)uVar30) {
              FUN_1405d09b8(plVar10,1);
              goto LAB_1405cfc25;
            }
            bVar45 = (*(byte *)(plVar10[0x12] + (longlong)(int)(uVar30 >> 3)) >> ((uint)uVar30 & 7)
                     & 1) != 0;
            plVar10[0x15] = uVar30 + 1;
          }
          else {
LAB_1405cfc25:
            bVar45 = false;
          }
          local_f1 = 0;
          puVar11 = (ulonglong *)plVar10[1];
          pbVar1 = (byte *)*puVar11 + 1;
          if ((byte *)puVar11[1] < pbVar1) {
            (**(code **)(*plVar10 + 0x170))(plVar10,&local_f1,1);
          }
          else {
            local_f1 = *(byte *)*puVar11;
            *puVar11 = (ulonglong)pbVar1;
          }
          if ((uVar33 != 0xffffffff) && (*(uint *)(pppuVar38 + 0xf) != (uint)local_f1)) {
            FUN_14572541c(plVar10);
            FUN_1405d0dec(&local_e8);
            goto LAB_1405cf8e9;
          }
          bVar47 = (char)*(uint *)((longlong)pppuVar38 + 0x34) < '\0';
          *(uint *)((longlong)pppuVar38 + 0x34) =
               *(uint *)((longlong)pppuVar38 + 0x34) & 0xffffff7f | (uint)bVar43 << 7;
          local_188 = CONCAT71(local_188._1_7_,bVar47);
          if (bVar43 != bVar47) {
            FUN_145725226(*local_170,uVar33);
          }
          if (bVar44) {
            FUN_1405d0c38(plVar10,pppuVar38 + 10);
          }
          if (bVar45) {
            FUN_1457252a6(plVar10,pppuVar38 + 0xc);
          }
          param_3 = local_170;
          if (local_f1 != 0) {
            uVar37 = 0;
            do {
              if ((*(byte *)((longlong)plVar10 + 0x29) & 2) == 0) {
                uVar30 = plVar10[0x15];
                if ((longlong)uVar30 < plVar10[0x14]) {
                  uVar2 = uVar30 + 1;
                  bVar19 = *(byte *)(plVar10[0x12] + (longlong)(int)(uVar30 >> 3));
                  plVar10[0x15] = uVar2;
                  if ((bVar19 >> ((uint)uVar30 & 7) & 1) != 0) {
                    uStack_138 = 0;
                    uStack_136 = 0;
                    uStack_134 = 0;
                    local_148 = 0;
                    iStack_140 = 0;
                    iStack_13c = 0;
                    local_12c = local_12c & 0xfffffffe;
                    uVar34 = 0;
                    local_128 = 0;
                    local_120 = local_120 & 0xf8;
                    local_11c = 2;
                    local_118 = 0;
                    local_110 = 0;
                    local_108 = 0;
                    local_100 = 0;
                    if ((*(byte *)((longlong)plVar10 + 0x29) & 2) == 0) {
                      if ((longlong)uVar2 < plVar10[0x14]) {
                        uVar34 = (uint)((*(byte *)(plVar10[0x12] + (longlong)(int)(uVar2 >> 3)) >>
                                         ((uint)uVar2 & 7) & 1) != 0);
                        plVar10[0x15] = uVar30 + 2;
                      }
                      else {
                        FUN_1405d09b8(plVar10,1);
                        uVar34 = 0;
                      }
                    }
                    local_12c = local_12c & 0xfffffffe | uVar34;
                    puVar4 = *(undefined2 **)plVar10[1];
                    if ((undefined2 *)((undefined8 *)plVar10[1])[1] < puVar4 + 1) {
                      if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
                        (**(code **)(*plVar10 + 0x170))(plVar10,&uStack_138,2);
                      }
                      else {
                        FUN_1457251a8(plVar10,&uStack_138);
                      }
                    }
                    else {
                      uStack_138 = *puVar4;
                      *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 2;
                    }
                    puVar4 = *(undefined2 **)plVar10[1];
                    if ((undefined2 *)((undefined8 *)plVar10[1])[1] < puVar4 + 1) {
                      if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
                        (**(code **)(*plVar10 + 0x170))(plVar10,&uStack_136,2);
                      }
                      else {
                        FUN_1457251a8(plVar10,&uStack_136);
                      }
                    }
                    else {
                      uStack_136 = *puVar4;
                      *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 2;
                    }
                    puVar5 = *(undefined4 **)plVar10[1];
                    if ((undefined4 *)((undefined8 *)plVar10[1])[1] < puVar5 + 1) {
                      if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
                        (**(code **)(*plVar10 + 0x170))(plVar10,&uStack_134,4);
                      }
                      else {
                        FUN_14572512c(plVar10,&uStack_134);
                      }
                    }
                    else {
                      uStack_134 = CONCAT44(uStack_134._4_4_,*puVar5);
                      *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
                    }
                    puVar5 = *(undefined4 **)plVar10[1];
                    if ((undefined4 *)((undefined8 *)plVar10[1])[1] < puVar5 + 1) {
                      if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
                        (**(code **)(*plVar10 + 0x170))(plVar10,(longlong)&uStack_134 + 4,4);
                      }
                      else {
                        FUN_14572512c(plVar10,(longlong)&uStack_134 + 4);
                      }
                    }
                    else {
                      uStack_134 = CONCAT44(*puVar5,(int)uStack_134);
                      *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
                    }
                    uVar21 = (int)uStack_134 - uStack_134._4_4_;
                    uVar34 = 0x200;
                    if ((int)uVar21 < 0x200) {
                      uVar34 = uVar21;
                    }
                    if (0 < (int)uVar21) {
                      iVar26 = iStack_140 + uVar34;
                      uVar21 = iStack_13c - iStack_140;
                      iStack_140 = iVar26;
                      if (uVar21 < uVar34) {
                        FUN_1447403be(&local_148);
                      }
                      (**(code **)(*plVar10 + 0x170))(plVar10,local_148,uVar34);
                    }
                    FUN_1405d0ad4(*param_3,uVar33,uVar37,&local_148);
                    FUN_1405d0a1e(&local_148);
                  }
                }
                else {
                  FUN_1405d09b8(plVar10,1);
                }
              }
              uVar37 = uVar37 + 1;
            } while (uVar37 < local_f1);
          }
          bVar20 = bVar20 | bVar43 ^ (byte)local_188;
          iVar29 = iVar29 + 1;
        } while (iVar29 < local_64);
        if ((bVar20 & 1) != 0) {
          FUN_1405d0f74(*param_3);
        }
      }
      FUN_1405d0dec(&local_e8);
    }
LAB_1405d004f:
    uVar22 = 1;
  }
  else {
    if ((*(byte *)(lVar39 + 0x448) & 2) != 0) {
      lVar31 = param_2[3];
      local_e8 = (undefined **)0x0;
      uStack_e0 = 0;
      cVar46 = true;
      local_168 = lVar31;
      if ((*(char *)(lVar39 + 0x398) == '\x01') && (*(int *)(lVar39 + 0x3f0) == (int)param_3[2])) {
        puVar23 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        *puVar23 = 0;
        puVar23[1] = 0;
        puVar23[2] = 0;
        puVar23[3] = 0;
        *puVar23 = &PTR_FUN_14b5b6250;
        unaff_R13 = puVar23 + 4;
        puVar23[4] = 0;
        puVar23[5] = 0;
        plVar24 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar24[1] = (longlong)&DAT_100000001;
        *plVar24 = (longlong)&PTR_FUN_14b5b6fb0;
        plVar24[2] = (longlong)puVar23;
        local_180 = puVar23;
        if (puVar23 == (undefined8 *)0x0) {
LAB_1405d049f:
          puVar23 = (undefined8 *)param_2[2];
          *puVar23 = local_180;
          plVar41 = (longlong *)puVar23[1];
          if (plVar24 == plVar41) {
            if (plVar24 != (longlong *)0x0) {
              LOCK();
              plVar41 = plVar24 + 1;
              *(int *)plVar41 = (int)*plVar41 + -1;
              UNLOCK();
              if ((int)*plVar41 == 0) {
                (**(code **)*plVar24)(plVar24);
                LOCK();
                piVar14 = (int *)((longlong)plVar24 + 0xc);
                *piVar14 = *piVar14 + -1;
                iVar29 = *piVar14;
                UNLOCK();
joined_r0x0001405d057d:
                if (iVar29 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                }
              }
            }
          }
          else {
            puVar23[1] = plVar24;
            if (plVar41 != (longlong *)0x0) {
LAB_1405d0569:
              LOCK();
              plVar24 = plVar41 + 1;
              *(int *)plVar24 = (int)*plVar24 + -1;
              UNLOCK();
              if ((int)*plVar24 == 0) {
                (**(code **)*plVar41)(plVar41);
                LOCK();
                piVar14 = (int *)((longlong)plVar41 + 0xc);
                *piVar14 = *piVar14 + -1;
                iVar29 = *piVar14;
                UNLOCK();
                plVar24 = plVar41;
                goto joined_r0x0001405d057d;
              }
            }
          }
        }
        else {
          if (plVar24 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
            UNLOCK();
            puVar23[1] = puVar23;
            if ((longlong *)puVar23[2] != plVar24) {
              LOCK();
              *(int *)((longlong)plVar24 + 0xc) = *(int *)((longlong)plVar24 + 0xc) + 1;
              UNLOCK();
              plVar41 = (longlong *)puVar23[2];
              if (plVar41 != (longlong *)0x0) {
                LOCK();
                piVar14 = (int *)((longlong)plVar41 + 0xc);
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (*piVar14 == 0) {
                  (**(code **)(*plVar41 + 0x10))();
                }
              }
              local_180[2] = plVar24;
            }
            LOCK();
            plVar41 = plVar24 + 1;
            *(int *)plVar41 = (int)*plVar41 + -1;
            UNLOCK();
            if ((int)*plVar41 == 0) {
              (**(code **)*plVar24)(plVar24);
              LOCK();
              piVar14 = (int *)((longlong)plVar24 + 0xc);
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (*piVar14 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
            goto LAB_1405d049f;
          }
          puVar23[1] = puVar23;
          puVar3 = (undefined8 *)param_2[2];
          *puVar3 = puVar23;
          plVar41 = (longlong *)puVar3[1];
          if (plVar41 != (longlong *)0x0) {
            puVar3[1] = 0;
            goto LAB_1405d0569;
          }
        }
        cVar46 = true;
        FUN_145725616(unaff_R13);
        uVar33 = *(uint *)(param_3 + 2);
        iVar29 = (int)uStack_e0;
        lVar39 = (longlong)(int)uStack_e0;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_e0 + uVar33);
        if ((uint)(uStack_e0._4_4_ - iVar29) < uVar33) {
          FUN_1447403be(&local_e8);
        }
        unaff_R12 = (longlong *)(lVar39 + (longlong)local_e8);
        uVar30 = 0;
        memset(unaff_R12,0,(longlong)(int)uVar33);
        if (0 < (int)param_3[2]) {
          lVar39 = 0;
          local_158 = unaff_R13;
          do {
            local_189 = true;
            if (lVar31 != 0) {
              local_189 = *(int *)(lVar31 + 0x28) <= lVar39;
            }
            local_160 = lVar39 * 3;
            local_178 = (longlong *)(lVar39 * 0x18 + *local_158);
            puVar23 = (undefined8 *)(lVar39 * 0x40 + local_170[1]);
            local_188 = *(ulonglong *)(*(longlong *)(*local_170 + 1000) + lVar39 * 0x10);
            *(char *)((longlong)local_e8 + lVar39) = local_189;
            *puVar23 = *(undefined8 *)(local_188 + 0x48);
            uVar33 = *(uint *)(local_188 + 0x34) >> 7 & 1;
            if (uVar33 != *(byte *)(puVar23 + 7)) {
              *(char *)(puVar23 + 7) = (char)uVar33;
              *(char *)((longlong)local_e8 + lVar39) =
                   *(char *)((longlong)local_e8 + lVar39) + '\x01';
            }
            puVar3 = (undefined8 *)(local_188 + 0x50);
            iVar29 = 0;
            bVar20 = 0;
            if (*(int *)(puVar23 + 2) == *(int *)(local_188 + 0x58)) {
              bVar20 = FUN_1405d12b4(puVar23[1],*puVar3);
            }
            if (local_189 == '\0') {
              iVar29 = *(int *)(*(longlong *)(local_168 + 0x20) + local_160 * 8);
            }
            *(uint *)local_178 = (uint)(bVar20 ^ 1) + iVar29;
            if (bVar20 == 0) {
              FUN_140bee9ec(puVar23 + 1,puVar3);
              *(char *)((longlong)local_e8 + lVar39) =
                   *(char *)((longlong)local_e8 + lVar39) + '\x01';
            }
            puVar3 = (undefined8 *)(local_188 + 0x60);
            iVar29 = 0;
            bVar20 = 0;
            if (*(int *)(puVar23 + 4) == *(int *)(local_188 + 0x68)) {
              bVar20 = FUN_145725518(puVar23[3],*puVar3);
            }
            if (local_189 == '\0') {
              iVar29 = *(int *)(*(longlong *)(local_168 + 0x20) + 4 + local_160 * 8);
            }
            *(uint *)((longlong)local_178 + 4) = (uint)(bVar20 ^ 1) + iVar29;
            lVar31 = local_160;
            local_150 = uVar30;
            if (bVar20 == 0) {
              FUN_1457255b8(puVar23 + 3,puVar3);
              *(char *)((longlong)local_e8 + lVar39) =
                   *(char *)((longlong)local_e8 + lVar39) + '\x01';
            }
            uVar33 = 0;
            if ((*(byte *)(*local_170 + 0x448) & 0x10) == 0) {
              uVar33 = *(uint *)(local_188 + 0x78);
            }
            unaff_R12 = puVar23 + 5;
            FUN_14572543c(unaff_R12,uVar33);
            plVar24 = local_178 + 1;
            FUN_1457254aa(plVar24,uVar33);
            param_4 = CONCAT71((int7)((ulonglong)lVar31 >> 8),local_189);
            if (0 < (int)uVar33) {
              lVar32 = 0;
              lVar40 = 0;
              lVar42 = 0;
              lVar31 = local_160;
              do {
                lVar15 = *(longlong *)(local_188 + 0x70);
                if ((char)param_4 == '\0') {
                  lVar25 = (longlong)*(int *)(*(longlong *)(local_168 + 0x20) + 0x10 + lVar31 * 8);
                  bVar43 = lVar42 < lVar25;
                  if ((lVar42 < lVar25) && ((*(uint *)(lVar15 + 0x28 + lVar32) & 6) == 2)) {
                    lVar31 = *(longlong *)(*(longlong *)(local_168 + 0x20) + 8 + lVar31 * 8);
                    local_178 = plVar24;
                    FUN_14572555c(lVar32 + lVar15,*(undefined2 *)(lVar31 + 4 + lVar40),
                                  *(undefined4 *)(lVar31 + lVar40));
                    param_4 = CONCAT71((int7)(param_4 >> 8),local_189);
                    bVar43 = true;
                    lVar31 = local_160;
                    plVar24 = local_178;
                  }
                }
                else {
                  bVar43 = false;
                }
                *(ulonglong *)(*plVar24 + lVar40) =
                     CONCAT44(*(undefined4 *)(lVar15 + 0x10 + lVar32),
                              *(undefined4 *)(lVar15 + 0x18 + lVar32));
                lVar25 = *unaff_R12;
                sVar9 = *(short *)(lVar25 + lVar40 * 2);
                if (((sVar9 == *(short *)(lVar15 + 0x10 + lVar32)) &&
                    (*(int *)(lVar25 + 4 + lVar40 * 2) == *(int *)(lVar15 + 0x14 + lVar32))) &&
                   (iVar29 = *(int *)(lVar25 + 8 + lVar40 * 2),
                   iVar29 == *(int *)(lVar15 + 0x18 + lVar32))) {
                  if ((bVar43) &&
                     (((lVar25 = *(longlong *)(*(longlong *)(local_168 + 0x20) + 8 + lVar31 * 8),
                       *(int *)(lVar25 + lVar40) != iVar29 ||
                       (*(short *)(lVar25 + 4 + lVar40) != sVar9)) ||
                      (*(short *)(lVar25 + 6 + lVar40) != *(short *)(lVar15 + 0x12 + lVar32)))))
                  goto LAB_1405d0877;
                }
                else {
                  lVar15 = lVar32 + lVar15;
                  puVar5 = (undefined4 *)(lVar25 + lVar40 * 2);
                  uVar16 = *(undefined4 *)(lVar15 + 0x14);
                  uVar17 = *(undefined4 *)(lVar15 + 0x18);
                  uVar18 = *(undefined4 *)(lVar15 + 0x1c);
                  *puVar5 = *(undefined4 *)(lVar15 + 0x10);
                  puVar5[1] = uVar16;
                  puVar5[2] = uVar17;
                  puVar5[3] = uVar18;
LAB_1405d0877:
                  *(char *)((longlong)local_e8 + lVar39) =
                       *(char *)((longlong)local_e8 + lVar39) + '\x01';
                }
                lVar42 = lVar42 + 1;
                lVar40 = lVar40 + 8;
                lVar32 = lVar32 + 0x50;
              } while ((ulonglong)uVar33 << 3 != lVar40);
            }
            uVar33 = ((int)local_150 + 1) - (uint)(*(char *)((longlong)local_e8 + lVar39) == '\0');
            uVar30 = (ulonglong)uVar33;
            lVar39 = lVar39 + 1;
            lVar31 = local_168;
          } while (lVar39 < (int)local_170[2]);
          cVar46 = uVar33 == 0;
          param_3 = local_170;
          unaff_R13 = local_158;
        }
      }
      else {
        local_180 = (undefined8 *)0x0;
      }
      iVar29 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar29 != 0x40000002) && (iVar29 == 1)) && (DAT_14c86a9f8 != '\0')) {
        FUN_140ad26c0();
        GetCurrentThreadId();
      }
      if ((bool)cVar46 == false) {
        local_148 = CONCAT44(local_148._4_4_,(int)param_3[2]);
        puVar11 = (ulonglong *)plVar10[1];
        puVar5 = (undefined4 *)*puVar11 + 1;
        local_178 = (longlong *)((ulonglong)local_178 & 0xffffffffffffff00);
        if ((undefined4 *)puVar11[1] < puVar5) {
          if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar10 + 0x170))(plVar10,&local_148,4);
          }
          else {
            FUN_14572512c(plVar10,&local_148);
          }
        }
        else {
          local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)*puVar11);
          *puVar11 = (ulonglong)puVar5;
        }
        if (0 < (int)param_3[2]) {
          lVar39 = 0;
          do {
            uVar36 = (undefined7)((ulonglong)unaff_R13 >> 8);
            uVar35 = (undefined7)((ulonglong)unaff_R12 >> 8);
            if (lVar31 == 0) {
              lVar31 = param_3[1];
              lVar32 = lVar31 + lVar39 * 0x40;
              uVar30 = (ulonglong)*(byte *)(lVar31 + 0x38 + lVar39 * 0x40);
              unaff_R13 = (longlong *)CONCAT71(uVar36,1);
              local_188 = CONCAT44(local_188._4_4_,(int)CONCAT71((int7)((ulonglong)lVar31 >> 8),1));
              unaff_R12 = (longlong *)CONCAT71(uVar35,1);
            }
            else {
              lVar32 = param_3[1] + lVar39 * 0x40;
              param_4 = CONCAT71((int7)(param_4 >> 8),
                                 *(undefined1 *)(param_3[1] + 0x38 + lVar39 * 0x40));
              unaff_R13 = (longlong *)CONCAT71(uVar36,1);
              if (lVar39 < *(int *)(lVar31 + 0x28)) {
                lVar40 = lVar39 * 0x18;
                unaff_R13 = (longlong *)
                            CONCAT71(uVar36,*(int *)(*(longlong *)(lVar31 + 0x20) + lVar40) !=
                                            *(int *)(local_180[4] + lVar40));
                unaff_R12 = (longlong *)
                            CONCAT71(uVar35,*(int *)(*(longlong *)(lVar31 + 0x20) + 4 + lVar40) !=
                                            *(int *)(local_180[4] + 4 + lVar40));
                local_188 = local_188 & 0xffffffff00000000;
              }
              else {
                local_188 = CONCAT44(local_188._4_4_,
                                     (int)CONCAT71((int7)(int3)((uint)*(int *)(lVar31 + 0x28) >> 8),
                                                   1));
                unaff_R12 = (longlong *)CONCAT71(uVar35,1);
              }
              uVar30 = param_4 & 0xffffffff;
            }
            lVar31 = *(longlong *)(*(longlong *)(*param_3 + 1000) + lVar39 * 0x10);
            local_f0 = CONCAT71(local_f0._1_7_,*(undefined1 *)(lVar32 + 0x30));
            (**(code **)(*plVar10 + 0x160))(plVar10,lVar32);
            FUN_1400748c2(plVar10,uVar30);
            FUN_1400748c2(plVar10,(ulonglong)unaff_R13 & 0xffffffff);
            FUN_1400748c2(plVar10,(ulonglong)unaff_R12 & 0xffffffff);
            puVar11 = (ulonglong *)plVar10[1];
            puVar12 = (undefined1 *)*puVar11;
            if ((undefined1 *)puVar11[1] < puVar12 + 1) {
              puVar28 = &local_f0;
              (**(code **)(*plVar10 + 0x170))(plVar10,puVar28,1);
            }
            else {
              puVar28 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar12 >> 8),*puVar12);
              local_f0 = CONCAT71(local_f0._1_7_,*puVar12);
              *puVar11 = (ulonglong)(puVar12 + 1);
            }
            if ((char)unaff_R13 != '\0') {
              puVar28 = (ulonglong *)(lVar32 + 8);
              FUN_1405d0c38(plVar10,puVar28);
            }
            if ((char)unaff_R12 != '\0') {
              puVar28 = (ulonglong *)(lVar32 + 0x18);
              FUN_1457252a6(plVar10,puVar28);
            }
            if ((char)local_f0 != '\0') {
              lVar32 = 0x10;
              uVar30 = 0;
              do {
                if (((byte)local_188 == '\0') &&
                   ((longlong)uVar30 <
                    (longlong)*(int *)(*(longlong *)(local_168 + 0x20) + 0x10 + lVar39 * 0x18))) {
                  lVar40 = *(longlong *)(*(longlong *)(local_168 + 0x20) + 8 + lVar39 * 0x18);
                  lVar42 = *(longlong *)(local_180[4] + 8 + lVar39 * 0x18);
                  uVar33 = *(uint *)(lVar40 + uVar30 * 8);
                  puVar28 = (ulonglong *)(ulonglong)uVar33;
                  if (uVar33 != *(uint *)(lVar42 + uVar30 * 8)) goto LAB_1405d0228;
                  uVar6 = *(ushort *)(lVar40 + 4 + uVar30 * 8);
                  puVar28 = (ulonglong *)(ulonglong)uVar6;
                  if (uVar6 != *(ushort *)(lVar42 + 4 + uVar30 * 8)) goto LAB_1405d0228;
                  uVar7 = *(ushort *)(lVar40 + 6 + uVar30 * 8);
                  uVar8 = *(ushort *)(lVar42 + 6 + uVar30 * 8);
                  unaff_R12 = (longlong *)(ulonglong)uVar8;
                  puVar28 = (ulonglong *)(ulonglong)CONCAT11((char)(uVar6 >> 8),uVar7 != uVar8);
                  FUN_1400748c2(plVar10,puVar28);
                  if (uVar7 != uVar8) goto LAB_1405d0232;
                }
                else {
LAB_1405d0228:
                  puVar28 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar28 >> 8),1);
                  FUN_1400748c2(plVar10,puVar28);
LAB_1405d0232:
                  lVar40 = *(longlong *)(lVar31 + 0x70);
                  puVar4 = (undefined2 *)(lVar32 + lVar40);
                  FUN_1400748c2(plVar10,CONCAT71((int7)((ulonglong)puVar28 >> 8),
                                                 *(undefined1 *)(lVar40 + 0xc + lVar32)) &
                                        0xffffffffffffff01);
                  puVar13 = *(undefined2 **)plVar10[1];
                  if ((undefined2 *)((undefined8 *)plVar10[1])[1] < puVar13 + 1) {
                    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
                      (**(code **)(*plVar10 + 0x170))(plVar10,puVar4,2);
                    }
                    else {
                      FUN_1457251a8(plVar10,puVar4);
                    }
                  }
                  else {
                    *puVar4 = *puVar13;
                    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 2;
                  }
                  puVar27 = (undefined2 *)(lVar32 + lVar40 + 2);
                  puVar13 = *(undefined2 **)plVar10[1];
                  if ((undefined2 *)((undefined8 *)plVar10[1])[1] < puVar13 + 1) {
                    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
                      (**(code **)(*plVar10 + 0x170))(plVar10,puVar27,2);
                    }
                    else {
                      FUN_1457251a8(plVar10);
                    }
                  }
                  else {
                    *puVar27 = *puVar13;
                    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 2;
                  }
                  unaff_R12 = (longlong *)(lVar32 + lVar40 + 4);
                  piVar14 = *(int **)plVar10[1];
                  if ((int *)((undefined8 *)plVar10[1])[1] < piVar14 + 1) {
                    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
                      (**(code **)(*plVar10 + 0x170))(plVar10,unaff_R12,4);
                    }
                    else {
                      FUN_14572512c(plVar10,unaff_R12);
                    }
                  }
                  else {
                    *(int *)unaff_R12 = *piVar14;
                    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
                  }
                  unaff_R13 = (longlong *)(lVar40 + lVar32 + 8);
                  piVar14 = *(int **)plVar10[1];
                  if ((int *)((undefined8 *)plVar10[1])[1] < piVar14 + 1) {
                    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
                      (**(code **)(*plVar10 + 0x170))(plVar10,unaff_R13,4);
                    }
                    else {
                      FUN_14572512c(plVar10,unaff_R13);
                    }
                  }
                  else {
                    *(int *)unaff_R13 = *piVar14;
                    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
                  }
                  iVar29 = *(int *)unaff_R13;
                  puVar28 = (ulonglong *)(longlong)iVar29;
                  uVar33 = *(int *)unaff_R12 - iVar29;
                  if (uVar33 != 0 && iVar29 <= *(int *)unaff_R12) {
                    if (0x1ff < uVar33) {
                      uVar33 = 0x200;
                    }
                    puVar28 = (ulonglong *)((longlong)puVar28 + *(longlong *)(puVar4 + -8));
                    (**(code **)(*plVar10 + 0x170))(plVar10,puVar28,uVar33);
                  }
                }
                uVar30 = uVar30 + 1;
                lVar32 = lVar32 + 0x50;
              } while (uVar30 < (local_f0 & 0xff));
            }
            lVar39 = lVar39 + 1;
            lVar31 = local_168;
            param_3 = local_170;
          } while (lVar39 < (int)local_170[2]);
        }
        cVar46 = (char)local_178;
      }
      if (local_e8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (cVar46 == '\0') goto LAB_1405d004f;
    }
LAB_1405cf8e9:
    uVar22 = 0;
  }
LAB_1405cf895:
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d09b8 FUN_1405d09b8 body=102 status=ok
// SIG undefined FUN_1405d09b8(void)

void FUN_1405d09b8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (DAT_14c874d80 == '\x01') {
    FUN_140033559(".\\Runtime/Core/Private/Serialization/BitReader.cpp",0x116,
                  L"FBitReader::SetOverflowed() called! (ReadLen: %i, Remaining: %i, Max: %i)",
                  param_2,param_1[0x14] - param_1[0x15],param_1[0x14]);
  }
  lVar1 = (**(code **)(*param_1 + 8))(param_1);
  do {
    *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | 2;
    lVar1 = *(longlong *)(lVar1 + 0x88);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1405d0a1e FUN_1405d0a1e body=181 status=ok
// SIG undefined FUN_1405d0a1e(void)

void FUN_1405d0a1e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 8;
  if ((int)param_1[9] == 0) {
LAB_1405d0a31:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 9) = 0;
      goto LAB_1405d0a31;
    }
  }
  plVar1 = param_1 + 6;
  if ((int)param_1[7] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1405d0a4f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1405d0a4f:
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405d0ad4 FUN_1405d0ad4 body=356 status=ok
// SIG undefined FUN_1405d0ad4(void)

void FUN_1405d0ad4(longlong param_1,uint param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x3f0))) && (-1 < (int)param_3)) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 1000) + (ulonglong)param_2 * 0x10);
    if ((int)param_3 < *(int *)(lVar5 + 0x78)) {
      lVar5 = *(longlong *)(lVar5 + 0x70);
      lVar6 = (ulonglong)param_3 * 0x50;
      plVar1 = (longlong *)(lVar5 + lVar6);
      if (*(short *)(lVar5 + 0x10 + lVar6) == (short)param_4[2]) {
        iVar7 = (int)plVar1[1];
        if (*(int *)((longlong)param_4 + 0x14) <= iVar7) {
          return;
        }
        if ((int)param_4[3] != iVar7) {
          return;
        }
        uVar2 = *(uint *)(param_4 + 1);
        if ((longlong)(int)uVar2 != 0) {
          *(uint *)(plVar1 + 1) = uVar2 + iVar7;
          if ((uint)(*(int *)((longlong)plVar1 + 0xc) - iVar7) < uVar2) {
            FUN_1447403be(plVar1);
          }
          memcpy((void *)((longlong)iVar7 + *plVar1),(void *)*param_4,(longlong)(int)uVar2);
          iVar7 = (int)plVar1[1];
        }
        *(int *)(plVar1 + 3) = iVar7;
      }
      else {
        if ((int)param_4[3] != 0) {
          return;
        }
        lVar5 = lVar5 + lVar6;
        uVar3 = *(undefined4 *)((longlong)param_4 + 0x14);
        lVar6 = param_4[3];
        uVar4 = *(undefined4 *)((longlong)param_4 + 0x1c);
        *(int *)(lVar5 + 0x10) = (int)param_4[2];
        *(undefined4 *)(lVar5 + 0x14) = uVar3;
        *(int *)(lVar5 + 0x18) = (int)lVar6;
        *(undefined4 *)(lVar5 + 0x1c) = uVar4;
        if (plVar1 != param_4) {
          iVar7 = (int)param_4[1];
          _Src = (void *)*param_4;
          *(int *)(plVar1 + 1) = iVar7;
          if (iVar7 == 0 && *(int *)((longlong)plVar1 + 0xc) == 0) {
            *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
          }
          else {
            FUN_1447a127e(plVar1,iVar7);
            if (iVar7 != 0) {
              memcpy((void *)*plVar1,_Src,(longlong)iVar7);
            }
          }
        }
      }
      if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x14)) {
        FUN_148b787dc(plVar1);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 1000) + (ulonglong)param_2 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001405d0c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x30))(plVar1,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1405d0c38 FUN_1405d0c38 body=434 status=ok
// SIG undefined FUN_1405d0c38(void)

longlong * FUN_1405d0c38(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1447a1747(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1408be2c4(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar5 = 0;
    lVar7 = 0;
    do {
      FUN_14021219d(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_1408be27e(param_2);
    if (0 < (int)local_44) {
      iVar6 = 0;
      do {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1447a1bd6(param_2,iVar3);
        }
        lVar5 = *param_2;
        puVar2 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_14021219d(param_1,lVar5 + (longlong)iVar3 * 0x10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405d0dec FUN_1405d0dec body=113 status=ok
// SIG undefined FUN_1405d0dec(void)

void FUN_1405d0dec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5afdc0;
  FUN_1405d0e9c(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d0e5d(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d0ec2(param_1);
  return;
}



// FUNCTION 1405d0e5d FUN_1405d0e5d body=63 status=ok
// SIG undefined FUN_1405d0e5d(void)

void FUN_1405d0e5d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405d0e9c FUN_1405d0e9c body=38 status=ok
// SIG undefined FUN_1405d0e9c(void)

void FUN_1405d0e9c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1405d0a1e(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1405d0ec2 FUN_1405d0ec2 body=77 status=ok
// SIG undefined FUN_1405d0ec2(void)

void FUN_1405d0ec2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b5b5b40;
  FUN_1405d0f0f(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001405d0f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1405d0f0f FUN_1405d0f0f body=100 status=ok
// SIG undefined FUN_1405d0f0f(void)

void FUN_1405d0f0f(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x10);
    do {
      if ((int)plVar2[1] == 0) {
LAB_1405d0f28:
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar1 = (undefined8 *)*plVar2;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,0);
          FUN_1446efa72(plVar2,0,0,0x10);
          *(undefined4 *)(plVar2 + 1) = 0;
          goto LAB_1405d0f28;
        }
      }
      plVar2 = plVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405d0f74 FUN_1405d0f74 body=831 status=ok
// SIG undefined FUN_1405d0f74(void)

void FUN_1405d0f74(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = *(int *)(param_1 + 0x268);
  if (iVar2 == 0) {
    uVar16 = 0;
    uVar17 = 1;
    iVar6 = 0;
    iVar13 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x250);
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_1405d115e;
        iVar13 = iVar13 + 0x20;
        uVar14 = puVar7[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar17 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar6 = (iVar13 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar14 = 0xffffffff;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar6 * 0x10);
      if ((plVar4 != (longlong *)0x0) && ((*(byte *)((longlong)plVar4 + 0x9c) & 1) != 0)) {
        if ((~*(byte *)((longlong)plVar4 + 0x9c) & 3) == 0) {
          bVar5 = *(byte *)((longlong)plVar4 + 0x9d);
          if ((bVar5 & 1) != 0) {
            if ((plVar4[0x16] != 0) || (lVar9 = FUN_1448abda6(plVar4), lVar9 != 0))
            goto LAB_1405d1090;
            bVar5 = *(byte *)((longlong)plVar4 + 0x9d);
          }
          *(byte *)((longlong)plVar4 + 0x9d) = bVar5 | 1;
          FUN_1401057d4(plVar4);
          FUN_14010586c(&DAT_14cad0140,plVar4);
        }
LAB_1405d1090:
        if (DAT_14cabf8d0 == 0) {
          local_70 = &local_50;
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_142b47bc4;
          local_78 = &LAB_147860ffd;
          local_80 = FUN_1463713dc;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10000005;
          local_a0 = 0x10;
          local_a8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) && (lVar9 = (**(code **)(*plVar4 + 0x5d8))(plVar4), lVar9 != 0))
        {
          uVar8 = (**(code **)(*plVar4 + 0x5d8))(plVar4);
          FUN_1405d0f74(uVar8);
        }
      }
      uVar14 = uVar14 & ~(uint)uVar17;
      puVar7 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x250);
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar6 = (int)uVar16;
      lVar9 = (longlong)iVar6;
      uVar12 = puVar7[lVar9] & uVar14;
      if (uVar12 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar6) {
          iVar11 = iVar6;
        }
        if (iVar6 < iVar10) {
          lVar15 = 0;
          do {
            uVar12 = puVar7[lVar9 + lVar15 + 1];
            if (uVar12 != 0) {
              uVar16 = (ulonglong)(iVar6 + (int)lVar15 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1405d112f;
            }
            iVar13 = iVar13 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar11 - lVar9 != lVar15);
          uVar14 = 0xffffffff;
          iVar6 = iVar11;
        }
        uVar16 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_1405d112f:
        uVar17 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar17 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar6 = (iVar13 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_1405d115e:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405d12b4 FUN_1405d12b4 body=137 status=ok
// SIG undefined FUN_1405d12b4(void)

undefined8 FUN_1405d12b4(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  do {
    if (param_3 == 0) {
      return 1;
    }
    iVar1 = (int)param_1[1];
    if (iVar1 == (int)param_2[1]) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)(*param_1 + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar2 = *(ushort *)(*param_2 + lVar6);
          if (uVar4 != uVar2) break;
          if (uVar4 == 0) goto LAB_1405d1316;
LAB_1405d12f4:
          lVar6 = lVar6 + 2;
        }
        if ((uVar2 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar2;
          uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1405d12f4;
        }
        if (uVar4 != uVar2) {
          return 0;
        }
      }
    }
    else if ((int)param_2[1] + iVar1 != 1) {
      return 0;
    }
LAB_1405d1316:
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    param_3 = param_3 + -1;
  } while( true );
}



// FUNCTION 1405d133e FUN_1405d133e body=460 status=ok
// SIG undefined FUN_1405d133e(void)

void FUN_1405d133e(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a8adfe0;
  plVar1 = param_1 + 0x6c;
  if (*(int *)(param_1 + 0x6d) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1405d1371;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x6d) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1405d1371:
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1552(param_1[0x65],*(undefined4 *)(param_1 + 0x66));
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1525(param_1[0x61],*(undefined4 *)(param_1 + 0x62));
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d150a(param_1[0x59],*(undefined4 *)(param_1 + 0x5a));
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 1405d150a FUN_1405d150a body=27 status=ok
// SIG undefined FUN_1405d150a(void)

void FUN_1405d150a(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x54);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405d1525 FUN_1405d1525 body=45 status=ok
// SIG undefined FUN_1405d1525(void)

void FUN_1405d1525(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 1405d1552 FUN_1405d1552 body=63 status=ok
// SIG undefined FUN_1405d1552(void)

void FUN_1405d1552(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405d1592 thunk_FUN_1405d1598 body=5 status=ok
// SIG undefined thunk_FUN_1405d1598(void)

void thunk_FUN_1405d1598(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a46d590;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1606(param_1 + 0x15);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1404db954(param_1);
  return;
}



// FUNCTION 1405d1598 FUN_1405d1598 body=110 status=ok
// SIG undefined FUN_1405d1598(void)

void FUN_1405d1598(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a46d590;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1606(param_1 + 0x15);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1404db954(param_1);
  return;
}



// FUNCTION 1405d1606 FUN_1405d1606 body=55 status=ok
// SIG undefined FUN_1405d1606(void)

void FUN_1405d1606(longlong *param_1)

{
  FUN_1405d163e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405d163e FUN_1405d163e body=123 status=ok
// SIG undefined FUN_1405d163e(void)

void FUN_1405d163e(longlong param_1,int param_2)

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



// FUNCTION 1405d16ba FUN_1405d16ba body=1339 status=ok
// SIG undefined FUN_1405d16ba(void)

longlong FUN_1405d16ba(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cae8b20 == 0) {
    local_50 = &local_38;
    local_38 = (code *)&LAB_14355090c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_147b8e16d;
    local_60 = (code *)&LAB_140810a38;
    local_68 = L"Engine";
    local_70 = 0x800000000;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar5 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_1468c5283;
    local_60 = FUN_142809da0;
    local_68 = L"Engine";
    local_70 = 0x400000000;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar6 = *(longlong *)(param_2 + 0x20);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    iVar2 = *(int *)(lVar5 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar2) ||
         (lVar8 = lVar6,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
         lVar5 + 0x30)) {
        lVar8 = 0;
      }
    } while ((lVar8 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
  }
  if (((*(byte *)(lVar8 + 0x243) & 1) == 0) ||
     (pcVar9 = *(code **)(*(longlong *)(lVar8 + 0x2b0) + 0x3f0), pcVar9 == (code *)0x0)) {
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_38;
      local_38 = (code *)&LAB_14355090c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147b8e16d;
      local_60 = (code *)&LAB_140810a38;
      local_68 = L"Engine";
      local_70 = 0x800000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar5 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1468c5283;
      local_60 = FUN_142809da0;
      local_68 = L"Engine";
      local_70 = 0x400000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar6 = *(longlong *)(param_2 + 0x20);
    if (lVar6 == 0) {
      lVar8 = 0;
    }
    else {
      iVar2 = *(int *)(lVar5 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar2) ||
           (lVar8 = lVar6,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
           lVar5 + 0x30)) {
          lVar8 = 0;
        }
      } while ((lVar8 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
    }
    plVar4 = (longlong *)FUN_1405d1c86(lVar8);
    if ((plVar4 != (longlong *)0x0) &&
       ((plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2a0))(plVar4), plVar4 != (longlong *)0x0 &&
        (lVar5 = (**(code **)(*plVar4 + 8))(plVar4), lVar5 != 0)))) {
      lVar6 = FUN_14019a59a();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x78))(lVar5 + 0x28);
        if (((*(longlong *)(lVar5 + 0x30) != 0) &&
            (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x2b0), lVar5 != 0)) &&
           (pcVar9 = *(code **)(lVar5 + 0x3f0), pcVar9 != (code *)0x0)) goto LAB_1405d1836;
      }
    }
  }
  else {
LAB_1405d1836:
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(pcVar9);
    }
    local_38 = pcVar9;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(pcVar9);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(pcVar9);
    }
    uVar1 = ((uint)((ulonglong)pcVar9 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar9 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    iVar2 = FUN_14017c546((longlong *)(param_1 + 0x30),uVar1 >> 0x10 ^ uVar1,&local_38);
    if (iVar2 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      lVar5 = 0;
      if ((lVar6 + (longlong)iVar2 * 0x60 != 0) &&
         (plVar4 = (longlong *)(lVar6 + (longlong)iVar2 * 0x60 + 8), plVar4 != (longlong *)0x0)) {
        puVar7 = (undefined8 *)FUN_1405d1bf6(param_2);
        local_38 = (code *)*puVar7;
        uStack_30 = *(undefined4 *)(puVar7 + 1);
        uStack_2c = *(undefined4 *)((longlong)puVar7 + 0xc);
        uVar3 = FUN_1447addd0(&local_38,0x10);
        iVar2 = FUN_14017c4d2(plVar4,uVar3,&local_38);
        if (iVar2 == -1) {
          lVar6 = 0;
        }
        else {
          lVar6 = (longlong)iVar2 * 0x30 + *plVar4;
        }
        lVar5 = lVar6 + 0x10;
        if (lVar6 == 0) {
          lVar5 = 0;
        }
      }
      goto LAB_1405d1906;
    }
  }
  lVar5 = 0;
LAB_1405d1906:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1405d1bf6 FUN_1405d1bf6 body=143 status=ok
// SIG undefined FUN_1405d1bf6(void)

undefined8 * FUN_1405d1bf6(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(int *)(param_1 + 0x39c) == 0 && *(int *)(param_1 + 0x398) == 0) &&
      *(int *)(param_1 + 0x3a0) == 0) && *(int *)(param_1 + 0x3a4) == 0) {
    lVar2 = FUN_144a79cc8();
    lVar2 = FUN_14019a418(lVar2 + 0x2c0);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))(lVar2 + 0x28);
      if (lVar2 != 0) {
        lVar3 = FUN_14019a59a();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           (*(char *)(lVar2 + 0x59) == '\x01')) {
          uVar1 = *(undefined8 *)(lVar2 + 0x94);
          *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(lVar2 + 0x8c);
          *(undefined8 *)(param_1 + 0x3a0) = uVar1;
        }
      }
    }
  }
  return (undefined8 *)(param_1 + 0x398);
}



// FUNCTION 1405d1c86 FUN_1405d1c86 body=267 status=ok
// SIG undefined FUN_1405d1c86(void)

ulonglong FUN_1405d1c86(ulonglong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0xc0) == 0)) ||
     (*(ulonglong *)(*(longlong *)(param_1 + 0xc0) + 0x30) == param_1)) {
    uVar5 = 0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
    if (DAT_14cae90b8 != param_1) {
      DAT_14cae90b8 = param_1;
      if (DAT_14cae9048 != DAT_14cae9074) {
        uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar4 = &DAT_14cae9078;
        if (DAT_14cae9080 != (undefined *)0x0) {
          puVar4 = DAT_14cae9080;
        }
        iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14cae9088 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        while (iVar2 != -1) {
          puVar1 = (ulonglong *)(DAT_14cae9040 + (longlong)iVar2 * 0x18);
          if (*puVar1 == param_1) {
            if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
              DAT_14cae90c0 = puVar1[1];
              goto LAB_1405d1ccd;
            }
            break;
          }
          iVar2 = (int)puVar1[2];
        }
      }
      DAT_14cae90c0 = 0;
    }
LAB_1405d1ccd:
    uVar5 = DAT_14cae90c0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
  }
  return uVar5;
}



// FUNCTION 1405d1d92 FUN_1405d1d92 body=66 status=ok
// SIG undefined FUN_1405d1d92(void)

void FUN_1405d1d92(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  uVar4 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_1405d1dd4();
  *(uint *)(param_2 + 0x50) = DAT_14cb3bd6c + uVar4;
  lVar2 = *(longlong *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 8 + (ulonglong)uVar4) = *(undefined4 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar2 + (ulonglong)uVar4) = uVar3;
  return;
}



// FUNCTION 1405d1dd4 FUN_1405d1dd4 body=255 status=ok
// SIG undefined FUN_1405d1dd4(void)

void FUN_1405d1dd4(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3bdb0) {
    FUN_144b3d300(&DAT_14cb3bdb0);
    if (DAT_14cb3bdb0 == -1) {
      FUN_1457256ec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_50 = 0x10;
      local_58 = 0x10;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3bd30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a3d501);
      _Init_thread_footer(&DAT_14cb3bdb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d1ed4 FUN_1405d1ed4 body=280 status=ok
// SIG undefined FUN_1405d1ed4(void)

undefined8 FUN_1405d1ed4(longlong param_1)

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
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = FUN_1405d1fee();
    if (lVar1 != 0) {
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
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        uVar2 = CONCAT71((int7)((ulonglong)(DAT_14cba8288 + 0x30) >> 8),
                         *(undefined1 *)(lVar1 + 0x78fc));
        goto LAB_1405d1efd;
      }
    }
  }
  uVar2 = 0;
LAB_1405d1efd:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d1fee FUN_1405d1fee body=480 status=ok
// SIG undefined FUN_1405d1fee(void)

longlong FUN_1405d1fee(longlong param_1)

{
  longlong lVar1;
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
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
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
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x3d0), lVar1 != 0)) {
      if (DAT_14cacf818 == 0) {
        local_30 = &local_18;
        local_18 = FUN_141030f22;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_1463b216c;
        local_38 = &LAB_1479977e3;
        local_40 = &LAB_1463b2171;
        local_48 = &DAT_149e063b2;
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 0x10;
        local_68 = 0x750;
        FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
      }
      if ((*(int *)(DAT_14cacf818 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) == DAT_14cacf818 + 0x30))
      goto LAB_1405d2043;
    }
  }
  lVar1 = 0;
LAB_1405d2043:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1405d21d8 FUN_1405d21d8 body=154 status=ok
// SIG undefined FUN_1405d21d8(void)

undefined8 * FUN_1405d21d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14cb42160 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_14005ac26(&DAT_14cb42160);
  }
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0x800000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  uVar1 = DAT_14c846500;
  param_1[9] = DAT_14c8464f8;
  param_1[10] = uVar1;
  param_1[0xb] = DAT_14c846508;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  return param_1;
}



// FUNCTION 1405d2272 FUN_1405d2272 body=1668 status=ok
// SIG undefined FUN_1405d2272(void)

undefined1 FUN_1405d2272(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  char cVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined4 local_1c0;
  undefined1 **local_1b8;
  undefined1 local_1b0;
  undefined1 *local_1a8;
  undefined1 *puStack_1a0;
  undefined1 *local_198;
  undefined1 *puStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  byte local_14c;
  longlong local_148;
  longlong local_140;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  LARGE_INTEGER local_128;
  float local_120;
  undefined8 local_11c;
  undefined8 local_114;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_fc;
  undefined1 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  QueryPerformanceCounter(&local_128);
  if (*(int *)(param_1 + 4) != 0) {
    dVar6 = (double)CONCAT44(local_128.s.HighPart,local_128.s.LowPart) * DAT_14c83f420 + 16777216.0;
    pcVar11 = QueryPerformanceCounter_exref;
    do {
      (*pcVar11)(&local_128);
      dVar5 = (double)CONCAT44(local_128.s.HighPart,local_128.s.LowPart) * DAT_14c83f420 +
              16777216.0;
      dVar14 = (dVar6 - dVar5) + 0.016666666666666666;
      dVar6 = dVar5;
      if (0.0 < dVar14) {
        auVar7._4_8_ = (ulonglong)dVar14 >> 0x20;
        auVar7._0_4_ = (float)dVar14;
        FUN_14000f986(auVar7._0_8_);
        (*pcVar11)(&local_128);
        dVar6 = (double)CONCAT44(local_128.s.HighPart,local_128.s.LowPart) * DAT_14c83f420 +
                16777216.0;
      }
      if ((DAT_14c98e618 != (longlong *)0x0) && (*(int *)(param_1 + 8) == 0)) {
        if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x70))();
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))();
        }
        lpCriticalSection =
             (LPCRITICAL_SECTION)(**(code **)(*(longlong *)DAT_14c98e618[4] + 0x160))();
        EnterCriticalSection(lpCriticalSection);
        plVar3 = *(longlong **)(param_1 + 0x20);
        if ((DAT_14ca83900 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*DAT_14ca83900 + 0x390))(), cVar8 == '\0')) {
          fVar12 = (float)(**(code **)(*DAT_14c98e618 + 0x58))();
          if ((char)plVar3[7] == '\x01') {
            fVar13 = 1.0;
            if (*(longlong **)(*plVar3 + 0x510) != (longlong *)0x0) {
              fVar13 = (float)(**(code **)(**(longlong **)(*plVar3 + 0x510) + 0xf8))();
            }
            fVar12 = fVar12 * fVar13;
          }
          FUN_140c2d2b0(plVar3[1],&local_128);
          fVar18 = (float)local_11c - (float)local_128.s.HighPart;
          fVar13 = local_120 - (float)local_128.s.LowPart;
          FUN_1405d28f8(DAT_14c98e618,1);
          local_10c = fVar12 + 0.0;
          fVar19 = fVar12 * 0.0;
          fVar20 = fVar19 + 0.0;
          local_11c = 0;
          local_fc = 0;
          local_f4 = 0;
          local_114 = 0;
          local_128.s.LowPart = (DWORD)((1.0 / fVar12) * fVar13);
          local_128.s.HighPart = (LONG)(fVar18 * (1.0 / fVar12));
          local_120 = fVar12;
          local_108 = fVar20;
          local_104 = fVar20;
          local_100 = local_10c;
          FUN_1405d299c(plVar3[1],fVar12);
          fVar13 = fVar19 + fVar20;
          fVar18 = fVar12 * (float)local_128.s.LowPart + fVar20;
          fVar17 = fVar20 + (float)local_128.s.HighPart * fVar12;
          fVar15 = (float)local_128.s.HighPart * fVar12 + fVar13;
          fVar16 = fVar19 + fVar18;
          fVar12 = fVar13;
          if (fVar13 <= fVar17) {
            fVar12 = fVar17;
          }
          if (fVar12 <= fVar15) {
            fVar12 = fVar15;
          }
          local_12c = -(uint)(fVar12 < fVar19) & (uint)fVar20 |
                      ~-(uint)(fVar12 < fVar19) & (uint)fVar12;
          fVar12 = fVar18;
          if (fVar18 <= fVar13) {
            fVar12 = fVar13;
          }
          if (fVar12 <= fVar16) {
            fVar12 = fVar16;
          }
          local_130 = -(uint)(fVar12 < fVar19) & (uint)fVar20 |
                      ~-(uint)(fVar12 < fVar19) & (uint)fVar12;
          if (fVar13 <= fVar18) {
            fVar18 = fVar13;
          }
          if (fVar17 <= fVar13) {
            fVar13 = fVar17;
          }
          if (fVar15 <= fVar13) {
            fVar13 = fVar15;
          }
          local_134 = -(uint)(fVar19 < fVar13) & (uint)fVar20 |
                      ~-(uint)(fVar19 < fVar13) & (uint)fVar13;
          if (fVar16 <= fVar18) {
            fVar18 = fVar16;
          }
          local_138 = -(uint)(fVar19 < fVar18) & (uint)fVar20 |
                      ~-(uint)(fVar19 < fVar18) & (uint)fVar18;
          local_178 = DAT_14c84635c;
          lVar9 = plVar3[1];
          local_1a8 = *(undefined1 **)
                       (lVar9 + 0x390 +
                       (ulonglong)(-(uint)(*(float *)(lVar9 + 0x398) != 0.0) & 1) * 8);
          local_148 = *(longlong *)(lVar9 + 0x380);
          FUN_14020e8f6(plVar3[3],&local_148,&local_1a8,&local_178);
          FUN_1448e9c5c(plVar3[3],*(undefined4 *)(plVar3[3] + 0x90));
          plVar4 = (longlong *)plVar3[5];
          lVar9 = (**(code **)(*plVar4 + 0x10))(plVar4);
          local_148 = plVar3[1];
          local_140 = plVar3[2];
          if (local_140 != 0) {
            LOCK();
            *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
            UNLOCK();
          }
          lVar10 = FUN_1405d2af8(lVar9,&local_148);
          *(longlong *)(lVar10 + 0x40) = *plVar3;
          dVar5 = (double)DAT_14c98e618[0x7c];
          dVar14 = (double)DAT_14c98e618[0x7d];
          local_158 = (**(code **)(*DAT_14c98e618 + 0x60))();
          local_178 = plVar3[3];
          local_168 = CONCAT44((float)DAT_14c8463f8,(float)DAT_14c8463f0);
          local_160 = 0;
          local_14c = (local_14c & 0xfc) + 1;
          local_1b0 = *(undefined1 *)(plVar3[1] + 0x3a);
          local_1a8 = &DAT_3f8000003f800000;
          puStack_1a0 = &DAT_3f8000003f800000;
          local_198 = &DAT_3f8000003f800000;
          puStack_190 = &DAT_3f8000003f800000;
          local_188 = 0x3f19999a3f19999a;
          uStack_180 = 0x3f19999a3f19999a;
          local_1b8 = &local_1a8;
          local_1c0 = 0;
          local_1c8 = lVar10;
          local_170 = local_178;
          local_150 = (float)(dVar5 - dVar14);
          FUN_14016eaf2(plVar3[1],&local_178,&local_128,&local_138);
          (**(code **)(*(longlong *)plVar3[5] + 0x58))((longlong *)plVar3[5],lVar9);
          *(float *)(lVar9 + 0x60) = (float)DAT_14c8463f0;
          *(float *)(lVar9 + 100) = (float)DAT_14c8463f8;
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar9);
          pcVar11 = QueryPerformanceCounter_exref;
        }
        LOCK();
        *(undefined4 *)(param_1 + 8) = 1;
        UNLOCK();
        if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x80))();
        }
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
        }
      }
    } while (*(int *)(param_1 + 4) != 0);
  }
  iVar2 = *(int *)(param_1 + 8);
  while (iVar2 != 0) {
    FUN_14000f986(0x3c888889);
    iVar2 = *(int *)(param_1 + 8);
  }
  LOCK();
  uVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if ((local_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d28f8 FUN_1405d28f8 body=163 status=ok
// SIG undefined FUN_1405d28f8(void)

void FUN_1405d28f8(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  float fVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x610));
  uVar1 = *(undefined1 *)(param_1 + 0x63d);
  *(undefined1 *)(param_1 + 0x63d) = 1;
  fVar2 = (float)(*(double *)(param_1 + 0x3e0) - *(double *)(param_1 + 1000));
  if ((param_2 & 2) != 0) {
    FUN_1428f380e(param_1,fVar2);
  }
  if ((param_2 & 1) != 0) {
    FUN_1428f3b16(param_1);
  }
  if ((param_2 & 4) != 0) {
    if (DAT_14c98e4b8 != '\0') {
      fVar2 = 0.016666668;
    }
    FUN_1428f3bb6(param_1,fVar2);
  }
  *(undefined1 *)(param_1 + 0x63d) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001405d2994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x610));
  return;
}



// FUNCTION 1405d299c FUN_1405d299c body=346 status=ok
// SIG undefined FUN_1405d299c(void)

void FUN_1405d299c(longlong *param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [40];
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c979cd0 != '\x01') || ((char)param_1[6] < '\0')) {
    bVar2 = *(byte *)((longlong)param_1 + 0x31);
    if (((~bVar2 & 3) == 0) && (DAT_14c979cd1 == '\0')) {
      FUN_14627dc38(param_1,0);
      bVar2 = *(byte *)((longlong)param_1 + 0x31);
    }
    *(undefined4 *)((longlong)param_1 + 0x3c) = param_2;
    *(byte *)((longlong)param_1 + 0x31) = bVar2 | 0x40;
    if ((char)bVar2 < '\0') {
      bVar2 = (**(code **)(*param_1 + 0x160))(param_1,param_2);
      bVar2 = bVar2 ^ 1;
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 == 0) && ((*(byte *)(param_1 + 6) & 2) != 0)) {
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x180))(param_1);
      (**(code **)*puVar3)(puVar3);
      FUN_14287b89e(param_1,param_2,puVar3);
      (**(code **)*puVar3)(puVar3);
    }
    if ((*(byte *)((longlong)param_1 + 0x31) & 0x40) == 0) {
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x3c);
    }
    pcVar1 = *(code **)(*param_1 + 0x168);
    if (pcVar1 == FUN_14697dd72) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_40);
      *(float *)(param_1 + 0x2d) = (float)local_40;
      *(float *)((longlong)param_1 + 0x16c) = (float)local_38;
      *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 0x20;
    }
    else {
      (*pcVar1)(param_1,uVar4);
    }
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0x7f;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d2af8 FUN_1405d2af8 body=1076 status=ok
// SIG undefined FUN_1405d2af8(void)

longlong * FUN_1405d2af8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  byte bVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *unaff_R13;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  LPCRITICAL_SECTION local_80;
  LARGE_INTEGER local_78;
  longlong *plStack_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
  EnterCriticalSection(lpCriticalSection);
  if (0 < *(int *)(param_1 + 0x28)) {
    plVar1 = (longlong *)(param_1 + 0x20);
    lVar10 = 8;
    lVar11 = 0;
    plVar9 = (longlong *)(param_1 + 0x10);
    do {
      plVar4 = *(longlong **)(*plVar1 + -8 + lVar10);
      plVar5 = *(longlong **)(*plVar1 + lVar10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (((*plVar4 == 0) || (plVar4[1] == 0)) || (*(int *)(plVar4[1] + 8) < 1)) {
        local_98 = 0;
      }
      else {
        local_98 = plVar4[2];
      }
      lVar6 = *param_2;
      local_a0 = lVar11;
      local_90 = lVar10;
      if (local_98 == lVar6) {
        iVar3 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = iVar3 + 1U;
        local_80 = lpCriticalSection;
        if (*(uint *)(param_1 + 0x1c) < iVar3 + 1U) {
          FUN_140055bdc(plVar9,iVar3);
        }
        lVar10 = *plVar9;
        *(longlong **)(lVar10 + (longlong)iVar3 * 0x10) = plVar4;
        *(longlong **)(lVar10 + 8 + (longlong)iVar3 * 0x10) = plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_88 = plVar9;
        FUN_1405d2f2e(plVar1,local_a0);
        FUN_1405d2fba(plVar1);
        lVar10 = plVar4[0x23];
        if (lVar10 != 0) {
          if (DAT_14c87e718 == '\0') {
            iVar3 = *(int *)(lVar10 + 0x1c);
            if ((2 < iVar3) &&
               (bVar8 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar8 < 3)) {
              local_78.QuadPart = 0x20100000001;
              plStack_70 = (longlong *)0x30100000101;
              local_68 = DAT_14c7585c8;
              local_64 = DAT_14c7585c8 | 0x200;
              local_60 = DAT_14c7585c8 | 0x100;
              local_5c = DAT_14c7585c8 | 0x300;
              local_58 = 0;
              uStack_54 = 0x200;
              uStack_50 = 0x100;
              uStack_4c = 0x300;
              if (*(byte *)((longlong)&local_78 + (ulonglong)(iVar3 - 3) * 4) == bVar8)
              goto LAB_1405d2ecd;
            }
            QueryPerformanceCounter(&local_78);
            plStack_70 = (longlong *)0xffffffffffffffff;
            FUN_140056092(lVar10,&local_78);
          }
          else {
LAB_1405d2ecd:
            FUN_140082318(lVar10);
          }
          puVar7 = (undefined8 *)plVar4[0x23];
          plVar4[0x23] = 0;
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar7 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar7)(puVar7,1);
            }
          }
        }
        FUN_1405d3048(plVar4);
        lpCriticalSection = local_80;
        plVar9 = local_88;
        unaff_R13 = plVar4;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      if (local_98 == lVar6) goto LAB_1405d2c30;
      lVar11 = local_a0 + 1;
      lVar10 = local_90 + 0x10;
    } while (lVar11 < *(int *)(param_1 + 0x28));
  }
  plVar9 = (longlong *)FUN_14001cc68(0x920,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_149ee9980;
  unaff_R13 = plVar9 + 2;
  local_78.QuadPart = *param_2;
  plVar1 = (longlong *)param_2[1];
  plStack_70 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1405d3502(unaff_R13,&local_78);
  }
  else {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    FUN_1405d3502(unaff_R13);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar1 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  FUN_1405d3048(unaff_R13);
  iVar3 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar3 + 1U) {
    FUN_140055bdc((longlong *)(param_1 + 0x10),iVar3);
  }
  lVar10 = *(longlong *)(param_1 + 0x10);
  *(longlong **)(lVar10 + (longlong)iVar3 * 0x10) = unaff_R13;
  *(longlong **)(lVar10 + 8 + (longlong)iVar3 * 0x10) = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_1405d2c30:
  LeaveCriticalSection(lpCriticalSection);
  plVar1 = (longlong *)param_2[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar1 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_R13;
}



// FUNCTION 1405d2f2e FUN_1405d2f2e body=140 status=ok
// SIG undefined FUN_1405d2f2e(void)

void FUN_1405d2f2e(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1405d2fba FUN_1405d2fba body=142 status=ok
// SIG undefined FUN_1405d2fba(void)

void FUN_1405d2fba(longlong param_1)

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



// FUNCTION 1405d3048 FUN_1405d3048 body=1209 status=ok
// SIG undefined FUN_1405d3048(void)

void FUN_1405d3048(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x164);
  FUN_140762ea4(*(undefined8 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x160));
  *(undefined4 *)(param_1 + 0x160) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x164) != 0)) {
    FUN_14696abc2(param_1 + 0x158);
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 == 0) goto LAB_1405d30a4;
  if (DAT_14c87e718 == '\0') {
    iVar2 = *(int *)(lVar3 + 0x1c);
    if (2 < iVar2) {
      bVar5 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar5 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar2 - 3) * 4) == bVar5)
        goto LAB_1405d34f5;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar3,&local_58);
  }
  else {
LAB_1405d34f5:
    FUN_140082318(lVar3);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
LAB_1405d30a4:
  FUN_142869310(param_1 + 0x48);
  FUN_142869310(param_1 + 0xb0);
  FUN_1400dbb3c(param_1 + 0x120);
  if (*(int *)(param_1 + 0x18c) < 0) {
    *(undefined4 *)(param_1 + 0x188) = 0;
    FUN_1428768e2(param_1 + 0x180);
  }
  else {
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  if (*(int *)(param_1 + 0x19c) < 0) {
    *(undefined4 *)(param_1 + 0x198) = 0;
    FUN_1428768e2(param_1 + 400);
  }
  else {
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x1ac);
  FUN_142875273(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8));
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x1ac) != 0)) {
    FUN_142876912(param_1 + 0x1a0);
  }
  iVar2 = *(int *)(param_1 + 0x1bc);
  FUN_14171ee09(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b8));
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x1bc) != 0)) {
    FUN_142876942(param_1 + 0x1b0);
  }
  iVar2 = *(int *)(param_1 + 0x1cc);
  FUN_14287523f(*(undefined8 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x1c8));
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x1cc) != 0)) {
    FUN_142876972(param_1 + 0x1c0);
  }
  iVar2 = *(int *)(param_1 + 0x1dc);
  FUN_1428751fd(*(undefined8 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1d8));
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x1dc) != 0)) {
    FUN_1428769a2(param_1 + 0x1d0);
  }
  iVar2 = *(int *)(param_1 + 0x1ec);
  FUN_1428751cc(*(undefined8 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e8));
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x1ec) != 0)) {
    FUN_1428769d2(param_1 + 0x1e0);
  }
  if (*(int *)(param_1 + 0x1fc) < 0) {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    FUN_142876a02(param_1 + 0x1f0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  if (*(int *)(param_1 + 0x20c) < 0) {
    *(undefined4 *)(param_1 + 0x208) = 0;
    FUN_1428768e2(param_1 + 0x200);
  }
  else {
    *(undefined4 *)(param_1 + 0x208) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x21c);
  FUN_142875192(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218));
  *(undefined4 *)(param_1 + 0x218) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x21c) != 0)) {
    FUN_142876a32(param_1 + 0x210);
  }
  iVar2 = *(int *)(param_1 + 0x22c);
  FUN_142875150(*(undefined8 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x228));
  *(undefined4 *)(param_1 + 0x228) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x22c) != 0)) {
    FUN_142876a62(param_1 + 0x220);
  }
  if (*(int *)(param_1 + 0x23c) < 0) {
    *(undefined4 *)(param_1 + 0x238) = 0;
    FUN_142876a92(param_1 + 0x230);
  }
  else {
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  if (*(int *)(param_1 + 0x24c) < 0) {
    *(undefined4 *)(param_1 + 0x248) = 0;
    FUN_142876ac2(param_1 + 0x240);
  }
  else {
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  if (*(int *)(param_1 + 0x25c) < 0) {
    *(undefined4 *)(param_1 + 600) = 0;
    FUN_142876af2(param_1 + 0x250);
  }
  else {
    *(undefined4 *)(param_1 + 600) = 0;
  }
  FUN_14004673c(param_1 + 0x18,0);
  *(undefined4 *)(param_1 + 0x8d8) = 0;
  if (*(int *)(param_1 + 0x8dc) != 0) {
    FUN_142876b22(param_1 + 0x8b0);
  }
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  if (*(int *)(param_1 + 0x8fc) != 0) {
    FUN_14171f086(param_1 + 0x8e0,0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d3502 FUN_1405d3502 body=399 status=ok
// SIG undefined FUN_1405d3502(void)

longlong * FUN_1405d3502(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  param_1[2] = *param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x36) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x400000000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x114] = 0;
  *(undefined4 *)(param_1 + 0x115) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  memset(param_1 + 0x2e,0,0xf0);
  *(undefined4 *)((longlong)param_1 + 0x8ac) = 0x32;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0x400000000;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0x400000000;
  param_1[0x120] = 0;
  *(undefined1 *)(param_1 + 0x121) = 0;
  if (*param_2 != 0) {
    param_1[0x120] = *(longlong *)(*param_2 + 0x390);
  }
  return param_1;
}



// FUNCTION 1405d3692 FUN_1405d3692 body=18 status=ok
// SIG undefined FUN_1405d3692(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405d3692(longlong *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined ***pppuVar27;
  longlong lVar28;
  byte bVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_1e8 [32];
  undefined1 uStack_1c8;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  code *apcStack_138 [2];
  undefined ***pppuStack_128;
  undefined **ppuStack_118;
  byte bStack_110;
  ulonglong uStack_f0;
  
  if (*(char *)((longlong)param_1 + 0x151) == '\x01') {
    FUN_1405d44fa();
    return;
  }
  uVar37 = SUB84(param_2,0);
  uVar39 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dStack_1b8 = param_2;
  if ((char)param_1[0x2a] != '\0') {
    if (DAT_14c9abbe8 == 0) {
      plVar25 = (longlong *)FUN_145a10a92();
      lVar33 = plVar25[0x22];
      if (lVar33 == 0) {
        (**(code **)(*plVar25 + 1000))();
        lVar33 = plVar25[0x22];
      }
      uVar37 = SUB84(dStack_1b8,0);
      uVar39 = (undefined4)((ulonglong)dStack_1b8 >> 0x20);
      DAT_14c9abbe8 = lVar33;
    }
    dVar42 = pow(*(double *)(DAT_14c9abbe8 + 0x78),(double)CONCAT44(uVar39,uVar37));
    if (DAT_14c9abbe8 == 0) {
      plVar25 = (longlong *)FUN_145a10a92();
      lVar33 = plVar25[0x22];
      if (lVar33 == 0) {
        (**(code **)(*plVar25 + 1000))();
        lVar33 = plVar25[0x22];
      }
      uVar37 = SUB84(dStack_1b8,0);
      uVar39 = (undefined4)((ulonglong)dStack_1b8 >> 0x20);
      DAT_14c9abbe8 = lVar33;
    }
    dVar16 = pow(*(double *)(DAT_14c9abbe8 + 0x68),(double)CONCAT44(uVar39,uVar37));
    uVar35 = SUB84(dVar16,0);
    if (0 < (int)param_1[2]) {
      uVar47 = (undefined4)((ulonglong)dVar16 >> 0x20);
      uStack_158 = *(ulonglong *)(*param_1 + 0xa0);
      uVar43 = (undefined4)uStack_158;
      uVar44 = (undefined4)(uStack_158 >> 0x20);
      uVar24 = DAT_149931e80 ^ uStack_158;
      uVar45 = (undefined4)uVar24;
      uVar46 = (undefined4)(uVar24 >> 0x20);
      dStack_1a8 = 1.0 - dVar16;
      lVar33 = 0;
      uStack_150 = 0;
      auStack_168._8_4_ = DAT_149931e80._8_4_;
      auStack_168._0_8_ = uVar24;
      auStack_168._12_4_ = DAT_149931e80._12_4_;
      dStack_1b0 = dVar16;
      do {
        plVar25 = *(longlong **)(param_1[1] + lVar33 * 8);
        lVar32 = plVar25[0x57];
        if (lVar32 == 0) {
          iVar23 = _finite((double)plVar25[0x1b]);
          if (((iVar23 == 0) || (iVar23 = _finite((double)plVar25[0x1c]), iVar23 == 0)) ||
             (iVar23 = _finite((double)plVar25[0x1d]), iVar23 == 0)) {
            plVar25[0x1d] = DAT_14c8464f0;
            lVar32 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            plVar25[0x1b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            plVar25[0x1c] = lVar32;
          }
          iVar23 = _finite((double)plVar25[0x1e]);
          if (((iVar23 == 0) || (iVar23 = _finite((double)plVar25[0x1f]), iVar23 == 0)) ||
             (iVar23 = _finite((double)plVar25[0x20]), iVar23 == 0)) {
            plVar25[0x20] = DAT_14c8464f0;
            uVar22 = DAT_14c8464e8._4_4_;
            uVar38 = (undefined4)DAT_14c8464e8;
            uVar36 = DAT_14c8464e0._4_4_;
            *(undefined4 *)(plVar25 + 0x1e) = (undefined4)DAT_14c8464e0;
            *(undefined4 *)((longlong)plVar25 + 0xf4) = uVar36;
            *(undefined4 *)(plVar25 + 0x1f) = uVar38;
            *(undefined4 *)((longlong)plVar25 + 0xfc) = uVar22;
          }
          FUN_1449ee33c(plVar25,CONCAT44(uVar39,uVar37));
          if (((*(byte *)(plVar25 + 4) & 1) != 0) ||
             (((ABS((double)plVar25[0xc]) <= 9.99999993922529e-09 &&
               (ABS((double)plVar25[0xd]) <= 9.99999993922529e-09)) &&
              ((ABS((double)plVar25[0xe]) <= 9.99999993922529e-09 &&
               (((ABS((double)plVar25[9]) <= 9.99999993922529e-09 &&
                 (ABS((double)plVar25[10]) <= 9.99999993922529e-09)) &&
                (ABS((double)plVar25[0xb]) <= 9.99999993922529e-09)))))))) {
            plVar25[0x1d] = DAT_14c8464f0;
            lVar32 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            plVar25[0x1b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            plVar25[0x1c] = lVar32;
            plVar25[0x20] = DAT_14c8464f0;
            lVar32 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            plVar25[0x1e] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            plVar25[0x1f] = lVar32;
          }
        }
        else {
          plVar25[0x4c] = 0;
          if (0 < *(int *)(lVar32 + 0x8b8)) {
            dVar16 = 0.0;
            lVar28 = 0;
            do {
              lVar30 = (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4);
              dVar41 = *(double *)(lVar32 + 0x6a8 + lVar30 * 8);
              lVar30 = lVar30 * 0x30;
              dVar16 = dVar16 + (*(double *)(lVar32 + 0xbe0 + lVar30) *
                                 *(double *)(lVar32 + 0x4d8 + lVar30) +
                                 *(double *)(lVar32 + 0xbd0 + lVar30) *
                                 *(double *)(lVar32 + 0x4c8 + lVar30) +
                                 *(double *)(lVar32 + 0xbd8 + lVar30) *
                                 *(double *)(lVar32 + 0x4d0 + lVar30) +
                                *(double *)(lVar32 + 0xbf8 + lVar30) *
                                *(double *)(lVar32 + 0x4c0 + lVar30) +
                                *(double *)(lVar32 + 0xbe8 + lVar30) *
                                *(double *)(lVar32 + 0x4b0 + lVar30) +
                                *(double *)(lVar32 + 0xbf0 + lVar30) *
                                *(double *)(lVar32 + 0x4b8 + lVar30)) * dVar41 * dVar41 * 0.5;
              plVar25[0x4c] = (longlong)dVar16;
              lVar28 = lVar28 + 1;
            } while (lVar28 < *(int *)(lVar32 + 0x8b8));
          }
          bVar29 = *(byte *)(plVar25 + 0x4e);
          if (bVar29 == 1) {
            (**(code **)(*plVar25 + 0x18))(plVar25,CONCAT44(uVar39,uVar37));
            if ((double)plVar25[0x4d] < (double)plVar25[0x4f]) {
              bVar29 = *(byte *)(plVar25 + 0x4e);
              goto LAB_1405d393d;
            }
            *(undefined1 *)(plVar25 + 0x4e) = 0;
            *(byte *)((longlong)plVar25 + 0x284) = *(byte *)((longlong)plVar25 + 0x284) | 1;
          }
          else {
LAB_1405d393d:
            if ((bVar29 & 1) != 0) {
              *(undefined8 *)(lVar32 + 0xfc8) = 0;
              *(undefined8 *)(lVar32 + 0xfd0) = 0;
              *(undefined8 *)(lVar32 + 0xfb8) = 0;
              *(undefined8 *)(lVar32 + 0xfc0) = 0;
              *(undefined8 *)(lVar32 + 0xfa8) = 0;
              *(undefined8 *)(lVar32 + 0xfb0) = 0;
              if (plVar25[0x57] != 0) {
                apcStack_138[0]._0_2_ = (ushort)(byte)apcStack_138[0];
                uStack_139 = 0;
                uStack_1c8 = 1;
                FUN_1448f23ac(plVar25[0x57],&uStack_13a,apcStack_138,1);
              }
              goto LAB_1405d4152;
            }
          }
          if (*(int *)(lVar32 + 0x8b8) < 1) {
            dVar16 = 0.0;
          }
          else {
            dVar16 = 0.0;
            lVar28 = 0;
            do {
              lVar30 = (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4);
              dVar41 = *(double *)(lVar32 + 0x6a8 + lVar30 * 8);
              uVar36 = SUB84(dVar41,0);
              uVar38 = (int)((ulonglong)dVar41 >> 0x20);
              if ((double)CONCAT44(uVar44,uVar43) <= dVar41) {
                uVar36 = uVar43;
                uVar38 = uVar44;
              }
              if ((double)CONCAT44(uVar38,uVar36) <= (double)CONCAT44(uVar46,uVar45)) {
                uVar36 = uVar45;
                uVar38 = uVar46;
              }
              *(ulonglong *)(lVar32 + 0x6a8 + lVar30 * 8) = CONCAT44(uVar38,uVar36);
              lVar30 = (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4);
              *(double *)(lVar32 + 0x6d8 + lVar30 * 8) =
                   *(double *)(lVar32 + 0x6a8 + lVar30 * 8) * (double)CONCAT44(uVar39,uVar37) +
                   *(double *)(lVar32 + 0x6d8 + lVar30 * 8);
              iVar23 = _finite(*(double *)
                                (lVar32 + 0x6d8 +
                                (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4) * 8));
              if (iVar23 == 0) {
                *(undefined8 *)
                 (lVar32 + 0x6d8 + (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4) * 8) = 0;
              }
              iVar23 = _finite(*(double *)
                                (lVar32 + 0x6a8 +
                                (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4) * 8));
              if (iVar23 == 0) {
                *(undefined8 *)
                 (lVar32 + 0x6a8 + (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4) * 8) = 0;
              }
              iVar23 = *(int *)(lVar32 + 0x5d0 + lVar28 * 4);
              lVar30 = (longlong)iVar23;
              iVar14 = *(int *)(lVar32 + 0xf30 + lVar30 * 4);
              if (iVar14 == 1) {
                dVar41 = *(double *)(lVar32 + 0xf58 + (ulonglong)(iVar23 < 3) * 8);
                dVar40 = *(double *)(lVar32 + 0xf00 + lVar30 * 8) + dVar41;
                dVar1 = *(double *)(lVar32 + 0x6d8 + lVar30 * 8);
                if ((dVar40 < dVar1) ||
                   (dVar40 = *(double *)(lVar32 + 0xed0 + lVar30 * 8) - dVar41, dVar1 < dVar40)) {
                  *(double *)(lVar32 + 0x6d8 + lVar30 * 8) = dVar40;
                }
              }
              else if (iVar14 == 0) {
                dVar41 = *(double *)(lVar32 + 0x6d8 + lVar30 * 8);
                if (dVar41 <= 3.1415927410125732) {
                  if (-3.1415927410125732 <= dVar41) goto LAB_1405d3caa;
                  dVar41 = dVar41 + 6.2831854820251465;
                }
                else {
                  dVar41 = dVar41 + -6.2831854820251465;
                }
                *(double *)(lVar32 + 0x6d8 + lVar30 * 8) = dVar41;
              }
LAB_1405d3caa:
              lVar30 = (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4);
              dVar41 = ABS(*(double *)(lVar32 + 0x6a8 + lVar30 * 8));
              dVar16 = dVar16 + dVar41;
              dVar41 = *(double *)(lVar32 + 0xfa8 + lVar30 * 8) * dVar42 + dVar41 * (1.0 - dVar42);
              if (1.0 <= dVar41) {
                dVar41 = 1.0;
              }
              *(double *)(lVar32 + 0xfa8 + lVar30 * 8) = dVar41;
              lVar28 = lVar28 + 1;
            } while (lVar28 < *(int *)(lVar32 + 0x8b8));
          }
          if (0 < *(int *)(lVar32 + 0xff0)) {
            lVar28 = *(longlong *)(lVar32 + 0x18);
            dStack_170 = *(double *)(lVar32 + 0x8d0);
            dVar41 = *(double *)(lVar32 + 0x8e8);
            dVar1 = *(double *)(lVar28 + 0x378);
            dVar40 = *(double *)(lVar28 + 0x380);
            dStack_178 = *(double *)(lVar32 + 0x900);
            dVar2 = *(double *)(lVar28 + 0x388);
            dVar19 = dStack_178 * dVar2 + dStack_170 * dVar1 + dVar41 * dVar40;
            dStack_188 = *(double *)(lVar32 + 0x8c8);
            dStack_180 = *(double *)(lVar32 + 0x8e0);
            dVar3 = *(double *)(lVar32 + 0x8f8);
            dVar21 = dVar3 * dVar2 + dStack_188 * dVar1 + dVar40 * dStack_180;
            dStack_198 = *(double *)(lVar32 + 0x8c0);
            dStack_190 = *(double *)(lVar32 + 0x8d8);
            dVar4 = *(double *)(lVar32 + 0x8f0);
            dStack_1a0 = dVar2 * dVar4 + dVar1 * dStack_198 + dVar40 * dStack_190;
            dVar1 = *(double *)(lVar32 + 0x958);
            dVar40 = *(double *)(lVar32 + 0x950);
            dVar2 = (double)plVar25[0x71];
            dVar5 = (double)plVar25[0x70];
            dVar6 = *(double *)(lVar32 + 0x960);
            dVar7 = *(double *)(lVar28 + 0x398);
            dVar8 = *(double *)(lVar28 + 0x390);
            dVar9 = *(double *)(lVar28 + 0x3a0);
            uVar39 = (undefined4)((ulonglong)dStack_1b8 >> 0x20);
            uVar35 = SUB84(dStack_1b0,0);
            uVar47 = (undefined4)((ulonglong)dStack_1b0 >> 0x20);
            dVar10 = (double)plVar25[0x74];
            dVar11 = (double)plVar25[0x73];
            dVar12 = (double)plVar25[0x72];
            dVar13 = (double)plVar25[0x6f];
            lVar28 = 0;
            do {
              uVar37 = SUB84(dStack_1b8,0);
              lVar30 = (longlong)*(int *)(lVar32 + 0xfd8 + lVar28 * 4);
              lVar31 = lVar30 * 0x30;
              dVar17 = ABS(*(double *)(lVar32 + 0x4c0 + lVar31) *
                           (dVar10 - (dStack_178 * dVar9 + dStack_170 * dVar8 + dVar41 * dVar7 +
                                     (dVar1 * dStack_1a0 - dVar40 * dVar21))) +
                           *(double *)(lVar32 + 0x4b0 + lVar31) *
                           (dVar12 - (dVar4 * dVar9 + dStack_198 * dVar8 + dStack_190 * dVar7 +
                                     (dVar21 * dVar6 - dVar1 * dVar19))) +
                           *(double *)(lVar32 + 0x4b8 + lVar31) *
                           (dVar11 - (dVar3 * dVar9 + dStack_188 * dVar8 + dStack_180 * dVar7 +
                                     (dVar19 * dVar40 - dVar6 * dStack_1a0))) +
                           *(double *)(lVar32 + 0x4d8 + lVar31) * (dVar2 - dVar19) +
                           *(double *)(lVar32 + 0x4c8 + lVar31) * (dVar13 - dStack_1a0) +
                           *(double *)(lVar32 + 0x4d0 + lVar31) * (dVar5 - dVar21));
              dVar18 = *(double *)(lVar32 + 0xfa8 + lVar30 * 8) * dVar42 + (1.0 - dVar42) * dVar17;
              if (1.0 <= dVar18) {
                dVar18 = 1.0;
              }
              *(double *)(lVar32 + 0xfa8 + lVar30 * 8) = dVar18;
              if ((*(double *)(lVar32 + 0x778) <= 9.99999993922529e-09) ||
                 (*(double *)(lVar32 + 0x768) <= 9.99999993922529e-09)) {
                *(double *)(lVar32 + 0x6d8 + lVar30 * 8) =
                     *(double *)(lVar32 + 0x6a8 + lVar30 * 8) * dStack_1b8 +
                     *(double *)(lVar32 + 0x6d8 + lVar30 * 8);
              }
              else {
                dVar18 = *(double *)(lVar32 + 0x6d8 + lVar30 * 8);
                dVar20 = dStack_1b8 / *(double *)(lVar32 + 0x778);
                if (1.0 <= dVar20) {
                  dVar20 = 1.0;
                }
                if (dVar20 <= 0.0) {
                  dVar20 = 0.0;
                }
                *(double *)(lVar32 + 0x6d8 + lVar30 * 8) =
                     dVar20 * (*(double *)(lVar32 + 0x738 + lVar30 * 8) - dVar18) + dVar18;
              }
              dVar16 = dVar16 + dVar17;
              lVar28 = lVar28 + 1;
            } while (lVar28 < *(int *)(lVar32 + 0xff0));
          }
          if (plVar25[0x57] != 0) {
            apcStack_138[0]._0_2_ = (ushort)(byte)apcStack_138[0];
            uStack_139 = 0;
            uStack_1c8 = 1;
            FUN_1448f23ac(plVar25[0x57],&uStack_13a,apcStack_138,1);
          }
          dVar16 = (double)plVar25[0x4d] * (double)CONCAT44(uVar47,uVar35) + dVar16 * dStack_1a8;
          plVar25[0x4d] = (longlong)dVar16;
          if ((dVar16 < (double)plVar25[0x4f]) &&
             (*(char *)(*(longlong *)(lVar32 + 0x18) + 0x270) == '\x01')) {
            *(undefined1 *)(plVar25 + 0x4e) = 1;
          }
          dVar41 = (double)plVar25[0x4f] * 10.0;
          if (dVar41 <= dVar16) {
            dVar16 = dVar41;
          }
          plVar25[0x4d] = (longlong)dVar16;
          uVar43 = (undefined4)uStack_158;
          uVar44 = uStack_158._4_4_;
          uVar45 = auStack_168._0_4_;
          uVar46 = auStack_168._4_4_;
        }
LAB_1405d4152:
        lVar33 = lVar33 + 1;
        uVar24 = (ulonglong)(int)param_1[2];
      } while (lVar33 < (longlong)uVar24);
      if (0 < (int)param_1[2]) {
        lVar33 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1[1] + lVar33 * 8) + 0x2b8) != 0) {
            FUN_1471017d6();
            uVar24 = (ulonglong)*(uint *)(param_1 + 2);
          }
          lVar33 = lVar33 + 1;
        } while (lVar33 < (int)uVar24);
      }
    }
    goto LAB_1405d437b;
  }
  if ((int)param_1[2] < 1) {
    if ((DAT_00000020 & 1) == 0) {
      lVar33 = 0;
      goto LAB_1405d41c5;
    }
    bVar29 = 1;
LAB_1405d42fd:
    lVar33 = 0;
  }
  else {
    lVar33 = *(longlong *)param_1[1];
    if ((*(byte *)(lVar33 + 0x20) & 1) == 0) {
LAB_1405d41c5:
      if (ABS(*(double *)(lVar33 + 0x60)) <= 9.99999993922529e-09) {
        if ((((9.99999993922529e-09 < ABS(*(double *)(lVar33 + 0x68))) ||
             (9.99999993922529e-09 < ABS(*(double *)(lVar33 + 0x70)))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar33 + 0x48)))) ||
           (9.99999993922529e-09 < ABS(*(double *)(lVar33 + 0x50)))) {
          bVar15 = false;
        }
        else {
          bVar15 = ABS(*(double *)(lVar33 + 0x58)) <= 9.99999993922529e-09;
        }
      }
      else {
        bVar15 = false;
      }
      if (0 < (int)param_1[2]) goto LAB_1405d41f3;
      lVar33 = 0;
      bVar29 = 1;
    }
    else {
      bVar15 = true;
LAB_1405d41f3:
      bVar29 = 1;
      lVar33 = 0;
      do {
        lVar32 = *(longlong *)(param_1[1] + lVar33 * 8);
        FUN_1449ee33c(lVar32,param_2);
        bVar29 = bVar29 & *(byte *)(lVar32 + 0x270);
        lVar33 = lVar33 + 1;
        iVar23 = (int)param_1[2];
      } while (lVar33 < iVar23);
      if (iVar23 < 1) goto LAB_1405d42fd;
      lVar33 = *(longlong *)param_1[1];
      if (!bVar15) {
        uVar37 = 0xffffffff;
        uVar39 = 0xffefffff;
        lVar32 = 0;
        do {
          lVar28 = ((longlong *)param_1[1])[lVar32];
          if ((longlong)*(int *)(lVar28 + 0x2a8) == 0) {
            dVar42 = (double)CONCAT44(uVar39,uVar37);
          }
          else {
            lVar30 = *(longlong *)(lVar28 + 0x2a0);
            lVar31 = (longlong)*(int *)(lVar28 + 0x2a8) * 0x520 + lVar30;
            do {
              if ((longlong)*(int *)(lVar30 + 0x4f8) < 1) {
                dVar42 = (double)CONCAT44(uVar39,uVar37);
              }
              else {
                lVar34 = 0;
                lVar26 = lVar33;
                do {
                  dVar42 = *(double *)(lVar30 + 0xa8 + lVar34);
                  lVar33 = lVar28;
                  if (dVar42 <= 0.0 || dVar42 <= (double)CONCAT44(uVar39,uVar37)) {
                    dVar42 = (double)CONCAT44(uVar39,uVar37);
                    lVar33 = lVar26;
                  }
                  lVar34 = lVar34 + 0x138;
                  uVar37 = SUB84(dVar42,0);
                  uVar39 = (undefined4)((ulonglong)dVar42 >> 0x20);
                  lVar26 = lVar33;
                } while ((longlong)*(int *)(lVar30 + 0x4f8) * 0x138 - lVar34 != 0);
              }
              lVar30 = lVar30 + 0x520;
              uVar37 = SUB84(dVar42,0);
              uVar39 = (undefined4)((ulonglong)dVar42 >> 0x20);
            } while (lVar30 != lVar31);
          }
          lVar32 = lVar32 + 1;
          uVar37 = SUB84(dVar42,0);
          uVar39 = (undefined4)((ulonglong)dVar42 >> 0x20);
        } while (lVar32 != iVar23);
      }
    }
  }
  pppuStack_128 = (undefined ***)0x0;
  ppuStack_118 = &PTR_LAB_14a1e16d0;
  apcStack_138[0] = FUN_142b5f08e;
  bStack_110 = bVar29;
  FUN_144aa8fe6(lVar33,apcStack_138);
  if (apcStack_138[0] != (code *)0x0) {
    pppuVar27 = pppuStack_128;
    if (pppuStack_128 == (undefined ***)0x0) {
      pppuVar27 = &ppuStack_118;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if (0 < (int)param_1[2]) {
    lVar33 = 0;
    do {
      if (bVar29 == 0) {
        *(undefined1 *)(*(longlong *)(param_1[1] + lVar33 * 8) + 0x270) = 0;
      }
      FUN_1449e8d62();
      lVar33 = lVar33 + 1;
    } while (lVar33 < (int)param_1[2]);
  }
LAB_1405d437b:
  if ((uStack_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d36a4 FUN_1405d36a4 body=3668 status=ok
// SIG undefined FUN_1405d36a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405d36a4(longlong *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined ***pppuVar27;
  longlong lVar28;
  byte bVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_13a;
  undefined1 local_139;
  code *local_138 [2];
  undefined ***local_128;
  undefined **local_118;
  byte local_110;
  ulonglong local_f0;
  
  uVar37 = SUB84(param_2,0);
  uVar39 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1b8 = param_2;
  if ((char)param_1[0x2a] != '\0') {
    if (DAT_14c9abbe8 == 0) {
      plVar25 = (longlong *)FUN_145a10a92();
      lVar33 = plVar25[0x22];
      if (lVar33 == 0) {
        (**(code **)(*plVar25 + 1000))();
        lVar33 = plVar25[0x22];
      }
      uVar37 = SUB84(local_1b8,0);
      uVar39 = (undefined4)((ulonglong)local_1b8 >> 0x20);
      DAT_14c9abbe8 = lVar33;
    }
    dVar42 = pow(*(double *)(DAT_14c9abbe8 + 0x78),(double)CONCAT44(uVar39,uVar37));
    if (DAT_14c9abbe8 == 0) {
      plVar25 = (longlong *)FUN_145a10a92();
      lVar33 = plVar25[0x22];
      if (lVar33 == 0) {
        (**(code **)(*plVar25 + 1000))();
        lVar33 = plVar25[0x22];
      }
      uVar37 = SUB84(local_1b8,0);
      uVar39 = (undefined4)((ulonglong)local_1b8 >> 0x20);
      DAT_14c9abbe8 = lVar33;
    }
    dVar16 = pow(*(double *)(DAT_14c9abbe8 + 0x68),(double)CONCAT44(uVar39,uVar37));
    uVar35 = SUB84(dVar16,0);
    if (0 < (int)param_1[2]) {
      uVar47 = (undefined4)((ulonglong)dVar16 >> 0x20);
      local_158 = *(ulonglong *)(*param_1 + 0xa0);
      uVar43 = (undefined4)local_158;
      uVar44 = (undefined4)(local_158 >> 0x20);
      uVar24 = DAT_149931e80 ^ local_158;
      uVar45 = (undefined4)uVar24;
      uVar46 = (undefined4)(uVar24 >> 0x20);
      local_1a8 = 1.0 - dVar16;
      lVar33 = 0;
      uStack_150 = 0;
      local_168._8_4_ = DAT_149931e80._8_4_;
      local_168._0_8_ = uVar24;
      local_168._12_4_ = DAT_149931e80._12_4_;
      local_1b0 = dVar16;
      do {
        plVar25 = *(longlong **)(param_1[1] + lVar33 * 8);
        lVar32 = plVar25[0x57];
        if (lVar32 == 0) {
          iVar23 = _finite((double)plVar25[0x1b]);
          if (((iVar23 == 0) || (iVar23 = _finite((double)plVar25[0x1c]), iVar23 == 0)) ||
             (iVar23 = _finite((double)plVar25[0x1d]), iVar23 == 0)) {
            plVar25[0x1d] = DAT_14c8464f0;
            lVar32 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            plVar25[0x1b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            plVar25[0x1c] = lVar32;
          }
          iVar23 = _finite((double)plVar25[0x1e]);
          if (((iVar23 == 0) || (iVar23 = _finite((double)plVar25[0x1f]), iVar23 == 0)) ||
             (iVar23 = _finite((double)plVar25[0x20]), iVar23 == 0)) {
            plVar25[0x20] = DAT_14c8464f0;
            uVar22 = DAT_14c8464e8._4_4_;
            uVar38 = (undefined4)DAT_14c8464e8;
            uVar36 = DAT_14c8464e0._4_4_;
            *(undefined4 *)(plVar25 + 0x1e) = (undefined4)DAT_14c8464e0;
            *(undefined4 *)((longlong)plVar25 + 0xf4) = uVar36;
            *(undefined4 *)(plVar25 + 0x1f) = uVar38;
            *(undefined4 *)((longlong)plVar25 + 0xfc) = uVar22;
          }
          FUN_1449ee33c(plVar25,CONCAT44(uVar39,uVar37));
          if (((*(byte *)(plVar25 + 4) & 1) != 0) ||
             (((ABS((double)plVar25[0xc]) <= 9.99999993922529e-09 &&
               (ABS((double)plVar25[0xd]) <= 9.99999993922529e-09)) &&
              ((ABS((double)plVar25[0xe]) <= 9.99999993922529e-09 &&
               (((ABS((double)plVar25[9]) <= 9.99999993922529e-09 &&
                 (ABS((double)plVar25[10]) <= 9.99999993922529e-09)) &&
                (ABS((double)plVar25[0xb]) <= 9.99999993922529e-09)))))))) {
            plVar25[0x1d] = DAT_14c8464f0;
            lVar32 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            plVar25[0x1b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            plVar25[0x1c] = lVar32;
            plVar25[0x20] = DAT_14c8464f0;
            lVar32 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            plVar25[0x1e] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            plVar25[0x1f] = lVar32;
          }
        }
        else {
          plVar25[0x4c] = 0;
          if (0 < *(int *)(lVar32 + 0x8b8)) {
            dVar16 = 0.0;
            lVar28 = 0;
            do {
              lVar30 = (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4);
              dVar41 = *(double *)(lVar32 + 0x6a8 + lVar30 * 8);
              lVar30 = lVar30 * 0x30;
              dVar16 = dVar16 + (*(double *)(lVar32 + 0xbe0 + lVar30) *
                                 *(double *)(lVar32 + 0x4d8 + lVar30) +
                                 *(double *)(lVar32 + 0xbd0 + lVar30) *
                                 *(double *)(lVar32 + 0x4c8 + lVar30) +
                                 *(double *)(lVar32 + 0xbd8 + lVar30) *
                                 *(double *)(lVar32 + 0x4d0 + lVar30) +
                                *(double *)(lVar32 + 0xbf8 + lVar30) *
                                *(double *)(lVar32 + 0x4c0 + lVar30) +
                                *(double *)(lVar32 + 0xbe8 + lVar30) *
                                *(double *)(lVar32 + 0x4b0 + lVar30) +
                                *(double *)(lVar32 + 0xbf0 + lVar30) *
                                *(double *)(lVar32 + 0x4b8 + lVar30)) * dVar41 * dVar41 * 0.5;
              plVar25[0x4c] = (longlong)dVar16;
              lVar28 = lVar28 + 1;
            } while (lVar28 < *(int *)(lVar32 + 0x8b8));
          }
          bVar29 = *(byte *)(plVar25 + 0x4e);
          if (bVar29 == 1) {
            (**(code **)(*plVar25 + 0x18))(plVar25,CONCAT44(uVar39,uVar37));
            if ((double)plVar25[0x4d] < (double)plVar25[0x4f]) {
              bVar29 = *(byte *)(plVar25 + 0x4e);
              goto LAB_1405d393d;
            }
            *(undefined1 *)(plVar25 + 0x4e) = 0;
            *(byte *)((longlong)plVar25 + 0x284) = *(byte *)((longlong)plVar25 + 0x284) | 1;
          }
          else {
LAB_1405d393d:
            if ((bVar29 & 1) != 0) {
              *(undefined8 *)(lVar32 + 0xfc8) = 0;
              *(undefined8 *)(lVar32 + 0xfd0) = 0;
              *(undefined8 *)(lVar32 + 0xfb8) = 0;
              *(undefined8 *)(lVar32 + 0xfc0) = 0;
              *(undefined8 *)(lVar32 + 0xfa8) = 0;
              *(undefined8 *)(lVar32 + 0xfb0) = 0;
              if (plVar25[0x57] != 0) {
                local_138[0]._0_2_ = (ushort)(byte)local_138[0];
                local_139 = 0;
                local_1c8 = 1;
                FUN_1448f23ac(plVar25[0x57],&local_13a,local_138,1);
              }
              goto LAB_1405d4152;
            }
          }
          if (*(int *)(lVar32 + 0x8b8) < 1) {
            dVar16 = 0.0;
          }
          else {
            dVar16 = 0.0;
            lVar28 = 0;
            do {
              lVar30 = (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4);
              dVar41 = *(double *)(lVar32 + 0x6a8 + lVar30 * 8);
              uVar36 = SUB84(dVar41,0);
              uVar38 = (int)((ulonglong)dVar41 >> 0x20);
              if ((double)CONCAT44(uVar44,uVar43) <= dVar41) {
                uVar36 = uVar43;
                uVar38 = uVar44;
              }
              if ((double)CONCAT44(uVar38,uVar36) <= (double)CONCAT44(uVar46,uVar45)) {
                uVar36 = uVar45;
                uVar38 = uVar46;
              }
              *(ulonglong *)(lVar32 + 0x6a8 + lVar30 * 8) = CONCAT44(uVar38,uVar36);
              lVar30 = (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4);
              *(double *)(lVar32 + 0x6d8 + lVar30 * 8) =
                   *(double *)(lVar32 + 0x6a8 + lVar30 * 8) * (double)CONCAT44(uVar39,uVar37) +
                   *(double *)(lVar32 + 0x6d8 + lVar30 * 8);
              iVar23 = _finite(*(double *)
                                (lVar32 + 0x6d8 +
                                (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4) * 8));
              if (iVar23 == 0) {
                *(undefined8 *)
                 (lVar32 + 0x6d8 + (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4) * 8) = 0;
              }
              iVar23 = _finite(*(double *)
                                (lVar32 + 0x6a8 +
                                (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4) * 8));
              if (iVar23 == 0) {
                *(undefined8 *)
                 (lVar32 + 0x6a8 + (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4) * 8) = 0;
              }
              iVar23 = *(int *)(lVar32 + 0x5d0 + lVar28 * 4);
              lVar30 = (longlong)iVar23;
              iVar14 = *(int *)(lVar32 + 0xf30 + lVar30 * 4);
              if (iVar14 == 1) {
                dVar41 = *(double *)(lVar32 + 0xf58 + (ulonglong)(iVar23 < 3) * 8);
                dVar40 = *(double *)(lVar32 + 0xf00 + lVar30 * 8) + dVar41;
                dVar1 = *(double *)(lVar32 + 0x6d8 + lVar30 * 8);
                if ((dVar40 < dVar1) ||
                   (dVar40 = *(double *)(lVar32 + 0xed0 + lVar30 * 8) - dVar41, dVar1 < dVar40)) {
                  *(double *)(lVar32 + 0x6d8 + lVar30 * 8) = dVar40;
                }
              }
              else if (iVar14 == 0) {
                dVar41 = *(double *)(lVar32 + 0x6d8 + lVar30 * 8);
                if (dVar41 <= 3.1415927410125732) {
                  if (-3.1415927410125732 <= dVar41) goto LAB_1405d3caa;
                  dVar41 = dVar41 + 6.2831854820251465;
                }
                else {
                  dVar41 = dVar41 + -6.2831854820251465;
                }
                *(double *)(lVar32 + 0x6d8 + lVar30 * 8) = dVar41;
              }
LAB_1405d3caa:
              lVar30 = (longlong)*(int *)(lVar32 + 0x5d0 + lVar28 * 4);
              dVar41 = ABS(*(double *)(lVar32 + 0x6a8 + lVar30 * 8));
              dVar16 = dVar16 + dVar41;
              dVar41 = *(double *)(lVar32 + 0xfa8 + lVar30 * 8) * dVar42 + dVar41 * (1.0 - dVar42);
              if (1.0 <= dVar41) {
                dVar41 = 1.0;
              }
              *(double *)(lVar32 + 0xfa8 + lVar30 * 8) = dVar41;
              lVar28 = lVar28 + 1;
            } while (lVar28 < *(int *)(lVar32 + 0x8b8));
          }
          if (0 < *(int *)(lVar32 + 0xff0)) {
            lVar28 = *(longlong *)(lVar32 + 0x18);
            local_170 = *(double *)(lVar32 + 0x8d0);
            dVar41 = *(double *)(lVar32 + 0x8e8);
            dVar1 = *(double *)(lVar28 + 0x378);
            dVar40 = *(double *)(lVar28 + 0x380);
            local_178 = *(double *)(lVar32 + 0x900);
            dVar2 = *(double *)(lVar28 + 0x388);
            dVar19 = local_178 * dVar2 + local_170 * dVar1 + dVar41 * dVar40;
            local_188 = *(double *)(lVar32 + 0x8c8);
            local_180 = *(double *)(lVar32 + 0x8e0);
            dVar3 = *(double *)(lVar32 + 0x8f8);
            dVar21 = dVar3 * dVar2 + local_188 * dVar1 + dVar40 * local_180;
            local_198 = *(double *)(lVar32 + 0x8c0);
            local_190 = *(double *)(lVar32 + 0x8d8);
            dVar4 = *(double *)(lVar32 + 0x8f0);
            local_1a0 = dVar2 * dVar4 + dVar1 * local_198 + dVar40 * local_190;
            dVar1 = *(double *)(lVar32 + 0x958);
            dVar40 = *(double *)(lVar32 + 0x950);
            dVar2 = (double)plVar25[0x71];
            dVar5 = (double)plVar25[0x70];
            dVar6 = *(double *)(lVar32 + 0x960);
            dVar7 = *(double *)(lVar28 + 0x398);
            dVar8 = *(double *)(lVar28 + 0x390);
            dVar9 = *(double *)(lVar28 + 0x3a0);
            uVar39 = (undefined4)((ulonglong)local_1b8 >> 0x20);
            uVar35 = SUB84(local_1b0,0);
            uVar47 = (undefined4)((ulonglong)local_1b0 >> 0x20);
            dVar10 = (double)plVar25[0x74];
            dVar11 = (double)plVar25[0x73];
            dVar12 = (double)plVar25[0x72];
            dVar13 = (double)plVar25[0x6f];
            lVar28 = 0;
            do {
              uVar37 = SUB84(local_1b8,0);
              lVar30 = (longlong)*(int *)(lVar32 + 0xfd8 + lVar28 * 4);
              lVar31 = lVar30 * 0x30;
              dVar17 = ABS(*(double *)(lVar32 + 0x4c0 + lVar31) *
                           (dVar10 - (local_178 * dVar9 + local_170 * dVar8 + dVar41 * dVar7 +
                                     (dVar1 * local_1a0 - dVar40 * dVar21))) +
                           *(double *)(lVar32 + 0x4b0 + lVar31) *
                           (dVar12 - (dVar4 * dVar9 + local_198 * dVar8 + local_190 * dVar7 +
                                     (dVar21 * dVar6 - dVar1 * dVar19))) +
                           *(double *)(lVar32 + 0x4b8 + lVar31) *
                           (dVar11 - (dVar3 * dVar9 + local_188 * dVar8 + local_180 * dVar7 +
                                     (dVar19 * dVar40 - dVar6 * local_1a0))) +
                           *(double *)(lVar32 + 0x4d8 + lVar31) * (dVar2 - dVar19) +
                           *(double *)(lVar32 + 0x4c8 + lVar31) * (dVar13 - local_1a0) +
                           *(double *)(lVar32 + 0x4d0 + lVar31) * (dVar5 - dVar21));
              dVar18 = *(double *)(lVar32 + 0xfa8 + lVar30 * 8) * dVar42 + (1.0 - dVar42) * dVar17;
              if (1.0 <= dVar18) {
                dVar18 = 1.0;
              }
              *(double *)(lVar32 + 0xfa8 + lVar30 * 8) = dVar18;
              if ((*(double *)(lVar32 + 0x778) <= 9.99999993922529e-09) ||
                 (*(double *)(lVar32 + 0x768) <= 9.99999993922529e-09)) {
                *(double *)(lVar32 + 0x6d8 + lVar30 * 8) =
                     *(double *)(lVar32 + 0x6a8 + lVar30 * 8) * local_1b8 +
                     *(double *)(lVar32 + 0x6d8 + lVar30 * 8);
              }
              else {
                dVar18 = *(double *)(lVar32 + 0x6d8 + lVar30 * 8);
                dVar20 = local_1b8 / *(double *)(lVar32 + 0x778);
                if (1.0 <= dVar20) {
                  dVar20 = 1.0;
                }
                if (dVar20 <= 0.0) {
                  dVar20 = 0.0;
                }
                *(double *)(lVar32 + 0x6d8 + lVar30 * 8) =
                     dVar20 * (*(double *)(lVar32 + 0x738 + lVar30 * 8) - dVar18) + dVar18;
              }
              dVar16 = dVar16 + dVar17;
              lVar28 = lVar28 + 1;
            } while (lVar28 < *(int *)(lVar32 + 0xff0));
          }
          if (plVar25[0x57] != 0) {
            local_138[0]._0_2_ = (ushort)(byte)local_138[0];
            local_139 = 0;
            local_1c8 = 1;
            FUN_1448f23ac(plVar25[0x57],&local_13a,local_138,1);
          }
          dVar16 = (double)plVar25[0x4d] * (double)CONCAT44(uVar47,uVar35) + dVar16 * local_1a8;
          plVar25[0x4d] = (longlong)dVar16;
          if ((dVar16 < (double)plVar25[0x4f]) &&
             (*(char *)(*(longlong *)(lVar32 + 0x18) + 0x270) == '\x01')) {
            *(undefined1 *)(plVar25 + 0x4e) = 1;
          }
          dVar41 = (double)plVar25[0x4f] * 10.0;
          if (dVar41 <= dVar16) {
            dVar16 = dVar41;
          }
          plVar25[0x4d] = (longlong)dVar16;
          uVar43 = (undefined4)local_158;
          uVar44 = local_158._4_4_;
          uVar45 = local_168._0_4_;
          uVar46 = local_168._4_4_;
        }
LAB_1405d4152:
        lVar33 = lVar33 + 1;
        uVar24 = (ulonglong)(int)param_1[2];
      } while (lVar33 < (longlong)uVar24);
      if (0 < (int)param_1[2]) {
        lVar33 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1[1] + lVar33 * 8) + 0x2b8) != 0) {
            FUN_1471017d6();
            uVar24 = (ulonglong)*(uint *)(param_1 + 2);
          }
          lVar33 = lVar33 + 1;
        } while (lVar33 < (int)uVar24);
      }
    }
    goto LAB_1405d437b;
  }
  if ((int)param_1[2] < 1) {
    if ((DAT_00000020 & 1) == 0) {
      lVar33 = 0;
      goto LAB_1405d41c5;
    }
    bVar29 = 1;
LAB_1405d42fd:
    lVar33 = 0;
  }
  else {
    lVar33 = *(longlong *)param_1[1];
    if ((*(byte *)(lVar33 + 0x20) & 1) == 0) {
LAB_1405d41c5:
      if (ABS(*(double *)(lVar33 + 0x60)) <= 9.99999993922529e-09) {
        if ((((9.99999993922529e-09 < ABS(*(double *)(lVar33 + 0x68))) ||
             (9.99999993922529e-09 < ABS(*(double *)(lVar33 + 0x70)))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar33 + 0x48)))) ||
           (9.99999993922529e-09 < ABS(*(double *)(lVar33 + 0x50)))) {
          bVar15 = false;
        }
        else {
          bVar15 = ABS(*(double *)(lVar33 + 0x58)) <= 9.99999993922529e-09;
        }
      }
      else {
        bVar15 = false;
      }
      if (0 < (int)param_1[2]) goto LAB_1405d41f3;
      lVar33 = 0;
      bVar29 = 1;
    }
    else {
      bVar15 = true;
LAB_1405d41f3:
      bVar29 = 1;
      lVar33 = 0;
      do {
        lVar32 = *(longlong *)(param_1[1] + lVar33 * 8);
        FUN_1449ee33c(lVar32,param_2);
        bVar29 = bVar29 & *(byte *)(lVar32 + 0x270);
        lVar33 = lVar33 + 1;
        iVar23 = (int)param_1[2];
      } while (lVar33 < iVar23);
      if (iVar23 < 1) goto LAB_1405d42fd;
      lVar33 = *(longlong *)param_1[1];
      if (!bVar15) {
        uVar37 = 0xffffffff;
        uVar39 = 0xffefffff;
        lVar32 = 0;
        do {
          lVar28 = ((longlong *)param_1[1])[lVar32];
          if ((longlong)*(int *)(lVar28 + 0x2a8) == 0) {
            dVar42 = (double)CONCAT44(uVar39,uVar37);
          }
          else {
            lVar30 = *(longlong *)(lVar28 + 0x2a0);
            lVar31 = (longlong)*(int *)(lVar28 + 0x2a8) * 0x520 + lVar30;
            do {
              if ((longlong)*(int *)(lVar30 + 0x4f8) < 1) {
                dVar42 = (double)CONCAT44(uVar39,uVar37);
              }
              else {
                lVar34 = 0;
                lVar26 = lVar33;
                do {
                  dVar42 = *(double *)(lVar30 + 0xa8 + lVar34);
                  lVar33 = lVar28;
                  if (dVar42 <= 0.0 || dVar42 <= (double)CONCAT44(uVar39,uVar37)) {
                    dVar42 = (double)CONCAT44(uVar39,uVar37);
                    lVar33 = lVar26;
                  }
                  lVar34 = lVar34 + 0x138;
                  uVar37 = SUB84(dVar42,0);
                  uVar39 = (undefined4)((ulonglong)dVar42 >> 0x20);
                  lVar26 = lVar33;
                } while ((longlong)*(int *)(lVar30 + 0x4f8) * 0x138 - lVar34 != 0);
              }
              lVar30 = lVar30 + 0x520;
              uVar37 = SUB84(dVar42,0);
              uVar39 = (undefined4)((ulonglong)dVar42 >> 0x20);
            } while (lVar30 != lVar31);
          }
          lVar32 = lVar32 + 1;
          uVar37 = SUB84(dVar42,0);
          uVar39 = (undefined4)((ulonglong)dVar42 >> 0x20);
        } while (lVar32 != iVar23);
      }
    }
  }
  local_128 = (undefined ***)0x0;
  local_118 = &PTR_LAB_14a1e16d0;
  local_138[0] = FUN_142b5f08e;
  local_110 = bVar29;
  FUN_144aa8fe6(lVar33,local_138);
  if (local_138[0] != (code *)0x0) {
    pppuVar27 = local_128;
    if (local_128 == (undefined ***)0x0) {
      pppuVar27 = &local_118;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  if (0 < (int)param_1[2]) {
    lVar33 = 0;
    do {
      if (bVar29 == 0) {
        *(undefined1 *)(*(longlong *)(param_1[1] + lVar33 * 8) + 0x270) = 0;
      }
      FUN_1449e8d62();
      lVar33 = lVar33 + 1;
    } while (lVar33 < (int)param_1[2]);
  }
LAB_1405d437b:
  if ((local_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d44fa FUN_1405d44fa body=2347 status=ok
// SIG undefined FUN_1405d44fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405d44fa(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  double *pdVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  longlong local_1c0;
  double local_1b8 [12];
  double local_158 [8];
  undefined1 local_118 [16];
  undefined1 local_108 [20];
  undefined2 local_f4;
  undefined2 local_f2;
  ulonglong local_f0;
  double dVar6;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (*(int *)(param_1 + 0x10) < 1) {
    lVar14 = 0;
  }
  else {
    lVar14 = **(longlong **)(param_1 + 8);
  }
  uVar3 = *(undefined8 *)(lVar14 + 600);
  FUN_1449d7c9e(param_1,local_158);
  dVar15 = (local_158[5] - local_158[2]) * 0.5;
  dVar21 = (local_158[4] - local_158[1]) * 0.5;
  dVar18 = (local_158[3] - local_158[0]) * 0.5;
  *(double *)(lVar14 + 600) = SQRT(dVar15 * dVar15 + dVar18 * dVar18 + dVar21 * dVar21);
  lVar11 = lVar14;
  uVar7 = FUN_1449ee33c();
  *(undefined8 *)(lVar14 + 600) = uVar3;
  dVar19 = *(double *)(lVar14 + 400);
  dVar31 = *(double *)(lVar14 + 0x198);
  dVar34 = *(double *)(lVar14 + 0x1a0);
  dVar35 = *(double *)(lVar14 + 0x1a8);
  dVar18 = *(double *)(lVar14 + 0x148);
  dVar15 = *(double *)(lVar14 + 0x148);
  dVar21 = *(double *)(lVar14 + 0x138);
  dVar4 = *(double *)(lVar14 + 0x138);
  dVar5 = *(double *)(lVar14 + 0x130);
  dVar6 = *(double *)(lVar14 + 0x130);
  dVar16 = *(double *)(lVar14 + 0x140);
  dVar17 = *(double *)(lVar14 + 0x140);
  dVar28 = -(dVar31 * dVar16 * -1.0 + dVar34 * dVar21 + dVar5 * dVar35 * 1.0 + dVar18 * dVar19);
  dVar30 = -(dVar19 * dVar17 * 1.0 + dVar35 * dVar4 + dVar6 * dVar34 * -1.0 + dVar15 * dVar31);
  dVar16 = (dVar35 * dVar16 * 1.0 + ((dVar5 * dVar31 * 1.0 + dVar18 * dVar34) - dVar21 * dVar19)) *
           -1.0;
  dVar17 = (dVar34 * dVar17 * -1.0 + ((dVar6 * dVar19 * -1.0 + dVar15 * dVar35) - dVar4 * dVar31)) *
           1.0;
  dVar15 = *(double *)(lVar14 + 0xf0);
  dVar18 = *(double *)(lVar14 + 0xf8);
  dVar21 = *(double *)(lVar14 + 0x100);
  dVar31 = dVar30 * dVar21 - dVar18 * dVar16;
  dVar31 = dVar31 + dVar31;
  dVar38 = dVar28 * dVar18 - dVar15 * dVar30;
  dVar38 = dVar38 + dVar38;
  dVar34 = dVar16 * dVar15 - dVar21 * dVar28;
  dVar34 = dVar34 + dVar34;
  dVar4 = *(double *)(lVar14 + 0xd8);
  dVar5 = *(double *)(lVar14 + 0xe0);
  dVar6 = *(double *)(lVar14 + 0xe8);
  dVar37 = dVar30 * dVar6 - dVar5 * dVar16;
  dVar37 = dVar37 + dVar37;
  dVar19 = dVar28 * dVar5 - dVar4 * dVar30;
  dVar19 = dVar19 + dVar19;
  dVar35 = dVar16 * dVar4 - dVar6 * dVar28;
  dVar35 = dVar35 + dVar35;
  *(double *)(lVar14 + 0x378) = (dVar30 * dVar19 - dVar35 * dVar16) + dVar17 * dVar37 + dVar4;
  *(double *)(lVar14 + 0x380) = (dVar16 * dVar37 - dVar19 * dVar28) + dVar17 * dVar35 + dVar5;
  *(double *)(lVar14 + 0x388) = (dVar28 * dVar35 - dVar37 * dVar30) + dVar17 * dVar19 + dVar6;
  *(double *)(lVar14 + 0x390) = (dVar30 * dVar38 - dVar34 * dVar16) + dVar17 * dVar31 + dVar15;
  *(double *)(lVar14 + 0x398) = (dVar16 * dVar31 - dVar38 * dVar28) + dVar17 * dVar34 + dVar18;
  *(double *)(lVar14 + 0x3a0) = (dVar28 * dVar34 - dVar31 * dVar30) + dVar17 * dVar38 + dVar21;
  auVar33 = _DAT_149934d80;
  lVar10 = *(longlong *)(lVar14 + 0x2b8);
  if (lVar10 != 0) {
    lVar1 = lVar10 + 0x6a8;
    uVar2 = lVar10 + 0x4b0;
    local_158[0] = 0.0;
    local_158[1] = 0.0;
    local_158[2] = 0.0;
    local_158[3] = 1.0;
    auVar32 = ZEXT816(0x3ff0000000000000);
    local_158[4] = 0.0;
    local_158[5] = 0.0;
    local_158[6] = 0.0;
    local_158[7] = 0.0;
    local_118 = _DAT_149934d80;
    dVar15 = *(double *)(lVar10 + 0xa0) * *(double *)(lVar10 + 0xa0) +
             *(double *)(lVar10 + 0x90) * *(double *)(lVar10 + 0x90);
    dVar18 = *(double *)(lVar10 + 0xa8) * *(double *)(lVar10 + 0xa8) +
             *(double *)(lVar10 + 0x98) * *(double *)(lVar10 + 0x98);
    auVar20._8_8_ =
         -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar15 + dVar18)));
    auVar20._0_8_ =
         -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar15 + dVar18)));
    iVar8 = movmskpd(uVar7,auVar20);
    local_108._0_16_ = auVar32;
    if (iVar8 == 0) {
      auVar20 = minpd(*(undefined1 (*) [16])(lVar14 + 0x1d0),*(undefined1 (*) [16])(lVar10 + 0xd0));
      auVar22 = minpd(*(undefined1 (*) [16])(lVar14 + 0x1e0),*(undefined1 (*) [16])(lVar10 + 0xe0));
      auVar36._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
      auVar36._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
      iVar8 = movmskpd(0,auVar36);
      auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      uVar9 = movmskpd((int)lVar11,auVar23);
      if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c8460b0) &&
           (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1)) {
          DAT_14c8460a0 = 0x322bcc77322bcc77;
          DAT_14c8460a8 = 0x322bcc77322bcc77;
          _Init_thread_footer(&DAT_14c8460b0);
        }
        auVar20 = *(undefined1 (*) [16])(lVar10 + 0xd0);
        auVar36 = divpd(auVar33,auVar20);
        auVar33 = divpd(auVar32,*(undefined1 (*) [16])(lVar10 + 0xe0));
        dVar28 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar20._0_8_)) &
                         auVar36._0_8_);
        dVar30 = (double)(-(ulonglong)
                           ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(auVar20._8_8_))
                         & auVar36._8_8_);
        dVar25 = (double)(-(ulonglong)
                           ((double)(float)DAT_14c8460a8 <
                           ABS(SUB168(*(undefined1 (*) [16])(lVar10 + 0xe0),0))) & auVar33._0_8_);
        dVar5 = *(double *)(lVar14 + 0x1b0) - *(double *)(lVar10 + 0xb0);
        dVar6 = *(double *)(lVar14 + 0x1b8) - *(double *)(lVar10 + 0xb8);
        dVar29 = *(double *)(lVar14 + 0x1c0) - *(double *)(lVar10 + 0xc0);
        dVar26 = -*(double *)(lVar10 + 0x90);
        dVar27 = -*(double *)(lVar10 + 0x98);
        dVar37 = *(double *)(lVar10 + 0xa0) * -1.0;
        dVar38 = *(double *)(lVar10 + 0xa8) * 1.0;
        dVar16 = dVar6 * dVar26 - dVar5 * dVar27;
        dVar24 = dVar29 * dVar27 - dVar6 * dVar37;
        dVar39 = dVar5 * dVar37 - dVar29 * dVar26;
        dVar17 = dVar38 * 0.0 - dVar38 * 0.0;
        dVar24 = dVar24 + dVar24;
        dVar39 = dVar39 + dVar39;
        dVar16 = dVar16 + dVar16;
        dVar17 = dVar17 + dVar17;
        dVar19 = *(double *)(lVar14 + 400);
        dVar31 = *(double *)(lVar14 + 0x198);
        dVar34 = *(double *)(lVar14 + 0x1a0);
        dVar35 = *(double *)(lVar14 + 0x1a8);
        dVar18 = *(double *)(lVar10 + 0x90);
        dVar15 = *(double *)(lVar10 + 0x90);
        dVar21 = *(double *)(lVar10 + 0x98);
        dVar4 = *(double *)(lVar10 + 0x98);
        local_118._8_8_ = *(double *)(lVar14 + 0x1d8) * dVar30;
        local_118._0_8_ = *(double *)(lVar14 + 0x1d0) * dVar28;
        local_108._8_8_ = *(double *)(lVar14 + 0x1e8) * 0.0;
        local_108._0_8_ = *(double *)(lVar14 + 0x1e0) * dVar25;
        local_158[4] = ((dVar16 * dVar27 - dVar37 * dVar39) + dVar38 * dVar24 + dVar5) * dVar28;
        local_158[5] = ((dVar24 * dVar37 - dVar16 * dVar26) + dVar38 * dVar39 + dVar6) * dVar30;
        local_158[6] = ((dVar39 * dVar26 - dVar27 * dVar24) + dVar38 * dVar16 + dVar29) * dVar25;
        local_158[7] = ((dVar17 * dVar38 - dVar17 * dVar38) + dVar38 * dVar17 + 0.0) * 0.0;
        local_158[0] = dVar31 * dVar37 * -1.0 +
                       ((dVar19 * dVar38 - dVar18 * dVar35 * 1.0) - dVar34 * dVar21);
        local_158[1] = dVar19 * dVar37 * 1.0 +
                       ((dVar31 * dVar38 - dVar15 * dVar34 * -1.0) - dVar35 * dVar4);
        local_158[2] = dVar35 * dVar37 * 1.0 +
                       dVar21 * dVar19 + (dVar38 * dVar34 - dVar18 * dVar31 * 1.0);
        local_158[3] = dVar34 * dVar37 * -1.0 +
                       dVar4 * dVar31 + (dVar38 * dVar35 - dVar15 * dVar19 * -1.0);
      }
      else {
        FUN_1402db8fa(local_158,lVar14 + 400,lVar10 + 0x90);
      }
      pdVar12 = local_158;
      pdVar13 = local_1b8;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar13 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        pdVar13 = pdVar13 + 1;
      }
      lVar10 = *(longlong *)(lVar14 + 0x2b8);
    }
    else {
      pdVar12 = (double *)&DAT_14c846480;
      pdVar13 = local_1b8;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pdVar13 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        pdVar13 = pdVar13 + 1;
      }
    }
    local_1c8 = uVar2;
    local_1c0 = lVar1;
    FUN_144a4a1cb(lVar10 + 0x8c0,*(longlong *)(lVar10 + 0x18) + 0x378,lVar14 + 0x378,local_1b8);
  }
  if (1 < *(int *)(param_1 + 0x10)) {
    lVar10 = 1;
    do {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar10 * 8);
      *(undefined1 *)(lVar11 + 0x270) = *(undefined1 *)(lVar14 + 0x270);
      if (*(longlong *)(lVar11 + 0x2b8) != 0) {
        local_f2 = 0x101;
        local_f4 = 0x101;
        local_1c8 = local_1c8 & 0xffffffffffffff00;
        FUN_1448f23ac(*(longlong *)(lVar11 + 0x2b8),&local_f4,&local_f2,0);
      }
      FUN_14025ae36(lVar11);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x10));
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405d4e26 FUN_1405d4e26 body=312 status=ok
// SIG undefined FUN_1405d4e26(void)

void FUN_1405d4e26(longlong param_1,double param_2)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = DAT_14c9abbe8;
  if (DAT_14c9abbe8 == 0) {
    plVar2 = (longlong *)FUN_145a10a92();
    lVar1 = plVar2[0x22];
    if (plVar2[0x22] == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar1 = plVar2[0x22];
    }
  }
  DAT_14c9abbe8 = lVar1;
  dVar3 = *(double *)(param_1 + 600);
  dVar5 = (*(double *)(param_1 + 0xd8) * DAT_14c846518 * dVar3 -
          dVar3 * DAT_14c846510 * *(double *)(param_1 + 0xe0)) + *(double *)(param_1 + 0x100);
  dVar4 = (dVar3 * DAT_14c846510 * *(double *)(param_1 + 0xe8) -
          DAT_14c846520 * dVar3 * *(double *)(param_1 + 0xd8)) + *(double *)(param_1 + 0xf8);
  dVar6 = (*(double *)(param_1 + 0xe0) * DAT_14c846520 * dVar3 -
          DAT_14c846518 * dVar3 * *(double *)(param_1 + 0xe8)) + *(double *)(param_1 + 0xf0);
  dVar3 = pow(*(double *)(DAT_14c9abbe8 + 0x68),param_2);
  *(double *)(param_1 + 0x268) =
       dVar3 * *(double *)(param_1 + 0x268) +
       (1.0 - dVar3) * SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4);
  return;
}



// FUNCTION 1405d4f5e FUN_1405d4f5e body=578 status=ok
// SIG undefined FUN_1405d4f5e(void)

void FUN_1405d4f5e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = *(char *)(param_1 + 0x91);
  iVar11 = (int)cVar3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca766d0) {
    FUN_144b3d300(&DAT_14ca766d0);
    if (DAT_14ca766d0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar9 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MaxAnisotropy",1);
      if (plVar9 == (longlong *)0x0) {
        DAT_14ca766c8 = 0;
      }
      else {
        DAT_14ca766c8 = (**(code **)(*plVar9 + 0x68))(plVar9);
      }
      _Init_thread_footer(&DAT_14ca766d0);
    }
  }
  lVar4 = DAT_14ca766c8;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
    uVar10 = 0;
  }
  else if (iVar5 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar10 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar10 = 1;
  }
  if (cVar3 < '\x01') {
    iVar11 = *(int *)(lVar4 + uVar10 * 4);
  }
  iVar5 = 0x10;
  if (iVar11 < 0x10) {
    iVar5 = iVar11;
  }
  local_34 = 1;
  if (1 < iVar5) {
    local_34 = iVar5;
  }
  local_40 = *(undefined4 *)(param_1 + 100);
  local_44 = *(undefined4 *)(param_1 + 0x60);
  local_3c = 0x7f7fffff00000000;
  local_30 = 0;
  local_2c = 0;
  lVar8 = FUN_1405d51a2();
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != lVar8) {
    *(longlong *)(param_1 + 0x18) = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
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
  local_5c = *(undefined4 *)(param_1 + 100);
  local_60 = *(undefined4 *)(param_1 + 0x60);
  local_58 = 0;
  uStack_54 = 0x40000000;
  uStack_50 = 1;
  uStack_4c = 0;
  local_48 = 0;
  lVar8 = FUN_1405d51a2();
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != lVar8) {
    *(longlong *)(param_1 + 0x20) = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d51a2 FUN_1405d51a2 body=307 status=ok
// SIG undefined FUN_1405d51a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1405d51a2(undefined8 param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_1406e99b6();
  iVar5 = FUN_1406e98e2(&DAT_14ca96798,uVar4,param_1);
  lVar6 = (longlong)iVar5 * 0x30 + _DAT_14ca96798;
  if (lVar6 == 0 || iVar5 == -1) {
    (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_40,param_1);
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
    local_30 = &local_48;
    local_48 = local_40;
    local_38 = param_1;
    FUN_1406e95a4(&DAT_14ca96798,local_24,&local_38,0);
    if (local_40 != 0) {
      LOCK();
      puVar1 = (uint *)(local_40 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_40 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_40 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = local_40;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar10) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar10) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  else {
    local_40 = *(longlong *)(lVar6 + 0x20);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_40;
}



// FUNCTION 1405d52de FUN_1405d52de body=186 status=ok
// SIG undefined FUN_1405d52de(void)

ulonglong FUN_1405d52de(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulonglong unaff_RBP;
  longlong lVar5;
  longlong lVar6;
  
  pbVar3 = (byte *)*param_2;
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 2)) {
    unaff_RBP = 0;
  }
  else {
    lVar6 = (longlong)(int)(*(longlong **)(pbVar3 + 8))[2];
    if (lVar6 == 0) {
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    }
    else {
      lVar5 = **(longlong **)(pbVar3 + 8);
      lVar6 = lVar6 << 4;
      do {
        iVar2 = *(int *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
          FUN_1406419cc((longlong *)(param_1 + 8),iVar2);
        }
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        uVar4 = FUN_1405df3c8();
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
        FUN_1446e7478(lVar5,puVar1,uVar4,1);
        lVar5 = lVar5 + 0x10;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1405d5398 FUN_1405d5398 body=243 status=ok
// SIG undefined FUN_1405d5398(void)

void FUN_1405d5398(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951808) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1)) {
    FUN_145dfc00c(&DAT_14c951778);
    atexit((_func_5014 *)&LAB_142809c19);
    _Init_thread_footer(&DAT_14c951808);
  }
  if (((*(uint *)(param_1 + 8) & 0x410) == 0) && ((longlong)*(int *)(param_1 + 0x50) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    lVar2 = (longlong)*(int *)(param_1 + 0x50) * 0x368;
    do {
      FUN_1481bbde0(lVar3,param_1);
      lVar3 = lVar3 + 0x368;
      lVar2 = lVar2 + -0x368;
    } while (lVar2 != 0);
  }
  FUN_14020fad6(param_1 + 0x60,L"Emitter");
  FUN_1405d548c(param_1);
  return;
}



// FUNCTION 1405d548c FUN_1405d548c body=579 status=ok
// SIG undefined FUN_1405d548c(void)

void FUN_1405d548c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    lVar5 = (longlong)*(int *)(param_1 + 0x50) * 0x368 + lVar4;
    do {
      *(undefined4 *)(lVar4 + 0x2b4) = 0x3f800000;
      *(byte *)(lVar4 + 0x2b0) = *(byte *)(lVar4 + 0x2b0) & 0xfe;
      lVar2 = FUN_14018d992();
      if (DAT_14c951858 == 0) {
        local_50 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_70 = &local_50;
        local_78 = &LAB_1468c5283;
        local_80 = FUN_142809da0;
        local_88 = L"Engine";
        local_90 = 0x400000000;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar6 = *(longlong *)(param_1 + 0x20);
      if (lVar6 != 0) {
        do {
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
             (lVar3 = lVar6,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) {
            lVar3 = 0;
          }
        } while ((lVar3 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x68) != 0)) {
          lVar2 = FUN_1405d5782();
          FUN_1405d56d0(lVar4 + 0x280,lVar2);
          FUN_1405d5728(lVar4 + 0x290,lVar2 + 0x10);
          *(undefined8 *)(lVar4 + 0x2a0) = *(undefined8 *)(lVar2 + 0x20);
          *(undefined4 *)(lVar4 + 0x2a8) = *(undefined4 *)(lVar2 + 0x28);
          *(undefined8 *)(lVar4 + 0x2b0) = *(undefined8 *)(lVar2 + 0x30);
        }
      }
      if ((longlong)*(int *)(lVar4 + 200) != 0) {
        lVar2 = *(longlong *)(lVar4 + 0xc0);
        lVar6 = (longlong)*(int *)(lVar4 + 200) << 6;
        do {
          cVar1 = FUN_1401e6e8e(lVar2);
          if ((cVar1 != '\0') && ((*(byte *)(lVar2 + 0x38) & 1) != 0)) {
            *(uint *)(lVar4 + 0x2b0) =
                 *(uint *)(lVar4 + 0x2b0) & 0xfffffffe | *(uint *)(lVar2 + 0x30) & 1;
            *(undefined4 *)(lVar4 + 0x2b4) = *(undefined4 *)(lVar2 + 0x34);
          }
          lVar2 = lVar2 + 0x40;
          lVar6 = lVar6 + -0x40;
        } while (lVar6 != 0);
      }
      lVar4 = lVar4 + 0x368;
    } while (lVar4 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405d56d0 FUN_1405d56d0 body=88 status=ok
// SIG undefined FUN_1405d56d0(void)

undefined8 * FUN_1405d56d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14818137a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1405d5728 FUN_1405d5728 body=89 status=ok
// SIG undefined FUN_1405d5728(void)

undefined8 * FUN_1405d5728(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481813dc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 1405d5782 FUN_1405d5782 body=203 status=ok
// SIG undefined FUN_1405d5782(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1405d5782(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    lVar3 = (longlong)*(int *)(param_1 + 0x68) * 0x38;
    do {
      cVar1 = FUN_1401e6e8e(puVar2);
      if (cVar1 != '\0') {
        return puVar2;
      }
      puVar2 = puVar2 + 7;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3dfe0) && (FUN_144b3d300(&DAT_14cb3dfe0), DAT_14cb3dfe0 == -1)) {
    DAT_14cb3dfb8 = 0;
    uRam000000014cb3dfc0 = 0;
    DAT_14cb3dfa8 = 0;
    uRam000000014cb3dfb0 = 0;
    _DAT_14cb3dfc8 = 0xffffffff;
    DAT_14cb3dfcc = DAT_14cb3dfcc & 0xfe;
    _DAT_14cb3dfd0 = 0;
    _DAT_14cb3dfdc = 0x3f800000;
    DAT_14cb3dfd8 = DAT_14cb3dfd8 & 0xfe;
    atexit(FUN_143a7b623);
    _Init_thread_footer(&DAT_14cb3dfe0);
  }
  return &DAT_14cb3dfa8;
}



// FUNCTION 1405d584e FUN_1405d584e body=89 status=ok
// SIG undefined FUN_1405d584e(void)

undefined1 FUN_1405d584e(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  char local_20 [12];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1405d58a8(param_1,local_20,param_2);
  if (local_20[0] == '\x01') {
    uVar1 = local_14 != 0;
  }
  else {
    uVar1 = FUN_140321d1a(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d58a8 FUN_1405d58a8 body=181 status=ok
// SIG undefined FUN_1405d58a8(void)

undefined1 * FUN_1405d58a8(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b3fcd30;
  local_30 = param_1;
  local_28 = param_3;
  local_58[0] = FUN_143d3109e;
  if (*(int *)(param_1 + 8) == 0) {
    *param_2 = 1;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined8 *)(param_2 + 4) = DAT_14cb7c580;
  }
  else {
    FUN_140a2653c(param_1,param_2,*(int *)(param_1 + 8) + -1,local_58);
    if (local_58[0] == (code *)0x0) goto LAB_1405d593d;
  }
  pppuVar1 = &local_38;
  if (local_48 != (undefined ***)0x0) {
    pppuVar1 = local_48;
  }
  (*(code *)(*pppuVar1)[2])();
LAB_1405d593d:
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1405d595e FUN_1405d595e body=75 status=ok
// SIG undefined FUN_1405d595e(void)

undefined8 FUN_1405d595e(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  if (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8)) {
    uVar2 = *(uint *)(param_2 + 0x18);
    if ((int)*(uint *)(param_1 + 0x18) < (int)*(uint *)(param_2 + 0x18)) {
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    if (0 < (int)uVar2) {
      lVar4 = 0;
      do {
        uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + lVar4 * 8);
        bVar5 = (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + lVar4 * 8) & uVar1) != 0;
        uVar3 = CONCAT71((int7)(uVar1 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        bVar5 = (ulonglong)uVar2 - 1 != lVar4;
        lVar4 = lVar4 + 1;
      } while (bVar5);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1405d59a9 FUN_1405d59a9 body=231 status=ok
// SIG undefined FUN_1405d59a9(void)

void * FUN_1405d59a9(void *param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [136];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        DVar2 = FUN_140ad26c0();
        DVar3 = GetCurrentThreadId();
        if (DVar2 == DVar3) goto LAB_1405d5a33;
      }
      FUN_1405d5a96(param_1);
      if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
LAB_1405d5a33:
  if (DAT_14c872be0 != DAT_14c758750) {
    DAT_14c758750 = DAT_14c872be0;
    FUN_1405d5a96(local_a0);
    memcpy(&DAT_14c842650,local_a0,0x88);
  }
  memcpy(param_1,&DAT_14c842650,0x88);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1405d5a96 FUN_1405d5a96 body=693 status=ok
// SIG undefined FUN_1405d5a96(void)

ulonglong * FUN_1405d5a96(ulonglong *param_1)

{
  ulonglong uVar1;
  DWORDLONG DVar2;
  char cVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  DWORDLONG DVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  bool bVar13;
  undefined1 auStackY_168 [32];
  int local_13c;
  undefined8 local_138;
  ulonglong uStack_130;
  ulonglong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  _MEMORYSTATUSEX local_e8;
  DWORD local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStackY_168;
  FUN_14016c8d4();
  puVar11 = &DAT_14c75d648;
  puVar12 = param_1;
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xf] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8c2690) && (FUN_144b3d300(&DAT_14c8c2690), DAT_14c8c2690 == -1)) {
    DAT_14c8c2688 = CreateMemoryResourceNotification(LowMemoryResourceNotification);
    _Init_thread_footer(&DAT_14c8c2690);
  }
  local_e8.ullTotalPhys = 0;
  local_e8.ullAvailVirtual = 0;
  local_e8.ullAvailExtendedVirtual = 0;
  local_e8.ullAvailPageFile = 0;
  local_e8.ullTotalVirtual = 0;
  local_e8.ullAvailPhys = 0;
  local_e8.ullTotalPageFile = 0;
  local_e8.dwLength = 0x40;
  local_e8.dwMemoryLoad = 0;
  GlobalMemoryStatusEx(&local_e8);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_f8 = 0;
  pvVar5 = GetCurrentProcess();
  K32GetProcessMemoryInfo(pvVar5,&local_138,0x48);
  DVar2 = local_e8.ullAvailPhys;
  *param_1 = local_e8.ullTotalPhys;
  param_1[9] = local_e8.ullAvailPhys;
  DVar9 = local_e8.ullAvailPageFile;
  if (local_e8.ullAvailVirtual < local_e8.ullAvailPageFile) {
    DVar9 = local_e8.ullAvailVirtual;
  }
  param_1[1] = local_e8.ullTotalPageFile;
  param_1[10] = DVar9;
  param_1[0xb] = local_128;
  param_1[0xc] = uStack_130;
  param_1[0xd] = uStack_100;
  param_1[0xe] = local_f8;
  if ((DAT_14c8c2688 == (HANDLE)0x0) ||
     (BVar4 = QueryMemoryResourceNotification(DAT_14c8c2688,&local_13c), BVar4 == 0)) {
    if (DAT_14c83e6a0 <= 0.0) {
      cVar3 = '\0';
      goto LAB_1405d5bff;
    }
    bVar13 = (float)(DVar2 >> 0x14) < DAT_14c83e6a0;
  }
  else {
    bVar13 = local_13c != 0;
  }
  cVar3 = bVar13 * '\x02' + '\x01';
LAB_1405d5bff:
  *(char *)(param_1 + 0x10) = cVar3;
  if ((DAT_14c8c2678 == '\x01') && (cVar3 = FUN_142796d67(), cVar3 != '\0')) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    lStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    BVar4 = QueryInformationJobObject
                      ((HANDLE)0x0,MaxJobObjectInfoClass|JobObjectBasicAccountingInformation,
                       &local_98,0x50,&local_9c);
    lVar7 = lStack_60;
    if (BVar4 == 0) {
      GetLastError();
    }
    else if (lStack_60 != 0) {
      FUN_14016c8d4();
      param_1[10] = DAT_14c75d650 - lVar7;
    }
  }
  if (0 < (longlong)DAT_14c8c2660) {
    uVar6 = (longlong)DAT_14c8c2660 * 0x40000000;
    uVar1 = param_1[0xd];
    if (uVar6 < uVar1) {
      uVar8 = 0;
      uVar10 = uVar1;
    }
    else {
      uVar8 = uVar6 - uVar1;
      uVar10 = uVar6;
      if (param_1[10] < uVar6 - uVar1) {
        uVar8 = param_1[10];
      }
    }
    param_1[1] = uVar10;
    param_1[10] = uVar8;
    uVar1 = param_1[0xb];
    if (uVar6 < uVar1) {
      uVar8 = 0;
      uVar6 = uVar1;
    }
    else {
      uVar8 = uVar6 - uVar1;
      if (param_1[9] < uVar6 - uVar1) {
        uVar8 = param_1[9];
      }
    }
    *param_1 = uVar6;
    param_1[9] = uVar8;
  }
  if ((local_40 ^ (ulonglong)auStackY_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405d5d4c FUN_1405d5d4c body=119 status=ok
// SIG undefined FUN_1405d5d4c(void)

undefined8 FUN_1405d5d4c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x34))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && ((longlong *)*plVar4 != (longlong *)0x0)))) {
      lVar2 = (**(code **)(*(longlong *)*plVar4 + 0x2b8))();
      if ((lVar2 != 0) && (*(longlong **)(lVar2 + 0xe0) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001405d5db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(**(longlong **)(lVar2 + 0xe0) + 0x28))();
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1405d5dc4 FUN_1405d5dc4 body=431 status=ok
// SIG undefined FUN_1405d5dc4(void)

undefined4 FUN_1405d5dc4(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  undefined1 auStack_a8 [40];
  char local_80 [16];
  longlong *local_70;
  int local_58;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = '\0';
  local_58 = 0;
  FUN_1456bb102(local_80);
  FUN_1447c3578(param_1 + 0x50,local_50,local_80);
  uVar5 = FUN_1405d5f74(local_50);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar11 = local_50;
    if (0x18 < local_38) {
      ppppuVar11 = (undefined8 ****)local_50[0];
    }
    (*pcVar2)(ppppuVar11);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_58 != 0) {
    lVar10 = (longlong)local_58 + -1;
    lVar8 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar4 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar4 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar3 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_58 = 0;
  }
  if ((local_80[0] == '\x03') && (local_70 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d5f74 FUN_1405d5f74 body=161 status=ok
// SIG undefined FUN_1405d5f74(void)

undefined4 FUN_1405d5f74(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 8) == '\x02') {
    uVar2 = *param_1;
  }
  else {
    puVar3 = &local_40;
    FUN_1400b56fe(puVar3,param_1,2);
    uVar2 = 0;
    if (local_20 != 0) {
      uVar2 = local_40;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_28) {
        puVar3 = (undefined4 *)CONCAT44(uStack_3c,local_40);
      }
      (*pcVar1)(puVar3);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(CONCAT44(uStack_3c,local_40));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d6016 FUN_1405d6016 body=493 status=ok
// SIG undefined FUN_1405d6016(void)

bool FUN_1405d6016(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    bVar5 = false;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1405d6117;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       ((((int)plVar4[2] == *(int *)(param_1 + 0x34) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0))
        && (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
      do {
        if (plVar4[5] != 0) {
          lVar2 = *(longlong *)(plVar4[5] + 0x30);
          if (((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x360), lVar2 == 0)) ||
             (plVar4 = *(longlong **)(lVar2 + 0x1f0), plVar4 == (longlong *)0x0))
          goto LAB_1405d61e1;
          if (DAT_14cb5e538 == 0) {
            local_30 = &local_18;
            local_18 = &LAB_1417c5d06;
            local_20 = FUN_14081d0ea;
            local_28 = &LAB_1417ad04a;
            local_38 = &LAB_1486a7af7;
            local_40 = &LAB_1464e1631;
            local_48 = &DAT_149e063b2;
            local_50 = 0;
            local_58 = 0x1000000c;
            local_60 = 8;
            local_68 = 0x420;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
            plVar4 = *(longlong **)(lVar2 + 0x1f0);
            if (plVar4 == (longlong *)0x0) goto LAB_1405d61e1;
          }
          bVar5 = false;
          if ((DAT_14cb5e538 != 0) && (lVar2 = plVar4[2], bVar5 = false, lVar2 != 0)) {
            if ((*(int *)(lVar2 + 0x38) < *(int *)(DAT_14cb5e538 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) !=
                DAT_14cb5e538 + 0x30)) goto LAB_1405d61e1;
            cVar3 = (**(code **)(*plVar4 + 0x498))();
            bVar5 = cVar3 == '\b';
          }
          break;
        }
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2f0))();
        bVar5 = false;
      } while (plVar4 != (longlong *)0x0);
      goto LAB_1405d6117;
    }
  }
LAB_1405d61e1:
  bVar5 = false;
LAB_1405d6117:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 1405d6204 FUN_1405d6204 body=206 status=ok
// SIG undefined FUN_1405d6204(void)

bool FUN_1405d6204(longlong *param_1,longlong *param_2,float param_3)

{
  longlong lVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((int)param_1[5] != *(int *)((longlong)param_1 + 0x54)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    plVar5 = param_1 + 0xb;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0xc];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[0xd] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)(param_1[4] + (longlong)iVar4 * 0x14);
        if (*plVar5 == lVar1) goto LAB_1405d628b;
        iVar4 = *(int *)((longlong)plVar5 + 0xc);
      } while (iVar4 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1405d628b:
  pfVar3 = (float *)(plVar5 + 1);
  if (plVar5 == (longlong *)0x0) {
    pfVar3 = (float *)0x0;
  }
  if (pfVar3 != (float *)0x0) {
    if (0.0 <= param_3) {
      if (1e-08 < ABS(param_3)) {
        *pfVar3 = param_3;
        goto LAB_1405d62be;
      }
    }
    (**(code **)(*param_1 + 0x10))();
  }
LAB_1405d62be:
  return pfVar3 != (float *)0x0;
}



// FUNCTION 1405d62d2 FUN_1405d62d2 body=63 status=ok
// SIG undefined FUN_1405d62d2(void)

void FUN_1405d62d2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405d6312 FUN_1405d6312 body=528 status=ok
// SIG undefined FUN_1405d6312(void)

void FUN_1405d6312(longlong param_1,longlong *param_2,int param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  
  if (param_3 != 0) {
    lVar4 = *param_2;
    plVar6 = (longlong *)param_2[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if ((longlong)*(int *)(param_1 + 0x1d0) == 0) {
      bVar8 = false;
    }
    else {
      lVar7 = 0;
      do {
        bVar8 = **(longlong **)(*(longlong *)(param_1 + 0x1c8) + lVar7) == lVar4;
        if (bVar8) break;
        bVar9 = (longlong)*(int *)(param_1 + 0x1d0) * 0x10 + -0x10 != lVar7;
        lVar7 = lVar7 + 0x10;
      } while (bVar9);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if (!bVar8) {
      plVar6 = (longlong *)FUN_14001cc68(0x38,0x10);
      plVar6[1] = (longlong)&DAT_100000001;
      *plVar6 = (longlong)&PTR_FUN_14b3e5fc0;
      plVar6[2] = 0;
      plVar6[3] = 0;
      plVar6[4] = 0;
      plVar6[5] = 0;
      plVar6[6] = 0;
      *(undefined1 *)(plVar6 + 6) = 1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      *(undefined1 *)(plVar6 + 4) = 0;
      lVar4 = *param_2;
      lVar7 = param_2[1];
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)plVar6[3];
      plVar6[2] = lVar4;
      plVar6[3] = lVar7;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      *(int *)((longlong)plVar6 + 0x24) = param_3;
      *(undefined1 *)(plVar6 + 6) = param_4;
      iVar3 = *(int *)(param_1 + 0x1d0);
      *(uint *)(param_1 + 0x1d0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x1d4) < iVar3 + 1U) {
        FUN_1405d8742((longlong *)(param_1 + 0x1c8),iVar3);
      }
      lVar4 = *(longlong *)(param_1 + 0x1c8);
      *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar6 + 2;
      *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1405d6522 FUN_1405d6522 body=244 status=ok
// SIG undefined FUN_1405d6522(void)

longlong * FUN_1405d6522(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb70758 == (longlong *)0x0) {
    memset(&DAT_14cb70760,0,0x2c8);
    FUN_145f8fdb0(&DAT_14cb70760);
    DAT_14cb70758 = (longlong *)&DAT_14cb70760;
  }
  plVar1 = DAT_14cb70758;
  plVar3 = DAT_14cb70758 + 1;
  if ((char)DAT_14cb70758[2] == '\0') {
LAB_1405d654f:
    if (*plVar3 == 0) goto LAB_1405d65bc;
    cVar2 = FUN_1449e3c20(DAT_14cb70758);
    if (cVar2 == '\0') goto LAB_1405d6565;
  }
  else {
    if ((char)DAT_14cb70758[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_1405d654f;
    }
LAB_1405d65bc:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_1405d6565;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_gbx_activity",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_1405d6565:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d6618 FUN_1405d6618 body=189 status=ok
// SIG undefined FUN_1405d6618(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1405d6618(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb70050) {
    FUN_144b3d300(&DAT_14cb70050);
    if (DAT_14cb70050 == -1) {
      _DAT_14cb70000 = 0;
      _DAT_14cb70008 = 0;
      _DAT_14cb6ffe0 = 0;
      uRam000000014cb6ffe8 = 0;
      _DAT_14cb7000c = 0xffffffff00000080;
      _DAT_14cb70014 = 0;
      DAT_14cb70020 = 0;
      _DAT_14cb70028 = 0;
      DAT_14cb70030 = 0;
      uRam000000014cb70038 = 0;
      _DAT_14cb70040 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb70048);
      atexit(FUN_143c8cf4e);
      _Init_thread_footer(&DAT_14cb70050);
    }
  }
  return &DAT_14cb6ffe0;
}



// FUNCTION 1405d66d6 FUN_1405d66d6 body=116 status=ok
// SIG undefined FUN_1405d66d6(void)

void FUN_1405d66d6(longlong *param_1,int param_2)

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



// FUNCTION 1405d674a FUN_1405d674a body=194 status=ok
// SIG undefined FUN_1405d674a(void)

void FUN_1405d674a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = 0;
    plVar4 = *(longlong **)(lVar3 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x28) = 0;
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
  }
  *param_1 = 0;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    param_1[1] = 0;
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
  param_1[2] = 0;
  plVar4 = (longlong *)param_1[3];
  if (plVar4 != (longlong *)0x0) {
    param_1[3] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001405d6808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1405d680c FUN_1405d680c body=159 status=ok
// SIG undefined FUN_1405d680c(void)

void FUN_1405d680c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1405d6849;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1405d6849;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1405d6849:
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
                    /* WARNING: Could not recover jumptable at 0x0001405d68a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1405d68ac FUN_1405d68ac body=228 status=ok
// SIG undefined FUN_1405d68ac(void)

longlong FUN_1405d68ac(void)

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
  if (DAT_14cb582f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14864efd5;
    local_40 = FUN_1464c0f39;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActivityRequesterInterface",&DAT_14cb582f0,&DAT_14864efd4)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb582f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d6992 FUN_1405d6992 body=3032 status=ok
// SIG undefined FUN_1405d6992(void)

void FUN_1405d6992(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_138 [40];
  ulonglong local_110;
  longlong *local_108;
  int local_fc;
  uint *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  int local_c4;
  undefined2 *local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1405d6618();
  puVar1 = (undefined4 *)*param_2;
  local_108 = param_3;
  local_e8 = param_2;
  if ((longlong *)*param_3 == (longlong *)0x0 || puVar1 == (undefined4 *)0x0) goto LAB_1405d7512;
  lVar2 = *(longlong *)*param_3;
  if (*(int *)(lVar2 + 0x38) == 0) {
    lVar21 = *(longlong *)(puVar1 + 2);
    if (*(longlong *)(lVar21 + 0x228) == *(longlong *)(lVar2 + 0x48)) {
      uVar26 = *(uint *)(lVar21 + 0x238);
      uVar6 = *(uint *)(lVar2 + 0x58);
      uVar10 = uVar6;
      if ((int)uVar26 < (int)uVar6) {
        uVar10 = uVar26;
      }
      if (0 < (int)uVar10) {
        uVar23 = 0;
        do {
          if ((*(ulonglong *)(*(longlong *)(lVar2 + 0x50) + uVar23 * 8) &
              ~*(ulonglong *)(*(longlong *)(lVar21 + 0x230) + uVar23 * 8)) != 0) goto LAB_1405d750c;
          uVar23 = uVar23 + 1;
        } while (uVar10 != uVar23);
      }
      if ((int)uVar26 < (int)uVar6) {
        lVar4 = 0;
        do {
          if (*(longlong *)((longlong)(int)uVar26 * 8 + *(longlong *)(lVar2 + 0x50) + lVar4 * 8) !=
              0) goto LAB_1405d750c;
          lVar4 = lVar4 + 1;
        } while (uVar6 - uVar26 != (int)lVar4);
      }
LAB_1405d6a86:
      uVar27 = FUN_1407df556(lVar21 + 0x220,lVar2 + 0x40);
      *(undefined4 *)*local_e8 = uVar27;
      lVar2 = *(longlong *)(*local_e8 + 8);
      iVar16 = *(int *)(lVar2 + 0x268);
      if (iVar16 == 0) {
        uVar14 = 1;
        uVar23 = 0;
        iVar12 = 0;
        iVar5 = 0;
      }
      else {
        puVar9 = *(uint **)(lVar2 + 0x260);
        if (*(uint **)(lVar2 + 0x260) == (uint *)0x0) {
          puVar9 = (uint *)(lVar2 + 0x250);
        }
        uVar26 = *puVar9;
        if (uVar26 == 0) {
          iVar12 = iVar16 + 0x1e;
          if (-1 < iVar16 + -1) {
            iVar12 = iVar16 + -1;
          }
          uVar23 = 0;
          uVar14 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar14 = uVar23;
          }
          iVar12 = 0;
          do {
            if (uVar14 == uVar23) goto LAB_1405d7512;
            iVar12 = iVar12 + 0x20;
            uVar26 = puVar9[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar26 == 0);
        }
        else {
          uVar23 = 0;
          iVar12 = 0;
        }
        uVar14 = (ulonglong)(-uVar26 & uVar26);
        uVar24 = uVar14 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar16 <= iVar5) {
          iVar5 = iVar16;
        }
      }
      if (iVar5 < iVar16) {
        local_f0 = (longlong *)(param_1 + 0xa8);
        local_d8 = param_1 + 0xe0;
        local_e0 = param_1 + 0x130;
        uVar26 = 0xffffffff;
        local_f8 = (uint *)(lVar2 + 0x250);
LAB_1405d6b85:
        lVar21 = *(longlong *)*local_108;
        lVar25 = (longlong)iVar5 * 0x14;
        lVar4 = *(longlong *)(lVar2 + 0x240);
        local_c0 = &DAT_14a171d50;
        local_b0 = 0;
        uStack_a8 = 0;
        local_fc = iVar12;
        local_b8 = FUN_1405d6618();
        uStack_a8 = uStack_a8 & 0xffffffff00000000;
        FUN_140653d46(&local_c0,lVar4 + lVar25);
        plVar13 = local_f0;
        if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
          lVar4 = *(longlong *)(lVar21 + 0x118);
          uVar10 = (uint)((ulonglong)lVar4 >> 0x10);
          uVar15 = (uint)lVar4 & 0xffff;
          uVar6 = *(uint *)(lVar21 + 0x120);
          uVar10 = uVar6 >> 0xd ^
                   (int)((ulonglong)lVar4 >> 0x20) + uVar15 + ((uint)lVar4 * 0x10000 - uVar6) +
                   (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar15 >> 4);
          uVar15 = uVar10 << 8 ^ (-0x61c88647 - uVar6) - uVar10;
          uVar18 = uVar15 >> 0xd ^ (uVar6 - uVar10) - uVar15;
          uVar22 = uVar18 >> 0xc ^ (uVar10 - uVar15) - uVar18;
          uVar10 = uVar22 << 0x10 ^ (uVar15 - uVar18) - uVar22;
          uVar15 = uVar10 >> 5 ^ (uVar18 - uVar22) - uVar10;
          uVar18 = uVar15 >> 3 ^ (uVar22 - uVar10) - uVar15;
          uVar10 = uVar18 << 10 ^ (uVar10 - uVar15) - uVar18;
          lVar19 = *(longlong *)(param_1 + 0xe8);
          if (*(longlong *)(param_1 + 0xe8) == 0) {
            lVar19 = local_d8;
          }
          iVar16 = *(int *)(lVar19 + (ulonglong)
                                     (*(int *)(param_1 + 0xf0) - 1U &
                                     (uVar10 >> 0xf ^ uVar15 - (uVar18 + uVar10))) * 4);
          if (iVar16 != -1) {
            lVar19 = *local_f0;
            do {
              lVar17 = (longlong)iVar16 * 0x90;
              lVar20 = lVar19 + lVar17;
              if ((*(longlong *)(lVar19 + lVar17) == lVar4) &&
                 (*(uint *)(lVar19 + 8 + lVar17) == uVar6)) {
                if (lVar20 != 0) {
                  plVar13 = (longlong *)(lVar20 + 0x18);
                  goto LAB_1405d6d81;
                }
                break;
              }
              iVar16 = *(int *)(lVar20 + 0x88);
            } while (iVar16 != -1);
          }
        }
        local_d0 = lVar21 + 0x118;
        FUN_145ed014c(local_f0,&local_c4,&local_d0);
        plVar13 = (longlong *)(*plVar13 + (longlong)local_c4 * 0x90 + 0x18);
        FUN_1405d6618();
        (**(code **)(*plVar13 + 0x20))(plVar13);
        fVar28 = 1.0;
        if (plVar13 != (longlong *)0x0) {
LAB_1405d6d81:
          fVar28 = 1.0;
          if (plVar13[1] == local_b8) {
            uVar6 = *(uint *)(plVar13 + 3);
            uVar10 = (uint)uStack_a8;
            if ((int)uVar6 < (int)(uint)uStack_a8) {
              uVar10 = uVar6;
            }
            if (0 < (int)uVar10) {
              uVar24 = 0;
              do {
                if ((*(ulonglong *)(local_b0 + uVar24 * 8) &
                    ~*(ulonglong *)(plVar13[2] + uVar24 * 8)) != 0) goto LAB_1405d6e09;
                uVar24 = uVar24 + 1;
              } while (uVar10 != uVar24);
            }
            if ((int)uVar6 < (int)(uint)uStack_a8) {
              lVar21 = 0;
              do {
                if (*(longlong *)((longlong)(int)uVar6 * 8 + local_b0 + lVar21 * 8) != 0)
                goto LAB_1405d6e09;
                lVar21 = lVar21 + 1;
              } while ((uint)uStack_a8 - uVar6 != (int)lVar21);
            }
            fVar28 = (float)FUN_1407df556(plVar13,&local_c0);
          }
        }
        goto LAB_1405d6e0d;
      }
      goto LAB_1405d7512;
    }
  }
  else if (*(int *)(lVar2 + 0x38) == 1) {
    lVar21 = *(longlong *)(puVar1 + 2);
    cVar3 = FUN_1405d595e(lVar21 + 0x220,lVar2 + 0x40);
    if (cVar3 != '\0') goto LAB_1405d6a86;
  }
LAB_1405d750c:
  *puVar1 = 0;
LAB_1405d7512:
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1405d6e09:
  fVar28 = 1.0;
LAB_1405d6e0d:
  local_c0 = &DAT_14a171d50;
  uVar24 = uStack_a8 >> 0x20;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  local_110 = uVar23;
  if ((int)uVar24 != 0) {
    FUN_140115c12(&local_b0,0);
  }
  local_b8 = 0;
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  lVar21 = *(longlong *)*local_108;
  lVar4 = *(longlong *)(lVar2 + 0x240);
  local_c0 = &DAT_14a171d50;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = FUN_1405d6618();
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  FUN_140653d46(&local_c0,lVar4 + lVar25);
  fVar29 = 1.0;
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    lVar4 = *(longlong *)(lVar21 + 0x118);
    uVar10 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar15 = (uint)lVar4 & 0xffff;
    uVar6 = *(uint *)(lVar21 + 0x120);
    uVar10 = uVar6 >> 0xd ^
             (int)((ulonglong)lVar4 >> 0x20) + uVar15 + ((uint)lVar4 * 0x10000 - uVar6) +
             (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar15 >> 4);
    uVar15 = uVar10 << 8 ^ (-0x61c88647 - uVar6) - uVar10;
    uVar18 = uVar15 >> 0xd ^ (uVar6 - uVar10) - uVar15;
    uVar22 = uVar18 >> 0xc ^ (uVar10 - uVar15) - uVar18;
    uVar10 = uVar22 << 0x10 ^ (uVar15 - uVar18) - uVar22;
    uVar15 = uVar10 >> 5 ^ (uVar18 - uVar22) - uVar10;
    uVar18 = uVar15 >> 3 ^ (uVar22 - uVar10) - uVar15;
    uVar10 = uVar18 << 10 ^ (uVar10 - uVar15) - uVar18;
    lVar21 = *(longlong *)(param_1 + 0x138);
    if (*(longlong *)(param_1 + 0x138) == 0) {
      lVar21 = local_e0;
    }
    iVar16 = *(int *)(lVar21 + (ulonglong)
                               (*(int *)(param_1 + 0x140) - 1U &
                               (uVar10 >> 0xf ^ uVar15 - (uVar18 + uVar10))) * 4);
    fVar29 = 1.0;
    if (iVar16 != -1) {
      lVar21 = *(longlong *)(param_1 + 0xf8);
      do {
        lVar20 = (longlong)iVar16 * 0x90;
        lVar19 = lVar21 + lVar20;
        if ((*(longlong *)(lVar21 + lVar20) == lVar4) && (*(uint *)(lVar21 + 8 + lVar20) == uVar6))
        {
          fVar29 = 1.0;
          if ((lVar19 + 0x18 == 0 || lVar19 == 0) ||
             (fVar29 = 1.0, *(longlong *)(lVar19 + 0x20) != local_b8)) goto LAB_1405d6eca;
          uVar6 = *(uint *)(lVar19 + 0x30);
          uVar10 = (uint)uStack_a8;
          if ((int)uVar6 < (int)(uint)uStack_a8) {
            uVar10 = uVar6;
          }
          if ((int)uVar10 < 1) goto LAB_1405d7485;
          uVar23 = 0;
          goto LAB_1405d746c;
        }
        iVar16 = *(int *)(lVar19 + 0x88);
      } while (iVar16 != -1);
LAB_1405d7205:
      fVar29 = 1.0;
    }
  }
LAB_1405d6eca:
  iVar12 = local_fc;
  local_c0 = &DAT_14a171d50;
  uVar23 = uStack_a8 >> 0x20;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  if ((int)uVar23 != 0) {
    FUN_140115c12(&local_b0,0);
  }
  local_b8 = 0;
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  lVar21 = *(longlong *)*local_108;
  lVar4 = *(longlong *)(lVar2 + 0x240);
  local_c0 = &DAT_14a171d50;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = FUN_1405d6618();
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  FUN_140653d46(&local_c0,lVar25 + lVar4);
  lVar4 = FUN_1405d6522();
  puVar9 = local_f8;
  uVar23 = local_110;
  if (*(int *)(lVar4 + 0x1d0) == *(int *)(lVar4 + 0x1fc)) {
LAB_1405d7234:
    lVar4 = 0;
  }
  else {
    lVar25 = *(longlong *)(lVar21 + 0x118);
    uVar10 = (uint)((ulonglong)lVar25 >> 0x10);
    uVar15 = (uint)lVar25 & 0xffff;
    uVar6 = *(uint *)(lVar21 + 0x120);
    uVar10 = uVar6 >> 0xd ^
             (int)((ulonglong)lVar25 >> 0x20) + uVar15 + ((uint)lVar25 * 0x10000 - uVar6) +
             (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar15 >> 4);
    uVar15 = uVar10 << 8 ^ (-0x61c88647 - uVar6) - uVar10;
    uVar18 = uVar15 >> 0xd ^ (uVar6 - uVar10) - uVar15;
    uVar22 = uVar18 >> 0xc ^ (uVar10 - uVar15) - uVar18;
    uVar10 = uVar22 << 0x10 ^ (uVar15 - uVar18) - uVar22;
    uVar15 = uVar10 >> 5 ^ (uVar18 - uVar22) - uVar10;
    uVar18 = uVar15 >> 3 ^ (uVar22 - uVar10) - uVar15;
    uVar10 = uVar18 << 10 ^ (uVar10 - uVar15) - uVar18;
    lVar21 = lVar4 + 0x200;
    if (*(longlong *)(lVar4 + 0x208) != 0) {
      lVar21 = *(longlong *)(lVar4 + 0x208);
    }
    iVar16 = *(int *)(lVar21 + (ulonglong)
                               (*(int *)(lVar4 + 0x210) - 1U &
                               (uVar10 >> 0xf ^ uVar15 - (uVar18 + uVar10))) * 4);
    if (iVar16 == -1) goto LAB_1405d7234;
    lVar21 = *(longlong *)(lVar4 + 0x1c8);
    do {
      lVar19 = (longlong)iVar16 * 0x1c0;
      lVar4 = lVar21 + lVar19;
      if ((*(longlong *)(lVar21 + lVar19) == lVar25) && (*(uint *)(lVar21 + 8 + lVar19) == uVar6))
      goto LAB_1405d7239;
      iVar16 = *(int *)(lVar4 + 0x1b8);
    } while (iVar16 != -1);
    lVar4 = 0;
  }
LAB_1405d7239:
  lVar21 = lVar4 + 0x18;
  if (lVar4 == 0) {
    lVar21 = 0;
  }
  fVar30 = 1.0;
  if ((lVar21 != 0) && (fVar30 = 1.0, *(longlong *)(lVar21 + 0xe8) == local_b8)) {
    uVar6 = *(uint *)(lVar21 + 0xf8);
    uVar10 = (uint)uStack_a8;
    if ((int)uVar6 < (int)(uint)uStack_a8) {
      uVar10 = uVar6;
    }
    if (0 < (int)uVar10) {
      uVar24 = 0;
      do {
        if ((*(ulonglong *)(local_b0 + uVar24 * 8) &
            ~*(ulonglong *)(*(longlong *)(lVar21 + 0xf0) + uVar24 * 8)) != 0) goto LAB_1405d72ed;
        uVar24 = uVar24 + 1;
      } while (uVar10 != uVar24);
    }
    if ((int)uVar6 < (int)(uint)uStack_a8) {
      lVar4 = 0;
      do {
        if (*(longlong *)((longlong)(int)uVar6 * 8 + local_b0 + lVar4 * 8) != 0) goto LAB_1405d72ed;
        lVar4 = lVar4 + 1;
      } while ((uint)uStack_a8 - uVar6 != (int)lVar4);
    }
    fVar30 = (float)FUN_1407df556(lVar21 + 0xe0,&local_c0);
  }
LAB_1405d72f1:
  local_c0 = &DAT_14a171d50;
  uVar24 = uStack_a8 >> 0x20;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  if ((int)uVar24 != 0) {
    FUN_140115c12(&local_b0,0);
  }
  local_b8 = 0;
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  *(float *)*local_e8 = fVar28 * fVar29 * fVar30 * *(float *)*local_e8;
  uVar26 = uVar26 & ~(uint)uVar14;
  puVar11 = *(uint **)(lVar2 + 0x260);
  if (*(uint **)(lVar2 + 0x260) == (uint *)0x0) {
    puVar11 = puVar9;
  }
  iVar16 = *(int *)(lVar2 + 0x268);
  iVar5 = (int)uVar23;
  lVar21 = (longlong)iVar5;
  uVar6 = puVar11[lVar21] & uVar26;
  if (uVar6 == 0) {
    iVar7 = iVar16 + 0x1e;
    if (-1 < iVar16 + -1) {
      iVar7 = iVar16 + -1;
    }
    iVar7 = iVar7 >> 5;
    iVar8 = iVar7;
    if (iVar7 < iVar5) {
      iVar8 = iVar5;
    }
    if (iVar7 <= iVar5) goto LAB_1405d7512;
    lVar4 = 0;
    while( true ) {
      iVar12 = iVar12 + 0x20;
      uVar6 = puVar11[lVar21 + lVar4 + 1];
      if (uVar6 != 0) break;
      lVar4 = lVar4 + 1;
      if (iVar8 - lVar21 == lVar4) goto LAB_1405d7512;
    }
    uVar23 = (ulonglong)(iVar5 + (int)lVar4 + 1);
    uVar26 = 0xffffffff;
  }
  uVar14 = (ulonglong)(-uVar6 & uVar6);
  uVar24 = uVar14 * 2 + 1;
  lVar21 = 0x3f;
  if (uVar24 != 0) {
    for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
    }
  }
  iVar5 = (iVar12 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
  if (iVar16 <= iVar5) goto LAB_1405d7512;
  goto LAB_1405d6b85;
  while (uVar23 = uVar23 + 1, uVar10 != uVar23) {
LAB_1405d746c:
    if ((*(ulonglong *)(local_b0 + uVar23 * 8) &
        ~*(ulonglong *)(*(longlong *)(lVar19 + 0x28) + uVar23 * 8)) != 0) goto LAB_1405d7205;
  }
LAB_1405d7485:
  if ((int)uVar6 < (int)(uint)uStack_a8) {
    lVar21 = 0;
    do {
      if (*(longlong *)((longlong)(int)uVar6 * 8 + local_b0 + lVar21 * 8) != 0) goto LAB_1405d7205;
      lVar21 = lVar21 + 1;
    } while ((uint)uStack_a8 - uVar6 != (int)lVar21);
  }
  fVar29 = (float)FUN_1407df556(lVar19 + 0x18,&local_c0);
  goto LAB_1405d6eca;
LAB_1405d72ed:
  fVar30 = 1.0;
  goto LAB_1405d72f1;
}



// FUNCTION 1405d756c FUN_1405d756c body=434 status=ok
// SIG undefined FUN_1405d756c(void)

undefined4 FUN_1405d756c(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  undefined1 auStack_a8 [40];
  char local_80 [16];
  longlong *local_70;
  int local_58;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = '\0';
  local_58 = 0;
  FUN_1456bb102(local_80);
  FUN_1447c3578(param_1 + 0x88,local_50,local_80);
  uVar5 = FUN_1405d5f74(local_50);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar11 = local_50;
    if (0x18 < local_38) {
      ppppuVar11 = (undefined8 ****)local_50[0];
    }
    (*pcVar2)(ppppuVar11);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_58 != 0) {
    lVar10 = (longlong)local_58 + -1;
    lVar8 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar4 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar4 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar3 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_58 = 0;
  }
  if ((local_80[0] == '\x03') && (local_70 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d7720 FUN_1405d7720 body=914 status=ok
// SIG undefined FUN_1405d7720(void)

void FUN_1405d7720(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    while( true ) {
      do {
        lVar6 = lVar4;
        lVar4 = 0;
      } while (lVar6 == 0);
      plVar2 = *(longlong **)(lVar6 + 0x70);
      cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar4 = *(longlong *)(param_1 + 0xa0);
    }
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  FUN_1405d7ae6(param_1 + 0x1a8);
  FUN_1405d7ab2(*(undefined8 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x1a0));
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  FUN_1405d7b1d(*(undefined8 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x188));
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x170);
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
  plVar2 = *(longlong **)(param_1 + 0x160);
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
  FUN_1405d7ab2(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_1405d7ab2(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_14029e8dd(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_14029e95e(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)(param_1 + 0xc0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xe0) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar7 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0xd8)) {
      plVar7 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar7);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd8)) {
    FUN_1400020a8(*plVar2);
  }
  plVar2 = *(longlong **)(param_1 + 0xa8);
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
  plVar2 = *(longlong **)(param_1 + 0x88);
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
  *(undefined2 **)(param_1 + 0x50) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_140115c12(param_1 + 0x60,0);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x40);
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
  plVar2 = *(longlong **)(param_1 + 0x30);
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
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001405d7a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1405d7ab2 FUN_1405d7ab2 body=51 status=ok
// SIG undefined FUN_1405d7ab2(void)

void FUN_1405d7ab2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405d7ae6 FUN_1405d7ae6 body=55 status=ok
// SIG undefined FUN_1405d7ae6(void)

void FUN_1405d7ae6(longlong *param_1)

{
  FUN_1405d7b8a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405d7b1d FUN_1405d7b1d body=109 status=ok
// SIG undefined FUN_1405d7b1d(void)

void FUN_1405d7b1d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*(char *)((longlong)plVar1 + 0x14) == '\x01') {
        *(undefined1 *)((longlong)plVar1 + 0x14) = 0;
      }
      plVar1[-2] = (longlong)&DAT_14a171d50;
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_140115c12(plVar1,0);
      }
      plVar1[-1] = 0;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405d7b8a FUN_1405d7b8a body=529 status=ok
// SIG undefined FUN_1405d7b8a(void)

void FUN_1405d7b8a(longlong *param_1,int param_2)

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
  uint uVar11;
  longlong lVar12;
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
    uVar11 = *puVar7;
    if (uVar11 == 0) {
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
        if (uVar8 == uVar13) goto LAB_1405d7bbd;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x30 + (longlong)iVar6 * 0x48) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
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
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1405d7bbd;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1405d7bbd:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1405d7d9c FUN_1405d7d9c body=9 status=ok
// SIG undefined FUN_1405d7d9c(void)

void FUN_1405d7d9c(longlong param_1)

{
  FUN_1405d8850(param_1 + 0x10);
  return;
}



// FUNCTION 1405d7da6 FUN_1405d7da6 body=142 status=ok
// SIG undefined FUN_1405d7da6(void)

void FUN_1405d7da6(longlong param_1)

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



// FUNCTION 1405d7e34 FUN_1405d7e34 body=710 status=ok
// SIG undefined FUN_1405d7e34(void)

ulonglong FUN_1405d7e34(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 *local_98;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  char local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = *(undefined8 *)(param_1 + 0x128);
  local_80 = *(undefined4 *)(param_1 + 0x130);
  FUN_1448075d0(&local_68);
  lVar3 = FUN_14060eaf6(&local_68);
  *(longlong *)(param_1 + 0x60) = lVar3;
  if (local_50 != 0) {
    FUN_1400020a8();
    lVar3 = *(longlong *)(param_1 + 0x60);
  }
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (lVar3 == 0) goto LAB_1405d8083;
  plVar4 = (longlong *)FUN_140ad21c8(param_1);
  if (plVar4 == (longlong *)0x0) goto LAB_1405d8083;
  FUN_140192332(*(longlong *)(param_1 + 0x18) + 0xf0,&local_78,0);
  if (local_78 != 0) {
    lVar3 = *(longlong *)(local_78 + 0x1c8);
    if (lVar3 == 0) {
      puVar5 = &DAT_14c8464e0;
      local_58 = DAT_14c8464f0;
    }
    else {
      puVar5 = (undefined8 *)(lVar3 + 0x260);
      local_58 = *(undefined8 *)(lVar3 + 0x270);
    }
    local_68 = *(undefined4 *)puVar5;
    uStack_64 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_60 = *(undefined4 *)(puVar5 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
  }
  cVar1 = (**(code **)(*plVar4 + 0xb0))
                    (plVar4,param_1 + 0x128,*(longlong *)(param_1 + 0x18) + 0x130);
  if (cVar1 == '\0') goto LAB_1405d8083;
  local_6c = *(char *)(*(longlong *)(param_1 + 0x18) + 0xc);
  if (local_6c == '\x01') {
    local_70 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8);
  }
  if (*(int *)(param_1 + 0x84) == 0) {
LAB_1405d80cd:
    uVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x80);
    uVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x84) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1405d80cd;
      uVar6 = *puVar5;
    }
  }
  local_b8 = FUN_1405d80fc(*(undefined8 *)(param_1 + 0x68),uVar6);
  local_c0 = param_1 + 0x40;
  if (*(int *)(param_1 + 0x84) == 0) {
LAB_1405d80d4:
    uVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x80);
    uVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x84) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1405d80d4;
      uVar6 = *puVar5;
    }
  }
  local_98 = &local_70;
  local_c8 = &local_68;
  local_b0 = param_1 + 0x184;
  local_a8 = param_1 + 0x188;
  local_a0 = param_1 + 0x198;
  uVar2 = FUN_1405d8365(uVar6,*(undefined8 *)(param_1 + 0x60),param_1 + 0xe8,param_1 + 0xf8);
  uVar7 = (ulonglong)uVar2;
  if ((char)uVar2 == '\x02') {
    *(code **)(param_1 + 0x10) = FUN_1405d90b2;
    uVar7 = 0;
  }
LAB_1405d8083:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d80fc FUN_1405d80fc body=616 status=ok
// SIG undefined FUN_1405d80fc(void)

undefined4 FUN_1405d80fc(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = '\0';
  local_88 = 0;
  FUN_1456bb102(local_b0);
  puVar10 = &local_80;
  FUN_1447c3578(param_1 + 0x138,puVar10,local_b0);
  if (local_60 == 3) {
    uVar5 = 3;
    uVar13 = local_80;
  }
  else {
    puVar12 = &local_58;
    FUN_1400b56fe(puVar12,&local_80,3);
    uVar13 = 0;
    if (local_38 != 0) {
      uVar13 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar12 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar12);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar5 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar10 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar10);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_88 != 0) {
    lVar9 = (longlong)local_88 + -1;
    lVar11 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar4 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar4 + lVar11) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar11) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    bVar3 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_88 = 0;
  }
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d8365 FUN_1405d8365 body=793 status=ok
// SIG undefined FUN_1405d8365(void)

undefined8
FUN_1405d8365(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,int *param_5,
             undefined8 param_6,undefined4 param_7,int *param_8,undefined8 param_9,int *param_10,
             int *param_11)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int *local_b0;
  int *local_a8;
  undefined8 local_a0;
  int *local_98;
  longlong local_90;
  undefined4 local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = param_4;
  if (param_2 == 0) {
    uVar4 = 1;
  }
  else {
    if ((char)param_11[1] == '\x01') {
      fVar11 = (float)*param_11;
    }
    else {
      uVar3 = rand();
      fVar11 = ((float)(uVar3 & 0x7fff) / 32767.0) * 2.1474836e+09;
    }
    local_68 = (int)fVar11;
    lVar10 = (longlong)*param_8;
    uVar5 = (ulonglong)*(uint *)(param_2 + 0xa8);
    local_64 = local_68;
    if (*param_8 < (int)*(uint *)(param_2 + 0xa8)) {
      local_78 = param_2 + 0x430;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0xa0) + lVar10 * 0x130);
        cVar2 = *(char *)(*(longlong *)(param_2 + 0xa0) + 8 + lVar10 * 0x130);
        if (cVar2 == '\x01') {
          local_b8 = FUN_140b01269(param_1,plVar1,param_2);
          local_88 = param_7;
          local_a0 = param_6;
          local_a8 = param_5;
          local_b0 = param_10;
          local_98 = &local_68;
          local_90 = param_2;
          cVar2 = FUN_143de98a3(param_1,plVar1,param_3,param_9);
          if (cVar2 == '\0') goto LAB_1405d8626;
          uVar5 = (ulonglong)*(int *)(param_2 + 0xa8);
          if (lVar10 < (longlong)(uVar5 - 1)) {
            *param_8 = (int)lVar10 + 1;
            uVar4 = 0;
            goto LAB_1405d8642;
          }
        }
        else if (cVar2 == '\0') {
          local_70 = 0;
          if (*(int *)(param_2 + 0x400) != *(int *)(param_2 + 0x42c)) {
            lVar9 = *plVar1;
            uVar3 = (uint)((ulonglong)lVar9 >> 0x10);
            uVar7 = (uint)lVar9 & 0xffff;
            lVar6 = *(longlong *)(param_2 + 0x438);
            if (*(longlong *)(param_2 + 0x438) == 0) {
              lVar6 = local_78;
            }
            iVar8 = *(int *)(lVar6 + (ulonglong)
                                     (*(int *)(param_2 + 0x440) - 1U &
                                     (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar7)
                                     + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
            if (iVar8 != -1) {
              do {
                lVar6 = *(longlong *)(param_2 + 0x3f8) + (longlong)iVar8 * 0x20;
                if (*(longlong *)(*(longlong *)(param_2 + 0x3f8) + (longlong)iVar8 * 0x20) == lVar9)
                goto LAB_1405d84de;
                iVar8 = *(int *)(lVar6 + 0x18);
              } while (iVar8 != -1);
            }
            lVar6 = 0;
LAB_1405d84de:
            lVar9 = lVar6 + 8;
            if (lVar6 == 0) {
              lVar9 = 0;
            }
            local_b8 = param_6;
            local_b0 = &local_68;
            cVar2 = FUN_143dec0ec(param_1,lVar9,param_3,&local_70);
            if (cVar2 != '\0') {
              iVar8 = (int)local_80[1];
              *(uint *)(local_80 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)local_80 + 0xc) < iVar8 + 1U) {
                FUN_141883fee(local_80,iVar8);
              }
              lVar9 = *local_80;
              *(longlong *)(lVar9 + (longlong)iVar8 * 0x10) = *plVar1;
              *(undefined8 *)(lVar9 + 8 + (longlong)iVar8 * 0x10) = local_70;
              uVar5 = (ulonglong)*(uint *)(param_2 + 0xa8);
              goto LAB_1405d85d3;
            }
          }
LAB_1405d8626:
          uVar4 = 1;
          goto LAB_1405d8642;
        }
LAB_1405d85d3:
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar5);
    }
    local_98 = param_10;
    local_a0 = param_9;
    local_b0 = (int *)CONCAT44(local_b0._4_4_,param_7);
    local_b8 = param_6;
    local_a8 = &local_68;
    FUN_143ded0ad(param_2,param_1,param_3,param_5);
    uVar4 = 2;
  }
LAB_1405d8642:
  if ((char)param_11[1] == '\x01') {
    *(undefined1 *)(param_11 + 1) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1405d8680 FUN_1405d8680 body=55 status=ok
// SIG undefined FUN_1405d8680(void)

void FUN_1405d8680(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001405d86b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1405d86b8 FUN_1405d86b8 body=137 status=ok
// SIG undefined FUN_1405d86b8(void)

void FUN_1405d86b8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
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



// FUNCTION 1405d8742 FUN_1405d8742 body=269 status=ok
// SIG undefined FUN_1405d8742(void)

void FUN_1405d8742(longlong param_1,int param_2)

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



// FUNCTION 1405d8850 FUN_1405d8850 body=173 status=ok
// SIG undefined FUN_1405d8850(void)

void FUN_1405d8850(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b081e50;
  FUN_14029e8dd(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d7ab2(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
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
  *param_1 = &PTR_FUN_14b082a90;
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x0001405d88f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1405d88fe FUN_1405d88fe body=98 status=ok
// SIG undefined FUN_1405d88fe(void)

undefined8 * FUN_1405d88fe(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
    }
  }
  return param_1;
}



// FUNCTION 1405d8960 FUN_1405d8960 body=132 status=ok
// SIG undefined FUN_1405d8960(void)

longlong * FUN_1405d8960(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)
            SharedPointerInternals::TIntrusiveReferenceController<TFutureState<bool>,1>::vftable;
  FUN_1405d89e4(plVar3 + 2,param_2);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 1405d89e4 FUN_1405d89e4 body=112 status=ok
// SIG undefined FUN_1405d89e4(void)

LPCRITICAL_SECTION FUN_1405d89e4(LPCRITICAL_SECTION param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LONG LVar5;
  LONG LVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ULONG_PTR UVar10;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  uVar1 = *param_2;
  param_1[1].LockCount = (int)uVar1;
  param_1[1].RecursionCount = (int)((ulonglong)uVar1 >> 0x20);
  param_1[1].LockSemaphore = (HANDLE)param_2[2];
  param_2[2] = 0;
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  LVar5 = *(LONG *)(param_2 + 5);
  LVar6 = *(LONG *)((longlong)param_2 + 0x2c);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar8 = *(undefined4 *)(param_2 + 7);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)&param_1[2].OwningThread = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)&param_1[2].OwningThread + 4) = uVar7;
  *(undefined4 *)&param_1[2].LockSemaphore = uVar8;
  *(undefined4 *)((longlong)&param_1[2].LockSemaphore + 4) = uVar9;
  *(undefined4 *)&param_1[2].DebugInfo = uVar3;
  *(undefined4 *)((longlong)&param_1[2].DebugInfo + 4) = uVar4;
  param_1[2].LockCount = LVar5;
  param_1[2].RecursionCount = LVar6;
  lVar2._0_4_ = param_1[1].LockCount;
  lVar2._4_4_ = param_1[1].RecursionCount;
  if (lVar2 != 0) {
    *param_2 = 0;
  }
  UVar10 = FUN_1405d8a54(1);
  param_1[2].SpinCount = UVar10;
  *(undefined1 *)&param_1[3].DebugInfo = 0;
  return param_1;
}



// FUNCTION 1405d8a54 FUN_1405d8a54 body=309 status=ok
// SIG undefined FUN_1405d8a54(void)

undefined8 * FUN_1405d8a54(char param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  if (param_1 == '\0') {
    if (iVar1 < DAT_14c83f280) {
      FUN_144b3d300(&DAT_14c83f280);
      if (DAT_14c83f280 == -1) {
        DAT_14c83f200 = 0;
        DAT_14c83f240 = &DAT_14c83f200;
        atexit(FUN_142750901);
        _Init_thread_footer(&DAT_14c83f280);
      }
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar3 = FUN_144a43434();
  }
  else {
    if (iVar1 < DAT_14c83f340) {
      FUN_144b3d300(&DAT_14c83f340);
      if (DAT_14c83f340 == -1) {
        DAT_14c83f2c0 = 0;
        DAT_14c83f300 = &DAT_14c83f2c0;
        atexit(FUN_1427508c2);
        _Init_thread_footer(&DAT_14c83f340);
      }
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar3 = FUN_1449f340a();
  }
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &PTR_LAB_149e05d70;
  puVar2[2] = uVar3;
  return puVar2;
}



// FUNCTION 1405d8b8a FUN_1405d8b8a body=314 status=ok
// SIG undefined FUN_1405d8b8a(void)

longlong * FUN_1405d8b8a(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar2 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
        DAT_14c83f0f8 = bVar2 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    if (DAT_14c83f0f8 == 0) {
      cVar1 = FUN_146811c5e();
      if (cVar1 == '\0') {
        plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
        *(undefined4 *)(plVar3 + 1) = 0;
        *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
        ppuVar4 = &PTR_FUN_149e41680;
        *plVar3 = (longlong)&PTR_FUN_149e41680;
        *(undefined2 *)(plVar3 + 2) = 0;
        goto LAB_1405d8bf5;
      }
    }
  }
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined4 *)(plVar3 + 1) = 0;
  *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
  ppuVar4 = &PTR_FUN_149e41650;
  *plVar3 = (longlong)&PTR_FUN_149e41650;
  plVar3[2] = 0;
LAB_1405d8bf5:
  cVar1 = (*(code *)*ppuVar4)(plVar3,param_1);
  if (cVar1 == '\0') {
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 1405d8cc4 FUN_1405d8cc4 body=49 status=ok
// SIG undefined FUN_1405d8cc4(void)

bool FUN_1405d8cc4(longlong param_1,byte param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,(uint)param_2,0,(LPCWSTR)0x0);
  *(HANDLE *)(param_1 + 0x10) = pvVar1;
  *(byte *)(param_1 + 0x18) = param_2;
  return pvVar1 != (HANDLE)0x0;
}



// FUNCTION 1405d8cf6 FUN_1405d8cf6 body=955 status=ok
// SIG undefined FUN_1405d8cf6(void)

void FUN_1405d8cf6(longlong param_1,longlong param_2,char param_3,float *param_4)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined1 auStack_f8 [36];
  undefined1 local_d4;
  char local_d0 [16];
  longlong *local_c0;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(int *)(param_1 + 0x74) != 0) && (uVar5 = *(uint *)(param_1 + 0x70), -1 < (int)uVar5)) &&
     ((int)uVar5 < DAT_14c9647dc)) {
    puVar9 = (undefined8 *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if (((puVar9 != (undefined8 *)0x0) && (*(int *)(puVar9 + 2) == *(int *)(param_1 + 0x74))) &&
       ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)) {
      for (plVar7 = (longlong *)*puVar9; plVar7 != (longlong *)0x0;
          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2f0))(plVar7)) {
        if (plVar7[5] != 0) {
          lVar2 = *(longlong *)(plVar7[5] + 0x30);
          if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x360), lVar2 != 0)) {
            if ((param_3 == '\0') || ((*(char *)(param_4 + 1) == '\x01' && (*param_4 <= 0.0)))) {
              *(byte *)(param_2 + 0x94) = *(byte *)(param_2 + 0x94) & 0xfe;
              *(undefined8 *)(param_2 + 0x98) = 0;
              local_d4 = 0;
              FUN_141130d84(param_1,*(undefined4 *)(param_2 + 0x80),0);
            }
            else {
              *(byte *)(param_2 + 0x94) = *(byte *)(param_2 + 0x94) | 1;
              *(float *)(param_2 + 0x98) = (float)*(double *)(lVar2 + 0x6d0);
              if (*(char *)(param_4 + 1) == '\x01') {
                *(float *)(param_2 + 0x9c) = *param_4;
              }
              else {
                lVar6 = FUN_1405d6522();
                local_d0[0] = '\0';
                local_a8 = 0;
                FUN_1456bb102(local_d0,lVar2);
                puVar11 = &local_a0;
                FUN_1447c3578(lVar6 + 0xe8,puVar11,local_d0);
                if (local_80 == 3) {
                  uVar5 = 3;
                  uVar15 = local_a0;
                }
                else {
                  puVar14 = &local_78;
                  FUN_1400b56fe(puVar14,&local_a0,3);
                  uVar15 = 0;
                  if (local_58 != 0) {
                    uVar15 = local_78;
                  }
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    if (0x18 < local_60) {
                      puVar14 = (undefined4 *)CONCAT44(uStack_74,local_78);
                    }
                    (*pcVar3)(puVar14);
                  }
                  if (0x18 < local_60) {
                    FUN_1400020a8(CONCAT44(uStack_74,local_78));
                  }
                  uVar5 = (uint)local_80;
                }
                *(undefined4 *)(param_2 + 0x9c) = uVar15;
                pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
                if (pcVar3 != (code *)0x0) {
                  if (0x18 < local_88) {
                    puVar11 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
                  }
                  (*pcVar3)(puVar11);
                }
                if (0x18 < local_88) {
                  FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
                }
                lVar2 = DAT_14c9a3da0;
                if ((longlong)local_a8 != 0) {
                  lVar13 = (longlong)local_a8 + -1;
                  lVar6 = lVar13 * 0x10;
                  FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar6),
                                *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar6));
                  if (*(longlong *)(lVar2 + lVar6) != 0) {
                    FUN_1400020a8();
                  }
                  lVar2 = DAT_14c9a3da0;
                  iVar12 = (int)lVar13;
                  if (DAT_14c9a3dd4 != 0) {
                    *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
                  }
                  *(undefined4 *)(lVar2 + lVar6) = 0xffffffff;
                  iVar8 = -1;
                  if (0 < DAT_14c9a3dd4) {
                    iVar8 = DAT_14c9a3dd0;
                  }
                  *(int *)(lVar2 + 4 + lVar6) = iVar8;
                  DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                  puVar10 = &DAT_14c9a3db0;
                  if (DAT_14c9a3dc0 != (undefined *)0x0) {
                    puVar10 = DAT_14c9a3dc0;
                  }
                  iVar8 = iVar12 + 0x1f;
                  if (-1 < iVar12) {
                    iVar8 = iVar12;
                  }
                  bVar4 = (byte)lVar13 & 0x1f;
                  DAT_14c9a3dd0 = iVar12;
                  *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) =
                       *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) &
                       (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
                  local_a8 = 0;
                }
                if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
                  LOCK();
                  piVar1 = (int *)((longlong)local_c0 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_c0 + 0x10))();
                  }
                }
              }
            }
          }
          break;
        }
      }
    }
  }
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405d90b2 FUN_1405d90b2 body=2677 status=ok
// SIG undefined FUN_1405d90b2(void)

ulonglong FUN_1405d90b2(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  byte unaff_BPL;
  ulonglong uVar15;
  undefined8 unaff_RDI;
  undefined4 *puVar16;
  int *piVar17;
  longlong lVar18;
  int *piVar19;
  undefined1 *puVar20;
  longlong lVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auStack_148 [40];
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  undefined4 *local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  char local_d0;
  undefined7 uStack_cf;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int local_c0;
  int local_bc;
  longlong local_a8;
  int local_98;
  int local_94;
  undefined1 local_90 [16];
  undefined1 *local_80;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar5 = *(int *)((longlong)param_1 + 0x84);
  puVar16 = (undefined4 *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (iVar5 != 0) {
    uVar6 = *(uint *)(param_1 + 0x10);
    if (((((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) &&
         (plVar9 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
         plVar9 != (longlong *)0x0)) &&
        (((int)plVar9[2] == iVar5 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) &&
       ((longlong *)*plVar9 != (longlong *)0x0)) {
      plVar10 = (longlong *)0x0;
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        plVar10 = (longlong *)*plVar9;
      }
      (**(code **)(*plVar10 + 0x2c0))();
      iVar5 = *(int *)((longlong)param_1 + 0x84);
      if (iVar5 == 0) goto LAB_1405d9a4c;
    }
    uVar6 = *(uint *)(param_1 + 0x10);
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != iVar5 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) {
        lVar14 = 0;
      }
      else {
        lVar14 = *plVar9;
      }
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if (((puVar12 != (undefined8 *)0x0) && (*(int *)(puVar12 + 2) == iVar5)) &&
         ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)) {
        for (plVar9 = (longlong *)*puVar12; plVar9 != (longlong *)0x0;
            plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2f0))(plVar9)) {
          if (plVar9[5] != 0) {
            lVar21 = *(longlong *)(plVar9[5] + 0x30);
            if (((lVar21 != 0) && (lVar14 != 0)) &&
               (lVar21 = *(longlong *)(lVar21 + 0x360), lVar21 != 0)) {
              iVar5 = *(int *)(param_1[3] + 0xf4);
              local_118 = (longlong *)CONCAT71(local_118._1_7_,1);
              if (((iVar5 != 0) && (uVar6 = *(uint *)(param_1[3] + 0xf0), -1 < (int)uVar6)) &&
                 (((int)uVar6 < DAT_14c9647dc &&
                  (((plVar9 = (longlong *)
                              ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                    plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar5)) &&
                   ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))))) {
                if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
                  lVar18 = *plVar9;
                }
                else {
                  lVar18 = 0;
                }
                local_118 = (longlong *)CONCAT71(local_118._1_7_,lVar18 == 0);
              }
              uVar6 = *(uint *)((longlong)param_1 + 0x124);
              puVar16 = (undefined4 *)(ulonglong)uVar6;
              FUN_1405d7ab2(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
              *(undefined4 *)(param_1 + 0x24) = 0;
              if (((int)uVar6 < 0) && (*(int *)((longlong)param_1 + 0x124) != 0)) {
                FUN_140f8dd3e(param_1 + 0x23,0);
              }
              if (*(int *)((longlong)param_1 + 0x84) == 0) {
LAB_1405d9a93:
                uVar13 = 0;
              }
              else {
                uVar1 = *(uint *)(param_1 + 0x10);
                uVar13 = 0;
                if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                  puVar12 = (undefined8 *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                  if ((puVar12 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar12 + 2) != *(int *)((longlong)param_1 + 0x84) ||
                      ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1405d9a93;
                  uVar13 = *puVar12;
                }
              }
              FUN_140630e34(&local_d0,uVar13);
              plVar9 = (longlong *)CONCAT44(uStack_c4,local_c8);
              if (plVar9 == (longlong *)0x0) goto LAB_1405d95d0;
              iVar5 = (int)plVar9[1];
              goto LAB_1405d934b;
            }
            break;
          }
        }
      }
    }
  }
  goto LAB_1405d9a4c;
  while( true ) {
    LOCK();
    iVar8 = (int)plVar9[1];
    bVar22 = iVar5 == iVar8;
    if (bVar22) {
      *(int *)(plVar9 + 1) = iVar5 + 1;
      iVar8 = iVar5;
    }
    iVar5 = iVar8;
    UNLOCK();
    if (bVar22) break;
LAB_1405d934b:
    if (iVar5 == 0) {
      plVar9 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar17 = (int *)((longlong)CONCAT44(uStack_c4,local_c8) + 0xc);
  *piVar17 = *piVar17 + -1;
  UNLOCK();
  if (*piVar17 == 0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_c4,local_c8) + 0x10))();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_1405d95d0:
    puVar16 = (undefined4 *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
  }
  else {
    lVar18 = CONCAT71(uStack_cf,local_d0);
    local_110 = lVar21;
    if (lVar18 != 0) {
      unaff_BPL = FUN_140e5cc62(lVar18,param_1 + 0x1d,param_1 + 0x23);
    }
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar17 = (int *)((longlong)plVar9 + 0xc);
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (*piVar17 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    puVar16 = (undefined4 *)CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
    if ((~unaff_BPL & 1) == 0 && lVar18 != 0) {
      local_120 = lVar14;
      if ((longlong)*(int *)(param_1 + 0x1e) != 0) {
        piVar19 = (int *)param_1[0x1d];
        piVar17 = piVar19 + (longlong)*(int *)(param_1 + 0x1e) * 0x12;
        do {
          uVar1 = DAT_14cb88904._4_4_;
          iVar8 = DAT_14cb88900;
          iVar5 = *piVar19;
          uVar6 = piVar19[2];
          puVar16 = (undefined4 *)(ulonglong)DAT_14cb88904._4_4_;
          FUN_14096c63a(piVar19 + 4,&local_d0);
          if ((((char)local_118 == '\0') && (uVar6 != uVar1 || iVar5 != iVar8)) &&
             (local_d0 == '\x01')) {
            piVar7 = &DAT_14c948620;
            piVar11 = (int *)&DAT_14c948618;
            if (local_c0 != 0) {
              piVar7 = &DAT_14c948620;
              piVar11 = (int *)&DAT_14c948618;
              if (1 < local_bc) {
                piVar7 = &DAT_14c948620;
                piVar11 = (int *)&DAT_14c948618;
                if (local_c0 != DAT_14c948000) {
                  piVar11 = (int *)(local_a8 + 0xc);
                  piVar7 = (int *)(local_a8 + 0x14);
                }
              }
            }
            if ((*piVar11 != *(int *)(local_120 + 0xf0)) || (*piVar7 != *(int *)(local_120 + 0xf8)))
            {
              if (local_a8 != 0) {
                FUN_1400020a8();
              }
              goto LAB_1405d95d0;
            }
          }
          iVar5 = *(int *)(param_1 + 0x22);
          *(uint *)(param_1 + 0x22) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0x114) < iVar5 + 1U) {
            FUN_140f12bd2(param_1 + 0x21,iVar5);
          }
          puVar12 = (undefined8 *)((longlong)iVar5 * 0x38 + param_1[0x21]);
          *(undefined2 *)puVar12 = 0;
          *(undefined8 *)((longlong)puVar12 + 4) = 0;
          puVar12[2] = 0;
          puVar12[3] = 0;
          *(undefined4 *)(puVar12 + 4) = 0;
          puVar12[5] = 0;
          puVar12[6] = 0;
          *(undefined4 *)(puVar12 + 1) = local_c8;
          *puVar12 = CONCAT71(uStack_cf,local_d0);
          FUN_1447715ec(puVar12 + 2,&local_c0);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          piVar19 = piVar19 + 0x12;
        } while (piVar19 != piVar17);
      }
      lVar14 = local_110;
      plVar9 = (longlong *)param_1[1];
      if (plVar9 == (longlong *)0x0) {
LAB_1405d95d8:
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = (undefined4 *)0x0;
        plStack_f0 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar9[1];
        do {
          if (iVar5 == 0) goto LAB_1405d95d8;
          LOCK();
          iVar8 = (int)plVar9[1];
          bVar22 = iVar5 == iVar8;
          if (bVar22) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
            iVar8 = iVar5;
          }
          iVar5 = iVar8;
          UNLOCK();
        } while (!bVar22);
        puVar16 = (undefined4 *)*param_1;
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar17 = (int *)((longlong)plVar9 + 0xc);
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (*piVar17 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_e8 = 0;
        uStack_e0 = 0;
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        local_f8 = puVar16;
        plStack_f0 = plVar9;
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar17 = (int *)((longlong)plVar9 + 0xc);
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (*piVar17 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      FUN_140630e34(&local_d0,lVar14);
      plVar9 = (longlong *)CONCAT44(uStack_c4,local_c8);
      if (plVar9 != (longlong *)0x0) {
        iVar5 = (int)plVar9[1];
        do {
          if (iVar5 == 0) {
            plVar9 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar8 = (int)plVar9[1];
          bVar22 = iVar5 == iVar8;
          if (bVar22) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
            iVar8 = iVar5;
          }
          iVar5 = iVar8;
          UNLOCK();
        } while (!bVar22);
        LOCK();
        piVar17 = (int *)((longlong)CONCAT44(uStack_c4,local_c8) + 0xc);
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (*piVar17 == 0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_c4,local_c8) + 0x10))();
        }
        if (plVar9 != (longlong *)0x0) {
          lVar14 = CONCAT71(uStack_cf,local_d0);
          local_108 = &local_e8;
          if ((lVar14 != 0) && ((longlong)*(int *)(param_1 + 0x22) != 0)) {
            lVar21 = param_1[0x21];
            local_100 = (longlong)*(int *)(param_1 + 0x22) * 0x38 + lVar21;
            local_118 = (longlong *)(lVar14 + 0x148);
            puVar16 = &DAT_14c948620;
            local_120 = lVar14;
            do {
              FUN_140c258c2(lVar21,&local_d0);
              iVar5 = local_c0;
              if (local_d0 == '\x01') {
                FUN_1447a97f4(&local_98,&local_c0);
                if (0 < local_94) {
                  lVar14 = 0;
                  uVar15 = 0;
                  iVar5 = local_94;
                  iVar8 = DAT_14c948000;
                  do {
                    bVar22 = local_98 != 0;
                    bVar23 = local_98 != iVar8;
                    piVar17 = &DAT_14c948620;
                    piVar19 = (int *)&DAT_14c948618;
                    if (bVar23 && bVar22) {
                      puVar20 = local_90;
                      if (0 < local_74) {
                        puVar20 = local_80;
                      }
                      if (1 < iVar5) {
                        puVar20 = local_80;
                      }
                      piVar17 = (int *)(puVar20 + lVar14 + 8);
                      piVar19 = (int *)(puVar20 + lVar14);
                    }
                    if ((*piVar19 == DAT_14cb7beb0) && (*piVar17 == DAT_14cb7beb8)) {
LAB_1405d9872:
                      FUN_1402b5374(&local_98,uVar15 & 0xffffffff,0);
                      iVar5 = local_94;
                      iVar8 = DAT_14c948000;
                    }
                    else {
                      piVar17 = &DAT_14c948620;
                      piVar19 = (int *)&DAT_14c948618;
                      if (bVar23 && bVar22) {
                        puVar20 = local_90;
                        if (0 < local_74) {
                          puVar20 = local_80;
                        }
                        if (1 < iVar5) {
                          puVar20 = local_80;
                        }
                        piVar17 = (int *)(puVar20 + lVar14 + 8);
                        piVar19 = (int *)(puVar20 + lVar14);
                      }
                      if ((*piVar19 == DAT_14cb7bec8) && (*piVar17 == DAT_14cb7bed0))
                      goto LAB_1405d9872;
                      piVar17 = &DAT_14c948620;
                      piVar19 = (int *)&DAT_14c948618;
                      if (bVar23 && bVar22) {
                        puVar20 = local_90;
                        if (0 < local_74) {
                          puVar20 = local_80;
                        }
                        if (1 < iVar5) {
                          puVar20 = local_80;
                        }
                        piVar17 = (int *)(puVar20 + lVar14 + 8);
                        piVar19 = (int *)(puVar20 + lVar14);
                      }
                      if ((*piVar19 == DAT_14cb7bee0) && (*piVar17 == DAT_14cb7bee8))
                      goto LAB_1405d9872;
                      piVar17 = &DAT_14c948620;
                      piVar19 = (int *)&DAT_14c948618;
                      if (bVar23 && bVar22) {
                        puVar20 = local_90;
                        if (0 < local_74) {
                          puVar20 = local_80;
                        }
                        if (1 < iVar5) {
                          puVar20 = local_80;
                        }
                        piVar17 = (int *)(puVar20 + lVar14 + 8);
                        piVar19 = (int *)(puVar20 + lVar14);
                      }
                      if ((*piVar19 == DAT_14cb7bef8) && (*piVar17 == DAT_14cb7bf00))
                      goto LAB_1405d9872;
                      piVar17 = &DAT_14c948620;
                      piVar19 = (int *)&DAT_14c948618;
                      if (bVar23 && bVar22) {
                        puVar20 = local_90;
                        if (0 < local_74) {
                          puVar20 = local_80;
                        }
                        if (1 < iVar5) {
                          puVar20 = local_80;
                        }
                        piVar17 = (int *)(puVar20 + lVar14 + 8);
                        piVar19 = (int *)(puVar20 + lVar14);
                      }
                      if ((*piVar19 == DAT_14cb7bf10) && (*piVar17 == DAT_14cb7bf18))
                      goto LAB_1405d9872;
                    }
                    uVar15 = uVar15 + 1;
                    lVar14 = lVar14 + 0xc;
                  } while ((longlong)uVar15 < (longlong)iVar5);
                }
                iVar5 = local_98;
                if (local_80 != (undefined1 *)0x0) {
                  FUN_1400020a8();
                }
              }
              lVar14 = local_120;
              iVar5 = FUN_1402b3efe(local_118,iVar5);
              uVar15 = uStack_e0;
              if (iVar5 != -1) {
                if ((*local_118 + (longlong)iVar5 * 0x48 != 0) &&
                   (piVar17 = (int *)(*local_118 + (longlong)iVar5 * 0x48 + 0x38),
                   piVar17 != (int *)0x0)) {
                  iVar5 = *piVar17;
                  if ((-1 < (longlong)iVar5) &&
                     ((iVar5 < *(int *)(lVar14 + 0x80) && ((longlong)*(int *)(lVar14 + 0xa0) != 0)))
                     ) {
                    lVar18 = 0;
                    do {
                      if (*(int *)(*(longlong *)(lVar14 + 0x98) + lVar18) == iVar5) {
                        lVar18 = (longlong)iVar5 * 0x280;
                        puVar12 = (undefined8 *)(*(longlong *)(lVar14 + 0x78) + 0x210 + lVar18);
                        uVar2 = *puVar12;
                        uVar3 = puVar12[1];
                        uVar13 = *(undefined8 *)(*(longlong *)(lVar14 + 0x78) + 0x220 + lVar18);
                        lVar14 = (longlong)(int)uStack_e0;
                        uVar6 = (int)uStack_e0 + 1;
                        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
                        if (uStack_e0._4_4_ < uVar6) {
                          FUN_1403e3958(local_108,uVar15 & 0xffffffff);
                        }
                        puVar12 = (undefined8 *)(local_e8 + lVar14 * 0x18);
                        *puVar12 = uVar2;
                        puVar12[1] = uVar3;
                        *(undefined8 *)(local_e8 + 0x10 + lVar14 * 0x18) = uVar13;
                        break;
                      }
                      lVar18 = lVar18 + 4;
                    } while ((longlong)*(int *)(lVar14 + 0xa0) * 4 != lVar18);
                  }
                }
              }
              if (local_a8 != 0) {
                FUN_1400020a8();
              }
              lVar21 = lVar21 + 0x38;
            } while (lVar21 != local_100);
          }
          lVar14 = local_110;
          LOCK();
          plVar10 = plVar9 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar17 = (int *)((longlong)plVar9 + 0xc);
            *piVar17 = *piVar17 + -1;
            UNLOCK();
            if (*piVar17 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      cVar4 = (**(code **)(*(longlong *)param_1[0xc] + 0x60))
                        ((longlong *)param_1[0xc],lVar14,&local_f8);
      puVar16 = (undefined4 *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
      if (cVar4 != '\0') {
        FUN_141130830(param_1,1);
        param_1[2] = FUN_1405da82a;
        puVar16 = (undefined4 *)0x0;
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      plVar9 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar10 = plStack_f0 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar17 = (int *)((longlong)plVar9 + 0xc);
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (*piVar17 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
  }
LAB_1405d9a4c:
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar16 & 0xffffffff;
}



// FUNCTION 1405d9b28 FUN_1405d9b28 body=3328 status=ok
// SIG undefined FUN_1405d9b28(void)

void FUN_1405d9b28(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong *plVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1b8 [40];
  longlong *local_190;
  longlong *local_188;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined2 *local_150;
  longlong local_148;
  longlong lStack_140;
  ulonglong local_138;
  longlong local_130;
  undefined **local_128;
  undefined *local_120;
  longlong local_118;
  ulonglong uStack_110;
  longlong local_108;
  int local_fc;
  longlong local_f8 [2];
  uint local_e8 [4];
  uint *local_d8;
  int local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar25 = *param_2;
  if (((lVar25 == 0) || (*(longlong *)(lVar25 + 8) == 0)) || (*(longlong *)(lVar25 + 0x20) == 0))
  goto LAB_1405da6fe;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1405da7d1:
    uVar16 = 0;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x30);
    uVar16 = 0;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
      puVar17 = (undefined8 *)
                ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
      if ((puVar17 == (undefined8 *)0x0) ||
         ((*(int *)(puVar17 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_1405da7d1;
      uVar16 = *puVar17;
    }
  }
  iVar7 = FUN_1405d756c(*(longlong *)(lVar25 + 8),uVar16);
  *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + iVar7;
  plVar28 = (longlong *)(param_1 + 0x168);
  lVar25 = *param_2;
  uVar11 = *(uint *)(*(longlong *)(lVar25 + 0x20) + 0x88);
  local_190 = param_3;
  local_178 = param_2;
  if (*(int *)(param_1 + 0x19c) == 0) {
    iVar7 = *(int *)(param_1 + 0x170);
    *(int *)(param_1 + 0x170) = iVar7 + 1;
    if (*(int *)(param_1 + 0x174) == iVar7) {
      FUN_1447711aa(plVar28,iVar7);
    }
    lVar18 = (longlong)iVar7;
    iVar8 = FUN_144a54ea4(param_1 + 0x178,1);
    lVar21 = *(longlong *)(param_1 + 0x188);
    if (*(longlong *)(param_1 + 0x188) == 0) {
      lVar21 = param_1 + 0x178;
    }
    iVar10 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar10 = iVar8;
    }
    bVar5 = (byte)iVar8 & 0x1f;
    puVar13 = (uint *)(lVar21 + (longlong)(iVar10 >> 5) * 4);
    *puVar13 = *puVar13 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x198);
    lVar18 = (longlong)iVar7;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x168) + 4 + lVar18 * 0x20);
    *(int *)(param_1 + 0x198) = iVar8;
    iVar10 = *(int *)(param_1 + 0x19c) + -1;
    *(int *)(param_1 + 0x19c) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar8 * 0x20) = 0xffffffff;
    }
  }
  param_3 = local_190;
  iVar8 = 1;
  lVar21 = param_1 + 0x178;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar21 = *(longlong *)(param_1 + 0x188);
  }
  iVar10 = iVar7 + 0x1f;
  if (-1 < iVar7) {
    iVar10 = iVar7;
  }
  puVar13 = (uint *)(lVar21 + (longlong)(iVar10 >> 5) * 4);
  *puVar13 = *puVar13 | 1 << ((byte)iVar7 & 0x1f);
  lVar21 = *(longlong *)(param_1 + 0x168);
  lVar18 = lVar18 * 0x20;
  puVar13 = (uint *)(lVar21 + lVar18);
  *(uint *)(lVar21 + lVar18) = uVar11;
  *(undefined8 *)(lVar21 + 8 + lVar18) = *(undefined8 *)(lVar25 + 0x20);
  lVar25 = *(longlong *)(lVar25 + 0x28);
  *(longlong *)(lVar21 + 0x10 + lVar18) = lVar25;
  if (lVar25 != 0) {
    LOCK();
    *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
    UNLOCK();
    uVar11 = *puVar13;
  }
  puVar13[6] = 0xffffffff;
  uVar14 = *(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x19c);
  if (uVar14 != 1) {
    if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
      lVar25 = param_1 + 0x1a0;
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        lVar25 = *(longlong *)(param_1 + 0x1a8);
      }
      uVar15 = *(uint *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x1b0) - 1U & uVar11) * 4);
      if (uVar15 != 0xffffffff) {
        do {
          puVar2 = (uint *)(*plVar28 + (longlong)(int)uVar15 * 0x20);
          if (*(uint *)(*plVar28 + (longlong)(int)uVar15 * 0x20) == uVar11) {
            plVar4 = *(longlong **)(puVar2 + 4);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar4 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            uVar11 = *puVar13;
            uVar14 = puVar13[1];
            uVar15 = puVar13[2];
            uVar20 = puVar13[3];
            *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar13 + 4);
            *puVar2 = uVar11;
            puVar2[1] = uVar14;
            puVar2[2] = uVar15;
            puVar2[3] = uVar20;
            FUN_140c25850(plVar28,iVar7);
            param_3 = local_190;
            goto LAB_1405d9e2c;
          }
          uVar15 = puVar2[6];
        } while (uVar15 != 0xffffffff);
      }
    }
    if (3 < uVar14) {
      uVar9 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
      lVar25 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar25 & 0x1f);
    }
  }
  if (((int)uVar14 < 1) || (iVar8 <= *(int *)(param_1 + 0x1b0))) {
    uVar11 = *(int *)(param_1 + 0x1b0) - 1U & uVar11;
    puVar13[7] = uVar11;
    lVar25 = *(longlong *)(param_1 + 0x1a8);
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      lVar25 = param_1 + 0x1a0;
    }
    puVar13[6] = *(uint *)(lVar25 + ((longlong)*(int *)(param_1 + 0x1b0) - 1U &
                                    (longlong)(int)uVar11) * 4);
    lVar25 = *(longlong *)(param_1 + 0x1a8);
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      lVar25 = param_1 + 0x1a0;
    }
    *(int *)(lVar25 + ((longlong)*(int *)(param_1 + 0x1b0) - 1U & (longlong)(int)uVar11) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 0x1b0) = iVar8;
    FUN_146543dac(plVar28);
  }
LAB_1405d9e2c:
  param_2 = local_178;
  lVar25 = *local_178;
  iVar7 = *(int *)(lVar25 + 0x18);
  *(uint *)(lVar25 + 0x18) = iVar7 + 1U;
  if (*(uint *)(lVar25 + 0x1c) < iVar7 + 1U) {
    FUN_1418642d4(lVar25 + 0x10,iVar7);
  }
  lVar21 = *(longlong *)(lVar25 + 0x10);
  *(undefined8 *)(lVar21 + (longlong)iVar7 * 0x10) = *(undefined8 *)(lVar25 + 0x20);
  lVar25 = *(longlong *)(lVar25 + 0x28);
  *(longlong *)(lVar21 + 8 + (longlong)iVar7 * 0x10) = lVar25;
  if (lVar25 != 0) {
    LOCK();
    *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
    UNLOCK();
  }
  plVar28 = (longlong *)*param_3;
  if (((plVar28 != (longlong *)0x0) && (DAT_14cb70c58 != 0)) && (*plVar28 != 0)) {
    *(int *)(plVar28 + 3) = (int)plVar28[3] + 1;
    *(int *)(*param_3 + 0x1c) = *(int *)(*param_3 + 0x1c) + 1;
    *(int *)(*(longlong *)*param_3 + 0x158) = *(int *)(*(longlong *)*param_3 + 0x158) + 1;
    local_180 = FUN_1405d6522();
    local_158 = FUN_1405d6618();
    FUN_1405d6618();
    local_120 = &DAT_14cb6ffe0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = &PTR_FUN_14b075650;
    uVar9 = 0;
    local_d8 = (uint *)0x0;
    local_d0 = 0;
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_cc = 0xffffffff00000080;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_140d188f2(local_f8,*(longlong *)(*param_2 + 8) + 0x240);
    if (local_d0 == 0) {
      uVar19 = 1;
      iVar8 = 0;
      iVar7 = 0;
    }
    else {
      puVar13 = local_d8;
      if (local_d8 == (uint *)0x0) {
        puVar13 = local_e8;
      }
      uVar11 = *puVar13;
      if (uVar11 == 0) {
        iVar7 = local_d0 + 0x1e;
        if (-1 < local_d0 + -1) {
          iVar7 = local_d0 + -1;
        }
        uVar9 = 0;
        uVar19 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar19 = uVar9;
        }
        iVar8 = 0;
        do {
          if (uVar19 == uVar9) goto LAB_1405da67e;
          iVar8 = iVar8 + 0x20;
          uVar11 = puVar13[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar9 = 0;
        iVar8 = 0;
      }
      uVar19 = (ulonglong)(-uVar11 & uVar11);
      uVar27 = uVar19 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar7 = (iVar8 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (local_d0 <= iVar7) {
        iVar7 = local_d0;
      }
    }
    if (iVar7 < local_d0) {
      local_188 = (longlong *)(param_1 + 0xa8);
      local_170 = param_1 + 0xe0;
      local_168 = local_180 + 0x200;
      uVar11 = 0xffffffff;
LAB_1405da00d:
      local_130 = 0;
      local_160 = (longlong)iVar7;
      cVar6 = FUN_1407a7474(local_158,&local_130);
      if (cVar6 != '\0') {
        if (((local_120 != (undefined *)0x0) && (local_130 != 0)) &&
           (local_120 == *(undefined **)(local_130 + 0x10))) {
          uVar14 = (uint)(*(ushort *)(local_130 + 8) >> 6);
          if (((int)uVar14 < (int)uStack_110) &&
             ((*(ulonglong *)(local_118 + (ulonglong)uVar14 * 8) >>
               ((ulonglong)*(ushort *)(local_130 + 8) & 0x3f) & 1) != 0)) goto LAB_1405da5da;
        }
        FUN_140559328(&local_128,&local_130);
        if (*(int *)(local_180 + 0x1d0) == *(int *)(local_180 + 0x1fc)) {
LAB_1405da1f4:
          lVar21 = 0;
        }
        else {
          lVar25 = *(longlong *)(*(longlong *)*param_3 + 0x118);
          uVar15 = (uint)((ulonglong)lVar25 >> 0x10);
          uVar20 = (uint)lVar25 & 0xffff;
          uVar14 = *(uint *)(*(longlong *)*param_3 + 0x120);
          uVar15 = uVar14 >> 0xd ^
                   (int)((ulonglong)lVar25 >> 0x20) + uVar20 + ((uint)lVar25 * 0x10000 - uVar14) +
                   (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar20 >> 4);
          uVar20 = uVar15 << 8 ^ (-0x61c88647 - uVar14) - uVar15;
          uVar22 = uVar20 >> 0xd ^ (uVar14 - uVar15) - uVar20;
          uVar26 = uVar22 >> 0xc ^ (uVar15 - uVar20) - uVar22;
          uVar15 = uVar26 << 0x10 ^ (uVar20 - uVar22) - uVar26;
          uVar20 = uVar15 >> 5 ^ (uVar22 - uVar26) - uVar15;
          uVar22 = uVar20 >> 3 ^ (uVar26 - uVar15) - uVar20;
          uVar15 = uVar22 << 10 ^ (uVar15 - uVar20) - uVar22;
          lVar21 = *(longlong *)(local_180 + 0x208);
          if (*(longlong *)(local_180 + 0x208) == 0) {
            lVar21 = local_168;
          }
          iVar7 = *(int *)(lVar21 + (ulonglong)
                                    (*(int *)(local_180 + 0x210) - 1U &
                                    (uVar15 >> 0xf ^ uVar20 - (uVar22 + uVar15))) * 4);
          if (iVar7 == -1) goto LAB_1405da1f4;
          lVar18 = *(longlong *)(local_180 + 0x1c8);
          do {
            lVar23 = (longlong)iVar7 * 0x1c0;
            lVar21 = lVar18 + lVar23;
            if ((*(longlong *)(lVar18 + lVar23) == lVar25) &&
               (*(uint *)(lVar18 + 8 + lVar23) == uVar14)) break;
            iVar7 = *(int *)(lVar21 + 0x1b8);
            lVar21 = 0;
          } while (iVar7 != -1);
        }
        lVar25 = lVar21 + 0x18;
        if (lVar21 == 0) {
          lVar25 = 0;
        }
        if (lVar25 == 0) goto LAB_1405da5da;
        local_150 = &DAT_14a171d50;
        local_148 = 0;
        lStack_140 = 0;
        local_138 = 0;
        lVar21 = FUN_1405d6618();
        uVar27 = local_138 >> 0x20;
        local_138 = local_138 & 0xffffffff00000000;
        if ((int)uVar27 != 0) {
          FUN_140115c12(&lStack_140,0);
        }
        local_148 = lVar21;
        FUN_140653d46(&local_150);
        param_3 = local_190;
        if (*(longlong *)(lVar25 + 0x78) == local_148) {
          uVar14 = *(uint *)(lVar25 + 0x88);
          uVar15 = (uint)local_138;
          if ((int)uVar14 < (int)(uint)local_138) {
            uVar15 = uVar14;
          }
          if (0 < (int)uVar15) {
            uVar27 = 0;
            do {
              if ((*(ulonglong *)(lStack_140 + uVar27 * 8) &
                  ~*(ulonglong *)(*(longlong *)(lVar25 + 0x80) + uVar27 * 8)) != 0)
              goto LAB_1405da595;
              uVar27 = uVar27 + 1;
            } while (uVar15 != uVar27);
          }
          if ((int)uVar14 < (int)(uint)local_138) {
            lVar21 = 0;
            do {
              if (*(longlong *)((longlong)(int)uVar14 * 8 + lStack_140 + lVar21 * 8) != 0)
              goto LAB_1405da595;
              lVar21 = lVar21 + 1;
            } while ((uint)local_138 - uVar14 != (int)lVar21);
          }
          fVar29 = (float)FUN_1407df556(lVar25 + 0x70,&local_150);
          plVar28 = local_188;
          lVar25 = *(longlong *)*param_3;
          if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
            lVar21 = *(longlong *)(lVar25 + 0x118);
            uVar15 = (uint)((ulonglong)lVar21 >> 0x10);
            uVar20 = (uint)lVar21 & 0xffff;
            uVar14 = *(uint *)(lVar25 + 0x120);
            uVar15 = uVar14 >> 0xd ^
                     (int)((ulonglong)lVar21 >> 0x20) + uVar20 + ((uint)lVar21 * 0x10000 - uVar14) +
                     (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar20 >> 4);
            uVar20 = uVar15 << 8 ^ (-0x61c88647 - uVar14) - uVar15;
            uVar22 = uVar20 >> 0xd ^ (uVar14 - uVar15) - uVar20;
            uVar26 = uVar22 >> 0xc ^ (uVar15 - uVar20) - uVar22;
            uVar15 = uVar26 << 0x10 ^ (uVar20 - uVar22) - uVar26;
            uVar20 = uVar15 >> 5 ^ (uVar22 - uVar26) - uVar15;
            uVar22 = uVar20 >> 3 ^ (uVar26 - uVar15) - uVar20;
            uVar15 = uVar22 << 10 ^ (uVar15 - uVar20) - uVar22;
            lVar18 = *(longlong *)(param_1 + 0xe8);
            if (*(longlong *)(param_1 + 0xe8) == 0) {
              lVar18 = local_170;
            }
            iVar7 = *(int *)(lVar18 + (ulonglong)
                                      (*(int *)(param_1 + 0xf0) - 1U &
                                      (uVar15 >> 0xf ^ uVar20 - (uVar22 + uVar15))) * 4);
            if (iVar7 != -1) {
              lVar18 = *local_188;
              do {
                lVar24 = (longlong)iVar7 * 0x90;
                lVar23 = lVar18 + lVar24;
                if ((*(longlong *)(lVar18 + lVar24) == lVar21) &&
                   (*(uint *)(lVar18 + 8 + lVar24) == uVar14)) {
                  if (lVar23 != 0) {
                    plVar28 = (longlong *)(lVar23 + 0x18);
                    goto LAB_1405da436;
                  }
                  break;
                }
                iVar7 = *(int *)(lVar23 + 0x88);
              } while (iVar7 != -1);
            }
          }
          local_108 = lVar25 + 0x118;
          FUN_145ed014c(local_188,&local_fc,&local_108);
          plVar28 = (longlong *)(*plVar28 + (longlong)local_fc * 0x90 + 0x18);
          FUN_1405d6618();
          (**(code **)(*plVar28 + 0x20))(plVar28);
          if (plVar28 == (longlong *)0x0) goto LAB_1405da595;
LAB_1405da436:
          fVar31 = 1.0;
          if (plVar28[1] == local_148) {
            uVar14 = *(uint *)(plVar28 + 3);
            uVar15 = (uint)local_138;
            if ((int)uVar14 < (int)(uint)local_138) {
              uVar15 = uVar14;
            }
            if (0 < (int)uVar15) {
              uVar27 = 0;
              do {
                if ((*(ulonglong *)(lStack_140 + uVar27 * 8) &
                    ~*(ulonglong *)(plVar28[2] + uVar27 * 8)) != 0) goto LAB_1405da551;
                uVar27 = uVar27 + 1;
              } while (uVar15 != uVar27);
            }
            if ((int)uVar14 < (int)(uint)local_138) {
              lVar25 = 0;
              do {
                if (*(longlong *)((longlong)(int)uVar14 * 8 + lStack_140 + lVar25 * 8) != 0)
                goto LAB_1405da551;
                lVar25 = lVar25 + 1;
              } while ((uint)local_138 - uVar14 != (int)lVar25);
            }
            fVar31 = (float)FUN_1407df556(plVar28,&local_150);
          }
          goto LAB_1405da555;
        }
        goto LAB_1405da595;
      }
      goto LAB_1405da5da;
    }
LAB_1405da67e:
    local_b0 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_14064e7da(local_f8);
    param_2 = local_178;
    local_128 = (undefined **)&DAT_14a171d50;
    uVar9 = uStack_110 >> 0x20;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    if ((int)uVar9 != 0) {
      FUN_140115c12(&local_118,0);
    }
    local_120 = (undefined *)0x0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1405da6fe:
  plVar28 = (longlong *)param_2[1];
  if (plVar28 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar28)(plVar28);
      LOCK();
      piVar1 = (int *)((longlong)plVar28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
    }
  }
  plVar28 = (longlong *)param_3[1];
  if (plVar28 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar28)(plVar28);
      LOCK();
      piVar1 = (int *)((longlong)plVar28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1405da551:
  fVar31 = 1.0;
LAB_1405da555:
  lVar25 = local_160 * 0x14;
  (**(code **)*plVar28)(plVar28,local_f8[0] + lVar25);
  fVar30 = 0.01;
  if (0.01 <= fVar31 - fVar29) {
    fVar30 = fVar31 - fVar29;
  }
  FUN_1405d6204(plVar28,lVar25 + local_f8[0],fVar30);
LAB_1405da595:
  local_150 = &DAT_14a171d50;
  uVar27 = local_138 >> 0x20;
  local_138 = local_138 & 0xffffffff00000000;
  if ((int)uVar27 != 0) {
    FUN_140115c12(&lStack_140,0);
  }
  local_148 = 0;
  if (lStack_140 != 0) {
    FUN_1400020a8();
  }
LAB_1405da5da:
  uVar11 = uVar11 & ~(uint)uVar19;
  puVar13 = local_d8;
  if (local_d8 == (uint *)0x0) {
    puVar13 = local_e8;
  }
  iVar7 = (int)uVar9;
  lVar25 = (longlong)iVar7;
  uVar14 = puVar13[lVar25] & uVar11;
  if (uVar14 == 0) {
    iVar10 = local_d0 + 0x1e;
    if (-1 < local_d0 + -1) {
      iVar10 = local_d0 + -1;
    }
    iVar10 = iVar10 >> 5;
    iVar12 = iVar10;
    if (iVar10 < iVar7) {
      iVar12 = iVar7;
    }
    if (iVar10 <= iVar7) goto LAB_1405da67e;
    lVar21 = 0;
    while( true ) {
      iVar8 = iVar8 + 0x20;
      uVar14 = puVar13[lVar25 + lVar21 + 1];
      if (uVar14 != 0) break;
      lVar21 = lVar21 + 1;
      if (iVar12 - lVar25 == lVar21) goto LAB_1405da67e;
    }
    uVar9 = (ulonglong)(iVar7 + (int)lVar21 + 1);
    uVar11 = 0xffffffff;
  }
  uVar19 = (ulonglong)(-uVar14 & uVar14);
  uVar27 = uVar19 * 2 + 1;
  lVar25 = 0x3f;
  if (uVar27 != 0) {
    for (; uVar27 >> lVar25 == 0; lVar25 = lVar25 + -1) {
    }
  }
  iVar7 = (iVar8 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
  if (local_d0 <= iVar7) goto LAB_1405da67e;
  goto LAB_1405da00d;
}



// FUNCTION 1405da82a FUN_1405da82a body=3369 status=ok
// SIG undefined FUN_1405da82a(void)

ulonglong FUN_1405da82a(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong lVar20;
  byte bVar21;
  undefined8 unaff_RBP;
  undefined7 uVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong local_d0;
  undefined *local_c8;
  longlong *local_c0;
  undefined4 local_b4;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_8c;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_70;
  longlong local_60;
  ulonglong local_48;
  ulonglong uVar13;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_141130830(param_1,0);
  FUN_1405d7ab2(param_1[0x21],(int)param_1[0x22]);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (*(int *)((longlong)param_1 + 0x114) != 0) {
    FUN_140f8dd3e(param_1 + 0x21,0);
  }
  plVar11 = (longlong *)FUN_140ad21c8(param_1);
  uVar22 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar13 = CONCAT71(uVar22,1);
  if ((((((plVar11 == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0x84) == 0)) ||
        (uVar10 = *(uint *)(param_1 + 0x10), (int)uVar10 < 0)) ||
       (((DAT_14c9647dc <= (int)uVar10 ||
         (plVar18 = (longlong *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
         plVar18 == (longlong *)0x0)) ||
        (((int)plVar18[2] != *(int *)((longlong)param_1 + 0x84) ||
         (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 || ((longlong *)*plVar18 == (longlong *)0x0)))
         ))))) || (lVar12 = (**(code **)(*(longlong *)*plVar18 + 0x2b0))(), lVar12 == 0)) ||
     (plVar18 = (longlong *)FUN_14039ffc6(lVar12), plVar18 == (longlong *)0x0)) goto LAB_1405db202;
  local_8c = 0;
  uVar13 = CONCAT71(uVar22,1);
  FUN_140c25d2a(param_1,1,(int)param_1[0x11]);
  local_c0 = param_1 + 0x2b;
  local_d0 = param_1[3] + 0x130;
  local_d8 = param_1 + 0x1f;
  plVar4 = param_1 + 0x1d;
  plVar2 = param_1 + 0x25;
  local_c8 = &DAT_14cb86b68;
  (**(code **)(*plVar11 + 0x98))(plVar11,&local_88,plVar2,plVar4);
  *(int *)((longlong)param_1 + 0x13c) = (int)uStack_80;
  *(longlong **)((longlong)param_1 + 0x134) = local_88;
  if (*(int *)((longlong)param_1 + 0x134) == 0) goto LAB_1405db202;
  (**(code **)(*plVar18 + 0x78))(plVar18,&local_88,(longlong)param_1 + 0x134);
  plVar11 = uStack_80;
  if ((longlong **)(param_1 + 0x29) != &local_88) {
    param_1[0x29] = (longlong)local_88;
    local_88 = (longlong *)0x0;
    plVar18 = (longlong *)param_1[0x2a];
    if (uStack_80 != plVar18) {
      uStack_80 = (longlong *)0x0;
      param_1[0x2a] = (longlong)plVar11;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar18 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
    }
  }
  plVar11 = uStack_80;
  if (uStack_80 != (longlong *)0x0) {
    LOCK();
    plVar18 = uStack_80 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*uStack_80)(uStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  plVar11 = (longlong *)param_1[0x29];
  if (plVar11 == (longlong *)0x0) goto LAB_1405db202;
  FUN_140ffff0a(plVar4,plVar11[1] + 0x118);
  lVar12 = *(longlong *)(param_1[0x29] + 8);
  local_88 = (longlong *)0x0;
  uStack_80 = (longlong *)((ulonglong)uStack_80 & 0xffffffff00000000);
  FUN_1446efa72(&local_88,0,3,0x10);
  uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,3);
  plVar11 = (longlong *)param_1[1];
  local_a8 = plVar4;
  if (plVar11 == (longlong *)0x0) {
LAB_1405db28e:
    *local_88 = (longlong)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar20 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar20 == 0) {
      LOCK();
      UNLOCK();
      lVar20 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    local_88[2] = lVar20;
    *local_88 = (longlong)&PTR_FUN_14b3e5dc0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = (longlong)FUN_140f71f60;
  }
  else {
    iVar8 = (int)plVar11[1];
    do {
      if (iVar8 == 0) goto LAB_1405db28e;
      LOCK();
      iVar9 = (int)plVar11[1];
      bVar24 = iVar8 == iVar9;
      if (bVar24) {
        *(int *)(plVar11 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar24);
    lVar15 = *param_1;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *local_88 = (longlong)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar23 = DAT_14c758608 + 1;
    lVar20 = DAT_14c758608 + 1;
    if (lVar23 == 0) {
      LOCK();
      UNLOCK();
      lVar23 = DAT_14c758608 + 2;
      lVar20 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar20;
    local_88[2] = lVar23;
    *local_88 = (longlong)&PTR_FUN_14b3e5dc0;
    local_88[3] = lVar15;
    local_88[4] = (longlong)plVar11;
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    local_88[5] = (longlong)FUN_140f71f60;
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (((int)uStack_80 == 0) || (local_88 == (longlong *)0x0)) {
LAB_1405db4f2:
    if ((int)uStack_80 == 0) goto LAB_1405dacb0;
    if (local_88 != (longlong *)0x0) {
      (**(code **)*local_88)(local_88,0);
      FUN_1446efa72(&local_88,0,0,0x10);
      goto LAB_1405daca3;
    }
  }
  else {
    cVar6 = (**(code **)(*local_88 + 0x30))();
    if (cVar6 == '\0') {
      goto LAB_1405db4f2;
    }
    plVar11 = (longlong *)(lVar12 + 0x1b8);
    if (*(int *)(lVar12 + 0x1cc) < 1) {
      iVar8 = *(int *)(lVar12 + 0x1c0);
      iVar9 = *(int *)(lVar12 + 0x1c8) + -1;
      *(int *)(lVar12 + 0x1c8) = iVar9;
      if (iVar9 <= iVar8) {
        iVar9 = iVar8;
        if (0 < iVar8) {
          uVar13 = 0;
          do {
            lVar15 = (longlong)(int)uVar13 * 0x10;
            if (((*(int *)(*plVar11 + 8 + lVar15) == 0) ||
                (plVar18 = *(longlong **)(*plVar11 + lVar15), plVar18 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar18 + 0x28))(), cVar6 != '\0')) {
              FUN_14005b288(plVar11,uVar13);
              FUN_14005b248(plVar11);
            }
            else {
              uVar13 = (ulonglong)((int)uVar13 + 1);
            }
            iVar9 = *(int *)(lVar12 + 0x1c0);
          } while ((int)uVar13 < iVar9);
        }
        iVar14 = 2;
        if (2 < iVar9 * 2) {
          iVar14 = iVar9 * 2;
        }
        *(int *)(lVar12 + 0x1c8) = iVar14;
        if ((iVar14 < iVar8) && (*(int *)(lVar12 + 0x1c4) != iVar9)) {
          FUN_14045812c();
        }
      }
    }
    if (((int)uStack_80 != 0) && (local_88 != (longlong *)0x0)) {
      (**(code **)(*local_88 + 0x38))(local_88,&local_a0);
    }
    iVar8 = *(int *)(lVar12 + 0x1c0);
    *(uint *)(lVar12 + 0x1c0) = iVar8 + 1U;
    if (*(uint *)(lVar12 + 0x1c4) < iVar8 + 1U) {
      FUN_1447a71f6(plVar11,iVar8);
    }
    lVar12 = *plVar11;
    lVar15 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar12 + lVar15) = 0;
    *(undefined4 *)(lVar12 + 8 + lVar15) = 0;
    *(longlong **)(lVar12 + lVar15) = local_88;
    local_88 = (longlong *)0x0;
    *(int *)(lVar12 + 8 + lVar15) = (int)uStack_80;
LAB_1405daca3:
    uStack_80 = (longlong *)((ulonglong)uStack_80 & 0xffffffff00000000);
LAB_1405dacb0:
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar12 = *(longlong *)(param_1[0x29] + 8);
  local_88 = (longlong *)0x0;
  uStack_80 = (longlong *)((ulonglong)uStack_80 & 0xffffffff00000000);
  FUN_1446efa72(&local_88,0,3,0x10);
  uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,3);
  plVar11 = (longlong *)param_1[1];
  if (plVar11 == (longlong *)0x0) {
LAB_1405db2d9:
    *local_88 = (longlong)&PTR_LAB_14b3e61f0;
    LOCK();
    UNLOCK();
    lVar20 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar20 == 0) {
      LOCK();
      UNLOCK();
      lVar20 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    local_88[2] = lVar20;
    *local_88 = (longlong)&PTR_FUN_14b3e5e30;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = (longlong)&LAB_1459b19ec;
  }
  else {
    iVar8 = (int)plVar11[1];
    do {
      if (iVar8 == 0) goto LAB_1405db2d9;
      LOCK();
      iVar9 = (int)plVar11[1];
      bVar24 = iVar8 == iVar9;
      if (bVar24) {
        *(int *)(plVar11 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar24);
    lVar15 = *param_1;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *local_88 = (longlong)&PTR_LAB_14b3e61f0;
    LOCK();
    UNLOCK();
    lVar23 = DAT_14c758608 + 1;
    lVar20 = DAT_14c758608 + 1;
    if (lVar23 == 0) {
      LOCK();
      UNLOCK();
      lVar23 = DAT_14c758608 + 2;
      lVar20 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar20;
    local_88[2] = lVar23;
    *local_88 = (longlong)&PTR_FUN_14b3e5e30;
    local_88[3] = lVar15;
    local_88[4] = (longlong)plVar11;
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    local_88[5] = (longlong)&LAB_1459b19ec;
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (((int)uStack_80 == 0) || (local_88 == (longlong *)0x0)) {
LAB_1405db425:
    if ((int)uStack_80 == 0) goto LAB_1405daed7;
    if (local_88 != (longlong *)0x0) {
      (**(code **)*local_88)(local_88,0);
      FUN_1446efa72(&local_88,0,0,0x10);
      goto LAB_1405daeca;
    }
  }
  else {
    cVar6 = (**(code **)(*local_88 + 0x30))();
    if (cVar6 == '\0') {
      goto LAB_1405db425;
    }
    plVar11 = (longlong *)(lVar12 + 0x1d0);
    if (*(int *)(lVar12 + 0x1e4) < 1) {
      iVar8 = *(int *)(lVar12 + 0x1d8);
      iVar9 = *(int *)(lVar12 + 0x1e0) + -1;
      *(int *)(lVar12 + 0x1e0) = iVar9;
      if (iVar9 <= iVar8) {
        iVar9 = iVar8;
        if (0 < iVar8) {
          uVar13 = 0;
          do {
            lVar15 = (longlong)(int)uVar13 * 0x10;
            if (((*(int *)(*plVar11 + 8 + lVar15) == 0) ||
                (plVar18 = *(longlong **)(*plVar11 + lVar15), plVar18 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar18 + 0x28))(), cVar6 != '\0')) {
              FUN_14005b288(plVar11,uVar13);
              FUN_14005b248(plVar11);
            }
            else {
              uVar13 = (ulonglong)((int)uVar13 + 1);
            }
            iVar9 = *(int *)(lVar12 + 0x1d8);
          } while ((int)uVar13 < iVar9);
        }
        iVar14 = 2;
        if (2 < iVar9 * 2) {
          iVar14 = iVar9 * 2;
        }
        *(int *)(lVar12 + 0x1e0) = iVar14;
        if ((iVar14 < iVar8) && (*(int *)(lVar12 + 0x1dc) != iVar9)) {
          FUN_14045812c();
        }
      }
    }
    if (((int)uStack_80 != 0) && (local_88 != (longlong *)0x0)) {
      (**(code **)(*local_88 + 0x38))(local_88,&local_a0);
    }
    iVar8 = *(int *)(lVar12 + 0x1d8);
    *(uint *)(lVar12 + 0x1d8) = iVar8 + 1U;
    if (*(uint *)(lVar12 + 0x1dc) < iVar8 + 1U) {
      FUN_1447a71f6(plVar11,iVar8);
    }
    lVar12 = *plVar11;
    lVar15 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar12 + lVar15) = 0;
    *(undefined4 *)(lVar12 + 8 + lVar15) = 0;
    *(longlong **)(lVar12 + lVar15) = local_88;
    local_88 = (longlong *)0x0;
    *(int *)(lVar12 + 8 + lVar15) = (int)uStack_80;
LAB_1405daeca:
    uStack_80 = (longlong *)((ulonglong)uStack_80 & 0xffffffff00000000);
LAB_1405daed7:
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar7 = FUN_1405f61f4(param_1[0x29]);
  *(undefined1 *)(param_1 + 0x28) = uVar7;
  plVar18 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar18[1] = (longlong)&DAT_100000001;
  *plVar18 = (longlong)&PTR_FUN_14b3e5ea0;
  plVar11 = plVar18 + 2;
  plVar18[3] = (longlong)&DAT_14cb70b50;
  plVar18[4] = 0;
  plVar18[5] = 0;
  *(undefined1 *)(plVar18 + 6) = 0;
  plVar18[2] = (longlong)&PTR_FUN_14b081e50;
  plVar18[7] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  plVar18[0xc] = 0;
  *(undefined4 *)((longlong)plVar18 + 0x6c) = 0x20005;
  plVar18[0xe] = 0;
  plVar18[0xf] = 0;
  plVar18[0x10] = 0;
  plVar18[0x11] = 0;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar18 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    (**(code **)plVar18[2])(plVar11);
    puVar16 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_1[0xd] + 8) != (undefined4 *)0x0) {
      puVar16 = *(undefined4 **)(param_1[0xd] + 8);
    }
    local_88 = (longlong *)0x0;
    uStack_80 = (longlong *)0x0;
    FUN_1400b2348(puVar16,&local_88,1);
    if (plVar18[7] != 0) {
      FUN_1400020a8();
    }
    plVar18[7] = (longlong)local_88;
    local_88 = (longlong *)0x0;
    *(int *)(plVar18 + 8) = (int)uStack_80;
    *(undefined4 *)((longlong)plVar18 + 0x44) = uStack_80._4_4_;
    uVar10 = 0;
    if (param_1[0xe] != 0) {
      uVar10 = *(uint *)(param_1[0xe] + 4);
    }
    uVar13 = (ulonglong)uVar10;
    *(uint *)(plVar18 + 0xd) = uVar10;
    lVar12 = param_1[3];
    if (lVar12 == 0) {
LAB_1405db100:
      local_b4 = (undefined4)CONCAT71((int7)(uVar13 >> 8),1);
      lVar12 = 0;
    }
    else {
      uVar10 = *(uint *)(lVar12 + 0xf4);
      uVar13 = (ulonglong)uVar10;
      if (uVar10 == 0) goto LAB_1405db100;
      uVar3 = *(uint *)(lVar12 + 0xf0);
      lVar12 = 0;
      if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) {
        local_b4 = (undefined4)CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
      }
      else {
        puVar19 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if (((puVar19 == (undefined8 *)0x0) || (*(uint *)(puVar19 + 2) != uVar10)) ||
           (uVar13 = (ulonglong)*(uint *)(puVar19 + 1), (*(uint *)(puVar19 + 1) & 0x10200000) != 0))
        goto LAB_1405db100;
        local_b4 = (undefined4)CONCAT71((uint7)(uint3)(*(uint *)(puVar19 + 1) >> 8),1);
        if ((*(uint *)(puVar19 + 1) & 0x10200000) == 0) {
          uVar17 = *puVar19;
        }
        else {
          uVar17 = 0;
        }
        local_b0 = plVar11;
        lVar12 = FUN_14105e9e4(uVar17);
        if (lVar12 == 0) {
          lVar12 = 0;
          plVar11 = local_b0;
        }
        else {
          FUN_1406f1bc8(lVar12,&local_88);
          FUN_140b126e4(&local_88,&local_a0);
          lVar12 = local_a0;
          local_a0 = 0;
          iVar8 = (int)local_98;
          iVar9 = local_98._4_4_;
          local_98 = 0;
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          plVar11 = local_b0;
          if (iVar9 != -1) {
            iVar9 = iVar8 + -1;
            local_b4 = 0;
            if (iVar8 == 0) {
              iVar9 = 0;
            }
            FUN_1402980a2(plVar18 + 0xb,lVar12,iVar9);
            plVar11 = local_b0;
          }
        }
      }
    }
    FUN_1408226d0(plVar2,&local_88,1);
    if (plVar18[9] != 0) {
      FUN_1400020a8();
    }
    plVar18[9] = (longlong)local_88;
    local_88 = (longlong *)0x0;
    *(int *)(plVar18 + 10) = (int)uStack_80;
    *(undefined4 *)((longlong)plVar18 + 0x54) = uStack_80._4_4_;
    FUN_1410d4484(plVar18 + 0xe,param_1 + 0x23);
    FUN_140ffff0a(plVar18 + 0x10,local_a8);
    local_a0 = *plVar2;
    local_98 = CONCAT44(local_98._4_4_,(int)param_1[0x26]);
    FUN_1448075d0(&local_88);
    lVar15 = FUN_14060eaf6(&local_88);
    uVar5 = local_b4;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (lVar15 != 0) {
      FUN_1411cd32a(lVar15,plVar18 + 0x10);
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)param_1[6];
    param_1[5] = (longlong)plVar11;
    param_1[6] = (longlong)plVar18;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar4 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    bVar21 = (byte)uVar5 | lVar12 == 0;
    uVar13 = (ulonglong)CONCAT31((int3)((uint)uVar5 >> 8),bVar21);
    if (bVar21 == 0) {
      FUN_1400020a8(lVar12);
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar18 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  FUN_140fda274(param_1);
  uVar13 = CONCAT71((int7)(uVar13 >> 8),2);
LAB_1405db202:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 1405db554 FUN_1405db554 body=1216 status=ok
// SIG undefined FUN_1405db554(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1405db554(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  uint *local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  uint *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar9 = FUN_14479d2ce(param_1 + 0x1b8);
  FUN_140630e34(&local_b8,lVar9);
  plVar11 = (longlong *)CONCAT44(uStack_ac,local_b0);
  if (plVar11 != (longlong *)0x0) {
    iVar8 = (int)plVar11[1];
    do {
      if (iVar8 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar16 = iVar8 == iVar7;
      if (bVar16) {
        *(int *)(plVar11 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar16);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_ac,local_b0) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_ac,local_b0) + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      uVar14 = 0;
      if ((lVar9 != 0) && (local_b8 != (uint *)0x0)) {
        if (*local_b8 == 3) {
          uVar14 = 1;
        }
        else if (*local_b8 < 2) {
          uVar14 = 0;
        }
        else {
          local_f0 = (uint *)(param_1 + 0x30);
          uVar10 = FUN_14479d2ce();
          FUN_1405dbc7c(local_b8,uVar10);
          local_c8 = 0;
          uStack_c0 = 0;
          FUN_145726312(&local_c8);
          if ((int)uStack_c0 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uStack_c0 & 0xffffffff);
          }
          plVar2 = (longlong *)(param_1 + 0x20);
          local_e8 = lVar9;
          local_e0 = plVar11;
          if (*(int *)(param_1 + 0x2c) < (int)uStack_c0) {
            FUN_1457262b4(plVar2);
          }
          lVar9 = local_c8;
          if ((int)uStack_c0 != 0) {
            lVar13 = (longlong)(int)uStack_c0;
            lVar15 = 0;
            do {
              lVar5 = *(longlong *)(lVar9 + lVar15);
              if (lVar5 != 0) {
                plVar11 = (longlong *)FUN_14001cc68(0x40,0x10);
                plVar11[1] = (longlong)&DAT_100000001;
                *plVar11 = (longlong)&PTR_FUN_14b3e60e0;
                plVar11[2] = 0;
                plVar11[3] = 0;
                plVar11[4] = 0;
                plVar11[5] = 0;
                plVar11[6] = 0;
                plVar11[7] = 0;
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar3 = plVar11 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*plVar11)(plVar11);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar11 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                    }
                  }
                }
                iVar8 = *(int *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = iVar8 + 1U;
                if (*(uint *)(param_1 + 0x2c) < iVar8 + 1U) {
                  FUN_1487b845e(plVar2,iVar8);
                }
                uVar14 = (longlong)iVar8 * 0x10;
                lVar6 = *plVar2;
                *(longlong **)(lVar6 + uVar14) = plVar11 + 2;
                *(longlong **)(lVar6 + 8 + uVar14) = plVar11;
                if (plVar11 == (longlong *)0x0) {
                  _DAT_00000018 = lVar5;
                  uVar10 = FUN_14479d2ce(local_f0);
                  _DAT_00000014 = FUN_1405dba16(lVar5,uVar10);
                }
                else {
                  LOCK();
                  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                  UNLOCK();
                  plVar11[3] = lVar5;
                  if ((*(int *)(param_1 + 0x34) == 0) || (uVar4 = *local_f0, (int)uVar4 < 0)) {
LAB_1405db790:
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = 0;
                    if ((int)uVar4 < DAT_14c9647dc) {
                      puVar12 = (undefined8 *)
                                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                      if (((puVar12 == (undefined8 *)0x0) ||
                          (*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x34))) ||
                         ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_1405db790;
                      uVar10 = *puVar12;
                    }
                  }
                  uVar17 = FUN_1405dba16(lVar5,uVar10);
                  *(undefined4 *)((longlong)plVar11 + 0x14) = uVar17;
                  LOCK();
                  plVar3 = plVar11 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*plVar11)(plVar11);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar11 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                    }
                  }
                }
              }
              lVar15 = lVar15 + 8;
            } while (lVar13 * 8 != lVar15);
          }
          lVar9 = local_e8;
          if (*(longlong *)(local_e8 + 0x1f0) == 0) {
            puVar12 = (undefined8 *)(local_e8 + 0x458);
          }
          else {
            puVar12 = (undefined8 *)(*(longlong *)(local_e8 + 0x1f0) + 0xf0);
          }
          uVar10 = *puVar12;
          local_d8 = (undefined8 *)0x0;
          local_d0 = 0;
          FUN_1446efa72(&local_d8,0,3,0x10);
          local_d0 = 3;
          *local_d8 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar15 = DAT_14c758608 + 1;
          lVar13 = DAT_14c758608 + 1;
          if (lVar15 == 0) {
            LOCK();
            UNLOCK();
            lVar15 = DAT_14c758608 + 2;
            lVar13 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar13;
          local_d8[2] = lVar15;
          *local_d8 = &PTR_FUN_14b3e6100;
          local_d8[3] = param_1;
          local_d8[4] = &LAB_140c24214;
          local_b8 = (uint *)0x0;
          local_b0 = 0;
          FUN_14487d8d8(&local_b8,&local_d8);
          uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
          local_78 = 1;
          local_108 = 1;
          local_100 = 0xbf800000;
          FUN_1406f3fee(uVar10,param_1 + 0x1c0,&local_b8,0x41200000);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
          FUN_1449db362(&local_d8);
          *(float *)(param_1 + 0x18) = (float)*(double *)(lVar9 + 0x6d0);
          uVar10 = FUN_14479d2ce(local_f0);
          FUN_145726444(param_1,uVar10,lVar9);
          *(undefined1 *)(param_1 + 0x1d9) = 1;
          plVar11 = local_e0;
          if (local_c8 != 0) {
            FUN_1400020a8();
            plVar11 = local_e0;
          }
        }
      }
      LOCK();
      plVar2 = plVar11 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      goto LAB_1405db8eb;
    }
  }
  uVar14 = 0;
LAB_1405db8eb:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 1405dba16 FUN_1405dba16 body=613 status=ok
// SIG undefined FUN_1405dba16(void)

undefined4 FUN_1405dba16(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = '\0';
  local_88 = 0;
  FUN_1456bb102(local_b0);
  puVar10 = &local_80;
  FUN_1447c3578(param_1 + 0x18,puVar10,local_b0);
  if (local_60 == 3) {
    uVar5 = 3;
    uVar13 = local_80;
  }
  else {
    puVar12 = &local_58;
    FUN_1400b56fe(puVar12,&local_80,3);
    uVar13 = 0;
    if (local_38 != 0) {
      uVar13 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar12 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar12);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar5 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar10 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar10);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_88 != 0) {
    lVar9 = (longlong)local_88 + -1;
    lVar11 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar4 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar4 + lVar11) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar11) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    bVar3 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_88 = 0;
  }
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405dbc7c FUN_1405dbc7c body=720 status=ok
// SIG undefined FUN_1405dbc7c(void)

void FUN_1405dbc7c(int *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar5 = param_1 + 0x1c;
  FUN_14485c47a(piVar5);
  if (*param_1 != 2) goto LAB_1405dbeba;
  lVar3 = FUN_14479d2ce(piVar5);
  if (lVar3 == 0) {
    local_50 = 0;
  }
  else {
    plVar4 = (longlong *)FUN_14479d2ce(piVar5);
    do {
      if (plVar4[5] != 0) {
        lVar3 = *(longlong *)(plVar4[5] + 0x30);
        if (lVar3 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x360);
          FUN_14572638c(&local_50,lVar3);
          if ((lVar3 == 0) ||
             (FUN_1405dbf4e(*(undefined8 *)(param_1 + 0x9a),lVar3), param_1[0x6c] == param_1[0x77]))
          goto LAB_1405dbea4;
          uVar8 = (uint)((ulonglong)local_50 >> 0x10);
          uVar6 = (uint)local_50 & 0xffff;
          piVar5 = param_1 + 0x78;
          if (*(int **)(param_1 + 0x7a) != (int *)0x0) {
            piVar5 = *(int **)(param_1 + 0x7a);
          }
          iVar2 = piVar5[param_1[0x7c] - 1U &
                         (int)((ulonglong)local_50 >> 0x20) + ((uint)local_50 << 0x10 | uVar6) +
                         (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar6 >> 4)];
          if (iVar2 == -1) goto LAB_1405dbea4;
          goto LAB_1405dbd88;
        }
        break;
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2f0))(plVar4);
    } while (plVar4 != (longlong *)0x0);
    FUN_14572638c(&local_50,0);
  }
  goto LAB_1405dbea4;
  while (iVar2 = *(int *)(lVar3 + 0x18), iVar2 != -1) {
LAB_1405dbd88:
    lVar3 = *(longlong *)(param_1 + 0x6a) + (longlong)iVar2 * 0x20;
    if (*(longlong *)(*(longlong *)(param_1 + 0x6a) + (longlong)iVar2 * 0x20) == local_50) {
      if ((lVar3 != 0) && (lVar3 != -8)) {
        uVar8 = *(uint *)(lVar3 + 0x10);
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar8);
        }
        plVar4 = (longlong *)(param_1 + 0x26);
        if (param_1[0x29] < (int)uVar8) {
          FUN_14481578e(plVar4,uVar8);
          uVar8 = *(uint *)(lVar3 + 0x10);
        }
        piVar5 = param_1 + 0x2a;
        if ((uint)(param_1[0x2c] - param_1[0x37]) < uVar8) {
          if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar8);
          }
          FUN_1400bac10(piVar5,uVar8);
          if (uVar8 < 4) {
            iVar2 = 1;
          }
          else {
            uVar8 = (uVar8 | 1) + 0xe;
            iVar2 = 0x1f;
            if (uVar8 != 0) {
              for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
            }
            iVar2 = 1 << ((byte)iVar2 & 0x1f);
          }
          if ((param_1[0x3c] == 0) || (param_1[0x3c] < iVar2)) {
            param_1[0x3c] = iVar2;
            FUN_144a56d22(piVar5);
          }
        }
        iVar2 = *(int *)(lVar3 + 0x10);
        if ((longlong)iVar2 != 0) {
          lVar3 = *(longlong *)(lVar3 + 8);
          lVar7 = 0;
          do {
            local_54 = *(undefined4 *)(lVar3 + lVar7);
            iVar1 = param_1[0x28];
            param_1[0x28] = iVar1 + 1U;
            if ((uint)param_1[0x29] < iVar1 + 1U) {
              FUN_1446f48e2(plVar4,iVar1);
            }
            *(undefined4 *)(*plVar4 + (longlong)iVar1 * 4) = local_54;
            FUN_1447cbafe(piVar5,local_58,&local_54,0);
            lVar7 = lVar7 + 4;
          } while ((longlong)iVar2 * 4 != lVar7);
        }
      }
      break;
    }
  }
LAB_1405dbea4:
  *param_1 = 3;
  FUN_1449f36ec(param_1);
  FUN_140b61c9c(param_1);
LAB_1405dbeba:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405dbf4e FUN_1405dbf4e body=213 status=ok
// SIG undefined FUN_1405dbf4e(void)

void FUN_1405dbf4e(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *(byte *)(param_2 + 0x152);
  if ((((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
      (*(longlong *)(param_2 + 0x30) != 0)) &&
     ((lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar2 != 0 &&
      (*(longlong *)(lVar2 + 0x3f0) != 0)))) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_146563872(&local_28,param_1);
    *(undefined8 *)(param_1 + 0x28) = local_28;
    if ((*(byte *)(param_2 + 0x153) & 0x40) != 0) {
      FUN_143e68a2e(param_1,param_2);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_146563962(&local_28,param_1);
    *(undefined8 *)(param_1 + 0x30) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405dc024 FUN_1405dc024 body=890 status=ok
// SIG undefined FUN_1405dc024(void)

void FUN_1405dc024(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar14 = param_1 + 0x51;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar14;
    if ((int)param_1[0x54] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar5 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar8 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (local_78 = lVar5, plStack_60 != plVar14)) {
      do {
        local_78 = lVar5;
        lVar5 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar8 * 0x20);
        if (lVar5 != 0) {
          plVar10 = (longlong *)(*local_90 + (longlong)iVar8 * 0x20 + 0x10);
          FUN_144837e54(lVar5,0);
          cVar4 = FUN_140dddae6(*plVar10 + 0x48);
          if ((cVar4 != '\0') &&
             (plVar10 = *(longlong **)(*plVar10 + 0x30), plVar10 != (longlong *)0x0)) {
            lVar5 = (**(code **)(*plVar10 + 8))(plVar10);
            lVar6 = FUN_1405dc3a0();
            if ((lVar6 != 0) &&
               ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                 == lVar6 + 0x30)))) {
              (*(code *)*local_98)(local_98[1],plVar10);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        lVar5 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar14 || local_78._4_4_ != iVar12));
    }
  }
  else {
    local_a0 = param_1 + 0x3b;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x3e] == 0) {
      uVar13 = 1;
      uVar11 = 0xffffffff;
      iVar12 = 0;
      iVar15 = 0;
      iVar7 = 0;
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar13 = (ulonglong)local_90 >> 0x20;
      iVar12 = (int)param_1[0x3e];
      iVar8 = (int)local_90;
      uVar11 = (uint)uStack_80;
      iVar7 = uStack_80._4_4_;
      iVar15 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar7 != iVar12 || local_88 != local_a0) {
      do {
        local_a4 = iVar12;
        plVar14 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar7 * 0x20);
        if (plVar14 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar14 + 8))(plVar14);
          lVar6 = FUN_1405dc3a0();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar14);
          }
        }
        uVar11 = uVar11 & ~(uint)uVar13;
        plVar14 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        iVar12 = (int)plVar1[3];
        lVar5 = (longlong)iVar8;
        uVar9 = *(uint *)((longlong)plVar14 + lVar5 * 4) & uVar11;
        if (uVar9 == 0) {
          iVar7 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar7 = iVar12 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar3 = iVar7;
          if (iVar7 < iVar8) {
            iVar3 = iVar8;
          }
          if (iVar8 < iVar7) {
            lVar6 = 0;
            do {
              uVar9 = *(uint *)((longlong)plVar14 + lVar6 * 4 + lVar5 * 4 + 4);
              if (uVar9 != 0) {
                iVar8 = iVar8 + (int)lVar6 + 1;
                uVar11 = 0xffffffff;
                goto LAB_1405dc1aa;
              }
              iVar15 = iVar15 + 0x20;
              lVar6 = lVar6 + 1;
            } while (iVar3 - lVar5 != lVar6);
            uVar11 = 0xffffffff;
            iVar8 = iVar3;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar12;
        }
        else {
LAB_1405dc1aa:
          uVar13 = (ulonglong)(-uVar9 & uVar9);
          uVar2 = uVar13 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar7 = (iVar15 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar7) {
            iVar7 = iVar12;
          }
        }
        iVar12 = local_a4;
      } while (iVar7 != local_a4 || plVar1 != local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405dc3a0 FUN_1405dc3a0 body=57 status=ok
// SIG undefined FUN_1405dc3a0(void)

void FUN_1405dc3a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb581b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb581b0 = FUN_140002ddd(FUN_1464c06b2,uVar1,L"GbxActivityDef");
  }
  return;
}



// FUNCTION 1405dc3da FUN_1405dc3da body=67 status=ok
// SIG undefined FUN_1405dc3da(void)

void FUN_1405dc3da(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405dc41e FUN_1405dc41e body=49 status=ok
// SIG undefined FUN_1405dc41e(void)

void FUN_1405dc41e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405dc450 FUN_1405dc450 body=328 status=ok
// SIG undefined FUN_1405dc450(void)

undefined4 *
FUN_1405dc450(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405dc782(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = (uint)uVar1;
  uVar5 = (uVar5 >> 2) + uVar5 * 0x40 + (int)((ulonglong)uVar1 >> 0x20) + 0x9e3779b9 ^ uVar5;
  local_68 = param_4;
  cVar2 = FUN_1405dc59a(param_1,uVar5,local_48);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48 + 0xc) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140ab258c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405dc59a FUN_1405dc59a body=154 status=ok
// SIG undefined FUN_1405dc59a(void)

void FUN_1405dc59a(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar2 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 0x10;
        if ((*(int *)(lVar1 + lVar5) == *param_3) && (*(int *)(lVar1 + 4 + lVar5) == param_3[1])) {
          *(undefined8 *)(lVar1 + lVar5) = *(undefined8 *)param_3;
          FUN_1406ea140(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_1405dc60a;
        }
        iVar4 = *(int *)((undefined8 *)(lVar1 + lVar5) + 1);
      } while (iVar4 != -1);
    }
    uVar2 = 0;
  }
LAB_1405dc60a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1405dc634 FUN_1405dc634 body=210 status=ok
// SIG undefined FUN_1405dc634(void)

undefined8 FUN_1405dc634(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
  }
  else if (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) {
    return 0;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((int)uVar3 <= (int)*(uint *)(param_1 + 0x18)) {
    uVar2 = uVar3;
  }
  if ((int)uVar2 < 1) {
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    do {
      uVar1 = *(ulonglong *)(*plVar6 + uVar4 * 8);
      uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + uVar4 * 8) | uVar1;
      if (uVar7 != uVar1) {
        *(ulonglong *)(*plVar6 + uVar4 * 8) = uVar7;
        uVar5 = 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
    uVar3 = *(uint *)(param_2 + 0x18);
  }
  if ((int)uVar2 < (int)uVar3) {
    lVar8 = (longlong)(int)uVar2;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0x10) + lVar8 * 8) != 0) {
        uVar5 = 1;
        FUN_1405dc706(plVar6,(int)lVar8 + 1,1);
        *(undefined8 *)(*plVar6 + lVar8 * 8) =
             *(undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar8 * 8);
        uVar3 = *(uint *)(param_2 + 0x18);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uVar3);
  }
  return uVar5;
}



// FUNCTION 1405dc706 FUN_1405dc706 body=122 status=ok
// SIG undefined FUN_1405dc706(void)

void FUN_1405dc706(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1401005a8(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14709b4d8(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1405dc782 FUN_1405dc782 body=712 status=ok
// SIG undefined FUN_1405dc782(void)

int * FUN_1405dc782(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_144869a3c(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1405dc975;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1405dc975:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x10);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1405dca4a FUN_1405dca4a body=1252 status=ok
// SIG undefined FUN_1405dca4a(void)

longlong FUN_1405dca4a(longlong *param_1,uint param_2,longlong *param_3)

{
  uint *puVar1;
  void *_Dst;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar14 = (int)param_1[1];
  iVar12 = *(int *)((longlong)param_1 + 0x34);
  if (iVar14 != iVar12) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar6 = *param_1 + (longlong)iVar3 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x60) == *param_3) {
          if (lVar6 != 0) goto LAB_1405dcd55;
          break;
        }
        iVar3 = *(int *)(lVar6 + 0x58);
      } while (iVar3 != -1);
    }
  }
  if (iVar12 == 0) {
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_14488f93c(param_1,iVar14);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar3 = iVar12 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    plVar5 = param_1 + 2;
    iVar9 = iVar12 + 1;
    iVar13 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar13 = iVar12;
    }
    if (iVar13 >> 5 == iVar3) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar3 = iVar12;
        }
        else {
          uVar4 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar4) {
              uVar8 = uVar4;
            }
          }
          else {
            uVar8 = (uVar4 * 3 >> 3) + uVar4 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar8 << 2,0);
          iVar3 = (int)(uVar11 >> 2);
          iVar9 = -0x20;
          if ((int)uVar4 <= iVar3) {
            iVar9 = iVar3 << 5;
          }
          iVar3 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar5,iVar3);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar3 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar3 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar5;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar3 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar14;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar13 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar6 = (longlong)iVar14;
    iVar3 = *(int *)(*param_1 + 4 + lVar6 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar12 + -1;
    if (iVar12 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar12 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar12 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  plVar5 = (longlong *)(*param_1 + lVar6 * 0x60);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  puVar2 = (undefined8 *)(*param_1 + 8 + lVar6 * 0x60);
  puVar2[-1] = *param_3;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_1403080ec(puVar2,&local_98);
  if (local_58 == 0) {
    *(undefined4 *)(plVar5 + 8) = local_60;
  }
  if (plVar5[9] != 0) {
    FUN_1400020a8();
  }
  plVar5[9] = local_58;
  local_58 = 0;
  *(undefined4 *)(plVar5 + 10) = local_50;
  local_50 = 0;
  uVar11 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar11 != 0) {
    FUN_14472eb64(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(plVar5 + 0xb) = 0xffffffff;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar12 = 1;
  if (uVar4 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar10 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[8];
      }
      iVar3 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
      if (iVar3 != -1) {
        do {
          _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x60);
          if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x60) == *plVar5) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            FUN_144a6bfa8((longlong)_Dst + 8);
            memmove(_Dst,plVar5,0x58);
            FUN_1487b6d3e(param_1,iVar14);
            goto LAB_1405dcd31;
          }
          iVar3 = *(int *)((longlong)_Dst + 0x58);
        } while (iVar3 != -1);
      }
    }
    if (3 < uVar4) {
      uVar11 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar6 & 0x1f);
    }
  }
  if (((int)uVar4 < 1) || (iVar12 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    *(uint *)((longlong)plVar5 + 0x5c) = param_2;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(plVar5 + 0xb) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_1405dcf30(param_1);
  }
LAB_1405dcd31:
  lVar6 = *param_1 + (longlong)iVar14 * 0x60;
LAB_1405dcd55:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6 + 8;
}



// FUNCTION 1405dcf30 FUN_1405dcf30 body=598 status=ok
// SIG undefined FUN_1405dcf30(void)

void FUN_1405dcf30(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x60;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x5c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x58 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1405dd13d;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1405dd13d:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405dd188 FUN_1405dd188 body=97 status=ok
// SIG undefined FUN_1405dd188(void)

void FUN_1405dd188(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + 0xe10);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1405dd1f0();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_1405dd1cf;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1405dd1cf:
  *(longlong **)(param_1 + 0x1bc8) = plVar4;
  FUN_1405dd22a(param_1);
  return;
}



// FUNCTION 1405dd1f0 FUN_1405dd1f0 body=57 status=ok
// SIG undefined FUN_1405dd1f0(void)

void FUN_1405dd1f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5d30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5d30 = FUN_140002ddd(FUN_1465c5449,uVar1,L"ModularGrenadeDef");
  }
  return;
}



// FUNCTION 1405dd22a FUN_1405dd22a body=97 status=ok
// SIG undefined FUN_1405dd22a(void)

void FUN_1405dd22a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + 0xe10);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1405dd292();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_1405dd271;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1405dd271:
  *(longlong **)(param_1 + 0x1568) = plVar4;
  FUN_14029a11a(param_1);
  return;
}



// FUNCTION 1405dd292 FUN_1405dd292 body=57 status=ok
// SIG undefined FUN_1405dd292(void)

void FUN_1405dd292(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae660 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae660 = FUN_140002ddd(FUN_1465eb898,uVar1,L"OakProjectileDef");
  }
  return;
}



// FUNCTION 1405dd2cc FUN_1405dd2cc body=296 status=ok
// SIG undefined FUN_1405dd2cc(void)

void FUN_1405dd2cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  undefined1 local_70 [56];
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(DAT_14c9ecc98 + 1) != '\x01') || (*(int *)(param_1 + 0x4d18) == 0)) {
    puVar2 = *(undefined8 **)(param_1 + 0x5690);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x5690) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x5698);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x5698) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined1 *)(param_1 + 0x56c1) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_38 = 0;
  *(byte *)(param_1 + 0x56c0) = *(byte *)(param_1 + 0x56c0) | *(byte *)(param_1 + 0x56c1);
  FUN_1449f4448(param_1,param_2,local_88,local_70);
  FUN_1405dd40e(param_1,param_2,local_88,local_70);
  FUN_1449f40a6(param_1,param_3);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405dd40e FUN_1405dd40e body=2071 status=ok
// SIG undefined FUN_1405dd40e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1405dd40e(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  double *pdVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  byte bVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  void *_Dst;
  int iVar16;
  byte bVar17;
  uint uVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auStack_1f8 [40];
  float local_1d0;
  float local_1cc;
  int local_1c8;
  int local_1c4;
  uint local_1c0;
  uint local_1bc;
  ulonglong local_1b8;
  longlong local_1b0;
  double local_1a8;
  double local_1a0;
  longlong local_198;
  undefined1 (*local_190) [16];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 *local_160;
  float local_158 [4];
  undefined8 local_148;
  float afStack_138 [18];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((*(char *)(param_1 + 0x56c1) == '\x01') && (*(int *)(param_3 + 8) != 0)) {
    uVar34 = 0;
    uVar36 = 0;
    if (*(char *)(param_4 + 7) == '\0') {
      dVar44 = 0.0;
      uVar42 = 0;
      uVar40 = 0;
      dVar30 = 0.0;
      uVar26 = 0;
      uVar23 = 0;
      dVar45 = 0.0;
    }
    else {
      uVar23 = (undefined4)*param_4;
      uVar26 = (undefined4)((ulonglong)*param_4 >> 0x20);
      dVar30 = (double)param_4[1];
      uVar40 = (undefined4)param_4[2];
      uVar42 = (undefined4)((ulonglong)param_4[2] >> 0x20);
      dVar44 = (double)param_4[3];
      dVar45 = (double)param_4[4];
      uVar34 = (undefined4)param_4[5];
      uVar36 = (undefined4)((ulonglong)param_4[5] >> 0x20);
    }
    fVar53 = (float)((double)CONCAT44(uVar42,uVar40) - (double)CONCAT44(uVar36,uVar34));
    local_1cc = (float)(dVar30 - dVar45);
    fVar47 = (float)((double)CONCAT44(uVar26,uVar23) - dVar44);
    fVar48 = (float)((double)CONCAT44(uVar42,uVar40) + (double)CONCAT44(uVar36,uVar34)) - fVar53;
    local_1d0 = (float)(dVar30 + dVar45) - local_1cc;
    fVar52 = (float)((double)CONCAT44(uVar26,uVar23) + dVar44) - fVar47;
    *(float *)(param_1 + 0x56a0) = fVar47;
    *(float *)(param_1 + 0x56a4) = local_1cc;
    *(float *)(param_1 + 0x56a8) = fVar53;
    *(undefined4 *)(param_1 + 0x56ac) = 0;
    *(float *)(param_1 + 0x56b0) = 256.0 / fVar52;
    *(float *)(param_1 + 0x56b4) = 256.0 / local_1d0;
    *(float *)(param_1 + 0x56b8) = 1.0 / fVar48;
    *(undefined4 *)(param_1 + 0x56bc) = 0;
    _Dst = (void *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    uVar12 = (longlong)_Dst + 0x40000;
    if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
      puVar11 = (undefined8 *)FUN_14001cc68(0x50000);
      *(undefined4 *)(puVar11 + 1) = 0x4fff0;
      *puVar11 = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 **)(param_2 + 0x80) = puVar11;
      *(undefined8 **)(param_2 + 0x78) = puVar11 + 0xa000;
      _Dst = (void *)((longlong)puVar11 + 0x1fU & 0xfffffffffffffff0);
      uVar12 = (longlong)_Dst + 0x40000;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar12;
    iVar16 = 0;
    local_1b0 = param_2;
    memset(_Dst,0,0x40000);
    iVar21 = *(int *)(param_3 + 8);
    if (iVar21 != 0) {
      local_1d0 = local_1d0 * 0.00390625;
      fVar52 = fVar52 * 0.00390625;
      local_1c4 = 0xff;
      if (iVar21 < 0xff) {
        local_1c4 = iVar21;
      }
      local_1a0 = (double)fVar47;
      local_1a8 = (double)local_1cc;
      fVar46 = fVar48 * 0.0 + fVar53;
      local_188 = fVar48 + fVar53;
      local_1c4 = local_1c4 + (uint)(local_1c4 == 0);
      do {
        pdVar3 = *(double **)(*(longlong *)(param_1 + 0x5680) + (longlong)iVar16 * 8);
        uVar20 = (uint)((double)*(float *)(param_1 + 0x56b4) * ((pdVar3[1] - pdVar3[4]) - local_1a8)
                       );
        fVar53 = (float)(int)((pdVar3[1] + pdVar3[4]) - local_1a8) * *(float *)(param_1 + 0x56b4);
        fVar48 = 255.0;
        if (fVar53 <= 255.0) {
          fVar48 = fVar53;
        }
        local_1c0 = (uint)fVar48;
        if ((int)uVar20 <= (int)local_1c0) {
          local_1c8 = (int)((double)*(float *)(param_1 + 0x56b0) *
                           ((*pdVar3 - pdVar3[3]) - local_1a0));
          fVar53 = (float)(int)((*pdVar3 + pdVar3[3]) - local_1a0) * *(float *)(param_1 + 0x56b0);
          fVar48 = 255.0;
          if (fVar53 <= 255.0) {
            fVar48 = fVar53;
          }
          uVar12 = (ulonglong)(uint)(local_1c8 % 2);
          local_178 = (float)local_1c8 * fVar52 + fVar47;
          local_190 = (undefined1 (*) [16])(local_158 + uVar12 * 0xc);
          do {
            local_1b8 = (ulonglong)uVar20;
            local_1bc = uVar20 + 1;
            fVar54 = (float)(int)uVar20 * local_1d0 + local_1cc;
            fVar31 = *(float *)((longlong)pdVar3 + 0x44) * local_178;
            fVar33 = *(float *)((longlong)pdVar3 + 0x4c) * local_178;
            fVar53 = *(float *)(pdVar3 + 0xc);
            fVar57 = *(float *)((longlong)pdVar3 + 100);
            fVar58 = *(float *)(pdVar3 + 0xd);
            fVar59 = *(float *)((longlong)pdVar3 + 0x6c);
            fVar56 = *(float *)(pdVar3 + 0xe);
            fVar9 = *(float *)((longlong)pdVar3 + 0x74);
            fVar25 = *(float *)(pdVar3 + 0xf);
            fVar32 = *(float *)((longlong)pdVar3 + 0x7c);
            fVar24 = *(float *)(pdVar3 + 10) * fVar54 + *(float *)(pdVar3 + 8) * local_178;
            fVar27 = *(float *)((longlong)pdVar3 + 0x54) * fVar54 + fVar31;
            fVar28 = *(float *)(pdVar3 + 0xb) * fVar54 + *(float *)(pdVar3 + 9) * local_178;
            fVar29 = *(float *)((longlong)pdVar3 + 0x5c) * fVar54 + fVar33;
            fVar35 = fVar46 * fVar53;
            fVar37 = fVar46 * fVar57;
            fVar38 = fVar46 * fVar58;
            fVar39 = fVar46 * fVar59;
            auVar49._0_4_ = fVar35 + fVar24 + fVar56;
            auVar49._4_4_ = fVar37 + fVar27 + fVar9;
            auVar49._8_4_ = fVar38 + fVar28 + fVar25;
            auVar49._12_4_ = fVar39 + fVar29 + fVar32;
            fVar55 = (float)(int)local_1bc * local_1d0 + local_1cc;
            fVar41 = *(float *)(pdVar3 + 10) * fVar55 + *(float *)(pdVar3 + 8) * local_178;
            fVar31 = *(float *)((longlong)pdVar3 + 0x54) * fVar55 + fVar31;
            fVar43 = *(float *)(pdVar3 + 0xb) * fVar55 + *(float *)(pdVar3 + 9) * local_178;
            fVar33 = *(float *)((longlong)pdVar3 + 0x5c) * fVar55 + fVar33;
            fVar37 = fVar37 + fVar31 + fVar9;
            fVar38 = fVar38 + fVar43 + fVar25;
            auVar6._4_4_ = fVar37;
            auVar6._0_4_ = fVar35 + fVar41 + fVar56;
            auVar6._8_4_ = fVar38;
            auVar6._12_4_ = fVar39 + fVar33 + fVar32;
            auVar50 = insertps(auVar49,auVar6,0x30);
            *local_190 = auVar50;
            fVar53 = fVar53 * local_188;
            fVar57 = fVar57 * local_188;
            fVar58 = fVar58 * local_188;
            fVar59 = fVar59 * local_188;
            fVar24 = fVar24 + fVar53 + fVar56;
            fVar27 = fVar27 + fVar57 + fVar9;
            local_158[uVar12 * 0xc + 4] = fVar37;
            local_158[uVar12 * 0xc + 5] = fVar38;
            local_158[uVar12 * 0xc + 6] = fVar24;
            local_158[uVar12 * 0xc + 7] = fVar27;
            auVar50._4_4_ = fVar27;
            auVar50._0_4_ = fVar24;
            auVar50._8_4_ = fVar28 + fVar58 + fVar25;
            auVar50._12_4_ = fVar29 + fVar59 + fVar32;
            uVar4 = extractps(auVar50,2);
            *(undefined8 *)(afStack_138 + uVar12 * 0xc) = uVar4;
            fVar56 = fVar53 + fVar41 + fVar56;
            afStack_138[uVar12 * 0xc + 1] = fVar56;
            auVar8._4_4_ = fVar57 + fVar31 + fVar9;
            auVar8._0_4_ = fVar56;
            auVar8._8_4_ = fVar58 + fVar43 + fVar25;
            auVar8._12_4_ = fVar59 + fVar33 + fVar32;
            uVar4 = extractps(auVar8,1);
            *(undefined8 *)(afStack_138 + uVar12 * 0xc + 2) = uVar4;
            if (local_1c8 <= (int)fVar48) {
              iVar21 = local_1c8;
              do {
                iVar1 = iVar21 + 1;
                uVar13 = (ulonglong)(iVar1 - ((iVar21 - (iVar1 >> 0x1f)) + 1U & 0xfffffffe));
                fVar24 = (float)iVar1 * fVar52 + fVar47;
                fVar32 = fVar24 * *(float *)((longlong)pdVar3 + 0x44);
                fVar27 = fVar24 * *(float *)((longlong)pdVar3 + 0x4c);
                fVar53 = *(float *)(pdVar3 + 0xc);
                fVar57 = *(float *)((longlong)pdVar3 + 100);
                fVar58 = *(float *)(pdVar3 + 0xd);
                fVar59 = *(float *)(pdVar3 + 0xe);
                fVar56 = *(float *)((longlong)pdVar3 + 0x74);
                fVar9 = *(float *)(pdVar3 + 0xf);
                fVar35 = fVar54 * *(float *)(pdVar3 + 10) + fVar24 * *(float *)(pdVar3 + 8);
                fVar37 = fVar54 * *(float *)((longlong)pdVar3 + 0x54) + fVar32;
                fVar38 = fVar54 * *(float *)(pdVar3 + 0xb) + fVar24 * *(float *)(pdVar3 + 9);
                fVar28 = fVar46 * fVar53;
                fVar29 = fVar46 * fVar57;
                fVar31 = fVar46 * fVar58;
                fVar33 = fVar46 * *(float *)((longlong)pdVar3 + 0x6c);
                auVar51._0_4_ = fVar28 + fVar35 + fVar59;
                auVar51._4_4_ = fVar29 + fVar37 + fVar56;
                auVar51._8_4_ = fVar31 + fVar38 + fVar9;
                auVar51._12_4_ =
                     fVar33 + fVar54 * *(float *)((longlong)pdVar3 + 0x5c) + fVar27 +
                     *(float *)((longlong)pdVar3 + 0x7c);
                fVar25 = *(float *)(pdVar3 + 10) * fVar55 + fVar24 * *(float *)(pdVar3 + 8);
                fVar32 = *(float *)((longlong)pdVar3 + 0x54) * fVar55 + fVar32;
                fVar24 = *(float *)(pdVar3 + 0xb) * fVar55 + fVar24 * *(float *)(pdVar3 + 9);
                fVar29 = fVar29 + fVar32 + fVar56;
                fVar31 = fVar31 + fVar24 + fVar9;
                auVar7._4_4_ = fVar29;
                auVar7._0_4_ = fVar28 + fVar25 + fVar59;
                auVar7._8_4_ = fVar31;
                auVar7._12_4_ =
                     fVar33 + *(float *)((longlong)pdVar3 + 0x5c) * fVar55 + fVar27 +
                     *(float *)((longlong)pdVar3 + 0x7c);
                auVar50 = insertps(auVar51,auVar7,0x30);
                *(undefined1 (*) [16])(local_158 + uVar13 * 0xc) = auVar50;
                fVar53 = fVar53 * local_188;
                fVar57 = fVar57 * local_188;
                fVar58 = fVar58 * local_188;
                local_158[uVar13 * 0xc + 4] = fVar29;
                local_158[uVar13 * 0xc + 5] = fVar31;
                local_158[uVar13 * 0xc + 6] = fVar35 + fVar53 + fVar59;
                local_158[uVar13 * 0xc + 7] = fVar37 + fVar57 + fVar56;
                afStack_138[uVar13 * 0xc] = fVar38 + fVar58 + fVar9;
                afStack_138[uVar13 * 0xc + 1] = fVar53 + fVar25 + fVar59;
                afStack_138[uVar13 * 0xc + 2] = fVar57 + fVar32 + fVar56;
                afStack_138[uVar13 * 0xc + 3] = fVar58 + fVar24 + fVar9;
                bVar17 = 1;
                uVar18 = 0;
                bVar10 = 1;
                bVar19 = true;
                bVar22 = true;
                do {
                  bVar22 = (bool)(bVar22 & local_158[(ulonglong)(uVar18 >> 2) * 0xc +
                                                     (ulonglong)(uVar18 & 3) * 3 + 1] < -1.0);
                  bVar19 = (bool)(bVar19 & 1.0 < local_158[(ulonglong)(uVar18 >> 2) * 0xc +
                                                           (ulonglong)(uVar18 & 3) * 3 + 1]);
                  bVar10 = bVar10 & local_158[(ulonglong)(uVar18 >> 2) * 0xc +
                                              (ulonglong)(uVar18 & 3) * 3] < -1.0;
                  bVar17 = bVar17 & 1.0 < local_158[(ulonglong)(uVar18 >> 2) * 0xc +
                                                    (ulonglong)(uVar18 & 3) * 3];
                  uVar18 = uVar18 + 1;
                } while (uVar18 != 8);
                if (!(bool)(bVar10 | bVar17) && (!bVar22 && !bVar19)) {
                  uVar13 = (ulonglong)(uVar20 * 0x100 + iVar21);
                  *(uint *)((longlong)_Dst + uVar13 * 4) =
                       *(int *)((longlong)_Dst + uVar13 * 4) << 8 | iVar16 + 1U;
                }
                bVar22 = iVar21 != (int)fVar48;
                iVar21 = iVar1;
              } while (bVar22);
            }
            bVar22 = uVar20 != local_1c0;
            fStack_174 = local_178;
            fStack_170 = local_178;
            fStack_16c = local_178;
            uVar20 = local_1bc;
          } while (bVar22);
        }
        iVar16 = iVar16 + 1;
        local_198 = param_1;
        fStack_184 = local_188;
        fStack_180 = local_188;
        fStack_17c = local_188;
      } while (iVar16 != local_1c4);
    }
    local_148 = 0;
    local_158[2] = 9.22068e-41;
    local_158[0] = 5.60519e-45;
    local_158[1] = 9.18355e-41;
    FUN_14490af1f(&local_160,local_158,L"GbxLocalFogGridData",1);
    lVar5 = local_1b0;
    puVar11 = *(undefined8 **)(param_1 + 0x5698);
    *(undefined8 **)(param_1 + 0x5698) = local_160;
    local_160 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar11 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar11)(puVar11,1);
      }
      if (local_160 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_160 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*local_160)(local_160,1);
        }
      }
    }
    lVar14 = FUN_144735dd8(lVar5,param_1 + 0x5698,0);
    iVar21 = *(int *)(lVar5 + 0x590);
    uVar20 = iVar21 + 1;
    *(uint *)(lVar5 + 0x590) = uVar20;
    if (*(uint *)(lVar5 + 0x594) < uVar20) {
      FUN_144775ac8((longlong *)(lVar5 + 0x588));
    }
    lVar5 = *(longlong *)(lVar5 + 0x588);
    lVar15 = (longlong)iVar21 * 0x120;
    *(undefined2 *)(lVar5 + lVar15) = 0;
    *(longlong *)(lVar5 + 8 + lVar15) = lVar14;
    *(void **)(lVar5 + 0x10 + lVar15) = _Dst;
    *(undefined8 *)(lVar5 + 0x18 + lVar15) = 0x40000;
    *(undefined8 *)(lVar5 + 0x20 + lVar15) = 0;
    *(undefined8 *)(lVar5 + 0x30 + lVar15) = 0;
    *(undefined8 *)(lVar5 + 0x60 + lVar15) = 0;
    *(undefined8 *)(lVar5 + 0x70 + lVar15) = 0;
    *(undefined8 *)(lVar5 + 0xa0 + lVar15) = 0;
    *(undefined8 *)(lVar5 + 0xb0 + lVar15) = 0;
    *(undefined8 *)(lVar5 + 0xe0 + lVar15) = 0;
    *(undefined8 *)(lVar5 + 0xf0 + lVar15) = 0;
    *(byte *)(lVar14 + 0x24) = *(byte *)(lVar14 + 0x24) | 0x80;
  }
  *(undefined1 *)(param_1 + 0x56c1) = 0;
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405ddc26 FUN_1405ddc26 body=230 status=ok
// SIG undefined FUN_1405ddc26(void)

void FUN_1405ddc26(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0xc0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0xab) {
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc0)) {
      uVar2 = uVar1 / 0xc0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc0,0x10);
  }
  return;
}



// FUNCTION 1405ddd0c FUN_1405ddd0c body=128 status=ok
// SIG undefined FUN_1405ddd0c(void)

void FUN_1405ddd0c(longlong param_1,undefined4 param_2)

{
  if ((*(char *)(param_1 + 0xcd) != '\x01') || (*(char *)(param_1 + 0xce) == '\0')) {
    if (*(char *)(param_1 + 0x5d7) == '\x01') {
      FUN_14596032c(param_1,param_1 + 0x5e0);
      *(undefined1 *)(param_1 + 0x5d7) = 0;
    }
    if (*(char *)(param_1 + 0x5d8) == '\x01') {
      FUN_140755a72(param_1,"Event_SetEngoodification",param_1 + 0x5d6);
      *(undefined1 *)(param_1 + 0x5d8) = 0;
    }
  }
  FUN_1405ddd8c(param_1,param_2);
  return;
}



// FUNCTION 1405ddd8c FUN_1405ddd8c body=5574 status=ok
// SIG undefined FUN_1405ddd8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405ddd8c(longlong param_1,float param_2)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  wchar_t wVar5;
  ushort uVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  wchar_t ****_Src;
  undefined8 uVar14;
  code **ppcVar15;
  undefined1 uVar16;
  uint uVar17;
  undefined4 uVar18;
  size_t sVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  wchar_t *****pppppwVar24;
  longlong *plVar25;
  byte bVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined1 *puVar29;
  wchar_t ******ppppppwVar30;
  byte bVar31;
  byte bVar32;
  longlong lVar33;
  longlong lVar34;
  float fVar35;
  undefined1 auStack_1f8 [40];
  undefined4 local_1d0;
  undefined8 *local_1c8;
  ulonglong local_1c0;
  wchar_t ****local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  code **ppcStack_1a0;
  wchar_t ****local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 *local_128;
  undefined8 *local_120;
  int local_118;
  code *local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  wchar_t *****local_c8;
  code **ppcStack_c0;
  wchar_t ****local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(char *)(param_1 + 200) != '\x01') goto LAB_1405df1fd;
  param_2 = param_2 + *(float *)(param_1 + 0x5b8);
  if ((((*(int *)(param_1 + 0x388) != 0) && (uVar17 = *(uint *)(param_1 + 900), -1 < (int)uVar17))
      && ((int)uVar17 < DAT_14c9647dc)) &&
     (((plVar27 = (longlong *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
       plVar27 != (longlong *)0x0 && ((int)plVar27[2] == *(int *)(param_1 + 0x388))) &&
      ((*(uint *)(plVar27 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar27 + 1) & 0x10200000) == 0) {
      lVar28 = *plVar27;
    }
    else {
      lVar28 = 0;
    }
    if ((*(char *)(lVar28 + 0x180) == '\x01') && (*(char *)(param_1 + 0x5bc) == '\0')) {
      *(float *)(param_1 + 0x5b8) = param_2;
      goto LAB_1405df1fd;
    }
  }
  if ((*(char *)(param_1 + 0x3e0) != '\0') || (*(char *)(param_1 + 0x3e1) == '\x01')) {
    if (*(char *)(param_1 + 0x45f) == '\0') {
      if ((longlong)*(int *)(param_1 + 0x408) != 0) {
        lVar28 = 0;
        do {
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x400) + lVar28) + 0x8e) & 8) == 0)
          goto LAB_1405dde70;
          lVar28 = lVar28 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x408) * 0x10 != lVar28);
      }
LAB_1405ddf5c:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(DAT_14c707940 ^ (ulonglong)auStack_1f8 ^ (ulonglong)auStack_1f8);
    }
LAB_1405dde70:
    if (*(char *)(param_1 + 0x3e1) == '\x01') goto LAB_1405ddf5c;
  }
  if (*(char *)(param_1 + 0xce) != *(char *)(param_1 + 0xcd)) {
    if (*(char *)(param_1 + 0xce) == '\0') {
      if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        puVar29 = &DAT_14c96b238;
        if (*(char *)(param_1 + 0x3b9) != '\0') {
          puVar29 = &DAT_14c96b23a;
        }
        local_1a8._0_2_ = CONCAT11(1,*puVar29);
        ppcStack_1a0 = (code **)0x0;
        local_198 = (wchar_t ****)0x0;
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x1c0))();
      }
      FUN_1405afce0(param_1,*(undefined1 *)(param_1 + 0x5bd));
    }
    else {
      if (((((*(char *)(param_1 + 0xca) != '\x01') || (*(char *)(param_1 + 0xc9) != '\x01')) ||
           (*(char *)(param_1 + 0xcc) != '\0')) ||
          ((*(char *)(param_1 + 0x45c) != '\x01' || (*(char *)(param_1 + 0x45d) != '\x01')))) ||
         (*(char *)(param_1 + 0x45f) != '\0')) goto LAB_1405de03f;
      if ((longlong)*(int *)(param_1 + 0x408) != 0) {
        lVar28 = 0;
        do {
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x400) + lVar28) + 0x8e) & 8) == 0)
          goto LAB_1405de03f;
          lVar28 = lVar28 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x408) * 0x10 != lVar28);
      }
      FUN_143eb4a94(param_1,0);
    }
    *(char *)(param_1 + 0xcd) = *(char *)(param_1 + 0xce);
    if (*(char *)(param_1 + 0xce) == '\x01') {
      FUN_141588d26(param_1 + 0x4e0);
    }
    else {
      if (*(char *)(param_1 + 0x5c3) == '\x01') {
        FUN_1405afc0c(param_1,0);
      }
      FUN_1411935ec(param_1 + 0x468);
    }
  }
LAB_1405de03f:
  if (*(char *)(param_1 + 0x3e2) == '\x01') {
    *(undefined1 *)(param_1 + 0x3e2) = 0;
    if ((*(longlong *)(param_1 + 0x40) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) != 0)) {
      local_1a8 = "CohtmlPlugin";
      ppcStack_1a0 = (code **)CONCAT35(ppcStack_1a0._5_3_,0xc);
      uVar18 = FUN_14001a6c0(&local_1a8,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      FUN_1402c9134(&DAT_14c874628,uVar18,&local_1a8,1);
      local_c8 = *(wchar_t ******)(*(longlong *)(param_1 + 0x40) + 0x238);
      local_1a8 = (char *)&local_c8;
      FUN_145a9d54c(&DAT_14cb90bb8,&local_1a8);
    }
    if (*(int *)(param_1 + 0x388) == 0) {
LAB_1405de8b9:
      uVar20 = 0;
    }
    else {
      uVar17 = *(uint *)(param_1 + 900);
      uVar20 = 0;
      if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
        puVar23 = (undefined8 *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
        if ((puVar23 == (undefined8 *)0x0) ||
           ((*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x388) ||
            ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)))) goto LAB_1405de8b9;
        uVar20 = *puVar23;
      }
    }
    FUN_148a00a8e(uVar20);
    if ((*(char *)(param_1 + 0x3e0) == '\0') && (*(char *)(param_1 + 0x3e1) == '\0')) {
      *(undefined2 *)(param_1 + 0xc9) = 0;
      FUN_140d8f56e(param_1 + 1000,0);
      *(undefined8 *)(param_1 + 0x3ec) = 0;
      FUN_14656e28c(param_1,&local_c8);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        plVar27 = (longlong *)(param_1 + 0x28);
      }
      else {
        plVar27 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) + 8);
      }
      plVar27 = (longlong *)*plVar27;
      if (plVar27 != (longlong *)0x0) {
        ppppppwVar30 = (wchar_t ******)local_c8;
        if ((int)ppcStack_c0 == 0) {
          ppppppwVar30 = (wchar_t ******)&DAT_149dfb77a;
        }
        local_128 = (undefined8 *)0x0;
        if (ppppppwVar30 == (wchar_t ******)0x0) {
          local_120 = (undefined8 *)0x0;
          local_118 = 0;
        }
        else {
          sVar19 = wcslen((wchar_t *)ppppppwVar30);
          local_118 = FUN_14475aa65(0,ppppppwVar30,sVar19 & 0xffffffff);
          uVar17 = local_118 + 1;
          local_120 = (undefined8 *)0x0;
          if (0x80 < uVar17) {
            FUN_1446efa72(&local_128,0,uVar17,1);
            local_120 = local_128;
          }
          if (local_120 == (undefined8 *)0x0) {
            local_120 = &local_1a8;
          }
          FUN_14475a98a(local_120,uVar17,ppppppwVar30,(int)sVar19 + 1);
        }
        (**(code **)(*plVar27 + 0x10))(plVar27,local_120);
        if (local_128 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      if ((wchar_t ******)local_c8 != (wchar_t ******)0x0) {
        FUN_1400020a8();
      }
      if ((*(longlong *)(param_1 + 0x40) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) != 0)) {
        local_1a8 = "CohtmlPlugin";
        ppcStack_1a0 = (code **)CONCAT35(ppcStack_1a0._5_3_,0xc);
        uVar18 = FUN_14001a6c0(&local_1a8,1);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        FUN_1402c9134(&DAT_14c874628,uVar18,&local_1a8,1);
        FUN_145c3f07e(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x238));
      }
    }
  }
  if (((*(char *)(param_1 + 0xc9) != '\x01') || (*(char *)(param_1 + 0x45d) == '\0')) &&
     (plVar27 = *(longlong **)(param_1 + 0x40), plVar27 != (longlong *)0x0)) {
    (**(code **)(*plVar27 + 0x10))(plVar27,plVar27 + 0x1a,0,param_2);
  }
  if ((*(char *)(param_1 + 0xcd) == '\x01') && (*(char *)(param_1 + 0xce) != '\0')) {
    if ((*(longlong *)(param_1 + 0x40) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) != 0)) {
      FUN_1415c8144();
    }
  }
  else {
    if ((((*(char *)(param_1 + 0xcf) == '\x01') &&
         ((*(int *)(param_1 + 0x374) != 0 && (uVar17 = *(uint *)(param_1 + 0x370), -1 < (int)uVar17)
          ))) && ((int)uVar17 < DAT_14c9647dc)) &&
       (((plVar27 = (longlong *)
                    ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
         plVar27 != (longlong *)0x0 && ((int)plVar27[2] == *(int *)(param_1 + 0x374))) &&
        ((*(uint *)(plVar27 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar27 + 1) & 0x10200000) == 0) {
        lVar28 = *plVar27;
      }
      else {
        lVar28 = 0;
      }
      if (*(longlong *)(lVar28 + 0x78) != 0) {
        if ((*(uint *)(plVar27 + 1) & 0x10200000) == 0) {
          plVar25 = (longlong *)*plVar27;
        }
        else {
          plVar25 = (longlong *)0x0;
        }
        if ((*(uint *)(plVar27 + 1) & 0x10200000) == 0) {
          lVar28 = *plVar27;
        }
        else {
          lVar28 = 0;
        }
        uVar16 = (**(code **)(*plVar25 + 0x358))
                           (plVar25,*(undefined8 *)(*(longlong *)(lVar28 + 0x78) + 0xf8),
                            param_1 + 0xd0,0xffffffff);
        *(undefined1 *)(param_1 + 0xcb) = uVar16;
      }
    }
    if (*(char *)(param_1 + 0xca) == '\x01') {
      if ((*(int *)(param_1 + 0x4d8) != 0) &&
         (fVar35 = *(float *)(param_1 + 0x4bc) - param_2, *(float *)(param_1 + 0x4bc) = fVar35,
         fVar35 <= 0.0)) {
        FUN_143eb152c(param_1 + 0x468);
      }
      if (*(char *)(param_1 + 0x4b9) == '\x01') {
        FUN_1411935ec(param_1 + 0x468);
      }
      if (((*(int *)(param_1 + 0x3f0) != 0) &&
          (uVar17 = *(uint *)(param_1 + 0x3ec), -1 < (int)uVar17)) &&
         (((int)uVar17 < DAT_14c9647dc &&
          (((plVar27 = (longlong *)
                       ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
            plVar27 != (longlong *)0x0 && ((int)plVar27[2] == *(int *)(param_1 + 0x3f0))) &&
           ((*(uint *)(plVar27 + 1) & 0x10200000) == 0)))))) {
        if ((*(uint *)(plVar27 + 1) & 0x10200000) == 0) {
          lVar28 = *plVar27;
        }
        else {
          lVar28 = 0;
        }
        if ((*(char *)(lVar28 + 0xca) == '\x01') && (*(char *)(lVar28 + 0xcc) == '\0')) {
          if ((*(uint *)(plVar27 + 1) & 0x10200000) == 0) {
            lVar28 = *plVar27;
          }
          else {
            lVar28 = 0;
          }
          if (((*(char *)(lVar28 + 0xca) == '\x01') && (*(char *)(lVar28 + 0xc9) == '\x01')) &&
             ((*(char *)(lVar28 + 0xcc) == '\0' && (*(char *)(lVar28 + 0x45c) == '\x01')))) {
            local_1c0 = param_1 + 1000;
            if (((((((*(char *)(param_1 + 0x45e) == '\x01') &&
                    ((*(uint *)(plVar27 + 1) & 0x10200000) == 0)) &&
                   (lVar28 = *plVar27, lVar28 != 0)) &&
                  ((*(char *)(lVar28 + 0xca) == '\x01' && (*(char *)(lVar28 + 0xc9) == '\x01')))) &&
                 (*(char *)(lVar28 + 0xcc) == '\0')) &&
                ((*(char *)(lVar28 + 0x45c) == '\x01' && (*(char *)(param_1 + 0x45c) != '\0')))) &&
               (*(char *)(param_1 + 0x45f) == '\0')) {
              *(undefined1 *)(param_1 + 0x45d) = 0;
              local_108 = (code *)0x0;
              uStack_100 = 0;
              iVar7 = *(int *)(param_1 + 0x408);
              if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar7);
              }
              if (iVar7 != 0) {
                FUN_14656f680(&local_108);
                if ((longlong)*(int *)(param_1 + 0x408) != 0) {
                  plVar27 = *(longlong **)(param_1 + 0x400);
                  plVar25 = plVar27 + (longlong)*(int *)(param_1 + 0x408) * 2;
                  do {
                    lVar33 = *plVar27;
                    if ((*(byte *)(lVar33 + 0x8e) & 0x40) == 0) {
                      local_188 = (void *)0x0;
                      uStack_180 = 0;
                      local_198 = (wchar_t ****)0x0;
                      uStack_190 = 0;
                      local_1a8 = (char *)0x0;
                      ppcStack_1a0 = (code **)0x0;
                      if (*(longlong *)(lVar33 + 0x1a8) != 0) {
                        uVar17 = *(uint *)(lVar33 + 0x98);
                        if ((int)uVar17 < 2) {
                          FUN_1400021e4(lVar33 + 0x18,&local_1b8);
                          ppcStack_c0 = (code **)uStack_1b0;
                          uVar9 = (int)uStack_1b0 - 1;
                          if ((int)uStack_1b0 == 0) {
                            uVar9 = 0;
                          }
                          if (0 < (int)uVar9) {
                            uVar22 = 0;
                            do {
                              uVar6 = *(ushort *)((longlong)local_1b8 + uVar22 * 2);
                              *(ushort *)((longlong)local_1b8 + uVar22 * 2) =
                                   (ushort)(uVar6 - 0x41 < 0x1a) * 0x20 + uVar6;
                              uVar22 = uVar22 + 1;
                            } while (uVar9 != uVar22);
                          }
                          local_c8 = (wchar_t *****)local_1b8;
                          local_1b8 = (wchar_t ****)0x0;
                          uStack_1b0 = 0;
                        }
                        else {
                          local_c8 = (wchar_t *****)0x0;
                          pvVar8 = *(void **)(lVar33 + 0x90);
                          ppcStack_c0 = (code **)CONCAT44(ppcStack_c0._4_4_,uVar17);
                          FUN_1446dd670(&local_c8,uVar17,0);
                          memcpy(local_c8,pvVar8,(ulonglong)uVar17 * 2);
                        }
                        if ((wchar_t *****)local_198 != (wchar_t *****)0x0) {
                          FUN_1400020a8();
                        }
                        local_198 = (wchar_t ****)local_c8;
                        uStack_190 = (ulonglong)ppcStack_c0;
                        local_c8 = (wchar_t *****)0x0;
                        ppcStack_c0 = (code **)0x0;
                        if (((int)uVar17 < 2) && ((wchar_t *****)local_1b8 != (wchar_t *****)0x0)) {
                          FUN_1400020a8();
                        }
                        puVar21 = *(undefined4 **)(*(longlong *)(lVar33 + 0x1a8) + 8);
                        if (puVar21 == (undefined4 *)0x0) {
                          puVar21 = &DAT_14c9485f0;
                        }
                        local_c8 = (wchar_t *****)0x0;
                        ppcStack_c0 = (code **)0x0;
                        FUN_1400b2348(puVar21,&local_c8,1);
                        ppcVar15 = ppcStack_c0;
                        pppppwVar24 = local_c8;
                        uVar17 = (int)ppcStack_c0 - 1;
                        if ((int)ppcStack_c0 == 0) {
                          uVar17 = 0;
                        }
                        if (0 < (int)uVar17) {
                          uVar22 = 0;
                          do {
                            wVar5 = *(wchar_t *)((longlong)local_c8 + uVar22 * 2);
                            *(wchar_t *)((longlong)local_c8 + uVar22 * 2) =
                                 (ushort)((ushort)wVar5 - 0x41 < 0x1a) * 0x20 + wVar5;
                            uVar22 = uVar22 + 1;
                          } while (uVar17 != uVar22);
                        }
                        ppppppwVar30 = (wchar_t ******)local_c8;
                        local_c8 = (wchar_t *****)0x0;
                        ppcStack_c0 = (code **)0x0;
                        if ((wchar_t ******)local_1a8 == (wchar_t ******)0x0) {
                          local_1a8 = (char *)pppppwVar24;
                          ppcStack_1a0 = ppcVar15;
                        }
                        else {
                          FUN_1400020a8();
                          local_1a8 = (char *)pppppwVar24;
                          ppcStack_1a0 = ppcVar15;
                          if ((wchar_t ******)local_c8 != (wchar_t ******)0x0) {
                            FUN_1400020a8();
                          }
                        }
                        FUN_1402980a2(&local_188,*(undefined8 *)(lVar33 + 0xb0));
                        local_178 = CONCAT44(local_178._4_4_,(uint)*(byte *)(lVar33 + 0xc0));
                      }
                      uVar22 = uStack_100;
                      lVar33 = (longlong)(int)uStack_100;
                      uVar17 = (int)uStack_100 + 1;
                      uStack_100 = CONCAT44(uStack_100._4_4_,uVar17);
                      if (uStack_100._4_4_ < uVar17) {
                        FUN_148a06d00(&local_108,uVar22 & 0xffffffff);
                      }
                      ppppppwVar30 = (wchar_t ******)local_1a8;
                      lVar33 = lVar33 * 0x38;
                      pcVar1 = local_108 + lVar33;
                      *(undefined8 *)(local_108 + lVar33) = 0;
                      lVar34 = (longlong)(int)ppcStack_1a0;
                      *(int *)(local_108 + lVar33 + 8) = (int)ppcStack_1a0;
                      if (lVar34 == 0) {
                        *(undefined4 *)(pcVar1 + 0xc) = 0;
                      }
                      else {
                        FUN_1446dd670(pcVar1,(ulonglong)ppcStack_1a0 & 0xffffffff,0);
                        memcpy(*(void **)pcVar1,ppppppwVar30,lVar34 * 2);
                      }
                      _Src = local_198;
                      *(undefined8 *)(pcVar1 + 0x10) = 0;
                      lVar33 = (longlong)(int)uStack_190;
                      *(int *)(pcVar1 + 0x18) = (int)uStack_190;
                      if (lVar33 == 0) {
                        *(undefined4 *)(pcVar1 + 0x1c) = 0;
                      }
                      else {
                        FUN_1446dd670(pcVar1 + 0x10,uStack_190 & 0xffffffff,0);
                        memcpy(*(void **)(pcVar1 + 0x10),_Src,lVar33 * 2);
                      }
                      pvVar8 = local_188;
                      *(undefined8 *)(pcVar1 + 0x20) = 0;
                      lVar33 = (longlong)(int)uStack_180;
                      *(int *)(pcVar1 + 0x28) = (int)uStack_180;
                      if (lVar33 == 0) {
                        *(undefined4 *)(pcVar1 + 0x2c) = 0;
                      }
                      else {
                        FUN_1446dd670(pcVar1 + 0x20,uStack_180 & 0xffffffff,0);
                        memcpy(*(void **)(pcVar1 + 0x20),pvVar8,lVar33 * 2);
                      }
                      *(undefined4 *)(pcVar1 + 0x30) = (undefined4)local_178;
                      if (local_188 != (void *)0x0) {
                        FUN_1400020a8();
                      }
                      if ((wchar_t *****)local_198 != (wchar_t *****)0x0) {
                        FUN_1400020a8();
                      }
                      if ((wchar_t ******)local_1a8 != (wchar_t ******)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    plVar27 = plVar27 + 2;
                  } while (plVar27 != plVar25);
                  iVar7 = *(int *)(param_1 + 0x408);
                  if ((longlong)iVar7 != 0) {
                    lVar33 = *(longlong *)(param_1 + 0x400);
                    lVar34 = 0;
                    do {
                      plVar27 = *(longlong **)(lVar33 + lVar34);
                      (**(code **)(*plVar27 + 0x18))(plVar27,lVar28);
                      lVar34 = lVar34 + 0x10;
                    } while ((longlong)iVar7 * 0x10 != lVar34);
                  }
                }
              }
              local_1a8 = (char *)0x0;
              ppcStack_1a0 = (code **)0x0;
              FUN_1410c7fa0(local_1c0,&local_1a8);
              DAT_14c763ad8 = DAT_14c763ad8 + 1;
              FUN_1458ce502(lVar28,&local_108,&local_1a8);
              *(undefined1 *)(param_1 + 0x45f) = 1;
              FUN_1412f93dc(local_1a8,(ulonglong)ppcStack_1a0 & 0xffffffff);
              if ((wchar_t ******)local_1a8 != (wchar_t ******)0x0) {
                FUN_1400020a8();
              }
              FUN_1412f9391(local_108,uStack_100 & 0xffffffff);
              if (local_108 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            if (*(char *)(param_1 + 0x45f) == '\0') {
              iVar7 = *(int *)(param_1 + 0x3f8);
              if ((((iVar7 == 0) || (uVar17 = *(uint *)(param_1 + 0x3f4), (int)uVar17 < 0)) ||
                  (DAT_14c9647dc <= (int)uVar17)) ||
                 ((plVar27 = (longlong *)
                             ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
                  plVar27 == (longlong *)0x0 || ((int)plVar27[2] != iVar7)))) {
                if (_DAT_00000088 != 0) {
LAB_1405df259:
                  lVar28 = 0;
                  goto LAB_1405deb73;
                }
              }
              else {
                if ((*(uint *)(plVar27 + 1) & 0x10200000) == 0) {
                  lVar28 = *plVar27;
                }
                else {
                  lVar28 = 0;
                }
                if (*(int *)(lVar28 + 0x88) != 0) {
                  if (((int)plVar27[2] != iVar7) || ((*(uint *)(plVar27 + 1) & 0x10200000) != 0))
                  goto LAB_1405df259;
                  lVar28 = *plVar27;
LAB_1405deb73:
                  FUN_143eb5142(local_1c0,*(int *)(lVar28 + 0x88) == 2);
                }
              }
              bVar2 = *(byte *)(param_1 + 0x460);
              cVar3 = *(char *)(param_1 + 0x462);
              cVar4 = *(char *)(param_1 + 0x463);
              *(undefined1 *)(param_1 + 0x460) = 0;
              *(undefined2 *)(param_1 + 0x462) = 0;
              iVar7 = *(int *)(param_1 + 0x408);
              uVar18 = 0;
              if ((longlong)iVar7 != 0) {
                lVar28 = *(longlong *)(param_1 + 0x400);
                lVar33 = 0;
                do {
                  plVar27 = *(longlong **)(lVar28 + lVar33);
                  (**(code **)(*plVar27 + 0x38))(plVar27,param_2);
                  lVar33 = lVar33 + 0x10;
                } while ((longlong)iVar7 * 0x10 != lVar33);
                uVar18 = *(undefined4 *)(param_1 + 0x408);
              }
              ppcStack_c0 = &local_108;
              local_108 = (code *)CONCAT44(local_108._4_4_,param_2);
              uStack_100 = local_1c0;
              local_1c8 = &local_1a8;
              local_1a8 = (char *)0x0;
              ppcStack_1a0 = (code **)((ulonglong)ppcStack_1a0 & 0xffffffff00000000);
              local_c8 = (wchar_t *****)&LAB_143eba2c2;
              local_1d0 = 0;
              FUN_1401f8d10(L"ParallelFor Task",uVar18,1);
              if ((longlong)*(int *)(param_1 + 0x408) != 0) {
                lVar28 = *(longlong *)(param_1 + 0x400);
                bVar26 = *(byte *)(param_1 + 0x460);
                bVar31 = *(byte *)(param_1 + 0x462);
                bVar32 = *(byte *)(param_1 + 0x463);
                lVar33 = 0;
                do {
                  bVar26 = bVar26 | (byte)(*(uint *)(*(longlong *)(lVar28 + lVar33) + 0x8c) >> 10) &
                                    1;
                  *(byte *)(param_1 + 0x460) = bVar26;
                  bVar31 = bVar31 | (byte)(*(uint *)(*(longlong *)(lVar28 + lVar33) + 0x8c) >> 0xc)
                                    & 1;
                  *(byte *)(param_1 + 0x462) = bVar31;
                  bVar32 = bVar32 | (byte)(*(uint *)(*(longlong *)(lVar28 + lVar33) + 0x8c) >> 0xf)
                                    & 1;
                  *(byte *)(param_1 + 0x463) = bVar32;
                  lVar33 = lVar33 + 0x10;
                } while ((longlong)*(int *)(param_1 + 0x408) * 0x10 != lVar33);
              }
              lVar28 = DAT_14c9647c8;
              iVar7 = *(int *)(param_1 + 0x3f8);
              if (((iVar7 == 0) || (uVar17 = *(uint *)(param_1 + 0x3f4), (int)uVar17 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar17)) {
                bVar26 = _DAT_00000164 == 1 | *(byte *)(param_1 + 0x460);
                *(byte *)(param_1 + 0x460) = bVar26;
LAB_1405df277:
                lVar28 = 0;
              }
              else {
                plVar27 = (longlong *)
                          ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
                if (((plVar27 == (longlong *)0x0) || ((int)plVar27[2] != iVar7)) ||
                   ((*(uint *)(plVar27 + 1) & 0x10200000) != 0)) {
                  lVar33 = 0;
                }
                else {
                  lVar33 = *plVar27;
                }
                bVar26 = *(int *)(lVar33 + 0x164) == 1 | *(byte *)(param_1 + 0x460);
                *(byte *)(param_1 + 0x460) = bVar26;
                plVar27 = (longlong *)
                          ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                          *(longlong *)(lVar28 + (ulonglong)(uVar17 >> 0x10) * 8));
                if (((plVar27 == (longlong *)0x0) || ((int)plVar27[2] != iVar7)) ||
                   ((*(uint *)(plVar27 + 1) & 0x10200000) != 0)) goto LAB_1405df277;
                lVar28 = *plVar27;
              }
              bVar26 = *(int *)(lVar28 + 0x164) != 2 & bVar26;
              *(byte *)(param_1 + 0x460) = bVar26;
              if (bVar2 != bVar26) {
                if (*(int *)(param_1 + 0x3f0) == 0) {
LAB_1405df27e:
                  uVar20 = 0;
                }
                else {
                  uVar17 = *(uint *)(param_1 + 0x3ec);
                  uVar20 = 0;
                  if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
                    puVar23 = (undefined8 *)
                              ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
                    if ((puVar23 == (undefined8 *)0x0) ||
                       ((*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x3f0) ||
                        ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)))) goto LAB_1405df27e;
                    uVar20 = *puVar23;
                  }
                }
                FUN_1405afce0(uVar20);
                if (*(int *)(param_1 + 0x3f0) == 0) {
LAB_1405df285:
                  lVar28 = 0;
                }
                else {
                  uVar17 = *(uint *)(param_1 + 0x3ec);
                  lVar28 = 0;
                  if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
                    plVar27 = (longlong *)
                              ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
                    if ((plVar27 == (longlong *)0x0) ||
                       (((int)plVar27[2] != *(int *)(param_1 + 0x3f0) ||
                        ((*(uint *)(plVar27 + 1) & 0x10200000) != 0)))) goto LAB_1405df285;
                    lVar28 = *plVar27;
                  }
                }
                if (*(longlong *)(lVar28 + 0x40) != 0) {
                  uVar16 = *(undefined1 *)(param_1 + 0x460);
                  *(undefined1 *)(lVar28 + 0x5bf) = uVar16;
                  *(undefined1 *)(*(longlong *)(lVar28 + 0x40) + 0x26c) = uVar16;
                }
              }
              if (cVar3 != *(char *)(param_1 + 0x462)) {
                *(undefined1 *)(param_1 + 0x464) = 0;
                if (*(int *)(param_1 + 0x3f0) == 0) {
LAB_1405df28c:
                  uVar20 = 0;
                }
                else {
                  uVar17 = *(uint *)(param_1 + 0x3ec);
                  uVar20 = 0;
                  if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
                    puVar23 = (undefined8 *)
                              ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
                    if ((puVar23 == (undefined8 *)0x0) ||
                       ((*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x3f0) ||
                        ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)))) goto LAB_1405df28c;
                    uVar20 = *puVar23;
                  }
                }
                FUN_141224eb6(uVar20);
              }
              if (cVar4 != *(char *)(param_1 + 0x463)) {
                if (*(int *)(param_1 + 0x3f0) == 0) {
LAB_1405df293:
                  lVar28 = 0;
                }
                else {
                  uVar17 = *(uint *)(param_1 + 0x3ec);
                  lVar28 = 0;
                  if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
                    plVar27 = (longlong *)
                              ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
                    if ((plVar27 == (longlong *)0x0) ||
                       (((int)plVar27[2] != *(int *)(param_1 + 0x3f0) ||
                        ((*(uint *)(plVar27 + 1) & 0x10200000) != 0)))) goto LAB_1405df293;
                    lVar28 = *plVar27;
                  }
                }
                *(char *)(lVar28 + 0xcf) = *(char *)(param_1 + 0x463);
              }
              FUN_143eb5e70(local_1c0);
            }
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x500) == '\x01') {
      FUN_143eb22ba(param_1 + 0x4e0,param_2);
    }
    if ((((*(char *)(param_1 + 0xca) == '\x01') && (*(char *)(param_1 + 0xcc) == '\0')) &&
        (-1 < (short)*(undefined4 *)(param_1 + 8))) && (**(longlong **)(param_1 + 0x38) != 0)) {
      if (*(longlong *)(param_1 + 0x40) == 0) {
        puVar23 = (undefined8 *)(param_1 + 0x28);
      }
      else {
        puVar23 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) + 8);
      }
      ppppppwVar30 = (wchar_t ******)*puVar23;
      if (ppppppwVar30 != (wchar_t ******)0x0) {
        local_108 = (code *)0x0;
        local_f8 = (longlong *)0x0;
        lVar28 = **(longlong **)(param_1 + 0x38);
        if (lVar28 != 0) {
          do {
            uVar14 = uStack_d0;
            uVar13 = local_d8;
            uVar12 = uStack_e0;
            lVar33 = local_e8;
            pcVar1 = *(code **)(lVar28 + 0x10);
            uVar22 = *(ulonglong *)(lVar28 + 0x18);
            plVar27 = *(longlong **)(lVar28 + 0x20);
            uVar20 = *(undefined8 *)(lVar28 + 0x28);
            local_d8 = *(undefined8 *)(lVar28 + 0x40);
            uStack_d0 = *(undefined8 *)(lVar28 + 0x48);
            local_e8 = *(longlong *)(lVar28 + 0x30);
            uStack_e0 = *(undefined8 *)(lVar28 + 0x38);
            *(undefined8 *)(lVar28 + 0x40) = uVar13;
            *(undefined8 *)(lVar28 + 0x48) = uVar14;
            *(longlong *)(lVar28 + 0x30) = lVar33;
            *(undefined8 *)(lVar28 + 0x38) = uVar12;
            *(longlong **)(lVar28 + 0x20) = local_f8;
            *(undefined8 *)(lVar28 + 0x28) = uStack_f0;
            *(code **)(lVar28 + 0x10) = local_108;
            *(ulonglong *)(lVar28 + 0x18) = uStack_100;
            lVar33 = *(longlong *)(param_1 + 0x38);
            *(longlong *)(param_1 + 0x38) = lVar28;
            local_1a8 = *(char **)(lVar28 + 0x10);
            ppcStack_1a0 = *(code ***)(lVar28 + 0x18);
            local_198 = *(wchar_t *****)(lVar28 + 0x20);
            uVar10 = *(ulonglong *)(lVar28 + 0x28);
            pvVar8 = *(void **)(lVar28 + 0x30);
            uVar11 = *(ulonglong *)(lVar28 + 0x38);
            uVar12 = *(undefined8 *)(lVar28 + 0x40);
            uVar13 = *(undefined8 *)(lVar28 + 0x48);
            *(ulonglong *)(lVar28 + 0x40) = CONCAT44(uStack_94,local_98);
            *(ulonglong *)(lVar28 + 0x48) = CONCAT44(uStack_8c,uStack_90);
            *(ulonglong *)(lVar28 + 0x30) = CONCAT44(uStack_a4,local_a8);
            *(ulonglong *)(lVar28 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
            *(undefined8 *)(lVar28 + 0x20) = 0;
            *(ulonglong *)(lVar28 + 0x28) = CONCAT44(uStack_ac,uStack_b0);
            *(undefined8 *)(lVar28 + 0x10) = 0;
            *(code ***)(lVar28 + 0x18) = ppcStack_c0;
            uStack_190._0_4_ = (int)uVar10;
            uStack_190._4_4_ = (undefined4)(uVar10 >> 0x20);
            local_188._0_4_ = SUB84(pvVar8,0);
            local_188._4_4_ = (undefined4)((ulonglong)pvVar8 >> 0x20);
            uStack_180._0_4_ = (int)uVar11;
            uStack_180._4_4_ = (undefined4)(uVar11 >> 0x20);
            local_178._0_4_ = (undefined4)uVar12;
            local_178._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
            uStack_170._0_4_ = (undefined4)uVar13;
            uStack_170._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
            local_98 = (undefined4)local_178;
            uStack_94 = local_178._4_4_;
            uStack_90 = (undefined4)uStack_170;
            uStack_8c = uStack_170._4_4_;
            local_a8 = (undefined4)local_188;
            uStack_a4 = local_188._4_4_;
            uStack_a0 = (int)uStack_180;
            uStack_9c = uStack_180._4_4_;
            local_b8 = local_198;
            uStack_b0 = (int)uStack_190;
            uStack_ac = uStack_190._4_4_;
            local_c8 = (wchar_t *****)local_1a8;
            ppcStack_c0 = ppcStack_1a0;
            uStack_190 = uVar10;
            local_188 = pvVar8;
            uStack_180 = uVar11;
            local_178 = uVar12;
            uStack_170 = uVar13;
            local_108 = pcVar1;
            uStack_100 = uVar22;
            local_f8 = plVar27;
            uStack_f0 = uVar20;
            if ((wchar_t ******)local_1a8 != (wchar_t ******)0x0) {
              pppppwVar24 = (wchar_t *****)local_b8;
              if ((wchar_t *****)local_198 == (wchar_t *****)0x0) {
                pppppwVar24 = (wchar_t *****)&local_a8;
              }
              (*(code *)(*pppppwVar24)[2])();
            }
            if (lVar33 != 0) {
              if (*(longlong *)(lVar33 + 0x10) != 0) {
                plVar27 = (longlong *)(lVar33 + 0x30);
                if (*(longlong **)(lVar33 + 0x20) != (longlong *)0x0) {
                  plVar27 = *(longlong **)(lVar33 + 0x20);
                }
                (**(code **)(*plVar27 + 0x10))();
              }
              FUN_1400020a8(lVar33);
            }
            pcVar1 = local_108;
            if (local_108 != (code *)0x0) {
              plVar27 = local_f8;
              if (local_f8 == (longlong *)0x0) {
                plVar27 = &local_e8;
              }
              local_1a8 = (char *)ppppppwVar30;
              uVar20 = (**(code **)(*plVar27 + 8))();
              (*pcVar1)(uVar20,&local_1a8);
            }
            lVar28 = **(longlong **)(param_1 + 0x38);
          } while (lVar28 != 0);
        }
        if (local_108 != (code *)0x0) {
          plVar27 = &local_e8;
          if (local_f8 != (longlong *)0x0) {
            plVar27 = local_f8;
          }
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
      }
    }
    plVar27 = *(longlong **)(param_1 + 0x40);
    if (plVar27 != (longlong *)0x0) {
      (**(code **)(*plVar27 + 0x240))(plVar27,param_2);
    }
  }
  *(undefined4 *)(param_1 + 0x5b8) = 0;
LAB_1405df1fd:
  if ((local_80 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405df392 FUN_1405df392 body=54 status=ok
// SIG undefined FUN_1405df392(void)

undefined1 FUN_1405df392(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405df3c8();
  FUN_1402057ac(param_2,param_1,uVar1,0);
  FUN_1405df402(param_1,param_2);
  return 1;
}



// FUNCTION 1405df3c8 FUN_1405df3c8 body=57 status=ok
// SIG undefined FUN_1405df3c8(void)

void FUN_1405df3c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b7e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b7e0 = FUN_140002ddd(FUN_14652cffc,uVar1,L"MissionAction");
  }
  return;
}



// FUNCTION 1405df402 FUN_1405df402 body=1017 status=ok
// SIG undefined FUN_1405df402(void)

void FUN_1405df402(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  char *_Str;
  undefined8 uVar4;
  size_t sVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  char *local_50;
  int local_48;
  undefined1 local_44;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = DAT_14cb85df0;
  local_60 = DAT_14cb85de8;
  FUN_1448075d0(&local_50);
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar12 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar9[9];
      }
      iVar8 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_50) * 4);
      if (iVar8 != -1) {
        do {
          lVar11 = *plVar9 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar8 * 0x40) == (uint)local_50) {
            if ((((lVar11 != 0) &&
                 (puVar10 = (undefined8 *)(lVar11 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
            goto LAB_1405df4b2;
            break;
          }
          iVar8 = *(int *)(lVar11 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_1405df4b2:
  if ((byte *)*puVar10 == (byte *)0x0) {
    bVar18 = false;
  }
  else {
    bVar18 = (*(byte *)*puVar10 & 3) != 0;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (bVar18) goto LAB_1405df4ce;
  local_58 = DAT_14cb85dd8;
  local_60 = DAT_14cb85dd0;
  FUN_1448075d0(&local_50);
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar12 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar9[9];
      }
      iVar8 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_50) * 4);
      if (iVar8 != -1) {
        do {
          lVar11 = *plVar9 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar8 * 0x40) == (uint)local_50) {
            if (((lVar11 != 0) &&
                (puVar10 = (undefined8 *)(lVar11 + 0x28), puVar10 != (undefined8 *)0x0)) &&
               (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
            goto LAB_1405df5aa;
            break;
          }
          iVar8 = *(int *)(lVar11 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_1405df5aa:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  pbVar3 = (byte *)*puVar10;
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
LAB_1405df5ce:
    uVar4 = FUN_14064193e();
LAB_1405df5d3:
    FUN_140005f6c(param_1,uVar4,0,0);
  }
  else {
    _Str = *(char **)(pbVar3 + 8);
    if (_Str == (char *)0x0) {
LAB_1405df6fe:
      uVar6 = 0;
      uVar15 = 0;
    }
    else {
      sVar5 = strlen(_Str);
      iVar8 = (int)sVar5;
      if (iVar8 == 0) goto LAB_1405df6fe;
      lVar11 = (longlong)iVar8;
      pcVar13 = _Str + lVar11 + -1;
      uVar7 = 0;
      if (pcVar13 < _Str) {
        lVar17 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar13 - 0x30U)) break;
          uVar7 = uVar7 + 1;
          pcVar13 = pcVar13 + -1;
        } while (_Str <= pcVar13);
        lVar17 = 0;
        if ((((uVar7 != 0) && ((int)uVar7 < iVar8)) && (lVar17 = 0, uVar7 < 0xb)) &&
           (lVar14 = -(ulonglong)uVar7, _Str[lVar14 + lVar11 + -1] == '_')) {
          if ((uVar7 == 1) || (_Str[lVar14 + lVar11] != '0')) {
            lVar16 = 0;
            do {
              lVar17 = (longlong)_Str[lVar14 + lVar11] + lVar16 * 10;
              lVar16 = lVar17 + -0x30;
              lVar14 = lVar14 + 1;
            } while (lVar14 != 0);
            if (lVar16 < 0x7fffffff) {
              iVar8 = ~uVar7 + iVar8;
              lVar17 = lVar17 + -0x2f;
              goto LAB_1405df6aa;
            }
          }
          lVar17 = 0;
        }
LAB_1405df6aa:
        if (iVar8 == 0) goto LAB_1405df6fe;
      }
      local_44 = 0;
      local_50 = _Str;
      local_48 = iVar8;
      uVar7 = FUN_14001a6c0(&local_50,1);
      uVar15 = lVar17 << 0x20;
      uVar6 = (ulonglong)uVar7;
    }
    uVar6 = uVar6 | uVar15;
    if (uVar6 == DAT_14cb85e00) goto LAB_1405df5ce;
    if (uVar6 == DAT_14cb85e08) {
      uVar4 = FUN_1405df7fc();
      goto LAB_1405df5d3;
    }
    if (uVar6 == DAT_14cb85e10) {
      uVar4 = FUN_14652db8c();
      goto LAB_1405df5d3;
    }
    if (uVar6 == DAT_14cb85e18) {
      uVar4 = FUN_14652da96();
      goto LAB_1405df5d3;
    }
    if (uVar6 == DAT_14cb85e20) {
      uVar4 = FUN_14652da00();
      goto LAB_1405df5d3;
    }
  }
  plVar9 = (longlong *)*param_1;
  plVar12 = (longlong *)param_1[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
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
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
  }
LAB_1405df4ce:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405df7fc FUN_1405df7fc body=57 status=ok
// SIG undefined FUN_1405df7fc(void)

void FUN_1405df7fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bb00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bb00 = FUN_140002ddd(FUN_14652ddde,uVar1,L"MissionActionType_PlayMoment");
  }
  return;
}



// FUNCTION 1405df836 FUN_1405df836 body=128 status=ok
// SIG undefined FUN_1405df836(void)

undefined4 FUN_1405df836(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405df8b8(param_1,&local_30,*(undefined4 *)(param_2 + 0xc));
  uVar3 = (**(code **)(*local_30 + 0x10))(local_30,param_2);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405df8b8 FUN_1405df8b8 body=375 status=ok
// SIG undefined FUN_1405df8b8(void)

longlong * FUN_1405df8b8(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x520);
  plVar7 = *(longlong **)(param_1 + 0x528);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x318) <= (int)param_3)) goto LAB_1405df941;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)param_3 * 0x10);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + (ulonglong)param_3 * 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (lVar3 != 0) {
    lVar5 = *(longlong *)(lVar3 + 0x38);
    plVar6 = *(longlong **)(lVar3 + 0x40);
    if (plVar6 == (longlong *)0x0) {
      if (lVar5 != 0) {
LAB_1405df9f9:
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        plVar7 = plVar6;
        lVar8 = lVar5;
        if (plVar6 != (longlong *)0x0) goto LAB_1405df98b;
        plVar7 = (longlong *)0x0;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      if (lVar5 != 0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        goto LAB_1405df9f9;
      }
LAB_1405df98b:
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
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1405df941:
  *param_2 = lVar8;
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_2;
}



// FUNCTION 1405dfa30 FUN_1405dfa30 body=744 status=ok
// SIG undefined FUN_1405dfa30(void)

ulonglong FUN_1405dfa30(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 unaff_RBX;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar13 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),7);
  if (*(char *)((longlong)param_1 + 0x1a) == '\x01') {
    uVar6 = (**(code **)(*param_1 + 0x58))();
    cVar5 = (char)uVar6;
    if (cVar5 != '\a') {
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0xc));
      plVar7 = (longlong *)FUN_1405e0106(param_1 + 0x1f,*(undefined4 *)(param_2 + 0xc),&local_78);
      local_78 = *(longlong *)(param_2 + 0x20);
      local_70 = *(undefined8 *)(param_2 + 0x28);
      plVar3 = *(longlong **)(param_2 + 0x30);
      if (plVar3 == (longlong *)0x0) {
        local_68 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_68 = plVar3;
      }
      uVar15 = (uint)((ulonglong)local_78 >> 0x10);
      uVar11 = (uint)local_78 & 0xffff;
      iVar8 = ((uint)local_78 << 0x10 | uVar11) + (int)((ulonglong)local_78 >> 0x20) +
              (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar11 >> 4);
      iVar9 = iVar8 - (uVar6 & 0xff);
      uVar15 = iVar9 * 0x100 ^ 0x9e3779b9U - iVar8;
      uVar14 = uVar15 >> 0xd ^ ((uVar6 & 0xff) - iVar9) - uVar15;
      uVar11 = uVar14 >> 0xc ^ (iVar9 - uVar15) - uVar14;
      uVar15 = uVar11 << 0x10 ^ (uVar15 - uVar14) - uVar11;
      uVar14 = uVar15 >> 5 ^ (uVar14 - uVar11) - uVar15;
      uVar11 = uVar14 >> 3 ^ (uVar11 - uVar15) - uVar14;
      uVar15 = uVar11 << 10 ^ (uVar15 - uVar14) - uVar11;
      local_60 = cVar5;
      if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
        plVar10 = plVar7 + 7;
        if ((longlong *)plVar7[8] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar7[8];
        }
        iVar8 = *(int *)((longlong)plVar10 +
                        (ulonglong)
                        ((int)plVar7[9] - 1U & (uVar15 >> 0xf ^ uVar14 - (uVar11 + uVar15))) * 4);
        if (iVar8 != -1) {
          lVar4 = *plVar7;
          do {
            lVar12 = (longlong)iVar8 * 0x38;
            lVar2 = lVar4 + lVar12;
            if ((*(longlong *)(lVar4 + lVar12) == local_78) &&
               (*(char *)(lVar4 + 0x18 + lVar12) == cVar5)) {
              if (lVar2 != 0) goto LAB_1405dfc02;
              break;
            }
            iVar8 = *(int *)(lVar2 + 0x30);
          } while (iVar8 != -1);
        }
      }
      local_58 = &local_78;
      FUN_1469b5336(plVar7,&local_4c);
      lVar2 = *plVar7 + (longlong)local_4c * 0x38;
LAB_1405dfc02:
      plVar7 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_68 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar3 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      iVar8 = 1;
      if (1 < *(int *)(lVar2 + 0x28)) {
        iVar8 = *(int *)(lVar2 + 0x28);
      }
      fVar16 = (float)(**(code **)(*param_1 + 0x50))
                                (param_1,*(uint *)(param_2 + 0x40) & 0x7fffffff,iVar8 + -1);
      if ((double)fVar16 < DAT_14c866ff8 - *(double *)(lVar2 + 0x20)) {
        *(double *)(lVar2 + 0x20) = DAT_14c866ff8;
        *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + 1;
        uVar13 = (ulonglong)uVar6;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 1405dfd54 FUN_1405dfd54 body=920 status=ok
// SIG undefined FUN_1405dfd54(void)

ulonglong FUN_1405dfd54(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  longlong *unaff_RSI;
  undefined7 uVar7;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong *local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  undefined4 *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)((longlong)param_1 + 0x1a) == '\x01') {
    local_a0 = *(undefined4 *)(param_2 + 0xc);
    unaff_RSI = (longlong *)FUN_1405e0106(param_1 + 0x1f,local_a0,&local_a0);
    local_70 = *(undefined8 *)(param_2 + 0x20);
    uStack_68 = *(undefined8 *)(param_2 + 0x28);
    local_60 = *(longlong **)(param_2 + 0x30);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    fVar4 = *(float *)(param_2 + 0x40);
    cVar6 = (**(code **)(*param_1 + 0x60))(param_1,&local_70);
    uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (cVar6 == '\0') {
      cVar6 = (**(code **)(*param_1 + 0x68))(param_1,&local_70);
      bVar5 = true;
      if (cVar6 != '\0') {
        if (fVar4 <= *(float *)(param_1 + 4)) {
          if (-*(float *)(param_1 + 4) <= fVar4) {
            local_80 = 0;
            local_78 = 0;
            local_a0 = (undefined4)local_70;
            uStack_9c = local_70._4_4_;
            uStack_98 = (undefined4)uStack_68;
            uStack_94 = uStack_68._4_4_;
            local_90 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            local_88 = 2;
            local_58 = &local_a0;
            local_50 = &local_80;
            FUN_1405e01c4(unaff_RSI,local_44);
            plVar2 = local_90;
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_90 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_90)(local_90);
                LOCK();
                piVar3 = (int *)((longlong)plVar2 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            local_80 = 0;
            local_78 = 0;
            local_a0 = (undefined4)local_70;
            uStack_9c = local_70._4_4_;
            uStack_98 = (undefined4)uStack_68;
            uStack_94 = uStack_68._4_4_;
            local_90 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            local_88 = 3;
            local_58 = &local_a0;
            local_50 = &local_80;
            FUN_1405e01c4(unaff_RSI,local_44);
            unaff_RSI = local_90;
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_90 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_90)(local_90);
                LOCK();
                piVar3 = (int *)((longlong)unaff_RSI + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*unaff_RSI + 0x10))(unaff_RSI);
                }
              }
            }
            goto LAB_1405dfdf8;
          }
          unaff_RSI = (longlong *)CONCAT71(uVar7,3);
        }
        else {
          unaff_RSI = (longlong *)CONCAT71(uVar7,2);
        }
        goto LAB_1405dfe57;
      }
    }
    else {
      if (fVar4 < -*(float *)((longlong)param_1 + 0x1c)) {
        unaff_RSI = (longlong *)0x0;
      }
      else {
        if (fVar4 <= *(float *)((longlong)param_1 + 0x1c)) {
          local_80 = 0;
          local_78 = 0;
          local_a0 = (undefined4)local_70;
          uStack_9c = local_70._4_4_;
          uStack_98 = (undefined4)uStack_68;
          uStack_94 = uStack_68._4_4_;
          local_90 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          local_88 = 0;
          local_58 = &local_a0;
          local_50 = &local_80;
          FUN_1405e01c4(unaff_RSI,local_44);
          plVar2 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_90 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar3 = (int *)((longlong)plVar2 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          local_80 = 0;
          local_78 = 0;
          local_a0 = (undefined4)local_70;
          uStack_9c = local_70._4_4_;
          uStack_98 = (undefined4)uStack_68;
          uStack_94 = uStack_68._4_4_;
          local_90 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          local_88 = 1;
          local_58 = &local_a0;
          local_50 = &local_80;
          FUN_1405e01c4(unaff_RSI,local_44);
          unaff_RSI = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_90 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar3 = (int *)((longlong)unaff_RSI + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*unaff_RSI + 0x10))(unaff_RSI);
              }
            }
          }
          bVar5 = true;
          goto LAB_1405dfdf8;
        }
        unaff_RSI = (longlong *)CONCAT71(uVar7,1);
      }
LAB_1405dfe57:
      bVar5 = false;
    }
LAB_1405dfdf8:
    plVar2 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (!bVar5) goto LAB_1405dfe14;
  }
  unaff_RSI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),7);
LAB_1405dfe14:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return (ulonglong)unaff_RSI & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e0106 FUN_1405e0106 body=188 status=ok
// SIG undefined FUN_1405e0106(void)

longlong FUN_1405e0106(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1405e016b;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145727108(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1405e016b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1405e01c4 FUN_1405e01c4 body=471 status=ok
// SIG undefined FUN_1405e01c4(void)

undefined4 * FUN_1405e01c4(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405e039c(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  *local_40 = *puVar2;
  local_40[1] = puVar2[1];
  local_40[2] = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  bVar1 = *(byte *)(puVar2 + 3);
  *(byte *)(local_40 + 3) = bVar1;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *(undefined4 *)(local_40 + 4) = *puVar3;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar5;
  *(undefined4 *)(local_40 + 5) = uVar6;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar7;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  uVar9 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar15 = (uint)uVar4 & 0xffff;
  iVar10 = ((uint)uVar4 << 0x10 | uVar15) + (int)((ulonglong)uVar4 >> 0x20) +
           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar15 >> 4);
  iVar11 = iVar10 - (uint)bVar1;
  uVar15 = iVar11 * 0x100 ^ 0x9e3779b9U - iVar10;
  uVar13 = uVar15 >> 0xd ^ ((uint)bVar1 - iVar11) - uVar15;
  uVar9 = uVar13 >> 0xc ^ (iVar11 - uVar15) - uVar13;
  uVar15 = uVar9 << 0x10 ^ (uVar15 - uVar13) - uVar9;
  uVar13 = uVar15 >> 5 ^ (uVar13 - uVar9) - uVar15;
  uVar9 = uVar13 >> 3 ^ (uVar9 - uVar15) - uVar13;
  uVar15 = uVar9 << 10 ^ (uVar15 - uVar13) - uVar9;
  uVar9 = uVar15 >> 0xf ^ uVar13 - (uVar9 + uVar15);
  cVar8 = FUN_1405e0488(param_1,uVar9,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar8 == '\0') {
    uVar15 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar15) {
      uVar12 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar15 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x34) = uVar9;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_145726f12(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e039c FUN_1405e039c body=235 status=ok
// SIG undefined FUN_1405e039c(void)

int * FUN_1405e039c(longlong *param_1,int *param_2)

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
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1405e0488 FUN_1405e0488 body=361 status=ok
// SIG undefined FUN_1405e0488(void)

undefined8 FUN_1405e0488(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      lVar5 = *param_1;
      do {
        lVar11 = (longlong)iVar15 * 0x38;
        plVar12 = (longlong *)(lVar5 + lVar11);
        if ((*(longlong *)(lVar5 + lVar11) == *param_3) &&
           (*(char *)(lVar5 + 0x18 + lVar11) == (char)param_3[3])) {
          plVar6 = (longlong *)plVar12[2];
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
          lVar5 = *param_3;
          lVar11 = param_3[1];
          lVar8 = param_3[2];
          lVar9 = param_3[3];
          lVar10 = param_3[5];
          plVar12[4] = param_3[4];
          plVar12[5] = lVar10;
          plVar12[2] = lVar8;
          plVar12[3] = lVar9;
          *plVar12 = lVar5;
          plVar12[1] = lVar11;
          iVar4 = *param_4;
          lVar5 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar5 + (longlong)(int)param_1[6] * 0x38) = iVar4;
          }
          *(undefined4 *)(lVar5 + (longlong)iVar4 * 0x38) = 0xffffffff;
          uVar13 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar13 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar5 + (longlong)iVar4 * 0x38 + 4) = uVar13;
          *(int *)(param_1 + 6) = iVar4;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar12 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar12 = (longlong *)param_1[4];
          }
          iVar14 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar14 = iVar4;
          }
          bVar7 = (byte)iVar4 & 0x1f;
          puVar3 = (uint *)((longlong)plVar12 + (longlong)(iVar14 >> 5) * 4);
          *puVar3 = *puVar3 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
          *param_4 = iVar15;
          return CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
        }
        iVar15 = (int)plVar12[6];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 1405e05f2 FUN_1405e05f2 body=206 status=ok
// SIG undefined FUN_1405e05f2(void)

bool FUN_1405e05f2(longlong param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  iVar2 = FUN_1405e090e(param_1 + 0x48,
                        uVar1 * 0x40 + (local_28 & 0xffff) + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1,
                        &local_38);
  if (iVar2 == -1) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = param_3;
    uVar1 = FUN_1447addd0(&local_58,0x10);
    iVar2 = FUN_1405e090e(param_1 + 0x48,
                          uVar1 * 0x40 + (local_48 & 0xffff) + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1,
                          &local_58);
    bVar3 = iVar2 != -1;
  }
  else {
    bVar3 = true;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e06c2 FUN_1405e06c2 body=234 status=ok
// SIG undefined FUN_1405e06c2(void)

undefined8 *
FUN_1405e06c2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = FUN_1405e0c42(param_1 + 7);
  if (lVar6 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
LAB_1405e0779:
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_1405e0779;
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
      local_48 = *param_1;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_40 = plVar3;
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
    local_58 = &local_48;
    FUN_1401abfd8(lVar6,param_2,param_3,param_4);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1405e07ae FUN_1405e07ae body=351 status=ok
// SIG undefined FUN_1405e07ae(void)

void FUN_1405e07ae(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 2;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405e0832;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_1405e0832:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 1)) {
    uVar7 = uVar5 >> 1 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,2,2);
  return;
}



// FUNCTION 1405e090e FUN_1405e090e body=132 status=ok
// SIG undefined FUN_1405e090e(void)

int FUN_1405e090e(longlong *param_1,uint param_2,int *param_3)

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
        if ((((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar3) == param_3[2])) &&
           ((*(int *)(lVar2 + 0xc + lVar3) == param_3[3] &&
            (*(int *)(lVar2 + lVar3 + 0x10) == param_3[4])))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x14 + lVar3);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1405e0992 FUN_1405e0992 body=289 status=ok
// SIG undefined FUN_1405e0992(void)

void FUN_1405e0992(longlong param_1,uint param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_4 & 1) != 0) {
    FUN_1405e0ab4(param_1,param_2,param_3);
  }
  if ((param_4 & 2) != 0) {
    local_40 = (undefined2)param_3;
    local_48 = param_1;
    if (*(int *)(param_1 + 0x118) != 0) {
      lVar1 = param_1 + 0x108;
      if (*(longlong *)(param_1 + 0x110) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x110);
      }
      iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & param_2 & 0xffff) * 4);
      while (iVar2 = iVar3, iVar2 != -1) {
        lVar1 = *(longlong *)(param_1 + 0xd0);
        iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
        if (*(short *)(lVar1 + (longlong)iVar2 * 0xc) == (short)param_2) {
          do {
            FUN_1405e0ab4(param_1,*(undefined2 *)(lVar1 + 2 + (longlong)iVar2 * 0xc),param_3);
            FUN_1405e1d2e(param_1,*(undefined2 *)
                                   (*(longlong *)(param_1 + 0xd0) + 2 + (longlong)iVar2 * 0xc),
                          &local_48);
            do {
              iVar2 = iVar3;
              if (iVar2 == -1) goto LAB_1405e09dc;
              lVar1 = *(longlong *)(param_1 + 0xd0);
              iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
            } while (*(short *)(lVar1 + (longlong)iVar2 * 0xc) != (short)param_2);
          } while( true );
        }
      }
    }
  }
LAB_1405e09dc:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e0ab4 FUN_1405e0ab4 body=396 status=ok
// SIG undefined FUN_1405e0ab4(void)

void FUN_1405e0ab4(longlong param_1,undefined4 param_2,ushort param_3)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  uint local_68 [8];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0x10000000000;
  uVar4 = (uint)param_3;
  iVar12 = uVar4 + 1;
  iVar10 = iVar12;
  if (0xff < uVar4) {
    FUN_14497ddce(local_68,0);
    iVar10 = (int)local_48 + iVar12;
  }
  iVar6 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar6 = iVar10;
  }
  local_48 = CONCAT44(local_48._4_4_,iVar10);
  if (iVar10 % 0x20 != 0) {
    bVar9 = -(char)(iVar10 % 0x20);
    local_68[iVar6 >> 5] = (local_68[iVar6 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
  }
  FUN_1447c45ca(local_68,0,iVar12,0);
  uVar7 = 1 << ((byte)param_3 & 0x1f);
  local_68[param_3 >> 5] = local_68[param_3 >> 5] | uVar7;
  lVar3 = *(longlong *)(param_1 + 0x98);
  uVar13 = (ulonglong)(ushort)param_2;
  uVar1 = *(ushort *)(lVar3 + uVar13 * 8);
  if (uVar1 != 0xffff) {
    lVar11 = (ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_1 + 8);
    if (((param_3 != 0xffff) && ((int)uVar4 < *(int *)(lVar11 + 0x20))) &&
       ((*(uint *)(lVar11 + (ulonglong)(param_3 >> 5) * 4) & uVar7) != 0)) goto LAB_1405e0b82;
    FUN_14010b303(lVar11,local_68,1,&local_69);
  }
  uVar8 = FUN_14055ca2e(param_1,local_68,0);
  sVar2 = *(short *)(lVar3 + uVar13 * 8);
  if (sVar2 == -1) {
    uVar5 = FUN_1449dfe96(param_1,uVar8,param_2,1);
  }
  else {
    uVar5 = FUN_14055cf42(param_1,uVar8,sVar2,*(undefined2 *)(lVar3 + 2 + uVar13 * 8));
  }
  *(short *)(lVar3 + uVar13 * 8) = (short)uVar8;
  *(undefined2 *)(lVar3 + 2 + uVar13 * 8) = uVar5;
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
  *(undefined1 *)(param_1 + 0x261) = 1;
LAB_1405e0b82:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e0c42 FUN_1405e0c42 body=188 status=ok
// SIG undefined FUN_1405e0c42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1405e0c42(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 2) >> (_DAT_14cab3294 & 0x1f) & 1) != 0) {
    uVar5 = (1 << ((byte)_DAT_14cab3294 & 0x1f)) - 1U & *(uint *)(param_1 + 2);
    uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar2 = *param_1;
    uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar6 * 6);
    lVar7 = lVar2 + uVar3;
    if (uVar3 == 0xffff) {
      lVar7 = 0;
    }
    puVar4 = (undefined8 *)((ulonglong)*(byte *)(lVar2 + 4 + uVar6 * 6) + lVar7);
    if (puVar4 != (undefined8 *)0x0) {
      cVar1 = *(char *)(lVar2 + uVar6 * 6 + 5);
      if (cVar1 != '\x01') {
        if (cVar1 == '\0') {
          return puVar4;
        }
        if (cVar1 != '\x02') {
          return (undefined8 *)0x0;
        }
      }
      return (undefined8 *)*puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1405e0cfe FUN_1405e0cfe body=121 status=ok
// SIG undefined FUN_1405e0cfe(void)

longlong * FUN_1405e0cfe(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (longlong)param_4 * 8 + *param_2;
  }
  return param_1;
}



// FUNCTION 1405e0d78 FUN_1405e0d78 body=372 status=ok
// SIG undefined FUN_1405e0d78(void)

void FUN_1405e0d78(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 6;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405e0e00;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_1405e0e00:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 6)) {
    uVar7 = uVar5 / 6 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,6,2);
  return;
}



// FUNCTION 1405e0eee FUN_1405e0eee body=306 status=ok
// SIG undefined FUN_1405e0eee(void)

undefined8 * FUN_1405e0eee(longlong param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  int local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = FUN_14055ca2e(param_1,param_3,param_4);
  iVar5 = *param_4;
  FUN_1405605c6(param_1 + 0x98,local_58);
  *local_50 = 0xffff;
  *(undefined2 *)(local_50 + 1) = 0xffff;
  lVar6 = (longlong)local_58[0];
  uVar4 = FUN_1449dfe96(param_1,iVar3,local_58[0],1);
  lVar1 = *(longlong *)(param_1 + 0x98);
  *(short *)(lVar1 + lVar6 * 8) = (short)iVar3;
  *(short *)(lVar1 + 2 + lVar6 * 8) = (short)uVar4;
  if (1 < iVar5) {
    iVar5 = iVar5 + -1;
    do {
      FUN_1405605c6(param_1 + 0x98,local_58);
      *local_50 = 0xffff;
      *(undefined2 *)(local_50 + 1) = 0xffff;
      lVar6 = (longlong)local_58[0];
      uVar2 = FUN_1449dfe96(param_1,iVar3,local_58[0],1);
      lVar1 = *(longlong *)(param_1 + 0x98);
      *(short *)(lVar1 + lVar6 * 8) = (short)iVar3;
      *(undefined2 *)(lVar1 + 2 + lVar6 * 8) = uVar2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 8);
  *(undefined4 *)(param_2 + 1) = uVar4;
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
  *(undefined1 *)(param_1 + 0x261) = 1;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e1022 FUN_1405e1022 body=355 status=ok
// SIG undefined FUN_1405e1022(void)

undefined8 * FUN_1405e1022(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  puVar1 = param_1 + 3;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  uVar3 = *(ushort *)((longlong)param_1 + 2);
  iVar8 = uVar3 + 1;
  iVar6 = iVar8;
  if (0xff < uVar3) {
    FUN_14497ddce(puVar1,0);
    iVar6 = *(int *)(param_1 + 7) + iVar8;
  }
  iVar9 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar9 = iVar6;
  }
  *(int *)(param_1 + 7) = iVar6;
  if (iVar6 % 0x20 != 0) {
    bVar5 = -(char)(iVar6 % 0x20);
    *(uint *)((longlong)puVar1 + (longlong)(iVar9 >> 5) * 4) =
         (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
         (bVar5 & 0x1f);
  }
  FUN_1447c45ca(puVar1,0,iVar8,0);
  puVar2 = (uint *)((longlong)param_1 + (ulonglong)(uVar3 >> 5) * 4 + 0x18);
  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
  uVar3 = *(ushort *)((longlong)param_1 + 4);
  iVar8 = uVar3 + 1;
  iVar6 = *(int *)(param_1 + 7);
  iVar9 = iVar8 - iVar6;
  if (iVar9 == 0 || iVar8 < iVar6) goto LAB_1405e1133;
  if (iVar6 == 0) {
LAB_1405e10f8:
    if (*(int *)((longlong)param_1 + 0x3c) <= (int)(uint)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0x100;
      FUN_14497ddce(puVar1,iVar6);
      iVar8 = *(int *)(param_1 + 7) + iVar9;
    }
    iVar7 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar7 = iVar8;
    }
    *(int *)(param_1 + 7) = iVar8;
    if (iVar8 % 0x20 != 0) {
      bVar5 = -(char)(iVar8 % 0x20);
      *(uint *)((longlong)puVar1 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
           (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar6 + 0x1e;
    if (-1 < iVar6 + -1) {
      iVar7 = iVar6 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1405e10f8;
    *(int *)(param_1 + 7) = iVar8;
  }
  FUN_1447c45ca(puVar1,iVar6,iVar9,0);
LAB_1405e1133:
  puVar2 = (uint *)((longlong)param_1 + (ulonglong)(uVar3 >> 5) * 4 + 0x18);
  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
  return param_1;
}



// FUNCTION 1405e1186 FUN_1405e1186 body=638 status=ok
// SIG undefined FUN_1405e1186(void)

void FUN_1405e1186(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint local_70;
  int local_6c;
  int local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = *param_5;
  uStack_54 = param_5[1];
  iStack_50 = param_5[2];
  uStack_4c = param_5[3];
  lVar4 = (longlong)*(int *)(*(undefined8 **)(param_1 + 0x230) + 1);
  if (lVar4 != 0) {
    plVar11 = (longlong *)**(undefined8 **)(param_1 + 0x230);
    lVar4 = lVar4 * 0x48;
    do {
      plVar5 = plVar11;
      if ((*(byte *)(plVar11 + 8) & 2) == 0) {
        plVar5 = (longlong *)*plVar11;
      }
      cVar3 = (**(code **)(*plVar5 + 8))();
      if (cVar3 != '\0') {
        plVar5 = plVar11;
        if ((*(byte *)(plVar11 + 8) & 2) == 0) {
          plVar5 = (longlong *)*plVar11;
        }
        local_88 = (longlong *)CONCAT44(uStack_54,local_58);
        iStack_80 = iStack_50;
        uStack_7c = uStack_4c;
        (**(code **)(*plVar5 + 0x10))();
      }
      plVar11 = plVar11 + 9;
      lVar4 = lVar4 + -0x48;
    } while (lVar4 != 0);
  }
  plVar11 = (longlong *)(param_1 + 0x120);
  puVar1 = (uint *)(param_1 + 0x130);
  iVar2 = *(int *)(param_1 + 0x148);
  uStack_7c = 1;
  if (iVar2 == 0) {
    local_68 = 0;
    iStack_80 = 0;
    local_6c = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x140);
    if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar8 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar9 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar9 = uVar10;
      }
      iStack_80 = (int)uVar9 + 1;
      local_68 = (int)uVar9 * 0x20 + 0x20;
      iVar8 = 0;
      do {
        local_6c = iVar2;
        if (uVar9 == uVar10) goto LAB_1405e1261;
        iVar8 = iVar8 + 0x20;
        uVar12 = puVar6[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar12 == 0);
      iStack_80 = (int)uVar10;
      local_68 = iVar8;
    }
    else {
      local_68 = 0;
      iStack_80 = 0;
    }
    uStack_7c = -uVar12 & uVar12;
    uVar9 = (ulonglong)uStack_7c * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_6c = (local_68 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_6c) {
      local_6c = iVar2;
    }
  }
LAB_1405e1261:
  local_70 = 0xffffffff;
  local_88 = plVar11;
  local_78 = puVar1;
  if (local_6c != iVar2) {
    do {
      plVar5 = (longlong *)(*local_88 + (longlong)local_6c * 0x48);
      plVar7 = plVar5;
      if ((*(byte *)(plVar5 + 8) & 2) == 0) {
        plVar7 = (longlong *)*plVar5;
      }
      cVar3 = (**(code **)(*plVar7 + 8))(plVar7,param_2,param_3);
      if (cVar3 != '\0') {
        if ((*(byte *)(plVar5 + 8) & 2) == 0) {
          plVar5 = (longlong *)*plVar5;
        }
        local_98 = *param_5;
        uStack_94 = param_5[1];
        uStack_90 = param_5[2];
        uStack_8c = param_5[3];
        (**(code **)(*plVar5 + 0x10))(plVar5,param_6,param_4,&local_98);
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&iStack_80);
    } while (((local_6c != iVar2) || (local_78 != puVar1)) || (local_88 != plVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e1406 FUN_1405e1406 body=81 status=ok
// SIG undefined FUN_1405e1406(void)

undefined8 FUN_1405e1406(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  byte bVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *(ushort *)(param_1 + 8);
  bVar2 = (byte)(uVar1 >> 8);
  if (uVar1 == 0xffff) {
    uVar3 = CONCAT71((uint7)bVar2,1);
  }
  else if (*(uint *)(param_2 + 0x20) == (uint)uVar1 ||
           (int)*(uint *)(param_2 + 0x20) < (int)(uint)uVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11(bVar2,(*(uint *)(param_2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1)
                           != 0);
  }
  uVar1 = *(ushort *)(param_1 + 10);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(param_3 + 0x20) == (uint)uVar1 || (int)*(uint *)(param_3 + 0x20) < (int)(uint)uVar1)
     ) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(param_3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 1405e1458 FUN_1405e1458 body=291 status=ok
// SIG undefined FUN_1405e1458(void)

void FUN_1405e1458(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1405e1497;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1405e1497:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1405e14da;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1405e14da:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001405e1564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1405e157c FUN_1405e157c body=184 status=ok
// SIG undefined FUN_1405e157c(void)

undefined8 FUN_1405e157c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_1405e1406();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_30 = 0x10000000000;
    local_88 = &local_78;
    FUN_14009e926(param_2,param_1 + 0x10,&local_50,2);
    local_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    local_68 = local_40;
    uStack_64 = uStack_3c;
    uStack_60 = uStack_38;
    uStack_5c = uStack_34;
    local_58 = local_30;
    uVar2 = FUN_1403b8874(&local_78,param_1 + 0x10,0);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e1636 FUN_1405e1636 body=290 status=ok
// SIG undefined FUN_1405e1636(void)

void FUN_1405e1636(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1405e1675;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1405e1675:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1405e16b8;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1405e16b8:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined4 *)((longlong)(int)lVar3 * 4 + lVar4 + lVar6 * 4) =
           *(undefined4 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001405e1741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}


