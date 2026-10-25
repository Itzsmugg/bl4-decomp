// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147386f46 FUN_147386f46 body=138 status=ok
// SIG undefined FUN_147386f46(void)

void FUN_147386f46(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_2 + 0x20) + 0xdf) & 1) != 0) {
    local_29 = '\0';
    FUN_1473783fe(param_1,param_2,&local_29);
    if (local_29 == '\0') {
      iVar1 = *(int *)(param_1 + 0x78);
      *(uint *)(param_1 + 0x78) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
        FUN_14736f5f8((longlong *)(param_1 + 0x70),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8) = param_2;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147386fd2 FUN_147386fd2 body=62 status=ok
// SIG undefined FUN_147386fd2(void)

void FUN_147386fd2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x240);
  if (*(longlong *)(param_1 + 0x240) == 0) {
    lVar1 = param_1;
  }
  FUN_14738bc0b(lVar1,*(undefined4 *)(param_1 + 0x248));
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147387010 FUN_147387010 body=37 status=ok
// SIG undefined FUN_147387010(void)

void FUN_147387010(undefined8 param_1)

{
  FUN_14128973e();
  DAT_14ca84f23 = FUN_143180f48(param_1);
  FUN_140ded3be();
  return;
}



// FUNCTION 147387035 FUN_147387035 body=156 status=ok
// SIG undefined FUN_147387035(void)

ulonglong FUN_147387035(undefined8 *param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = (longlong *)0x0;
  (**(code **)*param_1)(param_1,&DAT_14a1e7f70,&local_20);
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (local_20 == (longlong *)0x0) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    iVar1 = (**(code **)(*local_20 + 0x70))(local_20,0,1,local_48);
    uVar2 = CONCAT71(uVar3,local_48[0] == 0 || iVar1 < 0);
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473870d2 FUN_1473870d2 body=429 status=ok
// SIG undefined FUN_1473870d2(void)

void FUN_1473870d2(undefined8 *param_1,longlong param_2,char param_3)

{
  DWORD DVar1;
  HANDLE pvVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  undefined1 auStackY_98 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  if (*(char *)((longlong)param_1 + 0x41) == '\0') {
    uVar4 = param_2 + param_1[7];
    if ((ulonglong)param_1[6] < uVar4) {
      param_1[6] = uVar4 + 0xfffff & 0xfffffffffff00000;
      if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
        FlushViewOfFile((LPCVOID)param_1[5],param_1[7]);
        UnmapViewOfFile((LPCVOID)param_1[5]);
      }
      if ((HANDLE)param_1[4] != (HANDLE)0x0) {
        CloseHandle((HANDLE)param_1[4]);
      }
      if ((HANDLE)param_1[3] != (HANDLE)0x0) {
        CloseHandle((HANDLE)param_1[3]);
      }
      pvVar2 = CreateFileW((LPCWSTR)*param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,
                           (uint)*(byte *)(param_1 + 8) * 2 + 1,0x80,(HANDLE)0x0);
      param_1[3] = pvVar2;
      if (pvVar2 == (HANDLE)0xffffffffffffffff) {
        *(undefined1 *)((longlong)param_1 + 0x41) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 8) = 1;
        DVar1 = GetFileSize(pvVar2,(LPDWORD)0x0);
        if (DVar1 == 0) {
          local_28 = 0;
          uStack_20 = 0;
          local_38 = 0;
          uStack_30 = 0;
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          WriteFile((HANDLE)param_1[3],&local_58,0x40,(LPDWORD)0x0,(LPOVERLAPPED)0x0);
        }
        else if (param_3 != '\0') {
          param_1[6] = (ulonglong)DVar1;
        }
        pvVar2 = CreateFileMappingW((HANDLE)param_1[3],(LPSECURITY_ATTRIBUTES)0x0,4,0,
                                    *(DWORD *)(param_1 + 6),(LPCWSTR)0x0);
        param_1[4] = pvVar2;
        if (pvVar2 != (HANDLE)0x0) {
          pvVar3 = MapViewOfFile(pvVar2,0xf001f,0,0,param_1[6]);
          param_1[5] = pvVar3;
          if (pvVar3 != (LPVOID)0x0) {
            param_1[2] = pvVar3;
            goto LAB_1473870f3;
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x41) = 1;
        FUN_143184c8c(param_1);
      }
    }
  }
LAB_1473870f3:
  if ((local_18 ^ (ulonglong)auStackY_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147387280 FUN_147387280 body=192 status=ok
// SIG undefined FUN_147387280(void)

void FUN_147387280(longlong param_1,undefined8 *param_2,size_t param_3)

{
  int iVar1;
  char *_Dst;
  
  FUN_1473870d2(param_1,param_3,0);
  if (*(char *)(param_1 + 0x41) == '\0') {
    if ((param_3 == 10) &&
       (*(short *)(*(longlong *)(param_1 + 0x10) + 8 + *(longlong *)(param_1 + 0x38)) == 0x45 &&
        *(longlong *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x38)) ==
        0x5455424952545441)) {
      _Dst = "ATTRIBUTE";
    }
    else {
      _Dst = (char *)FUN_14001cc68(param_3,0);
      if (_Dst == (char *)0x0) {
        return;
      }
      memcpy(_Dst,(void *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x38)),param_3);
      iVar1 = *(int *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
        FUN_1456bd870((longlong *)(param_1 + 0x50),iVar1);
      }
      *(char **)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 8) = _Dst;
    }
    *param_2 = _Dst;
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + param_3;
  }
  return;
}



// FUNCTION 147387340 FUN_147387340 body=123 status=ok
// SIG undefined FUN_147387340(void)

void FUN_147387340(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x38) + -0xc;
  if (*(char *)(param_1 + 0x41) == '\0') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x4c);
      *puVar1 = *(undefined8 *)(param_1 + 0x44);
      FlushViewOfFile(*(LPCVOID *)(param_1 + 0x28),*(SIZE_T *)(param_1 + 0x38));
      UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x28));
    }
    if (*(HANDLE *)(param_1 + 0x20) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x20));
    }
    if (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473873b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      CloseHandle(*(HANDLE *)(param_1 + 0x18));
      return;
    }
  }
  return;
}



// FUNCTION 1473873bc FUN_1473873bc body=1132 status=ok
// SIG undefined FUN_1473873bc(void)

void FUN_1473873bc(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  size_t sVar8;
  ulonglong _Size;
  undefined1 auStack_158 [24];
  longlong lStack_140;
  undefined1 local_138 [240];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)(param_1 + 0x109) == '\0') {
    lVar1 = param_1 + 200;
    FUN_1473870d2(lVar1,0x300,0);
    if (*(char *)(param_1 + 0x109) == '\0') {
      memcpy((void *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)),param_2,0x300)
      ;
      *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 0x300;
    }
    if ((*param_2 == 0) || (plVar2 = *(longlong **)(*param_2 + 0x90), plVar2 == (longlong *)0x0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*plVar2 + 0x20))();
    }
    FUN_1473870d2(lVar1,8,0);
    if (*(char *)(param_1 + 0x109) == '\0') {
      *(longlong *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)) = lVar7;
      *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 8;
    }
    if (lVar7 != 0) {
      FUN_14738062c(*(longlong *)(param_1 + 8) + 0x238,local_138,*param_2);
      FUN_1473870d2(lVar1,0xf0,0);
      if (*(char *)(param_1 + 0x109) == '\0') {
        memcpy((void *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)),local_138,
               0xf0);
        *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 0xf0;
      }
      lVar7 = 0xc0;
      do {
        if (*(longlong *)((longlong)&lStack_140 + lVar7) != 0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
    if ((ulonglong)*(uint *)(param_2 + 0x43) != 0) {
      sVar8 = (ulonglong)*(uint *)(param_2 + 0x43) * 0x20;
      pvVar3 = (void *)param_2[0x42];
      FUN_1473870d2(lVar1,sVar8,0);
      if (*(char *)(param_1 + 0x109) == '\0') {
        memcpy((void *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)),pvVar3,sVar8
              );
        *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + sVar8;
      }
      if ((int)param_2[0x43] != 0) {
        lVar7 = 0;
        uVar5 = 0;
        do {
          if (*(char **)(param_2[0x42] + lVar7) == (char *)0x0) {
            iVar6 = 0;
          }
          else {
            sVar8 = strnlen(*(char **)(param_2[0x42] + lVar7),0xff);
            iVar6 = (int)sVar8;
          }
          FUN_1473870d2(lVar1,4,0);
          if (*(char *)(param_1 + 0x109) == '\0') {
            *(uint *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)) = iVar6 + 1U;
            *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 4;
          }
          _Size = (ulonglong)(iVar6 + 1U);
          pvVar3 = *(void **)(param_2[0x42] + lVar7);
          FUN_1473870d2(lVar1,_Size,0);
          if (*(char *)(param_1 + 0x109) == '\0') {
            memcpy((void *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)),pvVar3,
                   _Size);
            *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + _Size;
          }
          uVar5 = uVar5 + 1;
          lVar7 = lVar7 + 0x20;
        } while (uVar5 < *(uint *)(param_2 + 0x43));
      }
    }
    sVar8 = param_2[3];
    if (sVar8 != 0) {
      pvVar3 = (void *)param_2[2];
      FUN_1473870d2(lVar1,sVar8,0);
      if (*(char *)(param_1 + 0x109) == '\0') {
        memcpy((void *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)),pvVar3,sVar8
              );
        *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + sVar8;
      }
    }
    sVar8 = param_2[5];
    if (sVar8 != 0) {
      pvVar3 = (void *)param_2[4];
      FUN_1473870d2(lVar1,sVar8,0);
      if (*(char *)(param_1 + 0x109) == '\0') {
        memcpy((void *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)),pvVar3,sVar8
              );
        *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + sVar8;
      }
    }
    sVar8 = param_2[7];
    if (sVar8 != 0) {
      pvVar3 = (void *)param_2[6];
      FUN_1473870d2(lVar1,sVar8,0);
      if (*(char *)(param_1 + 0x109) == '\0') {
        memcpy((void *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)),pvVar3,sVar8
              );
        *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + sVar8;
      }
    }
    sVar8 = param_2[9];
    if (sVar8 != 0) {
      pvVar3 = (void *)param_2[8];
      FUN_1473870d2(lVar1,sVar8,0);
      if (*(char *)(param_1 + 0x109) == '\0') {
        memcpy((void *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)),pvVar3,sVar8
              );
        *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + sVar8;
      }
    }
    sVar8 = param_2[0xb];
    if (sVar8 != 0) {
      pvVar3 = (void *)param_2[10];
      FUN_1473870d2(lVar1,sVar8,0);
      if (*(char *)(param_1 + 0x109) == '\0') {
        memcpy((void *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)),pvVar3,sVar8
              );
        *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + sVar8;
      }
    }
    if (*(int *)(param_3 + 0x38) != 0) {
      FUN_1406f7aac(param_3);
    }
    FUN_147387b2e(param_1,0);
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x100) + -0xc;
    if ((*(longlong *)(param_1 + 0xf0) != 0) && (*(char *)(param_1 + 0x109) == '\0')) {
      puVar4 = *(undefined8 **)(param_1 + 0xd8);
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 0x114);
      *puVar4 = *(undefined8 *)(param_1 + 0x10c);
      FlushViewOfFile(*(LPCVOID *)(param_1 + 0xf0),*(SIZE_T *)(param_1 + 0x100));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14738782a FUN_14738782a body=565 status=ok
// SIG undefined FUN_14738782a(void)

void FUN_14738782a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  size_t _Size;
  void *_Src;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_148 [32];
  longlong lStack_128;
  undefined1 local_120 [240];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(char *)(param_1 + 0x169) == '\0') {
    lVar1 = param_1 + 0x128;
    FUN_1473870d2(lVar1,0x60,0);
    if (*(char *)(param_1 + 0x169) == '\0') {
      memcpy((void *)(*(longlong *)(param_1 + 0x138) + *(longlong *)(param_1 + 0x160)),param_2,0x60)
      ;
      *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 0x60;
    }
    if ((*param_2 == 0) || (plVar2 = *(longlong **)(*param_2 + 0x90), plVar2 == (longlong *)0x0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*plVar2 + 0x20))();
    }
    FUN_1473870d2(lVar1,8,0);
    if (*(char *)(param_1 + 0x169) == '\0') {
      *(longlong *)(*(longlong *)(param_1 + 0x138) + *(longlong *)(param_1 + 0x160)) = lVar4;
      *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 8;
    }
    if (lVar4 != 0) {
      FUN_14738062c(*(longlong *)(param_1 + 8) + 0x238,local_120,*param_2);
      FUN_1473870d2(lVar1,0xf0,0);
      if (*(char *)(param_1 + 0x169) == '\0') {
        memcpy((void *)(*(longlong *)(param_1 + 0x138) + *(longlong *)(param_1 + 0x160)),local_120,
               0xf0);
        *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 0xf0;
      }
      lVar4 = 0xc0;
      do {
        if (*(longlong *)((longlong)&lStack_128 + lVar4) != 0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
    _Size = param_2[3];
    if (_Size != 0) {
      _Src = (void *)param_2[2];
      FUN_1473870d2(lVar1,_Size,0);
      if (*(char *)(param_1 + 0x169) == '\0') {
        memcpy((void *)(*(longlong *)(param_1 + 0x138) + *(longlong *)(param_1 + 0x160)),_Src,_Size)
        ;
        *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + _Size;
      }
    }
    if (*(int *)(param_3 + 0x38) != 0) {
      FUN_1406f7aac(param_3);
    }
    FUN_147387b2e(param_1,1);
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x160) + -0xc;
    if ((*(longlong *)(param_1 + 0x150) != 0) && (*(char *)(param_1 + 0x169) == '\0')) {
      puVar3 = *(undefined8 **)(param_1 + 0x138);
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + 0x174);
      *puVar3 = *(undefined8 *)(param_1 + 0x16c);
      FlushViewOfFile(*(LPCVOID *)(param_1 + 0x150),*(SIZE_T *)(param_1 + 0x160));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147387a60 FUN_147387a60 body=104 status=ok
// SIG undefined FUN_147387a60(void)

void FUN_147387a60(longlong param_1,longlong param_2)

{
  FUN_1473870d2(param_1 + 200,8,0);
  if (*(char *)(param_1 + 0x109) == '\0') {
    *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 8;
  }
  FUN_1473870d2(param_1 + 200,8,0);
  if (*(char *)(param_1 + 0x109) == '\0') {
    *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 8;
  }
  *(undefined8 *)(param_2 + 600) = 0;
  *(undefined8 *)(param_2 + 0x260) = 0;
  return;
}



// FUNCTION 147387ac8 FUN_147387ac8 body=101 status=ok
// SIG undefined FUN_147387ac8(void)

void FUN_147387ac8(longlong param_1,longlong param_2)

{
  FUN_1473870d2(param_1 + 0x128,8,0);
  if (*(char *)(param_1 + 0x169) == '\0') {
    *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 8;
  }
  FUN_1473870d2(param_1 + 0x128,8,0);
  if (*(char *)(param_1 + 0x169) == '\0') {
    *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 8;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 147387b2e FUN_147387b2e body=139 status=ok
// SIG undefined FUN_147387b2e(void)

void FUN_147387b2e(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = (param_2 & 0xffffffff) * 0x60;
  if ((*(char *)(param_1 + 0x109 + lVar1) == '\0') && (*(char *)(param_1 + 0x1c9) == '\0')) {
    param_1 = param_1 + lVar1;
    FUN_1473870d2(param_1 + 200,8,0);
    if (*(char *)(param_1 + 0x109) == '\0') {
      *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)) = 0;
      *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 8;
    }
    FUN_1473870d2(param_1 + 200,8,0);
    if (*(char *)(param_1 + 0x109) == '\0') {
      *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100)) = 0;
      *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 8;
    }
  }
  return;
}



// FUNCTION 147387bcc FUN_147387bcc body=48 status=ok
// SIG undefined FUN_147387bcc(void)

longlong FUN_147387bcc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x140;
  FUN_140ec6f7a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147387bfc FUN_147387bfc body=79 status=ok
// SIG undefined FUN_147387bfc(void)

undefined8 * FUN_147387bfc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14a3511c0;
  puVar2 = (undefined8 *)param_1[0x10];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_1448470d8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147387c58 FUN_147387c58 body=45 status=ok
// SIG undefined FUN_147387c58(void)

