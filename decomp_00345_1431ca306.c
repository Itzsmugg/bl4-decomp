// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1431ca306 FUN_1431ca306 body=69 status=ok
// SIG undefined FUN_1431ca306(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca306(void)

{
  _DAT_14ca79888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ca348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79890,1);
  return;
}



// FUNCTION 1431ca34b FUN_1431ca34b body=69 status=ok
// SIG undefined FUN_1431ca34b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca34b(void)

{
  _DAT_14ca798a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ca38d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca798a8,1);
  return;
}



// FUNCTION 1431ca390 FUN_1431ca390 body=69 status=ok
// SIG undefined FUN_1431ca390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca390(void)

{
  _DAT_14ca798c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ca3d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca798c8,1);
  return;
}



// FUNCTION 1431ca3d5 FUN_1431ca3d5 body=69 status=ok
// SIG undefined FUN_1431ca3d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca3d5(void)

{
  _DAT_14ca798d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ca417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca798d8,1);
  return;
}



// FUNCTION 1431ca41a FUN_1431ca41a body=69 status=ok
// SIG undefined FUN_1431ca41a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca41a(void)

{
  _DAT_14ca798e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ca45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca798e8,1);
  return;
}



// FUNCTION 1431ca45f FUN_1431ca45f body=35 status=ok
// SIG undefined FUN_1431ca45f(void)

void FUN_1431ca45f(void)

{
  FUN_145d03cb4(L" --- Programs Num: %d, Size: %d \n",DAT_14ca7999c,DAT_14ca79a64);
  return;
}



// FUNCTION 1431ca482 FUN_1431ca482 body=69 status=ok
// SIG undefined FUN_1431ca482(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca482(void)

{
  _DAT_14ca79900 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ca4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca79908,1);
  return;
}



// FUNCTION 1431ca4d5 FUN_1431ca4d5 body=194 status=ok
// SIG undefined FUN_1431ca4d5(void)

void FUN_1431ca4d5(longlong *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  void *_Dst;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 1) {
    sVar2 = strlen(param_2);
    uVar4 = (int)sVar2 + 1;
    *(int *)(param_1 + 1) = (int)sVar2 + iVar1 + 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar4) {
      FUN_144761492(param_1,iVar1);
    }
    if (uVar4 == 0) {
      return;
    }
    _Dst = (void *)((longlong)iVar1 + *param_1);
  }
  else {
    uVar3 = iVar1 - 1;
    sVar2 = strlen(param_2);
    uVar4 = (uint)sVar2;
    *(uint *)(param_1 + 1) = uVar4 + iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar4) {
      FUN_144761492(param_1,iVar1);
      *(undefined1 *)((longlong)(int)uVar4 + *param_1 + (ulonglong)uVar3) =
           *(undefined1 *)(*param_1 + (ulonglong)uVar3);
    }
    else {
      *(undefined1 *)((longlong)(int)uVar4 + *param_1 + (ulonglong)uVar3) =
           *(undefined1 *)(*param_1 + (ulonglong)uVar3);
      if (uVar4 == 0) {
        return;
      }
    }
    _Dst = (void *)((ulonglong)uVar3 + *param_1);
  }
  memcpy(_Dst,param_2,(longlong)(int)uVar4);
  return;
}



// FUNCTION 1431ca597 FUN_1431ca597 body=314 status=ok
// SIG undefined FUN_1431ca597(void)

void FUN_1431ca597(longlong *param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  char *_Str;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen(param_3);
  _Str = (char *)*param_1;
  pcVar4 = strstr(_Str,param_2);
  if (pcVar4 != (char *)0x0) {
    iVar7 = (int)sVar2;
    uVar8 = (uint)sVar3;
    sVar2 = (size_t)(int)uVar8;
    do {
      iVar6 = (int)pcVar4 - (int)_Str;
      if (iVar7 != 0) {
        iVar1 = (int)param_1[1];
        iVar5 = iVar1 - (iVar7 + iVar6);
        if (iVar5 != 0) {
          memmove(_Str + iVar6,_Str + iVar6 + iVar7,(longlong)iVar5);
          iVar1 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar1 - iVar7;
        FUN_145804ca2(param_1);
      }
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = uVar8 + iVar1;
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar8) {
        FUN_144761492(param_1,iVar1);
        memmove((void *)(*param_1 + (longlong)iVar6 + sVar2),(void *)(*param_1 + (longlong)iVar6),
                (ulonglong)(uint)(iVar1 - iVar6));
LAB_1431ca651:
        memcpy((void *)(*param_1 + (longlong)iVar6),param_3,sVar2);
      }
      else {
        memmove((void *)(*param_1 + (longlong)iVar6 + sVar2),(void *)(*param_1 + (longlong)iVar6),
                (ulonglong)(uint)(iVar1 - iVar6));
        if (uVar8 != 0) goto LAB_1431ca651;
      }
      _Str = (char *)*param_1;
      pcVar4 = strstr(_Str + iVar6,param_2);
    } while (pcVar4 != (char *)0x0);
  }
  return;
}



// FUNCTION 1431ca6d2 FUN_1431ca6d2 body=769 status=ok
// SIG undefined FUN_1431ca6d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca6d2(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79918);
  FUN_1431ca9d4();
  puVar4 = (undefined8 *)FUN_1473f832a(param_1[0x1f] ^ param_1[0x1e] ^ param_1[0x20],param_1 + 0x1e)
  ;
  iVar3 = *(int *)(puVar4 + 1);
  *param_1 = iVar3;
  if (iVar3 == 0) {
    local_48 = CONCAT44(local_48._4_4_,param_2);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca79b10) {
      FUN_144b3d300(&DAT_14ca79b10);
      if (DAT_14ca79b10 == -1) {
        _DAT_14ca79ae0 = 0;
        _DAT_14ca79ae8 = 0;
        DAT_14ca79ac0 = 0;
        _DAT_14ca79ac8 = 0;
        _DAT_14ca79aec = 0xffffffff00000080;
        DAT_14ca79af4 = 0;
        DAT_14ca79b00 = 0;
        DAT_14ca79b08 = 0;
        atexit(FUN_1431cc924);
        _Init_thread_footer(&DAT_14ca79b10);
      }
    }
    plVar5 = (longlong *)FUN_1473f0898(param_2,&local_48);
    iVar3 = (int)plVar5[1];
    if (iVar3 == 0) {
      do {
        uVar2 = (*DAT_14ca7fed0)(local_48 & 0xffffffff);
        iVar3 = (int)plVar5[1];
        *(uint *)(plVar5 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
          FUN_1447808da(plVar5,iVar3);
        }
        *(undefined4 *)(*plVar5 + (longlong)iVar3 * 4) = uVar2;
        iVar3 = (int)plVar5[1];
      } while (iVar3 < 0x400);
    }
    iVar1 = *(int *)(*plVar5 + -4 + (longlong)iVar3 * 4);
    *(int *)(plVar5 + 1) = iVar3 + -1;
    FUN_144780a3c(plVar5);
    *param_1 = iVar1;
    local_48 = 0;
    uStack_40 = 0;
    iVar3 = *(int *)(puVar4 + 4);
    if (iVar3 == -1) {
      FUN_14681b27a(&local_48,puVar4 + 2);
    }
    else {
      if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar3);
      }
      uVar2 = 0;
      if (iVar3 != 0) {
        FUN_141701710(&local_48);
        uVar2 = *(undefined4 *)(puVar4 + 4);
      }
      FUN_14626819e(&local_48,uVar2,1);
      local_78 = (longlong)*(int *)(puVar4 + 3);
      local_68 = 0;
      local_70 = 0;
      FUN_140aa9920(*puVar4,local_48,(longlong)*(int *)(puVar4 + 4),puVar4[2]);
    }
    local_4c = (int)uStack_40 + -1;
    local_58 = local_48;
    (*DAT_14ca7fce0)(*param_1,1);
    (*DAT_14ca7fce8)(*param_1);
    iVar3 = *param_1;
    (*DAT_14ca7fed8)(iVar3,0x8b81,&local_34);
    if (local_34 != 1) {
      (*DAT_14ca7fed8)(iVar3,0x8b84,&local_38);
      if (1 < (longlong)local_38) {
        uVar6 = FUN_14001cc68((longlong)local_38,0);
        (*DAT_14ca7fee0)(iVar3,local_38,0,uVar6);
        if (1 < local_38) {
          FUN_1400020a8(uVar6);
        }
      }
      iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar3 != 0x40000002) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
        FUN_140ad26c0();
        GetCurrentThreadId();
      }
    }
    *(int *)(puVar4 + 1) = *param_1;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79918);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ca9d4 FUN_1431ca9d4 body=152 status=ok
// SIG undefined FUN_1431ca9d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ca9d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca79ab8) {
    FUN_144b3d300(&DAT_14ca79ab8);
    if (DAT_14ca79ab8 == -1) {
      DAT_14ca79a88 = 0;
      DAT_14ca79a90 = 0;
      DAT_14ca79a68 = 0;
      _DAT_14ca79a70 = 0;
      _DAT_14ca79a94 = 0xffffffff00000080;
      DAT_14ca79a9c = 0;
      DAT_14ca79aa8 = 0;
      DAT_14ca79ab0 = 0;
      atexit(FUN_1431cc8fb);
      _Init_thread_footer(&DAT_14ca79ab8);
      return;
    }
  }
  return;
}



// FUNCTION 1431caa6c FUN_1431caa6c body=488 status=ok
// SIG undefined FUN_1431caa6c(void)

void FUN_1431caa6c(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *_Src;
  void *_Dst;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  size_t sVar7;
  longlong lVar8;
  uint uVar9;
  byte *_Str;
  int iVar10;
  longlong lVar11;
  
  _Src = (byte *)*param_2;
  _Str = _Src;
  do {
    pbVar6 = (byte *)strchr((char *)_Str,10);
    if (pbVar6 == (byte *)0x0) {
      sVar7 = strlen((char *)_Str);
      pbVar6 = _Str + (int)sVar7;
    }
    bVar1 = *_Str;
    uVar5 = (uint)bVar1;
    pbVar3 = _Str;
    if (3 < (int)(char)bVar1 - 10U && bVar1 != 0x23) {
      do {
        iVar4 = isspace(uVar5 & 0xff);
        if (iVar4 == 0) {
          if (_Str < _Src || (longlong)_Str - (longlong)_Src == 0) {
            return;
          }
          iVar4 = (int)param_1[1];
          uVar5 = (uint)((longlong)_Str - (longlong)_Src);
          if (0 < (longlong)iVar4) {
            uVar9 = iVar4 - 1;
            *(uint *)(param_1 + 1) = iVar4 + uVar5;
            if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar4) < uVar5) {
              FUN_144761492(param_1,iVar4);
              *(undefined1 *)((longlong)(int)uVar5 + *param_1 + (ulonglong)uVar9) =
                   *(undefined1 *)(*param_1 + (ulonglong)uVar9);
            }
            else {
              *(undefined1 *)((longlong)(int)uVar5 + *param_1 + (ulonglong)uVar9) =
                   *(undefined1 *)(*param_1 + (ulonglong)uVar9);
              if (uVar5 == 0) goto LAB_1431cabc3;
            }
            memcpy((void *)((ulonglong)uVar9 + *param_1),_Src,(longlong)(int)uVar5);
            goto LAB_1431cabc3;
          }
          iVar10 = iVar4 + uVar5;
          *(int *)(param_1 + 1) = iVar10;
          iVar2 = *(int *)((longlong)param_1 + 0xc);
          if ((uint)(iVar2 - iVar4) < uVar5) {
            FUN_144761492(param_1,iVar4);
LAB_1431cab8d:
            memcpy((void *)((longlong)iVar4 + *param_1),_Src,(longlong)(int)uVar5);
            iVar10 = (int)param_1[1];
            iVar2 = *(int *)((longlong)param_1 + 0xc);
          }
          else if (uVar5 != 0) goto LAB_1431cab8d;
          *(int *)(param_1 + 1) = iVar10 + 1;
          if (iVar2 == iVar10) {
            FUN_144761492(param_1);
          }
          *(undefined1 *)(*param_1 + (longlong)iVar10) = 0;
LAB_1431cabc3:
          iVar4 = (int)param_1[1];
          lVar11 = (longlong)iVar4;
          lVar8 = *param_1;
          if (*(char *)(lVar8 + (iVar4 + -2)) != '\n') {
            *(int *)(param_1 + 1) = iVar4 + 1;
            if (*(int *)((longlong)param_1 + 0xc) == iVar4) {
              FUN_144761492(param_1,iVar4);
              lVar8 = *param_1;
            }
            *(undefined1 *)(lVar8 + lVar11) = *(undefined1 *)(lVar8 + -1 + lVar11);
            *(undefined1 *)(*param_1 + -1 + lVar11) = 10;
          }
          _Dst = (void *)*param_2;
          if ((longlong)_Str - (longlong)_Dst == 0) {
            return;
          }
          iVar10 = (int)((longlong)_Str - (longlong)_Dst);
          iVar4 = iVar10;
          if (*(int *)(param_2 + 1) - iVar10 != 0) {
            memmove(_Dst,(void *)((longlong)iVar10 + (longlong)_Dst),
                    (longlong)(*(int *)(param_2 + 1) - iVar10));
            iVar4 = *(int *)(param_2 + 1);
          }
          *(int *)(param_2 + 1) = iVar4 - iVar10;
          FUN_145804ca2(param_2);
          return;
        }
        uVar5 = (uint)(char)pbVar3[1];
        pbVar3 = pbVar3 + 1;
      } while (3 < uVar5 - 10);
    }
    _Str = pbVar6 + (*pbVar6 == 10);
  } while( true );
}



// FUNCTION 1431cac54 FUN_1431cac54 body=105 status=ok
// SIG undefined FUN_1431cac54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431cac54(undefined4 param_1,undefined8 param_2)

{
  if (DAT_14ca79b14 == '\0') {
    _DAT_14ca79b24 = 0;
    _DAT_14ca79b1c = 0;
    DAT_14ca79b18 = 1;
    if (DAT_14ca7c3e0 == '\x01') {
      DAT_14ca79b18 = 2;
      _DAT_14ca79b1c = (ulonglong)DAT_14c760cb8 << 0x20;
    }
    _DAT_14ca79b1c = CONCAT62(DAT_14ca79b1c_2,DAT_14ca85550);
    DAT_14ca79b14 = '\x01';
  }
  FUN_1473ed5c7(param_2,param_1);
  return;
}



// FUNCTION 1431cacbd FUN_1431cacbd body=367 status=ok
// SIG undefined FUN_1431cacbd(void)

undefined8 FUN_1431cacbd(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  lVar2 = DAT_14ca79470;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar9 = 0;
  }
  else if (iVar1 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  if (*(int *)(lVar2 + uVar9 * 4) == 0) {
    uVar5 = (*DAT_14ca7ff08)();
    (*DAT_14ca7fe40)(uVar5,*(undefined4 *)*param_2,(undefined4 *)*param_2 + 1,
                     *(int *)(param_2 + 1) + -4);
    *param_1 = uVar5;
    cVar4 = FUN_1431cbdf3(uVar5);
  }
  else {
    local_48 = (undefined4 *)0x0;
    uStack_40 = 0;
    cVar4 = FUN_1473e4169(param_2);
    puVar3 = local_48;
    if (cVar4 == '\0') {
      cVar4 = '\0';
    }
    else {
      iVar1 = (int)uStack_40;
      uVar5 = (*DAT_14ca7ff08)();
      (*DAT_14ca7fe40)(uVar5,*puVar3,puVar3 + 1,iVar1 + -4);
      *param_1 = uVar5;
      cVar4 = FUN_1431cbdf3(uVar5);
    }
    if (local_48 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (cVar4 == '\0') {
    uVar8 = 0;
  }
  else {
    local_48 = (undefined4 *)((ulonglong)local_48 & 0xffffffff00000000);
    (*DAT_14ca7fba0)(*param_1,0x8741,&local_48);
    DAT_14ca7999c = DAT_14ca7999c + 1;
    DAT_14ca79a64 = DAT_14ca79a64 + (int)local_48;
    uVar8 = CONCAT71((uint7)(uint3)((ulonglong)local_48 >> 8),1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431cae2e FUN_1431cae2e body=2844 status=ok
// SIG undefined FUN_1431cae2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1431cae2e(longlong *param_1,longlong param_2,longlong param_3,uint param_4,int param_5)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  longlong *plVar12;
  byte bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  undefined1 local_a0 [56];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_52;
  undefined1 local_51;
  byte bStack_50;
  byte abStack_4f [7];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1473ee3dc(param_1,param_3 + 8);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca79958) && (FUN_144b3d300(), DAT_14ca79958 == -1)) {
    _DAT_14ca79940 = DAT_14c760ce0;
    _DAT_14ca79948 = DAT_14c760ce0 + DAT_14c760ce8;
    _DAT_14ca79944 = 0;
    _DAT_14ca7994c = 0;
    _DAT_14ca79954 = 0;
    _Init_thread_footer(&DAT_14ca79958);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca79978) && (FUN_144b3d300(&DAT_14ca79978), DAT_14ca79978 == -1)) {
    _DAT_14ca79960 = DAT_14c760ce8;
    _DAT_14ca79964 = DAT_14c760ce0;
    _DAT_14ca79968 = DAT_14c760cb4;
    _DAT_14ca7996c = 0;
    _DAT_14ca79974 = DAT_14c760ce4;
    _Init_thread_footer(&DAT_14ca79978);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca79998) && (FUN_144b3d300(&DAT_14ca79998), DAT_14ca79998 == -1)) {
    _DAT_14ca79980 = 0;
    uRam000000014ca79984 = 0;
    uRam000000014ca79988 = 0xffffffff;
    uRam000000014ca7998c = 0xffffffff;
    _DAT_14ca79990 = 0xffffffff;
    _Init_thread_footer(&DAT_14ca79998);
  }
  local_c0 = param_1 + 0xc;
  local_a8 = param_1 + 0xe;
  local_b8 = param_1 + 0x10;
  lVar22 = 0;
  abStack_4f[2] = 0;
  abStack_4f[3] = 0;
  abStack_4f[4] = 0;
  abStack_4f[5] = 0;
  abStack_4f[6] = 0;
  local_52 = (char)(0x630000677076 >> ((char)param_4 * '\b' & 0x3fU));
  if (5 < param_4) {
    local_52 = 0;
  }
  local_51 = 0x75;
  bStack_50 = 0x5f;
  abStack_4f[1] = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x700000000;
  lVar17 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  local_b0 = (ulonglong)param_4;
  do {
    uVar14 = 0x677375696c6d68 >> ((char)lVar17 * '\b' & 0x3fU);
    abStack_4f[0] = (byte)uVar14;
    iVar3 = (*DAT_14ca7fcf0)(*(undefined4 *)(param_2 + 0xc0),&local_52);
    uVar24 = local_60;
    if (iVar3 != -1) {
      lVar21 = (longlong)(int)local_60;
      uVar4 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,uVar4);
      if (local_60._4_4_ < uVar4) {
        FUN_1473f8a42(local_a0,uVar24 & 0xffffffff);
      }
      puVar7 = local_68;
      if (local_68 == (undefined1 *)0x0) {
        puVar7 = local_a0;
      }
      uVar5 = (undefined4)uVar14;
      uVar14 = 0;
      *(ulonglong *)(puVar7 + lVar21 * 8) = (CONCAT44(uVar5,iVar3) & 0x7fffffffff) + lVar22;
      param_2 = local_d0;
    }
    plVar20 = local_c8;
    lVar17 = lVar17 + 1;
    lVar22 = lVar22 + 0x10000000000;
  } while (lVar17 != 7);
  iVar3 = (int)local_c8[3];
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(local_c8 + 0xd) = 0;
  if (*(int *)((longlong)local_c8 + 0x6c) != iVar3) {
    FUN_1473f8b36();
    iVar3 = (int)plVar20[3];
  }
  if (iVar3 != 0) {
    lVar17 = plVar20[2];
    lVar22 = lVar17 + (longlong)iVar3 * 4;
    plVar16 = local_c0;
    do {
      uVar24 = (ulonglong)*(byte *)(lVar17 + 2);
      puVar7 = local_68;
      if (local_68 == (undefined1 *)0x0) {
        puVar7 = local_a0;
      }
      if ((longlong)(int)local_60 != 0) {
        lVar21 = 0;
        do {
          if (puVar7[lVar21 + 4] == *(byte *)(lVar17 + 2)) {
            uVar15 = *(ulonglong *)(puVar7 + lVar21);
            uVar24 = uVar15 >> 0x20;
            uVar14 = uVar15 >> 0x30;
            uVar19 = uVar15;
            goto LAB_1431cb25e;
          }
          lVar21 = lVar21 + 8;
        } while ((longlong)(int)local_60 * 8 != lVar21);
      }
      uVar15 = 0xffffffff;
      uVar19 = 0x70000000000;
LAB_1431cb25e:
      iVar3 = (int)plVar20[0xd];
      *(uint *)(plVar20 + 0xd) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar20 + 0x6c) < iVar3 + 1U) {
        FUN_1473f8b96(plVar16,iVar3);
        plVar16 = local_c0;
      }
      *(ulonglong *)(*plVar16 + (longlong)iVar3 * 8) =
           uVar15 & 0xffffffff | (uVar24 & 0xff) << 0x20 | uVar19 & 0xff0000000000 | uVar14 << 0x30;
      lVar17 = lVar17 + 4;
    } while (lVar17 != lVar22);
  }
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_51 = 99;
  abStack_4f[3] = 0;
  bStack_50 = 0;
  abStack_4f[0] = 0;
  abStack_4f[1] = 0;
  abStack_4f[2] = 0;
  FUN_1473ee520(local_a8,*(undefined1 *)((longlong)plVar20 + 0x45));
  iVar3 = (int)plVar20[1];
  if (0 < iVar3) {
    plVar16 = (longlong *)0x0;
    lVar22 = local_d0;
    do {
      pbVar8 = &bStack_50;
      if (&DAT_00000009 < plVar16) {
        bStack_50 = (char)(((ulonglong)plVar16 & 0xffffffff) / 10) + 0x30;
        pbVar8 = abStack_4f;
      }
      plVar12 = (longlong *)(*plVar20 + (longlong)plVar16 * 0x10);
      plVar18 = (longlong *)((longlong)plVar16 * 0x10 + plVar20[0xe]);
      *pbVar8 = (char)plVar16 + (char)(((ulonglong)plVar16 & 0xffffffff) / 10) * -10 | 0x30;
      pbVar8[1] = 0x5f;
      pbVar8[3] = 0;
      lVar17 = (longlong)(int)plVar12[1];
      if (lVar17 != 0) {
        lVar21 = *plVar12;
        lVar23 = 0;
        local_c0 = plVar16;
        do {
          pbVar8[2] = *(byte *)(lVar21 + 2 + lVar23);
          uVar5 = (*DAT_14ca7fcf0)(*(undefined4 *)(lVar22 + 0xc0),&local_52);
          uVar2 = *(undefined2 *)(lVar21 + 2 + lVar23);
          iVar3 = (int)plVar18[1];
          *(uint *)(plVar18 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar18 + 0xc) < iVar3 + 1U) {
            FUN_1473f8b96(plVar18,iVar3);
          }
          *(ulonglong *)(*plVar18 + (longlong)iVar3 * 8) = (ulonglong)CONCAT24(uVar2,uVar5);
          lVar23 = lVar23 + 4;
          lVar22 = local_d0;
        } while (lVar17 * 4 != lVar23);
        iVar3 = (int)local_c8[1];
        plVar16 = local_c0;
        plVar20 = local_c8;
      }
      plVar16 = (longlong *)((longlong)plVar16 + 1);
    } while ((longlong)plVar16 < (longlong)iVar3);
  }
  bVar13 = *(byte *)((longlong)plVar20 + 0x45);
  *(undefined4 *)(plVar20 + 0x11) = 0;
  iVar3 = 0;
  uVar4 = (uint)bVar13;
  if (*(uint *)((longlong)plVar20 + 0x8c) != uVar4) {
    FUN_14480809c(local_b8);
    bVar13 = *(byte *)((longlong)plVar20 + 0x45);
    iVar3 = (int)plVar20[0x11];
    uVar4 = *(uint *)((longlong)plVar20 + 0x8c);
  }
  uVar24 = local_b0;
  *(uint *)(plVar20 + 0x11) = iVar3 + (uint)bVar13;
  if (uVar4 - iVar3 < (uint)bVar13) {
    FUN_1447808da(local_b8);
  }
  uVar4 = 0;
  memset((void *)((longlong)iVar3 * 4 + plVar20[0x10]),0,(ulonglong)bVar13 << 2);
  local_51 = 0x73;
  bStack_50 = 0;
  abStack_4f[0] = 0;
  abStack_4f[1] = 0;
  uVar24 = uVar24 & 0xffffffff;
  if (*(char *)((longlong)plVar20 + 0x44) != '\0') {
    lVar22 = local_d0 + 0x78;
    uVar14 = 0xffffffff;
    do {
      pbVar8 = &bStack_50;
      if (9 < uVar4) {
        bStack_50 = (char)((uVar4 & 0xff) / 10) + 0x30;
        pbVar8 = abStack_4f;
      }
      *pbVar8 = ((byte)((uVar4 & 0xff) / 5) & 0xfe) * -5 + '0' + (char)uVar4;
      pbVar8[1] = 0;
      iVar3 = (*DAT_14ca7fcf0)(*(undefined4 *)(local_d0 + 0xc0),&local_52);
      if (iVar3 == -1) {
        iVar3 = (int)uVar14;
        if (iVar3 == -1) {
          uVar14 = 0xffffffff;
        }
        else {
          pbVar8 = abStack_4f;
          pbVar11 = &bStack_50;
          if (9 < iVar3) {
            bStack_50 = (char)(uVar14 / 10) + 0x30;
            pbVar8 = abStack_4f + 1;
            pbVar11 = abStack_4f;
          }
          *pbVar11 = (char)uVar14 + (char)(iVar3 / 10) * -10 + 0x30;
          pbVar11[1] = 0;
          uVar9 = uVar4 - iVar3;
          *pbVar8 = 0x5b;
          if ((int)uVar9 < 10) {
            pbVar8 = pbVar8 + 1;
          }
          else {
            pbVar8[1] = (char)(uVar9 / 10) + 0x30;
            pbVar8 = pbVar8 + 2;
          }
          *pbVar8 = (char)uVar9 + (char)((int)uVar9 / 10) * -10 + 0x30;
          pbVar8[1] = 0x5d;
          pbVar8[2] = 0;
          iVar3 = (*DAT_14ca7fcf0)(*(undefined4 *)(local_d0 + 0xc0),&local_52);
          if (iVar3 != -1) goto LAB_1431cb3d0;
        }
      }
      else {
        uVar14 = (ulonglong)uVar4;
LAB_1431cb3d0:
        (*DAT_14ca7fef0)(iVar3,*(int *)(&DAT_14ca79940 + uVar24 * 4) + uVar4);
        iVar3 = uVar4 + *(int *)(&DAT_14ca79940 + uVar24 * 4);
        lVar17 = *(longlong *)(local_d0 + 0x88);
        if (*(longlong *)(local_d0 + 0x88) == 0) {
          lVar17 = lVar22;
        }
        iVar6 = *(int *)(&DAT_14ca79940 + uVar24 * 4) + uVar4 + 0x1f;
        if (-1 < iVar3) {
          iVar6 = iVar3;
        }
        puVar1 = (uint *)(lVar17 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
        iVar6 = *(int *)(local_d0 + 0xb8);
        if (*(int *)(local_d0 + 0xb8) < iVar3) {
          iVar6 = iVar3;
        }
        *(int *)(local_d0 + 0xb8) = iVar6;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)((longlong)local_c8 + 0x44));
  }
  local_51 = 0x69;
  bStack_50 = 0;
  abStack_4f[0] = 0;
  abStack_4f[1] = 0;
  if (*(char *)((longlong)local_c8 + 0x46) != '\0') {
    lVar22 = local_d0 + 0x98;
    uVar14 = 0xffffffff;
    uVar4 = 0;
    do {
      lVar17 = local_d0;
      pbVar8 = &bStack_50;
      if (9 < uVar4) {
        bStack_50 = (char)((uVar4 & 0xff) / 10) + 0x30;
        pbVar8 = abStack_4f;
      }
      *pbVar8 = ((byte)((uVar4 & 0xff) / 5) & 0xfe) * -5 + '0' + (char)uVar4;
      pbVar8[1] = 0;
      iVar3 = (*DAT_14ca7fcf0)(*(undefined4 *)(local_d0 + 0xc0),&local_52);
      uVar9 = uVar4;
      if (iVar3 == -1) {
        pbVar8[1] = 0x5f;
        pbVar8[2] = 0x56;
        pbVar8[3] = 0x41;
        pbVar8[4] = 0x52;
        pbVar8[5] = 0;
        iVar3 = (*DAT_14ca7fcf8)(*(undefined4 *)(lVar17 + 0xc0),0x92e6,&local_52);
        lVar21 = local_d0;
        if (iVar3 != -1) goto LAB_1431cb5ff;
        uVar9 = (uint)uVar14;
        if (uVar9 == 0xffffffff) {
          uVar14 = 0xffffffff;
        }
        else {
          pbVar8 = abStack_4f;
          pbVar11 = &bStack_50;
          if (9 < (int)uVar9) {
            bStack_50 = (char)(uVar14 / 10) + 0x30;
            pbVar8 = abStack_4f + 1;
            pbVar11 = abStack_4f;
          }
          *pbVar11 = (char)uVar14 + (char)((int)uVar9 / 10) * -10 + 0x30;
          pbVar11[1] = 0;
          uVar10 = uVar4 - uVar9;
          *pbVar8 = 0x5b;
          if ((int)uVar10 < 10) {
            pbVar8 = pbVar8 + 1;
          }
          else {
            pbVar8[1] = (char)(uVar10 / 10) + 0x30;
            pbVar8 = pbVar8 + 2;
          }
          *pbVar8 = (char)uVar10 + (char)((int)uVar10 / 10) * -10 + 0x30;
          pbVar8[1] = 0x5d;
          pbVar8[2] = 0;
          iVar3 = (*DAT_14ca7fcf0)(*(undefined4 *)(local_d0 + 0xc0),&local_52);
          lVar17 = lVar21;
          if (iVar3 != -1) goto LAB_1431cb5ff;
        }
      }
      else {
LAB_1431cb5ff:
        iVar3 = uVar4 + *(int *)(&DAT_14ca79980 + uVar24 * 4);
        lVar21 = *(longlong *)(lVar17 + 0xa8);
        if (*(longlong *)(lVar17 + 0xa8) == 0) {
          lVar21 = lVar22;
        }
        iVar6 = *(int *)(&DAT_14ca79980 + uVar24 * 4) + uVar4 + 0x1f;
        if (-1 < iVar3) {
          iVar6 = iVar3;
        }
        puVar1 = (uint *)(lVar21 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
        iVar6 = *(int *)(lVar17 + 0xbc);
        if (*(int *)(lVar17 + 0xbc) < iVar3) {
          iVar6 = iVar3;
        }
        *(int *)(lVar17 + 0xbc) = iVar6;
        uVar14 = (ulonglong)uVar9;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)((longlong)local_c8 + 0x46));
  }
  plVar20 = local_c8;
  lVar22 = local_d0;
  local_51 = 0x62;
  bStack_50 = 0;
  abStack_4f[0] = 0;
  abStack_4f[1] = 0;
  if (*(char *)((longlong)local_c8 + 0x45) != '\0') {
    uVar4 = 0;
    do {
      pbVar8 = &bStack_50;
      if (9 < uVar4) {
        bStack_50 = (char)((uVar4 & 0xff) / 10) + 0x30;
        pbVar8 = abStack_4f;
      }
      *pbVar8 = ((byte)((uVar4 & 0xff) / 5) & 0xfe) * -5 + '0' + (char)uVar4;
      pbVar8[1] = 0;
      iVar3 = (*DAT_14ca7fef8)(*(undefined4 *)(lVar22 + 0xc0),&local_52);
      if (-1 < iVar3) {
        (*DAT_14ca7ff00)(*(undefined4 *)(lVar22 + 0xc0),iVar3,param_5 + uVar4);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)((longlong)plVar20 + 0x45));
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar20;
}



// FUNCTION 1431cb94c FUN_1431cb94c body=968 status=ok
// SIG undefined FUN_1431cb94c(void)

longlong FUN_1431cb94c(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  ulonglong *puVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  ulonglong *local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = *(undefined4 *)(param_2 + 0x98);
  local_c8 = *(char **)(param_2 + 0x88);
  uStack_c0 = *(undefined8 *)(param_2 + 0x90);
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_b4 = *(undefined4 *)(param_3 + 0x88);
  uStack_b0 = *(undefined4 *)(param_3 + 0x8c);
  uStack_ac = *(undefined4 *)(param_3 + 0x90);
  uStack_a8 = *(undefined4 *)(param_3 + 0x94);
  local_a4 = *(undefined4 *)(param_3 + 0x98);
  if (param_4 != 0) {
    local_90 = (ulonglong)*(uint *)(param_4 + 0x98);
    local_a0 = *(undefined8 *)(param_4 + 0x88);
    uStack_98 = *(undefined8 *)(param_4 + 0x90);
  }
  FUN_1473ee598(param_1,&local_c8,0);
  *(undefined1 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0xffffffff;
  puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 **)(param_1 + 0x298) = puVar6;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (*(int *)(param_2 + 0xa0) == 0) {
    FUN_1431ca6d2((undefined4 *)(param_2 + 0xa0),0x8b31);
  }
  if (*(int *)(param_3 + 0xa0) == 0) {
    FUN_1431ca6d2((undefined4 *)(param_3 + 0xa0),0x8b30);
  }
  if ((param_4 != 0) && (*(int *)(param_4 + 0xa0) == 0)) {
    FUN_1431ca6d2(param_4 + 0xa0,0x8dd9);
  }
  uVar4 = (*DAT_14ca7ff08)();
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  (*DAT_14ca7ff10)(uVar4,*(undefined4 *)(param_2 + 0xa0));
  (*DAT_14ca7ff10)(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_3 + 0xa0));
  if (param_4 != 0) {
    (*DAT_14ca7ff10)(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_4 + 0xa0));
  }
  if ((DAT_14ca79780 != 0) || (cVar3 = FUN_1431cbd16(), cVar3 != '\0')) {
    (*DAT_14ca7ff18)(*(undefined4 *)(param_1 + 0xc0),0x8257,1);
  }
  (*DAT_14ca7fd00)(*(undefined4 *)(param_1 + 0xc0));
  cVar3 = FUN_1431cbdf3(*(undefined4 *)(param_1 + 0xc0));
  if (cVar3 == '\0') {
    local_c8 = "FailedProgramLink";
    uStack_c0 = CONCAT35(uStack_c0._5_3_,0x11);
    uVar5 = FUN_14001a6c0(&local_c8,1);
    local_c8 = (char *)(ulonglong)uVar5;
    if (DAT_14ca83b80 != (longlong *)0x0 && DAT_14ca83b88 != 0) {
      (**(code **)(*DAT_14ca83b80 + 0x60))(DAT_14ca83b80,&local_c8);
    }
    iVar1 = DAT_14ca7999c;
    FUN_1473ee780(param_1,&local_c8);
    pcVar7 = local_c8;
    if ((int)uStack_c0 == 0) {
      pcVar7 = "";
    }
    local_d8 = CONCAT44(local_d8._4_4_,iVar1);
    FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLShaders.cpp",0x9b7,
                  L"Failed to link graphics program [%s]. Current total programs: %d",pcVar7);
    if (local_c8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  local_c8 = (char *)((ulonglong)local_c8 & 0xffffffff00000000);
  (*DAT_14ca7fba0)(*(undefined4 *)(param_1 + 0xc0),0x8741,&local_c8);
  DAT_14ca7999c = DAT_14ca7999c + 1;
  DAT_14ca79a64 = DAT_14ca79a64 + (int)local_c8;
  (*DAT_14ca7fe18)(*(undefined4 *)(param_1 + 0xc0));
  (*(code *)(&PTR_FUN_14a371120)[*(byte *)(param_1 + 0x288)])(param_1 + 200);
  local_d8 = param_4;
  FUN_1473f8d98(param_1 + 200,param_1,param_2,param_3);
  *(undefined1 *)(param_1 + 0x288) = 1;
  cVar3 = FUN_1473eafb1();
  if (((cVar3 != '\0') && ((DAT_14c760d08 & 1) != 0)) &&
     (cVar3 = FUN_1473eba8e(param_1), cVar3 != '\0')) {
    FUN_1473e4342(&local_c8,*(undefined4 *)(param_1 + 0xc0));
    local_d0 = (ulonglong *)FUN_14001cc68(0x20,0x10);
    *local_d0 = (ulonglong)local_c8;
    *(int *)(local_d0 + 1) = (int)uStack_c0;
    *(undefined4 *)((longlong)local_d0 + 0xc) = uStack_c0._4_4_;
    *(undefined4 *)(local_d0 + 2) = local_b8;
    *(undefined4 *)((longlong)local_d0 + 0x14) = uStack_b4;
    *(undefined4 *)(local_d0 + 3) = uStack_b0;
    *(undefined4 *)((longlong)local_d0 + 0x1c) = uStack_ac;
    FUN_1473eb960(param_1,&local_d0);
    puVar2 = local_d0;
    if (local_d0 != (ulonglong *)0x0) {
      if (*local_d0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(puVar2);
    }
  }
  FUN_1431cbefb();
  FUN_1473ee9b0(param_1,param_1);
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1431cbd16 FUN_1431cbd16 body=221 status=ok
// SIG undefined FUN_1431cbd16(void)

undefined8 FUN_1431cbd16(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (ulonglong)DAT_14c760d0c;
  if (DAT_14c760d0c != 0xffffffff) goto LAB_1431cbd9f;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar6 + 0xc60);
  if (iVar1 == 0x40000002) {
LAB_1431cbd4e:
    uVar5 = 0;
    lVar6 = DAT_14ca79838;
  }
  else {
    if ((DAT_14c86a9f8 != 0) && (iVar1 == 1)) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar1 = *(int *)(lVar6 + 0xc60);
      if (iVar1 == 0x40000002) goto LAB_1431cbd4e;
    }
    lVar6 = DAT_14ca79838;
    if (((DAT_14c86a9f8 & 1) == 0) || (iVar1 == 2)) goto LAB_1431cbd4e;
    if (iVar1 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      uVar5 = (ulonglong)(DVar2 != DVar3);
    }
    else {
      uVar5 = 1;
    }
  }
  bVar4 = DAT_14ca79780 != 0 && *(int *)(lVar6 + uVar5 * 4) == 1;
  uVar5 = (ulonglong)bVar4;
  DAT_14c760d0c = (uint)bVar4;
LAB_1431cbd9f:
  return CONCAT71((int7)(uVar5 >> 8),(int)uVar5 == 1);
}



// FUNCTION 1431cbdf3 FUN_1431cbdf3 body=263 status=ok
// SIG undefined FUN_1431cbdf3(void)

bool FUN_1431cbdf3(ulonglong param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  (*DAT_14ca7fba0)(param_1,0x8b82,&local_1c);
  bVar7 = true;
  if (local_1c != 1) {
    (*DAT_14ca7fcd0)();
    (*DAT_14ca7fba0)(param_1 & 0xffffffff,0x8b84,&local_20);
    if (1 < (longlong)local_20) {
      uVar5 = FUN_14001cc68((longlong)local_20,0);
      (*DAT_14ca7ff20)(param_1 & 0xffffffff,local_20,0,uVar5);
      if (1 < local_20) {
        FUN_1400020a8(uVar5);
      }
    }
    lVar2 = DAT_14ca79898;
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
    bVar7 = *(int *)(lVar2 + uVar6 * 4) == 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431cbefb FUN_1431cbefb body=164 status=ok
// SIG undefined FUN_1431cbefb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431cbefb(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca79c38) {
    FUN_144b3d300(&DAT_14ca79c38);
    if (DAT_14ca79c38 == -1) {
      FUN_1473f1f90(&DAT_14ca79b28);
      DAT_14ca79c08 = 0;
      DAT_14ca79c10 = 0;
      DAT_14ca79be8 = 0;
      _DAT_14ca79bf0 = 0;
      _DAT_14ca79c14 = 0xffffffff00000080;
      DAT_14ca79c1c = 0;
      DAT_14ca79c28 = 0;
      DAT_14ca79c30 = 0;
      atexit((_func_5014 *)&LAB_1431cc953);
      _Init_thread_footer(&DAT_14ca79c38);
      return;
    }
  }
  return;
}



// FUNCTION 1431cbfa0 FUN_1431cbfa0 body=638 status=ok
// SIG undefined FUN_1431cbfa0(void)

longlong FUN_1431cbfa0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined1 auStack_e8 [32];
  int local_c8;
  ulonglong local_c0;
  char *local_b8;
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
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_54 = *(undefined4 *)(param_2 + 0x88);
  uStack_50 = *(undefined4 *)(param_2 + 0x8c);
  uStack_4c = *(undefined4 *)(param_2 + 0x90);
  uStack_48 = *(undefined4 *)(param_2 + 0x94);
  local_44 = *(undefined4 *)(param_2 + 0x98);
  FUN_1473ee598(local_54,&local_b8,0);
  *(undefined1 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0xffffffff;
  puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 **)(param_1 + 0x298) = puVar6;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(longlong *)(param_2 + 0x130) = param_1;
  puVar1 = (undefined4 *)(param_2 + 0xa8);
  if (*(int *)(param_2 + 0xa8) == 0) {
    FUN_1431ca6d2(puVar1,0x91b9);
  }
  uVar4 = (*DAT_14ca7ff08)();
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  (*DAT_14ca7ff10)(uVar4,*puVar1);
  if ((DAT_14ca79780 != 0) || (cVar3 = FUN_1431cbd16(), cVar3 != '\0')) {
    (*DAT_14ca7ff18)(*(undefined4 *)(param_1 + 0xc0),0x8257,1);
  }
  (*DAT_14ca7fd00)(*(undefined4 *)(param_1 + 0xc0));
  cVar3 = FUN_1431cbdf3(*(undefined4 *)(param_1 + 0xc0));
  if (cVar3 == '\0') {
    local_b8 = "FailedComputeProgramLink";
    uStack_b0 = CONCAT35(uStack_b0._5_3_,0x18);
    uVar5 = FUN_14001a6c0(&local_b8,1);
    local_c0 = (ulonglong)uVar5;
    if (DAT_14ca83b80 != (longlong *)0x0 && DAT_14ca83b88 != 0) {
      (**(code **)(*DAT_14ca83b80 + 0x60))(DAT_14ca83b80,&local_c0);
    }
    iVar2 = DAT_14ca7999c;
    FUN_1473ee780(param_1,&local_b8);
    pcVar7 = local_b8;
    if ((int)uStack_b0 == 0) {
      pcVar7 = "";
    }
    local_c8 = iVar2;
    FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLShaders.cpp",0x9f1,
                  L"Failed to link compute program [%s]. Current total programs: %d",pcVar7);
    if (local_b8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  local_b8 = (char *)((ulonglong)local_b8 & 0xffffffff00000000);
  (*DAT_14ca7fba0)(*(undefined4 *)(param_1 + 0xc0),0x8741,&local_b8);
  DAT_14ca7999c = DAT_14ca7999c + 1;
  DAT_14ca79a64 = DAT_14ca79a64 + (int)local_b8;
  (*DAT_14ca7fe18)(*(undefined4 *)(param_1 + 0xc0));
  (*(code *)(&PTR_FUN_14a371120)[*(byte *)(param_1 + 0x288)])(param_1 + 200);
  local_c8 = 0;
  FUN_1431cae2e(param_1 + 200,param_1,puVar1,5);
  *(undefined1 *)(param_1 + 0x288) = 2;
  FUN_1431cbefb();
  FUN_1473ee9b0(param_1,param_1);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1431cc220 FUN_1431cc220 body=324 status=ok
// SIG undefined FUN_1431cc220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431cc220(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined4 local_30;
  int *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_1431cbd16();
  if ((cVar1 != '\0') && (0 < DAT_14ca798b8)) {
    uVar2 = FUN_1469133ca();
    FUN_1431cbefb();
    iVar4 = DAT_14ca79b38 - (DAT_14ca79b64 + _DAT_14c760d04);
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    local_5c = 10;
    if (iVar3 < 10) {
      local_5c = iVar3;
    }
    if (0 < iVar4) {
      FUN_1431cbefb();
      local_48 = 0;
      local_38 = &PTR_LAB_14a371200;
      local_28 = &local_5c;
      local_58 = &LAB_1431cd284;
      local_30 = uVar2;
      FUN_1473f44c4(&DAT_14ca79b28);
    }
  }
  FUN_1431c91b0();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca7a3c0) {
    FUN_144b3d300(&DAT_14ca7a3c0);
    if (DAT_14ca7a3c0 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7a398);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca7a398,4000);
      atexit((_func_5014 *)&LAB_1431cd2ed);
      _Init_thread_footer(&DAT_14ca7a3c0);
    }
  }
  FUN_1473fd8ec(&DAT_14ca7a398);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431cc366 FUN_1431cc366 body=145 status=ok
// SIG undefined FUN_1431cc366(void)

undefined8 * FUN_1431cc366(undefined8 param_1,undefined8 *param_2,void *param_3)

{
  undefined8 *puVar1;
  
  if (((DAT_14ca799a0 == '\0') && ((*(ushort *)((longlong)param_3 + 0xca) & 0x1800) != 0)) &&
     (DAT_14ca79780 != 0)) {
    DAT_14ca799a0 = '\x01';
  }
  puVar1 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 0xd;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14a1e4930;
  memcpy(puVar1 + 3,param_3,0xd8);
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1431cc3f7 FUN_1431cc3f7 body=768 status=ok
// SIG undefined FUN_1431cc3f7(void)

void FUN_1431cc3f7(byte param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  *(int *)(&DAT_14ca79c50 + (ulonglong)param_1 * 0x14) = param_2[4];
  uVar4 = *(undefined8 *)(param_2 + 2);
  lVar2 = (ulonglong)param_1 * 0x14;
  *(undefined8 *)(&DAT_14ca79c40 + lVar2) = *(undefined8 *)param_2;
  *(undefined8 *)(&DAT_14ca79c48 + lVar2) = uVar4;
  if (param_2[2] == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    if (*param_2 == 0) {
      bVar7 = param_2[1] != 0;
    }
  }
  uVar6 = (ulonglong)((uint)param_1 * 0x30);
  (&DAT_14c873438)[uVar6] = (&DAT_14c873438)[uVar6] & 0xfe | bVar7;
  iVar3 = *param_2;
  *(int *)((longlong)&DAT_14c873434 + uVar6) = iVar3;
  if (bVar7 == false) {
    return;
  }
  bVar7 = true;
  uVar5 = 0x8017be;
  if (0x88ef < iVar3) {
    if (0x8d87 < iVar3) {
      if (iVar3 < 0x8f97) {
        if (iVar3 < 0x8dbd) {
          switch(iVar3) {
          case 0x8d88:
          case 0x8d8e:
            goto switchD_1431cc49b_caseD_822e;
          case 0x8d89:
          case 0x8d8f:
            goto switchD_1431cc5b1_caseD_8815;
          case 0x8d8a:
          case 0x8d8b:
          case 0x8d8c:
          case 0x8d8d:
            goto switchD_1431cc5b1_caseD_8816;
          default:
            if (iVar3 != 0x8dbb) {
              return;
            }
          }
        }
        else if (((2 < iVar3 - 0x8f94U) && (iVar3 != 0x8dbd)) && (iVar3 != 0x8e8c)) {
          return;
        }
      }
      else if (iVar3 < 0x93b0) {
        if (iVar3 == 0x8f97) {
          uVar5 = 0x80079e;
          goto switchD_1431cc5b1_caseD_881a;
        }
        if (iVar3 != 0x8f99) {
          if (iVar3 != 0x906f) {
            return;
          }
          goto switchD_1431cc49b_caseD_822a;
        }
      }
      else {
        if (0xd < iVar3 - 0x93b0U) {
          return;
        }
        if ((0x2891U >> (iVar3 - 0x93b0U & 0x1f) & 1) == 0) {
          return;
        }
      }
      goto switchD_1431cc49b_caseD_822c;
    }
    if (iVar3 < 0x8d71) {
      if (iVar3 < 0x8c43) {
        if (iVar3 == 0x88f0) goto LAB_1431cc650;
        if (iVar3 != 0x8c3a) {
          if (iVar3 != 0x8c3d) {
            return;
          }
          goto switchD_1431cc49b_caseD_822c;
        }
      }
      else if (iVar3 < 0x8d62) {
        if (iVar3 != 0x8c43) {
          if (iVar3 != 0x8cad) {
            return;
          }
          goto LAB_1431cc650;
        }
      }
      else if (iVar3 != 0x8d62) {
        if (iVar3 != 0x8d70) {
          return;
        }
        goto switchD_1431cc49b_caseD_822e;
      }
      goto switchD_1431cc49b_caseD_8229;
    }
    if (iVar3 < 0x8d7c) {
      if (iVar3 != 0x8d71) {
        if (iVar3 == 0x8d76) goto switchD_1431cc49b_caseD_822e;
        if (iVar3 != 0x8d77) {
          return;
        }
      }
switchD_1431cc5b1_caseD_8815:
      uVar5 = *(uint *)((longlong)&DAT_14c873430 + uVar6) | 0x79e;
      goto LAB_1431cc6ea;
    }
    if (iVar3 < 0x8d82) {
      if (iVar3 != 0x8d7c) {
        if (iVar3 != 0x8d7d) {
          return;
        }
        goto switchD_1431cc5b1_caseD_8815;
      }
    }
    else if (iVar3 != 0x8d82) {
      if (iVar3 != 0x8d83) {
        return;
      }
      goto switchD_1431cc5b1_caseD_8815;
    }
    goto switchD_1431cc49b_caseD_822e;
  }
  if (iVar3 < 0x8229) {
    uVar1 = iVar3 - 0x8051;
    if (uVar1 < 0xb) {
      if ((0x561U >> (uVar1 & 0x1f) & 1) != 0) goto switchD_1431cc49b_caseD_8229;
      uVar5 = 0x8017be;
      if (uVar1 == 7) goto switchD_1431cc5b1_caseD_881a;
    }
    if (1 < iVar3 - 0x81a5U) {
      return;
    }
LAB_1431cc650:
    uVar5 = 0x8017fe;
  }
  else {
    switch(iVar3) {
    case 0x8229:
    case 0x822b:
    case 0x822d:
    case 0x822f:
      break;
    case 0x822a:
    case 0x8230:
    case 0x8231:
    case 0x8232:
    case 0x8233:
    case 0x8234:
    case 0x8237:
    case 0x8238:
    case 0x8239:
    case 0x823a:
    case 0x823b:
    case 0x823c:
switchD_1431cc49b_caseD_822a:
      uVar5 = 0x17be;
      break;
    case 0x822e:
    case 0x8235:
    case 0x8236:
switchD_1431cc49b_caseD_822e:
      uVar5 = 0x17be;
      goto switchD_1431cc5b1_caseD_881a;
    default:
      uVar5 = 0x8017be;
      switch(iVar3) {
      case 0x8814:
        goto switchD_1431cc49b_caseD_822e;
      case 0x8815:
        goto switchD_1431cc5b1_caseD_8815;
      case 0x8816:
      case 0x8817:
      case 0x8818:
      case 0x8819:
        goto switchD_1431cc5b1_caseD_8816;
      case 0x881a:
        goto switchD_1431cc5b1_caseD_881a;
      case 0x881b:
        break;
      default:
        if (2 < iVar3 - 0x83f1U) {
          return;
        }
      }
    case 0x822c:
switchD_1431cc49b_caseD_822c:
      uVar5 = 0x80079e;
    }
  }
  goto switchD_1431cc49b_caseD_8229;
switchD_1431cc5b1_caseD_881a:
  bVar7 = false;
switchD_1431cc49b_caseD_8229:
  uVar5 = uVar5 | *(uint *)((longlong)&DAT_14c873430 + uVar6);
  *(uint *)((longlong)&DAT_14c873430 + uVar6) = uVar5;
  if (bVar7) {
switchD_1431cc5b1_caseD_8816:
    return;
  }
  uVar5 = uVar5 | 0x7fe800;
LAB_1431cc6ea:
  *(uint *)((longlong)&DAT_14c873430 + uVar6) = uVar5;
  return;
}



// FUNCTION 1431cc6f8 FUN_1431cc6f8 body=474 status=ok
// SIG undefined FUN_1431cc6f8(void)

void FUN_1431cc6f8(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar11 = 0;
    iVar5 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_1431cc869;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 < iVar4) {
    uVar13 = 0xffffffff;
    do {
      plVar3 = *(longlong **)(*param_1 + 0x78 + (longlong)iVar5 * 0x88);
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
        iVar4 = (int)param_1[5];
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar5 = (int)uVar14;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar9[lVar12] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar6 = puVar9[lVar12 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar12 == lVar10) goto LAB_1431cc869;
        }
        uVar14 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar4);
  }
LAB_1431cc869:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144a544ac(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 1431cc8d2 FUN_1431cc8d2 body=41 status=ok
// SIG undefined FUN_1431cc8d2(void)

void FUN_1431cc8d2(void)

{
  DAT_14ca79a58 = 0;
  if (DAT_14ca79a50 != 0) {
    FUN_1400020a8();
  }
  FUN_1473f0470();
  return;
}



// FUNCTION 1431cc8fb FUN_1431cc8fb body=41 status=ok
// SIG undefined FUN_1431cc8fb(void)

void FUN_1431cc8fb(void)

{
  DAT_14ca79ab0 = 0;
  if (DAT_14ca79aa8 != 0) {
    FUN_1400020a8();
  }
  FUN_1473f06e2();
  return;
}



// FUNCTION 1431cc924 FUN_1431cc924 body=47 status=ok
// SIG undefined FUN_1431cc924(void)

void FUN_1431cc924(void)

{
  DAT_14ca79b08 = 0;
  if (DAT_14ca79b00 != 0) {
    FUN_1400020a8();
  }
  FUN_1413f4aca(&DAT_14ca79ac0);
  return;
}



// FUNCTION 1431cc958 FUN_1431cc958 body=517 status=ok
// SIG undefined FUN_1431cc958(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431cc958(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  if (DAT_14ca79bc0 == 0) {
    uVar11 = 0;
    uVar15 = 1;
    iVar9 = 0;
    iVar5 = 0;
  }
  else {
    puVar12 = &DAT_14ca79ba8;
    if (DAT_14ca79bb8 != (uint *)0x0) {
      puVar12 = DAT_14ca79bb8;
    }
    uVar10 = *puVar12;
    if (uVar10 == 0) {
      iVar5 = DAT_14ca79bc0 + 0x1e;
      if (-1 < DAT_14ca79bc0 + -1) {
        iVar5 = DAT_14ca79bc0 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar9 = 0;
      do {
        if (uVar15 == uVar11) goto LAB_1431ccadf;
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar12[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
    }
    uVar15 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar15 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (DAT_14ca79bc0 <= iVar5) {
      iVar5 = DAT_14ca79bc0;
    }
  }
  if (iVar5 < DAT_14ca79bc0) {
    uVar10 = 0xffffffff;
    lVar4 = DAT_14ca79b98;
    iVar3 = DAT_14ca79bc0;
    do {
      plVar2 = *(longlong **)(lVar4 + 0x80 + (longlong)iVar5 * 0x90);
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar2);
        lVar4 = DAT_14ca79b98;
        iVar3 = DAT_14ca79bc0;
      }
      uVar10 = uVar10 & ~(uint)uVar15;
      puVar12 = DAT_14ca79bb8;
      if (DAT_14ca79bb8 == (uint *)0x0) {
        puVar12 = &DAT_14ca79ba8;
      }
      iVar5 = (int)uVar11;
      lVar14 = (longlong)iVar5;
      uVar6 = puVar12[lVar14] & uVar10;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar13 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar6 = puVar12[lVar14 + lVar13 + 1];
          if (uVar6 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar8 - lVar14 == lVar13) goto LAB_1431ccadf;
        }
        uVar11 = (ulonglong)(iVar5 + (int)lVar13 + 1);
        uVar10 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar5 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
LAB_1431ccadf:
  DAT_14ca79ba0 = 0;
  if (DAT_14ca79ba4 != 0) {
    FUN_140d97c6c(&DAT_14ca79b98,0);
  }
  _DAT_14ca79bc8 = 0xffffffff;
  DAT_14ca79bc0 = 0;
  if (0x80 < DAT_14ca79bc4) {
    DAT_14ca79bc4 = 0x80;
    FUN_1446efbd8(&DAT_14ca79ba8,0);
    return;
  }
  return;
}



// FUNCTION 1431ccb5e FUN_1431ccb5e body=176 status=ok
// SIG undefined FUN_1431ccb5e(void)

void FUN_1431ccb5e(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  cVar1 = FUN_1473f2a94();
  while (cVar1 != '\0') {
    FUN_1431ccc10(&DAT_14ca79b28);
    cVar1 = FUN_1473f2a94();
  }
  FUN_1473f2b2e(&local_24,param_1,&local_30);
  *(int *)(param_2 + 0x290) = local_24;
  *(undefined4 *)(param_2 + 0x2a0) = DAT_14c75b13c;
  local_24 = -1;
  (*DAT_14ca7fba0)(*(undefined4 *)(param_2 + 0xc0),0x8741,&local_24);
  DAT_14ca79b2c = DAT_14ca79b2c + local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ccc10 FUN_1431ccc10 body=238 status=ok
// SIG undefined FUN_1431ccc10(void)

void FUN_1431ccc10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = *(longlong *)(lVar1 + 0x88);
  if (lVar1 != 0) {
    FUN_1473f3002(param_1 + 8,lVar1);
    if (*(longlong *)(param_1 + 0x58) == lVar1) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0x80);
    }
    lVar3 = *(longlong *)(lVar1 + 0x78);
    if (*(longlong *)(param_1 + 0x60) == lVar1) {
      *(longlong *)(param_1 + 0x60) = lVar3;
    }
    lVar4 = *(longlong *)(lVar1 + 0x80);
    if (lVar3 != 0) {
      *(longlong *)(lVar3 + 0x80) = lVar4;
    }
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar1 + 0x78);
    }
    FUN_1400020a8(lVar1);
  }
  *(undefined4 *)(lVar2 + 0x290) = 0xffffffff;
  local_40 = CONCAT44(local_40._4_4_,0xffffffff);
  local_48 = lVar2;
  (*DAT_14ca7fba0)(*(undefined4 *)(lVar2 + 0xc0),0x8741,&local_40);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - (int)local_40;
  local_40 = lVar2;
  local_38 = &local_48;
  FUN_1473f2be2(param_1 + 0x70,local_2c,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ccd00 FUN_1431ccd00 body=144 status=ok
// SIG undefined FUN_1431ccd00(void)

undefined8 FUN_1431ccd00(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_1473f2ee2(), iVar3 != -1)) {
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 0x80 + (longlong)iVar3 * 0x90);
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar2);
    }
    memmove((void *)(lVar1 + (longlong)iVar3 * 0x90),param_3,0x88);
    FUN_1473f2f88(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 1431ccd90 FUN_1431ccd90 body=222 status=ok
// SIG undefined FUN_1431ccd90(void)

longlong * FUN_1431ccd90(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  param_1[1] = (longlong)puVar2;
  if (*(int *)(*(longlong *)(param_2 + 0x298) + 0x18) == 0) {
    FUN_1473e4342(&local_38,*(undefined4 *)(param_2 + 0xc0));
    puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar2 = local_38;
    *(undefined4 *)(puVar2 + 1) = local_30;
    *(undefined4 *)((longlong)puVar2 + 0xc) = local_2c;
    *(undefined4 *)(puVar2 + 2) = local_28;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_24;
    *(undefined4 *)(puVar2 + 3) = uStack_20;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_1c;
    plVar1 = (longlong *)param_1[1];
    param_1[1] = (longlong)puVar2;
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
  }
  else {
    param_1[1] = *(longlong *)(param_2 + 0x298);
    *(undefined8 **)(param_2 + 0x298) = puVar2;
  }
  FUN_1431cce70(*param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431cce70 FUN_1431cce70 body=151 status=ok
// SIG undefined FUN_1431cce70(void)

void FUN_1431cce70(longlong param_1)

{
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (*(code *)(&PTR_FUN_14a371120)[*(byte *)(param_1 + 0x288)])(param_1 + 200);
  *(undefined1 *)(param_1 + 0x288) = 0;
  if (*(int *)(param_1 + 0xc0) != 0) {
    local_24 = 0;
    (*DAT_14ca7fba0)(*(int *)(param_1 + 0xc0),0x8741,&local_24);
    DAT_14ca79a64 = DAT_14ca79a64 - local_24;
    DAT_14ca7999c = DAT_14ca7999c + -1;
    (*DAT_14ca7ff28)(*(undefined4 *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ccf08 FUN_1431ccf08 body=690 status=ok
// SIG undefined FUN_1431ccf08(void)

longlong FUN_1431ccf08(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  char *pcVar12;
  longlong *plVar13;
  undefined1 auStack_68 [32];
  char *local_48;
  int iStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar8 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar8 = 0;
  plVar8[1] = 0;
  *(undefined8 *)((longlong)plVar8 + 0xc) = 0;
  *(undefined8 *)((longlong)plVar8 + 0x14) = 0;
  uVar3 = (*(code *)PTR_FUN_14c75b148)(param_1,0x78,0);
  iVar4 = FUN_1473f2ee2(&DAT_14ca79b98,uVar3,param_1);
  plVar13 = plVar8;
  if (iVar4 != -1) {
    lVar10 = (longlong)iVar4 * 0x90;
    unaff_RDI = *(longlong *)(DAT_14ca79b98 + 0x78 + lVar10);
    plVar13 = *(longlong **)(DAT_14ca79b98 + 0x80 + lVar10);
    *(longlong **)(DAT_14ca79b98 + 0x80 + lVar10) = plVar8;
    FUN_1473f3da6(iVar4);
    if (unaff_RDI == 0) {
      unaff_RDI = FUN_14001cc68(0x2a8,0x10);
      FUN_1473ee598(unaff_RDI,param_1,0);
      *(undefined1 *)(unaff_RDI + 0x288) = 0;
      *(undefined4 *)(unaff_RDI + 0x290) = 0xffffffff;
      puVar9 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined8 *)((longlong)puVar9 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar9 + 0x14) = 0;
      *(undefined8 **)(unaff_RDI + 0x298) = puVar9;
      *(undefined4 *)(unaff_RDI + 0x2a0) = 0;
    }
    local_48 = (char *)plVar13[2];
    iStack_40 = (int)plVar13[3];
    uStack_3c = *(uint *)((longlong)plVar13 + 0x1c);
    cVar2 = FUN_1431cacbd(unaff_RDI + 0xc0);
    lVar10 = DAT_14ca79880;
    if (cVar2 == '\0') {
      (*(code *)PTR_FUN_14c75b148)(plVar13[2],(int)plVar13[3],0);
      local_48 = "FailedBinaryProgramCreate";
      iStack_40 = 0x19;
      uStack_3c = uStack_3c & 0xffffff00;
      uVar5 = FUN_14001a6c0(&local_48,1);
      local_48 = (char *)(ulonglong)uVar5;
      if (DAT_14ca83b80 != (longlong *)0x0 && DAT_14ca83b88 != 0) {
        (**(code **)(*DAT_14ca83b80 + 0x60))(DAT_14ca83b80,&local_48);
      }
      FUN_1473ee780(param_1,&local_48);
      pcVar12 = local_48;
      if (iStack_40 == 0) {
        pcVar12 = "";
      }
      FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLShaders.cpp",0x607,
                    L"RestoreGLProgramFromBinary : Failed to restore GL program from binary data! [%s]"
                    ,pcVar12);
      if (local_48 != (char *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar11 = 0;
      }
      else if (iVar1 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar11 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar11 = 1;
      }
      if ((*(int *)(lVar10 + uVar11 * 4) != 0) || ((int)plVar13[1] < 1)) {
        plVar8 = *(longlong **)(unaff_RDI + 0x298);
        *(longlong **)(unaff_RDI + 0x298) = plVar13;
        plVar13 = plVar8;
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    if (*plVar13 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar13);
  }
  if (iVar4 == -1) {
    unaff_RDI = 0;
  }
  else {
    FUN_1431ccb5e(param_1,unaff_RDI);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RDI;
}



// FUNCTION 1431cd1bc FUN_1431cd1bc body=80 status=ok
// SIG undefined FUN_1431cd1bc(void)

void FUN_1431cd1bc(int param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(DAT_14ca79b98 + 0x80 + (longlong)param_1 * 0x90);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  FUN_1473f2f88(&DAT_14ca79b98,param_1);
  return;
}



// FUNCTION 1431cd20c FUN_1431cd20c body=119 status=ok
// SIG undefined FUN_1431cd20c(void)

void FUN_1431cd20c(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1431cce70();
  plVar1 = *(longlong **)(param_1 + 0x298);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  (*(code *)(&PTR_FUN_14a371120)[*(byte *)(param_1 + 0x288)])(param_1 + 200);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1431cd2d0 FUN_1431cd2d0 body=29 status=ok
// SIG undefined FUN_1431cd2d0(void)

undefined8 FUN_1431cd2d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431cd306 FUN_1431cd306 body=160 status=ok
// SIG undefined FUN_1431cd306(void)

void FUN_1431cd306(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    if ((*(longlong *)(param_1 + 0x50) != 0) && ((*(byte *)(param_1 + 0x40) & 4) != 0)) {
      FUN_1400020a8();
      iVar1 = *(int *)(param_1 + 0x38);
    }
    FUN_1473e7f9e(DAT_14ca79650,iVar1);
    (*DAT_14ca7fbb0)(1,(int *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    LOCK();
    DAT_14ca84ee0 = DAT_14ca84ee0 - (ulonglong)*(uint *)(param_1 + 0x20);
    UNLOCK();
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1400020a8();
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x100000;
  return;
}



// FUNCTION 1431cd3be FUN_1431cd3be body=74 status=ok
// SIG undefined FUN_1431cd3be(void)

void FUN_1431cd3be(longlong param_1)

{
  longlong lVar1;
  
  (*DAT_14ca7fba8)(0x8f37,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  lVar1 = (*DAT_14ca7fd18)(0x8f37,0,**(undefined4 **)(param_1 + 0x18),1);
  **(longlong **)(param_1 + 0x20) = (ulonglong)**(uint **)(param_1 + 0x28) + lVar1;
  return;
}



// FUNCTION 1431cd408 FUN_1431cd408 body=50 status=ok
// SIG undefined FUN_1431cd408(void)

void FUN_1431cd408(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  (*DAT_14ca7fe10)(0x8f37);
  *(undefined8 *)(lVar1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001431cd437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca7fba8)(0x8f37,0);
  return;
}



// FUNCTION 1431cd442 FUN_1431cd442 body=177 status=ok
// SIG undefined FUN_1431cd442(void)

void FUN_1431cd442(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  if ((longlong)(int)param_1[1] != 0) {
    plVar5 = (longlong *)*param_1;
    plVar1 = plVar5 + (longlong)(int)param_1[1] * 3;
    do {
      if ((char)plVar5[2] == '\0') {
        lVar2 = *plVar5;
        lVar3 = plVar5[1];
        FUN_1431cd306(lVar2);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
          *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
          *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar3 + 0x28);
          *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar3 + 0x3c);
          *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar3 + 0x38);
          *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(lVar3 + 0x58);
          *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)(lVar3 + 0x60);
          *(undefined8 *)(lVar3 + 0x38) = 0;
          *(undefined8 *)(lVar3 + 0x58) = 0;
          *(undefined4 *)(lVar3 + 0x60) = 0;
        }
        for (puVar4 = *(undefined8 **)(lVar2 + 0x30); puVar4 != (undefined8 *)0x0;
            puVar4 = (undefined8 *)puVar4[1]) {
          (**(code **)*puVar4)(puVar4);
        }
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar1);
  }
  return;
}



// FUNCTION 1431cd4f4 FUN_1431cd4f4 body=226 status=ok
// SIG undefined FUN_1431cd4f4(void)

void FUN_1431cd4f4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar1 = plVar5 + (longlong)*(int *)(param_1 + 0x18) * 3;
    do {
      if ((char)plVar5[2] == '\0') {
        lVar2 = *plVar5;
        lVar3 = plVar5[1];
        FUN_1431cd306(lVar2);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
          *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
          *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar3 + 0x28);
          *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar3 + 0x3c);
          *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar3 + 0x38);
          *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(lVar3 + 0x58);
          *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)(lVar3 + 0x60);
          *(undefined8 *)(lVar3 + 0x38) = 0;
          *(undefined8 *)(lVar3 + 0x58) = 0;
          *(undefined4 *)(lVar3 + 0x60) = 0;
        }
        for (puVar4 = *(undefined8 **)(lVar2 + 0x30); puVar4 != (undefined8 *)0x0;
            puVar4 = (undefined8 *)puVar4[1]) {
          (**(code **)*puVar4)(puVar4);
        }
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar1);
    plVar5 = *(longlong **)(param_1 + 0x10);
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_1400020a8(plVar5);
    return;
  }
  return;
}



// FUNCTION 1431cd5d6 FUN_1431cd5d6 body=144 status=ok
// SIG undefined FUN_1431cd5d6(void)

undefined8 FUN_1431cd5d6(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_1473f7844(), iVar3 != -1)) {
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 0x78 + (longlong)iVar3 * 0x88);
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar2);
    }
    memmove((void *)(lVar1 + (longlong)iVar3 * 0x88),param_3,0x80);
    FUN_1473f78ec(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 1431cd666 FUN_1431cd666 body=77 status=ok
// SIG undefined FUN_1431cd666(void)

void FUN_1431cd666(longlong *param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_1 + 0x78 + (longlong)param_2 * 0x88);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  FUN_1473f78ec(param_1,param_2);
  return;
}



// FUNCTION 1431cd6d0 FUN_1431cd6d0 body=73 status=ok
// SIG undefined FUN_1431cd6d0(void)

void FUN_1431cd6d0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa0) & 1) == 0) {
    FUN_1473ec364(*(undefined8 *)(param_1 + 0x10));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431cd704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1431cd71a FUN_1431cd71a body=135 status=ok
// SIG undefined FUN_1431cd71a(void)

void FUN_1431cd71a(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = (*DAT_14ca7fe88)(0x9117,0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  if (puVar4 != (undefined8 *)0x0) {
    *DAT_14ca79800 = puVar4;
    DAT_14ca79800 = puVar4;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431cd793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar4)(puVar4,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1431cd7a2 FUN_1431cd7a2 body=242 status=ok
// SIG undefined FUN_1431cd7a2(void)

void FUN_1431cd7a2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  HGLRC pHVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  void **local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  void *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_38 = (void *)0x0;
  uStack_30 = 0;
  if (*(longlong *)(lVar1 + 0x14fa0) == 0) {
    lVar2 = *(longlong *)(lVar1 + 0x15008);
    pHVar4 = wglGetCurrentContext();
    lVar5 = lVar1 + 0x14200;
    if (pHVar4 == *(HGLRC *)(lVar2 + 0x40)) {
      lVar5 = lVar1 + 0x148d0;
    }
    *(longlong *)(lVar1 + 0x14fa0) = lVar5;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  local_58 = *puVar3;
  uStack_54 = puVar3[1];
  uStack_50 = puVar3[2];
  uStack_4c = puVar3[3];
  uStack_48 = puVar3[4];
  uStack_44 = puVar3[5];
  uStack_40 = puVar3[6];
  local_70 = &local_58;
  local_68 = **(undefined8 **)(param_1 + 0x20);
  local_60 = (*(undefined8 **)(param_1 + 0x20))[1];
  local_78 = &local_38;
  FUN_1473eca40(lVar1,puVar3[3],**(undefined8 **)(param_1 + 0x18));
  memcpy((void *)**(undefined8 **)(param_1 + 0x30),local_38,
         (ulonglong)**(uint **)(param_1 + 0x38) << 2);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431cd896 FUN_1431cd896 body=371 status=ok
// SIG undefined FUN_1431cd896(void)

void FUN_1431cd896(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  HGLRC pHVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  uint *local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)*param_1 != (longlong *)0x0) {
    lVar5 = param_1[2];
    local_38 = (**(code **)(**(longlong **)*param_1 + 0x30))();
    if (local_38 != 0) {
      local_58 = &local_3c;
      local_3c = (uint)*(byte *)(param_1[1] + 0x11);
      local_48 = CONCAT44(local_48._4_4_,1);
      local_50 = 0;
      iVar8 = FUN_1473e71bc(lVar5,1,&local_38,0);
      piVar6 = (int *)param_1[3];
      iVar1 = piVar6[2];
      iVar2 = piVar6[3];
      iVar3 = *piVar6;
      iVar4 = piVar6[1];
      FUN_14735c9c0(param_1[4],(iVar2 - iVar4) * (iVar1 - iVar3),1);
      (*DAT_14ca7fb60)(0x8ca8,iVar8);
      uVar10 = 0x8ce0;
      if (iVar8 == 0) {
        uVar10 = 0x405;
      }
      (*DAT_14ca7fe98)(uVar10);
      (*DAT_14ca7fbe8)(0xd05,1);
      local_48 = *(undefined8 *)param_1[4];
      local_50 = CONCAT44(local_50._4_4_,0x1406);
      local_58 = (uint *)CONCAT44(local_58._4_4_,0x1908);
      (*DAT_14ca7fbf0)(*(undefined4 *)param_1[3],((undefined4 *)param_1[3])[1],iVar1 - iVar3,
                       iVar2 - iVar4);
      (*DAT_14ca7fbe8)(0xd05,4);
      lVar11 = *(longlong *)(lVar5 + 0x14fa0);
      if (lVar11 == 0) {
        lVar7 = *(longlong *)(lVar5 + 0x15008);
        pHVar9 = wglGetCurrentContext();
        lVar11 = lVar5 + 0x14200;
        if (pHVar9 == *(HGLRC *)(lVar7 + 0x40)) {
          lVar11 = lVar5 + 0x148d0;
        }
        *(longlong *)(lVar5 + 0x14fa0) = lVar11;
      }
      *(undefined4 *)(lVar11 + 0x1a8) = 0xffffffff;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431cda14 FUN_1431cda14 body=157 status=ok
// SIG undefined FUN_1431cda14(void)

void FUN_1431cda14(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x10);
  plVar2 = (longlong *)0x0;
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x52) == '\0')) {
    plVar2 = (longlong *)(**(code **)(*plVar1 + 0x30))();
  }
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(lVar3 + 0x24);
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  **(undefined4 **)(param_1 + 0x20) = *(undefined4 *)(lVar3 + 0x28);
  local_28 = &local_1c;
  local_1c = 0;
  uVar4 = FUN_1431cf9b8(plVar2,0,0,0);
  **(undefined8 **)(param_1 + 0x28) = uVar4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431cdab2 FUN_1431cdab2 body=47 status=ok
// SIG undefined FUN_1431cdab2(void)

void FUN_1431cdab2(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  uVar2 = 0;
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x52) == '\0')) {
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
  }
  FUN_1431cfc0a(uVar2,0,0);
  return;
}



// FUNCTION 1431cdae2 FUN_1431cdae2 body=555 status=ok
// SIG undefined FUN_1431cdae2(void)

void FUN_1431cdae2(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  HGLRC pHVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = param_1[4];
  if (*(longlong **)*param_1 == (longlong *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = (**(code **)(**(longlong **)*param_1 + 0x30))();
  }
  uVar1 = *(undefined4 *)param_1[1];
  iVar2 = *(int *)(lVar9 + 0x6c);
  iVar12 = ((uint)(iVar2 == 0x9009) * 5 + 1) * *(int *)param_1[3] + *(int *)param_1[2];
  local_54 = 0;
  local_50 = iVar12;
  local_4c = uVar1;
  local_48 = lVar9;
  if (iVar2 == 0x9009) {
    (*DAT_14ca7fb58)(1,&local_54);
    (*DAT_14ca7fb60)(0x8ca8,local_54);
    if ((*(longlong *)(lVar9 + 0x78) != 0) &&
       ((*(byte *)(*(longlong *)(lVar9 + 0x78) + 0x10) & 1) == 0)) {
      FUN_1431cefae(lVar9,1);
    }
    local_78 = (undefined4 *)CONCAT44(local_78._4_4_,iVar12);
    (*DAT_14ca7feb8)(0x8ca8,0x8ce0,*(undefined4 *)(lVar9 + 0x68),uVar1);
  }
  else {
    local_78 = &local_4c;
    local_68 = CONCAT44(local_68._4_4_,1);
    local_70 = 0;
    local_54 = FUN_1473e71bc(lVar6,1,&local_48,&local_50);
  }
  piVar7 = (int *)param_1[5];
  iVar12 = piVar7[2];
  iVar3 = piVar7[3];
  iVar4 = *piVar7;
  iVar5 = piVar7[1];
  FUN_145ee9bde(param_1[6],(iVar3 - iVar5) * (iVar12 - iVar4),1);
  (*DAT_14ca7fb60)(0x8ca8,local_54);
  uVar11 = 0x8ce0;
  if (local_54 == 0) {
    uVar11 = 0x405;
  }
  (*DAT_14ca7fe98)(uVar11);
  (*DAT_14ca7fbe8)(0xd05,1);
  local_68 = *(undefined8 *)param_1[6];
  local_70 = CONCAT44(local_70._4_4_,0x140b);
  local_78 = (undefined4 *)CONCAT44(local_78._4_4_,0x1908);
  (*DAT_14ca7fbf0)(*(undefined4 *)param_1[5],((undefined4 *)param_1[5])[1],iVar12 - iVar4,
                   iVar3 - iVar5);
  (*DAT_14ca7fbe8)(0xd05,4);
  if (iVar2 == 0x9009) {
    (*DAT_14ca7fb98)(1,&local_54);
  }
  lVar9 = *(longlong *)(lVar6 + 0x14fa0);
  if (lVar9 == 0) {
    lVar8 = *(longlong *)(lVar6 + 0x15008);
    pHVar10 = wglGetCurrentContext();
    lVar9 = lVar6 + 0x14200;
    if (pHVar10 == *(HGLRC *)(lVar8 + 0x40)) {
      lVar9 = lVar6 + 0x148d0;
    }
    *(longlong *)(lVar6 + 0x14fa0) = lVar9;
  }
  *(undefined4 *)(lVar9 + 0x1a8) = 0xffffffff;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431cdd18 FUN_1431cdd18 body=819 status=ok
// SIG undefined FUN_1431cdd18(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1431cdd18(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  HGLRC pHVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  int local_88;
  int local_80;
  int local_78;
  undefined8 local_70;
  int local_5c;
  longlong local_58;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = param_1[4];
  if (*(longlong **)*param_1 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(**(longlong **)*param_1 + 0x30))();
  }
  piVar2 = (int *)param_1[1];
  iVar8 = piVar2[2] - *piVar2;
  iVar12 = piVar2[3] - piVar2[1];
  local_5c = *(int *)param_1[2];
  iVar1 = ((int *)param_1[2])[1];
  iVar11 = iVar1 - local_5c;
  FUN_145ee9bde(param_1[3],iVar12 * iVar8 * iVar11,1);
  local_50[1] = 0;
  (*DAT_14ca7fb58)(1,local_50 + 1);
  (*DAT_14ca7fb60)(0x8ca8,local_50[1]);
  iVar9 = DAT_14c760d24;
  local_50[0] = 0;
  lVar14 = (longlong)(int)DAT_14c760d24;
  if (lVar14 < 0x3ff) {
    local_50[0] = *(int *)(&DAT_14ca7a3e0 + lVar14 * 4);
    uVar13 = DAT_14c760d24 + 1;
  }
  else {
    iVar4 = 0x400 - DAT_14c760d24;
    memcpy(local_50,&DAT_14ca7a3e0 + lVar14 * 4,(longlong)iVar4 * 4);
    (*DAT_14ca7fb68)(0x400,&DAT_14ca7a3e0);
    uVar13 = iVar9 - 0x3ff;
    memcpy(local_50 + iVar4,&DAT_14ca7a3e0,(ulonglong)uVar13 * 4);
  }
  iVar9 = local_50[0];
  DAT_14c760d24 = uVar13;
  (*DAT_14ca7fbe0)(0x84c0);
  (*DAT_14ca7fb70)(0x806f,iVar9);
  local_98 = CONCAT44(local_98._4_4_,iVar12);
  local_70 = 0;
  local_78 = 0x140b;
  local_80 = 0x1908;
  local_88 = 0;
  iVar9 = 0;
  local_90 = iVar11;
  (*DAT_14ca7fb78)(0x806f,0,0x881a,iVar8);
  if (iVar1 != local_5c) {
    do {
      iVar1 = *(int *)param_1[2];
      if ((*(longlong *)(lVar5 + 0x78) != 0) &&
         ((*(byte *)(*(longlong *)(lVar5 + 0x78) + 0x10) & 1) == 0)) {
        FUN_1431cefae(lVar5,1);
      }
      local_98._0_4_ = iVar1 + iVar9;
      (*DAT_14ca7feb8)(0x8ca8,0x8ce0,*(undefined4 *)(lVar5 + 0x68),0);
      uVar7 = 0x8ce0;
      if (local_50[1] == 0) {
        uVar7 = 0x405;
      }
      (*DAT_14ca7fe98)(uVar7);
      local_90 = *(int *)param_1[1];
      local_88 = ((int *)param_1[1])[1];
      local_98 = CONCAT44(local_98._4_4_,iVar9);
      local_80 = iVar8;
      local_78 = iVar12;
      (*DAT_14ca7ff60)(0x806f,0,0);
      iVar9 = iVar9 + 1;
    } while (iVar11 != iVar9);
  }
  (*DAT_14ca7fbe8)(0xd05,1);
  local_98 = *(undefined8 *)param_1[3];
  uVar10 = 0;
  (*DAT_14ca7ff68)(0x806f,0,0x1908,0x140b);
  (*DAT_14ca7fbe8)(0xd05,4);
  lVar14 = local_58;
  lVar5 = *(longlong *)(local_58 + 0x14fa0);
  if (lVar5 == 0) {
    lVar3 = *(longlong *)(local_58 + 0x15008);
    pHVar6 = wglGetCurrentContext();
    lVar5 = lVar14 + 0x14200;
    if (pHVar6 == *(HGLRC *)(lVar3 + 0x40)) {
      lVar5 = lVar14 + 0x148d0;
    }
    *(longlong *)(lVar14 + 0x14fa0) = lVar5;
  }
  if (*(int *)(*(longlong *)(lVar5 + 8) + 0x10) == 0x806f) {
    uVar10 = *(undefined4 *)(*(longlong *)(lVar5 + 8) + 0x14);
  }
  (*DAT_14ca7fb70)(0x806f,uVar10);
  (*DAT_14ca7fbe0)(*(int *)(lVar5 + 0x410) + 0x84c0);
  (*DAT_14ca7fb98)(1,local_50 + 1);
  (*DAT_14ca7fb90)(1,local_50);
  *(undefined4 *)(lVar5 + 0x1a8) = 0xffffffff;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431ce055 FUN_1431ce055 body=2697 status=ok
// SIG undefined FUN_1431ce055(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ce055(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  int local_60;
  undefined1 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_68,&DAT_14ca79440);
  if (cVar2 == '\0') {
    _DAT_14ca79440 = 0;
    uRam000000014ca79448 = 0;
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  local_78 = 0x24;
  FUN_14078dbce(&DAT_14ca79460,L"r.OpenGL.StoreCompressedProgramBinaries",&local_68,&DAT_149dfb77a);
  atexit(FUN_1431c2d2e);
  local_78 = 4;
  FUN_141471170(&DAT_14ca79478,L"OpenGL.UseStagingBuffer",&DAT_14c760cc8,
                L"Enables maps of dynamic vertex buffers to go to a staging buffer");
  atexit(FUN_1431c2f21);
  DAT_14ca79488 = 0;
  _DAT_14ca79490 = 0;
  atexit((_func_5014 *)&LAB_1431c2f66);
  DAT_14ca794b8 = 0;
  DAT_14ca794c0 = 0;
  DAT_14ca79498 = 0;
  _DAT_14ca794a0 = 0;
  _DAT_14ca794c4 = 0xffffffff00000080;
  DAT_14ca794cc = 0;
  DAT_14ca794d8 = 0;
  DAT_14ca794e0 = 0;
  atexit(FUN_1431c2f77);
  local_78 = 0;
  FUN_141471170(&DAT_14ca79508,L"OpenGL.UseMapBuffer",&DAT_14ca7c3e4,
                L"If true, use glMapBuffer otherwise use glBufferSubdata.");
  atexit(FUN_1431c32b9);
  local_78 = 0;
  FUN_141471170(&DAT_14ca79520,L"OpenGL.SkipCompute",&DAT_14ca79518,
                L"If true, don\'t issue dispatch work.");
  atexit(FUN_1431c32fe);
  local_78 = 4;
  FUN_141471170(&DAT_14ca79530,L"OpenGL.MaxSubDataSize",&DAT_14c760d2c,
                L"Maximum amount of data to send to glBufferSubData in one call");
  atexit(FUN_1431c3343);
  local_78 = 0;
  FUN_141471170(&DAT_14ca79548,L"OpenGL.RebindTextureBuffers",&DAT_14ca79540,
                L"If true, rebind GL_TEXTURE_BUFFER\'s to their GL_TEXTURE name whenever the buffer is modified."
               );
  atexit(FUN_1431c3388);
  local_78 = 0;
  FUN_141471170(&DAT_14ca79558,L"OpenGL.UseBufferDiscard",&DAT_14c760d30,
                L"If true, use dynamic buffer orphaning hint.");
  atexit(FUN_1431c33cd);
  local_78 = 0;
  FUN_141471170(&DAT_14ca79568,L"OpenGL.UseUnsynchronizedBufferMapping",&DAT_14c760cd0,
                L"If true, use GL_MAP_UNSYNCHRONIZED_BIT when mapping write only buffers.");
  atexit(FUN_1431c3412);
  local_78 = 4;
  FUN_141471170(&DAT_14ca79578,L"OpenGL.UsePersistentMappingStagingBuffer",&DAT_14c760ccc,
                L"If true, it will use persistent mapping for the Staging Buffer.");
  atexit(FUN_1431c3457);
  local_78 = 0x24;
  FUN_141471170(&DAT_14ca79588,L"r.OpenGL.ForceBilinear",&DAT_14ca79c3c,
                L"Force GL to override all trilinear or aniso texture filtering states to bilinear.\n0: disabled. (default)\n1: enabled."
               );
  atexit(FUN_1431c349c);
  local_78 = 0x20;
  FUN_141471170(&DAT_14ca795a0,L"r.OpenGL.FenceKickPerDrawCount",&DAT_14ca79598,
                L"Insert a GL fence after the specified number of draws has been issued.\nThis hint can encourage some drivers to begin processing geometry as soon as a sufficient workload has built up.\n0: disabled (default)"
               );
  atexit(FUN_1431c34e1);
  DAT_14ca795c0 = 0;
  _DAT_14ca795c8 = 0;
  _DAT_14ca795d0 = 0;
  atexit(FUN_1431c3cd0);
  local_68._0_4_ = 1;
  local_78 = 0x24;
  FUN_14078dbce(&DAT_14ca795d8,L"r.OpenGL.AllowRHIThread",&local_68,
                L"Toggle OpenGL RHI thread support.\n0: GL scene rendering operations are performed on the render thread.\n1: GL scene rendering operations are queued onto the RHI thread gaining some parallelism with the render thread. (default, mobile feature levels only)"
               );
  atexit(FUN_1431c49cc);
  local_68._0_4_ = 1;
  local_78 = 0x24;
  FUN_14078dbce(&DAT_14ca795f0,L"r.OpenGL.ExtraDeletionLatency",&local_68,
                L"Toggle the engine\'s deferred deletion queue for RHI resources. (default:1)");
  atexit(FUN_1431c4a11);
  local_68 = (undefined8 *)CONCAT44(local_68._4_4_,1);
  local_78 = 0x24;
  FUN_14078dbce(&DAT_14ca79608,L"r.OpenGL.Depth24Bit",&local_68,
                L"0: Use 32-bit float depth buffer \n1: Use 24-bit fixed point depth buffer (default)\n"
               );
  atexit(FUN_1431c4a56);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffffffffff00);
  local_78 = 0x24;
  FUN_140bd5914(&DAT_14ca79620,L"r.OpenGL.EnablePSOFileCacheWhenPrecachingActive",&local_68,
                L"false: If precaching is active (r.PSOPrecaching=1) then disable the PSO filecache. (default)\ntrue: GL RHI Allows both PSO file cache and precaching."
               );
  atexit(FUN_1431c4a9b);
  local_68 = (undefined8 *)CONCAT71(local_68._1_7_,1);
  local_78 = 0x24;
  FUN_140bd5914(&DAT_14ca79638,L"r.OpenGL.AllowPSOPrecaching",&local_68,
                L"true: if r.PSOPrecaching=1 GL RHI will use precaching. (default)\nfalse: GL RHI will disable precaching (even if r.PSOPrecaching=1). "
               );
  atexit(FUN_1431c4ae0);
  FUN_140056680(&local_68,&DAT_149dfb77a);
  local_78 = 4;
  FUN_140f510cc(&DAT_14ca79658,L"r.OpenGL.StripExtensions",&local_68,
                L"List of comma separated OpenGL extensions to strip from a driver reported extensions string"
               );
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1431c4f6d);
  FUN_140056680(&local_68,&DAT_149dfb77a);
  local_78 = 4;
  FUN_140f510cc(&DAT_14ca79670,L"r.OpenGL.AddExtensions",&local_68,
                L"List of comma separated OpenGL extensions to add to a driver reported extensions string"
               );
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1431c4fb2);
  local_68 = (undefined8 *)0x800000014a36e3c6;
  local_54 = 9;
  local_60 = FUN_14577453c();
  local_5c = 1;
  FUN_14631a8e6(&local_68);
  local_78 = 0x24;
  FUN_141471170(&DAT_14ca79690,L"OpenGL.UseGlClipControlIfAvailable",&DAT_14c760cec,
                L"If true, the engine trys to use glClipControl if the driver supports it.");
  atexit(FUN_1431c7e8b);
  local_78 = 0x24;
  FUN_14153156c(&DAT_14ca796a0,L"r.OpenGL.MemoryMapGLProgramCache",&DAT_14c760cf0,
                L"If true enabled memory mapping of the GL program binary cache. (default)\nIf false then upon opening the binary cache all programs are loaded into memory.\nWhen enabled this can reduce RSS pressure when combined with program LRU. (see r.OpenGL.EnableProgramLRUCache)."
               );
  atexit(FUN_1431c7ed0);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  local_78 = 0x24;
  FUN_14078dbce(&DAT_14ca796b0,L"r.ProgramBinaryCache.Enable",&local_68,
                L"If true, enables binary program cache. Enabled by default only on Android");
  atexit(FUN_1431c7f15);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  local_78 = 0x24;
  FUN_14078dbce(&DAT_14ca796c8,L"r.ProgramBinaryCache.RestartAndroidAfterPrecompile",&local_68,
                L"If true, Android apps will restart after precompiling the binary program cache.");
  atexit(FUN_1431c7f5a);
  local_78 = 0x20;
  FUN_141471170(&DAT_14ca796e0,L"r.OpenGL.MaxBinaryProgramLoadTime",&DAT_14c760cf4,
                L"The maximum time per frame to transfer programs from the binary program cache to the GL RHI. in milliseconds.\ndefault 3ms. Note: Driver compile time for programs may exceed this limit if you\'re not using the LRU."
               );
  atexit(FUN_1431c7f9f);
  local_78 = 0x20;
  FUN_141471170(&DAT_14ca796f0,L"r.OpenGL.BinaryCachePeriodicFlushProgramCount",&DAT_14c760cf8,
                L"When r.PSOPrecaching is active this value\nis the number of appended programs to accumulate before the cache is flushed to storage."
               );
  atexit(FUN_1431c7fe4);
  local_78 = 0x20;
  FUN_141471170(&DAT_14ca79700,L"r.OpenGL.BinaryCacheMMapAfterEveryMB",&DAT_14c760cfc,
                L"When r.PSOPrecaching is active this value\nspecifies the size program binary cache can grow before it is memory mapped, the mmapped programs replace the allocated programs and potentially frees up memory for unused precached programs."
               );
  atexit(FUN_1431c8029);
  local_78 = 0x20;
  FUN_141471170(&DAT_14ca79710,L"r.OpenGL.BinaryCacheMaxPermittedSize",&DAT_14c760d00,
                L"When r.PSOPrecaching is active and the binary cache\'s size is greater\nthan this value the cache will be deleted at startup. The precaching cache is rebuilt from empty."
               );
  atexit(FUN_1431c806e);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca79730,4000);
  atexit((_func_5014 *)&LAB_1431c80b3);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79758);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca79758,4000);
  atexit((_func_5014 *)&LAB_1431c80c1);
  DAT_14ca79788 = 0;
  DAT_14ca79790 = 0;
  uRam000000014ca79798 = 0;
  atexit((_func_5014 *)&LAB_1431c82d1);
  DAT_14ca797c0 = 0;
  _DAT_14ca797c8 = 0;
  DAT_14ca797d0 = 0;
  _DAT_14ca797d8 = 0;
  DAT_14ca797e0 = 0;
  uRam000000014ca797e8 = 0;
  atexit(FUN_1431c984c);
  DAT_14ca797f0 = 0;
  _DAT_14ca797f8 = 0;
  atexit((_func_5014 *)&LAB_1431c988f);
  DAT_14ca79800 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *DAT_14ca79800 = 0;
  DAT_14ca79800[1] = 0;
  DAT_14ca79808 = DAT_14ca79800;
  atexit((_func_5014 *)&LAB_1431c98ee);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  local_78 = 0x24;
  FUN_14078dbce(&DAT_14ca79828,L"r.OpenGL.EnableProgramLRUCache",&local_68,
                L"OpenGL program LRU cache.\nFor use only when driver only supports a limited number of active GL programs.\n0: disable LRU. (default)\n1: When the LRU cache limits are reached, the least recently used GL program(s) will be deleted to make space for new/more recent programs. Expect hitching if requested shader is not in LRU cache."
               );
  atexit(FUN_1431ca1f2);
  local_68._0_4_ = 700;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca79840,L"r.OpenGL.ProgramLRUCount",&local_68,
                L"OpenGL LRU maximum occupancy.\nLimit the maximum number of active shader programs at any one time.\n0: disable LRU.\nNon-Zero: Maximum number of active shader programs, if reached least, recently used shader programs will deleted. "
               );
  atexit(FUN_1431ca237);
  local_68._0_4_ = 0x2300000;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca79858,L"r.OpenGL.ProgramLRUBinarySize",&local_68,
                L"OpenGL LRU maximum binary shader size.\nLimit the maximum number of active shader programs at any one time.\n0: disable LRU. (default)\nNon-Zero: Maximum number of bytes active shader programs may use. If reached, least recently used shader programs will deleted."
               );
  atexit(FUN_1431ca27c);
  local_68._0_4_ = 0;
  local_78 = 0x24;
  FUN_14078dbce(&DAT_14ca79870,L"r.OpenGL.ProgramLRUKeepBinaryResident",&local_68,
                L"OpenGL LRU should keep program binary in memory.\nDo not discard the program binary after creation of the GL program.\n0: Program binary is discarded after GL program creation and recreated on program eviction. (default)\n1: Program binary is retained, this improves eviction and re-creation performance but uses more memory."
               );
  atexit(FUN_1431ca2c1);
  local_68._0_4_ = 0;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca79888,L"r.OpenGL.IgnoreLinkFailure",&local_68,
                L"Ignore OpenGL program link failures.\n0: Program link failure generates a fatal error when encountered. (default)\n1: Ignore link failures. this may allow a program to continue but could lead to undefined rendering behaviour."
               );
  atexit(FUN_1431ca306);
  local_68 = (undefined8 *)((ulonglong)local_68._4_4_ << 0x20);
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca798a0,L"r.OpenGL.IgnoreShaderCompileFailure",&local_68,
                L"Ignore OpenGL shader compile failures.\n0: Shader compile failure return an error when encountered. (default)\n1: Ignore Shader compile failures."
               );
  atexit(FUN_1431ca34b);
  local_78 = 0x20;
  FUN_141471170(&DAT_14ca798c0,L"r.OpenGL.ProgramLRUEvictTimeSeconds",&DAT_14ca798b8,
                L"OpenGL Program LRU, unused program eviction time.\nTime in seconds before an unused program is eligible for eviction from the GL driver.\n0 to disable unused program eviction. (default)"
               );
  atexit(FUN_1431ca390);
  local_78 = 0x20;
  FUN_141471170(&DAT_14ca798d0,L"r.OpenGL.ProgramLRUResidentCountBeforeEviction",&DAT_14c760d04,
                L"The number of permanently resident programs allowed before the LRU begins evicting unused programs.\nCan help reduce hitching after a static scene is presented for an extended period of time.\n0 to remove all eligible programs as soon as possible. (max memory savings with higher hitching potential.)\n300: (default) ensures the last 300 programs are retained as GL objects."
               );
  atexit(FUN_1431ca3d5);
  local_78 = 0x20;
  FUN_14153156c(&DAT_14ca798e0,L"r.OpenGL.CacheAllProgramBinaries",&DAT_14c760d08,
                L"Place all encountered program in the binary cache.\nrequires r.PSOPrecaching.");
  atexit(FUN_1431ca41a);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  local_60 = 2;
  *local_68 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_68[2] = lVar3;
  *local_68 = &PTR_FUN_149e062c0;
  local_68[3] = FUN_1431ca45f;
  local_78 = 0;
  FUN_14152bcb8(&DAT_14ca79900,L"r.OpenGL.PrintProgramStats",
                L"Print to log current program binary stats",&local_68);
  if (local_60 != 0) {
    if (local_68 == (undefined8 *)0x0) goto LAB_1431cea63;
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1431cea63:
  atexit(FUN_1431ca482);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79918);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca79918,4000);
  atexit((_func_5014 *)&LAB_1431ca4c7);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ceae0 FUN_1431ceae0 body=41 status=ok
// SIG undefined FUN_1431ceae0(void)

void FUN_1431ceae0(void)

{
  DAT_14ca7c440 = 0;
  if (DAT_14ca7c438 != 0) {
    FUN_1400020a8();
  }
  FUN_145d70428();
  return;
}



// FUNCTION 1431ceb09 FUN_1431ceb09 body=69 status=ok
// SIG undefined FUN_1431ceb09(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ceb09(void)

{
  _DAT_14ca7c448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ceb4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca7c450,1);
  return;
}



// FUNCTION 1431ceb4e FUN_1431ceb4e body=69 status=ok
// SIG undefined FUN_1431ceb4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ceb4e(void)

{
  _DAT_14ca7c460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ceb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca7c468,1);
  return;
}



// FUNCTION 1431ceb93 FUN_1431ceb93 body=69 status=ok
// SIG undefined FUN_1431ceb93(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ceb93(void)

{
  _DAT_14ca7c478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431cebd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca7c480,1);
  return;
}



// FUNCTION 1431cebd8 FUN_1431cebd8 body=69 status=ok
// SIG undefined FUN_1431cebd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431cebd8(void)

{
  _DAT_14ca7c488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431cec1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca7c490,1);
  return;
}



// FUNCTION 1431cec1d FUN_1431cec1d body=69 status=ok
// SIG undefined FUN_1431cec1d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431cec1d(void)

{
  _DAT_14ca7c498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431cec5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca7c4a0,1);
  return;
}



// FUNCTION 1431cec62 FUN_1431cec62 body=69 status=ok
// SIG undefined FUN_1431cec62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431cec62(void)

{
  _DAT_14ca7c4a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ceca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca7c4b0,1);
  return;
}



// FUNCTION 1431ceca7 FUN_1431ceca7 body=69 status=ok
// SIG undefined FUN_1431ceca7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ceca7(void)

{
  _DAT_14ca7c4c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431cece9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca7c4c8,1);
  return;
}



// FUNCTION 1431cecec FUN_1431cecec body=705 status=ok
// SIG undefined FUN_1431cecec(void)

int * FUN_1431cecec(int *param_1,ulonglong *param_2)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  bVar15 = (byte)(*(byte *)((longlong)param_2 + 0x32) - 3) < 2;
  bVar11 = *(byte *)(param_1 + 3);
  *(byte *)(param_1 + 3) = bVar11 & 0xfe | bVar15;
  bVar1 = (*(byte *)((longlong)param_2 + 0x32) == 4 || *(byte *)((longlong)param_2 + 0x32) == 1) *
          '\x02';
  *(byte *)(param_1 + 3) = bVar11 & 0xfc | bVar15 | bVar1;
  bVar10 = (byte)((uint)*param_2 >> 0x1a) & 4;
  *(byte *)(param_1 + 3) = bVar11 & 0xf8 | bVar15 | bVar1 | bVar10;
  uVar13 = *param_2;
  bVar6 = ((byte)uVar13 & 4) * '\x02';
  *(byte *)(param_1 + 3) = bVar11 & 0xc0 | bVar15 | bVar1 | bVar10 | bVar6;
  bVar16 = ((uint)*param_2 >> 0xc & 1) != 0;
  bVar17 = 1 < *(byte *)((longlong)param_2 + 0x31);
  bVar6 = bVar11 & 0x80 | bVar15 | bVar1 | bVar10 | bVar6;
  *(byte *)(param_1 + 3) = (bVar17 && bVar16) << 6 | bVar6;
  if (((1 < *(byte *)((longlong)param_2 + 0x31) & (byte)uVar13 >> 2) == 1) &&
     (*(byte *)((longlong)param_2 + 0x32) == 1)) {
    *(byte *)(param_1 + 3) = bVar6;
    iVar7 = 0x8c1a;
    goto LAB_1431cee11;
  }
  iVar7 = 0x8d41;
  if (bVar17 && bVar16) goto LAB_1431cee11;
  iVar7 = 0xde1;
  if (((*param_2 >> 0x22 & 1) != 0) || (iVar7 = 0x8d41, ((uint)*param_2 >> 0x12 & 1) != 0))
  goto LAB_1431cee11;
  switch(*(byte *)((longlong)param_2 + 0x32)) {
  case 1:
    iVar12 = 0x9102;
    iVar7 = 0x8c1a;
    goto LAB_1431cee0e;
  case 2:
    iVar7 = 0x806f;
    break;
  case 3:
    iVar7 = 0x8513;
    break;
  case 4:
    iVar7 = 0x9009;
    break;
  default:
    iVar12 = 0x9100;
    iVar7 = 0xde1;
LAB_1431cee0e:
    if (1 < *(byte *)((longlong)param_2 + 0x31)) {
      iVar7 = iVar12;
    }
  }
LAB_1431cee11:
  *param_1 = iVar7;
  lVar4 = DAT_14ca7c458;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar2 + 0xc60);
  if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
    uVar13 = 0;
  }
  else if (iVar7 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar13 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar13 = 1;
  }
  lVar5 = DAT_14ca7c470;
  if ((*(int *)(lVar4 + uVar13 * 4) != 0) && (uVar13 = *param_2, uVar13 != 0)) {
    iVar7 = *(int *)(lVar2 + 0xc60);
    if ((iVar7 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar7 == 2)))) {
      uVar14 = 0;
    }
    else if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar14 = (ulonglong)(DVar8 != DVar9);
    }
    else {
      uVar14 = 1;
    }
    if (((uVar13 & (longlong)*(int *)(lVar5 + uVar14 * 4)) == 0) && (*param_1 == 0xde1)) {
      bVar11 = (*(byte *)((longlong)param_2 + 0x32) < 2) << 4;
      goto LAB_1431ceec0;
    }
  }
  bVar11 = 0;
LAB_1431ceec0:
  bVar1 = *(byte *)(param_1 + 3);
  *(byte *)(param_1 + 3) = bVar1 & 0xef | bVar11;
  if (((*(uint *)((longlong)param_2 + 0x24) & *(uint *)((longlong)param_2 + 0x24) - 1) == 0) &&
     (((uint)param_2[5] & (uint)param_2[5] - 1) == 0)) {
    uVar3 = (ushort)*(uint *)((longlong)param_2 + 0x2c);
    bVar6 = ((uVar3 & uVar3 - 1) == 0) << 5;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)(param_1 + 3) = bVar1 & 0xcf | bVar11 | bVar6;
  iVar7 = FUN_1431eab2a(param_2,0,(byte)param_2[6] - 1);
  param_1[2] = iVar7;
  uVar13 = *param_2;
  iVar7 = 0x8ce0;
  if ((uVar13 & 0x80001) == 0) {
    if ((uVar13 & 4) == 0) {
      iVar7 = 0;
      if ((uVar13 & 2) != 0) {
        bVar11 = *(byte *)((longlong)param_2 + 0x33);
        if (bVar11 == 0xb) {
          iVar7 = 0x821a;
        }
        else if (bVar11 == 0xc) {
          iVar7 = 0x8d00;
        }
        else {
          iVar7 = (uint)(bVar11 == 0x14) * 0x20 + 0x8ce0;
        }
      }
    }
    else {
      iVar7 = 0x8d00;
      if (*(byte *)((longlong)param_2 + 0x33) == 0xb) {
        iVar7 = 0x821a;
      }
    }
  }
  param_1[1] = iVar7;
  return param_1;
}



// FUNCTION 1431cefae FUN_1431cefae body=492 status=ok
// SIG undefined FUN_1431cefae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431cefae(longlong *param_1,char param_2)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  *(uint *)(param_1[0xf] + 0x10) = *(uint *)(param_1[0xf] + 0x10) | 1;
  (**(code **)(*param_1 + 8))();
  FUN_1473fa7d6(DAT_14ca7a3c8,param_1,0,0);
  lVar5 = (**(code **)(*param_1 + 8))(param_1);
  bVar1 = *(byte *)(lVar5 + 0x33);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1);
  uVar2 = *puVar6;
  FUN_1473e5c95(0x88ec,0);
  uVar9 = (ulonglong)*(int *)(param_1[0xf] + 8);
  if (0 < (longlong)uVar9) {
    lVar5 = uVar9 * 0x10 + -8;
    do {
      iVar7 = *(int *)(*(longlong *)param_1[0xf] + lVar5);
      if (iVar7 != 0) {
        FUN_1473fb24a(param_1,&DAT_14ca79c40 + (ulonglong)bVar1 * 0x14,((uint)uVar2 & 0x10) >> 4,
                      (int)uVar9 + -1,*(undefined8 *)(*(longlong *)param_1[0xf] + -8 + lVar5),iVar7,
                      0);
      }
      lVar5 = lVar5 + -0x10;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar3);
  }
  if ((param_2 != '\0') &&
     (lVar5 = (**(code **)(*param_1 + 8))(param_1), (*(byte *)(lVar5 + 3) & 0x10) != 0)) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  cVar4 = FUN_1473fb74c(param_1);
  if (cVar4 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca7a3c0) && (FUN_144b3d300(&DAT_14ca7a3c0), DAT_14ca7a3c0 == -1)) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7a398);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca7a398,4000);
      atexit((_func_5014 *)&LAB_1431d56c6);
      _Init_thread_footer(&DAT_14ca7a3c0);
    }
    FUN_1473fb7b6();
  }
  FUN_1473fb910(param_1[0xf]);
  lVar5 = (longlong)(int)((longlong *)param_1[0xf])[1];
  if (lVar5 == 0) {
    iVar7 = 0;
  }
  else {
    lVar8 = 0;
    iVar7 = 0;
    do {
      iVar7 = iVar7 + *(int *)(*(longlong *)param_1[0xf] + 8 + lVar8);
      lVar8 = lVar8 + 0x10;
    } while (lVar5 * 0x10 != lVar8);
  }
  _DAT_14ca7c4fc = _DAT_14ca7c4fc + iVar7;
  return;
}



// FUNCTION 1431cf19a FUN_1431cf19a body=813 status=ok
// SIG undefined FUN_1431cf19a(void)

longlong * FUN_1431cf19a(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  void *_Dst;
  void *_Src;
  undefined8 *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  undefined8 *puVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  char cVar16;
  ulonglong _Size;
  
  FUN_1400f7c82(param_1,param_3);
  param_1[0xc] = 0;
  *param_1 = (longlong)&PTR_FUN_14a3725c0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_3 + 0x60);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_3 + 100);
  param_1[0x14] = 0;
  param_1[0x15] = 0x2000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_3 + 0x68);
  bVar8 = *(byte *)(param_3 + 0x6c) >> 5 & 1;
  bVar1 = *(byte *)((longlong)param_1 + 0xb4);
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xfe | bVar8;
  bVar9 = *(byte *)(param_3 + 0x6c);
  bVar11 = bVar9 >> 3 & 2;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xfc | bVar8 | bVar11;
  bVar12 = *(byte *)(param_3 + 0x6c) & 4;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xf8 | bVar8 | bVar11 | bVar12;
  bVar13 = (*(byte *)(param_3 + 0x6c) & 1) << 3;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xf0 | bVar8 | bVar11 | bVar12 | bVar13;
  bVar14 = (*(byte *)(param_3 + 0x6c) & 2) << 3;
  *(byte *)((longlong)param_1 + 0xb4) = bVar1 & 0xe0 | bVar8 | bVar11 | bVar12 | bVar13 | bVar14;
  bVar15 = (*(byte *)(param_3 + 0x6c) & 8) << 2;
  *(byte *)((longlong)param_1 + 0xb4) =
       bVar1 & 0x80 | bVar8 | bVar11 | bVar12 | bVar13 | bVar14 | bVar15;
  *(byte *)((longlong)param_1 + 0xb4) =
       bVar8 | bVar11 | bVar12 | bVar13 | bVar14 | bVar15 |
       *(char *)(param_3 + 0x6c) * '\x02' & 0x80U;
  if ((bVar9 & 0x10) != 0) {
    lVar7 = FUN_14001cc68(0x20,0x10);
    FUN_1473fdc7e(lVar7,*(undefined1 *)(param_3 + 0x30));
    lVar6 = param_1[0xf];
    param_1[0xf] = lVar7;
    if (lVar6 != 0) {
      FUN_1431d0c88(lVar6);
      FUN_1400020a8(lVar6);
    }
  }
  if (*(longlong **)(param_3 + 0x48) == (longlong *)0x0) {
    _Dst = (void *)0x0;
    _Size = 0;
  }
  else {
    cVar16 = *(char *)((longlong)param_2 + 100);
    uVar3 = (**(code **)(**(longlong **)(param_3 + 0x48) + 0x10))();
    _Size = (ulonglong)uVar3;
    if (cVar16 == '\0') {
      _Dst = (void *)FUN_14001cc68(_Size,0);
      _Src = (void *)(**(code **)(**(longlong **)(param_3 + 0x48) + 8))();
      memcpy(_Dst,_Src,_Size);
      cVar16 = '\x01';
      goto LAB_1431cf2fa;
    }
    _Dst = (void *)(**(code **)(**(longlong **)(param_3 + 0x48) + 8))();
  }
  cVar16 = '\0';
LAB_1431cf2fa:
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_1473fa600(DAT_14ca7a3c8,param_1,_Dst,_Size);
    if (cVar16 != '\0') {
      FUN_1400020a8(_Dst);
    }
  }
  else {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar4 + 6;
    if ((undefined8 *)param_2[1] < puVar10) {
      FUN_140023dd8(param_2,0x38);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar4 + 6;
    }
    *param_2 = (ulonglong)puVar10;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a374b20;
    puVar4[2] = param_1;
    puVar4[3] = _Dst;
    puVar4[4] = _Size;
    *(char *)(puVar4 + 5) = cVar16;
  }
  puVar5 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1);
  LOCK();
  (&DAT_14ca84eb8)[(*puVar5 & 0x8000020007) != 0] =
       (&DAT_14ca84eb8)[(*puVar5 & 0x8000020007) != 0] +
       ((ulonglong)*(uint *)(param_1 + 0x16) + 0x3ff >> 10);
  UNLOCK();
  bVar1 = *(byte *)(param_3 + 0x30);
  bVar9 = (*(byte *)((longlong)param_1 + 0xb4) & 8) >> 3;
  lVar6 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = (uint)*(ushort *)(lVar6 + 0x2c + (ulonglong)(*(char *)(lVar6 + 0x32) != '\x02') * 2) *
          ((uint)bVar9 + (uint)bVar9 * 4 + 1) * (uint)bVar1;
  iVar2 = (int)param_1[0x12];
  *(uint *)(param_1 + 0x12) = uVar3 + iVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0x94) - iVar2) < uVar3) {
    FUN_1474027d2(param_1 + 0x11);
  }
  memset((void *)((longlong)iVar2 * 8 + param_1[0x11]),0,(ulonglong)(uVar3 * 8));
  if (*(longlong **)(param_3 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_3 + 0x48) + 0x18))();
  }
  return param_1;
}



// FUNCTION 1431cf4c8 FUN_1431cf4c8 body=332 status=ok
// SIG undefined FUN_1431cf4c8(void)

void FUN_1431cf4c8(longlong *param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  
  *param_1 = (longlong)&PTR_FUN_14a3725c0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca7a3c0) {
    FUN_144b3d300(&DAT_14ca7a3c0);
    if (DAT_14ca7a3c0 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7a398);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca7a398,4000);
      atexit((_func_5014 *)&LAB_1431d56c6);
      _Init_thread_footer(&DAT_14ca7a3c0);
    }
  }
  FUN_1473fa3c6(param_1);
  if ((*(byte *)((longlong)param_1 + 0xb4) & 2) == 0) {
    FUN_1473ec7d7(param_1);
  }
  FUN_1431cf614(param_1);
  puVar2 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1);
  LOCK();
  (&DAT_14ca84eb8)[(*puVar2 & 0x8000020007) != 0] =
       (&DAT_14ca84eb8)[(*puVar2 & 0x8000020007) != 0] -
       ((ulonglong)*(uint *)(param_1 + 0x16) + 0x3ff >> 10);
  UNLOCK();
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_147402798(param_1[0x11],(int)param_1[0x12]);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    FUN_1431d0c88(lVar1);
    FUN_1400020a8(lVar1);
  }
  *param_1 = (longlong)&PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1431cf614 FUN_1431cf614 body=183 status=ok
// SIG undefined FUN_1431cf614(void)

void FUN_1431cf614(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 < 0x8d41) {
    if (iVar1 < 0x8513) {
      if ((iVar1 != 0xde1) && (iVar1 != 0x806f)) {
        return;
      }
    }
    else if ((iVar1 != 0x8513) && (iVar1 != 0x8c1a)) {
      return;
    }
  }
  else {
    if (iVar1 < 0x8d65) {
      if (iVar1 != 0x8d41) {
        return;
      }
      if ((*(byte *)(param_1 + 0xb4) & 0x40) != 0) {
        return;
      }
      puVar2 = &DAT_14ca7fcd8;
      goto LAB_1431cf6ad;
    }
    if (((iVar1 != 0x8d65) && (iVar1 != 0x9100)) && (iVar1 != 0x9009)) {
      return;
    }
  }
  FUN_1473fa50a(DAT_14ca7a3c8);
  if ((*(byte *)(param_1 + 0xb4) & 0x40) != 0) {
    return;
  }
  puVar2 = &DAT_14ca7fb90;
LAB_1431cf6ad:
                    /* WARNING: Could not recover jumptable at 0x0001431cf6c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(1,param_1 + 0x68);
  return;
}



// FUNCTION 1431cf6cc FUN_1431cf6cc body=747 status=ok
// SIG undefined FUN_1431cf6cc(void)

void FUN_1431cf6cc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  int *local_b8;
  uint *local_b0;
  uint *local_a8;
  longlong *local_a0;
  uint *local_98;
  uint local_88;
  uint local_84;
  undefined8 *local_80;
  ulonglong local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = param_3;
  (*DAT_14ca7fbe8)(0xcf5);
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x30) != '\0') {
    local_78 = 0;
    uVar5 = 0;
    do {
      if (*(short *)(lVar4 + 0x2e) != 0) {
        local_88 = 0;
        local_84 = uVar5;
        do {
          uVar8 = 0;
          do {
            uVar1 = local_84;
            bVar3 = (byte)uVar5;
            local_6c = *(int *)(lVar4 + 0x24) >> (bVar3 & 0x1f);
            local_6c = local_6c + (uint)(local_6c == 0);
            local_68 = *(int *)(lVar4 + 0x28) >> (bVar3 & 0x1f);
            local_68 = local_68 + (uint)(local_68 == 0);
            uVar7 = (uint)(*(ushort *)(lVar4 + 0x2c) >> (bVar3 & 0x1f));
            local_64 = uVar7 + (uVar7 == 0);
            local_70 = uVar8 + 0x8515;
            if (*(int *)param_1[1] != 0x8513) {
              local_70 = *(int *)param_1[1];
            }
            if (param_2 == 0) {
              local_4c = 0;
              local_58 = 0;
              local_5c = local_88;
              local_98 = &local_4c;
              local_a0 = &local_58;
              local_a8 = &local_5c;
              local_b0 = &local_60;
              local_b8 = &local_64;
              local_60 = uVar5;
              cVar2 = (*(code *)*local_80)(local_80[1],&local_70,&local_6c,&local_68);
              if (cVar2 == '\0') goto LAB_1431cf97a;
              param_2 = 0;
            }
            else {
              uVar6 = (ulonglong)((uint)*(byte *)(lVar4 + 0x33) * 0x30);
              uVar5 = (uint)*(ushort *)(lVar4 + 0x2e) *
                      (((local_68 + *(uint *)((longlong)&DAT_14c873420 + uVar6)) - 1) /
                      *(uint *)((longlong)&DAT_14c873420 + uVar6)) *
                      (((local_6c + *(uint *)((longlong)&DAT_14c87341c + uVar6)) - 1) /
                      *(uint *)((longlong)&DAT_14c87341c + uVar6)) *
                      (((local_64 + *(uint *)(&DAT_14c873424 + uVar6)) - 1) /
                      *(uint *)(&DAT_14c873424 + uVar6)) *
                      *(int *)((longlong)&DAT_14c873428 + uVar6);
              local_5c = local_88;
              local_60 = local_84;
              local_98 = &local_4c;
              local_a0 = &local_58;
              local_a8 = &local_5c;
              local_b0 = &local_60;
              local_b8 = &local_64;
              local_58 = param_2;
              local_4c = uVar5;
              cVar2 = (*(code *)*local_80)(local_80[1],&local_70,&local_6c,&local_68);
              if (cVar2 == '\0') goto LAB_1431cf97a;
              local_78 = local_78 + uVar5;
              uVar5 = uVar1;
              if (*(ulonglong *)param_1[2] <= local_78) {
                param_2 = 0;
              }
            }
            lVar4 = *param_1;
          } while (((byte)(*(char *)(lVar4 + 0x32) - 3U) < 2) &&
                  (bVar9 = uVar8 < 5, uVar8 = uVar8 + 1, bVar9));
          local_88 = local_88 + 1;
        } while (local_88 < *(ushort *)(lVar4 + 0x2e));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(lVar4 + 0x30));
  }
LAB_1431cf97a:
  (*DAT_14ca7fbe8)(0xcf5,4);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431cf9b8 FUN_1431cf9b8 body=593 status=ok
// SIG undefined FUN_1431cf9b8(void)

undefined8 FUN_1431cf9b8(longlong *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined8 *puVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_4;
  lVar5 = (**(code **)(*param_1 + 8))();
  uVar6 = (ulonglong)((uint)*(byte *)(lVar5 + 0x33) * 0x30);
  uVar3 = *(uint *)((longlong)&DAT_14c87341c + uVar6);
  uVar4 = *(uint *)((longlong)&DAT_14c873420 + uVar6);
  iVar10 = *(int *)((longlong)&DAT_14c873428 + uVar6);
  lVar5 = (**(code **)(*param_1 + 8))(param_1);
  uVar11 = *(uint *)(lVar5 + 0x24) >> ((byte)param_2 & 0x1f);
  if (uVar11 < uVar3) {
    uVar11 = uVar3;
  }
  lVar5 = (**(code **)(*param_1 + 8))(param_1);
  uVar12 = *(uint *)(lVar5 + 0x28) >> ((byte)param_2 & 0x1f);
  if (uVar12 < uVar4) {
    uVar12 = uVar4;
  }
  uVar12 = (uVar4 + uVar12) - 1;
  iVar10 = (((uVar3 - 1) + uVar11) / uVar3) * iVar10;
  iVar15 = (uVar12 / uVar4) * iVar10;
  *param_5 = iVar10;
  bVar13 = *(byte *)((longlong)param_1 + 0xb4);
  lVar5 = (**(code **)(*param_1 + 8))(param_1,(ulonglong)uVar12 % (ulonglong)uVar4);
  uVar2 = *(ushort *)(lVar5 + 0x2c + (ulonglong)(*(char *)(lVar5 + 0x32) != '\x02') * 2);
  (**(code **)(*param_1 + 8))(param_1);
  lVar5 = param_1[0xf];
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x10) & 1) == 0)) {
    FUN_1473fad36(lVar5,param_2,0,iVar15);
    uVar9 = *(undefined8 *)(*(longlong *)param_1[0xf] + (longlong)param_2 * 0x10);
    goto LAB_1431cfbdf;
  }
  bVar13 = (bVar13 & 8) >> 3;
  lVar5 = (longlong)(int)(((uint)bVar13 + (uint)bVar13 * 4 + 1) * param_2 * (uint)uVar2 + param_3);
  puVar14 = *(undefined8 **)(param_1[0x11] + lVar5 * 8);
  if (puVar14 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    local_50 = 0x200000000;
    local_54 = iVar15;
    FUN_1473fb1b0(puVar7);
    iVar10 = local_58;
    puVar14 = *(undefined8 **)(param_1[0x11] + lVar5 * 8);
    if (puVar14 != puVar7) {
      *(undefined8 **)(param_1[0x11] + lVar5 * 8) = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      }
      if (puVar14 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar14 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
    }
    puVar14 = *(undefined8 **)(param_1[0x11] + lVar5 * 8);
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    }
LAB_1431cfb96:
    bVar16 = false;
  }
  else {
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    lVar5 = (**(code **)(*param_1 + 8))(param_1);
    iVar10 = local_58;
    if ((*(byte *)(lVar5 + 2) & 8) == 0) goto LAB_1431cfb96;
    pbVar8 = (byte *)(**(code **)(*param_1 + 8))(param_1);
    bVar16 = (*pbVar8 & 5) == 0;
  }
  if ((iVar10 != 1) && (!bVar16)) {
    FUN_1473fadb6(param_1,param_2,param_3);
  }
  uVar9 = FUN_1473fb4d0(puVar14,*(undefined4 *)(puVar14 + 2),iVar10 == 0,iVar10 != 0);
  if (puVar14 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar14 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar14)(puVar14,1);
    }
  }
LAB_1431cfbdf:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431cfc0a FUN_1431cfc0a body=861 status=ok
// SIG undefined FUN_1431cfc0a(void)

void FUN_1431cfc0a(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  HGLRC pHVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 uVar19;
  undefined4 uVar20;
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  if ((param_1[0xf] == 0) || ((*(byte *)(param_1[0xf] + 0x10) & 1) != 0)) {
    bVar10 = (*(byte *)((longlong)param_1 + 0xb4) & 8) >> 3;
    lVar12 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = *(ushort *)(lVar12 + 0x2c + (ulonglong)(*(char *)(lVar12 + 0x32) != '\x02') * 2);
    lVar12 = (**(code **)(*param_1 + 8))(param_1);
    bVar2 = *(byte *)(lVar12 + 0x33);
    puVar13 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1);
    uVar7 = *puVar13;
    lVar12 = (longlong)
             (int)((uint)uVar4 * ((uint)bVar10 + (uint)bVar10 * 4 + 1) * param_2 + param_3);
    puVar8 = *(undefined8 **)(param_1[0x11] + lVar12 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    }
    FUN_1473fb64e(puVar8);
    lVar17 = DAT_14ca7a3c8;
    if ((*(byte *)(puVar8 + 5) & 2) == 0) {
      lVar16 = *(longlong *)(DAT_14ca7a3c8 + 0x14fa0);
      if (lVar16 == 0) {
        lVar15 = *(longlong *)(DAT_14ca7a3c8 + 0x15008);
        pHVar14 = wglGetCurrentContext();
        lVar16 = lVar17 + 0x14200;
        if (pHVar14 == *(HGLRC *)(lVar15 + 0x40)) {
          lVar16 = lVar17 + 0x148d0;
        }
        *(longlong *)(lVar17 + 0x14fa0) = lVar16;
      }
      lVar17 = DAT_14ca7a3c8;
      lVar15 = (**(code **)(*param_1 + 8))(param_1);
      uVar3 = *(undefined1 *)(lVar15 + 0x30);
      if ((param_1[0xf] != 0) && ((*(byte *)(param_1[0xf] + 0x10) & 1) == 0)) {
        FUN_1431cefae(param_1,1);
      }
      lVar15 = (longlong)DAT_14c760d20 + -1;
      if ((*(int *)(*(longlong *)(lVar16 + 8) + 0x10 + lVar15 * 0x28) !=
           *(int *)((longlong)param_1 + 0x6c)) ||
         (*(int *)(*(longlong *)(lVar16 + 8) + 0x14 + lVar15 * 0x28) != (int)param_1[0xd])) {
        uVar19 = CONCAT44(uVar20,(int)param_1[0xd]);
        FUN_1473e5556(lVar17,lVar16,lVar15,*(int *)((longlong)param_1 + 0x6c),uVar19,0xffffffff,
                      uVar3);
        uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
      }
      lVar17 = (ulonglong)bVar2 * 0x14;
      lVar16 = (**(code **)(*param_1 + 8))(param_1);
      if (((*(char *)(lVar16 + 0x32) == '\x01') || (*(char *)(lVar16 + 0x32) == '\x04')) ||
         (lVar16 = (**(code **)(*param_1 + 8))(param_1), *(char *)(lVar16 + 0x32) == '\x02')) {
        bVar2 = (byte)param_2;
        if ((&DAT_14ca79c50)[lVar17] == '\x01') {
          uVar5 = *(undefined4 *)(puVar8 + 2);
          uVar6 = *(undefined4 *)
                   (&DAT_14ca79c40 + lVar17 + (ulonglong)(((uint)uVar7 & 0x10) >> 4) * 4);
          lVar17 = (**(code **)(*param_1 + 8))(param_1);
          uVar18 = *(uint *)(lVar17 + 0x28) >> (bVar2 & 0x1f);
          lVar17 = (**(code **)(*param_1 + 8))(param_1);
          uVar11 = *(uint *)(lVar17 + 0x24) >> (bVar2 & 0x1f);
          (*DAT_14ca7f4b0)(*(undefined4 *)((longlong)param_1 + 0x6c),param_2,0,0,
                           CONCAT44(uVar20,param_3),uVar11 + (uVar11 == 0),uVar18 + (uVar18 == 0),1,
                           uVar6,uVar5,0);
        }
        else {
          (*DAT_14ca7fbe8)(0xcf5,1);
          uVar5 = *(undefined4 *)(&DAT_14ca79c48 + lVar17);
          uVar6 = *(undefined4 *)(&DAT_14ca79c4c + lVar17);
          lVar17 = (**(code **)(*param_1 + 8))(param_1);
          uVar18 = *(uint *)(lVar17 + 0x28) >> (bVar2 & 0x1f);
          lVar17 = (**(code **)(*param_1 + 8))(param_1);
          uVar11 = *(uint *)(lVar17 + 0x24) >> (bVar2 & 0x1f);
          (*DAT_14ca7f490)(*(undefined4 *)((longlong)param_1 + 0x6c),param_2,0,0,
                           CONCAT44(uVar20,param_3),uVar11 + (uVar11 == 0),uVar18 + (uVar18 == 0),1,
                           uVar5,uVar6,0);
          (*DAT_14ca7fbe8)(0xcf5,4);
        }
      }
      else {
        FUN_1473fb24a(param_1,&DAT_14ca79c40 + lVar17,(uVar7 & 0x10) != 0,param_2,0,
                      *(undefined4 *)(puVar8 + 2),param_3);
      }
    }
    puVar9 = *(undefined8 **)(param_1[0x11] + lVar12 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1[0x11] + lVar12 * 8) = 0;
      piVar1 = (int *)(puVar9 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar9)(puVar9,1);
      }
    }
    FUN_1473e5c95(0x88ec,0);
    if (puVar8 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar8 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431cff64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar8)(puVar8,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1431cff68 FUN_1431cff68 body=140 status=ok
// SIG undefined FUN_1431cff68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431cff68(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (((*(byte *)((longlong)param_1 + 0xb4) & 2) != 0) &&
     ((*(byte *)(param_1[0xf] + 0x10) & 1) != 0)) {
    cVar1 = FUN_1473fb74c(param_1);
    if (cVar1 != '\0') {
      FUN_1431cf614(param_1);
      *(uint *)(param_1[0xf] + 0x10) = *(uint *)(param_1[0xf] + 0x10) & 0xfffffffe;
      (**(code **)(*param_1 + 8))(param_1);
      iVar4 = 0;
      FUN_1473fa600(DAT_14ca7a3c8,param_1,0,0);
      lVar2 = (longlong)(int)((longlong *)param_1[0xf])[1];
      if (lVar2 != 0) {
        lVar3 = 0;
        iVar4 = 0;
        do {
          iVar4 = iVar4 + *(int *)(*(longlong *)param_1[0xf] + 8 + lVar3);
          lVar3 = lVar3 + 0x10;
        } while (lVar2 * 0x10 != lVar3);
      }
      _DAT_14ca7c4fc = _DAT_14ca7c4fc - iVar4;
    }
  }
  return;
}



// FUNCTION 1431cfff4 FUN_1431cfff4 body=667 status=ok
// SIG undefined FUN_1431cfff4(void)

void FUN_1431cfff4(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint local_5c;
  
  if ((*(byte *)((longlong)param_1 + 0xb4) & 2) != 0) {
    FUN_1473fb9c6(param_1[0xf],*(undefined8 *)(param_2 + 0x78),param_3,param_4,param_5);
    plVar3 = (longlong *)param_1[0xf];
    if ((plVar3 != (longlong *)0x0) && ((*(byte *)(plVar3 + 2) & 1) == 0)) {
      plVar4 = *(longlong **)(param_2 + 0x78);
      if ((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 2) & 1) == 0)) {
        return;
      }
      lVar10 = (longlong)(int)plVar4[1];
      bVar5 = 0 < lVar10;
      if (lVar10 != 0) {
        lVar12 = 0;
        do {
          if (bVar5) {
            bVar5 = 0 < *(int *)(*plVar4 + 8 + lVar12);
          }
          else {
            bVar5 = false;
          }
          lVar12 = lVar12 + 0x10;
        } while (lVar10 * 0x10 != lVar12);
      }
      if (bVar5) {
        return;
      }
      lVar10 = (longlong)(int)plVar3[1];
      bVar5 = 0 < lVar10;
      if (lVar10 != 0) {
        lVar12 = 0;
        do {
          if (bVar5) {
            bVar5 = 0 < *(int *)(*plVar3 + 8 + lVar12);
          }
          else {
            bVar5 = false;
          }
          lVar12 = lVar12 + 0x10;
        } while (lVar10 * 0x10 != lVar12);
      }
      if (bVar5) {
        return;
      }
    }
  }
  lVar10 = (**(code **)(*param_1 + 8))(param_1);
  if (*(short *)(lVar10 + 0x2c + (ulonglong)(*(char *)(lVar10 + 0x32) != '\x02') * 2) != 0) {
    local_5c = 0;
    iVar6 = param_3;
    iVar7 = param_5;
    iVar8 = param_4;
joined_r0x0001431d005f:
    do {
      if (iVar6 != 0) {
        lVar10 = (**(code **)(*param_1 + 8))(param_1);
        uVar11 = *(uint *)(lVar10 + 0x24) >> ((byte)iVar7 & 0x1f);
        lVar10 = (**(code **)(*param_1 + 8))(param_1);
        uVar9 = *(uint *)(lVar10 + 0x28) >> ((byte)iVar7 & 0x1f);
        if ((DAT_14ca7a3d1 != '\x01') || ((3 < uVar11 && (3 < uVar9)))) {
          uVar1 = *(undefined4 *)((longlong)param_1 + 0x6c);
          if ((param_1[0xf] != 0) && ((*(byte *)(param_1[0xf] + 0x10) & 1) == 0)) {
            FUN_1431cefae(param_1,1);
          }
          lVar10 = param_1[0xd];
          uVar2 = *(undefined4 *)(param_2 + 0x6c);
          if ((*(longlong *)(param_2 + 0x78) != 0) &&
             ((*(byte *)(*(longlong *)(param_2 + 0x78) + 0x10) & 1) == 0)) {
            FUN_1431cefae(param_2,1);
          }
          (*DAT_14ca7f928)(*(undefined4 *)(param_2 + 0x68),uVar2,iVar8,0,0,local_5c,(int)lVar10,
                           uVar1,iVar7,0,0,local_5c,uVar11 + (uVar11 == 0),uVar9 + (uVar9 == 0),1);
          iVar6 = iVar6 + -1;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 1;
          goto joined_r0x0001431d005f;
        }
      }
      local_5c = local_5c + 1;
      lVar10 = (**(code **)(*param_1 + 8))(param_1);
      iVar6 = param_3;
      iVar7 = param_5;
      iVar8 = param_4;
    } while (local_5c <
             *(ushort *)(lVar10 + 0x2c + (ulonglong)(*(char *)(lVar10 + 0x32) != '\x02') * 2));
  }
  return;
}



// FUNCTION 1431d0292 FUN_1431d0292 body=831 status=ok
// SIG undefined FUN_1431d0292(void)

undefined8
FUN_1431d0292(longlong param_1,ulonglong *param_2,longlong *param_3,undefined4 param_4,int param_5,
             int *param_6,undefined1 param_7,undefined8 param_8,ulonglong *param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined1 local_70;
  ulonglong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar9 = (byte)param_4;
  if (param_5 == 1) {
    if (param_3 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
    }
    lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
    uVar8 = (ulonglong)((uint)*(byte *)(lVar7 + 0x33) * 0x30);
    uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar8);
    uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar8);
    iVar10 = *(int *)((longlong)&DAT_14c873428 + uVar8);
    lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
    uVar14 = *(uint *)(lVar7 + 0x24) >> (bVar9 & 0x1f);
    if (uVar14 < uVar1) {
      uVar14 = uVar1;
    }
    lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
    uVar12 = *(uint *)(lVar7 + 0x28) >> (bVar9 & 0x1f);
    if (uVar12 < uVar2) {
      uVar12 = uVar2;
    }
    iVar10 = (((uVar1 + uVar14) - 1) / uVar1) * iVar10;
    uVar8 = (ulonglong)((((uVar2 + uVar12) - 1) / uVar2) * iVar10);
    *param_6 = iVar10;
    local_60 = FUN_14001cc68(uVar8,0x10);
  }
  else {
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      local_68 = param_9;
      local_78 = param_6;
      local_70 = 0;
      local_60 = FUN_1473fbff8(param_1,param_3,param_4,param_5);
    }
    else {
      puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar6 + 9;
      if ((undefined8 *)param_2[1] < puVar11) {
        FUN_140023dd8(param_2,0x50);
        puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar6 + 9;
      }
      *param_2 = (ulonglong)puVar11;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar6;
      param_2[6] = (ulonglong)(puVar6 + 1);
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_14a374b50;
      puVar6[2] = param_1;
      puVar6[3] = &local_60;
      puVar6[4] = param_3;
      *(undefined4 *)(puVar6 + 5) = param_4;
      *(int *)((longlong)puVar6 + 0x2c) = param_5;
      puVar6[6] = param_6;
      *(undefined1 *)(puVar6 + 7) = param_7;
      puVar6[8] = param_9;
    }
    local_58 = 0;
    local_50 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_58,5);
    if (param_3 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
    }
    lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
    uVar8 = (ulonglong)((uint)*(byte *)(lVar7 + 0x33) * 0x30);
    uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar8);
    uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar8);
    iVar10 = *(int *)((longlong)&DAT_14c873428 + uVar8);
    lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
    uVar14 = *(uint *)(lVar7 + 0x24) >> (bVar9 & 0x1f);
    if (uVar14 < uVar1) {
      uVar14 = uVar1;
    }
    lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
    uVar12 = *(uint *)(lVar7 + 0x28) >> (bVar9 & 0x1f);
    if (uVar12 < uVar2) {
      uVar12 = uVar2;
    }
    iVar10 = (((uVar1 + uVar14) - 1) / uVar1) * iVar10;
    uVar8 = (ulonglong)((((uVar2 + uVar12) - 1) / uVar2) * iVar10);
    *param_6 = iVar10;
  }
  uVar4 = local_60;
  if (param_9 != (ulonglong *)0x0) {
    *param_9 = uVar8;
  }
  iVar10 = *param_6;
  iVar3 = *(int *)(param_1 + 0x153a0);
  lVar7 = (longlong)iVar3;
  *(uint *)(param_1 + 0x153a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x153a4) < iVar3 + 1U) {
    FUN_147400e5a(param_1 + 0x15118,iVar3);
  }
  lVar13 = param_1 + 0x15118;
  if (*(longlong *)(param_1 + 0x15398) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x15398);
  }
  *(longlong **)(lVar13 + lVar7 * 0x28) = param_3;
  *(undefined8 *)(lVar13 + 8 + lVar7 * 0x28) = uVar4;
  *(undefined4 *)(lVar13 + 0x10 + lVar7 * 0x28) = param_4;
  *(undefined4 *)(lVar13 + 0x14 + lVar7 * 0x28) = 0;
  *(int *)(lVar13 + 0x18 + lVar7 * 0x28) = (int)uVar8;
  *(int *)(lVar13 + 0x1c + lVar7 * 0x28) = iVar10;
  *(int *)(lVar13 + 0x20 + lVar7 * 0x28) = param_5;
  *(int *)(param_1 + 0x153a8) = *(int *)(param_1 + 0x153a8) + (int)uVar8;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d05d2 FUN_1431d05d2 body=866 status=ok
// SIG undefined FUN_1431d05d2(void)

undefined8
FUN_1431d05d2(longlong param_1,ulonglong *param_2,longlong *param_3,int param_4,int param_5,
             undefined4 param_6,int param_7,int *param_8,undefined1 param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_88 [32];
  int *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar9 = (byte)param_6;
  if (param_7 == 1) {
    if (param_3 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
    }
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar8 = (ulonglong)((uint)*(byte *)(lVar7 + 0x33) * 0x30);
    uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar8);
    uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar8);
    iVar10 = *(int *)((longlong)&DAT_14c873428 + uVar8);
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar12 = *(uint *)(lVar7 + 0x24) >> (bVar9 & 0x1f);
    if (uVar12 < uVar1) {
      uVar12 = uVar1;
    }
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar13 = *(uint *)(lVar7 + 0x28) >> (bVar9 & 0x1f);
    if (uVar13 < uVar2) {
      uVar13 = uVar2;
    }
    iVar10 = (((uVar12 + uVar1) - 1) / uVar1) * iVar10;
    iVar15 = (((uVar2 + uVar13) - 1) / uVar2) * iVar10;
    *param_8 = iVar10;
    local_60 = FUN_14001cc68(iVar15,0x10);
    iVar10 = *param_8;
  }
  else {
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      if (param_3 == (longlong *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*param_3 + 0x30))(param_3);
      }
      local_68 = param_8;
      local_60 = FUN_1431cf9b8(uVar5,param_6,param_4 + param_5 * 6,param_7);
    }
    else {
      puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar6 + 9;
      if ((undefined8 *)param_2[1] < puVar11) {
        FUN_140023dd8(param_2,0x50);
        puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar6 + 9;
      }
      *param_2 = (ulonglong)puVar11;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar6;
      param_2[6] = (ulonglong)(puVar6 + 1);
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_14a374b68;
      puVar6[2] = param_1;
      puVar6[3] = &local_60;
      puVar6[4] = param_3;
      *(int *)(puVar6 + 5) = param_4;
      *(int *)((longlong)puVar6 + 0x2c) = param_5;
      *(undefined4 *)(puVar6 + 6) = param_6;
      *(int *)((longlong)puVar6 + 0x34) = param_7;
      puVar6[7] = param_8;
      *(undefined1 *)(puVar6 + 8) = param_9;
    }
    local_58 = 0;
    local_50 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_58,5);
    if (param_3 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
    }
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar8 = (ulonglong)((uint)*(byte *)(lVar7 + 0x33) * 0x30);
    uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar8);
    uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar8);
    iVar10 = *(int *)((longlong)&DAT_14c873428 + uVar8);
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar12 = *(uint *)(lVar7 + 0x24) >> (bVar9 & 0x1f);
    if (uVar12 < uVar1) {
      uVar12 = uVar1;
    }
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar13 = *(uint *)(lVar7 + 0x28) >> (bVar9 & 0x1f);
    if (uVar13 < uVar2) {
      uVar13 = uVar2;
    }
    iVar10 = (((uVar1 + uVar12) - 1) / uVar1) * iVar10;
    iVar15 = (((uVar13 + uVar2) - 1) / uVar2) * iVar10;
    *param_8 = iVar10;
  }
  uVar5 = local_60;
  iVar3 = *(int *)(param_1 + 0x153a0);
  lVar7 = (longlong)iVar3;
  *(uint *)(param_1 + 0x153a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x153a4) < iVar3 + 1U) {
    FUN_147400e5a(param_1 + 0x15118,iVar3);
  }
  lVar14 = param_1 + 0x15118;
  if (*(longlong *)(param_1 + 0x15398) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x15398);
  }
  *(longlong **)(lVar14 + lVar7 * 0x28) = param_3;
  *(undefined8 *)(lVar14 + 8 + lVar7 * 0x28) = uVar5;
  *(undefined4 *)(lVar14 + 0x10 + lVar7 * 0x28) = param_6;
  *(int *)(lVar14 + 0x14 + lVar7 * 0x28) = param_5;
  *(int *)(lVar14 + 0x18 + lVar7 * 0x28) = iVar15;
  *(int *)(lVar14 + 0x1c + lVar7 * 0x28) = iVar10;
  *(int *)(lVar14 + 0x20 + lVar7 * 0x28) = param_7;
  *(int *)(param_1 + 0x153a8) = *(int *)(param_1 + 0x153a8) + iVar15;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d0936 FUN_1431d0936 body=849 status=ok
// SIG undefined FUN_1431d0936(void)

undefined8
FUN_1431d0936(longlong param_1,ulonglong *param_2,longlong *param_3,undefined4 param_4,
             undefined4 param_5,int param_6,int *param_7,undefined1 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar9 = (byte)param_5;
  local_64 = param_4;
  if (param_6 == 1) {
    if (param_3 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
    }
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar8 = (ulonglong)((uint)*(byte *)(lVar7 + 0x33) * 0x30);
    uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar8);
    uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar8);
    iVar10 = *(int *)((longlong)&DAT_14c873428 + uVar8);
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar12 = *(uint *)(lVar7 + 0x24) >> (bVar9 & 0x1f);
    if (uVar12 < uVar1) {
      uVar12 = uVar1;
    }
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar14 = *(uint *)(lVar7 + 0x28) >> (bVar9 & 0x1f);
    if (uVar14 < uVar2) {
      uVar14 = uVar2;
    }
    iVar10 = (((uVar12 + uVar1) - 1) / uVar1) * iVar10;
    iVar15 = (((uVar2 + uVar14) - 1) / uVar2) * iVar10;
    *param_7 = iVar10;
    local_60 = FUN_14001cc68(iVar15,0x10);
    iVar10 = *param_7;
  }
  else {
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      if (param_3 == (longlong *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*param_3 + 0x30))(param_3);
      }
      local_78 = param_7;
      local_60 = FUN_1431cf9b8(uVar5,param_5,param_4,param_6);
    }
    else {
      puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar6 + 9;
      if ((undefined8 *)param_2[1] < puVar11) {
        FUN_140023dd8(param_2,0x50);
        puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar6 + 9;
      }
      *param_2 = (ulonglong)puVar11;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar6;
      param_2[6] = (ulonglong)(puVar6 + 1);
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_14a374b80;
      puVar6[2] = param_1;
      puVar6[3] = &local_60;
      puVar6[4] = param_3;
      *(undefined4 *)(puVar6 + 5) = param_4;
      *(undefined4 *)((longlong)puVar6 + 0x2c) = param_5;
      *(int *)(puVar6 + 6) = param_6;
      puVar6[7] = param_7;
      *(undefined1 *)(puVar6 + 8) = param_8;
    }
    local_58 = 0;
    local_50 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_58,5);
    if (param_3 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
    }
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar8 = (ulonglong)((uint)*(byte *)(lVar7 + 0x33) * 0x30);
    uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar8);
    uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar8);
    iVar10 = *(int *)((longlong)&DAT_14c873428 + uVar8);
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar12 = *(uint *)(lVar7 + 0x24) >> (bVar9 & 0x1f);
    if (uVar12 < uVar1) {
      uVar12 = uVar1;
    }
    lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar14 = *(uint *)(lVar7 + 0x28) >> (bVar9 & 0x1f);
    if (uVar14 < uVar2) {
      uVar14 = uVar2;
    }
    iVar10 = (((uVar1 + uVar12) - 1) / uVar1) * iVar10;
    iVar15 = (((uVar14 + uVar2) - 1) / uVar2) * iVar10;
    *param_7 = iVar10;
  }
  uVar5 = local_60;
  iVar3 = *(int *)(param_1 + 0x153a0);
  lVar7 = (longlong)iVar3;
  *(uint *)(param_1 + 0x153a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x153a4) < iVar3 + 1U) {
    FUN_147400e5a(param_1 + 0x15118,iVar3);
  }
  lVar13 = param_1 + 0x15118;
  if (*(longlong *)(param_1 + 0x15398) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x15398);
  }
  *(longlong **)(lVar13 + lVar7 * 0x28) = param_3;
  *(undefined8 *)(lVar13 + 8 + lVar7 * 0x28) = uVar5;
  *(undefined4 *)(lVar13 + 0x10 + lVar7 * 0x28) = param_5;
  *(undefined4 *)(lVar13 + 0x14 + lVar7 * 0x28) = local_64;
  *(int *)(lVar13 + 0x18 + lVar7 * 0x28) = iVar15;
  *(int *)(lVar13 + 0x1c + lVar7 * 0x28) = iVar10;
  *(int *)(lVar13 + 0x20 + lVar7 * 0x28) = param_6;
  *(int *)(param_1 + 0x153a8) = *(int *)(param_1 + 0x153a8) + iVar15;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d0c88 FUN_1431d0c88 body=154 status=ok
// SIG undefined FUN_1431d0c88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d0c88(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 1);
    lVar2 = *param_1;
  }
  else {
    lVar2 = *param_1;
    uVar3 = (ulonglong)(int)param_1[1];
    iVar1 = 0;
    if (uVar3 != 0) {
      lVar5 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + *(int *)(lVar2 + 8 + lVar5);
        lVar5 = lVar5 + 0x10;
      } while (uVar3 << 4 != lVar5);
    }
    _DAT_14ca7c4fc = _DAT_14ca7c4fc - iVar1;
  }
  if (0 < (int)uVar3) {
    uVar4 = (uVar3 & 0xffffffff) + 1;
    piVar6 = (int *)((uVar3 & 0xffffffff) * 0x10 + lVar2 + -8);
    do {
      DAT_14ca7c4f8 = DAT_14ca7c4f8 - *piVar6;
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + -4;
    } while (1 < uVar4);
  }
  DAT_14ca7c500 = DAT_14ca7c500 - (int)uVar3;
  FUN_1459ab2e7();
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1431d0d22 FUN_1431d0d22 body=1250 status=ok
// SIG undefined FUN_1431d0d22(void)

void FUN_1431d0d22(ulonglong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  uint uVar20;
  uint uVar21;
  undefined2 *puVar22;
  size_t _Size;
  void *_Dst;
  uint uVar23;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined2 *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar15 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar13 = FUN_146135a82();
  uVar14 = 0;
  FUN_1448e935e(uVar15,&local_58,uVar13,0);
  FUN_146135a82();
  lVar9 = CONCAT44(uStack_54,local_58);
  if (lVar9 != 0) {
    lVar17 = *(longlong *)(CONCAT44(uStack_4c,uStack_50) + 8);
    uVar14 = *(ulonglong *)(*(longlong *)(lVar17 + 0x50) + (longlong)*(int *)(lVar9 + 0xd4) * 8);
    if (uVar14 == 0) {
      uVar14 = FUN_1400bafc2(lVar17,(longlong)*(int *)(lVar9 + 0xd4),1);
    }
  }
  uVar15 = FUN_140029432(param_1,uVar14,0);
  param_1[0x37] = uVar14;
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 3;
  local_68 = uVar14;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x20);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 3;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a37d340;
  puVar16[2] = uVar15;
  lVar17 = FUN_144821ef4(param_1);
  FUN_147402ffd(lVar17,lVar9 + 0xe0,param_4);
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_144a86d70(lVar17,lVar9 + 0xe6,&local_58,0);
  uStack_54 = 1;
  uStack_50 = 1;
  uStack_4c = 0;
  local_58 = param_3;
  FUN_144a86d70(lVar17,lVar9 + 0xec,&local_58,0);
  puVar22 = (undefined2 *)(lVar9 + 0xf8);
  FUN_144a86a8e(lVar17,puVar22,param_2);
  iVar10 = *(int *)(lVar17 + 0x30) + *(int *)(lVar17 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar17 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar17 + 0x40)) == iVar11 < 0) {
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 0xb;
    local_60 = puVar22;
    if ((undefined8 *)param_1[1] < puVar18) {
      FUN_140023dd8(param_1,0x60);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar16 + 0xb;
    }
    *param_1 = (ulonglong)puVar18;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar16;
    param_1[6] = (ulonglong)(puVar16 + 1);
    uVar15 = *(undefined8 *)(lVar17 + 0x38);
    uVar3 = *(undefined4 *)(lVar17 + 0x40);
    uVar13 = *(undefined8 *)(lVar17 + 0x28);
    uVar4 = *(undefined4 *)(lVar17 + 0x30);
    uVar7 = *(undefined8 *)(lVar17 + 0x18);
    uVar5 = *(undefined4 *)(lVar17 + 0x20);
    uVar8 = *(undefined8 *)(lVar17 + 8);
    uVar6 = *(undefined4 *)(lVar17 + 0x10);
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14a1e7fa8;
    puVar16[2] = local_68;
    puVar16[3] = uVar8;
    *(undefined4 *)(puVar16 + 4) = uVar6;
    puVar16[5] = uVar7;
    *(undefined4 *)(puVar16 + 6) = uVar5;
    puVar16[7] = uVar13;
    *(undefined4 *)(puVar16 + 8) = uVar4;
    puVar16[9] = uVar15;
    *(undefined4 *)(puVar16 + 10) = uVar3;
    *(undefined8 *)(lVar17 + 8) = 0;
    *(undefined4 *)(lVar17 + 0x10) = 0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    *(undefined4 *)(lVar17 + 0x20) = 0;
    *(undefined8 *)(lVar17 + 0x28) = 0;
    *(undefined4 *)(lVar17 + 0x30) = 0;
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *(undefined4 *)(lVar17 + 0x40) = 0;
    puVar22 = local_60;
  }
  uVar20 = param_3 + 0x3fU >> 6;
  uVar12 = 1;
  uVar23 = uVar20 + 0x7f >> 7;
  if ((int)uVar20 <= DAT_14ca84f24) {
    uVar23 = uVar12;
  }
  if (DAT_14ca84f24 < (int)uVar20) {
    uVar20 = 0x80;
  }
  uVar21 = uVar23 + 0x7f;
  if (DAT_14ca84f28 < (int)uVar23) {
    uVar23 = 0x80;
    uVar12 = uVar21 >> 7;
  }
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 4;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x28);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 4;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar16 + 2) = uVar20;
  *(uint *)((longlong)puVar16 + 0x14) = uVar23;
  *(uint *)(puVar16 + 3) = uVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    uVar23 = (uint)param_1[0x13];
    if (0 < (int)uVar23) {
      uVar23 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        uVar23 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar9 + 0xfa) != '\0') && (*(char *)(lVar9 + 0xfb) != '\x06')) {
      uVar2 = *puVar22;
      *(uint *)(param_1 + 0x13) = uVar23 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar23 + 1) {
        FUN_1447477d8(puVar1,uVar23);
      }
      uVar14 = param_1[0x12];
      *(undefined2 *)(uVar14 + (longlong)(int)uVar23 * 4) = uVar2;
      *(undefined1 *)(uVar14 + 2 + (longlong)(int)uVar23 * 4) = 1;
      uVar23 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar23) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar16 + 5;
        if ((undefined8 *)param_1[1] < puVar18) {
          FUN_140023dd8(param_1,0x30);
          puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar16 + 5;
        }
        *param_1 = (ulonglong)puVar18;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar16;
        param_1[6] = (ulonglong)(puVar16 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar19 = (void *)((ulonglong)uVar23 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar23 * 4;
        if ((void *)param_1[1] < pvVar19) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar19 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar19;
        memcpy(_Dst,_Src,_Size);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fbc38;
        puVar16[2] = local_68;
        puVar16[3] = _Dst;
        *(uint *)(puVar16 + 4) = uVar23;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d1205 FUN_1431d1205 body=1250 status=ok
// SIG undefined FUN_1431d1205(void)

void FUN_1431d1205(ulonglong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  uint uVar20;
  uint uVar21;
  undefined2 *puVar22;
  size_t _Size;
  void *_Dst;
  uint uVar23;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined2 *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar15 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar13 = FUN_1461351ee();
  uVar14 = 0;
  FUN_1448e935e(uVar15,&local_58,uVar13,0);
  FUN_1461351ee();
  lVar9 = CONCAT44(uStack_54,local_58);
  if (lVar9 != 0) {
    lVar17 = *(longlong *)(CONCAT44(uStack_4c,uStack_50) + 8);
    uVar14 = *(ulonglong *)(*(longlong *)(lVar17 + 0x50) + (longlong)*(int *)(lVar9 + 0xd4) * 8);
    if (uVar14 == 0) {
      uVar14 = FUN_1400bafc2(lVar17,(longlong)*(int *)(lVar9 + 0xd4),1);
    }
  }
  uVar15 = FUN_140029432(param_1,uVar14,0);
  param_1[0x37] = uVar14;
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 3;
  local_68 = uVar14;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x20);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 3;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a37d340;
  puVar16[2] = uVar15;
  lVar17 = FUN_144821ef4(param_1);
  FUN_1474030b6(lVar17,lVar9 + 0xe0,param_4);
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_144a86d70(lVar17,lVar9 + 0xe6,&local_58,0);
  uStack_54 = 1;
  uStack_50 = 1;
  uStack_4c = 0;
  local_58 = param_3;
  FUN_144a86d70(lVar17,lVar9 + 0xec,&local_58,0);
  puVar22 = (undefined2 *)(lVar9 + 0xf8);
  FUN_144a86a8e(lVar17,puVar22,param_2);
  iVar10 = *(int *)(lVar17 + 0x30) + *(int *)(lVar17 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar17 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar17 + 0x40)) == iVar11 < 0) {
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 0xb;
    local_60 = puVar22;
    if ((undefined8 *)param_1[1] < puVar18) {
      FUN_140023dd8(param_1,0x60);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar16 + 0xb;
    }
    *param_1 = (ulonglong)puVar18;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar16;
    param_1[6] = (ulonglong)(puVar16 + 1);
    uVar15 = *(undefined8 *)(lVar17 + 0x38);
    uVar3 = *(undefined4 *)(lVar17 + 0x40);
    uVar13 = *(undefined8 *)(lVar17 + 0x28);
    uVar4 = *(undefined4 *)(lVar17 + 0x30);
    uVar7 = *(undefined8 *)(lVar17 + 0x18);
    uVar5 = *(undefined4 *)(lVar17 + 0x20);
    uVar8 = *(undefined8 *)(lVar17 + 8);
    uVar6 = *(undefined4 *)(lVar17 + 0x10);
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14a1e7fa8;
    puVar16[2] = local_68;
    puVar16[3] = uVar8;
    *(undefined4 *)(puVar16 + 4) = uVar6;
    puVar16[5] = uVar7;
    *(undefined4 *)(puVar16 + 6) = uVar5;
    puVar16[7] = uVar13;
    *(undefined4 *)(puVar16 + 8) = uVar4;
    puVar16[9] = uVar15;
    *(undefined4 *)(puVar16 + 10) = uVar3;
    *(undefined8 *)(lVar17 + 8) = 0;
    *(undefined4 *)(lVar17 + 0x10) = 0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    *(undefined4 *)(lVar17 + 0x20) = 0;
    *(undefined8 *)(lVar17 + 0x28) = 0;
    *(undefined4 *)(lVar17 + 0x30) = 0;
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *(undefined4 *)(lVar17 + 0x40) = 0;
    puVar22 = local_60;
  }
  uVar20 = param_3 + 0x3fU >> 6;
  uVar12 = 1;
  uVar23 = uVar20 + 0x7f >> 7;
  if ((int)uVar20 <= DAT_14ca84f24) {
    uVar23 = uVar12;
  }
  if (DAT_14ca84f24 < (int)uVar20) {
    uVar20 = 0x80;
  }
  uVar21 = uVar23 + 0x7f;
  if (DAT_14ca84f28 < (int)uVar23) {
    uVar23 = 0x80;
    uVar12 = uVar21 >> 7;
  }
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 4;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x28);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 4;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar16 + 2) = uVar20;
  *(uint *)((longlong)puVar16 + 0x14) = uVar23;
  *(uint *)(puVar16 + 3) = uVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    uVar23 = (uint)param_1[0x13];
    if (0 < (int)uVar23) {
      uVar23 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        uVar23 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar9 + 0xfa) != '\0') && (*(char *)(lVar9 + 0xfb) != '\x06')) {
      uVar2 = *puVar22;
      *(uint *)(param_1 + 0x13) = uVar23 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar23 + 1) {
        FUN_1447477d8(puVar1,uVar23);
      }
      uVar14 = param_1[0x12];
      *(undefined2 *)(uVar14 + (longlong)(int)uVar23 * 4) = uVar2;
      *(undefined1 *)(uVar14 + 2 + (longlong)(int)uVar23 * 4) = 1;
      uVar23 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar23) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar16 + 5;
        if ((undefined8 *)param_1[1] < puVar18) {
          FUN_140023dd8(param_1,0x30);
          puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar16 + 5;
        }
        *param_1 = (ulonglong)puVar18;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar16;
        param_1[6] = (ulonglong)(puVar16 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar19 = (void *)((ulonglong)uVar23 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar23 * 4;
        if ((void *)param_1[1] < pvVar19) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar19 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar19;
        memcpy(_Dst,_Src,_Size);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fbc38;
        puVar16[2] = local_68;
        puVar16[3] = _Dst;
        *(uint *)(puVar16 + 4) = uVar23;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d16e8 FUN_1431d16e8 body=69 status=ok
// SIG undefined FUN_1431d16e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d16e8(void)

{
  _DAT_14ca7c508 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d172a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca7c510,1);
  return;
}



// FUNCTION 1431d172d FUN_1431d172d body=69 status=ok
// SIG undefined FUN_1431d172d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d172d(void)

{
  _DAT_14ca7c518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d176f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca7c520,1);
  return;
}



// FUNCTION 1431d179f FUN_1431d179f body=41 status=ok
// SIG undefined FUN_1431d179f(void)

void FUN_1431d179f(void)

{
  DAT_14ca7c5d0 = 0;
  if (DAT_14ca7c5c8 != 0) {
    FUN_1400020a8();
  }
  FUN_146178546();
  return;
}



// FUNCTION 1431d17c8 FUN_1431d17c8 body=46 status=ok
// SIG undefined FUN_1431d17c8(void)

void FUN_1431d17c8(void)

{
  longlong lVar1;
  
  lVar1 = 0x5a0;
  do {
    if (*(longlong *)((longlong)&DAT_14ca7c5d0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1431d17f6 FUN_1431d17f6 body=46 status=ok
// SIG undefined FUN_1431d17f6(void)

void FUN_1431d17f6(void)

{
  longlong lVar1;
  
  lVar1 = 0x5a0;
  do {
    if (*(longlong *)((longlong)&DAT_14ca7cb70 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1431d1824 FUN_1431d1824 body=46 status=ok
// SIG undefined FUN_1431d1824(void)

void FUN_1431d1824(void)

{
  longlong lVar1;
  
  lVar1 = 0x10e0;
  do {
    if (*(longlong *)((longlong)&DAT_14ca7d110 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1431d1852 FUN_1431d1852 body=46 status=ok
// SIG undefined FUN_1431d1852(void)

void FUN_1431d1852(void)

{
  longlong lVar1;
  
  lVar1 = 0x10e0;
  do {
    if (*(longlong *)((longlong)&DAT_14ca7e1f0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1431d1880 FUN_1431d1880 body=896 status=ok
// SIG undefined FUN_1431d1880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d1880(void)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  undefined8 extraout_RAX;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  uint uVar12;
  int iVar13;
  undefined *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined1 auStack_88 [40];
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  int iVar11;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c538);
  iVar13 = 10;
  local_60 = (undefined *)
             CONCAT44(local_60._4_4_,(int)CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1));
  lVar15 = 0;
  uVar7 = (ulonglong)DAT_14ca7c530;
  while ((int)uVar7 < 1) {
LAB_1431d1aa8:
    lVar15 = 1;
    uVar4 = (ulonglong)local_60 & 1;
    local_60 = (undefined *)((ulonglong)local_60 & 0xffffffff00000000);
    if (uVar4 == 0) {
LAB_1431d1ac0:
      uVar7 = (ulonglong)DAT_14ca7c530;
      lVar15 = (ulonglong)DAT_14c7590b0 * 0x5a0 + ((ulonglong)DAT_14c7590b0 / 3) * -0x10e0;
      local_60 = &DAT_14ca7e200 + lVar15;
      local_58 = &DAT_14ca7d120 + lVar15;
      lVar15 = 0;
      bVar5 = true;
      do {
        bVar9 = bVar5;
        if (0 < (int)uVar7) {
          lVar19 = lVar15 * 0x10;
          puVar20 = &DAT_14ca7c5e0;
          puVar16 = &DAT_14ca7cb80;
          lVar8 = 0;
          puVar14 = local_60;
          puVar17 = local_58;
          do {
            FUN_1473fe9be(puVar20 + lVar15 * 2,puVar17 + lVar19);
            *(undefined4 *)(puVar17 + lVar19 + 8) = 0;
            if (*(int *)(puVar17 + lVar19 + 0xc) < 0) {
              FUN_1474032b2(puVar17 + lVar19);
            }
            if (DAT_14ca7a384 == '\x01') {
              FUN_1473fe9be(puVar16 + lVar15 * 2,puVar14 + lVar19);
              *(undefined4 *)(puVar14 + lVar19 + 8) = 0;
              if (*(int *)(puVar14 + lVar19 + 0xc) < 0) {
                FUN_1474032b2(puVar14 + lVar19);
              }
            }
            lVar8 = lVar8 + 1;
            uVar7 = (ulonglong)(int)DAT_14ca7c530;
            puVar14 = puVar14 + 0x20;
            puVar16 = puVar16 + 4;
            puVar17 = puVar17 + 0x20;
            puVar20 = puVar20 + 4;
          } while (lVar8 < (longlong)uVar7);
        }
        lVar15 = 1;
        bVar5 = false;
      } while (bVar9);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c538);
      if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  lVar8 = 0;
LAB_1431d18d5:
  uVar12 = *(uint *)(&DAT_14ca7c5e0 + lVar8 * 4 + lVar15 * 2 + 1);
  plVar18 = &DAT_14ca7c5e0 + lVar8 * 4 + lVar15 * 2;
  do {
    lVar19 = (ulonglong)uVar12 * 0x18;
    iVar10 = uVar12 + 1;
    do {
      iVar11 = iVar10;
      iVar10 = iVar11 + -1;
      if (iVar10 < 1) {
        if ((DAT_14ca7a384 != '\x01') || (iVar13 == 0)) goto LAB_1431d1a91;
        uVar12 = *(uint *)(&DAT_14ca7cb80 + lVar8 * 4 + lVar15 * 2 + 1);
        plVar18 = &DAT_14ca7cb80 + lVar8 * 4 + lVar15 * 2;
        goto LAB_1431d19c9;
      }
      lVar3 = *plVar18;
      piVar1 = (int *)(lVar3 + -0xc + lVar19);
      lVar19 = lVar19 + -0x18;
    } while (DAT_14c7590b0 - *piVar1 < 0x1f);
    local_4c = *(undefined4 *)(lVar3 + lVar19);
    uVar12 = *(uint *)(lVar3 + 4 + lVar19);
    (*DAT_14ca7fbb0)(1,&local_4c);
    LOCK();
    _DAT_14ca84ee8 = _DAT_14ca84ee8 - (ulonglong)uVar12;
    UNLOCK();
    iVar6 = (int)plVar18[1] - iVar10;
    if (iVar6 != 0) {
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar19 + *plVar18),
              (void *)(*plVar18 + (longlong)((int)plVar18[1] - iVar6) * 0x18),(longlong)iVar6 * 0x18
             );
      iVar10 = (int)plVar18[1];
    }
    uVar12 = iVar11 - 2;
    *(int *)(plVar18 + 1) = iVar10 + -1;
    FUN_147403170(plVar18);
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  goto LAB_1431d1ac0;
LAB_1431d19c9:
  do {
    lVar19 = (ulonglong)uVar12 * 0x18;
    iVar10 = uVar12 + 1;
    do {
      iVar11 = iVar10;
      iVar10 = iVar11 + -1;
      if (iVar10 < 1) goto LAB_1431d1a91;
      lVar3 = *plVar18;
      piVar1 = (int *)(lVar3 + -0xc + lVar19);
      lVar19 = lVar19 + -0x18;
    } while (DAT_14c7590b0 - *piVar1 < 0x1f);
    uVar2 = *(undefined4 *)(lVar3 + lVar19);
    uVar12 = *(uint *)(lVar3 + 4 + lVar19);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c560);
    FUN_14740152a(uVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c560);
    LOCK();
    _DAT_14ca84ee8 = _DAT_14ca84ee8 - (ulonglong)uVar12;
    UNLOCK();
    iVar6 = (int)plVar18[1] - iVar10;
    if (iVar6 != 0) {
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar19 + *plVar18),
              (void *)(*plVar18 + (longlong)((int)plVar18[1] - iVar6) * 0x18),(longlong)iVar6 * 0x18
             );
      iVar10 = (int)plVar18[1];
    }
    uVar12 = iVar11 - 2;
    *(int *)(plVar18 + 1) = iVar10 + -1;
    FUN_147403170(plVar18);
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  goto LAB_1431d1ac0;
LAB_1431d1a91:
  if (iVar13 == 0) goto LAB_1431d1ac0;
  lVar8 = lVar8 + 1;
  uVar7 = (ulonglong)(int)DAT_14ca7c530;
  if ((longlong)uVar7 <= lVar8) goto LAB_1431d1aa8;
  goto LAB_1431d18d5;
}



// FUNCTION 1431d1c12 FUN_1431d1c12 body=139 status=ok
// SIG undefined FUN_1431d1c12(void)

void FUN_1431d1c12(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  undefined1 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  puVar2 = (undefined8 *)*param_4;
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  if (puVar3 != puVar2) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    }
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x58) = param_3;
  *(undefined1 *)(param_1 + 0x5c) = param_5;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  puVar2 = (undefined8 *)*param_4;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431d1c9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1431d1c9e FUN_1431d1c9e body=648 status=ok
// SIG undefined FUN_1431d1c9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d1c9e(undefined8 *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined *puVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14a372868;
  if ((*(int *)(param_1 + 6) != 0) && (*(char *)((longlong)param_1 + 0x5e) == '\x01')) {
    cVar11 = FUN_1431d1f27();
    uVar3 = DAT_14c7590b0;
    if (cVar11 == '\0') {
      uVar5 = *(undefined4 *)(param_1 + 6);
      uVar3 = *(uint *)(param_1 + 0xb);
      local_4c = uVar5;
      if (param_1[10] == 0) {
        (*DAT_14ca7fbb0)(1,&local_4c);
      }
      else {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c560);
        FUN_14740152a(uVar5);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c560);
      }
      LOCK();
      _DAT_14ca84ee8 = _DAT_14ca84ee8 - (ulonglong)uVar3;
      UNLOCK();
      *(undefined4 *)(param_1 + 6) = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 6);
      local_50 = *(undefined4 *)((longlong)param_1 + 0x34);
      uVar6 = *(undefined4 *)(param_1 + 0xb);
      uVar8 = param_1[8];
      bVar4 = *(byte *)((longlong)param_1 + 0x5c);
      uVar18 = DAT_14c7590b0 % 3;
      uVar12 = FUN_1431d2023(uVar6);
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c538);
      if ((DAT_14ca7a384 == '\x01') && ((*(byte *)(param_1[4] + 0x8c) & 1) == 0)) {
        puVar17 = &DAT_14ca7e200;
      }
      else {
        puVar17 = &DAT_14ca7d120;
      }
      lVar9 = (ulonglong)uVar18 * 0x5a0 + (ulonglong)uVar12 * 0x20;
      lVar16 = (ulonglong)bVar4 * 0x10;
      iVar7 = *(int *)(puVar17 + lVar16 + 8 + lVar9);
      *(uint *)(puVar17 + lVar16 + 8 + lVar9) = iVar7 + 1U;
      if (*(uint *)(puVar17 + lVar16 + 0xc + lVar9) < iVar7 + 1U) {
        FUN_14740321e(puVar17 + lVar16 + lVar9,iVar7);
      }
      lVar9 = *(longlong *)(puVar17 + lVar16 + lVar9);
      lVar16 = (longlong)iVar7;
      *(undefined4 *)(lVar9 + lVar16 * 0x18) = uVar5;
      *(undefined4 *)(lVar9 + 4 + lVar16 * 0x18) = uVar6;
      *(undefined4 *)(lVar9 + 8 + lVar16 * 0x18) = local_50;
      *(uint *)(lVar9 + 0xc + lVar16 * 0x18) = uVar3;
      *(undefined8 *)(lVar9 + 0x10 + lVar16 * 0x18) = uVar8;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c538);
    }
  }
  puVar10 = (undefined8 *)param_1[10];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  *param_1 = &PTR_FUN_14a1e4960;
  lVar9 = param_1[4];
  if (lVar9 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar9 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar9 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar9 + 0xd);
        plVar13 = (longlong *)FUN_14001cc68(0x10,8);
        plVar13[1] = lVar9;
        plVar15 = DAT_14ca843c0;
        plVar14 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar13 = (longlong)plVar15;
            LOCK();
            bVar19 = plVar15 != DAT_14ca843c0;
            plVar14 = plVar13;
            if (bVar19) {
              plVar15 = DAT_14ca843c0;
              plVar14 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar14;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar13 = (longlong)plVar14;
            LOCK();
            bVar19 = plVar14 != DAT_14ca843c8;
            plVar15 = plVar13;
            if (bVar19) {
              plVar14 = DAT_14ca843c8;
              plVar15 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar15;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
  FUN_1446fc3c5(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a37f858;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431d1f27 FUN_1431d1f27 body=252 status=ok
// SIG undefined FUN_1431d1f27(void)

bool FUN_1431d1f27(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca7fb20) {
    FUN_144b3d300(&DAT_14ca7fb20);
    if (DAT_14ca7fb20 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.UniformBufferPooling",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14ca7fb18 = 0;
      }
      else {
        DAT_14ca7fb18 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14ca7fb20);
    }
  }
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (DAT_14c86a9fc == 0) {
    if (((iVar1 == 2) || (iVar1 == 0x40000010)) || (iVar1 == 0x10)) {
      lVar3 = 4;
    }
    else {
      lVar3 = 0;
    }
  }
  else {
    lVar3 = (ulonglong)((iVar1 - 0x10U & 0xbfffffef) == 0) << 2;
  }
  return *(int *)(DAT_14ca7fb18 + lVar3) != 0;
}



// FUNCTION 1431d2023 FUN_1431d2023 body=188 status=ok
// SIG undefined FUN_1431d2023(void)

void FUN_1431d2023(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  if (DAT_14ca7c530 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c538);
    lVar6 = 0;
    do {
      uVar3 = DAT_14ca7c530;
      lVar4 = (longlong)(int)DAT_14ca7c530;
      DAT_14ca7c530 = DAT_14ca7c530 + 1;
      if (DAT_14ca7c534 < DAT_14ca7c530) {
        FUN_1447808da(&DAT_14ca7c528,uVar3);
      }
      *(undefined4 *)(DAT_14ca7c528 + lVar4 * 4) = *(undefined4 *)((longlong)&DAT_14a374950 + lVar6)
      ;
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0xb4);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c538);
  }
  uVar2 = 0;
  uVar3 = DAT_14ca7c530;
  do {
    uVar5 = uVar2 + uVar3 >> 1;
    uVar1 = uVar5;
    if (param_1 <= *(uint *)(DAT_14ca7c528 + -4 + (ulonglong)uVar5 * 4)) {
      uVar1 = uVar2;
      uVar3 = uVar5;
    }
    uVar2 = uVar1;
  } while (1 < uVar3 - uVar2);
  return;
}



// FUNCTION 1431d20e0 FUN_1431d20e0 body=1725 status=ok
// SIG undefined FUN_1431d20e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1431d20e0(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,uint param_5)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined4 *_Dst;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  ulonglong local_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_4 + 0x8c) & 8) != 0) {
    lVar8 = FUN_14001cc68(0x60,0x10);
    FUN_1473fea26(lVar8,param_4);
    FUN_1473feaba(lVar8,param_3);
    if ((longlong)*(int *)(param_4 + 0x28) < 1) {
      lVar13 = 0;
    }
    else {
      uVar12 = 1;
      do {
        bVar2 = *(byte *)(*(longlong *)(param_4 + 0x20) + -2 + uVar12 * 4);
        if ((bVar2 == 0x11) || (bVar2 == 6)) {
          plVar14 = (longlong *)
                    ((ulonglong)*(ushort *)(*(longlong *)(param_4 + 0x20) + -4 + uVar12 * 4) +
                    param_3);
          if ((bVar2 < 0x12) && ((0x27200U >> (bVar2 & 0x1f) & 1) != 0)) {
            if (*plVar14 == 0) goto LAB_1431d21ab;
            plVar14 = (longlong *)(*plVar14 + 0x10);
          }
          lVar13 = *plVar14;
        }
        else {
LAB_1431d21ab:
          lVar13 = 0;
        }
      } while ((uVar12 < (ulonglong)(longlong)*(int *)(param_4 + 0x28)) &&
              (uVar12 = uVar12 + 1, lVar13 == 0));
    }
    if (DAT_14ca85164 == '\x01') {
      lVar4 = *(longlong *)(lVar13 + 0x10);
      *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(lVar4 + 0x38);
      *(undefined4 *)(lVar8 + 0x58) = *(undefined4 *)(lVar4 + 0x20);
      *(undefined1 *)(lVar8 + 0x5e) = 0;
      *(undefined4 *)(lVar8 + 0x34) = *(undefined4 *)(lVar13 + 0x1c);
      *(undefined4 *)(lVar8 + 0x38) = 0x4000;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      puVar11 = *(undefined8 **)(lVar8 + 0x50);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar8 + 0x50) = 0;
        piVar1 = (int *)(puVar11 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar11)(puVar11,1);
        }
      }
      *(undefined1 *)(lVar8 + 0x5c) = 0;
    }
    else {
      puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar10 + 4;
      if (DAT_14ca85108 < puVar11) {
        FUN_140023dd8(&DAT_14ca85100,0x28);
        puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar11 = puVar10 + 4;
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = puVar11;
      *DAT_14ca85130 = puVar10;
      DAT_14ca85130 = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_FUN_14a374a08;
      puVar10[2] = lVar8;
      puVar10[3] = lVar13;
    }
    if (lVar8 != 0) {
      *param_2 = lVar8;
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
      goto LAB_1431d2773;
    }
  }
  if (DAT_14ca7a384 == '\x01') {
    bVar16 = (*(byte *)(param_4 + 0x8c) & 1) == 0;
  }
  else {
    bVar16 = false;
  }
  if ((*(int *)(param_4 + 0x84) == 0) || (cVar5 = FUN_1431d1f27(), cVar5 == '\0')) {
LAB_1431d2387:
    puVar11 = (undefined8 *)0x0;
LAB_1431d238a:
    lVar8 = FUN_14001cc68(0x60,0x10);
    FUN_1473fea26(lVar8,param_4);
    uVar6 = FUN_1431d2023(*(undefined4 *)(param_4 + 0x84));
    uVar15 = DAT_14c760d28;
    uVar6 = *(uint *)(DAT_14ca7c528 + (ulonglong)uVar6 * 4);
    if (uVar6 == 0) {
      uVar6 = *(uint *)(param_4 + 0x84);
    }
    uVar12 = (ulonglong)uVar6;
    if ((DAT_14ca7a384 == '\x01') && ((*(byte *)(param_4 + 0x8c) & 1) == 0)) {
      local_4c = 0;
      local_78 = uVar12;
      FUN_1474016a6(&local_58,uVar6);
      puVar10 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
      }
      local_88 = param_5 < 2;
      FUN_1431d1c12(lVar8,local_4c,uVar6,&local_58);
      uVar12 = local_78;
    }
    else if (DAT_14ca85164 == '\x01') {
      local_4c = 0;
      lVar13 = (longlong)(int)DAT_14c760d28;
      local_70 = puVar11;
      local_68 = param_2;
      if (lVar13 < 0x3ff) {
        _Dst = &DAT_14ca7b3e0 + lVar13;
        uVar15 = DAT_14c760d28 + 1;
        local_78 = uVar12;
      }
      else {
        iVar7 = 0x400 - DAT_14c760d28;
        _Dst = &local_4c;
        local_78 = uVar12;
        memcpy(_Dst,&DAT_14ca7b3e0 + lVar13,(longlong)iVar7 * 4);
        (*DAT_14ca7fc70)(0x400,&DAT_14ca7b3e0);
        uVar15 = uVar15 - 0x3ff;
        memcpy(&local_4c + iVar7,&DAT_14ca7b3e0,(ulonglong)uVar15 * 4);
      }
      uVar3 = *_Dst;
      DAT_14c760d28 = uVar15;
      FUN_1473e997e(uVar3);
      uVar12 = local_78;
      puVar10 = (undefined8 *)0x0;
      (*DAT_14ca7fc78)(0x8a11,local_78,0,(uint)(1 < param_5) * 4 + 0x88e0);
      local_58 = (undefined8 *)0x0;
      local_88 = param_5 < 2;
      FUN_1431d1c12(lVar8,uVar3,uVar6);
      param_2 = local_68;
      puVar11 = local_70;
    }
    else {
      puVar9 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar9 + 7;
      if (DAT_14ca85108 < puVar10) {
        FUN_140023dd8(&DAT_14ca85100,0x40);
        puVar9 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar9 + 7;
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = puVar10;
      *DAT_14ca85130 = puVar9;
      DAT_14ca85130 = puVar9 + 1;
      puVar9[1] = 0;
      *puVar9 = &PTR_FUN_14a374a18;
      puVar9[2] = lVar8;
      *(uint *)(puVar9 + 3) = uVar6;
      puVar9[4] = 0;
      puVar9[5] = 0;
      *(bool *)(puVar9 + 6) = param_5 < 2;
      puVar10 = (undefined8 *)0x0;
    }
    LOCK();
    _DAT_14ca84ee8 = _DAT_14ca84ee8 + uVar12;
    UNLOCK();
    if (param_3 != 0) {
      FUN_1473febd4(lVar8,param_3,*(undefined4 *)(param_4 + 0x84));
    }
    FUN_1473feaba(lVar8,param_3);
    *param_2 = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
  }
  else {
    uVar6 = FUN_1431d2023(*(undefined4 *)(param_4 + 0x84));
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c538);
    puVar11 = &DAT_14ca7c5e0;
    if (bVar16) {
      puVar11 = &DAT_14ca7cb80;
    }
    lVar8 = (longlong)*(int *)(puVar11 + (ulonglong)uVar6 * 4 + (ulonglong)(param_5 < 2) * 2 + 1);
    if (lVar8 < 1) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c538);
      goto LAB_1431d2387;
    }
    lVar13 = puVar11[(ulonglong)uVar6 * 4 + (ulonglong)(param_5 < 2) * 2];
    uVar3 = *(undefined4 *)(lVar13 + -0x18 + lVar8 * 0x18);
    iVar7 = *(int *)(lVar13 + -0x14 + lVar8 * 0x18);
    *(int *)(puVar11 + (ulonglong)uVar6 * 4 + (ulonglong)(param_5 < 2) * 2 + 1) =
         *(int *)(puVar11 + (ulonglong)uVar6 * 4 + (ulonglong)(param_5 < 2) * 2 + 1) + -1;
    FUN_147403170();
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c538);
    if (bVar16) {
      FUN_1473fed50(&local_58,uVar3);
      puVar11 = local_58;
    }
    else {
      if (DAT_14ca85164 == '\x01') {
        FUN_1473e997e(uVar3);
      }
      else {
        puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar11 = puVar10 + 3;
        if (DAT_14ca85108 < puVar11) {
          FUN_140023dd8(&DAT_14ca85100,0x20);
          puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar11 = puVar10 + 3;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar11;
        *DAT_14ca85130 = puVar10;
        DAT_14ca85130 = puVar10 + 1;
        puVar10[1] = 0;
        *puVar10 = &PTR_LAB_14a374bb0;
        *(undefined4 *)(puVar10 + 2) = uVar3;
      }
      puVar11 = (undefined8 *)0x0;
    }
    if (iVar7 == 0) goto LAB_1431d238a;
    lVar8 = FUN_14001cc68(0x60,0x10);
    FUN_1473fea26(lVar8,param_4);
    if (puVar11 != (undefined8 *)0x0) {
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    }
    local_88 = param_5 < 2;
    local_60 = puVar11;
    FUN_1431d1c12(lVar8,uVar3,iVar7,&local_60);
    if (param_3 != 0) {
      FUN_1473febd4(lVar8,param_3,*(undefined4 *)(param_4 + 0x84));
    }
    FUN_1473feaba(lVar8,param_3);
    *param_2 = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
LAB_1431d2773:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1431d279e FUN_1431d279e body=21 status=ok
// SIG undefined FUN_1431d279e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d279e(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = -param_1;
  if (param_2 != '\0') {
    lVar1 = param_1;
  }
  LOCK();
  _DAT_14ca84ee8 = _DAT_14ca84ee8 + lVar1;
  UNLOCK();
  return;
}



// FUNCTION 1431d27b3 FUN_1431d27b3 body=41 status=ok
// SIG undefined FUN_1431d27b3(void)

void FUN_1431d27b3(void)

{
  DAT_14ca7f338 = 0;
  if (DAT_14ca7f330 != 0) {
    FUN_1400020a8();
  }
  FUN_146196f92();
  return;
}



// FUNCTION 1431d27dc FUN_1431d27dc body=69 status=ok
// SIG undefined FUN_1431d27dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d27dc(void)

{
  _DAT_14ca7f340 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d281e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca7f348,1);
  return;
}



// FUNCTION 1431d2822 FUN_1431d2822 body=1818 status=ok
// SIG undefined FUN_1431d2822(void)

undefined8 *
FUN_1431d2822(undefined8 *param_1,undefined8 param_2,HWND param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  HDC pHVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x1e;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a372b20;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  (*DAT_14ca7fcd0)();
  lVar3 = param_1[2];
  iVar5 = *(int *)(lVar3 + 0x928);
  *(uint *)(lVar3 + 0x928) = iVar5 + 1U;
  if (*(uint *)(lVar3 + 0x92c) < iVar5 + 1U) {
    FUN_14740394c((longlong *)(lVar3 + 0x920),iVar5);
  }
  *(undefined8 **)(*(longlong *)(lVar3 + 0x920) + (longlong)iVar5 * 8) = param_1;
  lVar3 = *(longlong *)(param_1[2] + 0x15008);
  *(undefined1 *)(lVar3 + 0x70) = 1;
  puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar8 = param_3;
  *(undefined1 *)(puVar8 + 3) = 0;
  pHVar9 = GetDC(param_3);
  puVar8[1] = pHVar9;
  FUN_1431d3a42(pHVar9);
  uVar10 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffff;
  local_88 = (code *)0x400002091;
  uStack_80 = 0x300002092;
  local_78 = (longlong *)0x200002094;
  uStack_70 = 0x9126;
  uStack_6c = 1;
  local_68 = (undefined **)((ulonglong)local_68._4_4_ << 0x20);
  uVar10 = (*DAT_14ca7fa88)(pHVar9,uVar10);
  puVar8[2] = uVar10;
  FUN_14740069e(&local_88,puVar8);
  FUN_1473eabea();
  (*DAT_14ca7fb58)(1,puVar8 + 4);
  FUN_147400700(&local_88);
  iVar5 = *(int *)(lVar3 + 0x68);
  *(uint *)(lVar3 + 0x68) = iVar5 + 1U;
  if (*(uint *)(lVar3 + 0x6c) < iVar5 + 1U) {
    FUN_147403a9c((longlong *)(lVar3 + 0x60),iVar5);
  }
  *(undefined8 **)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar5 * 8) = puVar8;
  param_1[3] = puVar8;
  FUN_1431d2f3e(param_1,param_4,param_5,param_6);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar3 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_1431d29de;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_1431d29e7;
      goto LAB_1431d2af3;
    }
  }
  else {
LAB_1431d29de:
    if (iVar5 != 0x10) {
LAB_1431d2af3:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar3 + 0xc60), iVar5 == 2))
        goto LAB_1431d29e7;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_1431d29e7;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar8 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar8;
        if (puVar13 != (uint *)0x0) goto LAB_1431d2c5f;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_1431d6c29);
          }
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar3 + 0x310);
          *(undefined8 *)(lVar3 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar8 = puVar12;
          FUN_140217a48(puVar8);
          puVar13 = (uint *)*puVar8;
LAB_1431d2c5f:
          puVar11 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar11 + 0x16);
          uVar14 = puVar13[0x12];
          if (puVar16 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar14 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar14) != 0xffffffff) break;
            puVar13 = (uint *)*puVar8;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar8 = puVar13;
            puVar11 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar11 + 0x16);
            uVar14 = 0;
            if (puVar16 <= puVar13 + 0x4000) {
              uVar14 = 1;
              goto LAB_1431d2cdf;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1431d2cdf:
        *(uint **)(puVar13 + 0x10) = puVar16;
        puVar13[0x12] = uVar14;
        iVar5 = 0;
        FUN_1447247dc(puVar11,0);
        *puVar11 = &PTR_FUN_14a374c20;
        puVar11[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar5 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
        }
        puVar11[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar11[9] = puVar11;
        puVar11[10] = puVar11;
        lVar3 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar3 == 0) {
          uVar4 = 1;
          if ((char)uVar17 != '\x06') {
            uVar4 = uVar17;
          }
          uVar17 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar3 + 0x30);
        }
        puVar11[0xf] = uVar10;
        puVar11[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar11 + 0x1c) = iVar5;
        if (puVar11 == (undefined8 *)0x0) {
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
          UNLOCK();
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(puVar11);
          LOCK();
          piVar1 = (int *)(puVar11 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar11)(puVar11,1);
          }
        }
      }
      else {
        local_78 = (longlong *)0x0;
        local_68 = &PTR_LAB_14a374bd0;
        local_88 = FUN_1431d6b32;
        local_98 = &local_88;
        local_60 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"CreateFrameSyncEvent",&DAT_14ca7fb34);
        if (local_88 != (code *)0x0) {
          plVar15 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar15 = &local_68;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      goto LAB_1431d2b94;
    }
  }
LAB_1431d29e7:
  if (DAT_14ca85164 == '\x01') {
    puVar11 = (undefined8 *)FUN_14001cc68(8,0x10);
    uVar10 = (*DAT_14ca7fe88)(0x9117,0);
    *puVar11 = uVar10;
    (*DAT_14ca7fe30)();
    puVar8 = (undefined8 *)param_1[7];
    param_1[7] = puVar11;
    if (puVar8 != (undefined8 *)0x0) {
      (*DAT_14ca7fe80)(*puVar8);
      FUN_1400020a8(puVar8);
    }
  }
  else {
    puVar11 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar11 + 3;
    if (DAT_14ca85108 < puVar8) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar11 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar8 = puVar11 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar8;
    *DAT_14ca85130 = puVar11;
    DAT_14ca85130 = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_FUN_14a374bc0;
    puVar11[2] = param_1;
  }
LAB_1431d2b94:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d2f3e FUN_1431d2f3e body=1277 status=ok
// SIG undefined FUN_1431d2f3e(void)

void FUN_1431d2f3e(longlong param_1,int param_2,int param_3,char param_4)

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
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_80;
  int iStack_78;
  int iStack_74;
  char local_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(int *)(param_1 + 0x20) == param_2) && (*(int *)(param_1 + 0x24) == param_3)) &&
     (*(char *)(param_1 + 0x28) == param_4)) goto LAB_1431d3091;
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x24) = param_3;
  uStack_6f = *(undefined1 *)(param_1 + 0x28);
  *(char *)(param_1 + 0x28) = param_4;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_80 = param_1;
  iStack_78 = param_2;
  iStack_74 = param_3;
  local_70 = param_4;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1431d2fb6;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1431d2fbb;
      goto LAB_1431d2fec;
    }
  }
  else {
LAB_1431d2fb6:
    if (iVar6 != 0x10) {
LAB_1431d2fec:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1431d2fbb;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1431d2fbb;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1431d3156;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_1431d6c29);
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
LAB_1431d3156:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x18);
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
            puVar14 = (uint *)(puVar16 + 0x18);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1431d31d6;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1431d31d6:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a374c80;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_80;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_80._4_4_;
        *(int *)(puVar16 + 0x16) = iStack_78;
        *(int *)((longlong)puVar16 + 0xb4) = iStack_74;
        puVar16[0x17] = CONCAT62(uStack_6e,CONCAT11(uStack_6f,local_70));
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
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a374c60;
        local_40 = (undefined4)local_80;
        uStack_3c = local_80._4_4_;
        iStack_38 = iStack_78;
        iStack_34 = iStack_74;
        local_30 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,local_70));
        local_68[0] = &LAB_1431d7334;
        FUN_14005a792(&DAT_14ca9a440,L"ResizeViewport",&DAT_14ca7fb38);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1431d3091;
    }
  }
LAB_1431d2fbb:
  FUN_1431d6e8a(&local_80,&DAT_14ca85100);
LAB_1431d3091:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d343c FUN_1431d343c body=358 status=ok
// SIG undefined FUN_1431d343c(void)

void FUN_1431d343c(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  HGLRC pHVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x918);
  if (lVar4 != param_2) {
    *(longlong *)(param_1 + 0x918) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      UNLOCK();
    }
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
          plVar8 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x920) = 0;
  lVar4 = *(longlong *)(param_1 + 86000);
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != *(HGLRC *)(lVar4 + 0x40)) {
    *(undefined1 *)(param_1 + 0x920) = 1;
    FUN_14740015b(*(undefined8 *)(param_1 + 86000));
    *(undefined8 *)(param_1 + 0x14f88) = 0;
  }
  local_40[0] = param_3;
  if (param_3 == 0) {
    local_40[0] = *(longlong *)(*(longlong *)(param_1 + 0x918) + 0x30);
  }
  local_40[1] = 0xffffffff00000000;
  local_30 = 0x101;
  FUN_1473e6f5e(param_1 + -0x18,1,local_40,0);
  if (*(longlong **)(param_1 + 0x150f8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x150f8) + 0x20))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431d35a4 FUN_1431d35a4 body=724 status=ok
// SIG undefined FUN_1431d35a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d35a4(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  BOOL BVar7;
  HGLRC pHVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 local_5c [20];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1403936f2(local_5c,2,1);
  plVar12 = (longlong *)param_2[6];
  lVar9 = *(longlong *)(param_1 + 0x14f88);
  if (lVar9 == 0) {
    lVar5 = *(longlong *)(param_1 + 86000);
    pHVar8 = wglGetCurrentContext();
    lVar9 = param_1 + 0x141e8;
    if (pHVar8 == *(HGLRC *)(lVar5 + 0x40)) {
      lVar9 = param_1 + 0x148b8;
    }
    *(longlong *)(param_1 + 0x14f88) = lVar9;
  }
  if (*(char *)(lVar9 + 0x414) == '\x01') {
    *(undefined1 *)(lVar9 + 0x414) = 0;
    (*DAT_14ca7fbc8)(0xc11);
  }
  lVar9 = (**(code **)(*plVar12 + 8))(plVar12);
  uVar4 = *(undefined4 *)(lVar9 + 0x28);
  lVar9 = (**(code **)(*plVar12 + 8))(plVar12);
  local_78 = uVar4;
  local_70 = param_3;
  local_68 = param_4;
  cVar6 = FUN_1474001b3(param_1,*(undefined8 *)(param_1 + 86000),param_2,
                        *(undefined4 *)(lVar9 + 0x24));
  *(undefined4 *)(param_1 + 0x14a60) = 0xffffffff;
  lVar9 = *(longlong *)(param_1 + 0x918);
  if (lVar9 != 0) {
    *(undefined8 *)(param_1 + 0x918) = 0;
    LOCK();
    puVar1 = (uint *)(lVar9 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar9 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar9 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = lVar9;
        plVar12 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar12;
            LOCK();
            bVar13 = plVar12 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar13) {
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c8;
            plVar12 = plVar10;
            if (bVar13) {
              plVar11 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  if (cVar6 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca7f358) && (FUN_144b3d300(&DAT_14ca7f358), DAT_14ca7f358 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar12 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.FinishCurrentFrame",1);
      if (plVar12 == (longlong *)0x0) {
        DAT_14ca7f350 = 0;
      }
      else {
        DAT_14ca7f350 = (**(code **)(*plVar12 + 0x68))(plVar12);
      }
      _Init_thread_footer(&DAT_14ca7f358);
    }
    bVar13 = *(int *)(DAT_14ca7f350 + 4) == 0;
    (**(code **)(*param_2 + 0x40 + (ulonglong)!bVar13 * 8))(param_2);
    (**(code **)(*param_2 + 0x40 + (ulonglong)bVar13 * 8))(param_2);
  }
  if (DAT_14ca964b2 == '\x01') {
    (**(code **)(*param_2 + 0x40))(param_2);
    QueryPerformanceCounter(&local_48);
    _DAT_14ca964b8 = local_48.s.LowPart - _DAT_14ca964b4;
    DAT_14ca964b2 = '\0';
  }
  if (*(char *)(param_1 + 0x920) == '\x01') {
    BVar7 = wglMakeCurrent(*(HDC *)(*(longlong *)(param_1 + 86000) + 8),
                           *(HGLRC *)(*(longlong *)(param_1 + 86000) + 0x10));
    if (BVar7 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
    *(undefined8 *)(param_1 + 0x14f88) = 0;
    *(undefined1 *)(param_1 + 0x920) = 0;
  }
  FUN_1402488ea(local_5c);
  FUN_1431cc220(param_1 + -0x18);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431d387a FUN_1431d387a body=455 status=ok
// SIG undefined FUN_1431d387a(void)

longlong FUN_1431d387a(longlong param_1)

{
  char cVar1;
  BOOL BVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14001cc68(0x28,0x10);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  *(LPCRITICAL_SECTION *)(param_1 + 0x78) = lpCriticalSection;
  cVar1 = (*DAT_14ca7fca0)(0x6789);
  DAT_14ca7fe28 = cVar1 != '\0';
  FUN_1431d5541(param_1);
  *(undefined8 *)(param_1 + 0x1c) = 0xffffffff;
  local_88 = 0x400002091;
  uStack_80 = 0x300002092;
  local_78 = 0x200002094;
  uStack_70 = 0x100009126;
  local_68 = 0;
  uVar3 = (*DAT_14ca7fa88)(*(undefined8 *)(param_1 + 8),0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_14740069e(&local_88,param_1);
  (*DAT_14ca7f828)(1,param_1 + 0x24);
  (*DAT_14ca7f838)(*(undefined4 *)(param_1 + 0x24));
  FUN_1473eabea();
  (*DAT_14ca7fb58)(1,param_1 + 0x20);
  FUN_147400700(&local_88);
  FUN_1431d5541(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffff;
  local_88 = 0x400002091;
  uStack_80 = 0x300002092;
  local_78 = 0x200002094;
  uStack_70 = 0x100009126;
  local_68 = 0;
  uVar3 = (*DAT_14ca7fa88)(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x10),&local_88
                          );
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  FUN_14740069e(&local_88,param_1 + 0x30);
  (*DAT_14ca7f828)(1,param_1 + 0x54);
  (*DAT_14ca7f838)(*(undefined4 *)(param_1 + 0x54));
  FUN_1473eabea();
  (*DAT_14ca7fb58)(1,param_1 + 0x50);
  FUN_147400700(&local_88);
  BVar2 = wglMakeCurrent(*(HDC *)(param_1 + 8),*(HGLRC *)(param_1 + 0x10));
  if (BVar2 == 0) {
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d3a42 FUN_1431d3a42 body=298 status=ok
// SIG undefined FUN_1431d3a42(void)

void FUN_1431d3a42(HDC param_1)

{
  int format;
  BOOL BVar1;
  undefined1 auStack_58 [32];
  PIXELFORMATDESCRIPTOR local_38;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38.cAlphaBits = '\0';
  local_38.cAlphaShift = '\0';
  local_38.cAccumBits = '\0';
  local_38.cAccumRedBits = '\0';
  local_38.cAccumGreenBits = '\0';
  local_38.cAccumBlueBits = '\0';
  local_38.cAccumAlphaBits = '\0';
  local_38.cDepthBits = '\0';
  local_38.cStencilBits = '\0';
  local_38.cAuxBuffers = '\0';
  local_38.iLayerType = '\0';
  local_38.bReserved = '\0';
  local_38.dwLayerMask = 0;
  local_38.dwVisibleMask = 0;
  local_38.dwDamageMask = 0;
  local_38.nSize = 0x28;
  local_38.nVersion = 1;
  local_38.dwFlags = 0x25;
  local_38.iPixelType = '\0';
  local_38.cColorBits = ' ';
  local_38.cRedBits = '\0';
  local_38.cRedShift = '\0';
  local_38.cGreenBits = '\0';
  local_38.cGreenShift = '\0';
  local_38.cBlueBits = '\0';
  local_38.cBlueShift = '\0';
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca7fb2c) {
    FUN_144b3d300(&DAT_14ca7fb2c);
    if (DAT_14ca7fb2c == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14ca7fb28 = FUN_14054d46e(&DAT_14c846b20,L"quad_buffer_stereo");
      _Init_thread_footer(&DAT_14ca7fb2c);
    }
  }
  if (DAT_14ca7fb28 == '\x01') {
    local_38.dwFlags = 0x27;
  }
  format = ChoosePixelFormat(param_1,&local_38);
  if (format != 0) {
    BVar1 = SetPixelFormat(param_1,format,&local_38);
    if (BVar1 != 0) goto LAB_1431d3aea;
  }
  FUN_140033559(".\\Runtime/OpenGLDrv/Private/Windows/WindowsOpenGLPlatform.cpp",0x88,
                L"Failed to set pixel format for device context.");
LAB_1431d3aea:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d3b6d FUN_1431d3b6d body=6611 status=ok
// SIG undefined FUN_1431d3b6d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1431d3b6d(void)

{
  HDC pHVar1;
  BOOL BVar2;
  HGLRC pHVar3;
  HMODULE hLibModule;
  undefined4 extraout_var;
  undefined1 auStack_98 [32];
  HWND local_78;
  HDC local_70;
  HGLRC local_68;
  undefined8 local_5c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1431d5541(&local_78);
  pHVar1 = local_70;
  pHVar3 = wglCreateContext(local_70);
  local_68 = pHVar3;
  BVar2 = wglMakeCurrent(pHVar1,pHVar3);
  if (BVar2 == 0) {
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  }
  DAT_14ca7fa88 = wglGetProcAddress("wglCreateContextAttribsARB");
  if (DAT_14ca7fa88 != (PROC)0x0) {
    BVar2 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (BVar2 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
    wglDeleteContext(pHVar3);
    local_5c = 0xffffffff;
    local_48 = 0x400002091;
    uStack_40 = 0x300002092;
    local_38 = 0x2094;
    uStack_34 = 2;
    uStack_30 = 0x9126;
    uStack_2c = 1;
    local_28 = 0;
    local_68 = (HGLRC)(*DAT_14ca7fa88)();
    if (local_68 != (HGLRC)0x0) {
      DAT_14ca7faa0 = '\x01';
      BVar2 = wglMakeCurrent(local_70,local_68);
      if (BVar2 == 0) {
        wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      }
    }
  }
  if (DAT_14ca7faa0 == '\x01') {
    hLibModule = (HMODULE)FUN_14155261e(L"opengl32.dll");
    if (hLibModule == (HMODULE)0x0) {
      FUN_140033559(".\\Runtime/OpenGLDrv/Private/Windows/WindowsOpenGLPlatform.cpp",0x310,
                    L"Couldn\'t load opengl32.dll");
    }
    DAT_14ca7fb70 = FUN_14170ce66(hLibModule,L"glBindTexture");
    DAT_14ca7fc40 = FUN_14170ce66(hLibModule,L"glBlendFunc");
    _DAT_14ca7f360 = FUN_14170ce66(hLibModule,L"glColorMask");
    _DAT_14ca7f368 = FUN_14170ce66(hLibModule,L"glCopyTexImage1D");
    _DAT_14ca7f370 = FUN_14170ce66(hLibModule,L"glCopyTexImage2D");
    _DAT_14ca7f378 = FUN_14170ce66(hLibModule,L"glCopyTexSubImage1D");
    _DAT_14ca7f380 = FUN_14170ce66(hLibModule,L"glCopyTexSubImage2D");
    DAT_14ca7fbc0 = FUN_14170ce66(hLibModule,L"glCullFace");
    DAT_14ca7fb90 = FUN_14170ce66(hLibModule,L"glDeleteTextures");
    DAT_14ca7fc00 = FUN_14170ce66(hLibModule,L"glDepthFunc");
    DAT_14ca7fbf8 = FUN_14170ce66(hLibModule,L"glDepthMask");
    DAT_14ca7fd30 = FUN_14170ce66(hLibModule,L"glDepthRange");
    DAT_14ca7fbc8 = FUN_14170ce66(hLibModule,L"glDisable");
    DAT_14ca7fc68 = FUN_14170ce66(hLibModule,L"glDrawArrays");
    DAT_14ca7fea0 = FUN_14170ce66(hLibModule,L"glDrawBuffer");
    _DAT_14ca7f388 = FUN_14170ce66(hLibModule,L"glDrawElements");
    DAT_14ca7fbb8 = FUN_14170ce66(hLibModule,L"glEnable");
    _DAT_14ca7f390 = FUN_14170ce66(hLibModule,L"glFinish");
    DAT_14ca7fe30 = FUN_14170ce66(hLibModule,L"glFlush");
    _DAT_14ca7f398 = FUN_14170ce66(hLibModule,L"glFrontFace");
    DAT_14ca7fb68 = FUN_14170ce66(hLibModule,L"glGenTextures");
    DAT_14ca7fe20 = FUN_14170ce66(hLibModule,L"glGetBooleanv");
    _DAT_14ca7f3a0 = FUN_14170ce66(hLibModule,L"glGetDoublev");
    DAT_14ca7fcd0 = FUN_14170ce66(hLibModule,L"glGetError");
    _DAT_14ca7f3a8 = FUN_14170ce66(hLibModule,L"glGetFloatv");
    DAT_14ca7fb40 = FUN_14170ce66(hLibModule,L"glGetIntegerv");
    _DAT_14ca7f3b0 = FUN_14170ce66(hLibModule,L"glGetPointerv");
    DAT_14ca7fb50 = FUN_14170ce66(hLibModule,L"glGetString");
    DAT_14ca7ff68 = FUN_14170ce66(hLibModule,L"glGetTexImage");
    _DAT_14ca7f3b8 = FUN_14170ce66(hLibModule,L"glGetTexLevelParameterfv");
    _DAT_14ca7f3c0 = FUN_14170ce66(hLibModule,L"glGetTexLevelParameteriv");
    _DAT_14ca7f3c8 = FUN_14170ce66(hLibModule,L"glGetTexParameterfv");
    _DAT_14ca7f3d0 = FUN_14170ce66(hLibModule,L"glGetTexParameteriv");
    _DAT_14ca7f3d8 = FUN_14170ce66(hLibModule,L"glHint");
    DAT_14ca7fca0 = FUN_14170ce66(hLibModule,L"glIsEnabled");
    DAT_14ca7fc98 = FUN_14170ce66(hLibModule,L"glIsTexture");
    _DAT_14ca7f3e0 = FUN_14170ce66(hLibModule,L"glLineWidth");
    _DAT_14ca7f3e8 = FUN_14170ce66(hLibModule,L"glLogicOp");
    _DAT_14ca7f3f0 = FUN_14170ce66(hLibModule,L"glPixelStoref");
    DAT_14ca7fbe8 = FUN_14170ce66(hLibModule,L"glPixelStorei");
    _DAT_14ca7f3f8 = FUN_14170ce66(hLibModule,L"glPointSize");
    DAT_14ca7fd28 = FUN_14170ce66(hLibModule,L"glPolygonMode");
    DAT_14ca7fbd0 = FUN_14170ce66(hLibModule,L"glPolygonOffset");
    DAT_14ca7fe98 = FUN_14170ce66(hLibModule,L"glReadBuffer");
    DAT_14ca7fbf0 = FUN_14170ce66(hLibModule,L"glReadPixels");
    DAT_14ca7fc80 = FUN_14170ce66(hLibModule,L"glScissor");
    _DAT_14ca7f400 = FUN_14170ce66(hLibModule,L"glClearDepth");
    _DAT_14ca7f408 = FUN_14170ce66(hLibModule,L"glClearColor");
    _DAT_14ca7f410 = FUN_14170ce66(hLibModule,L"glClearStencil");
    _DAT_14ca7f418 = FUN_14170ce66(hLibModule,L"glClear");
    DAT_14ca7fc18 = FUN_14170ce66(hLibModule,L"glStencilFunc");
    DAT_14ca7fc28 = FUN_14170ce66(hLibModule,L"glStencilMask");
    DAT_14ca7fc20 = FUN_14170ce66(hLibModule,L"glStencilOp");
    _DAT_14ca7f420 = FUN_14170ce66(hLibModule,L"glTexImage1D");
    _DAT_14ca7f428 = FUN_14170ce66(hLibModule,L"glTexImage2D");
    _DAT_14ca7f430 = FUN_14170ce66(hLibModule,L"glTexParameterf");
    _DAT_14ca7f438 = FUN_14170ce66(hLibModule,L"glTexParameterfv");
    DAT_14ca7fd38 = FUN_14170ce66(hLibModule,L"glTexParameteri");
    _DAT_14ca7f440 = FUN_14170ce66(hLibModule,L"glTexParameteriv");
    _DAT_14ca7f448 = FUN_14170ce66(hLibModule,L"glTexSubImage1D");
    DAT_14ca7c4f0 = FUN_14170ce66(hLibModule,L"glTexSubImage2D");
    DAT_14ca7fbd8 = FUN_14170ce66(hLibModule);
    FreeLibrary(hLibModule);
    DAT_14ca7ff58 = wglGetProcAddress("glBindSampler");
    DAT_14ca7f450 = wglGetProcAddress("glDeleteSamplers");
    DAT_14ca7f458 = wglGetProcAddress("glGenSamplers");
    DAT_14ca7f460 = wglGetProcAddress("glSamplerParameteri");
    DAT_14ca7fdd8 = wglGetProcAddress("glClearBufferfv");
    DAT_14ca7fde8 = wglGetProcAddress("glClearBufferiv");
    _DAT_14ca7f468 = wglGetProcAddress("glClearBufferuiv");
    DAT_14ca7fde0 = wglGetProcAddress("glClearBufferfi");
    DAT_14ca7fd80 = wglGetProcAddress("glColorMaski");
    _DAT_14ca7fd58 = wglGetProcAddress("glDisablei");
    DAT_14ca7fd50 = wglGetProcAddress("glEnablei");
    _DAT_14ca7f470 = wglGetProcAddress("glGetBooleani_v");
    _DAT_14ca7f478 = wglGetProcAddress("glGetIntegeri_v");
    _DAT_14ca7f480 = wglGetProcAddress("glIsEnabledi");
    _DAT_14ca7f488 = wglGetProcAddress("glBlendColor");
    DAT_14ca7fc48 = wglGetProcAddress("glBlendEquation");
    DAT_14ca7fdd0 = wglGetProcAddress("glDrawRangeElements");
    DAT_14ca7fb78 = wglGetProcAddress("glTexImage3D");
    DAT_14ca7f490 = wglGetProcAddress("glTexSubImage3D");
    DAT_14ca7ff60 = wglGetProcAddress("glCopyTexSubImage3D");
    DAT_14ca7fbe0 = wglGetProcAddress("glActiveTexture");
    _DAT_14ca7f498 = wglGetProcAddress("glSampleCoverage");
    _DAT_14ca7f4a0 = wglGetProcAddress("glCompressedTexImage3D");
    DAT_14ca7c4e8 = wglGetProcAddress("glCompressedTexImage2D");
    _DAT_14ca7f4a8 = wglGetProcAddress("glCompressedTexImage1D");
    DAT_14ca7f4b0 = wglGetProcAddress("glCompressedTexSubImage3D");
    DAT_14ca7c4e0 = wglGetProcAddress("glCompressedTexSubImage2D");
    _DAT_14ca7f4b8 = wglGetProcAddress("glCompressedTexSubImage1D");
    DAT_14ca7f4c0 = wglGetProcAddress("glGetCompressedTexImage");
    DAT_14ca7fc30 = wglGetProcAddress("glBlendFuncSeparate");
    _DAT_14ca7f4c8 = wglGetProcAddress("glMultiDrawArrays");
    _DAT_14ca7f4d0 = wglGetProcAddress("glMultiDrawElements");
    _DAT_14ca7f4d8 = wglGetProcAddress("glPointParameterf");
    _DAT_14ca7f4e0 = wglGetProcAddress("glPointParameterfv");
    _DAT_14ca7f4e8 = wglGetProcAddress("glPointParameteri");
    _DAT_14ca7f4f0 = wglGetProcAddress("glPointParameteriv");
    DAT_14ca7fe48 = wglGetProcAddress("glGenQueries");
    DAT_14ca7fe50 = wglGetProcAddress("glDeleteQueries");
    _DAT_14ca7f4f8 = wglGetProcAddress("glIsQuery");
    DAT_14ca7fe58 = wglGetProcAddress("glBeginQuery");
    DAT_14ca7fe60 = wglGetProcAddress("glEndQuery");
    DAT_14ca7fb48 = wglGetProcAddress("glGetQueryiv");
    _DAT_14ca7f500 = wglGetProcAddress("glGetQueryObjectiv");
    DAT_14ca7fe70 = wglGetProcAddress("glGetQueryObjectuiv");
    DAT_14ca7fba8 = wglGetProcAddress("glBindBuffer");
    DAT_14ca7fd40 = wglGetProcAddress("glBindBufferBase");
    DAT_14ca7fbb0 = wglGetProcAddress("glDeleteBuffers");
    DAT_14ca7fc70 = wglGetProcAddress("glGenBuffers");
    _DAT_14ca7f508 = wglGetProcAddress("glIsBuffer");
    DAT_14ca7fc78 = wglGetProcAddress("glBufferData");
    DAT_14ca7ff50 = wglGetProcAddress("glBufferSubData");
    _DAT_14ca7f510 = wglGetProcAddress("glGetBufferSubData");
    _DAT_14ca7f518 = wglGetProcAddress("glMapBuffer");
    DAT_14ca7fe10 = wglGetProcAddress("glUnmapBuffer");
    _DAT_14ca7f520 = wglGetProcAddress("glGetBufferParameteriv");
    _DAT_14ca7f528 = wglGetProcAddress("glGetBufferPointerv");
    DAT_14ca7fc38 = wglGetProcAddress("glBlendEquationSeparate");
    DAT_14ca7fec8 = wglGetProcAddress("glDrawBuffers");
    DAT_14ca7fc10 = wglGetProcAddress("glStencilOpSeparate");
    DAT_14ca7fc08 = wglGetProcAddress("glStencilFuncSeparate");
    _DAT_14ca7f530 = wglGetProcAddress("glStencilMaskSeparate");
    DAT_14ca7ff10 = wglGetProcAddress("glAttachShader");
    _DAT_14ca7f538 = wglGetProcAddress("glBindAttribLocation");
    _DAT_14ca7f540 = wglGetProcAddress("glBindFragDataLocation");
    DAT_14ca7fce8 = wglGetProcAddress("glCompileShader");
    DAT_14ca7ff08 = wglGetProcAddress("glCreateProgram");
    DAT_14ca7fed0 = wglGetProcAddress("glCreateShader");
    DAT_14ca7ff28 = wglGetProcAddress("glDeleteProgram");
    DAT_14ca7ff30 = wglGetProcAddress("glDeleteShader");
    _DAT_14ca7f548 = wglGetProcAddress("glDetachShader");
    DAT_14ca7fc58 = wglGetProcAddress("glDisableVertexAttribArray");
    DAT_14ca7fc50 = wglGetProcAddress("glEnableVertexAttribArray");
    _DAT_14ca7f550 = wglGetProcAddress("glGetActiveAttrib");
    _DAT_14ca7f558 = wglGetProcAddress("glGetActiveUniform");
    _DAT_14ca7f560 = wglGetProcAddress("glGetAttachedShaders");
    _DAT_14ca7f568 = wglGetProcAddress("glGetAttribLocation");
    DAT_14ca7fba0 = wglGetProcAddress("glGetProgramiv");
    DAT_14ca7ff20 = wglGetProcAddress("glGetProgramInfoLog");
    DAT_14ca7fed8 = wglGetProcAddress("glGetShaderiv");
    DAT_14ca7fee0 = wglGetProcAddress("glGetShaderInfoLog");
    _DAT_14ca7f570 = wglGetProcAddress("glGetShaderSource");
    DAT_14ca7fcf0 = wglGetProcAddress("glGetUniformLocation");
    DAT_14ca7fef8 = wglGetProcAddress("glGetUniformBlockIndex");
    _DAT_14ca7f578 = wglGetProcAddress("glGetUniformfv");
    _DAT_14ca7f580 = wglGetProcAddress("glGetUniformiv");
    _DAT_14ca7f588 = wglGetProcAddress("glGetVertexAttribdv");
    _DAT_14ca7f590 = wglGetProcAddress("glGetVertexAttribfv");
    _DAT_14ca7f598 = wglGetProcAddress("glGetVertexAttribiv");
    _DAT_14ca7f5a0 = wglGetProcAddress("glGetVertexAttribPointerv");
    _DAT_14ca7f5a8 = wglGetProcAddress("glIsProgram");
    _DAT_14ca7f5b0 = wglGetProcAddress("glIsShader");
    DAT_14ca7fd00 = wglGetProcAddress("glLinkProgram");
    DAT_14ca7fce0 = wglGetProcAddress("glShaderSource");
    DAT_14ca7fe18 = wglGetProcAddress("glUseProgram");
    _DAT_14ca7f5b8 = wglGetProcAddress("glUniform1f");
    _DAT_14ca7f5c0 = wglGetProcAddress("glUniform2f");
    _DAT_14ca7f5c8 = wglGetProcAddress("glUniform3f");
    _DAT_14ca7f5d0 = wglGetProcAddress("glUniform4f");
    DAT_14ca7fef0 = wglGetProcAddress("glUniform1i");
    _DAT_14ca7f5d8 = wglGetProcAddress("glUniform2i");
    _DAT_14ca7f5e0 = wglGetProcAddress("glUniform3i");
    _DAT_14ca7f5e8 = wglGetProcAddress("glUniform4i");
    _DAT_14ca7f5f0 = wglGetProcAddress("glUniform1fv");
    _DAT_14ca7f5f8 = wglGetProcAddress("glUniform2fv");
    _DAT_14ca7f600 = wglGetProcAddress("glUniform3fv");
    _DAT_14ca7ff38 = wglGetProcAddress("glUniform4fv");
    _DAT_14ca7f608 = wglGetProcAddress("glUniform1iv");
    _DAT_14ca7f610 = wglGetProcAddress("glUniform2iv");
    _DAT_14ca7f618 = wglGetProcAddress("glUniform3iv");
    _DAT_14ca7ff40 = wglGetProcAddress("glUniform4iv");
    _DAT_14ca7f620 = wglGetProcAddress("glUniform1uiv");
    _DAT_14ca7f628 = wglGetProcAddress("glUniform2uiv");
    _DAT_14ca7f630 = wglGetProcAddress("glUniform3uiv");
    _DAT_14ca7ff48 = wglGetProcAddress("glUniform4uiv");
    DAT_14ca7ff00 = wglGetProcAddress("glUniformBlockBinding");
    _DAT_14ca7f638 = wglGetProcAddress("glUniformMatrix2fv");
    _DAT_14ca7f640 = wglGetProcAddress("glUniformMatrix3fv");
    _DAT_14ca7f648 = wglGetProcAddress("glUniformMatrix4fv");
    _DAT_14ca7f650 = wglGetProcAddress("glValidateProgram");
    _DAT_14ca7f658 = wglGetProcAddress("glVertexAttrib1d");
    _DAT_14ca7f660 = wglGetProcAddress("glVertexAttrib1dv");
    _DAT_14ca7f668 = wglGetProcAddress("glVertexAttrib1f");
    _DAT_14ca7f670 = wglGetProcAddress("glVertexAttrib1fv");
    _DAT_14ca7f678 = wglGetProcAddress("glVertexAttrib1s");
    _DAT_14ca7f680 = wglGetProcAddress("glVertexAttrib1sv");
    _DAT_14ca7f688 = wglGetProcAddress("glVertexAttrib2d");
    _DAT_14ca7f690 = wglGetProcAddress("glVertexAttrib2dv");
    _DAT_14ca7f698 = wglGetProcAddress("glVertexAttrib2f");
    _DAT_14ca7f6a0 = wglGetProcAddress("glVertexAttrib2fv");
    _DAT_14ca7f6a8 = wglGetProcAddress("glVertexAttrib2s");
    _DAT_14ca7f6b0 = wglGetProcAddress("glVertexAttrib2sv");
    _DAT_14ca7f6b8 = wglGetProcAddress("glVertexAttrib3d");
    _DAT_14ca7f6c0 = wglGetProcAddress("glVertexAttrib3dv");
    _DAT_14ca7f6c8 = wglGetProcAddress("glVertexAttrib3f");
    _DAT_14ca7f6d0 = wglGetProcAddress("glVertexAttrib3fv");
    _DAT_14ca7f6d8 = wglGetProcAddress("glVertexAttrib3s");
    _DAT_14ca7f6e0 = wglGetProcAddress("glVertexAttrib3sv");
    _DAT_14ca7f6e8 = wglGetProcAddress("glVertexAttrib4Nbv");
    _DAT_14ca7f6f0 = wglGetProcAddress("glVertexAttrib4Niv");
    _DAT_14ca7f6f8 = wglGetProcAddress("glVertexAttrib4Nsv");
    _DAT_14ca7f700 = wglGetProcAddress("glVertexAttrib4Nub");
    _DAT_14ca7f708 = wglGetProcAddress("glVertexAttrib4Nubv");
    _DAT_14ca7f710 = wglGetProcAddress("glVertexAttrib4Nuiv");
    _DAT_14ca7f718 = wglGetProcAddress("glVertexAttrib4Nusv");
    _DAT_14ca7f720 = wglGetProcAddress("glVertexAttrib4bv");
    _DAT_14ca7f728 = wglGetProcAddress("glVertexAttrib4d");
    _DAT_14ca7f730 = wglGetProcAddress("glVertexAttrib4dv");
    _DAT_14ca7f738 = wglGetProcAddress("glVertexAttrib4f");
    DAT_14ca7fc60 = wglGetProcAddress("glVertexAttrib4fv");
    _DAT_14ca7f740 = wglGetProcAddress("glVertexAttrib4iv");
    _DAT_14ca7f748 = wglGetProcAddress("glVertexAttrib4s");
    _DAT_14ca7f750 = wglGetProcAddress("glVertexAttrib4sv");
    _DAT_14ca7f758 = wglGetProcAddress("glVertexAttrib4ubv");
    _DAT_14ca7f760 = wglGetProcAddress("glVertexAttrib4uiv");
    _DAT_14ca7f768 = wglGetProcAddress("glVertexAttrib4usv");
    _DAT_14ca7f770 = wglGetProcAddress("glVertexAttribI4iv");
    _DAT_14ca7f778 = wglGetProcAddress("glVertexAttribI4uiv");
    _DAT_14ca7f780 = wglGetProcAddress("glVertexAttribI4sv");
    _DAT_14ca7f788 = wglGetProcAddress("glVertexAttribI4usv");
    _DAT_14ca7f790 = wglGetProcAddress("glVertexAttribI4bv");
    _DAT_14ca7f798 = wglGetProcAddress("glVertexAttribI4ubv");
    _DAT_14ca7f7a0 = wglGetProcAddress("glVertexAttribPointer");
    _DAT_14ca7f7a8 = wglGetProcAddress("glVertexAttribIPointer");
    _DAT_14ca7f7b0 = wglGetProcAddress("glUniformMatrix2x3fv");
    _DAT_14ca7f7b8 = wglGetProcAddress("glUniformMatrix3x2fv");
    _DAT_14ca7f7c0 = wglGetProcAddress("glUniformMatrix2x4fv");
    _DAT_14ca7f7c8 = wglGetProcAddress("glUniformMatrix4x2fv");
    _DAT_14ca7f7d0 = wglGetProcAddress("glUniformMatrix3x4fv");
    _DAT_14ca7f7d8 = wglGetProcAddress("glUniformMatrix4x3fv");
    _DAT_14ca7f7e0 = wglGetProcAddress("glIsRenderbuffer");
    DAT_14ca7fcc0 = wglGetProcAddress("glBindRenderbuffer");
    DAT_14ca7fcd8 = wglGetProcAddress("glDeleteRenderbuffers");
    DAT_14ca7fcb8 = wglGetProcAddress("glGenRenderbuffers");
    DAT_14ca7fcc8 = wglGetProcAddress("glRenderbufferStorage");
    _DAT_14ca7f7e8 = wglGetProcAddress("glGetRenderbufferParameteriv");
    _DAT_14ca7f7f0 = wglGetProcAddress("glIsFramebuffer");
    DAT_14ca7fb60 = wglGetProcAddress("glBindFramebuffer");
    DAT_14ca7fb98 = wglGetProcAddress("glDeleteFramebuffers");
    DAT_14ca7fb58 = wglGetProcAddress("glGenFramebuffers");
    DAT_14ca7fb88 = wglGetProcAddress("glCheckFramebufferStatus");
    _DAT_14ca7f7f8 = wglGetProcAddress("glFramebufferTexture1D");
    DAT_14ca7fea8 = wglGetProcAddress("glFramebufferTexture2D");
    DAT_14ca7feb0 = wglGetProcAddress("glFramebufferTexture3D");
    DAT_14ca7fb80 = wglGetProcAddress("glFramebufferTexture");
    DAT_14ca7fcb0 = wglGetProcAddress("glFramebufferRenderbuffer");
    _DAT_14ca7f800 = wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
    _DAT_14ca7f808 = wglGetProcAddress("glGenerateMipmap");
    DAT_14ca7fec0 = wglGetProcAddress("glBlitFramebuffer");
    _DAT_14ca7f810 = wglGetProcAddress("glRenderbufferStorageMultisample");
    DAT_14ca7feb8 = wglGetProcAddress("glFramebufferTextureLayer");
    DAT_14ca7fd18 = wglGetProcAddress("glMapBufferRange");
    _DAT_14ca7f818 = wglGetProcAddress("glFlushMappedBufferRange");
    _DAT_14ca7f820 = wglGetProcAddress("glVertexAttribDivisor");
    DAT_14ca7fdb0 = wglGetProcAddress("glDrawArraysInstanced");
    DAT_14ca7fdc8 = wglGetProcAddress("glDrawElementsInstanced");
    DAT_14ca7fe38 = wglGetProcAddress("glGetStringi");
    DAT_14ca7f828 = wglGetProcAddress("glGenVertexArrays");
    DAT_14ca7f830 = wglGetProcAddress("glDeleteVertexArrays");
    DAT_14ca7f838 = wglGetProcAddress("glBindVertexArray");
    DAT_14ca7fd20 = wglGetProcAddress("glCopyBufferSubData");
    DAT_14ca7f840 = wglGetProcAddress("glTexBuffer");
    DAT_14ca7f848 = wglGetProcAddress("glTexBufferRange");
    _DAT_14ca7f850 = wglGetProcAddress("glTexImage2DMultisample");
    DAT_14ca7fe68 = wglGetProcAddress("glQueryCounter");
    _DAT_14ca7f858 = wglGetProcAddress("glIsSync");
    DAT_14ca7fe80 = wglGetProcAddress("glDeleteSync");
    DAT_14ca7fe78 = wglGetProcAddress("glGetQueryObjectui64v");
    DAT_14ca7fe88 = wglGetProcAddress("glFenceSync");
    _DAT_14ca7f860 = wglGetProcAddress("glGetSynciv");
    DAT_14ca7fe90 = wglGetProcAddress("glClientWaitSync");
    DAT_14ca7fee8 = wglGetProcAddress("glBindBufferRange");
    DAT_14ca7fcf8 = wglGetProcAddress("glGetProgramResourceIndex");
    DAT_14ca7fca8 = wglGetProcAddress("glClipControl");
    _DAT_14ca7f868 = wglGetProcAddress("glDebugMessageCallbackARB");
    _DAT_14ca7f870 = wglGetProcAddress("glDebugMessageControlARB");
    _DAT_14ca7f878 = wglGetProcAddress("glDebugMessageCallbackAMD");
    _DAT_14ca7f880 = wglGetProcAddress("glDebugMessageEnableAMD");
    _DAT_14ca7f888 = wglGetProcAddress("glGetActiveUniformsiv");
    _DAT_14ca7f890 = wglGetProcAddress("glGetVertexAttribIuiv");
    _DAT_14ca7f898 = wglGetProcAddress("glGetActiveUniformName");
    _DAT_14ca7f8a0 = wglGetProcAddress("glGetUniformuiv");
    _DAT_14ca7f8a8 = wglGetProcAddress("glGetActiveUniformBlockiv");
    _DAT_14ca7f8b0 = wglGetProcAddress("glGetBufferParameteri64v");
    _DAT_14ca7f8b8 = wglGetProcAddress("glGetActiveUniformBlockName");
    _DAT_14ca7f8c0 = wglGetProcAddress("glGetSamplerParameterfv");
    _DAT_14ca7f8c8 = wglGetProcAddress("glGetSamplerParameteriv");
    DAT_14ca7fdf8 = wglGetProcAddress("glDispatchCompute");
    DAT_14ca7fe00 = wglGetProcAddress("glDispatchComputeIndirect");
    DAT_14ca7fd48 = wglGetProcAddress("glBindImageTexture");
    DAT_14ca7fdf0 = wglGetProcAddress("glMemoryBarrier");
    DAT_14ca7fd78 = wglGetProcAddress("glBlendEquationi");
    DAT_14ca7fd68 = wglGetProcAddress("glBlendEquationSeparatei");
    DAT_14ca7fd70 = wglGetProcAddress("glBlendFunci");
    DAT_14ca7fd60 = wglGetProcAddress("glBlendFuncSeparatei");
    _DAT_14ca7f8d0 = wglGetProcAddress("glBlendEquationSeparateiARB");
    _DAT_14ca7f8d8 = wglGetProcAddress("glBlendEquationiARB");
    _DAT_14ca7f8e0 = wglGetProcAddress("glBlendFuncSeparateiARB");
    _DAT_14ca7f8e8 = wglGetProcAddress("glBlendFunciARB");
    _DAT_14ca7f8f0 = wglGetProcAddress("glClearBufferData");
    _DAT_14ca7f8f8 = wglGetProcAddress("glClearBufferSubData");
    _DAT_14ca7f900 = wglGetProcAddress("glPushDebugGroup");
    _DAT_14ca7f908 = wglGetProcAddress("glPopDebugGroup");
    _DAT_14ca7f910 = wglGetProcAddress("glObjectLabel");
    _DAT_14ca7f918 = wglGetProcAddress("glObjectPtrLabel");
    _DAT_14ca7f920 = wglGetProcAddress("glPatchParameteri");
    DAT_14ca7fda0 = wglGetProcAddress("glBindVertexBuffer");
    DAT_14ca7fd90 = wglGetProcAddress("glVertexAttribFormat");
    DAT_14ca7fd88 = wglGetProcAddress("glVertexAttribIFormat");
    DAT_14ca7fd98 = wglGetProcAddress("glVertexAttribBinding");
    DAT_14ca7fda8 = wglGetProcAddress("glVertexBindingDivisor");
    DAT_14ca7f928 = wglGetProcAddress("glCopyImageSubData");
    _DAT_14ca7f930 = wglGetProcAddress("glTexStorage1D");
    DAT_14ca7f938 = wglGetProcAddress("glTexStorage2D");
    DAT_14ca7f940 = wglGetProcAddress("glTexStorage3D");
    DAT_14ca7fd10 = wglGetProcAddress("glBufferStorage");
    _DAT_14ca7f948 = wglGetProcAddress("glTextureView");
    DAT_14ca7f950 = wglGetProcAddress("glTexStorage2DMultisample");
    DAT_14ca7fdc0 = wglGetProcAddress("glDrawElementsIndirect");
    DAT_14ca7fdb8 = wglGetProcAddress("glDrawArraysIndirect");
    DAT_14ca7fe08 = wglGetProcAddress("glDepthBoundsEXT");
    _DAT_14ca7f958 = wglGetProcAddress("glGetTextureHandleARB");
    _DAT_14ca7f960 = wglGetProcAddress("glGetTextureSamplerHandleARB");
    _DAT_14ca7f968 = wglGetProcAddress("glMakeTextureHandleResidentARB");
    _DAT_14ca7f970 = wglGetProcAddress("glUniformHandleui64ARB");
    _DAT_14ca7f978 = wglGetProcAddress("glMakeTextureHandleNonResidentARB");
    _DAT_14ca7f980 = wglGetProcAddress("glPushDebugGroupKHR");
    _DAT_14ca7f988 = wglGetProcAddress("glPopDebugGroupKHR");
    _DAT_14ca7f990 = wglGetProcAddress("glObjectLabelKHR");
    _DAT_14ca7f998 = wglGetProcAddress("glObjectPtrLabelKHR");
    _DAT_14ca7f9a0 = wglGetProcAddress("glDebugMessageCallbackKHR");
    _DAT_14ca7f9a8 = wglGetProcAddress("glDebugMessageControlKHR");
    _DAT_14ca7f9b0 = wglGetProcAddress("glPatchParameteriEXT");
    _DAT_14ca7f9b8 = wglGetProcAddress("glTextureViewEXT");
    _DAT_14ca7f9c0 = wglGetProcAddress("glBlendEquationiEXT");
    _DAT_14ca7f9c8 = wglGetProcAddress("glBlendEquationSeparateiEXT");
    _DAT_14ca7f9d0 = wglGetProcAddress("glBlendFunciEXT");
    _DAT_14ca7f9d8 = wglGetProcAddress("glBlendFuncSeparateiEXT");
    _DAT_14ca7f9e0 = wglGetProcAddress("glColorMaskiEXT");
    _DAT_14ca7f9e8 = wglGetProcAddress("glDisableiEXT");
    _DAT_14ca7f9f0 = wglGetProcAddress("glEnableiEXT");
    _DAT_14ca7f9f8 = wglGetProcAddress("glFramebufferTextureEXT");
    _DAT_14ca7fa00 = wglGetProcAddress("glTexBufferEXT");
    _DAT_14ca7fa08 = wglGetProcAddress("glTexBufferRangeEXT");
    _DAT_14ca7fa10 = wglGetProcAddress("glDepthRangef");
    _DAT_14ca7fa18 = wglGetProcAddress("glClearDepthf");
    _DAT_14ca7fa20 = wglGetProcAddress("glGetShaderPrecisionFormat");
    DAT_14ca7ff18 = wglGetProcAddress("glProgramParameteri");
    _DAT_14ca7fa28 = wglGetProcAddress("glUseProgramStages");
    _DAT_14ca7fa30 = wglGetProcAddress("glBindProgramPipeline");
    _DAT_14ca7fa38 = wglGetProcAddress("glDeleteProgramPipelines");
    _DAT_14ca7fa40 = wglGetProcAddress("glGenProgramPipelines");
    _DAT_14ca7fa48 = wglGetProcAddress("glProgramUniform1i");
    _DAT_14ca7fa50 = wglGetProcAddress("glProgramUniform4iv");
    _DAT_14ca7fa58 = wglGetProcAddress("glProgramUniform4fv");
    _DAT_14ca7fa60 = wglGetProcAddress("glProgramUniform4uiv");
    _DAT_14ca7fa68 = wglGetProcAddress("glGetProgramPipelineiv");
    _DAT_14ca7fa70 = wglGetProcAddress("glValidateProgramPipeline");
    _DAT_14ca7fa78 = wglGetProcAddress("glGetProgramPipelineInfoLog");
    _DAT_14ca7fa80 = wglGetProcAddress("glIsProgramPipeline");
    DAT_14ca7fd08 = wglGetProcAddress("glGetProgramBinary");
    DAT_14ca7fe40 = wglGetProcAddress("glProgramBinary");
  }
  if (local_68 != (HGLRC)0x0) {
    BVar2 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (BVar2 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
    wglDeleteContext(local_68);
  }
  ReleaseDC(local_78,local_70);
  BVar2 = DestroyWindow(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),DAT_14ca7faa0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d5541 FUN_1431d5541 body=388 status=ok
// SIG undefined FUN_1431d5541(void)

void FUN_1431d5541(undefined8 *param_1)

{
  HWND hWnd;
  HDC pHVar1;
  undefined1 auStackY_c8 [32];
  int local_64;
  WNDCLASSW local_60;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStackY_c8;
  if (DAT_14ca7fb30 == '\0') {
    DAT_14ca7fb30 = '\x01';
    local_60._0_8_ = 0x20;
    local_60.lpfnWndProc = (WNDPROC)&DAT_1431d5908;
    local_60.cbClsExtra = 0;
    local_60.cbWndExtra = 0;
    local_60.hInstance = (HINSTANCE)0x0;
    local_60.hIcon = (HICON)0x0;
    local_60.hCursor = (HCURSOR)0x0;
    local_60.hbrBackground = (HBRUSH)&DAT_00000007;
    local_60.lpszMenuName = (LPCWSTR)0x0;
    local_60.lpszClassName = L"DummyGLWindow";
    RegisterClassW(&local_60);
  }
  local_60._0_8_ = local_60._0_8_ & 0xffffffff00000000;
  local_64 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"WinX=",&local_60);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"WinY=",&local_64);
  hWnd = CreateWindowExW(0x100,L"DummyGLWindow",(LPCWSTR)0x0,0x80000000,local_60.style,local_64,1,1,
                         (HWND)0x0,(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0);
  *param_1 = hWnd;
  *(undefined1 *)(param_1 + 3) = 1;
  pHVar1 = GetDC(hWnd);
  param_1[1] = pHVar1;
  FUN_1431d3a42(pHVar1);
  if ((local_18 ^ (ulonglong)auStackY_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d56da FUN_1431d56da body=129 status=ok
// SIG undefined FUN_1431d56da(void)

void FUN_1431d56da(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x30) = *(undefined4 *)(lVar3 + 0x38);
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x58) = *(undefined4 *)(lVar3 + 0x20);
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x5e) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x34) = *(undefined4 *)(lVar2 + 0x1c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x38) = 0x4000;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40) = 0;
  puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x50);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50) = 0;
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x5c) = 0;
  return;
}



// FUNCTION 1431d575c FUN_1431d575c body=86 status=ok
// SIG undefined FUN_1431d575c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1431d575c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a374a10;
  LOCK();
  _DAT_14ca84ee8 = _DAT_14ca84ee8 + (longlong)*(int *)((longlong)param_1 + 0x1c) * -4;
  UNLOCK();
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431d57b2 FUN_1431d57b2 body=316 status=ok
// SIG undefined FUN_1431d57b2(void)

void FUN_1431d57b2(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *_Dst;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  iVar4 = DAT_14c760d28;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  lVar7 = (longlong)(int)DAT_14c760d28;
  if (lVar7 < 0x3ff) {
    _Dst = &DAT_14ca7b3e0 + lVar7;
    uVar6 = DAT_14c760d28 + 1;
  }
  else {
    iVar5 = 0x400 - DAT_14c760d28;
    _Dst = &local_34;
    memcpy(_Dst,&DAT_14ca7b3e0 + lVar7,(longlong)iVar5 * 4);
    (*DAT_14ca7fc70)(0x400,&DAT_14ca7b3e0);
    uVar6 = iVar4 - 0x3ff;
    memcpy(&local_34 + iVar5,&DAT_14ca7b3e0,(ulonglong)uVar6 * 4);
  }
  uVar2 = *_Dst;
  DAT_14c760d28 = uVar6;
  FUN_1473e997e(uVar2);
  (*DAT_14ca7fc78)(0x8a11,*(undefined4 *)(param_1 + 0x18),0,
                   (*(byte *)(param_1 + 0x30) ^ 1) * 4 + 0x88e0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  local_40 = *(longlong *)(param_1 + 0x28);
  local_48 = *(undefined1 *)(param_1 + 0x30);
  if (local_40 != 0) {
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
  }
  FUN_1431d1c12(uVar3,uVar2,*(undefined4 *)(param_1 + 0x18),&local_40);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d5910 FUN_1431d5910 body=233 status=ok
// SIG undefined FUN_1431d5910(void)

void FUN_1431d5910(longlong *param_1)

{
  (*DAT_14ca7f458)(1,*param_1 + 0x10);
  (*DAT_14ca7f460)(*(undefined4 *)(*param_1 + 0x10),0x2802,*(undefined4 *)(*param_1 + 0x14));
  (*DAT_14ca7f460)(*(undefined4 *)(*param_1 + 0x10),0x2803,*(undefined4 *)(*param_1 + 0x18));
  (*DAT_14ca7f460)(*(undefined4 *)(*param_1 + 0x10),0x8072,*(undefined4 *)(*param_1 + 0x1c));
  (*DAT_14ca7f460)(*(undefined4 *)(*param_1 + 0x10),0x8501,*(undefined4 *)(*param_1 + 0x20));
  (*DAT_14ca7f460)(*(undefined4 *)(*param_1 + 0x10),0x2801,*(undefined4 *)(*param_1 + 0x28));
  (*DAT_14ca7f460)(*(undefined4 *)(*param_1 + 0x10),0x2800,*(undefined4 *)(*param_1 + 0x24));
  if (DAT_14ca7a3d0 == '\x01') {
    (*DAT_14ca7f460)(*(undefined4 *)(*param_1 + 0x10),0x84fe,*(undefined4 *)(*param_1 + 0x2c));
  }
  (*DAT_14ca7f460)(*(undefined4 *)(*param_1 + 0x10),0x884c,*(undefined4 *)(*param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001431d59f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca7f460)(*(undefined4 *)(*param_1 + 0x10),0x884d,*(undefined4 *)(*param_1 + 0x34));
  return;
}



// FUNCTION 1431d5a04 FUN_1431d5a04 body=52 status=ok
// SIG undefined FUN_1431d5a04(void)

void FUN_1431d5a04(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if ((*(longlong *)(lVar2 + 0x78) != 0) &&
     ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
    FUN_1431cefae(lVar2,0);
  }
  *(undefined4 *)(lVar1 + 0x68) = *(undefined4 *)(lVar2 + 0x68);
  return;
}



// FUNCTION 1431d5a38 FUN_1431d5a38 body=59 status=ok
// SIG undefined FUN_1431d5a38(void)

void FUN_1431d5a38(longlong param_1)

{
  FUN_1473fa600(DAT_14ca7a3c8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 1431d5a74 FUN_1431d5a74 body=162 status=ok
// SIG undefined FUN_1431d5a74(void)

bool FUN_1431d5a74(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 param_5,undefined4 *param_6,undefined8 param_7,longlong *param_8,
                  undefined4 *param_9)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_8;
  if (lVar1 != 0) {
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 0x10) == '\x01') {
      (*DAT_14ca7c4e0)(*param_2,*param_6,0,0,*param_3,*param_4,*(undefined4 *)(lVar2 + 8),*param_9,
                       lVar1);
    }
    else {
      (*DAT_14ca7c4f0)(*param_2,*param_6,0,0,*param_3,*param_4,*(undefined4 *)(lVar2 + 8),
                       *(undefined4 *)(lVar2 + 0xc),lVar1);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 1431d5b16 FUN_1431d5b16 body=207 status=ok
// SIG undefined FUN_1431d5b16(void)

bool FUN_1431d5b16(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,longlong *param_8,
                  undefined4 *param_9)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_8;
  if (lVar1 != 0) {
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 0x10) == '\x01') {
      (*DAT_14ca7f4b0)(*param_2,*param_6,0,0,*param_7,*param_3,*param_4,*param_5,
                       *(undefined4 *)(lVar2 + 8),*param_9,lVar1);
    }
    else {
      (*DAT_14ca7f490)(*param_2,*param_6,0,0,*param_7,*param_3,*param_4,*param_5,
                       *(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc),lVar1);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 1431d5be6 FUN_1431d5be6 body=183 status=ok
// SIG undefined FUN_1431d5be6(void)

void FUN_1431d5be6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0x28) & 4) != 0)) {
      FUN_1400020a8();
      iVar2 = *(int *)(param_1 + 0x20);
    }
    lVar1 = DAT_14ca79650;
    if (*(int *)(DAT_14ca79650 + 0x1464c) == iVar2) {
      *(undefined4 *)(DAT_14ca79650 + 0x1464c) = 0xffffffff;
    }
    if (*(int *)(lVar1 + 0x14d1c) == iVar2) {
      *(undefined4 *)(lVar1 + 0x14d1c) = 0xffffffff;
    }
    (*DAT_14ca7fbb0)(1,(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    LOCK();
    DAT_14ca84ee0 = DAT_14ca84ee0 - (ulonglong)*(uint *)(param_1 + 0x10);
    UNLOCK();
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x100000;
  return;
}



// FUNCTION 1431d5c9e FUN_1431d5c9e body=61 status=ok
// SIG undefined FUN_1431d5c9e(void)

void FUN_1431d5c9e(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1;
  if (iVar2 < iVar1) {
    iVar3 = iVar2;
  }
  FUN_1431cfff4(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),iVar3,iVar2 - iVar3,
                iVar1 - iVar3);
  LOCK();
  **(int **)(param_1 + 0x28) = **(int **)(param_1 + 0x28) + -1;
  UNLOCK();
  return;
}



// FUNCTION 1431d5cdc FUN_1431d5cdc body=555 status=ok
// SIG undefined FUN_1431d5cdc(void)

void FUN_1431d5cdc(longlong *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  HGLRC pHVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  lVar4 = *param_1;
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 0x30))();
    plVar9 = (longlong *)param_1[1];
  }
  lVar6 = (**(code **)(*plVar9 + 8))();
  bVar1 = *(byte *)(lVar6 + 0x33);
  lVar6 = *(longlong *)(lVar4 + 0x14fa0);
  if (lVar6 == 0) {
    lVar8 = *(longlong *)(lVar4 + 0x15008);
    pHVar7 = wglGetCurrentContext();
    lVar6 = lVar4 + 0x14200;
    if (pHVar7 == *(HGLRC *)(lVar8 + 0x40)) {
      lVar6 = lVar4 + 0x148d0;
    }
    *(longlong *)(lVar4 + 0x14fa0) = lVar6;
  }
  uVar10 = (ulonglong)(((uint)bVar1 * 2 + (uint)bVar1) * 0x10);
  lVar8 = (**(code **)(*plVar5 + 8))(plVar5);
  uVar2 = *(undefined1 *)(lVar8 + 0x30);
  if ((plVar5[0xf] != 0) && ((*(byte *)(plVar5[0xf] + 0x10) & 1) == 0)) {
    FUN_1431cefae(plVar5,1);
  }
  lVar8 = (longlong)DAT_14c760d20 + -1;
  if ((*(int *)(*(longlong *)(lVar6 + 8) + 0x10 + lVar8 * 0x28) != *(int *)((longlong)plVar5 + 0x6c)
      ) || (*(int *)(*(longlong *)(lVar6 + 8) + 0x14 + lVar8 * 0x28) != (int)plVar5[0xd])) {
    FUN_1473e5556(lVar4,lVar6,lVar8,*(int *)((longlong)plVar5 + 0x6c),(int)plVar5[0xd],0,uVar2);
  }
  lVar4 = (ulonglong)bVar1 * 0x14;
  if (*(int *)(lVar6 + 0x44c) != 0) {
    (*DAT_14ca7fba8)(0x88ec,0);
    *(undefined4 *)(lVar6 + 0x44c) = 0;
  }
  (*DAT_14ca7fbe8)(0xcf2,(ulonglong)*(uint *)((longlong)param_1 + 0x2c) /
                         (ulonglong)*(uint *)((longlong)&DAT_14c873428 + uVar10));
  (*DAT_14ca7fbe8)(0xcf5);
  if ((&DAT_14ca79c50)[lVar4] == '\x01') {
    uVar3 = *(uint *)((longlong)&DAT_14c873420 + uVar10);
    (*DAT_14ca7c4e0)(*(undefined4 *)((longlong)plVar5 + 0x6c),(int)param_1[2],
                     *(undefined4 *)((longlong)param_1 + 0x14),(int)param_1[3],
                     *(undefined4 *)((longlong)param_1 + 0x24),(int)param_1[5],
                     *(undefined4 *)(&DAT_14ca79c48 + lVar4),
                     (((uVar3 + (int)param_1[5]) - 1) / uVar3) * *(int *)((longlong)param_1 + 0x2c),
                     param_1[6]);
  }
  else {
    (*DAT_14ca7c4f0)(*(undefined4 *)((longlong)plVar5 + 0x6c),(int)param_1[2],
                     *(undefined4 *)((longlong)param_1 + 0x14),(int)param_1[3],
                     *(undefined4 *)((longlong)param_1 + 0x24),(int)param_1[5],
                     *(undefined4 *)(&DAT_14ca79c48 + lVar4),*(undefined4 *)(&DAT_14ca79c4c + lVar4)
                     ,param_1[6]);
  }
  (*DAT_14ca7fbe8)(0xcf5,4);
  (*DAT_14ca7fbe8)(0xcf2,0);
  if ((char)param_1[7] == '\x01') {
    FUN_1400020a8(param_1[6]);
    return;
  }
  return;
}



// FUNCTION 1431d5f12 FUN_1431d5f12 body=607 status=ok
// SIG undefined FUN_1431d5f12(void)

void FUN_1431d5f12(longlong *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  longlong *plVar3;
  HGLRC pHVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar6 = *param_1;
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 0x30))();
  }
  lVar8 = *(longlong *)(lVar6 + 0x14fa0);
  if (lVar8 == 0) {
    lVar5 = *(longlong *)(lVar6 + 0x15008);
    pHVar4 = wglGetCurrentContext();
    lVar8 = lVar6 + 0x14200;
    if (pHVar4 == *(HGLRC *)(lVar5 + 0x40)) {
      lVar8 = lVar6 + 0x148d0;
    }
    *(longlong *)(lVar6 + 0x14fa0) = lVar8;
  }
  lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
  uVar1 = *(undefined1 *)(lVar5 + 0x30);
  if ((plVar3[0xf] != 0) && ((*(byte *)(plVar3[0xf] + 0x10) & 1) == 0)) {
    FUN_1431cefae(plVar3,1);
  }
  lVar5 = (longlong)DAT_14c760d20 + -1;
  if ((*(int *)(*(longlong *)(lVar8 + 8) + 0x10 + lVar5 * 0x28) != *(int *)((longlong)plVar3 + 0x6c)
      ) || (*(int *)(*(longlong *)(lVar8 + 8) + 0x14 + lVar5 * 0x28) != (int)plVar3[0xd])) {
    FUN_1473e5556(lVar6,lVar8,lVar5,*(int *)((longlong)plVar3 + 0x6c),(int)plVar3[0xd],0,uVar1);
  }
  if (*(int *)(lVar8 + 0x44c) != 0) {
    (*DAT_14ca7fba8)(0x88ec,0);
    *(undefined4 *)(lVar8 + 0x44c) = 0;
  }
  lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
  bVar2 = *(byte *)(lVar6 + 0x33);
  lVar6 = (ulonglong)bVar2 * 0x14;
  (*DAT_14ca7fbe8)(0xcf5,1);
  puVar7 = (uint *)(**(code **)(*plVar3 + 8))(plVar3);
  if ((&DAT_14ca79c50)[lVar6] == '\x01') {
    (*DAT_14ca7f4b0)(*(undefined4 *)((longlong)plVar3 + 0x6c),(int)param_1[2],
                     *(undefined4 *)((longlong)param_1 + 0x14),(int)param_1[3],
                     *(undefined4 *)((longlong)param_1 + 0x1c),
                     *(undefined4 *)((longlong)param_1 + 0x2c),(int)param_1[6],
                     *(int *)((longlong)param_1 + 0x34),
                     *(undefined4 *)(&DAT_14ca79c40 + (ulonglong)(*puVar7 >> 2 & 4) + lVar6),
                     *(int *)((longlong)param_1 + 0x3c) * *(int *)((longlong)param_1 + 0x34),
                     param_1[8]);
  }
  else {
    uVar9 = (ulonglong)((uint)bVar2 * 0x30);
    (*DAT_14ca7fbe8)(0xcf2,(ulonglong)*(uint *)((longlong)param_1 + 0x2c) /
                           (ulonglong)*(uint *)((longlong)&DAT_14c87341c + uVar9));
    (*DAT_14ca7fbe8)(0x806e,(ulonglong)*(uint *)(param_1 + 6) /
                            (ulonglong)*(uint *)((longlong)&DAT_14c873420 + uVar9));
    (*DAT_14ca7f490)(*(undefined4 *)((longlong)plVar3 + 0x6c),(int)param_1[2],
                     *(undefined4 *)((longlong)param_1 + 0x14),(int)param_1[3],
                     *(undefined4 *)((longlong)param_1 + 0x1c),
                     *(undefined4 *)((longlong)param_1 + 0x2c),(int)param_1[6],
                     *(undefined4 *)((longlong)param_1 + 0x34),
                     *(undefined4 *)(&DAT_14ca79c48 + lVar6),*(undefined4 *)(&DAT_14ca79c4c + lVar6)
                     ,param_1[8]);
  }
  (*DAT_14ca7fbe8)(0xcf5,4);
  (*DAT_14ca7fbe8)(0x806e,0);
  (*DAT_14ca7fbe8)(0xcf2,0);
  if (param_1[9] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1431d617c FUN_1431d617c body=61 status=ok
// SIG undefined FUN_1431d617c(void)

void FUN_1431d617c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1473fbff8(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                        *(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_1 + 0x40));
  **(undefined8 **)(param_1 + 0x18) = uVar1;
  return;
}



// FUNCTION 1431d61ba FUN_1431d61ba body=45 status=ok
// SIG undefined FUN_1431d61ba(void)

void FUN_1431d61ba(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  }
  FUN_1431cfc0a(uVar2,uVar1,0);
  return;
}



// FUNCTION 1431d61e8 FUN_1431d61e8 body=162 status=ok
// SIG undefined FUN_1431d61e8(void)

void FUN_1431d61e8(longlong param_1)

{
  undefined4 uVar1;
  void *_Dst;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_40;
  undefined8 *local_38;
  undefined8 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_28;
  local_28 = 0xffffffffffffffff;
  local_48 = local_1c;
  local_40 = 0;
  _Dst = (void *)FUN_1473fbff8(param_1,*(undefined8 *)(param_1 + 0x30),
                               *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x28));
  memcpy(_Dst,*(void **)(param_1 + 0x10),(ulonglong)*(uint *)(param_1 + 0x20));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))();
  }
  FUN_1431cfc0a(uVar2,uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d628c FUN_1431d628c body=162 status=ok
// SIG undefined FUN_1431d628c(void)

void FUN_1431d628c(longlong param_1)

{
  undefined4 uVar1;
  void *_Dst;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_40;
  undefined8 *local_38;
  undefined8 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_28;
  local_28 = 0xffffffffffffffff;
  local_48 = local_1c;
  local_40 = 0;
  _Dst = (void *)FUN_1473fbff8(param_1,*(undefined8 *)(param_1 + 0x40),
                               *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x38));
  memcpy(_Dst,*(void **)(param_1 + 0x20),(ulonglong)*(uint *)(param_1 + 0x30));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  FUN_1431cfc0a(uVar2,uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d6330 FUN_1431d6330 body=100 status=ok
// SIG undefined FUN_1431d6330(void)

void FUN_1431d6330(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
  }
  uVar6 = FUN_1431cf9b8(uVar5,uVar2,iVar4 + iVar3 * 6,uVar1,uVar6);
  **(undefined8 **)(param_1 + 0x18) = uVar6;
  return;
}



// FUNCTION 1431d6394 FUN_1431d6394 body=59 status=ok
// SIG undefined FUN_1431d6394(void)

void FUN_1431d6394(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  }
  FUN_1431cfc0a(uVar4,uVar1,iVar3 + iVar2 * 6);
  return;
}



// FUNCTION 1431d63d0 FUN_1431d63d0 body=193 status=ok
// SIG undefined FUN_1431d63d0(void)

void FUN_1431d63d0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar3 = *(int *)(param_1 + 0x38);
  if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))();
  }
  local_38 = local_2c;
  _Dst = (void *)FUN_1431cf9b8(uVar4,uVar1,iVar3 + iVar2 * 6,1);
  memcpy(_Dst,*(void **)(param_1 + 0x10),(ulonglong)*(uint *)(param_1 + 0x20));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1431cfc0a(uVar4,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d6492 FUN_1431d6492 body=193 status=ok
// SIG undefined FUN_1431d6492(void)

void FUN_1431d6492(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0x4c);
  iVar3 = *(int *)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  local_38 = local_2c;
  _Dst = (void *)FUN_1431cf9b8(uVar4,uVar1,iVar3 + iVar2 * 6,1);
  memcpy(_Dst,*(void **)(param_1 + 0x20),(ulonglong)*(uint *)(param_1 + 0x30));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1431cfc0a(uVar4,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d6554 FUN_1431d6554 body=84 status=ok
// SIG undefined FUN_1431d6554(void)

void FUN_1431d6554(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
  }
  uVar5 = FUN_1431cf9b8(uVar4,uVar2,uVar3,uVar1,uVar5);
  **(undefined8 **)(param_1 + 0x18) = uVar5;
  return;
}



// FUNCTION 1431d65a8 FUN_1431d65a8 body=50 status=ok
// SIG undefined FUN_1431d65a8(void)

void FUN_1431d65a8(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  }
  FUN_1431cfc0a(uVar3,uVar1,uVar2);
  return;
}



// FUNCTION 1431d65da FUN_1431d65da body=173 status=ok
// SIG undefined FUN_1431d65da(void)

void FUN_1431d65da(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))();
  }
  local_38 = local_2c;
  _Dst = (void *)FUN_1431cf9b8(uVar4,uVar2,uVar3,uVar1);
  memcpy(_Dst,*(void **)(param_1 + 0x10),(ulonglong)*(uint *)(param_1 + 0x20));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1431cfc0a(uVar4,uVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d6688 FUN_1431d6688 body=173 status=ok
// SIG undefined FUN_1431d6688(void)

void FUN_1431d6688(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  local_38 = local_2c;
  _Dst = (void *)FUN_1431cf9b8(uVar4,uVar2,uVar3,uVar1);
  memcpy(_Dst,*(void **)(param_1 + 0x20),(ulonglong)*(uint *)(param_1 + 0x30));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1431cfc0a(uVar4,uVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d6736 FUN_1431d6736 body=108 status=ok
// SIG undefined FUN_1431d6736(void)

void FUN_1431d6736(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar4 = plVar2 + 6;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x30))();
    }
    plVar4 = (longlong *)(lVar3 + 0x60);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
  }
  if (*plVar4 == 0) {
    lVar3 = 0;
  }
  else {
    *(longlong *)(*plVar4 + 0x10) = lVar1 + 0x30;
    lVar3 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x30) = lVar3;
  *(longlong **)(lVar1 + 0x38) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_1473fde4a(lVar1 + 0x28);
  return;
}



// FUNCTION 1431d67a2 FUN_1431d67a2 body=109 status=ok
// SIG undefined FUN_1431d67a2(void)

void FUN_1431d67a2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar2 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar4 = plVar2 + 6;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x30))();
    }
    plVar4 = (longlong *)(lVar3 + 0x60);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
  }
  if (*plVar4 == 0) {
    lVar3 = 0;
  }
  else {
    *(longlong *)(*plVar4 + 0x10) = lVar1 + 0x30;
    lVar3 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x30) = lVar3;
  *(longlong **)(lVar1 + 0x38) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_1473fde4a(lVar1 + 0x28);
  return;
}



// FUNCTION 1431d6810 FUN_1431d6810 body=108 status=ok
// SIG undefined FUN_1431d6810(void)

void FUN_1431d6810(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar4 = plVar2 + 6;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x30))();
    }
    plVar4 = (longlong *)(lVar3 + 0x60);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
  }
  if (*plVar4 == 0) {
    lVar3 = 0;
  }
  else {
    *(longlong *)(*plVar4 + 0x10) = lVar1 + 0x30;
    lVar3 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x30) = lVar3;
  *(longlong **)(lVar1 + 0x38) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_1473fe37e(lVar1 + 0x28);
  return;
}



// FUNCTION 1431d687c FUN_1431d687c body=109 status=ok
// SIG undefined FUN_1431d687c(void)

void FUN_1431d687c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar2 = *(longlong **)(lVar1 + 0x10);
  if (*(byte *)(lVar1 + 0x18) < 2) {
    plVar4 = plVar2 + 6;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x30))();
    }
    plVar4 = (longlong *)(lVar3 + 0x60);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
  }
  if (*plVar4 == 0) {
    lVar3 = 0;
  }
  else {
    *(longlong *)(*plVar4 + 0x10) = lVar1 + 0x30;
    lVar3 = *plVar4;
  }
  *(longlong *)(lVar1 + 0x30) = lVar3;
  *(longlong **)(lVar1 + 0x38) = plVar4;
  *plVar4 = lVar1 + 0x28;
  FUN_1473fe37e(lVar1 + 0x28);
  return;
}



// FUNCTION 1431d690c FUN_1431d690c body=224 status=ok
// SIG undefined FUN_1431d690c(void)

void FUN_1431d690c(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  FUN_1473fedee(*param_1,param_1[3],(int)param_1[4]);
  if (0 < (int)param_1[2]) {
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(param_1[1] + lVar9 * 8);
      lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + lVar9 * 8);
      if (lVar5 != lVar4) {
        *(longlong *)(*(longlong *)(*param_1 + 0x10) + lVar9 * 8) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
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
              plVar6 = (longlong *)FUN_14001cc68(0x10,8);
              plVar6[1] = lVar5;
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar6 = (longlong)plVar8;
                  LOCK();
                  bVar10 = plVar8 != DAT_14ca843c0;
                  plVar7 = plVar6;
                  if (bVar10) {
                    plVar8 = DAT_14ca843c0;
                    plVar7 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar7;
                  UNLOCK();
                } while (bVar10);
              }
              else {
                do {
                  *plVar6 = (longlong)plVar7;
                  LOCK();
                  bVar10 = plVar7 != DAT_14ca843c8;
                  plVar8 = plVar6;
                  if (bVar10) {
                    plVar7 = DAT_14ca843c8;
                    plVar8 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar8;
                  UNLOCK();
                } while (bVar10);
              }
            }
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_1[2]);
  }
  *(undefined4 *)(*param_1 + 0x48) = *(undefined4 *)((longlong)param_1 + 0x24);
  return;
}



// FUNCTION 1431d69ec FUN_1431d69ec body=227 status=ok
// SIG undefined FUN_1431d69ec(void)

void FUN_1431d69ec(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  
  FUN_1473fedee(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28),
                *(undefined4 *)(param_1 + 0x30));
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar10 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
      lVar6 = *(longlong *)(lVar5 + lVar10 * 8);
      if (lVar6 != lVar4) {
        *(longlong *)(lVar5 + lVar10 * 8) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar6 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar6 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar6 + 0xd);
              plVar7 = (longlong *)FUN_14001cc68(0x10,8);
              plVar7[1] = lVar6;
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
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x20));
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x48) = *(undefined4 *)(param_1 + 0x34);
  return;
}



// FUNCTION 1431d6ad0 FUN_1431d6ad0 body=97 status=ok
// SIG undefined FUN_1431d6ad0(void)

void FUN_1431d6ad0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
  uVar4 = (*DAT_14ca7fe88)(0x9117,0);
  *puVar3 = uVar4;
  (*DAT_14ca7fe30)();
  puVar2 = *(undefined8 **)(lVar1 + 0x38);
  *(undefined8 **)(lVar1 + 0x38) = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    (*DAT_14ca7fe80)(*puVar2);
    FUN_1400020a8(puVar2);
    return;
  }
  return;
}



// FUNCTION 1431d6b32 FUN_1431d6b32 body=196 status=ok
// SIG undefined FUN_1431d6b32(void)

void FUN_1431d6b32(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
    uVar3 = (*DAT_14ca7fe88)(0x9117,0);
    *puVar2 = uVar3;
    (*DAT_14ca7fe30)();
    puVar4 = *(undefined8 **)(lVar1 + 0x38);
    *(undefined8 **)(lVar1 + 0x38) = puVar2;
    if (puVar4 != (undefined8 *)0x0) {
      (*DAT_14ca7fe80)(*puVar4);
      FUN_1400020a8(puVar4);
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar2 + 3;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x20);
      puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar2 + 3;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar2;
    param_2[6] = (ulonglong)(puVar2 + 1);
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_14a374bc0;
    puVar2[2] = lVar1;
  }
  return;
}



// FUNCTION 1431d6c00 FUN_1431d6c00 body=12 status=ok
// SIG undefined FUN_1431d6c00(void)

void FUN_1431d6c00(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431d6c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431d6c0c FUN_1431d6c0c body=29 status=ok
// SIG undefined FUN_1431d6c0c(void)

undefined8 FUN_1431d6c0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431d6c50 FUN_1431d6c50 body=282 status=ok
// SIG undefined FUN_1431d6c50(void)

undefined8 * FUN_1431d6c50(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1431d6c29);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1431d6d6a FUN_1431d6d6a body=287 status=ok
// SIG undefined FUN_1431d6d6a(void)

void FUN_1431d6d6a(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  if (DAT_14ca85164 == '\x01') {
    puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
    uVar4 = (*DAT_14ca7fe88)(0x9117,0);
    *puVar3 = uVar4;
    (*DAT_14ca7fe30)();
    puVar5 = *(undefined8 **)(lVar2 + 0x38);
    *(undefined8 **)(lVar2 + 0x38) = puVar3;
    if (puVar5 != (undefined8 *)0x0) {
      (*DAT_14ca7fe80)(*puVar5);
      FUN_1400020a8(puVar5);
    }
  }
  else {
    puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar3 + 3;
    if (DAT_14ca85108 < puVar5) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar3 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar5;
    *DAT_14ca85130 = puVar3;
    DAT_14ca85130 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_14a374bc0;
    puVar3[2] = lVar2;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431d6e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1431d6e8a FUN_1431d6e8a body=1069 status=ok
// SIG undefined FUN_1431d6e8a(void)

void FUN_1431d6e8a(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  longlong local_f4;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined2 local_e4;
  undefined8 local_e0;
  wchar_t *pwStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_8c;
  undefined4 local_88;
  longlong local_84;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  wchar_t *pwStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar5 = *param_1;
  if (*(longlong **)(lVar5 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar5 + 0x40) + 8))();
  }
  lVar6 = *(longlong *)(lVar5 + 0x30);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar5 + 0x30) = 0;
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar15 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar15 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar15 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar15 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar6 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar6;
        plVar13 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar13;
            LOCK();
            bVar16 = plVar13 != DAT_14ca843c0;
            plVar11 = plVar8;
            if (bVar16) {
              plVar13 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar16 = plVar11 != DAT_14ca843c8;
            plVar13 = plVar8;
            if (bVar16) {
              plVar11 = DAT_14ca843c8;
              plVar13 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar13;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  lVar9 = FUN_147400ade((int)param_1[1],*(undefined4 *)((longlong)param_1 + 0xc));
  lVar6 = *(longlong *)(lVar5 + 0x30);
  if (lVar6 != lVar9) {
    *(longlong *)(lVar5 + 0x30) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar15 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar15 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar15 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar15 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar6 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar6;
          plVar13 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar16 = plVar13 != DAT_14ca843c0;
              plVar11 = plVar8;
              if (bVar16) {
                plVar13 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar16 = plVar11 != DAT_14ca843c8;
              plVar13 = plVar8;
              if (bVar16) {
                plVar11 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
    lVar9 = *(longlong *)(lVar5 + 0x30);
  }
  if (lVar9 == 0) {
    uVar3 = *(undefined1 *)(lVar5 + 0x29);
    uVar15 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    lVar6 = param_1[1];
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_9c = DAT_14ca83a5c;
    uStack_98 = DAT_14ca83a60;
    uStack_94 = DAT_14ca83a64;
    uStack_90 = DAT_14ca83a68;
    local_76 = 0;
    local_a8 = 3;
    local_74 = 0xff00;
    local_7c = 0x10001;
    local_78 = 0x101;
    local_a0 = DAT_14ca83a58;
    local_88 = 0;
    local_70 = 0x1000;
    pwStack_68 = L"FOpenGLViewport";
    local_60 = 0;
    local_8c = uVar15;
    local_84 = lVar6;
    local_75 = uVar3;
    lVar9 = FUN_14001cc68(0xb8);
    local_e6 = 0;
    local_118 = 3;
    local_e4 = 0xff00;
    local_ec = 0x10001;
    local_e8 = 0x101;
    local_110 = CONCAT44(uStack_9c,local_a0);
    uStack_108 = CONCAT44(uStack_94,uStack_98);
    local_100 = uStack_90;
    local_f8 = 0;
    local_e0 = CONCAT44(uStack_6c,local_70);
    pwStack_d8 = pwStack_68;
    local_d0 = (undefined4)local_60;
    uStack_cc = local_60._4_4_;
    uStack_c8 = (undefined4)uStack_58;
    uStack_c4 = uStack_58._4_4_;
    local_c0 = uStack_50;
    local_fc = uVar15;
    local_f4 = lVar6;
    local_e5 = uVar3;
    FUN_1431cecec(local_b8,&local_a8);
    FUN_1431cf19a(lVar9,param_2,&local_118);
    lVar6 = *(longlong *)(lVar5 + 0x30);
    if (lVar6 != lVar9) {
      *(longlong *)(lVar5 + 0x30) = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      if (lVar6 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar6 + 8);
        uVar15 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar15 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar6 + 8);
          LOCK();
          uVar15 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar15 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar6 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar6;
            plVar13 = DAT_14ca843c0;
            plVar11 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar16 = plVar13 != DAT_14ca843c0;
                plVar11 = plVar8;
                if (bVar16) {
                  plVar13 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar11;
                UNLOCK();
              } while (bVar16);
            }
            else {
              do {
                *plVar8 = (longlong)plVar11;
                LOCK();
                bVar16 = plVar11 != DAT_14ca843c8;
                plVar13 = plVar8;
                if (bVar16) {
                  plVar11 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar16);
            }
          }
        }
      }
    }
  }
  lVar6 = param_1[1];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar9 = param_1[2];
  uVar3 = *(undefined1 *)((longlong)param_1 + 0x11);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    lVar7 = *(longlong *)(lVar5 + 0x30);
    lVar12 = lVar7;
    if ((*(longlong *)(lVar7 + 0x78) != 0) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x78) + 0x10) & 1) == 0)) {
      FUN_1431cefae(lVar7,1);
      lVar12 = *(longlong *)(lVar5 + 0x30);
    }
    local_120 = *(undefined4 *)(lVar7 + 0x68);
    local_128 = *(undefined4 *)(lVar12 + 0x6c);
    local_138 = (char)lVar9;
    local_130 = uVar3;
    FUN_14740091a(*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x15008),
                  *(undefined8 *)(lVar5 + 0x18),(int)lVar6,uVar4);
  }
  else {
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar10 + 5;
    if ((undefined8 *)param_2[1] < puVar14) {
      FUN_140023dd8(param_2,0x30);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar10 + 5;
    }
    *param_2 = (ulonglong)puVar14;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a374c50;
    puVar10[2] = lVar5;
    *(int *)(puVar10 + 3) = (int)lVar6;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar4;
    *(char *)(puVar10 + 4) = (char)lVar9;
    *(undefined1 *)((longlong)puVar10 + 0x21) = uVar3;
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431d72b8 FUN_1431d72b8 body=124 status=ok
// SIG undefined FUN_1431d72b8(void)

void FUN_1431d72b8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(lVar1 + 0x30);
  lVar3 = lVar2;
  if ((*(longlong *)(lVar2 + 0x78) != 0) &&
     ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
    FUN_1431cefae(lVar2,1);
    lVar3 = *(longlong *)(lVar1 + 0x30);
  }
  FUN_14740091a(*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x15008),*(undefined8 *)(lVar1 + 0x18)
                ,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                *(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21),
                *(undefined4 *)(lVar3 + 0x6c),*(undefined4 *)(lVar2 + 0x68));
  return;
}



// FUNCTION 1431d7344 FUN_1431d7344 body=12 status=ok
// SIG undefined FUN_1431d7344(void)

void FUN_1431d7344(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431d734d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431d7350 FUN_1431d7350 body=29 status=ok
// SIG undefined FUN_1431d7350(void)

undefined8 FUN_1431d7350(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431d736e FUN_1431d736e body=282 status=ok
// SIG undefined FUN_1431d736e(void)

undefined8 * FUN_1431d736e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1431d6c29);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1431d7488 FUN_1431d7488 body=105 status=ok
// SIG undefined FUN_1431d7488(void)

void FUN_1431d7488(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1431d6e8a(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1431d6e8a(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431d74cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1431d74f1 FUN_1431d74f1 body=1084 status=ok
// SIG undefined FUN_1431d74f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d74f1(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14ca7c3e8);
  if (cVar1 == '\0') {
    _DAT_14ca7c3e8 = 0;
    uRam000000014ca7c3f0 = 0;
  }
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  DAT_14ca7c418 = 0;
  DAT_14ca7c420 = 0;
  DAT_14ca7c3f8 = 0;
  _DAT_14ca7c400 = 0;
  _DAT_14ca7c424 = 0xffffffff00000080;
  DAT_14ca7c42c = 0;
  DAT_14ca7c438 = 0;
  DAT_14ca7c440 = 0;
  atexit(FUN_1431ceae0);
  local_60 = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca7c448,L"r.OpenGL.DeferTextureCreation",&local_60,
                L"0: OpenGL textures are sent to the driver to be created immediately. (default)\n1: Where possible OpenGL textures are stored in system memory and created only when required for rendering.\n   This can avoid memory overhead seen in some GL drivers."
               );
  atexit(FUN_1431ceb09);
  local_60 = 0xefefffe7;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca7c460,L"r.OpenGL.DeferTextureCreationExcludeFlags",&local_60,
                L"Deferred texture creation exclusion mask, any texture requested with flags in this mask will be excluded from deferred creation."
               );
  atexit(FUN_1431ceb4e);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca7c478,L"r.OpenGL.DeferTextureCreationKeepLowerMipCount",&DAT_14c760d34,
                L"Maximum number of texture mips to retain in CPU memory after a deferred texture has been sent to the driver for GPU memory creation.\n-1: to match the number of mips kept resident by the texture streamer (default).\n 0: to disable texture eviction and discard CPU mips after sending them to the driver.\n 16: keep all mips around.\n"
               );
  atexit(FUN_1431ceb93);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca7c488,L"r.OpenGL.TextureEvictionFrameCount",&DAT_14c760d38,
                L"The number of frames since a texture was last referenced before it will considered for eviction.\nTextures can only be evicted after creation if all their mips are resident, ie its mip count <= r.OpenGL.DeferTextureCreationKeepLowerMipCount."
               );
  atexit(FUN_1431cebd8);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca7c498,L"r.OpenGL.TextureEvictsPerFrame",&DAT_14c760d3c,
                L"The maximum number of evictable textures to evict per frame, limited to avoid potential driver CPU spikes.\nTextures can only be evicted after creation if all their mips are resident, ie its mip count <= r.OpenGL.DeferTextureCreationKeepLowerMipCount."
               );
  atexit(FUN_1431cec1d);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca7c4a8,L"r.OpenGL.TextureEvictionLogging",&DAT_14ca7c4b8,
                L"Enables debug logging for texture eviction.");
  atexit(FUN_1431cec62);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca7c4c0,L"r.OpenGL.TextureEvictionMinLRUCapacity",&DAT_14ca7c4d0,
                L"Keep a minimum number of textures resident in GL When using the texture LRU\nThis can reduce LRU restore times when resuming from static scenes.\n0: (default)"
               );
  atexit(FUN_1431ceca7);
  local_68 = 4;
  FUN_141471170(&DAT_14ca7c508,L"OpenGL.UBOPoolSize",&DAT_14c760d40,
                L"Size of the UBO pool, 0 disables UBO Pool");
  atexit(FUN_1431d16e8);
  local_68 = 4;
  FUN_141471170(&DAT_14ca7c518,L"OpenGL.UBODirectWrite",&DAT_14c760d44,
                L"Enables direct writes to the UBO via Buffer Storage");
  atexit(FUN_1431d172d);
  DAT_14ca7c528 = 0;
  _DAT_14ca7c530 = 0;
  atexit((_func_5014 *)&LAB_1431d1772);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c538);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca7c538,4000);
  atexit((_func_5014 *)&LAB_1431d1783);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca7c560);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca7c560,4000);
  atexit((_func_5014 *)&LAB_1431d1791);
  DAT_14ca7c5a8 = 0;
  DAT_14ca7c5b0 = 0;
  DAT_14ca7c588 = 0;
  _DAT_14ca7c590 = 0;
  _DAT_14ca7c5b4 = 0xffffffff00000080;
  DAT_14ca7c5bc = 0;
  DAT_14ca7c5c8 = 0;
  DAT_14ca7c5d0 = 0;
  atexit(FUN_1431d179f);
  memset(&DAT_14ca7c5e0,0,0x5a0);
  atexit(FUN_1431d17c8);
  memset(&DAT_14ca7cb80,0,0x5a0);
  atexit(FUN_1431d17f6);
  memset(&DAT_14ca7d120,0,0x10e0);
  atexit(FUN_1431d1824);
  memset(&DAT_14ca7e200,0,0x10e0);
  atexit(FUN_1431d1852);
  DAT_14ca7f2e0 = 0;
  uRam000000014ca7f2e8 = 0;
  atexit((_func_5014 *)&LAB_1431d1c01);
  DAT_14ca7f310 = 0;
  DAT_14ca7f318 = 0;
  DAT_14ca7f2f0 = 0;
  _DAT_14ca7f2f8 = 0;
  _DAT_14ca7f31c = 0xffffffff00000080;
  DAT_14ca7f324 = 0;
  DAT_14ca7f330 = 0;
  DAT_14ca7f338 = 0;
  atexit(FUN_1431d27b3);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca7f340,L"r.OpenGL.PerFrameErrorCheck",&DAT_14c760d48,
                L"When no other GL debugging is in use, check for GL errors once per frame.\nNot active in shipping builds.\n0: GL errors not be checked.\n1: any GL errors will be logged as errors. (default)\n2: any GL errors will be fatal.\n"
               );
  atexit(FUN_1431d27dc);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d7930 FUN_1431d7930 body=41 status=ok
// SIG undefined FUN_1431d7930(void)

void FUN_1431d7930(void)

{
  DAT_14ca7ffb8 = 0;
  if (DAT_14ca7ffb0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d704c8();
  return;
}



// FUNCTION 1431d7959 FUN_1431d7959 body=41 status=ok
// SIG undefined FUN_1431d7959(void)

void FUN_1431d7959(void)

{
  DAT_14ca80008 = 0;
  if (DAT_14ca80000 != 0) {
    FUN_1400020a8();
  }
  FUN_145d70568();
  return;
}



// FUNCTION 1431d7990 FUN_1431d7990 body=41 status=ok
// SIG undefined FUN_1431d7990(void)

void FUN_1431d7990(void)

{
  DAT_14ca80098 = 0;
  if (DAT_14ca80090 != 0) {
    FUN_1400020a8();
  }
  FUN_145bcc760();
  return;
}



// FUNCTION 1431d79ba FUN_1431d79ba body=1253 status=ok
// SIG undefined FUN_1431d79ba(void)

void FUN_1431d79ba(void)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ushort uVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ushort uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 auStack_198 [44];
  int local_16c;
  int local_168;
  int local_164;
  undefined8 local_160;
  undefined2 *local_158;
  int local_150;
  undefined2 *local_148;
  undefined8 uStack_140;
  longlong local_138 [2];
  uint local_128 [4];
  uint *local_118;
  int local_110;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (DAT_14ca800a0 == '\0') {
    FUN_146170bae();
    FUN_140f7cd83();
    local_16c = DAT_14c868280;
    if (0 < DAT_14c868280) {
      iVar8 = 0;
      do {
        FUN_1408e76da(local_138);
        local_148 = (undefined2 *)0x0;
        uStack_140 = 0;
        local_168 = iVar8;
        FUN_1457d39f8(iVar8,local_138,&local_148);
        AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        iVar13 = 0;
        uVar14 = 1;
        iVar20 = 0;
        iVar8 = 0;
        if (local_110 != 0) {
          puVar10 = local_118;
          if (local_118 == (uint *)0x0) {
            puVar10 = local_128;
          }
          uVar12 = *puVar10;
          if (uVar12 == 0) {
            iVar8 = local_110 + 0x1e;
            if (-1 < local_110 + -1) {
              iVar8 = local_110 + -1;
            }
            uVar17 = 0;
            uVar14 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar14 = uVar17;
            }
            iVar13 = (int)uVar14 + 1;
            iVar20 = (int)uVar14 * 0x20 + 0x20;
            iVar8 = 0;
            do {
              if (uVar14 == uVar17) {
                uVar14 = 1;
                iVar8 = local_110;
                goto LAB_1431d7b3b;
              }
              iVar8 = iVar8 + 0x20;
              uVar12 = puVar10[uVar17 + 1];
              uVar17 = uVar17 + 1;
            } while (uVar12 == 0);
            iVar13 = (int)uVar17;
            iVar20 = iVar8;
          }
          else {
            iVar20 = 0;
          }
          uVar14 = (ulonglong)(-uVar12 & uVar12);
          uVar17 = uVar14 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar8 = (iVar20 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          if (local_110 <= iVar8) {
            iVar8 = local_110;
          }
        }
LAB_1431d7b3b:
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        iVar4 = local_110;
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        local_164 = iVar4;
        if (iVar8 != iVar4) {
          uVar12 = 0xffffffff;
          do {
            puVar2 = (undefined8 *)(local_138[0] + (longlong)iVar8 * 0xc0);
            iVar8 = *(int *)(local_138[0] + 8 + (longlong)iVar8 * 0xc0);
            puVar6 = &DAT_149dfb77a;
            if (iVar8 != 0) {
              puVar6 = (undefined2 *)*puVar2;
            }
            lVar9 = 0xf;
            lVar11 = 0;
            while( true ) {
              uVar5 = *(ushort *)((longlong)puVar6 + lVar11);
              uVar17 = (ulonglong)uVar5;
              uVar18 = *(ushort *)((longlong)L"ShaderPlatform " + lVar11);
              if (uVar5 != uVar18) break;
              if (uVar5 == 0) goto LAB_1431d7c23;
LAB_1431d7beb:
              lVar9 = lVar9 + -1;
              if (lVar9 == 0) goto LAB_1431d7c23;
              lVar11 = lVar11 + 2;
            }
            if ((uVar18 | uVar5) < 0x80) {
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              uVar19 = (ulonglong)uVar18;
              uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
              if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar19]) goto LAB_1431d7beb;
            }
            if (uVar5 != uVar18) goto LAB_1431d7c9e;
LAB_1431d7c23:
            puVar6 = &DAT_149dfb77a;
            if (iVar8 != 0) {
              puVar6 = (undefined2 *)*puVar2;
            }
            uVar15 = iVar8 - 1;
            if (iVar8 == 0) {
              uVar15 = 0;
            }
            uVar16 = 0xf;
            if ((int)uVar15 < 0xf) {
              uVar16 = uVar15;
            }
            if ((int)uVar16 < 1) {
              uVar16 = 0;
            }
            FUN_14006620a(&local_158,puVar6 + uVar16,uVar15 - uVar16);
            puVar6 = &DAT_149dfb77a;
            if (local_150 != 0) {
              puVar6 = local_158;
            }
            uVar5 = FUN_1411482ef(puVar6);
            if (local_158 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (uVar5 != 0x9b) {
              iVar8 = *(int *)(puVar2 + 1);
              puVar6 = &DAT_149dfb77a;
              if (iVar8 != 0) {
                puVar6 = (undefined2 *)*puVar2;
              }
              uVar15 = iVar8 - 1;
              if (iVar8 == 0) {
                uVar15 = 0;
              }
              uVar16 = 0xf;
              if ((int)uVar15 < 0xf) {
                uVar16 = uVar15;
              }
              if ((int)uVar16 < 1) {
                uVar16 = 0;
              }
              FUN_14006620a(&local_158,puVar6 + uVar16,uVar15 - uVar16);
              puVar6 = &DAT_149dfb77a;
              if (local_150 != 0) {
                puVar6 = local_158;
              }
              FUN_1446f470e(&local_160,puVar6,1);
              lVar9 = (ulonglong)uVar5 * 0x3c;
              *(undefined8 *)(&DAT_14ca814a0 + lVar9) = local_160;
              if (local_158 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              puVar6 = &DAT_149dfb77a;
              if ((int)uStack_140 != 0) {
                puVar6 = local_148;
              }
              FUN_1446f470e(&local_158,puVar6,1);
              *(undefined2 **)(&DAT_14ca814a8 + lVar9) = local_158;
              uVar3 = *(undefined8 *)(&DAT_14ca814a0 + lVar9);
              uVar15 = (uint)((ulonglong)uVar3 >> 0x10);
              uVar16 = (uint)uVar3 & 0xffff;
              puVar7 = (ushort *)
                       FUN_145abdb2a(((uint)uVar3 << 0x10 | uVar16) +
                                     (int)((ulonglong)uVar3 >> 0x20) +
                                     (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar16 >> 4),
                                     &DAT_14ca814a0 + lVar9);
              *puVar7 = uVar5;
              FUN_14590bf56(puVar2 + 2,(ulonglong)uVar5);
              pbVar1 = (byte *)((longlong)&DAT_14ca814d8 + lVar9 + 3);
              *pbVar1 = *pbVar1 | 0x10;
            }
LAB_1431d7c9e:
            uVar12 = uVar12 & ~(uint)uVar14;
            puVar10 = local_118;
            if (local_118 == (uint *)0x0) {
              puVar10 = local_128;
            }
            lVar9 = (longlong)iVar13;
            uVar15 = puVar10[lVar9] & uVar12;
            if (uVar15 == 0) {
              iVar8 = local_110 + 0x1e;
              if (-1 < local_110 + -1) {
                iVar8 = local_110 + -1;
              }
              iVar8 = iVar8 >> 5;
              iVar20 = iVar20 + 0x20;
              iVar4 = iVar8;
              if (iVar8 < iVar13) {
                iVar4 = iVar13;
              }
              if (iVar13 < iVar8) {
                lVar11 = 0;
                do {
                  uVar15 = puVar10[lVar9 + lVar11 + 1];
                  if (uVar15 != 0) {
                    iVar13 = iVar13 + (int)lVar11 + 1;
                    uVar12 = 0xffffffff;
                    goto LAB_1431d7d25;
                  }
                  iVar20 = iVar20 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar4 - lVar9 != lVar11);
                uVar12 = 0xffffffff;
                iVar13 = iVar4;
              }
              iVar13 = iVar13 + 1;
              iVar8 = local_110;
            }
            else {
LAB_1431d7d25:
              uVar14 = (ulonglong)(-uVar15 & uVar15);
              uVar17 = uVar14 * 2 + 1;
              lVar9 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              iVar8 = (iVar20 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
              if (local_110 <= iVar8) {
                iVar8 = local_110;
              }
            }
          } while (iVar8 != local_164);
        }
        if (local_148 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1409263a6(local_138);
        iVar8 = local_168 + 1;
      } while (iVar8 != local_16c);
    }
    DAT_14ca800a0 = '\x01';
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431d7ebc FUN_1431d7ebc body=69 status=ok
// SIG undefined FUN_1431d7ebc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d7ebc(void)

{
  _DAT_14ca800a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d7efe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca800b0,1);
  return;
}



// FUNCTION 1431d7f01 FUN_1431d7f01 body=69 status=ok
// SIG undefined FUN_1431d7f01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d7f01(void)

{
  _DAT_14ca800b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d7f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca800c0,1);
  return;
}



// FUNCTION 1431d7f46 FUN_1431d7f46 body=6698 status=ok
// SIG undefined FUN_1431d7f46(void)

void FUN_1431d7f46(byte param_1)

{
  code *pcVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  wchar_t *pwVar15;
  int iVar16;
  undefined2 *puVar17;
  bool bVar18;
  longlong lVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auStack_388 [32];
  undefined8 *local_368;
  longlong local_358;
  longlong local_350;
  undefined1 local_348 [40];
  undefined8 local_320;
  int local_318;
  undefined8 local_310;
  int local_308;
  undefined8 local_300;
  int local_2f8;
  undefined1 local_2e0 [4];
  undefined1 local_2dc [4];
  longlong *local_2d8 [2];
  longlong *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8 [2];
  longlong *local_2a8 [2];
  longlong local_298;
  ulonglong uStack_290;
  longlong *local_288;
  undefined4 local_280;
  void *local_278;
  int local_270;
  undefined4 local_26c;
  longlong local_268;
  ulonglong uStack_260;
  void *local_258;
  int local_250;
  undefined4 local_24c;
  undefined2 *local_248;
  undefined8 local_240;
  undefined2 *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined2 *local_188;
  undefined8 uStack_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  undefined1 *local_160;
  longlong *local_158;
  ulonglong uStack_150;
  longlong *local_148 [5];
  void *local_120;
  int local_118;
  char local_110;
  undefined2 *local_108;
  undefined8 uStack_100;
  int local_e0 [6];
  char local_c8;
  int local_c0 [4];
  char local_b0;
  byte local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (DAT_14ca83900 != (longlong *)0x0) goto LAB_1431d7f7d;
  FUN_1431d79ba();
  if ((DAT_14ca850f8 == '\0') && ((DAT_14ca84e0d != '\0' || (DAT_14c842750 == '\0')))) {
    DAT_14ca850f9 = FUN_1447e0190();
  }
  else {
    DAT_14ca850f9 = 0;
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
  if (DAT_14c872bf0 == '\x01') {
    if ((DAT_14c872bf1 != '\x01') || ((DAT_14c8442b8 & 1) != 0)) {
LAB_1431d81dc:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_388);
    }
  }
  else if (DAT_14c8442b8 == 1) goto LAB_1431d81dc;
  DAT_14ca83900 = (longlong *)FUN_14631b92a();
  if (DAT_14ca83900 == (longlong *)0x0) goto LAB_1431d7f7d;
  FUN_142797d18(local_348,&DAT_14ca84da0,1);
  cVar3 = FUN_14682fb98(local_348);
  if (cVar3 != '\0') {
    iVar4 = 0;
    iVar16 = local_308 + -1;
    if (local_308 == 0) {
      iVar16 = iVar4;
    }
    FUN_1402980a2(&DAT_14ca84dc0,local_310,iVar16);
    iVar16 = local_318 + -1;
    if (local_318 == 0) {
      iVar16 = iVar4;
    }
    FUN_1402980a2(&DAT_14ca84db0,local_320,iVar16);
    iVar16 = local_2f8 + -1;
    if (local_2f8 == 0) {
      iVar16 = iVar4;
    }
    FUN_1402980a2(&DAT_14ca84dd0,local_300,iVar16);
  }
  if (DAT_14ca84df4 != 0 && (DAT_14ca800a1 & 1) == 0) {
    local_188 = (undefined2 *)0x0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = (void *)0x0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e0 = (undefined2 *)CONCAT44(local_1e0._4_4_,DAT_14ca84df4);
    iVar16 = DAT_14ca84da8 + -1;
    if (DAT_14ca84da8 == 0) {
      iVar16 = 0;
    }
    FUN_1402980a2(&local_1d8,DAT_14ca84da0,iVar16);
    FUN_14020fad6(&local_1c8,L"Unknown");
    iVar16 = DAT_14ca84db8 + -1;
    if (DAT_14ca84db8 == 0) {
      iVar16 = 0;
    }
    FUN_1402980a2(&local_1b8,DAT_14ca84db0,iVar16);
    iVar16 = DAT_14ca84dc8 + -1;
    if (DAT_14ca84dc8 == 0) {
      iVar16 = 0;
    }
    FUN_1402980a2(&local_1a8,DAT_14ca84dc0,iVar16);
    iVar16 = DAT_14ca84dd8 + -1;
    if (DAT_14ca84dd8 == 0) {
      iVar16 = 0;
    }
    FUN_1402980a2(&local_198,DAT_14ca84dd0,iVar16);
    if (DAT_14ca83900 == (longlong *)0x0) {
      local_108 = (undefined2 *)0x0;
      uStack_100 = 0;
    }
    else {
      uVar9 = (**(code **)(*DAT_14ca83900 + 0x20))();
      FUN_140056680(&local_108,uVar9);
    }
    if (local_188 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_188 = local_108;
    uStack_180 = uStack_100;
    FUN_14631b2fa(&local_248,&local_1e0);
    cVar3 = FUN_14682fb98(&local_1e0);
    if ((cVar3 != '\0') && (DAT_14ca84df0 == '\0')) {
      FUN_145ca9246(&local_248,&local_108);
      DAT_14ca84de4 = local_c8 != local_b0 & local_98;
      pwVar15 = L"false";
      if (DAT_14ca84de4 != 0) {
        pwVar15 = L"true";
      }
      FUN_140056680(local_148,pwVar15);
      FUN_140056680(&local_88,L"RHI.DriverDenylisted");
      FUN_14152eab6(&local_88,local_148);
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_148[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (DAT_14ca84de4 == 1) {
        FUN_14740697a(&local_248,local_148);
        pvVar2 = local_120;
        if (local_110 == '\x01') {
          local_258 = (void *)0x0;
          local_250 = local_118;
          if ((longlong)local_118 == 0) {
            local_24c = 0;
          }
          else {
            FUN_1446dd670(&local_258,local_118,0);
            memcpy(local_258,pvVar2,(longlong)local_118 * 2);
          }
        }
        else {
          FUN_140056680(&local_258,L"Unknown");
        }
        local_268 = 0;
        uStack_260 = 0;
        local_368 = &DAT_14c872ad8;
        FUN_14105aa76(DAT_14c872ce0,L"Devices",L"DeviceCanUpdateDriverList",&local_268);
        local_358 = (longlong)(int)uStack_260;
        if (local_358 == 0) {
LAB_1431d83ec:
          cVar3 = FUN_140b3f358();
          pvVar2 = local_1c8;
          if ((cVar3 == '\0') && (DAT_14c760d50 != 0)) {
            local_278 = (void *)0x0;
            lVar19 = (longlong)(int)uStack_1c0;
            local_270 = (int)uStack_1c0;
            if (lVar19 == 0) {
              local_26c = 0;
            }
            else {
              FUN_1446dd670(&local_278,uStack_1c0 & 0xffffffff,0);
              memcpy(local_278,pvVar2,lVar19 * 2);
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
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
            local_288 = DAT_14c844840;
            if (DAT_14c844840 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                UNLOCK();
              }
              else {
                (**(code **)(*DAT_14c844840 + 8))();
              }
            }
            local_280 = 0;
            if ((int)local_1e0 == 0x1002) {
              FUN_14020fad6(&local_278,&DAT_149e3fad8);
              local_88 = L"DriverDownloadLinkAMD";
              uStack_80._0_4_ = 0x15;
              FUN_1446e940c(&local_168,&local_88);
              local_88 = L"MessageDialog";
              uStack_80._0_4_ = 0xd;
              FUN_1446e940c(&local_178,&local_88);
              local_88 = L"https://www.amd.com/en/support";
              uStack_80 = CONCAT44(uStack_80._4_4_,0x1e);
LAB_1431d87b2:
              FUN_140208c1e(&local_158,&local_178,&local_168,&local_88);
              FUN_140008f88(&local_288,&local_158);
              if (local_158 != (longlong *)0x0) {
                (**(code **)(*local_158 + 0x10))();
              }
            }
            else {
              if ((int)local_1e0 == 0x8086) {
                FUN_14020fad6(&local_278,L"Intel");
                local_88 = L"DriverDownloadLinkIntel";
                uStack_80._0_4_ = 0x17;
                FUN_1446e940c(&local_168,&local_88);
                local_88 = L"MessageDialog";
                uStack_80._0_4_ = 0xd;
                FUN_1446e940c(&local_178,&local_88);
                local_88 = L"https://downloadcenter.intel.com/product/80939/Graphics";
                uStack_80 = CONCAT44(uStack_80._4_4_,0x37);
                goto LAB_1431d87b2;
              }
              if ((int)local_1e0 == 0x10de) {
                FUN_14020fad6(&local_278,L"NVIDIA");
                local_88 = L"DriverDownloadLinkNVIDIA";
                uStack_80._0_4_ = 0x18;
                FUN_1446e940c(&local_168,&local_88);
                local_88 = L"MessageDialog";
                uStack_80._0_4_ = 0xd;
                FUN_1446e940c(&local_178,&local_88);
                local_88 = L"https://www.nvidia.com/download/index.aspx";
                uStack_80 = CONCAT44(uStack_80._4_4_,0x2a);
                goto LAB_1431d87b2;
              }
            }
            local_298 = 0;
            uStack_290 = 0;
            FUN_140009b9a(&local_158,&local_1d8);
            local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
            FUN_14023423e(&local_78,&local_158);
            FUN_140056680(&local_168,L"AdapterName");
            FUN_140233eec(&local_298,&local_168,&local_88);
            if (local_168 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x10))();
              local_78 = (longlong *)0x0;
              local_70 = 0;
            }
            if (local_158 != (longlong *)0x0) {
              (**(code **)(*local_158 + 0x10))();
            }
            FUN_140009b9a(&local_158,&local_278);
            local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
            FUN_14023423e(&local_78,&local_158);
            FUN_140056680(&local_168,L"Vendor");
            FUN_140233eec(&local_298,&local_168,&local_88);
            if (local_168 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x10))();
              local_78 = (longlong *)0x0;
              local_70 = 0;
            }
            if (local_158 != (longlong *)0x0) {
              (**(code **)(*local_158 + 0x10))();
            }
            local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
            local_78 = local_288;
            if (local_288 != (longlong *)0x0) {
              (**(code **)(*local_288 + 8))();
            }
            local_70 = local_280;
            FUN_140056680(&local_158,L"Hyperlink");
            FUN_140233eec(&local_298,&local_158,&local_88);
            if (local_158 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x10))();
            }
            FUN_140009b9a(&local_158,&local_1a8);
            local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
            FUN_14023423e(&local_78,&local_158);
            FUN_140056680(&local_168,L"InstalledVer");
            FUN_140233eec(&local_298,&local_168,&local_88);
            if (local_168 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x10))();
              local_78 = (longlong *)0x0;
              local_70 = 0;
            }
            if (local_158 != (longlong *)0x0) {
              (**(code **)(*local_158 + 0x10))();
            }
            if (local_110 == '\x01') {
              if (local_c8 == '\0') {
                if (local_b0 == '\x01') {
                  piVar7 = local_c0;
                  goto LAB_1431d8b4b;
                }
              }
              else {
                piVar7 = local_e0;
LAB_1431d8b4b:
                if (*piVar7 - 3U < 2) {
                  FUN_140009b9a(&local_158,&local_120);
                  goto LAB_1431d8b83;
                }
              }
              FUN_140009b9a(local_2b8,&local_120);
              local_88 = L"SuggestedDriverOrLatest";
              uStack_80._0_4_ = 0x17;
              FUN_1446e940c(local_2dc,&local_88);
              local_88 = L"MessageDialog";
              uStack_80._0_4_ = 0xd;
              FUN_1446e940c(local_2e0,&local_88);
              local_88 = L"{0} or latest driver available";
              uStack_80 = CONCAT44(uStack_80._4_4_,0x1e);
              FUN_140208c1e(local_2d8,local_2e0,local_2dc,&local_88);
              FUN_14023409e(&local_2c8,local_2d8,1);
              local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
              FUN_14023423e(&local_78,local_2b8);
              local_160 = local_68;
              local_168 = &local_88;
              FUN_14010d304(&local_158);
              local_178 = local_2c8;
              local_170 = local_2c0;
              if (local_2c0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_2a8,&local_178,&local_158);
              FUN_14007f2db(local_158,uStack_150 & 0xffffffff);
              if (local_158 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x10))();
              }
              if (local_2c0 != (longlong *)0x0) {
                LOCK();
                plVar10 = local_2c0 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)*plVar10 == 0) {
                  (**(code **)*local_2c0)(local_2c0);
                  LOCK();
                  piVar7 = (int *)((longlong)local_2c0 + 0xc);
                  *piVar7 = *piVar7 + -1;
                  UNLOCK();
                  if (*piVar7 == 0) {
                    (**(code **)(*local_2c0 + 0x10))(local_2c0);
                  }
                }
              }
              if (local_2b8[0] != (longlong *)0x0) {
                (**(code **)(*local_2b8[0] + 0x10))();
              }
              local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
              FUN_14023423e(&local_78,local_2a8);
              FUN_140056680(&local_158,L"RecommendedVer");
              FUN_140233eec(&local_298,&local_158,&local_88);
              if (local_158 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x10))();
                local_78 = (longlong *)0x0;
                local_70 = 0;
              }
              if (local_2a8[0] != (longlong *)0x0) {
                (**(code **)(*local_2a8[0] + 0x10))();
              }
            }
            else {
              local_88 = L"LatestDriver";
              uStack_80._0_4_ = 0xc;
              FUN_1446e940c(&local_178,&local_88);
              local_88 = L"MessageDialog";
              uStack_80._0_4_ = 0xd;
              FUN_1446e940c(local_2a8,&local_88);
              local_88 = L"latest driver available";
              uStack_80 = CONCAT44(uStack_80._4_4_,0x17);
              FUN_140208c1e(&local_158,local_2a8,&local_178,&local_88);
LAB_1431d8b83:
              local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
              FUN_14023423e(&local_78,&local_158);
              FUN_140056680(&local_168,L"RecommendedVer");
              FUN_140233eec(&local_298,&local_168,&local_88);
              if (local_168 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              local_2d8[0] = local_158;
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x10))();
                local_78 = (longlong *)0x0;
                local_70 = 0;
                local_2d8[0] = local_158;
              }
            }
            if (local_2d8[0] != (longlong *)0x0) {
              (**(code **)(*local_2d8[0] + 0x10))();
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
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
            local_158 = DAT_14c844840;
            if (DAT_14c844840 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                UNLOCK();
              }
              else {
                (**(code **)(*DAT_14c844840 + 8))();
              }
            }
            uStack_150 = uStack_150 & 0xffffffff00000000;
            if (uStack_100._4_4_ == -1) {
              local_88 = L"VideoCardDriverIssueReport";
              uStack_80._0_4_ = 0x1a;
              FUN_1446e940c(local_2a8,&local_88);
              local_88 = L"MessageDialog";
              uStack_80._0_4_ = 0xd;
              FUN_1446e940c(local_2d8,&local_88);
              local_88 = 
              L"The installed version of the {Vendor} graphics driver has known issues.\nPlease install the recommended driver version.\n\nWould you like to visit the following URL to download the driver?\n\n{Hyperlink}\n\n{AdapterName}\nInstalled: {InstalledVer}\nRecommended: {RecommendedVer}"
              ;
              uStack_80 = CONCAT44(uStack_80._4_4_,0x10d);
            }
            else {
              FUN_140009b9a(&local_168,&local_108);
              local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
              FUN_14023423e(&local_78,&local_168);
              FUN_140056680(&local_178,&DAT_149e0334a);
              FUN_140233eec(&local_298,&local_178,&local_88);
              if (local_178 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x10))();
                local_78 = (longlong *)0x0;
                local_70 = 0;
              }
              if (local_168 != (longlong *)0x0) {
                (**(code **)(*local_168 + 0x10))();
              }
              local_88 = L"VideoCardDriverRHIIssueReport";
              uStack_80._0_4_ = 0x1d;
              FUN_1446e940c(local_2a8,&local_88);
              local_88 = L"MessageDialog";
              uStack_80._0_4_ = 0xd;
              FUN_1446e940c(local_2d8,&local_88);
              local_88 = 
              L"The installed version of the {Vendor} graphics driver has known issues in {RHI}.\nPlease install the recommended driver version or switch to a different rendering API.\n\nWould you like to visit the following URL to download the driver?\n\n{Hyperlink}\n\n{AdapterName}\nInstalled: {InstalledVer}\nRecommended: {RecommendedVer}"
              ;
              uStack_80 = CONCAT44(uStack_80._4_4_,0x13d);
            }
            FUN_140208c1e(&local_178,local_2d8,local_2a8,&local_88);
            FUN_14023409e(&local_168,&local_178,1);
            FUN_140233c04(&local_88,&local_168,&local_298);
            FUN_140008f88(&local_158,&local_88);
            if (local_88 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_88 + 0x10))();
            }
            if (local_178 != (longlong *)0x0) {
              (**(code **)(*local_178 + 0x10))();
            }
            local_88 = L"TitleVideoCardDriverIssue";
            uStack_80._0_4_ = 0x19;
            FUN_1446e940c(local_2a8,&local_88);
            local_88 = L"MessageDialog";
            uStack_80._0_4_ = 0xd;
            FUN_1446e940c(local_2d8,&local_88);
            local_88 = L"WARNING: Known issues with graphics driver";
            uStack_80 = CONCAT44(uStack_80._4_4_,0x2a);
            FUN_140208c1e(&local_178,local_2d8,local_2a8,&local_88);
            iVar16 = FUN_1427864dc(0,1,&local_158,&local_178);
            if (iVar16 == 1) {
              plVar10 = local_288;
              if (*(code **)(*local_288 + 0x50) != FUN_144828418) {
                plVar10 = (longlong *)(**(code **)(*local_288 + 0x50))();
              }
              FUN_1447a1fc0(plVar10);
              pcVar1 = *(code **)(*local_288 + 0x28);
              if (pcVar1 == FUN_14482841c) {
                plVar10 = local_288 + 3;
                if (local_288[5] != 0) {
                  plVar10 = (longlong *)(local_288[5] + 8);
                }
              }
              else if (pcVar1 == (code *)&LAB_14010c34c) {
                plVar10 = local_288 + 2;
              }
              else {
                plVar10 = (longlong *)(*pcVar1)(local_288);
              }
              if ((int)plVar10[1] == 0) {
                puVar12 = &DAT_149dfb77a;
              }
              else {
                puVar12 = (undefined2 *)*plVar10;
              }
              FUN_14279a7c2(puVar12,0,0);
            }
            DAT_14ca800a1 = 1;
            if (local_178 != (longlong *)0x0) {
              (**(code **)(*local_178 + 0x10))();
            }
            if (local_158 != (longlong *)0x0) {
              (**(code **)(*local_158 + 0x10))();
            }
            FUN_14010f8af(local_298,uStack_290 & 0xffffffff);
            if (local_298 != 0) {
              FUN_1400020a8();
            }
            if (local_288 != (longlong *)0x0) {
              (**(code **)(*local_288 + 0x10))();
            }
            if (local_278 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          local_358 = local_358 << 4;
          lVar19 = 0;
          bVar18 = false;
          local_350 = local_268;
          do {
            puVar12 = &DAT_149dfb77a;
            if (*(int *)(local_350 + 8 + lVar19) != 0) {
              puVar12 = *(undefined2 **)(local_350 + lVar19);
            }
            local_88 = (wchar_t *)0x0;
            uStack_80 = 0;
            local_368 = (undefined8 *)0x0;
            FUN_14063337c(puVar12 + 1,L"VendorId=",&local_88,1);
            pwVar15 = L"";
            if ((int)uStack_80 != 0) {
              pwVar15 = local_88;
            }
            iVar16 = FUN_140b11ae0(pwVar15);
            local_158 = (longlong *)0x0;
            uStack_150 = 0;
            local_368 = (undefined8 *)0x0;
            FUN_14063337c(puVar12 + 1,L"DeviceId=",&local_158,1);
            plVar10 = local_158;
            plVar11 = local_158;
            if ((int)uStack_150 == 0) {
              plVar11 = (longlong *)&DAT_149dfb77a;
            }
            iVar4 = FUN_140b11ae0(plVar11);
            bVar20 = (int)local_1e0 != 0;
            bVar21 = (int)local_1e0 == iVar16;
            bVar22 = DAT_14ca84de8 != 0;
            bVar23 = DAT_14ca84de8 == iVar4;
            if (plVar10 != (longlong *)0x0) {
              FUN_1400020a8(plVar10);
            }
            if (local_88 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            bVar20 = bVar20 && bVar21;
            if ((bVar22 && bVar23) && bVar20) goto LAB_1431d83ec;
            bVar18 = (bool)(bVar18 | bVar20);
            lVar19 = lVar19 + 0x10;
          } while (local_358 != lVar19);
          if (!bVar18) goto LAB_1431d83ec;
        }
        FUN_1447a1747(local_268,uStack_260 & 0xffffffff);
        if (local_268 != 0) {
          FUN_1400020a8();
        }
        if (local_258 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_110 == '\x01') {
          if (local_120 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_145ca94c0(local_148);
        }
      }
      if (local_98 == 1) {
        FUN_145ca9478(&local_108);
      }
    }
    FUN_14626e2bc(&local_248);
    FUN_14626e2bc(&local_1e0);
  }
  (**(code **)(*DAT_14ca83900 + 8))();
  uVar5 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  if (DAT_14ca8527c != uVar5) {
    puVar8 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar8 + 3;
    DAT_14ca8527c = uVar5;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar8 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar8 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar8;
    uVar5 = DAT_14ca8527c;
    DAT_14ca85130 = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a1fb2c0;
    *(uint *)(puVar8 + 2) = uVar5;
  }
  local_108 = (undefined2 *)0x0;
  uStack_100 = 0;
  FUN_14631b754(DAT_14c760db4);
  if ((param_1 & DAT_14c760db4 < 3) == 1) {
    local_248 = *(undefined2 **)
                 (&DAT_14ca814bc +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 0x3c);
    FUN_1400021e4(&local_248,&local_1e0);
    puVar12 = &DAT_149dfb77a;
    if ((int)local_1d8 != 0) {
      puVar12 = local_1e0;
    }
    puVar17 = &DAT_149dfb77a;
    if ((int)uStack_100 != 0) {
      puVar17 = local_108;
    }
    FUN_140002266(&local_248,
                  L"A Feature Level 5 video card is required to run the editor.\nAvailableFeatureLevel = %s, ShaderPlatform = %s"
                  ,puVar17,puVar12);
    FUN_140009b9a(local_148,&local_248);
    FUN_1427863e0();
    FUN_1427864dc(0,0,local_148,&DAT_14c873210);
    if (local_148[0] != (longlong *)0x0) {
      (**(code **)(*local_148[0] + 0x10))();
    }
    FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
    if (local_248 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_1e0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (DAT_14ca83900 == (longlong *)0x0) {
    pwVar15 = L"Unknown";
LAB_1431d95c6:
    FUN_140056680(&local_1e0,pwVar15);
    FUN_140056680(local_148,L"RHI.RHIName");
    FUN_14152eab6(local_148,&local_1e0);
    puVar12 = local_1e0;
    if (local_148[0] != (longlong *)0x0) {
      FUN_1400020a8();
      puVar12 = local_1e0;
    }
  }
  else {
    if (DAT_14c760db4 != 1) {
      pwVar15 = (wchar_t *)(**(code **)(*DAT_14ca83900 + 0x20))();
      goto LAB_1431d95c6;
    }
    (**(code **)(*DAT_14ca83900 + 0x20))();
    FUN_140056680(&local_248);
    iVar16 = (int)local_240;
    iVar6 = ((int)local_240 == 0) + 5;
    local_1e0 = local_248;
    local_248 = (undefined2 *)0x0;
    iVar4 = local_240._4_4_;
    local_1d8 = local_240;
    local_240 = 0;
    iVar14 = iVar6 + iVar16;
    if (iVar14 < iVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar14);
    }
    if (iVar4 < iVar14) {
      FUN_1446f8c06(&local_1e0);
    }
    FUN_1400020e8(&local_1e0,L"_ES31",5);
    FUN_140056680(local_148,L"RHI.RHIName");
    FUN_14152eab6(local_148,&local_1e0);
    if (local_148[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    puVar12 = local_248;
    if (local_1e0 != (undefined2 *)0x0) {
      FUN_1400020a8();
      puVar12 = local_248;
    }
  }
  if (puVar12 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_1e0,L"RHI.AdapterName");
  FUN_14152eab6(&local_1e0,&DAT_14ca84da0);
  if (local_1e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_1e0,L"RHI.UserDriverVersion");
  FUN_14152eab6(&local_1e0,&DAT_14ca84dc0);
  if (local_1e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_1e0,L"RHI.InternalDriverVersion");
  FUN_14152eab6(&local_1e0,&DAT_14ca84db0);
  if (local_1e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_1e0,L"RHI.DriverDate");
  FUN_14152eab6(&local_1e0,&DAT_14ca84dd0);
  if (local_1e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_1e0,L"RHI.FeatureLevel");
  FUN_14152eab6(&local_1e0,&local_108);
  if (local_1e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar9 = FUN_145ac82ba(DAT_14ca84df4);
  FUN_140056680(&local_1e0,uVar9);
  FUN_140056680(&local_248,L"RHI.GPUVendor");
  FUN_14152eab6(&local_248,&local_1e0);
  if (local_248 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_1e0,L"%04X",DAT_14ca84de8);
  FUN_140056680(&local_248,L"RHI.DeviceId");
  FUN_14152eab6(&local_248,&local_1e0);
  if (local_248 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14626e2bc(local_348);
LAB_1431d7f7d:
  if ((local_60 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431d9992 FUN_1431d9992 body=408 status=ok
// SIG undefined FUN_1431d9992(void)

void FUN_1431d9992(byte param_1)

{
  int iVar1;
  
  if (DAT_14c867d1c != param_1) {
    DAT_14c867d1c = param_1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca800d8) {
    FUN_144b3d300(&DAT_14ca800d8);
    if (DAT_14ca800d8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca800d0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ShowMaterialDrawEvents",1);
      _Init_thread_footer(&DAT_14ca800d8);
    }
  }
  if (DAT_14ca800d0 != (longlong *)0x0) {
    iVar1 = (**(code **)(*DAT_14ca800d0 + 0xb0))();
    if ((iVar1 == 0) == (bool)param_1) {
      FUN_140635eb8(DAT_14ca800d0,-(uint)param_1,0xd000000,0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca800e8) {
    FUN_144b3d300(&DAT_14ca800e8);
    if (DAT_14ca800e8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca800e0 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.RDG.Events",1);
      _Init_thread_footer(&DAT_14ca800e8);
    }
  }
  if (DAT_14ca800e0 != (longlong *)0x0) {
    if (param_1 != 0) {
      FUN_140635eb8(DAT_14ca800e0,3,0xd000000,0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001431d9a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca800e0 + 0xa0))(DAT_14ca800e0,0xd000000,0);
    return;
  }
  return;
}



// FUNCTION 1431d9b2a FUN_1431d9b2a body=176 status=ok
// SIG undefined FUN_1431d9b2a(void)

undefined8 FUN_1431d9b2a(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138 [136];
  undefined8 local_b0;
  undefined1 local_a8 [136];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_20 = 0x1100000000;
  local_b0 = 0x1100000000;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,local_a8);
  }
  if (param_2 == (longlong *)0x0) {
    iVar2 = 0;
  }
  else {
    (**(code **)(*param_2 + 8))(param_2,local_138);
    iVar2 = (int)local_b0;
  }
  if ((int)local_20 == iVar2) {
    uVar1 = FUN_1473d1407(local_a8,local_138);
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d9bdb FUN_1431d9bdb body=183 status=ok
// SIG undefined FUN_1431d9bdb(void)

void FUN_1431d9bdb(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [30];
  undefined4 uStack_8a;
  undefined2 uStack_86;
  undefined2 local_84 [26];
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 local_4a [29];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_50 + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4c + lVar1) = 1;
    *(undefined1 *)((longlong)local_4a + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8a + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_86 + lVar1) = 1;
    *(undefined1 *)((longlong)local_84 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,local_4a);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,local_84);
  }
  FUN_140622c95(local_4a,local_84);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d9c93 FUN_1431d9c93 body=198 status=ok
// SIG undefined FUN_1431d9c93(void)

undefined8 FUN_1431d9c93(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  float local_34;
  float fStack_30;
  char cStack_2c;
  char cStack_2b;
  undefined1 uStack_2a;
  undefined2 local_28;
  float local_24;
  float fStack_20;
  char cStack_1c;
  char cStack_1b;
  undefined1 uStack_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_24 = 0.0;
  fStack_20 = 0.0;
  cStack_1c = '\0';
  cStack_1b = '\0';
  uStack_1a = 0;
  local_38 = 0;
  local_34 = 0.0;
  fStack_30 = 0.0;
  cStack_2c = '\0';
  cStack_2b = '\0';
  uStack_2a = 0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,&local_28);
  }
  if (param_2 == (longlong *)0x0) {
    cVar1 = '\0';
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 8))(param_2,&local_38);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    cVar1 = (char)local_38;
  }
  if (((char)local_28 == cVar1) && (local_28._1_1_ == local_38._1_1_)) {
    if ((local_24 == local_34) && (!NAN(local_24) && !NAN(local_34))) {
      if (((fStack_20 == fStack_30) && (!NAN(fStack_20) && !NAN(fStack_30))) &&
         (cStack_1c == cStack_2c)) {
        uVar2 = CONCAT71(uVar3,cStack_1b == cStack_2b);
        goto LAB_1431d9d3c;
      }
    }
  }
  uVar2 = 0;
LAB_1431d9d3c:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d9d5a FUN_1431d9d5a body=146 status=ok
// SIG undefined FUN_1431d9d5a(void)

void FUN_1431d9d5a(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  undefined4 local_24;
  undefined2 local_20;
  undefined8 local_1e;
  undefined4 local_16;
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1e = 0x7000101;
  local_16 = 7;
  local_12 = 0xffff;
  local_2c = 0x7000101;
  local_24 = 7;
  local_20 = 0xffff;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,&local_1e);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_2c);
  }
  FUN_140924781(&local_1e,&local_2c);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431d9ded FUN_1431d9ded body=69 status=ok
// SIG undefined FUN_1431d9ded(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d9ded(void)

{
  _DAT_14ca800f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d9e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca800f8,1);
  return;
}



// FUNCTION 1431d9e32 FUN_1431d9e32 body=69 status=ok
// SIG undefined FUN_1431d9e32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d9e32(void)

{
  _DAT_14ca80100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d9e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80108,1);
  return;
}



// FUNCTION 1431d9e77 FUN_1431d9e77 body=69 status=ok
// SIG undefined FUN_1431d9e77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d9e77(void)

{
  _DAT_14ca80110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d9eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80118,1);
  return;
}



// FUNCTION 1431d9ebc FUN_1431d9ebc body=69 status=ok
// SIG undefined FUN_1431d9ebc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d9ebc(void)

{
  _DAT_14ca80120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d9efe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80128,1);
  return;
}



// FUNCTION 1431d9f01 FUN_1431d9f01 body=69 status=ok
// SIG undefined FUN_1431d9f01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d9f01(void)

{
  _DAT_14ca80138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d9f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80140,1);
  return;
}



// FUNCTION 1431d9f46 FUN_1431d9f46 body=69 status=ok
// SIG undefined FUN_1431d9f46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d9f46(void)

{
  _DAT_14ca80150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d9f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80158,1);
  return;
}



// FUNCTION 1431d9f8b FUN_1431d9f8b body=69 status=ok
// SIG undefined FUN_1431d9f8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d9f8b(void)

{
  _DAT_14ca80168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d9fcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80170,1);
  return;
}



// FUNCTION 1431d9fd0 FUN_1431d9fd0 body=69 status=ok
// SIG undefined FUN_1431d9fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d9fd0(void)

{
  _DAT_14ca80180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431da012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80188,1);
  return;
}



// FUNCTION 1431da015 FUN_1431da015 body=69 status=ok
// SIG undefined FUN_1431da015(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431da015(void)

{
  _DAT_14ca80198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431da057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca801a0,1);
  return;
}



// FUNCTION 1431da05a FUN_1431da05a body=69 status=ok
// SIG undefined FUN_1431da05a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431da05a(void)

{
  _DAT_14ca801b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431da09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca801b8,1);
  return;
}



// FUNCTION 1431da09f FUN_1431da09f body=69 status=ok
// SIG undefined FUN_1431da09f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431da09f(void)

{
  _DAT_14ca801c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431da0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca801d0,1);
  return;
}



// FUNCTION 1431da0e4 FUN_1431da0e4 body=69 status=ok
// SIG undefined FUN_1431da0e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431da0e4(void)

{
  _DAT_14ca801e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431da126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca801e8,1);
  return;
}



// FUNCTION 1431da129 FUN_1431da129 body=69 status=ok
// SIG undefined FUN_1431da129(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431da129(void)

{
  _DAT_14ca801f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431da16b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80200,1);
  return;
}



// FUNCTION 1431da16e FUN_1431da16e body=69 status=ok
// SIG undefined FUN_1431da16e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431da16e(void)

{
  _DAT_14ca80210 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431da1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80218,1);
  return;
}



// FUNCTION 1431da1b3 FUN_1431da1b3 body=69 status=ok
// SIG undefined FUN_1431da1b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431da1b3(void)

{
  _DAT_14ca80228 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431da1f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80230,1);
  return;
}



// FUNCTION 1431da1f8 FUN_1431da1f8 body=5336 status=ok
// SIG undefined FUN_1431da1f8(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1431da1f8(longlong *param_1)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  undefined1 **ppuVar7;
  size_t sVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 **ppuVar15;
  wchar_t *_Str;
  undefined1 ***pppuVar16;
  int iVar17;
  undefined1 **ppuVar18;
  undefined1 **ppuVar19;
  undefined1 **ppuVar20;
  undefined1 **ppuVar21;
  undefined1 **ppuVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined1 **ppuVar27;
  undefined1 **ppuVar28;
  undefined1 **ppuVar29;
  ulonglong uVar30;
  undefined1 **ppuVar31;
  undefined1 **ppuVar32;
  int iVar33;
  ulonglong uVar34;
  bool bVar35;
  byte bVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 auStack_5a8 [32];
  uint local_588;
  undefined1 ***local_580;
  undefined1 ***local_578;
  undefined1 **local_570;
  void *local_568;
  int local_560;
  undefined4 local_55c;
  undefined2 *local_558;
  int local_550;
  longlong *local_548;
  undefined4 local_540;
  undefined1 **local_538;
  ulonglong uStack_530;
  undefined1 local_519;
  undefined1 **local_518;
  undefined8 uStack_510;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4ec;
  undefined4 local_4e4;
  undefined8 local_4d8;
  undefined4 local_4d0;
  longlong local_4c8 [2];
  uint local_4b8 [4];
  uint *local_4a8;
  int local_4a0;
  undefined8 local_49c;
  undefined4 local_494;
  undefined8 local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_458;
  undefined4 local_450;
  undefined8 local_44c;
  undefined4 local_444;
  undefined8 local_438;
  undefined4 local_430;
  undefined8 local_428;
  bool local_420;
  bool bStack_41f;
  undefined1 **local_418;
  undefined8 uStack_410;
  uint local_408 [4];
  uint *local_3f8;
  int local_3f0;
  undefined8 local_3ec;
  int local_3e4;
  longlong local_3d8;
  undefined4 local_3d0;
  undefined1 **local_3c8;
  undefined1 **ppuStack_3c0;
  undefined4 local_3b8 [190];
  undefined1 *local_c0;
  int local_b8;
  undefined4 local_b4;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  if ((int)param_1[2] < 1) goto LAB_1431da22b;
  uVar37 = (**(code **)(*param_1 + 0x18))();
  local_538 = (undefined1 **)0x0;
  uStack_530 = 0;
  local_3c8 = (undefined1 **)0x0;
  uVar25 = *(uint *)(DAT_14ca80160 + 0x18);
  pvVar4 = *(void **)(DAT_14ca80160 + 0x10);
  ppuStack_3c0 = (undefined1 **)CONCAT44(ppuStack_3c0._4_4_,uVar25);
  if ((longlong)(int)uVar25 == 0) {
    ppuStack_3c0 = (undefined1 **)(ulonglong)uVar25;
    ppuVar7 = (undefined1 **)&DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(&local_3c8,uVar25,0);
    memcpy(local_3c8,pvVar4,(longlong)(int)uVar25 * 2);
    ppuVar7 = (undefined1 **)&DAT_149dfb77a;
    if ((int)ppuStack_3c0 != 0) {
      ppuVar7 = local_3c8;
    }
  }
  lVar13 = 0;
  while( true ) {
    uVar2 = *(ushort *)((longlong)ppuVar7 + lVar13);
    uVar25 = (uint)uVar2;
    uVar3 = *(ushort *)((longlong)&DAT_149e060b2 + lVar13);
    uVar26 = (uint)uVar3;
    if (uVar2 != uVar3) {
      if ((uVar3 | uVar2) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1431da30e;
      }
      iVar6 = uVar25 - uVar26;
      goto LAB_1431da339;
    }
    if (uVar2 == 0) break;
LAB_1431da30e:
    lVar13 = lVar13 + 2;
  }
  iVar6 = 0;
LAB_1431da339:
  if (local_3c8 != (undefined1 **)0x0) {
    FUN_1400020a8();
  }
  if (iVar6 != 0) {
    local_518 = (undefined1 **)0x0;
    uVar25 = *(uint *)(DAT_14ca80160 + 0x18);
    pvVar4 = *(void **)(DAT_14ca80160 + 0x10);
    uStack_510 = CONCAT44(uStack_510._4_4_,uVar25);
    if ((longlong)(int)uVar25 == 0) {
      uStack_510 = (ulonglong)uVar25;
LAB_1431da3ac:
      ppuVar7 = (undefined1 **)&DAT_149dfb77a;
    }
    else {
      FUN_1446dd670(&local_518,uVar25,0);
      memcpy(local_518,pvVar4,(longlong)(int)uVar25 * 2);
      ppuVar7 = local_518;
      if ((int)uStack_510 == 0) goto LAB_1431da3ac;
    }
    FUN_140002266(&local_3c8,L"Root filter: %s ",ppuVar7);
    FUN_1400020e8(&local_538,local_3c8);
    if (local_3c8 != (undefined1 **)0x0) {
      FUN_1400020a8();
    }
    if (local_518 != (undefined1 **)0x0) {
      FUN_1400020a8();
    }
  }
  if (0.0 < *(float *)(DAT_14ca80178 + 4)) {
    FUN_140002266(&local_3c8,L"Threshold: %.2f%% ",(double)*(float *)(DAT_14ca80178 + 4));
    FUN_1400020e8(&local_538,local_3c8);
    if (local_3c8 != (undefined1 **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((int)uStack_530 - 2U < 0x7fffffff) {
    FUN_140056680(&local_518,&DAT_149e19f34);
    uVar14 = uStack_510;
    ppuVar7 = local_538;
    iVar6 = (int)uStack_510;
    if ((int)uStack_510 < 2) {
      local_3c8 = (undefined1 **)0x0;
      lVar13 = (longlong)(int)uStack_530;
      ppuStack_3c0 = (undefined1 **)CONCAT44(ppuStack_3c0._4_4_,(int)uStack_530);
      if (lVar13 == 0) {
        ppuStack_3c0 = (undefined1 **)(uStack_530 & 0xffffffff);
      }
      else {
        FUN_1446dd670(&local_3c8,uStack_530 & 0xffffffff,0);
        memcpy(local_3c8,ppuVar7,lVar13 * 2);
      }
    }
    else {
      iVar24 = (int)uStack_530 + -1;
      if ((int)uStack_530 == 0) {
        iVar24 = 0;
      }
      local_3c8 = local_518;
      iVar10 = uStack_510._4_4_;
      local_518 = (undefined1 **)0x0;
      uStack_510 = 0;
      ppuStack_3c0 = (undefined1 **)uVar14;
      iVar33 = iVar24 + iVar6;
      if (iVar33 < iVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar24);
      }
      if (iVar10 < iVar33) {
        FUN_1446f8c06(&local_3c8);
      }
      FUN_1400020e8(&local_3c8,local_538);
    }
    if (local_538 != (undefined1 **)0x0) {
      FUN_1400020a8();
    }
    local_538 = local_3c8;
    uStack_530 = (ulonglong)ppuStack_3c0;
    local_3c8 = (undefined1 **)0x0;
    ppuStack_3c0 = (undefined1 **)0x0;
    if (local_518 != (undefined1 **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_548 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  local_540 = DAT_14c844848;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca80248) && (FUN_144b3d300(&DAT_14ca80248), DAT_14ca80248 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca80240 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VSync");
    _Init_thread_footer(&DAT_14ca80248);
  }
  iVar6 = (**(code **)(*DAT_14ca80240 + 0xb0))();
  if ((iVar6 != 0) && (cVar5 = (**(code **)(*param_1 + 0x28))(param_1), cVar5 == '\0')) {
    local_3c8 = (undefined1 **)0x14a37946e;
    ppuStack_3c0._0_4_ = 0x1d;
    FUN_1446e940c(&local_c0,&local_3c8);
    local_3c8 = (undefined1 **)0x14a3794aa;
    ppuStack_3c0._0_4_ = 0xb;
    FUN_1446e940c(&local_418,&local_3c8);
    local_3c8 = (undefined1 **)0x14a3792a0;
    ppuStack_3c0 = (undefined1 **)CONCAT44(ppuStack_3c0._4_4_,0xe6);
    FUN_140208c1e(&local_518,&local_418,&local_c0,&local_3c8);
    FUN_140008f88(&local_548,&local_518);
    if (local_518 != (undefined1 **)0x0) {
      (**(code **)(*local_518 + 0x10))();
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  local_3f8 = (uint *)0x0;
  local_3f0 = 0;
  local_418 = (undefined1 **)0x0;
  uStack_410 = 0;
  local_3ec = 0xffffffff00000080;
  local_3e4 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  if (0 < (int)param_1[2]) {
    lVar13 = 0;
    do {
      FUN_1431db6d1(*(undefined8 *)(param_1[1] + lVar13 * 8),0);
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)param_1[2]);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca80258) && (FUN_144b3d300(&DAT_14ca80258), DAT_14ca80258 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca80250 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ProfileGPU.Root");
    _Init_thread_footer(&DAT_14ca80258);
  }
  (**(code **)(*DAT_14ca80250 + 0xc0))(DAT_14ca80250,&local_558);
  puVar12 = local_558;
  local_568 = (void *)0x0;
  lVar13 = (longlong)local_550;
  local_560 = local_550;
  if (lVar13 == 0) {
    local_55c = 0;
  }
  else {
    FUN_1446dd670(&local_568,local_550,0);
    memcpy(local_568,puVar12,lVar13 * 2);
  }
  local_4f8 = 0;
  local_4f0 = 0;
  local_518 = (undefined1 **)0x0;
  uStack_510 = 0;
  local_4ec = 0xffffffff00000080;
  local_4e4 = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4a8 = (uint *)0x0;
  local_4a0 = 0;
  local_4c8[0] = 0;
  local_4c8[1] = 0;
  local_49c = 0xffffffff00000080;
  local_494 = 0;
  local_488 = 0;
  local_480 = 0;
  local_458 = 0;
  local_450 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_44c = 0xffffffff00000080;
  local_444 = 0;
  local_438 = 0;
  local_430 = 0;
  local_428 = 0;
  bVar36 = *(int *)(DAT_14ca801d8 + 4) != 0;
  _local_420 = CONCAT11(*(int *)(DAT_14ca801a8 + 4) != 0,bVar36);
  if (0 < (int)param_1[2]) {
    lVar13 = 0;
    do {
      local_588 = local_588 & 0xffffff00;
      local_580 = &local_3c8;
      local_578 = &local_518;
      FUN_1431db8e5(*(undefined8 *)(param_1[1] + lVar13 * 8),uVar37,0,&local_568);
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)param_1[2]);
    bVar36 = local_420;
  }
  if ((bVar36 & 1) != 0) {
    local_3c8 = &local_c0;
    local_c0 = &local_519;
    FUN_147407c20(local_4c8,&local_3c8);
    FUN_147407a42(local_4c8);
    local_3c8 = &local_c0;
    local_c0 = &local_519;
    FUN_147408422(&local_518,&local_3c8);
    FUN_147407a42(&local_518);
    local_3c8 = &local_c0;
    local_c0 = &local_519;
    FUN_147408ab6(&local_478,&local_3c8);
    FUN_147407a42(&local_478);
    local_3c8 = (undefined1 **)0x0;
    ppuStack_3c0 = (undefined1 **)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = *(int *)(DAT_14ca801f0 + 0x18);
    lVar13 = (longlong)local_b8;
    pvVar4 = *(void **)(DAT_14ca801f0 + 0x10);
    if (lVar13 == 0) {
      local_b4 = 0;
    }
    else {
      FUN_1446dd670(&local_c0,local_b8,0);
      memcpy(local_c0,pvVar4,lVar13 * 2);
    }
    FUN_1403de9f2(&local_c0,&local_3c8,&DAT_149e06196,1);
    if (local_c0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar14 = (ulonglong)(int)ppuStack_3c0;
    if (0 < (longlong)uVar14) {
      local_570 = local_3c8 + uVar14 * 2;
      ppuVar7 = local_3c8;
      iVar6 = local_4a0;
      iVar24 = local_4a0;
      do {
        uVar34 = 0;
        uVar14 = 1;
        iVar17 = 0;
        iVar10 = 0;
        iVar33 = iVar24;
        if (iVar24 != 0) {
          puVar9 = local_4a8;
          if (local_4a8 == (uint *)0x0) {
            puVar9 = local_4b8;
          }
          uVar25 = *puVar9;
          if (uVar25 == 0) {
            iVar10 = iVar24 + 0x1e;
            if (-1 < iVar24 + -1) {
              iVar10 = iVar24 + -1;
            }
            uVar34 = 0;
            uVar14 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar14 = 0;
            }
            iVar17 = 0;
            do {
              if (uVar14 == uVar34) goto LAB_1431daa96;
              iVar17 = iVar17 + 0x20;
              uVar25 = puVar9[uVar34 + 1];
              uVar34 = uVar34 + 1;
            } while (uVar25 == 0);
          }
          else {
            uVar34 = 0;
          }
          uVar14 = (ulonglong)(-uVar25 & uVar25);
          uVar30 = uVar14 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar10 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar24 <= iVar10) {
            iVar10 = iVar24;
          }
        }
        if (iVar10 != iVar24) {
          uVar25 = 0xffffffff;
          do {
            _Str = L"";
            if (*(int *)(ppuVar7 + 1) != 0) {
              _Str = (wchar_t *)*ppuVar7;
            }
            if (_Str != (wchar_t *)0x0) {
              lVar13 = (longlong)iVar10 * 0x28 + local_4c8[0];
              sVar8 = wcslen(_Str);
              local_580 = (undefined1 ***)CONCAT44(local_580._4_4_,0xffffffff);
              local_588 = 0;
              FUN_1447ee042(lVar13,_Str,sVar8 & 0xffffffff,1);
              iVar6 = local_4a0;
            }
            uVar25 = uVar25 & ~(uint)uVar14;
            puVar9 = local_4a8;
            if (local_4a8 == (uint *)0x0) {
              puVar9 = local_4b8;
            }
            iVar33 = (int)uVar34;
            lVar13 = (longlong)iVar33;
            uVar26 = puVar9[lVar13] & uVar25;
            if (uVar26 == 0) {
              iVar10 = iVar6 + 0x1e;
              if (-1 < iVar6 + -1) {
                iVar10 = iVar6 + -1;
              }
              iVar10 = iVar10 >> 5;
              iVar17 = iVar17 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar33) {
                iVar11 = iVar33;
              }
              if (iVar33 < iVar10) {
                lVar23 = 0;
                do {
                  uVar26 = puVar9[lVar13 + lVar23 + 1];
                  if (uVar26 != 0) {
                    uVar34 = (ulonglong)(iVar33 + (int)lVar23 + 1);
                    uVar25 = 0xffffffff;
                    goto LAB_1431dab92;
                  }
                  iVar17 = iVar17 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (iVar11 - lVar13 != lVar23);
                uVar25 = 0xffffffff;
                iVar33 = iVar11;
              }
              uVar34 = (ulonglong)(iVar33 + 1);
              iVar10 = iVar6;
            }
            else {
LAB_1431dab92:
              uVar14 = (ulonglong)(-uVar26 & uVar26);
              uVar30 = uVar14 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar30 != 0) {
                for (; uVar30 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar10 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if (iVar6 <= iVar10) {
                iVar10 = iVar6;
              }
            }
            iVar33 = iVar6;
          } while (iVar10 != iVar24);
        }
LAB_1431daa96:
        iVar24 = iVar33;
        ppuVar7 = ppuVar7 + 2;
      } while (ppuVar7 != local_570);
      uVar14 = (ulonglong)ppuStack_3c0 & 0xffffffff;
    }
    FUN_1447a1747(local_3c8,uVar14);
    if (local_3c8 != (undefined1 **)0x0) {
      FUN_1400020a8();
    }
  }
  puVar12 = local_558;
  if (local_550 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  lVar13 = 0;
  while( true ) {
    uVar2 = *(ushort *)((longlong)puVar12 + lVar13);
    uVar25 = (uint)uVar2;
    uVar3 = *(ushort *)((longlong)&DAT_149e060b2 + lVar13);
    uVar26 = (uint)uVar3;
    if (uVar2 != uVar3) {
      if ((uVar3 | uVar2) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1431dac47;
      }
      iVar6 = uVar25 - uVar26;
      goto LAB_1431dac72;
    }
    if (uVar2 == 0) break;
LAB_1431dac47:
    lVar13 = lVar13 + 2;
  }
  iVar6 = 0;
LAB_1431dac72:
  if ((*(int *)(DAT_14ca80190 + 4) != 0) && (iVar6 == 0)) {
    if (local_3e4 < (int)uStack_410) {
      FUN_14740de08(&local_418);
      ppuVar7 = local_418;
      uVar25 = (int)uStack_410 - local_3e4;
      if (1 < (int)uVar25) {
        memset(local_3b8,0,0x2f0);
        local_3c8 = ppuVar7;
        ppuStack_3c0 = ppuVar7 + (ulonglong)uVar25 * 0xc + -0xc;
        fVar38 = logf((float)(int)uVar25);
        local_3b8[0] = (int)(longlong)(fVar38 + fVar38);
        pppuVar16 = &local_3c8;
        do {
          ppuVar7 = *pppuVar16;
          ppuVar21 = pppuVar16[1];
          iVar6 = *(int *)(pppuVar16 + 2);
          iVar24 = (int)((ulonglong)((longlong)ppuVar21 - (longlong)ppuVar7) >> 5) * -0x55555555;
          uVar14 = (ulonglong)(iVar24 + 1);
          ppuVar29 = ppuVar21;
          ppuVar22 = ppuVar7;
          if (iVar6 != 0) {
LAB_1431dad42:
            if (8 < (int)(uint)uVar14) {
              ppuVar18 = ppuVar7 + (ulonglong)((uint)uVar14 >> 1) * 0xc;
              ppuVar15 = &local_c0;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *ppuVar15 = *ppuVar18;
                ppuVar18 = ppuVar18 + 1;
                ppuVar15 = ppuVar15 + 1;
              }
              ppuVar18 = ppuVar7;
              ppuVar15 = ppuVar7 + (ulonglong)((uint)uVar14 >> 1) * 0xc;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *ppuVar15 = *ppuVar18;
                ppuVar18 = ppuVar18 + 1;
                ppuVar15 = ppuVar15 + 1;
              }
              ppuVar18 = &local_c0;
              ppuVar15 = ppuVar7;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *ppuVar15 = *ppuVar18;
                ppuVar18 = ppuVar18 + 1;
                ppuVar15 = ppuVar15 + 1;
              }
              ppuVar18 = ppuVar21 + 0xc;
              ppuVar15 = ppuVar7;
              do {
                ppuVar20 = ppuVar15 + 0xc;
                ppuVar27 = ppuVar15 + 0xc;
                do {
                  ppuVar15 = ppuVar27;
                  ppuVar31 = ppuVar20;
                  if (ppuVar21 < ppuVar15) break;
                  ppuVar20 = ppuVar31 + 0xc;
                  ppuVar27 = ppuVar15 + 0xc;
                } while (*(float *)((longlong)ppuVar7 + 0x4c) <
                         *(float *)((longlong)ppuVar15 + 0x4c) ||
                         *(float *)((longlong)ppuVar7 + 0x4c) ==
                         *(float *)((longlong)ppuVar15 + 0x4c));
                ppuVar20 = ppuVar18 + -0x18;
                do {
                  ppuVar27 = ppuVar18;
                  ppuVar32 = ppuVar20;
                  ppuVar18 = ppuVar27 + -0xc;
                  if (ppuVar18 <= ppuVar7) break;
                  ppuVar20 = ppuVar32 + -0xc;
                } while (*(float *)((longlong)ppuVar27 + -0x14) <
                         *(float *)((longlong)ppuVar7 + 0x4c) ||
                         *(float *)((longlong)ppuVar27 + -0x14) ==
                         *(float *)((longlong)ppuVar7 + 0x4c));
                lVar13 = 0xc;
                ppuVar20 = ppuVar7;
                ppuVar19 = ppuVar15;
                ppuVar28 = &local_c0;
                if (ppuVar18 < ppuVar15) goto code_r0x0001431dae1a;
                for (; lVar13 != 0; lVar13 = lVar13 + -1) {
                  *ppuVar28 = *ppuVar19;
                  ppuVar19 = ppuVar19 + 1;
                  ppuVar28 = ppuVar28 + 1;
                }
                ppuVar20 = ppuVar18;
                ppuVar27 = ppuVar15;
                for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                  *ppuVar27 = *ppuVar20;
                  ppuVar20 = ppuVar20 + 1;
                  ppuVar27 = ppuVar27 + 1;
                }
                ppuVar20 = &local_c0;
                ppuVar27 = ppuVar18;
                for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                  *ppuVar27 = *ppuVar20;
                  ppuVar20 = ppuVar20 + 1;
                  ppuVar27 = ppuVar27 + 1;
                }
              } while( true );
            }
            while (ppuVar29 = ppuVar7, ppuVar22 = ppuVar7, ppuVar7 < ppuVar21) {
              while (ppuVar18 = ppuVar29, ppuVar29 = ppuVar22 + 0xc, ppuVar29 <= ppuVar21) {
                pfVar1 = (float *)((longlong)ppuVar22 + 0xac);
                ppuVar22 = ppuVar29;
                if (*(float *)((longlong)ppuVar18 + 0x4c) < *pfVar1 ||
                    *(float *)((longlong)ppuVar18 + 0x4c) == *pfVar1) {
                  ppuVar29 = ppuVar18;
                }
              }
              ppuVar29 = ppuVar21 + -0xc;
              ppuVar22 = ppuVar18;
              ppuVar15 = &local_c0;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *ppuVar15 = *ppuVar22;
                ppuVar22 = ppuVar22 + 1;
                ppuVar15 = ppuVar15 + 1;
              }
              ppuVar22 = ppuVar21;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *ppuVar18 = *ppuVar22;
                ppuVar22 = ppuVar22 + 1;
                ppuVar18 = ppuVar18 + 1;
              }
              ppuVar22 = &local_c0;
              ppuVar18 = ppuVar21;
              for (lVar13 = 0xc; ppuVar21 = ppuVar29, lVar13 != 0; lVar13 = lVar13 + -1) {
                *ppuVar18 = *ppuVar22;
                ppuVar22 = ppuVar22 + 1;
                ppuVar18 = ppuVar18 + 1;
              }
            }
            goto LAB_1431db151;
          }
LAB_1431daec5:
          iVar6 = (int)uVar14;
          if (iVar6 != 0) {
            iVar33 = (iVar24 - (iVar24 + -1 >> 0x1f)) + -1 >> 1;
            iVar24 = iVar33;
joined_r0x0001431daeed:
            do {
              iVar10 = iVar24 * 2 + 1;
              if (iVar10 < iVar6) {
                iVar17 = iVar24 * 2 + 2;
                if ((iVar17 < iVar6) &&
                   (fVar38 = *(float *)((longlong)ppuVar7 + ((longlong)iVar17 * 0x30 + 0x26) * 2),
                   pfVar1 = (float *)((longlong)ppuVar7 + ((longlong)iVar10 * 0x30 + 0x26) * 2),
                   fVar38 < *pfVar1 || fVar38 == *pfVar1)) {
                  iVar10 = iVar17;
                }
                fVar38 = *(float *)((longlong)ppuVar7 + ((longlong)iVar24 * 0x30 + 0x26) * 2);
                pfVar1 = (float *)((longlong)ppuVar7 + ((longlong)iVar10 * 0x30 + 0x26) * 2);
                if (*pfVar1 <= fVar38 && fVar38 != *pfVar1) {
                  ppuVar21 = ppuVar7 + (longlong)iVar24 * 0xc;
                  ppuVar29 = &local_c0;
                  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                    *ppuVar29 = *ppuVar21;
                    ppuVar21 = ppuVar21 + 1;
                    ppuVar29 = ppuVar29 + 1;
                  }
                  ppuVar21 = ppuVar7 + (longlong)iVar10 * 0xc;
                  ppuVar29 = ppuVar7 + (longlong)iVar24 * 0xc;
                  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                    *ppuVar29 = *ppuVar21;
                    ppuVar21 = ppuVar21 + 1;
                    ppuVar29 = ppuVar29 + 1;
                  }
                  ppuVar21 = &local_c0;
                  ppuVar29 = ppuVar7 + (longlong)iVar10 * 0xc;
                  for (lVar13 = 0xc; iVar24 = iVar10, lVar13 != 0; lVar13 = lVar13 + -1) {
                    *ppuVar29 = *ppuVar21;
                    ppuVar21 = ppuVar21 + 1;
                    ppuVar29 = ppuVar29 + 1;
                  }
                  goto joined_r0x0001431daeed;
                }
              }
              bVar35 = iVar33 != 0;
              iVar33 = iVar33 + -1;
              iVar24 = iVar33;
            } while (bVar35);
            if (1 < iVar6) {
              ppuVar21 = ppuVar7;
              ppuVar29 = &local_c0;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *ppuVar29 = *ppuVar21;
                ppuVar21 = ppuVar21 + 1;
                ppuVar29 = ppuVar29 + 1;
              }
              ppuVar21 = ppuVar7 + (uVar14 - 1) * 0xc;
              ppuVar29 = ppuVar7;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *ppuVar29 = *ppuVar21;
                ppuVar21 = ppuVar21 + 1;
                ppuVar29 = ppuVar29 + 1;
              }
              ppuVar21 = &local_c0;
              ppuVar29 = ppuVar7 + (uVar14 - 1) * 0xc;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *ppuVar29 = *ppuVar21;
                ppuVar21 = ppuVar21 + 1;
                ppuVar29 = ppuVar29 + 1;
              }
              uVar14 = uVar14 - 1;
              if (iVar6 != 2) {
                do {
                  iVar6 = 0;
                  iVar33 = 1;
                  iVar24 = 0;
                  do {
                    iVar6 = iVar6 + 2;
                    iVar10 = iVar33;
                    if (((longlong)iVar6 < (longlong)uVar14) &&
                       (fVar38 = *(float *)((longlong)ppuVar7 + ((longlong)iVar6 * 0x30 + 0x26) * 2)
                       , pfVar1 = (float *)((longlong)ppuVar7 + ((longlong)iVar33 * 0x30 + 0x26) * 2
                                           ), fVar38 < *pfVar1 || fVar38 == *pfVar1)) {
                      iVar10 = iVar6;
                    }
                    fVar38 = *(float *)((longlong)ppuVar7 + ((longlong)iVar24 * 0x30 + 0x26) * 2);
                    pfVar1 = (float *)((longlong)ppuVar7 + ((longlong)iVar10 * 0x30 + 0x26) * 2);
                    if (fVar38 < *pfVar1 || fVar38 == *pfVar1) break;
                    ppuVar21 = ppuVar7 + (longlong)iVar24 * 0xc;
                    ppuVar29 = &local_c0;
                    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *ppuVar29 = *ppuVar21;
                      ppuVar21 = ppuVar21 + 1;
                      ppuVar29 = ppuVar29 + 1;
                    }
                    ppuVar21 = ppuVar7 + (longlong)iVar10 * 0xc;
                    ppuVar29 = ppuVar7 + (longlong)iVar24 * 0xc;
                    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *ppuVar29 = *ppuVar21;
                      ppuVar21 = ppuVar21 + 1;
                      ppuVar29 = ppuVar29 + 1;
                    }
                    ppuVar21 = &local_c0;
                    ppuVar29 = ppuVar7 + (longlong)iVar10 * 0xc;
                    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *ppuVar29 = *ppuVar21;
                      ppuVar21 = ppuVar21 + 1;
                      ppuVar29 = ppuVar29 + 1;
                    }
                    iVar6 = iVar10 * 2;
                    iVar33 = iVar10 * 2 + 1;
                    iVar24 = iVar10;
                  } while ((longlong)iVar33 < (longlong)uVar14);
                  ppuVar21 = ppuVar7;
                  ppuVar29 = &local_c0;
                  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                    *ppuVar29 = *ppuVar21;
                    ppuVar21 = ppuVar21 + 1;
                    ppuVar29 = ppuVar29 + 1;
                  }
                  ppuVar21 = ppuVar7 + (uVar14 - 1) * 0xc;
                  ppuVar29 = ppuVar7;
                  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                    *ppuVar29 = *ppuVar21;
                    ppuVar21 = ppuVar21 + 1;
                    ppuVar29 = ppuVar29 + 1;
                  }
                  ppuVar21 = &local_c0;
                  ppuVar29 = ppuVar7 + (uVar14 - 1) * 0xc;
                  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                    *ppuVar29 = *ppuVar21;
                    ppuVar21 = ppuVar21 + 1;
                    ppuVar29 = ppuVar29 + 1;
                  }
                  bVar35 = 2 < uVar14;
                  uVar14 = uVar14 - 1;
                } while (bVar35);
              }
            }
          }
LAB_1431db151:
          pppuVar16 = pppuVar16 + -3;
        } while (&local_3c8 <= pppuVar16);
      }
    }
    FUN_14740725a(&local_418);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca80268) && (FUN_144b3d300(&DAT_14ca80268), DAT_14ca80268 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca80260 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ProfileGPU.Pattern");
      _Init_thread_footer(&DAT_14ca80268);
    }
    (**(code **)(*DAT_14ca80260 + 0xc0))(DAT_14ca80260,&local_3c8);
    FUN_140056680(&local_c0);
    if ((int)ppuStack_3c0 == local_b8) {
      bVar35 = true;
      if (1 < (int)ppuStack_3c0) {
        lVar13 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)local_3c8 + lVar13);
          uVar25 = (uint)uVar2;
          uVar3 = *(ushort *)(local_c0 + lVar13);
          uVar26 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1431db201;
            }
            iVar6 = uVar25 - uVar26;
            goto LAB_1431db23e;
          }
          if (uVar2 == 0) break;
LAB_1431db201:
          lVar13 = lVar13 + 2;
        }
        iVar6 = 0;
LAB_1431db23e:
        bVar35 = iVar6 == 0;
      }
    }
    else {
      bVar35 = local_b8 + (int)ppuStack_3c0 == 1;
    }
    if (local_c0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar35) {
      uVar14 = (ulonglong)ppuStack_3c0 >> 0x20;
      ppuStack_3c0 = (undefined1 **)((ulonglong)ppuStack_3c0 & 0xffffffff00000000);
      if ((int)uVar14 != 0) {
        FUN_1446f8c06(&local_3c8);
        goto LAB_1431db28e;
      }
      local_c0 = (undefined1 *)0x0;
      local_b8 = 0;
LAB_1431db2b6:
      local_c0 = (undefined1 *)0x0;
      local_b4 = 0;
    }
    else {
LAB_1431db28e:
      ppuVar7 = local_3c8;
      lVar13 = (longlong)(int)ppuStack_3c0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (int)ppuStack_3c0;
      if (lVar13 == 0) goto LAB_1431db2b6;
      FUN_1446dd670(&local_c0,(ulonglong)ppuStack_3c0 & 0xffffffff,0);
      memcpy(local_c0,ppuVar7,lVar13 * 2);
    }
    if (local_3f0 == 0) {
      uVar30 = 1;
      uVar14 = 0;
      iVar6 = 0;
      iVar24 = 0;
    }
    else {
      puVar9 = local_3f8;
      if (local_3f8 == (uint *)0x0) {
        puVar9 = local_408;
      }
      uVar25 = *puVar9;
      if (uVar25 == 0) {
        iVar6 = local_3f0 + 0x1e;
        if (-1 < local_3f0 + -1) {
          iVar6 = local_3f0 + -1;
        }
        uVar14 = 0;
        uVar34 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar34 = uVar14;
        }
        iVar6 = 0;
        do {
          if (uVar34 == uVar14) goto LAB_1431db42b;
          iVar6 = iVar6 + 0x20;
          uVar25 = puVar9[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar25 == 0);
      }
      else {
        uVar14 = 0;
        iVar6 = 0;
      }
      uVar30 = (ulonglong)(-uVar25 & uVar25);
      uVar34 = uVar30 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar24 = (iVar6 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (local_3f0 <= iVar24) {
        iVar24 = local_3f0;
      }
    }
    if (iVar24 < local_3f0) {
      puVar9 = local_408;
      if (local_3f8 != (uint *)0x0) {
        puVar9 = local_3f8;
      }
      iVar24 = local_3f0 + 0x1e;
      if (-1 < local_3f0 + -1) {
        iVar24 = local_3f0 + -1;
      }
      iVar24 = iVar24 >> 5;
      uVar25 = 0xffffffff;
      do {
        uVar25 = ~(uint)uVar30 & uVar25;
        iVar33 = (int)uVar14;
        lVar13 = (longlong)iVar33;
        uVar26 = puVar9[lVar13] & uVar25;
        if (uVar26 == 0) {
          iVar10 = iVar24;
          if (iVar24 < iVar33) {
            iVar10 = iVar33;
          }
          if (iVar24 <= iVar33) break;
          lVar23 = 0;
          while( true ) {
            iVar6 = iVar6 + 0x20;
            uVar26 = puVar9[lVar13 + lVar23 + 1];
            if (uVar26 != 0) break;
            lVar23 = lVar23 + 1;
            if (iVar10 - lVar13 == lVar23) goto LAB_1431db42b;
          }
          uVar14 = (ulonglong)(iVar33 + (int)lVar23 + 1);
          uVar25 = 0xffffffff;
        }
        uVar30 = (ulonglong)(-uVar26 & uVar26);
        uVar34 = uVar30 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
      } while ((int)((iVar6 - ((uint)lVar13 ^ 0x3f)) + 0x3e) < local_3f0);
    }
LAB_1431db42b:
    if (local_c0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_3c8 != (undefined1 **)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_147404a00(&local_518);
  if (local_568 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_558 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_3d0 = 0;
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1474092b8(&local_418);
  if (local_548 != (longlong *)0x0) {
    (**(code **)(*local_548 + 0x10))();
  }
  if (local_538 != (undefined1 **)0x0) {
    FUN_1400020a8();
  }
LAB_1431da22b:
  if ((local_60 ^ (ulonglong)auStack_5a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001431dae1a:
  for (; lVar13 != 0; lVar13 = lVar13 + -1) {
    *ppuVar28 = *ppuVar20;
    ppuVar20 = ppuVar20 + 1;
    ppuVar28 = ppuVar28 + 1;
  }
  ppuVar20 = ppuVar18;
  ppuVar19 = ppuVar7;
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *ppuVar19 = *ppuVar20;
    ppuVar20 = ppuVar20 + 1;
    ppuVar19 = ppuVar19 + 1;
  }
  ppuVar20 = &local_c0;
  ppuVar19 = ppuVar18;
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *ppuVar19 = *ppuVar20;
    ppuVar20 = ppuVar20 + 1;
    ppuVar19 = ppuVar19 + 1;
  }
  iVar6 = iVar6 + -1;
  ppuVar27 = ppuVar27 + -0x18;
  if ((longlong)ppuVar32 - (longlong)ppuVar22 < (longlong)ppuVar29 - (longlong)ppuVar31) {
    if (ppuVar15 < ppuVar21) {
      *pppuVar16 = ppuVar15;
      pppuVar16[1] = ppuVar21;
      *(int *)(pppuVar16 + 2) = iVar6;
      pppuVar16 = pppuVar16 + 3;
    }
    ppuVar31 = ppuVar7;
    if (ppuVar18 <= ppuVar7 + 0xc) goto LAB_1431db151;
  }
  else {
    if (ppuVar7 + 0xc < ppuVar18) {
      *pppuVar16 = ppuVar7;
      pppuVar16[1] = ppuVar27;
      *(int *)(pppuVar16 + 2) = iVar6;
      pppuVar16 = pppuVar16 + 3;
    }
    ppuVar7 = ppuVar15;
    ppuVar27 = ppuVar21;
    ppuVar32 = ppuVar21;
    if (ppuVar21 <= ppuVar15) goto LAB_1431db151;
  }
  iVar24 = (int)((ulonglong)((longlong)ppuVar32 - (longlong)ppuVar31) >> 5) * -0x55555555;
  uVar14 = (ulonglong)(iVar24 + 1);
  ppuVar21 = ppuVar27;
  ppuVar29 = ppuVar32;
  ppuVar22 = ppuVar31;
  if (iVar6 == 0) goto LAB_1431daec5;
  goto LAB_1431dad42;
}



// FUNCTION 1431db6d1 FUN_1431db6d1 body=531 status=ok
// SIG undefined FUN_1431db6d1(void)

void FUN_1431db6d1(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined ***local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((int)param_1[2] != 0) || (*(int *)((longlong)param_1 + 0x1c) != 0)) ||
     (0 < (int)param_1[0xd])) {
    fVar9 = (float)(**(code **)(*param_1 + 8))(param_1);
    *(float *)((longlong)param_1 + 0x3c) = fVar9 * 1000.0;
    *(int *)(param_1 + 6) = (int)param_1[2];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_1 + 0x14);
    for (lVar8 = param_1[0xb]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x58)) {
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + (int)param_1[2];
      *(int *)(lVar8 + 0x2c) = *(int *)(lVar8 + 0x2c) + *(int *)((longlong)param_1 + 0x1c);
      *(int *)(lVar8 + 0x34) = *(int *)(lVar8 + 0x34) + *(int *)((longlong)param_1 + 0x14);
      *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + (int)param_1[3];
    }
    if (0 < (int)param_1[0xd]) {
      lVar8 = 0;
      do {
        FUN_1431db6d1(*(undefined8 *)(param_1[0xc] + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)param_1[0xd]);
    }
    plVar1 = param_1 + 9;
    iVar2 = (int)param_1[10];
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*plVar1;
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar7 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar7 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_147406d8a(param_3,uVar5,plVar1);
    if ((iVar2 == -1) || (lVar8 = (longlong)iVar2 * 0x60 + *param_3, lVar8 == 0)) {
      local_40 = &local_90;
      local_88 = 0;
      local_90 = &PTR_FUN_14a37d0d8;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_80 = (undefined4)param_1[6];
      local_7c = *(undefined4 *)((longlong)param_1 + 0x34);
      local_78 = (ulonglong)*(uint *)(param_1 + 7);
      local_58 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c) << 0x20;
      local_50 = 1;
      local_48 = plVar1;
      FUN_147406e5a(param_3,local_34);
    }
    else {
      *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + (int)param_1[6];
      *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + *(int *)((longlong)param_1 + 0x34);
      *(int *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x28) + (int)param_1[7];
      *(float *)(lVar8 + 0x4c) = *(float *)((longlong)param_1 + 0x3c) + *(float *)(lVar8 + 0x4c);
      *(int *)(lVar8 + 0x50) = *(int *)(lVar8 + 0x50) + 1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431db8e5 FUN_1431db8e5 body=2105 status=ok
// SIG undefined FUN_1431db8e5(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1431db8e5(longlong param_1,float param_2,int param_3,undefined8 *param_4,char param_5,
                  undefined4 *param_6,longlong param_7)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  wchar_t *pwVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  longlong *plVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_3d8 [32];
  undefined4 local_3b8;
  undefined8 *local_3b0;
  longlong local_3a8;
  undefined8 *local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  int iStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378 [190];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  *(int *)(param_7 + 0xf0) = *(int *)(param_7 + 0xf0) + 1;
  *param_6 = 0;
  if ((((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x1c) == 0)) &&
      (*(int *)(param_1 + 0x68) < 1)) && (*(char *)(param_7 + 0xf9) != '\x01')) goto LAB_1431dbebf;
  *(int *)(param_7 + 0xf4) = *(int *)(param_7 + 0xf4) + *(int *)(param_1 + 0x10);
  fVar25 = *(float *)(param_1 + 0x3c);
  fVar2 = *(float *)(DAT_14ca80178 + 4);
  if (param_5 == '\0') {
    puVar8 = &DAT_149dfb77a;
    if (*(int *)(param_4 + 1) != 0) {
      puVar8 = (undefined2 *)*param_4;
    }
    cVar4 = FUN_14681f7ae(puVar8);
    if (cVar4 != '\0') goto LAB_1431db997;
LAB_1431db9c7:
    uVar11 = 0;
  }
  else {
LAB_1431db997:
    if (((fVar25 * 100.0) / (param_2 * 1000.0) <= fVar2) && (*(char *)(param_7 + 0xf9) != '\x01'))
    goto LAB_1431db9c7;
    FUN_140056680(&local_388,&DAT_149dfb77a);
    iVar18 = *(int *)(param_1 + 0x30);
    if (iVar18 != 0) {
      local_3b8 = *(undefined4 *)(param_1 + 0x34);
      pwVar17 = L"draws";
      if (iVar18 == 1) {
        pwVar17 = L"draw";
      }
      local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,*(undefined4 *)(param_1 + 0x38));
      FUN_140002266(&local_398,L"%u %s %u prims %u verts ",iVar18,pwVar17);
      if (local_388 != 0) {
        FUN_1400020a8();
      }
      local_388 = CONCAT44(uStack_394,local_398);
      uStack_380 = CONCAT44(uStack_38c,iStack_390);
    }
    iVar18 = *(int *)(param_1 + 0x2c);
    if (iVar18 != 0) {
      pwVar17 = L"dispatches";
      if (iVar18 == 1) {
        pwVar17 = L"dispatch";
      }
      FUN_140002266(&local_398,L"%u %s",iVar18,pwVar17);
      iVar18 = iStack_390 + -1;
      if (iStack_390 == 0) {
        iVar18 = 0;
      }
      FUN_1400020e8(&local_388,CONCAT44(uStack_394,local_398),iVar18);
      if (CONCAT44(uStack_394,local_398) != 0) {
        FUN_1400020a8();
      }
      if ((0 < *(int *)(param_1 + 0x20)) && (*(int *)(param_1 + 0x1c) == 1)) {
        FUN_140002266(&local_398,&DAT_14a37d15c);
        iVar18 = iStack_390 + -1;
        if (iStack_390 == 0) {
          iVar18 = 0;
        }
        FUN_1400020e8(&local_388,CONCAT44(uStack_394,local_398),iVar18);
        if (CONCAT44(uStack_394,local_398) != 0) {
          FUN_1400020a8();
        }
        if (1 < *(int *)(param_1 + 0x24)) {
          FUN_140002266(&local_398,&DAT_14a37d164);
          iVar18 = iStack_390 + -1;
          if (iStack_390 == 0) {
            iVar18 = 0;
          }
          FUN_1400020e8(&local_388,CONCAT44(uStack_394,local_398),iVar18);
          if (CONCAT44(uStack_394,local_398) != 0) {
            FUN_1400020a8();
          }
        }
        if (1 < *(int *)(param_1 + 0x28)) {
          FUN_140002266(&local_398,&DAT_14a37d164);
          iVar18 = iStack_390 + -1;
          if (iStack_390 == 0) {
            iVar18 = 0;
          }
          FUN_1400020e8(&local_388,CONCAT44(uStack_394,local_398),iVar18);
          if (CONCAT44(uStack_394,local_398) != 0) {
            FUN_1400020a8();
          }
        }
        FUN_1400020e8(&local_388,L" groups",7);
      }
    }
    *param_6 = *(undefined4 *)(param_1 + 0x3c);
    FUN_14740743c(param_7);
    if (local_388 != 0) {
      FUN_1400020a8();
    }
    uVar11 = 1;
  }
  iVar18 = *(int *)(DAT_14ca80238 + 4);
  iVar6 = 3;
  if (iVar18 < 3) {
    iVar6 = iVar18;
  }
  iVar20 = 0;
  if (0 < iVar6) {
    iVar20 = iVar6;
  }
  if (0 < iVar18) {
    iVar18 = *(int *)(param_1 + 0x68);
    if (1 < (longlong)iVar18) {
      lVar21 = *(longlong *)(param_1 + 0x60);
      local_3a0 = param_4;
      memset(local_378,0,0x2f0);
      uStack_380 = (longlong)iVar18 * 8 + -8 + lVar21;
      local_388 = lVar21;
      fVar25 = logf((float)iVar18);
      local_378[0] = (int)(longlong)(fVar25 + fVar25);
      plVar7 = &local_388;
      do {
        plVar10 = (longlong *)*plVar7;
        plVar19 = (longlong *)plVar7[1];
        iVar18 = (int)plVar7[2];
        iVar6 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar10) >> 3);
        uVar22 = iVar6 + 1;
        if (iVar18 != 0) {
LAB_1431dba75:
          if (8 < (int)uVar22) {
            lVar21 = plVar10[uVar22 >> 1];
            plVar10[uVar22 >> 1] = *plVar10;
            *plVar10 = lVar21;
            plVar5 = plVar19 + 1;
            plVar9 = plVar10;
            do {
              plVar9 = plVar9 + 1;
              if (plVar9 <= plVar19) {
                lVar21 = *plVar10;
                do {
                  lVar3 = *plVar9;
                  if (iVar20 == 2) {
                    if (*(uint *)(lVar3 + 0x34) < *(uint *)(lVar21 + 0x34)) break;
                  }
                  else if (iVar20 == 3) {
                    if (*(uint *)(lVar3 + 0x38) < *(uint *)(lVar21 + 0x38)) break;
                  }
                  else if (*(float *)(lVar3 + 0x3c) <= *(float *)(lVar21 + 0x3c) &&
                           *(float *)(lVar21 + 0x3c) != *(float *)(lVar3 + 0x3c)) break;
                  plVar9 = plVar9 + 1;
                } while (plVar9 <= plVar19);
              }
              plVar23 = plVar5 + -1;
              plVar12 = plVar5;
              if (plVar10 < plVar23) {
                lVar21 = *plVar10;
                do {
                  lVar3 = plVar5[-1];
                  plVar12 = plVar5;
                  if (iVar20 == 2) {
                    if (*(uint *)(lVar21 + 0x34) < *(uint *)(lVar3 + 0x34)) break;
                  }
                  else if (iVar20 == 3) {
                    if (*(uint *)(lVar21 + 0x38) < *(uint *)(lVar3 + 0x38)) {
                      plVar12 = plVar23 + 1;
                      break;
                    }
                  }
                  else if (*(float *)(lVar21 + 0x3c) <= *(float *)(lVar3 + 0x3c) &&
                           *(float *)(lVar3 + 0x3c) != *(float *)(lVar21 + 0x3c)) break;
                  plVar1 = plVar23 + -1;
                  plVar5 = plVar23;
                  plVar12 = plVar23;
                  plVar23 = plVar1;
                } while (plVar10 < plVar1);
              }
              plVar5 = plVar23;
              if (plVar5 < plVar9) goto LAB_1431dbb5a;
              lVar21 = *plVar9;
              *plVar9 = *plVar5;
              *plVar5 = lVar21;
            } while( true );
          }
          for (; plVar9 = plVar10, plVar5 = plVar10, plVar10 < plVar19; plVar19 = plVar19 + -1) {
            while (plVar23 = plVar9, plVar5 = plVar5 + 1, plVar5 <= plVar19) {
              lVar21 = *plVar5;
              lVar3 = *plVar23;
              if (iVar20 == 3) {
                bVar24 = *(uint *)(lVar21 + 0x38) < *(uint *)(lVar3 + 0x38);
              }
              else if (iVar20 == 2) {
                bVar24 = *(uint *)(lVar21 + 0x34) < *(uint *)(lVar3 + 0x34);
              }
              else {
                bVar24 = *(float *)(lVar21 + 0x3c) <= *(float *)(lVar3 + 0x3c) &&
                         *(float *)(lVar3 + 0x3c) != *(float *)(lVar21 + 0x3c);
              }
              plVar9 = plVar5;
              if (!bVar24) {
                plVar9 = plVar23;
              }
            }
            lVar21 = *plVar23;
            *plVar23 = *plVar19;
            *plVar19 = lVar21;
          }
          goto LAB_1431dbe5f;
        }
LAB_1431dbbe2:
        if (uVar22 != 0) {
          iVar18 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
          iVar6 = iVar18;
joined_r0x0001431dbc09:
          do {
            iVar16 = iVar18 * 2 + 1;
            if (iVar16 < (int)uVar22) {
              iVar15 = iVar18 * 2 + 2;
              if (iVar15 < (int)uVar22) {
                lVar21 = plVar10[iVar16];
                lVar3 = plVar10[iVar15];
                if (iVar20 == 3) {
                  bVar24 = *(uint *)(lVar21 + 0x38) < *(uint *)(lVar3 + 0x38);
                }
                else if (iVar20 == 2) {
                  bVar24 = *(uint *)(lVar21 + 0x34) < *(uint *)(lVar3 + 0x34);
                }
                else {
                  bVar24 = *(float *)(lVar21 + 0x3c) <= *(float *)(lVar3 + 0x3c) &&
                           *(float *)(lVar3 + 0x3c) != *(float *)(lVar21 + 0x3c);
                }
                if (!bVar24) {
                  iVar16 = iVar15;
                }
              }
              lVar21 = plVar10[iVar16];
              lVar3 = plVar10[iVar18];
              if (iVar20 == 2) {
                if (*(uint *)(lVar21 + 0x34) < *(uint *)(lVar3 + 0x34)) goto LAB_1431dbcac;
              }
              else if (iVar20 == 3) {
                if (*(uint *)(lVar21 + 0x38) < *(uint *)(lVar3 + 0x38)) {
LAB_1431dbcac:
                  plVar10[iVar18] = lVar21;
                  plVar10[iVar16] = lVar3;
                  iVar18 = iVar16;
                  goto joined_r0x0001431dbc09;
                }
              }
              else if (*(float *)(lVar21 + 0x3c) <= *(float *)(lVar3 + 0x3c) &&
                       *(float *)(lVar3 + 0x3c) != *(float *)(lVar21 + 0x3c)) goto LAB_1431dbcac;
            }
            bVar24 = iVar6 != 0;
            iVar18 = iVar6 + -1;
            iVar6 = iVar18;
          } while (bVar24);
          if (1 < (int)uVar22) {
            uVar13 = (ulonglong)uVar22;
            lVar21 = *plVar10;
            *plVar10 = plVar10[uVar13 - 1];
            plVar10[uVar13 - 1] = lVar21;
            if (uVar22 != 2) {
              do {
                uVar14 = uVar13 - 1;
                iVar18 = 0;
                iVar16 = 1;
                iVar6 = 0;
                do {
                  iVar18 = iVar18 + 2;
                  iVar15 = iVar16;
                  if ((longlong)iVar18 < (longlong)uVar14) {
                    lVar21 = plVar10[iVar16];
                    lVar3 = plVar10[iVar18];
                    if (iVar20 == 3) {
                      bVar24 = *(uint *)(lVar21 + 0x38) < *(uint *)(lVar3 + 0x38);
                    }
                    else if (iVar20 == 2) {
                      bVar24 = *(uint *)(lVar21 + 0x34) < *(uint *)(lVar3 + 0x34);
                    }
                    else {
                      bVar24 = *(float *)(lVar21 + 0x3c) <= *(float *)(lVar3 + 0x3c) &&
                               *(float *)(lVar3 + 0x3c) != *(float *)(lVar21 + 0x3c);
                    }
                    if (!bVar24) {
                      iVar15 = iVar18;
                    }
                  }
                  lVar21 = plVar10[iVar15];
                  lVar3 = plVar10[iVar6];
                  if (iVar20 == 2) {
                    if (*(uint *)(lVar3 + 0x34) <= *(uint *)(lVar21 + 0x34)) break;
                  }
                  else if (iVar20 == 3) {
                    if (*(uint *)(lVar3 + 0x38) <= *(uint *)(lVar21 + 0x38)) break;
                  }
                  else if (*(float *)(lVar3 + 0x3c) < *(float *)(lVar21 + 0x3c) ||
                           *(float *)(lVar3 + 0x3c) == *(float *)(lVar21 + 0x3c)) break;
                  plVar10[iVar6] = lVar21;
                  plVar10[iVar15] = lVar3;
                  iVar18 = iVar15 * 2;
                  iVar16 = iVar15 * 2 + 1;
                  iVar6 = iVar15;
                } while ((longlong)iVar16 < (longlong)uVar14);
                lVar21 = *plVar10;
                *plVar10 = plVar10[uVar13 - 2];
                plVar10[uVar13 - 2] = lVar21;
                uVar13 = uVar14;
              } while (2 < uVar14);
            }
          }
        }
LAB_1431dbe5f:
        plVar7 = plVar7 + -3;
        param_4 = local_3a0;
      } while (&local_388 <= plVar7);
    }
  }
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar21 = 0;
    do {
      local_3b8 = CONCAT31(local_3b8._1_3_,uVar11);
      local_3b0 = &local_388;
      local_3a8 = param_7;
      FUN_1431db8e5(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + lVar21 * 8),param_2,param_3 + 1,
                    param_4);
      lVar21 = lVar21 + 1;
    } while (lVar21 < *(int *)(param_1 + 0x68));
  }
LAB_1431dbebf:
  if ((local_80 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1431dbb5a:
  lVar21 = *plVar10;
  *plVar10 = *plVar5;
  *plVar5 = lVar21;
  iVar18 = iVar18 + -1;
  plVar12 = plVar12 + -2;
  if ((longlong)plVar12 - (longlong)plVar10 < (longlong)plVar19 - (longlong)plVar9) {
    if (plVar9 < plVar19) {
      *plVar7 = (longlong)plVar9;
      plVar7[1] = (longlong)plVar19;
      *(int *)(plVar7 + 2) = iVar18;
      plVar7 = plVar7 + 3;
    }
    if (plVar5 <= plVar10 + 1) goto LAB_1431dbe5f;
  }
  else {
    if (plVar10 + 1 < plVar5) {
      *plVar7 = (longlong)plVar10;
      plVar7[1] = (longlong)plVar12;
      *(int *)(plVar7 + 2) = iVar18;
      plVar7 = plVar7 + 3;
    }
    plVar12 = plVar19;
    plVar10 = plVar9;
    if (plVar19 <= plVar9) goto LAB_1431dbe5f;
  }
  iVar6 = (int)((ulonglong)((longlong)plVar12 - (longlong)plVar10) >> 3);
  uVar22 = iVar6 + 1;
  plVar19 = plVar12;
  if (iVar18 == 0) goto LAB_1431dbbe2;
  goto LAB_1431dba75;
}



// FUNCTION 1431dc11f FUN_1431dc11f body=69 status=ok
// SIG undefined FUN_1431dc11f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc11f(void)

{
  _DAT_14ca80270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc161. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80278,1);
  return;
}



// FUNCTION 1431dc164 FUN_1431dc164 body=69 status=ok
// SIG undefined FUN_1431dc164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc164(void)

{
  _DAT_14ca80288 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc1a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80290,1);
  return;
}



// FUNCTION 1431dc1a9 FUN_1431dc1a9 body=69 status=ok
// SIG undefined FUN_1431dc1a9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc1a9(void)

{
  _DAT_14ca802a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc1eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca802a8,1);
  return;
}



// FUNCTION 1431dc1ee FUN_1431dc1ee body=69 status=ok
// SIG undefined FUN_1431dc1ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc1ee(void)

{
  _DAT_14ca802b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca802c0,1);
  return;
}



// FUNCTION 1431dc233 FUN_1431dc233 body=69 status=ok
// SIG undefined FUN_1431dc233(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc233(void)

{
  _DAT_14ca802d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca802d8,1);
  return;
}



// FUNCTION 1431dc279 FUN_1431dc279 body=69 status=ok
// SIG undefined FUN_1431dc279(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc279(void)

{
  _DAT_14ca802e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc2bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca802f0,1);
  return;
}



// FUNCTION 1431dc2cf FUN_1431dc2cf body=69 status=ok
// SIG undefined FUN_1431dc2cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc2cf(void)

{
  _DAT_14ca80308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80310,1);
  return;
}



// FUNCTION 1431dc314 FUN_1431dc314 body=69 status=ok
// SIG undefined FUN_1431dc314(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc314(void)

{
  _DAT_14ca80320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80328,1);
  return;
}



// FUNCTION 1431dc359 FUN_1431dc359 body=69 status=ok
// SIG undefined FUN_1431dc359(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc359(void)

{
  _DAT_14ca80338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc39b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80340,1);
  return;
}



// FUNCTION 1431dc39e FUN_1431dc39e body=69 status=ok
// SIG undefined FUN_1431dc39e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc39e(void)

{
  _DAT_14ca80350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80358,1);
  return;
}



// FUNCTION 1431dc3e3 FUN_1431dc3e3 body=69 status=ok
// SIG undefined FUN_1431dc3e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc3e3(void)

{
  _DAT_14ca80368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80370,1);
  return;
}



// FUNCTION 1431dc428 FUN_1431dc428 body=69 status=ok
// SIG undefined FUN_1431dc428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc428(void)

{
  _DAT_14ca80380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc46a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80388,1);
  return;
}



// FUNCTION 1431dc46d FUN_1431dc46d body=69 status=ok
// SIG undefined FUN_1431dc46d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc46d(void)

{
  _DAT_14ca80398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc4af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca803a0,1);
  return;
}



// FUNCTION 1431dc4b2 FUN_1431dc4b2 body=69 status=ok
// SIG undefined FUN_1431dc4b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc4b2(void)

{
  _DAT_14ca803b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca803b8,1);
  return;
}



// FUNCTION 1431dc4f7 FUN_1431dc4f7 body=69 status=ok
// SIG undefined FUN_1431dc4f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc4f7(void)

{
  _DAT_14ca803c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca803d0,1);
  return;
}



// FUNCTION 1431dc53c FUN_1431dc53c body=69 status=ok
// SIG undefined FUN_1431dc53c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc53c(void)

{
  _DAT_14ca803e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc57e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca803e8,1);
  return;
}



// FUNCTION 1431dc581 FUN_1431dc581 body=69 status=ok
// SIG undefined FUN_1431dc581(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431dc581(void)

{
  _DAT_14ca803f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431dc5c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80400,1);
  return;
}



// FUNCTION 1431dc5c6 FUN_1431dc5c6 body=41 status=ok
// SIG undefined FUN_1431dc5c6(void)

void FUN_1431dc5c6(void)

{
  DAT_14ca80460 = 0;
  if (DAT_14ca80458 != 0) {
    FUN_1400020a8();
  }
  FUN_145d2cb4a();
  return;
}



// FUNCTION 1431dc5ef FUN_1431dc5ef body=41 status=ok
// SIG undefined FUN_1431dc5ef(void)

void FUN_1431dc5ef(void)

{
  DAT_14ca804b0 = 0;
  if (DAT_14ca804a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1461530b8();
  return;
}



// FUNCTION 1431dc618 FUN_1431dc618 body=47 status=ok
// SIG undefined FUN_1431dc618(void)

void FUN_1431dc618(void)

{
  DAT_14ca80500 = 0;
  if (DAT_14ca804f8 != 0) {
    FUN_1400020a8();
  }
  FUN_14631b4d4(&DAT_14ca804b8);
  return;
}



// FUNCTION 1431dc647 FUN_1431dc647 body=47 status=ok
// SIG undefined FUN_1431dc647(void)

void FUN_1431dc647(void)

{
  DAT_14ca80550 = 0;
  if (DAT_14ca80548 != 0) {
    FUN_1400020a8();
  }
  FUN_14631b4d4(&DAT_14ca80508);
  return;
}



// FUNCTION 1431dc676 FUN_1431dc676 body=41 status=ok
// SIG undefined FUN_1431dc676(void)

void FUN_1431dc676(void)

{
  DAT_14ca805a0 = 0;
  if (DAT_14ca80598 != 0) {
    FUN_1400020a8();
  }
  FUN_145bcfe3e();
  return;
}



// FUNCTION 1431dc69f FUN_1431dc69f body=41 status=ok
// SIG undefined FUN_1431dc69f(void)

void FUN_1431dc69f(void)

{
  DAT_14ca805f0 = 0;
  if (DAT_14ca805e8 != 0) {
    FUN_1400020a8();
  }
  FUN_14631b560();
  return;
}



// FUNCTION 1431dc6d9 FUN_1431dc6d9 body=47 status=ok
// SIG undefined FUN_1431dc6d9(void)

void FUN_1431dc6d9(void)

{
  DAT_14ca80650 = 0;
  if (DAT_14ca80648 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(&DAT_14ca80608);
  return;
}



// FUNCTION 1431dc719 FUN_1431dc719 body=49 status=ok
// SIG undefined FUN_1431dc719(void)

void FUN_1431dc719(void)

{
  FUN_144760e21(DAT_14ca80678,DAT_14ca80680);
  if (DAT_14ca80678 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1431dc74a FUN_1431dc74a body=1588 status=ok
// SIG undefined FUN_1431dc74a(void)

ulonglong FUN_1431dc74a(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined1 local_28 [16];
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *param_1;
  if (iVar3 == 0) {
    local_28 = ZEXT816(0);
    local_18 = 0;
    uVar2 = (ulonglong)
            (param_1[5] != 0 || *(undefined1 (*) [16])(param_1 + 1) != (undefined1  [16])0x0);
    goto LAB_1431dc789;
  }
  if (iVar3 == 1) {
    local_28 = (undefined1  [16])0x0;
    local_18 = 0;
    if (param_1[10] == 0 && *(undefined1 (*) [16])(param_1 + 6) == (undefined1  [16])0x0) {
      local_48 = (undefined1  [16])0x0;
      local_38 = 0;
      if (param_1[0x19] == 0 && *(undefined1 (*) [16])(param_1 + 0x15) == (undefined1  [16])0x0)
      goto LAB_1431dcd78;
    }
    local_28 = (undefined1  [16])0x0;
    local_18 = 0;
    if (param_1[0x19] == 0 && *(undefined1 (*) [16])(param_1 + 0x15) == (undefined1  [16])0x0) {
LAB_1431dc804:
      local_18 = 0;
      local_28 = (undefined1  [16])0x0;
      uVar1 = param_1[0x6c];
      if ((((((((uVar1 < 9) && ((uint)param_1[0x6d] < 0x11)) && ((uint)param_1[0x73] < 6)) &&
             ((*(byte *)(param_1 + 0x6e) < 0x5d && (*(byte *)(param_1 + 0x72) < 3)))) &&
            (*(byte *)((longlong)param_1 + 0x1c9) < 3)) &&
           ((*(byte *)((longlong)param_1 + 0x1ca) < 3 && (*(byte *)((longlong)param_1 + 0x1cb) < 3))
           )) && ((uVar1 == 0 ||
                  (((((*(byte *)((longlong)param_1 + 0x162) < 0x5d &&
                      (*(byte *)(param_1 + 0x43) < 5)) && (*(byte *)((longlong)param_1 + 0x10f) < 5)
                     ) && (((*(byte *)((longlong)param_1 + 0x10d) < 0x10 &&
                            (*(byte *)((longlong)param_1 + 0x10e) < 0x10)) &&
                           ((*(byte *)(param_1 + 0x44) < 0x10 &&
                            ((*(byte *)((longlong)param_1 + 0x111) < 0x10 &&
                             (*(byte *)((longlong)param_1 + 0x112) < 0x10)))))))) &&
                   ((uVar1 == 1 ||
                    (((((*(byte *)((longlong)param_1 + 0x163) < 0x5d &&
                        (*(byte *)((longlong)param_1 + 0x113) < 5)) &&
                       (*(byte *)((longlong)param_1 + 0x116) < 5)) &&
                      (((*(byte *)(param_1 + 0x45) < 0x10 &&
                        (*(byte *)((longlong)param_1 + 0x115) < 0x10)) &&
                       ((*(byte *)((longlong)param_1 + 0x117) < 0x10 &&
                        ((*(byte *)(param_1 + 0x46) < 0x10 &&
                         (*(byte *)((longlong)param_1 + 0x119) < 0x10)))))))) &&
                     ((uVar1 == 2 ||
                      ((((((*(byte *)(param_1 + 0x59) < 0x5d &&
                           (*(byte *)((longlong)param_1 + 0x11a) < 5)) &&
                          (*(byte *)((longlong)param_1 + 0x11d) < 5)) &&
                         ((*(byte *)((longlong)param_1 + 0x11b) < 0x10 &&
                          (*(byte *)(param_1 + 0x47) < 0x10)))) &&
                        ((*(byte *)((longlong)param_1 + 0x11e) < 0x10 &&
                         ((*(byte *)((longlong)param_1 + 0x11f) < 0x10 &&
                          (*(byte *)(param_1 + 0x48) < 0x10)))))) &&
                       ((uVar1 == 3 ||
                        (((((*(byte *)((longlong)param_1 + 0x165) < 0x5d &&
                            (*(byte *)((longlong)param_1 + 0x121) < 5)) &&
                           (*(byte *)(param_1 + 0x49) < 5)) &&
                          (((*(byte *)((longlong)param_1 + 0x122) < 0x10 &&
                            (*(byte *)((longlong)param_1 + 0x123) < 0x10)) &&
                           ((*(byte *)((longlong)param_1 + 0x125) < 0x10 &&
                            ((*(byte *)((longlong)param_1 + 0x126) < 0x10 &&
                             (*(byte *)((longlong)param_1 + 0x127) < 0x10)))))))) &&
                         ((uVar1 == 4 ||
                          ((((((*(byte *)((longlong)param_1 + 0x166) < 0x5d &&
                               (*(byte *)(param_1 + 0x4a) < 5)) &&
                              (*(byte *)((longlong)param_1 + 299) < 5)) &&
                             ((*(byte *)((longlong)param_1 + 0x129) < 0x10 &&
                              (*(byte *)((longlong)param_1 + 0x12a) < 0x10)))) &&
                            ((*(byte *)(param_1 + 0x4b) < 0x10 &&
                             ((*(byte *)((longlong)param_1 + 0x12d) < 0x10 &&
                              (*(byte *)((longlong)param_1 + 0x12e) < 0x10)))))) &&
                           ((uVar1 == 5 ||
                            (((((((*(byte *)((longlong)param_1 + 0x167) < 0x5d &&
                                  (*(byte *)((longlong)param_1 + 0x12f) < 5)) &&
                                 (*(byte *)((longlong)param_1 + 0x132) < 5)) &&
                                ((*(byte *)(param_1 + 0x4c) < 0x10 &&
                                 (*(byte *)((longlong)param_1 + 0x131) < 0x10)))) &&
                               (*(byte *)((longlong)param_1 + 0x133) < 0x10)) &&
                              ((*(byte *)(param_1 + 0x4d) < 0x10 &&
                               (*(byte *)((longlong)param_1 + 0x135) < 0x10)))) &&
                             ((uVar1 == 6 ||
                              (((((*(byte *)(param_1 + 0x5a) < 0x5d &&
                                  (*(byte *)((longlong)param_1 + 0x136) < 5)) &&
                                 (*(byte *)((longlong)param_1 + 0x139) < 5)) &&
                                (((*(byte *)((longlong)param_1 + 0x137) < 0x10 &&
                                  (*(byte *)(param_1 + 0x4e) < 0x10)) &&
                                 ((*(byte *)((longlong)param_1 + 0x13a) < 0x10 &&
                                  ((*(byte *)((longlong)param_1 + 0x13b) < 0x10 &&
                                   (*(byte *)(param_1 + 0x4f) < 0x10)))))))) &&
                               ((uVar1 == 7 ||
                                ((((*(byte *)((longlong)param_1 + 0x169) < 0x5d &&
                                   (*(byte *)((longlong)param_1 + 0x13d) < 5)) &&
                                  (*(byte *)(param_1 + 0x50) < 5)) &&
                                 (((*(byte *)((longlong)param_1 + 0x13e) < 0x10 &&
                                   (*(byte *)((longlong)param_1 + 0x13f) < 0x10)) &&
                                  ((*(byte *)((longlong)param_1 + 0x141) < 0x10 &&
                                   ((*(byte *)((longlong)param_1 + 0x142) < 0x10 &&
                                    (*(byte *)((longlong)param_1 + 0x143) < 0x10))))))))))))))))))))
                          )))))))))))))))))))) &&
         (((*(byte *)(param_1 + 0x54) < 3 &&
           ((((*(byte *)((longlong)param_1 + 0x151) < 3 &&
              (*(byte *)((longlong)param_1 + 0x155) < 8)) &&
             (*(byte *)((longlong)param_1 + 0x157) < 8)) &&
            ((*(byte *)(param_1 + 0x57) < 8 && (*(byte *)(param_1 + 0x56) < 8)))))) &&
          ((((*(byte *)((longlong)param_1 + 0x159) < 8 &&
             ((*(byte *)((longlong)param_1 + 0x15a) < 8 &&
              (*(byte *)((longlong)param_1 + 0x15d) < 8)))) &&
            (*(byte *)((longlong)param_1 + 0x15e) < 8)) &&
           (*(byte *)((longlong)param_1 + 0x15f) < 8)))))) {
        if (param_1[0x41] == 0) {
          uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        }
        else {
          uVar4 = 0;
          do {
            iVar3 = (int)uVar4;
            bVar5 = *(byte *)((longlong)param_1 + (longlong)iVar3 * 8 + 0x7e) < 0x15;
            uVar2 = CONCAT71((int7)(int3)(uVar4 >> 8),bVar5);
            if (!bVar5) break;
            uVar4 = (ulonglong)(iVar3 + 1);
          } while (param_1[0x41] + -1 != iVar3);
        }
        goto LAB_1431dc789;
      }
    }
    else if ((DAT_14c872bf0 != '\0') || (DAT_14ca84f63 == '\x01')) {
      local_28 = (undefined1  [16])0x0;
      local_18 = 0;
      if ((param_1[10] == 0 && *(undefined1 (*) [16])(param_1 + 6) == (undefined1  [16])0x0) &&
         (param_1[0x41] < 1)) goto LAB_1431dc804;
    }
  }
  else if (iVar3 == 2) {
    local_28 = ZEXT816(0);
    local_18 = 0;
    if (param_1[0x7a] != 0 || *(undefined1 (*) [16])(param_1 + 0x76) != (undefined1  [16])0x0) {
      uVar2 = (ulonglong)((byte)((char)param_1[0x7c] - 6U) < 4);
      goto LAB_1431dc789;
    }
  }
LAB_1431dcd78:
  uVar2 = 0;
LAB_1431dc789:
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1431dcd80 FUN_1431dcd80 body=153 status=ok
// SIG undefined FUN_1431dcd80(void)

void FUN_1431dcd80(longlong param_1)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x104) = 0x1100000000;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  lVar1 = 0x112;
  do {
    *(undefined4 *)(param_1 + -6 + lVar1) = 0x100;
    *(undefined2 *)(param_1 + -2 + lVar1) = 1;
    *(undefined1 *)(param_1 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x14a);
  *(undefined8 *)(param_1 + 0x150) = 0x700010100000000;
  *(undefined8 *)(param_1 + 0x158) = 0x700000000;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined2 *)(param_1 + 0x160) = 0xffff;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 6;
  return;
}



// FUNCTION 1431dce1a FUN_1431dce1a body=1635 status=ok
// SIG undefined FUN_1431dce1a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1431dce1a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  byte *pbVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined4 local_340;
  undefined1 uStack_33c;
  undefined1 uStack_33b;
  undefined1 uStack_33a;
  undefined1 uStack_339;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  *param_1 = 1;
  memset(param_1 + 6,0,0x1c0);
  if (param_2[1] != 0) {
    puVar5 = param_1 + 0x1f;
    (**(code **)(*(longlong *)*param_2 + 8))();
    iVar12 = param_1[0x41];
    if (1 < (longlong)iVar12) {
      memset(local_338,0,0x2f0);
      local_348._0_1_ = SUB81(puVar5,0);
      local_348._1_1_ = (undefined1)((ulonglong)puVar5 >> 8);
      local_348._2_2_ = (undefined2)((ulonglong)puVar5 >> 0x10);
      local_348._4_4_ = (undefined4)((ulonglong)puVar5 >> 0x20);
      puVar5 = puVar5 + (longlong)iVar12 * 2 + -2;
      local_340 = SUB84(puVar5,0);
      uStack_33c = (undefined1)((ulonglong)puVar5 >> 0x20);
      uStack_33b = (undefined1)((ulonglong)puVar5 >> 0x28);
      uStack_33a = (undefined1)((ulonglong)puVar5 >> 0x30);
      uStack_339 = (undefined1)((ulonglong)puVar5 >> 0x38);
      fVar22 = logf((float)iVar12);
      local_338[0] = (int)(longlong)(fVar22 + fVar22);
      puVar6 = &local_348;
      do {
        pbVar8 = (byte *)*puVar6;
        pbVar15 = (byte *)puVar6[1];
        iVar12 = *(int *)(puVar6 + 2);
        iVar13 = (int)((ulonglong)((longlong)pbVar15 - (longlong)pbVar8) >> 3);
        uVar18 = iVar13 + 1;
        if (iVar12 != 0) {
LAB_1431dcef7:
          if (8 < (int)uVar18) {
            uVar1 = *(undefined8 *)(pbVar8 + (ulonglong)(uVar18 >> 1) * 8);
            *(undefined8 *)(pbVar8 + (ulonglong)(uVar18 >> 1) * 8) = *(undefined8 *)pbVar8;
            *(undefined8 *)pbVar8 = uVar1;
            pbVar7 = pbVar8;
            pbVar19 = pbVar15 + 8;
            do {
              pbVar7 = pbVar7 + 8;
              if (pbVar7 <= pbVar15) {
                while (*pbVar7 <= *pbVar8) {
                  if (((*pbVar8 == *pbVar7) &&
                      ((pbVar8[1] < pbVar7[1] ||
                       ((pbVar8[1] == pbVar7[1] && (pbVar8[3] < pbVar7[3])))))) ||
                     (pbVar7 = pbVar7 + 8, pbVar15 < pbVar7)) break;
                }
              }
              pbVar17 = pbVar19 + -8;
              if (pbVar8 < pbVar17) {
                do {
                  pbVar16 = pbVar17;
                  pbVar17 = pbVar16;
                  if (pbVar19[-8] < *pbVar8) break;
                  if (pbVar19[-8] == *pbVar8) {
                    if (pbVar16[1] < pbVar8[1]) break;
                    if ((pbVar16[1] == pbVar8[1]) && (pbVar16[3] < pbVar8[3])) {
                      pbVar19 = pbVar16 + 8;
                      break;
                    }
                  }
                  pbVar17 = pbVar16 + -8;
                  pbVar19 = pbVar16;
                } while (pbVar8 < pbVar17);
              }
              if (pbVar17 < pbVar7) goto LAB_1431dcfb0;
              uVar1 = *(undefined8 *)pbVar7;
              *(undefined8 *)pbVar7 = *(undefined8 *)pbVar17;
              *(undefined8 *)pbVar17 = uVar1;
              pbVar19 = pbVar17;
            } while( true );
          }
          for (; pbVar19 = pbVar8, pbVar7 = pbVar8, pbVar8 < pbVar15; pbVar15 = pbVar15 + -8) {
            while (pbVar7 = pbVar7 + 8, pbVar7 <= pbVar15) {
              if ((*pbVar19 < *pbVar7) ||
                 ((*pbVar19 <= *pbVar7 &&
                  ((pbVar19[1] < pbVar7[1] ||
                   ((pbVar19[1] == pbVar7[1] && (pbVar19[3] < pbVar7[3])))))))) {
                pbVar19 = pbVar7;
              }
            }
            uVar1 = *(undefined8 *)pbVar19;
            *(undefined8 *)pbVar19 = *(undefined8 *)pbVar15;
            *(undefined8 *)pbVar15 = uVar1;
          }
          goto LAB_1431dd259;
        }
LAB_1431dd039:
        if (uVar18 != 0) {
          iVar12 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
          iVar13 = iVar12;
joined_r0x0001431dd060:
          do {
            iVar11 = iVar12 * 2 + 1;
            if (iVar11 < (int)uVar18) {
              iVar10 = iVar12 * 2 + 2;
              if (iVar10 < (int)uVar18) {
                lVar14 = (longlong)iVar10;
                lVar20 = (longlong)iVar11;
                if ((pbVar8[lVar14 * 8] < pbVar8[lVar20 * 8]) ||
                   ((pbVar8[lVar14 * 8] <= pbVar8[lVar20 * 8] &&
                    ((pbVar8[lVar14 * 8 + 1] < pbVar8[lVar20 * 8 + 1] ||
                     ((pbVar8[lVar14 * 8 + 1] == pbVar8[lVar20 * 8 + 1] &&
                      (pbVar8[lVar14 * 8 + 3] < pbVar8[lVar20 * 8 + 3])))))))) goto LAB_1431dd094;
              }
              else {
LAB_1431dd094:
                lVar14 = (longlong)iVar11;
                iVar10 = iVar11;
              }
              lVar20 = (longlong)iVar12;
              if ((pbVar8[lVar20 * 8] < pbVar8[lVar14 * 8]) ||
                 ((pbVar8[lVar20 * 8] == pbVar8[lVar14 * 8] &&
                  ((pbVar8[lVar20 * 8 + 1] < pbVar8[lVar14 * 8 + 1] ||
                   ((pbVar8[lVar20 * 8 + 1] == pbVar8[lVar14 * 8 + 1] &&
                    (pbVar8[lVar20 * 8 + 3] < pbVar8[lVar14 * 8 + 3])))))))) {
                uVar1 = *(undefined8 *)(pbVar8 + lVar20 * 8);
                *(undefined8 *)(pbVar8 + lVar20 * 8) = *(undefined8 *)(pbVar8 + lVar14 * 8);
                *(undefined8 *)(pbVar8 + lVar14 * 8) = uVar1;
                iVar12 = iVar10;
                goto joined_r0x0001431dd060;
              }
            }
            bVar21 = iVar13 != 0;
            iVar12 = iVar13 + -1;
            iVar13 = iVar12;
          } while (bVar21);
          if (1 < (int)uVar18) {
            uVar9 = (ulonglong)uVar18;
            uVar1 = *(undefined8 *)pbVar8;
            *(undefined8 *)pbVar8 = *(undefined8 *)(pbVar8 + uVar9 * 8 + -8);
            *(undefined8 *)(pbVar8 + uVar9 * 8 + -8) = uVar1;
            if (uVar18 != 2) {
              do {
                uVar9 = uVar9 - 1;
                iVar13 = 0;
                iVar12 = 1;
                iVar11 = 0;
                do {
                  iVar10 = iVar13 + 2;
                  lVar14 = (longlong)iVar10;
                  if (lVar14 < (longlong)uVar9) {
                    lVar20 = (longlong)iVar12;
                    if ((pbVar8[lVar14 * 8] < pbVar8[lVar20 * 8]) ||
                       ((pbVar8[lVar14 * 8] <= pbVar8[lVar20 * 8] &&
                        ((pbVar8[lVar14 * 8 + 1] < pbVar8[lVar20 * 8 + 1] ||
                         ((pbVar8[lVar14 * 8 + 1] == pbVar8[lVar20 * 8 + 1] &&
                          (pbVar8[lVar14 * 8 + 3] < pbVar8[lVar20 * 8 + 3]))))))))
                    goto LAB_1431dd163;
                  }
                  else {
LAB_1431dd163:
                    lVar14 = (longlong)iVar12;
                    iVar10 = iVar12;
                  }
                  lVar20 = (longlong)iVar11;
                  if ((pbVar8[lVar14 * 8] <= pbVar8[lVar20 * 8]) &&
                     ((pbVar8[lVar20 * 8] != pbVar8[lVar14 * 8] ||
                      ((pbVar8[lVar14 * 8 + 1] <= pbVar8[lVar20 * 8 + 1] &&
                       ((pbVar8[lVar20 * 8 + 1] != pbVar8[lVar14 * 8 + 1] ||
                        (pbVar8[lVar14 * 8 + 3] <= pbVar8[lVar20 * 8 + 3])))))))) break;
                  uVar1 = *(undefined8 *)(pbVar8 + lVar20 * 8);
                  *(undefined8 *)(pbVar8 + lVar20 * 8) = *(undefined8 *)(pbVar8 + lVar14 * 8);
                  *(undefined8 *)(pbVar8 + lVar14 * 8) = uVar1;
                  iVar13 = iVar10 * 2;
                  iVar12 = iVar10 * 2 + 1;
                  iVar11 = iVar10;
                } while ((longlong)iVar12 < (longlong)uVar9);
                uVar1 = *(undefined8 *)pbVar8;
                *(undefined8 *)pbVar8 = *(undefined8 *)(pbVar8 + uVar9 * 8 + -8);
                *(undefined8 *)(pbVar8 + uVar9 * 8 + -8) = uVar1;
              } while (2 < uVar9);
            }
          }
        }
LAB_1431dd259:
        puVar6 = puVar6 + -3;
      } while (&local_348 <= puVar6);
    }
    lVar14 = param_2[1];
    param_1[10] = *(undefined4 *)(lVar14 + 0x98);
    uVar2 = *(undefined4 *)(lVar14 + 0x8c);
    uVar3 = *(undefined4 *)(lVar14 + 0x90);
    uVar4 = *(undefined4 *)(lVar14 + 0x94);
    param_1[6] = *(undefined4 *)(lVar14 + 0x88);
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    param_1[9] = uVar4;
  }
  lVar14 = param_2[3];
  if (lVar14 != 0) {
    param_1[0x19] = *(undefined4 *)(lVar14 + 0x98);
    uVar2 = *(undefined4 *)(lVar14 + 0x8c);
    uVar3 = *(undefined4 *)(lVar14 + 0x90);
    uVar4 = *(undefined4 *)(lVar14 + 0x94);
    param_1[0x15] = *(undefined4 *)(lVar14 + 0x88);
    param_1[0x16] = uVar2;
    param_1[0x17] = uVar3;
    param_1[0x18] = uVar4;
  }
  lVar14 = param_2[4];
  if (lVar14 != 0) {
    param_1[0x1e] = *(undefined4 *)(lVar14 + 0x98);
    uVar2 = *(undefined4 *)(lVar14 + 0x8c);
    uVar3 = *(undefined4 *)(lVar14 + 0x90);
    uVar4 = *(undefined4 *)(lVar14 + 0x94);
    param_1[0x1a] = *(undefined4 *)(lVar14 + 0x88);
    param_1[0x1b] = uVar2;
    param_1[0x1c] = uVar3;
    param_1[0x1d] = uVar4;
  }
  lVar14 = param_2[2];
  if (lVar14 != 0) {
    param_1[0xf] = *(undefined4 *)(lVar14 + 0x98);
    uVar2 = *(undefined4 *)(lVar14 + 0x8c);
    uVar3 = *(undefined4 *)(lVar14 + 0x90);
    uVar4 = *(undefined4 *)(lVar14 + 0x94);
    param_1[0xb] = *(undefined4 *)(lVar14 + 0x88);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar4;
  }
  lVar14 = param_2[5];
  if (lVar14 != 0) {
    param_1[0x14] = *(undefined4 *)(lVar14 + 0x98);
    uVar2 = *(undefined4 *)(lVar14 + 0x8c);
    uVar3 = *(undefined4 *)(lVar14 + 0x90);
    uVar4 = *(undefined4 *)(lVar14 + 0x94);
    param_1[0x10] = *(undefined4 *)(lVar14 + 0x88);
    param_1[0x11] = uVar2;
    param_1[0x12] = uVar3;
    param_1[0x13] = uVar4;
  }
  (**(code **)(*(longlong *)param_2[6] + 8))((longlong *)param_2[6],param_1 + 0x43);
  local_348._0_1_ = 0;
  local_348._1_1_ = 0;
  local_348._4_4_ = 0;
  local_340 = 0;
  uStack_33c = 0;
  uStack_33b = 0;
  uStack_33a = 0;
  (**(code **)(*(longlong *)param_2[7] + 8))((longlong *)param_2[7],&local_348);
  param_1[0x52] = local_348._4_4_;
  param_1[0x53] = local_340;
  *(undefined1 *)(param_1 + 0x54) = (undefined1)local_348;
  *(undefined1 *)((longlong)param_1 + 0x151) = local_348._1_1_;
  *(undefined1 *)((longlong)param_1 + 0x152) = uStack_33c;
  *(undefined1 *)((longlong)param_1 + 0x153) = uStack_33b;
  (**(code **)(*(longlong *)param_2[8] + 8))((longlong *)param_2[8],param_1 + 0x55);
  lVar14 = 0x162;
  do {
    *(undefined1 *)((longlong)param_1 + lVar14) =
         *(undefined1 *)((longlong)param_2 + lVar14 + -0x102);
    *(ulonglong *)(param_1 + lVar14 * 2 + -0x268) =
         (ulonglong)((uint)param_2[lVar14 + -0x155] & 0x2000010);
    lVar14 = lVar14 + 1;
  } while (lVar14 != 0x16a);
  param_1[0x6c] = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_1[0x6d] = (uint)*(ushort *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x15);
  *(ulonglong *)(param_1 + 0x70) = (ulonglong)((uint)param_2[0x16] & 0x2000014);
  *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)((longlong)param_1 + 0x1c9) = *(undefined1 *)((longlong)param_2 + 0xba);
  *(undefined1 *)((longlong)param_1 + 0x1ca) = *(undefined1 *)((longlong)param_2 + 0xb9);
  *(undefined1 *)((longlong)param_1 + 0x1cb) = *(undefined1 *)((longlong)param_2 + 0xbb);
  param_1[0x73] = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)((longlong)param_2 + 0xc2);
  *(undefined1 *)((longlong)param_1 + 0x1d1) = *(undefined1 *)((longlong)param_2 + 0xc3);
  *(undefined1 *)((longlong)param_1 + 0x1d2) = *(undefined1 *)((longlong)param_2 + 0xc6);
  *(undefined1 *)((longlong)param_1 + 0x1d3) = *(undefined1 *)((longlong)param_2 + 199);
  *(undefined1 *)(param_1 + 0x75) = *(undefined1 *)((longlong)param_2 + 0xc5);
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1431dcfb0:
  uVar1 = *(undefined8 *)pbVar8;
  *(undefined8 *)pbVar8 = *(undefined8 *)pbVar17;
  *(undefined8 *)pbVar17 = uVar1;
  iVar12 = iVar12 + -1;
  pbVar19 = pbVar19 + -0x10;
  if ((longlong)pbVar19 - (longlong)pbVar8 < (longlong)pbVar15 - (longlong)pbVar7) {
    if (pbVar7 < pbVar15) {
      *puVar6 = pbVar7;
      puVar6[1] = pbVar15;
      *(int *)(puVar6 + 2) = iVar12;
      puVar6 = puVar6 + 3;
    }
    if (pbVar17 <= pbVar8 + 8) goto LAB_1431dd259;
  }
  else {
    if (pbVar8 + 8 < pbVar17) {
      *puVar6 = pbVar8;
      puVar6[1] = pbVar19;
      *(int *)(puVar6 + 2) = iVar12;
      puVar6 = puVar6 + 3;
    }
    pbVar19 = pbVar15;
    pbVar8 = pbVar7;
    if (pbVar15 <= pbVar7) goto LAB_1431dd259;
  }
  iVar13 = (int)((ulonglong)((longlong)pbVar19 - (longlong)pbVar8) >> 3);
  uVar18 = iVar13 + 1;
  pbVar15 = pbVar19;
  if (iVar12 == 0) goto LAB_1431dd039;
  goto LAB_1431dcef7;
}



// FUNCTION 1431dd47e FUN_1431dd47e body=209 status=ok
// SIG undefined FUN_1431dd47e(void)

bool FUN_1431dd47e(void)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (DAT_14ca806a4 == '\x01') {
    bVar2 = DAT_14ca806a5 & 1;
    DAT_14ca806a4 = 1;
    lVar3 = DAT_14ca80348;
  }
  else {
    DAT_14ca806a4 = 1;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14ca806a5 = FUN_14054d46e(&DAT_14c846b20,L"reportpso");
    lVar3 = DAT_14ca80348;
    bVar2 = DAT_14ca806a5;
  }
  bVar7 = true;
  DAT_14ca80348 = lVar3;
  if (bVar2 == 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar6 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar6 = 1;
    }
    bVar7 = *(int *)(lVar3 + uVar6 * 4) == 1;
  }
  return bVar7;
}



// FUNCTION 1431dd550 FUN_1431dd550 body=6761 status=ok
// SIG undefined FUN_1431dd550(void)

ulonglong FUN_1431dd550(undefined8 *param_1,undefined1 (*param_2) [16],ushort param_3,
                       undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  void *pvVar3;
  uchar auVar4 [8];
  GUID GVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  longlong *plVar16;
  undefined1 (*pauVar17) [16];
  uint *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  GUID *pGVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  undefined **ppuVar32;
  undefined *puVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined1 (*pauVar37) [16];
  uint uVar38;
  longlong lVar39;
  longlong lVar40;
  undefined2 *puVar41;
  longlong lVar42;
  undefined1 (*pauVar43) [16];
  bool bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_618 [32];
  undefined2 *local_5f8;
  undefined1 (*local_5f0) [16];
  undefined4 local_5e8;
  undefined4 local_5e0;
  undefined1 (*local_5d8) [16];
  longlong *local_5d0;
  undefined1 (*local_5c8) [16];
  undefined1 (*local_5c0) [16];
  undefined1 (*local_5b8) [16];
  ulonglong local_5b0;
  undefined1 (*local_5a8) [16];
  undefined1 *local_5a0;
  undefined8 *local_598;
  undefined8 *local_590;
  undefined1 (*local_588) [16];
  undefined1 (*local_580) [16];
  undefined2 *local_578;
  int local_570;
  GUID local_568;
  longlong local_558;
  undefined4 uStack_550;
  int iStack_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_530;
  longlong local_528;
  undefined **local_520;
  int local_518;
  byte local_4f8;
  longlong *local_4c8;
  longlong local_4a8;
  undefined8 local_490;
  undefined1 *local_488;
  undefined8 local_480;
  undefined1 local_478 [16];
  longlong local_468;
  int iStack_460;
  int iStack_45c;
  undefined4 local_458;
  int iStack_454;
  int iStack_450;
  int iStack_44c;
  int iStack_448;
  undefined4 uStack_444;
  ulonglong local_440;
  longlong local_438;
  undefined1 local_42c [4];
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3fc;
  undefined4 local_3f4;
  longlong local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3d6;
  undefined2 uStack_3d2;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 auStack_3b8 [12];
  undefined1 local_3ac [16];
  undefined1 local_39c [16];
  undefined1 local_38c [16];
  undefined1 local_37c [16];
  undefined1 local_36c [16];
  undefined8 local_35c;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined2 local_270;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined1 local_1e0;
  GUID local_1d8 [4];
  undefined1 local_190 [2] [16];
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  longlong local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined4 local_120 [2];
  undefined1 local_118 [2] [16];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined8 uStack_b8;
  uint local_b0 [4];
  uint *local_a0;
  uint local_98;
  undefined8 local_94;
  int local_8c;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_618;
  FUN_1414485fe();
  cVar8 = FUN_1403966e6();
  if (cVar8 == '\0') {
    plVar16 = (longlong *)0x0;
    goto LAB_1431dd63f;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  if ((void **)param_1 != &DAT_14ca80660) {
    iVar24 = *(int *)(param_1 + 1);
    pvVar3 = (void *)*param_1;
    DAT_14ca80668 = iVar24;
    if (iVar24 == 0 && DAT_14ca8066c == 0) {
      DAT_14ca8066c = 0;
    }
    else {
      FUN_1446dd670(&DAT_14ca80660,iVar24);
      if (iVar24 != 0) {
        memcpy(DAT_14ca80660,pvVar3,(longlong)iVar24 * 2);
      }
    }
  }
  pauVar14 = (undefined1 (*) [16])FUN_140f058b4(&DAT_14ca80660);
  plVar16 = (longlong *)0x0;
  if (pauVar14 == (undefined1 (*) [16])0x0) {
    pauVar14 = (undefined1 (*) [16])FUN_14001cc68(200,0x10);
    *(undefined8 *)(pauVar14[1] + 4) = 0;
    *(undefined8 *)pauVar14[2] = 0;
    *pauVar14 = (undefined1  [16])0x0;
    local_588 = pauVar14 + 3;
    *(undefined8 *)pauVar14[5] = 0;
    *(undefined4 *)(pauVar14[5] + 8) = 0;
    pauVar14[3] = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar14[5] + 0xc) = 0xffffffff00000080;
    *(undefined4 *)(pauVar14[6] + 4) = 0;
    *(undefined8 *)pauVar14[7] = 0;
    *(undefined4 *)(pauVar14[7] + 8) = 0;
    pauVar14[8] = (undefined1  [16])0x0;
    pauVar14[9] = (undefined1  [16])0x0;
    pauVar14[10] = (undefined1  [16])0x0;
    pauVar14[0xb] = (undefined1  [16])0x0;
    pauVar14[0xc][0] = 0;
    *(undefined4 *)(pauVar14[2] + 8) = 0;
    local_580 = pauVar14;
    FUN_1459af010();
    local_5c8 = pauVar14;
    if (pauVar14 != param_2) {
      iVar24 = *(int *)(*param_2 + 8);
      pvVar3 = *(void **)*param_2;
      *(int *)(*pauVar14 + 8) = iVar24;
      if (iVar24 == 0 && *(int *)(*pauVar14 + 0xc) == 0) {
        *(undefined4 *)(*pauVar14 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(pauVar14,iVar24);
        if (iVar24 != 0) {
          memcpy(*(void **)*pauVar14,pvVar3,(longlong)iVar24 * 2);
        }
      }
    }
    *(ushort *)pauVar14[1] = param_3;
    *(undefined8 *)(pauVar14[1] + 4) = *(undefined8 *)(&DAT_14ca814bc + (ulonglong)param_3 * 0x3c);
    local_568.Data1 = 0;
    local_568.Data2 = 0;
    local_568.Data3 = 0;
    local_568.Data4[0] = '\0';
    local_568.Data4[1] = '\0';
    local_568.Data4[2] = '\0';
    local_568.Data4[3] = '\0';
    local_568.Data4[4] = '\0';
    local_568.Data4[5] = '\0';
    local_568.Data4[6] = '\0';
    local_568.Data4[7] = '\0';
    CoCreateGuid(&local_568);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
      FUN_145c3c252(&DAT_14c8686c8);
      DAT_14c868708 = &DAT_14c8686c8;
      atexit(thunk_FUN_14626bbac);
      _Init_thread_footer(&DAT_14c868710);
    }
    uVar38 = *(uint *)(DAT_14c868708 + 4);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
      FUN_145c3c252(&DAT_14c8686c8);
      DAT_14c868708 = &DAT_14c8686c8;
      atexit(thunk_FUN_14626bbac);
      _Init_thread_footer(&DAT_14c868710);
    }
    if (*(int *)(DAT_14c868708 + 0xc) == 0) {
      puVar41 = &DAT_149dfb77a;
    }
    else {
      puVar41 = *(undefined2 **)(DAT_14c868708 + 8);
    }
    local_590 = param_4;
    FUN_140002266(&local_3d0,L"%s-CL-%u-",puVar41,uVar38 & 0x7fffffff);
    if (*(longlong *)pauVar14[0xb] != 0) {
      FUN_1400020a8();
    }
    pauVar17 = local_5c8 + 1;
    *(ulonglong *)pauVar14[0xb] = CONCAT44(local_3d0._4_4_,(ulong)local_3d0);
    local_3d0._0_4_ = 0;
    local_3d0._4_4_ = 0;
    *(int *)(pauVar14[0xb] + 8) = (int)uStack_3c8;
    *(int *)(pauVar14[0xb] + 0xc) = uStack_3c8._4_4_;
    local_1d8[0] = (GUID)ZEXT816(0);
    FUN_1407c869a(&local_568,local_1d8,0);
    puVar41 = &DAT_149dfb77a;
    local_5f8 = &DAT_149dfb77a;
    if (local_1d8[0].Data4._0_4_ != 0) {
      local_5f8 = (undefined2 *)local_1d8[0]._0_8_;
    }
    FUN_1400021e4(*pauVar17 + 4,&local_520);
    ppuVar32 = (undefined **)&DAT_149dfb77a;
    if (local_518 != 0) {
      ppuVar32 = local_520;
    }
    pauVar43 = local_5c8 + 0xb;
    if (*(int *)(*pauVar14 + 8) != 0) {
      puVar41 = *(undefined2 **)*pauVar14;
    }
    FUN_140002266(&local_3d0,L"%s_%s_%s.rec.upipelinecache",puVar41,ppuVar32);
    iVar24 = (int)uStack_3c8 + -1;
    if ((int)uStack_3c8 == 0) {
      iVar24 = 0;
    }
    FUN_1400020e8(pauVar43,CONCAT44(local_3d0._4_4_,(ulong)local_3d0),iVar24);
    if (CONCAT44(local_3d0._4_4_,(ulong)local_3d0) != 0) {
      FUN_1400020a8();
    }
    if (local_520 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_1d8[0]._0_8_ != 0) {
      FUN_1400020a8();
    }
    puVar15 = (undefined8 *)FUN_14047ac8c();
    iVar24 = *(int *)(puVar15 + 1);
    lVar42 = (longlong)iVar24;
    pvVar3 = (void *)*puVar15;
    auVar46[4] = local_1d8[0].Data4[4];
    auVar46[5] = local_1d8[0].Data4[5];
    auVar46[6] = local_1d8[0].Data4[6];
    auVar46[7] = local_1d8[0].Data4[7];
    auVar46._0_4_ = iVar24;
    auVar46._8_8_ = 0;
    local_1d8[0] = (GUID)(auVar46 << 0x40);
    FUN_1446dd670(local_1d8,(uint)(lVar42 == 0) + iVar24 + 0xe,0);
    if (lVar42 != 0) {
      memcpy((void *)local_1d8[0]._0_8_,pvVar3,lVar42 * 2);
    }
    FUN_1401aebe8(local_1d8,L"CollectedPSOs",0xd);
    GVar5 = local_1d8[0];
    iVar24 = *(int *)(pauVar14[0xb] + 8) + -1;
    if (*(int *)(pauVar14[0xb] + 8) == 0) {
      iVar24 = 0;
    }
    uVar6 = local_1d8[0].Data4._0_4_;
    iVar10 = iVar24 + 1 + (uint)(local_1d8[0].Data4._0_4_ == 0);
    local_3d0._0_4_ = local_1d8[0].Data1;
    local_3d0._4_4_ = local_1d8[0]._4_4_;
    uStack_3c8._0_1_ = local_1d8[0].Data4[0];
    uStack_3c8._1_1_ = local_1d8[0].Data4[1];
    uStack_3c8._2_1_ = local_1d8[0].Data4[2];
    uStack_3c8._3_1_ = local_1d8[0].Data4[3];
    local_1d8[0].Data4._4_4_ = GVar5.Data4._4_4_;
    uVar7 = local_1d8[0].Data4._4_4_;
    uStack_3c8._4_1_ = local_1d8[0].Data4[4];
    uStack_3c8._5_1_ = local_1d8[0].Data4[5];
    uStack_3c8._6_1_ = local_1d8[0].Data4[6];
    uStack_3c8._7_1_ = local_1d8[0].Data4[7];
    local_1d8[0]._0_12_ = ZEXT812(0);
    local_1d8[0].Data4[4] = '\0';
    local_1d8[0].Data4[5] = '\0';
    local_1d8[0].Data4[6] = '\0';
    local_1d8[0].Data4[7] = '\0';
    iVar21 = iVar10 + uVar6;
    if (iVar21 < (int)uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar10);
    }
    if (iVar21 < 0) {
LAB_1431def6d:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar21);
    }
    if ((int)uVar7 < iVar21) {
      FUN_1446f8c06(&local_3d0);
    }
    FUN_1401aebe8(&local_3d0,*(undefined8 *)*pauVar43,iVar24);
    if (*(longlong *)*pauVar43 != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *)pauVar14[0xb] = CONCAT44(local_3d0._4_4_,(ulong)local_3d0);
    local_3d0._0_4_ = 0;
    local_3d0._4_4_ = 0;
    *(int *)(pauVar14[0xb] + 8) = (int)uStack_3c8;
    *(int *)(pauVar14[0xb] + 0xc) = uStack_3c8._4_4_;
    uStack_3c8._0_4_ = 0;
    uStack_3c8._4_4_ = 0;
    if (local_1d8[0]._0_8_ != 0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(*pauVar17 + 4,&local_520);
    puVar41 = &DAT_149dfb77a;
    ppuVar32 = (undefined **)&DAT_149dfb77a;
    if (local_518 != 0) {
      ppuVar32 = local_520;
    }
    if (*(int *)(*pauVar14 + 8) != 0) {
      puVar41 = *(undefined2 **)*pauVar14;
    }
    FUN_140002266(local_1d8,L"%s_%s.upipelinecache",puVar41,ppuVar32);
    puVar15 = (undefined8 *)FUN_14047ac8c();
    iVar24 = local_1d8[0].Data4._0_4_ + -1;
    if (local_1d8[0].Data4._0_4_ == 0) {
      iVar24 = 0;
    }
    iVar10 = *(int *)(puVar15 + 1);
    iVar19 = iVar24 + 1 + (uint)((longlong)iVar10 == 0);
    local_3d0._0_4_ = 0;
    local_3d0._4_4_ = 0;
    pvVar3 = (void *)*puVar15;
    uStack_3c8._0_4_ = iVar10;
    if (iVar19 == 0 && iVar10 == 0) {
      uStack_3c8._4_4_ = 0;
    }
    else {
      iVar21 = iVar19 + iVar10;
      if (iVar19 < 0) goto LAB_1431def6d;
      FUN_1446dd670(&local_3d0,iVar21,0);
      if (iVar10 != 0) {
        memcpy((void *)CONCAT44(local_3d0._4_4_,(ulong)local_3d0),pvVar3,(longlong)iVar10 * 2);
      }
    }
    FUN_1401aebe8(&local_3d0,local_1d8[0]._0_8_,iVar24);
    if (*(longlong *)pauVar14[9] != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *)pauVar14[9] = CONCAT44(local_3d0._4_4_,(ulong)local_3d0);
    local_3d0._0_4_ = 0;
    local_3d0._4_4_ = 0;
    *(int *)(pauVar14[9] + 8) = (int)uStack_3c8;
    *(int *)(pauVar14[9] + 0xc) = uStack_3c8._4_4_;
    uStack_3c8._0_4_ = 0;
    uStack_3c8._4_4_ = 0;
    if (local_1d8[0]._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (local_520 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    pauVar17 = local_5c8 + 9;
    cVar8 = FUN_1431e6195();
    if (cVar8 != '\0') {
      plVar16 = (longlong *)FUN_14054d1d4();
      if (*(int *)(pauVar14[9] + 8) == 0) {
        puVar41 = &DAT_149dfb77a;
      }
      else {
        puVar41 = *(undefined2 **)*pauVar17;
      }
      cVar8 = (**(code **)(*plVar16 + 0x48))(plVar16,puVar41);
      if (cVar8 != '\0') {
        plVar16 = (longlong *)FUN_14054d1d4();
        if (*(int *)(pauVar14[9] + 8) == 0) {
          puVar41 = &DAT_149dfb77a;
        }
        else {
          puVar41 = *(undefined2 **)*pauVar17;
        }
        local_5f8 = (undefined2 *)((ulonglong)local_5f8 & 0xffffffffffffff00);
        (**(code **)(*plVar16 + 0x30))(plVar16,puVar41,0,0);
      }
    }
    FUN_140474144(&local_578,pauVar17,&DAT_14ca802f8);
    plVar16 = (longlong *)FUN_14054d1d4();
    puVar41 = local_578;
    if (local_570 == 0) {
      puVar41 = &DAT_149dfb77a;
    }
    cVar8 = (**(code **)(*plVar16 + 0x48))(plVar16,puVar41);
    if ((cVar8 != '\0') || (cVar9 = FUN_1431e6195(), cVar9 != '\0')) {
      plVar16 = (longlong *)FUN_14054d1d4();
      if (*(int *)(pauVar14[9] + 8) == 0) {
        puVar41 = &DAT_149dfb77a;
      }
      else {
        puVar41 = *(undefined2 **)*pauVar17;
      }
      cVar9 = (**(code **)(*plVar16 + 0x48))(plVar16,puVar41);
      if (cVar9 != '\0') {
        plVar16 = (longlong *)FUN_14054d1d4();
        if (*(int *)(pauVar14[9] + 8) == 0) {
          puVar41 = &DAT_149dfb77a;
        }
        else {
          puVar41 = *(undefined2 **)*pauVar17;
        }
        local_5f8 = (undefined2 *)((ulonglong)local_5f8 & 0xffffffffffffff00);
        (**(code **)(*plVar16 + 0x30))(plVar16,puVar41,0,0);
      }
      if (cVar8 != '\0') {
        plVar16 = (longlong *)FUN_14054d1d4();
        puVar41 = local_578;
        if (local_570 == 0) {
          puVar41 = &DAT_149dfb77a;
        }
        local_5f8 = (undefined2 *)((ulonglong)local_5f8 & 0xffffffffffffff00);
        (**(code **)(*plVar16 + 0x30))(plVar16,puVar41,0,0);
      }
    }
    lVar34 = DAT_14ca803c0;
    uVar23 = 0;
    local_408 = 0;
    local_400 = 0;
    local_428 = 0;
    uStack_420 = 0;
    local_3fc = 0xffffffff00000080;
    local_3f4 = 0;
    local_3e8 = 0;
    local_3e0 = 0;
    lVar42 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar24 = *(int *)(lVar42 + 0xc60);
    if (iVar24 != 0x40000002) {
      bVar44 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
        if (iVar24 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar44 = DVar12 == DVar13;
        }
        else {
          bVar44 = false;
        }
      }
      uVar23 = (ulonglong)(bVar44 ^ 1);
    }
    pauVar43 = local_5c8 + 2;
    puVar25 = local_5c8[2] + 8;
    pauVar37 = local_5c8 + 8;
    iVar24 = *(int *)(lVar34 + uVar23 * 4);
    local_5c0 = pauVar37;
    if (-1 < iVar24) {
      plVar16 = (longlong *)FUN_14054d1d4();
      if (*(int *)(pauVar14[9] + 8) == 0) {
        puVar41 = &DAT_149dfb77a;
      }
      else {
        puVar41 = *(undefined2 **)pauVar14[9];
      }
      plVar16 = (longlong *)(**(code **)(*plVar16 + 0x18))(plVar16,puVar41,0);
      if (plVar16 != (longlong *)0x0) {
        local_5a0 = puVar25;
        (**(code **)(*plVar16 + 0x118))(plVar16,0x1c);
        iStack_454 = 0;
        iStack_450 = 0;
        iStack_44c = 0;
        iStack_448 = 0;
        local_5d0 = plVar16;
        FUN_14631ab44(plVar16,&local_468);
        if ((((local_468 == 0x5049504543414348) && (iStack_460 == 0x1c)) &&
            (iStack_45c == DAT_14ca8069c)) && (*(ushort *)pauVar14[1] == (ushort)(byte)local_458)) {
          auVar45._0_8_ = (double)iVar24 * 864000000000.0 + 0.5;
          auVar45._8_8_ = 0;
          auVar46 = roundpd(auVar45,auVar45,1);
          local_5a8 = pauVar43;
          FUN_140212f8e(local_1d8);
          uVar1 = local_1d8[0]._0_8_;
          local_5e0 = 0;
          local_5e8 = 0;
          local_5f0 = (undefined1 (*) [16])((ulonglong)local_5f0 & 0xffffffff00000000);
          local_5f8 = (undefined2 *)((ulonglong)local_5f8 & 0xffffffff00000000);
          FUN_14021300e(&local_3d0,0x7b2,1,1);
          uVar23 = local_440;
          pauVar43 = local_5a8;
          lVar34 = (uVar1 - CONCAT44(local_3d0._4_4_,(ulong)local_3d0)) / 10000000;
          if (lVar34 < (longlong)((double)(longlong)auVar46._0_8_ / 10000000.0 + (double)local_438))
          goto LAB_1431ddf78;
          local_c8[0] = 2;
          local_a0 = (uint *)0x0;
          local_98 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_94 = 0xffffffff00000080;
          local_8c = 0;
          local_80 = 0;
          local_78 = 0;
          uVar35 = (**(code **)(*local_5d0 + 0x30))();
          plVar16 = local_5d0;
          if (uVar23 < uVar35) {
            (**(code **)(*local_5d0 + 0x1a0))(local_5d0,local_440);
            FUN_140836dc0(plVar16,local_c8);
            if ((*(byte *)((longlong)plVar16 + 0x29) & 2) == 0) goto LAB_1431de456;
          }
          else {
LAB_1431de456:
            lVar39 = DAT_14ca803a8;
            iVar24 = *(int *)(lVar42 + 0xc60);
            uVar23 = 0;
            local_5b8 = pauVar17;
            if (iVar24 == 0x40000002) {
              uVar35 = 0;
            }
            else {
              bVar44 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
                if (iVar24 == 1) {
                  DVar12 = FUN_140ad26c0();
                  DVar13 = GetCurrentThreadId();
                  bVar44 = DVar12 == DVar13;
                }
                else {
                  bVar44 = false;
                }
              }
              uVar35 = (ulonglong)(bVar44 ^ 1);
            }
            plVar16 = local_5d0;
            uVar22 = 1;
            iVar24 = 0;
            uVar38 = 0;
            pauVar17 = local_5b8;
            pauVar37 = local_5c0;
            if (local_98 != 0) {
              puVar18 = local_a0;
              if (local_a0 == (uint *)0x0) {
                puVar18 = local_b0;
              }
              uVar38 = *puVar18;
              if (uVar38 == 0) {
                iVar24 = local_98 + 0x1e;
                if (-1 < (int)(local_98 - 1)) {
                  iVar24 = local_98 - 1;
                }
                uVar23 = 0;
                uVar22 = (ulonglong)(uint)(iVar24 >> 5);
                if (iVar24 >> 5 < 1) {
                  uVar22 = uVar23;
                }
                iVar24 = 0;
                do {
                  if (uVar22 == uVar23) goto LAB_1431dee49;
                  iVar24 = iVar24 + 0x20;
                  uVar38 = puVar18[uVar23 + 1];
                  uVar23 = uVar23 + 1;
                } while (uVar38 == 0);
              }
              else {
                uVar23 = 0;
              }
              uVar22 = (ulonglong)(-uVar38 & uVar38);
              uVar36 = uVar22 * 2 + 1;
              lVar42 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar42 == 0; lVar42 = lVar42 + -1) {
                }
              }
              uVar38 = (iVar24 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
              if ((int)local_98 <= (int)uVar38) {
                uVar38 = local_98;
              }
            }
            if (uVar38 != local_98) {
              auVar47._0_8_ = (double)*(int *)(lVar39 + uVar35 * 4) * 864000000000.0 + 0.5;
              auVar47._8_8_ = 0;
              auVar46 = roundpd(auVar47,auVar47,1);
              lVar42 = lVar34 - (longlong)((double)(longlong)auVar46._0_8_ / 10000000.0);
              puVar18 = local_a0;
              if (local_a0 == (uint *)0x0) {
                puVar18 = local_b0;
              }
              iVar10 = local_98 + 0x1e;
              if (-1 < (int)(local_98 - 1)) {
                iVar10 = local_98 - 1;
              }
              iVar10 = iVar10 >> 5;
              uVar29 = 0xffffffff;
              iVar21 = 0;
              do {
                iVar21 = (uint)(*(longlong *)(local_c0 + 0xa8 + (longlong)(int)uVar38 * 0xc0) <=
                               lVar42) + iVar21;
                uVar29 = ~(uint)uVar22 & uVar29;
                iVar19 = (int)uVar23;
                lVar39 = (longlong)iVar19;
                uVar38 = puVar18[lVar39] & uVar29;
                if (uVar38 == 0) {
                  iVar11 = iVar10;
                  if (iVar10 < iVar19) {
                    iVar11 = iVar19;
                  }
                  if (iVar10 <= iVar19) break;
                  lVar40 = 0;
                  while( true ) {
                    iVar24 = iVar24 + 0x20;
                    uVar38 = puVar18[lVar39 + lVar40 + 1];
                    if (uVar38 != 0) break;
                    lVar40 = lVar40 + 1;
                    if (iVar11 - lVar39 == lVar40) goto LAB_1431de65b;
                  }
                  uVar23 = (ulonglong)(iVar19 + (int)lVar40 + 1);
                  uVar29 = 0xffffffff;
                }
                uVar22 = (ulonglong)(-uVar38 & uVar38);
                uVar35 = uVar22 * 2 + 1;
                lVar39 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                  }
                }
                uVar38 = (iVar24 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
              } while ((int)uVar38 < (int)local_98);
LAB_1431de65b:
              pauVar43 = local_5a8;
              local_5d8 = pauVar14;
              if (iVar21 != 0) {
                if (iVar21 == (int)uStack_b8 - local_8c) {
                  (**(code **)(*local_5d0 + 0x1f8))(local_5d0);
                  (**(code **)*plVar16)(plVar16,1);
                  plVar16 = (longlong *)FUN_14054d1d4();
                  if (*(int *)(local_5d8[9] + 8) == 0) {
                    puVar41 = &DAT_149dfb77a;
                  }
                  else {
                    puVar41 = *(undefined2 **)local_5d8[9];
                  }
                  cVar8 = (**(code **)(*plVar16 + 0x48))(plVar16,puVar41);
                  if (cVar8 != '\0') {
                    plVar16 = (longlong *)FUN_14054d1d4();
                    if (*(int *)(local_5d8[9] + 8) == 0) {
                      puVar41 = &DAT_149dfb77a;
                    }
                    else {
                      puVar41 = *(undefined2 **)local_5d8[9];
                    }
                    local_5f8 = (undefined2 *)((ulonglong)local_5f8 & 0xffffffffffffff00);
                    local_5d0 = (longlong *)0x0;
                    (**(code **)(*plVar16 + 0x30))(plVar16,puVar41,0,0);
                    pauVar17 = local_5b8;
                    pauVar14 = local_5d8;
                    pauVar37 = local_5c0;
                    pauVar43 = local_5a8;
                    goto LAB_1431dee49;
                  }
                }
                else {
                  local_478 = (undefined1  [16])0x0;
                  memset(&local_520,0,0x90);
                  FUN_144869430(&local_520);
                  local_490 = 0;
                  local_520 = &PTR_FUN_149e1e590;
                  local_480 = 0;
                  local_4f8 = local_4f8 | 4;
                  local_488 = local_478;
                  FUN_1449c2eca(&local_520,0);
                  local_520 = &PTR_FUN_149e1e330;
                  FUN_1447a7c5a(&local_520,0x1c);
                  local_548 = CONCAT44(iStack_454,local_458);
                  uStack_540 = CONCAT44(iStack_44c,iStack_450);
                  local_558 = local_468;
                  local_538 = CONCAT44(uStack_444,iStack_448);
                  _uStack_550 = CONCAT44(iStack_45c,0x1c);
                  local_530 = 0;
                  local_528 = lVar34;
                  FUN_14631ab44(&local_520);
                  local_f8 = 0;
                  local_f0 = 0;
                  local_118[0] = (undefined1  [16])0x0;
                  local_ec = 0xffffffff00000080;
                  local_e4 = 0;
                  local_d8 = 0;
                  uVar22 = 0;
                  local_d0 = 0;
                  uVar35 = (ulonglong)local_98;
                  local_120[0] = local_c8[0];
                  uVar36 = 1;
                  iVar24 = 0;
                  uVar23 = 0;
                  local_5b0 = uVar35;
                  if (local_98 != 0) {
                    puVar18 = local_a0;
                    if (local_a0 == (uint *)0x0) {
                      puVar18 = local_b0;
                    }
                    uVar38 = *puVar18;
                    if (uVar38 == 0) {
                      iVar24 = local_98 + 0x1e;
                      if (-1 < (int)(local_98 - 1)) {
                        iVar24 = local_98 - 1;
                      }
                      uVar22 = 0;
                      uVar29 = iVar24 >> 5;
                      if (iVar24 >> 5 < 1) {
                        uVar29 = 0;
                      }
                      iVar24 = 0;
                      do {
                        if (uVar29 == uVar22) goto LAB_1431de876;
                        iVar24 = iVar24 + 0x20;
                        uVar38 = puVar18[uVar22 + 1];
                        uVar22 = uVar22 + 1;
                      } while (uVar38 == 0);
                    }
                    else {
                      uVar22 = 0;
                      iVar24 = 0;
                    }
                    uVar36 = (ulonglong)(-uVar38 & uVar38);
                    uVar23 = uVar36 * 2 + 1;
                    lVar34 = 0x3f;
                    if (uVar23 != 0) {
                      for (; uVar23 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                      }
                    }
                    uVar38 = (iVar24 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
                    uVar23 = (ulonglong)uVar38;
                    if ((int)local_98 <= (int)uVar38) {
                      uVar23 = uVar35;
                    }
                  }
                  if ((uint)uVar23 != local_98) {
                    uVar38 = 0xffffffff;
                    uVar27 = uVar35;
                    do {
                      lVar34 = (longlong)(int)uVar23 * 0xc0;
                      if (lVar42 < *(longlong *)(local_c0 + 0xa8 + lVar34)) {
                        lVar39 = local_c0 + lVar34;
                        local_598 = (undefined8 *)(local_c0 + lVar34 + 8);
                        puVar15 = local_598;
                        pGVar28 = local_1d8;
                        for (lVar34 = 9; lVar34 != 0; lVar34 = lVar34 + -1) {
                          uVar1 = *puVar15;
                          pGVar28->Data1 = (int)uVar1;
                          pGVar28->Data2 = (short)((ulonglong)uVar1 >> 0x20);
                          pGVar28->Data3 = (short)((ulonglong)uVar1 >> 0x30);
                          puVar15 = puVar15 + 1;
                          pGVar28 = (GUID *)pGVar28->Data4;
                        }
                        local_170 = 0;
                        local_168 = 0;
                        local_190[0] = (undefined1  [16])0x0;
                        local_164 = 0xffffffff00000080;
                        local_15c = 0;
                        local_150 = 0;
                        local_148 = 0;
                        FUN_1404114b2(local_190,lVar39 + 0x50);
                        plVar16 = local_5d0;
                        local_130 = *(undefined2 *)(lVar39 + 0xb0);
                        local_140 = *(undefined8 *)(lVar39 + 0xa0);
                        uStack_138 = *(undefined8 *)(lVar39 + 0xa8);
                        if (((*(int *)(lVar39 + 0x18) == iStack_454) &&
                            (*(int *)(lVar39 + 0x1c) == iStack_450)) &&
                           ((*(int *)(lVar39 + 0x20) == iStack_44c &&
                            ((*(int *)(lVar39 + 0x24) == iStack_448 &&
                             (auVar4 = *(uchar (*) [8])(lVar39 + 0x10), auVar4 != (uchar  [8])0x0)))
                            ))) {
                          local_1d8[0].Data4[0] = auVar4[0];
                          local_1d8[0].Data4[1] = auVar4[1];
                          local_1d8[0].Data4[2] = auVar4[2];
                          local_1d8[0].Data4[3] = auVar4[3];
                          local_1d8[0].Data4[4] = auVar4[4];
                          local_1d8[0].Data4[5] = auVar4[5];
                          local_1d8[0].Data4[6] = auVar4[6];
                          local_1d8[0].Data4[7] = auVar4[7];
                          local_1d8[0].Data1 = (undefined4)local_490;
                          local_1d8[0].Data2 = local_490._4_2_;
                          local_1d8[0].Data3 = local_490._6_2_;
                          local_2cc = 0;
                          local_36c = (undefined1  [16])0x0;
                          local_37c = (undefined1  [16])0x0;
                          local_38c = (undefined1  [16])0x0;
                          local_39c = (undefined1  [16])0x0;
                          local_3ac = (undefined1  [16])0x0;
                          uStack_3bc = 0;
                          auStack_3b8 = SUB1612((undefined1  [16])0x0,4);
                          local_3d0._4_4_ = 0;
                          uStack_3c8._0_4_ = 0;
                          uStack_3c8._4_4_ = 0;
                          uStack_3c0 = 0;
                          local_35c = 0;
                          local_2c8 = 0x11;
                          lVar34 = 0x112;
                          do {
                            *(undefined4 *)((longlong)&uStack_3d6 + lVar34) = 0x100;
                            *(undefined2 *)((longlong)&uStack_3d2 + lVar34) = 1;
                            *(undefined1 *)((longlong)&local_3d0 + lVar34) = 0xf;
                            lVar34 = lVar34 + 7;
                          } while (lVar34 != 0x14a);
                          local_288 = 0;
                          local_280 = 0;
                          local_27c = 0x7000101;
                          local_274 = 7;
                          local_270 = 0xffff;
                          local_1e8 = 0;
                          local_1f8 = (undefined1  [16])0x0;
                          local_1e0 = 6;
                          (**(code **)(*local_5d0 + 0x1a0))(local_5d0,*local_598);
                          FUN_140e712cd(plVar16,&local_3d0);
                          FUN_140e712cd(&local_520,&local_3d0);
                        }
                        uStack_3c8 = local_1d8;
                        local_3d0 = lVar39;
                        FUN_14740dffc(local_118,local_42c,&local_3d0);
                        local_148 = 0;
                        if (local_150 != 0) {
                          FUN_1400020a8();
                        }
                        FUN_1404112b2(local_190);
                        uVar35 = (ulonglong)local_98;
                        uVar27 = local_5b0;
                      }
                      uVar38 = uVar38 & ~(uint)uVar36;
                      puVar18 = local_a0;
                      if (local_a0 == (uint *)0x0) {
                        puVar18 = local_b0;
                      }
                      iVar10 = (int)uVar22;
                      lVar34 = (longlong)iVar10;
                      uVar29 = puVar18[lVar34] & uVar38;
                      iVar21 = (int)uVar35;
                      if (uVar29 == 0) {
                        iVar19 = iVar21 + 0x1e;
                        if (-1 < iVar21 + -1) {
                          iVar19 = iVar21 + -1;
                        }
                        iVar19 = iVar19 >> 5;
                        iVar24 = iVar24 + 0x20;
                        iVar11 = iVar19;
                        if (iVar19 < iVar10) {
                          iVar11 = iVar10;
                        }
                        if (iVar10 < iVar19) {
                          lVar39 = 0;
                          do {
                            uVar29 = puVar18[lVar34 + lVar39 + 1];
                            if (uVar29 != 0) {
                              uVar22 = (ulonglong)(iVar10 + (int)lVar39 + 1);
                              uVar38 = 0xffffffff;
                              goto LAB_1431dea34;
                            }
                            iVar24 = iVar24 + 0x20;
                            lVar39 = lVar39 + 1;
                          } while (iVar11 - lVar34 != lVar39);
                          uVar38 = 0xffffffff;
                          iVar10 = iVar11;
                        }
                        uVar22 = (ulonglong)(iVar10 + 1);
                        uVar23 = uVar35;
                        uVar27 = local_5b0;
                      }
                      else {
LAB_1431dea34:
                        uVar36 = (ulonglong)(-uVar29 & uVar29);
                        uVar23 = uVar36 * 2 + 1;
                        lVar34 = 0x3f;
                        if (uVar23 != 0) {
                          for (; uVar23 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                          }
                        }
                        uVar29 = (iVar24 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
                        uVar23 = (ulonglong)uVar29;
                        if (iVar21 <= (int)uVar29) {
                          uVar23 = uVar35;
                        }
                      }
                    } while ((int)uVar23 != (int)uVar27);
                  }
LAB_1431de876:
                  local_530 = local_490;
                  FUN_140836dc0(&local_520,local_120);
                  local_490 = 0;
                  FUN_14631ab44(&local_520,&local_558);
                  plVar16 = local_5d0;
                  (**(code **)(*local_5d0 + 0x30))(local_5d0);
                  (**(code **)(*plVar16 + 0x1f8))(plVar16);
                  (**(code **)*plVar16)(plVar16,1);
                  plVar16 = (longlong *)FUN_14054d1d4();
                  if (*(int *)(local_5d8[9] + 8) == 0) {
                    puVar41 = &DAT_149dfb77a;
                  }
                  else {
                    puVar41 = *(undefined2 **)local_5d8[9];
                  }
                  cVar8 = (**(code **)(*plVar16 + 0x48))(plVar16,puVar41);
                  if (cVar8 != '\0') {
                    plVar16 = (longlong *)FUN_14054d1d4();
                    if (*(int *)(local_5d8[9] + 8) == 0) {
                      puVar41 = &DAT_149dfb77a;
                    }
                    else {
                      puVar41 = *(undefined2 **)local_5d8[9];
                    }
                    local_5f8 = (undefined2 *)((ulonglong)local_5f8 & 0xffffffffffffff00);
                    (**(code **)(*plVar16 + 0x30))(plVar16,puVar41,0,0);
                  }
                  plVar16 = (longlong *)FUN_14054d1d4();
                  if (*(int *)(local_5d8[9] + 8) == 0) {
                    puVar41 = &DAT_149dfb77a;
                  }
                  else {
                    puVar41 = *(undefined2 **)local_5d8[9];
                  }
                  plVar16 = (longlong *)(**(code **)(*plVar16 + 0x20))(plVar16,puVar41,0);
                  if (plVar16 != (longlong *)0x0) {
                    (**(code **)(*plVar16 + 0x170))
                              (plVar16,local_478._0_8_,(longlong)*(int *)(local_488 + 8));
                    (**(code **)(*plVar16 + 0x1f8))(plVar16);
                    (**(code **)*plVar16)(plVar16,1);
                  }
                  local_d0 = 0;
                  if (local_d8 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14631b528(local_118);
                  local_520 = &PTR__purecall_149e35f70;
                  if (local_4c8 != (longlong *)0x0) {
                    if (*local_4c8 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1400020a8(local_4c8);
                  }
                  if (local_4a8 != 0) {
                    if (*(longlong *)(local_4a8 + 0x40) != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1400020a8(local_4a8);
                  }
                  if (local_478._0_8_ != 0) {
                    FUN_1400020a8();
                  }
                }
                local_5d0 = (longlong *)0x0;
                pauVar17 = local_5b8;
                pauVar14 = local_5d8;
                pauVar37 = local_5c0;
                pauVar43 = local_5a8;
              }
            }
          }
LAB_1431dee49:
          local_78 = 0;
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          FUN_14631b528(&local_c0);
          puVar25 = local_5a0;
          if (local_5d0 == (longlong *)0x0) goto LAB_1431ddfa5;
        }
        else {
LAB_1431ddf78:
        }
        puVar25 = local_5a0;
        plVar16 = local_5d0;
        (**(code **)(*local_5d0 + 0x1f8))();
        (**(code **)*plVar16)(plVar16,1);
      }
    }
LAB_1431ddfa5:
    local_3d0._0_4_ = 2;
    uVar23 = 0;
    local_3ac = ZEXT416((uint)local_3ac._0_4_);
    uStack_3c8._0_4_ = 0;
    uStack_3c8._4_4_ = 0;
    uStack_3c0 = 0;
    uStack_3bc = 0;
    local_39c._0_12_ = ZEXT812(0xffffffff00000080);
    local_38c._4_8_ = 0;
    local_5f8 = (undefined2 *)puVar25;
    local_5f0 = pauVar43;
    local_5d0 = (longlong *)
                FUN_1431e5f4c(pauVar17,*(undefined2 *)pauVar14[1],pauVar37,local_5c8 + 10);
    pauVar14[0xc][0] = (byte)local_5d0 ^ 3;
    if ((byte)local_5d0 == 0) {
      local_1d8[0].Data1 = 0;
      local_1d8[0].Data2 = 0;
      local_1d8[0].Data3 = 0;
      local_1d8[0].Data4[0] = '\0';
      local_1d8[0].Data4[1] = '\0';
      local_1d8[0].Data4[2] = '\0';
      local_1d8[0].Data4[3] = '\0';
      local_1d8[0].Data4[4] = '\0';
      local_1d8[0].Data4[5] = '\0';
      local_1d8[0].Data4[6] = '\0';
      local_1d8[0].Data4[7] = '\0';
      CoCreateGuid(local_1d8);
      GVar5 = local_1d8[0];
      *(ulong *)((longlong)pauVar37 + 0) = local_1d8[0].Data1;
      *(ushort *)((longlong)pauVar37 + 4) = local_1d8[0].Data2;
      *(ushort *)((longlong)pauVar37 + 6) = local_1d8[0].Data3;
      *(uchar (*) [8])(*pauVar37 + 8) = local_1d8[0].Data4;
      local_1d8[0] = GVar5;
      plVar16 = (longlong *)FUN_14054d1d4();
      if (*(int *)(pauVar14[9] + 8) == 0) {
        puVar41 = &DAT_149dfb77a;
      }
      else {
        puVar41 = *(undefined2 **)*pauVar17;
      }
      local_5f8 = (undefined2 *)((ulonglong)local_5f8 & 0xffffffffffffff00);
      (**(code **)(*plVar16 + 0x30))(plVar16,puVar41,0,0);
      *(undefined8 *)*pauVar43 = 0;
    }
    local_5c8 = local_5c8 + 4;
    iVar24 = *(int *)(pauVar14[5] + 8);
    uVar35 = 1;
    iVar21 = 0;
    iVar10 = 0;
    if (iVar24 != 0) {
      pauVar17 = *(undefined1 (**) [16])pauVar14[5];
      if (*(undefined1 (**) [16])pauVar14[5] == (undefined1 (*) [16])0x0) {
        pauVar17 = local_5c8;
      }
      uVar38 = *(uint *)*pauVar17;
      if (uVar38 == 0) {
        iVar10 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar10 = iVar24 + -1;
        }
        uVar23 = 0;
        uVar35 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar35 = uVar23;
        }
        iVar21 = 0;
        do {
          if (uVar35 == uVar23) goto LAB_1431de113;
          iVar21 = iVar21 + 0x20;
          uVar38 = *(uint *)(*pauVar17 + uVar23 * 4 + 4);
          uVar23 = uVar23 + 1;
        } while (uVar38 == 0);
      }
      else {
        uVar23 = 0;
      }
      uVar35 = (ulonglong)(-uVar38 & uVar38);
      uVar22 = uVar35 * 2 + 1;
      lVar42 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar42 == 0; lVar42 = lVar42 + -1) {
        }
      }
      iVar10 = (iVar21 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
      if (iVar24 <= iVar10) {
        iVar10 = iVar24;
      }
    }
    if (iVar10 != iVar24) {
      uVar38 = 0xffffffff;
      iVar11 = DAT_14ca80560;
      iVar20 = DAT_14ca8058c;
      iVar19 = iVar24;
      do {
        if (iVar11 != iVar20) {
          uVar29 = *(uint *)(*(longlong *)*local_588 + (longlong)iVar10 * 0xc0);
          puVar33 = DAT_14ca80598;
          if (DAT_14ca80598 == (undefined *)0x0) {
            puVar33 = &DAT_14ca80590;
          }
          uVar2 = *(uint *)(puVar33 + (ulonglong)(DAT_14ca805a0 - 1U & uVar29) * 4);
          while (uVar2 != 0xffffffff) {
            puVar18 = (uint *)(DAT_14ca80558 + (longlong)(int)uVar2 * 0x18);
            if (*puVar18 == uVar29) {
              if ((puVar18 != (uint *)0x0) && (*(longlong *)(puVar18 + 2) != 0)) goto LAB_1431de2ea;
              break;
            }
            uVar2 = puVar18[4];
          }
        }
        puVar26 = (undefined4 *)(*(longlong *)*local_588 + (longlong)iVar10 * 0xc0);
        local_520 = (undefined **)FUN_14001cc68(0x28,0x10);
        *(undefined4 *)local_520 = 0xffffffff;
        *(undefined4 *)((longlong)local_520 + 4) = 0xffffffff;
        *(undefined4 *)(local_520 + 1) = 0xffffffff;
        *(undefined4 *)((longlong)local_520 + 0xc) = 0xffffffff;
        local_520[2] = (undefined *)0x0;
        local_520[3] = (undefined *)0x0;
        *(undefined4 *)(local_520 + 4) = 0;
        *(undefined4 *)(local_520 + 4) = *puVar26;
        local_520[3] = (undefined *)0xffffffffffffffff;
        local_1d8[0].Data4 = (uchar  [8])&local_520;
        local_1d8[0]._0_8_ = puVar26;
        FUN_14151e2ce(local_c8,local_1d8);
        iVar19 = *(int *)(pauVar14[5] + 8);
        iVar11 = DAT_14ca80560;
        iVar20 = DAT_14ca8058c;
LAB_1431de2ea:
        uVar38 = uVar38 & ~(uint)uVar35;
        pauVar17 = *(undefined1 (**) [16])pauVar14[5];
        if (*(undefined1 (**) [16])pauVar14[5] == (undefined1 (*) [16])0x0) {
          pauVar17 = local_5c8;
        }
        iVar10 = (int)uVar23;
        lVar42 = (longlong)iVar10;
        uVar29 = *(uint *)(*pauVar17 + lVar42 * 4) & uVar38;
        if (uVar29 == 0) {
          iVar30 = iVar19 + 0x1e;
          if (-1 < iVar19 + -1) {
            iVar30 = iVar19 + -1;
          }
          iVar30 = iVar30 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar31 = iVar30;
          if (iVar30 < iVar10) {
            iVar31 = iVar10;
          }
          if (iVar10 < iVar30) {
            lVar34 = 0;
            do {
              uVar29 = *(uint *)(*pauVar17 + lVar34 * 4 + lVar42 * 4 + 4);
              if (uVar29 != 0) {
                uVar23 = (ulonglong)(iVar10 + (int)lVar34 + 1);
                uVar38 = 0xffffffff;
                goto LAB_1431de369;
              }
              iVar21 = iVar21 + 0x20;
              lVar34 = lVar34 + 1;
            } while (iVar31 - lVar42 != lVar34);
            uVar38 = 0xffffffff;
            lVar42 = (longlong)iVar31;
          }
          uVar23 = lVar42 + 1U & 0xffffffff;
          iVar10 = iVar19;
        }
        else {
LAB_1431de369:
          uVar35 = (ulonglong)(-uVar29 & uVar29);
          uVar22 = uVar35 * 2 + 1;
          lVar42 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar42 == 0; lVar42 = lVar42 + -1) {
            }
          }
          iVar10 = (iVar21 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
          if (iVar19 <= iVar10) {
            iVar10 = iVar19;
          }
        }
      } while (iVar10 != iVar24);
    }
LAB_1431de113:
    local_38c._12_4_ = 0;
    FUN_14631b528(&uStack_3c8);
    local_3e0 = 0;
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_428);
    param_4 = local_590;
    pauVar17 = local_5c0;
    plVar16 = local_5d0;
    if (local_578 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_3d0._0_4_ = 0x4ca80660;
    local_3d0._4_4_ = 1;
    uStack_3c8 = (GUID *)&local_580;
    FUN_14610fba4(local_1d8,&local_3d0);
    local_3d0._0_4_ = (ulong)pauVar17;
    local_3d0._4_4_ = (undefined4)((ulonglong)pauVar17 >> 0x20);
    uStack_3c8._0_4_ = 0x4ca80660;
    uStack_3c8._4_4_ = 1;
    FUN_146160452(local_1d8,&local_3d0);
    pauVar17 = local_580;
    if (local_580 != (undefined1 (*) [16])0x0) {
      FUN_14153869a(local_580);
      FUN_1400020a8(pauVar17);
    }
  }
  uVar1 = *(undefined8 *)(pauVar14[8] + 8);
  *param_4 = *(undefined8 *)pauVar14[8];
  param_4[1] = uVar1;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
LAB_1431dd63f:
  if ((local_70 ^ (ulonglong)auStack_618) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar16 & 0xffffffff;
}



// FUNCTION 1431defba FUN_1431defba body=155 status=ok
// SIG undefined FUN_1431defba(void)

undefined8 FUN_1431defba(ulonglong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1403966e6();
  if ((cVar1 != '\0') && (cVar1 = FUN_140396614(), cVar1 != '\0')) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
    lVar2 = FUN_140f058b4(&DAT_14ca80660);
    if ((lVar2 == 0) ||
       (cVar1 = FUN_1431df056(lVar2,param_1 & 0xffffffff,&DAT_14ca80558,&DAT_14ca805a8,DAT_14c760d60
                              ,&DAT_14ca80508), cVar1 == '\0')) {
      uVar3 = 0;
    }
    else {
      DAT_14ca80658 = DAT_14ca805b0 - DAT_14ca805dc;
      uVar3 = CONCAT71((int7)((param_1 & 0xffffffff) >> 8),1);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1431df056 FUN_1431df056 body=8316 status=ok
// SIG undefined FUN_1431df056(void)

ulonglong FUN_1431df056(uint *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                       uint param_5,longlong param_6)

{
  byte bVar1;
  void *pvVar2;
  bool bVar3;
  undefined **ppuVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  uint *puVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  uint *puVar24;
  uint uVar25;
  ushort uVar26;
  longlong lVar27;
  ushort uVar28;
  uint *puVar29;
  undefined2 *puVar30;
  ulonglong uVar31;
  int iVar32;
  uint uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  undefined1 auStack_528 [32];
  uint local_508;
  undefined4 local_500;
  undefined4 local_4f8;
  undefined4 local_4f0;
  longlong *local_4e8;
  longlong *local_4e0;
  uint *local_4d8;
  ulonglong local_4d0;
  longlong *local_4c8;
  longlong *local_4c0;
  uint local_4b4;
  longlong local_4b0;
  undefined2 *local_4a8;
  int local_49c;
  uint *local_498;
  uint *local_490;
  uint *local_488;
  longlong local_480;
  longlong local_478;
  uint local_46c;
  undefined8 local_468;
  undefined4 local_460;
  uint local_45c;
  undefined1 local_458;
  uint local_454;
  uint uStack_450;
  uint uStack_44c;
  uint uStack_448;
  ulonglong local_440;
  longlong local_438;
  longlong local_430;
  undefined2 *local_428;
  uint local_420;
  undefined4 local_41c;
  longlong local_418;
  undefined8 uStack_410;
  longlong *local_400;
  undefined2 *local_3f8;
  uint local_3f0;
  int local_3ec;
  undefined1 local_3e8 [26];
  undefined4 uStack_3ce;
  undefined2 uStack_3ca;
  LARGE_INTEGER local_3c8;
  uint uStack_3c0;
  uint uStack_3bc;
  uint uStack_3b8;
  uint uStack_3b4;
  uint uStack_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  uint local_388 [2];
  longlong local_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined1 auStack_370 [12];
  undefined1 local_364 [16];
  undefined8 local_354;
  undefined4 local_34c;
  longlong local_340;
  undefined4 local_338;
  undefined1 local_330 [16];
  undefined2 local_320;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_274;
  undefined4 local_26c;
  undefined2 local_268;
  undefined1 local_1f0 [16];
  undefined8 local_1e0;
  undefined1 local_1d8;
  uint *local_1c8;
  LARGE_INTEGER *pLStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  int local_194;
  undefined1 local_190 [8];
  undefined1 *local_188;
  int local_180;
  undefined **local_170;
  longlong local_168;
  undefined8 uStack_160;
  uint local_158 [4];
  uint *local_148;
  uint local_140;
  undefined8 local_13c;
  int local_134;
  undefined1 local_130 [8];
  undefined1 *local_128;
  int local_120;
  longlong *local_118;
  longlong local_f8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  uint local_b8 [4];
  uint *local_a8;
  int local_a0;
  uint local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_528;
  local_4e8 = param_4;
  QueryPerformanceCounter(&local_3c8);
  local_3f8 = (undefined2 *)0x0;
  local_3f0 = param_1[0x26];
  lVar22 = (longlong)(int)local_3f0;
  pvVar2 = *(void **)(param_1 + 0x24);
  if (lVar22 == 0) {
    local_3ec = 0;
  }
  else {
    FUN_1446dd670(&local_3f8,local_3f0,0);
    memcpy(local_3f8,pvVar2,lVar22 * 2);
  }
  iVar8 = (int)param_2;
  if (iVar8 == 1) {
    if (&local_3f8 != (undefined2 **)(param_1 + 0x2c)) {
      uVar33 = param_1[0x2e];
      pvVar2 = *(void **)(param_1 + 0x2c);
      local_3f0 = uVar33;
      if (uVar33 == 0 && local_3ec == 0) {
        local_3ec = 0;
      }
      else {
        FUN_1446dd670(&local_3f8,uVar33);
        if (uVar33 != 0) {
          memcpy(local_3f8,pvVar2,(longlong)(int)uVar33 * 2);
        }
      }
    }
  }
  else if ((((iVar8 == 0) && ((int)local_4e8[1] == *(int *)((longlong)local_4e8 + 0x34))) &&
           (param_1[10] == param_5)) &&
          (uVar35 = CONCAT71((uint7)((ulonglong)param_2 >> 8) & 0xffffff,1),
          *(int *)(param_6 + 8) == *(int *)(param_6 + 0x34))) goto LAB_1431df647;
  local_4e0 = param_3;
  local_4d8 = param_1;
  FUN_140212f8e(&local_170);
  ppuVar4 = local_170;
  local_4f0 = 0;
  local_4f8 = 0;
  local_500 = 0;
  local_508 = 0;
  FUN_14021300e(&local_3c8,0x7b2,1,1);
  lVar22 = ((longlong)ppuVar4 - CONCAT44(local_3c8.s.HighPart,local_3c8.s.LowPart)) / 10000000;
  if (iVar8 == 1) {
    uVar33 = 0;
    puVar30 = (undefined2 *)0x0;
LAB_1431df235:
    puVar14 = local_3f8;
    local_400 = &local_c8;
    local_a8 = (uint *)0x0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0x80;
    uStack_98 = 0xffffffff;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_418 = 0;
    uStack_410 = 0;
    local_428 = (undefined2 *)0x0;
    lVar23 = (longlong)(int)local_3f0;
    local_420 = local_3f0;
    if (lVar23 == 0) {
      local_41c = 0;
    }
    else {
      FUN_1446dd670(&local_428,local_3f0,0);
      memcpy(local_428,puVar14,lVar23 * 2);
    }
    if (iVar8 == 1) {
      plVar6 = (longlong *)FUN_14001cc68(0xa8,0x10);
      puVar14 = local_3f8;
      if (local_3f0 == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_430,puVar14,1);
      memset(plVar6,0,0x90);
      FUN_144869430(plVar6);
      plVar6[0x12] = 0;
      *plVar6 = (longlong)&PTR_FUN_149e1e590;
      plVar6[0x13] = (longlong)&local_418;
      plVar6[0x14] = local_430;
      *(byte *)(plVar6 + 5) = *(byte *)(plVar6 + 5) | 4;
      FUN_1449c2eca(plVar6,1);
      *plVar6 = (longlong)&PTR_FUN_149e1e330;
    }
    else {
      plVar6 = (longlong *)FUN_14054d1d4();
      FUN_140bee914(&local_3c8,&local_428);
      if (uStack_3c0 == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      else {
        puVar14 = (undefined2 *)CONCAT44(local_3c8.s.HighPart,local_3c8.s.LowPart);
      }
      (**(code **)(*plVar6 + 0x58))(plVar6,puVar14,1);
      if (CONCAT44(local_3c8.s.HighPart,local_3c8.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      plVar6 = (longlong *)FUN_14054d1d4();
      puVar14 = local_428;
      if (local_420 == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,puVar14,8);
    }
    iVar32 = 0;
    if (plVar6 == (longlong *)0x0) {
      bVar3 = true;
      uVar35 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x118))(plVar6,0x1c);
      (**(code **)(*plVar6 + 0x1a0))(plVar6,0);
      puVar29 = local_4d8;
      local_468 = 0x5049504543414348;
      local_460 = 0x1c;
      local_45c = DAT_14ca8069c;
      local_458 = (undefined1)local_4d8[4];
      local_454 = local_4d8[0x20];
      uStack_450 = local_4d8[0x21];
      uStack_44c = local_4d8[0x22];
      uStack_448 = local_4d8[0x23];
      local_440 = 0;
      local_438 = lVar22;
      FUN_14631ab44(plVar6);
      uVar19 = (**(code **)(*plVar6 + 0x28))(plVar6);
      uVar35 = *(ulonglong *)(puVar29 + 8);
      if (uVar35 < uVar19) {
        uVar35 = uVar19;
      }
      *(ulonglong *)(puVar29 + 8) = uVar35;
      iVar10 = DAT_14ca80440;
      local_4c0 = plVar6;
      local_49c = iVar8;
      if (iVar8 == 1) {
        local_170 = (undefined **)CONCAT44(local_170._4_4_,2);
        iVar32 = 0;
        local_148 = (uint *)0x0;
        local_140 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_13c = 0xffffffff00000080;
        local_134 = 0;
        local_128 = (undefined1 *)0x0;
        local_120 = 0;
        uVar19 = 1;
        uVar35 = 0;
        iVar8 = 0;
        if (DAT_14ca80440 != 0) {
          puVar29 = &DAT_14ca80428;
          if (DAT_14ca80438 != (uint *)0x0) {
            puVar29 = DAT_14ca80438;
          }
          uVar9 = *puVar29;
          if (uVar9 == 0) {
            iVar8 = DAT_14ca80440 + 0x1e;
            if (-1 < DAT_14ca80440 + -1) {
              iVar8 = DAT_14ca80440 + -1;
            }
            uVar35 = 0;
            uVar19 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar19 = 0;
            }
            iVar32 = 0;
            do {
              local_4b0 = lVar22;
              if (uVar19 == uVar35) goto LAB_1431df936;
              iVar32 = iVar32 + 0x20;
              uVar9 = puVar29[uVar35 + 1];
              uVar35 = uVar35 + 1;
            } while (uVar9 == 0);
          }
          else {
            iVar32 = 0;
            uVar35 = 0;
          }
          uVar19 = (ulonglong)(-uVar9 & uVar9);
          uVar34 = uVar19 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          iVar8 = (iVar32 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if (DAT_14ca80440 <= iVar8) {
            iVar8 = DAT_14ca80440;
          }
        }
        local_4b0 = lVar22;
        if (iVar8 != DAT_14ca80440) {
          uVar9 = 0xffffffff;
          do {
            FUN_147409704(&local_168,
                          *(longlong *)(DAT_14ca80418 + 0x10 + (longlong)iVar8 * 0x20) + 0x30);
            uVar9 = ~(uint)uVar19 & uVar9;
            puVar29 = DAT_14ca80438;
            if (DAT_14ca80438 == (uint *)0x0) {
              puVar29 = &DAT_14ca80428;
            }
            iVar8 = (int)uVar35;
            lVar22 = (longlong)iVar8;
            uVar12 = puVar29[lVar22] & uVar9;
            if (uVar12 == 0) {
              iVar11 = DAT_14ca80440 + 0x1e;
              if (-1 < DAT_14ca80440 + -1) {
                iVar11 = DAT_14ca80440 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar32 = iVar32 + 0x20;
              iVar20 = iVar11;
              if (iVar11 < iVar8) {
                iVar20 = iVar8;
              }
              if (iVar8 < iVar11) {
                lVar23 = 0;
                do {
                  uVar12 = puVar29[lVar22 + lVar23 + 1];
                  if (uVar12 != 0) {
                    uVar35 = (ulonglong)(iVar8 + (int)lVar23 + 1);
                    uVar9 = 0xffffffff;
                    goto LAB_1431e089d;
                  }
                  iVar32 = iVar32 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (iVar20 - lVar22 != lVar23);
                uVar9 = 0xffffffff;
                lVar22 = (longlong)iVar20;
              }
              uVar35 = lVar22 + 1U & 0xffffffff;
              iVar8 = DAT_14ca80440;
            }
            else {
LAB_1431e089d:
              uVar19 = (ulonglong)(-uVar12 & uVar12);
              uVar34 = uVar19 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar34 != 0) {
                for (; uVar34 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              iVar8 = (iVar32 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
              if (DAT_14ca80440 <= iVar8) {
                iVar8 = DAT_14ca80440;
              }
            }
          } while (iVar8 != iVar10);
        }
LAB_1431df936:
        uVar35 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_1c8 = (uint *)0x0;
        pLStack_1c0 = (LARGE_INTEGER *)0x0;
        local_19c = 0xffffffff00000080;
        local_194 = 0;
        local_188 = (undefined1 *)0x0;
        local_180 = 0;
        local_3c8.s.LowPart = 0;
        local_3c8.s.HighPart = 0;
        uStack_3c0 = 0;
        uStack_3bc = 0;
        local_4b4 = uVar33;
        local_4a8 = puVar30;
        CoCreateGuid((GUID *)&local_3c8.s);
        local_454 = local_3c8.s.LowPart;
        uStack_450 = local_3c8.s.HighPart;
        uStack_44c = uStack_3c0;
        uStack_448 = uStack_3bc;
        local_4d8 = (uint *)(local_4e8 + 2);
        uVar33 = *(uint *)(local_4e8 + 5);
        uVar19 = 1;
        iVar8 = 0;
        uVar9 = 0;
        if (uVar33 != 0) {
          puVar29 = (uint *)local_4e8[4];
          if ((uint *)local_4e8[4] == (uint *)0x0) {
            puVar29 = local_4d8;
          }
          uVar9 = *puVar29;
          if (uVar9 == 0) {
            iVar8 = uVar33 + 0x1e;
            if (-1 < (int)(uVar33 - 1)) {
              iVar8 = uVar33 - 1;
            }
            uVar35 = 0;
            uVar19 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar19 = uVar35;
            }
            iVar8 = 0;
            do {
              if (uVar19 == uVar35) goto LAB_1431dfa42;
              iVar8 = iVar8 + 0x20;
              uVar9 = puVar29[uVar35 + 1];
              uVar35 = uVar35 + 1;
            } while (uVar9 == 0);
          }
          else {
            uVar35 = 0;
          }
          uVar19 = (ulonglong)(-uVar9 & uVar9);
          uVar34 = uVar19 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar9 = (iVar8 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if ((int)uVar33 <= (int)uVar9) {
            uVar9 = uVar33;
          }
        }
        if (uVar9 != uVar33) {
          uVar12 = 0xffffffff;
          local_4d0 = (ulonglong)uVar33;
          do {
            local_4c8 = (longlong *)CONCAT44(local_4c8._4_4_,iVar8);
            lVar22 = (longlong)(int)uVar9 * 0x200 + *local_4e8;
            local_3c8.s.LowPart = 0;
            local_3c8.s.HighPart = 0;
            uStack_3b8 = 0;
            uStack_3b4 = 0;
            uStack_3b0 = 0;
            uStack_3ac = 0;
            uStack_3a8 = 0xffffffff;
            uStack_3a4 = 0xffffffff;
            uStack_3a0 = 0xffffffff;
            uStack_39c = 0xffffffff;
            local_364 = ZEXT416((uint)local_364._0_4_);
            local_388[0] = 0;
            local_398._0_4_ = 0;
            local_398._4_4_ = 0;
            uStack_390 = 0;
            uStack_38c = 0;
            local_380 = 0;
            uStack_378 = 0;
            uStack_374 = 0;
            local_354 = 0xffffffff00000080;
            local_34c = 0;
            local_340 = 0;
            local_338 = 0;
            local_330 = (undefined1  [16])0x0;
            local_320 = 0;
            local_388[0] = FUN_140975dc5(lVar22);
            local_3c8.s.LowPart = 0;
            local_3c8.s.HighPart = 0;
            uStack_3c0 = 0;
            uStack_3bc = 0;
            uStack_3b8 = local_454;
            uStack_3b4 = uStack_450;
            uStack_3b0 = uStack_44c;
            uStack_3ac = uStack_448;
            FUN_1431e6232(&local_3c8,lVar22);
            local_3e8._0_8_ = local_388;
            local_3e8._8_8_ = &local_3c8;
            FUN_14740dffc(&local_168,(longlong)&uStack_3ce + 2,local_3e8);
            local_3e8._8_8_ = lVar22;
            local_3e8._0_8_ = local_388;
            FUN_14740e218(&local_1c8,(longlong)&uStack_3ce + 2,local_3e8);
            local_338 = 0;
            if (local_340 != 0) {
              FUN_1400020a8();
            }
            FUN_1404112b2(&local_380);
            uVar12 = uVar12 & ~(uint)uVar19;
            puVar29 = (uint *)local_4e8[4];
            if ((uint *)local_4e8[4] == (uint *)0x0) {
              puVar29 = local_4d8;
            }
            uVar33 = *(uint *)(local_4e8 + 5);
            iVar32 = (int)uVar35;
            lVar22 = (longlong)iVar32;
            uVar9 = puVar29[lVar22] & uVar12;
            iVar8 = (int)local_4c8;
            if (uVar9 == 0) {
              iVar10 = uVar33 + 0x1e;
              if (-1 < (int)(uVar33 - 1)) {
                iVar10 = uVar33 - 1;
              }
              iVar10 = iVar10 >> 5;
              iVar8 = (int)local_4c8 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar32) {
                iVar11 = iVar32;
              }
              if (iVar32 < iVar10) {
                lVar23 = 0;
                do {
                  uVar9 = puVar29[lVar22 + lVar23 + 1];
                  if (uVar9 != 0) {
                    uVar35 = (ulonglong)(iVar32 + (int)lVar23 + 1);
                    uVar12 = 0xffffffff;
                    goto LAB_1431e0ac0;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (iVar11 - lVar22 != lVar23);
                uVar12 = 0xffffffff;
                iVar32 = iVar11;
              }
              uVar35 = (ulonglong)(iVar32 + 1);
              uVar9 = uVar33;
            }
            else {
LAB_1431e0ac0:
              uVar19 = (ulonglong)(-uVar9 & uVar9);
              uVar34 = uVar19 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar34 != 0) {
                for (; uVar34 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              uVar9 = (iVar8 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
              if ((int)uVar33 <= (int)uVar9) {
                uVar9 = uVar33;
              }
            }
          } while (uVar9 != (uint)local_4d0);
        }
LAB_1431dfa42:
        uVar35 = 0;
        FUN_147409514(param_6,&local_168,local_4b0,0);
        iVar8 = (int)local_4e0[5];
        uVar19 = 1;
        iVar10 = 0;
        iVar32 = 0;
        if (iVar8 != 0) {
          puVar29 = (uint *)local_4e0[4];
          if ((uint *)local_4e0[4] == (uint *)0x0) {
            puVar29 = (uint *)(local_4e0 + 2);
          }
          uVar33 = *puVar29;
          if (uVar33 == 0) {
            iVar32 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar32 = iVar8 + -1;
            }
            uVar35 = 0;
            uVar19 = (ulonglong)(uint)(iVar32 >> 5);
            if (iVar32 >> 5 < 1) {
              uVar19 = uVar35;
            }
            iVar10 = 0;
            do {
              if (uVar19 == uVar35) goto LAB_1431dfaf8;
              iVar10 = iVar10 + 0x20;
              uVar33 = puVar29[uVar35 + 1];
              uVar35 = uVar35 + 1;
            } while (uVar33 == 0);
          }
          else {
            uVar35 = 0;
          }
          uVar19 = (ulonglong)(-uVar33 & uVar33);
          uVar34 = uVar19 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar32 = (iVar10 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar32) {
            iVar32 = iVar8;
          }
        }
        if (iVar32 != iVar8) {
          uVar33 = 0xffffffff;
          iVar11 = iVar8;
          do {
            if ((int)uStack_160 != local_134) {
              uVar9 = *(uint *)(*local_4e0 + (longlong)iVar32 * 0x18);
              puVar17 = local_128;
              if (local_128 == (undefined1 *)0x0) {
                puVar17 = local_130;
              }
              iVar20 = *(int *)(puVar17 + (ulonglong)(local_120 - 1U & uVar9) * 4);
              if (iVar20 != -1) {
                lVar22 = *local_4e0 + (longlong)iVar32 * 0x18;
                do {
                  lVar23 = local_168 + (longlong)iVar20 * 0xc0;
                  if (*(uint *)(local_168 + (longlong)iVar20 * 0xc0) == uVar9) {
                    if ((lVar23 + 8U & 0xfffffffffffffff7) != 0) {
                      *(longlong *)(lVar23 + 0x38) =
                           *(longlong *)(lVar23 + 0x38) +
                           *(longlong *)(*(longlong *)(lVar22 + 8) + 0x10);
                      plVar6 = *(longlong **)(lVar22 + 8);
                      if (*(longlong *)(lVar23 + 0x28) < *plVar6) {
                        *(longlong *)(lVar23 + 0x28) = *plVar6;
                        plVar6 = *(longlong **)(lVar22 + 8);
                      }
                      if (*(longlong *)(lVar23 + 0x30) < plVar6[1]) {
                        *(longlong *)(lVar23 + 0x30) = plVar6[1];
                        plVar6 = *(longlong **)(lVar22 + 8);
                      }
                      lVar22 = *(longlong *)(lVar23 + 0x40);
                      if (*(longlong *)(lVar23 + 0x40) < 1) {
                        lVar22 = 0;
                      }
                      lVar36 = plVar6[3];
                      if (plVar6[3] < 1) {
                        lVar36 = 0;
                      }
                      uVar34 = lVar36 + lVar22;
                      if (0x7ffffffffffffffe < uVar34) {
                        uVar34 = 0x7fffffffffffffff;
                      }
                      *(ulonglong *)(lVar23 + 0x40) = uVar34;
                      iVar11 = (int)local_4e0[5];
                    }
                    break;
                  }
                  iVar20 = *(int *)(lVar23 + 0xb8);
                } while (iVar20 != -1);
              }
            }
            uVar33 = uVar33 & ~(uint)uVar19;
            puVar29 = (uint *)local_4e0[4];
            if ((uint *)local_4e0[4] == (uint *)0x0) {
              puVar29 = (uint *)(local_4e0 + 2);
            }
            iVar32 = (int)uVar35;
            lVar22 = (longlong)iVar32;
            uVar9 = puVar29[lVar22] & uVar33;
            if (uVar9 == 0) {
              iVar20 = iVar11 + 0x1e;
              if (-1 < iVar11 + -1) {
                iVar20 = iVar11 + -1;
              }
              iVar20 = iVar20 >> 5;
              iVar10 = iVar10 + 0x20;
              iVar21 = iVar20;
              if (iVar20 < iVar32) {
                iVar21 = iVar32;
              }
              if (iVar32 < iVar20) {
                lVar23 = 0;
                do {
                  uVar9 = puVar29[lVar22 + lVar23 + 1];
                  if (uVar9 != 0) {
                    uVar35 = (ulonglong)(iVar32 + (int)lVar23 + 1);
                    uVar33 = 0xffffffff;
                    goto LAB_1431e0c28;
                  }
                  iVar10 = iVar10 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (iVar21 - lVar22 != lVar23);
                uVar33 = 0xffffffff;
                lVar22 = (longlong)iVar21;
              }
              uVar35 = lVar22 + 1U & 0xffffffff;
              iVar32 = iVar11;
            }
            else {
LAB_1431e0c28:
              uVar19 = (ulonglong)(-uVar9 & uVar9);
              uVar34 = uVar19 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar34 != 0) {
                for (; uVar34 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              iVar32 = (iVar10 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
              if (iVar11 <= iVar32) {
                iVar32 = iVar11;
              }
            }
          } while (iVar32 != iVar8);
        }
LAB_1431dfaf8:
        plVar6 = local_4c0;
        if (local_140 == 0) {
          uVar19 = 1;
          puVar24 = (uint *)0x0;
          iVar8 = 0;
          uVar33 = 0;
        }
        else {
          puVar29 = local_148;
          if (local_148 == (uint *)0x0) {
            puVar29 = local_158;
          }
          uVar33 = *puVar29;
          if (uVar33 == 0) {
            iVar8 = local_140 + 0x1e;
            if (-1 < (int)(local_140 - 1)) {
              iVar8 = local_140 - 1;
            }
            puVar24 = (uint *)0x0;
            puVar15 = (uint *)(ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              puVar15 = puVar24;
            }
            iVar8 = 0;
            do {
              if (puVar15 == puVar24) goto LAB_1431e0604;
              iVar8 = iVar8 + 0x20;
              uVar33 = puVar29[(longlong)puVar24 + 1];
              puVar24 = (uint *)((longlong)puVar24 + 1);
            } while (uVar33 == 0);
          }
          else {
            puVar24 = (uint *)0x0;
            iVar8 = 0;
          }
          uVar19 = (ulonglong)(-uVar33 & uVar33);
          uVar35 = uVar19 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar33 = (iVar8 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if ((int)local_140 <= (int)uVar33) {
            uVar33 = local_140;
          }
        }
        if ((int)uVar33 < (int)local_140) {
          local_4e8 = local_4e0 + 7;
          uVar9 = 0xffffffff;
          plVar13 = local_4e0;
LAB_1431e010b:
          if ((int)plVar13[1] != *(int *)((longlong)plVar13 + 0x34)) {
            lVar22 = (longlong)(int)uVar33 * 0xc0;
            uVar12 = *(uint *)(local_168 + lVar22);
            plVar16 = (longlong *)plVar13[8];
            if ((longlong *)plVar13[8] == (longlong *)0x0) {
              plVar16 = local_4e8;
            }
            uVar25 = *(uint *)((longlong)plVar16 + (ulonglong)((int)plVar13[9] - 1U & uVar12) * 4);
            if (uVar25 != 0xffffffff) {
              do {
                puVar29 = (uint *)(*plVar13 + (longlong)(int)uVar25 * 0x18);
                if (*puVar29 == uVar12) {
                  if (((puVar29 != (uint *)0x0) && (*(longlong *)(puVar29 + 2) != 0)) &&
                     (0 < *(longlong *)(*(longlong *)(puVar29 + 2) + 0x18))) {
                    if ((int)pLStack_1c0 == local_194) goto LAB_1431e0207;
                    puVar17 = local_188;
                    if (local_188 == (undefined1 *)0x0) {
                      puVar17 = local_190;
                    }
                    uVar25 = *(uint *)(puVar17 + (ulonglong)(local_180 - 1U & uVar12) * 4);
                    goto joined_r0x0001431e01d5;
                  }
                  break;
                }
                uVar25 = puVar29[4];
              } while (uVar25 != 0xffffffff);
            }
          }
          FUN_147409f8c(&local_168,uVar33);
          goto LAB_1431e0278;
        }
LAB_1431e0604:
        local_4c8 = (longlong *)(ulonglong)(uint)((int)uStack_160 - local_134);
        FUN_14570e024(&local_168,param_5);
        local_170 = (undefined **)CONCAT44(local_170._4_4_,param_5);
        uVar35 = (**(code **)(*plVar6 + 0x28))();
        plVar6 = local_4c0;
        if (local_140 == 0) {
          uVar31 = 1;
          uVar19 = 0;
          iVar8 = 0;
          uVar33 = 0;
        }
        else {
          puVar29 = local_148;
          if (local_148 == (uint *)0x0) {
            puVar29 = local_158;
          }
          uVar33 = *puVar29;
          if (uVar33 == 0) {
            iVar8 = local_140 + 0x1e;
            if (-1 < (int)(local_140 - 1)) {
              iVar8 = local_140 - 1;
            }
            uVar19 = 0;
            uVar34 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar34 = uVar19;
            }
            iVar8 = 0;
            do {
              if (uVar34 == uVar19) goto LAB_1431e06d1;
              iVar8 = iVar8 + 0x20;
              uVar33 = puVar29[uVar19 + 1];
              uVar19 = uVar19 + 1;
            } while (uVar33 == 0);
          }
          else {
            uVar19 = 0;
            iVar8 = 0;
          }
          uVar31 = (ulonglong)(-uVar33 & uVar33);
          uVar34 = uVar31 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar33 = (iVar8 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if ((int)local_140 <= (int)uVar33) {
            uVar33 = local_140;
          }
        }
        if (uVar33 != local_140) {
          uVar9 = 0xffffffff;
          local_4e8 = (longlong *)(ulonglong)local_140;
          do {
            local_4e0 = (longlong *)CONCAT44(local_4e0._4_4_,iVar8);
            if ((int)pLStack_1c0 != local_194) {
              uVar12 = *(uint *)(local_168 + (longlong)(int)uVar33 * 0xc0);
              puVar17 = local_188;
              if (local_188 == (undefined1 *)0x0) {
                puVar17 = local_190;
              }
              uVar25 = *(uint *)(puVar17 + (ulonglong)(local_180 - 1U & uVar12) * 4);
              while (uVar25 != 0xffffffff) {
                puVar29 = local_1c8 + (longlong)(int)uVar25 * 0x82;
                if (local_1c8[(longlong)(int)uVar25 * 0x82] == uVar12) goto LAB_1431e0d7e;
                uVar25 = puVar29[0x80];
              }
            }
            puVar29 = (uint *)0x0;
LAB_1431e0d7e:
            lVar36 = local_168 + (longlong)(int)uVar33 * 0xc0;
            (**(code **)(*plVar6 + 0x1a0))(plVar6,uVar35);
            *(uint *)(lVar36 + 0x18) = local_454;
            *(uint *)(lVar36 + 0x1c) = uStack_450;
            *(uint *)(lVar36 + 0x20) = uStack_44c;
            *(uint *)(lVar36 + 0x24) = uStack_448;
            *(ulonglong *)(lVar36 + 8) = uVar35;
            lVar22 = (**(code **)(*plVar6 + 0x28))(plVar6);
            FUN_140e712cd(plVar6,puVar29 + 2);
            lVar23 = (**(code **)(*plVar6 + 0x28))(plVar6);
            *(longlong *)(lVar36 + 0x10) = lVar23 - lVar22;
            uVar9 = uVar9 & ~(uint)uVar31;
            puVar29 = local_148;
            if (local_148 == (uint *)0x0) {
              puVar29 = local_158;
            }
            iVar32 = (int)uVar19;
            lVar36 = (longlong)iVar32;
            uVar33 = puVar29[lVar36] & uVar9;
            iVar8 = (int)local_4e0;
            if (uVar33 == 0) {
              iVar10 = local_140 + 0x1e;
              if (-1 < (int)(local_140 - 1)) {
                iVar10 = local_140 - 1;
              }
              iVar10 = iVar10 >> 5;
              iVar8 = (int)local_4e0 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar32) {
                iVar11 = iVar32;
              }
              if (iVar32 < iVar10) {
                lVar27 = 0;
                do {
                  uVar33 = puVar29[lVar36 + lVar27 + 1];
                  if (uVar33 != 0) {
                    uVar19 = (ulonglong)(iVar32 + (int)lVar27 + 1);
                    uVar9 = 0xffffffff;
                    goto LAB_1431e0e67;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar27 = lVar27 + 1;
                } while (iVar11 - lVar36 != lVar27);
                uVar9 = 0xffffffff;
                iVar32 = iVar11;
              }
              uVar19 = (ulonglong)(iVar32 + 1);
              uVar33 = local_140;
            }
            else {
LAB_1431e0e67:
              uVar31 = (ulonglong)(-uVar33 & uVar33);
              uVar34 = uVar31 * 2 + 1;
              lVar36 = 0x3f;
              if (uVar34 != 0) {
                for (; uVar34 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                }
              }
              uVar33 = (iVar8 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
              if ((int)local_140 <= (int)uVar33) {
                uVar33 = local_140;
              }
            }
            uVar35 = (lVar23 - lVar22) + uVar35;
          } while (uVar33 != (uint)local_4e8);
        }
LAB_1431e06d1:
        plVar6 = local_4c0;
        local_440 = uVar35;
        (**(code **)(*local_4c0 + 0x1a0))(local_4c0,uVar35);
        FUN_140836dc0(plVar6,&local_170);
        local_180 = 0;
        if (local_188 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_14740a10e(&local_1c8);
        puVar30 = local_4a8;
        uVar33 = local_4b4;
        local_120 = 0;
        iVar32 = (int)local_4c8;
        if (local_128 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_14631b528(&local_168);
      }
      else if (iVar8 == 0) {
        local_4d0 = uVar35;
        (**(code **)(*plVar6 + 0x1a0))(plVar6);
        puVar29 = (uint *)(local_4e8 + 2);
        iVar8 = (int)local_4e8[5];
        if (iVar8 == 0) {
          uVar34 = 1;
          iVar32 = 0;
          uVar35 = 0;
          iVar10 = 0;
        }
        else {
          puVar24 = (uint *)local_4e8[4];
          if ((uint *)local_4e8[4] == (uint *)0x0) {
            puVar24 = puVar29;
          }
          uVar9 = *puVar24;
          if (uVar9 == 0) {
            iVar32 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar32 = iVar8 + -1;
            }
            uVar35 = 0;
            uVar19 = (ulonglong)(uint)(iVar32 >> 5);
            if (iVar32 >> 5 < 1) {
              uVar19 = uVar35;
            }
            iVar32 = 0;
            do {
              local_4b4 = uVar33;
              local_4b0 = lVar22;
              local_4a8 = puVar30;
              if (uVar19 == uVar35) goto LAB_1431dff84;
              iVar32 = iVar32 + 0x20;
              uVar9 = puVar24[uVar35 + 1];
              uVar35 = uVar35 + 1;
            } while (uVar9 == 0);
          }
          else {
            iVar32 = 0;
            uVar35 = 0;
          }
          uVar34 = (ulonglong)(-uVar9 & uVar9);
          uVar19 = uVar34 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          iVar10 = (iVar32 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar10) {
            iVar10 = iVar8;
          }
        }
        local_4b4 = uVar33;
        local_4b0 = lVar22;
        local_4a8 = puVar30;
        if (iVar10 < iVar8) {
          local_490 = local_4d8 + 0x20;
          local_4c8 = local_4e0 + 7;
          local_498 = local_4d8 + 0xc;
          uVar9 = 0xffffffff;
          local_488 = puVar29;
          do {
            lVar22 = (longlong)iVar10 * 0x200 + *local_4e8;
            local_46c = FUN_140975dc5(lVar22);
            FUN_140975b7c(lVar22,0);
            plVar6 = local_4e8;
            if ((int)local_4e0[1] != *(int *)((longlong)local_4e0 + 0x34)) {
              plVar13 = (longlong *)local_4e0[8];
              if ((longlong *)local_4e0[8] == (longlong *)0x0) {
                plVar13 = local_4c8;
              }
              uVar33 = *(uint *)((longlong)plVar13 +
                                (ulonglong)((int)local_4e0[9] - 1U & local_46c) * 4);
              if (uVar33 != 0xffffffff) {
                do {
                  puVar24 = (uint *)(*local_4e0 + (longlong)(int)uVar33 * 0x18);
                  if (*puVar24 == local_46c) {
                    if (((puVar24 != (uint *)0x0) && (*(longlong *)(puVar24 + 2) != 0)) &&
                       (0 < *(longlong *)(*(longlong *)(puVar24 + 2) + 0x18))) {
                      uStack_3a8 = 0xffffffff;
                      uStack_3a4 = 0xffffffff;
                      uStack_3a0 = 0xffffffff;
                      uStack_39c = 0xffffffff;
                      local_364 = ZEXT416((uint)local_364._0_4_);
                      local_398._0_4_ = 0;
                      local_398._4_4_ = 0;
                      uStack_390 = 0;
                      uStack_38c = 0;
                      local_380 = 0;
                      uStack_378 = 0;
                      uStack_374 = 0;
                      local_354 = 0xffffffff00000080;
                      local_34c = 0;
                      local_340 = 0;
                      local_338 = 0;
                      local_330 = (undefined1  [16])0x0;
                      local_320 = 0;
                      local_388[0] = local_46c;
                      local_3c8.s.LowPart = (DWORD)local_4d0;
                      local_3c8.s.HighPart = (LONG)(local_4d0 >> 0x20);
                      uStack_3b8 = *local_490;
                      uStack_3b4 = local_490[1];
                      uStack_3b0 = local_490[2];
                      uStack_3ac = local_490[3];
                      FUN_1431e6232(&local_3c8);
                      local_3e8._0_16_ = (undefined1  [16])0x0;
                      memset(&local_170,0,0x90);
                      FUN_144869430();
                      local_e0 = 0;
                      local_170 = &PTR_FUN_149e1e590;
                      local_d8 = local_3e8;
                      local_d0 = 0;
                      local_148 = (uint *)((ulonglong)local_148 | 4);
                      FUN_1449c2eca(&local_170,0);
                      local_170 = &PTR_FUN_149e1e330;
                      FUN_1447a7c5a(&local_170,0x1c);
                      FUN_140e712cd(&local_170,lVar22);
                      (**(code **)(*local_4c0 + 0x170))
                                (local_4c0,local_3e8._0_8_,(longlong)*(int *)(local_d8 + 8));
                      uStack_3c0 = *(uint *)(local_d8 + 8);
                      uStack_3bc = (int)uStack_3c0 >> 0x1f;
                      local_1c8 = &local_46c;
                      pLStack_1c0 = &local_3c8;
                      FUN_14740dffc(local_498,(longlong)&uStack_3ce + 2,&local_1c8);
                      local_4d0 = local_4d0 + CONCAT44(uStack_3bc,uStack_3c0);
                      FUN_147409a24(plVar6,iVar10);
                      plVar6 = local_118;
                      local_170 = &PTR__purecall_149e35f70;
                      if (local_118 != (longlong *)0x0) {
                        if (*local_118 != 0) {
                          FUN_1400020a8();
                        }
                        FUN_1400020a8(plVar6);
                      }
                      lVar22 = local_f8;
                      if (local_f8 != 0) {
                        if (*(longlong *)(local_f8 + 0x40) != 0) {
                          FUN_1400020a8();
                        }
                        FUN_1400020a8(lVar22);
                      }
                      puVar29 = local_488;
                      if (local_3e8._0_8_ != 0) {
                        FUN_1400020a8();
                      }
                      local_338 = 0;
                      if (local_340 != 0) {
                        FUN_1400020a8();
                      }
                      FUN_1404112b2(&local_380);
                    }
                    break;
                  }
                  uVar33 = puVar24[4];
                } while (uVar33 != 0xffffffff);
              }
            }
            uVar9 = uVar9 & ~(uint)uVar34;
            puVar24 = (uint *)local_4e8[4];
            if ((uint *)local_4e8[4] == (uint *)0x0) {
              puVar24 = puVar29;
            }
            iVar8 = (int)local_4e8[5];
            iVar10 = (int)uVar35;
            lVar22 = (longlong)iVar10;
            uVar33 = puVar24[lVar22] & uVar9;
            if (uVar33 == 0) {
              iVar11 = iVar8 + 0x1e;
              if (-1 < iVar8 + -1) {
                iVar11 = iVar8 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar20 = iVar11;
              if (iVar11 < iVar10) {
                iVar20 = iVar10;
              }
              if (iVar11 <= iVar10) break;
              lVar23 = 0;
              while( true ) {
                iVar32 = iVar32 + 0x20;
                uVar33 = puVar24[lVar22 + lVar23 + 1];
                if (uVar33 != 0) break;
                lVar23 = lVar23 + 1;
                if (iVar20 - lVar22 == lVar23) goto LAB_1431dff84;
              }
              uVar35 = (ulonglong)(iVar10 + (int)lVar23 + 1);
              uVar9 = 0xffffffff;
            }
            uVar34 = (ulonglong)(-uVar33 & uVar33);
            uVar19 = uVar34 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar10 = (iVar32 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          } while (iVar10 < iVar8);
        }
LAB_1431dff84:
        puVar24 = local_4d8;
        puVar29 = local_4d8 + 0xc;
        iVar32 = local_4d8[0xe] - local_4d8[0x19];
        if (param_5 != 0) {
          FUN_14570e024(puVar29,param_5);
        }
        puVar24[10] = param_5;
        FUN_147409514(param_6,puVar29,local_4b0,1);
        plVar6 = local_4c0;
        local_440 = local_4d0;
        *(ulonglong *)(puVar24 + 8) = local_4d0;
        (**(code **)(*local_4c0 + 0x1a0))(local_4c0);
        local_3c8.s.LowPart = puVar24[10];
        uStack_3a0 = 0;
        uStack_39c = 0;
        local_398._0_4_ = 0;
        uStack_3c0 = 0;
        uStack_3bc = 0;
        uStack_3b8 = 0;
        uStack_3b4 = 0;
        local_398._4_4_ = 0x80;
        uStack_390 = 0xffffffff;
        uStack_38c = 0;
        local_380 = 0;
        uStack_378 = 0;
        FUN_147409c0e(&uStack_3c0,puVar29);
        FUN_140836dc0(plVar6,&local_3c8);
        puVar30 = local_4a8;
        uVar33 = local_4b4;
        uStack_378 = 0;
        if (local_380 != 0) {
          FUN_1400020a8();
        }
        FUN_14631b528(&uStack_3c0);
        plVar6 = local_4c0;
      }
      (**(code **)(*plVar6 + 0x1a0))(plVar6,0);
      FUN_14631ab44(plVar6,&local_468);
      (**(code **)(*plVar6 + 0x1f0))(plVar6);
      bVar1 = *(byte *)((longlong)plVar6 + 0x29);
      cVar5 = (**(code **)(*plVar6 + 0x1f8))(plVar6);
      uVar35 = (ulonglong)(bVar1 >> 1) ^ 1;
      if (cVar5 == '\0') {
        uVar35 = 0;
      }
      if ((local_49c == 1) && ((uVar35 & 1) != 0)) {
        if (iVar32 == 0) {
          (**(code **)*plVar6)(plVar6,1);
          QueryPerformanceCounter(&local_3c8);
          bVar3 = false;
          goto LAB_1431df414;
        }
        uVar7 = FUN_14054d1d4();
        puVar14 = local_428;
        if (local_420 == 0) {
          puVar14 = &DAT_149dfb77a;
        }
        local_480 = local_418;
        local_478 = (longlong)(int)uStack_410;
        uVar9 = FUN_146810d90(&local_480,puVar14,uVar7,0);
        uVar35 = (ulonglong)uVar9;
      }
      (**(code **)*plVar6)(plVar6);
      if ((uVar35 & 1) == 0) {
        plVar6 = (longlong *)FUN_14054d1d4();
        puVar14 = local_428;
        if (local_420 == 0) {
          puVar14 = &DAT_149dfb77a;
        }
        local_508 = local_508 & 0xffffff00;
        (**(code **)(*plVar6 + 0x30))(plVar6,puVar14,0,0);
        QueryPerformanceCounter(&local_3c8);
        bVar3 = true;
      }
      else {
        if (local_3f0 == local_420) {
          if (1 < (int)local_3f0) {
            lVar22 = 0;
            while( true ) {
              uVar26 = *(ushort *)((longlong)local_3f8 + lVar22);
              uVar19 = (ulonglong)uVar26;
              uVar28 = *(ushort *)((longlong)local_428 + lVar22);
              if (uVar26 != uVar28) break;
              if (uVar26 == 0) goto LAB_1431e1051;
LAB_1431e0fa6:
              lVar22 = lVar22 + 2;
            }
            if ((uVar28 | uVar26) < 0x80) {
              uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
              uVar34 = (ulonglong)uVar28;
              uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar34];
              if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar34]) goto LAB_1431e0fa6;
            }
            if (uVar26 != uVar28) goto LAB_1431e0ffb;
          }
        }
        else if (local_420 + local_3f0 != 1) {
LAB_1431e0ffb:
          plVar6 = (longlong *)FUN_14054d1d4();
          puVar14 = &DAT_149dfb77a;
          if (local_420 != 0) {
            puVar14 = local_428;
          }
          puVar18 = &DAT_149dfb77a;
          if (local_3f0 != 0) {
            puVar18 = local_3f8;
          }
          bVar3 = true;
          local_4f8 = CONCAT31(local_4f8._1_3_,1);
          local_500 = CONCAT31(local_500._1_3_,1);
          local_508 = CONCAT31(local_508._1_3_,1);
          cVar5 = (**(code **)(*plVar6 + 0x40))(plVar6,puVar18,puVar14,1);
          if (cVar5 == '\0') {
            QueryPerformanceCounter(&local_3c8);
            goto LAB_1431df414;
          }
        }
LAB_1431e1051:
        QueryPerformanceCounter(&local_3c8);
        bVar3 = true;
        if (1 < uVar33) {
          plVar6 = (longlong *)FUN_14054d1d4();
          local_508 = local_508 & 0xffffff00;
          (**(code **)(*plVar6 + 0x30))(plVar6,puVar30,0,0);
        }
      }
    }
LAB_1431df414:
    if (local_428 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_418 != 0) {
      FUN_1400020a8();
    }
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 == 0) {
      uVar19 = 0;
      uVar34 = 1;
      iVar32 = 0;
      iVar8 = 0;
    }
    else {
      puVar29 = local_a8;
      if (local_a8 == (uint *)0x0) {
        puVar29 = local_b8;
      }
      uVar33 = *puVar29;
      if (uVar33 == 0) {
        iVar8 = local_a0 + 0x1e;
        if (-1 < local_a0 + -1) {
          iVar8 = local_a0 + -1;
        }
        uVar19 = 0;
        uVar34 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar34 = uVar19;
        }
        iVar32 = 0;
        do {
          if (uVar34 == uVar19) goto LAB_1431df5b1;
          iVar32 = iVar32 + 0x20;
          uVar33 = puVar29[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar33 == 0);
      }
      else {
        uVar19 = 0;
        iVar32 = 0;
      }
      uVar34 = (ulonglong)(-uVar33 & uVar33);
      uVar31 = uVar34 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar8 = (iVar32 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if (local_a0 <= iVar8) {
        iVar8 = local_a0;
      }
    }
    if (iVar8 < local_a0) {
      uVar33 = 0xffffffff;
      do {
        FUN_1431e6d44(*(undefined8 *)(local_c8 + 0x10 + (longlong)iVar8 * 0x20));
        uVar33 = ~(uint)uVar34 & uVar33;
        puVar29 = local_a8;
        if (local_a8 == (uint *)0x0) {
          puVar29 = local_b8;
        }
        iVar8 = (int)uVar19;
        lVar22 = (longlong)iVar8;
        uVar9 = puVar29[lVar22] & uVar33;
        if (uVar9 == 0) {
          iVar10 = local_a0 + 0x1e;
          if (-1 < local_a0 + -1) {
            iVar10 = local_a0 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar11 = iVar10;
          if (iVar10 < iVar8) {
            iVar11 = iVar8;
          }
          if (iVar10 <= iVar8) break;
          lVar23 = 0;
          while( true ) {
            iVar32 = iVar32 + 0x20;
            uVar9 = puVar29[lVar22 + lVar23 + 1];
            if (uVar9 != 0) break;
            lVar23 = lVar23 + 1;
            if (iVar11 - lVar22 == lVar23) goto LAB_1431df5b1;
          }
          uVar19 = (ulonglong)(iVar8 + (int)lVar23 + 1);
          uVar33 = 0xffffffff;
        }
        uVar34 = (ulonglong)(-uVar9 & uVar9);
        uVar31 = uVar34 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar8 = (iVar32 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      } while (iVar8 < local_a0);
    }
LAB_1431df5b1:
    uVar19 = uStack_c0 >> 0x20;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    if ((int)uVar19 != 0) {
      FUN_1446f4a44(&local_c8,0);
    }
    uStack_98 = 0xffffffff;
    local_94 = 0;
    local_a0 = 0;
    if (0x80 < local_9c) {
      local_9c = 0x80;
      FUN_1446efbd8(local_b8,0);
    }
    if (local_a8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_140474144(&local_3c8,&local_3f8,&DAT_14ca802f8);
    uVar33 = uStack_3c0;
    puVar30 = (undefined2 *)CONCAT44(local_3c8.s.HighPart,local_3c8.s.LowPart);
    plVar6 = (longlong *)FUN_14054d1d4();
    puVar14 = &DAT_149dfb77a;
    if (uStack_3c0 != 0) {
      puVar14 = puVar30;
    }
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,puVar14,0);
    local_3c8.s.LowPart = 0x43414348;
    local_3c8.s.HighPart = 0x50495045;
    uStack_3c0 = 0x1c;
    uStack_3bc = DAT_14ca8069c;
    uStack_3b8 = CONCAT31(uStack_3b8._1_3_,(char)local_4d8[4]);
    uStack_3b4 = local_4d8[0x20];
    uStack_3b0 = local_4d8[0x21];
    uStack_3ac = local_4d8[0x22];
    uStack_3a8 = local_4d8[0x23];
    uStack_3a0 = 0;
    uStack_39c = 0;
    local_398 = lVar22;
    FUN_14631ab44(plVar6,&local_3c8);
    (**(code **)(*plVar6 + 0x1f8))(plVar6);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)*plVar6)(plVar6,1);
    }
    plVar6 = (longlong *)FUN_14054d1d4();
    cVar5 = (**(code **)(*plVar6 + 0x48))(plVar6,puVar14);
    if (cVar5 != '\0') goto LAB_1431df235;
    bVar3 = true;
    uVar35 = 0;
  }
  if (puVar30 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar30);
  }
  if (!bVar3) {
    uVar35 = 0;
  }
LAB_1431df647:
  if (local_3f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_528) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar35 & 0xffffffffffffff01;
joined_r0x0001431e01d5:
  if (uVar25 == 0xffffffff) goto LAB_1431e0207;
  if (local_1c8[(longlong)(int)uVar25 * 0x82] == uVar12) goto LAB_1431e0278;
  uVar25 = local_1c8[(longlong)(int)uVar25 * 0x82 + 0x80];
  goto joined_r0x0001431e01d5;
LAB_1431e0207:
  local_4c8 = (longlong *)CONCAT44(local_4c8._4_4_,iVar8);
  lVar23 = FUN_147409888(&local_400);
  iVar8 = DAT_14ca80440;
  if (lVar23 == 0) {
    local_3c8.s.LowPart = 0;
    local_3c8.s.HighPart = 0;
    uStack_3c0 = 0;
    uStack_3bc = 0;
    local_3e8._0_8_ = &local_3c8;
    local_4d8 = puVar24;
    if (DAT_14ca80440 == 0) {
      uVar31 = 1;
      uVar35 = 0;
      iVar32 = 0;
      iVar10 = 0;
    }
    else {
      puVar29 = DAT_14ca80438;
      if (DAT_14ca80438 == (uint *)0x0) {
        puVar29 = &DAT_14ca80428;
      }
      uVar12 = *puVar29;
      if (uVar12 == 0) {
        iVar32 = DAT_14ca80440 + 0x1e;
        if (-1 < DAT_14ca80440 + -1) {
          iVar32 = DAT_14ca80440 + -1;
        }
        uVar35 = 0;
        uVar34 = (ulonglong)(uint)(iVar32 >> 5);
        if (iVar32 >> 5 < 1) {
          uVar34 = uVar35;
        }
        iVar32 = 0;
        do {
          if (uVar34 == uVar35) goto LAB_1431e04cc;
          iVar32 = iVar32 + 0x20;
          uVar12 = puVar29[uVar35 + 1];
          uVar35 = uVar35 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar35 = 0;
        iVar32 = 0;
      }
      uVar31 = (ulonglong)(-uVar12 & uVar12);
      uVar34 = uVar31 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar10 = (iVar32 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if (DAT_14ca80440 <= iVar10) {
        iVar10 = DAT_14ca80440;
      }
    }
    if (iVar10 != DAT_14ca80440) {
      uVar12 = 0xffffffff;
      do {
        FUN_147409ec8(local_3e8,(longlong)iVar10 * 0x20 + DAT_14ca80418);
        uVar12 = ~(uint)uVar31 & uVar12;
        puVar29 = DAT_14ca80438;
        if (DAT_14ca80438 == (uint *)0x0) {
          puVar29 = &DAT_14ca80428;
        }
        iVar10 = (int)uVar35;
        lVar22 = (longlong)iVar10;
        uVar25 = puVar29[lVar22] & uVar12;
        if (uVar25 == 0) {
          iVar11 = DAT_14ca80440 + 0x1e;
          if (-1 < DAT_14ca80440 + -1) {
            iVar11 = DAT_14ca80440 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar32 = iVar32 + 0x20;
          iVar20 = iVar11;
          if (iVar11 < iVar10) {
            iVar20 = iVar10;
          }
          if (iVar10 < iVar11) {
            lVar23 = 0;
            do {
              uVar25 = puVar29[lVar22 + lVar23 + 1];
              if (uVar25 != 0) {
                uVar35 = (ulonglong)(iVar10 + (int)lVar23 + 1);
                uVar12 = 0xffffffff;
                goto LAB_1431e05b1;
              }
              iVar32 = iVar32 + 0x20;
              lVar23 = lVar23 + 1;
            } while (iVar20 - lVar22 != lVar23);
            uVar12 = 0xffffffff;
            iVar10 = iVar20;
          }
          uVar35 = (ulonglong)(iVar10 + 1);
          iVar10 = DAT_14ca80440;
        }
        else {
LAB_1431e05b1:
          uVar31 = (ulonglong)(-uVar25 & uVar25);
          uVar34 = uVar31 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar10 = (iVar32 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (DAT_14ca80440 <= iVar10) {
            iVar10 = DAT_14ca80440;
          }
        }
      } while (iVar10 != iVar8);
    }
LAB_1431e04cc:
    FUN_147409f8c(&local_168,uVar33);
    if (CONCAT44(local_3c8.s.HighPart,local_3c8.s.LowPart) != 0) {
      FUN_1400020a8();
    }
    plVar6 = local_4c0;
    puVar24 = local_4d8;
    plVar13 = local_4e0;
    iVar8 = (int)local_4c8;
  }
  else {
    *(undefined8 *)(lVar23 + 0x90) = *(undefined8 *)(local_168 + 8 + lVar22);
    local_2c4 = 0;
    local_364 = (undefined1  [16])0x0;
    uStack_374 = 0;
    auStack_370 = SUB1612((undefined1  [16])0x0,4);
    local_388[1] = 0;
    local_380 = 0;
    uStack_378 = 0;
    local_398._4_4_ = 0;
    uStack_390 = 0;
    uStack_38c = 0;
    local_388[0] = 0;
    uStack_3a4 = 0;
    uStack_3a0 = 0;
    uStack_39c = 0;
    local_398._0_4_ = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    uStack_3a8 = 0;
    local_3c8.s.HighPart = 0;
    uStack_3c0 = 0;
    uStack_3bc = 0;
    uStack_3b8 = 0;
    local_354 = 0;
    local_2c0 = 0x11;
    lVar36 = 0x112;
    do {
      *(undefined4 *)((longlong)&uStack_3ce + lVar36) = 0x100;
      *(undefined2 *)((longlong)&uStack_3ca + lVar36) = 1;
      *(undefined1 *)((longlong)&local_3c8 + lVar36) = 0xf;
      lVar36 = lVar36 + 7;
    } while (lVar36 != 0x14a);
    local_280 = 0;
    local_278 = 0;
    local_274 = 0x7000101;
    local_26c = 7;
    local_268 = 0xffff;
    local_1e0 = 0;
    local_1f0 = (undefined1  [16])0x0;
    local_1d8 = 6;
    FUN_140e712cd(lVar23,&local_3c8);
    local_3e8._8_8_ = &local_3c8;
    local_3e8._0_8_ = lVar22 + local_168;
    FUN_14740e218(&local_1c8,(longlong)&uStack_3ce + 2,local_3e8);
    iVar8 = (int)local_4c8;
  }
LAB_1431e0278:
  uVar9 = uVar9 & ~(uint)uVar19;
  puVar29 = local_148;
  if (local_148 == (uint *)0x0) {
    puVar29 = local_158;
  }
  iVar32 = (int)puVar24;
  lVar22 = (longlong)iVar32;
  uVar33 = puVar29[lVar22] & uVar9;
  if (uVar33 == 0) {
    iVar10 = local_140 + 0x1e;
    if (-1 < (int)(local_140 - 1)) {
      iVar10 = local_140 - 1;
    }
    iVar10 = iVar10 >> 5;
    iVar11 = iVar10;
    if (iVar10 < iVar32) {
      iVar11 = iVar32;
    }
    if (iVar10 <= iVar32) goto LAB_1431e0604;
    lVar23 = 0;
    while( true ) {
      iVar8 = iVar8 + 0x20;
      uVar33 = puVar29[lVar22 + lVar23 + 1];
      if (uVar33 != 0) break;
      lVar23 = lVar23 + 1;
      if (iVar11 - lVar22 == lVar23) goto LAB_1431e0604;
    }
    puVar24 = (uint *)(ulonglong)(iVar32 + (int)lVar23 + 1);
    uVar9 = 0xffffffff;
  }
  uVar19 = (ulonglong)(-uVar33 & uVar33);
  uVar35 = uVar19 * 2 + 1;
  lVar22 = 0x3f;
  if (uVar35 != 0) {
    for (; uVar35 >> lVar22 == 0; lVar22 = lVar22 + -1) {
    }
  }
  uVar33 = (iVar8 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
  if ((int)local_140 <= (int)uVar33) goto LAB_1431e0604;
  goto LAB_1431e010b;
}



// FUNCTION 1431e10d4 FUN_1431e10d4 body=1203 status=ok
// SIG undefined FUN_1431e10d4(void)

void FUN_1431e10d4(uint param_1,longlong param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined *puVar7;
  undefined1 auStack_288 [40];
  ulonglong local_260;
  uint local_258;
  ushort local_254;
  uint local_250;
  uint local_24c;
  uint *local_248;
  ulonglong *local_240;
  undefined4 uStack_236;
  undefined2 uStack_232;
  undefined2 local_230 [2];
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined8 local_1ec;
  undefined8 uStack_1e4;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 local_12c;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_24c = param_1;
  cVar3 = FUN_1403966e6();
  if ((cVar3 != '\0') &&
     ((cVar3 = FUN_140396614(), cVar3 != '\0' || (cVar3 = FUN_1431dd47e(), cVar3 != '\0')))) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14ca80410);
    if (DAT_14ca804c0 != DAT_14ca804ec) {
      puVar7 = &DAT_14ca804f0;
      if (DAT_14ca804f8 != (undefined *)0x0) {
        puVar7 = DAT_14ca804f8;
      }
      iVar1 = *(int *)(puVar7 + (ulonglong)(DAT_14ca80500 - 1U & param_1) * 4);
      while (iVar1 != -1) {
        lVar5 = DAT_14ca804b8 + (longlong)iVar1 * 0x20;
        if (*(uint *)(DAT_14ca804b8 + (longlong)iVar1 * 0x20) == param_1) {
          if (((ulonglong *)(lVar5 + 8) != (ulonglong *)0x0 && lVar5 != 0) &&
             ((DAT_14ca80690 & ~*(ulonglong *)(lVar5 + 8)) == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_288);
          }
          break;
        }
        iVar1 = *(int *)(lVar5 + 0x18);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca80410);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
    if (DAT_14ca804c0 != DAT_14ca804ec) {
      puVar7 = &DAT_14ca804f0;
      if (DAT_14ca804f8 != (undefined *)0x0) {
        puVar7 = DAT_14ca804f8;
      }
      iVar1 = *(int *)(puVar7 + (ulonglong)(DAT_14ca80500 - 1U & param_1) * 4);
      while (iVar1 != -1) {
        lVar5 = DAT_14ca804b8 + (longlong)iVar1 * 0x20;
        if (*(uint *)(DAT_14ca804b8 + (longlong)iVar1 * 0x20) == param_1) {
          if ((ulonglong *)(lVar5 + 8) != (ulonglong *)0x0 && lVar5 != 0) {
            uVar2 = *(ulonglong *)(lVar5 + 8);
            if ((DAT_14ca80690 & ~uVar2) != 0) {
              *(ulonglong *)(lVar5 + 8) = DAT_14ca80690 | uVar2;
              puVar6 = (ulonglong *)FUN_14178cfa2(*(undefined4 *)(lVar5 + 0x10),lVar5 + 0x10);
              *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(lVar5 + 0x10);
              *puVar6 = *puVar6 | *(ulonglong *)(lVar5 + 8);
              *(ushort *)((longlong)puVar6 + 0xc) =
                   *(ushort *)((longlong)puVar6 + 0xc) | *(ushort *)(lVar5 + 0x14);
            }
            goto LAB_1431e155e;
          }
          break;
        }
        iVar1 = *(int *)(lVar5 + 0x18);
      }
    }
    local_12c = 0x1100000000;
    local_22c = 0;
    uStack_224 = 0;
    local_21c = 0;
    uStack_214 = 0;
    local_20c = 0;
    uStack_204 = 0;
    local_1fc = 0;
    uStack_1f4 = 0;
    local_1ec = 0;
    uStack_1e4 = 0;
    local_1dc = 0;
    uStack_1d4 = 0;
    local_1cc = 0;
    uStack_1c4 = 0;
    local_1bc = 0;
    lVar5 = 0x112;
    do {
      *(undefined4 *)((longlong)&uStack_236 + lVar5) = 0x100;
      *(undefined2 *)((longlong)&uStack_232 + lVar5) = 1;
      *(undefined1 *)((longlong)local_230 + lVar5) = 0xf;
      lVar5 = lVar5 + 7;
    } while (lVar5 != 0x14a);
    local_e0 = 0x700010100000000;
    uStack_d8 = 0x700000000;
    local_e8 = 0;
    local_d0 = 0xffff;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 6;
    FUN_1431dce1a(local_230,param_2);
    uVar4 = FUN_140975dc5(local_230);
    local_260 = 0;
    local_254 = 0;
    local_258 = uVar4;
    local_250 = uVar4;
    cVar3 = FUN_140975b7c(local_230,&local_260);
    if (cVar3 == '\0') {
      if (DAT_14ca80610 != DAT_14ca8063c) {
        puVar7 = &DAT_14ca80640;
        if (DAT_14ca80648 != (undefined *)0x0) {
          puVar7 = DAT_14ca80648;
        }
        for (iVar1 = *(int *)(puVar7 + (ulonglong)(DAT_14ca80650 - 1U & uVar4) * 4); iVar1 != -1;
            iVar1 = *(int *)(DAT_14ca80608 + (longlong)iVar1 * 0xc + 4)) {
          if (*(uint *)(DAT_14ca80608 + (longlong)iVar1 * 0xc) == uVar4) goto LAB_1431e1502;
        }
      }
      if ((((*(byte *)(param_2 + 0xcb) & 0x10) == 0) &&
          ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) != DAT_14ca81490 ||
           (cVar3 = FUN_147404bd6(local_230), cVar3 == '\0')))) &&
         ((param_3 == '\0' || (DAT_14ca80360 == 0)))) {
        cVar3 = FUN_140396614();
        if (cVar3 != '\0') {
          FUN_14143d440(&local_248,local_230);
        }
        FUN_144980568(&DAT_14ca80608,&local_248,&local_250,0);
        DAT_14ca80658 = DAT_14ca80658 + 1;
        cVar3 = FUN_1431dd47e();
        uVar4 = DAT_14ca80600;
        if ((cVar3 != '\0') && ((longlong)DAT_14ca80680 != 0)) {
          lVar5 = 0;
          do {
            if ((*(int *)(DAT_14ca80678 + 8 + lVar5) != 0) &&
               (*(longlong *)(DAT_14ca80678 + lVar5) != 0)) {
              lVar5 = (longlong)(int)DAT_14ca80600;
              DAT_14ca80600 = DAT_14ca80600 + 1;
              if (DAT_14ca80604 < DAT_14ca80600) {
                FUN_14740e962(uVar4);
              }
              FUN_14143db70(lVar5 * 0x1f8 + DAT_14ca805f8,local_230);
              break;
            }
            lVar5 = lVar5 + 0x10;
          } while ((longlong)DAT_14ca80680 * 0x10 != lVar5);
        }
      }
    }
LAB_1431e1502:
    if ((DAT_14ca80690 & ~local_260) != 0) {
      local_260 = DAT_14ca80690 | local_260;
      puVar6 = (ulonglong *)FUN_14178cfa2(local_258,&local_258);
      *(uint *)(puVar6 + 1) = local_258;
      *puVar6 = *puVar6 | local_260;
      *(ushort *)((longlong)puVar6 + 0xc) = *(ushort *)((longlong)puVar6 + 0xc) | local_254;
    }
    local_248 = &local_24c;
    local_240 = &local_260;
    FUN_14070eaba((longlong)&uStack_236 + 2);
LAB_1431e155e:
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  }
  if ((local_38 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e15a2 FUN_1431e15a2 body=1137 status=ok
// SIG undefined FUN_1431e15a2(void)

void FUN_1431e15a2(uint param_1,longlong param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined *puVar7;
  undefined1 auStack_278 [32];
  ulonglong local_258;
  uint local_250;
  ushort local_24c;
  uint local_248;
  uint local_244;
  uint *local_240;
  ulonglong *local_238;
  undefined4 uStack_22e;
  undefined2 uStack_22a;
  longlong local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined8 local_124;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_244 = param_1;
  cVar3 = FUN_1403966e6();
  if ((cVar3 != '\0') &&
     ((cVar3 = FUN_140396614(), cVar3 != '\0' || (cVar3 = FUN_1431dd47e(), cVar3 != '\0')))) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14ca80410);
    if (DAT_14ca804c0 != DAT_14ca804ec) {
      puVar7 = &DAT_14ca804f0;
      if (DAT_14ca804f8 != (undefined *)0x0) {
        puVar7 = DAT_14ca804f8;
      }
      iVar1 = *(int *)(puVar7 + (ulonglong)(DAT_14ca80500 - 1U & param_1) * 4);
      while (iVar1 != -1) {
        lVar5 = DAT_14ca804b8 + (longlong)iVar1 * 0x20;
        if (*(uint *)(DAT_14ca804b8 + (longlong)iVar1 * 0x20) == param_1) {
          if (((ulonglong *)(lVar5 + 8) != (ulonglong *)0x0 && lVar5 != 0) &&
             ((DAT_14ca80690 & ~*(ulonglong *)(lVar5 + 8)) == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_278);
          }
          break;
        }
        iVar1 = *(int *)(lVar5 + 0x18);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca80410);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
    if (DAT_14ca804c0 != DAT_14ca804ec) {
      puVar7 = &DAT_14ca804f0;
      if (DAT_14ca804f8 != (undefined *)0x0) {
        puVar7 = DAT_14ca804f8;
      }
      iVar1 = *(int *)(puVar7 + (ulonglong)(DAT_14ca80500 - 1U & param_1) * 4);
      while (iVar1 != -1) {
        lVar5 = DAT_14ca804b8 + (longlong)iVar1 * 0x20;
        if (*(uint *)(DAT_14ca804b8 + (longlong)iVar1 * 0x20) == param_1) {
          if ((ulonglong *)(lVar5 + 8) != (ulonglong *)0x0 && lVar5 != 0) {
            uVar2 = *(ulonglong *)(lVar5 + 8);
            if ((DAT_14ca80690 & ~uVar2) != 0) {
              *(ulonglong *)(lVar5 + 8) = DAT_14ca80690 | uVar2;
              puVar6 = (ulonglong *)FUN_14178cfa2(*(undefined4 *)(lVar5 + 0x10),lVar5 + 0x10);
              *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(lVar5 + 0x10);
              *puVar6 = *puVar6 | *(ulonglong *)(lVar5 + 8);
              *(ushort *)((longlong)puVar6 + 0xc) =
                   *(ushort *)((longlong)puVar6 + 0xc) | *(ushort *)(lVar5 + 0x14);
            }
            goto LAB_1431e19ea;
          }
          break;
        }
        iVar1 = *(int *)(lVar5 + 0x18);
      }
    }
    local_124 = 0x1100000000;
    local_210 = 0;
    uStack_208 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    lVar5 = 0x112;
    do {
      *(undefined4 *)((longlong)&uStack_22e + lVar5) = 0x100;
      *(undefined2 *)((longlong)&uStack_22a + lVar5) = 1;
      *(undefined1 *)((longlong)&local_228 + lVar5) = 0xf;
      lVar5 = lVar5 + 7;
    } while (lVar5 != 0x14a);
    local_d8 = 0x700010100000000;
    uStack_d0 = 0x700000000;
    local_e0 = 0;
    local_c8 = 0xffff;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 6;
    local_214 = *(undefined4 *)(param_2 + 0x98);
    uStack_220 = *(undefined4 *)(param_2 + 0x8c);
    uStack_21c = *(undefined4 *)(param_2 + 0x90);
    uStack_218 = *(undefined4 *)(param_2 + 0x94);
    local_228 = (ulonglong)*(uint *)(param_2 + 0x88) << 0x20;
    uVar4 = FUN_140975dc5(&local_228);
    local_258 = 0;
    local_24c = 0;
    local_250 = uVar4;
    local_248 = uVar4;
    cVar3 = FUN_140975b7c(&local_228,&local_258);
    if (cVar3 == '\0') {
      if (DAT_14ca80610 != DAT_14ca8063c) {
        puVar7 = &DAT_14ca80640;
        if (DAT_14ca80648 != (undefined *)0x0) {
          puVar7 = DAT_14ca80648;
        }
        for (iVar1 = *(int *)(puVar7 + (ulonglong)(DAT_14ca80650 - 1U & uVar4) * 4); iVar1 != -1;
            iVar1 = *(int *)(DAT_14ca80608 + (longlong)iVar1 * 0xc + 4)) {
          if (*(uint *)(DAT_14ca80608 + (longlong)iVar1 * 0xc) == uVar4) goto LAB_1431e198e;
        }
      }
      if ((param_3 == '\0') || (DAT_14ca80360 == 0)) {
        cVar3 = FUN_140396614();
        if (cVar3 != '\0') {
          FUN_14143d440(&local_240,&local_228);
        }
        FUN_144980568(&DAT_14ca80608,&local_240,&local_248,0);
        DAT_14ca80658 = DAT_14ca80658 + 1;
        cVar3 = FUN_1431dd47e();
        uVar4 = DAT_14ca80600;
        if ((cVar3 != '\0') && ((longlong)DAT_14ca80680 != 0)) {
          lVar5 = 0;
          do {
            if ((*(int *)(DAT_14ca80678 + 8 + lVar5) != 0) &&
               (*(longlong *)(DAT_14ca80678 + lVar5) != 0)) {
              lVar5 = (longlong)(int)DAT_14ca80600;
              DAT_14ca80600 = DAT_14ca80600 + 1;
              if (DAT_14ca80604 < DAT_14ca80600) {
                FUN_14740e962(uVar4);
              }
              FUN_14143db70(lVar5 * 0x1f8 + DAT_14ca805f8,&local_228);
              break;
            }
            lVar5 = lVar5 + 0x10;
          } while ((longlong)DAT_14ca80680 * 0x10 != lVar5);
        }
      }
    }
LAB_1431e198e:
    if ((DAT_14ca80690 & ~local_258) != 0) {
      local_258 = DAT_14ca80690 | local_258;
      puVar6 = (ulonglong *)FUN_14178cfa2(local_250,&local_250);
      *(uint *)(puVar6 + 1) = local_250;
      *puVar6 = *puVar6 | local_258;
      *(ushort *)((longlong)puVar6 + 0xc) = *(ushort *)((longlong)puVar6 + 0xc) | local_24c;
    }
    local_240 = &local_244;
    local_238 = &local_258;
    FUN_14070eaba((longlong)&uStack_22e + 2);
LAB_1431e19ea:
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  }
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e1a2c FUN_1431e1a2c body=560 status=ok
// SIG undefined FUN_1431e1a2c(void)

undefined4 * FUN_1431e1a2c(uint param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_68 [44];
  uint local_3c;
  undefined4 *local_38;
  uint *local_30;
  undefined4 **local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = FUN_1403966e6();
  if ((cVar5 != '\0') && (cVar5 = FUN_140396614(), cVar5 != '\0')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14ca80410);
    if (DAT_14ca804c0 != DAT_14ca804ec) {
      puVar7 = &DAT_14ca804f0;
      if (DAT_14ca804f8 != (undefined *)0x0) {
        puVar7 = DAT_14ca804f8;
      }
      iVar3 = *(int *)(puVar7 + (ulonglong)(DAT_14ca80500 - 1U & param_1) * 4);
      while (iVar3 != -1) {
        lVar1 = DAT_14ca804b8 + (longlong)iVar3 * 0x20;
        if (*(uint *)(DAT_14ca804b8 + (longlong)iVar3 * 0x20) == param_1) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
            uVar4 = *(uint *)(lVar1 + 0x10);
            local_3c = uVar4;
            if (DAT_14ca80560 == DAT_14ca8058c) goto LAB_1431e1b78;
            puVar7 = &DAT_14ca80590;
            if (DAT_14ca80598 != (undefined *)0x0) {
              puVar7 = DAT_14ca80598;
            }
            uVar6 = *(uint *)(puVar7 + (ulonglong)(DAT_14ca805a0 - 1U & uVar4) * 4);
            if (uVar6 == 0xffffffff) goto LAB_1431e1b78;
            goto LAB_1431e1b3b;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca80410);
  }
  puVar8 = (undefined4 *)0x0;
  goto LAB_1431e1ad7;
  while (uVar6 = puVar2[4], uVar6 != 0xffffffff) {
LAB_1431e1b3b:
    puVar2 = (uint *)(DAT_14ca80558 + (longlong)(int)uVar6 * 0x18);
    if (*puVar2 == uVar4) {
      if ((puVar2 != (uint *)0x0) &&
         (puVar8 = *(undefined4 **)(puVar2 + 2), puVar8 != (undefined4 *)0x0)) {
        *(longlong *)(puVar8 + 4) = *(longlong *)(puVar8 + 4) + 1;
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca80410);
        goto LAB_1431e1ad7;
      }
      break;
    }
  }
LAB_1431e1b78:
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca80410);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  if (DAT_14ca80560 != DAT_14ca8058c) {
    puVar7 = &DAT_14ca80590;
    if (DAT_14ca80598 != (undefined *)0x0) {
      puVar7 = DAT_14ca80598;
    }
    uVar6 = *(uint *)(puVar7 + (ulonglong)(DAT_14ca805a0 - 1U & uVar4) * 4);
    while (uVar6 != 0xffffffff) {
      puVar2 = (uint *)(DAT_14ca80558 + (longlong)(int)uVar6 * 0x18);
      if (*puVar2 == uVar4) {
        if ((puVar2 != (uint *)0x0) &&
           (local_38 = *(undefined4 **)(puVar2 + 2), local_38 != (undefined4 *)0x0))
        goto LAB_1431e1c42;
        break;
      }
      uVar6 = puVar2[4];
    }
  }
  local_38 = (undefined4 *)FUN_14001cc68(0x28,0x10);
  *local_38 = 0xffffffff;
  local_38[1] = 0xffffffff;
  local_38[2] = 0xffffffff;
  local_38[3] = 0xffffffff;
  *(undefined1 (*) [16])(local_38 + 4) = (undefined1  [16])0x0;
  local_28 = &local_38;
  local_38[8] = uVar4;
  local_30 = &local_3c;
  FUN_14151e2ce(local_1c);
LAB_1431e1c42:
  *(longlong *)(local_38 + 4) = *(longlong *)(local_38 + 4) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  puVar8 = local_38;
LAB_1431e1ad7:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e1c5d FUN_1431e1c5d body=69 status=ok
// SIG undefined FUN_1431e1c5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1c5d(void)

{
  _DAT_14ca806a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca806b0,1);
  return;
}



// FUNCTION 1431e1ca2 FUN_1431e1ca2 body=69 status=ok
// SIG undefined FUN_1431e1ca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1ca2(void)

{
  _DAT_14ca806c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca806d0,1);
  return;
}



// FUNCTION 1431e1ce7 FUN_1431e1ce7 body=69 status=ok
// SIG undefined FUN_1431e1ce7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1ce7(void)

{
  _DAT_14ca806d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1d29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca806e0,1);
  return;
}



// FUNCTION 1431e1d2c FUN_1431e1d2c body=69 status=ok
// SIG undefined FUN_1431e1d2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1d2c(void)

{
  _DAT_14ca806e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca806f0,1);
  return;
}



// FUNCTION 1431e1d71 FUN_1431e1d71 body=69 status=ok
// SIG undefined FUN_1431e1d71(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1d71(void)

{
  _DAT_14ca806f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80700,1);
  return;
}



// FUNCTION 1431e1db6 FUN_1431e1db6 body=69 status=ok
// SIG undefined FUN_1431e1db6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1db6(void)

{
  _DAT_14ca80708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80710,1);
  return;
}



// FUNCTION 1431e1e1d FUN_1431e1e1d body=69 status=ok
// SIG undefined FUN_1431e1e1d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1e1d(void)

{
  _DAT_14ca80738 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80740,1);
  return;
}



// FUNCTION 1431e1e62 FUN_1431e1e62 body=69 status=ok
// SIG undefined FUN_1431e1e62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1e62(void)

{
  _DAT_14ca80758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80760,1);
  return;
}



// FUNCTION 1431e1ea7 FUN_1431e1ea7 body=69 status=ok
// SIG undefined FUN_1431e1ea7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1ea7(void)

{
  _DAT_14ca80768 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80770,1);
  return;
}



// FUNCTION 1431e1eec FUN_1431e1eec body=69 status=ok
// SIG undefined FUN_1431e1eec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1eec(void)

{
  _DAT_14ca80778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1f2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80780,1);
  return;
}



// FUNCTION 1431e1f31 FUN_1431e1f31 body=69 status=ok
// SIG undefined FUN_1431e1f31(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1f31(void)

{
  _DAT_14ca80790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80798,1);
  return;
}



// FUNCTION 1431e1f76 FUN_1431e1f76 body=69 status=ok
// SIG undefined FUN_1431e1f76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1f76(void)

{
  _DAT_14ca807a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca807b0,1);
  return;
}



// FUNCTION 1431e1fbb FUN_1431e1fbb body=69 status=ok
// SIG undefined FUN_1431e1fbb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e1fbb(void)

{
  _DAT_14ca807c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e1ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca807c8,1);
  return;
}



// FUNCTION 1431e2000 FUN_1431e2000 body=69 status=ok
// SIG undefined FUN_1431e2000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e2000(void)

{
  _DAT_14ca807d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e2042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca807e0,1);
  return;
}



// FUNCTION 1431e2045 FUN_1431e2045 body=69 status=ok
// SIG undefined FUN_1431e2045(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e2045(void)

{
  _DAT_14ca807e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e2087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca807f0,1);
  return;
}



// FUNCTION 1431e208b FUN_1431e208b body=69 status=ok
// SIG undefined FUN_1431e208b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e208b(void)

{
  _DAT_14ca807f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e20cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80800,1);
  return;
}



// FUNCTION 1431e20d0 FUN_1431e20d0 body=69 status=ok
// SIG undefined FUN_1431e20d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e20d0(void)

{
  _DAT_14ca80808 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e2112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80810,1);
  return;
}



// FUNCTION 1431e2115 FUN_1431e2115 body=69 status=ok
// SIG undefined FUN_1431e2115(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e2115(void)

{
  _DAT_14ca80820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e2157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80828,1);
  return;
}



// FUNCTION 1431e215a FUN_1431e215a body=69 status=ok
// SIG undefined FUN_1431e215a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e215a(void)

{
  _DAT_14ca80830 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e219c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80838,1);
  return;
}



// FUNCTION 1431e219f FUN_1431e219f body=69 status=ok
// SIG undefined FUN_1431e219f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e219f(void)

{
  _DAT_14ca80840 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e21e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80848,1);
  return;
}



// FUNCTION 1431e21e4 FUN_1431e21e4 body=69 status=ok
// SIG undefined FUN_1431e21e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e21e4(void)

{
  _DAT_14ca80850 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e2226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80858,1);
  return;
}



// FUNCTION 1431e2229 FUN_1431e2229 body=69 status=ok
// SIG undefined FUN_1431e2229(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e2229(void)

{
  _DAT_14ca80868 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e226b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80870,1);
  return;
}



// FUNCTION 1431e226e FUN_1431e226e body=69 status=ok
// SIG undefined FUN_1431e226e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e226e(void)

{
  _DAT_14ca80878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e22b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80880,1);
  return;
}



// FUNCTION 1431e22b3 FUN_1431e22b3 body=69 status=ok
// SIG undefined FUN_1431e22b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e22b3(void)

{
  _DAT_14ca80888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431e22f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca80890,1);
  return;
}



// FUNCTION 1431e2306 FUN_1431e2306 body=109 status=ok
// SIG undefined FUN_1431e2306(void)

longlong FUN_1431e2306(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_18 = param_1;
  FUN_144a6c5bc(&DAT_14ca808c8,&local_18,&local_20);
  if ((local_20 == 0) || (cVar1 = FUN_1402ce39e(), lVar2 = local_20, cVar1 == '\0')) {
    lVar2 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1431e2374 FUN_1431e2374 body=104 status=ok
// SIG undefined FUN_1431e2374(void)

longlong FUN_1431e2374(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_144713a98(&DAT_14ca80ec8,param_1,&local_18);
  if ((local_18 == 0) || (cVar1 = FUN_1402ce39e(), lVar2 = local_18, cVar1 == '\0')) {
    lVar2 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1431e23ec FUN_1431e23ec body=44 status=ok
// SIG undefined FUN_1431e23ec(void)

void FUN_1431e23ec(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14ca811c8;
  if (DAT_14ca811c8 == 0) {
    return;
  }
  FUN_145c13958(DAT_14ca811c8);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1431e2418 FUN_1431e2418 body=44 status=ok
// SIG undefined FUN_1431e2418(void)

void FUN_1431e2418(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14ca811d0;
  if (DAT_14ca811d0 == 0) {
    return;
  }
  FUN_145c13a58(DAT_14ca811d0);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1431e2444 FUN_1431e2444 body=106 status=ok
// SIG undefined FUN_1431e2444(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e2444(void)

{
  _DAT_14ca811f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca81200,1);
  if (DAT_14ca811e8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca811d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1431e24b3 FUN_1431e24b3 body=2485 status=ok
// SIG undefined FUN_1431e24b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1431e24b3(void)

{
  int *piVar1;
  PSRWLOCK pRVar2;
  longlong lVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined ***pppuVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_e8 [32];
  LARGE_INTEGER *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  LARGE_INTEGER local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca812f0) && (FUN_144b3d300(&DAT_14ca812f0), DAT_14ca812f0 == -1)) {
    QueryPerformanceCounter(local_a8);
    _DAT_14ca812e8 = (double)local_a8[0].QuadPart * DAT_14c83f420 + 16777216.0;
    _Init_thread_footer(&DAT_14ca812f0);
  }
  QueryPerformanceCounter(local_a8);
  lVar19 = DAT_14ca80788;
  dVar5 = (double)local_a8[0].QuadPart * DAT_14c83f420 + 16777216.0;
  if (DAT_14ca806c0 == '\x01') {
    _DAT_14ca812e8 = dVar5;
  }
  iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar9 == 0x40000002) {
    uVar12 = 0;
  }
  else {
    bVar24 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar9 != 2)) {
      if (iVar9 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        bVar24 = DVar10 == DVar11;
      }
      else {
        bVar24 = false;
      }
    }
    uVar12 = (ulonglong)(bVar24 ^ 1);
  }
  iVar9 = *(int *)(lVar19 + uVar12 * 4);
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
  if ((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) {
    iVar8 = (**(code **)(*DAT_14ca813a0 + 0xb0))();
    iVar21 = 1;
    if (iVar8 < 1) {
      iVar21 = (int)(float)iVar9;
    }
  }
  else {
    iVar21 = (int)(float)iVar9;
  }
  bVar24 = (double)iVar21 <= dVar5 - _DAT_14ca812e8;
  uVar12 = CONCAT71((int7)((ulonglong)lVar19 >> 8),bVar24 && iVar21 != 0);
  if (bVar24 && iVar21 != 0) {
    _DAT_14ca812e8 = dVar5;
  }
  FUN_1431e2e6a(&DAT_14ca808c8,uVar12 & 0xffffffff);
  FUN_1431e3266(&DAT_14ca80bc8,uVar12 & 0xffffffff);
  FUN_1431e365e(&DAT_14ca80ec8,uVar12 & 0xffffffff);
  lVar19 = DAT_14ca811c8;
  pRVar2 = (PSRWLOCK)(DAT_14ca811c8 + 8);
  AcquireSRWLockExclusive(pRVar2);
  iVar9 = *(int *)(lVar19 + 0x88);
  if (0 < iVar9) {
    uVar17 = 0;
    do {
      lVar16 = *(longlong *)(lVar19 + 0x80);
      lVar23 = (longlong)(int)uVar17;
      if (*(int *)(lVar19 + 0x28) != *(int *)(lVar19 + 0x54)) {
        lVar3 = *(longlong *)(lVar16 + lVar23 * 8);
        lVar22 = *(longlong *)(lVar19 + 0x60);
        if (*(longlong *)(lVar19 + 0x60) == 0) {
          lVar22 = lVar19 + 0x58;
        }
        iVar21 = *(int *)(lVar22 + (ulonglong)
                                   (*(int *)(lVar19 + 0x68) - 1U &
                                   (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
        if (iVar21 != -1) {
          do {
            lVar22 = *(longlong *)(lVar19 + 0x20) + (longlong)iVar21 * 0x20;
            if (*(longlong *)(*(longlong *)(lVar19 + 0x20) + (longlong)iVar21 * 0x20) == lVar3) {
              plVar18 = (longlong *)(lVar22 + 8);
              if ((plVar18 != (longlong *)0x0 && lVar22 != 0) && (*plVar18 != 0)) {
                cVar7 = FUN_1402ce39e();
                if (cVar7 == '\0') goto LAB_1431e27fd;
                FUN_1402ce13e(*plVar18);
                puVar4 = (undefined8 *)*plVar18;
                if (puVar4 != (undefined8 *)0x0) {
                  (**(code **)*puVar4)(puVar4,1);
                }
                *plVar18 = 0;
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14ca813a8) &&
                   (FUN_144b3d300(&DAT_14ca813a8), DAT_14ca813a8 == -1)) {
                  if (DAT_14c8407a8 == (longlong *)0x0) {
                    FUN_1414b00ea();
                  }
                  DAT_14ca813a0 =
                       (longlong *)
                       (**(code **)(*DAT_14c8407a8 + 200))
                                 (DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
                  _Init_thread_footer(&DAT_14ca813a8);
                }
                if ((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) {
                  (**(code **)(*DAT_14ca813a0 + 0xb0))();
                }
                iVar9 = *(int *)(lVar19 + 0x88);
                iVar21 = ~uVar17 + iVar9;
                if (iVar21 == 0) goto LAB_1431e27e9;
                if (0 < iVar21) {
                  iVar21 = 1;
                }
                lVar16 = *(longlong *)(lVar19 + 0x80);
                pvVar14 = (void *)(lVar16 + lVar23 * 8);
                goto LAB_1431e27cc;
              }
              break;
            }
            iVar21 = *(int *)(lVar22 + 0x18);
          } while (iVar21 != -1);
        }
      }
      iVar21 = ~uVar17 + iVar9;
      if (iVar21 != 0) {
        pvVar14 = (void *)(lVar16 + lVar23 * 8);
        if (0 < iVar21) {
          iVar21 = 1;
        }
LAB_1431e27cc:
        memmove(pvVar14,(void *)(lVar16 + (longlong)(iVar9 - iVar21) * 8),(longlong)iVar21 << 3);
        iVar9 = *(int *)(lVar19 + 0x88);
      }
LAB_1431e27e9:
      *(int *)(lVar19 + 0x88) = iVar9 + -1;
      FUN_140496560((longlong *)(lVar19 + 0x80));
      uVar17 = uVar17 - 1;
LAB_1431e27fd:
      *(longlong *)(lVar19 + 0x90) = *(longlong *)(lVar19 + 0x90) + 1;
      uVar17 = uVar17 + 1;
      iVar9 = *(int *)(lVar19 + 0x88);
    } while ((int)uVar17 < iVar9);
  }
  ReleaseSRWLockExclusive(pRVar2);
  lVar19 = DAT_14ca811d0;
  pRVar2 = (PSRWLOCK)(DAT_14ca811d0 + 8);
  AcquireSRWLockExclusive(pRVar2);
  iVar9 = *(int *)(lVar19 + 0x88);
  if (0 < iVar9) {
    uVar17 = 0;
    do {
      lVar16 = *(longlong *)(lVar19 + 0x80);
      lVar23 = (longlong)(int)uVar17;
      if (*(int *)(lVar19 + 0x28) != *(int *)(lVar19 + 0x54)) {
        lVar3 = *(longlong *)(lVar16 + lVar23 * 8);
        lVar22 = *(longlong *)(lVar19 + 0x60);
        if (*(longlong *)(lVar19 + 0x60) == 0) {
          lVar22 = lVar19 + 0x58;
        }
        iVar21 = *(int *)(lVar22 + (ulonglong)
                                   (*(int *)(lVar19 + 0x68) - 1U &
                                   (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
        if (iVar21 != -1) {
          do {
            lVar22 = *(longlong *)(lVar19 + 0x20) + (longlong)iVar21 * 0x20;
            if (*(longlong *)(*(longlong *)(lVar19 + 0x20) + (longlong)iVar21 * 0x20) == lVar3) {
              plVar18 = (longlong *)(lVar22 + 8);
              if ((plVar18 != (longlong *)0x0 && lVar22 != 0) && (*plVar18 != 0)) {
                cVar7 = FUN_1402ce39e();
                if (cVar7 == '\0') goto LAB_1431e2a3a;
                FUN_1402ce13e(*plVar18);
                puVar4 = (undefined8 *)*plVar18;
                if (puVar4 != (undefined8 *)0x0) {
                  (**(code **)*puVar4)(puVar4,1);
                }
                *plVar18 = 0;
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14ca813a8) &&
                   (FUN_144b3d300(&DAT_14ca813a8), DAT_14ca813a8 == -1)) {
                  if (DAT_14c8407a8 == (longlong *)0x0) {
                    FUN_1414b00ea();
                  }
                  DAT_14ca813a0 =
                       (longlong *)
                       (**(code **)(*DAT_14c8407a8 + 200))
                                 (DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
                  _Init_thread_footer(&DAT_14ca813a8);
                }
                if ((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) {
                  (**(code **)(*DAT_14ca813a0 + 0xb0))();
                }
                iVar9 = *(int *)(lVar19 + 0x88);
                iVar21 = ~uVar17 + iVar9;
                if (iVar21 == 0) goto LAB_1431e2a26;
                if (0 < iVar21) {
                  iVar21 = 1;
                }
                lVar16 = *(longlong *)(lVar19 + 0x80);
                pvVar14 = (void *)(lVar16 + lVar23 * 8);
                goto LAB_1431e2a09;
              }
              break;
            }
            iVar21 = *(int *)(lVar22 + 0x18);
          } while (iVar21 != -1);
        }
      }
      iVar21 = ~uVar17 + iVar9;
      if (iVar21 != 0) {
        pvVar14 = (void *)(lVar16 + lVar23 * 8);
        if (0 < iVar21) {
          iVar21 = 1;
        }
LAB_1431e2a09:
        memmove(pvVar14,(void *)(lVar16 + (longlong)(iVar9 - iVar21) * 8),(longlong)iVar21 << 3);
        iVar9 = *(int *)(lVar19 + 0x88);
      }
LAB_1431e2a26:
      *(int *)(lVar19 + 0x88) = iVar9 + -1;
      FUN_140496560((longlong *)(lVar19 + 0x80));
      uVar17 = uVar17 - 1;
LAB_1431e2a3a:
      *(longlong *)(lVar19 + 0x90) = *(longlong *)(lVar19 + 0x90) + 1;
      uVar17 = uVar17 + 1;
      iVar9 = *(int *)(lVar19 + 0x88);
    } while ((int)uVar17 < iVar9);
  }
  ReleaseSRWLockExclusive(pRVar2);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  lVar19 = DAT_14ca805f8;
  DAT_14ca805f8 = 0;
  iVar9 = DAT_14ca80600;
  uVar6 = DAT_14ca80604;
  _DAT_14ca80600 = 0;
  FUN_14178d166();
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  if ((iVar9 == 0) || (cVar7 = FUN_1431dd47e(), cVar7 == '\0')) {
    if (lVar19 != 0) {
      FUN_1400020a8(lVar19);
    }
  }
  else {
    uVar13 = FUN_1401cb356();
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14a37d530;
    local_80 = lVar19;
    local_78 = iVar9;
    local_74 = uVar6;
    local_a8[0].QuadPart = (LONGLONG)FUN_1431e7be4;
    local_c8 = local_a8;
    FUN_1401cbba4(uVar13,local_b8,L"OnPipelineStateLoggedBroadcastGT",0);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    if ((code *)local_a8[0].QuadPart != (code *)0x0) {
      pppuVar15 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar15 = &local_88;
      }
      (*(code *)(*pppuVar15)[2])();
    }
  }
  uVar6 = DAT_14ca812f4;
  uVar12 = (ulonglong)DAT_14ca80720;
  DAT_14ca80720 = DAT_14ca80720 + 1;
  if (DAT_14ca80724 < DAT_14ca80720) {
    FUN_1447808da(&DAT_14ca80718,uVar12);
  }
  memmove(DAT_14ca80718 + 1,DAT_14ca80718,uVar12 << 2);
  *DAT_14ca80718 = uVar6;
  uVar17 = DAT_14ca80720;
  lVar19 = (longlong)(int)DAT_14ca80720;
  if (lVar19 < 3) {
    DAT_14ca80720 = 3;
    uVar20 = 3 - uVar17;
    if (DAT_14ca80724 - uVar17 < uVar20) {
      FUN_1447808da(&DAT_14ca80718);
    }
    memset(DAT_14ca80718 + lVar19,0,(ulonglong)uVar20 << 2);
  }
  else if (DAT_14ca80720 != 3) {
    DAT_14ca80720 = 3;
    FUN_144780a3c(&DAT_14ca80718);
  }
  uVar6 = DAT_14ca812f8;
  uVar12 = (ulonglong)DAT_14ca80730;
  DAT_14ca80730 = DAT_14ca80730 + 1;
  if (DAT_14ca80734 < DAT_14ca80730) {
    FUN_1447808da(&DAT_14ca80728,uVar12);
  }
  memmove(DAT_14ca80728 + 1,DAT_14ca80728,uVar12 << 2);
  *DAT_14ca80728 = uVar6;
  uVar17 = DAT_14ca80730;
  lVar19 = (longlong)(int)DAT_14ca80730;
  if (lVar19 < 3) {
    DAT_14ca80730 = 3;
    uVar20 = 3 - uVar17;
    if (DAT_14ca80734 - uVar17 < uVar20) {
      FUN_1447808da(&DAT_14ca80728);
    }
    memset(DAT_14ca80728 + lVar19,0,(ulonglong)uVar20 << 2);
  }
  else if (DAT_14ca80730 != 3) {
    DAT_14ca80730 = 3;
    FUN_144780a3c(&DAT_14ca80728);
  }
  uVar6 = DAT_14ca812f8;
  LOCK();
  DAT_14ca812f4 = 0;
  UNLOCK();
  LOCK();
  DAT_14ca812f8 = 0;
  UNLOCK();
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1431e2e6a FUN_1431e2e6a body=999 status=ok
// SIG undefined FUN_1431e2e6a(void)

void FUN_1431e2e6a(longlong param_1,byte param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_a8;
  longlong local_a0;
  code *local_98;
  undefined8 local_88;
  undefined **local_78;
  longlong local_70;
  undefined1 local_50 [32];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x298));
  }
  param_2 = param_2 | *(byte *)(param_1 + 0x2b0);
  *(byte *)(param_1 + 0x2b0) = param_2;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x2a0) + 0xa0) & 1) == 0) goto LAB_1431e2f84;
    puVar6 = *(undefined8 **)(param_1 + 0x2a0);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    FUN_1414eae4e(param_1);
    param_2 = *(byte *)(param_1 + 0x2b0);
  }
  *(byte *)(param_1 + 0x2b1) = param_2;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  lVar9 = *(longlong *)(param_1 + 0x218);
  if (DAT_14c760d80 == '\x01') {
    if ((*(int *)(lVar9 + 8) == *(int *)(lVar9 + 0x34)) &&
       (*(int *)(*(longlong *)(param_1 + 0x220) + 8) ==
        *(int *)(*(longlong *)(param_1 + 0x220) + 0x34))) {
      FUN_145cb65f4(lVar9,*(undefined8 *)(param_1 + 0x208));
      FUN_145cb65f4(*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x210));
    }
    puVar6 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar6,0);
    *puVar6 = &PTR_FUN_149e00300;
    if (*(code **)(puVar6[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar6[0xe] + 0x18))(puVar6 + 0xe,puVar6 + 9);
    }
    puVar6[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar6[9] = puVar6;
    puVar6[10] = puVar6;
    lVar9 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar9 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar9 + 0x30);
    }
    puVar6[0xf] = uVar7;
    puVar6[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 2;
    puVar2 = *(undefined8 **)(param_1 + 0x2a0);
    *(undefined8 **)(param_1 + 0x2a0) = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    local_30 = (undefined1 *)0x0;
    local_28 = 0x400000000;
    if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
      local_a0 = *(longlong *)(param_1 + 0x2a0);
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      FUN_1431eb40e(&DAT_14ca850c8,&local_a0);
      uVar3 = local_28;
      lVar9 = (longlong)(int)local_28;
      uVar5 = (int)local_28 + 1;
      local_28 = CONCAT44(local_28._4_4_,uVar5);
      if (local_28._4_4_ < uVar5) {
        FUN_14476a5c8(local_50,uVar3 & 0xffffffff);
      }
      puVar8 = local_30;
      if (local_30 == (undefined1 *)0x0) {
        puVar8 = local_50;
      }
      *(longlong *)(puVar8 + lVar9 * 8) = DAT_14ca85450;
      if (DAT_14ca85450 != 0) {
        LOCK();
        *(int *)(DAT_14ca85450 + 8) = *(int *)(DAT_14ca85450 + 8) + 1;
        UNLOCK();
      }
    }
    FUN_14493fe30(param_1,param_1 + 0x28,param_1 + 0x270);
    local_b8 = CONCAT31(local_b8._1_3_,1);
    FUN_1402ce666(param_1,*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),
                  param_1 + 0x28);
    local_88 = 0;
    local_78 = &PTR_LAB_14a37d550;
    local_98 = FUN_14493fa30;
    local_b8 = 0x6ff;
    local_70 = param_1;
    FUN_14014aede(&local_a8);
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_a8)(local_a8,1);
      }
    }
    puVar8 = local_50;
    if (local_30 != (undefined1 *)0x0) {
      puVar8 = local_30;
    }
    FUN_144717c65(puVar8,local_28 & 0xffffffff);
    if (local_30 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((*(int *)(lVar9 + 8) != *(int *)(lVar9 + 0x34)) ||
       (*(int *)(*(longlong *)(param_1 + 0x220) + 8) !=
        *(int *)(*(longlong *)(param_1 + 0x220) + 0x34))) {
      FUN_145c13c2c(param_1);
    }
    FUN_1414eb738(param_1);
    FUN_1414ec2ec(param_1);
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    if (*(char *)(param_1 + 0x2b1) == '\x01') {
      uVar4 = FUN_1402cef90(param_1,param_1 + 0x208,param_1 + 0x210);
      *(undefined4 *)(param_1 + 0x2a8) = uVar4;
      *(undefined1 *)(param_1 + 0x2b1) = 0;
    }
  }
LAB_1431e2f84:
  if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_d8);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e3266 FUN_1431e3266 body=995 status=ok
// SIG undefined FUN_1431e3266(void)

void FUN_1431e3266(longlong param_1,byte param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_a8;
  longlong local_a0;
  code *local_98;
  undefined8 local_88;
  undefined **local_78;
  longlong local_70;
  undefined1 local_50 [32];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x298));
  }
  param_2 = param_2 | *(byte *)(param_1 + 0x2b0);
  *(byte *)(param_1 + 0x2b0) = param_2;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x2a0) + 0xa0) & 1) == 0) goto LAB_1431e32c3;
    puVar6 = *(undefined8 **)(param_1 + 0x2a0);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    FUN_1414eb048(param_1);
    param_2 = *(byte *)(param_1 + 0x2b0);
  }
  *(byte *)(param_1 + 0x2b1) = param_2;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  lVar9 = *(longlong *)(param_1 + 0x218);
  if (DAT_14c760d80 == '\x01') {
    if ((*(int *)(lVar9 + 8) == *(int *)(lVar9 + 0x34)) &&
       (*(int *)(*(longlong *)(param_1 + 0x220) + 8) ==
        *(int *)(*(longlong *)(param_1 + 0x220) + 0x34))) {
      FUN_1402a2ad0(lVar9,*(undefined8 *)(param_1 + 0x208));
      FUN_1402a2ad0(*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x210));
    }
    puVar6 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar6,0);
    *puVar6 = &PTR_FUN_149e00300;
    if (*(code **)(puVar6[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar6[0xe] + 0x18))(puVar6 + 0xe,puVar6 + 9);
    }
    puVar6[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar6[9] = puVar6;
    puVar6[10] = puVar6;
    lVar9 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar9 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar9 + 0x30);
    }
    puVar6[0xf] = uVar7;
    puVar6[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 2;
    puVar2 = *(undefined8 **)(param_1 + 0x2a0);
    *(undefined8 **)(param_1 + 0x2a0) = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    local_30 = (undefined1 *)0x0;
    local_28 = 0x400000000;
    if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
      local_a0 = *(longlong *)(param_1 + 0x2a0);
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      FUN_1431eb40e(&DAT_14ca850c8,&local_a0);
      uVar3 = local_28;
      lVar9 = (longlong)(int)local_28;
      uVar5 = (int)local_28 + 1;
      local_28 = CONCAT44(local_28._4_4_,uVar5);
      if (local_28._4_4_ < uVar5) {
        FUN_14476a5c8(local_50,uVar3 & 0xffffffff);
      }
      puVar8 = local_30;
      if (local_30 == (undefined1 *)0x0) {
        puVar8 = local_50;
      }
      *(longlong *)(puVar8 + lVar9 * 8) = DAT_14ca85450;
      if (DAT_14ca85450 != 0) {
        LOCK();
        *(int *)(DAT_14ca85450 + 8) = *(int *)(DAT_14ca85450 + 8) + 1;
        UNLOCK();
      }
    }
    FUN_140454cb0(param_1,param_1 + 0x28,param_1 + 0x270);
    local_b8 = CONCAT31(local_b8._1_3_,1);
    FUN_1404549da(param_1,*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),
                  param_1 + 0x28);
    local_88 = 0;
    local_78 = &PTR_LAB_14a37d5e0;
    local_98 = FUN_14045455a;
    local_b8 = 0x6ff;
    local_70 = param_1;
    FUN_14014aede(&local_a8);
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_a8)(local_a8,1);
      }
    }
    puVar8 = local_50;
    if (local_30 != (undefined1 *)0x0) {
      puVar8 = local_30;
    }
    FUN_144717c65(puVar8,local_28 & 0xffffffff);
    if (local_30 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((*(int *)(lVar9 + 8) != *(int *)(lVar9 + 0x34)) ||
       (*(int *)(*(longlong *)(param_1 + 0x220) + 8) !=
        *(int *)(*(longlong *)(param_1 + 0x220) + 0x34))) {
      FUN_14740f4ac(param_1);
    }
    FUN_145c14158(param_1);
    FUN_1414ebb18(param_1);
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    if (*(char *)(param_1 + 0x2b1) == '\x01') {
      uVar4 = FUN_140454f1a(param_1,param_1 + 0x208,param_1 + 0x210);
      *(undefined4 *)(param_1 + 0x2a8) = uVar4;
      *(undefined1 *)(param_1 + 0x2b1) = 0;
    }
  }
LAB_1431e32c3:
  if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_d8);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e365e FUN_1431e365e body=999 status=ok
// SIG undefined FUN_1431e365e(void)

void FUN_1431e365e(longlong param_1,byte param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_a8;
  longlong local_a0;
  code *local_98;
  undefined8 local_88;
  undefined **local_78;
  longlong local_70;
  undefined1 local_50 [32];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x298));
  }
  param_2 = param_2 | *(byte *)(param_1 + 0x2b0);
  *(byte *)(param_1 + 0x2b0) = param_2;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x2a0) + 0xa0) & 1) == 0) goto LAB_1431e3778;
    puVar6 = *(undefined8 **)(param_1 + 0x2a0);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    FUN_1414eaf48(param_1);
    param_2 = *(byte *)(param_1 + 0x2b0);
  }
  *(byte *)(param_1 + 0x2b1) = param_2;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  lVar9 = *(longlong *)(param_1 + 0x218);
  if (DAT_14c760d80 == '\x01') {
    if ((*(int *)(lVar9 + 8) == *(int *)(lVar9 + 0x34)) &&
       (*(int *)(*(longlong *)(param_1 + 0x220) + 8) ==
        *(int *)(*(longlong *)(param_1 + 0x220) + 0x34))) {
      FUN_145cb3208(lVar9,*(undefined8 *)(param_1 + 0x208));
      FUN_145cb3208(*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x210));
    }
    puVar6 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar6,0);
    *puVar6 = &PTR_FUN_149e00300;
    if (*(code **)(puVar6[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar6[0xe] + 0x18))(puVar6 + 0xe,puVar6 + 9);
    }
    puVar6[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar6[9] = puVar6;
    puVar6[10] = puVar6;
    lVar9 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar9 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar9 + 0x30);
    }
    puVar6[0xf] = uVar7;
    puVar6[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 2;
    puVar2 = *(undefined8 **)(param_1 + 0x2a0);
    *(undefined8 **)(param_1 + 0x2a0) = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    local_30 = (undefined1 *)0x0;
    local_28 = 0x400000000;
    if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
      local_a0 = *(longlong *)(param_1 + 0x2a0);
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      FUN_1431eb40e(&DAT_14ca850c8,&local_a0);
      uVar3 = local_28;
      lVar9 = (longlong)(int)local_28;
      uVar5 = (int)local_28 + 1;
      local_28 = CONCAT44(local_28._4_4_,uVar5);
      if (local_28._4_4_ < uVar5) {
        FUN_14476a5c8(local_50,uVar3 & 0xffffffff);
      }
      puVar8 = local_30;
      if (local_30 == (undefined1 *)0x0) {
        puVar8 = local_50;
      }
      *(longlong *)(puVar8 + lVar9 * 8) = DAT_14ca85450;
      if (DAT_14ca85450 != 0) {
        LOCK();
        *(int *)(DAT_14ca85450 + 8) = *(int *)(DAT_14ca85450 + 8) + 1;
        UNLOCK();
      }
    }
    FUN_1449ce46c(param_1,param_1 + 0x28,param_1 + 0x270);
    local_b8 = CONCAT31(local_b8._1_3_,1);
    FUN_1404ef6aa(param_1,*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),
                  param_1 + 0x28);
    local_88 = 0;
    local_78 = &PTR_LAB_14a37d670;
    local_98 = FUN_1449ce028;
    local_b8 = 0x6ff;
    local_70 = param_1;
    FUN_14014aede(&local_a8);
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_a8)(local_a8,1);
      }
    }
    puVar8 = local_50;
    if (local_30 != (undefined1 *)0x0) {
      puVar8 = local_30;
    }
    FUN_144717c65(puVar8,local_28 & 0xffffffff);
    if (local_30 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((*(int *)(lVar9 + 8) != *(int *)(lVar9 + 0x34)) ||
       (*(int *)(*(longlong *)(param_1 + 0x220) + 8) !=
        *(int *)(*(longlong *)(param_1 + 0x220) + 0x34))) {
      FUN_145c13e28(param_1);
    }
    FUN_1414eb380(param_1);
    FUN_1414ecb60(param_1);
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    if (*(char *)(param_1 + 0x2b1) == '\x01') {
      uVar4 = FUN_1404efa56(param_1,param_1 + 0x208,param_1 + 0x210);
      *(undefined4 *)(param_1 + 0x2a8) = uVar4;
      *(undefined1 *)(param_1 + 0x2b1) = 0;
    }
  }
LAB_1431e3778:
  if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_d8);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e3a5a FUN_1431e3a5a body=227 status=ok
// SIG undefined FUN_1431e3a5a(void)

bool FUN_1431e3a5a(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  bool bVar7;
  
  lVar3 = DAT_14ca80748;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar2 + 0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  iVar1 = *(int *)(lVar3 + uVar6 * 4);
  if ((iVar1 == 1) || ((iVar1 == 2 && (param_2 != 0)))) {
    param_2 = 0;
  }
  else {
    param_2 = iVar1 != 3 | param_2;
  }
  if ((DAT_14ca85064 == '\x01') &&
     (param_2 == 0 &&
      (*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 1) != 0)) {
    bVar7 = false;
    if ((DAT_14c842750 == '\x01') && (*(int *)(lVar2 + 0xc60) != 0x20)) {
      bVar7 = (*(byte *)(param_1 + 0x17b) & 0x10) == 0;
    }
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}



// FUNCTION 1431e3b3d FUN_1431e3b3d body=539 status=ok
// SIG undefined FUN_1431e3b3d(void)

undefined8 * FUN_1431e3b3d(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  cVar4 = FUN_1474051de(&DAT_14ca80bc8);
  if (cVar4 != '\0') {
    local_28[2] = DAT_14c867d10;
    goto LAB_1431e3b82;
  }
  local_28 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  lVar8 = *(longlong *)(param_2 + 0x20);
  local_28[1] = 0;
  local_28[2] = DAT_14c867d10;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  *local_28 = &PTR_FUN_14a37d458;
  local_28[7] = lVar8;
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    lVar8 = local_28[7];
  }
  local_28[8] = 0;
  LOCK();
  *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  UNLOCK();
  (**(code **)(*DAT_14ca83900 + 0x130))(DAT_14ca83900,&local_30,param_2);
  plVar7 = local_28 + 8;
  if (plVar7 == &local_30) {
LAB_1431e3c2b:
    lVar8 = local_30;
    if (local_30 != 0) {
      LOCK();
      puVar1 = (uint *)(local_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_30 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar8;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    lVar8 = *plVar7;
    *plVar7 = local_30;
    local_30 = 0;
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar8 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar8;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_1431e3c2b;
    }
  }
  FUN_1474053d4(&DAT_14ca80bc8,param_2,&local_28);
LAB_1431e3b82:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_28;
}



// FUNCTION 1431e3d59 FUN_1431e3d59 body=3244 status=ok
// SIG undefined FUN_1431e3d59(void)

longlong FUN_1431e3d59(undefined8 param_1,undefined4 *param_2,ulonglong param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong lVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  bool bVar25;
  undefined1 auStack_348 [46];
  char local_31a;
  undefined1 local_319;
  undefined4 *local_318;
  undefined8 local_310;
  longlong local_308;
  longlong *local_300;
  longlong local_2f8;
  undefined8 *local_2f0;
  undefined8 *local_2e8;
  uint local_2e0;
  ushort local_2dc;
  uint local_2d8;
  uint local_2d4;
  uint *local_2d0;
  undefined8 **local_2c8;
  undefined4 uStack_2be;
  undefined2 uStack_2ba;
  undefined4 local_2b8;
  undefined8 uStack_2b4;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined8 uStack_29c;
  undefined8 local_294;
  undefined8 uStack_28c;
  undefined4 local_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 auStack_278 [12];
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined2 local_158;
  uint local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  byte local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  uVar20 = param_3 & 0xffffffff;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  cVar5 = FUN_1431e3a5a(param_1,0);
  local_2f8 = 0;
  cVar6 = FUN_147405456(param_2);
  if (cVar6 == '\0') {
    cVar6 = FUN_1403966e6();
    if ((cVar6 != '\0') &&
       ((cVar6 = FUN_140396614(), cVar6 != '\0' || (cVar6 = FUN_1431dd47e(), cVar6 != '\0')))) {
      local_a8 = *(longlong *)(param_2 + 0x12);
      uStack_a0 = *(undefined8 *)(param_2 + 0x14);
      local_98 = *(undefined8 *)(param_2 + 0x16);
      uStack_90 = *(undefined8 *)(param_2 + 0x18);
      local_88 = *(undefined8 *)(param_2 + 0x1a);
      uStack_80 = *(undefined8 *)(param_2 + 0x1c);
      local_78 = param_2[0x1e];
      uStack_74 = param_2[0x1f];
      uStack_70 = param_2[0x20];
      uStack_6c = param_2[0x21];
      local_31a = cVar5;
      local_319 = (char)uVar20;
      local_318 = param_2;
      local_310 = param_1;
      AcquireSRWLockShared((PSRWLOCK)&DAT_14ca80410);
      lVar9 = 0;
      bVar25 = false;
      do {
        local_308 = lVar9;
        if ((longlong)*(int *)((longlong)&uStack_a0 + lVar9) != 0) {
          plVar22 = *(longlong **)((longlong)&local_a8 + lVar9);
          local_300 = plVar22 + *(int *)((longlong)&uStack_a0 + lVar9);
          do {
            lVar9 = *plVar22;
            uVar17 = *(uint *)(lVar9 + 0x88);
            local_b8 = *(undefined4 *)(lVar9 + 0x8c);
            uStack_b4 = *(undefined4 *)(lVar9 + 0x90);
            uStack_b0 = *(undefined4 *)(lVar9 + 0x94);
            uStack_ac = *(undefined4 *)(lVar9 + 0x98);
            bVar2 = *(byte *)(lVar9 + 0x9c);
            local_2d4 = uVar17 ^ bVar2;
            if (DAT_14ca804c0 != DAT_14ca804ec) {
              puVar24 = DAT_14ca804f8;
              if (DAT_14ca804f8 == (undefined *)0x0) {
                puVar24 = &DAT_14ca804f0;
              }
              iVar3 = *(int *)(puVar24 + (ulonglong)(DAT_14ca80500 - 1U & local_2d4) * 4);
              while (iVar3 != -1) {
                lVar9 = DAT_14ca804b8 + (longlong)iVar3 * 0x20;
                if (*(uint *)(DAT_14ca804b8 + (longlong)iVar3 * 0x20) == local_2d4) {
                  if (((ulonglong *)(lVar9 + 8) != (ulonglong *)0x0 && lVar9 != 0) &&
                     ((DAT_14ca80690 & ~*(ulonglong *)(lVar9 + 8)) == 0)) goto LAB_1431e430f;
                  break;
                }
                iVar3 = *(int *)(lVar9 + 0x18);
              }
            }
            if (!bVar25) {
              ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca80410);
              AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
            }
            if (DAT_14ca804c0 != DAT_14ca804ec) {
              puVar24 = DAT_14ca804f8;
              if (DAT_14ca804f8 == (undefined *)0x0) {
                puVar24 = &DAT_14ca804f0;
              }
              iVar3 = *(int *)(puVar24 + (ulonglong)(DAT_14ca80500 - 1U & local_2d4) * 4);
              while (iVar3 != -1) {
                lVar9 = DAT_14ca804b8 + (longlong)iVar3 * 0x20;
                if (*(uint *)(DAT_14ca804b8 + (longlong)iVar3 * 0x20) == local_2d4) {
                  bVar25 = true;
                  if ((lVar9 + 8U & 0xfffffffffffffff7) != 0) goto LAB_1431e430f;
                  break;
                }
                iVar3 = *(int *)(lVar9 + 0x18);
              }
            }
            local_1b4 = 0;
            local_254 = 0;
            uStack_24c = 0;
            local_264 = 0;
            uStack_25c = 0;
            auStack_278._4_8_ = 0;
            uStack_26c = 0;
            local_284 = 0;
            uStack_280 = 0;
            uStack_27c = 0;
            auStack_278._0_4_ = 0;
            local_294 = 0;
            uStack_28c = 0;
            uStack_2a4 = 0;
            uStack_29c = 0;
            uStack_2b4 = 0;
            uStack_2ac = 0;
            local_244 = 0;
            local_1b0 = 0x11;
            lVar9 = 0x112;
            do {
              *(undefined4 *)((longlong)&uStack_2be + lVar9) = 0x100;
              *(undefined2 *)((longlong)&uStack_2ba + lVar9) = 1;
              *(undefined1 *)((longlong)&local_2b8 + lVar9) = 0xf;
              lVar9 = lVar9 + 7;
            } while (lVar9 != 0x14a);
            local_168 = 0;
            local_170 = 0;
            local_164 = 0x7000101;
            local_15c = 7;
            local_158 = 0xffff;
            local_2b8 = 2;
            local_dc = local_b8;
            uStack_d8 = uStack_b4;
            uStack_d4 = uStack_b0;
            uStack_d0 = uStack_ac;
            local_cc = 0;
            local_e0 = uVar17;
            local_c8 = bVar2;
            local_2e0 = FUN_140975dc5(&local_2b8);
            local_2e8 = (undefined8 *)0x0;
            local_2dc = 0;
            local_2d8 = local_2e0;
            cVar5 = FUN_140975b7c(&local_2b8);
            if (cVar5 == '\0') {
              cVar5 = FUN_140396614();
              if (cVar5 != '\0') {
                FUN_14143d440(&local_2d0);
              }
              DAT_14ca80658 = DAT_14ca80658 + 1;
              cVar5 = FUN_1431dd47e();
              uVar17 = DAT_14ca80600;
              if ((cVar5 != '\0') && ((longlong)DAT_14ca80680 != 0)) {
                lVar9 = 0;
                do {
                  if ((*(int *)(DAT_14ca80678 + 8 + lVar9) != 0) &&
                     (*(longlong *)(DAT_14ca80678 + lVar9) != 0)) {
                    lVar9 = (longlong)(int)DAT_14ca80600;
                    DAT_14ca80600 = DAT_14ca80600 + 1;
                    if (DAT_14ca80604 < DAT_14ca80600) {
                      FUN_14740e962(uVar17);
                    }
                    FUN_14143db70(lVar9 * 0x1f8 + DAT_14ca805f8,&local_2b8);
                    break;
                  }
                  lVar9 = lVar9 + 0x10;
                } while ((longlong)DAT_14ca80680 * 0x10 != lVar9);
              }
            }
            if ((DAT_14ca80690 & ~(ulonglong)local_2e8) != 0) {
              local_2e8 = (undefined8 *)(DAT_14ca80690 | (ulonglong)local_2e8);
              puVar10 = (ulonglong *)FUN_14178cfa2(local_2e0,&local_2e0);
              *(uint *)(puVar10 + 1) = local_2e0;
              *puVar10 = *puVar10 | (ulonglong)local_2e8;
              *(ushort *)((longlong)puVar10 + 0xc) =
                   *(ushort *)((longlong)puVar10 + 0xc) | local_2dc;
            }
            local_2d0 = &local_2d4;
            local_2c8 = &local_2e8;
            FUN_14070eaba(&local_2f0,&local_2d0);
            uVar17 = local_2d8;
            if (DAT_14ca80560 != DAT_14ca8058c) {
              puVar24 = DAT_14ca80598;
              if (DAT_14ca80598 == (undefined *)0x0) {
                puVar24 = &DAT_14ca80590;
              }
              uVar4 = *(uint *)(puVar24 + (ulonglong)(DAT_14ca805a0 - 1U & local_2d8) * 4);
              while (uVar4 != 0xffffffff) {
                puVar15 = (uint *)(DAT_14ca80558 + (longlong)(int)uVar4 * 0x18);
                if (*puVar15 == local_2d8) {
                  if ((puVar15 != (uint *)0x0) && (*(longlong *)(puVar15 + 2) != 0))
                  goto LAB_1431e430a;
                  break;
                }
                uVar4 = puVar15[4];
              }
            }
            local_2f0 = (undefined8 *)FUN_14001cc68(0x28,0x10);
            *local_2f0 = 0;
            local_2f0[1] = 0;
            local_2f0[2] = 1;
            local_2f0[3] = 1;
            *(uint *)(local_2f0 + 4) = uVar17;
            local_2d0 = &local_2d8;
            local_2c8 = &local_2f0;
            FUN_14151e2ce((longlong)&uStack_2be + 2,&local_2d0);
LAB_1431e430a:
            bVar25 = true;
LAB_1431e430f:
            plVar22 = plVar22 + 1;
          } while (plVar22 != local_300);
        }
        lVar9 = local_308 + 0x10;
      } while (lVar9 != 0x40);
      if (bVar25) {
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
      }
      else {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca80410);
      }
      uVar20 = CONCAT71((int7)((ulonglong)&local_2d4 >> 8),local_319);
      param_2 = local_318;
      param_1 = local_310;
      cVar5 = local_31a;
    }
    local_2b8 = *param_2;
    uStack_2b4 = *(undefined8 *)(param_2 + 1);
    uStack_2ac = *(undefined8 *)(param_2 + 3);
    uStack_2a4 = *(undefined8 *)(param_2 + 5);
    uStack_29c = *(undefined8 *)(param_2 + 7);
    local_294 = *(undefined8 *)(param_2 + 9);
    uStack_28c = CONCAT26(uStack_28c._6_2_,*(undefined6 *)(param_2 + 0xb));
    lVar9 = *(longlong *)(param_2 + 0xe);
    uStack_280 = (undefined4)lVar9;
    uStack_27c = (undefined4)((ulonglong)lVar9 >> 0x20);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
      lVar9 = *(longlong *)(param_2 + 0xe);
    }
    puVar21 = (undefined8 *)(param_2 + 0x10);
    puVar23 = (undefined8 *)auStack_278;
    for (lVar18 = 9; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar23 = *puVar21;
      puVar21 = puVar21 + 1;
      puVar23 = puVar23 + 1;
    }
    if ((DAT_14ca84ef6 == '\x01') && (lVar9 == 0)) {
      local_a8 = 0;
      cVar6 = FUN_14740554c(&local_2b8);
      if (cVar6 != '\0') {
        lVar9 = *(longlong *)(local_a8 + 0x28);
        lVar18 = CONCAT44(uStack_27c,uStack_280);
        if (lVar18 != lVar9) {
          uStack_280 = (undefined4)lVar9;
          uStack_27c = (undefined4)((ulonglong)lVar9 >> 0x20);
          if (lVar9 != 0) {
            LOCK();
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            UNLOCK();
          }
          if (lVar18 != 0) {
            LOCK();
            puVar15 = (uint *)(lVar18 + 8);
            uVar17 = *puVar15;
            *puVar15 = *puVar15 - 1;
            UNLOCK();
            if ((uVar17 & 0x3fffffff) == 1) {
              puVar15 = (uint *)(lVar18 + 8);
              LOCK();
              uVar17 = *puVar15;
              *puVar15 = *puVar15 | 0x40000000;
              UNLOCK();
              if ((uVar17 >> 0x1e & 1) == 0) {
                bVar2 = *(byte *)(lVar18 + 0xd);
                plVar11 = (longlong *)FUN_14001cc68(0x10,8);
                plVar11[1] = lVar18;
                plVar22 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c8;
                if ((bVar2 & 2) == 0) {
                  do {
                    *plVar11 = (longlong)plVar22;
                    LOCK();
                    bVar25 = plVar22 != DAT_14ca843c0;
                    plVar13 = plVar11;
                    if (bVar25) {
                      plVar22 = DAT_14ca843c0;
                      plVar13 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar13;
                    UNLOCK();
                  } while (bVar25);
                }
                else {
                  do {
                    *plVar11 = (longlong)plVar13;
                    LOCK();
                    bVar25 = plVar13 != DAT_14ca843c8;
                    plVar22 = plVar11;
                    if (bVar25) {
                      plVar13 = DAT_14ca843c8;
                      plVar22 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar22;
                    UNLOCK();
                  } while (bVar25);
                }
              }
            }
          }
        }
      }
    }
    lVar9 = DAT_14ca807b8;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar3 == 0x40000002) {
      uVar12 = 0;
    }
    else {
      bVar25 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar3 != 2)) {
        if (iVar3 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          bVar25 = DVar7 == DVar8;
        }
        else {
          bVar25 = false;
        }
      }
      uVar12 = (ulonglong)(bVar25 ^ 1);
    }
    if ((0 < *(int *)(lVar9 + uVar12 * 4)) && (DAT_14ca812e0 != DAT_14c872be0)) {
      FUN_1474056f8();
    }
    lVar9 = FUN_147405a76(&local_2b8);
    local_2f8 = lVar9;
    if (cVar5 == '\0') {
      (**(code **)(*DAT_14ca83900 + 0x4f0))(DAT_14ca83900,&local_a8,&local_2b8);
      plVar22 = (longlong *)(lVar9 + 0x28);
      if (plVar22 != &local_a8) {
        lVar9 = *plVar22;
        *plVar22 = local_a8;
        local_a8 = 0;
        if (lVar9 == 0) goto LAB_1431e4619;
        LOCK();
        puVar15 = (uint *)(lVar9 + 8);
        uVar17 = *puVar15;
        *puVar15 = *puVar15 - 1;
        UNLOCK();
        if ((uVar17 & 0x3fffffff) == 1) {
          puVar15 = (uint *)(lVar9 + 8);
          LOCK();
          uVar17 = *puVar15;
          *puVar15 = *puVar15 | 0x40000000;
          UNLOCK();
          if ((uVar17 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar9 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar9;
            plVar22 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar22;
                LOCK();
                bVar25 = plVar22 != DAT_14ca843c0;
                plVar13 = plVar11;
                if (bVar25) {
                  plVar22 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar25);
            }
            else {
              do {
                *plVar11 = (longlong)plVar13;
                LOCK();
                bVar25 = plVar13 != DAT_14ca843c8;
                plVar22 = plVar11;
                if (bVar25) {
                  plVar13 = DAT_14ca843c8;
                  plVar22 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar22;
                UNLOCK();
              } while (bVar25);
            }
          }
        }
      }
      lVar9 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        puVar15 = (uint *)(local_a8 + 8);
        uVar17 = *puVar15;
        *puVar15 = *puVar15 - 1;
        UNLOCK();
        if ((uVar17 & 0x3fffffff) == 1) {
          puVar15 = (uint *)(local_a8 + 8);
          LOCK();
          uVar17 = *puVar15;
          *puVar15 = *puVar15 | 0x40000000;
          UNLOCK();
          if ((uVar17 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_a8 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar9;
            plVar22 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar22;
                LOCK();
                bVar25 = plVar22 != DAT_14ca843c0;
                plVar13 = plVar11;
                if (bVar25) {
                  plVar22 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar25);
            }
            else {
              do {
                *plVar11 = (longlong)plVar13;
                LOCK();
                bVar25 = plVar13 != DAT_14ca843c8;
                plVar22 = plVar11;
                if (bVar25) {
                  plVar13 = DAT_14ca843c8;
                  plVar22 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar22;
                UNLOCK();
              } while (bVar25);
            }
          }
        }
      }
    }
    else {
      puVar21 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar15 = (uint *)*puVar21;
      if (puVar15 != (uint *)0x0) goto LAB_1431e472e;
      while( true ) {
        uVar17 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar17 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar17 | 1;
          __tlregdtor(&LAB_1431e6dc7);
        }
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar14 = *(undefined4 **)(lVar9 + 0x310);
        *(undefined8 *)(lVar9 + 0x310) = 0;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar14 = 0xffffffff;
        *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
        puVar14[0x12] = 0;
        *puVar21 = puVar14;
        FUN_140217a48(puVar21);
        puVar15 = (uint *)*puVar21;
LAB_1431e472e:
        puVar23 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar23 + 0x30);
        uVar17 = puVar15[0x12];
        if (puVar19 <= puVar15 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
          LOCK();
          uVar4 = *puVar15;
          *puVar15 = *puVar15 + uVar17 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar17) != 0xffffffff) break;
          puVar15 = (uint *)*puVar21;
          *puVar15 = 0xffffffff;
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar21 = puVar15;
          puVar23 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar23 + 0x30);
          uVar17 = 0;
          if (puVar19 <= puVar15 + 0x4000) {
            uVar17 = 1;
            goto LAB_1431e47ae;
          }
        }
      }
      uVar17 = uVar17 + 1;
LAB_1431e47ae:
      *(uint **)(puVar15 + 0x10) = puVar19;
      puVar15[0x12] = uVar17;
      FUN_1447247dc(puVar23,0);
      *puVar23 = &PTR_FUN_14a37d6f8;
      FUN_1474113ce(puVar23 + 0x15,local_2f8,&local_2b8,(uint)uVar20 & 0xffffff01);
      bVar2 = (&DAT_149e38edc)[(ulonglong)*(byte *)(puVar23 + 0x27) * 2];
      if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
      }
      puVar23[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar23[9] = puVar23;
      puVar23[10] = puVar23;
      lVar9 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar9 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined8 *)(lVar9 + 0x30);
      }
      puVar23[0xf] = uVar16;
      puVar23[0x10] = (ulonglong)bVar2 << 0x3b | 0xc00000527800b400;
      *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
      if (puVar23 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
        UNLOCK();
      }
      local_a8 = CONCAT71(local_a8._1_7_,1);
      FUN_1447439e4(puVar23);
      puVar21 = *(undefined8 **)(local_2f8 + 0x18);
      *(undefined8 **)(local_2f8 + 0x18) = puVar23;
      if (puVar21 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar21 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar21)(puVar21,1);
        }
      }
      if ((uVar20 & 1) == 0) {
        if (uStack_28c._4_1_ == '\0') {
          FUN_14178d6c2(param_1,local_2f8 + 0x18);
        }
      }
      else {
        local_2f8 = 0;
      }
    }
LAB_1431e4619:
    lVar9 = CONCAT44(uStack_27c,uStack_280);
    if (lVar9 != 0) {
      LOCK();
      puVar15 = (uint *)(lVar9 + 8);
      uVar17 = *puVar15;
      *puVar15 = *puVar15 - 1;
      UNLOCK();
      if ((uVar17 & 0x3fffffff) == 1) {
        puVar15 = (uint *)(lVar9 + 8);
        LOCK();
        uVar17 = *puVar15;
        *puVar15 = *puVar15 | 0x40000000;
        UNLOCK();
        if ((uVar17 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar9 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar9;
          plVar22 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar22;
              LOCK();
              bVar25 = plVar22 != DAT_14ca843c0;
              plVar13 = plVar11;
              if (bVar25) {
                plVar22 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar11 = (longlong)plVar13;
              LOCK();
              bVar25 = plVar13 != DAT_14ca843c8;
              plVar22 = plVar11;
              if (bVar25) {
                plVar13 = DAT_14ca843c8;
                plVar22 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar22;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
LAB_1431e3df9:
    if (local_2f8 != 0) {
      if (*(longlong *)(local_2f8 + 0x40) != DAT_14c872be0) {
        *(longlong *)(local_2f8 + 0x40) = DAT_14c872be0;
        *(longlong *)(local_2f8 + 0x38) = *(longlong *)(local_2f8 + 0x38) + 1;
      }
      *(undefined8 *)(local_2f8 + 0x10) = DAT_14c867d10;
      lVar9 = local_2f8;
      goto LAB_1431e3e22;
    }
  }
  else {
    if ((*(longlong *)(local_2f8 + 0x18) == 0) ||
       ((*(byte *)(*(longlong *)(local_2f8 + 0x18) + 0xa0) & 1) != 0)) goto LAB_1431e3df9;
    if (cVar5 == '\0') {
      FUN_1431e4a06(local_2f8);
      goto LAB_1431e3df9;
    }
    if ((param_3 & 1) == 0) {
      FUN_14178d6c2(param_1,local_2f8 + 0x18);
      goto LAB_1431e3df9;
    }
  }
  lVar9 = 0;
LAB_1431e3e22:
  if ((local_60 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e4a06 FUN_1431e4a06 body=215 status=ok
// SIG undefined FUN_1431e4a06(void)

void FUN_1431e4a06(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    bVar5 = false;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x18);
    bVar5 = (*(byte *)(*(longlong *)(param_1 + 0x18) + 0xa0) & 1) == 0;
    if (bVar5) {
      FUN_14009fd82(DAT_14c82b500,plVar1,0xff);
    }
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 != (undefined8 *)0x0) {
      *plVar1 = 0;
      LOCK();
      piVar2 = (int *)(puVar3 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    if (!bVar5) {
      if ((*(int *)(lVar4 + 0x10) == 0) && (*(longlong *)(lVar4 + 0x20) != 0)) {
        (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x20))
                  (*(longlong **)(lVar4 + 0x18),0xffffffff,0);
        *(undefined8 *)(lVar4 + 0x20) = 0;
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
    }
    FUN_140187fa0(lVar4,1,0);
    plVar1 = *(longlong **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431e4ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1431e4add FUN_1431e4add body=2048 status=ok
// SIG undefined FUN_1431e4add(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e4add(longlong param_1,int param_2,char param_3,char param_4,longlong param_5,
                  undefined8 param_6,undefined1 param_7)

{
  LARGE_INTEGER *pLVar1;
  code *pcVar2;
  int *piVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte bVar6;
  code cVar7;
  ushort uVar8;
  bool bVar9;
  LARGE_INTEGER LVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  DWORD DVar14;
  DWORD DVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined4 *puVar21;
  uint *puVar22;
  longlong *plVar23;
  uint uVar24;
  uint *puVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_bc;
  LARGE_INTEGER local_b8;
  undefined8 local_b0;
  LARGE_INTEGER local_a8 [2];
  undefined8 local_98;
  undefined **local_88;
  undefined8 local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar13 = 1;
  if ((*(byte *)(lVar20 + 0xc60) & 0x20) == 0) {
    uVar13 = DAT_14c760d80 ^ 1;
  }
  plVar23 = *(longlong **)(param_5 + 0x18 + (ulonglong)(uVar13 << 4));
  bVar9 = true;
  if ((plVar23 == (longlong *)0x0) ||
     (puVar26 = (undefined8 *)*plVar23, puVar26 == (undefined8 *)0x0)) {
    puVar26 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
    UNLOCK();
    bVar9 = false;
  }
  pbVar4 = (byte *)(lVar20 + 0xc60);
  if (param_3 != '\0') {
    if ((param_4 == '\0') || (iVar12 = FUN_1415b29d6(), iVar12 < 1)) {
      puVar5 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar22 = (uint *)*puVar5;
      if (puVar22 != (uint *)0x0) goto LAB_1431e4f95;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_1431e6dc7);
        }
        lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar21 = *(undefined4 **)(lVar20 + 0x310);
        *(undefined8 *)(lVar20 + 0x310) = 0;
        if (puVar21 == (undefined4 *)0x0) {
          puVar21 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar21 = 0xffffffff;
        *(undefined4 **)(puVar21 + 0x10) = puVar21 + 0x16;
        puVar21[0x12] = 0;
        *puVar5 = puVar21;
        FUN_140217a48(puVar5);
        puVar22 = (uint *)*puVar5;
LAB_1431e4f95:
        puVar28 = (undefined8 *)(*(longlong *)(puVar22 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar25 = (uint *)(puVar28 + 0x34);
        uVar13 = puVar22[0x12];
        if (puVar25 <= puVar22 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar22 + 0x10) = puVar22 + 0x4000;
          LOCK();
          uVar24 = *puVar22;
          *puVar22 = *puVar22 + uVar13 + 1;
          UNLOCK();
          if ((uVar24 ^ uVar13) != 0xffffffff) break;
          puVar22 = (uint *)*puVar5;
          *puVar22 = 0xffffffff;
          *(uint **)(puVar22 + 0x10) = puVar22 + 0x16;
          puVar22[0x12] = 0;
          *puVar5 = puVar22;
          puVar28 = (undefined8 *)((longlong)puVar22 + 0x5fU & 0xfffffffffffffff8);
          puVar25 = (uint *)(puVar28 + 0x34);
          uVar13 = 0;
          if (puVar25 <= puVar22 + 0x4000) {
            uVar13 = 1;
            goto LAB_1431e5015;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1431e5015:
      *(uint **)(puVar22 + 0x10) = puVar25;
      puVar22[0x12] = uVar13;
      iVar12 = 0;
      FUN_1447247dc(puVar28,0);
      *puVar28 = &PTR_FUN_14a37d398;
      local_d0 = param_6;
      local_d8 = param_7;
      FUN_140565cd6(puVar28 + 0x15,param_5,param_1,param_2);
      uVar13 = FUN_14025a222(puVar28 + 0x15);
      if ((uVar13 & 0xff) == 0xff) {
        uVar24 = uVar13 >> 10 & 3;
        if ((uVar13 >> 9 & 1) == 0 || uVar24 < 2) {
          uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
          iVar12 = 0;
        }
        else {
          uVar27 = 2;
        }
      }
      else {
        iVar12 = (uVar13 >> 7 & 2 | uVar13 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar13 & 0xff) * 4);
        uVar27 = 5;
      }
      if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
      }
      puVar28[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar28[9] = puVar28;
      puVar28[10] = puVar28;
      lVar20 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar20 == 0) {
        uVar11 = 1;
        if ((char)uVar27 != '\x06') {
          uVar11 = uVar27;
        }
        uVar27 = uVar11;
        uVar16 = 0;
      }
      else {
        if ((char)uVar27 == '\x06') {
          uVar27 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
        }
        uVar16 = *(undefined8 *)(lVar20 + 0x30);
      }
      puVar28[0xf] = uVar16;
      puVar28[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar28 + 0x1c) = iVar12;
      if (puVar28 == (undefined8 *)0x0) {
        local_a8[0].s.LowPart._0_1_ = 1;
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
        UNLOCK();
        local_a8[0].s.LowPart._0_1_ = 1;
        FUN_1447439e4(puVar28);
        LOCK();
        piVar3 = (int *)(puVar28 + 1);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)*puVar28)(puVar28,1);
        }
      }
    }
    else {
      uVar16 = FUN_14001cc68(0xf8,0x10);
      local_d0 = param_6;
      local_d8 = param_7;
      FUN_140565cd6(uVar16,param_5,param_1,param_2);
      uVar17 = FUN_14001cc68(0x90,0x10);
      local_98 = 0;
      local_88 = &PTR_LAB_14a37d4a0;
      local_a8[0].QuadPart = (LONGLONG)FUN_1431e7910;
      local_80 = uVar16;
      FUN_1431e7872(uVar17);
      local_b0 = uVar17;
      FUN_14178cc5e(param_5);
      uVar13 = 1;
      if ((*pbVar4 & 0x20) == 0) {
        uVar13 = DAT_14c760d80 ^ 1;
      }
      lVar20 = *(longlong *)(param_5 + 0x18 + (ulonglong)(uVar13 << 4));
      if (lVar20 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined8 *)(lVar20 + 8);
      }
      uVar8 = *(ushort *)(param_1 + 0xca);
      uVar17 = FUN_1415b2962(&DAT_14ca80898);
      local_c8 = 0;
      local_d0 = 0xffffffffffffffff;
      local_d8 = 0;
      FUN_1402a8900(uVar16,0,uVar17,
                    CONCAT71((int7)((ulonglong)param_1 >> 8),'\x04' - ((uVar8 >> 0xc & 1) != 0)) &
                    0xffffffff);
      FUN_14178d214(0);
    }
    goto LAB_1431e4ea4;
  }
  local_bc = param_2;
  QueryPerformanceCounter(local_a8);
  local_b8.s = local_a8[0].s;
  (**(code **)(*DAT_14ca83900 + 0x118))(DAT_14ca83900,local_a8,param_1);
  pLVar1 = (LARGE_INTEGER *)(param_5 + 0x38);
  if (pLVar1 == local_a8) {
LAB_1431e4d06:
    LVar10 = local_a8[0];
    if ((code *)local_a8[0].QuadPart != (code *)0x0) {
      LOCK();
      pcVar2 = (code *)(local_a8[0].QuadPart + 8);
      uVar13 = *(uint *)pcVar2;
      *(uint *)pcVar2 = *(uint *)pcVar2 - 1;
      UNLOCK();
      if ((uVar13 & 0x3fffffff) == 1) {
        pcVar2 = (code *)(local_a8[0].QuadPart + 8);
        LOCK();
        uVar13 = *(uint *)pcVar2;
        *(uint *)pcVar2 = *(uint *)pcVar2 | 0x40000000;
        UNLOCK();
        if ((uVar13 >> 0x1e & 1) == 0) {
          cVar7 = *(code *)(local_a8[0].QuadPart + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10,8);
          ((LARGE_INTEGER *)(plVar18 + 1))->QuadPart = (LONGLONG)LVar10;
          plVar23 = DAT_14ca843c0;
          plVar19 = DAT_14ca843c8;
          if (((byte)cVar7 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar23;
              LOCK();
              bVar29 = plVar23 != DAT_14ca843c0;
              plVar19 = plVar18;
              if (bVar29) {
                plVar23 = DAT_14ca843c0;
                plVar19 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar19;
              UNLOCK();
            } while (bVar29);
          }
          else {
            do {
              *plVar18 = (longlong)plVar19;
              LOCK();
              bVar29 = plVar19 != DAT_14ca843c8;
              plVar23 = plVar18;
              if (bVar29) {
                plVar19 = DAT_14ca843c8;
                plVar23 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar23;
              UNLOCK();
            } while (bVar29);
          }
        }
      }
    }
  }
  else {
    lVar20 = pLVar1->QuadPart;
    pLVar1->QuadPart = (LONGLONG)local_a8[0];
    local_a8[0].QuadPart = 0;
    if (lVar20 != 0) {
      LOCK();
      puVar22 = (uint *)(lVar20 + 8);
      uVar13 = *puVar22;
      *puVar22 = *puVar22 - 1;
      UNLOCK();
      if ((uVar13 & 0x3fffffff) == 1) {
        puVar22 = (uint *)(lVar20 + 8);
        LOCK();
        uVar13 = *puVar22;
        *puVar22 = *puVar22 | 0x40000000;
        UNLOCK();
        if ((uVar13 >> 0x1e & 1) == 0) {
          bVar6 = *(byte *)(lVar20 + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10,8);
          plVar18[1] = lVar20;
          plVar23 = DAT_14ca843c0;
          plVar19 = DAT_14ca843c8;
          if ((bVar6 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar23;
              LOCK();
              bVar29 = plVar23 != DAT_14ca843c0;
              plVar19 = plVar18;
              if (bVar29) {
                plVar23 = DAT_14ca843c0;
                plVar19 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar19;
              UNLOCK();
            } while (bVar29);
          }
          else {
            do {
              *plVar18 = (longlong)plVar19;
              LOCK();
              bVar29 = plVar19 != DAT_14ca843c8;
              plVar23 = plVar18;
              if (bVar29) {
                plVar19 = DAT_14ca843c8;
                plVar23 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar23;
              UNLOCK();
            } while (bVar29);
          }
        }
      }
      goto LAB_1431e4d06;
    }
  }
  lVar20 = DAT_14ca807a0;
  if ((*(byte *)(param_1 + 0xcb) & 0x18) == 0) {
    iVar12 = *(int *)pbVar4;
    if (((iVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar12 == 2)) {
      uVar27 = 0;
    }
    else if (iVar12 == 1) {
      DVar14 = FUN_140ad26c0();
      DVar15 = GetCurrentThreadId();
      uVar27 = (ulonglong)(DVar14 != DVar15);
    }
    else {
      uVar27 = 1;
    }
    iVar12 = *(int *)(lVar20 + uVar27 * 4);
    QueryPerformanceCounter(local_a8);
    lVar20 = local_a8[0].QuadPart - (longlong)local_b8;
    auVar30._8_4_ = (int)((ulonglong)lVar20 >> 0x20);
    auVar30._0_8_ = lVar20;
    auVar30._12_4_ = 0x45300000;
    if (((double)iVar12 <
         (((double)CONCAT44(0x43300000,(int)lVar20) - 4503599627370496.0) +
         (auVar30._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0) &&
       (_DAT_14ca8130c = _DAT_14ca8130c + 1, local_bc == 2)) {
      _DAT_14ca81314 = _DAT_14ca81314 + 1;
    }
  }
  lVar20 = pLVar1->QuadPart;
  if ((*(byte *)(param_1 + 0xcb) & 8) != 0) {
    FUN_144ad91ac(DAT_14ca811c8,param_1,lVar20 != 0);
    lVar20 = pLVar1->QuadPart;
  }
  if (lVar20 == 0) {
    FUN_1431e6f08(param_1);
  }
  else {
    *(undefined8 *)(param_5 + 0x40) = *(undefined8 *)(lVar20 + 0x10);
  }
LAB_1431e4ea4:
  if (!bVar9) {
    LOCK();
    piVar3 = (int *)(puVar26 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*puVar26)(puVar26,1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e52de FUN_1431e52de body=122 status=ok
// SIG undefined FUN_1431e52de(void)

undefined8 FUN_1431e52de(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    if (cVar2 != '\0') {
      *(longlong **)(param_1 + 0x20) = param_2;
      *(char *)(param_1 + 0x28) = (char)param_3;
      (**(code **)(*param_2 + 0x18))(param_2,param_1,param_3);
      uVar3 = 1;
      goto LAB_1431e5336;
    }
  }
  uVar3 = 0;
LAB_1431e5336:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e535a FUN_1431e535a body=2561 status=ok
// SIG undefined FUN_1431e535a(void)

uint * FUN_1431e535a(uint *param_1,uint *param_2,void *param_3,void **param_4,char param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 *puVar5;
  bool bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint *puVar17;
  uint *puVar18;
  undefined8 uVar19;
  byte bVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  PSRWLOCK pRVar33;
  longlong lVar34;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  void **local_190;
  undefined1 local_188;
  uint *local_178;
  uint *local_170;
  PSRWLOCK local_168;
  ulonglong local_160;
  undefined8 *local_158;
  void *local_150;
  void **local_148;
  undefined8 *local_140;
  void *local_138;
  ulonglong uStack_130;
  undefined1 local_120 [202];
  ushort local_56;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar15 = (**(code **)(*DAT_14ca83900 + 0x300))(DAT_14ca83900,param_3);
  pRVar33 = (PSRWLOCK)(param_1 + 2);
  AcquireSRWLockShared(pRVar33);
  cVar12 = FUN_1431e9254(param_1,lVar15,param_2);
  ReleaseSRWLockShared(pRVar33);
  if (cVar12 != '\0') goto LAB_1431e5966;
  AcquireSRWLockExclusive(pRVar33);
  cVar12 = FUN_1431e9254(param_1,lVar15,param_2);
  if (cVar12 != '\0') {
    ReleaseSRWLockExclusive(pRVar33);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1b8);
  }
  uVar27 = *param_1;
  uVar23 = param_1[6];
  param_1[6] = uVar23 + 1;
  local_150 = param_3;
  local_148 = param_4;
  if (param_1[7] < uVar23 + 1) {
    FUN_14479d316(param_1 + 4,uVar23);
  }
  *(longlong *)(*(longlong *)(param_1 + 4) + (longlong)(int)uVar23 * 8) = lVar15;
  uVar27 = (uVar27 & 3) + uVar23 * 4;
  *param_2 = uVar27;
  local_168 = pRVar33;
  puVar16 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar16[1] = 0;
  puVar16[2] = DAT_14c867d10;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[3] = 0;
  puVar16[4] = 0;
  *puVar16 = &PTR_FUN_14a37d488;
  puVar16[7] = 0;
  puVar16[8] = 0;
  local_120[0] = 0;
  puVar18 = param_1 + 8;
  local_170 = (uint *)CONCAT44(local_170._4_4_,uVar27);
  local_178 = puVar18;
  local_158 = puVar16;
  if (param_1[0x15] == 0) {
    uVar27 = param_1[10];
    param_1[10] = uVar27 + 1;
    if (param_1[0xb] == uVar27) {
      FUN_1447711aa(puVar18,uVar27);
    }
    uVar23 = param_1[0x12];
    if (uVar23 == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = uVar23 + 0x1e;
      if (-1 < (int)(uVar23 - 1)) {
        iVar13 = uVar23 - 1;
      }
      iVar13 = iVar13 >> 5;
    }
    puVar17 = param_1 + 0xc;
    uVar28 = uVar23 + 1;
    uVar29 = uVar23 + 0x1f;
    if (-1 < (int)uVar23) {
      uVar29 = uVar23;
    }
    if ((int)uVar29 >> 5 == iVar13) {
      param_1[0x12] = uVar28;
    }
    else {
      if ((int)param_1[0x13] <= (int)uVar23) {
        uVar28 = uVar23;
        if (uVar23 + 0x20 < 0xa0) {
          uVar24 = 0x80;
        }
        else {
          uVar32 = uVar23 + 0x20 >> 5;
          if (param_1[0x13] + 0x1f < 0xa0) {
            uVar24 = 4;
            if (4 < uVar32) {
              uVar24 = uVar32;
            }
          }
          else {
            uVar24 = uVar32 + (uVar32 * 3 >> 3) + 0x10;
          }
          uVar21 = (ulonglong)(uVar24 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar14 = (uint)(uVar21 + 0xf);
              if (uVar24 < 0x1ffd) {
                uVar21 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar21 + 0xf >> 4]];
              }
              else {
                uVar22 = (ulonglong)(uVar14 & 0xfffffff0);
                puVar18 = local_178;
                if (uVar22 < 0x7ff1) {
                  bVar20 = (&DAT_14c841e00)[uVar14 >> 4];
                  uVar26 = 0x32;
                  if (0x32 < bVar20) {
                    uVar26 = (ulonglong)bVar20;
                  }
                  uVar31 = 0x32 - (ulonglong)bVar20;
                  do {
                    uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar31 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar31 & 0xffffffff] & 0xf) == 0) goto LAB_1431e5b6a;
                    lVar30 = uVar26 + 1 + uVar31;
                    uVar31 = uVar31 - 1;
                  } while (lVar30 != 0x33);
                }
                uVar21 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar21 = (ulonglong)DAT_14c841df8;
                }
                uVar21 = -uVar21 & (uVar22 + uVar21) - 1;
              }
            }
            else {
              local_160 = (ulonglong)uVar32;
              uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
              uVar32 = (uint)local_160;
              uVar28 = param_1[0x12];
            }
          }
LAB_1431e5b6a:
          iVar13 = (int)(uVar21 >> 2);
          uVar24 = 0xffffffe0;
          if ((int)uVar32 <= iVar13) {
            uVar24 = iVar13 << 5;
          }
        }
        param_1[0x13] = uVar24;
        FUN_1446efbd8(puVar17,uVar28);
        uVar28 = param_1[0x12] + 1;
        puVar16 = local_158;
      }
      uVar24 = uVar28 + 0x1f;
      if (-1 < (int)uVar28) {
        uVar24 = uVar28;
      }
      param_1[0x12] = uVar28;
      if ((int)uVar28 % 0x20 != 0) {
        puVar25 = *(uint **)(param_1 + 0x10);
        if (*(uint **)(param_1 + 0x10) == (uint *)0x0) {
          puVar25 = puVar17;
        }
        bVar20 = -(char)((int)uVar28 % 0x20);
        puVar25[(int)uVar24 >> 5] =
             (puVar25[(int)uVar24 >> 5] << (bVar20 & 0x1f)) >> (bVar20 & 0x1f);
      }
    }
    lVar30 = (longlong)(int)uVar27;
    if (*(uint **)(param_1 + 0x10) != (uint *)0x0) {
      puVar17 = *(uint **)(param_1 + 0x10);
    }
    bVar20 = (byte)uVar23 & 0x1f;
    puVar17[(int)uVar29 >> 5] =
         puVar17[(int)uVar29 >> 5] & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
  }
  else {
    uVar27 = param_1[0x14];
    lVar30 = (longlong)(int)uVar27;
    uVar23 = *(uint *)(*(longlong *)(param_1 + 8) + 4 + lVar30 * 0x20);
    param_1[0x14] = uVar23;
    uVar28 = param_1[0x15] - 1;
    param_1[0x15] = uVar28;
    if (uVar28 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar23 * 0x20) = 0xffffffff;
    }
  }
  puVar17 = param_1 + 0xc;
  if (*(uint **)(param_1 + 0x10) != (uint *)0x0) {
    puVar17 = *(uint **)(param_1 + 0x10);
  }
  uVar23 = uVar27 + 0x1f;
  if (-1 < (int)uVar27) {
    uVar23 = uVar27;
  }
  puVar17[(int)uVar23 >> 5] = puVar17[(int)uVar23 >> 5] | 1 << ((byte)uVar27 & 0x1f);
  uVar23 = 1;
  lVar34 = *(longlong *)(param_1 + 8);
  lVar30 = lVar30 * 0x20;
  puVar2 = (undefined4 *)(lVar34 + lVar30);
  *(longlong *)(lVar34 + lVar30) = lVar15;
  *(undefined8 **)(lVar34 + 8 + lVar30) = puVar16;
  *(undefined4 *)(lVar34 + 0x10 + lVar30) = local_170._0_4_;
  *(undefined1 *)(lVar34 + 0x14 + lVar30) = local_120[0];
  *(undefined4 *)(lVar34 + 0x18 + lVar30) = 0xffffffff;
  uVar28 = (int)((ulonglong)lVar15 >> 0x20) * 0x17 + (int)lVar15;
  uVar29 = param_1[10] - param_1[0x15];
  if ((uVar29 != 0) && (uVar29 != 1)) {
    puVar17 = param_1 + 0x16;
    if (*(uint **)(param_1 + 0x18) != (uint *)0x0) {
      puVar17 = *(uint **)(param_1 + 0x18);
    }
    uVar24 = puVar17[param_1[0x1a] - 1 & uVar28];
    if (uVar24 != 0xffffffff) {
      do {
        puVar3 = (undefined4 *)(*(longlong *)puVar18 + (longlong)(int)uVar24 * 0x20);
        if (*(longlong *)(*(longlong *)puVar18 + (longlong)(int)uVar24 * 0x20) == lVar15) {
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          FUN_147411d44(puVar18,uVar27);
          goto LAB_1431e566c;
        }
        uVar24 = puVar3[6];
      } while (uVar24 != 0xffffffff);
    }
  }
  if (3 < uVar29) {
    uVar21 = (ulonglong)(uVar29 & 0xfffffffe) + 0xf;
    lVar30 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    uVar23 = 1 << ((byte)lVar30 & 0x1f);
  }
  if (((int)uVar29 < 1) || ((int)uVar23 <= (int)param_1[0x1a])) {
    uVar23 = param_1[0x1a] - 1 & uVar28;
    puVar2[7] = uVar23;
    puVar18 = *(uint **)(param_1 + 0x18);
    if (*(uint **)(param_1 + 0x18) == (uint *)0x0) {
      puVar18 = param_1 + 0x16;
    }
    puVar2[6] = puVar18[(longlong)(int)param_1[0x1a] - 1U & (longlong)(int)uVar23];
    puVar18 = *(uint **)(param_1 + 0x18);
    if (*(uint **)(param_1 + 0x18) == (uint *)0x0) {
      puVar18 = param_1 + 0x16;
    }
    puVar18[(longlong)(int)param_1[0x1a] - 1U & (longlong)(int)uVar23] = uVar27;
  }
  else {
    param_1[0x1a] = uVar23;
    FUN_14178d48e(puVar18);
  }
LAB_1431e566c:
  pRVar33 = local_168;
  if (param_5 != '\0') {
    puVar16 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_149e00300;
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar5 = local_158;
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar30 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar30 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined8 *)(lVar30 + 0x30);
    }
    puVar16[0xf] = uVar19;
    puVar16[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar16 + 0x1c) = 2;
    local_140 = puVar16;
    FUN_140314f2e();
    uVar27 = 1;
    if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) & 0x20) == 0) {
      uVar27 = DAT_14c760d80 ^ 1;
    }
    plVar4 = *(longlong **)((longlong)puVar5 + (ulonglong)(uVar27 << 4) + 0x18);
    if (plVar4 == (longlong *)0x0) {
      puVar16 = *(undefined8 **)(param_2 + 2);
      if (puVar16 != (undefined8 *)0x0) {
        param_2[2] = 0;
        param_2[3] = 0;
LAB_1431e5ac4:
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
      puVar5 = (undefined8 *)*plVar4;
      puVar16 = *(undefined8 **)(param_2 + 2);
      if (puVar16 != puVar5) {
        *(undefined8 **)(param_2 + 2) = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
          UNLOCK();
        }
        if (puVar16 != (undefined8 *)0x0) goto LAB_1431e5ac4;
      }
    }
    LOCK();
    param_1[0x1c] = param_1[0x1c] + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca813a8) && (FUN_144b3d300(), DAT_14ca813a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca813a0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
    _Init_thread_footer();
    pRVar33 = local_168;
  }
  bVar6 = true;
  if ((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) {
    iVar13 = (**(code **)(*DAT_14ca813a0 + 0xb0))();
    bVar6 = iVar13 < 1;
  }
  if ((((bVar6) && (DAT_14ca80860 != 0)) && (DAT_14ca84df4 == 0x10de)) && (param_1[0x2a] != 0)) {
    uVar27 = param_1[0x2b];
    lVar30 = *(longlong *)(param_1 + 0x26);
    lVar34 = (longlong)*(int *)(lVar30 + (longlong)(int)uVar27 * 4);
    if (lVar34 != -1) {
      puVar18 = param_1 + 0x20;
      uVar23 = param_1[0x22];
      param_1[0x22] = uVar23 + 1;
      uVar21 = *(ulonglong *)(param_1 + 4);
      if (param_1[0x23] < uVar23 + 1) {
        local_170 = puVar18;
        local_160 = *(ulonglong *)(param_1 + 4);
        FUN_14479d316(puVar18,uVar23);
        puVar18 = local_170;
        uVar21 = local_160;
      }
      *(undefined8 *)(*(longlong *)puVar18 + (longlong)(int)uVar23 * 8) =
           *(undefined8 *)(uVar21 + lVar34 * 8);
    }
    *(uint *)(lVar30 + (longlong)(int)uVar27 * 4) = *param_2 >> 2;
    uVar27 = 0;
    if (param_1[0x2b] + 1 < param_1[0x2a]) {
      uVar27 = param_1[0x2b] + 1;
    }
    param_1[0x2b] = uVar27;
    pRVar33 = local_168;
  }
  ReleaseSRWLockExclusive(pRVar33);
  memcpy(local_120,local_150,0xd8);
  local_56 = local_56 & 0x17ff | 0x4800;
  local_190 = &local_138;
  local_138 = (void *)0x0;
  uStack_130 = 0;
  if (local_190 != local_148) {
    uVar27 = *(uint *)(local_148 + 1);
    _Src = *local_148;
    uStack_130 = (ulonglong)uVar27;
    if ((longlong)(int)uVar27 != 0) {
      FUN_1446dd670(&local_138,uVar27,0);
      pRVar33 = local_168;
      memcpy(local_138,_Src,(longlong)(int)uVar27 * 2);
    }
  }
  local_198 = local_158;
  local_188 = 0;
  FUN_1431e4add(local_120,1,param_5,1);
  if (local_138 != (void *)0x0) {
    FUN_1400020a8();
  }
  AcquireSRWLockShared(pRVar33);
  if (param_1[10] != param_1[0x15]) {
    puVar18 = param_1 + 0x16;
    if (*(uint **)(param_1 + 0x18) != (uint *)0x0) {
      puVar18 = *(uint **)(param_1 + 0x18);
    }
    uVar27 = puVar18[param_1[0x1a] - 1 & uVar28];
    if (uVar27 != 0xffffffff) {
      lVar30 = *(longlong *)local_178;
      do {
        lVar34 = lVar30 + (longlong)(int)uVar27 * 0x20;
        if (*(longlong *)(lVar30 + (longlong)(int)uVar27 * 0x20) == lVar15) {
          if ((undefined8 *)(lVar34 + 8) != (undefined8 *)0x0 && lVar34 != 0) {
            uVar21 = CONCAT71((int7)((ulonglong)lVar30 >> 8),*(undefined1 *)(lVar34 + 0x14));
            do {
              bVar7 = (byte)uVar21;
              LOCK();
              bVar20 = *(byte *)(lVar34 + 0x14);
              if (bVar7 == bVar20) {
                *(byte *)(lVar34 + 0x14) = bVar7 | 1;
              }
              else {
                uVar21 = CONCAT71((int7)(uVar21 >> 8),bVar20);
              }
              UNLOCK();
            } while (bVar7 != bVar20);
            if (((byte)uVar21 & 0xe) == 8) {
              FUN_1402d05a8(param_1,uVar21 & 0xffffffff,0,*(undefined8 *)(lVar34 + 8));
            }
          }
          break;
        }
        uVar27 = *(uint *)(lVar34 + 0x18);
      } while (uVar27 != 0xffffffff);
    }
  }
  ReleaseSRWLockShared(pRVar33);
LAB_1431e5966:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1431e5d61 FUN_1431e5d61 body=41 status=ok
// SIG undefined FUN_1431e5d61(void)

void FUN_1431e5d61(void)

{
  DAT_14ca81360 = 0;
  if (DAT_14ca81358 != 0) {
    FUN_1400020a8();
  }
  FUN_145bcc7fe();
  return;
}


