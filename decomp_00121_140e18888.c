// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e18888 FUN_140e18888 body=207 status=ok
// SIG undefined FUN_140e18888(void)

void FUN_140e18888(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    lVar1 = param_1 + 0xc0;
    if ((*(int *)(param_1 + 200) == 0) && (*(char *)(param_1 + 0xb8) != '\x05')) {
      if (*(char *)(param_1 + 0xb8) == '\0') {
        if (*(char *)(param_1 + 0x2b8) == '\x01') {
          FUN_1403a40a4(lVar1,&DAT_14cb72618);
        }
        if (*(char *)(param_1 + 0x2b9) == '\x01') {
          FUN_1403a40a4(lVar1,&DAT_14cb72620);
        }
        if (*(char *)(param_1 + 0x2ba) == '\x01') {
          FUN_1403a40a4(lVar1,&DAT_14cb72628);
        }
      }
      else {
        FUN_1403a3fe6(param_1);
      }
    }
    *(undefined2 *)(param_1 + 0x2b8) = 0;
    *(undefined1 *)(param_1 + 0x2ba) = 0;
    if (*(char *)(param_1 + 0xb8) != '\0') {
      iVar2 = FUN_1405b18ba(lVar1,&DAT_14cb725f8);
      if (0 < iVar2) {
        FUN_1401fa756(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e18958 FUN_140e18958 body=143 status=ok
// SIG undefined FUN_140e18958(void)

void FUN_140e18958(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != '\x01') {
    iVar1 = *(int *)(param_1 + 0x450);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x448);
      lVar3 = 0;
      do {
        FUN_140e189e8(*(undefined8 *)(lVar2 + lVar3),param_2);
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
    if (param_3 == '\x02') {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x460);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x458);
    lVar3 = 0;
    do {
      FUN_140e189e8(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 140e189e8 FUN_140e189e8 body=350 status=ok
// SIG undefined FUN_140e189e8(void)

bool FUN_140e189e8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (longlong *)*param_2;
  local_30 = (longlong *)param_2[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)(**(code **)(*local_38 + 0x18))(local_38,&local_38,param_1);
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    if (*(char *)(*param_2 + 0x2c) == '\0') {
      *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 8;
    }
    (**(code **)(*plVar5 + 0x30))(plVar5);
    iVar3 = *(int *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xa8) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xac) < iVar3 + 1U) {
      FUN_140e18fa6(param_1 + 0xa0,iVar3);
    }
    *(longlong **)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 8) = plVar5;
    *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 2;
    if (*(char *)((longlong)plVar5 + 0x22) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0xc0))
                (*(longlong **)(param_1 + 0x38),*(char *)((longlong)plVar5 + 0x22),
                 *(undefined4 *)((longlong)plVar5 + 0x24));
      if ((*(byte *)((longlong)plVar5 + 0x21) & 2) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x38);
        lVar6 = FUN_144a792bc(*param_2 + 0x30);
        (**(code **)(*plVar4 + 200))(plVar4,*(undefined4 *)(lVar6 + 0x70));
      }
    }
    if (*(char *)((longlong)plVar5 + 0x23) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0xc0))
                (*(longlong **)(param_1 + 0x38),*(char *)((longlong)plVar5 + 0x23),
                 *(undefined4 *)((longlong)plVar5 + 0x24));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar5 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e18b4a FUN_140e18b4a body=482 status=ok
// SIG undefined FUN_140e18b4a(void)

undefined8 FUN_140e18b4a(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
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
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_3 + 0x48);
  if (lVar3 != 0) {
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
    if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) &&
       (lVar3 = *(longlong *)(lVar3 + 0xae8), lVar3 != 0)) {
      lVar5 = FUN_1407831c2();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        uVar6 = FUN_14001cc68(0x78,0x10);
        local_28 = (code *)*param_2;
        plVar4 = (longlong *)param_2[1];
        local_20 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          FUN_140e18d2e(uVar6,&local_28);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_140e18d2e(uVar6);
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
        }
        goto LAB_140e18c2c;
      }
    }
  }
  uVar6 = 0;
LAB_140e18c2c:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e18d2e FUN_140e18d2e body=268 status=ok
// SIG undefined FUN_140e18d2e(void)

undefined8 * FUN_140e18d2e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_140e18e3c(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140e18e3c(param_1);
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
  *param_1 = &PTR_FUN_14b410a90;
  lVar6 = *param_2;
  param_1[10] = lVar6;
  lVar4 = param_2[1];
  param_1[0xb] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar6 = param_1[10];
  }
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (((*(byte *)(lVar6 + 0x60) & 8) == 0) || (*(float *)(lVar6 + 0x68) <= 0.0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = (*(char *)(lVar6 + 0x1e8) == '\x02') * '\x02';
  }
  *(byte *)((longlong)param_1 + 0x21) = *(byte *)((longlong)param_1 + 0x21) & 0xfd | bVar5;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e18e3c FUN_140e18e3c body=304 status=ok
// SIG undefined FUN_140e18e3c(void)

undefined8 * FUN_140e18e3c(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  longlong *plVar9;
  
  *param_1 = &PTR_FUN_14b411430;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar7 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 4) = 0x28;
  *(byte *)((longlong)param_1 + 0x21) = *(byte *)((longlong)param_1 + 0x21) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[1] = *(undefined8 *)(*param_2 + 0x20);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(*param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)(*param_2 + 0x18);
  lVar3 = *param_2;
  lVar4 = *(longlong *)(lVar3 + 0x30);
  if (lVar4 == 0) {
LAB_140e18f46:
    plVar9 = (longlong *)0x0;
  }
  else {
    uVar7 = FUN_140e18f6c();
    cVar6 = FUN_1448093f4(lVar4,uVar7);
    if (cVar6 == '\0') {
      uVar7 = 0;
      goto LAB_140e18f46;
    }
    uVar7 = *(undefined8 *)(lVar3 + 0x30);
    plVar9 = *(longlong **)(lVar3 + 0x38);
    if (plVar9 == (longlong *)0x0) goto LAB_140e18f46;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  param_1[7] = uVar7;
  plVar5 = (longlong *)param_1[8];
  if (plVar9 == plVar5) {
    if (plVar9 == (longlong *)0x0) goto LAB_140e18ee5;
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_140e18ee5;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar9;
  }
  else {
    param_1[8] = plVar9;
    if (plVar5 == (longlong *)0x0) goto LAB_140e18ee5;
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_140e18ee5;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_140e18ee5:
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    *(byte *)((longlong)param_1 + 0x21) =
         *(byte *)((longlong)param_1 + 0x21) & 0xfe | *(byte *)(lVar3 + 0x1a) & 1;
    if ((*(byte *)(lVar3 + 0x18) & 1) == 0) {
      uVar8 = *(undefined1 *)(lVar3 + 0x19);
    }
    else {
      uVar8 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x22) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)(lVar3 + 0x1b);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar3 + 0x70);
  }
  return param_1;
}



// FUNCTION 140e18f6c FUN_140e18f6c body=57 status=ok
// SIG undefined FUN_140e18f6c(void)

void FUN_140e18f6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69d48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69d48 = FUN_140002ddd(FUN_14652362f,uVar1,L"InventoryBodyControlInput");
  }
  return;
}



// FUNCTION 140e18fa6 FUN_140e18fa6 body=353 status=ok
// SIG undefined FUN_140e18fa6(void)

void FUN_140e18fa6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e1902b;
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
LAB_140e1902b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140e19108 FUN_140e19108 body=168 status=ok
// SIG undefined FUN_140e19108(void)

undefined8 FUN_140e19108(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_14001cc68(0x68,0x10);
  local_28 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_20 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_140e191b2(uVar4,&local_28);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140e191b2(uVar4);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e191b2 FUN_140e191b2 body=196 status=ok
// SIG undefined FUN_140e191b2(void)

undefined8 * FUN_140e191b2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_140e18e3c(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140e18e3c(param_1);
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
  *param_1 = &PTR_FUN_14b410960;
  param_1[10] = *param_2;
  lVar4 = param_2[1];
  param_1[0xb] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e19277 FUN_140e19277 body=49 status=ok
// SIG undefined FUN_140e19277(void)

longlong FUN_140e19277(void)

{
  if (DAT_14cb92078 == 0) {
    FUN_140f50038(&DAT_14cb92078,&PTR_s__Script_GbxUICoherent_14b469498);
  }
  return DAT_14cb92078;
}



// FUNCTION 140e192a8 FUN_140e192a8 body=55 status=ok
// SIG undefined FUN_140e192a8(void)

undefined8 FUN_140e192a8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140e1935a();
  if (lVar2 != 0) {
    cVar1 = FUN_140e192e0(lVar2);
    if (cVar1 == '\x01') {
      uVar3 = FUN_140e1955c(param_1 + 0x78);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140e192e0 FUN_140e192e0 body=121 status=ok
// SIG undefined FUN_140e192e0(void)

char FUN_140e192e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    FUN_1403a0728(lVar1 + 0x38,&local_18);
  }
  if (DAT_14cb88708 == local_18) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
    if (DAT_14cb88710 != local_18) {
      cVar2 = (DAT_14cb88718 == local_18) * '\x02';
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1935a FUN_140e1935a body=512 status=ok
// SIG undefined FUN_140e1935a(void)

undefined8 FUN_140e1935a(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char **)(param_1 + 0x68) != (char *)0x0) && (**(char **)(param_1 + 0x68) != '\0'))
  goto LAB_140e19385;
  plVar4 = (longlong *)FUN_140d7e454(*(undefined8 *)(param_1 + 8));
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    plVar4 = *(longlong **)(param_1 + 0x70);
    if (plVar4 == (longlong *)0x0) goto LAB_140e19385;
    *(undefined8 *)(param_1 + 0x70) = 0;
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_140e19385;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_140e19385;
    lVar5 = *plVar4;
  }
  else {
    if (*(undefined **)(param_1 + 0x60) == &DAT_14cb88728) {
      local_38 = DAT_14cb88800;
      local_40 = DAT_14cb887f8;
    }
    else {
      piVar2 = *(int **)(*(undefined **)(param_1 + 0x60) + 8);
      piVar6 = &DAT_14c9485f0;
      if (piVar2 != (int *)0x0) {
        piVar6 = piVar2;
      }
      if (((*piVar6 != 0) && (iVar1 = piVar6[1], iVar1 != 0)) && (*piVar6 != DAT_14c948000)) {
        if ((iVar1 < 2) && (piVar6[9] < 1)) {
          piVar6 = piVar6 + 2;
        }
        else {
          piVar6 = *(int **)(piVar6 + 6);
        }
        if (0 < iVar1) {
          local_38 = piVar6[2];
          local_40 = *(undefined8 *)piVar6;
          goto LAB_140e1942c;
        }
      }
      local_38 = DAT_14c948620;
      local_40 = DAT_14c948618;
    }
LAB_140e1942c:
    (**(code **)(*plVar4 + 0x68))(plVar4,&local_30,&local_40);
    plVar4 = local_28;
    if ((undefined8 *)(param_1 + 0x68) != &local_30) {
      *(undefined8 *)(param_1 + 0x68) = local_30;
      local_30 = 0;
      plVar3 = *(longlong **)(param_1 + 0x70);
      if (local_28 != plVar3) {
        local_28 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x70) = plVar4;
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
      }
    }
    plVar4 = local_28;
    if (local_28 == (longlong *)0x0) goto LAB_140e19385;
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_140e19385;
    (**(code **)*local_28)(local_28);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_140e19385;
    lVar5 = *plVar4;
  }
  (**(code **)(lVar5 + 0x10))(plVar4);
LAB_140e19385:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(param_1 + 0x68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1955c FUN_140e1955c body=158 status=ok
// SIG undefined FUN_140e1955c(void)

undefined8 FUN_140e1955c(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = FUN_140e1935a(*param_1);
  iVar3 = 0;
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x58), lVar4 != 0)) {
    iVar3 = FUN_140e195fa(lVar4 + 0x38);
  }
  iVar1 = *(int *)(param_1 + 2);
  if ((longlong)iVar1 != 0) {
    lVar4 = param_1[1];
    lVar7 = 0;
    do {
      if (iVar3 == *(int *)(*(longlong *)(*(longlong *)(lVar4 + lVar7) + 0xa0) + 0x610)) {
        lVar6 = FUN_140f42f34();
        if (lVar6 == 0) {
          return 0;
        }
        cVar2 = FUN_1405f61f4(lVar6);
        if (cVar2 != '\x06') {
          return 0;
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  uVar5 = FUN_140e19626(param_1);
  return uVar5;
}



// FUNCTION 140e195fa FUN_140e195fa body=44 status=ok
// SIG undefined FUN_140e195fa(void)

uint FUN_140e195fa(char *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\x03') {
    bVar2 = *(longlong *)(param_1 + 4) == 0;
  }
  else {
    if (cVar1 == '\x02') {
      return *(uint *)(param_1 + 0xc);
    }
    if (cVar1 != '\x01') {
      return 0;
    }
    bVar2 = *(int *)(param_1 + 0xc) == 0;
  }
  return (uint)!bVar2;
}



// FUNCTION 140e19626 FUN_140e19626 body=792 status=ok
// SIG undefined FUN_140e19626(void)

ulonglong FUN_140e19626(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = FUN_140e1935a(*param_1);
  if ((lVar6 == 0) || (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x58), lVar6 == 0)) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_140e195fa(lVar6 + 0x38);
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    if (iVar11 < 0) goto LAB_140e19693;
  }
  uStack_70 = 0;
  local_78 = (longlong *)0x0;
  FUN_140e19940(param_1,iVar11,&local_78);
  lVar6 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x60) + 0x40);
  if (lVar6 != 0) {
    lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + 0x38) + 0x10;
    lVar13 = 0;
    do {
      if (*(int *)(lVar9 + lVar13) == iVar11) {
        lVar15 = lVar13 + lVar9;
        local_60 = *(undefined4 *)(lVar15 + -8);
        local_68 = *(undefined8 *)(lVar15 + -0x10);
        local_58 = local_68;
        local_50 = local_60;
        lVar15 = (**(code **)(**(longlong **)(*param_1 + 8) + 8))
                           (*(longlong **)(*param_1 + 8),&local_58);
        uVar10 = uStack_70;
        if (lVar15 != 0) {
          lVar14 = (longlong)(int)uStack_70;
          uVar5 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
          if (uStack_70._4_4_ < uVar5) {
            FUN_140f16476(&local_78,uVar10 & 0xffffffff);
          }
          local_78[lVar14] = lVar15;
        }
      }
      lVar13 = lVar13 + 0x14;
    } while (lVar6 * 0x14 != lVar13);
  }
LAB_140e19693:
  if ((longlong)(int)uStack_70 != 0) {
    plVar1 = local_78 + (int)uStack_70;
    iVar4 = (int)param_1[2];
    plVar8 = local_78;
    do {
      iVar7 = 0;
      if (iVar4 != 0) {
        lVar6 = param_1[1];
        iVar12 = 1;
        lVar13 = 0;
        lVar9 = 0;
        do {
          iVar7 = iVar4;
          if (*(longlong *)(lVar6 + lVar13) == *plVar8) {
            if (iVar12 != 0) {
              memmove((void *)(lVar6 + (lVar9 >> 0x20) * 8),
                      (void *)(lVar6 + (lVar9 >> 0x20) * 8 + 8),(longlong)(iVar4 - iVar12) << 3);
              iVar7 = (int)param_1[2] + -1;
              *(int *)(param_1 + 2) = iVar7;
            }
            break;
          }
          lVar9 = lVar9 + 0x100000000;
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + 8;
        } while ((longlong)iVar4 * 8 != lVar13);
      }
      iVar4 = iVar7;
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  iVar11 = iVar11 + 1;
  iVar4 = *(int *)(*(longlong *)(*param_1 + 0x60) + 0x30);
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  if (iVar11 < iVar4) {
    local_80 = param_1 + 1;
    do {
      lVar6 = FUN_140e1935a();
      if (lVar6 != 0) {
        FUN_148842fb0(lVar6,iVar11);
      }
      bVar16 = (longlong)uStack_70 < 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      if (bVar16) {
        FUN_146557146(&local_78,0);
      }
      FUN_14891a620(param_1,iVar11,&local_78);
      plVar1 = local_78;
      lVar6 = 0;
      if ((longlong)(int)uStack_70 != 0) {
        lVar6 = (longlong)(int)uStack_70 * 8;
        lVar9 = 0;
        do {
          uVar2 = *(undefined8 *)((longlong)plVar1 + lVar9);
          FUN_140f13aa8(uVar2);
          lVar13 = param_1[2];
          uVar5 = (int)lVar13 + 1;
          *(uint *)(param_1 + 2) = uVar5;
          if (*(uint *)((longlong)param_1 + 0x14) < uVar5) {
            FUN_140f16476(local_80);
          }
          *(undefined8 *)(*local_80 + (longlong)(int)lVar13 * 8) = uVar2;
          lVar9 = lVar9 + 8;
        } while (lVar6 != lVar9);
      }
      lVar9 = param_1[2];
      if ((longlong)(int)lVar9 != 0) {
        lVar13 = param_1[1];
        lVar15 = 0;
        do {
          cVar3 = FUN_14189cfe8(*(undefined8 *)(lVar13 + lVar15));
          if (cVar3 != '\x06') {
            uVar10 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
            goto LAB_140e196c4;
          }
          lVar15 = lVar15 + 8;
        } while ((longlong)(int)lVar9 * 8 != lVar15);
      }
      iVar11 = iVar11 + 1;
      iVar4 = *(int *)(*(longlong *)(*param_1 + 0x60) + 0x30);
      if (iVar4 < 2) {
        iVar4 = 1;
      }
      uVar10 = 0;
    } while (iVar11 < iVar4);
  }
  else {
    uVar10 = 0;
  }
LAB_140e196c4:
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 140e19940 FUN_140e19940 body=230 status=ok
// SIG undefined FUN_140e19940(void)

void FUN_140e19940(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(*(longlong *)(*param_1 + 0x60) + 0x30))) {
    lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + 0x28);
    lVar4 = (longlong)*(int *)(lVar2 + 8 + (ulonglong)param_2 * 0x18);
    if (lVar4 != 0) {
      lVar2 = *(longlong *)(lVar2 + (ulonglong)param_2 * 0x18);
      lVar5 = 0;
      do {
        local_60 = *(undefined4 *)(lVar2 + 8 + lVar5);
        local_68 = *(undefined8 *)(lVar2 + lVar5);
        local_58 = local_68;
        local_50 = local_60;
        lVar3 = (**(code **)(**(longlong **)(*param_1 + 8) + 8))
                          (*(longlong **)(*param_1 + 8),&local_58);
        if (lVar3 != 0) {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_140f16476(param_3,iVar1);
          }
          *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
        }
        lVar5 = lVar5 + 0xc;
      } while (lVar4 * 0xc != lVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e19a28 FUN_140e19a28 body=567 status=ok
// SIG undefined FUN_140e19a28(void)

undefined8 FUN_140e19a28(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_1;
  if (*(char *)(param_1 + 0x23b8) != '\0') {
    if ((*(longlong *)(param_1 + 0xf48) != 0) &&
       (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf48) + 0x32b8), plVar2 != (longlong *)0x0)
       ) {
      cVar5 = (**(code **)(*plVar2 + 0x480))(plVar2,DAT_14c9abbf0);
      if (cVar5 != '\0') {
        FUN_145746018(*(undefined8 *)(param_1 + 0xf48));
      }
    }
    if ((0.0 < param_2) && (0.0 < *(float *)(param_1 + 0xf10))) {
      param_2 = *(float *)(param_1 + 0xf10) - param_2;
      *(float *)(param_1 + 0xf10) = param_2;
      if (param_2 < 0.0) {
        *(undefined4 *)(param_1 + 0xf10) = 0;
      }
    }
    cVar5 = FUN_140e19c60(param_1);
    if (cVar5 == '\0') {
      if (((*(longlong *)(param_1 + 0xf00) == 0) || (*(longlong *)(param_1 + 0xf08) == 0)) ||
         (uVar6 = 1, *(int *)(*(longlong *)(param_1 + 0xf08) + 8) < 1)) {
        uVar6 = FUN_1401cb356();
        local_60 = (undefined8 *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,3,0x10);
        puVar3 = local_60;
        local_58 = 3;
        *local_60 = &PTR_LAB_149e02020;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_60[2] = lVar7;
        *local_60 = &PTR_FUN_14b995700;
        local_60[3] = 0;
        FUN_14485c47a(local_60 + 3,param_1);
        *(undefined4 *)(puVar3 + 5) = 0;
        puVar3[4] = FUN_140e19a28;
        local_78 = 0;
        FUN_1405f67fc(uVar6,&local_50,&local_60,
                      L"AOakPlayerController.CheckIsReadyToStartTeleportScreenEffect");
        *(undefined8 *)(param_1 + 0xf00) = local_50;
        local_50 = 0;
        plVar2 = *(longlong **)(param_1 + 0xf08);
        *(longlong **)(param_1 + 0xf08) = local_48;
        local_48 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
          if (local_48 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_48 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_48 + 0x10))();
            }
          }
        }
        FUN_1449db362(&local_60);
        uVar6 = 1;
      }
      goto LAB_140e19ad0;
    }
    FUN_140e1a75c(param_1);
  }
  FUN_140e1a69e(&local_68);
  uVar6 = 0;
LAB_140e19ad0:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e19c60 FUN_140e19c60 body=2621 status=ok
// SIG undefined FUN_140e19c60(void)

undefined8 FUN_140e19c60(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  byte bVar4;
  LARGE_INTEGER LVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  LARGE_INTEGER *local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  LARGE_INTEGER local_78;
  longlong *local_70;
  longlong local_68;
  LARGE_INTEGER local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar6 = FUN_14350bf76(1);
  if (cVar6 == '\0') {
LAB_140e19eed:
    if (((param_1[0x1d9] == 0) || (param_1[0x1da] == 0)) || (*(int *)(param_1[0x1da] + 8) < 1)) {
      if ((char)param_1[0x2f] == '\x03') {
        if (*(char *)((longlong)param_1 + 0x23bb) != '\0') goto LAB_140e19f27;
        uVar12 = FUN_1447210f0(param_1);
        FUN_1410d53f0(&local_78,uVar12);
        if (local_70 != (longlong *)0x0) {
          iVar8 = (int)local_70[1];
          do {
            if (iVar8 == 0) {
              plVar17 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar16 = (int)local_70[1];
            bVar18 = iVar8 == iVar16;
            if (bVar18) {
              *(int *)(local_70 + 1) = iVar8 + 1;
              iVar16 = iVar8;
            }
            iVar8 = iVar16;
            UNLOCK();
            plVar17 = local_70;
          } while (!bVar18);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_70 + 0x10))();
          }
          LVar5 = local_78;
          if (plVar17 != (longlong *)0x0) {
            if ((code *)local_78.QuadPart == (code *)0x0) {
              cVar6 = '\0';
            }
            else {
              lVar11 = FUN_146226e28(local_78.QuadPart,param_1);
              if (lVar11 == 0) {
                cVar6 = '\x01';
              }
              else {
                cVar6 = FUN_144230c70(LVar5.QuadPart,param_1);
              }
            }
            LOCK();
            plVar1 = plVar17 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar2 = (int *)((longlong)plVar17 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
            if (cVar6 != '\0') goto LAB_140e19f27;
          }
        }
      }
      else if (((param_1[0x46e] == 0) || (0xfffffffd < (int)param_1[0x46f] - 1U)) &&
              ((char)param_1[0x46d] == '\0')) {
        lVar11 = param_1[0x73];
        if (lVar11 != 0) {
          if (DAT_14cbae3d8 == 0) {
            local_a0 = &local_78;
            local_78.QuadPart = (LONGLONG)FUN_141030f22;
            local_90 = FUN_14081d0ea;
            local_98 = &LAB_1464f5fc4;
            local_a8 = &LAB_148c3dd26;
            local_b0 = &LAB_1459673ba;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10000004;
            local_d0 = 0x10;
            local_d8 = 0x1360;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
            lVar11 = param_1[0x73];
            if (lVar11 == 0) goto LAB_140e19f27;
          }
          if (((DAT_14cbae3d8 != 0) && (lVar13 = *(longlong *)(lVar11 + 0x10), lVar13 != 0)) &&
             ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar13 + 0x38) &&
              (*(longlong *)
                (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
               DAT_14cbae3d8 + 0x30)))) {
            FUN_1405a77a8(lVar11,&local_78);
            plVar17 = local_70;
            LVar5 = local_78;
            cVar6 = '\x01';
            if (((code *)local_78.QuadPart != (code *)0x0) &&
               (cVar7 = FUN_1405a770c(local_78.QuadPart), cVar7 != '\0')) {
              local_60.s = LVar5.s;
              local_58 = plVar17;
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
              }
              cVar6 = FUN_1418f275e(param_1[0x1e9],&local_60);
            }
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar17 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar17)(plVar17);
                LOCK();
                piVar2 = (int *)((longlong)plVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar17 + 0x10))(plVar17);
                }
              }
            }
            if (cVar6 == '\0') goto LAB_140e1a2d0;
          }
        }
LAB_140e19f27:
        lVar11 = FUN_1447210f0(param_1);
        if (((lVar11 == 0) || (lVar11 = FUN_1400f6f32(lVar11), lVar11 == 0)) ||
           (lVar11 = *(longlong *)(lVar11 + 0x68), lVar11 == 0)) {
LAB_140e1a0a0:
          bVar18 = false;
        }
        else {
          FUN_140d27df6(lVar11,&local_78,param_1);
          if ((short)local_78.QuadPart._0_2_ < 0) goto LAB_140e1a0a0;
          uVar10 = FUN_1402d8968(lVar11,&local_78);
          bVar18 = uVar10 == 0xb;
          if (uVar10 < 5) goto LAB_140e1a2d0;
        }
        lVar11 = param_1[0x73];
        if (lVar11 != 0) {
          if (DAT_14cbae3d8 == 0) {
            local_a0 = &local_78;
            local_78.QuadPart = (LONGLONG)FUN_141030f22;
            local_90 = FUN_14081d0ea;
            local_98 = &LAB_1464f5fc4;
            local_a8 = &LAB_148c3dd26;
            local_b0 = &LAB_1459673ba;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10000004;
            local_d0 = 0x10;
            local_d8 = 0x1360;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
            lVar11 = param_1[0x73];
            if (lVar11 == 0) goto LAB_140e1a0e7;
          }
          if (((DAT_14cbae3d8 != 0) && (lVar13 = *(longlong *)(lVar11 + 0x10), lVar13 != 0)) &&
             ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar13 + 0x38) &&
              (*(longlong *)
                (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
               DAT_14cbae3d8 + 0x30)))) {
            lVar13 = FUN_1403b0700(lVar11);
            if (((*(longlong *)(lVar13 + 0x38) == 0) ||
                (*(longlong *)(lVar13 + 0x38) == DAT_14cb71810)) &&
               ((lVar13 = FUN_1403b0700(lVar11), *(longlong *)(lVar13 + 0x38) != DAT_14cb71810 &&
                (cVar6 = FUN_148dc0c28(lVar11), cVar6 != '\0')))) goto LAB_140e1a2d0;
            lVar13 = param_1[0x635];
            if (lVar13 == 0) {
              if (!bVar18) goto LAB_140e1a37b;
            }
            else if (((*(char *)(lVar13 + 0x40) == '\0') && (*(int *)(lVar13 + 0x90) == -1)) &&
                    (cVar6 = FUN_140d35d4c(lVar11), !bVar18 && cVar6 == '\0')) {
LAB_140e1a37b:
              lVar11 = FUN_1403b0700(lVar11);
              if ((*(longlong *)(lVar11 + 0x38) != 0) &&
                 (*(longlong *)(lVar11 + 0x38) != DAT_14cb71810)) goto LAB_140e1a2d0;
            }
          }
        }
LAB_140e1a0e7:
        if (((char)param_1[0x1e3] == '\0') &&
           (*(float *)(param_1 + 0x1e2) <= *(float *)((longlong)param_1 + 0xf14))) {
          uVar12 = FUN_140cb9f34();
          lVar13 = FUN_1414adc80(uVar12,param_1 + 0x474);
          *(undefined1 *)(param_1 + 0x1e3) = 1;
          lVar11 = DAT_14cb259f8;
          if ((DAT_14cb259f8 != 0) && (*(longlong *)(DAT_14cb259f8 + 0xa0) != 0)) {
            lVar15 = *(longlong *)(lVar13 + 0x138);
            if (lVar15 == 0) {
              uVar12 = FUN_140067708();
              lVar15 = FUN_14477b664(uVar12);
              *(longlong *)(lVar13 + 0x138) = lVar15;
            }
            if (*(longlong *)(lVar13 + 0x140) == 0) {
              if ((lVar15 != 0) && (*(longlong *)(lVar13 + 0x130) != 0)) {
                plVar17 = *(longlong **)(lVar15 + 0xb8);
                if ((plVar17 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar6 == '\0')) {
                  *(undefined8 *)(lVar13 + 0x140) = 0;
                }
                else {
                  uVar12 = (**(code **)(*plVar17 + 0x110))(plVar17);
                  lVar15 = FUN_144aff482(uVar12,(longlong *)(lVar13 + 0x130));
                  *(longlong *)(lVar13 + 0x140) = lVar15;
                  if (lVar15 != 0) goto LAB_140e1a163;
                }
              }
              if ((*(char *)(lVar13 + 0x120) != '\x01') || (*(longlong *)(lVar13 + 0x124) == 0))
              goto LAB_140e1a1f3;
            }
LAB_140e1a163:
            cVar6 = FUN_144904448(param_1 + 0x461);
            if (cVar6 != '\0') {
              FUN_14072d42a(param_1 + 0x461);
            }
            uVar12 = *(undefined8 *)(lVar11 + 0xa0);
            local_88 = 0;
            uStack_80 = 0;
            uVar14 = FUN_140206ee8(lVar13 + 0x120);
            local_d8 = 0;
            FUN_14084a448(uVar12,&local_78,uVar14,param_1);
            *(LARGE_INTEGER *)(param_1 + 0x461) = local_78;
            param_1[0x462] = (longlong)local_70;
            param_1[0x463] = local_68;
            *(undefined4 *)(param_1 + 0x1e2) = *(undefined4 *)((longlong)param_1 + 0xf14);
          }
        }
LAB_140e1a1f3:
        if ((*(float *)(param_1 + 0x1e2) <= 0.0) &&
           (((char)param_1[0x2f] != '\x03' ||
            (((*(undefined1 *)((longlong)param_1 + 0x23bb) = 1, param_1[0x46e] == 0 ||
              (0xfffffffd < (int)param_1[0x46f] - 1U)) && ((char)param_1[0x46d] == '\0')))))) {
          uVar12 = 1;
          goto LAB_140e1a2d2;
        }
      }
    }
  }
  else {
    lVar11 = param_1[0x73];
    if (lVar11 == 0) {
LAB_140e19cee:
      plVar17 = (longlong *)0x0;
LAB_140e19cf0:
      fVar19 = (float)FUN_14350c05a(1);
      dVar3 = 0.0;
      if (0.0 < (double)param_1[0x1e5]) {
        QueryPerformanceCounter(&local_78);
        dVar3 = ((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) - (double)param_1[0x1e5];
      }
      iVar8 = FUN_140635a7c();
      if ((iVar8 != 0) &&
         (((fVar19 <= 0.0 || (dVar3 < (double)fVar19)) &&
          (cVar6 = (**(code **)(*param_1 + 0x1030))(param_1), cVar6 == '\0')))) {
        FUN_140635c46(2);
        iVar8 = DAT_14c760d84;
        bVar4 = DAT_14ca84f5a;
        if ((double)param_1[0x1e5] <= 0.0) {
          QueryPerformanceCounter(&local_78);
          param_1[0x1e5] = (longlong)((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0);
          bVar4 = DAT_14ca84f5a;
          iVar8 = DAT_14c760d84;
          iVar16 = 0;
          if ((DAT_14c760d84 != 0) && (iVar16 = 0, (DAT_14ca84f5a & 1) != 0)) {
            iVar16 = *(int *)(DAT_14ca811d0 + 0x90) + *(int *)(DAT_14ca811c8 + 0x90);
          }
          *(int *)((longlong)param_1 + 0xf34) = iVar16;
        }
        iVar16 = 0;
        if ((iVar8 != 0) && (iVar16 = 0, (bVar4 & 1) != 0)) {
          iVar16 = *(int *)(DAT_14ca811d0 + 0x90) + *(int *)(DAT_14ca811c8 + 0x90);
        }
        iVar8 = *(int *)((longlong)param_1 + 0xf34);
        iVar9 = FUN_140635a7c();
        fVar19 = (float)iVar9 / (float)((iVar16 - iVar8) + iVar9);
        if (1.0 <= fVar19) {
          fVar19 = 1.0;
        }
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        FUN_1418ef4b2((int)((1.0 - fVar19) * 100.0));
        *(undefined1 *)(param_1 + 0x1e7) = 1;
        goto LAB_140e19ec1;
      }
      *(undefined1 *)(param_1 + 0x1e7) = 0;
      FUN_140635c46(0);
      FUN_1418ef4b2(0xffffffff);
      bVar18 = true;
    }
    else {
      if (DAT_14cbae3d8 == 0) {
        local_a0 = &local_78;
        local_78.QuadPart = (LONGLONG)FUN_141030f22;
        local_90 = FUN_14081d0ea;
        local_98 = &LAB_1464f5fc4;
        local_a8 = &LAB_148c3dd26;
        local_b0 = &LAB_1459673ba;
        local_b8 = L"Engine";
        local_c0 = 0;
        local_c8 = 0x10000004;
        local_d0 = 0x10;
        local_d8 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        lVar11 = param_1[0x73];
        if (lVar11 == 0) goto LAB_140e19cee;
      }
      plVar17 = (longlong *)0x0;
      if ((DAT_14cbae3d8 == 0) || (lVar11 = *(longlong *)(lVar11 + 0x10), lVar11 == 0))
      goto LAB_140e19cf0;
      if ((*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
          != DAT_14cbae3d8 + 0x30)) goto LAB_140e19cee;
      FUN_1405a77a8();
      plVar17 = local_70;
      if (((code *)local_78.QuadPart == (code *)0x0) || (cVar6 = FUN_140373d18(), cVar6 == '\0'))
      goto LAB_140e19cf0;
LAB_140e19ec1:
      bVar18 = false;
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    if (bVar18) goto LAB_140e19eed;
  }
LAB_140e1a2d0:
  uVar12 = 0;
LAB_140e1a2d2:
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1a69e FUN_140e1a69e body=173 status=ok
// SIG undefined FUN_140e1a69e(void)

void FUN_140e1a69e(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  if (((*(longlong *)(lVar2 + 0xf00) != 0) && (*(longlong *)(lVar2 + 0xf08) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0xf08) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(lVar2 + 0xf00);
    local_20 = *(longlong *)(lVar2 + 0xf08);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar3 = *(longlong *)(lVar2 + 0xf08);
    *(undefined8 *)(lVar2 + 0xf00) = 0;
    *(undefined8 *)(lVar2 + 0xf08) = 0;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1a75c FUN_140e1a75c body=1799 status=ok
// SIG undefined FUN_140e1a75c(void)

void FUN_140e1a75c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  LARGE_INTEGER LVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  LARGE_INTEGER local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined1 *)((longlong)param_1 + 0x23bb) = 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbd0890) && (FUN_144b3d300(&DAT_14cbd0890), DAT_14cbd0890 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cbd0888 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Water.GbxSuspendWaterRendering",1);
    _Init_thread_footer(&DAT_14cbd0890);
  }
  if (DAT_14cbd0888 != (longlong *)0x0) {
    (**(code **)(*DAT_14cbd0888 + 0x98))(DAT_14cbd0888,&DAT_149e25dfc,0xd000000,0);
  }
  lVar8 = FUN_140083894();
  *(undefined1 *)(lVar8 + 0x58) = 0;
  if (((char)param_1[0x477] != '\x01') ||
     (cVar7 = (**(code **)(*param_1 + 0x6c8))(param_1), cVar7 == '\0')) goto LAB_140e1adfb;
  lVar8 = FUN_140cb9f34();
  lVar9 = FUN_1414adc80(lVar8,param_1 + 0x474);
  fVar3 = *(float *)(lVar9 + 0xa8);
  if (fVar3 <= 0.0) {
    FUN_141427fe4(param_1);
  }
  else {
    uVar10 = FUN_1401b4c98();
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar6 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar17 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar17 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar17;
    local_d0[2] = lVar13;
    *local_d0 = &PTR_FUN_14b996eb0;
    local_d0[3] = 0;
    iVar14 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar5 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar17 = 0;
      }
      iVar14 = *(int *)(lVar17 + 0x10);
      if (*(int *)(lVar17 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar14 = *(int *)(lVar17 + 0x10);
        bVar18 = iVar14 == 0;
        if (bVar18) {
          *(int *)(lVar17 + 0x10) = iVar16;
          iVar14 = 0;
        }
        UNLOCK();
        if (bVar18) {
          iVar14 = iVar16;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar14;
    puVar6[4] = FUN_141427fe4;
    *(undefined4 *)(puVar6 + 5) = 0;
    local_b8.QuadPart = 0;
    local_b0 = 0;
    FUN_14487d8d8(&local_b8,&local_d0);
    local_78 = 1;
    local_108 = local_c0;
    local_c0[0] = 0;
    local_bc = 0xbf800000;
    FUN_1406f4044(uVar10,param_1 + 0x1d7,&local_b8,fVar3);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_140e1a9be;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140e1a9be:
  lVar17 = FUN_1402d1dc0(lVar9 + 0x50);
  if (lVar17 != 0) {
    (**(code **)(param_1[300] + 0x98))(param_1 + 300,lVar17,0,1);
  }
  cVar7 = FUN_144904448(param_1 + 0x45e);
  if (cVar7 != '\0') {
    FUN_14072d42a(param_1 + 0x45e);
  }
  cVar7 = FUN_144904448(param_1 + 0x461);
  if (cVar7 != '\0') {
    FUN_14072d42a(param_1 + 0x461);
  }
  lVar17 = DAT_14cb259f8;
  if ((DAT_14cb259f8 != 0) && (*(longlong *)(DAT_14cb259f8 + 0xa0) != 0)) {
    lVar13 = *(longlong *)(lVar9 + 0x168);
    if (lVar13 == 0) {
      uVar10 = FUN_140067708();
      lVar13 = FUN_14477b664(uVar10);
      *(longlong *)(lVar9 + 0x168) = lVar13;
    }
    if (*(longlong *)(lVar9 + 0x170) == 0) {
      if ((lVar13 != 0) && (*(longlong *)(lVar9 + 0x160) != 0)) {
        plVar15 = *(longlong **)(lVar13 + 0xb8);
        if ((plVar15 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar7 == '\0')) {
          *(undefined8 *)(lVar9 + 0x170) = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
          lVar13 = FUN_144aff482(uVar10,(longlong *)(lVar9 + 0x160));
          *(longlong *)(lVar9 + 0x170) = lVar13;
          if (lVar13 != 0) goto LAB_140e1aa61;
        }
      }
      if ((*(char *)(lVar9 + 0x150) != '\x01') || (*(longlong *)(lVar9 + 0x154) == 0))
      goto LAB_140e1aac1;
    }
LAB_140e1aa61:
    uVar10 = *(undefined8 *)(lVar17 + 0xa0);
    local_e8 = 0;
    uStack_e0 = 0;
    uVar11 = FUN_140206ee8(lVar9 + 0x150);
    local_108 = (undefined2 *)((ulonglong)local_108 & 0xffffffff00000000);
    FUN_14084a448(uVar10,&local_b8,uVar11,param_1);
    *(LARGE_INTEGER *)(param_1 + 0x45e) = local_b8;
    param_1[0x45f] = CONCAT44(uStack_ac,local_b0);
    param_1[0x460] = local_a8;
  }
LAB_140e1aac1:
  if (param_1[0x1e9] != 0) {
    lVar9 = *(longlong *)(lVar8 + 0x70);
    if (lVar9 == 0) {
      uVar10 = FUN_1407f787c();
      lVar9 = FUN_14477b664(uVar10);
      *(longlong *)(lVar8 + 0x70) = lVar9;
    }
    lVar17 = *(longlong *)(lVar8 + 0x68);
    if (*(longlong *)(lVar8 + 0x78) == 0) {
      if (lVar9 != 0 && lVar17 != 0) {
        plVar15 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar15 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar7 == '\0')) {
          *(undefined8 *)(lVar8 + 0x78) = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
          lVar9 = FUN_144aff482(uVar10,lVar8 + 0x68);
          *(longlong *)(lVar8 + 0x78) = lVar9;
          if (lVar9 != 0) {
            lVar17 = *(longlong *)(lVar8 + 0x68);
            lVar9 = *(longlong *)(lVar8 + 0x70);
            goto LAB_140e1aaf7;
          }
        }
      }
    }
    else {
LAB_140e1aaf7:
      uVar4 = *(undefined4 *)(lVar8 + 0x80);
      local_f8 = 0;
      uStack_f0 = 0;
      local_100 = lVar17;
      uVar10 = FUN_14477b664(lVar9);
      local_f8 = FUN_14477b664(uVar10);
      uStack_f0 = *(undefined8 *)(lVar8 + 0x78);
      local_108 = (undefined2 *)CONCAT44(local_108._4_4_,uVar4);
      FUN_1414c1656(param_1[0x1e9],param_1[0x1e9],&local_100,0);
    }
    if (*(char *)(param_1[0x1e9] + 0x73eb) == '\x02') {
      uVar10 = FUN_1447210f0(param_1);
      FUN_1410d53f0(&local_b8,uVar10);
      plVar15 = (longlong *)CONCAT44(uStack_ac,local_b0);
      if (plVar15 == (longlong *)0x0) {
LAB_140e1ad7a:
        LVar12.QuadPart = 0;
      }
      else {
        iVar14 = (int)plVar15[1];
        do {
          if (iVar14 == 0) {
            plVar15 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar16 = (int)plVar15[1];
          bVar18 = iVar14 == iVar16;
          if (bVar18) {
            *(int *)(plVar15 + 1) = iVar14 + 1;
            iVar16 = iVar14;
          }
          iVar14 = iVar16;
          UNLOCK();
        } while (!bVar18);
        LOCK();
        piVar1 = (int *)((longlong)CONCAT44(uStack_ac,local_b0) + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_ac,local_b0) + 0x10))();
        }
        if (plVar15 == (longlong *)0x0) goto LAB_140e1ad7a;
        if (local_b8.QuadPart == 0) {
          LVar12.QuadPart = 0;
        }
        else {
          LVar12.QuadPart = FUN_141446784(local_b8.QuadPart,param_1 + 0x471);
        }
        LOCK();
        plVar2 = plVar15 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      local_b8 = LVar12;
      FUN_1447cd2ec(param_1[0x1e9] + 0x7320);
    }
  }
  if (0.0 < (double)param_1[0x1e5]) {
    QueryPerformanceCounter(&local_b8);
  }
  FUN_1418ef4b2(0xffffffff);
  FUN_140635c46(0);
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
LAB_140e1adfb:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e1ae64 FUN_140e1ae64 body=125 status=ok
// SIG undefined FUN_140e1ae64(void)

undefined8 *
FUN_140e1ae64(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = FUN_1400d690e(param_3);
  cVar1 = (**(code **)(*param_1 + 0x9f8))(param_1,&local_30,param_4,*(undefined1 *)(param_3 + 0xf5))
  ;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    *param_2 = param_1;
    uVar2 = 2;
  }
  *(undefined1 *)(param_2 + 0xc) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1aee2 FUN_140e1aee2 body=978 status=ok
// SIG undefined FUN_140e1aee2(void)

undefined8 FUN_140e1aee2(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  void *_Src;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  double *pdVar15;
  longlong *plVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  undefined1 auStack_98 [40];
  double *local_70;
  int local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar12 = (longlong *)*param_2;
  if (plVar12 != (longlong *)0x0 && *(longlong *)(param_1 + 0xa8) != 0) {
    uVar11 = 0;
    if ((*(int *)(param_1 + 0x7b8) != 0) || (*(char *)(param_1 + 0x668) == '\0'))
    goto LAB_140e1af2c;
    if (*(longlong *)(param_1 + 0x6f4) != 0) {
      uVar11 = (**(code **)(*plVar12 + 0xd0))();
      plVar12 = (longlong *)FUN_140f30018(uVar11);
      if ((plVar12 == (longlong *)0x0) ||
         (cVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,param_1 + 0x6f4), cVar9 == '\0'))
      goto LAB_140e1af2a;
      plVar12 = (longlong *)*param_2;
    }
    uVar11 = FUN_140edfc58(plVar12);
    if (param_4 == '\0') {
      cVar9 = FUN_141312eea();
    }
    else {
      cVar9 = FUN_147e26aac(param_1 + 0x698,uVar11);
    }
    if (cVar9 != '\0') {
      uVar11 = FUN_140edfc58(*param_2);
      cVar9 = FUN_141312eea(param_1 + 0x6c0,uVar11);
      if (cVar9 != '\0') {
        if ((*(char *)(param_1 + 0x6ec) == '\x01') &&
           ((lVar13 = *(longlong *)(param_1 + 0xb0), lVar13 != 0 ||
            (lVar13 = FUN_1448abda6(param_1), lVar13 != 0)))) {
          uVar6 = DAT_14cb1ae68;
          if (DAT_14c9a7d10 == (undefined8 *)0x0) {
            DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
            *DAT_14c9a7d10 = 0;
            DAT_14c9a7d10[1] = 0;
            DAT_14c9a7d10[2] = 0;
            DAT_14c9a7d10[3] = 0;
          }
          FUN_14005915a(DAT_14c9a7d10,&local_70,uVar6,lVar13);
          pdVar15 = local_70;
          if ((local_70 == (double *)0x0) ||
             (plVar12 = (longlong *)CONCAT44(uStack_64,local_68), plVar12 == (longlong *)0x0)) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
            UNLOCK();
            LOCK();
            plVar16 = plVar12 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
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
          plVar16 = (longlong *)CONCAT44(uStack_64,local_68);
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar16 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar2 = (int *)((longlong)plVar16 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
          if (plVar12 != (longlong *)0x0) {
            iVar10 = (int)plVar12[1];
            do {
              plVar16 = (longlong *)0x0;
              if (iVar10 == 0) break;
              LOCK();
              iVar8 = (int)plVar12[1];
              bVar19 = iVar10 == iVar8;
              if (bVar19) {
                *(int *)(plVar12 + 1) = iVar10 + 1;
                iVar8 = iVar10;
              }
              iVar10 = iVar8;
              UNLOCK();
              plVar16 = plVar12;
            } while (!bVar19);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
            if (plVar16 != (longlong *)0x0) {
              if (pdVar15 == (double *)0x0) {
                bVar19 = true;
              }
              else {
                dVar4 = *(double *)(param_1 + 0x260);
                dVar5 = *(double *)(param_1 + 0x268);
                dVar3 = *(double *)(param_1 + 0x270);
                fVar23 = *(float *)(param_1 + 0x6f0);
                local_70 = (double *)0x0;
                local_68 = *(int *)(pdVar15 + 0x37);
                lVar13 = (longlong)local_68;
                _Src = (void *)pdVar15[0x36];
                if (lVar13 == 0) {
                  bVar19 = true;
                  bVar18 = true;
                }
                else {
                  FUN_1405b70fe(&local_70,local_68,0);
                  memcpy(local_70,_Src,lVar13 * 0x18);
                  uVar14 = (ulonglong)local_68;
                  if ((longlong)uVar14 < 1) {
                    bVar18 = true;
                    bVar19 = true;
                  }
                  else {
                    fVar23 = fVar23 * fVar23;
                    dVar20 = dVar4 - *local_70;
                    dVar22 = dVar5 - local_70[1];
                    dVar21 = dVar3 - local_70[2];
                    if ((float)(dVar21 * dVar21 + dVar22 * dVar22 + dVar20 * dVar20) < fVar23) {
                      bVar18 = false;
                      bVar19 = false;
                    }
                    else {
                      pdVar15 = local_70 + 5;
                      uVar7 = 1;
                      do {
                        uVar17 = uVar7;
                        bVar19 = uVar14 == uVar17;
                        if (bVar19) break;
                        dVar20 = dVar4 - pdVar15[-2];
                        dVar22 = dVar5 - pdVar15[-1];
                        dVar21 = dVar3 - *pdVar15;
                        pdVar15 = pdVar15 + 3;
                        uVar7 = uVar17 + 1;
                      } while (fVar23 <= (float)(dVar21 * dVar21 + dVar22 * dVar22 + dVar20 * dVar20
                                                ));
                      bVar18 = uVar14 <= uVar17;
                    }
                  }
                  if (local_70 != (double *)0x0) {
                    FUN_1400020a8();
                  }
                }
                bVar19 = (bool)(bVar19 | bVar18);
              }
              LOCK();
              plVar12 = plVar16 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar2 = (int *)((longlong)plVar16 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
              }
              if (!bVar19) goto LAB_140e1af2a;
            }
          }
        }
        uVar11 = 1;
        goto LAB_140e1af2c;
      }
    }
  }
LAB_140e1af2a:
  uVar11 = 0;
LAB_140e1af2c:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1b2b6 FUN_140e1b2b6 body=256 status=ok
// SIG undefined FUN_140e1b2b6(void)

Property * FUN_140e1b2b6(Property *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_14b455950;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_140549ad6(param_1 + 0x38,0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (0x80 < *(uint *)(param_1 + 100)) {
    *(undefined4 *)(param_1 + 100) = 0x80;
    FUN_1446efbd8(param_1 + 0x48,0);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 140e1b3b6 FUN_140e1b3b6 body=114 status=ok
// SIG undefined FUN_140e1b3b6(void)

Property * FUN_140e1b3b6(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b455680;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 140e1b428 FUN_140e1b428 body=114 status=ok
// SIG undefined FUN_140e1b428(void)

Property * FUN_140e1b428(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b455d40;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 140e1b49a FUN_140e1b49a body=26 status=ok
// SIG undefined FUN_140e1b49a(void)

undefined8 FUN_140e1b49a(longlong param_1,undefined8 param_2)

{
  FUN_140e1b4b4(param_1,param_2,param_1 + -0x20);
  return param_2;
}



// FUNCTION 140e1b4b4 FUN_140e1b4b4 body=119 status=ok
// SIG undefined FUN_140e1b4b4(void)

longlong * FUN_140e1b4b4(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_3 + 0x50);
  if (plVar7 == (longlong *)0x0) {
LAB_140e1b50e:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    do {
      if (iVar4 == 0) goto LAB_140e1b50e;
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
  }
  lVar5 = 0;
  if (plVar7 != (longlong *)0x0) {
    lVar5 = *(longlong *)(param_3 + 0x48);
  }
  lVar6 = lVar5 + 0x20;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  *param_2 = lVar6;
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 140e1b534 FUN_140e1b534 body=297 status=ok
// SIG undefined FUN_140e1b534(void)

undefined8 * FUN_140e1b534(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *param_1 = &PTR_FUN_14ac3ce30;
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_140440628(param_1 + 0x11,&DAT_14cb23d14,0);
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 4;
  *(undefined4 *)(param_1 + 0x1a) = 0x41200000;
  *(undefined1 *)(param_1 + 0x1e) = 3;
  *(char *)(param_1 + 0x1f) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x25) = 4;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x26) = 3;
  *(char *)(param_1 + 0x27) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x143) = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  *(undefined2 *)((longlong)param_1 + 0x7b) = 1;
  return param_1;
}



// FUNCTION 140e1b666 FUN_140e1b666 body=292 status=ok
// SIG undefined FUN_140e1b666(void)

undefined8 FUN_140e1b666(ulonglong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *_Str;
  ulonglong uVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  undefined1 auStack_58 [40];
  char *local_30;
  int local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pbVar1 = (byte *)*param_2;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) &&
     (_Str = *(char **)(pbVar1 + 8), _Str != (char *)0x0)) {
    sVar3 = strlen(_Str);
    iVar5 = (int)sVar3;
    if (iVar5 != 0) {
      lVar6 = (longlong)iVar5;
      pcVar10 = _Str + lVar6 + -1;
      uVar4 = 0;
      if (pcVar10 < _Str) {
        lVar9 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar10 - 0x30U)) break;
          uVar4 = uVar4 + 1;
          pcVar10 = pcVar10 + -1;
        } while (_Str <= pcVar10);
        lVar9 = 0;
        if (((uVar4 != 0) && ((int)uVar4 < iVar5)) &&
           ((lVar9 = 0, uVar4 < 0xb &&
            (lVar11 = -(ulonglong)uVar4, _Str[lVar11 + lVar6 + -1] == '_')))) {
          if ((uVar4 == 1) || (_Str[lVar11 + lVar6] != '0')) {
            lVar8 = 0;
            do {
              lVar9 = (longlong)_Str[lVar11 + lVar6] + lVar8 * 10;
              lVar8 = lVar9 + -0x30;
              lVar11 = lVar11 + 1;
            } while (lVar11 != 0);
            if (lVar8 < 0x7fffffff) {
              iVar5 = ~uVar4 + iVar5;
              lVar9 = lVar9 + -0x2f;
              goto LAB_140e1b70a;
            }
          }
          lVar9 = 0;
        }
LAB_140e1b70a:
        if (iVar5 == 0) goto LAB_140e1b687;
      }
      local_24 = 0;
      local_30 = _Str;
      local_28 = iVar5;
      uVar4 = FUN_14001a6c0(&local_30,1);
      uVar7 = lVar9 << 0x20;
      uVar2 = (ulonglong)uVar4;
      goto LAB_140e1b68b;
    }
  }
LAB_140e1b687:
  uVar2 = 0;
  uVar7 = 0;
LAB_140e1b68b:
  *param_1 = uVar2 | uVar7;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((uVar2 | uVar7) >> 8),1);
}



// FUNCTION 140e1b78c FUN_140e1b78c body=185 status=ok
// SIG undefined FUN_140e1b78c(void)

void FUN_140e1b78c(longlong *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 1) {
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x250))(param_1,&local_38,param_3);
      goto LAB_140e1b7ca;
    }
    param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
  }
  (**(code **)(*param_1 + 0x248))(param_1,&local_38,param_3);
LAB_140e1b7ca:
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_38,iVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1b846 FUN_140e1b846 body=35 status=ok
// SIG undefined FUN_140e1b846(void)

undefined8 FUN_140e1b846(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_140002266(param_2,&DAT_149e063bc,*param_3);
  return param_2;
}



// FUNCTION 140e1b86a FUN_140e1b86a body=42 status=ok
// SIG undefined FUN_140e1b86a(void)

undefined8 FUN_140e1b86a(undefined8 param_1,undefined8 param_2,float *param_3)

{
  FUN_140002266(param_2,&DAT_149e02016,(double)*param_3);
  return param_2;
}



// FUNCTION 140e1b894 FUN_140e1b894 body=41 status=ok
// SIG undefined FUN_140e1b894(void)

void FUN_140e1b894(longlong param_1,undefined8 param_2)

{
  FUN_140e1b98c();
  FUN_140e1b8be(param_1 + 0x6070,param_2);
  return;
}



// FUNCTION 140e1b8be FUN_140e1b8be body=204 status=ok
// SIG undefined FUN_140e1b8be(void)

void FUN_140e1b8be(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = DAT_14cbc67a8;
  FUN_1401533ba(&local_48,&local_28,1);
  puVar4 = &DAT_14cb7c580;
  if ((*(byte *)(param_1 + 0x240) & 4) != 0) {
    puVar4 = &DAT_14cb7c588;
  }
  uStack_3c = uStack_3c & 0xffffff00;
  local_38 = 0;
  uStack_30 = 0;
  FUN_144976b9c(&uStack_3c,*puVar4);
  uStack_2c = uStack_2c & 0xffffff00;
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1403f9e8e(param_2,iVar2);
  }
  lVar3 = *param_2;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_38;
  puVar1[1] = local_38._4_4_;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1b98c FUN_140e1b98c body=270 status=ok
// SIG undefined FUN_140e1b98c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e1b98c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1403f9d66(param_1 + 0x148);
  FUN_1403f9f8e(param_1 + -0x8a0,param_2);
  FUN_140e1ba9b(param_1 + -0x98,param_2);
  local_40 = _DAT_14cb71298;
  local_48 = DAT_14cb71290;
  uVar5 = (**(code **)(*(longlong *)(param_1 + -0x8c0) + 0x10))(param_1 + -0x8c0);
  bVar4 = FUN_14482d262(uVar5,3);
  uVar3 = DAT_14cb7c588;
  uVar5 = DAT_14cb7c580;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1403f9e8e(param_2,iVar1);
  }
  if (bVar4 != 0) {
    uVar5 = uVar3;
  }
  lVar2 = *param_2;
  lVar6 = (longlong)iVar1 * 0x20;
  *(undefined4 *)(lVar2 + 8 + lVar6) = local_40;
  *(undefined8 *)(lVar2 + lVar6) = local_48;
  *(undefined1 *)(lVar2 + 0xc + lVar6) = 1;
  *(undefined8 *)(lVar2 + 0x10 + lVar6) = uVar5;
  *(uint *)(lVar2 + 0x18 + lVar6) = (uint)bVar4;
  *(undefined1 *)(lVar2 + 0x1c + lVar6) = 0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_140e1bc18(param_1 + -0x1138);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1ba9b FUN_140e1ba9b body=332 status=ok
// SIG undefined FUN_140e1ba9b(void)

void FUN_140e1ba9b(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x98;
    if (*(longlong *)(lVar1 + 0xa8) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0xa8);
    }
    if ((longlong)*(int *)(lVar1 + 0xb0) != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar4) == DAT_14cb76718) {
          puVar3 = (undefined8 *)FUN_1403f9e22(param_2);
          *puVar3 = DAT_14cb767c8;
          *(undefined4 *)(puVar3 + 1) = DAT_14cb767d0;
          FUN_140e1bbe8(&local_38,1);
          *(undefined4 *)((longlong)puVar3 + 0xc) = local_38;
          *(undefined4 *)(puVar3 + 2) = uStack_34;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_30;
          *(undefined4 *)(puVar3 + 3) = uStack_2c;
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(lVar1 + 0xb0) * 8 != lVar4);
    }
    lVar2 = lVar1 + 0xc0;
    if (*(longlong *)(lVar1 + 0xd0) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0xd0);
    }
    if ((longlong)*(int *)(lVar1 + 0xd8) != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar4) == DAT_14cb76720) {
          puVar3 = (undefined8 *)FUN_1403f9e22(param_2);
          *puVar3 = DAT_14cb767e0;
          *(undefined4 *)(puVar3 + 1) = DAT_14cb767e8;
          FUN_140e1bbe8(&local_38,1);
          *(undefined4 *)((longlong)puVar3 + 0xc) = local_38;
          *(undefined4 *)(puVar3 + 2) = uStack_34;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_30;
          *(undefined4 *)(puVar3 + 3) = uStack_2c;
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(lVar1 + 0xd8) * 8 != lVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e1bbe8 FUN_140e1bbe8 body=48 status=ok
// SIG undefined FUN_140e1bbe8(void)

void FUN_140e1bbe8(undefined1 *param_1,byte param_2)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 1;
  puVar1 = &DAT_14cb7c580;
  if (param_2 != 0) {
    puVar1 = &DAT_14cb7c588;
  }
  *(uint *)(param_1 + 0xc) = (uint)param_2;
  *(undefined8 *)(param_1 + 4) = *puVar1;
  return;
}



// FUNCTION 140e1bc18 FUN_140e1bc18 body=367 status=ok
// SIG undefined FUN_140e1bc18(void)

void FUN_140e1bc18(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(char *)(param_1 + 0x178) == '\x03') &&
      (lVar3 = *(longlong *)(param_1 + 0x13f8), lVar3 != 0)) && (*(char *)(lVar3 + 0x450) != '\0'))
  {
    if (*(char *)(lVar3 + 0x450) == '\x02') {
      uVar2 = *(undefined1 *)(lVar3 + 0x490);
    }
    else {
      local_98[0] = 0;
      local_70 = 0;
      FUN_1456bb102(local_98,param_1);
      FUN_1447c3578(lVar3 + 0x458,local_68,local_98);
      uVar5 = FUN_144a7ecd0(local_68);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar4 = local_68;
        if (0x18 < local_50) {
          pppuVar4 = (undefined8 ***)local_68[0];
        }
        (*pcVar1)(pppuVar4);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(local_68[0]);
      }
      FUN_144a5ac3a(local_98);
      lVar3 = FUN_144860928();
      uVar2 = FUN_1457b5260(lVar3 + 0x110,uVar5);
    }
    FUN_140e1bd88(local_98,uVar2);
    FUN_1403a0728(local_98,local_68);
    FUN_140bfca4e(param_1 + 0x31e0,&DAT_14cb71228,local_68,0);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1bd88 FUN_140e1bd88 body=18 status=ok
// SIG undefined FUN_140e1bd88(void)

undefined1 * FUN_140e1bd88(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = 2;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 140e1bd9a FUN_140e1bd9a body=263 status=ok
// SIG undefined FUN_140e1bd9a(void)

void FUN_140e1bd9a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar4 + uVar6 * 4);
    if (lVar3 != -1) {
      lVar7 = *param_1;
      lVar3 = lVar3 * 0x1c;
      local_40 = *(undefined8 *)(lVar7 + lVar3);
      local_48 = param_2;
      cVar2 = FUN_14472d054();
      if (cVar2 == '\0') {
        lVar3 = lVar7 + lVar3;
        do {
          lVar7 = lVar3;
          lVar3 = (longlong)*(int *)(lVar7 + 0x14);
          if (lVar3 == -1) goto LAB_140e1be2e;
          lVar1 = *param_1;
          lVar3 = lVar3 * 0x1c;
          local_40 = *(undefined8 *)(lVar1 + lVar3);
          local_48 = param_2;
          cVar2 = FUN_14472d054(&local_40,&local_48);
          lVar3 = lVar1 + lVar3;
        } while (cVar2 == '\0');
        puVar5 = (undefined4 *)(lVar7 + 0x14);
      }
      else {
        puVar5 = (undefined4 *)((longlong)plVar4 + uVar6 * 4);
      }
      FUN_140e1bea2(param_1,*puVar5);
    }
  }
LAB_140e1be2e:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1bea2 FUN_140e1bea2 body=99 status=ok
// SIG undefined FUN_140e1bea2(void)

void FUN_140e1bea2(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x18 + (longlong)param_2 * 0x1c);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)((longlong)iVar2 * 0x1c + lVar1 + 0x14);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x1c + 0x14);
  FUN_140e1bf06();
  return;
}



// FUNCTION 140e1bf06 FUN_140e1bf06 body=130 status=ok
// SIG undefined FUN_140e1bf06(void)

void FUN_140e1bf06(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140e1bf96 FUN_140e1bf96 body=31 status=ok
// SIG undefined FUN_140e1bf96(void)

undefined8 FUN_140e1bf96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e1bfb6 FUN_140e1bfb6 body=336 status=ok
// SIG undefined FUN_140e1bfb6(void)

void FUN_140e1bfb6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar2 = param_1 + 0x70;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar4 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x88);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (local_50 != lVar2)) {
    do {
      iVar3 = *(int *)(*local_80 + 8 + (longlong)iStack_64 * 0x14);
      if (iVar3 != 0) {
        local_88 = iVar3;
        FUN_140dfb21a(param_1,param_2,*local_80 + (longlong)iStack_64 * 0x14,1);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar4) || (local_70 != lVar2)) || (local_80 != plVar1));
  }
  FUN_14005eae2(plVar1);
  FUN_140e1c108(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e1c108 FUN_140e1c108 body=119 status=ok
// SIG undefined FUN_140e1c108(void)

void FUN_140e1c108(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 0xb0) == '\x01') && (*(char *)(param_2 + 0x178) != '\x03')) {
    uVar1 = *(uint *)(param_1 + 0xc) ^ *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 8) & uVar1;
    uVar1 = uVar1 & *(uint *)(param_1 + 0xc);
    if (uVar1 != 0) {
      FUN_140dfb6b6(param_1,param_2,0,&DAT_14cbc2790,uVar1);
    }
    if (uVar2 != 0) {
      FUN_140dfb6b6(param_1,param_2,1,&DAT_14cbc2790,uVar2);
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  }
  return;
}



// FUNCTION 140e1c186 FUN_140e1c186 body=57 status=ok
// SIG undefined FUN_140e1c186(void)

void FUN_140e1c186(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4f78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4f78 = FUN_140002ddd(FUN_1465c12c7,uVar1,L"InventoryGadgetClassData");
  }
  return;
}



// FUNCTION 140e1c1c0 FUN_140e1c1c0 body=469 status=ok
// SIG undefined FUN_140e1c1c0(void)

void FUN_140e1c1c0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_140e1c396();
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 == 0) {
LAB_140e1c34c:
    *(undefined8 *)(param_1 + 0x520) = 0;
  }
  else {
    lVar4 = FUN_1412308c8();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_140e1c34c;
    uVar1 = *(uint *)(lVar6 + 0xc);
    *(uint *)(param_1 + 0x520) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (iVar3 == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar7;
      }
      *(int *)(param_1 + 0x524) = iVar3;
      if (iVar3 != 0) goto LAB_140e1c242;
    }
    else {
      *(int *)(param_1 + 0x524) = iVar3;
LAB_140e1c242:
      uVar1 = *(uint *)(param_1 + 0x520);
      if (((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
           (plVar5 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0)) &&
          (((int)plVar5[2] == iVar3 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) &&
         (lVar6 = *plVar5, lVar6 != 0)) {
        if ((*(longlong *)(lVar6 + 0x1848) == 0) ||
           (*(char *)(*(longlong *)(lVar6 + 0x1848) + 0x6f0) == '\0')) {
          *(undefined8 *)(param_1 + 0x138) = DAT_14c8464f0;
          uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          *(ulonglong *)(param_1 + 0x128) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          *(undefined8 *)(param_1 + 0x130) = uVar2;
        }
        if (*(char *)(lVar6 + 0x178) == '\x03') {
          *(undefined8 *)(lVar6 + 0x1728) = *(undefined8 *)(param_1 + 0x138);
          uVar2 = *(undefined8 *)(param_1 + 0x130);
          *(undefined8 *)(lVar6 + 0x1718) = *(undefined8 *)(param_1 + 0x128);
          *(undefined8 *)(lVar6 + 0x1720) = uVar2;
          return;
        }
        *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(lVar6 + 0x1728);
        uVar9 = *(undefined4 *)(lVar6 + 0x1718);
        uVar10 = *(undefined4 *)(lVar6 + 0x171c);
        uVar11 = *(undefined4 *)(lVar6 + 0x1720);
        uVar12 = *(undefined4 *)(lVar6 + 0x1724);
        goto LAB_140e1c2d0;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x138) = DAT_14c8464f0;
  uVar9 = (undefined4)DAT_14c8464e0;
  uVar10 = DAT_14c8464e0._4_4_;
  uVar11 = (undefined4)DAT_14c8464e8;
  uVar12 = DAT_14c8464e8._4_4_;
LAB_140e1c2d0:
  *(undefined4 *)(param_1 + 0x128) = uVar9;
  *(undefined4 *)(param_1 + 300) = uVar10;
  *(undefined4 *)(param_1 + 0x130) = uVar11;
  *(undefined4 *)(param_1 + 0x134) = uVar12;
  return;
}



// FUNCTION 140e1c396 FUN_140e1c396 body=599 status=ok
// SIG undefined FUN_140e1c396(void)

void FUN_140e1c396(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_148 [40];
  undefined1 local_120 [192];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_140e1c664();
  if ((*(byte *)(param_1 + 0x180) & 8) != 0) {
    if (((~*(byte *)(param_1 + 0x180) & 3) != 0) && ((*(byte *)(param_1 + 0x36c) & 2) == 0)) {
      dVar6 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x2c8),0x4076800000000000);
      dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                      (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
      if ((dVar6 == 0.0) && (!NAN(dVar6))) {
        dVar6 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x2d0),0x4076800000000000);
        dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                        (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
        if ((dVar6 == 0.0) && (!NAN(dVar6))) {
          dVar6 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x2d8));
          dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                          (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
          if ((dVar6 == 0.0) && (!NAN(dVar6))) goto LAB_140e1c3da;
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x4c8);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x178) == '\x03')) {
      FUN_140b3d268(lVar4,param_1 + 0x128);
    }
  }
LAB_140e1c3da:
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 == 0) {
    if (*(longlong *)(param_1 + 0xa8) == 0) goto LAB_140e1c3f8;
    local_60 = (undefined1 *)0x0;
    local_58 = 0x1800000000;
    FUN_14024dbd6(*(longlong *)(param_1 + 0xa8),local_120,0);
    puVar3 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar3 = local_120;
    }
    lVar4 = (longlong)(int)local_58;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(puVar3 + lVar5);
        if (plVar1 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar1 + 0x480))(plVar1,0);
          if (cVar2 != '\0') {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar1);
            }
            *(longlong **)(param_1 + 0x118) = plVar1;
            break;
          }
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    lVar4 = *(longlong *)(param_1 + 0x118);
    if (lVar4 == 0) goto LAB_140e1c3f8;
  }
  FUN_140e1c5ee(lVar4 + 0x410,1);
LAB_140e1c3f8:
  if ((local_50 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e1c5ee FUN_140e1c5ee body=117 status=ok
// SIG undefined FUN_140e1c5ee(void)

void FUN_140e1c5ee(longlong param_1,byte param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x3b) & 1) != param_2) {
    *(byte *)(param_1 + 0x3b) = *(byte *)(param_1 + 0x3b) & 0xfe | param_2;
    local_18 = &local_28;
    local_20 = &LAB_143622eee;
    local_28 = param_1;
    FUN_144966906(param_1 + 0x138);
    FUN_1400bcfd8(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1c664 FUN_140e1c664 body=2029 status=ok
// SIG undefined FUN_140e1c664(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e1c664(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  undefined1 local_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_140;
  double local_138;
  undefined8 local_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_140e1ce52();
  dVar6 = (double)param_1[0x25];
  dVar15 = (double)param_1[0x26];
  dVar11 = (double)param_1[0x27];
  dVar18 = dVar11 * dVar11 + dVar6 * dVar6 + dVar15 * dVar15;
  if (dVar18 <= 0.0) goto LAB_140e1c933;
  if (0.0 < *(float *)(param_1 + 0x2f)) {
    if (((dVar18 != 1.0) || (dVar19 = dVar6, dVar7 = dVar15, dVar8 = dVar11, NAN(dVar18))) &&
       (dVar19 = DAT_14c8464e0, dVar7 = DAT_14c8464e8, dVar8 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar18)) {
      dVar18 = 1.0 / SQRT(dVar18);
      dVar19 = dVar6 * dVar18;
      dVar7 = dVar15 * dVar18;
      dVar8 = dVar11 * dVar18;
    }
    dVar6 = (double)*(float *)(param_1 + 0x2f);
    param_1[0x25] = (longlong)(dVar19 * dVar6);
    param_1[0x26] = (longlong)(dVar7 * dVar6);
    param_1[0x27] = (longlong)(dVar8 * dVar6);
  }
  bVar4 = *(byte *)(param_1 + 0x30);
  if ((bVar4 & 8) != 0) {
    local_118 = param_1[0x27];
    local_128 = param_1[0x25];
    lStack_120 = param_1[0x26];
    (**(code **)(*param_1 + 0x578))(param_1);
    bVar4 = *(byte *)(param_1 + 0x30);
  }
  if (((bVar4 & 1) != 0) && (param_1[0x22] != 0)) {
    dVar6 = (double)param_1[0x25];
    dVar15 = (double)param_1[0x26];
    local_138 = 0.0;
    if (((dVar6 != 0.0) || ((NAN(dVar6) || (dVar15 != 0.0)))) || (NAN(dVar15))) {
      local_138 = atan2(dVar15,dVar6);
      local_138 = local_138 * 57.29577951308232;
      dVar6 = (double)param_1[0x25];
      dVar15 = (double)param_1[0x26];
    }
    dVar15 = SQRT(dVar6 * dVar6 + dVar15 * dVar15);
    dVar6 = (double)param_1[0x27];
    local_140 = 0.0;
    if ((((dVar6 != 0.0) || (NAN(dVar6))) || (dVar15 != 0.0)) || (NAN(dVar15))) {
      local_140 = atan2(dVar6,dVar15);
      local_140 = local_140 * 57.29577951308232;
    }
    if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
      dVar6 = (double)FUN_144719204(local_138,0x4076800000000000);
      local_140 = 0.0;
      dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                      (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
      local_138 = (double)(~-(ulonglong)(180.0 < dVar6) & (ulonglong)dVar6 |
                          (ulonglong)(dVar6 + -360.0) & -(ulonglong)(180.0 < dVar6));
    }
    local_130 = 0;
    local_198 = local_198 & 0xffffffffffffff00;
    FUN_14020f670(param_1[0x22],&local_140,0,0);
  }
  if (param_1[0x22] != 0) {
    dVar6 = (double)FUN_144719204(param_1[0x59],0x4076800000000000);
    dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                    (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
    if ((dVar6 == 0.0) && (!NAN(dVar6))) {
      dVar6 = (double)FUN_144719204(param_1[0x5a],0x4076800000000000);
      dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                      (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
      if ((dVar6 == 0.0) && (!NAN(dVar6))) {
        dVar6 = (double)FUN_144719204(param_1[0x5b]);
        dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                        (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
        if ((dVar6 == 0.0) && (!NAN(dVar6))) goto LAB_140e1c908;
      }
    }
    auVar14 = _DAT_1499387d0;
    lVar3 = param_1[0x22];
    auVar1 = *(undefined1 (*) [16])(lVar3 + 0x1b0);
    dVar6 = (double)DAT_1499387d0;
    dVar15 = DAT_1499387d0._8_8_;
    auVar13 = divpd(auVar1,_DAT_1499387d0);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(double *)(lVar3 + 0x1c0);
    auVar16 = divpd(auVar16,_DAT_1499387d0);
    auVar13 = roundpd(auVar13,auVar13,3);
    auVar16 = roundpd(auVar16,auVar16,3);
    dVar19 = (auVar1._0_8_ - auVar13._0_8_ * dVar6) * 0.008726646259971648;
    dVar21 = (auVar1._8_8_ - auVar13._8_8_ * dVar15) * 0.008726646259971648;
    dVar11 = (*(double *)(lVar3 + 0x1c0) - auVar16._0_8_ * dVar6) * 0.008726646259971648;
    dVar18 = (0.0 - auVar16._8_8_ * dVar15) * 0.008726646259971648;
    dVar7 = sin(dVar19);
    dVar8 = sin(dVar21);
    dVar9 = sin(dVar11);
    sin(dVar18);
    dVar10 = cos(dVar19);
    dVar21 = cos(dVar21);
    dVar11 = cos(dVar11);
    cos(dVar18);
    dVar20 = -(dVar21 * dVar7 * dVar9) + dVar8 * dVar10 * dVar11;
    dVar22 = dVar8 * dVar7 * dVar9 + dVar21 * dVar10 * dVar11;
    dVar19 = dVar7 * dVar8 * dVar11 - dVar10 * dVar21 * dVar9;
    dVar7 = -(dVar7 * dVar21 * dVar11) - dVar10 * dVar8 * dVar9;
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x59);
    auVar13 = divpd(auVar1,auVar14);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = param_1[0x5b];
    auVar16 = divpd(auVar17,auVar14);
    auVar14 = roundpd(auVar13,auVar13,3);
    auVar13 = roundpd(auVar16,auVar16,3);
    dVar11 = (auVar1._0_8_ - auVar14._0_8_ * dVar6) * 0.008726646259971648;
    dVar18 = (auVar1._8_8_ - auVar14._8_8_ * dVar15) * 0.008726646259971648;
    dVar6 = ((double)param_1[0x5b] - auVar13._0_8_ * dVar6) * 0.008726646259971648;
    dVar15 = (0.0 - auVar13._8_8_ * dVar15) * 0.008726646259971648;
    dVar8 = sin(dVar11);
    dVar9 = sin(dVar18);
    dVar10 = sin(dVar6);
    sin(dVar15);
    dVar11 = cos(dVar11);
    dVar18 = cos(dVar18);
    dVar21 = cos(dVar6);
    cos(dVar15);
    dVar6 = -(dVar18 * dVar8 * dVar10) + dVar9 * dVar11 * dVar21;
    dVar15 = dVar9 * dVar8 * dVar10 + dVar18 * dVar11 * dVar21;
    dVar12 = dVar8 * dVar9 * dVar21 - dVar11 * dVar18 * dVar10;
    dVar11 = -(dVar8 * dVar18 * dVar21) - dVar11 * dVar9 * dVar10;
    local_168 = dVar11 * dVar20 * -1.0 + dVar6 * dVar7 + dVar19 * dVar15 * 1.0 + dVar22 * dVar12;
    dStack_160 = dVar12 * dVar20 * 1.0 + dVar15 * dVar7 + dVar19 * dVar6 * -1.0 + dVar22 * dVar11;
    local_158 = dVar15 * dVar20 * 1.0 + ((dVar19 * dVar11 * 1.0 + dVar22 * dVar6) - dVar7 * dVar12);
    dStack_150 = dVar6 * dVar20 * -1.0 +
                 ((dVar19 * dVar12 * -1.0 + dVar22 * dVar15) - dVar7 * dVar11);
    FUN_140e1cfe8(lVar3,local_108);
    local_d8 = *(undefined8 *)(lVar3 + 0x1a8);
    local_e8 = *(undefined8 *)(lVar3 + 0x198);
    uStack_e0 = *(undefined8 *)(lVar3 + 0x1a0);
    local_190 = 0;
    local_198 = 0;
    FUN_144927ad4(lVar3,&local_e8,local_108,0);
  }
LAB_140e1c908:
  (**(code **)(*param_1 + 0x4d0))(param_1);
  plVar2 = (longlong *)param_1[0x23];
  if ((plVar2 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar2 + 0x480))(plVar2,0), cVar5 != '\0')) {
    local_178 = param_1[0x27];
    local_188 = param_1[0x25];
    lStack_180 = param_1[0x26];
    (**(code **)(*(longlong *)param_1[0x23] + 0x6f8))((longlong *)param_1[0x23],&local_188,0,0);
  }
LAB_140e1c933:
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e1ce52 FUN_140e1ce52 body=135 status=ok
// SIG undefined FUN_140e1ce52(void)

void FUN_140e1ce52(longlong *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x2e);
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x172);
  *(undefined1 *)((longlong)param_1 + 0x172) = 1;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 8;
  if ((((bVar2 & 8) != 0) &&
      (((param_1[0x22] == 0 || ((*(uint *)(param_1[0x22] + 8) >> 0x1e & 1) != 0)) &&
       (param_1[0x15] != 0)))) && (*(longlong *)(param_1[0x15] + 0x1c8) != 0)) {
    (**(code **)(*param_1 + 0x4b0))(param_1);
    bVar2 = *(byte *)(param_1 + 0x2e);
  }
  if ((bVar2 & 0x20) != 0) {
    (**(code **)(*param_1 + 0x568))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x172) = uVar1;
  return;
}



// FUNCTION 140e1ceda FUN_140e1ceda body=269 status=ok
// SIG undefined FUN_140e1ceda(void)

void FUN_140e1ceda(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar2;
  
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (lVar4 != 0) {
    dVar5 = *param_2;
    dVar6 = param_2[1];
    dVar7 = *(double *)(lVar4 + 0x240);
    dVar8 = *(double *)(lVar4 + 0x248);
    dVar9 = *(double *)(lVar4 + 0x250);
    dVar1 = *(double *)(lVar4 + 600);
    dVar2 = *(double *)(lVar4 + 600);
    dVar10 = dVar6 * dVar7 - dVar5 * dVar8;
    dVar11 = param_2[2] * dVar8 - dVar6 * dVar9;
    dVar12 = dVar5 * dVar9 - dVar7 * param_2[2];
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    dVar3 = param_2[2];
    *(double *)(param_1 + 0x128) = (dVar10 * dVar8 - dVar12 * dVar9) + dVar1 * dVar11 + dVar5;
    *(double *)(param_1 + 0x130) = (dVar9 * dVar11 - dVar7 * dVar10) + dVar2 * dVar12 + dVar6;
    *(double *)(param_1 + 0x138) = dVar10 * dVar1 + dVar3 + (dVar12 * dVar7 - dVar11 * dVar8);
  }
  return;
}



// FUNCTION 140e1cfe8 FUN_140e1cfe8 body=574 status=ok
// SIG undefined FUN_140e1cfe8(void)

double * FUN_140e1cfe8(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  double *pdVar10;
  double *pdVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_1c8 [32];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_148 [12];
  double local_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_a8 [16];
  ulonglong local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[3];
  param_2[2] = param_3[2];
  param_2[3] = dVar3;
  *param_2 = dVar1;
  param_2[1] = dVar2;
  plVar8 = *(longlong **)(param_1 + 0x120);
  if ((plVar8 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x1f8) & 8) == 0)) {
    uVar5 = (**(code **)(*plVar8 + 0x4a8))(plVar8,&local_e8,*(undefined8 *)(param_1 + 0x128),0);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *(ulonglong *)(param_1 + 0x1d8);
    auVar12 = minpd(*(undefined1 (*) [16])(param_1 + 0x1c8),local_a8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_98;
    auVar15 = minpd(auVar14,auVar15);
    auVar13._8_8_ = -(ulonglong)(auVar12._8_8_ < 0.0);
    auVar13._0_8_ = -(ulonglong)(auVar12._0_8_ < 0.0);
    iVar6 = movmskpd(uVar5,auVar13);
    auVar12._8_8_ = -(ulonglong)(auVar15._8_8_ < 0.0);
    auVar12._0_8_ = -(ulonglong)(auVar15._0_8_ < 0.0);
    uVar7 = movmskpd((int)plVar8,auVar12);
    if ((uVar7 & 0x3fffffff) == 0 && iVar6 == 0) {
      local_d8 = local_d8 * -1.0;
      dStack_d0 = dStack_d0 * 1.0;
      dVar1 = *param_3;
      dVar2 = param_3[1];
      dVar3 = param_3[2];
      dVar4 = param_3[3];
      local_1a8 = dVar2 * local_d8 * -1.0 +
                  ((dVar1 * dStack_d0 - local_e8 * dVar4 * 1.0) - dVar3 * local_e0);
      dStack_1a0 = dVar1 * local_d8 * 1.0 +
                   ((dVar2 * dStack_d0 - local_e8 * dVar3 * -1.0) - dVar4 * local_e0);
      local_198 = dVar4 * local_d8 * 1.0 +
                  local_e0 * dVar1 + (dStack_d0 * dVar3 - local_e8 * dVar2 * 1.0);
      dStack_190 = dVar3 * local_d8 * -1.0 +
                   local_e0 * dVar2 + (dStack_d0 * dVar4 - local_e8 * dVar1 * -1.0);
    }
    else {
      pdVar10 = (double *)(param_1 + 0x240);
      pdVar11 = local_148;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pdVar11 = *pdVar10;
        pdVar10 = pdVar10 + 1;
        pdVar11 = pdVar11 + 1;
      }
      local_148[0] = *param_3;
      local_148[1] = param_3[1];
      local_148[2] = param_3[2];
      local_148[3] = param_3[3];
      FUN_1449437a2(local_148,&local_1a8,&local_e8);
    }
    *param_2 = local_1a8;
    param_2[1] = dStack_1a0;
    param_2[2] = local_198;
    param_2[3] = dStack_190;
  }
  if ((local_80 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1d227 thunk_FUN_140e1d22c body=5 status=ok
// SIG undefined thunk_FUN_140e1d22c(void)

longlong * thunk_FUN_140e1d22c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  do {
    if (param_1 == (longlong *)0x0) {
LAB_140e1d662:
      plVar4 = (longlong *)0x0;
LAB_140e1d34e:
      if ((uStack_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return plVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (DAT_14cb63950 == 0) {
      ppcStack_40 = &pcStack_20;
      pcStack_20 = FUN_144a7958c;
      pcStack_30 = FUN_14081d0ea;
      pcStack_38 = (code *)&LAB_1464ec72a;
      puStack_48 = &LAB_1486f5f75;
      puStack_50 = &LAB_140945686;
      pwStack_58 = L"Engine";
      uStack_60 = 0;
      uStack_68 = 0x10000004;
      uStack_70 = 0x10;
      uStack_78 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (plVar4 = param_1,
       *(longlong *)
        (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
       DAT_14cb63950 + 0x30)) goto LAB_140e1d34e;
    lVar1 = FUN_140e1d66a();
    lVar2 = param_1[2];
    iVar3 = *(int *)(lVar2 + 0x38);
    if ((iVar3 < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      if (DAT_14cacf818 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = FUN_141030f22;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = (code *)&LAB_1463b216c;
        puStack_48 = &LAB_1479977e3;
        puStack_50 = &LAB_1463b2171;
        pwStack_58 = L"Game";
        uStack_60 = 0;
        uStack_68 = 0x10000004;
        uStack_70 = 0x10;
        uStack_78 = 0x750;
        FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
        lVar2 = param_1[2];
        iVar3 = *(int *)(lVar2 + 0x38);
      }
      if (((*(int *)(DAT_14cacf818 + 0x38) <= iVar3) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8)
           == DAT_14cacf818 + 0x30)) &&
         (plVar4 = (longlong *)param_1[0x85], plVar4 != (longlong *)0x0)) {
        if (DAT_14cb63950 == 0) {
          ppcStack_40 = &pcStack_20;
          pcStack_20 = FUN_144a7958c;
          pcStack_30 = FUN_14081d0ea;
          pcStack_38 = (code *)&LAB_1464ec72a;
          puStack_48 = &LAB_1486f5f75;
          puStack_50 = &LAB_140945686;
          pwStack_58 = L"Engine";
          uStack_60 = 0;
          uStack_68 = 0x10000004;
          uStack_70 = 0x10;
          uStack_78 = 0x19d0;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee)
          ;
        }
        if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
            DAT_14cb63950 + 0x30)) goto LAB_140e1d34e;
      }
      lVar1 = FUN_140a3aef4();
      lVar2 = param_1[2];
      iVar3 = *(int *)(lVar2 + 0x38);
      if ((*(int *)(lVar1 + 0x38) <= iVar3) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30)) {
        plVar4 = (longlong *)param_1[0x355];
        goto LAB_140e1d34e;
      }
      if (DAT_14cac9ca8 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = FUN_141030f22;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_1478c0a72;
        puStack_50 = &LAB_1417b2375;
        pwStack_58 = L"Engine";
        uStack_60 = 0x1000000000;
        uStack_68 = 0x10000004;
        uStack_70 = 8;
        uStack_78 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        lVar2 = param_1[2];
        iVar3 = *(int *)(lVar2 + 0x38);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar3) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_98);
      }
      goto LAB_140e1d662;
    }
    param_1 = (longlong *)(**(code **)(*param_1 + 0x5d8))(param_1);
  } while( true );
}



// FUNCTION 140e1d22c FUN_140e1d22c body=1067 status=ok
// SIG undefined FUN_140e1d22c(void)

longlong * FUN_140e1d22c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
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
  do {
    if (param_1 == (longlong *)0x0) {
LAB_140e1d662:
      plVar4 = (longlong *)0x0;
LAB_140e1d34e:
      if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return plVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (DAT_14cb63950 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = (code *)&LAB_1464ec72a;
      local_48 = &LAB_1486f5f75;
      local_50 = &LAB_140945686;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (plVar4 = param_1,
       *(longlong *)
        (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
       DAT_14cb63950 + 0x30)) goto LAB_140e1d34e;
    lVar1 = FUN_140e1d66a();
    lVar2 = param_1[2];
    iVar3 = *(int *)(lVar2 + 0x38);
    if ((iVar3 < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      if (DAT_14cacf818 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = (code *)&LAB_1463b216c;
        local_48 = &LAB_1479977e3;
        local_50 = &LAB_1463b2171;
        local_58 = L"Game";
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x750;
        FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
        lVar2 = param_1[2];
        iVar3 = *(int *)(lVar2 + 0x38);
      }
      if (((*(int *)(DAT_14cacf818 + 0x38) <= iVar3) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8)
           == DAT_14cacf818 + 0x30)) &&
         (plVar4 = (longlong *)param_1[0x85], plVar4 != (longlong *)0x0)) {
        if (DAT_14cb63950 == 0) {
          local_40 = &local_20;
          local_20 = FUN_144a7958c;
          local_30 = FUN_14081d0ea;
          local_38 = (code *)&LAB_1464ec72a;
          local_48 = &LAB_1486f5f75;
          local_50 = &LAB_140945686;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x19d0;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee)
          ;
        }
        if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
            DAT_14cb63950 + 0x30)) goto LAB_140e1d34e;
      }
      lVar1 = FUN_140a3aef4();
      lVar2 = param_1[2];
      iVar3 = *(int *)(lVar2 + 0x38);
      if ((*(int *)(lVar1 + 0x38) <= iVar3) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30)) {
        plVar4 = (longlong *)param_1[0x355];
        goto LAB_140e1d34e;
      }
      if (DAT_14cac9ca8 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_1478c0a72;
        local_50 = &LAB_1417b2375;
        local_58 = L"Engine";
        local_60 = 0x1000000000;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        lVar2 = param_1[2];
        iVar3 = *(int *)(lVar2 + 0x38);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar3) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
      goto LAB_140e1d662;
    }
    param_1 = (longlong *)(**(code **)(*param_1 + 0x5d8))(param_1);
  } while( true );
}



// FUNCTION 140e1d66a FUN_140e1d66a body=228 status=ok
// SIG undefined FUN_140e1d66a(void)

longlong FUN_140e1d66a(void)

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
  if (DAT_14cad1030 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1463b6ad0;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458bba18;
    local_38 = &LAB_1479d9e05;
    local_40 = &LAB_1463b6b04;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x300;
    FUN_14081cfa3(L"/Script/Engine",L"ChildActorComponent",&DAT_14cad1030,FUN_1463b6aae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1030;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1d75c FUN_140e1d75c body=31 status=ok
// SIG undefined FUN_140e1d75c(void)

undefined8 FUN_140e1d75c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e1d77c FUN_140e1d77c body=22 status=ok
// SIG undefined FUN_140e1d77c(void)

undefined8 FUN_140e1d77c(undefined8 param_1,undefined8 param_2)

{
  FUN_140e1d792();
  return param_2;
}



// FUNCTION 140e1d792 FUN_140e1d792 body=1178 status=ok
// SIG undefined FUN_140e1d792(void)

undefined8 FUN_140e1d792(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  uint *local_118;
  longlong local_110 [2];
  undefined4 local_100;
  undefined4 uStack_fc;
  int local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_cc [4];
  longlong *local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar17 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  iVar2 = *(int *)(param_1 + 0x80);
  uVar19 = 1;
  iVar13 = 0;
  iVar12 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x68);
    }
    uVar18 = *puVar6;
    if (uVar18 == 0) {
      iVar12 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar12 = iVar2 + -1;
      }
      uVar17 = 0;
      uVar19 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar19 = uVar17;
      }
      do {
        if (uVar19 == uVar17) goto LAB_140e1d83a;
        iVar13 = iVar13 + 0x20;
        uVar18 = puVar6[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar17 = 0;
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18);
    uVar1 = uVar19 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar12 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
  }
  if (iVar12 != iVar2) {
    uVar18 = 0xffffffff;
    local_128 = param_3;
    local_120 = param_2;
    local_118 = (uint *)(param_1 + 0x68);
    do {
      lVar15 = *(longlong *)(param_1 + 0x58);
      plVar7 = *(longlong **)(lVar15 + 0x10 + (longlong)iVar12 * 0x30);
      if ((plVar7 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*plVar7 + 0x40))(plVar7,param_3), param_3 = local_128, cVar5 != '\0')
         ) {
        plVar7 = (longlong *)(lVar15 + (longlong)iVar12 * 0x30);
        (**(code **)(*(longlong *)plVar7[2] + 0x20))((longlong *)plVar7[2],&local_e0);
        (**(code **)(*(longlong *)plVar7[2] + 0x48))((longlong *)plVar7[2],&local_100);
        iVar12 = local_f8;
        if (CONCAT44(uStack_fc,local_100) != 0) {
          FUN_1400020a8();
        }
        local_f0 = (undefined4)local_e0;
        uStack_ec = local_e0._4_4_;
        uStack_e8 = (undefined4)uStack_d8;
        uStack_e4 = uStack_d8._4_4_;
        if (iVar12 < 2) {
          local_e0 = 0;
          uStack_d8 = 0;
          local_100 = 3;
          local_c0 = &local_100;
          local_c8 = plVar7;
          FUN_140b40fd0(&local_b8,local_110,&local_c8);
        }
        else {
          local_e0 = 0;
          uStack_d8 = 0;
          local_100 = 3;
          (**(code **)(*(longlong *)plVar7[2] + 0x48))((longlong *)plVar7[2],local_110);
          local_c0 = &local_100;
          local_c8 = local_110;
          FUN_1472ad862(&local_b8,local_cc,&local_c8,0);
          if (local_110[0] != 0) {
            FUN_1400020a8();
          }
        }
        if (CONCAT44(uStack_ec,local_f0) != 0) {
          FUN_1400020a8();
        }
        param_3 = local_128;
        if (local_e0 != 0) {
          FUN_1400020a8();
          param_3 = local_128;
        }
      }
      uVar18 = uVar18 & ~(uint)uVar19;
      puVar6 = *(uint **)(param_1 + 0x78);
      if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
        puVar6 = local_118;
      }
      iVar3 = *(int *)(param_1 + 0x80);
      iVar12 = (int)uVar17;
      lVar15 = (longlong)iVar12;
      uVar11 = puVar6[lVar15] & uVar18;
      if (uVar11 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar12) {
          iVar10 = iVar12;
        }
        if (iVar12 < iVar9) {
          lVar16 = 0;
          do {
            uVar11 = puVar6[lVar15 + lVar16 + 1];
            if (uVar11 != 0) {
              uVar17 = (ulonglong)(iVar12 + (int)lVar16 + 1);
              uVar18 = 0xffffffff;
              goto LAB_140e1da81;
            }
            iVar13 = iVar13 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar10 - lVar15 != lVar16);
          uVar18 = 0xffffffff;
          iVar12 = iVar10;
        }
        uVar17 = (ulonglong)(iVar12 + 1);
        param_3 = local_128;
        iVar12 = iVar3;
      }
      else {
LAB_140e1da81:
        uVar19 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar19 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar12 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar12) {
          iVar12 = iVar3;
        }
      }
      param_2 = local_120;
    } while (iVar12 != iVar2);
  }
LAB_140e1d83a:
  plVar7 = *(longlong **)(param_1 + 0x48);
  if (*(code **)(*plVar7 + 0x50) != FUN_144828418) {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x50))();
  }
  FUN_1447a1fc0(plVar7);
  plVar7 = *(longlong **)(param_1 + 0x48);
  pcVar4 = *(code **)(*plVar7 + 0x28);
  if (pcVar4 == FUN_14482841c) {
    plVar8 = plVar7 + 3;
    if (plVar7[5] != 0) {
      plVar8 = (longlong *)(plVar7[5] + 8);
    }
  }
  else if (pcVar4 == (code *)&LAB_14010c34c) {
    plVar8 = plVar7 + 2;
  }
  else {
    plVar8 = (longlong *)(*pcVar4)(plVar7);
  }
  if ((int)plVar8[1] == 0) {
    puVar14 = &DAT_149dfb77a;
  }
  else {
    puVar14 = (undefined2 *)*plVar8;
  }
  FUN_140230a63();
  FUN_140a69a96(&DAT_14c8731a8,param_2,puVar14,&local_b8);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e1dc38 FUN_140e1dc38 body=863 status=ok
// SIG undefined FUN_140e1dc38(void)

undefined8 FUN_140e1dc38(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined8 unaff_RBP;
  undefined4 uVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_a8;
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  undefined8 ***local_78 [3];
  ushort local_60;
  undefined6 uStack_5e;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  local_80 = 0;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    uVar6 = *(undefined4 *)(param_1 + 0x7c);
    lVar3 = *(longlong *)(param_1 + 0x58);
    if (lVar3 == 0) {
      local_a8 = *(undefined8 *)(param_1 + 0x48);
      FUN_1446dcdd4(local_78);
      lVar3 = FUN_1448fdc6e(local_78);
      if (CONCAT62(uStack_5e,local_60) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x58) = lVar3;
    }
    (**(code **)(*param_3 + 0x28))(param_3,local_78,lVar3,uVar6);
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x7c);
    uVar1 = *(undefined1 *)(param_1 + 0x79);
    lVar3 = *(longlong *)(param_1 + 0x58);
    if (lVar3 == 0) {
      local_a8 = *(undefined8 *)(param_1 + 0x48);
      FUN_1446dcdd4(local_78);
      lVar3 = FUN_1448fdc6e(local_78);
      if (CONCAT62(uStack_5e,local_60) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x58) = lVar3;
    }
    local_b8 = uVar6;
    (**(code **)(*param_3 + 0x20))
              (param_3,local_78,lVar3,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff
              );
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar5 = (undefined8 ****)local_a0[0];
    if (local_88 < 0x19) {
      ppppuVar5 = local_a0;
    }
    (*pcVar2)(ppppuVar5);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(local_a0[0]);
  }
  local_88 = local_60;
  if (local_60 < 0x19) {
    uVar4 = (ulonglong)((uint)local_58 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar4) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar4) == (code *)0x0) {
        memcpy(local_a0,local_78,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar4))(local_a0,local_78);
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar4))(local_a0,local_78);
    }
  }
  else {
    local_a0[0] = local_78[0];
    local_78[0] = (undefined8 ****)0x0;
    local_60 = 0;
  }
  local_80 = local_58;
  local_58 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar5 = local_78;
    if (0x18 < local_60) {
      ppppuVar5 = (undefined8 ****)local_78[0];
    }
    (*DAT_14c9a85d0)(ppppuVar5);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  if (local_80 == 0) {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  else {
    if (local_80 == 3) {
      uVar6 = local_a0[0]._0_4_;
    }
    else {
      FUN_1400b56fe(local_78,local_a0,3);
      uVar6 = 0;
      if (local_58 != 0) {
        uVar6 = local_78[0]._0_4_;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar5 = local_78;
        if (0x18 < local_60) {
          ppppuVar5 = (undefined8 ****)local_78[0];
        }
        (*pcVar2)(ppppuVar5);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78[0]);
      }
    }
    uVar6 = FUN_140b41f32(param_1,uVar6);
    FUN_140b420f8(param_1,param_2,uVar6);
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar5 = (undefined8 ****)local_a0[0];
    if (local_88 < 0x19) {
      ppppuVar5 = local_a0;
    }
    (*pcVar2)(ppppuVar5);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(local_a0[0]);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e1df98 FUN_140e1df98 body=93 status=ok
// SIG undefined FUN_140e1df98(void)

undefined8 * FUN_140e1df98(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e1e029(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140e1e234(param_1,iVar1);
      FUN_140e1dff5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140e1dff5 FUN_140e1dff5 body=52 status=ok
// SIG undefined FUN_140e1dff5(void)

void FUN_140e1dff5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140e1e088(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 140e1e029 FUN_140e1e029 body=95 status=ok
// SIG undefined FUN_140e1e029(void)

void FUN_140e1e029(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x58);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xb] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e1e088 FUN_140e1e088 body=428 status=ok
// SIG undefined FUN_140e1e088(void)

undefined8 * FUN_140e1e088(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 7);
    pvVar2 = (void *)param_2[6];
    *(int *)(param_1 + 7) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 6,iVar1,0);
      memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  return param_1;
}



// FUNCTION 140e1e234 FUN_140e1e234 body=231 status=ok
// SIG undefined FUN_140e1e234(void)

void FUN_140e1e234(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
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
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0x70,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140e1e31c FUN_140e1e31c body=74 status=ok
// SIG undefined FUN_140e1e31c(void)

void FUN_140e1e31c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    param_1 = param_1 + 0x40;
    lVar1 = FUN_14097d9d4(param_1);
    if (2 < *(int *)(lVar1 + 8)) {
      FUN_140e1e366(param_1,&DAT_14cb82348);
      FUN_140e1e366(param_1,&DAT_14cb82358);
      return;
    }
  }
  return;
}



// FUNCTION 140e1e366 FUN_140e1e366 body=404 status=ok
// SIG undefined FUN_140e1e366(void)

void FUN_140e1e366(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  iVar6 = *(int *)(param_1 + 0x20);
  uVar8 = (ulonglong)iVar6;
  if (uVar8 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar3) == *param_2) {
        iVar4 = (int)(lVar3 >> 3) * 0x4f72c235;
        if (iVar4 == -1) {
          return;
        }
        if (iVar6 + -1 <= iVar4) {
          return;
        }
        lVar9 = (longlong)(iVar6 + -1);
        iVar6 = -iVar6;
        lVar3 = lVar9 * 0xe8 + 0x90;
        do {
          lVar2 = *(longlong *)(param_1 + 0x18);
          iVar7 = (int)uVar8;
          if (*(longlong *)(lVar2 + -0x90 + lVar3) == *param_2) {
            *(undefined4 *)(lVar2 + 0x48 + lVar3) = 0;
            if (*(longlong *)(lVar2 + 0x40 + lVar3) != 0) {
              FUN_1400020a8();
            }
            FUN_140485a1a(lVar2 + lVar3);
            *(undefined4 *)(lVar2 + -8 + lVar3) = 0;
            if (*(longlong *)(lVar2 + -0x10 + lVar3) != 0) {
              FUN_1400020a8();
            }
            lVar1 = lVar2 + lVar3;
            FUN_140485a1a();
            *(undefined2 **)(lVar1 + -0x70) = &DAT_14a171d50;
            *(undefined4 *)(lVar1 + -0x58) = 0;
            if (*(int *)(lVar1 + -0x54) != 0) {
              FUN_140115c12(lVar2 + lVar3 + -0x60,0);
            }
            *(undefined8 *)(lVar2 + -0x68 + lVar3) = 0;
            if (*(longlong *)(lVar2 + -0x60 + lVar3) != 0) {
              FUN_1400020a8();
            }
            iVar5 = iVar7;
            if (iVar7 != *(int *)(param_1 + 0x20)) {
              memmove((void *)(lVar2 + lVar3 + -0x90),(void *)(lVar2 + lVar3 + 0x58),
                      (longlong)(*(int *)(param_1 + 0x20) + iVar6) * 0xe8);
              iVar5 = *(int *)(param_1 + 0x20);
            }
            *(int *)(param_1 + 0x20) = iVar5 + -1;
          }
          lVar9 = lVar9 + -1;
          iVar6 = iVar6 + 1;
          uVar8 = (ulonglong)(iVar7 - 1);
          lVar3 = lVar3 + -0xe8;
        } while (iVar4 < lVar9);
        return;
      }
      lVar3 = lVar3 + 0xe8;
    } while (uVar8 * 0xe8 - lVar3 != 0);
  }
  return;
}



// FUNCTION 140e1e4fa FUN_140e1e4fa body=40 status=ok
// SIG undefined FUN_140e1e4fa(void)

undefined8 FUN_140e1e4fa(undefined8 param_1,int param_2)

{
  FUN_140e1e522();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e1e522 FUN_140e1e522 body=66 status=ok
// SIG undefined FUN_140e1e522(void)

void FUN_140e1e522(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a625540;
  FUN_144760e21(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140e1e56c FUN_140e1e56c body=211 status=ok
// SIG undefined FUN_140e1e56c(void)

undefined8 * FUN_140e1e56c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14b0af820;
  param_1[0x1b] = DAT_14cb725f8;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff7fffffff;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  uVar1 = DAT_14c8463e8;
  param_1[0x28] = DAT_14c8463e0;
  param_1[0x29] = uVar1;
  uVar1 = DAT_14c8463d8;
  param_1[0x26] = DAT_14c8463d0;
  param_1[0x27] = uVar1;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x35] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x33] = DAT_14c8464e0;
  param_1[0x34] = uVar1;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  return param_1;
}



// FUNCTION 140e1e640 FUN_140e1e640 body=262 status=ok
// SIG undefined FUN_140e1e640(void)

void FUN_140e1e640(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  longlong local_60;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140e1e748(local_78,param_1 + 0x6b8);
  FUN_14042b1ec(param_2,local_78,1);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(param_1 + 0x6e8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x6e0);
    lVar3 = (longlong)*(int *)(param_1 + 0x6e8) * 0x28;
    do {
      FUN_140d2594c(local_78,lVar2);
      FUN_14042b1ec(param_2,local_78,1);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1e748 FUN_140e1e748 body=691 status=ok
// SIG undefined FUN_140e1e748(void)

uint * FUN_140e1e748(uint *param_1,longlong param_2)

{
  uint *puVar1;
  void **ppvVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  void *local_78;
  uint local_70;
  undefined4 local_6c;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  longlong local_50;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = FUN_140921bb0(param_2);
  puVar1 = param_1 + 2;
  ppvVar2 = (void **)(param_1 + 6);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (lVar7 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    FUN_1400bbfc4(&local_60,lVar7);
    *puVar1 = local_60;
    param_1[3] = uStack_5c;
    param_1[4] = uStack_58;
    param_1[5] = uStack_54;
    if (puVar1 == &local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*ppvVar2 != (void *)0x0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 6) = local_50;
      local_50 = 0;
      param_1[8] = local_48;
      param_1[9] = local_44;
    }
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    uVar6 = *(uint *)(lVar7 + 0xc);
    if (cVar5 != '\0') {
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        goto LAB_140e1e82b;
      }
    }
    *param_1 = uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar6 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar6 = *(uint *)(lVar7 + 0x10);
      bVar9 = uVar6 == 0;
      if (bVar9) {
        *(uint *)(lVar7 + 0x10) = uVar8;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar6 = uVar8;
      }
    }
    param_1[1] = uVar6;
  }
LAB_140e1e82b:
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (*(longlong *)(param_1 + 2) == 0) {
    local_88 = *(uint *)(param_2 + 8);
    uStack_84 = *(uint *)(param_2 + 0xc);
    uStack_80 = *(uint *)(param_2 + 0x10);
    uStack_7c = *(uint *)(param_2 + 0x14);
    local_78 = (void *)0x0;
    local_70 = *(uint *)(param_2 + 0x20);
    lVar7 = (longlong)(int)local_70;
    pvVar3 = *(void **)(param_2 + 0x18);
    if (lVar7 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar3,lVar7 * 2);
    }
    uVar6 = local_70;
    pvVar3 = local_78;
    param_1[0] = 0;
    param_1[1] = 0;
    *puVar1 = local_88;
    param_1[3] = uStack_84;
    param_1[4] = uStack_80;
    param_1[5] = uStack_7c;
    if (ppvVar2 != &local_78) {
      lVar7 = (longlong)(int)local_70;
      param_1[8] = local_70;
      if (local_70 == 0 && param_1[9] == 0) {
        param_1[9] = 0;
      }
      else {
        FUN_1446dd670(ppvVar2,local_70);
        if (uVar6 != 0) {
          memcpy(*ppvVar2,pvVar3,lVar7 * 2);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e1e9fc FUN_140e1e9fc body=983 status=ok
// SIG undefined FUN_140e1e9fc(void)

int FUN_140e1e9fc(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  uint local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = DAT_14cbd0aa8;
  local_80 = DAT_14cbd0aa0;
  FUN_1448075d0(local_70);
  pbVar2 = (byte *)*param_1;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar7 = &DAT_14c9a1288;
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
      plVar6 = plVar7 + 8;
      if ((longlong *)plVar7[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar7[9];
      }
      iVar4 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar7[10] - 1U & local_70[0]) * 4);
      if (iVar4 != -1) {
        do {
          lVar8 = *plVar7 + (longlong)iVar4 * 0x40;
          if (*(uint *)(*plVar7 + (longlong)iVar4 * 0x40) == local_70[0]) {
            if ((((lVar8 != 0) &&
                 (puVar10 = (undefined8 *)(lVar8 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
            goto LAB_140e1eab7;
            break;
          }
          iVar4 = *(int *)(lVar8 + 0x38);
        } while (iVar4 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_140e1eab7:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  pbVar2 = (byte *)*puVar10;
  iVar4 = 0;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 2)) {
    lVar8 = (longlong)*(int *)(*(undefined8 **)(pbVar2 + 8) + 2);
    if (lVar8 != 0) {
      puVar10 = (undefined8 *)**(undefined8 **)(pbVar2 + 8);
      puVar9 = puVar10 + lVar8 * 2;
      do {
        if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) != 0)) {
          local_78 = DAT_14cbd0ac0;
          local_80 = DAT_14cbd0ab8;
          FUN_1448075d0(local_70,&local_80);
          pbVar2 = (byte *)*puVar10;
          plVar7 = &DAT_14c9a1308;
          if (pbVar2 != (byte *)0x0) {
            plVar6 = &DAT_14c9a1288;
            if ((*pbVar2 & 2) != 0) {
              plVar6 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
            }
            plVar7 = &DAT_14c9a1308;
            if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
              plVar7 = plVar6 + 8;
              if ((longlong *)plVar6[9] != (longlong *)0x0) {
                plVar7 = (longlong *)plVar6[9];
              }
              iVar4 = *(int *)((longlong)plVar7 +
                              (ulonglong)((int)plVar6[10] - 1U & local_70[0]) * 4);
              plVar7 = &DAT_14c9a1308;
              if (iVar4 != -1) {
                do {
                  lVar8 = *plVar6 + (longlong)iVar4 * 0x40;
                  if (*(uint *)(*plVar6 + (longlong)iVar4 * 0x40) == local_70[0]) {
                    plVar7 = &DAT_14c9a1308;
                    if (lVar8 == 0) goto LAB_140e1ebe5;
                    plVar6 = (longlong *)(lVar8 + 0x28);
                    plVar7 = &DAT_14c9a1308;
                    if ((plVar6 == (longlong *)0x0) ||
                       (((byte *)*plVar6 != (byte *)0x0 &&
                        (plVar7 = plVar6, (*(byte *)*plVar6 & 0x40) == 0)))) goto LAB_140e1ebe5;
                    break;
                  }
                  iVar4 = *(int *)(lVar8 + 0x38);
                } while (iVar4 != -1);
                plVar7 = &DAT_14c9a1308;
              }
            }
          }
LAB_140e1ebe5:
          piVar11 = &DAT_14c9a12e0;
          if (*plVar7 != 0) {
            piVar11 = (int *)FUN_140625092(*plVar7,&DAT_14c9a12e0);
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if (*param_2 == *piVar11) {
            if (DAT_14cb758b8 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = FUN_144837462(DAT_14cb758b8,param_2);
            }
            local_78 = DAT_14cbd02c0;
            local_80 = DAT_14cbd02b8;
            FUN_1448075d0(local_70);
            pbVar2 = (byte *)*puVar10;
            if (pbVar2 == (byte *)0x0) goto LAB_140e1ecd2;
            if ((*pbVar2 & 2) == 0) {
              plVar7 = &DAT_14c9a1288;
            }
            else {
              plVar7 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
            }
            if ((int)plVar7[2] == *(int *)((longlong)plVar7 + 0x3c)) goto LAB_140e1ecd2;
            plVar6 = plVar7 + 8;
            if ((longlong *)plVar7[9] != (longlong *)0x0) {
              plVar6 = (longlong *)plVar7[9];
            }
            iVar4 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar7[10] - 1U & local_70[0]) * 4)
            ;
            if (iVar4 == -1) goto LAB_140e1ecd2;
            goto LAB_140e1ecb3;
          }
        }
        puVar10 = puVar10 + 2;
        iVar4 = 0;
      } while (puVar10 != puVar9);
    }
  }
  goto LAB_140e1ed0c;
  while (iVar4 = *(int *)(lVar1 + 0x38), iVar4 != -1) {
LAB_140e1ecb3:
    lVar1 = *plVar7 + (longlong)iVar4 * 0x40;
    if (*(uint *)(*plVar7 + (longlong)iVar4 * 0x40) == local_70[0]) {
      if ((((lVar1 != 0) && (puVar10 = (undefined8 *)(lVar1 + 0x28), puVar10 != (undefined8 *)0x0))
          && ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
      goto LAB_140e1ecd5;
      break;
    }
  }
LAB_140e1ecd2:
  puVar10 = &DAT_14c9a1308;
LAB_140e1ecd5:
  iVar3 = FUN_140e1edd4(puVar10,0);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  iVar4 = iVar3;
  if (lVar8 != 0) {
    uVar5 = FUN_140d72879();
    iVar4 = FUN_140b0af60(uVar5,lVar8);
  }
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
LAB_140e1ed0c:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 140e1edd4 FUN_140e1edd4 body=42 status=ok
// SIG undefined FUN_140e1edd4(void)

long FUN_140e1edd4(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  
  pbVar1 = (byte *)*param_1;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
     (*(char **)(pbVar1 + 8) != (char *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140e1edf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = strtol(*(char **)(pbVar1 + 8),(char **)0x0,0);
    return lVar2;
  }
  return param_2;
}



// FUNCTION 140e1edfe FUN_140e1edfe body=40 status=ok
// SIG undefined FUN_140e1edfe(void)

undefined8 FUN_140e1edfe(undefined8 param_1,int param_2)

{
  FUN_140e1ee26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e1ee26 FUN_140e1ee26 body=101 status=ok
// SIG undefined FUN_140e1ee26(void)

void FUN_140e1ee26(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3a5d60;
  FUN_140e1ee8c(param_1 + 0x13,1);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140e1ee8c FUN_140e1ee8c body=124 status=ok
// SIG undefined FUN_140e1ee8c(void)

void FUN_140e1ee8c(longlong *param_1)

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



// FUNCTION 140e1ef08 FUN_140e1ef08 body=417 status=ok
// SIG undefined FUN_140e1ef08(void)

undefined4 *
FUN_140e1ef08(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_1447262c2(param_4);
  if (plVar4 == (longlong *)0x0) {
LAB_140e1f01b:
    FUN_14095591c(param_4,&local_40);
    if (local_40 != 0) {
      FUN_140d4c8ba(local_40,param_2,param_3);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_38 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
      goto LAB_140e1efcd;
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  else {
    uVar5 = FUN_140e1f0aa();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
    if (plVar4 == (longlong *)0x0) goto LAB_140e1f01b;
    uVar5 = FUN_140e1f0aa();
    plVar6 = (longlong *)FUN_144718840(plVar4,uVar5);
    if ((plVar4 == plVar6) || (plVar6 == (longlong *)0x0)) goto LAB_140e1f01b;
    plVar4 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6);
    if ((longlong)(int)plVar4[1] != 0) {
      lVar7 = 0;
      do {
        lVar3 = *(longlong *)(*plVar4 + lVar7);
        if ((lVar3 != 0) &&
           (*(longlong *)(*(longlong *)(lVar3 + 8) + 0x1d4) == *(longlong *)(param_1 + 8))) {
          if ((ulonglong)*(byte *)(param_1 + 0x10) < 3) {
            uVar2 = *(undefined4 *)(lVar3 + 0x2a4 + (ulonglong)*(byte *)(param_1 + 0x10) * 0xc);
            *(undefined2 *)(param_2 + 6) = 4;
            *param_2 = uVar2;
            *(undefined1 *)(param_2 + 8) = 3;
            goto LAB_140e1efcd;
          }
          break;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)plVar4[1] * 8 != lVar7);
    }
  }
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
LAB_140e1efcd:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1f0aa FUN_140e1f0aa body=228 status=ok
// SIG undefined FUN_140e1f0aa(void)

longlong FUN_140e1f0aa(void)

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
  if (DAT_14cbaba10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c254e5;
    local_40 = FUN_1465de9b1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakInventoryAugmentOwner",&DAT_14cbaba10,&DAT_148c254e4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaba10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1f196 FUN_140e1f196 body=304 status=ok
// SIG undefined FUN_140e1f196(void)

void FUN_140e1f196(longlong param_1)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  FUN_140e1f2c6();
  if (((((&DAT_00001100)[param_1] == '\x03') && (*(longlong *)(param_1 + 0x1cf0) != 0)) &&
      (fVar1 = *(float *)(*(longlong *)(param_1 + 0x1cf0) + 0x44), 0.0 < fVar1)) &&
     ((*(longlong *)(&DAT_00001ce8 + param_1) == 0 ||
      (*(char *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x178) != '\x01')))) {
    *(undefined1 *)(param_1 + 0x2ca8) = 1;
    if (*(char *)(param_1 + 0x2cb0) == '\0') {
      *(undefined1 *)(param_1 + 0x2cb0) = 1;
      uVar2 = *(ulonglong *)(param_1 + 0x38);
      if (uVar2 < 0xffffffff00000000) {
        plVar6 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar6 = (longlong *)0x0;
        }
        (**(code **)(*plVar6 + 0x58))(fVar1,param_1,uVar2,0xc,in_stack_00000028,in_stack_00000030);
      }
      else {
        uVar7 = (uint)uVar2;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
          puVar4 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar4 = DAT_14c998080;
          }
          if ((*(uint *)(puVar4 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
            lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
            puVar5 = *(uint **)(lVar3 + 0x18);
            if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
              puVar5 = (uint *)(lVar3 + 8);
            }
            *puVar5 = *puVar5 | 0x1000;
            *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
          }
        }
      }
    }
    *(byte *)(param_1 + 0x2ca9) = *(byte *)(param_1 + 0x36a8) >> 2 & 1;
    *(undefined4 *)(param_1 + 0x2cac) = 0;
  }
  return;
}



// FUNCTION 140e1f2c6 FUN_140e1f2c6 body=424 status=ok
// SIG undefined FUN_140e1f2c6(void)

void FUN_140e1f2c6(longlong *param_1,undefined4 param_2,float param_3,undefined8 param_4,
                  double *param_5,double *param_6)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined4 uVar9;
  
  fVar4 = (float)SQRT(param_5[2] * param_5[2] + *param_5 * *param_5 + param_5[1] * param_5[1]);
  fVar8 = 0.0;
  uVar9 = 0;
  if (0.0001 <= fVar4) {
    lVar1 = param_1[0x22];
    dVar5 = *(double *)(lVar1 + 0x270) - param_6[2];
    dVar6 = *(double *)(lVar1 + 0x260) - *param_6;
    dVar7 = *(double *)(lVar1 + 0x268) - param_6[1];
    dVar2 = dVar5 * (double)param_1[0x48] +
            dVar6 * (double)param_1[0x46] + dVar7 * (double)param_1[0x47];
    dVar5 = dVar5 - (double)param_1[0x48] * dVar2;
    dVar6 = dVar6 - (double)param_1[0x46] * dVar2;
    dVar7 = dVar7 - dVar2 * (double)param_1[0x47];
    fVar4 = (float)SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7) / fVar4;
    fVar8 = 1.0;
    if (fVar4 <= 1.0) {
      fVar8 = fVar4;
    }
    fVar8 = (float)param_4 * (1.0 - fVar8) + param_3;
    uVar9 = (int)((ulonglong)param_4 >> 0x20);
  }
  cVar3 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x5d0))(param_1,3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140e1f46b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x668))(param_1,CONCAT44(uVar9,fVar8),param_2);
  return;
}



// FUNCTION 140e1f46e FUN_140e1f46e body=355 status=ok
// SIG undefined FUN_140e1f46e(void)

void FUN_140e1f46e(longlong *param_1,float param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  
  if ((((1e-06 <= param_2) && (param_3 < *(int *)((longlong)param_1 + 0x444))) &&
      (cVar2 = (**(code **)(*param_1 + 0x600))(param_1), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x480))((longlong *)param_1[0x22],0),
     cVar2 == '\0')) {
    bVar1 = *(byte *)(param_1 + 0x69);
    *(byte *)(param_1 + 0x69) = bVar1 | 0x80;
    switch(*(undefined1 *)((longlong)param_1 + 0x291)) {
    case 0:
      break;
    case 1:
      (**(code **)(*param_1 + 0x890))(param_1,param_2,param_3);
      break;
    case 2:
      (**(code **)(*param_1 + 0x898))(param_1,param_2,param_3);
      break;
    case 3:
      (**(code **)(*param_1 + 0x770))(param_1,param_2,param_3);
      break;
    case 4:
      (**(code **)(*param_1 + 0x8a8))(param_1,param_2,param_3);
      break;
    case 5:
      (**(code **)(*param_1 + 0x8a0))(param_1,param_2,param_3);
      break;
    case 6:
      (**(code **)(*param_1 + 0x8b0))(param_1,param_2,param_3);
      break;
    default:
      (**(code **)(*param_1 + 0x5d0))(param_1,0,0);
    }
    *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0x7f | bVar1 & 0x80;
    if ((*(byte *)((longlong)param_1 + 0x34a) & 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e1f5ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x4b0))(param_1,param_1[0x6a]);
      return;
    }
  }
  return;
}



// FUNCTION 140e1f5d2 FUN_140e1f5d2 body=26 status=ok
// SIG undefined FUN_140e1f5d2(void)

void FUN_140e1f5d2(undefined8 param_1)

{
  FUN_1404d1fb0();
  FUN_140e1f5ec(param_1);
  return;
}



// FUNCTION 140e1f5ec FUN_140e1f5ec body=310 status=ok
// SIG undefined FUN_140e1f5ec(void)

void FUN_140e1f5ec(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar6 = FUN_1447210f0();
  iVar5 = *(int *)(param_1 + 0x3a0);
  uVar7 = (ulonglong)iVar5;
  if (0 < (longlong)uVar7) {
    iVar8 = -iVar5;
    lVar9 = uVar7 * 0x18;
    uVar10 = uVar7;
    do {
      lVar1 = *(longlong *)(param_1 + 0x398);
      lVar2 = *(longlong *)(lVar1 + -8 + lVar9);
      if (lVar2 == 0) {
LAB_140e1f671:
        lVar1 = *(longlong *)(lVar1 + -0x18 + lVar9);
        if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
          uVar4 = *(uint *)(lVar1 + 0x78);
          if (((uVar4 & 8) != 0) && (DAT_14c75909c == 0)) {
            DAT_14c75909c = (byte)uVar4 >> 6 & 1;
          }
          *(uint *)(lVar1 + 0x78) = uVar4 & 0xfffffffd;
        }
        uVar4 = *(uint *)(param_1 + 0x3a0);
        if (uVar10 != uVar4) {
          memmove((void *)(*(longlong *)(param_1 + 0x398) + lVar9 + -0x18),
                  (void *)(*(longlong *)(param_1 + 0x398) + lVar9),
                  (longlong)(int)(uVar4 + iVar8) * 0x18);
          uVar4 = *(uint *)(param_1 + 0x3a0);
        }
        uVar7 = (ulonglong)(uVar4 - 1);
        *(uint *)(param_1 + 0x3a0) = uVar4 - 1;
      }
      else if ((((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0) || (*(longlong *)(lVar2 + 0x390) == 0)) ||
              ((*(uint *)(*(longlong *)(lVar2 + 0x390) + 8) >> 0x1e & 1) != 0)) {
        if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
          FUN_1412f3774(uVar6,lVar2,0,1);
        }
        goto LAB_140e1f671;
      }
      iVar5 = (int)uVar7;
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + -0x18;
      bVar3 = 1 < uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar3);
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(&DAT_14b5afd28 + (ulonglong)(iVar5 == 0) * 4);
  return;
}



// FUNCTION 140e1f77e FUN_140e1f77e body=1073 status=ok
// SIG undefined FUN_140e1f77e(void)

void FUN_140e1f77e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  uint local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 local_a0 [8];
  undefined8 *local_98;
  int local_90;
  code *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2c8) + 0x1c8);
    if (plVar2 == (longlong *)0x0) {
      lVar9 = *(longlong *)(param_1 + 0xb0);
      if (lVar9 == 0) {
        lVar9 = FUN_1448abda6(param_1);
      }
      if (*(longlong *)(lVar9 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar9 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
      }
      uVar3 = *puVar5;
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      puVar5 = local_98;
      local_90 = 3;
      *local_98 = &PTR_LAB_14a1c8830;
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
      local_98[2] = lVar6;
      *local_98 = &PTR_FUN_14ac88c60;
      local_98[3] = 0;
      iVar7 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_98 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar7 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar7 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar7 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar7 = iVar8;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar7;
      puVar5[4] = FUN_140e1f77e;
      *(undefined4 *)(puVar5 + 5) = 0;
      local_88 = (code *)0x0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_98);
      local_48 = 1;
      FUN_14016fdb0(uVar3,local_a0,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      if (local_90 != 0) {
        if (local_98 == (undefined8 *)0x0) goto LAB_140e1f914;
        (**(code **)*local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        local_90 = 0;
      }
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(byte *)((longlong)plVar2 + 0x1fb) < *(byte *)(param_1 + 0x1fb)) {
        (**(code **)(*plVar2 + 0x588))();
      }
      cVar4 = FUN_140e1fc7a(param_1);
      if (cVar4 == '\0') {
        if (((*(byte *)(param_1 + 0x2a8) & 0x40) != 0) && (*(longlong *)(param_1 + 0x2c8) != 0)) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0x1e8) = 0;
        }
      }
      else {
        local_e8 = CONCAT31(local_e8._1_3_,1);
        local_f0 = local_f0 & 0xffffff00;
        local_f8 = CONCAT31(local_f8._1_3_,2);
        FUN_140e1fd56(*(undefined8 *)(param_1 + 0x2c8),param_1,0,2);
      }
      lVar9 = *(longlong *)(param_1 + 0xa8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_118);
      }
      if (DAT_14caf64b8 == 0) {
        local_c0 = &local_88;
        local_88 = FUN_141030f22;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_142b4754c;
        local_c8 = &LAB_147c45ce0;
        local_d0 = &LAB_1463f1ff4;
        local_d8 = &DAT_149e063b2;
        local_e0 = 0x4000000000;
        local_e8 = 0x10000004;
        local_f0 = 8;
        local_f8 = 0x428;
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      }
      if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) {
        FUN_140e1ff1c(lVar9,*(undefined8 *)(param_1 + 0x2c8));
      }
      FUN_140e1fbde(param_1);
      if (*(char *)(lVar9 + 0x60) < '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_118);
      }
    }
  }
LAB_140e1f914:
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e1fbde FUN_140e1fbde body=137 status=ok
// SIG undefined FUN_140e1fbde(void)

void FUN_140e1fbde(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_1 + 0x5d8))();
  if (lVar1 != 0) {
    local_20 = (**(code **)(*param_1 + 0x5d8))(param_1);
    FUN_1447cd2ec(param_1 + 0x61);
    (**(code **)(*param_1 + 0x5d8))(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1fc7a FUN_140e1fc7a body=218 status=ok
// SIG undefined FUN_140e1fc7a(void)

ulonglong FUN_140e1fc7a(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0xa8);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar4 != 0) {
    uVar2 = FUN_1401b0f18();
    plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if (*(longlong *)(lVar4 + 0xd8) != 0) {
        puVar1 = *(undefined4 **)(*(longlong *)(lVar4 + 0xd8) + 8);
        puVar6 = &DAT_14c9485f0;
        if (puVar1 != (undefined4 *)0x0) {
          puVar6 = puVar1;
        }
        if (DAT_14c947fe0 == 0) {
          lVar4 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar4);
          DAT_14c947fe0 = lVar4;
        }
        FUN_140045924(DAT_14c947fe0,&local_30,puVar6,1);
        if (local_30 == DAT_14cb23a30) {
          uVar5 = 0;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1fd56 FUN_140e1fd56 body=206 status=ok
// SIG undefined FUN_140e1fd56(void)

void FUN_140e1fd56(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [44];
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    local_1b = param_5;
    local_1a = param_6;
    local_19 = param_7;
    plVar1 = (longlong *)param_1[0x39];
    local_1c = param_4;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x490))(plVar1,param_2,&local_1c,param_3);
    }
    uVar2 = FUN_140e1fe36();
    lVar3 = (**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_140e1fe36();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if ((lVar3 != lVar4) && (lVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1fe36 FUN_140e1fe36 body=228 status=ok
// SIG undefined FUN_140e1fe36(void)

longlong FUN_140e1fe36(void)

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
  if (DAT_14cb210e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f17b7f;
    local_40 = FUN_1464320c9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxAttachableActor",&DAT_14cb210e8,&DAT_147f17b7e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb210e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1ff1c FUN_140e1ff1c body=308 status=ok
// SIG undefined FUN_140e1ff1c(void)

void FUN_140e1ff1c(longlong param_1)

{
  longlong lVar1;
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
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b47bc4;
      local_48 = &LAB_1478989f1;
      local_50 = &LAB_146391124;
      local_58 = L"Engine";
      local_60 = 0x10000000000;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) {
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



// FUNCTION 140e2006e FUN_140e2006e body=57 status=ok
// SIG undefined FUN_140e2006e(void)

void FUN_140e2006e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22990 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22990 = FUN_140002ddd(FUN_14643a04e,uVar1,L"GpsGenerator_Cover");
  }
  return;
}



// FUNCTION 140e200ae FUN_140e200ae body=57 status=ok
// SIG undefined FUN_140e200ae(void)

void FUN_140e200ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb230d0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb230d0 = FUN_140002ddd(FUN_14643cb4f,uVar1,L"GpsTest_CoverTrace");
  }
  return;
}



// FUNCTION 140e200e8 FUN_140e200e8 body=102 status=ok
// SIG undefined FUN_140e200e8(void)

void FUN_140e200e8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_140e2014e();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = FUN_140e20188(param_1,param_2);
      if (lVar1 != 0) {
        FUN_1447f69b6(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e2014e FUN_140e2014e body=57 status=ok
// SIG undefined FUN_140e2014e(void)

void FUN_140e2014e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62200 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62200 = FUN_140002ddd(FUN_141855964,uVar1,L"GbxProgressGraphDef");
  }
  return;
}



// FUNCTION 140e20188 FUN_140e20188 body=171 status=ok
// SIG undefined FUN_140e20188(void)

ulonglong * FUN_140e20188(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x3b0) != *(int *)(param_1 + 0x3dc)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0x3e0;
    if (*(longlong *)(param_1 + 1000) != 0) {
      lVar3 = *(longlong *)(param_1 + 1000);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x3f0) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar5 * 0x28);
        if (*puVar4 == param_2) break;
        iVar5 = (int)puVar4[4];
        puVar4 = (ulonglong *)0x0;
      } while (iVar5 != -1);
      goto LAB_140e20198;
    }
  }
  puVar4 = (ulonglong *)0x0;
LAB_140e20198:
  puVar2 = puVar4 + 1;
  if (puVar4 == (ulonglong *)0x0) {
    puVar2 = (ulonglong *)0x0;
  }
  return puVar2;
}



// FUNCTION 140e20234 FUN_140e20234 body=114 status=ok
// SIG undefined FUN_140e20234(void)

longlong * FUN_140e20234(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_149e18f40;
  FUN_140e202a6(DAT_14c8445d0,puVar1 + 2,param_2,param_3 * 2 & 2);
  *param_1 = (longlong)(puVar1 + 2);
  param_1[1] = (longlong)puVar1;
  return param_1;
}



// FUNCTION 140e202a6 FUN_140e202a6 body=1410 status=ok
// SIG undefined FUN_140e202a6(void)

longlong *
FUN_140e202a6(LPCRITICAL_SECTION param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  LONG *pLVar1;
  uint *puVar2;
  WORD *pWVar3;
  WORD *pWVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  _RTL_CRITICAL_SECTION *p_Var6;
  longlong lVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  HANDLE pvVar17;
  _RTL_CRITICAL_SECTION *p_Var18;
  HANDLE *ppvVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  HANDLE pvVar23;
  longlong lVar24;
  LPCRITICAL_SECTION p_Var25;
  int iVar26;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  longlong local_b8;
  _RTL_CRITICAL_SECTION *local_b0;
  LPCRITICAL_SECTION local_a8;
  longlong *local_a0;
  HANDLE local_98;
  undefined4 local_8c;
  undefined **local_88;
  undefined2 local_80;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = &PTR_FUN_149e18960;
  local_80 = 2;
  FUN_140e20829(param_3,&local_88,1);
  local_8c = 0;
  pvVar17 = (HANDLE)FUN_140e20880(&local_88,param_4);
  p_Var18 = (_RTL_CRITICAL_SECTION *)FUN_14001cc68(0x18,0x10);
  *(undefined1 **)&p_Var18->LockCount = &DAT_100000001;
  p_Var18->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&PTR_FUN_149e18f00;
  p_Var18->OwningThread = pvVar17;
  if (pvVar17 == (HANDLE)0x0) goto LAB_140e20572;
  EnterCriticalSection(param_1);
  p_Var25 = param_1 + 1;
  if (param_1[2].RecursionCount == 0) {
    uVar14 = param_1[1].LockCount;
    uVar22 = (ulonglong)uVar14;
    param_1[1].LockCount = uVar14 + 1;
    if (param_1[1].RecursionCount == uVar14) {
      FUN_14482b872(p_Var25);
    }
    lVar24 = (longlong)(int)uVar14;
    iVar16 = FUN_144a54ea4(&param_1[1].OwningThread,1);
    ppvVar19 = (HANDLE *)param_1[1].SpinCount;
    if ((HANDLE *)param_1[1].SpinCount == (HANDLE *)0x0) {
      ppvVar19 = &param_1[1].OwningThread;
    }
    iVar13 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar13 = iVar16;
    }
    bVar8 = (byte)iVar16 & 0x1f;
    puVar2 = (uint *)((longlong)ppvVar19 + (longlong)(iVar13 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    p_Var5 = param_1[1].DebugInfo;
    uVar22 = (ulonglong)(uint)param_1[2].LockCount;
    lVar24 = (longlong)param_1[2].LockCount;
    iVar16 = *(int *)(&p_Var5->field_0x4 + lVar24 * 0x18);
    param_1[2].LockCount = iVar16;
    iVar13 = param_1[2].RecursionCount + -1;
    param_1[2].RecursionCount = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(&p_Var5->Type + (longlong)iVar16 * 0xc) = 0xffffffff;
    }
  }
  iVar16 = (int)uVar22;
  ppvVar19 = &param_1[1].OwningThread;
  if ((HANDLE *)param_1[1].SpinCount != (HANDLE *)0x0) {
    ppvVar19 = (HANDLE *)param_1[1].SpinCount;
  }
  iVar13 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar13 = iVar16;
  }
  puVar2 = (uint *)((longlong)ppvVar19 + (longlong)(iVar13 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar22 & 0x1f);
  pWVar3 = &(param_1[1].DebugInfo)->Type + lVar24 * 0xc;
  *(HANDLE *)pWVar3 = pvVar17;
  *(_RTL_CRITICAL_SECTION **)(pWVar3 + 4) = p_Var18;
  if (p_Var18 == (_RTL_CRITICAL_SECTION *)0x0) {
    *(undefined4 *)&((LIST_ENTRY *)(pWVar3 + 8))->Flink = 0xffffffff;
    pvVar23 = pvVar17;
  }
  else {
    LOCK();
    p_Var18->LockCount = p_Var18->LockCount + 1;
    UNLOCK();
    pvVar23 = *(HANDLE *)pWVar3;
    p_Var6 = *(_RTL_CRITICAL_SECTION **)(pWVar3 + 4);
    *(undefined4 *)&((LIST_ENTRY *)(pWVar3 + 8))->Flink = 0xffffffff;
    if (p_Var6 != (_RTL_CRITICAL_SECTION *)0x0) {
      LOCK();
      p_Var6->LockCount = p_Var6->LockCount + 1;
      UNLOCK();
      LOCK();
      pLVar1 = &p_Var6->LockCount;
      *pLVar1 = *pLVar1 + -1;
      UNLOCK();
      if (*pLVar1 == 0) {
        local_c0 = uVar22;
        (**(code **)p_Var6->DebugInfo)(p_Var6);
        LOCK();
        pLVar1 = &p_Var6->RecursionCount;
        *pLVar1 = *pLVar1 + -1;
        UNLOCK();
        uVar22 = local_c0;
        if (*pLVar1 == 0) {
          (*(code *)(p_Var6->DebugInfo->ProcessLocksList).Flink)(p_Var6);
          uVar22 = local_c0;
        }
      }
    }
  }
  uVar14 = ((uint)((ulonglong)pvVar23 >> 0x14) & 0xffff ^ (uint)((ulonglong)pvVar23 >> 4)) *
           -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar14 = uVar14 >> 0x10 ^ uVar14;
  iVar16 = param_1[1].LockCount;
  iVar13 = param_1[2].RecursionCount;
  iVar26 = 1;
  if (iVar16 - iVar13 == 1) {
    uVar15 = 1;
LAB_140e20510:
    iVar16 = (int)param_1[2].SpinCount;
    if (((int)uVar15 < 1) || (iVar26 <= iVar16)) {
      uVar14 = iVar16 - 1U & uVar14;
      *(uint *)(pWVar3 + 10) = uVar14;
      ppvVar19 = param_1[2].LockSemaphore;
      if (param_1[2].LockSemaphore == (HANDLE *)0x0) {
        ppvVar19 = &param_1[2].OwningThread;
      }
      *(undefined4 *)&((LIST_ENTRY *)(pWVar3 + 8))->Flink =
           *(undefined4 *)
            ((longlong)ppvVar19 +
            ((longlong)(int)param_1[2].SpinCount - 1U & (longlong)(int)uVar14) * 4);
      ppvVar19 = param_1[2].LockSemaphore;
      if (param_1[2].LockSemaphore == (HANDLE *)0x0) {
        ppvVar19 = &param_1[2].OwningThread;
      }
      *(int *)((longlong)ppvVar19 +
              ((longlong)(int)param_1[2].SpinCount - 1U & (longlong)(int)uVar14) * 4) = (int)uVar22;
    }
    else {
      *(int *)&param_1[2].SpinCount = iVar26;
      FUN_1457b539c(p_Var25);
    }
  }
  else {
    lVar24 = *(longlong *)pWVar3;
    p_Var6 = *(_RTL_CRITICAL_SECTION **)(pWVar3 + 4);
    if (p_Var6 != (_RTL_CRITICAL_SECTION *)0x0) {
      LOCK();
      p_Var6->LockCount = p_Var6->LockCount + 1;
      UNLOCK();
      iVar16 = param_1[1].LockCount;
      iVar13 = param_1[2].RecursionCount;
    }
    lVar12 = local_b8;
    local_b0 = p_Var18;
    local_98 = pvVar17;
    if (iVar16 != iVar13) {
      ppvVar19 = &param_1[2].OwningThread;
      if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
        ppvVar19 = param_1[2].LockSemaphore;
      }
      iVar16 = *(int *)((longlong)ppvVar19 +
                       (ulonglong)((int)param_1[2].SpinCount - 1U & uVar14) * 4);
      while (local_b8 = lVar24, iVar16 != -1) {
        if (p_Var6 != (_RTL_CRITICAL_SECTION *)0x0) {
          LOCK();
          p_Var6->LockCount = p_Var6->LockCount + 1;
          UNLOCK();
        }
        lVar20 = (longlong)iVar16;
        lVar7 = *(longlong *)(&p_Var25->DebugInfo->Type + lVar20 * 0xc);
        p_Var18 = (&p_Var25->DebugInfo->CriticalSection)[lVar20 * 3];
        lVar24 = local_b8;
        local_a0 = param_2;
        if (p_Var18 != (_RTL_CRITICAL_SECTION *)0x0) {
          LOCK();
          p_Var18->LockCount = p_Var18->LockCount + 1;
          UNLOCK();
          LOCK();
          pLVar1 = &p_Var18->LockCount;
          *pLVar1 = *pLVar1 + -1;
          UNLOCK();
          if (*pLVar1 == 0) {
            local_c0 = uVar22;
            local_a8 = p_Var25;
            (**(code **)p_Var18->DebugInfo)(p_Var18);
            LOCK();
            pLVar1 = &p_Var18->RecursionCount;
            *pLVar1 = *pLVar1 + -1;
            UNLOCK();
            lVar24 = local_b8;
            p_Var25 = local_a8;
            uVar22 = local_c0;
            lVar12 = local_b8;
            if (*pLVar1 == 0) {
              (*(code *)(p_Var18->DebugInfo->ProcessLocksList).Flink)(p_Var18);
              lVar24 = local_b8;
              p_Var25 = local_a8;
              uVar22 = local_c0;
              lVar12 = local_b8;
            }
          }
        }
        local_b8 = lVar12;
        if (p_Var6 != (_RTL_CRITICAL_SECTION *)0x0) {
          LOCK();
          pLVar1 = &p_Var6->LockCount;
          *pLVar1 = *pLVar1 + -1;
          UNLOCK();
          if (*pLVar1 == 0) {
            local_c0 = uVar22;
            local_b8 = lVar24;
            (**(code **)p_Var6->DebugInfo)(p_Var6);
            LOCK();
            pLVar1 = &p_Var6->RecursionCount;
            *pLVar1 = *pLVar1 + -1;
            UNLOCK();
            lVar24 = local_b8;
            uVar22 = local_c0;
            if (*pLVar1 == 0) {
              (*(code *)(p_Var6->DebugInfo->ProcessLocksList).Flink)(p_Var6);
              lVar24 = local_b8;
              uVar22 = local_c0;
            }
          }
        }
        param_2 = local_a0;
        if (lVar7 == lVar24) goto LAB_140e204dd;
        lVar12 = local_b8;
        iVar16 = *(int *)((longlong)&p_Var25->DebugInfo->ProcessLocksList + lVar20 * 0x18);
      }
    }
    local_b8 = lVar12;
    iVar16 = -1;
LAB_140e204dd:
    if (p_Var6 != (_RTL_CRITICAL_SECTION *)0x0) {
      LOCK();
      pLVar1 = &p_Var6->LockCount;
      *pLVar1 = *pLVar1 + -1;
      UNLOCK();
      if (*pLVar1 == 0) {
        (**(code **)p_Var6->DebugInfo)(p_Var6);
        LOCK();
        pLVar1 = &p_Var6->RecursionCount;
        *pLVar1 = *pLVar1 + -1;
        UNLOCK();
        if (*pLVar1 == 0) {
          (*(code *)(p_Var6->DebugInfo->ProcessLocksList).Flink)(p_Var6);
        }
      }
    }
    pvVar17 = local_98;
    iVar26 = 1;
    if (iVar16 == -1) {
      uVar15 = param_1[1].LockCount - param_1[2].RecursionCount;
      p_Var18 = local_b0;
      if (3 < uVar15) {
        uVar21 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
        lVar24 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar26 = 1 << ((byte)lVar24 & 0x1f);
      }
      goto LAB_140e20510;
    }
    pWVar4 = &p_Var25->DebugInfo->Type + (longlong)iVar16 * 0xc;
    p_Var18 = *(_RTL_CRITICAL_SECTION **)(pWVar4 + 4);
    local_c0 = uVar22;
    if (p_Var18 != (_RTL_CRITICAL_SECTION *)0x0) {
      LOCK();
      pLVar1 = &p_Var18->LockCount;
      *pLVar1 = *pLVar1 + -1;
      UNLOCK();
      if (*pLVar1 == 0) {
        (**(code **)p_Var18->DebugInfo)(p_Var18);
        LOCK();
        pLVar1 = &p_Var18->RecursionCount;
        *pLVar1 = *pLVar1 + -1;
        UNLOCK();
        if (*pLVar1 == 0) {
          (*(code *)(p_Var18->DebugInfo->ProcessLocksList).Flink)(p_Var18);
        }
      }
    }
    uVar9 = *(undefined4 *)(pWVar3 + 2);
    uVar10 = *(undefined4 *)(pWVar3 + 4);
    uVar11 = *(undefined4 *)(pWVar3 + 6);
    *(undefined4 *)pWVar4 = *(undefined4 *)pWVar3;
    *(undefined4 *)(pWVar4 + 2) = uVar9;
    *(undefined4 *)(pWVar4 + 4) = uVar10;
    *(undefined4 *)(pWVar4 + 6) = uVar11;
    FUN_140cf1c72(p_Var25,local_c0);
    p_Var18 = local_b0;
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
LAB_140e20572:
  *param_2 = (longlong)pvVar17;
  param_2[1] = (longlong)p_Var18;
  if (p_Var18 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var18->RecursionCount = p_Var18->RecursionCount + 1;
    UNLOCK();
    LOCK();
    pLVar1 = &p_Var18->LockCount;
    *pLVar1 = *pLVar1 + -1;
    UNLOCK();
    if (*pLVar1 == 0) {
      (**(code **)p_Var18->DebugInfo)(p_Var18);
      LOCK();
      pLVar1 = &p_Var18->RecursionCount;
      *pLVar1 = *pLVar1 + -1;
      UNLOCK();
      if (*pLVar1 == 0) {
        (*(code *)(p_Var18->DebugInfo->ProcessLocksList).Flink)(p_Var18);
      }
    }
  }
  FUN_140859a90(&local_88);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e20829 FUN_140e20829 body=77 status=ok
// SIG undefined FUN_140e20829(void)

void FUN_140e20829(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  ushort uVar1;
  
  if (*(int *)(param_1 + 1) - 2U < 0x7fffffff) {
    FUN_140854fd0(param_1,*param_1,0,*(int *)(param_1 + 1) + -1,param_2,param_3);
  }
  else {
    uVar1 = 2;
    if ((*(ushort *)(param_2 + 8) & 1) == 0) {
      uVar1 = *(ushort *)(param_2 + 8) & 0x1e;
    }
    *(ushort *)(param_2 + 8) = uVar1;
  }
  return;
}



// FUNCTION 140e20880 FUN_140e20880 body=49 status=ok
// SIG undefined FUN_140e20880(void)

void FUN_140e20880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [72];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1424b6a40(param_1,param_2,local_58,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_78);
}



// FUNCTION 140e208c8 FUN_140e208c8 body=101 status=ok
// SIG undefined FUN_140e208c8(void)

undefined8 * FUN_140e208c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b01fe10;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140485912(param_1 + 0x12);
  FUN_140753ab6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e2093c FUN_140e2093c body=217 status=ok
// SIG undefined FUN_140e2093c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e2093c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b7b9820;
  FUN_140e20a16(param_1 + 0x1d);
  *param_1 = &PTR_FUN_14b1d7e80;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1407f634a(param_1 + 0x13);
  FUN_140beec42(param_1 + 6);
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



// FUNCTION 140e20a16 FUN_140e20a16 body=259 status=ok
// SIG undefined FUN_140e20a16(void)

void FUN_140e20a16(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  FUN_140e20b19(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  FUN_140e20b4c(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_140e20b84(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_140e20bbc(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_140e20bf4(param_1 + 0x48);
  return;
}



// FUNCTION 140e20b19 FUN_140e20b19 body=51 status=ok
// SIG undefined FUN_140e20b19(void)

void FUN_140e20b19(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e20b4c FUN_140e20b4c body=55 status=ok
// SIG undefined FUN_140e20b4c(void)

void FUN_140e20b4c(longlong *param_1)

{
  FUN_140e20d9a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e20b84 FUN_140e20b84 body=55 status=ok
// SIG undefined FUN_140e20b84(void)

void FUN_140e20b84(longlong *param_1)

{
  FUN_140e20d20(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e20bbc FUN_140e20bbc body=55 status=ok
// SIG undefined FUN_140e20bbc(void)

void FUN_140e20bbc(longlong *param_1)

{
  FUN_140e20ca6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e20bf4 FUN_140e20bf4 body=55 status=ok
// SIG undefined FUN_140e20bf4(void)

void FUN_140e20bf4(longlong *param_1)

{
  FUN_140e20c2c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e20c2c FUN_140e20c2c body=121 status=ok
// SIG undefined FUN_140e20c2c(void)

void FUN_140e20c2c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 140e20ca6 FUN_140e20ca6 body=121 status=ok
// SIG undefined FUN_140e20ca6(void)

void FUN_140e20ca6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 140e20d20 FUN_140e20d20 body=121 status=ok
// SIG undefined FUN_140e20d20(void)

void FUN_140e20d20(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 140e20d9a FUN_140e20d9a body=121 status=ok
// SIG undefined FUN_140e20d9a(void)

void FUN_140e20d9a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 140e20e22 FUN_140e20e22 body=31 status=ok
// SIG undefined FUN_140e20e22(void)

undefined8 FUN_140e20e22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e20e42 FUN_140e20e42 body=53 status=ok
// SIG undefined FUN_140e20e42(void)

void FUN_140e20e42(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 2;
    FUN_1406ca06e(param_1);
  }
  uVar1 = FUN_1447210f0(param_1);
  FUN_140e20e78(uVar1,param_1);
  return;
}



// FUNCTION 140e20e78 FUN_140e20e78 body=266 status=ok
// SIG undefined FUN_140e20e78(void)

void FUN_140e20e78(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    lVar3 = FUN_140834560();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      return;
    }
    uVar6 = *(uint *)(param_2 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar5 = (ulonglong)*(uint *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar3 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar4;
      }
      uVar5 = (ulonglong)uVar2;
    }
  }
  iVar1 = *(int *)(param_1 + 600);
  *(uint *)(param_1 + 600) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x25c) < iVar1 + 1U) {
    FUN_1457b55c2((longlong *)(param_1 + 0x250),iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar1 * 8) =
       (ulonglong)uVar6 | uVar5 << 0x20;
  return;
}



// FUNCTION 140e20f8c FUN_140e20f8c body=163 status=ok
// SIG undefined FUN_140e20f8c(void)

void FUN_140e20f8c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0x3ff0000000000000;
  local_18 = 0x3ff0000000000000;
  local_10 = 0x3ff0000000000000;
  local_38 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    local_28 = &local_20;
    local_30 = param_5;
    FUN_146e3ee16(param_5,param_1 + 0x60,param_2,param_3);
  }
  else {
    local_28 = &local_20;
    local_30 = param_5;
    FUN_140d87304(param_5,param_1 + 0x70,param_2,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e21030 FUN_140e21030 body=76 status=ok
// SIG undefined FUN_140e21030(void)

void FUN_140e21030(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_1446e0b6e();
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 140e2107c FUN_140e2107c body=62 status=ok
// SIG undefined FUN_140e2107c(void)

void FUN_140e2107c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 140e210c0 FUN_140e210c0 body=321 status=ok
// SIG undefined FUN_140e210c0(void)

void FUN_140e210c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  char cStack_2f;
  undefined6 uStack_2e;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
    lVar5 = *(longlong *)(lVar1 + 0x110);
    if (lVar5 == 0) {
      FUN_140aa6c08(lVar1);
      lVar5 = *(longlong *)(lVar1 + 0x110);
      if (lVar5 == 0) goto LAB_140e2110c;
    }
    uVar2 = FUN_140e2120e();
    plVar3 = (longlong *)FUN_144718840(lVar5,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_30);
      plVar4 = param_1 + 0xc;
      if (cStack_2f != '\0') {
        plVar4 = (longlong *)&local_30;
      }
      *(char *)(param_1 + 0xc) = (char)*plVar4;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
      plVar4 = (longlong *)&local_30;
      if (local_24 == -1) {
        plVar4 = param_1 + 0xd;
      }
      FUN_144a787a6(param_1 + 0xd,plVar4);
      if ((local_24 != -1) && (CONCAT62(uStack_2e,CONCAT11(cStack_2f,local_30)) != 0)) {
        FUN_1400020a8();
      }
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_30);
      plVar4 = (longlong *)&local_30;
      if (local_24 == -1) {
        plVar4 = param_1 + 0xf;
      }
      FUN_144a787a6(param_1 + 0xf,plVar4);
      if ((local_24 != -1) && (CONCAT62(uStack_2e,CONCAT11(cStack_2f,local_30)) != 0)) {
        FUN_1400020a8();
      }
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_30);
      plVar3 = param_1 + 0x11;
      if (cStack_2f != '\0') {
        plVar3 = (longlong *)&local_30;
      }
      *(char *)(param_1 + 0x11) = (char)*plVar3;
    }
  }
LAB_140e2110c:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e2120e FUN_140e2120e body=228 status=ok
// SIG undefined FUN_140e2120e(void)

longlong FUN_140e2120e(void)

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
  if (DAT_14cb9a7d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148b01a0d;
    local_40 = FUN_146593ef8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGameSettings",L"GbxGameSettingValue",&DAT_14cb9a7d0,&DAT_148b01a0c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a7d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e212f4 FUN_140e212f4 body=228 status=ok
// SIG undefined FUN_140e212f4(void)

longlong FUN_140e212f4(void)

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
  if (DAT_14cb9a160 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145983964;
    local_38 = &LAB_148af40cf;
    local_40 = FUN_1418c2212;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x200;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingValueScalarDynamic",&DAT_14cb9a160,
                  &DAT_148af40ce);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a160;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e213da FUN_140e213da body=72 status=ok
// SIG undefined FUN_140e213da(void)

undefined8 FUN_140e213da(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if ((((lVar1 != 0) && (lVar2 = FUN_140e21508(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 0x90);
  }
  return 0;
}



// FUNCTION 140e21422 FUN_140e21422 body=228 status=ok
// SIG undefined FUN_140e21422(void)

longlong FUN_140e21422(void)

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
  if (DAT_14cb9a0d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146591bb0;
    local_38 = &LAB_148af40b7;
    local_40 = &LAB_14100d4c8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x198;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingValueDiscreteDynamic_Bool",&DAT_14cb9a0d0,
                  &DAT_148af40b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a0d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e21508 FUN_140e21508 body=228 status=ok
// SIG undefined FUN_140e21508(void)

longlong FUN_140e21508(void)

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
  if (DAT_14cb9a070 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146590f14;
    local_38 = &LAB_148af3fdd;
    local_40 = FUN_1465919e4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingValue",&DAT_14cb9a070,&DAT_148af3fdc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a070;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e215fc FUN_140e215fc body=137 status=ok
// SIG undefined FUN_140e215fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e215fc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
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
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140e21686 FUN_140e21686 body=67 status=ok
// SIG undefined FUN_140e21686(void)

void FUN_140e21686(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b424b70);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b4239ac);
  FUN_140e216ca(param_1,param_2);
  return;
}



// FUNCTION 140e216ca FUN_140e216ca body=166 status=ok
// SIG undefined FUN_140e216ca(void)

void FUN_140e216ca(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a483e58);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e21772 FUN_140e21772 body=1060 status=ok
// SIG undefined FUN_140e21772(void)

void FUN_140e21772(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5,ulonglong param_6)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  code *pcVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  code *pcVar13;
  uint uVar14;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_70;
  undefined2 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined1 local_4a;
  char local_49;
  ulonglong local_48;
  
  lVar11 = DAT_14c9c22b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar3 ^ 1);
  }
  iVar12 = *(int *)(lVar11 + uVar5 * 4);
  if (iVar12 == 0) goto LAB_140e218de;
  uVar5 = (ulonglong)((uint)*param_5 >> 0x19 & 0xf);
  uVar6 = FUN_140478cdb(DAT_14c761ae8 == 3,uVar5);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((*param_5 & 0x40) != 0) {
    local_70 = (longlong *)param_6;
    local_78 = (undefined1 *)CONCAT62(local_78._2_6_,*(undefined2 *)(param_2 + 0xc));
    FUN_140e226b8(param_1,param_4,param_3,0);
    local_68 = *(undefined2 *)(param_2 + 0xc);
    local_60 = param_6;
    local_70 = (longlong *)((ulonglong)local_70 & 0xffffffff00000000);
    local_78 = (undefined1 *)((ulonglong)local_78 & 0xffffffff00000000);
    FUN_140e21b9c(param_1,param_4,param_3,2);
    local_70 = (longlong *)param_6;
    local_78 = (undefined1 *)CONCAT62(local_78._2_6_,*(undefined2 *)(param_2 + 0xc));
    FUN_140e226b8(param_1,param_4,param_3,1);
    local_68 = *(undefined2 *)(param_2 + 0xc);
    local_60 = param_6;
    local_70 = (longlong *)((ulonglong)local_70 & 0xffffffff00000000);
    local_78 = (undefined1 *)CONCAT44(local_78._4_4_,1);
    FUN_140e21b9c(param_1,param_4,param_3,2);
    local_70 = (longlong *)param_6;
    local_78 = (undefined1 *)CONCAT62(local_78._2_6_,*(undefined2 *)(param_2 + 0xc));
    FUN_140e226b8(param_1,param_4,param_3,2);
    local_68 = *(undefined2 *)(param_2 + 0xc);
    local_60 = param_6;
    local_70 = (longlong *)((ulonglong)local_70 & 0xffffffff00000000);
    local_78 = (undefined1 *)CONCAT44(local_78._4_4_,2);
    FUN_140e21b9c(param_1,param_4,param_3,2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  uVar14 = *(uint *)(*param_4 + 0x28);
  local_49 = '\0';
  if (param_3[2] == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(*(longlong *)(param_3[2] + 0x28) + 0x246)) &
            0xffffffffffffff08;
    uVar6 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 3);
  }
  local_78 = &local_4a;
  local_70 = (longlong *)&local_49;
  local_58 = param_2;
  cVar2 = FUN_140478de0(param_3,uVar6,(uVar14 & 0x20) >> 5,-1 < (short)uVar14);
  if (local_49 != '\0') goto LAB_140e218de;
  plVar7 = param_3;
  if (cVar2 == '\0') {
    bVar1 = false;
  }
  else if ((((uVar14 & 0x20) == 0) && (plVar10 = (longlong *)&local_49, param_4[1] != 0)) ||
          (bVar1 = true, plVar10 = param_3, (*param_5 & 0x3f) != 0)) {
    uVar5 = CONCAT71((int7)((ulonglong)plVar10 >> 8),DAT_14cb0cc00);
    FUN_14003fbd6();
    plVar7 = (longlong *)
             (**(code **)(*DAT_14caea080 + 0x350))
                       (DAT_14caea080,*(undefined4 *)(param_1 + 0x20),uVar5 & 0xffffffff);
    bVar1 = false;
  }
  uVar5 = *param_5;
  uVar14 = (uint)uVar5;
  if (iVar12 == 2) {
    uVar9 = uVar14 & 0x2400;
  }
  else {
    uVar9 = uVar14 & 0x2000;
  }
  if (bVar1 || uVar9 == 0) goto LAB_140e218de;
  pcVar8 = *(code **)(*param_3 + 0x38);
  plVar10 = param_3;
  if (pcVar8 == FUN_144765e18) {
    plVar10 = (longlong *)param_3[9];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)param_3[8];
      pcVar8 = *(code **)(*plVar10 + 0x420);
      pcVar13 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar8 = *(code **)(*plVar10 + 0x420);
      pcVar13 = (code *)&LAB_14497e108;
    }
    if (pcVar8 != pcVar13) goto LAB_140e21b7e;
  }
  else {
LAB_140e21b7e:
    (*pcVar8)(plVar10);
  }
  lVar11 = *param_3;
  if (*(code **)(lVar11 + 0x100) == (code *)&LAB_144b25520) {
    bVar3 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    bVar3 = (**(code **)(lVar11 + 0x100))(param_3);
    lVar11 = *param_3;
  }
  pcVar8 = *(code **)(lVar11 + 0x38);
  if (pcVar8 == FUN_144765e18) {
    plVar10 = (longlong *)param_3[9];
    if (plVar10 == (longlong *)0x0) {
      pcVar8 = *(code **)(*(longlong *)param_3[8] + 0x420);
      if (pcVar8 != (code *)&LAB_144b24e8a) goto LAB_140e21b95;
      bVar4 = *(byte *)((longlong *)param_3[8] + 0x30);
    }
    else {
      pcVar8 = *(code **)(*plVar10 + 0x420);
      if (pcVar8 != (code *)&LAB_14497e108) goto LAB_140e21b95;
      bVar4 = *(byte *)(plVar10 + 0x2a);
    }
    bVar4 = (bVar4 & 0x10) >> 4;
  }
  else {
LAB_140e21b95:
    bVar4 = (*pcVar8)();
  }
  iVar12 = ((uVar14 >> 0x10 & 1) != 0) + 1;
  if (bVar4 != 0) {
    iVar12 = 0;
  }
  if ((uVar5 & 0x20000) != 0) {
    iVar12 = 0;
  }
  local_68 = *(undefined2 *)(local_58 + 0xc);
  local_60 = param_6;
  local_70 = (longlong *)(CONCAT44(local_70._4_4_,(uint)*param_5) & 0xffffffff0000003f);
  local_78 = (undefined1 *)CONCAT44(local_78._4_4_,iVar12);
  FUN_140e21b9c(param_1,param_4,plVar7,2 - (uint)bVar3);
LAB_140e218de:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e21b9c FUN_140e21b9c body=2842 status=ok
// SIG undefined FUN_140e21b9c(void)

/* WARNING: Removing unreachable block (ram,0x000140e223c5) */

void FUN_140e21b9c(longlong param_1,longlong *param_2,longlong *param_3,int param_4,int param_5,
                  undefined4 param_6,undefined2 param_7,longlong *param_8)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 auStack_598 [32];
  undefined8 *local_578;
  undefined8 *local_570;
  undefined8 *local_568;
  undefined4 local_560;
  undefined4 local_558;
  undefined1 local_550;
  undefined1 local_548;
  undefined1 local_540;
  undefined4 local_538;
  longlong *local_530;
  undefined1 local_521;
  ulonglong local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined2 local_4aa;
  undefined8 local_4a8;
  undefined1 local_49d [5];
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 local_458 [6];
  longlong local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  undefined8 local_3c8;
  undefined1 local_3b8 [48];
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_328;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 local_270;
  ulonglong local_268;
  undefined1 local_260;
  undefined1 local_25f;
  undefined1 local_25e;
  undefined1 local_25d;
  undefined4 local_25c;
  undefined2 local_258;
  undefined2 local_256;
  undefined2 local_252;
  undefined8 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_190;
  undefined4 local_188 [2];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  ulonglong local_138;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined8 local_12c;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_598;
  if (DAT_14cafe420 == '\x01') {
    local_578 = &local_4f8;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_4f8 = 0;
    uStack_4f0 = 0;
    local_508 = 0;
    uStack_500 = 0;
    local_570 = &local_518;
    local_518 = 0;
    uStack_510 = 0;
    local_568 = (undefined8 *)((ulonglong)local_568 & 0xffffffffffffff00);
    cVar4 = FUN_1404790d0(param_3,*param_2,*(undefined4 *)(param_1 + 0x20),&local_508);
    uVar3 = DAT_14ca4af88;
    if (cVar4 != '\0') {
      local_478 = 0;
      uStack_470 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_468 = 0;
      bVar13 = ((uint)DAT_14ca4af88 >> 0xc & 1) == 0;
      cVar4 = FUN_14479fe53(param_7,1,1);
      local_521 = bVar13;
      if ((cVar4 == '\0') || (DAT_14ca84e22 != '\x01')) {
        local_520 = 9;
      }
      else {
        local_520 = 9;
        if ((DAT_14ca84e1f == '\x01') && (DAT_14c760874 != 0)) {
          bVar6 = FUN_14366adaf();
          local_520 = (ulonglong)bVar6 << 0x11 | 9;
        }
      }
      uVar1 = *(uint *)(param_1 + 8);
      local_190 = CONCAT62(local_190._2_6_,0x100);
      local_80 = 0;
      local_78 = 0x300000000;
      local_70 = 0x7fffffff;
      uStack_68 = 0;
      cVar4 = FUN_1406917e6();
      if (cVar4 == '\0') {
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        local_220 = 1;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        lStack_200 = 0;
        local_1f8 = 0;
        lStack_1f0 = 0;
        local_1e8 = 0xffffffff;
        uStack_1e4 = 0xffffffff;
        uStack_1e0 = 0xffffffff;
        uStack_1dc = 0xffffffff;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1bf = 0;
        uStack_1b8 = 0;
        uStack_1b7 = 0;
        local_1af = 1;
        local_1a8 = 0;
        local_1a0 = 0;
        local_1ac = param_6;
        lVar9 = param_2[1];
        if (lVar9 == 0) {
          uStack_290 = 0x1100000000;
          (**(code **)(*param_2 + 0x48))(0,&local_318);
          lVar9 = FUN_14486d71a(&local_318);
        }
        local_2d8 = 0;
        uStack_2d0 = 0;
        local_318 = local_508;
        uStack_310 = uStack_500;
        local_308 = local_4f8;
        uStack_300 = uStack_4f0;
        local_2f8 = local_4e8;
        uStack_2f0 = uStack_4e0;
        local_2e8 = local_4d8;
        uStack_2e0 = uStack_4d0;
        local_2c8 = (undefined4)local_4c8;
        uStack_2c4 = local_4c8._4_4_;
        uStack_2c0 = (undefined4)uStack_4c0;
        uStack_2bc = uStack_4c0._4_4_;
        FUN_144765e6c(&local_238,lVar9);
        puVar11 = &DAT_14c9c0e10;
        if (param_5 == 2) {
          puVar11 = &DAT_14c9c0e28;
        }
        puVar12 = &DAT_14c9c0d68;
        if (param_5 == 2) {
          puVar12 = &DAT_14c9c0df8;
        }
        puVar10 = &DAT_14c9c0e40;
        if (param_5 != 0) {
          puVar10 = puVar11;
        }
        puVar11 = &DAT_14c9c0db0;
        if (param_5 != 0) {
          puVar11 = puVar12;
        }
        if (param_4 == 1) {
          puVar11 = puVar10;
        }
        uStack_1d0 = *puVar11;
        local_1d8 = *(undefined8 *)(param_1 + 0x40);
        local_1c8 = *(undefined8 *)(param_1 + 0x48);
        uVar7 = (**(code **)(*param_3 + 0x490))(param_3);
        if (uVar7 < 4) {
          uVar5 = (undefined1)(0x5010400 >> ((byte)(uVar7 << 3) & 0x1f));
        }
        else {
          uVar5 = 0;
          if ((uVar7 < 7) && (DAT_14ca84f33 != '\0')) {
            uVar5 = (undefined1)(0xa060900000000 >> ((byte)(uVar7 << 3) & 0x3f));
          }
        }
        local_1af = CONCAT11(uVar5,(undefined1)local_1af);
        cVar4 = (**(code **)(*param_3 + 0x4a0))(param_3);
        if (cVar4 == '\0') {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_144a12f44(DAT_14ca85550);
        }
        local_1af = CONCAT11(local_1af._1_1_,uVar5);
        FUN_144a1fecc(&local_238,&local_318);
        if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
           (DAT_14cafb358 == 2)) {
          local_1a8 = local_248;
          FUN_14573402d(local_3b8);
          if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
             (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
            lVar9 = *param_2;
            local_458[0] = local_328;
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            local_578 = (undefined8 *)(local_49d + 1);
            local_49d._1_4_ = local_49d._1_4_ & 0xffff0000;
            local_570 = (undefined8 *)&local_4aa;
            FUN_14573482a(&DAT_14cafccf8,&local_4a8,
                          (int)((ulonglong)local_458[0] >> 0x20) * 0x17 + (int)local_458[0] &
                          0x7fffffff,local_458);
            if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_4a8 * 0x10) == '\x01') {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            }
            else {
              *(undefined1 *)((longlong)(int)local_4a8 * 0x10 + DAT_14cafccf8 + 8) = 1;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
              FUN_140691a2a(&DAT_14cafc0a0,uVar1,lVar9);
            }
          }
          FUN_1457340f6(local_458,&local_238);
          if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
             (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
            lVar9 = *param_2;
            local_4a8 = local_3c8;
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            local_578 = (undefined8 *)&local_4aa;
            local_4aa = 0;
            local_570 = (undefined8 *)local_49d;
            FUN_14573482a(&DAT_14cafd9c8,local_49d + 1,
                          (int)((ulonglong)local_4a8 >> 0x20) * 0x17 + (int)local_4a8 & 0x7fffffff,
                          &local_4a8);
            if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_49d._1_4_ * 0x10) == '\x01') {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            }
            else {
              *(undefined1 *)((longlong)(int)local_49d._1_4_ * 0x10 + DAT_14cafd9c8 + 8) = 1;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
              FUN_140691a2a(&DAT_14cafcd70,uVar1,lVar9);
            }
          }
          if (local_410 != 0) {
            FUN_140021284();
          }
          if (local_418 != 0) {
            FUN_140021284();
          }
          if (local_420 != 0) {
            FUN_140021284();
          }
          if (local_428 != 0) {
            FUN_140021284();
          }
          if (local_370 != 0) {
            FUN_140021284();
          }
          if (local_378 != 0) {
            FUN_140021284();
          }
          if (local_380 != 0) {
            FUN_140021284();
          }
          if (local_388 != 0) {
            FUN_140021284();
          }
        }
        uStack_2bc = 1;
        local_2b8 = 9;
        local_2b0 = local_520;
        local_2a8 = local_498;
        uStack_2a0 = uStack_490;
        local_298 = local_488;
        uStack_290 = uStack_480;
        local_288 = local_478;
        uStack_280 = uStack_470;
        local_278 = local_468;
        local_258 = 1;
        local_270 = 0xb;
        local_260 = 1;
        local_25f = local_521;
        local_25e = 1;
        local_25d = local_521;
        local_25c = 0x22;
        local_252 = 0;
        local_256 = 0;
        local_268 = uVar3 | 0x400000c;
        memcpy(local_188,&local_318,0xd8);
        if (lStack_1f0 != 0) {
          FUN_140021284();
        }
        if (local_1f8 != 0) {
          FUN_140021284();
        }
        if (lStack_200 != 0) {
          FUN_140021284();
        }
        if (local_208 != 0) {
          FUN_140021284();
        }
        local_70 = 0;
      }
      else {
        local_2d8 = 0;
        uStack_2d0 = 0;
        local_318 = local_508;
        uStack_310 = uStack_500;
        local_308 = local_4f8;
        uStack_300 = uStack_4f0;
        local_2f8 = local_4e8;
        uStack_2f0 = uStack_4e0;
        local_2e8 = local_4d8;
        uStack_2e0 = uStack_4d0;
        local_2c8 = (undefined4)local_4c8;
        uStack_2c4 = local_4c8._4_4_;
        uStack_2c0 = (undefined4)uStack_4c0;
        uStack_2bc = uStack_4c0._4_4_;
        FUN_145734aa6(&local_318,&local_238);
        FUN_1457347b6(&local_b0,&local_238);
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        local_70 = local_70 & 0x80000000;
      }
      local_190 = CONCAT62(local_190._2_6_,0x100);
      local_70 = uVar1 & 0x7fffffff | local_70;
      uStack_68 = *param_2;
      if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
         (DAT_14cafb358 == 2)) {
        bVar6 = (**(code **)(*param_3 + 0x400))(param_3);
        local_70 = local_70 & 0x7fffffff | (uint)bVar6 << 0x1f;
        FUN_1406918b2();
      }
      iVar2 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar2 + 1U) {
        FUN_14069191a(param_8,iVar2);
      }
      lVar9 = *param_8;
      _Dst = (void *)(lVar9 + (longlong)iVar2 * 0x130);
      memcpy(_Dst,&local_190,0xe0);
      *(undefined8 *)(lVar9 + 0x110 + (longlong)iVar2 * 0x130) = 0;
      if (local_80 == 0) {
        *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
        *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
        *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
        *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
        *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
        *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
      }
      *(longlong *)((longlong)_Dst + 0x110) = local_80;
      local_80 = 0;
      *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
      *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
      local_78 = 0x300000000;
      *(uint *)((longlong)_Dst + 0x120) = local_70;
      *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
      *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
      *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
    }
  }
  else {
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_238 = 0;
    uStack_230 = 0;
    uVar8 = FUN_143577b4a(param_3);
    local_578 = &local_318;
    local_570 = &local_308;
    local_568 = &local_238;
    cVar4 = FUN_1447e3edc(param_3,*param_2,*(undefined4 *)(param_1 + 0x20),uVar8);
    if (cVar4 != '\0') {
      local_188[0] = 0;
      local_190 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_12c = 0x100000022;
      local_138 = DAT_14ca4af88 | 0x400000c;
      local_140 = 0xb;
      local_130 = 1;
      local_12e = 1;
      local_12f = ((uint)DAT_14ca4af88 >> 0xc & 1) == 0;
      local_538 = *(undefined4 *)(param_1 + 8);
      local_530 = param_8;
      local_540 = 1;
      local_548 = 0;
      local_550 = 0;
      local_558 = 0;
      local_560 = 0;
      local_568 = (undefined8 *)CONCAT44(local_568._4_4_,param_5);
      local_570 = (undefined8 *)CONCAT44(local_570._4_4_,param_4);
      local_578 = &local_318;
      local_12d = local_12f;
      FUN_140b07aec(param_2,param_3,param_1 + 0x40);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e226b8 FUN_140e226b8 body=2842 status=ok
// SIG undefined FUN_140e226b8(void)

/* WARNING: Removing unreachable block (ram,0x000140e22ec6) */

void FUN_140e226b8(longlong param_1,ulonglong *param_2,longlong *param_3,int param_4,
                  undefined2 param_5,longlong *param_6)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 uVar13;
  undefined1 auStack_5a8 [32];
  undefined8 *local_588;
  undefined8 *local_580;
  undefined8 *local_578;
  undefined4 local_570;
  undefined4 local_568;
  undefined1 local_560;
  undefined1 local_558;
  undefined1 local_550;
  undefined4 local_548;
  longlong *local_540;
  undefined1 local_529;
  ulonglong local_528;
  ulonglong local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined2 local_4aa;
  undefined8 local_4a8;
  undefined1 local_49d [5];
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 local_458 [6];
  longlong local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  undefined8 local_3c8;
  undefined1 local_3b8 [48];
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_328;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 local_270;
  ulonglong local_268;
  undefined1 local_260;
  undefined1 local_25f;
  undefined1 local_25e;
  undefined1 local_25d;
  undefined4 local_25c;
  undefined2 local_258;
  undefined2 local_256;
  undefined2 local_252;
  undefined8 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 local_190;
  undefined4 local_188 [2];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  ulonglong local_138;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined8 local_12c;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  if (DAT_14cafe420 == '\x01') {
    local_588 = &local_4f8;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_4f8 = 0;
    uStack_4f0 = 0;
    local_508 = 0;
    uStack_500 = 0;
    local_580 = &local_518;
    local_518 = 0;
    uStack_510 = 0;
    local_578 = (undefined8 *)((ulonglong)local_578 & 0xffffffffffffff00);
    cVar5 = FUN_140e231d3(param_3,*param_2,*(undefined4 *)(param_1 + 0x20),&local_508);
    uVar3 = DAT_14ca4af88;
    if (cVar5 != '\0') {
      local_478 = 0;
      uStack_470 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_468 = 0;
      uVar8 = (uint)DAT_14ca4af88;
      cVar5 = FUN_14479fe53(param_5,1,1);
      if ((cVar5 == '\0') || (DAT_14ca84e22 != '\x01')) {
        local_520 = 9;
      }
      else {
        local_520 = 9;
        if ((DAT_14ca84e1f == '\x01') && (DAT_14c760874 != 0)) {
          bVar7 = FUN_14366adaf();
          local_520 = (ulonglong)bVar7 << 0x11 | 9;
        }
      }
      local_528 = CONCAT44(local_528._4_4_,*(undefined4 *)(param_1 + 8));
      local_190 = CONCAT62(local_190._2_6_,0x100);
      local_80 = 0;
      local_78 = 0x300000000;
      local_70 = 0x7fffffff;
      uStack_68 = 0;
      cVar5 = FUN_1406917e6();
      if (cVar5 == '\0') {
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        local_220 = 1;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        lStack_200 = 0;
        local_1f8 = 0;
        lStack_1f0 = 0;
        local_1e8 = 0xffffffff;
        uStack_1e4 = 0xffffffff;
        uStack_1e0 = 0xffffffff;
        uStack_1dc = 0xffffffff;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1bf = 0;
        uStack_1b8 = 0;
        uStack_1b7 = 0;
        local_1af = 1;
        local_1ac = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1a0 = 0;
        uStack_290 = 0x1100000000;
        local_529 = (uVar8 >> 0xc & 1) == 0;
        (**(code **)(*param_2 + 0x48))(1,&local_318);
        uVar10 = FUN_14486d71a(&local_318);
        local_2d8 = 0;
        uStack_2d0 = 0;
        local_318 = local_508;
        uStack_310 = uStack_500;
        local_308 = local_4f8;
        uStack_300 = uStack_4f0;
        local_2f8 = local_4e8;
        uStack_2f0 = uStack_4e0;
        local_2e8 = local_4d8;
        uStack_2e0 = uStack_4d0;
        local_2c8 = local_4c8;
        uStack_2c0 = uStack_4c0;
        FUN_144765e6c(&local_238,uVar10,&local_318);
        puVar12 = &DAT_14c9c0d58;
        if (param_4 == 2) {
          puVar12 = &DAT_14c9c0de8;
        }
        puVar11 = &DAT_14c9c0da0;
        if (param_4 != 0) {
          puVar11 = puVar12;
        }
        uStack_1d0 = *(undefined8 *)(puVar11 + 0x10);
        local_1d8 = *(undefined8 *)(param_1 + 0x40);
        local_1c8 = *(undefined8 *)(param_1 + 0x48);
        uVar8 = (**(code **)(*param_3 + 0x490))(param_3);
        if (uVar8 < 4) {
          uVar13 = (undefined1)(0x5010400 >> ((byte)(uVar8 << 3) & 0x1f));
        }
        else {
          uVar13 = 0;
          if ((uVar8 < 7) && (DAT_14ca84f33 != '\0')) {
            uVar13 = (undefined1)(0xa060900000000 >> ((byte)(uVar8 << 3) & 0x3f));
          }
        }
        local_1af = CONCAT11(uVar13,(undefined1)local_1af);
        cVar5 = (**(code **)(*param_3 + 0x4a0))(param_3);
        uVar13 = local_529;
        if (cVar5 == '\0') {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_144a12f44(DAT_14ca85550);
        }
        uVar4 = local_528;
        uVar8 = (uint)local_528;
        local_1af = CONCAT11(local_1af._1_1_,uVar6);
        FUN_144a1fecc(&local_238,&local_318);
        if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
           (DAT_14cafb358 == 2)) {
          uStack_1a8 = (undefined4)local_248;
          uStack_1a4 = (undefined4)((ulonglong)local_248 >> 0x20);
          FUN_14573402d(local_3b8);
          if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
             (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
            local_528 = *param_2;
            local_458[0] = local_328;
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            local_588 = (undefined8 *)(local_49d + 1);
            local_49d._1_4_ = local_49d._1_4_ & 0xffff0000;
            local_580 = (undefined8 *)&local_4aa;
            FUN_14573482a(&DAT_14cafccf8,&local_4a8,
                          (int)((ulonglong)local_458[0] >> 0x20) * 0x17 + (int)local_458[0] &
                          0x7fffffff,local_458);
            if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_4a8 * 0x10) == '\x01') {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            }
            else {
              *(undefined1 *)((longlong)(int)local_4a8 * 0x10 + DAT_14cafccf8 + 8) = 1;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
              FUN_140691a2a(&DAT_14cafc0a0,uVar4 & 0xffffffff,local_528);
            }
          }
          FUN_1457340f6(local_458,&local_238);
          if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
             (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
            local_528 = *param_2;
            local_4a8 = local_3c8;
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            local_588 = (undefined8 *)&local_4aa;
            local_4aa = 0;
            local_580 = (undefined8 *)local_49d;
            FUN_14573482a(&DAT_14cafd9c8,local_49d + 1,
                          (int)((ulonglong)local_4a8 >> 0x20) * 0x17 + (int)local_4a8 & 0x7fffffff,
                          &local_4a8);
            if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_49d._1_4_ * 0x10) == '\x01') {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            }
            else {
              *(undefined1 *)((longlong)(int)local_49d._1_4_ * 0x10 + DAT_14cafd9c8 + 8) = 1;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
              FUN_140691a2a(&DAT_14cafcd70,uVar4 & 0xffffffff,local_528);
            }
          }
          if (local_410 != 0) {
            FUN_140021284();
          }
          if (local_418 != 0) {
            FUN_140021284();
          }
          if (local_420 != 0) {
            FUN_140021284();
          }
          if (local_428 != 0) {
            FUN_140021284();
          }
          if (local_370 != 0) {
            FUN_140021284();
          }
          if (local_378 != 0) {
            FUN_140021284();
          }
          if (local_380 != 0) {
            FUN_140021284();
          }
          if (local_388 != 0) {
            FUN_140021284();
          }
        }
        uStack_2c0 = CONCAT44(1,(undefined4)uStack_2c0);
        local_2b8 = 9;
        local_2b0 = local_520;
        local_2a8 = local_498;
        uStack_2a0 = uStack_490;
        local_298 = local_488;
        uStack_290 = uStack_480;
        local_288 = local_478;
        uStack_280 = uStack_470;
        local_278 = local_468;
        local_258 = 1;
        local_270 = 0xb;
        local_260 = 1;
        local_25f = uVar13;
        local_25e = 1;
        local_25d = uVar13;
        local_25c = 0x22;
        local_252 = 0;
        local_256 = 0;
        local_268 = uVar3 | 0x400000c;
        memcpy(local_188,&local_318,0xd8);
        if (lStack_1f0 != 0) {
          FUN_140021284();
        }
        if (local_1f8 != 0) {
          FUN_140021284();
        }
        if (lStack_200 != 0) {
          FUN_140021284();
        }
        if (local_208 != 0) {
          FUN_140021284();
        }
        local_70 = 0;
      }
      else {
        local_2d8 = 0;
        uStack_2d0 = 0;
        local_318 = local_508;
        uStack_310 = uStack_500;
        local_308 = local_4f8;
        uStack_300 = uStack_4f0;
        local_2f8 = local_4e8;
        uStack_2f0 = uStack_4e0;
        local_2e8 = local_4d8;
        uStack_2e0 = uStack_4d0;
        local_2c8 = local_4c8;
        uStack_2c0 = uStack_4c0;
        FUN_145734aa6(&local_318,&local_238);
        FUN_1457347b6(&local_b0,&local_238);
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        local_70 = local_70 & 0x80000000;
        uVar8 = (uint)local_528;
      }
      local_190 = CONCAT62(local_190._2_6_,0x100);
      local_70 = uVar8 & 0x7fffffff | local_70;
      uStack_68 = *param_2;
      if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
         (DAT_14cafb358 == 2)) {
        bVar7 = (**(code **)(*param_3 + 0x400))(param_3);
        local_70 = local_70 & 0x7fffffff | (uint)bVar7 << 0x1f;
        FUN_1406918b2();
      }
      iVar1 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar1 + 1U) {
        FUN_14069191a(param_6,iVar1);
      }
      lVar2 = *param_6;
      _Dst = (void *)(lVar2 + (longlong)iVar1 * 0x130);
      memcpy(_Dst,&local_190,0xe0);
      *(undefined8 *)(lVar2 + 0x110 + (longlong)iVar1 * 0x130) = 0;
      if (local_80 == 0) {
        *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
        *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
        *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
        *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
        *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
        *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
      }
      *(longlong *)((longlong)_Dst + 0x110) = local_80;
      local_80 = 0;
      *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
      *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
      local_78 = 0x300000000;
      *(uint *)((longlong)_Dst + 0x120) = local_70;
      *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
      *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
      *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
    }
  }
  else {
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_238 = 0;
    uStack_230 = 0;
    uVar9 = FUN_143577b4a(param_3);
    local_588 = &local_318;
    local_580 = &local_308;
    local_578 = &local_238;
    cVar5 = FUN_1400cee52(param_3,*param_2,*(undefined4 *)(param_1 + 0x20),uVar9);
    if (cVar5 != '\0') {
      local_188[0] = 0;
      local_190 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_12c = 0x100000022;
      local_138 = DAT_14ca4af88 | 0x400000c;
      local_140 = 0xb;
      local_130 = 1;
      local_12e = 1;
      local_12f = ((uint)DAT_14ca4af88 >> 0xc & 1) == 0;
      local_548 = *(undefined4 *)(param_1 + 8);
      local_540 = param_6;
      local_550 = 1;
      local_558 = 0;
      local_560 = 0;
      local_570 = 0;
      local_578 = (undefined8 *)CONCAT44(local_578._4_4_,param_4);
      local_568 = 1;
      local_580 = (undefined8 *)CONCAT44(local_580._4_4_,2);
      local_588 = &local_318;
      local_12d = local_12f;
      FUN_140b09aec(param_2,param_3,param_1 + 0x40);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_5a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e231d3 FUN_140e231d3 body=333 status=ok
// SIG undefined FUN_140e231d3(void)

void FUN_140e231d3(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  char cVar1;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0 [12];
  undefined4 auStack_60 [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  memset(local_c0,0,0x90);
  FUN_1400cef80();
  local_c0[DAT_14c9c4848] = &DAT_14c9c4800;
  auStack_60[DAT_14c9c4848] = 0;
  FUN_140479332();
  local_c0[DAT_14c9c5410] = &DAT_14c9c53c8;
  auStack_60[DAT_14c9c5410] = 0;
  local_c8 = &DAT_14c9c5488;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  cVar1 = FUN_14007744c(param_1,&local_c8,param_2);
  if (cVar1 != '\0') {
    if (lStack_130 != 0) {
      *param_6 = lStack_130;
      param_6[1] = local_138;
    }
    if (local_128 != 0) {
      *param_4 = local_128;
      param_4[1] = local_138;
    }
    if (lStack_110 != 0) {
      *param_5 = lStack_110;
      param_5[1] = local_138;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e23322 FUN_140e23322 body=2412 status=ok
// SIG undefined FUN_140e23322(void)

void FUN_140e23322(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  undefined1 *puVar16;
  int *piVar17;
  longlong lVar18;
  void *_Src;
  ulonglong uVar19;
  uint *puVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  ulonglong local_b0;
  char local_a8;
  undefined7 uStack_a7;
  undefined4 local_a0;
  uint local_98 [6];
  longlong local_80;
  uint local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar18 = *param_2;
  if (((((lVar18 == 0) || (*(int *)(lVar18 + 0x110) == 0)) ||
       (uVar5 = *(uint *)(lVar18 + 0x10c), (int)uVar5 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar5 ||
       (plVar11 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar11 == (longlong *)0x0)))) ||
     (((int)plVar11[2] != *(int *)(lVar18 + 0x110) ||
      (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar18 = *plVar11, lVar18 == 0))))))
  goto LAB_140e23a94;
  lVar6 = FUN_1407fc0e2();
  if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     ((*(longlong *)
        (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
       != lVar6 + 0x30 || (lVar18 + 0xd10 == 0)))) goto LAB_140e23a94;
  FUN_1406f1bc8(lVar18 + 0xd10,&local_a8);
  cVar2 = FUN_1401144ce(&local_a8);
  if (cVar2 != '\0') {
    local_b8 = (longlong *)(param_1 + 0x690);
    if (local_a8 == '\x01') {
      FUN_1447a97f4(&local_70,local_98);
      if (0 < local_6c) {
        lVar18 = 0;
        uVar19 = 0;
        iVar3 = local_6c;
        uVar5 = DAT_14c948000;
        do {
          bVar21 = local_70 != 0;
          bVar22 = local_70 != uVar5;
          piVar15 = &DAT_14c948620;
          piVar17 = (int *)&DAT_14c948618;
          if (bVar22 && bVar21) {
            puVar16 = local_68;
            if (0 < local_4c) {
              puVar16 = local_58;
            }
            if (1 < iVar3) {
              puVar16 = local_58;
            }
            piVar15 = (int *)(puVar16 + lVar18 + 8);
            piVar17 = (int *)(puVar16 + lVar18);
          }
          if ((*piVar17 == DAT_14cb7beb0) && (*piVar15 == DAT_14cb7beb8)) {
LAB_140e23616:
            FUN_1402b5374(&local_70,uVar19 & 0xffffffff,0);
            iVar3 = local_6c;
            uVar5 = DAT_14c948000;
          }
          else {
            piVar15 = &DAT_14c948620;
            piVar17 = (int *)&DAT_14c948618;
            if (bVar22 && bVar21) {
              puVar16 = local_68;
              if (0 < local_4c) {
                puVar16 = local_58;
              }
              if (1 < iVar3) {
                puVar16 = local_58;
              }
              piVar15 = (int *)(puVar16 + lVar18 + 8);
              piVar17 = (int *)(puVar16 + lVar18);
            }
            if ((*piVar17 == DAT_14cb7bec8) && (*piVar15 == DAT_14cb7bed0)) goto LAB_140e23616;
            piVar15 = &DAT_14c948620;
            piVar17 = (int *)&DAT_14c948618;
            if (bVar22 && bVar21) {
              puVar16 = local_68;
              if (0 < local_4c) {
                puVar16 = local_58;
              }
              if (1 < iVar3) {
                puVar16 = local_58;
              }
              piVar15 = (int *)(puVar16 + lVar18 + 8);
              piVar17 = (int *)(puVar16 + lVar18);
            }
            if ((*piVar17 == DAT_14cb7bee0) && (*piVar15 == DAT_14cb7bee8)) goto LAB_140e23616;
            piVar15 = &DAT_14c948620;
            piVar17 = (int *)&DAT_14c948618;
            if (bVar22 && bVar21) {
              puVar16 = local_68;
              if (0 < local_4c) {
                puVar16 = local_58;
              }
              if (1 < iVar3) {
                puVar16 = local_58;
              }
              piVar15 = (int *)(puVar16 + lVar18 + 8);
              piVar17 = (int *)(puVar16 + lVar18);
            }
            if ((*piVar17 == DAT_14cb7bef8) && (*piVar15 == DAT_14cb7bf00)) goto LAB_140e23616;
            piVar15 = &DAT_14c948620;
            piVar17 = (int *)&DAT_14c948618;
            if (bVar22 && bVar21) {
              puVar16 = local_68;
              if (0 < local_4c) {
                puVar16 = local_58;
              }
              if (1 < iVar3) {
                puVar16 = local_58;
              }
              piVar15 = (int *)(puVar16 + lVar18 + 8);
              piVar17 = (int *)(puVar16 + lVar18);
            }
            if ((*piVar17 == DAT_14cb7bf10) && (*piVar15 == DAT_14cb7bf18)) goto LAB_140e23616;
          }
          uVar19 = uVar19 + 1;
          lVar18 = lVar18 + 0xc;
        } while ((longlong)uVar19 < (longlong)iVar3);
      }
      local_98[0] = local_70;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_140e23c90(local_b8,local_98[0],&local_a8);
    if (iVar3 == -1) {
      lVar18 = *param_2;
      if (*(int *)(param_1 + 0x6c4) == 0) {
        uVar5 = *(uint *)(param_1 + 0x698);
        uVar19 = (ulonglong)uVar5;
        *(uint *)(param_1 + 0x698) = uVar5 + 1;
        if (*(uint *)(param_1 + 0x69c) == uVar5) {
          FUN_1406fba42(local_b8,uVar5);
        }
        iVar3 = *(int *)(param_1 + 0x6b8);
        if (iVar3 == 0) {
          iVar4 = -1;
        }
        else {
          iVar4 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar4 = iVar3 + -1;
          }
          iVar4 = iVar4 >> 5;
        }
        lVar12 = param_1 + 0x6a0;
        iVar10 = iVar3 + 1;
        iVar14 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar14 = iVar3;
        }
        if (iVar14 >> 5 == iVar4) {
          *(int *)(param_1 + 0x6b8) = iVar10;
        }
        else {
          if (*(int *)(param_1 + 0x6bc) <= iVar3) {
            if (iVar3 + 0x20U < 0xa0) {
              iVar10 = 0x80;
              iVar4 = iVar3;
            }
            else {
              uVar13 = iVar3 + 0x20U >> 5;
              if (*(int *)(param_1 + 0x6bc) + 0x1fU < 0xa0) {
                uVar9 = 4;
                if (4 < uVar13) {
                  uVar9 = uVar13;
                }
              }
              else {
                uVar9 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
              }
              uVar7 = FUN_144a3809e(uVar9 << 2,0);
              iVar4 = (int)(uVar7 >> 2);
              iVar10 = -0x20;
              if ((int)uVar13 <= iVar4) {
                iVar10 = iVar4 << 5;
              }
              iVar4 = *(int *)(param_1 + 0x6b8);
            }
            *(int *)(param_1 + 0x6bc) = iVar10;
            FUN_1446efbd8(lVar12,iVar4);
            iVar10 = *(int *)(param_1 + 0x6b8) + 1;
          }
          iVar4 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar4 = iVar10;
          }
          *(int *)(param_1 + 0x6b8) = iVar10;
          if (iVar10 % 0x20 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x6b0);
            if (*(longlong *)(param_1 + 0x6b0) == 0) {
              lVar6 = lVar12;
            }
            bVar8 = -(char)(iVar10 % 0x20);
            *(uint *)(lVar6 + (longlong)(iVar4 >> 5) * 4) =
                 (uint)(*(int *)(lVar6 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
                 (bVar8 & 0x1f);
          }
        }
        lVar6 = (longlong)(int)uVar5;
        if (*(longlong *)(param_1 + 0x6b0) != 0) {
          lVar12 = *(longlong *)(param_1 + 0x6b0);
        }
        bVar8 = (byte)iVar3 & 0x1f;
        puVar20 = (uint *)(lVar12 + (longlong)(iVar14 >> 5) * 4);
        *puVar20 = *puVar20 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      }
      else {
        uVar19 = (ulonglong)*(uint *)(param_1 + 0x6c0);
        lVar6 = (longlong)(int)*(uint *)(param_1 + 0x6c0);
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x690) + 4 + lVar6 * 0x50);
        *(int *)(param_1 + 0x6c0) = iVar3;
        iVar4 = *(int *)(param_1 + 0x6c4) + -1;
        *(int *)(param_1 + 0x6c4) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x690) + (longlong)iVar3 * 0x50) = 0xffffffff;
        }
      }
      iVar3 = (int)uVar19;
      lVar12 = param_1 + 0x6a0;
      if (*(longlong *)(param_1 + 0x6b0) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x6b0);
      }
      iVar4 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      puVar20 = (uint *)(lVar12 + (longlong)(iVar4 >> 5) * 4);
      *puVar20 = *puVar20 | 1 << ((byte)uVar19 & 0x1f);
      lVar12 = *(longlong *)(param_1 + 0x690);
      pcVar1 = (char *)(lVar12 + lVar6 * 0x50);
      puVar20 = (uint *)(pcVar1 + 0x10);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      puVar20[0] = 0;
      puVar20[1] = 0;
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x28] = '\0';
      pcVar1[0x29] = '\0';
      pcVar1[0x2a] = '\0';
      pcVar1[0x2b] = '\0';
      pcVar1[0x2c] = '\0';
      pcVar1[0x2d] = '\0';
      pcVar1[0x2e] = '\0';
      pcVar1[0x2f] = '\0';
      pcVar1[0x30] = '\0';
      pcVar1[0x31] = '\0';
      pcVar1[0x32] = '\0';
      pcVar1[0x33] = '\0';
      pcVar1[0x34] = '\0';
      pcVar1[0x35] = '\0';
      pcVar1[0x36] = '\0';
      pcVar1[0x37] = '\0';
      *(undefined4 *)(pcVar1 + 8) = local_a0;
      *(ulonglong *)pcVar1 = CONCAT71(uStack_a7,local_a8);
      local_b0 = uVar19;
      FUN_1447715ec(puVar20);
      *(undefined8 *)(pcVar1 + 0x38) = *(undefined8 *)(lVar18 + 0x18);
      *(undefined8 *)(pcVar1 + 0x40) = *(undefined8 *)(lVar18 + 0x20);
      pcVar1[0x48] = -1;
      pcVar1[0x49] = -1;
      pcVar1[0x4a] = -1;
      pcVar1[0x4b] = -1;
      if (*pcVar1 == '\x01') {
        FUN_1447a97f4(&local_70,puVar20);
        if (0 < local_6c) {
          lVar18 = 0;
          uVar19 = 0;
          iVar3 = local_6c;
          uVar5 = DAT_14c948000;
          do {
            bVar21 = local_70 != 0;
            bVar22 = local_70 != uVar5;
            piVar15 = (int *)&DAT_14c948618;
            piVar17 = &DAT_14c948620;
            if (bVar22 && bVar21) {
              puVar16 = local_68;
              if (0 < local_4c) {
                puVar16 = local_58;
              }
              if (1 < iVar3) {
                puVar16 = local_58;
              }
              piVar17 = (int *)(puVar16 + lVar18 + 8);
              piVar15 = (int *)(puVar16 + lVar18);
            }
            if ((*piVar15 == DAT_14cb7beb0) && (*piVar17 == DAT_14cb7beb8)) {
LAB_140e23991:
              FUN_1402b5374(&local_70,uVar19 & 0xffffffff,0);
              iVar3 = local_6c;
              uVar5 = DAT_14c948000;
            }
            else {
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar16 = local_68;
                if (0 < local_4c) {
                  puVar16 = local_58;
                }
                if (1 < iVar3) {
                  puVar16 = local_58;
                }
                piVar15 = (int *)(puVar16 + lVar18 + 8);
                piVar17 = (int *)(puVar16 + lVar18);
              }
              if ((*piVar17 == DAT_14cb7bec8) && (*piVar15 == DAT_14cb7bed0)) goto LAB_140e23991;
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar16 = local_68;
                if (0 < local_4c) {
                  puVar16 = local_58;
                }
                if (1 < iVar3) {
                  puVar16 = local_58;
                }
                piVar15 = (int *)(puVar16 + lVar18 + 8);
                piVar17 = (int *)(puVar16 + lVar18);
              }
              if ((*piVar17 == DAT_14cb7bee0) && (*piVar15 == DAT_14cb7bee8)) goto LAB_140e23991;
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar16 = local_68;
                if (0 < local_4c) {
                  puVar16 = local_58;
                }
                if (1 < iVar3) {
                  puVar16 = local_58;
                }
                piVar15 = (int *)(puVar16 + lVar18 + 8);
                piVar17 = (int *)(puVar16 + lVar18);
              }
              if ((*piVar17 == DAT_14cb7bef8) && (*piVar15 == DAT_14cb7bf00)) goto LAB_140e23991;
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar16 = local_68;
                if (0 < local_4c) {
                  puVar16 = local_58;
                }
                if (1 < iVar3) {
                  puVar16 = local_58;
                }
                piVar15 = (int *)(puVar16 + lVar18 + 8);
                piVar17 = (int *)(puVar16 + lVar18);
              }
              if ((*piVar17 == DAT_14cb7bf10) && (*piVar15 == DAT_14cb7bf18)) goto LAB_140e23991;
            }
            uVar19 = uVar19 + 1;
            lVar18 = lVar18 + 0xc;
          } while ((longlong)uVar19 < (longlong)iVar3);
        }
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        local_70 = *puVar20;
      }
      _Src = (void *)(lVar12 + lVar6 * 0x50);
      iVar3 = 1;
      if (*(int *)(param_1 + 0x698) - *(int *)(param_1 + 0x6c4) == 1) {
        uVar5 = 1;
      }
      else {
        iVar4 = FUN_140e23c90(local_b8,local_70,_Src);
        if (iVar4 != -1) {
          lVar18 = *local_b8;
          if (*(longlong *)(lVar18 + 0x28 + (longlong)iVar4 * 0x50) != 0) {
            FUN_1400020a8();
          }
          memmove((void *)(lVar18 + (longlong)iVar4 * 0x50),_Src,0x48);
          FUN_1489b62ce(local_b8,local_b0);
          goto LAB_140e23a86;
        }
        uVar5 = *(int *)(param_1 + 0x698) - *(int *)(param_1 + 0x6c4);
        if (3 < uVar5) {
          uVar19 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar3 = 1 << ((byte)lVar18 & 0x1f);
        }
      }
      if (((int)uVar5 < 1) || (iVar3 <= *(int *)(param_1 + 0x6d8))) {
        local_70 = *(int *)(param_1 + 0x6d8) - 1U & local_70;
        *(uint *)((longlong)_Src + 0x4c) = local_70;
        lVar18 = *(longlong *)(param_1 + 0x6d0);
        if (*(longlong *)(param_1 + 0x6d0) == 0) {
          lVar18 = param_1 + 0x6c8;
        }
        *(undefined4 *)((longlong)_Src + 0x48) =
             *(undefined4 *)
              (lVar18 + ((longlong)*(int *)(param_1 + 0x6d8) - 1U & (longlong)(int)local_70) * 4);
        lVar18 = *(longlong *)(param_1 + 0x6d0);
        if (*(longlong *)(param_1 + 0x6d0) == 0) {
          lVar18 = param_1 + 0x6c8;
        }
        *(int *)(lVar18 + ((longlong)*(int *)(param_1 + 0x6d8) - 1U & (longlong)(int)local_70) * 4)
             = (int)local_b0;
      }
      else {
        *(int *)(param_1 + 0x6d8) = iVar3;
        FUN_140e23d00(local_b8);
      }
    }
  }
LAB_140e23a86:
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_140e23a94:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e23c90 FUN_140e23c90 body=112 status=ok
// SIG undefined FUN_140e23c90(void)

int FUN_140e23c90(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_14493b798(lVar3 + (longlong)iVar4 * 0x50,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 140e23d00 FUN_140e23d00 body=1164 status=ok
// SIG undefined FUN_140e23d00(void)

void FUN_140e23d00(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  longlong **pplVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_94;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 != 0) {
    plVar3 = param_1 + 7;
    FUN_144a1cbf0(plVar3,0,uVar10,4);
    if (0 < (int)uVar10) {
      uVar2 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar3;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
             0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar10 != uVar2);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] == 0) {
      uVar17 = 1;
      local_98 = 0xffffffff;
      local_60._4_4_ = 0;
      uVar16 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      uVar16 = local_70 & 0xffffffff;
      uVar17 = local_70 >> 0x20;
      local_98 = (uint)local_60;
    }
    local_80 = local_68;
    if (local_60._4_4_ < (int)local_68[3]) {
      iVar9 = local_60._4_4_;
      iVar15 = local_58;
      local_88 = plVar3;
      do {
        local_78 = *param_1 + (longlong)iVar9 * 0x50;
        local_94 = iVar15;
        local_90 = uVar16;
        if (*(char *)(*param_1 + (longlong)iVar9 * 0x50) == '\x01') {
          FUN_1447a97f4(&local_70,local_78 + 0x10);
          if (0 < local_70._4_4_) {
            lVar14 = 0;
            uVar16 = 0;
            iVar15 = local_70._4_4_;
            iVar4 = DAT_14c948000;
            do {
              bVar18 = (int)local_70 != 0;
              bVar19 = (int)local_70 != iVar4;
              piVar11 = &DAT_14c948620;
              piVar12 = (int *)&DAT_14c948618;
              if (bVar19 && bVar18) {
                pplVar13 = &local_68;
                if (0 < local_4c) {
                  pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                if (1 < iVar15) {
                  pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                piVar11 = (int *)((longlong)pplVar13 + lVar14 + 8);
                piVar12 = (int *)((longlong)pplVar13 + lVar14);
              }
              if ((*piVar12 == DAT_14cb7beb0) && (*piVar11 == DAT_14cb7beb8)) {
LAB_140e23fe9:
                FUN_1402b5374(&local_70,uVar16 & 0xffffffff,0);
                iVar15 = local_70._4_4_;
                iVar4 = DAT_14c948000;
              }
              else {
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar15) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar14 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar14);
                }
                if ((*piVar12 == DAT_14cb7bec8) && (*piVar11 == DAT_14cb7bed0)) goto LAB_140e23fe9;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar15) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar14 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar14);
                }
                if ((*piVar12 == DAT_14cb7bee0) && (*piVar11 == DAT_14cb7bee8)) goto LAB_140e23fe9;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar15) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar14 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar14);
                }
                if ((*piVar12 == DAT_14cb7bef8) && (*piVar11 == DAT_14cb7bf00)) goto LAB_140e23fe9;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar15) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar14 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar14);
                }
                if ((*piVar12 == DAT_14cb7bf10) && (*piVar11 == DAT_14cb7bf18)) goto LAB_140e23fe9;
              }
              uVar16 = uVar16 + 1;
              lVar14 = lVar14 + 0xc;
            } while ((longlong)uVar16 < (longlong)iVar15);
          }
          iVar15 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar15 = *(int *)(local_78 + 0x10);
        }
        uVar16 = (longlong)iVar15 & (longlong)(int)param_1[9] - 1U;
        iVar15 = (int)uVar16;
        *(int *)(local_78 + 0x4c) = iVar15;
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = local_88;
        }
        *(undefined4 *)(local_78 + 0x48) =
             *(undefined4 *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = local_88;
        }
        *(int *)((longlong)plVar3 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9
        ;
        uVar10 = local_98 & ~(uint)uVar17;
        plVar3 = (longlong *)local_80[2];
        if ((longlong *)local_80[2] == (longlong *)0x0) {
          plVar3 = local_80;
        }
        iVar4 = (int)local_80[3];
        iVar9 = (int)local_90;
        lVar14 = (longlong)iVar9;
        uVar2 = *(uint *)((longlong)plVar3 + lVar14 * 4) & uVar10;
        uVar16 = local_90;
        iVar15 = local_94;
        if (uVar2 == 0) {
          iVar5 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar5 = iVar4 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar6 = iVar5;
          if (iVar5 < iVar9) {
            iVar6 = iVar9;
          }
          if (iVar5 <= iVar9) break;
          lVar8 = 0;
          while( true ) {
            iVar15 = iVar15 + 0x20;
            uVar2 = *(uint *)((longlong)plVar3 + lVar8 * 4 + lVar14 * 4 + 4);
            if (uVar2 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar6 - lVar14 == lVar8) goto LAB_140e2414d;
          }
          local_98 = 0xffffffff;
          uVar16 = (ulonglong)(iVar9 + (int)lVar8 + 1);
          uVar10 = local_98;
        }
        local_98 = uVar10;
        uVar17 = (ulonglong)(-uVar2 & uVar2);
        uVar1 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar9 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar4);
    }
  }
LAB_140e2414d:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2418e FUN_140e2418e body=974 status=ok
// SIG undefined FUN_140e2418e(void)

void FUN_140e2418e(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  code *local_b8;
  code *local_b0;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  uint local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = param_1 + 0x68;
  local_a0 = param_2;
  local_80 = param_4;
  if (param_3 == 0) {
    local_70._0_4_ = 0;
    iVar6 = 0;
    uVar2 = (uint)local_70;
  }
  else {
    uVar2 = *(uint *)(param_3 + 0xc);
    local_70 = (code *)(ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_70;
      if (bVar11) {
        iVar6 = iVar7;
      }
    }
  }
  local_70._0_4_ = uVar2;
  local_70 = (code *)CONCAT44(iVar6,(uint)local_70);
  lVar8 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    lVar8 = lVar1;
  }
  local_98 = param_3;
  local_68 = param_4;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0xf0) << 4;
    iVar6 = 1;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar8 + 8) == local_68) &&
         (cVar3 = FUN_14038330a(lVar8,&local_70), cVar3 != '\0')) {
        if (iVar6 != 0) {
          iVar7 = *(int *)(param_1 + 0xf0);
          iVar6 = iVar7 - iVar6;
          if (iVar6 != 0) {
            iVar10 = 1;
            if (iVar6 < 1) {
              iVar10 = iVar6;
            }
            lVar8 = *(longlong *)(param_1 + 0xe8);
            if (*(longlong *)(param_1 + 0xe8) == 0) {
              lVar8 = lVar1;
            }
            memmove((void *)((lVar5 >> 0x20) * 0x10 + lVar8),
                    (void *)((longlong)(iVar7 - iVar10) * 0x10 + lVar8),(longlong)iVar10 << 4);
            iVar7 = *(int *)(param_1 + 0xf0);
          }
          lVar8 = local_a0;
          *(int *)(param_1 + 0xf0) = iVar7 + -1;
          FUN_140e2455e(lVar1);
          lVar1 = *(longlong *)(param_1 + 0x48);
          local_78 = *(undefined8 *)(lVar1 + 0x38);
          FUN_1446dcdd4(&local_70);
          if (DAT_14cb77d08 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = FUN_144837462(DAT_14cb77d08,&local_70);
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if ((lVar8 != 0) && (lVar9 != 0)) {
            if (DAT_14cb56270 == 0) {
              local_70 = FUN_1449e2820;
              local_b0 = FUN_14081d0ea;
              local_b8 = FUN_1427b09ee;
              local_c8 = &LAB_148630fef;
              local_d0 = FUN_1464b6a91;
              local_d8 = L"Engine";
              local_e0 = 0;
              local_e8 = 0x10004001;
              local_f0 = 8;
              local_f8 = (longlong **)CONCAT44(local_f8._4_4_,0x28);
              local_c0 = &local_70;
              FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee)
              ;
            }
            plVar4 = (longlong *)FUN_144718840(lVar8,DAT_14cb56270);
            if (plVar4 != (longlong *)0x0) {
              lVar8 = (**(code **)(*plVar4 + 0x20))(plVar4);
              lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
              if ((lVar8 != 0) && (lVar5 != 0)) {
                local_90 = &local_80;
                if (param_4 == 0) {
                  local_90 = (longlong *)0x0;
                }
                local_f8 = &local_90;
                local_88 = (uint)(param_4 != 0);
                local_f0 = CONCAT31(local_f0._1_3_,*(undefined1 *)(lVar1 + 0x58));
                FUN_140e24602(lVar8 + 0x270,lVar9,local_98,*(undefined8 *)(param_1 + 0xf8));
              }
            }
          }
        }
        break;
      }
      lVar8 = lVar8 + 0x10;
      lVar5 = lVar5 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e2455e FUN_140e2455e body=164 status=ok
// SIG undefined FUN_140e2455e(void)

void FUN_140e2455e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar4 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0x8c);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  else {
    iVar3 = iVar2 - uVar1;
    if (((longlong)iVar3 & 0xffffffffffffc00U) == 0) {
      if (iVar3 < 0x41 || iVar2 * 2 <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar4 = FUN_144a3809e(uVar4 << 4,0);
      uVar4 = uVar4 >> 4;
      iVar2 = *(int *)(param_1 + 0x8c);
    }
  }
  if ((int)uVar4 == iVar2) {
    return;
  }
  *(int *)(param_1 + 0x8c) = (int)uVar4;
  FUN_14866c5c8(param_1,*(undefined4 *)(param_1 + 0x88),uVar4,0x10);
  return;
}



// FUNCTION 140e24602 FUN_140e24602 body=2714 status=ok
// SIG undefined FUN_140e24602(void)

ulonglong FUN_140e24602(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                       undefined8 *param_5,char param_6)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  code *pcVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  int *piVar18;
  longlong lVar19;
  uint *puVar20;
  uint *puVar21;
  ulonglong uVar22;
  code *pcVar23;
  longlong lVar24;
  int iVar25;
  void *_Dst;
  bool bVar26;
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
  uint *local_88;
  longlong local_80;
  longlong *local_78;
  uint *local_70;
  longlong *local_68;
  longlong local_60;
  code *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = param_2;
  if ((param_3 != (longlong *)0x0) ||
     (param_3 = (longlong *)FUN_140717ab6(*param_1), param_3 != (longlong *)0x0)) {
    puVar21 = (uint *)(param_1 + 3);
    iVar8 = *(int *)(param_1 + 6);
    if (iVar8 == 0) {
      uVar22 = 1;
      uVar13 = 0;
      iVar25 = 0;
      iVar16 = 0;
    }
    else {
      puVar9 = (uint *)param_1[5];
      if ((uint *)param_1[5] == (uint *)0x0) {
        puVar9 = puVar21;
      }
      uVar12 = *puVar9;
      if (uVar12 == 0) {
        iVar16 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar16 = iVar8 + -1;
        }
        uVar13 = 0;
        uVar22 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar22 = uVar13;
        }
        iVar25 = 0;
        do {
          if (uVar22 == uVar13) goto LAB_140e247d5;
          iVar25 = iVar25 + 0x20;
          uVar12 = puVar9[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar13 = 0;
        iVar25 = 0;
      }
      uVar22 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar22 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar16 = (iVar25 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      if (iVar8 <= iVar16) {
        iVar16 = iVar8;
      }
    }
    if (iVar16 < iVar8) {
      local_88 = (uint *)(param_1 + 1);
      uVar12 = 0xffffffff;
      local_80 = param_4;
      local_70 = puVar21;
      local_68 = param_3;
      while( true ) {
        lVar15 = (longlong)iVar16 * 0x80;
        lVar24 = *(longlong *)local_88 + lVar15;
        plVar2 = (longlong *)FUN_1402179b4(lVar24);
        if ((plVar2 == local_78) && (*(longlong *)(lVar24 + 0x18) == local_80)) break;
        uVar12 = uVar12 & ~(uint)uVar22;
        puVar9 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar9 = local_70;
        }
        iVar8 = *(int *)(param_1 + 6);
        iVar16 = (int)uVar13;
        puVar20 = (uint *)(longlong)iVar16;
        uVar4 = puVar9[(longlong)puVar20] & uVar12;
        puVar21 = puVar20;
        if (uVar4 == 0) {
          iVar5 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar5 = iVar8 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar6 = iVar5;
          if (iVar5 < iVar16) {
            iVar6 = iVar16;
          }
          if (iVar5 <= iVar16) goto LAB_140e247d5;
          lVar24 = 0;
          while( true ) {
            iVar25 = iVar25 + 0x20;
            uVar4 = puVar9[(longlong)puVar20 + lVar24 + 1];
            if (uVar4 != 0) break;
            lVar24 = lVar24 + 1;
            puVar21 = (uint *)0x0;
            if ((longlong)iVar6 - (longlong)puVar20 == lVar24) goto LAB_140e247d8;
          }
          uVar13 = (ulonglong)(iVar16 + (int)lVar24 + 1);
          uVar12 = 0xffffffff;
        }
        uVar22 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar22 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar16 = (iVar25 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar16) goto LAB_140e247d5;
      }
      if ((*(byte *)(local_78 + 3) & 4) != 0) {
        *(int *)((longlong)param_1 + 0x5c) = *(int *)((longlong)param_1 + 0x5c) + -1;
      }
      iVar8 = *(int *)(param_1 + 0xb);
      piVar18 = (int *)(lVar24 + 0x20);
      *piVar18 = *piVar18 + -1;
      local_80 = lVar24;
      if (*piVar18 != 0) goto LAB_140e24a49;
      uVar12 = *(uint *)(lVar24 + 0x60);
      uVar10 = 0;
      if (uVar12 != 0) {
        iVar25 = *(int *)(param_1 + 0xf);
        *(uint *)(param_1 + 0xf) = uVar12 + iVar25;
        if ((uint)(*(int *)((longlong)param_1 + 0x7c) - iVar25) < uVar12) {
          FUN_14110ea14(param_1 + 0xe,iVar25);
        }
        lVar24 = local_80;
        FUN_14575a447((longlong)iVar25 * 0x10 + param_1[0xe],*(undefined8 *)(local_80 + 0x58),uVar12
                     );
        uVar10 = *(undefined4 *)(lVar24 + 0x60);
      }
      FUN_14095cb81(*(undefined8 *)(lVar24 + 0x58),uVar10);
      *(undefined4 *)(lVar24 + 0x60) = 0;
      if (*(int *)(lVar24 + 100) != 0) {
        FUN_140cf94b0(lVar24 + 0x58,0);
      }
      lVar11 = param_1[1];
      puVar17 = param_1 + 8;
      if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
        puVar17 = (undefined8 *)param_1[9];
      }
      lVar19 = (longlong)*(int *)(lVar11 + 0x7c + lVar15);
      iVar25 = *(int *)((longlong)puVar17 + lVar19 * 4);
      if (iVar25 == iVar16) {
        piVar18 = (int *)((longlong)puVar17 + lVar19 * 4);
      }
      else {
        do {
          piVar18 = (int *)(lVar11 + (longlong)iVar25 * 0x80 + 0x78);
          iVar25 = *piVar18;
        } while (iVar25 != iVar16);
      }
      *piVar18 = *(int *)(lVar11 + lVar15 + 0x78);
      lVar11 = *(longlong *)local_88 + lVar15;
      if (*(longlong *)(*(longlong *)local_88 + 0x68 + lVar15) != 0) {
        FUN_1400020a8();
      }
      FUN_14095cb81(*(undefined8 *)(lVar11 + 0x58),*(undefined4 *)(lVar11 + 0x60));
      if (*(longlong *)(lVar11 + 0x58) != 0) {
        FUN_1400020a8();
      }
      lVar15 = DAT_14c9a3d60;
      if (*(int *)(lVar11 + 0x28) != 0) {
        if (DAT_14c9a3d68 != DAT_14c9a3d94) {
          iVar25 = *(int *)(lVar11 + 0x28) + -1;
          lVar19 = (longlong)iVar25 * 0x88;
          lVar24 = DAT_14c9a3d60 + lVar19;
          FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar19),
                        *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar19));
          if (*(longlong *)(lVar15 + 0x70 + lVar19) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar24 + 0x60) != 0) {
            FUN_1400020a8();
          }
          FUN_14059507c(&DAT_14c9a3d60,iVar25,1);
        }
        *(undefined4 *)(lVar11 + 0x28) = 0;
        lVar24 = local_80;
      }
      FUN_143d0db7a(local_88,iVar16);
      if (iVar16 == iVar8) {
        *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
        iVar8 = *(int *)(param_1 + 6);
        if (iVar8 == 0) {
          uVar13 = 1;
          uVar22 = 0;
          iVar25 = 0;
          iVar5 = 0;
        }
        else {
          puVar9 = (uint *)param_1[5];
          if ((uint *)param_1[5] == (uint *)0x0) {
            puVar9 = local_70;
          }
          uVar12 = *puVar9;
          if (uVar12 == 0) {
            iVar25 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar25 = iVar8 + -1;
            }
            uVar22 = 0;
            uVar13 = (ulonglong)(uint)(iVar25 >> 5);
            if (iVar25 >> 5 < 1) {
              uVar13 = uVar22;
            }
            iVar5 = 0;
            do {
              if (uVar13 == uVar22) goto LAB_140e24a49;
              iVar5 = iVar5 + 0x20;
              uVar12 = puVar9[uVar22 + 1];
              uVar22 = uVar22 + 1;
            } while (uVar12 == 0);
          }
          else {
            uVar22 = 0;
            iVar5 = 0;
          }
          uVar13 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar13 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar25 = (iVar5 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar25) {
            iVar25 = iVar8;
          }
        }
        if (iVar25 < iVar8) {
          uVar12 = 0xffffffff;
          while (lVar15 = FUN_1402179b4((longlong)iVar25 * 0x80 + *(longlong *)local_88),
                (*(byte *)(lVar15 + 0x18) & 1) == 0) {
            uVar12 = uVar12 & ~(uint)uVar13;
            puVar9 = (uint *)param_1[5];
            if ((uint *)param_1[5] == (uint *)0x0) {
              puVar9 = local_70;
            }
            iVar8 = *(int *)(param_1 + 6);
            iVar25 = (int)uVar22;
            lVar15 = (longlong)iVar25;
            uVar4 = puVar9[lVar15] & uVar12;
            if (uVar4 == 0) {
              iVar6 = iVar8 + 0x1e;
              if (-1 < iVar8 + -1) {
                iVar6 = iVar8 + -1;
              }
              iVar6 = iVar6 >> 5;
              iVar7 = iVar6;
              if (iVar6 < iVar25) {
                iVar7 = iVar25;
              }
              if (iVar6 <= iVar25) goto LAB_140e24a49;
              lVar11 = 0;
              while( true ) {
                iVar5 = iVar5 + 0x20;
                uVar4 = puVar9[lVar15 + lVar11 + 1];
                if (uVar4 != 0) break;
                lVar11 = lVar11 + 1;
                if (iVar7 - lVar15 == lVar11) goto LAB_140e24a49;
              }
              uVar22 = (ulonglong)(iVar25 + (int)lVar11 + 1);
              uVar12 = 0xffffffff;
            }
            uVar13 = (ulonglong)(-uVar4 & uVar4);
            uVar1 = uVar13 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar25 = (iVar5 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar8 <= iVar25) goto LAB_140e24a49;
          }
          *(int *)(param_1 + 0xb) = iVar25;
        }
      }
LAB_140e24a49:
      plVar2 = local_68;
      puVar21 = (uint *)CONCAT71((int7)((ulonglong)puVar21 >> 8),1);
      if ((longlong)*(int *)(param_1 + 0xd) != 0) {
        lVar15 = 0;
        while (*(longlong **)(param_1[0xc] + lVar15) != local_68) {
          lVar15 = lVar15 + 0x68;
          if ((longlong)*(int *)(param_1 + 0xd) * 0x68 - lVar15 == 0) goto LAB_140e247d8;
        }
        uVar12 = (int)(lVar15 >> 3) * -0x3b13b13b;
        if (uVar12 != 0xffffffff) {
          piVar18 = (int *)(param_1[0xc] + 0x60 + (longlong)(int)uVar12 * 0x68);
          *piVar18 = *piVar18 + -1;
          _Dst = (void *)((longlong)(int)uVar12 * 0x68 + param_1[0xc]);
          if (*piVar18 == 0) {
            *(undefined4 *)((longlong)_Dst + 0x58) = 0;
            if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
              FUN_1400020a8();
            }
            FUN_14095c9fc((longlong)_Dst + 0x10);
            iVar8 = *(int *)(param_1 + 0xd);
            if (~uVar12 + iVar8 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 0x68),(longlong)(int)(~uVar12 + iVar8) * 0x68);
              iVar8 = *(int *)(param_1 + 0xd);
            }
            *(int *)(param_1 + 0xd) = iVar8 + -1;
            FUN_14187d3e6(param_1 + 0xc);
          }
          else {
            if ((*(int *)((longlong)_Dst + 8) == iVar16) &&
               (*(undefined4 *)((longlong)_Dst + 8) = 0xffffffff, *(int *)(lVar24 + 0x70) != 0)) {
              FUN_148822093(lVar24 + 0x68,local_68);
              puVar21 = (uint *)CONCAT71((int7)((ulonglong)puVar21 >> 8),1);
            }
            if ((*(int *)((longlong)_Dst + 0x18) == *(int *)((longlong)_Dst + 0x44)) ||
               (*(int *)(param_5 + 1) < 1)) goto LAB_140e247d8;
            if (DAT_14cb63950 == 0) {
              local_a0 = &local_58;
              local_58 = FUN_144a7958c;
              local_90 = FUN_14081d0ea;
              local_98 = &LAB_1464ec72a;
              local_a8 = &LAB_1486f5f75;
              local_b0 = &LAB_140945686;
              local_b8 = L"Engine";
              local_c0 = 0;
              local_c8 = 0x10000004;
              local_d0 = 0x10;
              local_d8 = 0x19d0;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                            FUN_1464fe8ee);
              puVar21 = (uint *)CONCAT71((int7)((ulonglong)puVar21 >> 8),1);
            }
            if ((*(int *)(plVar2[2] + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) !=
                DAT_14cb63950 + 0x30)) goto LAB_140e247d8;
            lVar24 = (**(code **)(*plVar2 + 0xb98))(plVar2);
            if (lVar24 != 0) {
              local_58 = (code *)0x0;
              uStack_50 = 0;
              if ((longlong)*(int *)(param_5 + 1) != 0) {
                local_78 = (longlong *)((longlong)_Dst + 0x10);
                puVar9 = (uint *)*param_5;
                puVar21 = puVar9 + (longlong)*(int *)(param_5 + 1) * 2;
                local_70 = (uint *)(local_80 + 0x68);
                local_88 = puVar21;
                do {
                  lVar15 = *(longlong *)puVar9;
                  local_60 = lVar15;
                  if (param_6 == '\0') {
                    if (*(int *)((longlong)_Dst + 0x18) != *(int *)((longlong)_Dst + 0x44)) {
                      uVar12 = (uint)((ulonglong)lVar15 >> 0x10);
                      uVar4 = (uint)lVar15 & 0xffff;
                      lVar11 = *(longlong *)((longlong)_Dst + 0x50);
                      if (*(longlong *)((longlong)_Dst + 0x50) == 0) {
                        lVar11 = (longlong)_Dst + 0x48;
                      }
                      iVar8 = *(int *)(lVar11 + (ulonglong)
                                                (*(int *)((longlong)_Dst + 0x58) - 1U &
                                                (int)((ulonglong)lVar15 >> 0x20) +
                                                ((uint)lVar15 << 0x10 | uVar4) +
                                                (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar4 >> 4)) *
                                                4);
                      if (iVar8 != -1) {
                        do {
                          plVar2 = (longlong *)(*local_78 + (longlong)iVar8 * 0x14);
                          if (*plVar2 == lVar15) {
                            if (((plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) &&
                                ((int)plVar2[1] == iVar16)) &&
                               (FUN_1459406c4(local_78,lVar15), puVar21 = local_88,
                               *(int *)(local_80 + 0x70) != 0)) {
                              FUN_148822198(local_70,local_68,&local_60);
                              puVar21 = local_88;
                            }
                            break;
                          }
                          iVar8 = *(int *)((longlong)plVar2 + 0xc);
                        } while (iVar8 != -1);
                      }
                    }
                  }
                  else {
                    bVar26 = (longlong)uStack_50 < 0;
                    uStack_50 = uStack_50 & 0xffffffff00000000;
                    if (bVar26) {
                      FUN_14481578e(&local_58,0);
                    }
                    plVar2 = (longlong *)FUN_140418574(local_68);
                    if (plVar2 != (longlong *)0x0) {
                      uVar3 = (**(code **)(*plVar2 + 0x308))(plVar2);
                      local_d8 = CONCAT31(local_d8._1_3_,1);
                      FUN_1404181c0(lVar24,&local_58,lVar15,uVar3);
                    }
                    puVar21 = local_88;
                    if ((longlong)(int)uStack_50 != 0) {
                      pcVar23 = local_58 + (longlong)(int)uStack_50 * 4;
                      pcVar14 = local_58;
                      do {
                        iVar8 = *(int *)pcVar14;
                        if (((-1 < (longlong)iVar8) && (iVar8 < *(int *)(lVar24 + 0x48))) &&
                           ((lVar15 = *(longlong *)
                                       (*(longlong *)(lVar24 + 0x40) + (longlong)iVar8 * 8),
                            lVar15 != 0 &&
                            (*(int *)((longlong)_Dst + 0x18) != *(int *)((longlong)_Dst + 0x44)))))
                        {
                          lVar11 = *(longlong *)(lVar15 + 0x28);
                          uVar12 = (uint)((ulonglong)lVar11 >> 0x10);
                          uVar4 = (uint)lVar11 & 0xffff;
                          lVar19 = *(longlong *)((longlong)_Dst + 0x50);
                          if (*(longlong *)((longlong)_Dst + 0x50) == 0) {
                            lVar19 = (longlong)_Dst + 0x48;
                          }
                          iVar8 = *(int *)(lVar19 + (ulonglong)
                                                    (*(int *)((longlong)_Dst + 0x58) - 1U &
                                                    (int)((ulonglong)lVar11 >> 0x20) +
                                                    ((uint)lVar11 << 0x10 | uVar4) +
                                                    (uVar12 << 0x13 | uVar12 & 0xffff) +
                                                    (uVar4 >> 4)) * 4);
                          if (iVar8 != -1) {
                            do {
                              plVar2 = (longlong *)(*local_78 + (longlong)iVar8 * 0x14);
                              if (*plVar2 == lVar11) {
                                if (((plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) &&
                                    ((int)plVar2[1] == iVar16)) &&
                                   (FUN_1459406c4(local_78), puVar21 = local_88,
                                   *(int *)(local_80 + 0x70) != 0)) {
                                  FUN_148822198(local_70,local_68,lVar15 + 0x28);
                                  puVar21 = local_88;
                                }
                                break;
                              }
                              iVar8 = *(int *)((longlong)plVar2 + 0xc);
                            } while (iVar8 != -1);
                          }
                        }
                        pcVar14 = pcVar14 + 4;
                      } while (pcVar14 != pcVar23);
                    }
                  }
                  puVar9 = puVar9 + 2;
                } while (puVar9 != puVar21);
                if (local_58 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
          }
          puVar21 = (uint *)CONCAT71((int7)((ulonglong)puVar21 >> 8),1);
        }
      }
      goto LAB_140e247d8;
    }
  }
LAB_140e247d5:
  puVar21 = (uint *)0x0;
LAB_140e247d8:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return (ulonglong)puVar21 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2509e FUN_140e2509e body=916 status=ok
// SIG undefined FUN_140e2509e(void)

void FUN_140e2509e(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Src;
  void *pvVar5;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  uint local_1e0;
  undefined4 *local_1d8;
  undefined *local_1d0;
  undefined2 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  code **local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  undefined1 local_198 [184];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FUN_140e259ca(*(longlong *)(param_1 + 0x3c0),*(undefined4 *)(param_1 + 0x3e4),1);
    FUN_14045627c(*(undefined8 *)(param_1 + 0x3c0),0,1);
    FUN_1449e3cec(*(undefined8 *)(param_1 + 0x3c0),1,1);
    FUN_14127091c(*(undefined8 *)(param_1 + 0x3c0),1);
    (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x730))(*(longlong **)(param_1 + 0x3c0),2);
    lVar4 = *(longlong *)(param_1 + 0x3c0);
    FUN_1457b5890(&local_48);
    FUN_1457b56a0(lVar4 + 0x599,param_1,local_48);
    lVar4 = *(longlong *)(param_1 + 0x3c0);
    FUN_1457b57ca(&local_50);
    FUN_1457b572a(lVar4 + 0x59a,param_1,local_50);
    FUN_140b506a4(*(undefined8 *)(param_1 + 0x3c0));
  }
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_74 = *(undefined4 *)(param_1 + 0x3e4);
  local_78 = 2;
  lVar4 = *(longlong *)(param_1 + 0x1c8);
  if (lVar4 == 0) {
    local_88 = DAT_14c8464f0;
    local_98 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_98 = *(undefined8 *)(lVar4 + 0x260);
    uStack_90 = *(undefined8 *)(lVar4 + 0x268);
    local_88 = *(undefined8 *)(lVar4 + 0x270);
  }
  uVar3 = FUN_1447210f0(param_1);
  local_1c8 = (undefined2 *)&DAT_14cad0f10;
  local_1d0 = &DAT_14cad0f68;
  local_1d8 = &local_78;
  local_1e8 = &DAT_14c8463d0;
  local_1e0 = 1;
  cVar2 = FUN_14038e76e(uVar3,&local_68,&local_98,&local_98);
  if (cVar2 != '\0') {
    if ((longlong)(int)uStack_60 != 0) {
      pvVar5 = (void *)((longlong)(int)uStack_60 * 0x100 + (longlong)local_68);
      _Src = local_68;
      do {
        memcpy(local_198,_Src,0xb8);
        local_e0 = *(undefined8 *)((longlong)_Src + 0xb8);
        local_d8 = *(undefined8 *)((longlong)_Src + 0xc0);
        uStack_d0 = *(undefined8 *)((longlong)_Src + 200);
        local_c8 = *(undefined4 *)((longlong)_Src + 0xd0);
        local_c4 = *(undefined1 *)((longlong)_Src + 0xd4);
        local_a0 = *(undefined8 *)((longlong)_Src + 0xf8);
        local_c0 = *(undefined4 *)((longlong)_Src + 0xd8);
        uStack_bc = *(undefined4 *)((longlong)_Src + 0xdc);
        uStack_b8 = *(undefined4 *)((longlong)_Src + 0xe0);
        uStack_b4 = *(undefined4 *)((longlong)_Src + 0xe4);
        local_b0 = *(undefined4 *)((longlong)_Src + 0xe8);
        uStack_ac = *(undefined4 *)((longlong)_Src + 0xec);
        uStack_a8 = *(undefined4 *)((longlong)_Src + 0xf0);
        uStack_a4 = *(undefined4 *)((longlong)_Src + 0xf4);
        lVar4 = FUN_14485cccc(&local_e0);
        if (lVar4 != 0) {
          if (DAT_14cba8288 == 0) {
            local_1b0 = &local_40;
            local_40 = FUN_141864c34;
            local_1a0 = FUN_14081d0ea;
            local_1a8 = &LAB_1464cee30;
            local_1b8 = &LAB_148bfac22;
            local_1c0 = &LAB_140f21842;
            local_1c8 = &DAT_149e063b2;
            local_1d0 = (undefined *)0x0;
            local_1d8 = (undefined4 *)CONCAT44(local_1d8._4_4_,0x10000004);
            local_1e0 = 0x10;
            local_1e8 = (undefined8 *)CONCAT44(local_1e8._4_4_,0x9cd0);
            FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
          }
          iVar1 = *(int *)(DAT_14cba8288 + 0x38);
          if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
              == DAT_14cba8288 + 0x30)) {
            local_1e0 = local_1e0 & 0xffffff00;
            FUN_140e25434(param_1,(longlong)iVar1,lVar4);
          }
        }
        _Src = (void *)((longlong)_Src + 0x100);
      } while (_Src != pvVar5);
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((local_38 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e25434 FUN_140e25434 body=1031 status=ok
// SIG undefined FUN_140e25434(void)

void FUN_140e25434(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_3 != 0) && (*(longlong *)(param_1 + 0x3b0) != 0)) {
    if (DAT_14cba8288 == 0) {
      local_60 = local_48;
      local_48[0] = FUN_141864c34;
      local_50 = FUN_14081d0ea;
      local_58 = (code *)&LAB_1464cee30;
      local_68 = &LAB_148bfac22;
      local_70 = (code *)&LAB_140f21842;
      local_78 = L"Game";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      if ((longlong)*(int *)(param_1 + 0x418) != 0) {
        lVar8 = 0;
        do {
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x410) + 4 + lVar8);
          if ((iVar3 == 0) ||
             (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x410) + lVar8), (int)uVar1 < 0)) {
LAB_140e25638:
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            if ((int)uVar1 < DAT_14c9647dc) {
              plVar7 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar3)) ||
                 ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_140e25638;
              lVar6 = *plVar7;
            }
          }
          if (lVar6 == param_3) goto LAB_140e2560f;
          lVar8 = lVar8 + 0x18;
        } while ((longlong)*(int *)(param_1 + 0x418) * 0x18 != lVar8);
      }
      if (*(char *)(*(longlong *)(param_1 + 0x3b0) + 0x108) != '\x01') {
        plVar7 = *(longlong **)(param_1 + 0x168);
        if (plVar7 == (longlong *)0x0) goto LAB_140e2560f;
        if (DAT_14cb223d8 == 0) {
          local_60 = local_48;
          local_48[0] = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_1427b09ee;
          local_68 = &LAB_147f29feb;
          local_70 = FUN_1464384fe;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10004001;
          local_90 = 8;
          local_98 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb223d8);
        if (plVar7 == (longlong *)0x0) goto LAB_140e2560f;
        if (DAT_14cb223d8 == 0) {
          local_60 = local_48;
          local_48[0] = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_1427b09ee;
          local_68 = &LAB_147f29feb;
          local_70 = FUN_1464384fe;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10004001;
          local_90 = 8;
          local_98 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar4 = (longlong *)FUN_144718840(plVar7,DAT_14cb223d8);
        if ((plVar7 == plVar4) || (plVar4 == (longlong *)0x0)) goto LAB_140e2560f;
        lVar8 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (lVar8 == 0) goto LAB_140e2560f;
        if (*(longlong **)(lVar8 + 0x18) == (longlong *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(**(longlong **)(lVar8 + 0x18) + 0x180))();
        }
        FUN_140154c96(local_48,param_3);
        iVar3 = FUN_1448618b0(lVar8 + 0x20,local_48,uVar5);
        if (iVar3 != 2) goto LAB_140e2560f;
      }
      cVar2 = FUN_140e2583c(param_1,param_3);
      if (cVar2 == '\0') {
        FUN_140e268de(param_1,param_3,0);
        FUN_140e260e0(param_3,param_1);
      }
    }
  }
LAB_140e2560f:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2583c FUN_140e2583c body=398 status=ok
// SIG undefined FUN_140e2583c(void)

undefined8 FUN_140e2583c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    if ((longlong)*(int *)(param_1 + 0x408) != 0) {
      lVar4 = (longlong)*(int *)(param_1 + 0x408) * 8;
      lVar1 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x400) + lVar1) == param_2) {
LAB_140e259c2:
          return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        }
        lVar1 = lVar1 + 8;
      } while (lVar4 != lVar1);
    }
    plVar5 = (longlong *)(param_2 + 0x10b0);
    lVar1 = (**(code **)(*(longlong *)(param_2 + 0x10b0) + 0x28))(plVar5);
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3b0) + 0x5c0);
    if (lVar4 != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x3b0) + 0x5b8);
      plVar3 = plVar2 + lVar4;
      lVar4 = (longlong)*(int *)(lVar1 + 0x90);
      do {
        if (*(int *)(lVar1 + 0x80) != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar1 + 0x78) + lVar6) == *plVar2) goto LAB_140e259c2;
            lVar6 = lVar6 + 8;
          } while ((longlong)*(int *)(lVar1 + 0x80) << 3 != lVar6);
        }
        if (*(int *)(lVar1 + 0x90) != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar1 + 0x88) + lVar6) == *plVar2) goto LAB_140e259c2;
            lVar6 = lVar6 + 8;
          } while (lVar4 << 3 != lVar6);
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar3);
    }
    lVar1 = (**(code **)(*plVar5 + 0x28))(plVar5);
    lVar4 = FUN_1405831b2();
    if ((longlong)*(int *)(lVar4 + 0x1188) != 0) {
      plVar3 = *(longlong **)(lVar4 + 0x1180);
      plVar5 = plVar3 + *(int *)(lVar4 + 0x1188);
      do {
        if (*(int *)(lVar1 + 0x80) != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x78);
          lVar6 = 0;
          do {
            if (*(longlong *)(lVar4 + lVar6) == *plVar3) goto LAB_140e259c2;
            lVar6 = lVar6 + 8;
          } while ((longlong)*(int *)(lVar1 + 0x80) << 3 != lVar6);
        }
        if (*(int *)(lVar1 + 0x90) != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x88);
          lVar6 = 0;
          do {
            if (*(longlong *)(lVar4 + lVar6) == *plVar3) goto LAB_140e259c2;
            lVar6 = lVar6 + 8;
          } while ((longlong)*(int *)(lVar1 + 0x90) << 3 != lVar6);
        }
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar5) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 140e259ca FUN_140e259ca body=267 status=ok
// SIG undefined FUN_140e259ca(void)

void FUN_140e259ca(longlong *param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 200) = param_2;
  (**(code **)(*param_1 + 0x540))();
  (**(code **)(*param_1 + 0x9f8))(param_1);
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) != 0) goto LAB_140e25a54;
  bVar1 = *(byte *)((longlong)param_1 + 0x9d);
  if ((bVar1 & 1) != 0) {
    if (param_1[0x16] != 0) goto LAB_140e25a54;
    lVar3 = FUN_1448abda6(param_1);
    if (lVar3 != 0) goto LAB_140e25a54;
    bVar1 = *(byte *)((longlong)param_1 + 0x9d);
  }
  *(byte *)((longlong)param_1 + 0x9d) = bVar1 | 1;
  FUN_1401057d4(param_1);
  FUN_14010586c(&DAT_14cad0140,param_1);
LAB_140e25a54:
  if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
    local_38 = param_1[0x50];
    lStack_30 = param_1[0x51];
    local_28 = param_1[0x52];
    FUN_140043360(param_1 + 0x82,&local_38,1);
    if (param_3 != '\0') {
      iVar2 = (**(code **)(*param_1 + 0x570))(param_1);
      if ((iVar2 != 0) && (param_1[0x15] != 0)) {
        FUN_144907e2c(param_1,0,1,0);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e25ad6 FUN_140e25ad6 body=216 status=ok
// SIG undefined FUN_140e25ad6(void)

void FUN_140e25ad6(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  
  cVar5 = FUN_140e25bae();
  if (cVar5 != '\0') {
    uVar7 = -(uint)(*(float *)(param_1 + 0x640) < 0.0001);
    fVar3 = (float)(~uVar7 & (uint)*(float *)(param_1 + 0x640) | uVar7 & 0x3dcccccd);
    fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x620) + 0x38) + 0x48);
    if ((fVar1 != fVar3) || (NAN(fVar1) || NAN(fVar3))) {
      *(undefined8 *)(param_1 + 0x620) = 0;
      bVar6 = 0;
    }
    else {
      bVar6 = *(byte *)(param_1 + 0x62c) & 0x10;
    }
    *(byte *)(param_1 + 0x62c) = *(byte *)(param_1 + 0x62c) & 0xef | bVar6;
  }
  FUN_140e25c18(param_1);
  if ((*(byte *)(param_1 + 0x62c) & 0x10) == 0) {
    fVar1 = *(float *)(param_1 + 0x640);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x620) + 0x38);
    uVar7 = -(uint)(fVar1 < 0.0001);
    *(undefined8 *)(lVar2 + 0x40) = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8;
    *(undefined8 *)(lVar2 + 0x30) = DAT_14c8464e0;
    *(undefined8 *)(lVar2 + 0x38) = uVar4;
    *(uint *)(lVar2 + 0x48) = ~uVar7 & (uint)fVar1 | uVar7 & 0x3dcccccd;
  }
  return;
}



// FUNCTION 140e25bae FUN_140e25bae body=106 status=ok
// SIG undefined FUN_140e25bae(void)

ulonglong FUN_140e25bae(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  undefined7 uVar4;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x62c) & 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (*(longlong *)(param_1 + 0x620) == 0) {
      plVar1 = (longlong *)FUN_144938c96(param_1);
      lVar2 = (**(code **)(*plVar1 + 0x7a0))(plVar1);
      uVar3 = CONCAT71(uVar4,lVar2 != 0);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x620) = lVar2;
    }
    else {
      uVar3 = CONCAT71(uVar4,1);
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140e25c18 FUN_140e25c18 body=951 status=ok
// SIG undefined FUN_140e25c18(void)

void FUN_140e25c18(undefined **param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 *local_90;
  undefined ***local_88;
  undefined **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined4 local_60;
  undefined ***local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_1[0xc4] != (undefined *)0x0) && ((*(uint *)(param_1[0xc4] + 8) >> 0x1e & 1) == 0))
  goto LAB_140e25c50;
  local_a0 = 0;
  local_a8 = 0;
  puVar4 = (undefined *)FUN_140c9d4a9(param_1,0,0x40,0);
  if ((puVar4 != (undefined *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(puVar4);
  }
  param_1[0xc4] = puVar4;
  if (*(int *)((longlong)param_1 + 0xc) <= DAT_14c9647bc) {
    uVar8 = *(uint *)(puVar4 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    FUN_1447f71cc(lVar9,0x40000000);
    puVar4 = param_1[0xc4];
  }
  lVar9 = 0;
  FUN_1406555d4(puVar4,param_1,0);
  puVar4 = param_1[0xc4];
  uVar8 = *(uint *)(puVar4 + 0xc);
  if ((int)uVar8 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
  }
  if ((*(uint *)(lVar9 + 8) >> 0x1a & 1) != 0) {
    lVar9 = FUN_14065579a(&DAT_14c9640e8);
    puVar4 = param_1[0xc4];
    if (lVar9 != 0) {
      uVar8 = *(uint *)(puVar4 + 0xc);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      FUN_14482b126(lVar9,0x4000000);
      puVar4 = param_1[0xc4];
    }
  }
  puVar4[0x31] = 2;
  puVar4 = param_1[0xc4];
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_68 = 0x3ff;
  local_60 = 6;
  local_80 = &PTR_FUN_14a418310;
  local_50 = (undefined4)DAT_14c8464e0;
  uStack_4c = DAT_14c8464e0._4_4_;
  uStack_48 = (undefined4)DAT_14c8464e8;
  uStack_44 = DAT_14c8464e8._4_4_;
  local_40 = DAT_14c8464f0;
  local_38 = 0x3f800000;
  iVar2 = *(int *)(puVar4 + 0x40);
  *(uint *)(puVar4 + 0x40) = iVar2 + 1U;
  local_58 = &local_80;
  if (*(uint *)(puVar4 + 0x44) < iVar2 + 1U) {
    FUN_140e25fd0(puVar4 + 0x38,iVar2);
  }
  lVar9 = *(longlong *)(puVar4 + 0x38);
  lVar7 = (longlong)iVar2 * 0x50;
  *(undefined ***)(lVar9 + lVar7) = &PTR_FUN_14a1dee50;
  *(undefined4 *)(lVar9 + 8 + lVar7) = local_78;
  *(ulonglong *)(lVar9 + 0xc + lVar7) = CONCAT44(uStack_70,uStack_74);
  *(undefined4 *)(lVar9 + 0x14 + lVar7) = uStack_6c;
  *(byte *)(lVar9 + 0x18 + lVar7) = *(byte *)(lVar9 + 0x18 + lVar7) & 0xfe | (byte)local_68 & 1;
  *(undefined1 *)(lVar9 + 0x19 + lVar7) = local_68._1_1_;
  *(undefined4 *)(lVar9 + 0x20 + lVar7) = 6;
  *(longlong *)(lVar9 + 0x28 + lVar7) = lVar9 + lVar7;
  *(undefined ***)(lVar9 + lVar7) = &PTR_FUN_14a418310;
  puVar1 = (undefined4 *)(lVar9 + 0x30 + lVar7);
  *puVar1 = local_50;
  puVar1[1] = uStack_4c;
  puVar1[2] = uStack_48;
  puVar1[3] = uStack_44;
  puVar1 = (undefined4 *)(lVar9 + 0x3c + lVar7);
  *puVar1 = uStack_44;
  puVar1[1] = (undefined4)local_40;
  puVar1[2] = local_40._4_4_;
  puVar1[3] = local_38;
  param_1[0xc4][0xb9] = param_1[0xc4][0xb9] | 8;
  *(byte *)((longlong)param_1 + 0x62c) = *(byte *)((longlong)param_1 + 0x62c) & 0xef;
  puVar4 = param_1[0xc4];
  if ((puVar4 != (undefined *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(puVar4);
LAB_140e25e39:
    uVar8 = *(uint *)(puVar4 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar11 = uVar3 == 0;
      if (bVar11) {
        *(uint *)(lVar9 + 0x10) = uVar10;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar3 = uVar10;
      }
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    if (puVar4 != (undefined *)0x0) goto LAB_140e25e39;
    uVar8 = 0;
    uVar6 = 0;
  }
  param_1[0x82] = (undefined *)((ulonglong)uVar8 | uVar6 << 0x20);
  if (param_1[0xa9] != (undefined *)0x0) {
    local_90 = &LAB_1459ba7ea;
    local_88 = &local_80;
    local_80 = param_1;
    uVar5 = FUN_1457b57b4(param_1 + 0x82);
    FUN_140e2683c(uVar5,&local_90);
  }
LAB_140e25c50:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e25fd0 FUN_140e25fd0 body=272 status=ok
// SIG undefined FUN_140e25fd0(void)

void FUN_140e25fd0(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140e260e0 FUN_140e260e0 body=750 status=ok
// SIG undefined FUN_140e260e0(void)

void FUN_140e260e0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) goto LAB_140e26284;
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    if (param_1[0x76] == 0) {
      pcVar2 = *(code **)(*param_1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
                (uVar1 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar1)) &&
               ((int)uVar1 < DAT_14c9647dc)) &&
              ((plVar7 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)((longlong)param_1 + 0x75b4))
               ))) && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
              lVar6 = *plVar7;
            }
            else {
              lVar6 = 0;
            }
            lVar6 = lVar6 + 0x110;
            goto LAB_140e262ba;
          }
        }
        else {
          lVar6 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_140e262ba:
          if (lVar6 != 0) {
            lVar6 = *(longlong *)(lVar6 + 0x20);
            goto LAB_140e262c7;
          }
        }
      }
      else {
        lVar6 = (*pcVar2)(param_1);
LAB_140e262c7:
        if (lVar6 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x3b0);
          goto LAB_140e262d7;
        }
      }
      goto LAB_140e261ac;
    }
  }
  else {
    lVar6 = (*pcVar2)(param_1);
LAB_140e262d7:
    if (lVar6 == 0) {
LAB_140e261ac:
      cVar4 = FUN_140e263d0(param_1,param_2);
      if ((cVar4 == '\0') && (lVar6 = *(longlong *)(param_2 + 0x3b0), lVar6 != 0)) {
        local_38 = *(undefined8 *)(lVar6 + 0x638);
        local_48 = *(undefined4 *)(lVar6 + 0x628);
        uStack_44 = *(undefined4 *)(lVar6 + 0x62c);
        uStack_40 = *(undefined4 *)(lVar6 + 0x630);
        uStack_3c = *(undefined4 *)(lVar6 + 0x634);
        FUN_140e264c4(param_1,1);
      }
    }
  }
  lVar6 = FUN_140cf8aa6(param_1);
  if ((lVar6 != 0) && ((int)param_1[0x1344] == 0)) {
    lVar6 = FUN_140cf8aa6(param_1);
    FUN_1407ae792(lVar6 + 0x3910,1,DAT_14cbc1ef8);
  }
  iStack_4c = 0;
  local_50 = *(uint *)(param_2 + 0xc);
  if ((int)local_50 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((local_50 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
  }
  else {
    lVar6 = 0;
  }
  iVar5 = *(int *)(lVar6 + 0x10);
  if (*(int *)(lVar6 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar8 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar8);
    }
    LOCK();
    iVar5 = *(int *)(lVar6 + 0x10);
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(lVar6 + 0x10) = iVar8;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar10) {
      iVar5 = iVar8;
    }
  }
  lVar6 = param_1[0x1344];
  iStack_4c = iVar5;
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = param_1[0x1343];
    uVar9 = 0;
    do {
      cVar4 = FUN_140cd04d0(lVar3 + uVar9,&local_50);
      if (cVar4 != '\0') {
        if ((int)(~uVar9 >> 3) != 0) goto LAB_140e26284;
        break;
      }
      uVar9 = uVar9 + 8;
    } while ((longlong)(int)lVar6 * 8 != uVar9);
  }
  iVar5 = (int)param_1[0x1344];
  *(uint *)(param_1 + 0x1344) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0x9a24) < iVar5 + 1U) {
    FUN_140e266da(param_1 + 0x1343,iVar5);
  }
  *(ulonglong *)(param_1[0x1343] + (longlong)iVar5 * 8) = CONCAT44(iStack_4c,local_50);
LAB_140e26284:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e263d0 FUN_140e263d0 body=243 status=ok
// SIG undefined FUN_140e263d0(void)

undefined8 FUN_140e263d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x9a20);
  if (((longlong)iVar1 == 0) || (lVar2 = *(longlong *)(param_2 + 0x3b0), lVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x9a18);
    lVar6 = 0;
    do {
      local_38 = *(undefined8 *)(lVar3 + lVar6);
      lVar4 = FUN_14479d2ce(&local_38);
      if ((lVar4 != 0) && (lVar4 = FUN_14479d2ce(&local_38), *(longlong *)(lVar4 + 0x3b0) != 0)) {
        lVar4 = FUN_14479d2ce(&local_38);
        lVar4 = *(longlong *)(lVar4 + 0x3b0);
        if ((*(double *)(lVar4 + 0x628) == *(double *)(lVar2 + 0x628)) &&
           (!NAN(*(double *)(lVar4 + 0x628)) && !NAN(*(double *)(lVar2 + 0x628)))) {
          if ((*(double *)(lVar4 + 0x630) == *(double *)(lVar2 + 0x630)) &&
             (!NAN(*(double *)(lVar4 + 0x630)) && !NAN(*(double *)(lVar2 + 0x630)))) {
            if ((*(double *)(lVar4 + 0x638) == *(double *)(lVar2 + 0x638)) &&
               (!NAN(*(double *)(lVar4 + 0x638)) && !NAN(*(double *)(lVar2 + 0x638)))) {
              uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
              break;
            }
          }
        }
      }
      lVar6 = lVar6 + 8;
      uVar5 = 0;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140e264c4 FUN_140e264c4 body=335 status=ok
// SIG undefined FUN_140e264c4(void)

void FUN_140e264c4(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
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
  lVar1 = *(longlong *)(param_1 + 0x428);
  if (lVar1 != 0) {
    if (DAT_14cb63950 == 0) {
      local_50 = &local_30;
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464ec72a;
      local_58 = &LAB_1486f5f75;
      local_60 = &LAB_140945686;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
      lVar2 = FUN_14025708c(lVar1,DAT_14c9abbf0);
      if (lVar2 != 0) {
        FUN_140e26614(lVar1,param_2,param_3,DAT_14c9abbf8);
        *(byte *)(lVar2 + 0x1c0) = (byte)param_2 ^ 1;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e26614 FUN_140e26614 body=197 status=ok
// SIG undefined FUN_140e26614(void)

void FUN_140e26614(longlong param_1,undefined1 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c9abbe0 == param_4) {
    param_4 = DAT_14c9abbf0;
  }
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  local_30 = local_48;
  local_38 = &LAB_143ce9512;
  local_48[0] = param_2;
  local_40 = param_3;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1400702d4(DAT_14caa8580,&local_50,param_4,0);
  FUN_1408d6bd2(uVar1,local_50,&local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e266da FUN_140e266da body=353 status=ok
// SIG undefined FUN_140e266da(void)

void FUN_140e266da(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e2675f;
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
LAB_140e2675f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140e2683c FUN_140e2683c body=161 status=ok
// SIG undefined FUN_140e2683c(void)

bool FUN_140e2683c(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  char local_40 [8];
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_40[0] = '\0';
    local_30 = 1;
    if (((param_1 == (longlong *)0x0) || (*(longlong *)(lVar1 + 8) == 0)) ||
       (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x260), lVar2 == 0)) {
      local_38 = 0;
    }
    else {
      local_38 = *(undefined8 *)(lVar2 + 0x38);
    }
    FUN_1447e649a(local_40);
    (*(code *)*param_2)(param_2[1],param_1);
    if (local_40[0] == '\x01') {
      FUN_1447e63de(local_40);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e268de FUN_140e268de body=1157 status=ok
// SIG undefined FUN_140e268de(void)

void FUN_140e268de(longlong param_1,longlong *param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((param_2 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x3b0) == 0)) ||
     (lVar8 = param_2[0x85], lVar8 == 0)) goto LAB_140e26b77;
  if (DAT_14cb63950 == 0) {
    local_80 = &local_68;
    local_68 = FUN_144a7958c;
    local_70 = FUN_14081d0ea;
    local_78 = &LAB_1464ec72a;
    local_88 = &LAB_1486f5f75;
    local_90 = &LAB_140945686;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10000004;
    local_b0 = 0x10;
    local_b8 = 0x19d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
  }
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) != DAT_14cb63950 + 0x30)) goto LAB_140e26b77;
  pcVar2 = *(code **)(*param_2 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    lVar7 = param_2[0x76];
    if (lVar7 == 0) {
      pcVar2 = *(code **)(*param_2 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_2[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (*(int *)((longlong)param_2 + 0x75b4) != 0) {
            uVar1 = *(uint *)(param_2 + 0xeb6);
            lVar7 = 0;
            if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140e26a0b;
            plVar6 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((plVar6 != (longlong *)0x0) &&
               (((int)plVar6[2] == *(int *)((longlong)param_2 + 0x75b4) &&
                ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
                lVar7 = *plVar6;
              }
              else {
                lVar7 = 0;
              }
              lVar7 = lVar7 + 0x110;
              goto LAB_140e26bf1;
            }
          }
        }
        else {
          lVar7 = (**(code **)(param_2[0x784] + 0x18))(param_2 + 0x784);
LAB_140e26bf1:
          if (lVar7 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x20);
            goto LAB_140e26bfe;
          }
        }
      }
      else {
        lVar7 = (*pcVar2)(param_2);
LAB_140e26bfe:
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x3b0);
          goto LAB_140e26a0b;
        }
      }
      lVar7 = 0;
    }
  }
  else {
    lVar7 = (*pcVar2)(param_2);
  }
LAB_140e26a0b:
  iVar5 = *(int *)(param_1 + 0x418);
  lVar10 = (longlong)iVar5;
  *(uint *)(param_1 + 0x418) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x41c) < iVar5 + 1U) {
    FUN_1457b5b20((longlong *)(param_1 + 0x410),iVar5);
  }
  lVar3 = *(longlong *)(param_1 + 0x410);
  *(undefined8 *)(lVar3 + lVar10 * 0x18) = 0;
  uVar1 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)(lVar3 + lVar10 * 0x18) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar11 = 0;
  }
  lVar3 = lVar3 + lVar10 * 0x18;
  iVar5 = *(int *)(lVar11 + 0x10);
  if (*(int *)(lVar11 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar9 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar9);
    }
    LOCK();
    iVar5 = *(int *)(lVar11 + 0x10);
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(lVar11 + 0x10) = iVar9;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar5 = iVar9;
    }
  }
  *(int *)(lVar3 + 4) = iVar5;
  *(undefined8 *)(lVar3 + 8) = 0;
  uVar1 = *(uint *)(lVar8 + 0xc);
  *(uint *)(lVar3 + 8) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  iVar5 = *(int *)(lVar10 + 0x10);
  if (*(int *)(lVar10 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar9 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar9);
    }
    LOCK();
    iVar5 = *(int *)(lVar10 + 0x10);
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(lVar10 + 0x10) = iVar9;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar5 = iVar9;
    }
  }
  *(int *)(lVar3 + 0xc) = iVar5;
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(bool *)(lVar3 + 0x14) = lVar7 != 0;
  lVar8 = FUN_14025708c(lVar8,DAT_14c9abbf0);
  if (lVar8 != 0) {
    if ((char)param_2[0xba6] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
    }
    cVar4 = FUN_140c4e528(param_2 + 0xf8f,3);
    if (cVar4 == '\x03') {
      local_68 = (code *)0x0;
      local_60 = (undefined4)DAT_14c8464e0;
      uStack_5c = DAT_14c8464e0._4_4_;
      uStack_58 = (undefined4)DAT_14c8464e8;
      uStack_54 = DAT_14c8464e8._4_4_;
      local_50 = DAT_14c8464f0;
      local_48 = 0;
      FUN_140e26dfa(param_2 + 0xf8f,3,0);
      FUN_144a79b68(&local_68,*(undefined8 *)(param_1 + 0x3b0));
      lVar8 = FUN_1457b5956(lVar8 + 0x368,&local_68);
      *(undefined2 *)(lVar8 + 0x16) = 0x100;
    }
  }
LAB_140e26b77:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e26d80 FUN_140e26d80 body=121 status=ok
// SIG undefined FUN_140e26d80(void)

void FUN_140e26d80(longlong param_1)

{
  if (*(char *)(param_1 + 0x2f) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  if (*(int *)(param_1 + 0x24) != -1) {
    *(undefined8 *)(param_1 + 0x24) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    *(undefined8 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  if (*(char *)(param_1 + 0x15) == '\x01') {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 140e26dfa FUN_140e26dfa body=705 status=ok
// SIG undefined FUN_140e26dfa(void)

void FUN_140e26dfa(longlong param_1,undefined8 param_2,char param_3,undefined4 *param_4)

{
  longlong lVar1;
  double dVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined1 local_120;
  undefined1 local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 local_78 [2];
  undefined8 local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((((*(longlong *)(param_1 + 0x148) != 0) && (*(longlong *)(param_1 + 0x140) != 0)) &&
       (*(longlong *)(param_1 + 0x168) != 0)) &&
      ((*(longlong *)(param_1 + 0x170) != 0 && (*(longlong *)(param_1 + 0x178) != 0)))) &&
     ((*(longlong *)(param_1 + 0x180) != 0 &&
      ((*(char *)(param_1 + 0x199) != '\x01' || (*(longlong *)(param_1 + 0x1c0) == 0)))))) {
    bVar3 = FUN_140c4e610(param_1);
    if (param_3 == '\0') {
      if (bVar3 <= *(byte *)(param_1 + 0x1b8)) {
        bVar3 = 0;
      }
      uVar5 = FUN_140c4e592(param_1,bVar3);
      bVar3 = FUN_140c4e528(param_1,uVar5);
    }
    else {
      lVar1 = param_1 + (ulonglong)bVar3 * 0x28;
      lVar6 = *(longlong *)(lVar1 + 0x40);
      if (*(longlong *)(lVar1 + 0x40) == 0) {
        lVar6 = lVar1 + 0x30;
      }
      if ((longlong)*(int *)(lVar1 + 0x48) != 0) {
        lVar8 = 0;
        do {
          if (*(longlong *)(lVar6 + lVar8) == DAT_14cbcb548) {
            bVar3 = 0;
            break;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)*(int *)(lVar1 + 0x48) * 8 != lVar8);
      }
    }
    uVar7 = FUN_140963a30();
    if (bVar3 != 0) {
      *(byte *)(param_1 + 0x1b9) = bVar3;
      local_128 = local_78;
      local_78[0] = 0;
      local_68 = 0;
      local_118 = 0;
      local_120 = 0;
      cVar4 = FUN_140c4ec74(param_1,uVar7,param_4,0);
      if (cVar4 == '\0') {
        FUN_140c4e81e(param_1);
      }
      else {
        local_108 = *(double *)(param_4 + 2);
        dStack_100 = *(double *)(param_4 + 4);
        local_f8 = *(double *)(param_4 + 6);
        dVar2 = local_f8 * local_f8 + local_108 * local_108 + dStack_100 * dStack_100;
        if ((dVar2 != 1.0) || (NAN(dVar2))) {
          if (dVar2 < 9.99999993922529e-09) {
            local_f8 = DAT_14c8464f0;
            local_108 = DAT_14c8464e0;
            dStack_100 = DAT_14c8464e8;
          }
          else {
            dVar9 = 1.0 / SQRT(dVar2);
            local_f8 = local_f8 * dVar9;
            dStack_100 = dStack_100 * dVar9;
            local_108 = local_108 * dVar9;
          }
        }
        else {
          local_f8 = *(double *)(param_4 + 6);
          local_108 = *(double *)(param_4 + 2);
          dStack_100 = *(double *)(param_4 + 4);
        }
        local_f0 = (float)SQRT(dVar2);
        local_ec = 0;
        local_e8 = *param_4;
        local_e4 = 0;
        local_e0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        lStack_90 = 0;
        local_dc = 0;
        uStack_d4 = 0;
        local_88 = 0x200000000;
        FUN_140c4f358(param_1,&local_108);
        if (lStack_90 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e270bc FUN_140e270bc body=133 status=ok
// SIG undefined FUN_140e270bc(void)

undefined8 * FUN_140e270bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ade9250;
  FUN_140e27187(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140e27141(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140e27141(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e27141 FUN_140e27141 body=70 status=ok
// SIG undefined FUN_140e27141(void)

void FUN_140e27141(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e27187 FUN_140e27187 body=65 status=ok
// SIG undefined FUN_140e27187(void)

void FUN_140e27187(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e271c8 FUN_140e271c8 body=9 status=ok
// SIG undefined FUN_140e271c8(void)

void FUN_140e271c8(longlong param_1)

{
  FUN_140e271d2(param_1 + 0x10);
  return;
}



// FUNCTION 140e271d2 FUN_140e271d2 body=89 status=ok
// SIG undefined FUN_140e271d2(void)

void FUN_140e271d2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_140e7c5aa();
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e27227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140e2722c thunk_FUN_14071fe68 body=5 status=ok
// SIG undefined thunk_FUN_14071fe68(void)

void thunk_FUN_14071fe68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1ad920;
  param_1[5] = &PTR_FUN_14a1adbd0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140e2723a FUN_140e2723a body=327 status=ok
// SIG undefined FUN_140e2723a(void)

undefined8 * FUN_140e2723a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14b014f70;
  param_1[5] = &PTR_FUN_14b0153f0;
  param_1[6] = &PTR_LAB_14b015430;
  param_1[0x22] = &PTR_FUN_14b015480;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = param_1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0xffffffffffffffff;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0xffffffffffffffff;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3e800000;
  return param_1;
}



// FUNCTION 140e27382 FUN_140e27382 body=81 status=ok
// SIG undefined FUN_140e27382(void)

undefined8 * FUN_140e27382(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aed4440;
  FUN_140e273d3(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e273d3 FUN_140e273d3 body=49 status=ok
// SIG undefined FUN_140e273d3(void)

void FUN_140e273d3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e27404 FUN_140e27404 body=25 status=ok
// SIG undefined FUN_140e27404(void)

undefined8 FUN_140e27404(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140e2741e FUN_140e2741e body=2717 status=ok
// SIG undefined FUN_140e2741e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e2741e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_388 [32];
  undefined8 **local_368;
  undefined4 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined2 *local_348;
  undefined1 *local_340;
  undefined1 *local_338;
  undefined8 *local_330;
  undefined1 *local_328;
  code *local_320;
  longlong local_318;
  code *local_310;
  longlong local_308 [2];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  uint local_2e8;
  int iStack_2e4;
  undefined8 local_2e0;
  undefined1 local_2d8 [32];
  undefined1 local_2b8;
  undefined1 local_2b0 [16];
  longlong local_2a0;
  undefined1 local_290 [32];
  byte local_270;
  undefined1 local_268 [32];
  undefined1 local_248;
  undefined1 local_240 [16];
  longlong local_230;
  undefined1 local_220 [32];
  byte local_200;
  undefined1 local_1f8 [32];
  undefined1 local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  undefined1 local_1b0 [32];
  byte local_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 local_170;
  longlong local_160;
  byte local_148;
  undefined1 local_f8 [152];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if ((param_2 != (longlong *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar15 = *(uint *)(param_1 + 8);
    if ((((-1 < (int)uVar15) &&
         ((((int)uVar15 < DAT_14c9647dc &&
           (plVar16 = (longlong *)
                      ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
           plVar16 != (longlong *)0x0)) && ((int)plVar16[2] == *(int *)(param_1 + 0xc))))) &&
        ((((*(uint *)(plVar16 + 1) & 0x10200000) == 0 && (lVar2 = *plVar16, lVar2 != 0)) &&
         (lVar9 = (**(code **)(*param_2 + 0xf8))(param_2), lVar9 != 0)))) &&
       ((lVar10 = (**(code **)(*param_2 + 0x118))(param_2), lVar10 != 0 &&
        (lVar9 = FUN_140b86571(lVar9), lVar9 != 0)))) {
      iStack_2e4 = 0;
      local_2e8 = *(uint *)(lVar9 + 0xc);
      if ((int)local_2e8 < DAT_14c9647dc) {
        lVar20 = (ulonglong)((local_2e8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_2e8 >> 0x10) * 8);
      }
      else {
        lVar20 = 0;
      }
      iVar6 = *(int *)(lVar20 + 0x10);
      if (*(int *)(lVar20 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar17 = DAT_14c964868 + 1;
        bVar24 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar24) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar17);
        }
        LOCK();
        iVar6 = *(int *)(lVar20 + 0x10);
        bVar24 = iVar6 == 0;
        if (bVar24) {
          *(int *)(lVar20 + 0x10) = iVar17;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar24) {
          iVar6 = iVar17;
        }
      }
      iStack_2e4 = iVar6;
      if ((longlong)*(int *)(param_1 + 0x38) != 0) {
        lVar20 = *(longlong *)(param_1 + 0x30);
        lVar19 = (longlong)*(int *)(param_1 + 0x38) * 0x150;
        do {
          cVar5 = FUN_14007c268(lVar20,&local_2e8);
          if (cVar5 != '\0') {
            if (lVar20 != 0) goto LAB_140e2759d;
            break;
          }
          lVar20 = lVar20 + 0x150;
          lVar19 = lVar19 + -0x150;
        } while (lVar19 != 0);
      }
      cVar5 = FUN_140d0050e(lVar9);
      if (cVar5 == '\0') {
        iVar6 = *(int *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar6 + 1U) {
          FUN_1466323fa((longlong *)(param_1 + 0x30),iVar6);
        }
        lVar19 = *(longlong *)(param_1 + 0x30);
        lVar21 = (longlong)iVar6 * 0x150;
        lVar20 = lVar19 + lVar21;
        FUN_145de5584(lVar20,&local_2e8);
        lVar14 = FUN_14479d2ce((uint *)(param_1 + 8));
        *(undefined8 *)(lVar19 + 8 + lVar21) = *(undefined8 *)(lVar14 + 0x6d0);
        FUN_1412e3d1e(&local_188);
        puVar1 = (undefined4 *)(lVar19 + 0x18 + lVar21);
        *puVar1 = (undefined4)local_188;
        puVar1[1] = local_188._4_4_;
        puVar1[2] = uStack_180;
        puVar1[3] = uStack_17c;
        lVar19 = FUN_140fb15e0();
        if (((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) && (lVar9 + 0x520 != 0)) {
          FUN_1406f1bc8(lVar9 + 0x520,&local_188);
          FUN_1411b8130(lVar20 + 0x30,&local_188);
          if (local_160 != 0) {
            FUN_1400020a8();
          }
        }
        if (lVar20 != 0) {
LAB_140e2759d:
          local_318 = lVar10;
          if (*(double *)(lVar20 + 0x10) <= 0.0 && *(double *)(lVar20 + 0x10) != 0.0) {
            local_188 = FUN_145c34e20;
            uStack_180 = 0;
            FUN_1457b5c22(lVar9 + 0x3b8,&local_1d0,param_1,&local_188);
            local_188 = FUN_145e31710;
            uStack_180 = 0;
            FUN_1457b5d10(lVar9 + 0x2d0,&local_1d0,param_1,&local_188);
            local_2f8 = _DAT_14c9a2ffc;
            uStack_2f0 = _DAT_14c9a3004;
            _DAT_14c9a2ffc = *(undefined8 **)(lVar20 + 0x18);
            _DAT_14c9a3004 = *(undefined8 *)(lVar20 + 0x20);
            local_1d8 = 0;
            FUN_14101bd16(local_1f8,&DAT_149dfb77a);
            local_368 = (undefined8 **)local_1f8;
            FUN_140d767d6(&local_1d0,&DAT_14cbcfdb8,3,L"Start");
            cVar5 = FUN_140e27f2c(&local_1d0);
            if (cVar5 == '\0') {
              local_2b8 = 0;
              FUN_14101bd16(local_2d8,&DAT_149dfb77a);
              local_368 = (undefined8 **)local_2d8;
              FUN_140d767d6(local_2b0,&DAT_14cbcfdb8,3,L"Start");
              FUN_140d76846(&local_188,local_2b0);
            }
            else {
              FUN_140b126e4(lVar20 + 0x30,local_308);
              local_248 = 0;
              FUN_14101bd16(local_268,&DAT_149dfb77a);
              local_368 = (undefined8 **)local_268;
              FUN_140d767d6(local_240,&DAT_14cbcfdb8,3,L"Start");
              FUN_1457b5bdc(&local_188,local_240,local_308);
            }
            FUN_14027c224(local_f8,&local_188);
            FUN_14027c198(local_f8);
            FUN_1404eeb8e(&local_188);
            if (cVar5 == '\0') {
              (*(code *)(&PTR_FUN_14a1842f0)[local_270])(local_290);
              lVar10 = local_318;
              if (local_2a0 != 0) {
                FUN_1400020a8();
                lVar10 = local_318;
              }
            }
            else {
              (*(code *)(&PTR_FUN_14a1842f0)[local_200])(local_220);
              lVar10 = local_318;
              if (local_230 != 0) {
                FUN_1400020a8();
              }
              if (local_308[0] != 0) {
                FUN_1400020a8();
              }
            }
            (*(code *)(&PTR_FUN_14a1842f0)[local_190])(local_1b0);
            if (local_1c0 != 0) {
              FUN_1400020a8();
            }
            uVar13 = FUN_140e27f24();
            FUN_1446ddc76(&local_310,"Encounter",1);
            uStack_180 = *(undefined4 *)(lVar20 + 0x18);
            uStack_17c = *(undefined4 *)(lVar20 + 0x1c);
            uStack_178 = *(undefined4 *)(lVar20 + 0x20);
            uStack_174 = *(undefined4 *)(lVar20 + 0x24);
            local_170 = 1;
            local_188 = local_310;
            local_1c8 = &local_2e0;
            local_1d0 = (undefined8 *)&LAB_146554320;
            local_368 = &local_1d0;
            local_2e0 = uVar13;
            uVar8 = FUN_141427b60(uVar13,1,&local_188,0);
            *(undefined4 *)(lVar20 + 0x28) = uVar8;
            _DAT_14c9a2ffc = local_2f8;
            _DAT_14c9a3004 = uStack_2f0;
          }
          *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar2 + 0x6d0);
          if (DAT_14cbadd90 == 0) {
            local_330 = &local_188;
            local_188 = FUN_141030f22;
            local_320 = FUN_14081d0ea;
            local_328 = &LAB_1459f2e4c;
            local_338 = &LAB_148c39de3;
            local_340 = &LAB_1457a9eb2;
            local_348 = &DAT_149e063b2;
            local_350 = 0;
            local_358 = 0x10000004;
            local_360 = 0x10;
            local_368 = (undefined8 **)CONCAT44(local_368._4_4_,0x3de0);
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          uVar15 = 0;
          if (*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            uVar15 = 0;
            if (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30) {
              uVar15 = *(uint *)(lVar10 + 0xc);
              if ((int)uVar15 < DAT_14c9647dc) {
                lVar9 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
              }
              else {
                lVar9 = 0;
              }
              uVar11 = (ulonglong)*(uint *)(lVar9 + 0x10);
              if (*(uint *)(lVar9 + 0x10) == 0) {
                LOCK();
                iVar6 = DAT_14c964868 + 1;
                UNLOCK();
                uVar18 = DAT_14c964868 + 1;
                bVar24 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar6;
                if (bVar24) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar18);
                }
                LOCK();
                uVar7 = *(uint *)(lVar9 + 0x10);
                bVar24 = uVar7 == 0;
                if (bVar24) {
                  *(uint *)(lVar9 + 0x10) = uVar18;
                  uVar7 = 0;
                }
                UNLOCK();
                if (bVar24) {
                  uVar7 = uVar18;
                }
                uVar11 = (ulonglong)uVar7;
              }
            }
          }
          puVar23 = (ulonglong *)(lVar20 + 0x68);
          uVar11 = (ulonglong)uVar15 | uVar11 << 0x20;
          puVar22 = *(ulonglong **)(lVar20 + 200);
          if (*(ulonglong **)(lVar20 + 200) == (ulonglong *)0x0) {
            puVar22 = puVar23;
          }
          local_188 = (code *)uVar11;
          if ((longlong)*(int *)(lVar20 + 0xd0) != 0) {
            lVar9 = (longlong)*(int *)(lVar20 + 0xd0) * 0x18;
            do {
              cVar5 = FUN_140e27ebc(puVar22,&local_188);
              if (cVar5 != '\0') {
                if (puVar22 != (ulonglong *)0x0) goto LAB_140e2773b;
                break;
              }
              puVar22 = puVar22 + 3;
              lVar9 = lVar9 + -0x18;
            } while (lVar9 != 0);
          }
          iVar6 = *(int *)(lVar20 + 0xd0);
          *(uint *)(lVar20 + 0xd0) = iVar6 + 1U;
          if (*(uint *)(lVar20 + 0xd4) < iVar6 + 1U) {
            FUN_148dc3256(puVar23,iVar6);
          }
          if (*(ulonglong **)(lVar20 + 200) != (ulonglong *)0x0) {
            puVar23 = *(ulonglong **)(lVar20 + 200);
          }
          puVar22 = puVar23 + (longlong)iVar6 * 3;
          *puVar22 = uVar11;
          *(undefined4 *)(puVar22 + 1) = 0xbf800000;
          puVar22[2] = 0;
          puVar12 = (undefined8 *)FUN_140e27f24();
          lVar9 = local_318;
          uVar8 = *(undefined4 *)(lVar20 + 0x28);
          FUN_140d8b592(&local_188,local_318);
          local_1c8 = &local_2f8;
          local_368 = &local_1d0;
          local_1d0 = (undefined8 *)&LAB_14662691e;
          local_2f8 = puVar12;
          FUN_140e27f44(puVar12,uVar8,&local_188,lVar9);
LAB_140e2773b:
          *(float *)(puVar22 + 1) = (float)*(double *)(lVar20 + 0x10);
          uVar3 = puVar22[2];
          if (uVar3 != 0) {
            if (*(longlong *)(lVar2 + 0x1f0) == 0) {
              plVar16 = (longlong *)(lVar2 + 0x458);
            }
            else {
              plVar16 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
            }
            lVar9 = *plVar16;
            uVar15 = (uint)uVar3;
            if ((int)(uVar15 & 0xffffff) < *(int *)(lVar9 + 0x10)) {
              lVar10 = lVar9 + 0x18;
              if (*(longlong *)(lVar9 + 0x28) != 0) {
                lVar10 = *(longlong *)(lVar9 + 0x28);
              }
              if ((*(uint *)(lVar10 + (ulonglong)((uVar15 & 0xffffff) >> 5) * 4) >> (uVar15 & 0x1f)
                  & 1) != 0) {
                lVar9 = *(longlong *)(lVar9 + 8);
                lVar10 = (ulonglong)(uVar15 & 0xffffff) * 0x70;
                if (((lVar9 + lVar10 != 0) && (*(ulonglong *)(lVar9 + 0x60 + lVar10) == uVar3)) &&
                   (*(char *)(lVar9 + 1 + lVar10) != '\x04')) {
                  FUN_1405a424c();
                }
              }
            }
            puVar22[2] = 0;
          }
          if (*(longlong *)(lVar2 + 0x1f0) == 0) {
            puVar12 = (undefined8 *)(lVar2 + 0x458);
          }
          else {
            puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
          }
          uVar13 = *puVar12;
          fVar25 = DAT_14c764080;
          if (DAT_14c764080 <= 1.0) {
            fVar25 = 1.0;
          }
          uVar4 = CONCAT44(iStack_2e4,local_2e8);
          local_1d0 = (undefined8 *)0x0;
          local_1c8 = (undefined8 *)((ulonglong)local_1c8 & 0xffffffff00000000);
          FUN_1446efa72(&local_1d0,0,3,0x10);
          local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,3);
          *local_1d0 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 1;
          lVar2 = DAT_14c758608 + 1;
          if (lVar9 == 0) {
            LOCK();
            UNLOCK();
            lVar9 = DAT_14c758608 + 2;
            lVar2 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar2;
          local_1d0[2] = lVar9;
          *local_1d0 = &PTR_FUN_14b996870;
          local_1d0[3] = param_1;
          local_1d0[4] = uVar11;
          local_1d0[5] = uVar4;
          local_188 = (code *)0x0;
          uStack_180 = 0;
          FUN_14487d8d8(&local_188,&local_1d0);
          local_148 = 1;
          local_368 = (undefined8 **)&local_2f8;
          uVar15 = (uint)local_2f8;
          local_2f8 = (undefined8 *)CONCAT44(0xbf800000,uVar15 & 0xffff0000);
          FUN_1406f4044(uVar13,puVar22 + 2,&local_188,fVar25);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_148])(&local_188);
          if ((int)local_1c8 != 0) {
            if (local_1d0 == (undefined8 *)0x0) goto LAB_140e274da;
            (**(code **)*local_1d0)(local_1d0,0);
            FUN_1446efa72(&local_1d0,0,0,0x10);
            local_1c8 = (undefined8 *)((ulonglong)local_1c8 & 0xffffffff00000000);
          }
          if (local_1d0 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
LAB_140e274da:
  if ((local_60 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e27ebc FUN_140e27ebc body=104 status=ok
// SIG undefined FUN_140e27ebc(void)

ulonglong FUN_140e27ebc(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 140e27f24 FUN_140e27f24 body=8 status=ok
// SIG undefined FUN_140e27f24(void)

undefined * FUN_140e27f24(void)

{
  return &DAT_14cb89450;
}



// FUNCTION 140e27f2c FUN_140e27f2c body=23 status=ok
// SIG undefined FUN_140e27f2c(void)

undefined8 FUN_140e27f2c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x3c) != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),(char)param_1[1] <= *(char *)(lVar1 + 0x38));
  }
  return 0;
}



// FUNCTION 140e27f44 FUN_140e27f44 body=958 status=ok
// SIG undefined FUN_140e27f44(void)

void FUN_140e27f44(longlong param_1,int param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_a8 [36];
  int local_84;
  longlong local_80;
  undefined8 *local_78;
  int local_6c;
  longlong local_68;
  undefined8 *local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_60 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar7 = *(int *)(param_1 + 0x50);
  local_84 = param_2;
  local_80 = param_1;
  local_78 = param_3;
  local_68 = param_4;
  if (iVar7 == 0) {
    uVar18 = 1;
    iVar13 = 0;
    uVar16 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x38);
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar4 = iVar7 + -1;
      }
      uVar16 = 0;
      uVar18 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar18 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar18 == uVar16) goto LAB_140e280f4;
        iVar13 = iVar13 + 0x20;
        uVar12 = puVar8[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar12 == 0);
    }
    else {
      iVar13 = 0;
      uVar16 = 0;
    }
    uVar18 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar18 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar4 = (iVar13 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar4) {
      iVar4 = iVar7;
    }
  }
  if (iVar4 != iVar7) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    local_6c = iVar7 + 0x1e;
    if (-1 < iVar7 + -1) {
      local_6c = iVar7 + -1;
    }
    local_6c = local_6c >> 5;
    uVar12 = 0xffffffff;
    local_58 = lVar9;
    do {
      cVar3 = FUN_140aee426(*(undefined8 *)(lVar9 + (longlong)iVar4 * 0x28),local_78);
      if ((cVar3 != '\0') &&
         (*(int *)(*(longlong *)(lVar9 + (longlong)iVar4 * 0x28 + 8) + 0x28) == local_84)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
      }
      uVar12 = uVar12 & ~(uint)uVar18;
      puVar8 = *(uint **)(local_80 + 0x48);
      if (*(uint **)(local_80 + 0x48) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x38);
      }
      iVar4 = (int)uVar16;
      lVar15 = (longlong)iVar4;
      uVar5 = puVar8[lVar15] & uVar12;
      if (uVar5 == 0) {
        iVar6 = local_6c;
        if (local_6c < iVar4) {
          iVar6 = iVar4;
        }
        if (local_6c <= iVar4) break;
        lVar11 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar5 = puVar8[lVar15 + lVar11 + 1];
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar15 == lVar11) goto LAB_140e280f4;
        }
        uVar16 = (ulonglong)(iVar4 + (int)lVar11 + 1);
        uVar12 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar18 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar4 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar7);
  }
LAB_140e280f4:
  if ((longlong)*(int *)(local_80 + 0x20) != 0) {
    plVar17 = *(longlong **)(local_80 + 0x18);
    lVar9 = (longlong)*(int *)(local_80 + 0x20) << 3;
    do {
      lVar15 = *plVar17;
      if (*(int *)(lVar15 + 0x28) == local_84) {
        if (plVar17 != (longlong *)0x0) {
          if ((longlong)*(int *)(local_80 + 0x10) == 0) goto LAB_140e28183;
          plVar14 = *(longlong **)(local_80 + 8);
          lVar9 = (longlong)*(int *)(local_80 + 0x10) << 3;
          goto LAB_140e28145;
        }
        break;
      }
      plVar17 = plVar17 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  goto LAB_140e28266;
  while( true ) {
    plVar14 = plVar14 + 1;
    lVar9 = lVar9 + -8;
    if (lVar9 == 0) break;
LAB_140e28145:
    puVar10 = (undefined8 *)*plVar14;
    cVar3 = FUN_140aee426(puVar10,local_78);
    if (cVar3 != '\0') {
      if (plVar14 != (longlong *)0x0 && puVar10 != (undefined8 *)0x0) goto LAB_140e28232;
      break;
    }
  }
LAB_140e28183:
  puVar10 = (undefined8 *)FUN_14001cc68(0x24,0x10);
  *puVar10 = *local_78;
  bVar2 = *(byte *)(local_78 + 3);
  *(byte *)(puVar10 + 3) = bVar2;
  (*(code *)(&PTR_LAB_14a183130)[bVar2])(puVar10 + 1,local_78 + 1);
  *(undefined4 *)(puVar10 + 4) = 0;
  if (local_68 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x1c) = 0;
    iVar7 = 0;
  }
  else {
    uVar12 = *(uint *)(local_68 + 0xc);
    *(uint *)((longlong)puVar10 + 0x1c) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar19 = iVar7 == 0;
      if (bVar19) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar7 = iVar4;
      }
    }
  }
  plVar14 = (longlong *)(local_80 + 8);
  *(int *)(puVar10 + 4) = iVar7;
  iVar7 = *(int *)(local_80 + 0x10);
  *(uint *)(local_80 + 0x10) = iVar7 + 1U;
  if (*(uint *)(local_80 + 0x14) < iVar7 + 1U) {
    FUN_1462a5cce(plVar14,iVar7);
  }
  *(undefined8 **)(*plVar14 + (longlong)iVar7 * 8) = puVar10;
  lVar15 = *plVar17;
LAB_140e28232:
  lVar9 = local_80;
  local_4c = FUN_142b2ba8a(local_80,puVar10,lVar15);
  (*(code *)*local_60)(local_60[1],(longlong)local_4c * 0x28 + *(longlong *)(lVar9 + 0x28));
LAB_140e28266:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2831e FUN_140e2831e body=40 status=ok
// SIG undefined FUN_140e2831e(void)

undefined8 FUN_140e2831e(undefined8 param_1,int param_2)

{
  FUN_140e28346();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e28346 FUN_140e28346 body=512 status=ok
// SIG undefined FUN_140e28346(void)

void FUN_140e28346(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a414aa0;
  param_1[5] = &PTR_FUN_14a414d40;
  param_1[6] = &PTR_FUN_14a414d80;
  puVar3 = (undefined8 *)param_1[0x47];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x44];
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
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x2f);
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140e28546(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140e285a6(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140e28575(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140dff34e(param_1[10]);
  param_1[6] = &PTR_LAB_14a417d20;
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140e28546 FUN_140e28546 body=47 status=ok
// SIG undefined FUN_140e28546(void)

void FUN_140e28546(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e28575 FUN_140e28575 body=49 status=ok
// SIG undefined FUN_140e28575(void)

void FUN_140e28575(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e285a6 FUN_140e285a6 body=63 status=ok
// SIG undefined FUN_140e285a6(void)

void FUN_140e285a6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e285f4 FUN_140e285f4 body=171 status=ok
// SIG undefined FUN_140e285f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e285f4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b615bd0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
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



// FUNCTION 140e286a0 FUN_140e286a0 body=32 status=ok
// SIG undefined FUN_140e286a0(void)

void FUN_140e286a0(undefined8 param_1,undefined4 param_2)

{
  FUN_140e286c0();
  FUN_1401c3216(param_1,param_2);
  return;
}



// FUNCTION 140e286c0 FUN_140e286c0 body=986 status=ok
// SIG undefined FUN_140e286c0(void)

void FUN_140e286c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  byte bVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_a8 [46];
  byte local_7a;
  byte local_79;
  longlong local_78;
  int local_6c;
  longlong local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_1 + 0x1518) = 0;
  plVar20 = *(longlong **)(param_1 + 0x1520);
  if (plVar20 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1520) = 0;
    LOCK();
    plVar14 = plVar20 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0xb0);
  if ((lVar9 != 0) || (lVar9 = FUN_1448abda6(param_1), lVar9 != 0)) {
    uVar4 = DAT_14cb1c840;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_58,uVar4,lVar9);
    plVar20 = local_50;
    lVar9 = CONCAT44(iStack_54,local_58);
    if ((lVar9 == 0) || (local_50 == (longlong *)0x0)) {
      plVar20 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar14 = local_50 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_50 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    if (plVar20 != (longlong *)0x0) {
      iVar8 = (int)plVar20[1];
      do {
        plVar14 = (longlong *)0x0;
        if (iVar8 == 0) break;
        LOCK();
        iVar12 = (int)plVar20[1];
        bVar21 = iVar8 == iVar12;
        if (bVar21) {
          *(int *)(plVar20 + 1) = iVar8 + 1;
          iVar12 = iVar8;
        }
        iVar8 = iVar12;
        UNLOCK();
        plVar14 = plVar20;
      } while (!bVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
      if (plVar14 != (longlong *)0x0) {
        if (lVar9 != 0) {
          iStack_54 = 0;
          if (param_1 == 0) {
            local_58 = 0;
            iVar8 = 0;
          }
          else {
            local_58 = *(uint *)(param_1 + 0xc);
            if ((int)local_58 < DAT_14c9647dc) {
              lVar19 = (ulonglong)((local_58 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
            }
            else {
              lVar19 = 0;
            }
            iVar8 = *(int *)(lVar19 + 0x10);
            if (*(int *)(lVar19 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              LOCK();
              iVar8 = *(int *)(lVar19 + 0x10);
              bVar21 = iVar8 == 0;
              if (bVar21) {
                *(int *)(lVar19 + 0x10) = iVar12;
                iVar8 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar8 = iVar12;
              }
            }
          }
          iVar12 = *(int *)(lVar9 + 0x138);
          lVar19 = (longlong)iVar12;
          iStack_54 = iVar8;
          if (lVar19 != 0) {
            lVar13 = *(longlong *)(lVar9 + 0x130);
            bVar5 = FUN_140e28b1a(lVar13,&local_58);
            lVar11 = lVar13 + 8;
            iVar18 = 0;
            local_60 = lVar13;
            iVar8 = 0;
            do {
              lVar13 = (longlong)iVar8;
              iVar2 = iVar8 + 1;
              if (iVar8 + 1 < iVar12) {
                iVar2 = iVar12;
              }
              lVar10 = lVar11 + lVar13 * 8;
              lVar17 = lVar13;
              iVar15 = iVar8;
              bVar6 = bVar5 ^ 1;
              bVar16 = bVar5;
              do {
                lVar17 = lVar17 + 1;
                iVar3 = iVar2;
                bVar5 = bVar6;
                if (lVar19 <= lVar17) break;
                local_7a = bVar16;
                local_79 = bVar6;
                local_78 = lVar11;
                local_6c = iVar15;
                local_68 = lVar10;
                bVar7 = FUN_140e28b1a(lVar10,&local_58);
                iVar15 = local_6c + 1;
                lVar10 = local_68 + 8;
                lVar11 = local_78;
                iVar3 = iVar15;
                bVar6 = local_79;
                bVar5 = local_79;
                bVar16 = local_7a;
              } while ((local_7a & 1) == bVar7);
              if ((bVar16 & 1) == 0) {
                if (iVar18 != iVar8) {
                  local_78 = lVar11;
                  memmove((void *)(local_60 + (longlong)iVar18 * 8),(void *)(local_60 + lVar13 * 8),
                          (longlong)(iVar3 - iVar8) << 3);
                  lVar11 = local_78;
                }
                iVar18 = iVar18 + (iVar3 - iVar8);
              }
              iVar8 = iVar3;
            } while (lVar17 < lVar19);
            *(int *)(lVar9 + 0x138) = iVar18;
          }
          FUN_140e28a9c(lVar9 + 0x140,&local_58);
        }
        LOCK();
        plVar20 = plVar14 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e28a9c FUN_140e28a9c body=126 status=ok
// SIG undefined FUN_140e28a9c(void)

void FUN_140e28a9c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_140e28b1a(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(~uVar5 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457b5ee4(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 140e28b1a FUN_140e28b1a body=167 status=ok
// SIG undefined FUN_140e28b1a(void)

bool FUN_140e28b1a(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  if ((uVar1 != uVar3) || (bVar5 = true, uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      bVar5 = true;
      if ((param_2[1] != 0) &&
         (((-1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
           (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 140e28bc8 FUN_140e28bc8 body=57 status=ok
// SIG undefined FUN_140e28bc8(void)

void FUN_140e28bc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21670 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21670 = FUN_140002ddd(FUN_146433c21,uVar1,L"GbxBrainAspect_MaxRuns");
  }
  return;
}



// FUNCTION 140e28c02 FUN_140e28c02 body=609 status=ok
// SIG undefined FUN_140e28c02(void)

/* WARNING: Removing unreachable block (ram,0x000140e28e3b) */

void FUN_140e28c02(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  void *local_b8;
  longlong local_b0 [2];
  void *local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  uint local_78;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x30);
    lVar6 = (longlong)*(int *)(param_1 + 0x38) << 5;
    do {
      lVar5 = FUN_140e28e64(puVar7);
      if (lVar5 != 0) {
        local_80 = (void *)*puVar7;
        FUN_1400021e4(&local_80,local_70);
        FUN_1400021e4(puVar7 + 3,&local_80);
        lVar5 = *param_2;
        FUN_1400b22c2(local_b0,&DAT_149eb5f2c);
        FUN_1407ec8fc(&local_a0,local_70,local_b0);
        uVar3 = uStack_98;
        iVar2 = (int)uStack_98;
        if ((int)uStack_98 < 2) {
          local_90 = (void *)0x0;
          lVar9 = (longlong)(int)local_78;
          local_b8 = local_80;
          local_88 = CONCAT44(local_88._4_4_,local_78);
          if (lVar9 == 0) {
            local_88 = (ulonglong)local_78;
          }
          else {
            FUN_1446dd670(&local_90,local_78,0);
            memcpy(local_90,local_b8,lVar9 * 2);
          }
        }
        else {
          iVar8 = local_78 - 1;
          if (local_78 == 0) {
            iVar8 = 0;
          }
          local_90 = local_a0;
          iVar4 = uStack_98._4_4_;
          local_a0 = (void *)0x0;
          uStack_98 = 0;
          local_88 = uVar3;
          iVar1 = iVar8 + iVar2;
          if (iVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((longlong)iVar8);
          }
          if (iVar4 < iVar1) {
            FUN_1446f8c06(&local_90);
          }
          FUN_1400020e8(&local_90,local_80,iVar8);
        }
        iVar2 = *(int *)(lVar5 + 0x10);
        *(uint *)(lVar5 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar5 + 0x14) < iVar2 + 1U) {
          FUN_1447a1bd6((longlong *)(lVar5 + 8),iVar2);
        }
        lVar5 = *(longlong *)(lVar5 + 8);
        lVar9 = (longlong)iVar2 * 0x10;
        *(undefined8 *)(lVar5 + lVar9) = 0;
        *(void **)(lVar5 + lVar9) = local_90;
        *(undefined4 *)(lVar5 + 8 + lVar9) = (undefined4)local_88;
        *(undefined4 *)(lVar5 + 0xc + lVar9) = local_88._4_4_;
        local_88 = 0;
        local_90 = (void *)0x0;
        if (local_a0 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_b0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_70[0] != 0) {
          FUN_1400020a8();
        }
      }
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e28e64 FUN_140e28e64 body=46 status=ok
// SIG undefined FUN_140e28e64(void)

undefined8 FUN_140e28e64(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1401cd3fa();
  if (lVar1 != 0) {
    uVar2 = FUN_140e28e92(lVar1,param_1 + 0x18);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140e28e92 FUN_140e28e92 body=406 status=ok
// SIG undefined FUN_140e28e92(void)

longlong FUN_140e28e92(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar3 = *param_2;
  uVar11 = 0;
  if (lVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (iVar2 == 0) {
      uVar7 = 1;
      iVar4 = 0;
      iVar12 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x88);
      if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x78);
      }
      uVar8 = *puVar9;
      if (uVar8 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar7 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar7 = 0;
        }
        uVar11 = 0;
        iVar12 = 0;
        do {
          if (uVar7 == uVar11) {
            return 0;
          }
          iVar12 = iVar12 + 0x20;
          uVar8 = puVar9[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar11 = 0;
        iVar12 = 0;
      }
      uVar7 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar7 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 != iVar2) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      iVar10 = iVar10 >> 5;
      uVar8 = 0xffffffff;
      do {
        lVar13 = *(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 0x90;
        if ((*(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 0x90) == lVar3) ||
           (*(longlong *)(lVar13 + 8) == lVar3)) {
          return lVar13 + 8;
        }
        uVar8 = uVar8 & ~(uint)uVar7;
        puVar9 = *(uint **)(param_1 + 0x88);
        if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
          puVar9 = (uint *)(param_1 + 0x78);
        }
        iVar4 = (int)uVar11;
        lVar13 = (longlong)iVar4;
        uVar5 = puVar9[lVar13] & uVar8;
        if (uVar5 == 0) {
          iVar6 = iVar10;
          if (iVar10 < iVar4) {
            iVar6 = iVar4;
          }
          if (iVar10 <= iVar4) {
            return 0;
          }
          lVar14 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar5 = puVar9[lVar13 + lVar14 + 1];
            if (uVar5 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar6 - lVar13 == lVar14) {
              return 0;
            }
          }
          uVar11 = (ulonglong)(iVar4 + (int)lVar14 + 1);
          uVar8 = 0xffffffff;
        }
        uVar7 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar7 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar2);
    }
  }
  return 0;
}



// FUNCTION 140e29036 FUN_140e29036 body=40 status=ok
// SIG undefined FUN_140e29036(void)

undefined8 FUN_140e29036(undefined8 param_1,int param_2)

{
  FUN_140e2905e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e2905e FUN_140e2905e body=583 status=ok
// SIG undefined FUN_140e2905e(void)

void FUN_140e2905e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14b6d3010;
  lVar4 = 0x2b0;
  do {
    *(undefined ***)((longlong)param_1 + lVar4 + -0x48) = &PTR_FUN_14b6d2dc0;
    plVar3 = *(longlong **)((longlong)param_1 + lVar4);
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
    plVar3 = *(longlong **)((longlong)param_1 + lVar4 + -0x10);
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
    plVar3 = *(longlong **)((longlong)param_1 + lVar4 + -0x28);
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
    lVar4 = lVar4 + -0x50;
  } while (lVar4 != 0x1c0);
  FUN_140e292a5(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x33];
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
  plVar3 = (longlong *)param_1[0x31];
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
  plVar3 = (longlong *)param_1[0x2f];
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
  *param_1 = &PTR_FUN_14a42e670;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140e292a5 FUN_140e292a5 body=79 status=ok
// SIG undefined FUN_140e292a5(void)

void FUN_140e292a5(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*puVar4;
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
      puVar4 = puVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e29302 FUN_140e29302 body=31 status=ok
// SIG undefined FUN_140e29302(void)

undefined8 FUN_140e29302(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e29330 FUN_140e29330 body=31 status=ok
// SIG undefined FUN_140e29330(void)

undefined8 FUN_140e29330(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e29360 FUN_140e29360 body=44 status=ok
// SIG undefined FUN_140e29360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e29360(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8c064 = _DAT_14cb8c064 + -1;
  *param_1 = DAT_14cb8c058;
  DAT_14cb8c058 = param_1;
  return;
}



// FUNCTION 140e2938c FUN_140e2938c body=25 status=ok
// SIG undefined FUN_140e2938c(void)

undefined8 * FUN_140e2938c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return param_1;
}



// FUNCTION 140e293a6 FUN_140e293a6 body=208 status=ok
// SIG undefined FUN_140e293a6(void)

longlong FUN_140e293a6(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))();
  lVar2 = param_1[0x11a];
  if (lVar2 == 0) {
    lVar2 = FUN_14001cc68(0x598,0x10);
    local_30 = param_1 + -0x354;
    local_28 = param_1;
    if ((local_30 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
      if (local_30 == (longlong *)0x0) {
        local_28 = (longlong *)0x0;
      }
    }
    else {
      FUN_1456cec3c(local_30);
    }
    FUN_140e29478(lVar2);
    puVar1 = (undefined8 *)param_1[0x11a];
    param_1[0x11a] = lVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      lVar2 = param_1[0x11a];
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e29478 FUN_140e29478 body=218 status=ok
// SIG undefined FUN_140e29478(void)

undefined8 * FUN_140e29478(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = &PTR_FUN_14b3f85a8;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(*param_2 + 0xc);
    *(uint *)(param_1 + 1) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  lVar4 = 0;
  if (*param_2 != 0) {
    lVar4 = param_2[1];
  }
  param_1[2] = lVar4;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_140e29552(param_1 + 4);
  *(undefined1 *)(param_1 + 0xb2) = 0;
  return param_1;
}



// FUNCTION 140e29552 FUN_140e29552 body=708 status=ok
// SIG undefined FUN_140e29552(void)

longlong FUN_140e29552(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = 0;
  do {
    *(undefined1 *)(param_1 + lVar7) = 0;
    *(undefined8 *)(param_1 + 4 + lVar7) = 0x44bb800043fa0000;
    *(undefined1 *)(param_1 + 0xc + lVar7) = 0;
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x20 + lVar7) = 0x44bb800043fa0000;
    puVar1 = (undefined8 *)(param_1 + 0x28 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x38 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x48 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x58 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::AABBTree",1);
    *(undefined8 *)(param_1 + 0x70 + lVar7) = 0;
    *(undefined ***)(param_1 + 0x68 + lVar7) = &PTR_LAB_14a1e3c98;
    *(undefined4 *)(param_1 + 0x78 + lVar7) = 0xffffffff;
    puVar1 = (undefined8 *)(param_1 + 0x80 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x90 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
    *(undefined8 *)(param_1 + 0xa8 + lVar7) = 0;
    *(undefined ***)(param_1 + 0xa0 + lVar7) = &PTR_LAB_14a1e3c98;
    *(undefined4 *)(param_1 + 0xb0 + lVar7) = 0xffffffff;
    puVar1 = (undefined8 *)(param_1 + 0xb8 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 200 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(param_1 + 0x108 + lVar7) = 0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar4 = DAT_14c8464e0._4_4_;
    puVar2 = (undefined4 *)(param_1 + 0x110 + lVar7);
    *puVar2 = (undefined4)DAT_14c8464e0;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    *(undefined8 *)(param_1 + 0x120 + lVar7) = DAT_14c8464f0;
    *(undefined8 *)(param_1 + 0x128 + lVar7) = 0x7f7fffff00000000;
    *(undefined4 *)(param_1 + 0x130 + lVar7) = 0;
    *(undefined2 *)(param_1 + 0x138 + lVar7) = 0;
    lVar7 = lVar7 + 0x140;
  } while (lVar7 != 0x3c0);
  *(undefined1 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c4) = 0x44bb800043fa0000;
  *(undefined1 *)(param_1 + 0x3cc) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0x44bb800043fa0000;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::AABBTree",1);
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined ***)(param_1 + 0x428) = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined ***)(param_1 + 0x460) = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0x470) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined1 *)(param_1 + 0x4c8) = 0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x4d0) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x4d8) = uVar3;
  *(undefined8 *)(param_1 + 0x4e0) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x4e8) = 0x7f7fffff00000000;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined2 *)(param_1 + 0x4f8) = 0;
  lVar7 = 0x50c;
  do {
    *(undefined1 *)(param_1 + -0xc + lVar7) = 2;
    *(undefined4 *)(param_1 + -8 + lVar7) = 0;
    *(undefined1 *)(param_1 + -4 + lVar7) = 2;
    *(undefined4 *)(param_1 + lVar7) = 0;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x55c);
  *(undefined1 *)(param_1 + 0x550) = 2;
  *(undefined4 *)(param_1 + 0x554) = 0;
  *(undefined1 *)(param_1 + 0x558) = 2;
  *(undefined8 *)(param_1 + 0x55c) = 0;
  *(undefined8 *)(param_1 + 0x564) = 0;
  *(undefined4 *)(param_1 + 0x56c) = 0;
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e29818 FUN_140e29818 body=134 status=ok
// SIG undefined FUN_140e29818(void)

undefined8 * FUN_140e29818(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x48) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x50), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    *param_2 = DAT_14c948618;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_140e2989e(0,param_2);
        return param_2;
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
    FUN_140e2989e(*(undefined8 *)(param_1 + 0x48),param_2);
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
  return param_2;
}



// FUNCTION 140e2989e FUN_140e2989e body=163 status=ok
// SIG undefined FUN_140e2989e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e2989e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  
  if (((*(longlong *)(param_1 + 0x10) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar7 = DAT_14c948618;
LAB_140e29909:
    *param_2 = uVar7;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      lVar4 = _DAT_00000010;
      if (iVar6 == 0) {
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(_DAT_00000010 + 0x98);
        uVar7 = *(undefined8 *)(lVar4 + 0x90);
        goto LAB_140e29909;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar4 + 0x98);
    *param_2 = *(undefined8 *)(lVar4 + 0x90);
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
  return param_2;
}



// FUNCTION 140e29948 FUN_140e29948 body=57 status=ok
// SIG undefined FUN_140e29948(void)

void FUN_140e29948(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5438 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5438 = FUN_140002ddd(FUN_1462ad47f,uVar1,L"GbxGraphNodeOutputRef");
  }
  return;
}



// FUNCTION 140e29987 FUN_140e29987 body=177 status=ok
// SIG undefined FUN_140e29987(void)

undefined8 FUN_140e29987(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140e29a3a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e29a3a FUN_140e29a3a body=228 status=ok
// SIG undefined FUN_140e29a3a(void)

longlong FUN_140e29a3a(void)

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
  if (DAT_14cc27290 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146293882;
    local_38 = &LAB_1497f2325;
    local_40 = FUN_140da1446;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/ChaosCloth",L"ChaosClothingInteractor",&DAT_14cc27290,FUN_14675e568);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc27290;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e29b20 FUN_140e29b20 body=21 status=ok
// SIG undefined FUN_140e29b20(void)

undefined8 FUN_140e29b20(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140e29b36 FUN_140e29b36 body=3475 status=ok
// SIG undefined FUN_140e29b36(void)

void FUN_140e29b36(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  byte *pbVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  double *pdVar15;
  longlong *plVar16;
  longlong *plVar17;
  double *pdVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined8 *puVar22;
  double *pdVar23;
  longlong *plVar24;
  byte bVar25;
  int iVar26;
  bool bVar27;
  undefined4 uVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  undefined4 uVar33;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  double local_1a0;
  undefined8 local_198;
  double local_190 [3];
  undefined8 local_178;
  undefined8 uStack_170;
  byte local_168;
  byte local_167;
  longlong local_164;
  undefined8 uStack_15c;
  longlong *local_150;
  longlong local_148;
  longlong local_140 [5];
  longlong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  byte local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((((*(longlong *)(param_1 + 0x148) == 0) || (*(longlong *)(param_1 + 0x140) == 0)) ||
      (*(longlong *)(param_1 + 0x168) == 0)) ||
     (((*(longlong *)(param_1 + 0x170) == 0 || (*(longlong *)(param_1 + 0x178) == 0)) ||
      ((param_2 == (longlong *)0x0 ||
       ((*(longlong *)(param_1 + 0x180) == 0 || (*(char *)(param_1 + 0x199) != '\0'))))))))
  goto LAB_140e2a432;
  local_178 = 0;
  uStack_170 = 0;
  local_150 = (longlong *)0x0;
  local_118 = (longlong *)0x0;
  local_110 = 0x200000000;
  local_164 = 0;
  uStack_15c = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x140) + 0x628) == '\x01') {
    puVar19 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2);
    uVar28 = *puVar19;
  }
  else {
    uVar28 = (**(code **)(*param_2 + 0x140))(param_2,0);
  }
  local_178 = CONCAT44(uVar28,(float)local_178);
  lVar13 = (**(code **)(*param_2 + 8))(param_2);
  if (*(char *)(lVar13 + 0x38) == '\x01') {
    fVar32 = ((*(float *)(lVar13 + 0x18) + 1.0) / (1.0 - *(float *)(lVar13 + 0x1c))) *
             *(float *)(lVar13 + 0x28) * (*(float *)(lVar13 + 0x2c) + *(float *)(lVar13 + 0x20)) +
             *(float *)(lVar13 + 0x24);
    *(float *)(lVar13 + 0x34) = fVar32;
    *(undefined1 *)(lVar13 + 0x38) = 0;
  }
  else {
    fVar32 = *(float *)(lVar13 + 0x34);
  }
  lVar13 = (**(code **)(*param_2 + 8))(param_2);
  fVar32 = fVar32 - *(float *)(lVar13 + 4);
  fVar29 = 0.0;
  if (0.0 <= fVar32) {
    fVar29 = fVar32;
  }
  uStack_170 = CONCAT44(fVar29,(undefined4)uStack_170);
  lVar13 = (**(code **)(*param_2 + 8))(param_2);
  local_168 = *(byte *)(lVar13 + 0x7c) >> 4 & 1;
  lVar13 = (**(code **)(*param_2 + 8))(param_2);
  local_167 = *(byte *)(lVar13 + 0x7c) & 1;
  lVar13 = FUN_140c4e3ec();
  cVar11 = *(char *)(lVar13 + 0xd8);
  lVar14 = (**(code **)(*param_2 + 0x10))(param_2);
  if (cVar11 == '\x01') {
    if (((((*(double *)(lVar14 + 0x230) == 0.0) && (!NAN(*(double *)(lVar14 + 0x230)))) &&
         (*(double *)(lVar14 + 0x238) == 0.0)) &&
        ((!NAN(*(double *)(lVar14 + 0x238)) && (*(double *)(lVar14 + 0x240) == 0.0)))) &&
       (!NAN(*(double *)(lVar14 + 0x240)))) {
      lVar14 = (**(code **)(*param_2 + 0x10))(param_2);
      if (((*(double *)(lVar14 + 0x218) != 0.0) || (NAN(*(double *)(lVar14 + 0x218)))) ||
         ((*(double *)(lVar14 + 0x220) != 0.0 ||
          (((NAN(*(double *)(lVar14 + 0x220)) || (*(double *)(lVar14 + 0x228) != 0.0)) ||
           (NAN(*(double *)(lVar14 + 0x228)))))))) {
        lVar14 = (**(code **)(*param_2 + 0x10))(param_2);
        goto LAB_140e2a7da;
      }
    }
    lVar14 = (**(code **)(*param_2 + 0x10))(param_2);
    pdVar18 = (double *)(lVar14 + 0x230);
    pdVar23 = (double *)(lVar14 + 0x238);
    pdVar15 = (double *)(lVar14 + 0x240);
  }
  else {
LAB_140e2a7da:
    pdVar18 = (double *)(lVar14 + 0x218);
    pdVar23 = (double *)(lVar14 + 0x220);
    pdVar15 = (double *)(lVar14 + 0x228);
  }
  dVar30 = *pdVar18;
  dVar3 = *pdVar23;
  dVar4 = *pdVar15;
  if (*(char *)(lVar13 + 0xd0) == '\x01') {
    dVar31 = dVar30 * dVar30 + dVar3 * dVar3;
    fVar32 = (float)SQRT(dVar4 * dVar4 + dVar31);
    if (0.0001 < fVar32) {
      dVar6 = 0.0;
      if (((dVar30 != 0.0) || (NAN(dVar30))) || ((dVar3 != 0.0 || (NAN(dVar3))))) {
        dVar6 = atan2(dVar3,dVar30);
        dVar6 = dVar6 * 57.29577951308232;
      }
      dVar31 = SQRT(dVar31);
      dVar7 = 0.0;
      if (((dVar4 != 0.0) || (NAN(dVar4))) || ((dVar31 != 0.0 || (NAN(dVar31))))) {
        dVar7 = atan2(dVar4,dVar31);
        dVar7 = dVar7 * 57.29577951308232;
      }
      if (dVar7 < (double)*(float *)(lVar13 + 0xd4)) {
        local_1a0 = 0.0;
        local_1b0 = (undefined8 *)(double)*(float *)(lVar13 + 0xd4);
        uStack_1a8 = dVar6;
        FUN_1401c9a0e(&local_1b0,&local_108,&DAT_14c8462d8);
        dVar30 = (double)fVar32;
        dVar4 = local_f8 * dVar30;
        dVar3 = uStack_100 * dVar30;
        dVar30 = dVar30 * local_108;
      }
    }
  }
  dVar31 = dVar4 * dVar4 + dVar30 * dVar30 + dVar3 * dVar3;
  fVar32 = (float)SQRT(dVar31);
  if (0.0001 < fVar32) {
    local_178 = CONCAT44(local_178._4_4_,fVar32);
    if (((dVar31 != 1.0) ||
        (local_190[0] = dVar30, local_190[1] = dVar3, local_190[2] = dVar4, NAN(dVar31))) &&
       (local_190[0] = DAT_14c8464e0, local_190[1] = DAT_14c8464e8, local_190[2] = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar31)) {
      local_190[0] = 1.0 / SQRT(dVar31);
      local_190[2] = dVar4 * local_190[0];
      local_190[1] = dVar3 * local_190[0];
      local_190[0] = dVar30 * local_190[0];
    }
  }
  plVar16 = param_2;
  lVar13 = (**(code **)(*param_2 + 0xa8))();
  uVar20 = SUB84(plVar16,0);
  local_164 = *(longlong *)(lVar13 + 0xf0);
  dVar30 = *(double *)(param_1 + 0x148);
  lVar13 = *(longlong *)((longlong)dVar30 + 0x1c8);
  uVar28 = (undefined4)DAT_14c846500;
  uVar33 = DAT_14c846500._4_4_;
  if (lVar13 != 0) {
    dVar3 = *(double *)(lVar13 + 0x240);
    dVar4 = *(double *)(lVar13 + 0x248);
    dVar31 = *(double *)(lVar13 + 0x250);
    dVar6 = *(double *)(lVar13 + 600);
    pdVar18 = *(double **)(lVar13 + 0x228);
    local_108 = dVar3;
    uStack_100 = dVar4;
    local_f8 = dVar31;
    dStack_f0 = dVar6;
    if (pdVar18 == (double *)0x0) {
      uVar20 = 0x40;
      pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
      dVar30 = DAT_14c8463d8;
      *pdVar18 = DAT_14c8463d0;
      pdVar18[1] = dVar30;
      dVar30 = DAT_14c8463e8;
      pdVar18[2] = DAT_14c8463e0;
      pdVar18[3] = dVar30;
      uVar10 = DAT_14c846500._4_4_;
      uVar33 = (undefined4)DAT_14c846500;
      uVar28 = DAT_14c8464f8._4_4_;
      *(undefined4 *)(pdVar18 + 4) = (undefined4)DAT_14c8464f8;
      *(undefined4 *)((longlong)pdVar18 + 0x24) = uVar28;
      *(undefined4 *)(pdVar18 + 5) = uVar33;
      *(undefined4 *)((longlong)pdVar18 + 0x2c) = uVar10;
      dVar30 = DAT_14c846508;
      pdVar18[6] = DAT_14c846508;
      *(double **)(lVar13 + 0x228) = pdVar18;
    }
    auVar8._8_4_ = (int)-(ulonglong)(dVar4 != pdVar18[1]);
    auVar8._0_8_ = -(ulonglong)(dVar3 != *pdVar18);
    auVar8._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar18[1]) >> 0x20);
    iVar12 = movmskpd(SUB84(dVar30,0),auVar8);
    auVar9._8_4_ = (int)-(ulonglong)(dVar6 != pdVar18[3]);
    auVar9._0_8_ = -(ulonglong)(dVar31 != pdVar18[2]);
    auVar9._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar18[3]) >> 0x20);
    uVar21 = movmskpd(uVar20,auVar9);
    if ((uVar21 & 0x3fffffff) != 0 || iVar12 != 0) {
      pdVar18[2] = local_f8;
      pdVar18[3] = dStack_f0;
      *(undefined4 *)pdVar18 = (undefined4)local_108;
      *(undefined4 *)((longlong)pdVar18 + 4) = local_108._4_4_;
      *(undefined4 *)(pdVar18 + 1) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)pdVar18 + 0xc) = uStack_100._4_4_;
      FUN_1448052ee(&local_108,&local_1b0);
      pdVar18[6] = local_1a0;
      *(undefined4 *)(pdVar18 + 4) = (undefined4)local_1b0;
      *(undefined4 *)((longlong)pdVar18 + 0x24) = local_1b0._4_4_;
      *(int *)(pdVar18 + 5) = (int)uStack_1a8;
      *(undefined4 *)((longlong)pdVar18 + 0x2c) = uStack_1a8._4_4_;
    }
    uVar28 = SUB84(pdVar18[5],0);
    uVar33 = (int)((ulonglong)pdVar18[5] >> 0x20);
  }
  (**(code **)(*param_2 + 0xb8))(param_2,&local_108);
  if (((local_108 != 0.0) || (NAN(local_108))) || ((uStack_100 != 0.0 || (NAN(uStack_100))))) {
    dVar30 = atan2(uStack_100,local_108);
    fVar32 = (float)(dVar30 * 57.29577951308232);
  }
  else {
    fVar32 = 0.0;
  }
  dVar30 = (double)FUN_144719204(SUB84((double)(fVar32 - (float)(double)CONCAT44(uVar33,uVar28)),0))
  ;
  dVar30 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                   (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
  uStack_170 = CONCAT44(uStack_170._4_4_,
                        (float)(double)(~-(ulonglong)(180.0 < dVar30) & (ulonglong)dVar30 |
                                       (ulonglong)(dVar30 + -360.0) & -(ulonglong)(180.0 < dVar30)))
  ;
  plVar16 = (longlong *)(**(code **)(*param_2 + 0xe0))();
  if (plVar16 == (longlong *)0x0) {
LAB_140e2a69a:
    local_150 = (longlong *)0x0;
  }
  else {
    lVar13 = (**(code **)(*plVar16 + 8))();
    lVar14 = FUN_14018fb44();
    if ((lVar14 == 0) || (*(int *)(lVar13 + 0x38) < *(int *)(lVar14 + 0x38))) goto LAB_140e2a69a;
    local_150 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
        lVar14 + 0x30) {
      local_150 = plVar16;
    }
  }
  plVar16 = (longlong *)(**(code **)(*param_2 + 0xd8))(param_2);
  if (&local_148 != plVar16) {
    plVar24 = (longlong *)plVar16[6];
    if ((longlong *)plVar16[6] == (longlong *)0x0) {
      plVar24 = plVar16;
    }
    FUN_1400709d4(&local_148,plVar24,(int)plVar16[7],2);
  }
  lVar13 = (**(code **)(*param_2 + 0x108))(param_2);
  if (lVar13 == 0) {
    uStack_15c = 0;
LAB_140e2a51c:
    lVar13 = (**(code **)(*param_2 + 0x100))(param_2);
    if (lVar13 == 0) {
      uStack_15c = 0;
      iVar12 = 0;
    }
    else {
      uVar21 = *(uint *)(lVar13 + 0xc);
      uStack_15c = CONCAT44(uStack_15c._4_4_,uVar21);
      if ((int)uVar21 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar12 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar26 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar26);
        }
        LOCK();
        iVar12 = *(int *)(lVar13 + 0x10);
        bVar27 = iVar12 == 0;
        if (bVar27) {
          *(int *)(lVar13 + 0x10) = iVar26;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar12 = iVar26;
        }
      }
    }
    uStack_15c = CONCAT44(iVar12,(uint)uStack_15c);
  }
  else {
    uVar21 = *(uint *)(lVar13 + 0xc);
    uStack_15c = CONCAT44(uStack_15c._4_4_,uVar21);
    if ((int)uVar21 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar12 = *(int *)(lVar13 + 0x10);
    if (iVar12 == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar26 = DAT_14c964868 + 1;
      bVar27 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar27) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar26);
      }
      LOCK();
      iVar12 = *(int *)(lVar13 + 0x10);
      bVar27 = iVar12 == 0;
      if (bVar27) {
        *(int *)(lVar13 + 0x10) = iVar26;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar27) {
        iVar12 = iVar26;
      }
      uStack_15c = CONCAT44(iVar12,(uint)uStack_15c);
      if (iVar12 == 0) goto LAB_140e2a51c;
    }
    else {
      uStack_15c = CONCAT44(iVar12,uVar21);
    }
    if (((((int)(uint)uStack_15c < 0) || (DAT_14c9647dc <= (int)(uint)uStack_15c)) ||
        (lVar13 = (ulonglong)(((uint)uStack_15c & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)uStack_15c >> 0x10) * 8),
        lVar13 == 0)) ||
       ((*(int *)(lVar13 + 0x10) != iVar12 || ((*(uint *)(lVar13 + 8) & 0x10200000) != 0))))
    goto LAB_140e2a51c;
  }
  plVar16 = (longlong *)(param_1 + 0x1a0);
  plVar24 = &local_148;
  if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x1a0);
    local_1b8 = lVar13 + 0x48;
    local_1c0 = (longlong)*(int *)(param_1 + 0x1a8) * 0x88;
    lVar14 = 0;
LAB_140e2a4c5:
    cVar11 = FUN_140383372(lVar13 + 0x34 + lVar14,&uStack_15c);
    if (((cVar11 == '\0') || (*(longlong **)(lVar13 + 0x40 + lVar14) != local_150)) ||
       (cVar11 = FUN_1400ff15e(local_1b8 + lVar14,&local_148), cVar11 == '\0')) goto LAB_140e2a4f9;
    iVar12 = (int)(lVar14 >> 3) * -0xf0f0f0f;
    if (iVar12 != -1) {
      if (0 < (int)local_110) {
        plVar17 = local_118;
        if (local_118 == (longlong *)0x0) {
          plVar17 = &local_148;
        }
        if (*plVar17 != 0) {
          plVar17 = local_140;
          if (local_118 != (longlong *)0x0) {
            plVar17 = local_118 + 1;
          }
          if (((int)*plVar17 - 1U < 0xfffffffe) && (lVar13 = FUN_14033465a(), lVar13 != 0)) {
            plVar17 = local_118;
            if (local_118 == (longlong *)0x0) {
              plVar17 = &local_148;
            }
            lVar13 = FUN_14033465a(plVar17);
            if (*(char *)(lVar13 + 0xab) == '\x01') {
              lVar13 = *plVar16;
              lVar14 = (longlong)iVar12 * 0x88;
              *(float *)(lVar13 + 0x1c + lVar14) =
                   local_178._4_4_ + *(float *)(lVar13 + 0x1c + lVar14);
              *(float *)(lVar13 + 0x18 + lVar14) =
                   (float)local_178 + *(float *)(lVar13 + 0x18 + lVar14);
              *(float *)(lVar13 + 0x24 + lVar14) =
                   uStack_170._4_4_ + *(float *)(lVar13 + 0x24 + lVar14);
              pbVar2 = (byte *)(lVar13 + 0x28 + lVar14);
              *pbVar2 = *pbVar2 | local_168;
              if (*(longlong *)(lVar13 + 0x2c + lVar14) != local_164) {
                *(undefined8 *)(lVar13 + lVar14 + 0x2c) = 0;
              }
              goto LAB_140e2a250;
            }
          }
        }
      }
      pfVar1 = (float *)(*plVar16 + 0x1c + (longlong)iVar12 * 0x88);
      if (*pfVar1 <= local_178._4_4_ && local_178._4_4_ != *pfVar1) {
        pdVar18 = (double *)(*plVar16 + (longlong)iVar12 * 0x88);
        pdVar23 = local_190;
        pdVar15 = pdVar18;
        for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
          *pdVar15 = *pdVar23;
          pdVar23 = pdVar23 + 1;
          pdVar15 = pdVar15 + 1;
        }
        if (pdVar18 != local_190) {
          uVar28 = *(undefined4 *)((longlong)pdVar18 + 0x84);
          pdVar18 = pdVar18 + 9;
          if (local_118 != (longlong *)0x0) {
            plVar24 = local_118;
          }
          goto LAB_140e2a24b;
        }
      }
      goto LAB_140e2a250;
    }
  }
LAB_140e2a1e2:
  iVar12 = *(int *)(param_1 + 0x1a8);
  *(uint *)(param_1 + 0x1a8) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1ac) < iVar12 + 1U) {
    FUN_1418e8b4c(plVar16,iVar12);
  }
  lVar13 = *plVar16;
  pdVar18 = local_190;
  pdVar23 = (double *)(lVar13 + (longlong)iVar12 * 0x88);
  for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
    *pdVar23 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    pdVar23 = pdVar23 + 1;
  }
  pdVar18 = (double *)(lVar13 + 0x48 + (longlong)iVar12 * 0x88);
  pdVar18[6] = 0.0;
  if (local_118 != (longlong *)0x0) {
    plVar24 = local_118;
  }
  uVar28 = 0;
LAB_140e2a24b:
  FUN_1400709d4(pdVar18,plVar24,(int)local_110,uVar28);
LAB_140e2a250:
  (**(code **)(*param_2 + 0xd0))(param_2);
  lVar13 = FUN_1402179b4();
  if (lVar13 == 0) {
    bVar25 = 0;
  }
  else {
    lVar13 = FUN_1402179b4();
    bVar25 = (*(byte *)(lVar13 + 0x19) & 0x40) >> 6;
  }
  if (*(longlong *)(param_1 + 0x178) == 0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    plVar16 = *(longlong **)(param_1 + 0x180);
  }
  cVar11 = (**(code **)(*plVar16 + 0x40))();
  if (cVar11 == '\0') {
    if ((((bVar25 == 0) && (*(longlong *)(param_1 + 0x1b0) == 0)) &&
        (*(longlong *)(param_1 + 0x148) != 0)) && (lVar13 = FUN_1447210f0(), lVar13 != 0)) {
      if (*(longlong *)(lVar13 + 0x1f0) == 0) {
        puVar22 = (undefined8 *)(lVar13 + 0x458);
      }
      else {
        puVar22 = (undefined8 *)(*(longlong *)(lVar13 + 0x1f0) + 0xf0);
      }
      uVar5 = *puVar22;
      local_1b0 = (undefined8 *)0x0;
      uStack_1a8 = (double)((ulonglong)uStack_1a8 & 0xffffffff00000000);
      FUN_1446efa72(&local_1b0,0,3,0x10);
      uStack_1a8 = (double)CONCAT44(uStack_1a8._4_4_,3);
      *local_1b0 = &PTR_LAB_14b975cc0;
      local_1b0[1] = 0;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar13 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar13 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar13;
      local_1b0[2] = lVar14;
      *local_1b0 = &PTR_FUN_14b975c50;
      local_1b0[3] = param_1;
      local_1b0[4] = FUN_140c4c7e8;
      local_108 = 0.0;
      uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff00000000);
      FUN_14487d8d8(&local_108,&local_1b0);
      local_c8 = 1;
      FUN_14016fdb0(uVar5,&local_198,&local_108);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_c8])(&local_108);
      *(undefined8 *)(param_1 + 0x1b0) = local_198;
      if ((int)uStack_1a8 != 0) {
        if (local_1b0 == (undefined8 *)0x0) goto LAB_140e2a420;
        (**(code **)*local_1b0)(local_1b0,0);
        FUN_1446efa72(&local_1b0,0,0,0x10);
        uStack_1a8 = (double)((ulonglong)uStack_1a8 & 0xffffffff00000000);
      }
      if (local_1b0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_140cf857e(param_1);
    FUN_140c4c7e8(param_1,param_2);
  }
LAB_140e2a420:
  if (local_118 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140e2a432:
  if ((local_b0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140e2a4f9:
  lVar14 = lVar14 + 0x88;
  if (local_1c0 == lVar14) goto LAB_140e2a1e2;
  goto LAB_140e2a4c5;
}



// FUNCTION 140e2a8ca FUN_140e2a8ca body=572 status=ok
// SIG undefined FUN_140e2a8ca(void)

undefined8 FUN_140e2a8ca(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != 0) {
    do {
      if (param_3 == param_2) {
        param_2[3] = param_3[3];
      }
      else {
        local_78 = 0;
        uStack_70 = 0;
        lVar5 = param_3[1];
        if ((longlong)(int)lVar5 != 0) {
          lVar8 = *param_3;
          lVar9 = 0;
          do {
            if ((*(int *)(lVar8 + 8 + lVar9) != 0) &&
               (*(longlong **)(lVar8 + lVar9) != (longlong *)0x0)) {
              local_88 = 0;
              local_80 = 0;
              local_90 = lVar8;
              (**(code **)(**(longlong **)(lVar8 + lVar9) + 0x40))();
              lVar8 = (longlong)(int)uStack_70;
              uVar6 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
              if (uStack_70._4_4_ < uVar6) {
                FUN_1447a71f6(&local_78);
              }
              lVar8 = lVar8 * 0x10;
              *(undefined8 *)(local_78 + lVar8) = 0;
              *(undefined4 *)(local_78 + 8 + lVar8) = 0;
              *(undefined8 *)(local_78 + lVar8) = local_88;
              local_88 = 0;
              *(undefined4 *)(local_78 + 8 + lVar8) = local_80;
              local_80 = 0;
              FUN_1449db362(&local_88);
              lVar8 = local_90;
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)(int)lVar5 * 0x10 != lVar9);
        }
        FUN_1448a8284(param_2);
        if (&local_78 == param_2) {
          uVar7 = uStack_70 & 0xffffffff;
        }
        else {
          FUN_144760e21(*param_2,(int)param_2[1]);
          if (*param_2 != 0) {
            FUN_1400020a8();
          }
          *param_2 = local_78;
          local_78 = 0;
          *(int *)(param_2 + 1) = (int)uStack_70;
          *(uint *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
          uStack_70 = 0;
          uVar7 = 0;
        }
        FUN_144760e21(local_78,uVar7);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        param_2[3] = param_3[3];
        if (param_3 != param_2) {
          FUN_140e2ab07(param_2[4],(int)param_2[5]);
          iVar2 = (int)param_3[5];
          lVar5 = param_3[4];
          *(int *)(param_2 + 5) = iVar2;
          if (iVar2 == 0 && *(int *)((longlong)param_2 + 0x2c) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
          }
          else {
            FUN_140e2abee(param_2 + 4,iVar2);
            FUN_140e2ab45(param_2[4],lVar5,iVar2);
          }
        }
      }
      plVar1 = param_3 + 6;
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
      lVar5 = param_3[7];
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
      param_3 = param_3 + 8;
      *(int *)(param_2 + 6) = (int)*plVar1;
      *(undefined4 *)((longlong)param_2 + 0x34) = uVar3;
      *(int *)(param_2 + 7) = (int)lVar5;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar4;
      param_2 = param_2 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140e2ab07 FUN_140e2ab07 body=62 status=ok
// SIG undefined FUN_140e2ab07(void)

void FUN_140e2ab07(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      FUN_140368c45(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e2ab45 FUN_140e2ab45 body=168 status=ok
// SIG undefined FUN_140e2ab45(void)

void FUN_140e2ab45(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      puVar3[-3] = *param_2;
      uVar2 = FUN_14477b664(param_2[1]);
      uVar2 = FUN_14477b664(uVar2);
      puVar3[-2] = uVar2;
      puVar3[-1] = param_2[2];
      *puVar3 = 0;
      iVar1 = *(int *)(param_2 + 4);
      uVar2 = param_2[3];
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_148b80bbe(puVar3,iVar1,0);
        FUN_148b80c20(*puVar3,uVar2);
      }
      param_2 = param_2 + 5;
      puVar3 = puVar3 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e2abee FUN_140e2abee body=331 status=ok
// SIG undefined FUN_140e2abee(void)

void FUN_140e2abee(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e2ac60;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140e2ac60:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140e2ad76 FUN_140e2ad76 body=280 status=ok
// SIG undefined FUN_140e2ad76(void)

undefined8 FUN_140e2ad76(undefined2 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  iVar1 = *(int *)(param_1 + 2);
  uVar3 = (iVar1 / 2) % 3;
  iVar5 = (iVar1 / 6) % 3;
  bVar8 = (iVar1 / 0x12 & 0x80000001U) == 1;
  bVar9 = (iVar1 / 0x48 & 0x80000001U) == 1;
  cVar2 = (char)uVar3;
  bVar6 = bVar8;
  if (iVar5 == 2) {
    bVar10 = uVar3 != 2;
    uVar7 = uVar3 & 0xff;
    uVar3 = 1;
    if (bVar10) {
      uVar3 = uVar7;
    }
    bVar10 = false;
  }
  else {
    bVar10 = bVar9;
    if (iVar5 == 1) {
      bVar10 = false;
      uVar3 = 0;
      bVar6 = false;
    }
  }
  if ((((bVar10 == bVar9) && (bVar6 == bVar8)) && ((char)uVar3 == cVar2)) &&
     (iVar5 != 2 || param_2 != 1)) {
    cVar2 = FUN_144880847(*param_1,0);
    if (cVar2 != '\0') {
      uVar4 = FUN_140bb8ec0(param_1,param_2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140e2ae96 FUN_140e2ae96 body=84 status=ok
// SIG undefined FUN_140e2ae96(void)

undefined8 * FUN_140e2ae96(undefined8 *param_1)

{
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b0db960;
  FUN_140e2aeea(param_1 + 0x33);
  *(undefined2 *)(param_1 + 0x7d) = 0x100;
  FUN_140785382(param_1 + 0x7e,10);
  param_1[0x85] = 0x4120000001000101;
  return param_1;
}



// FUNCTION 140e2aeea FUN_140e2aeea body=484 status=ok
// SIG undefined FUN_140e2aeea(void)

longlong FUN_140e2aeea(longlong param_1)

{
  undefined1 uVar1;
  
  FUN_140440628(param_1,&DAT_14cb23dbc,0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x58) = 4;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x60) = 3;
  *(char *)(param_1 + 0x68) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined2 *)(param_1 + 0x90) = 8;
  *(undefined8 *)(param_1 + 0x78) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x98) = 0xb;
  uVar1 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar1 = 0xb;
  }
  *(undefined1 *)(param_1 + 0xa0) = uVar1;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 200) = 8;
  *(undefined8 *)(param_1 + 0xb0) = 0x43bb8000441c4000;
  *(undefined1 *)(param_1 + 0xd0) = 0xb;
  uVar1 = 0xb;
  if ((DAT_14c9a9174 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0xd8) = uVar1;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0x100) = 4;
  *(undefined4 *)(param_1 + 0xe8) = 0x43340000;
  *(undefined1 *)(param_1 + 0x108) = 3;
  *(char *)(param_1 + 0x110) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined2 *)(param_1 + 0x138) = 4;
  *(undefined4 *)(param_1 + 0x120) = 0x42340000;
  *(undefined1 *)(param_1 + 0x140) = 3;
  *(char *)(param_1 + 0x148) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined2 *)(param_1 + 0x170) = 4;
  *(undefined4 *)(param_1 + 0x158) = 0x437a0000;
  *(undefined1 *)(param_1 + 0x178) = 3;
  *(char *)(param_1 + 0x180) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined2 *)(param_1 + 0x1a8) = 4;
  *(undefined4 *)(param_1 + 400) = 0x44480000;
  *(undefined1 *)(param_1 + 0x1b0) = 3;
  *(char *)(param_1 + 0x1b8) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x1c0) = 0x200;
  FUN_140785382(param_1 + 0x1c8,0x14);
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined2 *)(param_1 + 0x220) = 4;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x228) = 1;
  *(bool *)(param_1 + 0x230) = (DAT_14c9a8634 & 0x20) == 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0xc;
  *(undefined8 *)(param_1 + 0x248) = 0;
  return param_1;
}



// FUNCTION 140e2b0e4 FUN_140e2b0e4 body=3046 status=ok
// SIG undefined FUN_140e2b0e4(void)

void FUN_140e2b0e4(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a0;
  undefined8 *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((*(byte *)(param_1 + 0xb8) & 8) != 0) ||
      (plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b0), plVar7 == (longlong *)0x0))
     || (cVar5 = (**(code **)(*plVar7 + 0x700))(), cVar5 == '\0')) goto LAB_140e2b130;
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | 8;
  plVar7 = (longlong *)FUN_1401654a2(*(undefined8 *)(param_1 + 0x30));
  if (plVar7 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
    local_78 = (code *)0x0;
    iStack_70 = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    pcVar4 = local_78;
    iStack_70 = 3;
    *(undefined ***)local_78 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar16 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar16 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar16;
    *(longlong *)(local_78 + 0x10) = lVar11;
    *(undefined ***)local_78 = &PTR_FUN_14b9e13f0;
    *(longlong *)(local_78 + 0x18) = 0;
    iVar14 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_78 + 0x18) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar14 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar14 = *(int *)(lVar16 + 0x10);
        bVar17 = iVar14 == 0;
        if (bVar17) {
          *(int *)(lVar16 + 0x10) = iVar6;
          iVar14 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar14 = iVar6;
        }
      }
    }
    *(int *)(pcVar4 + 0x1c) = iVar14;
    *(code **)(pcVar4 + 0x20) = FUN_140d94a62;
    if (((iStack_70 == 0) || (local_78 == (code *)0x0)) ||
       (cVar5 = (**(code **)(*(longlong *)local_78 + 0x30))(), cVar5 == '\0')) {
      if (iStack_70 == 0) goto LAB_140e2b31c;
      if (local_78 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        goto LAB_140e2b309;
      }
    }
    else {
      plVar7 = (longlong *)(lVar8 + 0x18);
      if (*(int *)(lVar8 + 0x2c) < 1) {
        iVar14 = *(int *)(lVar8 + 0x20);
        iVar6 = *(int *)(lVar8 + 0x28) + -1;
        *(int *)(lVar8 + 0x28) = iVar6;
        if (iVar6 <= iVar14) {
          iVar6 = iVar14;
          if (0 < iVar14) {
            iVar13 = 0;
            do {
              if (((*(int *)(*plVar7 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                  (plVar3 = *(longlong **)(*plVar7 + (longlong)iVar13 * 0x10),
                  plVar3 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
                FUN_14005b288(plVar7,iVar13);
                FUN_14005b248(plVar7);
              }
              else {
                iVar13 = iVar13 + 1;
              }
              iVar6 = *(int *)(lVar8 + 0x20);
            } while (iVar13 < iVar6);
          }
          iVar13 = 2;
          if (2 < iVar6 * 2) {
            iVar13 = iVar6 * 2;
          }
          *(int *)(lVar8 + 0x28) = iVar13;
          if ((iVar13 < iVar14) && (*(int *)(lVar8 + 0x24) != iVar6)) {
            FUN_14045812c();
          }
        }
      }
      if ((iStack_70 != 0) && (local_78 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_78 + 0x38))(local_78,&local_98);
      }
      iVar14 = *(int *)(lVar8 + 0x20);
      *(uint *)(lVar8 + 0x20) = iVar14 + 1U;
      if (*(uint *)(lVar8 + 0x24) < iVar14 + 1U) {
        FUN_1447a71f6(plVar7,iVar14);
      }
      lVar16 = *plVar7;
      lVar8 = (longlong)iVar14 * 0x10;
      *(undefined8 *)(lVar16 + lVar8) = 0;
      *(undefined4 *)(lVar16 + 8 + lVar8) = 0;
      *(code **)(lVar16 + lVar8) = local_78;
      local_78 = (code *)0x0;
      *(int *)(lVar16 + 8 + lVar8) = iStack_70;
LAB_140e2b309:
      iStack_70 = 0;
LAB_140e2b31c:
      if (local_78 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140d94a62(param_1,0);
  }
  plVar7 = (longlong *)FUN_140519fd4(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
  if (plVar7 != (longlong *)0x0) {
    lVar16 = *(longlong *)(param_1 + 0x30);
    local_78 = (code *)0x0;
    iStack_70 = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    pcVar4 = local_78;
    iStack_70 = 3;
    *(undefined ***)local_78 = &PTR_LAB_14ac89870;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    *(longlong *)(local_78 + 0x10) = lVar11;
    *(undefined ***)local_78 = &PTR_FUN_14b9e1460;
    *(longlong *)(local_78 + 0x18) = 0;
    iVar14 = 0;
    if (lVar16 != 0) {
      uVar2 = *(uint *)(lVar16 + 0xc);
      *(uint *)(local_78 + 0x18) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar14 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar14 = *(int *)(lVar16 + 0x10);
        bVar17 = iVar14 == 0;
        if (bVar17) {
          *(int *)(lVar16 + 0x10) = iVar6;
          iVar14 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar14 = iVar6;
        }
      }
    }
    *(int *)(pcVar4 + 0x1c) = iVar14;
    *(longlong *)(pcVar4 + 0x20) = param_1;
    if (((iStack_70 == 0) || (local_78 == (code *)0x0)) ||
       (cVar5 = (**(code **)(*(longlong *)local_78 + 0x30))(), cVar5 == '\0')) {
      if (iStack_70 == 0) {
        puVar15 = (undefined8 *)0x0;
        goto LAB_140e2b4e1;
      }
      if (local_78 != (code *)0x0) {
        puVar15 = (undefined8 *)0x0;
        (*(code *)**(undefined8 **)local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        goto LAB_140e2b4ce;
      }
      puVar15 = (undefined8 *)0x0;
    }
    else {
      if (*(int *)((longlong)plVar7 + 0x14) < 1) {
        iVar14 = (int)plVar7[1];
        iVar6 = (int)plVar7[2] + -1;
        *(int *)(plVar7 + 2) = iVar6;
        if (iVar6 <= iVar14) {
          iVar6 = iVar14;
          if (0 < iVar14) {
            iVar13 = 0;
            do {
              if (((*(int *)(*plVar7 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                  (plVar3 = *(longlong **)(*plVar7 + (longlong)iVar13 * 0x10),
                  plVar3 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
                FUN_14005b288(plVar7,iVar13);
                FUN_14005b248(plVar7);
              }
              else {
                iVar13 = iVar13 + 1;
              }
              iVar6 = (int)plVar7[1];
            } while (iVar13 < iVar6);
          }
          iVar13 = 2;
          if (2 < iVar6 * 2) {
            iVar13 = iVar6 * 2;
          }
          *(int *)(plVar7 + 2) = iVar13;
          if ((iVar13 < iVar14) && (*(int *)((longlong)plVar7 + 0xc) != iVar6)) {
            FUN_14045812c();
          }
        }
      }
      puVar15 = (undefined8 *)0x0;
      if ((iStack_70 != 0) && (local_78 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_78 + 0x38))(local_78,&local_98);
        puVar15 = local_98;
      }
      iVar14 = (int)plVar7[1];
      *(uint *)(plVar7 + 1) = iVar14 + 1U;
      if (*(uint *)((longlong)plVar7 + 0xc) < iVar14 + 1U) {
        FUN_1447a71f6(plVar7,iVar14);
      }
      lVar16 = *plVar7;
      lVar8 = (longlong)iVar14 * 0x10;
      *(undefined8 *)(lVar16 + lVar8) = 0;
      *(undefined4 *)(lVar16 + 8 + lVar8) = 0;
      *(code **)(lVar16 + lVar8) = local_78;
      local_78 = (code *)0x0;
      *(int *)(lVar16 + 8 + lVar8) = iStack_70;
LAB_140e2b4ce:
      iStack_70 = 0;
LAB_140e2b4e1:
      if (local_78 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 **)(param_1 + 0xc0) = puVar15;
    uVar9 = FUN_1408a1fe2(plVar7);
    FUN_140e2bea2(param_1,uVar9);
  }
  lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0);
  if (lVar16 == 0) goto LAB_140e2b130;
  if (DAT_14cb56270 == 0) {
    local_c0 = &local_78;
    local_78 = FUN_1449e2820;
    local_b0 = FUN_14081d0ea;
    local_b8 = FUN_1427b09ee;
    local_c8 = &LAB_148630fef;
    local_d0 = FUN_1464b6a91;
    local_d8 = L"Engine";
    local_e0 = 0;
    local_e8 = 0x10004001;
    local_f0 = 8;
    local_f8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  plVar7 = (longlong *)FUN_144718840(lVar16,DAT_14cb56270);
  if ((plVar7 == (longlong *)0x0) || (lVar16 = (**(code **)(*plVar7 + 0x10))(plVar7), lVar16 == 0))
  goto LAB_140e2b130;
  uStack_68 = 0;
  uStack_64 = 0;
  local_78 = (code *)0x0;
  iStack_70 = 0;
  uStack_6c = 0;
  uStack_5c = CONCAT31(uStack_5c._1_3_,0xff);
  if (0 < *(int *)(lVar16 + 0x40)) {
    lVar8 = *(longlong *)(lVar16 + 0x38);
    local_78 = *(code **)(lVar8 + 0x30);
    iStack_70 = *(int *)(lVar8 + 0x38);
    uStack_6c = *(undefined4 *)(lVar8 + 0x3c);
    uStack_68 = *(undefined4 *)(lVar8 + 0x40);
    uStack_64 = *(undefined8 *)(lVar8 + 0x44);
    uStack_5c = *(undefined4 *)(lVar8 + 0x4c);
    cVar5 = FUN_1403ae288();
    if (cVar5 != '\0') {
      lVar10 = FUN_14008e0ae(&local_78);
      lVar8 = *(longlong *)(param_1 + 0x30);
      local_98 = (undefined8 *)0x0;
      iStack_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      puVar15 = local_98;
      iStack_90 = 3;
      *local_98 = &PTR_LAB_14b3f7900;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_98[2] = lVar12;
      *local_98 = &PTR_FUN_14b9e14d0;
      local_98[3] = 0;
      iVar14 = 0;
      if (lVar8 != 0) {
        uVar2 = *(uint *)(lVar8 + 0xc);
        *(uint *)(local_98 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar14 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar14 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar14;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar14 = *(int *)(lVar8 + 0x10);
          bVar17 = iVar14 == 0;
          if (bVar17) {
            *(int *)(lVar8 + 0x10) = iVar6;
            iVar14 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar14 = iVar6;
          }
        }
      }
      *(int *)((longlong)puVar15 + 0x1c) = iVar14;
      puVar15[4] = param_1;
      FUN_140e2bd22(lVar10 + 0x138,&local_50,&local_98);
      if (iStack_90 == 0) {
LAB_140e2b69a:
        if (local_98 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_98 != (undefined8 *)0x0) {
        (**(code **)*local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        iStack_90 = 0;
        goto LAB_140e2b69a;
      }
      *(undefined8 **)(param_1 + 200) = local_50;
      FUN_140e2bccc(&local_78,param_1 + 0xf0);
    }
  }
  iVar14 = *(int *)(lVar16 + 0x58);
  if (((longlong)iVar14 < 0) || (*(int *)(lVar16 + 0x40) <= iVar14)) goto LAB_140e2b130;
  lVar8 = (longlong)iVar14 * 0x88;
  puVar15 = (undefined8 *)(*(longlong *)(lVar16 + 0x38) + 0x30 + lVar8);
  local_98 = (undefined8 *)*puVar15;
  iStack_90 = *(int *)(puVar15 + 1);
  uStack_8c = *(undefined4 *)((longlong)puVar15 + 0xc);
  puVar1 = (undefined4 *)(*(longlong *)(lVar16 + 0x38) + 0x40 + lVar8);
  local_88 = *puVar1;
  uStack_84 = puVar1[1];
  uStack_80 = puVar1[2];
  uStack_7c = puVar1[3];
  cVar5 = FUN_1403ae288();
  if (cVar5 == '\0') goto LAB_140e2b130;
  lVar11 = FUN_14008e0ae(&local_98);
  lVar16 = *(longlong *)(param_1 + 0x30);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar15 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b3f7900;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar10;
  *local_50 = &PTR_FUN_14b9e1540;
  local_50[3] = 0;
  iVar14 = 0;
  if (lVar16 != 0) {
    uVar2 = *(uint *)(lVar16 + 0xc);
    *(uint *)(local_50 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar14 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar14 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar14 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar6;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar14 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar15 + 0x1c) = iVar14;
  puVar15[4] = param_1;
  FUN_140e2bd22(lVar11 + 0x138,&local_a0,&local_50);
  if (local_48 == 0) {
LAB_140e2b80e:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_140e2b80e;
  }
  *(undefined8 *)(param_1 + 0xd0) = local_a0;
  FUN_140e2bccc(&local_98,param_1 + 0xf4);
LAB_140e2b130:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e2bccc FUN_140e2bccc body=85 status=ok
// SIG undefined FUN_140e2bccc(void)

void FUN_140e2bccc(undefined8 param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = FUN_1403ae288();
  if (cVar1 == '\0') {
    fVar3 = 0.0;
  }
  else {
    lVar2 = FUN_14008e0ae(param_1);
    fVar4 = *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x24);
    fVar3 = 0.0;
    if ((fVar4 != 0.0) || (NAN(fVar4))) {
      fVar3 = (*(float *)(lVar2 + 200) - *(float *)(lVar2 + 0x24)) / fVar4;
    }
  }
  *param_2 = fVar3;
  return;
}



// FUNCTION 140e2bd22 FUN_140e2bd22 body=370 status=ok
// SIG undefined FUN_140e2bd22(void)

undefined8 * FUN_140e2bd22(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e2bea2 FUN_140e2bea2 body=682 status=ok
// SIG undefined FUN_140e2bea2(void)

void FUN_140e2bea2(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0xec) = 0;
  if (param_2 != 0) {
    if (DAT_14cb223d8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_147f29feb;
      local_70 = FUN_1464384fe;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar6 = (longlong *)FUN_144718840(param_2,DAT_14cb223d8);
    if (plVar6 != (longlong *)0x0) {
      uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
      iVar3 = FUN_14486116a(uVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
      iVar4 = 1;
      if (iVar3 != 2) {
        iVar4 = (uint)(iVar3 == 0) * 2;
      }
      *(int *)(param_1 + 0xec) = iVar4;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x30);
  if (lVar10 != 0) {
    (**(code **)(*(longlong *)(lVar10 + 0x520) + 0x10))(lVar10 + 0x520,&local_48);
    pcVar2 = local_48;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_40 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
    }
    if (pcVar2 != (code *)0x0) {
      if (param_2 == 0) {
        uVar11 = 0;
        uVar8 = 0;
      }
      else {
        uVar11 = *(uint *)(param_2 + 0xc);
        if ((int)uVar11 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        uVar8 = (ulonglong)*(uint *)(lVar10 + 0x10);
        if (*(uint *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          uVar9 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar9);
          }
          LOCK();
          uVar5 = *(uint *)(lVar10 + 0x10);
          bVar12 = uVar5 == 0;
          if (bVar12) {
            *(uint *)(lVar10 + 0x10) = uVar9;
            uVar5 = 0;
          }
          UNLOCK();
          if (bVar12) {
            uVar5 = uVar9;
          }
          uVar8 = (ulonglong)uVar5;
        }
      }
      FUN_140e2c14e(pcVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0),
                    (ulonglong)uVar11 | uVar8 << 0x20);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e2c14e FUN_140e2c14e body=944 status=ok
// SIG undefined FUN_140e2c14e(void)

void FUN_140e2c14e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined8 *)(param_1 + 0x834) = param_3;
  local_28 = param_3;
  if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar2 = *(uint *)(param_1 + 0x18), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x1c))))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar3 = *plVar6, lVar3 == 0))))
  goto LAB_140e2c228;
  if (DAT_14cb939a8 == 0) {
    local_70 = &local_20;
    local_20 = FUN_140940982;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_146522c26;
    local_78 = &LAB_148a0db91;
    local_80 = &LAB_146572ba7;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 8;
    local_a8 = 0xdd8;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
  }
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cb939a8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) != DAT_14cb939a8 + 0x30)) goto LAB_140e2c228;
  bVar1 = *(byte *)(lVar3 + 0xbd8);
  if ((*(int *)(lVar3 + 0xbf0) <= (int)(uint)bVar1) ||
     ((lVar3 = *(longlong *)
                (*(longlong *)(lVar3 + 0xbe8) + 0x28 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar3 == 0 ||
      (*(char *)(lVar3 + 0x66) != '\x01')))) goto LAB_140e2c228;
  cVar5 = FUN_14079e1ea(&local_28,0);
  if (cVar5 == '\0') {
    FUN_1403c747e(param_1,&local_20,*(undefined8 *)(param_1 + 0x73c));
    if (local_20 == (code *)0x0) goto LAB_140e2c228;
    if (*(int *)(param_1 + 0x4ec) == 0) {
LAB_140e2c430:
      uVar7 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x4e8);
      uVar7 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x4ec) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_140e2c430;
        uVar7 = *puVar8;
      }
    }
    local_a8 = 0;
    FUN_14071ab80(local_20,&local_58,param_1 + 0x700,uVar7);
    local_58 = 0;
    local_50 = 0xffffffffffffffff;
  }
  else {
    FUN_1403c747e(param_1,&local_20,*(undefined8 *)(param_1 + 0x73c));
    if (local_20 == (code *)0x0) goto LAB_140e2c228;
    if (*(int *)(param_1 + 0x4ec) == 0) {
LAB_140e2c438:
      uVar7 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x4e8);
      uVar7 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x4ec) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_140e2c438;
        uVar7 = *puVar8;
      }
    }
    local_a8 = 0;
    FUN_14071ab80(local_20,&local_40,param_1 + 0x720,uVar7);
    local_40 = 0;
    local_38 = 0xffffffffffffffff;
  }
  pcVar4 = local_20;
  if ((local_20 != (code *)0x0) &&
     (*(int *)(local_20 + 0x108) = *(int *)(local_20 + 0x108) + -1, *(int *)(local_20 + 0x130) < 1))
  {
    FUN_1400847bc(local_20 + 0xb8,0);
    if (*(int *)(pcVar4 + 0x108) == 0) {
      FUN_140087e46(pcVar4);
      if (*(longlong *)pcVar4 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140e2c228;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),pcVar4);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),pcVar4);
      }
    }
  }
LAB_140e2c228:
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2c500 FUN_140e2c500 body=108 status=ok
// SIG undefined FUN_140e2c500(void)

void FUN_140e2c500(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140e2c56c();
  lVar1 = *(longlong *)(param_2 + 0x11e8);
  if (*(longlong *)(lVar1 + 0x3170) == 0) {
    lVar2 = 0;
    if (*(char *)(lVar1 + 0x34b0) != '\0') {
      lVar2 = lVar1 + 0x3210;
    }
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x3170) + 0xd8;
  }
  if ((lVar2 != 0) && ((*(byte *)(param_1 + 0x448) & 1) != 0)) {
    FUN_140e2ca4c(lVar2,param_1 + 0x468);
    return;
  }
  return;
}



// FUNCTION 140e2c56c FUN_140e2c56c body=1246 status=ok
// SIG undefined FUN_140e2c56c(void)

void FUN_140e2c56c(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  double dVar6;
  char cVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  double dVar16;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
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
  cVar7 = FUN_140fbf550();
  if (cVar7 == '\0') {
    if (((((*(byte *)(param_2 + 0x550) & 0x40) != 0) && (*(longlong *)(param_2 + 0x428) != 0)) &&
        (lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x428) + 0xae8), lVar10 != 0)) &&
       (plVar4 = *(longlong **)(lVar10 + 0x358), plVar4 != (longlong *)0x0)) {
      iVar1 = *(int *)(param_1 + 0x368);
      if (iVar1 == 0) {
LAB_140e2c96b:
        lVar10 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x364);
        lVar10 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar11 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar11 == (longlong *)0x0) ||
             (((int)plVar11[2] != iVar1 || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))))
          goto LAB_140e2c96b;
          lVar10 = *plVar11;
        }
      }
      if (*plVar4 == lVar10) {
        *(undefined1 *)(param_1 + 0x380) = 0;
        *(undefined4 *)(param_1 + 900) = 0;
        lVar10 = plVar4[0x29];
        *(int *)(param_1 + 0x36c) = (int)lVar10;
        *(int *)(param_1 + 0x370) = (int)lVar10;
        if (iVar1 == 0) {
LAB_140e2c972:
          lVar10 = 0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x364);
          lVar10 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            plVar11 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar11 == (longlong *)0x0) ||
               (((int)plVar11[2] != iVar1 || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))))
            goto LAB_140e2c972;
            lVar10 = *plVar11;
          }
        }
        *(float *)(param_1 + 0x374) =
             *(float *)((longlong)plVar4 + 0x14c) * *(float *)(lVar10 + 0xb0);
        uVar15 = *(ulonglong *)(*(longlong *)(param_2 + 0x428) + 0x658);
        if (uVar15 == 0) {
          uVar15 = *(ulonglong *)(*(longlong *)(param_2 + 0x428) + 0x660);
          if ((DAT_14c950c29 & uVar15 != 0) != 0) goto LAB_140e2ca3e;
          if (uVar15 != 0) goto LAB_140e2c8d0;
LAB_140e2c8fc:
          uVar15 = 0;
        }
        else {
          if (DAT_14c950c29 == 1) {
LAB_140e2ca3e:
            FUN_1456cec3c(uVar15);
          }
LAB_140e2c8d0:
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
            local_98 = CONCAT44(local_98._4_4_,0x588);
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          if ((*(int *)(*(longlong *)(uVar15 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar15 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
          goto LAB_140e2c8fc;
        }
        local_98 = uVar15;
        FUN_1479065ec(plVar4,*(undefined4 *)(param_1 + 0x18),param_1 + 0x36c,param_1 + 0x380);
        *(undefined4 *)(plVar4 + 0x29) = *(undefined4 *)(param_1 + 0x36c);
        *(undefined4 *)((longlong)plVar4 + 0x4c) = 0xfffffffe;
        *(undefined4 *)((longlong)plVar4 + 0x54) = 0xfffffffe;
        dVar16 = (double)*(float *)(param_2 + 0x548);
        dVar6 = dVar16 * *(double *)(param_1 + 0x3b8);
        auVar5._8_4_ = SUB84(dVar6,0);
        auVar5._0_8_ = dVar16 * *(double *)(param_1 + 0x3b0);
        auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x3b0) = auVar5;
        *(double *)(param_1 + 0x3c0) = dVar16 * *(double *)(param_1 + 0x3c0);
        *(double *)(param_1 + 0x3c8) = *(double *)(param_1 + 0x3c8) * 0.0;
      }
    }
    lVar10 = *(longlong *)(param_2 + 0x430);
    *(undefined1 *)(lVar10 + 0xf80) = *(undefined1 *)(param_1 + 0x380);
    *(undefined4 *)(lVar10 + 0xf84) = *(undefined4 *)(param_1 + 900);
    puVar13 = (undefined8 *)(param_1 + 0x390);
    puVar14 = (undefined8 *)(lVar10 + 0xf90);
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
  }
  if ((((*(int *)(param_1 + 0x400) < 1) && (*(int *)(param_1 + 0x410) < 1)) &&
      (*(int *)(param_2 + 0x5c8) < 1)) && (*(int *)(param_2 + 0x5d8) < 1)) goto LAB_140e2c760;
  lVar10 = param_1 + 0x3f0;
  if (*(char *)(param_2 + 0x550) < '\0') {
    FUN_1434e8486(lVar10,param_2 + 0x5b8,0);
    FUN_1434e77ce(lVar10,*(undefined4 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_2 + 0x430));
    local_98 = local_98 & 0xffffffffffffff00;
    FUN_1434e7e92(lVar10,*(undefined4 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_2 + 0x430));
  }
  else {
    lVar12 = *(longlong *)(param_2 + 0x430);
    lVar9 = *(longlong *)(lVar12 + 0x810);
    if (lVar9 == 0) {
      lVar9 = (**(code **)(*(longlong *)(lVar12 + 0x1e8) + 0x28))(lVar12 + 0x1e8);
      *(longlong *)(lVar12 + 0x810) = lVar9;
      if (lVar9 == 0) goto LAB_140e2c74c;
    }
    if (**(longlong **)(lVar9 + 0x18) != param_1) {
      FUN_1434e77ce(*(longlong *)(param_2 + 0x430) + 0xd88,*(undefined4 *)(param_1 + 0x18),param_2);
    }
  }
LAB_140e2c74c:
  FUN_140fb3d70(*(longlong *)(param_2 + 0x430) + 0xd88,lVar10);
LAB_140e2c760:
  *(byte *)(*(longlong *)(param_2 + 0x430) + 0x349) =
       *(byte *)(*(longlong *)(param_2 + 0x430) + 0x349) & 0xfb | *(byte *)(param_1 + 0x10) & 4;
  *(byte *)(param_2 + 0x551) =
       *(byte *)(param_2 + 0x551) & 0xf7 | *(byte *)(param_1 + 0x10) >> 2 & 8;
  *(undefined4 *)(param_2 + 0x554) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x558) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 0x564) = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x568) = uVar3;
  *(undefined4 *)(param_2 + 0x56c) = uVar3;
  uVar8 = (**(code **)(**(longlong **)(param_2 + 0x430) + 0x5e0))();
  *(undefined1 *)(param_1 + 0x12) = uVar8;
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e2ca4c FUN_140e2ca4c body=67 status=ok
// SIG undefined FUN_140e2ca4c(void)

void FUN_140e2ca4c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x1d8) = uVar1;
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x48);
  return;
}



// FUNCTION 140e2ca98 FUN_140e2ca98 body=594 status=ok
// SIG undefined FUN_140e2ca98(void)

void FUN_140e2ca98(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_143e4df00();
  FUN_14026e798(&local_38,uVar4);
  if (local_38 == 0) goto LAB_140e2cbd1;
  FUN_1403c747e(local_38,&local_40,0);
  if (local_40 == (longlong *)0x0) goto LAB_140e2cbd1;
  plVar6 = local_40;
  if (*local_40 != -1) {
    if (param_2 == '\0') {
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar5 = *(longlong *)(lVar2 + 0x58);
      if (lVar5 == 0) {
        uVar4 = FUN_140067708();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(lVar2 + 0x58) = lVar5;
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
LAB_140e2cb61:
        local_68 = 0;
        FUN_14071ab80(local_40,&local_58,*(longlong *)(param_1 + 0x40) + 0x50,0);
        *(undefined8 *)(param_1 + 0x48) = local_58;
        *(undefined8 *)(param_1 + 0x50) = local_50;
        goto LAB_140e2cb99;
      }
      if ((lVar5 != 0) && (*(longlong *)(lVar2 + 0x50) != 0)) {
        plVar6 = *(longlong **)(lVar5 + 0xb8);
        if (plVar6 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6);
          if (cVar3 != '\0') {
            uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
            lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar2 + 0x50));
            *(longlong *)(lVar2 + 0x60) = lVar5;
            if (lVar5 != 0) goto LAB_140e2cb61;
            goto LAB_140e2cc70;
          }
        }
        *(undefined8 *)(lVar2 + 0x60) = 0;
      }
LAB_140e2cc70:
      cVar3 = FUN_144904448(param_1 + 0x48);
      if (cVar3 != '\0') {
        FUN_14072d42a(param_1 + 0x48,0);
      }
    }
    else {
      local_68 = 0;
      FUN_14071ab80(local_40,&local_58,*(longlong *)(param_1 + 0x40) + 0x38,0);
      *(undefined8 *)(param_1 + 0x48) = local_58;
      *(undefined8 *)(param_1 + 0x50) = local_50;
LAB_140e2cb99:
      *(undefined8 *)(param_1 + 0x58) = local_48;
    }
    plVar6 = local_40;
    if (local_40 == (longlong *)0x0) goto LAB_140e2cbd1;
  }
  *(int *)(plVar6 + 0x21) = (int)plVar6[0x21] + -1;
  if ((int)plVar6[0x26] < 1) {
    FUN_1400847bc(plVar6 + 0x17,0);
    if ((int)plVar6[0x21] == 0) {
      FUN_140087e46(plVar6);
      if (*plVar6 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140e2cbd1;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar6);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar6);
      }
    }
  }
LAB_140e2cbd1:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2ccfa FUN_140e2ccfa body=40 status=ok
// SIG undefined FUN_140e2ccfa(void)

undefined8 FUN_140e2ccfa(undefined8 param_1,int param_2)

{
  FUN_140e2cd22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e2cd22 FUN_140e2cd22 body=74 status=ok
// SIG undefined FUN_140e2cd22(void)

void FUN_140e2cd22(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b693fd0;
  plVar3 = (longlong *)param_1[0x9b];
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
  FUN_140c09192(param_1);
  return;
}



// FUNCTION 140e2cd7a FUN_140e2cd7a body=31 status=ok
// SIG undefined FUN_140e2cd7a(void)

undefined8 FUN_140e2cd7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e2cd9a FUN_140e2cd9a body=2509 status=ok
// SIG undefined FUN_140e2cd9a(void)

void FUN_140e2cd9a(longlong param_1,longlong *param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  code *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  int local_108;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  uint local_fc;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined1 local_ec;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  uint local_d8;
  int local_d4;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  code *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_120 = param_2;
  local_118 = param_1;
  if ((*(longlong *)(param_1 + 0x180) != 0) && (lVar4 = FUN_1447210f0(), lVar4 != 0)) {
    dVar1 = *(double *)(lVar4 + 0x6d0);
    fVar21 = (float)(**(code **)(*local_120 + 0x148))();
    lVar4 = FUN_1405831b2();
    if (0 < *(int *)(lVar4 + 0x4b8)) {
      plVar18 = local_120 + 0xb;
      lVar11 = 0x18;
      lVar12 = 0;
      lVar16 = 0;
      do {
        lVar17 = *(longlong *)(lVar4 + 0x4b0);
        lVar5 = (longlong)*(int *)(lVar17 + 8 + lVar16 * 0x858);
        if (lVar5 < 1) {
LAB_140e2ceb9:
          if (((int)lVar16 < *(int *)(local_118 + 0x228)) &&
             (plVar18 = (longlong *)(lVar16 * 0x10 + *(longlong *)(local_118 + 0x220)),
             plVar18 != (longlong *)0x0)) {
            lVar5 = 0x648;
            goto LAB_140e2cef2;
          }
          break;
        }
        lVar15 = *(longlong *)(lVar16 * 0x858 + lVar17);
        lVar5 = lVar5 * 0x18;
        do {
          cVar2 = FUN_140334510(plVar18,lVar15,0);
          if (cVar2 != '\0') goto LAB_140e2ceb9;
          lVar15 = lVar15 + 0x18;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
        lVar16 = lVar16 + 1;
        lVar11 = lVar11 + 0x858;
        lVar12 = lVar12 + 0x858;
      } while (lVar16 < *(int *)(lVar4 + 0x4b8));
    }
  }
  goto LAB_140e2d42b;
LAB_140e2d1f7:
  uVar14 = 0x20;
LAB_140e2d1fd:
  uVar8 = uVar8 | uVar14;
  local_fc = uVar8;
LAB_140e2d207:
  lVar11 = lVar11 + 1;
  if (lVar11 == local_108) goto LAB_140e2d213;
  goto LAB_140e2d178;
  while (lVar5 = lVar5 + -0x210, lVar5 != -0x1f8) {
LAB_140e2cef2:
    lVar15 = lVar12 + lVar17 + lVar5;
    fVar22 = (float)FUN_140e2d916(lVar15);
    if (fVar22 <= fVar21) {
      fVar22 = (float)FUN_140e2e10a(lVar15);
      goto LAB_140e2cf23;
    }
  }
  fVar22 = 0.0;
LAB_140e2cf23:
  if ((longlong)(int)plVar18[1] == 0) {
    fVar24 = 0.0;
  }
  else {
    fVar24 = 0.0;
    lVar12 = 0;
    do {
      fVar24 = fVar24 + *(float *)(*plVar18 + 4 + lVar12);
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)plVar18[1] * 8 != lVar12);
  }
  lVar12 = FUN_1447e736e(lVar4 + 0x488);
  if (lVar12 == 0) {
    lVar12 = lVar4 + 0x408;
  }
  else {
    lVar12 = FUN_1447e736e(lVar4 + 0x488);
    lVar12 = lVar12 + 0x30;
  }
  if (lVar12 != 0) {
    fVar21 = (float)FUN_1448c9f94(lVar12,fVar21,0);
    iVar3 = (int)plVar18[1];
    *(uint *)(plVar18 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar18 + 0xc) < iVar3 + 1U) {
      FUN_1457b5f6a(plVar18,iVar3);
    }
    lVar12 = *plVar18;
    *(float *)(lVar12 + (longlong)iVar3 * 8) = fVar21 + (float)dVar1;
    *(float *)(lVar12 + 4 + (longlong)iVar3 * 8) = fVar22;
  }
  lVar17 = lVar17 + lVar11;
  uVar13 = 0xffffffff;
  uVar19 = 0;
  uVar9 = 0xffffffff;
  do {
    fVar21 = (float)FUN_140e2d768(lVar17);
    plVar18 = local_120;
    if (fVar21 <= fVar24 + fVar22) {
      uVar13 = uVar19 & 0xffffffff;
    }
    if (fVar21 <= fVar22) {
      uVar9 = uVar19 & 0xffffffff;
    }
    uVar19 = uVar19 + 1;
    lVar17 = lVar17 + 0x210;
  } while (uVar19 != 4);
  if (((int)uVar13 != -1) && ((int)uVar9 != -1)) {
    local_fc = 0;
    local_f8 = 0;
    local_ec = 0;
    local_f4 = 0;
    local_e8 = 0;
    fStack_e0 = 0.0;
    fStack_dc = 0.0;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_c8 = (undefined4)DAT_14c8464e0;
    uStack_c4 = DAT_14c8464e0._4_4_;
    uStack_c0 = (undefined4)DAT_14c8464e8;
    uStack_bc = DAT_14c8464e8._4_4_;
    local_b8 = DAT_14c8464f0;
    local_a0 = DAT_14c8464f0;
    local_b0 = (undefined4)DAT_14c8464e0;
    uStack_ac = DAT_14c8464e0._4_4_;
    uStack_a8 = (undefined4)DAT_14c8464e8;
    uStack_a4 = DAT_14c8464e8._4_4_;
    local_100 = (undefined1)lVar16;
    local_ff = (undefined1)uVar13;
    local_fe = (undefined1)uVar9;
    iVar3 = 0;
    if (local_120[5] != 0) {
      local_d8 = *(uint *)(local_120[5] + 0xc);
      if ((int)local_d8 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((local_d8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_d8 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar3 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar3 = *(int *)(lVar11 + 0x10);
        bVar20 = iVar3 == 0;
        if (bVar20) {
          *(int *)(lVar11 + 0x10) = iVar10;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar20) {
          iVar3 = iVar10;
        }
      }
    }
    local_f4 = CONCAT44(local_f4._4_4_,fVar24 + fVar22);
    local_d4 = iVar3;
    uVar23 = (**(code **)(*plVar18 + 0x148))(plVar18);
    local_f4 = CONCAT44(uVar23,(undefined4)local_f4);
    cVar2 = FUN_140e2de6e(plVar18);
    if ((cVar2 == '\0') && (*(longlong **)(local_118 + 0x180) != (longlong *)0x0)) {
      local_ec = (**(code **)(**(longlong **)(local_118 + 0x180) + 0x788))();
    }
    else {
      local_ec = 0;
    }
    FUN_140e2dc56(plVar18,&local_110,
                  -(*(float *)(plVar18 + 0xaa) == *(float *)((longlong)plVar18 + 0x554)) & 1);
    if (0 < (longlong)local_108) {
      lVar4 = *(longlong *)(lVar4 + 0x6d8);
      lVar11 = 0;
      uVar8 = local_fc;
LAB_140e2d178:
      lVar12 = *(longlong *)(local_110 + lVar11 * 8);
      if (lVar12 != 0) {
        if (*(char *)(lVar12 + 0x19) != '\x01') {
          if ((*(char *)(lVar12 + 0x19) == '\x02') && (plVar18 = local_120, lVar11 == 0)) {
            uVar14 = 8;
            goto LAB_140e2d1fd;
          }
          goto LAB_140e2d207;
        }
        if (lVar4 != 0) {
          if ((longlong)*(int *)(lVar12 + 0x78) != 0) {
            lVar16 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar12 + 0x70) + lVar16) == lVar4) goto LAB_140e2d1f7;
              lVar16 = lVar16 + 8;
            } while ((longlong)*(int *)(lVar12 + 0x78) * 8 != lVar16);
          }
          if ((longlong)*(int *)(lVar12 + 0x88) != 0) {
            lVar16 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar12 + 0x80) + lVar16) == lVar4) goto LAB_140e2d1f7;
              lVar16 = lVar16 + 8;
            } while ((longlong)*(int *)(lVar12 + 0x88) * 8 != lVar16);
          }
        }
        uVar14 = 0x10;
        if (lVar11 != 0) goto LAB_140e2d207;
        goto LAB_140e2d1fd;
      }
      goto LAB_140e2d207;
    }
LAB_140e2d213:
    if ((char)plVar18[0x9b] == '\x01' || (*(byte *)(plVar18 + 0x3a) & 4) != 0) {
      plVar6 = plVar18 + 0x9c;
      if ((char)plVar18[0x9b] == '\0') {
        plVar6 = plVar18 + 0x3c;
      }
      local_b8 = plVar6[2];
      local_c8 = (undefined4)*plVar6;
      uStack_c4 = *(undefined4 *)((longlong)plVar6 + 4);
      uStack_c0 = (undefined4)plVar6[1];
      uStack_bc = *(undefined4 *)((longlong)plVar6 + 0xc);
      local_d0 = 1;
    }
    else {
      local_a0 = plVar18[0x44];
      local_b0 = (undefined4)plVar18[0x42];
      uStack_ac = *(undefined4 *)((longlong)plVar18 + 0x214);
      uStack_a8 = (undefined4)plVar18[0x43];
      uStack_a4 = *(undefined4 *)((longlong)plVar18 + 0x21c);
    }
    plVar6 = (longlong *)plVar18[10];
    if (plVar6 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar6 + 8))(plVar6);
      lVar11 = FUN_14018fb44();
      if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30)) {
        local_f8 = *(undefined1 *)((longlong)plVar6 + 0x121);
      }
    }
    plVar6 = *(longlong **)(local_118 + 0x180);
    if (plVar6 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_140 = &local_98;
        local_98 = FUN_1449e2820;
        local_130 = FUN_14081d0ea;
        local_138 = FUN_1427b09ee;
        local_148 = &LAB_148630fef;
        local_150 = FUN_1464b6a91;
        local_158 = L"Engine";
        local_160 = 0;
        local_168 = 0x10004001;
        local_170 = 8;
        local_178 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,DAT_14cb56270);
      if (plVar6 != (longlong *)0x0) {
        if (DAT_14cb56270 == 0) {
          local_140 = &local_98;
          local_98 = FUN_1449e2820;
          local_130 = FUN_14081d0ea;
          local_138 = FUN_1427b09ee;
          local_148 = &LAB_148630fef;
          local_150 = FUN_1464b6a91;
          local_158 = L"Engine";
          local_160 = 0;
          local_168 = 0x10004001;
          local_170 = 8;
          local_178 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
        }
        plVar7 = (longlong *)FUN_144718840(plVar6,DAT_14cb56270);
        if (((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) &&
           (lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7), lVar4 != 0)) {
          if (((*(float *)((longlong)plVar18 + 0x554) != *(float *)(plVar18 + 0xaa)) ||
              (NAN(*(float *)((longlong)plVar18 + 0x554)) || NAN(*(float *)(plVar18 + 0xaa)))) &&
             (lVar11 = (**(code **)(*plVar7 + 0x20))(plVar7), lVar11 != 0)) {
            lVar12 = (**(code **)(*plVar7 + 0x20))(plVar7);
            lVar11 = *(longlong *)(lVar12 + 0x580);
            if ((DAT_14c950c29 == '\x01') && (lVar11 != 0)) {
              FUN_1456cec3c(lVar11);
            }
            fVar21 = 0.0;
            if (*(longlong **)(lVar12 + 0x588) != (longlong *)0x0 && lVar11 != 0) {
              fVar21 = (float)(**(code **)(**(longlong **)(lVar12 + 0x588) + 0x28))();
            }
            fStack_dc = (float)(-(uint)(0.0 < fVar21) &
                               (uint)((*(float *)(local_120 + 0xaa) -
                                      *(float *)((longlong)local_120 + 0x554)) / fVar21)) +
                        fStack_dc;
            local_fc = local_fc | 0x40;
            plVar18 = local_120;
          }
          if ((longlong)(int)plVar18[0x81] != 0) {
            lVar11 = plVar18[0x80];
            lVar12 = (longlong)(int)plVar18[0x81] * 0x20 + lVar11;
            do {
              lVar16 = FUN_1409d448e(lVar11);
              if ((lVar16 != 0) && (0 < *(int *)(lVar4 + 0x40))) {
                lVar5 = 0;
                lVar17 = 0;
                do {
                  lVar15 = FUN_1409d448e(*(longlong *)(lVar4 + 0x38) + lVar5 + 0x18);
                  if (lVar15 == lVar16) {
                    if ((int)lVar17 < *(int *)(lVar4 + 0x40)) {
                      fVar22 = (float)FUN_1405583ce(lVar5 + *(longlong *)(lVar4 + 0x38));
                      fVar21 = 0.0;
                      if (0.0 < fVar22) {
                        fVar21 = *(float *)(lVar11 + 0x18) / fVar22;
                      }
                    }
                    else {
                      fVar21 = 0.0;
                    }
                    cVar2 = *(char *)(lVar16 + 0x19);
                    if (cVar2 == '\x01') {
                      local_e8 = CONCAT44(fVar21 + local_e8._4_4_,(float)local_e8);
                    }
                    else if (cVar2 == '\0') {
                      local_e8 = CONCAT44(local_e8._4_4_,fVar21 + (float)local_e8);
                    }
                    else if (cVar2 == '\x02') {
                      fStack_e0 = fVar21 + fStack_e0;
                    }
                    break;
                  }
                  lVar17 = lVar17 + 1;
                  lVar5 = lVar5 + 0x88;
                } while (lVar17 < *(int *)(lVar4 + 0x40));
              }
              lVar11 = lVar11 + 0x20;
            } while (lVar11 != lVar12);
          }
        }
      }
    }
    FUN_140e2dabc(local_118,&local_100);
    if (local_110 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140e2d42b:
  if ((local_90 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e2d768 FUN_140e2d768 body=428 status=ok
// SIG undefined FUN_140e2d768(void)

undefined4 FUN_140e2d768(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
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
  local_88[0] = 0;
  FUN_14575a19a(local_b0,0);
  puVar4 = &local_80;
  FUN_1448729ea(param_1 + 0xa0,puVar4,local_b0);
  if (local_60 == 3) {
    uVar3 = 3;
    uVar6 = local_80;
  }
  else {
    puVar5 = &local_58;
    FUN_1400b56fe(puVar5,&local_80,3);
    uVar6 = 0;
    if (local_38 != 0) {
      uVar6 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar5 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar5);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar3 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  FUN_1448173f8(local_88);
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
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2d916 FUN_140e2d916 body=421 status=ok
// SIG undefined FUN_140e2d916(void)

undefined4 FUN_140e2d916(undefined8 param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
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
  local_88[0] = 0;
  FUN_14575a19a(local_b0,0);
  puVar4 = &local_80;
  FUN_1448729ea(param_1,puVar4,local_b0);
  if (local_60 == 3) {
    uVar3 = 3;
    uVar6 = local_80;
  }
  else {
    puVar5 = &local_58;
    FUN_1400b56fe(puVar5,&local_80,3);
    uVar6 = 0;
    if (local_38 != 0) {
      uVar6 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar5 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar5);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar3 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  FUN_1448173f8(local_88);
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
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2dabc FUN_140e2dabc body=408 status=ok
// SIG undefined FUN_140e2dabc(void)

void FUN_140e2dabc(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar16 = (undefined8 *)(param_1 + 0x280);
  if (*(char *)(param_1 + 0x2e8) == '\0') {
    if (puVar16 != param_2) {
      for (lVar15 = 0xd; lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar16 = *param_2;
        param_2 = param_2 + 1;
        puVar16 = puVar16 + 1;
      }
      goto LAB_140e2dbbf;
    }
  }
  else {
    if ((*(byte *)((longlong)param_2 + 1) <= *(byte *)(param_1 + 0x281)) &&
       ((*(byte *)((longlong)param_2 + 1) != *(byte *)(param_1 + 0x281) ||
        (*(byte *)((longlong)param_2 + 2) <= *(byte *)(param_1 + 0x282))))) {
      *(float *)(param_1 + 0x298) = *(float *)(param_2 + 3) + *(float *)(param_1 + 0x298);
      *(float *)(param_1 + 0x29c) =
           *(float *)((longlong)param_2 + 0x1c) + *(float *)(param_1 + 0x29c);
      *(float *)(param_1 + 0x2a0) = *(float *)(param_2 + 4) + *(float *)(param_1 + 0x2a0);
      *(float *)(param_1 + 0x2a4) =
           *(float *)((longlong)param_2 + 0x24) + *(float *)(param_1 + 0x2a4);
      goto LAB_140e2dbcd;
    }
    fVar1 = *(float *)(param_2 + 3);
    fVar2 = *(float *)((longlong)param_2 + 0x1c);
    fVar3 = *(float *)(param_2 + 4);
    fVar4 = *(float *)((longlong)param_2 + 0x24);
    uVar5 = param_2[0xb];
    uVar6 = param_2[0xc];
    uVar7 = param_2[9];
    uVar8 = param_2[10];
    uVar9 = param_2[7];
    uVar10 = param_2[8];
    uVar11 = param_2[5];
    uVar12 = param_2[6];
    uVar13 = *param_2;
    uVar14 = param_2[1];
    *(undefined8 *)(param_1 + 0x290) = param_2[2];
    *puVar16 = uVar13;
    *(undefined8 *)(param_1 + 0x288) = uVar14;
    *(float *)(param_1 + 0x298) = fVar1 + *(float *)(param_1 + 0x298);
    *(float *)(param_1 + 0x29c) = fVar2 + *(float *)(param_1 + 0x29c);
    *(float *)(param_1 + 0x2a0) = fVar3 + *(float *)(param_1 + 0x2a0);
    *(float *)(param_1 + 0x2a4) = fVar4 + *(float *)(param_1 + 0x2a4);
    local_58._0_4_ = (undefined4)uVar11;
    local_58._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
    uStack_50._0_4_ = (undefined4)uVar12;
    uStack_50._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
    local_48._0_4_ = (undefined4)uVar9;
    local_48._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_40._0_4_ = (undefined4)uVar10;
    uStack_40._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
    local_38._0_4_ = (undefined4)uVar7;
    local_38._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_30._0_4_ = (undefined4)uVar8;
    uStack_30._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    local_28._0_4_ = (undefined4)uVar5;
    local_28._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_20._0_4_ = (undefined4)uVar6;
    uStack_20._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    *(undefined4 *)(param_1 + 0x2a8) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0x2ac) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x2b0) = (undefined4)uStack_50;
    *(undefined4 *)(param_1 + 0x2b4) = uStack_50._4_4_;
    *(undefined4 *)(param_1 + 0x2b8) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 700) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x2c0) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x2c4) = uStack_40._4_4_;
    *(undefined4 *)(param_1 + 0x2c8) = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x2cc) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x2d0) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x2d4) = uStack_30._4_4_;
    *(undefined4 *)(param_1 + 0x2d8) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0x2dc) = local_28._4_4_;
    *(undefined4 *)(param_1 + 0x2e0) = (undefined4)uStack_20;
    *(undefined4 *)(param_1 + 0x2e4) = uStack_20._4_4_;
    local_58 = uVar11;
    uStack_50 = uVar12;
    local_48 = uVar9;
    uStack_40 = uVar10;
    local_38 = uVar7;
    uStack_30 = uVar8;
    local_28 = uVar5;
    uStack_20 = uVar6;
LAB_140e2dbbf:
    *(undefined1 *)(param_1 + 0x2e8) = 1;
  }
  *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x17d) | 8;
LAB_140e2dbcd:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2dc56 FUN_140e2dc56 body=254 status=ok
// SIG undefined FUN_140e2dc56(void)

longlong * FUN_140e2dc56(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FUN_140e2dd56(0,&local_50);
    lVar2 = local_50;
    if ((longlong)local_48 != 0) {
      lVar4 = 0;
      do {
        iVar1 = *(int *)(lVar2 + lVar4);
        if (((longlong)iVar1 < 0) || (*(int *)(*(longlong *)(param_1 + 0x480) + 0x40) <= iVar1)) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_1409d448e(*(longlong *)(*(longlong *)(param_1 + 0x480) + 0x38) +
                                (longlong)iVar1 * 0x88 + 0x18);
        }
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_140e2dfa8(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar3;
        lVar4 = lVar4 + 4;
      } while ((longlong)local_48 * 4 != lVar4);
    }
    if (local_50 != 0) {
      FUN_1400020a8(local_50);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e2dd56 FUN_140e2dd56 body=280 status=ok
// SIG undefined FUN_140e2dd56(void)

longlong * FUN_140e2dd56(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = *(uint *)(param_1 + 0x368);
  if (0 < (int)uVar2) {
    lVar5 = 0;
    do {
      if (0.0 < *(float *)(*(longlong *)(param_1 + 0x360) + lVar5 * 4)) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_2,iVar1);
        }
        *(int *)(*param_2 + (longlong)iVar1 * 4) = (int)lVar5;
        uVar2 = *(uint *)(param_1 + 0x368);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uVar2);
    if ((int)param_2[1] != 0) {
      return param_2;
    }
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if (0.0 < *(float *)(*(longlong *)(param_1 + 0x360) + uVar4 * 4)) goto LAB_140e2de44;
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
    }
  }
  if (param_3 == '\0') {
LAB_140e2de66:
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x330);
    uVar3 = uVar4;
    do {
      uVar3 = uVar3 - 1;
      if ((int)uVar4 < 1) goto LAB_140e2de66;
      uVar4 = (ulonglong)((int)uVar4 - 1);
    } while (*(float *)(*(longlong *)(param_1 + 0x328) + (uVar3 & 0xffffffff) * 4) <= 0.0);
  }
LAB_140e2de44:
  *(undefined4 *)(param_2 + 1) = 1;
  if (*(int *)((longlong)param_2 + 0xc) == 0) {
    FUN_1446f48e2(param_2,0);
  }
  *(int *)*param_2 = (int)uVar4;
  return param_2;
}



// FUNCTION 140e2de6e FUN_140e2de6e body=313 status=ok
// SIG undefined FUN_140e2de6e(void)

undefined8 FUN_140e2de6e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x478);
  if (lVar1 != 0) {
    if (DAT_14caf64b8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_147c45ce0;
      local_50 = &LAB_1463f1ff4;
      local_58 = &DAT_149e063b2;
      local_60 = 0x4000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      if (lVar2 != 0) {
        uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(longlong *)(lVar1 + 0x3c0) == lVar2);
        goto LAB_140e2ded2;
      }
      if (lVar1 == *(longlong *)(param_1 + 0x28)) {
        uVar3 = 1;
        goto LAB_140e2ded2;
      }
    }
  }
  uVar3 = 0;
LAB_140e2ded2:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2dfa8 FUN_140e2dfa8 body=353 status=ok
// SIG undefined FUN_140e2dfa8(void)

void FUN_140e2dfa8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e2e02d;
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
LAB_140e2e02d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140e2e10a FUN_140e2e10a body=425 status=ok
// SIG undefined FUN_140e2e10a(void)

undefined4 FUN_140e2e10a(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
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
  local_88[0] = 0;
  FUN_14575a19a(local_b0,0);
  puVar4 = &local_80;
  FUN_1448729ea(param_1 + 0x50,puVar4,local_b0);
  if (local_60 == 3) {
    uVar3 = 3;
    uVar6 = local_80;
  }
  else {
    puVar5 = &local_58;
    FUN_1400b56fe(puVar5,&local_80,3);
    uVar6 = 0;
    if (local_38 != 0) {
      uVar6 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar5 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar5);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar3 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  FUN_1448173f8(local_88);
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
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2e2b4 FUN_140e2e2b4 body=91 status=ok
// SIG undefined FUN_140e2e2b4(void)

void FUN_140e2e2b4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e2e310(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b808890;
  puVar1[0x73] = &PTR_FUN_14b808ed0;
  puVar1[0x74] = &PTR_FUN_14b808ef0;
  puVar1[0x75] = &PTR_FUN_14b808f90;
  puVar1[0x76] = &PTR_FUN_14b808fe0;
  return;
}



// FUNCTION 140e2e310 FUN_140e2e310 body=275 status=ok
// SIG undefined FUN_140e2e310(void)

undefined8 * FUN_140e2e310(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"CollisionComp",1);
  uVar2 = FUN_14088b378();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_140e2e424(param_1,param_2);
  *param_1 = &PTR_FUN_14b2cad20;
  param_1[0x73] = &PTR_FUN_14b2cb360;
  param_1[0x74] = &PTR_FUN_14b2cb380;
  param_1[0x75] = &PTR_FUN_14b2cb420;
  param_1[0x76] = &PTR_FUN_14b2cb470;
  plVar1 = (longlong *)param_1[0x72];
  *(undefined4 *)(plVar1 + 0xc5) = 0xff64ff64;
  plVar1[200] = 0x4044000000000000;
  plVar1[0xc9] = 0x4044000000000000;
  plVar1[0xca] = 0x4044000000000000;
  (**(code **)(*plVar1 + 0x728))(plVar1,DAT_14cb8cf60,1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2e424 FUN_140e2e424 body=434 status=ok
// SIG undefined FUN_140e2e424(void)

undefined8 * FUN_140e2e424(undefined8 *param_1)

{
  FUN_140e2e5d6();
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *param_1 = &PTR_FUN_14b2c1580;
  param_1[0x73] = &PTR_FUN_14b2c1bc0;
  param_1[0x74] = &PTR_FUN_14b2c1be0;
  param_1[0x75] = &PTR_FUN_14b2c1c80;
  param_1[0x76] = &PTR_FUN_14b2c1cd0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 1;
  param_1[0x7e] = 0xbf80000000000000;
  *(undefined1 *)(param_1 + 0x7f) = 1;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 2;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0x200000000;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 2;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined1 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x509) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xb3] = &DAT_14a171d50;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb4] = &DAT_14cb70058;
  return param_1;
}



// FUNCTION 140e2e5d6 FUN_140e2e5d6 body=257 status=ok
// SIG undefined FUN_140e2e5d6(void)

undefined8 * FUN_140e2e5d6(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14aadc870;
  param_1[0x72] = 0;
  FUN_1405bab3a(param_1,1);
  FUN_1403121a6(param_1,0);
  FUN_1446f470e(&local_20,L"CollisionComp",1);
  uVar2 = FUN_140e2e6d8();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  bVar1 = DAT_14c950c29;
  if (lVar3 == 0 || DAT_14c950c29 != 1) {
    param_1[0x72] = lVar3;
    if (lVar3 == 0) goto LAB_140e2e68f;
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x72] = lVar3;
    bVar1 = DAT_14c950c29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  *(byte *)(lVar3 + 0x1f9) = *(byte *)(lVar3 + 0x1f9) & 0xf7;
LAB_140e2e68f:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2e6d8 FUN_140e2e6d8 body=228 status=ok
// SIG undefined FUN_140e2e6d8(void)

longlong FUN_140e2e6d8(void)

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
  if (DAT_14cad2400 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147a053bb;
    local_40 = &LAB_1463bb802;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x640;
    FUN_14081cfa3(L"/Script/Engine",L"ShapeComponent",&DAT_14cad2400,FUN_1463bb7e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad2400;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2e7be FUN_140e2e7be body=99 status=ok
// SIG undefined FUN_140e2e7be(void)

void FUN_140e2e7be(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e2e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140e2e81d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 140e2e82e FUN_140e2e82e body=9 status=ok
// SIG undefined FUN_140e2e82e(void)

void FUN_140e2e82e(longlong param_1)

{
  FUN_140e2e838(param_1 + 0x10);
  return;
}



// FUNCTION 140e2e838 FUN_140e2e838 body=483 status=ok
// SIG undefined FUN_140e2e838(void)

void FUN_140e2e838(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b42f840;
  FUN_144760e21(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  plVar3 = param_1 + 0x11;
  if (*(int *)(param_1 + 0x12) == 0) {
LAB_140e2e8a4:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x12) = 0;
      goto LAB_140e2e8a4;
    }
  }
  plVar3 = param_1 + 0xf;
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140e2e8cd;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140e2e8cd:
  FUN_140bef190(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140e2ea1b(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140bef143(param_1[9],*(undefined4 *)(param_1 + 10));
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
  FUN_140af926c(param_1);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e2ea03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140e2ea1b FUN_140e2ea1b body=88 status=ok
// SIG undefined FUN_140e2ea1b(void)

void FUN_140e2ea1b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      FUN_144760e21(plVar1[2],(int)plVar1[3]);
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_140e2ea73(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e2ea73 FUN_140e2ea73 body=77 status=ok
// SIG undefined FUN_140e2ea73(void)

void FUN_140e2ea73(longlong param_1,int param_2)

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



// FUNCTION 140e2eac0 FUN_140e2eac0 body=40 status=ok
// SIG undefined FUN_140e2eac0(void)

undefined8 FUN_140e2eac0(undefined8 param_1,int param_2)

{
  FUN_140e2eae8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e2eae8 FUN_140e2eae8 body=160 status=ok
// SIG undefined FUN_140e2eae8(void)

void FUN_140e2eae8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b193cc0;
  param_1[0xd] = &PTR_FUN_14b194040;
  param_1[0x16] = &PTR_FUN_14b194080;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_140e2eb88(param_1 + 0x29);
  plVar3 = (longlong *)param_1[0x27];
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
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140843792(param_1);
  return;
}



// FUNCTION 140e2eb88 FUN_140e2eb88 body=55 status=ok
// SIG undefined FUN_140e2eb88(void)

void FUN_140e2eb88(longlong *param_1)

{
  FUN_140e2ebc0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e2ebc0 FUN_140e2ebc0 body=121 status=ok
// SIG undefined FUN_140e2ebc0(void)

void FUN_140e2ebc0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140e2ec3a(param_1,param_2);
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



// FUNCTION 140e2ec3a FUN_140e2ec3a body=112 status=ok
// SIG undefined FUN_140e2ec3a(void)

void FUN_140e2ec3a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xf0)) {
      uVar2 = uVar1 / 0xf0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf0,0x10);
  }
  return;
}



// FUNCTION 140e2ecaa FUN_140e2ecaa body=86 status=ok
// SIG undefined FUN_140e2ecaa(void)

void FUN_140e2ecaa(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_5;
  local_14 = param_3;
  local_10 = param_4;
  FUN_140e2ed02(param_5,*(undefined8 *)(param_2 + 0x3b8));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2ed02 FUN_140e2ed02 body=1302 status=ok
// SIG undefined FUN_140e2ed02(void)

void FUN_140e2ed02(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) goto LAB_140e2ee6b;
  uVar11 = *(undefined8 *)(param_2 + 0x218);
  local_88 = *param_3;
  uStack_80 = *(undefined4 *)(param_3 + 1);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_98 = param_1;
  uStack_90 = uVar11;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140e2ed71;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140e2ed76;
      goto LAB_140e2edab;
    }
  }
  else {
LAB_140e2ed71:
    if (iVar6 != 0x10) {
LAB_140e2edab:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_140e2ed76;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_140e2ed76;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_140e2ef33;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_142fb49ae);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_140e2ef33:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x19);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x19);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_140e2efb3;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_140e2efb3:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a2e8240;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_98;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_98._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_90._4_4_;
        *(undefined4 *)(puVar16 + 0x17) = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar16 + 0xbc) = local_88._4_4_;
        *(undefined4 *)(puVar16 + 0x18) = uStack_80;
        *(undefined4 *)((longlong)puVar16 + 0xc4) = uStack_7c;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78[0] = (undefined1 *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x28,8);
        *local_68 = (longlong)&PTR_LAB_14a2e8220;
        *(undefined4 *)(local_68 + 3) = (undefined4)local_88;
        *(undefined4 *)((longlong)local_68 + 0x1c) = local_88._4_4_;
        *(undefined4 *)(local_68 + 4) = uStack_80;
        *(undefined4 *)((longlong)local_68 + 0x24) = uStack_7c;
        *(undefined4 *)(local_68 + 1) = (undefined4)local_98;
        *(undefined4 *)((longlong)local_68 + 0xc) = local_98._4_4_;
        *(undefined4 *)(local_68 + 2) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)local_68 + 0x14) = uStack_90._4_4_;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78[0] = &LAB_140c21af6;
        }
        local_a8 = local_78;
        FUN_14005a792(&DAT_14ca9a440,L"UpdatePrimitiveCmd",&DAT_14ca44c44);
        if (local_78[0] != (undefined1 *)0x0) {
          plVar13 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar13 = local_58;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      goto LAB_140e2ee6b;
    }
  }
LAB_140e2ed76:
  FUN_140c21b0e(param_1 + 0x53a0,uVar11,&local_88);
LAB_140e2ee6b:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2f220 FUN_140e2f220 body=57 status=ok
// SIG undefined FUN_140e2f220(void)

void FUN_140e2f220(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57190 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57190 = FUN_140002ddd(FUN_1464bb9b1,uVar1,L"GbxDialogQuietTimeDef");
  }
  return;
}



// FUNCTION 140e2f260 FUN_140e2f260 body=256 status=ok
// SIG undefined FUN_140e2f260(void)

void FUN_140e2f260(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb41380);
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    piVar3 = (int *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))
                              (param_1 + 0x678,&local_48,0);
    if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, (longlong)iVar1 != -1)) {
      lVar2 = *(longlong *)(param_1 + 0x6b8);
      if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_3);
      }
      *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_3;
      *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 4;
    }
  }
  else {
    local_50 = 0;
    FUN_14485c47a(&local_50,param_3);
    FUN_1481f5d5e(*(undefined8 *)(param_1 + 0x760),param_2,local_50);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2f36c FUN_140e2f36c body=413 status=ok
// SIG undefined FUN_140e2f36c(void)

undefined8 * FUN_140e2f36c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a5553e0;
  param_1[5] = &PTR_FUN_14a555880;
  param_1[0x2d] = &PTR_FUN_14a5558c0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x3f800000;
  param_1[0x33] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  *(byte *)((longlong)param_1 + 0x20c) = *(byte *)((longlong)param_1 + 0x20c) & 0xfb;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) & 0xe0 | 3;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  FUN_140e2f50a(param_1,4);
  *(byte *)((longlong)param_1 + 0x20c) = *(byte *)((longlong)param_1 + 0x20c) & 0xfe;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  param_1[0x32] = 0x3f800000;
  param_1[0x33] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x34) = 2;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  if (DAT_14caba4dc == '\0') {
    DAT_14caba4dc = '\x01';
    FUN_1457b62ac(&DAT_14cae8d10,local_38,FUN_1405e2b44);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2f50a FUN_140e2f50a body=233 status=ok
// SIG undefined FUN_140e2f50a(void)

void FUN_140e2f50a(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0xdc) != param_2) {
    *(char *)(param_1 + 0xdc) = param_2;
    local_28 = DAT_14cab8dc8;
    local_30 = DAT_14cab8dc0;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  FUN_140760c2c(param_1,&local_40);
  if (local_40 != (longlong *)0x0) {
    if ((byte)(param_2 - 1U) < 4) {
      puVar3 = (&PTR_DAT_14a545290)[(byte)(param_2 - 1U)];
    }
    else {
      puVar3 = &DAT_14c96b238;
    }
    local_58 = *puVar3;
    local_57 = 1;
    local_50 = 0;
    uStack_48 = 0;
    (**(code **)(*local_40 + 0x1c0))();
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