longlong FUN_147387c58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14738d054(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147387c88 FUN_147387c88 body=146 status=ok
// SIG undefined FUN_147387c88(void)

void FUN_147387c88(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3 + 0x48;
  if (param_3 == 0) {
    local_38 = 0;
    local_40 = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_3 + 0x58);
  }
  local_48 = param_3;
  FUN_1400db59c(&local_30,param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x2c) = local_30;
  FUN_14493819a(param_1,param_2,&local_48,0x10);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147387d1c FUN_147387d1c body=38 status=ok
// SIG undefined FUN_147387d1c(void)

undefined8 FUN_147387d1c(undefined8 param_1,int param_2)

{
  FUN_1448470d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147387d42 FUN_147387d42 body=146 status=ok
// SIG undefined FUN_147387d42(void)

void FUN_147387d42(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3 + 0x48;
  if (param_3 == 0) {
    local_38 = 0;
    local_40 = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_3 + 0x58);
  }
  local_48 = param_3;
  FUN_14317deee(&local_30,param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x2c) = local_30;
  FUN_14493819a(param_1,param_2,&local_48,0x40);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147387dd6 FUN_147387dd6 body=38 status=ok
// SIG undefined FUN_147387dd6(void)

undefined8 FUN_147387dd6(undefined8 param_1,int param_2)

{
  FUN_1448470d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147387e02 FUN_147387e02 body=38 status=ok
// SIG undefined FUN_147387e02(void)

undefined8 FUN_147387e02(undefined8 param_1,int param_2)

{
  FUN_14738d4fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147387e28 FUN_147387e28 body=38 status=ok
// SIG undefined FUN_147387e28(void)

undefined8 FUN_147387e28(undefined8 param_1,int param_2)

{
  FUN_1456f4ae8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147387e4e FUN_147387e4e body=38 status=ok
// SIG undefined FUN_147387e4e(void)

undefined8 FUN_147387e4e(undefined8 param_1,int param_2)

{
  FUN_140f7d48c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147387e74 FUN_147387e74 body=37 status=ok
// SIG undefined FUN_147387e74(void)

void FUN_147387e74(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x220)) {
    *(undefined4 *)(param_1 + 0x224) = 0x11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147387e9a FUN_147387e9a body=692 status=ok
// SIG undefined FUN_147387e9a(void)

void FUN_147387e9a(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar13 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar18 = iVar13;
joined_r0x000147387ecf:
    do {
      iVar16 = iVar13 * 2 + 1;
      if (iVar16 < (int)param_2) {
        iVar17 = iVar13 * 2 + 2;
        if (iVar17 < (int)param_2) {
          lVar19 = (longlong)iVar17;
          lVar15 = (longlong)iVar16;
          bVar20 = *(uint *)(param_1 + lVar19 * 4 + 2) < *(uint *)(param_1 + lVar15 * 4 + 2);
          if ((*(uint *)(param_1 + lVar19 * 4 + 2) == *(uint *)(param_1 + lVar15 * 4 + 2)) &&
             (uVar4 = *(uint *)((longlong)param_1 + lVar15 * 0x20 + 0x14),
             uVar5 = *(uint *)((longlong)param_1 + lVar19 * 0x20 + 0x14), bVar20 = uVar5 < uVar4,
             uVar5 == uVar4)) {
            bVar20 = *(uint *)(param_1 + lVar19 * 4 + 1) < *(uint *)(param_1 + lVar15 * 4 + 1);
          }
          if (!bVar20) {
            iVar16 = iVar17;
          }
        }
        puVar2 = param_1 + (longlong)iVar13 * 4;
        puVar3 = param_1 + (longlong)iVar16 * 4;
        bVar20 = *(uint *)(param_1 + (longlong)iVar13 * 4 + 2) <
                 *(uint *)(param_1 + (longlong)iVar16 * 4 + 2);
        if ((*(uint *)(param_1 + (longlong)iVar13 * 4 + 2) ==
             *(uint *)(param_1 + (longlong)iVar16 * 4 + 2)) &&
           (bVar20 = *(uint *)((longlong)puVar2 + 0x14) < *(uint *)((longlong)puVar3 + 0x14),
           *(uint *)((longlong)puVar2 + 0x14) == *(uint *)((longlong)puVar3 + 0x14))) {
          bVar20 = *(uint *)(puVar2 + 1) < *(uint *)(puVar3 + 1);
        }
        if (bVar20) {
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          uVar10 = *puVar3;
          uVar11 = puVar3[1];
          uVar12 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar12;
          *puVar2 = uVar10;
          puVar2[1] = uVar11;
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar13 = iVar16;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
          goto joined_r0x000147387ecf;
        }
      }
      bVar20 = iVar18 != 0;
      iVar13 = iVar18 + -1;
      iVar18 = iVar13;
    } while (bVar20);
    if (1 < (int)param_2) {
      uVar14 = (ulonglong)param_2 - 1;
      uVar6 = *param_1;
      uVar7 = param_1[1];
      uVar8 = param_1[2];
      uVar9 = param_1[3];
      uVar10 = param_1[uVar14 * 4];
      uVar11 = (param_1 + uVar14 * 4)[1];
      uVar12 = (param_1 + uVar14 * 4 + 2)[1];
      param_1[2] = param_1[uVar14 * 4 + 2];
      param_1[3] = uVar12;
      *param_1 = uVar10;
      param_1[1] = uVar11;
      local_38._0_4_ = (undefined4)uVar6;
      local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar7;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_28._0_4_ = (undefined4)uVar8;
      local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar9;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      puVar2 = param_1 + uVar14 * 4 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      puVar2 = param_1 + uVar14 * 4;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar6;
      uStack_30 = uVar7;
      local_28 = uVar8;
      uStack_20 = uVar9;
      if (param_2 != 2) {
        do {
          iVar13 = 0;
          iVar16 = 1;
          iVar18 = 0;
          do {
            lVar15 = (longlong)(iVar13 + 2);
            iVar17 = iVar16;
            if (lVar15 < (longlong)uVar14) {
              lVar19 = (longlong)iVar16;
              bVar20 = *(uint *)(param_1 + lVar15 * 4 + 2) < *(uint *)(param_1 + lVar19 * 4 + 2);
              if ((*(uint *)(param_1 + lVar15 * 4 + 2) == *(uint *)(param_1 + lVar19 * 4 + 2)) &&
                 (uVar4 = *(uint *)((longlong)param_1 + lVar19 * 0x20 + 0x14),
                 uVar5 = *(uint *)((longlong)param_1 + lVar15 * 0x20 + 0x14), bVar20 = uVar5 < uVar4
                 , uVar5 == uVar4)) {
                bVar20 = *(uint *)(param_1 + lVar15 * 4 + 1) < *(uint *)(param_1 + lVar19 * 4 + 1);
              }
              if (!bVar20) {
                iVar17 = iVar13 + 2;
              }
            }
            puVar2 = param_1 + (longlong)iVar18 * 4;
            puVar3 = param_1 + (longlong)iVar17 * 4;
            bVar20 = *(uint *)(param_1 + (longlong)iVar18 * 4 + 2) <
                     *(uint *)(param_1 + (longlong)iVar17 * 4 + 2);
            if ((*(uint *)(param_1 + (longlong)iVar18 * 4 + 2) ==
                 *(uint *)(param_1 + (longlong)iVar17 * 4 + 2)) &&
               (bVar20 = *(uint *)((longlong)puVar2 + 0x14) < *(uint *)((longlong)puVar3 + 0x14),
               *(uint *)((longlong)puVar2 + 0x14) == *(uint *)((longlong)puVar3 + 0x14))) {
              bVar20 = *(uint *)(puVar2 + 1) < *(uint *)(puVar3 + 1);
            }
            if (!bVar20) break;
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            uVar10 = *puVar3;
            uVar11 = puVar3[1];
            uVar12 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar12;
            *puVar2 = uVar10;
            puVar2[1] = uVar11;
            puVar3[2] = uVar8;
            puVar3[3] = uVar9;
            *puVar3 = uVar6;
            puVar3[1] = uVar7;
            iVar13 = iVar17 * 2;
            iVar16 = iVar17 * 2 + 1;
            iVar18 = iVar17;
          } while ((longlong)iVar16 < (longlong)uVar14);
          uVar1 = uVar14 - 1;
          uVar6 = *param_1;
          uVar7 = param_1[1];
          uVar8 = param_1[2];
          uVar9 = param_1[3];
          uVar10 = param_1[uVar1 * 4];
          uVar11 = (param_1 + uVar1 * 4)[1];
          uVar12 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar12;
          *param_1 = uVar10;
          param_1[1] = uVar11;
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          puVar2 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          puVar2 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar20 = 2 < uVar14;
          uVar14 = uVar1;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
        } while (bVar20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147388150 FUN_147388150 body=122 status=ok
// SIG undefined FUN_147388150(void)

void FUN_147388150(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x268) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x268) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x268 + 4) = uVar5;
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



// FUNCTION 1473881ca FUN_1473881ca body=39 status=ok
// SIG undefined FUN_1473881ca(void)

undefined8 * FUN_1473881ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473881f2 FUN_1473881f2 body=216 status=ok
// SIG undefined FUN_1473881f2(void)

void FUN_1473881f2(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 4;
  param_1[1] = 0;
  puVar1 = (undefined8 *)param_1[2];
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  lVar2 = param_1[2];
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  param_1[3] = 0;
  if (param_1[4] != param_1[5]) {
    param_1[5] = param_1[4];
  }
  puVar1 = (undefined8 *)param_1[7];
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  lVar2 = param_1[7];
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  param_1[8] = 0;
  FUN_1473882ca(param_1 + 9);
  puVar1 = (undefined8 *)param_1[0xb];
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  lVar2 = param_1[0xb];
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  param_1[0xc] = 0;
  return;
}



// FUNCTION 1473882ca FUN_1473882ca body=86 status=ok
// SIG undefined FUN_1473882ca(void)

void FUN_1473882ca(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_147388320(puVar1 + 2);
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  lVar3 = *param_1;
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  param_1[1] = 0;
  return;
}



// FUNCTION 147388320 FUN_147388320 body=82 status=ok
// SIG undefined FUN_147388320(void)

void FUN_147388320(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 147388374 FUN_147388374 body=164 status=ok
// SIG undefined FUN_147388374(void)

longlong * FUN_147388374(longlong *param_1,wchar_t *param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (wchar_t *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    sVar2 = wcslen(param_2);
    FUN_145b284a4(&local_48,param_2,sVar2);
    FUN_14738845e(param_1,*param_1,&local_48);
    if (7 < uStack_30) {
      FUN_14600850e(&local_48,local_48);
    }
    plVar1 = (longlong *)(*(longlong *)(*param_1 + 8) + 0x10);
    if (7 < *(ulonglong *)(*(longlong *)(*param_1 + 8) + 0x28)) {
      plVar1 = (longlong *)*plVar1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738841a FUN_14738841a body=67 status=ok
// SIG undefined FUN_14738841a(void)

void FUN_14738841a(longlong param_1)

{
  if (7 < *(ulonglong *)(param_1 + 0x28)) {
    FUN_14600850e((undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x10));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 7;
  *(undefined2 *)(param_1 + 0x10) = 0;
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14738845e FUN_14738845e body=188 status=ok
// SIG undefined FUN_14738845e(void)

void FUN_14738845e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list too long");
  }
  local_38[0] = param_1;
  plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  *(undefined4 *)(plVar9 + 4) = param_3[4];
  *(undefined4 *)((longlong)plVar9 + 0x24) = uVar6;
  *(undefined4 *)(plVar9 + 5) = uVar7;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = uVar8;
  *(undefined4 *)(plVar9 + 2) = uVar2;
  *(undefined4 *)((longlong)plVar9 + 0x14) = uVar3;
  *(undefined4 *)(plVar9 + 3) = uVar4;
  *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar5;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 7;
  *(undefined2 *)param_3 = 0;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  plVar1 = *(longlong **)(param_2 + 8);
  *plVar9 = param_2;
  plVar9[1] = (longlong)plVar1;
  local_38[1] = 0;
  *(longlong **)(param_2 + 8) = plVar9;
  *plVar1 = (longlong)plVar9;
  FUN_14738851c(local_38);
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738851c FUN_14738851c body=92 status=ok
// SIG undefined FUN_14738851c(void)

void FUN_14738851c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (7 < *(ulonglong *)(lVar1 + 0x28)) {
      FUN_14600850e((undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x10));
    }
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 7;
    *(undefined2 *)(lVar1 + 0x10) = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 147388578 FUN_147388578 body=227 status=ok
// SIG undefined FUN_147388578(void)

void FUN_147388578(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  lVar7 = (longlong)param_2 - lVar1;
  uVar6 = (param_1[1] - lVar1 >> 3) * -0x5555555555555555 + 1;
  uVar5 = (param_1[2] - lVar1 >> 3) * -0x5555555555555555;
  uVar4 = 0xaaaaaaaaaaaaaaa - (uVar5 >> 1);
  uVar8 = (uVar5 >> 1) + uVar5;
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
    uVar8 = 0xaaaaaaaaaaaaaaa;
  }
  _Dst = (void *)FUN_1473886ce(uVar8);
  uVar3 = param_3[1];
  *(undefined8 *)((longlong)_Dst + lVar7) = *param_3;
  ((undefined8 *)((longlong)_Dst + lVar7))[1] = uVar3;
  *(undefined8 *)((longlong)_Dst + lVar7 + 0x10) = param_3[2];
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + lVar7 + 0x18),param_2,param_1[1] - (longlong)param_2);
  }
  FUN_14738865c(param_1,_Dst,uVar6,uVar8);
  return;
}



// FUNCTION 14738865c FUN_14738865c body=112 status=ok
// SIG undefined FUN_14738865c(void)

void FUN_14738865c(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x18;
  param_1[2] = param_2 + param_4 * 0x18;
  return;
}



// FUNCTION 1473886ce FUN_1473886ce body=86 status=ok
// SIG undefined FUN_1473886ce(void)

undefined8 FUN_1473886ce(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xaa < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0x18);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0x18,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 147388726 FUN_147388726 body=201 status=ok
// SIG undefined FUN_147388726(void)

void FUN_147388726(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  uVar4 = (param_1[1] - lVar1 >> 3) + 1;
  uVar3 = param_1[2] - lVar1 >> 3;
  uVar5 = (uVar3 >> 1) + uVar3;
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  _Dst = (void *)FUN_14631a4da(param_1,uVar5);
  *(undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 8),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_1473887f0(param_1,_Dst,uVar4,uVar5);
  return;
}



// FUNCTION 1473887f0 FUN_1473887f0 body=104 status=ok
// SIG undefined FUN_1473887f0(void)

void FUN_1473887f0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 14738885a FUN_14738885a body=96 status=ok
// SIG undefined FUN_14738885a(void)

void FUN_14738885a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 8) != 0x7ffffffffffffff) {
    plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
    lVar2 = param_3[1];
    plVar3[2] = *param_3;
    plVar3[3] = lVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    plVar1 = *(longlong **)(param_2 + 8);
    *plVar3 = param_2;
    plVar3[1] = (longlong)plVar1;
    *(longlong **)(param_2 + 8) = plVar3;
    *plVar1 = (longlong)plVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list too long");
}



// FUNCTION 1473888bc FUN_1473888bc body=160 status=ok
// SIG undefined FUN_1473888bc(void)

undefined8 FUN_1473888bc(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1473889fa(param_1 + 0x68,*(undefined8 *)(param_1 + 0x68),&local_48);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  uVar1 = FUN_14001cc68(0xa8,0x10);
  FUN_14738895e(uVar1,*(longlong *)(*(longlong *)(param_1 + 0x68) + 8) + 0x10);
  local_48 = uVar1;
  FUN_147388c66(param_1 + 0xa8,*(undefined8 *)(param_1 + 0xa8),&local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738895e FUN_14738895e body=155 status=ok
// SIG undefined FUN_14738895e(void)

undefined8 * FUN_14738895e(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a353f28;
  param_1[8] = 0;
  param_1[9] = 0;
  lVar1 = FUN_14001cc68(0x30,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[8] = lVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_147388a64(param_1 + 0xc,param_1 + 6,param_1 + 5);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1[7] + 0x10) = 4;
  *(undefined8 **)(param_1[7] + 0x18) = param_1 + 1;
  *(undefined8 *)(param_1[7] + 8) = 0;
  return param_1;
}



// FUNCTION 1473889fa FUN_1473889fa body=104 status=ok
// SIG undefined FUN_1473889fa(void)

void FUN_1473889fa(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 8) != 0x555555555555555) {
    plVar5 = (longlong *)FUN_14001cc68(0x30,0x10);
    lVar2 = param_3[1];
    lVar3 = param_3[2];
    lVar4 = param_3[3];
    plVar5[2] = *param_3;
    plVar5[3] = lVar2;
    plVar5[4] = lVar3;
    plVar5[5] = lVar4;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    plVar1 = *(longlong **)(param_2 + 8);
    *plVar5 = param_2;
    plVar5[1] = (longlong)plVar1;
    *(longlong **)(param_2 + 8) = plVar5;
    *plVar1 = (longlong)plVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list too long");
}



// FUNCTION 147388a64 FUN_147388a64 body=119 status=ok
// SIG undefined FUN_147388a64(void)

longlong * FUN_147388a64(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  lVar1 = FUN_14001cc68(0x30,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[3] = lVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  if (*param_1 != param_1[1]) {
    param_1[1] = *param_1;
  }
  param_1[7] = (longlong)param_2;
  *param_2 = 0;
  param_1[8] = (longlong)param_3;
  *param_3 = 0;
  return param_1;
}



// FUNCTION 147388adc FUN_147388adc body=38 status=ok
// SIG undefined FUN_147388adc(void)

undefined8 FUN_147388adc(undefined8 param_1,int param_2)

{
  FUN_147388b02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147388b02 FUN_147388b02 body=112 status=ok
// SIG undefined FUN_147388b02(void)

void FUN_147388b02(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a353f28;
  FUN_147388b72(param_1 + 0xc);
  puVar1 = (undefined8 *)param_1[0xb];
  param_1[0xb] = 0;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[10];
  param_1[10] = 0;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  FUN_147388c28(param_1 + 8);
  return;
}



// FUNCTION 147388b72 FUN_147388b72 body=98 status=ok
// SIG undefined FUN_147388b72(void)

void FUN_147388b72(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  FUN_147388c28(param_1 + 0x18);
  FUN_147388bd4(param_1);
  return;
}



// FUNCTION 147388bd4 FUN_147388bd4 body=82 status=ok
// SIG undefined FUN_147388bd4(void)

void FUN_147388bd4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 147388c28 FUN_147388c28 body=61 status=ok
// SIG undefined FUN_147388c28(void)

void FUN_147388c28(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_14738841a();
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 147388c66 FUN_147388c66 body=96 status=ok
// SIG undefined FUN_147388c66(void)

void FUN_147388c66(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 8) != 0xaaaaaaaaaaaaaaa) {
    plVar2 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar2[2] = *param_3;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    plVar1 = *(longlong **)(param_2 + 8);
    *plVar2 = param_2;
    plVar2[1] = (longlong)plVar1;
    *(longlong **)(param_2 + 8) = plVar2;
    *plVar1 = (longlong)plVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list too long");
}



// FUNCTION 147388cc8 FUN_147388cc8 body=714 status=ok
// SIG undefined FUN_147388cc8(void)

longlong FUN_147388cc8(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = *(undefined8 **)(param_1 + 0x68);
  for (puVar11 = (undefined8 *)*puVar4; puVar11 != puVar4; puVar11 = (undefined8 *)*puVar11) {
    (**(code **)(*(longlong *)puVar11[2] + 0x10))();
  }
  plVar13 = (longlong *)(param_1 + 0x48);
  FUN_1473882ca(plVar13);
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  *(undefined8 *)puVar4[1] = 0;
  puVar4 = (undefined8 *)*puVar4;
  while (puVar4 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar4;
    FUN_1400020a8();
  }
  lVar9 = *(longlong *)(param_1 + 0x58);
  *(longlong *)lVar9 = lVar9;
  *(longlong *)(lVar9 + 8) = lVar9;
  *(undefined8 *)(param_1 + 0x60) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  *(undefined8 *)puVar4[1] = 0;
  puVar4 = (undefined8 *)*puVar4;
  while (puVar4 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar4;
    FUN_1400020a8();
  }
  lVar9 = *(longlong *)(param_1 + 0x38);
  *(longlong *)lVar9 = lVar9;
  *(longlong *)(lVar9 + 8) = lVar9;
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_1 + 0x28)) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20);
  }
  FUN_147388f94(plVar1,*(undefined4 *)(param_1 + 4));
  plVar12 = (longlong *)**(longlong **)(param_1 + 0x10);
  if (plVar12 != *(longlong **)(param_1 + 0x10)) {
    do {
      puVar5 = *(undefined4 **)(param_1 + 0x28);
      if (puVar5 == *(undefined4 **)(param_1 + 0x30)) {
        FUN_1473890be(plVar1);
        lVar9 = *(longlong *)(param_1 + 0x28);
      }
      else {
        uVar7 = *(undefined4 *)((longlong)plVar12 + 0x14);
        lVar9 = plVar12[3];
        uVar8 = *(undefined4 *)((longlong)plVar12 + 0x1c);
        *puVar5 = (int)plVar12[2];
        puVar5[1] = uVar7;
        puVar5[2] = (int)lVar9;
        puVar5[3] = uVar8;
        lVar9 = *(longlong *)(param_1 + 0x28) + 0x10;
        *(longlong *)(param_1 + 0x28) = lVar9;
      }
      plVar12[4] = lVar9 + -0x10;
      plVar12 = (longlong *)*plVar12;
    } while (plVar12 != (longlong *)*(longlong *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 4) != 0) {
    plVar12 = (longlong *)(param_1 + 0x58);
    plVar2 = (longlong *)(param_1 + 0x38);
    uVar15 = 0;
    do {
      lVar14 = uVar15 * 0x10;
      iVar3 = *(int *)(*plVar1 + lVar14);
      lVar9 = *plVar1 + lVar14;
      if (iVar3 == 0x1d) {
        puVar4 = *(undefined8 **)(lVar9 + 8);
        local_68 = puVar4[4];
        local_88 = *puVar4;
        uStack_80 = *(undefined4 *)(puVar4 + 1);
        uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
        local_78 = puVar4[2];
        uStack_70 = *(undefined4 *)(puVar4 + 3);
        uStack_6c = *(undefined4 *)((longlong)puVar4 + 0x1c);
        if (*(int *)(puVar4 + 3) != 0) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          local_b8 = plVar12;
          FUN_1473891f0(plVar13,*plVar13,&local_a8);
          FUN_147388320(&local_a8);
          plVar12 = (longlong *)(*(longlong *)(*plVar13 + 8) + 0x10);
          local_b0 = plVar13;
          FUN_147389268(plVar12,*(undefined4 *)(puVar4 + 3));
          if (*(int *)(puVar4 + 3) != 0) {
            uVar10 = 0;
            do {
              *(undefined8 *)(*plVar12 + uVar10 * 8) =
                   *(undefined8 *)(*(longlong *)(puVar4[4] + uVar10 * 8) + 0x10);
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(uint *)(puVar4 + 3));
          }
          local_68 = *plVar12;
          plVar13 = local_b0;
          plVar12 = local_b8;
        }
        FUN_147389422(plVar12,*plVar12,&local_88);
        lVar9 = *plVar12;
LAB_147388f39:
        *(longlong *)(*plVar1 + 8 + lVar14) = *(longlong *)(lVar9 + 8) + 0x10;
      }
      else if (iVar3 == 7) {
        plVar6 = *(longlong **)(lVar9 + 8);
        local_78 = plVar6[2];
        uStack_80 = (undefined4)plVar6[1];
        uStack_7c = *(undefined4 *)((longlong)plVar6 + 0xc);
        local_88 = *(undefined8 *)(*plVar6 + 0x10);
        FUN_147389186(plVar2,*plVar2,&local_88);
        lVar9 = *plVar2;
        goto LAB_147388f39;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 4));
    if (*(uint *)(param_1 + 4) != 0) {
      lVar9 = *plVar1;
      goto LAB_147388f59;
    }
  }
  lVar9 = 0;
LAB_147388f59:
  *(longlong *)(param_1 + 8) = lVar9;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147388f94 FUN_147388f94 body=110 status=ok
// SIG undefined FUN_147388f94(void)

void FUN_147388f94(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (param_2 <= (ulonglong)(param_1[2] - lVar1 >> 4)) {
    return;
  }
  lVar2 = param_1[1];
  _Dst = (void *)FUN_147389072(param_2);
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  FUN_147389002(param_1,_Dst,lVar2 - lVar1 >> 4,param_2);
  return;
}



// FUNCTION 147389002 FUN_147389002 body=110 status=ok
// SIG undefined FUN_147389002(void)

void FUN_147389002(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}



// FUNCTION 147389072 FUN_147389072 body=75 status=ok
// SIG undefined FUN_147389072(void)

undefined8 FUN_147389072(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 << 4);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 << 4,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1473890be FUN_1473890be body=200 status=ok
// SIG undefined FUN_1473890be(void)

void FUN_1473890be(longlong *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  uVar6 = (param_1[1] - lVar2 >> 4) + 1;
  uVar5 = param_1[2] - lVar2 >> 4;
  uVar7 = (uVar5 >> 1) + uVar5;
  if (uVar7 <= uVar6) {
    uVar7 = uVar6;
  }
  if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar7 = 0xfffffffffffffff;
  }
  _Dst = (void *)FUN_147389072(uVar7);
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar2));
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  pvVar3 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar3 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar2) + 0x10),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_147389002(param_1,_Dst,uVar6,uVar7);
  return;
}



// FUNCTION 147389186 FUN_147389186 body=104 status=ok
// SIG undefined FUN_147389186(void)

void FUN_147389186(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 8) != 0x666666666666666) {
    plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
    lVar2 = param_3[1];
    plVar3[2] = *param_3;
    plVar3[3] = lVar2;
    plVar3[4] = param_3[2];
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    plVar1 = *(longlong **)(param_2 + 8);
    *plVar3 = param_2;
    plVar3[1] = (longlong)plVar1;
    *(longlong **)(param_2 + 8) = plVar3;
    *plVar1 = (longlong)plVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list too long");
}



// FUNCTION 1473891f0 FUN_1473891f0 body=118 status=ok
// SIG undefined FUN_1473891f0(void)

void FUN_1473891f0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 8) != 0x666666666666666) {
    plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
    lVar1 = param_3[2];
    param_3[2] = 0;
    lVar3 = *param_3;
    lVar4 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    plVar5[2] = lVar3;
    plVar5[3] = lVar4;
    plVar5[4] = lVar1;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    plVar2 = *(longlong **)(param_2 + 8);
    *plVar5 = param_2;
    plVar5[1] = (longlong)plVar2;
    *(longlong **)(param_2 + 8) = plVar5;
    *plVar2 = (longlong)plVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list too long");
}



// FUNCTION 147389268 FUN_147389268 body=102 status=ok
// SIG undefined FUN_147389268(void)

void FUN_147389268(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  _Dst = (void *)param_1[1];
  uVar3 = (longlong)_Dst - lVar1 >> 3;
  lVar2 = param_2 - uVar3;
  if (param_2 < uVar3) {
    param_1[1] = lVar1 + param_2 * 8;
  }
  else if (lVar2 != 0) {
    if ((ulonglong)(param_1[2] - lVar1 >> 3) < param_2) {
      FUN_1473892ce(param_1);
      return;
    }
    memset(_Dst,0,lVar2 * 8);
    param_1[1] = (longlong)((longlong)_Dst + lVar2 * 8);
  }
  return;
}



// FUNCTION 1473892ce FUN_1473892ce body=168 status=ok
// SIG undefined FUN_1473892ce(void)

void FUN_1473892ce(longlong *param_1,ulonglong param_2)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_1[1] - *param_1;
  uVar1 = param_1[2] - *param_1 >> 3;
  uVar2 = (uVar1 >> 1) + uVar1;
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  if (0x1fffffffffffffff - (uVar1 >> 1) < uVar1) {
    uVar2 = 0x1fffffffffffffff;
  }
  _Dst = (void *)FUN_1473893e0(uVar2);
  memset((void *)(uVar3 + (longlong)_Dst),0,(param_2 - (uVar3 >> 3)) * 8);
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  FUN_147389376(param_1,_Dst,param_2,uVar2);
  return;
}



// FUNCTION 147389376 FUN_147389376 body=104 status=ok
// SIG undefined FUN_147389376(void)

void FUN_147389376(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 1473893e0 FUN_1473893e0 body=65 status=ok
// SIG undefined FUN_1473893e0(void)

void FUN_1473893e0(ulonglong param_1)

{
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_1) {
    FUN_140c1ca1d();
    return;
  }
  FUN_14001cc68(param_1 * 8 + (ulonglong)(param_1 * 8 == 0),0x10);
  return;
}



// FUNCTION 147389422 FUN_147389422 body=112 status=ok
// SIG undefined FUN_147389422(void)

void FUN_147389422(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 8) != 0x492492492492492) {
    plVar5 = (longlong *)FUN_14001cc68(0x38,0x10);
    lVar2 = param_3[1];
    lVar3 = param_3[2];
    lVar4 = param_3[3];
    plVar5[2] = *param_3;
    plVar5[3] = lVar2;
    plVar5[4] = lVar3;
    plVar5[5] = lVar4;
    plVar5[6] = param_3[4];
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    plVar1 = *(longlong **)(param_2 + 8);
    *plVar5 = param_2;
    plVar5[1] = (longlong)plVar1;
    *(longlong **)(param_2 + 8) = plVar5;
    *plVar1 = (longlong)plVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list too long");
}



// FUNCTION 147389494 FUN_147389494 body=85 status=ok
// SIG undefined FUN_147389494(void)

void FUN_147389494(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    puVar3 = (undefined8 *)puVar1[2];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 1473894ea FUN_1473894ea body=61 status=ok
// SIG undefined FUN_1473894ea(void)

void FUN_1473894ea(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 147389528 FUN_147389528 body=75 status=ok
// SIG undefined FUN_147389528(void)

void FUN_147389528(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_147388320(puVar1 + 2);
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 147389574 FUN_147389574 body=61 status=ok
// SIG undefined FUN_147389574(void)

void FUN_147389574(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 1473895b2 FUN_1473895b2 body=82 status=ok
// SIG undefined FUN_1473895b2(void)

void FUN_1473895b2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 147389606 FUN_147389606 body=61 status=ok
// SIG undefined FUN_147389606(void)

void FUN_147389606(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 147389644 FUN_147389644 body=103 status=ok
// SIG undefined FUN_147389644(void)

uint FUN_147389644(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  
  iVar1 = *(int *)(param_1 + 0x50);
  puVar6 = &DAT_149dfb77a;
  puVar4 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar4 = *(undefined2 **)(param_1 + 0x48);
  }
  iVar5 = 0;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = iVar5;
  }
  iVar1 = FUN_144a49b4a(iVar3,puVar4);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar6 = *(undefined2 **)(param_1 + 0x28);
    iVar5 = *(int *)(param_1 + 0x30) + -1;
  }
  uVar2 = FUN_144a49b4a(iVar5,puVar6);
  return uVar2 ^ (uVar2 >> 2) + iVar1 + uVar2 * 0x40 + 0x9e3779b9;
}



// FUNCTION 1473896ab FUN_1473896ab body=1 status=ok
// SIG undefined FUN_1473896ab(void)

void FUN_1473896ab(void)

{
  return;
}



// FUNCTION 1473896ac FUN_1473896ac body=108 status=ok
// SIG undefined FUN_1473896ac(void)

void FUN_1473896ac(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*param_1 + 0x68))(0,0,&local_68,0x3c);
  *param_2 = (undefined4)local_58;
  *param_3 = uStack_34._4_4_;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147389719 FUN_147389719 body=93 status=ok
// SIG undefined FUN_147389719(void)

bool FUN_147389719(longlong *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  (**(code **)(*param_1 + 0x68))(0,8,&local_28,0x18);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (int)local_28 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147389778 FUN_147389778 body=170 status=ok
// SIG undefined FUN_147389778(void)

void FUN_147389778(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar6 = lVar5;
  if (lVar5 == 0) {
    lVar6 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  lVar3 = (longlong)iVar1;
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      cVar2 = FUN_147389822(lVar6 + uVar4,param_2);
      if (cVar2 != '\0') {
        if ((int)(uVar4 >> 2) * -0x55555555 != -1) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0xc;
    } while (lVar3 * 0xc != uVar4);
  }
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_147389836(param_1,iVar1);
    lVar5 = *(longlong *)(param_1 + 0x18);
  }
  if (lVar5 != 0) {
    param_1 = lVar5;
  }
  *(undefined4 *)(param_1 + 8 + lVar3 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + lVar3 * 0xc) = *param_2;
  return;
}



// FUNCTION 147389822 FUN_147389822 body=19 status=ok
// SIG undefined FUN_147389822(void)

undefined8 FUN_147389822(ulonglong *param_1,ulonglong *param_2)

{
  return CONCAT71((int7)((*param_1 ^ *param_2) >> 8),
                  (int)param_1[1] == (int)param_2[1] && (*param_1 ^ *param_2) == 0);
}



// FUNCTION 147389836 FUN_147389836 body=139 status=ok
// SIG undefined FUN_147389836(void)

void FUN_147389836(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xc,0);
      iVar5 = (int)(uVar4 / 0xc);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x24) = iVar6;
    FUN_1473898c2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473898c2 FUN_1473898c2 body=140 status=ok
// SIG undefined FUN_1473898c2(void)

void FUN_1473898c2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,0xc);
  return;
}



// FUNCTION 14738994e FUN_14738994e body=119 status=ok
// SIG undefined FUN_14738994e(void)

void FUN_14738994e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1473899c6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473899c6 FUN_1473899c6 body=140 status=ok
// SIG undefined FUN_1473899c6(void)

void FUN_1473899c6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 147389a52 FUN_147389a52 body=119 status=ok
// SIG undefined FUN_147389a52(void)

void FUN_147389a52(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_147389aca(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147389aca FUN_147389aca body=140 status=ok
// SIG undefined FUN_147389aca(void)

void FUN_147389aca(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 147389b56 FUN_147389b56 body=119 status=ok
// SIG undefined FUN_147389b56(void)

void FUN_147389b56(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_147389bce(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147389bce FUN_147389bce body=140 status=ok
// SIG undefined FUN_147389bce(void)

void FUN_147389bce(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 147389c5c FUN_147389c5c body=38 status=ok
// SIG undefined FUN_147389c5c(void)

undefined8 FUN_147389c5c(undefined8 param_1,int param_2)

{
  FUN_14178db1c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147389c82 FUN_147389c82 body=68 status=ok
// SIG undefined FUN_147389c82(void)

void FUN_147389c82(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_14a3548c8;
  if (param_1[0x15] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x15] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144afd1ae(param_1);
  return;
}



// FUNCTION 147389cc6 FUN_147389cc6 body=62 status=ok
// SIG undefined FUN_147389cc6(void)

void FUN_147389cc6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147389d04(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147389d04 FUN_147389d04 body=93 status=ok
// SIG undefined FUN_147389d04(void)

ulonglong FUN_147389d04(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147389d62 FUN_147389d62 body=68 status=ok
// SIG undefined FUN_147389d62(void)

void FUN_147389d62(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147389da6();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147389da6 FUN_147389da6 body=322 status=ok
// SIG undefined FUN_147389da6(void)

void FUN_147389da6(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 147389eea FUN_147389eea body=287 status=ok
// SIG undefined FUN_147389eea(void)

undefined4 * FUN_147389eea(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14738a00a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_14738a0f0(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14738a1e2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738a00a FUN_14738a00a body=230 status=ok
// SIG undefined FUN_14738a00a(void)

int * FUN_14738a00a(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14738a0f0 FUN_14738a0f0 body=128 status=ok
// SIG undefined FUN_14738a0f0(void)

undefined8 FUN_14738a0f0(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14738a170(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14738a170 FUN_14738a170 body=114 status=ok
// SIG undefined FUN_14738a170(void)

void FUN_14738a170(longlong *param_1,int param_2)

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



// FUNCTION 14738a1e2 FUN_14738a1e2 body=419 status=ok
// SIG undefined FUN_14738a1e2(void)

void FUN_14738a1e2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14738a386 FUN_14738a386 body=71 status=ok
// SIG undefined FUN_14738a386(void)

void FUN_14738a386(longlong *param_1)

{
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1427879f6(param_1 + 0x13);
  FUN_1427879f6(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14738a3ce FUN_14738a3ce body=287 status=ok
// SIG undefined FUN_14738a3ce(void)

undefined4 * FUN_14738a3ce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14738a4ee(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_14738a5d4(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14738a6c6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738a4ee FUN_14738a4ee body=230 status=ok
// SIG undefined FUN_14738a4ee(void)

int * FUN_14738a4ee(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14738a5d4 FUN_14738a5d4 body=128 status=ok
// SIG undefined FUN_14738a5d4(void)

undefined8 FUN_14738a5d4(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14738a654(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14738a654 FUN_14738a654 body=114 status=ok
// SIG undefined FUN_14738a654(void)

void FUN_14738a654(longlong *param_1,int param_2)

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



// FUNCTION 14738a6c6 FUN_14738a6c6 body=419 status=ok
// SIG undefined FUN_14738a6c6(void)

void FUN_14738a6c6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14738a86a FUN_14738a86a body=52 status=ok
// SIG undefined FUN_14738a86a(void)

void FUN_14738a86a(longlong *param_1)

{
  FUN_14738a89e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14738a89e FUN_14738a89e body=89 status=ok
// SIG undefined FUN_14738a89e(void)

void FUN_14738a89e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14738a8f8 FUN_14738a8f8 body=122 status=ok
// SIG undefined FUN_14738a8f8(void)

void FUN_14738a8f8(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1467b92ca();
  if ((iVar1 == -1) || ((longlong)iVar1 * 0x50 + *param_1 == 0)) {
    local_40 = param_3;
    local_38 = param_4;
    FUN_14738a974(param_1,local_2c,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738a974 FUN_14738a974 body=354 status=ok
// SIG undefined FUN_14738a974(void)

undefined4 * FUN_14738a974(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467b913c(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  puVar2 = (undefined8 *)param_4[1];
  *local_40 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[2] = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_40 + 3) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_40 + 0x1c) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  local_40[8] = puVar2[6];
  uVar3 = *(undefined4 *)(puVar2 + 2);
  uVar4 = *(undefined4 *)((longlong)puVar2 + 0x14);
  uVar5 = *(undefined4 *)(puVar2 + 3);
  uVar6 = *(undefined4 *)((longlong)puVar2 + 0x1c);
  uVar7 = *(undefined4 *)((longlong)puVar2 + 0x24);
  uVar8 = *(undefined4 *)(puVar2 + 5);
  uVar9 = *(undefined4 *)((longlong)puVar2 + 0x2c);
  *(undefined4 *)(local_40 + 6) = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)((longlong)local_40 + 0x34) = uVar7;
  *(undefined4 *)(local_40 + 7) = uVar8;
  *(undefined4 *)((longlong)local_40 + 0x3c) = uVar9;
  *(undefined4 *)(local_40 + 4) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar4;
  *(undefined4 *)(local_40 + 5) = uVar5;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar6;
  *(undefined4 *)(local_40 + 9) = 0xffffffff;
  local_58 = 0;
  cVar10 = FUN_1467b922a(param_1,param_3,local_40,local_48);
  if (cVar10 == '\0') {
    uVar11 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar11) {
      uVar12 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x4c) = param_3;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 9) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_1467b942a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738aad8 FUN_14738aad8 body=52 status=ok
// SIG undefined FUN_14738aad8(void)

void FUN_14738aad8(longlong *param_1)

{
  FUN_14738ab0c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14738ab0c FUN_14738ab0c body=89 status=ok
// SIG undefined FUN_14738ab0c(void)

void FUN_14738ab0c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14738ab66 FUN_14738ab66 body=132 status=ok
// SIG undefined FUN_14738ab66(void)

void FUN_14738ab66(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,4);
  return;
}



// FUNCTION 14738abea FUN_14738abea body=52 status=ok
// SIG undefined FUN_14738abea(void)

void FUN_14738abea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14738ac1e(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == *(int *)(param_1 + 0x1c)) {
    return;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  FUN_14738ab66(param_1,*(undefined4 *)(param_1 + 0x18),iVar1);
  return;
}



// FUNCTION 14738ac1e FUN_14738ac1e body=108 status=ok
// SIG undefined FUN_14738ac1e(void)

ulonglong FUN_14738ac1e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 14738ac8a FUN_14738ac8a body=37 status=ok
// SIG undefined FUN_14738ac8a(void)

void FUN_14738ac8a(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x88)) {
    *(undefined4 *)(param_1 + 0x8c) = 0x11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14738acb0 FUN_14738acb0 body=136 status=ok
// SIG undefined FUN_14738acb0(void)

undefined8 * FUN_14738acb0(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a3552e0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_28 = param_1 + 2;
  local_20 = 0;
  local_30 = 1;
  FUN_14738ad8a(param_2 + 0x10,*(undefined8 *)(param_2 + 0x10));
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  param_1[1] = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) + 0x10;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738ad3a FUN_14738ad3a body=66 status=ok
// SIG undefined FUN_14738ad3a(void)

undefined8 * FUN_14738ad3a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a3552e0;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738ad8a FUN_14738ad8a body=104 status=ok
// SIG undefined FUN_14738ad8a(void)

void FUN_14738ad8a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 8) != 0x666666666666666) {
    plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
    lVar2 = param_3[1];
    plVar3[2] = *param_3;
    plVar3[3] = lVar2;
    plVar3[4] = param_3[2];
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    plVar1 = *(longlong **)(param_2 + 8);
    *plVar3 = param_2;
    plVar3[1] = (longlong)plVar1;
    *(longlong **)(param_2 + 8) = plVar3;
    *plVar1 = (longlong)plVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list too long");
}



// FUNCTION 14738adf4 FUN_14738adf4 body=210 status=ok
// SIG undefined FUN_14738adf4(void)

longlong * FUN_14738adf4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *param_1 = (longlong)&PTR_FUN_14a355300;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar1 = FUN_14001cc68(0x30,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[6] = lVar1;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_14738aec8(param_1);
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  local_58 = (**(code **)(*param_1 + 8))(param_1);
  local_48 = 0;
  local_50 = uVar2;
  FUN_14738ad8a(param_2 + 0x10,*(undefined8 *)(param_2 + 0x10));
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  param_1[1] = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) + 0x10;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738aec8 FUN_14738aec8 body=101 status=ok
// SIG undefined FUN_14738aec8(void)

void FUN_14738aec8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_14738841a();
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x40) != *(longlong *)(param_1 + 0x48)) {
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x40);
  }
  return;
}



// FUNCTION 14738af2e FUN_14738af2e body=61 status=ok
// SIG undefined FUN_14738af2e(void)

undefined8 * FUN_14738af2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a355300;
  FUN_14738af78(param_1 + 8);
  FUN_147388c28(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738af6c FUN_14738af6c body=6 status=ok
// SIG undefined FUN_14738af6c(void)

undefined8 FUN_14738af6c(void)

{
  return 5;
}



// FUNCTION 14738af72 FUN_14738af72 body=5 status=ok
// SIG undefined FUN_14738af72(void)

longlong FUN_14738af72(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 14738af78 FUN_14738af78 body=82 status=ok
// SIG undefined FUN_14738af78(void)

void FUN_14738af78(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14738afcc FUN_14738afcc body=132 status=ok
// SIG undefined FUN_14738afcc(void)

void FUN_14738afcc(longlong param_1,int param_2)

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



// FUNCTION 14738b052 FUN_14738b052 body=136 status=ok
// SIG undefined FUN_14738b052(void)

undefined8 * FUN_14738b052(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a355320;
  param_1[1] = 0;
  param_1[2] = 0;
  local_28 = param_1 + 2;
  local_20 = 0;
  local_30 = 2;
  FUN_14738ad8a(param_2 + 0x10,*(undefined8 *)(param_2 + 0x10));
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  param_1[1] = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) + 0x10;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738b0dc FUN_14738b0dc body=66 status=ok
// SIG undefined FUN_14738b0dc(void)

undefined8 * FUN_14738b0dc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a355320;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738b12a FUN_14738b12a body=210 status=ok
// SIG undefined FUN_14738b12a(void)

longlong * FUN_14738b12a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *param_1 = (longlong)&PTR_FUN_14a355340;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar1 = FUN_14001cc68(0x30,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[5] = lVar1;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_14738b1fe(param_1);
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  local_58 = (**(code **)(*param_1 + 8))(param_1);
  local_48 = 0;
  local_50 = uVar2;
  FUN_14738ad8a(param_2 + 0x10,*(undefined8 *)(param_2 + 0x10));
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  param_1[1] = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) + 0x10;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738b1fe FUN_14738b1fe body=99 status=ok
// SIG undefined FUN_14738b1fe(void)

void FUN_14738b1fe(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_14738841a();
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x38) != *(longlong *)(param_1 + 0x40)) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x38);
  }
  return;
}



// FUNCTION 14738b262 FUN_14738b262 body=61 status=ok
// SIG undefined FUN_14738b262(void)

undefined8 * FUN_14738b262(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a355340;
  FUN_14738b2ac(param_1 + 7);
  FUN_147388c28(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738b2a0 FUN_14738b2a0 body=6 status=ok
// SIG undefined FUN_14738b2a0(void)

undefined8 FUN_14738b2a0(void)

{
  return 7;
}



// FUNCTION 14738b2a6 FUN_14738b2a6 body=5 status=ok
// SIG undefined FUN_14738b2a6(void)

longlong FUN_14738b2a6(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 14738b2ac FUN_14738b2ac body=82 status=ok
// SIG undefined FUN_14738b2ac(void)

void FUN_14738b2ac(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14738b300 FUN_14738b300 body=326 status=ok
// SIG undefined FUN_14738b300(void)

longlong * FUN_14738b300(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *param_1 = (longlong)&PTR_FUN_14a355360;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar1 = FUN_14001cc68(0x20,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[7] = lVar1;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar1 = FUN_14001cc68(0x30,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[0xd] = lVar1;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  lVar1 = FUN_14001cc68(0x30,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[0x13] = lVar1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  lVar1 = FUN_14001cc68(0x18,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[0x15] = lVar1;
  FUN_14738b448(param_1);
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  local_58 = (**(code **)(*param_1 + 8))(param_1);
  local_48 = 0;
  local_50 = uVar2;
  FUN_14738ad8a(param_2 + 0x10,*(undefined8 *)(param_2 + 0x10));
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  param_1[1] = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) + 0x10;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738b448 FUN_14738b448 body=120 status=ok
// SIG undefined FUN_14738b448(void)

void FUN_14738b448(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x80) != *(longlong *)(param_1 + 0x88)) {
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x80);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 14738b4c0 FUN_14738b4c0 body=38 status=ok
// SIG undefined FUN_14738b4c0(void)

undefined8 FUN_14738b4c0(undefined8 param_1,int param_2)

{
  FUN_14738b5a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738b4e6 FUN_14738b4e6 body=6 status=ok
// SIG undefined FUN_14738b4e6(void)

undefined8 FUN_14738b4e6(void)

{
  return 0xd;
}



// FUNCTION 14738b4ec FUN_14738b4ec body=181 status=ok
// SIG undefined FUN_14738b4ec(void)

void FUN_14738b4ec(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  
  FUN_14738b77c();
  uVar13 = 0;
  uVar14 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x38);
    lVar11 = 0;
    uVar12 = 0;
    do {
      plVar10 = (longlong *)*plVar10;
      uVar4 = *(undefined4 *)((longlong)plVar10 + 0x14);
      uVar5 = *(undefined4 *)(plVar10 + 3);
      uVar6 = *(undefined4 *)((longlong)plVar10 + 0x1c);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + lVar11);
      *puVar1 = *(undefined4 *)(plVar10 + 2);
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      uVar12 = uVar12 + 1;
      uVar14 = *(uint *)(param_1 + 0x48);
      lVar11 = lVar11 + 0x10;
    } while (uVar12 < uVar14);
  }
  *(uint *)(param_1 + 0x1c) = uVar14;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x50);
  FUN_14738b956();
  if (*(int *)(param_1 + 0x78) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x68);
    lVar11 = 0;
    uVar12 = 0;
    do {
      plVar10 = (longlong *)*plVar10;
      lVar3 = *(longlong *)(param_1 + 0x80);
      uVar7 = plVar10[2];
      uVar8 = plVar10[3];
      uVar9 = plVar10[5];
      puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar11);
      *puVar2 = plVar10[4];
      puVar2[1] = uVar9;
      puVar2 = (undefined8 *)(lVar3 + lVar11);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      uVar12 = uVar12 + 1;
      uVar13 = *(uint *)(param_1 + 0x78);
      lVar11 = lVar11 + 0x20;
    } while (uVar12 < uVar13);
  }
  *(uint *)(param_1 + 0x28) = uVar13;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x80);
  return;
}



// FUNCTION 14738b5a2 FUN_14738b5a2 body=5 status=ok
// SIG undefined FUN_14738b5a2(void)

longlong FUN_14738b5a2(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 14738b5a8 FUN_14738b5a8 body=89 status=ok
// SIG undefined FUN_14738b5a8(void)

void FUN_14738b5a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a355360;
  FUN_14738b602(param_1 + 0x15);
  FUN_147388c28(param_1 + 0x13);
  FUN_14738b658(param_1 + 0x10);
  FUN_14738b6ac(param_1 + 0xd);
  FUN_14738b6ea(param_1 + 10);
  FUN_14738b73e(param_1 + 7);
  return;
}



// FUNCTION 14738b602 FUN_14738b602 body=85 status=ok
// SIG undefined FUN_14738b602(void)

void FUN_14738b602(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    puVar3 = (undefined8 *)puVar1[2];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 14738b658 FUN_14738b658 body=82 status=ok
// SIG undefined FUN_14738b658(void)

void FUN_14738b658(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14738b6ac FUN_14738b6ac body=61 status=ok
// SIG undefined FUN_14738b6ac(void)

void FUN_14738b6ac(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 14738b6ea FUN_14738b6ea body=82 status=ok
// SIG undefined FUN_14738b6ea(void)

void FUN_14738b6ea(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14738b73e FUN_14738b73e body=61 status=ok
// SIG undefined FUN_14738b73e(void)

void FUN_14738b73e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 14738b77c FUN_14738b77c body=122 status=ok
// SIG undefined FUN_14738b77c(void)

void FUN_14738b77c(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  void *_Dst;
  ulonglong uVar2;
  size_t _Size;
  
  lVar1 = *param_1;
  _Dst = (void *)param_1[1];
  uVar2 = (longlong)_Dst - lVar1 >> 4;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + param_2 * 0x10;
  }
  else if (uVar2 < param_2) {
    if ((ulonglong)(param_1[2] - lVar1 >> 4) < param_2) {
      FUN_14738b7f6(param_1,param_2);
      return;
    }
    _Size = param_2 * 0x10 - ((longlong)_Dst - lVar1);
    memset(_Dst,0,_Size);
    param_1[1] = _Size + (longlong)_Dst;
  }
  return;
}



// FUNCTION 14738b7f6 FUN_14738b7f6 body=173 status=ok
// SIG undefined FUN_14738b7f6(void)

void FUN_14738b7f6(longlong *param_1,ulonglong param_2)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = param_1[1] - *param_1;
  uVar1 = param_1[2] - *param_1 >> 4;
  uVar2 = (uVar1 >> 1) + uVar1;
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  if (0xfffffffffffffff - (uVar1 >> 1) < uVar1) {
    uVar2 = 0xfffffffffffffff;
  }
  _Dst = (void *)FUN_14738b914(uVar2);
  if (lVar3 >> 4 != param_2) {
    memset((void *)((longlong)_Dst + lVar3),0,param_2 * 0x10 - lVar3);
  }
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  FUN_14738b8a4(param_1,_Dst,param_2,uVar2);
  return;
}



// FUNCTION 14738b8a4 FUN_14738b8a4 body=110 status=ok
// SIG undefined FUN_14738b8a4(void)

void FUN_14738b8a4(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}



// FUNCTION 14738b914 FUN_14738b914 body=64 status=ok
// SIG undefined FUN_14738b914(void)

void FUN_14738b914(ulonglong param_1)

{
  if (param_1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xff < param_1) {
    FUN_140c1ca1d();
    return;
  }
  FUN_14001cc68(param_1 * 0x10 + (ulonglong)(param_1 * 0x10 == 0),0x10);
  return;
}



// FUNCTION 14738b956 FUN_14738b956 body=122 status=ok
// SIG undefined FUN_14738b956(void)

void FUN_14738b956(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  void *_Dst;
  ulonglong uVar2;
  size_t _Size;
  
  lVar1 = *param_1;
  _Dst = (void *)param_1[1];
  uVar2 = (longlong)_Dst - lVar1 >> 5;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + param_2 * 0x20;
  }
  else if (uVar2 < param_2) {
    if ((ulonglong)(param_1[2] - lVar1 >> 5) < param_2) {
      FUN_14738b9d0(param_1,param_2);
      return;
    }
    _Size = param_2 * 0x20 - ((longlong)_Dst - lVar1);
    memset(_Dst,0,_Size);
    param_1[1] = _Size + (longlong)_Dst;
  }
  return;
}



// FUNCTION 14738b9d0 FUN_14738b9d0 body=173 status=ok
// SIG undefined FUN_14738b9d0(void)

void FUN_14738b9d0(longlong *param_1,ulonglong param_2)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = param_1[1] - *param_1;
  uVar1 = param_1[2] - *param_1 >> 5;
  uVar2 = (uVar1 >> 1) + uVar1;
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  if (0x7ffffffffffffff - (uVar1 >> 1) < uVar1) {
    uVar2 = 0x7ffffffffffffff;
  }
  _Dst = (void *)FUN_14738baee(uVar2);
  if (lVar3 >> 5 != param_2) {
    memset((void *)((longlong)_Dst + lVar3),0,param_2 * 0x20 - lVar3);
  }
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  FUN_14738ba7e(param_1,_Dst,param_2,uVar2);
  return;
}



// FUNCTION 14738ba7e FUN_14738ba7e body=110 status=ok
// SIG undefined FUN_14738ba7e(void)

void FUN_14738ba7e(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}



// FUNCTION 14738baee FUN_14738baee body=64 status=ok
// SIG undefined FUN_14738baee(void)

void FUN_14738baee(ulonglong param_1)

{
  if (param_1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x7f < param_1) {
    FUN_140c1ca1d();
    return;
  }
  FUN_14001cc68(param_1 * 0x20 + (ulonglong)(param_1 * 0x20 == 0),0x10);
  return;
}



// FUNCTION 14738bb30 FUN_14738bb30 body=86 status=ok
// SIG undefined FUN_14738bb30(void)

void FUN_14738bb30(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14738bb86 FUN_14738bb86 body=132 status=ok
// SIG undefined FUN_14738bb86(void)

void FUN_14738bb86(longlong param_1,int param_2)

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



// FUNCTION 14738bc0b FUN_14738bc0b body=41 status=ok
// SIG undefined FUN_14738bc0b(void)

void FUN_14738bc0b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14738bc34(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 14738bc34 FUN_14738bc34 body=122 status=ok
// SIG undefined FUN_14738bc34(void)

void FUN_14738bc34(undefined8 *param_1)

{
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_147377362(param_1 + 6);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  FUN_147377362(param_1);
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
  return;
}



// FUNCTION 14738bcae FUN_14738bcae body=63 status=ok
// SIG undefined FUN_14738bcae(void)

void FUN_14738bcae(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[0x16] = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x15) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x45) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    param_1 = param_1 + 0x24;
  }
  return;
}



// FUNCTION 14738bcee FUN_14738bcee body=136 status=ok
// SIG undefined FUN_14738bcee(void)

void FUN_14738bcee(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x248);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x24c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x90,0);
      iVar4 = (int)(uVar3 / 0x90);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x24c) = iVar5;
    FUN_14738bd78(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14738bd78 FUN_14738bd78 body=149 status=ok
// SIG undefined FUN_14738bd78(void)

void FUN_14738bd78(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x240);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x90);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x240,0,param_3,0x90);
    memmove(*(void **)((longlong)param_1 + 0x240),param_1,(longlong)param_2 * 0x90);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x240,param_2,param_3,0x90);
  return;
}



// FUNCTION 14738be0e FUN_14738be0e body=124 status=ok
// SIG undefined FUN_14738be0e(void)

void FUN_14738be0e(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x240);
  if (*(longlong *)(param_1 + 0x240) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((ulonglong)param_2 * 0x90 + lVar2);
  FUN_14738bc0b(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x248);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x90 + (longlong)_Dst),(longlong)iVar3 * 0x90);
    iVar1 = *(int *)(param_1 + 0x248);
  }
  *(int *)(param_1 + 0x248) = iVar1 - param_3;
  return;
}



// FUNCTION 14738be8a FUN_14738be8a body=67 status=ok
// SIG undefined FUN_14738be8a(void)

void FUN_14738be8a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14738bece(*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c));
  if (iVar1 == *(int *)(param_1 + 0x24c)) {
    return;
  }
  *(int *)(param_1 + 0x24c) = iVar1;
  FUN_14738bd78(param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  return;
}



// FUNCTION 14738bece FUN_14738bece body=129 status=ok
// SIG undefined FUN_14738bece(void)

ulonglong FUN_14738bece(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x90) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x90,0);
      uVar1 = uVar1 / 0x90;
    }
  }
  return uVar1;
}



// FUNCTION 14738bf50 FUN_14738bf50 body=56 status=ok
// SIG undefined FUN_14738bf50(void)

longlong FUN_14738bf50(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738bf9a FUN_14738bf9a body=218 status=ok
// SIG undefined FUN_14738bf9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14738bf9a(void)

{
  if ((DAT_14ca7779f & 2) == 0) {
    DAT_14ca7779f = DAT_14ca7779f | 2;
    _DAT_14ca77740 = L"TResourceArray";
    _DAT_14ca77758 = FUN_146826540;
    _DAT_14ca77760 = FUN_146825d77;
    _DAT_14ca77768 = FUN_146825fd6;
    _DAT_14ca77770 = FUN_1407e02ea;
    _DAT_14ca77778 = FUN_146826273;
    _DAT_14ca77750 = FUN_14738c074;
    _DAT_14ca77790 = 0xffffffff00000020;
    _DAT_14ca77798 = 8;
    DAT_14ca7779c = 1;
    _DAT_14ca77780 = &LAB_14738c0a0;
    FUN_14738c0a6(&DAT_14ca77738);
    FUN_14738c1b4(&DAT_14ca77738);
    FUN_1407e00cc(&DAT_14ca77738);
  }
  return &DAT_14ca77738;
}



// FUNCTION 14738c074 FUN_14738c074 body=43 status=ok
// SIG undefined FUN_14738c074(void)

void FUN_14738c074(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14738c0a6 FUN_14738c0a6 body=269 status=ok
// SIG undefined FUN_14738c0a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14738c0a6(longlong param_1)

{
  _DAT_14ca777c8 = L"bNeedsCPUAccess";
  DAT_14ca777f2 = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14ca777d0 = &DAT_14c9cfcf0;
  _DAT_14ca777e0 = &LAB_14682652b;
  _DAT_14ca777e8 = &DAT_100000018;
  _DAT_14ca777f0 = 0;
  _DAT_14ca777d8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14ca777c8;
  return;
}



// FUNCTION 14738c1b4 FUN_14738c1b4 body=361 status=ok
// SIG undefined FUN_14738c1b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14738c1b4(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14ca777f8 = L"BASE";
  DAT_14ca77822 = 4;
  if ((DAT_14ca7788f & 2) == 0) {
    DAT_14ca7788f = DAT_14ca7788f | 3;
    _DAT_14ca77830 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca77848 = &LAB_14738c39c;
    _DAT_14ca77850 = FUN_14738c3aa;
    _DAT_14ca77858 = &LAB_14738c3ca;
    _DAT_14ca77860 = &LAB_14738c3d8;
    _DAT_14ca77868 = &LAB_14738c3e6;
    _DAT_14ca77840 = FUN_14738c3f2;
    _DAT_14ca77880 = 0x1000000010;
    _DAT_14ca77888 = 8;
    DAT_14ca7788c = '\0';
  }
  _DAT_14ca77800 = &DAT_14ca77828;
  _DAT_14ca77810 = &LAB_14682652b;
  _DAT_14ca77818 = &DAT_100000008;
  _DAT_14ca77808 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14ca777f8;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (DAT_14ca7788c != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  _DAT_14ca77890 = L"BASE";
  DAT_14ca778ba = 4;
  lVar1 = FUN_146268212();
  _DAT_14ca778a8 = &LAB_14682652b;
  _DAT_14ca778b0 = 0x100000000;
  _DAT_14ca778a0 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14ca77898 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14ca77890;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 14738c31d FUN_14738c31d body=127 status=ok
// SIG undefined FUN_14738c31d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14738c31d(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca777c0) {
    FUN_144b3d300(&DAT_14ca777c0);
    if (DAT_14ca777c0 == -1) {
      DAT_14ca777a8 = 0;
      uRam000000014ca777b0 = 0;
      _DAT_14ca777a0 = &PTR_FUN_14a355380;
      DAT_14ca777b8 = 0;
      atexit((_func_5014 *)&LAB_143189414);
      _Init_thread_footer(&DAT_14ca777c0);
    }
  }
  return &DAT_14ca777a0;
}



// FUNCTION 14738c3aa FUN_14738c3aa body=31 status=ok
// SIG undefined FUN_14738c3aa(void)

undefined8
FUN_14738c3aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14738c510(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 14738c3f2 FUN_14738c3f2 body=51 status=ok
// SIG undefined FUN_14738c3f2(void)

void FUN_14738c3f2(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14738c426 FUN_14738c426 body=234 status=ok
// SIG undefined FUN_14738c426(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14738c426(longlong param_1,undefined8 param_2)

{
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14c87e638,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 14738c510 FUN_14738c510 body=248 status=ok
// SIG undefined FUN_14738c510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14738c510(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_14738c608(param_3,*(undefined4 *)(param_1 + 8),1);
  uVar1 = *param_3;
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14c87e638,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 14738c608 FUN_14738c608 body=66 status=ok
// SIG undefined FUN_14738c608(void)

void FUN_14738c608(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_14570f178(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_14738c64c();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14738c64c FUN_14738c64c body=63 status=ok
// SIG undefined FUN_14738c64c(void)

void FUN_14738c64c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14738c68c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 14738c68c FUN_14738c68c body=97 status=ok
// SIG undefined FUN_14738c68c(void)

ulonglong FUN_14738c68c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 14738c6ee FUN_14738c6ee body=203 status=ok
// SIG undefined FUN_14738c6ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14738c6ee(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14c87e638,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 14738c7ba FUN_14738c7ba body=102 status=ok
// SIG undefined FUN_14738c7ba(void)

void FUN_14738c7ba(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_144b19fd4(param_2,*(undefined4 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x14) != '\0') {
    return;
  }
  uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x168) + 0x44);
  *(undefined8 *)(param_1 + 0x2b8 + (param_3 & 0xffffffff) * 8) =
       *(undefined8 *)(*(longlong *)(lVar2 + 0x168) + 0x38);
  *(undefined4 *)(param_1 + 0x58 + (param_3 & 0xffffffff) * 4) = uVar1;
  *(ulonglong *)(param_1 + 0x220) = *(ulonglong *)(param_1 + 0x220) | 1L << ((byte)param_3 & 0x3f);
  FUN_147386eba(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14738c820 FUN_14738c820 body=94 status=ok
// SIG undefined FUN_14738c820(void)

void FUN_14738c820(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 200 + (ulonglong)*(uint *)(param_1 + 0x10) * 8);
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    return;
  }
  uVar1 = *(undefined4 *)(lVar3 + 0x6c);
  *(undefined8 *)(param_1 + 0x2b8 + (ulonglong)param_3 * 8) = *(undefined8 *)(lVar3 + 0x60);
  *(undefined4 *)(param_1 + 0x58 + (ulonglong)param_3 * 4) = uVar1;
  *(ulonglong *)(param_1 + 0x220) = *(ulonglong *)(param_1 + 0x220) | 1L << ((byte)param_3 & 0x3f);
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  FUN_147386eba(*(undefined8 *)(param_1 + 8),lVar2);
  return;
}



// FUNCTION 14738c87e FUN_14738c87e body=96 status=ok
// SIG undefined FUN_14738c87e(void)

void FUN_14738c87e(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 200 + (ulonglong)*(uint *)(param_1 + 0x10) * 8);
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    return;
  }
  lVar3 = lVar2 + 0x28;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  uVar1 = *(undefined4 *)(lVar3 + 0x44);
  *(undefined8 *)(param_1 + 0x4b8 + (ulonglong)param_3 * 8) = *(undefined8 *)(lVar3 + 0x38);
  *(undefined4 *)(param_1 + 0x158 + (ulonglong)param_3 * 4) = uVar1;
  *(ulonglong *)(param_1 + 0x228) = *(ulonglong *)(param_1 + 0x228) | 1L << ((byte)param_3 & 0x3f);
  FUN_147386f46(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14738c8de FUN_14738c8de body=245 status=ok
// SIG undefined FUN_14738c8de(void)

void FUN_14738c8de(float *param_1,longlong param_2,uint *param_3,longlong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  uint *local_68;
  float *local_60;
  undefined4 *local_58;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (float)DAT_14c866ff8;
  uVar3 = *param_3 & *(uint *)(param_2 + 0x10);
  local_68 = param_3;
  if (uVar3 != 0) {
    do {
      uVar2 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      uVar4 = (ulonglong)uVar2;
      uVar1 = *(undefined8 *)(param_4 + uVar4 * 8);
      local_60 = &local_4c;
      local_58 = param_1;
      FUN_14738c9d4(uVar1,uVar4,*(undefined8 *)(param_2 + 0x58),&local_60);
      local_60 = param_1;
      FUN_14738ca60(uVar1,uVar2,*(undefined8 *)(param_2 + 0x18),&local_60);
      local_60 = param_1;
      FUN_14738cacf(uVar1,uVar4,*(undefined8 *)(param_2 + 0x28),&local_60);
      local_60 = param_1;
      FUN_14738cb71(uVar1,uVar2,*(undefined8 *)(param_2 + 0x38),&local_60);
      uVar3 = uVar3 - 1 & uVar3;
    } while (uVar3 != 0);
  }
  *local_68 = 0;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738c9d4 FUN_14738c9d4 body=140 status=ok
// SIG undefined FUN_14738c9d4(void)

void FUN_14738c9d4(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  double dVar8;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if ((int)uVar6 < iVar1) {
        dVar8 = (double)*(float *)*param_4;
        lVar3 = *(longlong *)(lVar2 + (ulonglong)uVar6 * 8);
        if ((*(double *)(lVar3 + 0x58) != dVar8) || (NAN(*(double *)(lVar3 + 0x58)) || NAN(dVar8)))
        {
          *(double *)(lVar3 + 0x58) = dVar8;
        }
        FUN_14738c7ba(param_4[1],lVar3,uVar4 & 0xff);
      }
      uVar4 = *puVar7;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 14738ca60 FUN_14738ca60 body=111 status=ok
// SIG undefined FUN_14738ca60(void)

void FUN_14738ca60(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  
  if ((param_3 != 0) && (uVar4 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar4 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar6 = (uint *)(param_3 + uVar4 * 4);
    uVar3 = *puVar6;
    do {
      puVar6 = puVar6 + 1;
      uVar5 = uVar3 >> 8 & 0xffff;
      if ((int)uVar5 < iVar1) {
        FUN_14738c820(*param_4,*(undefined8 *)(lVar2 + (ulonglong)uVar5 * 8),uVar3 & 0xff);
      }
      uVar3 = *puVar6;
    } while (uVar3 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 14738cacf FUN_14738cacf body=162 status=ok
// SIG undefined FUN_14738cacf(void)

void FUN_14738cacf(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if ((param_3 != 0) && (uVar9 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar9 != 0)
     ) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar9 * 4);
    uVar5 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar8 = uVar5 >> 8 & 0xffff;
      if ((int)uVar8 < iVar1) {
        lVar6 = *(longlong *)(lVar3 + (ulonglong)uVar8 * 8);
        lVar4 = *param_4;
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)*(uint *)(lVar4 + 0x10) * 8);
        }
        if (*(char *)(lVar4 + 0x15) == '\0') {
          uVar2 = *(undefined4 *)(lVar6 + 0x6c);
          *(undefined8 *)(lVar4 + 0x538 + (ulonglong)(uVar5 & 0xff) * 8) =
               *(undefined8 *)(lVar6 + 0x60);
          *(undefined4 *)(lVar4 + 0x198 + (ulonglong)(uVar5 & 0xff) * 4) = uVar2;
          *(ulonglong *)(lVar4 + 0x230) = *(ulonglong *)(lVar4 + 0x230) | 1L << ((byte)uVar5 & 0x3f)
          ;
        }
      }
      uVar5 = *puVar7;
    } while (uVar5 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 14738cb71 FUN_14738cb71 body=111 status=ok
// SIG undefined FUN_14738cb71(void)

void FUN_14738cb71(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  
  if ((param_3 != 0) && (uVar4 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar4 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar6 = (uint *)(param_3 + uVar4 * 4);
    uVar3 = *puVar6;
    do {
      puVar6 = puVar6 + 1;
      uVar5 = uVar3 >> 8 & 0xffff;
      if ((int)uVar5 < iVar1) {
        FUN_14738c87e(*param_4,*(undefined8 *)(lVar2 + (ulonglong)uVar5 * 8),uVar3 & 0xff);
      }
      uVar3 = *puVar6;
    } while (uVar3 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 14738cbe0 FUN_14738cbe0 body=31 status=ok
// SIG undefined FUN_14738cbe0(void)

undefined8 FUN_14738cbe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738cc1c FUN_14738cc1c body=93 status=ok
// SIG undefined FUN_14738cc1c(void)

void FUN_14738cc1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3554c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14738cc7a FUN_14738cc7a body=126 status=ok
// SIG undefined FUN_14738cc7a(void)

void FUN_14738cc7a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3554c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014738cce9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14738ccf8 FUN_14738ccf8 body=21 status=ok
// SIG undefined FUN_14738ccf8(void)

undefined8 FUN_14738ccf8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14738cd21 FUN_14738cd21 body=48 status=ok
// SIG undefined FUN_14738cd21(void)

void FUN_14738cd21(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14738cd52 FUN_14738cd52 body=48 status=ok
// SIG undefined FUN_14738cd52(void)

void FUN_14738cd52(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14738cd82 FUN_14738cd82 body=110 status=ok
// SIG undefined FUN_14738cd82(void)

void FUN_14738cd82(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar5 = 3;
    if (3 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x3c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    FUN_14738cdf2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14738cdf2 FUN_14738cdf2 body=132 status=ok
// SIG undefined FUN_14738cdf2(void)

void FUN_14738cdf2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0x10);
  return;
}



// FUNCTION 14738ce76 FUN_14738ce76 body=100 status=ok
// SIG undefined FUN_14738ce76(void)

void FUN_14738ce76(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((ulonglong)param_2 * 0x10 + lVar2);
  FUN_145d894a0(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x38);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x38);
  }
  *(int *)(param_1 + 0x38) = iVar1 - param_3;
  return;
}



// FUNCTION 14738ceda FUN_14738ceda body=52 status=ok
// SIG undefined FUN_14738ceda(void)

void FUN_14738ceda(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14738cf0e(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  if (iVar1 == *(int *)(param_1 + 0x3c)) {
    return;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  FUN_14738cdf2(param_1,*(undefined4 *)(param_1 + 0x38),iVar1);
  return;
}



// FUNCTION 14738cf0e FUN_14738cf0e body=108 status=ok
// SIG undefined FUN_14738cf0e(void)

ulonglong FUN_14738cf0e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 3;
  if (3 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14738cf7a FUN_14738cf7a body=38 status=ok
// SIG undefined FUN_14738cf7a(void)

undefined8 FUN_14738cf7a(undefined8 param_1,int param_2)

{
  FUN_144834c52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738cfa0 FUN_14738cfa0 body=45 status=ok
// SIG undefined FUN_14738cfa0(void)

longlong FUN_14738cfa0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x60;
  FUN_144834c52(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738cfce FUN_14738cfce body=132 status=ok
// SIG undefined FUN_14738cfce(void)

void FUN_14738cfce(longlong param_1,int param_2)

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



// FUNCTION 14738d054 FUN_14738d054 body=928 status=ok
// SIG undefined FUN_14738d054(void)

void FUN_14738d054(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong lVar19;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar20;
  undefined1 auStack_108 [35];
  byte local_e5;
  int local_e4;
  LPCRITICAL_SECTION local_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar14 = *(uint *)(param_1 + 0x18);
  if (uVar14 == 0) {
    uVar9 = 0x20;
  }
  else {
    uVar9 = 0;
    if (uVar14 != 0) {
      for (; (uVar14 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
  }
  lVar13 = param_1[(ulonglong)uVar9 + 0x19];
  puVar18 = (undefined8 *)(lVar13 + 0xc0);
  if (lVar13 == 0) {
    puVar18 = (undefined8 *)0x0;
  }
  if (puVar18 != param_1 + 0x18) goto LAB_14738d0f9;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x800000000;
  bVar11 = (byte)uVar9 & 0x1f;
  uVar14 = uVar14 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  if (uVar14 == 0) {
LAB_14738d0de:
    FUN_1448281b4(local_d8);
  }
  else {
    uVar9 = 0;
    if (uVar14 != 0) {
      for (; (uVar14 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    uVar12 = (ulonglong)uVar9;
    lVar13 = *(longlong *)(lVar13 + 200 + uVar12 * 8);
    if (lVar13 != 0) {
      do {
        uVar7 = local_50;
        lVar20 = (longlong)(int)local_50;
        uVar9 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar9);
        if (local_50._4_4_ < uVar9) {
          FUN_14738d3f6(local_d8,uVar7 & 0xffffffff);
        }
        puVar10 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar10 = local_d8;
        }
        *(ulonglong *)(puVar10 + lVar20 * 0x10) = (ulonglong)uVar14 | uVar12 << 0x20;
        *(longlong *)(puVar10 + lVar20 * 0x10 + 8) = lVar13;
        bVar11 = (byte)uVar12 & 0x1f;
        uVar14 = uVar14 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
        if (uVar14 == 0) break;
        uVar9 = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        uVar12 = (ulonglong)uVar9;
        lVar13 = *(longlong *)(lVar13 + 200 + uVar12 * 8);
      } while (lVar13 != 0);
      lVar13 = (longlong)(int)local_50;
      puVar10 = local_d8;
      if (local_58 != (undefined1 *)0x0) {
        puVar10 = local_58;
      }
      if (lVar13 != 0) {
        lVar20 = 0;
        do {
          LOCK();
          puVar1 = (uint *)(*(longlong *)(puVar10 + lVar20 + 8) + 8);
          uVar14 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
          lVar20 = lVar20 + 0x10;
        } while (lVar13 * 0x10 != lVar20);
      }
    }
    uVar12 = local_50 >> 0x20;
    local_50 = local_50 & 0xffffffff00000000;
    if ((int)uVar12 != 0) goto LAB_14738d0de;
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14738d0f9:
  param_1[5] = &PTR_LAB_14a3511c0;
  puVar18 = (undefined8 *)param_1[0x15];
  if (puVar18 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar18 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar18)(puVar18,1);
    }
  }
  param_1[5] = &PTR__purecall_14a3516b0;
  lVar13 = param_1[7];
  if (lVar13 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar13 + 0x10);
    EnterCriticalSection(lpCriticalSection);
    iVar3 = *(int *)(lVar13 + 0x40);
    lVar20 = (longlong)iVar3;
    if (lVar20 != 0) {
      plVar4 = *(longlong **)(lVar13 + 0x38);
      local_e5 = (undefined8 *)*plVar4 == param_1 + 5;
      iVar8 = 0;
      iVar15 = 0;
      do {
        bVar11 = local_e5 ^ 1;
        iVar6 = iVar15 + 1;
        if (iVar15 + 1 < iVar3) {
          iVar6 = iVar3;
        }
        iVar16 = iVar15;
        lVar19 = (longlong)iVar15;
        do {
          lVar19 = lVar19 + 1;
          iVar17 = iVar6;
          if (lVar20 <= lVar19) break;
          iVar16 = iVar16 + 1;
          iVar17 = iVar16;
        } while ((bool)(local_e5 & 1) == ((undefined8 *)plVar4[lVar19] == param_1 + 5));
        bVar5 = local_e5 & 1;
        local_e5 = bVar11;
        local_e4 = iVar8;
        if (bVar5 == 0) {
          local_e0 = lpCriticalSection;
          if (iVar8 != iVar15) {
            memmove(plVar4 + iVar8,plVar4 + iVar15,(longlong)(iVar17 - iVar15) << 3);
          }
          iVar8 = local_e4 + (iVar17 - iVar15);
          lpCriticalSection = local_e0;
        }
        iVar15 = iVar17;
      } while (lVar19 < lVar20);
      *(int *)(lVar13 + 0x40) = iVar8;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((*(int *)(param_1 + 0xe) != -1) && (*(char *)((longlong)param_1 + 0x74) != -1)) {
    if (*(char *)(param_1 + 0xf) == '\x01') {
      FUN_14736baba(param_1[6] + 0x6b0,param_1[0xe]);
    }
    param_1[0xe] = 0xffffffffff;
  }
  lVar13 = *(longlong *)(param_1[6] + 0x898);
  lVar20 = param_1[6] + 0x6d8;
  if (lVar13 != 0) {
    lVar20 = lVar13;
  }
  FUN_144a63af0((ulonglong)*(byte *)((longlong)param_1 + 0x79) * 0x70 + lVar20,param_1 + 0xc);
  *param_1 = &PTR_FUN_14a1e49d0;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar14 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14738d3f6 FUN_14738d3f6 body=119 status=ok
// SIG undefined FUN_14738d3f6(void)

void FUN_14738d3f6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_14738d46e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14738d46e FUN_14738d46e body=140 status=ok
// SIG undefined FUN_14738d46e(void)

void FUN_14738d46e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 14738d4fa FUN_14738d4fa body=158 status=ok
// SIG undefined FUN_14738d4fa(void)

void FUN_14738d4fa(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3519d0;
  FUN_14738d598(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  FUN_14738d5db(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
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



// FUNCTION 14738d598 FUN_14738d598 body=67 status=ok
// SIG undefined FUN_14738d598(void)

void FUN_14738d598(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar4 * 8);
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
      lVar4 = lVar4 + 1;
    } while (param_2 != (int)lVar4);
  }
  return;
}



// FUNCTION 14738d5db FUN_14738d5db body=67 status=ok
// SIG undefined FUN_14738d5db(void)

void FUN_14738d5db(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar4 * 8);
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
      lVar4 = lVar4 + 1;
    } while (param_2 != (int)lVar4);
  }
  return;
}



// FUNCTION 14738d61e FUN_14738d61e body=85 status=ok
// SIG undefined FUN_14738d61e(void)

undefined8 FUN_14738d61e(longlong param_1,char param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      cVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + lVar3) + 0x50))();
      if (cVar1 == param_2) {
        FUN_14318ba2c(param_1,uVar2 & 0xffffffff);
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x38));
  }
  return 0;
}



// FUNCTION 14738d9e2 FUN_14738d9e2 body=124 status=ok
// SIG undefined FUN_14738d9e2(void)

void FUN_14738d9e2(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  if (-1 < (longlong)(int)uVar3) {
    iVar4 = *(int *)(param_1 + 0x38);
    if (((int)uVar3 < iVar4) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar3 * 0x10),
       plVar1 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar1 + 0x50))();
      if (cVar2 == '\x01') goto LAB_14738da49;
      uVar3 = *(uint *)(param_1 + 0x40);
      if ((int)uVar3 < 0) {
        return;
      }
      iVar4 = *(int *)(param_1 + 0x38);
    }
    if ((((int)uVar3 < iVar4) &&
        (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar3 * 0x10),
        plVar1 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar1 + 0x50))(), cVar2 == '\0')) {
LAB_14738da49:
      FUN_14738dde4(param_1);
      FUN_14318bfae(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14738da5e FUN_14738da5e body=117 status=ok
// SIG undefined FUN_14738da5e(void)

void FUN_14738da5e(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x38) <= iVar1)) ||
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x10),
     plVar2 == (longlong *)0x0)) {
    return;
  }
  cVar3 = (**(code **)(*plVar2 + 0x50))();
  if (cVar3 != '\x01') {
    iVar1 = *(int *)(param_1 + 0x40);
    if ((((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x38) <= iVar1)) ||
       (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x10),
       plVar2 == (longlong *)0x0)) goto LAB_14738da98;
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    if (cVar3 != '\0') goto LAB_14738da98;
  }
  FUN_14738df54(param_1);
LAB_14738da98:
  FUN_14080c2b4();
  return;
}



// FUNCTION 14738dad4 FUN_14738dad4 body=99 status=ok
// SIG undefined FUN_14738dad4(void)

undefined1 * FUN_14738dad4(undefined1 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(param_1 + 0x28) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 14738db38 FUN_14738db38 body=326 status=ok
// SIG undefined FUN_14738db38(void)

void FUN_14738db38(byte *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  wchar_t *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  undefined1 local_68;
  wchar_t local_60 [18];
  undefined1 local_3c [28];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((DAT_14c98e618 != 0) && ((*param_1 & 1) == 0)) {
    FUN_147391d94(DAT_14c98e618 + 0x580,&local_80,param_1);
    FUN_147391e7a(DAT_14c98e618 + 0x5b0,&local_80,param_1);
    LOCK();
    *param_1 = 1;
    UNLOCK();
    local_80 = local_60;
    local_68 = 0;
    local_70 = &local_20;
    builtin_wcsncpy(local_60,L"SlateLoadingThread",0x12);
    local_78 = local_3c;
    FUN_140212e80(&local_80,&DAT_149e063bc,DAT_14ca77968);
    LOCK();
    DAT_14ca77968 = DAT_14ca77968 + 1;
    UNLOCK();
    uVar1 = FUN_1405d8a54(0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = &PTR_FUN_14a355f80;
    puVar2[1] = param_1;
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    local_90 = 0;
    local_98 = 0xffffffffffffffff;
    uVar1 = FUN_1411b1052(puVar2,local_80,0,0);
    *(undefined8 *)(param_1 + 8) = uVar1;
    FUN_144724f3c(&local_80);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738dc80 FUN_14738dc80 body=354 status=ok
// SIG undefined FUN_14738dc80(void)

void FUN_14738dc80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  QueryPerformanceCounter(&local_40);
  dVar9 = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
  dVar3 = *(double *)(param_1 + 0x98);
  *(double *)(param_1 + 0x98) = dVar9;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  plVar4 = DAT_14ca77938;
  if (DAT_14ca77938 != (longlong *)0x0) {
    iVar7 = (int)DAT_14ca77938[1];
    do {
      if (iVar7 == 0) goto LAB_14738ddb2;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar7 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      plVar1 = DAT_14ca77930;
      UNLOCK();
    } while (!bVar8);
    if ((((DAT_14ca77930 != (longlong *)0x0) && ((DAT_14c760bfc & 1) != 0)) &&
        (*(longlong *)(param_1 + 0x60) != 0)) &&
       (((*(longlong *)(param_1 + 0x68) != 0 && (0 < *(int *)(*(longlong *)(param_1 + 0x68) + 8)))
        && ((*(longlong *)(param_1 + 0x70) != 0 &&
            (cVar6 = (**(code **)(*DAT_14ca77930 + 0x40))(DAT_14ca77930), cVar6 == '\0')))))) {
      DAT_14c7590b0 = DAT_14c7590b0 + 1;
      (**(code **)(*plVar1 + 0x28))(plVar1,(float)(dVar9 - dVar3));
      (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
      local_40.QuadPart = 0;
      local_38 = 0;
      FUN_14007658c(&DAT_14ca850c8,&local_40,7);
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
LAB_14738ddb2:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14738dde4 FUN_14738dde4 body=366 status=ok
// SIG undefined FUN_14738dde4(void)

void FUN_14738dde4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_1 + 0x40);
  if (((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x38))) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 0x10),
     plVar3 != (longlong *)0x0)) {
    fVar6 = (float)(**(code **)(*plVar3 + 0x18))(plVar3);
    if (0.0 < fVar6) {
      FUN_14000f986();
    }
    QueryPerformanceCounter(&local_38);
    dVar7 = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
    fVar6 = (float)(dVar7 - *(double *)(param_1 + 0x48));
    *(double *)(param_1 + 0x48) = dVar7;
    if (5.0 <= fVar6) {
      fVar6 = 5.0;
    }
    (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
    uVar5 = FUN_1401cb356();
    FUN_142746dae(uVar5,fVar6);
    uVar5 = FUN_141033dca();
    FUN_14275b75e(uVar5);
    (**(code **)(*plVar3 + 0x10))(plVar3,fVar6);
    FUN_1400e427a(1);
    FUN_1428f37b6(DAT_14c98e618);
    FUN_1449ad830(DAT_14c98e618);
    plVar4 = DAT_14c968090;
    plVar3 = DAT_14c968088;
    if (DAT_14c968090 == (longlong *)0x0) {
      (**(code **)(*DAT_14c968088 + 0x30))(DAT_14c968088,fVar6);
    }
    else {
      LOCK();
      *(int *)(DAT_14c968090 + 1) = (int)DAT_14c968090[1] + 1;
      UNLOCK();
      (**(code **)(*plVar3 + 0x30))(plVar3,fVar6);
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
    DAT_14c872be0 = DAT_14c872be0 + 1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738df54 FUN_14738df54 body=340 status=ok
// SIG undefined FUN_14738df54(void)

void FUN_14738df54(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = *(int *)(param_1 + 0x40);
  if (((-1 < (longlong)iVar5) && (iVar5 < *(int *)(param_1 + 0x38))) &&
     (plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 0x10),
     plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x38))();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  plVar7 = DAT_14ca77938;
  DAT_14ca77930 = 0;
  DAT_14ca77938 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  if (((*(longlong *)(param_1 + 0x60) != 0) &&
      (plVar7 = *(longlong **)(param_1 + 0x68), plVar7 != (longlong *)0x0)) && (0 < (int)plVar7[1]))
  {
    uVar6 = 0;
    iVar5 = (int)plVar7[1];
    do {
      iVar4 = iVar5;
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_14738e00a;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar8 = iVar4 == iVar5;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
    } while (!bVar8);
    uVar6 = *(undefined8 *)(param_1 + 0x60);
LAB_14738e00a:
    local_30 = DAT_14c98dec8;
    local_28 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
    FUN_140763be6(uVar6,&local_30);
    if (iVar4 != 0) {
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
  lVar3 = *(longlong *)(param_1 + 0x70);
  if (lVar3 != 0) {
    local_40 = DAT_14c98dec8;
    local_38 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
    FUN_140763be6(lVar3,&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14738e0aa FUN_14738e0aa body=90 status=ok
// SIG undefined FUN_14738e0aa(void)

undefined8 * FUN_14738e0aa(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  if (((*(longlong *)(param_1 + 0x60) == 0) || (lVar2 = *(longlong *)(param_1 + 0x68), lVar2 == 0))
     || (*(int *)(lVar2 + 8) < 1)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = lVar2;
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar4 = iVar3 == iVar1;
      if (bVar4) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar4);
    if (param_2[1] != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x60);
    }
  }
  return param_2;
}



// FUNCTION 14738e104 FUN_14738e104 body=182 status=ok
// SIG undefined FUN_14738e104(void)

void FUN_14738e104(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x38))) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x10),
     plVar3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar3 + 0x50))();
    if (cVar4 == '\x02') {
      iVar1 = *(int *)(param_1 + 0x40);
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x38))) &&
         (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x10),
         plVar3 != (longlong *)0x0)) {
        while( true ) {
          cVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
          if (cVar4 != '\0') break;
          FUN_14738dde4(param_1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14738e1ba();
    lVar2 = *(longlong *)(param_1 + 0x88);
    if (lVar2 != 0) {
      FUN_14738e222(lVar2);
      FUN_1400020a8(lVar2);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  FUN_14738df54(param_1);
  return;
}



// FUNCTION 14738e1ba FUN_14738e1ba body=103 status=ok
// SIG undefined FUN_14738e1ba(void)

void FUN_14738e1ba(byte *param_1)

{
  longlong *plVar1;
  
  if ((*param_1 & 1) != 0) {
    LOCK();
    *param_1 = 0;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    FUN_14018802a(*(undefined8 *)(param_1 + 0x18));
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
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
  }
  return;
}



// FUNCTION 14738e222 FUN_14738e222 body=111 status=ok
// SIG undefined FUN_14738e222(void)

void FUN_14738e222(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14738e1ba();
  if (DAT_14c98e618 != 0) {
    FUN_140457ffc(DAT_14c98e618 + 0x5b0,param_1);
    FUN_140457ffc(DAT_14c98e618 + 0x580,param_1);
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x00014738e286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14738e292 FUN_14738e292 body=48 status=ok
// SIG undefined FUN_14738e292(void)

void FUN_14738e292(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *(undefined1 *)(param_1 + 0xa4) = param_2;
  iVar1 = *(int *)(param_1 + 0x40);
  if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x38))) &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x10),
     plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014738e2be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x60))();
    return;
  }
  return;
}



// FUNCTION 14738e2c2 FUN_14738e2c2 body=274 status=ok
// SIG undefined FUN_14738e2c2(void)

void FUN_14738e2c2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x58);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      (**(code **)(*param_2 + 0x88))
                (param_2,*(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18) + 0x38,0,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738e3de FUN_14738e3de body=1851 status=ok
// SIG undefined FUN_14738e3de(void)

void FUN_14738e3de(longlong *param_1,longlong param_2)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  wchar_t *_Str;
  uint uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *_Str_00;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_138 [40];
  longlong *local_110;
  undefined2 *local_108;
  longlong local_100;
  double local_f8;
  double local_f0;
  undefined2 *local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  undefined2 *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_2 + 8) < 2) goto LAB_14738e411;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1403de9f2(param_2,&local_78,&DAT_149e06140,1);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1403de9f2(local_78,&local_88,&DAT_149e06196,1);
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  if ((int)uStack_70 == 2) {
    local_e8 = (undefined2 *)0x0;
    uStack_e0 = 0;
    FUN_1403de9f2(local_78 + 0x10,&local_e8,&DAT_149e06196,1);
    lVar8 = (longlong)(int)uStack_e0;
    if (lVar8 == 0) {
      uVar5 = 0;
    }
    else {
      lVar14 = 0;
      local_108 = local_e8;
      local_110 = param_1;
      do {
        iVar11 = 0;
        local_a8 = (void *)0x0;
        local_a0 = *(int *)((longlong)local_108 + lVar14 + 8);
        lVar7 = (longlong)local_a0;
        pvVar1 = *(void **)((longlong)local_108 + lVar14);
        if (lVar7 == 0) {
          local_9c = 0;
        }
        else {
          FUN_1446dd670(&local_a8,local_a0,0);
          memcpy(local_a8,pvVar1,lVar7 * 2);
        }
        FUN_14033cb48(&local_a8);
        FUN_1400b22c2(&local_b8,&DAT_149eb775e);
        iVar10 = local_b0 + -1;
        if (local_b0 == 0) {
          iVar10 = iVar11;
        }
        puVar6 = &DAT_149dfb77a;
        if (local_b0 != 0) {
          puVar6 = local_b8;
        }
        FUN_140c540b4(&local_a8,puVar6,iVar10,1);
        if (local_b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1400b22c2(&local_b8,&DAT_149dfbe79);
        iVar10 = local_b0 + -1;
        if (local_b0 == 0) {
          iVar10 = iVar11;
        }
        puVar6 = &DAT_149dfb77a;
        if (local_b0 != 0) {
          puVar6 = local_b8;
        }
        FUN_140b127b8(&local_a8,puVar6,iVar10,1);
        if (local_b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1400b22c2(&local_b8,&DAT_149dfbe79);
        iVar10 = local_b0 + -1;
        if (local_b0 == 0) {
          iVar10 = iVar11;
        }
        puVar6 = &DAT_149dfb77a;
        if (local_b0 != 0) {
          puVar6 = local_b8;
        }
        FUN_140b127b8(&local_a8,puVar6,iVar10,1);
        if (local_b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar5 = uStack_90;
        lVar7 = (longlong)(int)uStack_90;
        uVar3 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar3);
        if (uStack_90._4_4_ < uVar3) {
          FUN_1447a1bd6(&local_98,uVar5 & 0xffffffff);
        }
        pvVar1 = local_a8;
        puVar12 = local_98 + lVar7 * 2;
        local_98[lVar7 * 2] = 0;
        lVar9 = (longlong)local_a0;
        *(int *)(local_98 + lVar7 * 2 + 1) = local_a0;
        if (lVar9 == 0) {
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar12,local_a0,0);
          memcpy((void *)*puVar12,pvVar1,lVar9 * 2);
        }
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar14 = lVar14 + 0x10;
      } while (lVar8 * 0x10 != lVar14);
      uVar5 = uStack_e0 & 0xffffffff;
      param_1 = local_110;
    }
    FUN_1447a1747(local_e8,uVar5);
    if (local_e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
LAB_14738e794:
    if ((0 < (int)uStack_90) &&
       (cVar2 = (**(code **)(*param_1 + 0xb8))(param_1,&local_88), cVar2 != '\0')) {
      local_a8 = (void *)0x0;
      local_a0 = *(int *)(local_88 + 1);
      lVar8 = (longlong)local_a0;
      pvVar1 = (void *)*local_88;
      if (lVar8 == 0) {
        local_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,local_a0,0);
        memcpy(local_a8,pvVar1,lVar8 * 2);
      }
      FUN_14033cb48(&local_a8);
      FUN_1400b22c2(&local_e8,&DAT_149eb775e);
      iVar11 = (int)uStack_e0 + -1;
      puVar6 = local_e8;
      if ((int)uStack_e0 == 0) {
        puVar6 = &DAT_149dfb77a;
        iVar11 = 0;
      }
      FUN_140c540b4(&local_a8,puVar6,iVar11,1);
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0xb0))(param_1,&local_b8,local_88 + 2);
      _Str_00 = L"";
      _Str = L"";
      if (*(int *)(local_88 + 5) != 0) {
        _Str = (wchar_t *)local_88[4];
      }
      dVar16 = _wtof(_Str);
      if (*(int *)(local_88 + 7) != 0) {
        _Str_00 = (wchar_t *)local_88[6];
      }
      dVar17 = _wtof(_Str_00);
      local_f0 = (double)(float)dVar17;
      local_f8 = (double)(float)dVar16;
      FUN_14738eb1a(&local_e8,&local_a8,&local_b8);
      if ((longlong)(int)uStack_90 != 0) {
        puVar15 = local_98 + (longlong)(int)uStack_90 * 2;
        puVar12 = local_98;
        do {
          puVar6 = &DAT_149dfb77a;
          if (*(int *)(puVar12 + 1) != 0) {
            puVar6 = (undefined2 *)*puVar12;
          }
          FUN_1446f470e(&local_100,puVar6,1);
          if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
            uVar3 = (uint)((ulonglong)local_100 >> 0x10);
            uVar4 = (uint)local_100 & 0xffff;
            plVar13 = (longlong *)param_1[0x41];
            if ((longlong *)param_1[0x41] == (longlong *)0x0) {
              plVar13 = param_1 + 0x40;
            }
            iVar11 = *(int *)((longlong)plVar13 +
                             (ulonglong)
                             ((int)param_1[0x42] - 1U &
                             (int)((ulonglong)local_100 >> 0x20) + ((uint)local_100 << 0x10 | uVar4)
                             + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
            if (iVar11 != -1) {
              do {
                lVar8 = param_1[0x39] + (longlong)iVar11 * 0x20;
                if (*(longlong *)(param_1[0x39] + (longlong)iVar11 * 0x20) == local_100) {
                  plVar13 = (longlong *)(lVar8 + 8);
                  if (plVar13 != (longlong *)0x0 && lVar8 != 0) {
                    iVar11 = *(int *)(lVar8 + 0x10);
                    *(uint *)(lVar8 + 0x10) = iVar11 + 1U;
                    if (*(uint *)(lVar8 + 0x14) < iVar11 + 1U) {
                      FUN_147392700(plVar13,iVar11);
                    }
                    FUN_147392658((longlong)iVar11 * 0x30 + *plVar13,&local_e8);
                  }
                  break;
                }
                iVar11 = *(int *)(lVar8 + 0x18);
              } while (iVar11 != -1);
            }
          }
          puVar12 = puVar12 + 2;
        } while (puVar12 != puVar15);
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else if ((int)uStack_70 == 1) {
    uStack_90 = 1;
    FUN_1447a1bd6(&local_98,0);
    puVar12 = local_98;
    *local_98 = 0;
    iVar11 = DAT_14ca77958;
    pvVar1 = DAT_14ca77950;
    lVar8 = (longlong)DAT_14ca77958;
    *(int *)(local_98 + 1) = DAT_14ca77958;
    if (lVar8 == 0) {
      *(undefined4 *)((longlong)local_98 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(local_98,iVar11,0);
      memcpy((void *)*puVar12,pvVar1,lVar8 * 2);
    }
    goto LAB_14738e794;
  }
  FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_14738e411:
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738eb1a FUN_14738eb1a body=173 status=ok
// SIG undefined FUN_14738eb1a(void)

undefined8 *
FUN_14738eb1a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_4[1];
  param_1[4] = *param_4;
  param_1[5] = uVar3;
  return param_1;
}



// FUNCTION 14738ebd0 FUN_14738ebd0 body=703 status=ok
// SIG undefined FUN_14738ebd0(void)

void FUN_14738ebd0(longlong *param_1,undefined8 param_2)

{
  void *pvVar1;
  char cVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_1403de9f2(param_2,&local_38,&DAT_149e06196,1);
  cVar2 = (**(code **)(*param_1 + 0xc0))(param_1,&local_38);
  if (cVar2 == '\0') goto LAB_14738ee2b;
  local_48 = (void *)0x0;
  local_40 = *(int *)(local_38 + 1);
  lVar4 = (longlong)local_40;
  pvVar1 = (void *)*local_38;
  if (lVar4 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar4 * 2);
  }
  FUN_14033cb48(&local_48);
  FUN_1400b22c2(&local_58,&DAT_149eb775e);
  iVar5 = local_50 + -1;
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
    iVar5 = 0;
  }
  FUN_140c540b4(&local_48,puVar3,iVar5,1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = (undefined2 *)0x0;
  local_50 = *(int *)(local_38 + 3);
  lVar4 = (longlong)local_50;
  pvVar1 = (void *)local_38[2];
  if (lVar4 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar1,lVar4 * 2);
  }
  FUN_14033cb48(&local_58);
  local_68 = (void *)0x0;
  iStack_60 = *(int *)(local_38 + 5);
  lVar4 = (longlong)iStack_60;
  pvVar1 = (void *)local_38[4];
  if (lVar4 == 0) {
    uStack_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,iStack_60,0);
    memcpy(local_68,pvVar1,lVar4 * 2);
  }
  FUN_14033cb48(&local_68);
  FUN_140b127b8(&local_68,&DAT_149e06144,1,1);
  if (iStack_60 == DAT_14ca77948) {
    if ((1 < iStack_60) && (iVar5 = FUN_144a80a00(local_68,DAT_14ca77940), iVar5 != 0)) {
LAB_14738edb5:
      (**(code **)(*param_1 + 0xb0))(param_1,&local_78,&local_68);
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_68 = (void *)CONCAT44(uStack_74,local_78);
      iStack_60 = iStack_70;
      uStack_5c = uStack_6c;
    }
  }
  else if (DAT_14ca77948 + iStack_60 != 1) goto LAB_14738edb5;
  (**(code **)(*param_1 + 0x50))(param_1,&local_48,&local_58,&local_68);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14738ee2b:
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738ee90 FUN_14738ee90 body=535 status=ok
// SIG undefined FUN_14738ee90(void)

void FUN_14738ee90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 == 0) {
    puVar3 = &DAT_149dfb77a;
    if (DAT_14ca77958 != 0) {
      puVar3 = DAT_14ca77950;
    }
    FUN_1446f470e(local_50,puVar3,1);
    uVar4 = local_50._0_4_ & 0xffff;
    FUN_147392794(param_1 + 0x128,
                  (local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                  (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),local_50);
    puVar3 = &DAT_149dfb77a;
    if (DAT_14ca77958 != 0) {
      puVar3 = DAT_14ca77950;
    }
    FUN_1446f470e(local_50,puVar3,1);
    uVar4 = local_50._0_4_ & 0xffff;
    FUN_147392d1c(param_1 + 0x1c8,
                  (local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                  (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),local_50);
  }
  else {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar5) != 0) {
        puVar3 = *(undefined2 **)(lVar1 + lVar5);
      }
      FUN_1446f470e(local_50,puVar3,1);
      uVar4 = local_50._0_4_ & 0xffff;
      FUN_147392794(param_1 + 0x128,
                    (local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                    (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),local_50);
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar5) != 0) {
        puVar3 = *(undefined2 **)(lVar1 + lVar5);
      }
      FUN_1446f470e(local_50,puVar3,1);
      uVar4 = local_50._0_4_ & 0xffff;
      FUN_147392d1c(param_1 + 0x1c8,
                    (local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                    (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),local_50);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738f0a8 FUN_14738f0a8 body=59 status=ok
// SIG undefined FUN_14738f0a8(void)

void FUN_14738f0a8(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_3[1] != 0) {
    lVar2 = *param_3;
    lVar1 = (longlong)(int)param_3[1] << 4;
    do {
      (**(code **)(*param_1 + 0x98))(param_1,lVar2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14738f0e4 FUN_14738f0e4 body=1083 status=ok
// SIG undefined FUN_14738f0e4(void)

void FUN_14738f0e4(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_1403de9f2(param_2,&local_58,&DAT_149e06196,1);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  if ((int)uStack_50 == 2) {
    iVar8 = *(int *)(local_58 + 1) + -1;
    if (*(int *)(local_58 + 1) == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(&local_68,*local_58,iVar8);
    puVar2 = local_58 + 2;
    piVar3 = (int *)(local_58 + 3);
  }
  else {
    if ((int)uStack_50 != 1) goto LAB_14738f3e1;
    iVar8 = DAT_14ca77958 + -1;
    if (DAT_14ca77958 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(&local_68,DAT_14ca77950,iVar8);
    piVar3 = (int *)(local_58 + 1);
    puVar2 = local_58;
  }
  iVar8 = *piVar3 + -1;
  if (*piVar3 == 0) {
    iVar8 = 0;
  }
  FUN_1402980a2(&local_78,*puVar2,iVar8);
  FUN_1407753c8(&local_68);
  FUN_1400b22c2(&local_88,&DAT_149eb775e);
  iVar8 = local_80 + -1;
  puVar6 = local_88;
  if (local_80 == 0) {
    iVar8 = 0;
    puVar6 = &DAT_149dfb77a;
  }
  FUN_140c540b4(&local_68,puVar6,iVar8,1);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407753c8(&local_78);
  FUN_1400b22c2(&local_88,&DAT_149eb775e);
  iVar8 = local_80 + -1;
  puVar6 = local_88;
  if (local_80 == 0) {
    puVar6 = &DAT_149dfb77a;
    iVar8 = 0;
  }
  FUN_140c540b4(&local_78,puVar6,iVar8,1);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,&DAT_149dfbe79);
  iVar8 = local_80 + -1;
  puVar6 = local_88;
  if (local_80 == 0) {
    puVar6 = &DAT_149dfb77a;
    iVar8 = 0;
  }
  FUN_140b127b8(&local_78,puVar6,iVar8,1);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((1 < (int)uStack_60) && (1 < (int)uStack_70)) {
    FUN_1446f470e(&local_90,local_68,1);
    if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
      uVar1 = (uint)((ulonglong)local_90 >> 0x10);
      uVar5 = (uint)local_90 & 0xffff;
      lVar4 = param_1 + 0x160;
      if (*(longlong *)(param_1 + 0x168) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x168);
      }
      iVar8 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x170) - 1U &
                               (int)((ulonglong)local_90 >> 0x20) + ((uint)local_90 << 0x10 | uVar5)
                               + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x128) + (longlong)iVar8 * 0x20;
          if (*(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar8 * 0x20) == local_90)
          goto LAB_14738f306;
          iVar8 = *(int *)(lVar4 + 0x18);
        } while (iVar8 != -1);
      }
    }
    lVar4 = 0;
LAB_14738f306:
    plVar7 = (longlong *)(lVar4 + 8);
    if (lVar4 == 0) {
      plVar7 = (longlong *)0x0;
    }
    puVar6 = local_78;
    if ((int)uStack_70 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_98,puVar6,1);
    if (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x1ac)) {
      uVar1 = (uint)((ulonglong)local_98 >> 0x10);
      uVar5 = (uint)local_98 & 0xffff;
      lVar4 = param_1 + 0x1b0;
      if (*(longlong *)(param_1 + 0x1b8) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x1b8);
      }
      iVar8 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x1c0) - 1U &
                               (int)((ulonglong)local_98 >> 0x20) + ((uint)local_98 << 0x10 | uVar5)
                               + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x178) + (longlong)iVar8 * 0x38;
          if (*(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar8 * 0x38) == local_98) {
            if (((plVar7 != (longlong *)0x0) && (lVar4 != 0)) && (lVar4 != -8)) {
              puVar6 = local_78;
              if ((int)uStack_70 == 0) {
                puVar6 = &DAT_149dfb77a;
              }
              FUN_1446f470e(&local_88,puVar6,1);
              iVar8 = (int)plVar7[1];
              *(uint *)(plVar7 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)plVar7 + 0xc) < iVar8 + 1U) {
                FUN_1446f84a2(plVar7,iVar8);
              }
              *(undefined2 **)(*plVar7 + (longlong)iVar8 * 8) = local_88;
            }
            break;
          }
          iVar8 = *(int *)(lVar4 + 0x30);
        } while (iVar8 != -1);
      }
    }
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14738f3e1:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14738f520 FUN_14738f520 body=3618 status=ok
// SIG undefined FUN_14738f520(void)

void FUN_14738f520(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined2 uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 *local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  wchar_t *local_a0;
  int local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar7 = *(int *)(param_4 + 1);
  if (iVar7 == DAT_14ca77948) {
    if ((iVar7 < 2) || (iVar7 = FUN_144a80a00(*param_4,DAT_14ca77940), iVar7 == 0))
    goto LAB_14738f582;
LAB_14738f577:
    bVar21 = false;
  }
  else {
    if (DAT_14ca77948 + iVar7 != 1) goto LAB_14738f577;
LAB_14738f582:
    (**(code **)(*param_1 + 0x58))(param_1);
    bVar21 = true;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_a0,puVar13,1);
  uVar8 = (uint)((ulonglong)local_a0 >> 0x10);
  uVar17 = (uint)local_a0 & 0xffff;
  plVar10 = (longlong *)
            FUN_1473932ba(param_1 + 0x1b,
                          ((uint)local_a0 << 0x10 | uVar17) + (int)((ulonglong)local_a0 >> 0x20) +
                          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar17 >> 4),&local_a0);
  if (*plVar10 == 0) {
    plVar11 = (longlong *)FUN_1458a350f();
    if (plVar11 == (longlong *)0x0) {
      *plVar10 = 0x10;
      plVar19 = (longlong *)plVar10[1];
      lVar20 = 0x10;
      if (plVar19 != (longlong *)0x0) {
        plVar10[1] = 0;
LAB_14738f636:
        LOCK();
        plVar1 = plVar19 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
        if (plVar11 != (longlong *)0x0) goto LAB_14738f65c;
        goto LAB_14738f67f;
      }
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      *plVar10 = (longlong)(plVar11 + 2);
      plVar19 = (longlong *)plVar10[1];
      if (plVar11 == plVar19) {
        LOCK();
        plVar19 = plVar11 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
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
      else {
        plVar10[1] = (longlong)plVar11;
        if (plVar19 != (longlong *)0x0) goto LAB_14738f636;
      }
LAB_14738f65c:
      LOCK();
      plVar19 = plVar11 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
LAB_14738f67f:
      lVar20 = *plVar10;
    }
    if (lVar20 == 0) goto LAB_14738f687;
  }
  if (bVar21) {
    (**(code **)(*param_1 + 0x60))(param_1,&local_58);
  }
  else {
    local_58 = (void *)0x0;
    local_50 = *(int *)(param_4 + 1);
    lVar20 = (longlong)local_50;
    pvVar4 = (void *)*param_4;
    if (lVar20 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar4,lVar20 * 2);
    }
  }
  local_b8 = param_2;
  FUN_140056680(&local_a0,&DAT_149e19e7a);
  pwVar6 = local_a0;
  iVar7 = *(int *)(param_3 + 1);
  if (iVar7 == local_98) {
    bVar21 = true;
    if (1 < iVar7) {
      iVar7 = wcscmp((wchar_t *)*param_3,local_a0);
      bVar21 = iVar7 == 0;
    }
  }
  else {
    bVar21 = local_98 + iVar7 == 1;
  }
  if (pwVar6 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar6);
  }
  pvVar4 = local_58;
  puVar5 = local_b8;
  if (bVar21) {
    lVar20 = *plVar10;
    local_68 = (void *)0x0;
    lVar14 = (longlong)local_50;
    local_60 = local_50;
    if (lVar14 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_50,0);
      memcpy(local_68,pvVar4,lVar14 * 2);
    }
    if (*(int *)(puVar5 + 1) == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = (undefined2 *)*puVar5;
    }
    FUN_1446f470e(&local_a0,puVar13,1);
    local_c8 = 0;
    FUN_1458a3092(lVar20 + 0x10,&local_a0,&local_68,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    FUN_140056680(&local_a0,&DAT_14a355f30);
    iVar7 = *(int *)(param_3 + 1);
    if (iVar7 == local_98) {
      bVar21 = true;
      if (1 < iVar7) {
        iVar7 = FUN_144a80a00(*param_3,local_a0);
        bVar21 = iVar7 == 0;
      }
    }
    else {
      bVar21 = local_98 + iVar7 == 1;
    }
    if (local_a0 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (bVar21) {
      lVar20 = (longlong)(int)(uint)uStack_70;
      uVar8 = (uint)uStack_70 + 1;
      if (uStack_70._4_4_ < uVar8) {
        uVar12 = uStack_70 & 0xffffffff;
        uStack_70._0_4_ = uVar8;
        FUN_14739369e(&local_78,uVar12);
        uVar8 = (uint)uStack_70;
      }
      uStack_70._0_4_ = uVar8;
      uVar8 = (uint)uStack_70;
      *(undefined2 *)(local_78 + lVar20 * 2) = 0xd;
      lVar20 = (longlong)(int)(uint)uStack_70;
      uStack_70._0_4_ = (uint)uStack_70 + 1;
      if (uStack_70._4_4_ < (uint)uStack_70) {
        FUN_14739369e(&local_78,uVar8);
      }
      uVar8 = (uint)uStack_70;
      *(undefined2 *)(local_78 + lVar20 * 2) = 0x14;
      lVar20 = (longlong)(int)(uint)uStack_70;
      uStack_70._0_4_ = (uint)uStack_70 + 1;
      if (uStack_70._4_4_ < (uint)uStack_70) {
        FUN_14739369e(&local_78,uVar8);
      }
      uVar8 = (uint)uStack_70;
      *(undefined2 *)(local_78 + lVar20 * 2) = 0xfb;
      lVar20 = (longlong)(int)(uint)uStack_70;
      uStack_70._0_4_ = (uint)uStack_70 + 1;
      if (uStack_70._4_4_ < (uint)uStack_70) {
        FUN_14739369e(&local_78,uVar8);
      }
      uVar8 = (uint)uStack_70;
      *(undefined2 *)(local_78 + lVar20 * 2) = 0x99;
      lVar20 = (longlong)(int)(uint)uStack_70;
      uStack_70._0_4_ = (uint)uStack_70 + 1;
      if (uStack_70._4_4_ < (uint)uStack_70) {
        FUN_14739369e(&local_78,uVar8);
      }
      uVar17 = (uint)uStack_70;
      *(undefined2 *)(local_78 + lVar20 * 2) = 0x9f;
      uVar8 = (uint)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
      uVar15 = 0xf;
LAB_14738f984:
      if (uStack_70._4_4_ < uVar8) {
        FUN_14739369e(&local_78,uVar17);
      }
      *(undefined2 *)(local_78 + (longlong)(int)uVar17 * 2) = uVar15;
    }
    else {
      FUN_140056680(&local_a0,&DAT_14a355f36);
      iVar7 = *(int *)(param_3 + 1);
      if (iVar7 == local_98) {
        bVar21 = true;
        if (1 < iVar7) {
          iVar7 = FUN_144a80a00(*param_3,local_a0);
          bVar21 = iVar7 == 0;
        }
      }
      else {
        bVar21 = local_98 + iVar7 == 1;
      }
      if (local_a0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (bVar21) {
        lVar20 = (longlong)(int)(uint)uStack_70;
        uVar8 = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < uVar8) {
          uVar12 = uStack_70 & 0xffffffff;
          uStack_70._0_4_ = uVar8;
          FUN_14739369e(&local_78,uVar12);
          uVar8 = (uint)uStack_70;
        }
        uStack_70._0_4_ = uVar8;
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x73;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x9d;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x97;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x10d;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x66;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x70;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x69;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x76;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x74;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x109;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x10a;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x10b;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x10c;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x72;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x6a;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x6b;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x71;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar17 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x6e;
        uVar8 = (uint)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
        uVar15 = 0xa0;
        goto LAB_14738f984;
      }
      FUN_140056680(&local_a0,&DAT_14a3565c4);
      iVar7 = *(int *)(param_3 + 1);
      if (iVar7 == local_98) {
        bVar21 = true;
        if (1 < iVar7) {
          iVar7 = FUN_144a80a00(*param_3,local_a0);
          bVar21 = iVar7 == 0;
        }
      }
      else {
        bVar21 = local_98 + iVar7 == 1;
      }
      if (local_a0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (bVar21) {
        lVar20 = (longlong)(int)(uint)uStack_70;
        uVar8 = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < uVar8) {
          uVar12 = uStack_70 & 0xffffffff;
          uStack_70._0_4_ = uVar8;
          FUN_14739369e(&local_78,uVar12);
          uVar8 = (uint)uStack_70;
        }
        uStack_70._0_4_ = uVar8;
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x24;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x86;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x92;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar17 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x6d;
        uVar8 = (uint)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
        uVar15 = 0x91;
        goto LAB_14738f984;
      }
      FUN_140056680(&local_a0,L"zh-hans");
      iVar7 = *(int *)(param_3 + 1);
      if (iVar7 == local_98) {
        bVar21 = true;
        if (1 < iVar7) {
          iVar7 = FUN_144a80a00(*param_3,local_a0);
          bVar21 = iVar7 == 0;
        }
      }
      else {
        bVar21 = local_98 + iVar7 == 1;
      }
      if (local_a0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (bVar21) {
LAB_147390093:
        lVar20 = (longlong)(int)(uint)uStack_70;
        uVar8 = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < uVar8) {
          uVar12 = uStack_70 & 0xffffffff;
          uStack_70._0_4_ = uVar8;
          FUN_14739369e(&local_78,uVar12);
          uVar8 = (uint)uStack_70;
        }
        uStack_70._0_4_ = uVar8;
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x73;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x9d;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x97;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x10d;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x66;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x70;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x69;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x76;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x74;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x109;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x10a;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar8 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x10b;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_14739369e(&local_78,uVar8);
        }
        uVar17 = (uint)uStack_70;
        *(undefined2 *)(local_78 + lVar20 * 2) = 0x10c;
        uVar8 = (uint)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
        uVar15 = 0x72;
        goto LAB_14738f984;
      }
      FUN_140056680(&local_a0,L"zh-hant");
      iVar7 = *(int *)(param_3 + 1);
      if (iVar7 == local_98) {
        bVar21 = true;
        if (1 < iVar7) {
          iVar7 = FUN_144a80a00(*param_3,local_a0);
          bVar21 = iVar7 == 0;
        }
      }
      else {
        bVar21 = local_98 + iVar7 == 1;
      }
      if (local_a0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (bVar21) goto LAB_147390093;
    }
    lVar20 = *plVar10;
    iVar9 = FUN_1458a32f4(lVar20 + 0x38);
    lVar14 = *(longlong *)(lVar20 + 0x38);
    lVar20 = lVar14 + (longlong)iVar9 * 0x38;
    iVar7 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar7 = 0;
    }
    FUN_1400020e8(lVar14 + (longlong)iVar9 * 0x38 + 0x28,*param_3,iVar7);
    lVar14 = local_78;
    lVar18 = (longlong)(int)(uint)uStack_70;
    if (lVar18 != 0) {
      lVar16 = 0;
      do {
        FUN_146938208(&local_a0,*(undefined2 *)(lVar14 + lVar16));
        iVar7 = *(int *)(lVar20 + 0x20);
        *(uint *)(lVar20 + 0x20) = iVar7 + 1U;
        if (*(uint *)(lVar20 + 0x24) < iVar7 + 1U) {
          FUN_1458a3352((longlong *)(lVar20 + 0x18),iVar7);
        }
        puVar3 = (undefined4 *)(*(longlong *)(lVar20 + 0x18) + (longlong)iVar7 * 0x10);
        *puVar3 = local_88;
        puVar3[1] = uStack_84;
        puVar3[2] = uStack_80;
        puVar3[3] = uStack_7c;
        if ((longlong *)CONCAT44(uStack_94,local_98) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_94,local_98) + 0x10))();
        }
        lVar16 = lVar16 + 2;
      } while (lVar18 * 2 != lVar16);
    }
    pvVar4 = local_58;
    local_b0 = (void *)0x0;
    lVar14 = (longlong)local_50;
    local_a8 = local_50;
    if (lVar14 == 0) {
      local_a4 = 0;
    }
    else {
      FUN_1446dd670(&local_b0,local_50,0);
      memcpy(local_b0,pvVar4,lVar14 * 2);
    }
    if (*(int *)(local_b8 + 1) == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = (undefined2 *)*local_b8;
    }
    FUN_1446f470e(&local_a0,puVar13,1);
    local_c8 = 0;
    FUN_1458a3092(lVar20,&local_a0,&local_b0,0);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14738f687:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147390344 FUN_147390344 body=125 status=ok
// SIG undefined FUN_147390344(void)

undefined8 FUN_147390344(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14626c06e(&local_28);
  FUN_1412cfe60(param_2,&local_28,(local_20 == 0) + '\x16');
  FUN_1401aebe8(param_2,L"DefaultSystemFont.ttf",0x15);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473903c2 FUN_1473903c2 body=211 status=ok
// SIG undefined FUN_1473903c2(void)

ulonglong FUN_1473903c2(longlong *param_1)

{
  undefined1 uVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined2 *puVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = (undefined7)(local_20 >> 8);
  uVar1 = 1;
  if (*(char *)((longlong)param_1 + 0x234) == '\0') {
    uVar2 = FUN_1467b7c36(&local_30);
    if (0 < local_28) {
      uVar2 = FUN_14054d1d4();
      (**(code **)(*param_1 + 0x60))(param_1,&local_40);
      puVar4 = local_40;
      if (local_38 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      local_50 = local_30;
      local_48 = (longlong)local_28;
      uVar2 = FUN_146810d90(&local_50,puVar4,uVar2,0);
      *(char *)((longlong)param_1 + 0x234) = (char)uVar2;
      if (local_40 != (undefined2 *)0x0) {
        uVar2 = FUN_1400020a8();
      }
    }
    if (local_30 != 0) {
      uVar2 = FUN_1400020a8();
    }
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x234);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar3,uVar1) & 0xffffffffffffff01;
}



// FUNCTION 14739049e FUN_14739049e body=1691 status=ok
// SIG undefined FUN_14739049e(void)

void FUN_14739049e(longlong *param_1,undefined8 param_2)

{
  void *pvVar1;
  char cVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined1 local_a8 [16];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined2 *local_88;
  int local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  ulonglong uStack_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_1403de9f2(param_2,&local_58,&DAT_149e06196,1);
  cVar2 = (**(code **)(*param_1 + 200))(param_1,&local_58);
  if (cVar2 != '\0') {
    local_68 = (void *)0x0;
    local_60 = *(int *)(local_58 + 1);
    lVar4 = (longlong)local_60;
    pvVar1 = (void *)*local_58;
    if (lVar4 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar1,lVar4 * 2);
    }
    FUN_14033cb48(&local_68);
    FUN_1400b22c2(&local_48,&DAT_149eb775e);
    iVar5 = local_40 + -1;
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    FUN_140c540b4(&local_68,puVar3,iVar5,1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_78 = (undefined2 *)0x0;
    local_70 = *(int *)(local_58 + 3);
    lVar4 = (longlong)local_70;
    pvVar1 = (void *)local_58[2];
    if (lVar4 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar1,lVar4 * 2);
    }
    FUN_14033cb48(&local_78);
    FUN_1400b22c2(&local_48,"NSLOCTEXT(");
    iVar5 = local_40 + -1;
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    FUN_140c540b4(&local_78,puVar3,iVar5,1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_48,&DAT_149e01f5e);
    iVar5 = local_40 + -1;
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    FUN_140c540b4(&local_78,puVar3,iVar5,1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_48,&DAT_149e01f5e);
    iVar5 = local_40 + -1;
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    FUN_140b127b8(&local_78,puVar3,iVar5,1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_88 = (undefined2 *)0x0;
    local_80 = *(int *)(local_58 + 5);
    lVar4 = (longlong)local_80;
    pvVar1 = (void *)local_58[4];
    if (lVar4 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,pvVar1,lVar4 * 2);
    }
    FUN_14033cb48(&local_88);
    FUN_1400b22c2(&local_48,&DAT_149e01f5e);
    iVar5 = local_40 + -1;
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    FUN_140c540b4(&local_88,puVar3,iVar5,1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_48,&DAT_149e01f5e);
    iVar5 = local_40 + -1;
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    FUN_140b127b8(&local_88,puVar3,iVar5,1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_98 = (void *)0x0;
    local_90 = *(int *)(local_58 + 7);
    lVar4 = (longlong)local_90;
    pvVar1 = (void *)local_58[6];
    if (lVar4 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,local_90,0);
      memcpy(local_98,pvVar1,lVar4 * 2);
    }
    FUN_14033cb48(&local_98);
    FUN_1400b22c2(&local_48,&DAT_149e01f5e);
    iVar5 = local_40 + -1;
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    FUN_140c540b4(&local_98,puVar3,iVar5,1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_48,&DAT_149dfbe79);
    iVar5 = local_40 + -1;
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    FUN_140b127b8(&local_98,puVar3,iVar5,1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_48,&DAT_149dfbe79);
    iVar5 = local_40 + -1;
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    FUN_140b127b8(&local_98,puVar3,iVar5,1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_48,&DAT_149e01f5e);
    iVar5 = local_40 + -1;
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    FUN_140b127b8(&local_98,puVar3,iVar5,1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_48 = local_88;
    local_40 = local_80 + -1;
    if (local_80 == 0) {
      local_40 = 0;
    }
    FUN_1446e940c(local_ac,&local_48);
    local_48 = local_78;
    local_40 = local_70 + -1;
    if (local_70 == 0) {
      local_40 = 0;
    }
    FUN_1446e940c(local_b0,&local_48);
    FUN_140f57608(local_a8,local_b0,local_ac,&local_98);
    (**(code **)(*param_1 + 0x40))(param_1,&local_68,local_a8);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147390b42 FUN_147390b42 body=675 status=ok
// SIG undefined FUN_147390b42(void)

void FUN_147390b42(longlong *param_1,undefined8 param_2)

{
  void *pvVar1;
  char cVar2;
  wchar_t *_Str;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  undefined1 auStack_b8 [40];
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_1403de9f2(param_2,&local_38,&DAT_149e06196,1);
  cVar2 = (**(code **)(*param_1 + 0xd0))(param_1,&local_38);
  if (cVar2 != '\0') {
    local_48 = (void *)0x0;
    local_40 = *(int *)(local_38 + 1);
    lVar4 = (longlong)local_40;
    pvVar1 = (void *)*local_38;
    if (lVar4 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_40,0);
      memcpy(local_48,pvVar1,lVar4 * 2);
    }
    FUN_14033cb48(&local_48);
    FUN_1400b22c2(&local_90,&DAT_149eb775e);
    iVar5 = local_88 + -1;
    puVar3 = local_90;
    if (local_88 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    FUN_140c540b4(&local_48,puVar3,iVar5,1);
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_58 = (void *)0x0;
    local_50 = *(int *)(local_38 + 3);
    lVar4 = (longlong)local_50;
    pvVar1 = (void *)local_38[2];
    if (lVar4 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar1,lVar4 * 2);
    }
    FUN_14033cb48(&local_58);
    local_68 = (void *)0x0;
    local_60 = *(int *)(local_38 + 5);
    lVar4 = (longlong)local_60;
    pvVar1 = (void *)local_38[4];
    if (lVar4 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar1,lVar4 * 2);
    }
    FUN_14033cb48(&local_68);
    if (*(int *)(local_38 + 7) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)local_38[6];
    }
    dVar6 = _wtof(_Str);
    FUN_147390de6(&local_90,&local_58,&local_68,(float)dVar6);
    (**(code **)(*param_1 + 0x48))(param_1,&local_48,&local_90);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147390de6 FUN_147390de6 body=173 status=ok
// SIG undefined FUN_147390de6(void)

undefined8 *
FUN_147390de6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 4) = param_4;
  return param_1;
}



// FUNCTION 147390e94 FUN_147390e94 body=250 status=ok
// SIG undefined FUN_147390e94(void)

longlong * FUN_147390e94(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  int local_48;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ded208(param_3);
  cVar1 = FUN_1415258a0(param_2);
  if (cVar1 == '\0') {
    iVar2 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar2 = 0;
    }
    local_48 = iVar2 + 1 + (uint)(*(int *)(param_1 + 0x220) == 0);
    local_38 = 0;
    FUN_14125bce8(&local_38,*(undefined8 *)(param_1 + 0x218),*(int *)(param_1 + 0x220),0);
    FUN_1401aebe8(&local_38,*param_2,iVar2);
    if (&local_38 == param_2) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_2 + 1) = local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
    }
  }
  FUN_1415258a0(param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147390f98 FUN_147390f98 body=578 status=ok
// SIG undefined FUN_147390f98(void)

void FUN_147390f98(longlong param_1,undefined8 *param_2,undefined8 *param_3,double *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  float local_58;
  float local_54;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x228) == '\x01') {
    local_40 = FUN_14001cc68(0xd0,0x10);
    local_50 = &DAT_3f8000003f800000;
    puStack_48 = &DAT_3f8000003f800000;
    local_54 = (float)param_4[1];
    local_58 = (float)*param_4;
    puVar4 = &DAT_149dfb77a;
    puVar3 = &DAT_149dfb77a;
    if (*(int *)(param_3 + 1) != 0) {
      puVar3 = (undefined2 *)*param_3;
    }
    FUN_1446f470e(&local_60,puVar3,1);
    local_80 = 1;
    local_88 = 0;
    FUN_14692fd70(local_40,local_60,&local_58,&local_50);
    puVar3 = &DAT_149dfb77a;
    if (*(int *)(param_2 + 1) != 0) {
      puVar3 = (undefined2 *)*param_2;
    }
    FUN_1446f470e(local_68,puVar3,1);
    uVar5 = local_68._0_4_ & 0xffff;
    FUN_147393722(param_1 + 0x38,
                  (local_68._0_4_ << 0x10 | uVar5) + local_68._4_4_ +
                  (local_68._2_4_ << 0x13 | local_68._2_4_ & 0xffff) + (uVar5 >> 4),local_68,
                  &local_40);
    plVar1 = *(longlong **)(DAT_14c98e618 + 0x20);
    if (*(int *)(param_3 + 1) != 0) {
      puVar4 = (undefined2 *)*param_3;
    }
    FUN_1446f470e(&local_70,puVar4,1);
    (**(code **)(*plVar1 + 0x78))(plVar1,&local_50,local_70);
  }
  else {
    uVar2 = FUN_14001cc68(0xd0,0x10);
    local_50 = &DAT_3f8000003f800000;
    puStack_48 = &DAT_3f8000003f800000;
    local_54 = (float)param_4[1];
    local_58 = (float)*param_4;
    local_80 = 1;
    local_88 = 0;
    FUN_14692fd70(uVar2,0);
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    local_40 = uVar2;
    FUN_1446f470e(local_68,puVar3,1);
    uVar5 = local_68._0_4_ & 0xffff;
    FUN_147393722(param_1 + 0x38,
                  (local_68._0_4_ << 0x10 | uVar5) + local_68._4_4_ +
                  (local_68._2_4_ << 0x13 | local_68._2_4_ & 0xffff) + (uVar5 >> 4),local_68,
                  &local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473911dc FUN_1473911dc body=141 status=ok
// SIG undefined FUN_1473911dc(void)

void FUN_1473911dc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(local_40,puVar1,1);
  local_38 = local_40;
  local_30 = param_3;
  FUN_147393ab4(param_1 + 0x88,local_24);
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739126a FUN_14739126a body=127 status=ok
// SIG undefined FUN_14739126a(void)

void FUN_14739126a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(local_40,puVar1,1);
  local_38 = local_40;
  local_30 = param_3;
  FUN_147393c2a(param_1 + 0x178,local_24);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473912ea FUN_1473912ea body=250 status=ok
// SIG undefined FUN_1473912ea(void)

longlong FUN_1473912ea(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_18,puVar5,1);
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    uVar2 = (uint)((ulonglong)local_18 >> 0x10);
    uVar4 = (uint)local_18 & 0xffff;
    lVar3 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x78);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x80) - 1U &
                             (int)((ulonglong)local_18 >> 0x20) + ((uint)local_18 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar3 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 0x18);
        if (*plVar1 == local_18) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_14739132b;
          lVar3 = plVar1[1];
          break;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
      goto LAB_14739132d;
    }
  }
LAB_14739132b:
  lVar3 = 0;
LAB_14739132d:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1473913e6 FUN_1473913e6 body=291 status=ok
// SIG undefined FUN_1473913e6(void)

longlong * FUN_1473913e6(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_3 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_20,puVar7,1);
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    uVar2 = (uint)((ulonglong)local_20 >> 0x10);
    uVar5 = (uint)local_20 & 0xffff;
    lVar4 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar4 = *(longlong *)(param_1 + 200);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xd0) - 1U &
                             (int)((ulonglong)local_20 >> 0x20) + ((uint)local_20 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 0x20) == local_20) {
          if (lVar4 != 0) {
            plVar3 = (longlong *)(lVar4 + 8);
            goto LAB_14739143a;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x18);
      } while (iVar6 != -1);
    }
  }
  plVar3 = (longlong *)FUN_140e82300();
LAB_14739143a:
  plVar1 = (longlong *)*plVar3;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar3[1];
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14739150a FUN_14739150a body=373 status=ok
// SIG undefined FUN_14739150a(void)

longlong * FUN_14739150a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_3 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_20,puVar8,1);
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    uVar4 = (uint)((ulonglong)local_20 >> 0x10);
    uVar7 = (uint)local_20 & 0xffff;
    lVar6 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x118);
    }
    iVar9 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x120) - 1U &
                             (int)((ulonglong)local_20 >> 0x20) + ((uint)local_20 << 0x10 | uVar7) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar9 != -1) {
      lVar6 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0xd8) + (longlong)iVar9 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar9 * 0x20) == local_20) {
          if ((lVar5 + 8U & 0xfffffffffffffff7) == 0) goto LAB_147391556;
          lVar6 = *(longlong *)(lVar5 + 8);
          plVar3 = *(longlong **)(lVar5 + 0x10);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            lVar5 = lVar6 + 0x10;
            if (lVar6 == 0) {
              lVar5 = 0;
            }
            *param_2 = lVar5;
            param_2[1] = (longlong)plVar3;
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
            goto LAB_14739156e;
          }
          break;
        }
        iVar9 = *(int *)(lVar5 + 0x18);
      } while (iVar9 != -1);
      goto LAB_147391558;
    }
  }
LAB_147391556:
  lVar6 = 0;
LAB_147391558:
  lVar5 = lVar6 + 0x10;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  *param_2 = lVar5;
  param_2[1] = 0;
LAB_14739156e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147391680 FUN_147391680 body=250 status=ok
// SIG undefined FUN_147391680(void)

longlong FUN_147391680(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_18,puVar6,1);
  if (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x1ac)) {
    uVar1 = (uint)((ulonglong)local_18 >> 0x10);
    uVar5 = (uint)local_18 & 0xffff;
    lVar4 = param_1 + 0x1b0;
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1b8);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x1c0) - 1U &
                             (int)((ulonglong)local_18 >> 0x20) + ((uint)local_18 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x178) + (longlong)iVar3 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar3 * 0x38) == local_18)
        goto LAB_1473916c9;
        iVar3 = *(int *)(lVar4 + 0x30);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_1473916c9:
  lVar2 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar2 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14739177c FUN_14739177c body=365 status=ok
// SIG undefined FUN_14739177c(void)

longlong FUN_14739177c(longlong *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  cVar2 = (**(code **)(*param_1 + 0x30))();
  if (cVar2 == '\0') {
    lVar4 = 0;
  }
  else {
    if ((int)param_1[0x26] != *(int *)((longlong)param_1 + 0x15c)) {
      lVar4 = *(longlong *)((longlong)param_1 + 0x22c);
      uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar7 = (uint)lVar4 & 0xffff;
      plVar3 = param_1 + 0x2c;
      if ((longlong *)param_1[0x2d] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[0x2d];
      }
      iVar5 = *(int *)((longlong)plVar3 +
                      (ulonglong)
                      ((int)param_1[0x2e] - 1U &
                      (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar7) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          lVar6 = param_1[0x25] + (longlong)iVar5 * 0x20;
          if (*(longlong *)(param_1[0x25] + (longlong)iVar5 * 0x20) == lVar4) goto LAB_1473917a1;
          iVar5 = *(int *)(lVar6 + 0x18);
        } while (iVar5 != -1);
      }
    }
    lVar6 = 0;
LAB_1473917a1:
    plVar3 = (longlong *)(lVar6 + 8);
    if (lVar6 == 0) {
      plVar3 = (longlong *)0x0;
    }
    if ((int)param_1[0x30] != *(int *)((longlong)param_1 + 0x1ac)) {
      lVar4 = *(longlong *)(*plVar3 + (longlong)param_2 * 8);
      uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar7 = (uint)lVar4 & 0xffff;
      plVar3 = param_1 + 0x36;
      if ((longlong *)param_1[0x37] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[0x37];
      }
      iVar5 = *(int *)((longlong)plVar3 +
                      (ulonglong)
                      ((int)param_1[0x38] - 1U &
                      (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar7) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          lVar6 = param_1[0x2f] + (longlong)iVar5 * 0x38;
          if (*(longlong *)(param_1[0x2f] + (longlong)iVar5 * 0x38) == lVar4) goto LAB_1473917c0;
          iVar5 = *(int *)(lVar6 + 0x30);
        } while (iVar5 != -1);
      }
    }
    lVar6 = 0;
LAB_1473917c0:
    lVar4 = lVar6 + 8;
    if (lVar6 == 0) {
      lVar4 = 0;
    }
  }
  return lVar4;
}



// FUNCTION 1473918ea FUN_1473918ea body=262 status=ok
// SIG undefined FUN_1473918ea(void)

undefined8 FUN_1473918ea(longlong param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(longlong *)(param_1 + 0x22c) == 0) {
    return 0;
  }
  cVar2 = FUN_144a846f6();
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x130) == *(int *)(param_1 + 0x15c)) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x22c);
  uVar1 = (uint)((ulonglong)lVar3 >> 0x10);
  uVar5 = (uint)lVar3 & 0xffff;
  lVar4 = param_1 + 0x160;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x168);
  }
  iVar6 = *(int *)(lVar4 + (ulonglong)
                           (*(int *)(param_1 + 0x170) - 1U &
                           (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
  if (iVar6 == -1) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x128);
  iVar8 = iVar6;
  while (lVar7 = lVar4 + (longlong)iVar8 * 0x20,
        *(longlong *)(lVar4 + (longlong)iVar8 * 0x20) != lVar3) {
    iVar8 = *(int *)(lVar7 + 0x18);
    if (iVar8 == -1) {
      return 0;
    }
  }
  if ((lVar7 + 8U & 0xfffffffffffffff7) == 0) {
    return 0;
  }
  do {
    lVar7 = lVar4 + (longlong)iVar6 * 0x20;
    if (*(longlong *)(lVar4 + (longlong)iVar6 * 0x20) == lVar3) goto LAB_1473919d2;
    iVar6 = *(int *)(lVar7 + 0x18);
  } while (iVar6 != -1);
  lVar7 = 0;
LAB_1473919d2:
  if (param_2 < 0) {
    return 0;
  }
  lVar3 = lVar7 + 8;
  if (lVar7 == 0) {
    lVar3 = 0;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),param_2 < *(int *)(lVar3 + 8));
}



// FUNCTION 1473919f0 FUN_1473919f0 body=30 status=ok
// SIG undefined FUN_1473919f0(void)

undefined8 FUN_1473919f0(void)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar1 = GetCurrentThreadId();
  uVar2 = 0;
  LOCK();
  bVar3 = DAT_14c867d18 == 0;
  if (!bVar3) {
    uVar2 = (ulonglong)DAT_14c867d18;
    uVar1 = DAT_14c867d18;
  }
  DAT_14c867d18 = uVar1;
  UNLOCK();
  return CONCAT71((int7)(uVar2 >> 8),bVar3);
}



// FUNCTION 147391a0e FUN_147391a0e body=93 status=ok
// SIG undefined FUN_147391a0e(void)

undefined8 FUN_147391a0e(longlong param_1)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449ee2a2(local_24,0,4);
  FUN_14318cb44(*(undefined8 *)(param_1 + 8));
  FUN_1449ee22a(local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147391a6c FUN_147391a6c body=25 status=ok
// SIG undefined FUN_147391a6c(void)

DWORD FUN_147391a6c(void)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = GetCurrentThreadId();
  LOCK();
  DVar2 = DAT_14c867d18;
  if (DVar1 == DAT_14c867d18) {
    DAT_14c867d18 = 0;
    DVar2 = DVar1;
  }
  UNLOCK();
  return DVar2;
}



// FUNCTION 147391a86 FUN_147391a86 body=780 status=ok
// SIG undefined FUN_147391a86(void)

void FUN_147391a86(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  float local_140;
  undefined1 **local_138;
  undefined1 local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((DAT_14c872bd8 == '\0') && (DAT_14c98e618 != (longlong *)0x0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)DAT_14c98e618[4] + 0x160))();
    EnterCriticalSection(lpCriticalSection);
    FUN_140c2d2b0(param_1[1],&local_98);
    fVar6 = (float)local_8c - fStack_94;
    fVar7 = local_90 - local_98;
    FUN_1405d28f8(DAT_14c98e618,1);
    local_7c = 0x3f800000;
    uStack_74 = 0x3f80000000000000;
    local_8c = 0;
    uStack_84 = 0;
    local_6c = 0;
    local_64 = 0;
    local_90 = 1.0;
    local_98 = fVar7;
    fStack_94 = fVar6;
    FUN_1405d299c(param_1[1],0x3f800000);
    local_e8 = (ulonglong)(uint)fStack_94 << 0x20;
    local_f8 = 0;
    local_f0 = (ulonglong)(uint)local_98;
    FUN_144b01024(&local_f8,local_a8);
    uVar5 = param_1[3];
    local_f8 = DAT_14c84635c;
    lVar4 = param_1[1];
    local_128 = *(undefined1 **)
                 (lVar4 + 0x390 + (ulonglong)(-(uint)(*(float *)(lVar4 + 0x398) != 0.0) & 1) * 8);
    FUN_144b016b8(lVar4,&local_b8);
    local_b0 = local_b8;
    FUN_14020e8f6(uVar5,&local_b0,&local_128,&local_f8);
    FUN_1401f5f92(param_1[3]);
    plVar3 = (longlong *)param_1[5];
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
    local_c8 = param_1[1];
    local_c0 = param_1[2];
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_1405d2af8(lVar4,&local_c8);
    FUN_14286930a(uVar5,*param_1);
    dVar1 = (double)DAT_14c98e618[0x7c];
    dVar2 = (double)DAT_14c98e618[0x7d];
    local_148 = (**(code **)(*DAT_14c98e618 + 0x60))();
    local_140 = (float)(dVar1 - dVar2);
    FUN_142877efe(&local_f8,0,param_1[3],CONCAT44((float)DAT_14c8463f8,(float)DAT_14c8463f0));
    local_130 = *(undefined1 *)(param_1[1] + 0x3a);
    local_128 = &DAT_3f8000003f800000;
    puStack_120 = &DAT_3f8000003f800000;
    local_118 = &DAT_3f8000003f800000;
    puStack_110 = &DAT_3f8000003f800000;
    local_108 = 0x3f19999a;
    uStack_104 = 0x3f19999a;
    uStack_100 = 0x3f19999a;
    uStack_fc = 0x3f19999a;
    local_140 = 0.0;
    local_148 = uVar5;
    local_138 = &local_128;
    FUN_14016eaf2(param_1[1],&local_f8,&local_98,local_a8);
    (**(code **)(*(longlong *)param_1[5] + 0x58))((longlong *)param_1[5],lVar4);
    *(float *)(lVar4 + 0x60) = (float)DAT_14c8463f0;
    *(float *)(lVar4 + 100) = (float)DAT_14c8463f8;
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147391d94 FUN_147391d94 body=228 status=ok
// SIG undefined FUN_147391d94(void)

undefined8 FUN_147391d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a356380;
  local_38[3] = param_3;
  local_38[4] = FUN_14738e1ba;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147391e7a FUN_147391e7a body=228 status=ok
// SIG undefined FUN_147391e7a(void)

undefined8 FUN_147391e7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14a356460;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a3563f0;
  local_38[3] = param_3;
  local_38[4] = &LAB_147391f60;
  FUN_1473941d0(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147391f80 FUN_147391f80 body=45 status=ok
// SIG undefined FUN_147391f80(void)

longlong FUN_147391f80(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145e2bc32(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147391fae FUN_147391fae body=32 status=ok
// SIG undefined FUN_147391fae(void)

undefined8 FUN_147391fae(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FPreLoadSettingsContainerBase");
  return param_2;
}



// FUNCTION 147391fce FUN_147391fce body=29 status=ok
// SIG undefined FUN_147391fce(void)

undefined8 FUN_147391fce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147391feb FUN_147391feb body=61 status=ok
// SIG undefined FUN_147391feb(void)

void FUN_147391feb(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147392028 FUN_147392028 body=29 status=ok
// SIG undefined FUN_147392028(void)

undefined8 FUN_147392028(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147392046 FUN_147392046 body=38 status=ok
// SIG undefined FUN_147392046(void)

undefined8 FUN_147392046(undefined8 param_1,int param_2)

{
  FUN_14739206c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14739206c FUN_14739206c body=90 status=ok
// SIG undefined FUN_14739206c(void)

void FUN_14739206c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a355fd0;
  param_1[0x4d] = &PTR_FUN_14a356230;
  plVar3 = (longlong *)param_1[0xd0];
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
  FUN_1402bbc34(param_1);
  return;
}



// FUNCTION 1473920c6 FUN_1473920c6 body=473 status=ok
// SIG undefined FUN_1473920c6(void)

void FUN_1473920c6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1473922a0 FUN_1473922a0 body=476 status=ok
// SIG undefined FUN_1473922a0(void)

void FUN_1473922a0(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 14739247e FUN_14739247e body=473 status=ok
// SIG undefined FUN_14739247e(void)

void FUN_14739247e(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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


