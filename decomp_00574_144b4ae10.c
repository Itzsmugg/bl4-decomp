// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144b4ae10 FUN_144b4ae10 body=158 status=ok
// SIG undefined FUN_144b4ae10(void)

undefined8 FUN_144b4ae10(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (DAT_14c7929a8 == '\0') {
    return 0x80920005;
  }
  if (4 < param_2 - 1U) {
    return 0x80920001;
  }
  iVar1 = FUN_1451684d0();
  if (iVar1 == 0) {
    iVar1 = FUN_14515b410(param_1,0);
    if (iVar1 < 0) {
      FUN_145168500();
      return 0x80920003;
    }
    iVar1 = FUN_14515a790(param_1,param_2);
    if (-1 < iVar1) {
      FUN_145168500();
      return 0;
    }
    FUN_145168500();
  }
  return 0x809200ff;
}



// FUNCTION 144b4aeb0 FUN_144b4aeb0 body=146 status=ok
// SIG undefined FUN_144b4aeb0(void)

undefined4 FUN_144b4aeb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18 [4];
  
  if (DAT_14c7929a8 == '\0') {
    return 0x80920005;
  }
  if (((param_2 != 0) || (param_3 != 0)) || (3 < param_1 - 1U)) {
    return 0x80920001;
  }
  iVar1 = FUN_1451684d0();
  if (iVar1 != 0) {
    return 0x809200ff;
  }
  iVar1 = FUN_14515b2e0(param_1,local_18,0);
  if (iVar1 < 0) {
    uVar2 = 0x80920004;
    if (iVar1 != -0x7ffeffff) {
      uVar2 = 0x809200ff;
    }
    FUN_145168500();
    return uVar2;
  }
  FUN_145168500();
  return local_18[0];
}



// FUNCTION 144b4af50 FUN_144b4af50 body=168 status=ok
// SIG undefined FUN_144b4af50(void)

undefined8 FUN_144b4af50(undefined8 *param_1)

{
  char cVar1;
  MMRESULT MVar2;
  longlong lVar3;
  uint uVar4;
  timecaps_tag local_res10 [3];
  
  if (DAT_14c7929a8 != '\0') {
    return 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    lVar3 = 0;
    do {
      if (*(char *)((longlong)param_1 + lVar3 + 0x14) != '\0') {
        return 0x80920001;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < 0x10);
    if (*(uint *)(param_1 + 2) < 2) {
      FUN_145164290(*param_1);
      FUN_1451642b0(param_1[1]);
      FUN_1451642d0(*(undefined4 *)(param_1 + 2));
      MVar2 = timeGetDevCaps(local_res10,8);
      uVar4 = 1;
      if ((MVar2 == 0) && (uVar4 = 1, 1 < local_res10[0].wPeriodMin)) {
        uVar4 = local_res10[0].wPeriodMin;
      }
      FUN_145164280(uVar4);
      cVar1 = FUN_145167f80();
      if (cVar1 != '\0') {
        DAT_14c7929a8 = 1;
        return 0;
      }
      return 0x809200ff;
    }
  }
  return 0x80920001;
}



// FUNCTION 144b4b000 GetDefaultSettings body=153 status=ok
// SIG void GetDefaultSettings(AkMemSettings * param_1)

/* void __cdecl AK::MemoryMgr::GetDefaultSettings(struct AkMemSettings & __ptr64) */

void __cdecl AK::MemoryMgr::GetDefaultSettings(AkMemSettings *param_1)

{
                    /* 0x4b4b000  79  ?GetDefaultSettings@MemoryMgr@AK@@YAXAEAUAkMemSettings@@@Z */
  *(undefined4 *)(param_1 + 0xc0) = 2;
  *(undefined8 *)param_1 = 0;
  *(undefined1 **)(param_1 + 0x58) = &LAB_144d4ed10;
  *(undefined1 **)(param_1 + 0x60) = &LAB_144d4ed30;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x50] = (AkMemSettings)0x0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 2;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 144b4b0a0 SetBusConfig body=101 status=ok
// SIG AKRESULT SetBusConfig(uint param_1, AkChannelConfig param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetBusConfig(unsigned int,struct AkChannelConfig) */

AKRESULT __cdecl AK::SoundEngine::SetBusConfig(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4b4b0a0  268
                       ?SetBusConfig@SoundEngine@AK@@YA?AW4AKRESULT@@IUAkChannelConfig@@@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_1450880a0();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x30,uVar1);
  *(undefined4 *)(lVar2 + 8) = param_2;
  *(undefined4 *)(lVar2 + 4) = param_1;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144b4b110 GetIDFromString body=214 status=ok
// SIG uint GetIDFromString(wchar_t * param_1)

/* unsigned int __cdecl AK::SoundEngine::GetIDFromString(wchar_t const * __ptr64) */

uint __cdecl AK::SoundEngine::GetIDFromString(wchar_t *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  byte local_118 [259];
  undefined1 local_15;
  
                    /* 0x4b4b110  96  ?GetIDFromString@SoundEngine@AK@@YAIPEB_W@Z */
  if (param_1 == (wchar_t *)0x0) {
    return 0;
  }
  lVar6 = -1;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_1[lVar5] != L'\0');
  if ((uint)lVar5 < 0x102) {
    do {
      lVar6 = lVar6 + 1;
    } while (param_1[lVar6] != L'\0');
  }
  else {
    lVar6 = 0x102;
  }
  iVar3 = WideCharToMultiByte(0xfde9,0,param_1,(int)lVar6,(LPSTR)local_118,0x103,(LPCSTR)0x0,
                              (LPBOOL)0x0);
  pbVar1 = local_118;
  uVar4 = 0x811c9dc5;
  local_118[iVar3] = 0;
  local_15 = 0;
  while (local_118[0] != 0) {
    pbVar1 = pbVar1 + 1;
    bVar2 = local_118[0] + 0x20;
    if (0x19 < (byte)(local_118[0] + 0xbf)) {
      bVar2 = local_118[0];
    }
    uVar4 = uVar4 * 0x1000193 ^ (uint)bVar2;
    local_118[0] = *pbVar1;
  }
  return uVar4;
}



// FUNCTION 144b4b1f0 FUN_144b4b1f0 body=258 status=ok
// SIG undefined FUN_144b4b1f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_144b4b1f0(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_14c792940 != 0) {
    return DAT_14c792944;
  }
  if (param_2 == (undefined8 *)0x0) {
    _DAT_14c792480 = 0;
    _DAT_14c792488 = 0;
    _DAT_14c792490 = 0;
    _DAT_14c792498 = 0;
    _DAT_14c7924a0 = 0;
    _DAT_14c7924a8 = 0;
    _DAT_14c7924b0 = 0;
  }
  else {
    _DAT_14c792480 = *param_2;
    _DAT_14c792488 = param_2[1];
    _DAT_14c792490 = param_2[2];
    _DAT_14c792498 = param_2[3];
    _DAT_14c7924a0 = param_2[4];
    _DAT_14c7924a8 = param_2[5];
    _DAT_14c7924b0 = param_2[6];
  }
  FUN_145140e50(&DAT_14c792480);
  iVar1 = FUN_144d6ec30();
  if (iVar1 != 0) {
    DAT_14c792940 = 1;
    DAT_14c792944 = 0;
    DAT_14c707864 = param_3;
    DAT_14c7922b8 = param_1;
    iVar1 = FUN_144d6eb80();
    if (iVar1 != 0) {
      DAT_14c792944 = 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144b4b300 compress2 body=245 status=ok
// SIG undefined compress2(void)

/* WARNING: Removing unreachable block (ram,0x000144b4b37f) */
/* WARNING: Removing unreachable block (ram,0x000144b4b390) */
/* Library Function - Single Match
    compress2
   
   Library: Visual Studio 2019 Release */

ulonglong compress2(undefined8 param_1,uint *param_2,undefined8 param_3,uint param_4,
                   undefined4 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar4 = *param_2;
  uVar5 = 0;
  *param_2 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uVar2 = deflateInit_(&local_78,param_5,&DAT_14996cb70,0x58);
  if ((int)uVar2 == 0) {
    local_60 = 0;
    local_70 = 0;
    uVar2 = uVar5;
    uVar3 = uVar5;
    local_78 = param_3;
    local_68 = param_1;
    while( true ) {
      uVar1 = uVar4;
      if ((int)uVar2 == 0) {
        uVar1 = 0;
        local_60 = uVar4;
      }
      uVar4 = uVar1;
      uVar1 = param_4;
      if ((int)uVar3 == 0) {
        uVar1 = 0;
        local_70 = param_4;
      }
      param_4 = uVar1;
      uVar2 = 4;
      if (param_4 != 0) {
        uVar2 = uVar5;
      }
      uVar1 = FUN_144b4c2e0(&local_78,uVar2);
      if (uVar1 != 0) break;
      uVar2 = (ulonglong)local_60;
      uVar3 = (ulonglong)local_70;
    }
    *param_2 = local_5c;
    FUN_144b4cd70(&local_78);
    uVar2 = (ulonglong)uVar1;
    if (uVar1 == 1) {
      uVar2 = uVar5;
    }
  }
  return uVar2;
}



// FUNCTION 144b4b400 FUN_144b4b400 body=23 status=ok
// SIG undefined FUN_144b4b400(void)

int FUN_144b4b400(uint param_1)

{
  return (param_1 >> 0xe) + param_1 + (param_1 >> 0x19) + (param_1 >> 0xc) + 0xd;
}



// FUNCTION 144b4b420 FUN_144b4b420 body=1163 status=ok
// SIG undefined FUN_144b4b420(void)

byte FUN_144b4b420(longlong *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  uVar5 = (int)param_1[3] - 5;
  uVar12 = *(uint *)((longlong)param_1 + 0x44);
  if (uVar5 <= *(uint *)((longlong)param_1 + 0x44)) {
    uVar12 = uVar5;
  }
  iVar9 = 0;
  iVar10 = *(int *)(*param_1 + 8);
  do {
    uVar6 = (int)param_1[0x2e2] + 0x2a >> 3;
    uVar5 = *(uint *)(*param_1 + 0x18);
    if (uVar5 < uVar6) break;
    uVar5 = uVar5 - uVar6;
    uVar11 = *(int *)((longlong)param_1 + 0x94) - *(int *)((longlong)param_1 + 0x84);
    iVar2 = *(int *)(*param_1 + 8);
    uVar6 = 0xffff;
    if (iVar2 + uVar11 < 0xffff) {
      uVar6 = iVar2 + uVar11;
    }
    if (uVar5 < uVar6) {
      uVar6 = uVar5;
    }
    if (uVar6 < uVar12) {
      if (uVar6 == 0) {
        if (param_2 != 4) break;
      }
      else if (param_2 == 0) break;
      if (uVar6 != iVar2 + uVar11) break;
    }
    if ((param_2 == 4) && (uVar6 == iVar2 + uVar11)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    FUN_144d8e8a0(param_1,0,0,iVar9);
    *(byte *)((ulonglong)((int)param_1[5] - 4) + param_1[2]) = (byte)uVar6;
    bVar8 = (byte)(uVar6 >> 8);
    *(byte *)((ulonglong)((int)param_1[5] - 3) + param_1[2]) = bVar8;
    *(byte *)((ulonglong)((int)param_1[5] - 2) + param_1[2]) = ~(byte)uVar6;
    *(byte *)((ulonglong)((int)param_1[5] - 1) + param_1[2]) = ~bVar8;
    lVar3 = *param_1;
    lVar4 = *(longlong *)(lVar3 + 0x28);
    bi_flush(lVar4);
    uVar5 = *(uint *)(lVar3 + 0x18);
    if (*(uint *)(lVar4 + 0x28) <= *(uint *)(lVar3 + 0x18)) {
      uVar5 = *(uint *)(lVar4 + 0x28);
    }
    if (uVar5 != 0) {
      memcpy(*(void **)(lVar3 + 0x10),*(void **)(lVar4 + 0x20),(ulonglong)uVar5);
      *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + (ulonglong)uVar5;
      *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + (ulonglong)uVar5;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + uVar5;
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) - uVar5;
      piVar1 = (int *)(lVar4 + 0x28);
      *piVar1 = *piVar1 - uVar5;
      if (*piVar1 == 0) {
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
      }
    }
    if (uVar11 != 0) {
      if (uVar6 < uVar11) {
        uVar11 = uVar6;
      }
      memcpy(*(void **)(*param_1 + 0x10),
             (void *)((longlong)*(int *)((longlong)param_1 + 0x84) + param_1[10]),(ulonglong)uVar11)
      ;
      *(longlong *)(*param_1 + 0x10) = *(longlong *)(*param_1 + 0x10) + (ulonglong)uVar11;
      *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) - uVar11;
      *(int *)(*param_1 + 0x1c) = *(int *)(*param_1 + 0x1c) + uVar11;
      *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) + uVar11;
      uVar6 = uVar6 - uVar11;
    }
    if (uVar6 != 0) {
      read_buf(*param_1,*(undefined8 *)(*param_1 + 0x10),uVar6);
      *(longlong *)(*param_1 + 0x10) = *(longlong *)(*param_1 + 0x10) + (ulonglong)uVar6;
      *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) - uVar6;
      *(int *)(*param_1 + 0x1c) = *(int *)(*param_1 + 0x1c) + uVar6;
    }
  } while (iVar9 == 0);
  uVar12 = iVar10 - (int)((longlong *)*param_1)[1];
  if (uVar12 != 0) {
    uVar5 = *(uint *)((longlong)param_1 + 0x44);
    if (uVar12 < uVar5) {
      uVar6 = *(uint *)((longlong)param_1 + 0x94);
      uVar7 = (ulonglong)uVar6;
      if ((int)param_1[0xb] - uVar6 <= uVar12) {
        *(uint *)((longlong)param_1 + 0x94) = uVar6 - uVar5;
        memcpy((void *)param_1[10],(void *)((ulonglong)uVar5 + param_1[10]),
               (ulonglong)(uVar6 - uVar5));
        if (*(uint *)((longlong)param_1 + 0x1704) < 2) {
          *(uint *)((longlong)param_1 + 0x1704) = *(uint *)((longlong)param_1 + 0x1704) + 1;
        }
        uVar5 = *(uint *)((longlong)param_1 + 0x94);
        uVar7 = (ulonglong)uVar5;
        if (uVar5 < *(uint *)(param_1 + 0x2e1)) {
          *(uint *)(param_1 + 0x2e1) = uVar5;
        }
      }
      memcpy((void *)(uVar7 + param_1[10]),(void *)(*(longlong *)*param_1 - (ulonglong)uVar12),
             (ulonglong)uVar12);
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + uVar12;
      uVar5 = *(int *)((longlong)param_1 + 0x44) - (int)param_1[0x2e1];
      if (uVar5 < uVar12) {
        uVar12 = uVar5;
      }
      iVar10 = uVar12 + (int)param_1[0x2e1];
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x1704) = 2;
      memcpy((void *)param_1[10],(void *)(*(longlong *)*param_1 - (ulonglong)uVar5),(ulonglong)uVar5
            );
      iVar10 = *(int *)((longlong)param_1 + 0x44);
      *(int *)((longlong)param_1 + 0x94) = iVar10;
    }
    *(int *)(param_1 + 0x2e1) = iVar10;
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
  }
  uVar12 = *(uint *)((longlong)param_1 + 0x94);
  uVar7 = (ulonglong)uVar12;
  if (*(uint *)((longlong)param_1 + 0x1714) < uVar12) {
    *(uint *)((longlong)param_1 + 0x1714) = uVar12;
  }
  if (iVar9 != 0) {
    return 3;
  }
  if ((((param_2 & 0xfffffffb) != 0) && (*(int *)(*param_1 + 8) == 0)) &&
     (uVar12 == *(uint *)((longlong)param_1 + 0x84))) {
    return 1;
  }
  uVar5 = (int)param_1[0xb] - uVar12;
  if (uVar5 < *(uint *)(*param_1 + 8)) {
    uVar6 = *(uint *)((longlong)param_1 + 0x44);
    if ((int)uVar6 <= *(int *)((longlong)param_1 + 0x84)) {
      *(uint *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) - uVar6;
      *(uint *)((longlong)param_1 + 0x94) = uVar12 - uVar6;
      memcpy((void *)param_1[10],(void *)(param_1[10] + (ulonglong)uVar6),
             (ulonglong)(uVar12 - uVar6));
      if (*(uint *)((longlong)param_1 + 0x1704) < 2) {
        *(uint *)((longlong)param_1 + 0x1704) = *(uint *)((longlong)param_1 + 0x1704) + 1;
      }
      uVar5 = uVar5 + *(int *)((longlong)param_1 + 0x44);
      uVar12 = *(uint *)((longlong)param_1 + 0x94);
      uVar7 = (ulonglong)uVar12;
      if (uVar12 < *(uint *)(param_1 + 0x2e1)) {
        *(uint *)(param_1 + 0x2e1) = uVar12;
      }
    }
  }
  uVar12 = *(uint *)(*param_1 + 8);
  if (uVar5 <= uVar12) {
    uVar12 = uVar5;
  }
  if (uVar12 != 0) {
    read_buf(*param_1,uVar7 + param_1[10],uVar12);
    uVar6 = *(int *)((longlong)param_1 + 0x94) + uVar12;
    uVar7 = (ulonglong)uVar6;
    uVar5 = *(int *)((longlong)param_1 + 0x44) - (int)param_1[0x2e1];
    *(uint *)((longlong)param_1 + 0x94) = uVar6;
    if (uVar5 < uVar12) {
      uVar12 = uVar5;
    }
    *(uint *)(param_1 + 0x2e1) = uVar12 + (int)param_1[0x2e1];
  }
  uVar12 = (uint)uVar7;
  if (*(uint *)((longlong)param_1 + 0x1714) < uVar12) {
    *(uint *)((longlong)param_1 + 0x1714) = uVar12;
  }
  uVar5 = (int)param_1[3] - ((int)param_1[0x2e2] + 0x2a >> 3);
  if (0xffff < uVar5) {
    uVar5 = 0xffff;
  }
  uVar12 = uVar12 - *(int *)((longlong)param_1 + 0x84);
  uVar6 = *(uint *)((longlong)param_1 + 0x44);
  if (uVar5 <= *(uint *)((longlong)param_1 + 0x44)) {
    uVar6 = uVar5;
  }
  if (uVar12 < uVar6) {
    iVar10 = 0;
    if (uVar12 == 0) {
      if (param_2 != 4) goto LAB_144b4b88e;
    }
    else if (param_2 == 0) goto LAB_144b4b88e;
    if ((*(int *)(*param_1 + 8) != 0) || (uVar5 < uVar12)) goto LAB_144b4b88e;
  }
  uVar6 = uVar12;
  if (uVar5 < uVar12) {
    uVar6 = uVar5;
  }
  if (((param_2 == 4) && (*(int *)(*param_1 + 8) == 0)) && (uVar6 == uVar12)) {
    iVar10 = 1;
  }
  else {
    iVar10 = 0;
  }
  FUN_144d8e8a0(param_1,(longlong)*(int *)((longlong)param_1 + 0x84) + param_1[10],uVar6,iVar10);
  *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) + uVar6;
  FUN_144b4e060(*param_1);
LAB_144b4b88e:
  return -(iVar10 != 0) & 2;
}



// FUNCTION 144b4b8b0 FUN_144b4b8b0 body=1209 status=ok
// SIG undefined FUN_144b4b8b0(void)

char FUN_144b4b8b0(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  short *psVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  short sVar9;
  ushort uVar10;
  uint uVar11;
  byte bVar12;
  uint *puVar13;
  bool bVar14;
  
  lVar8 = 0;
  do {
    uVar11 = *(uint *)((longlong)param_1 + 0x9c);
    if (uVar11 < 0x106) {
      FUN_144b4ddd0(param_1);
      uVar11 = *(uint *)((longlong)param_1 + 0x9c);
      if ((uVar11 < 0x106) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar11 == 0) {
        uVar11 = *(uint *)((longlong)param_1 + 0x94);
        uVar6 = 2;
        if (uVar11 < 2) {
          uVar6 = uVar11;
        }
        *(uint *)(param_1 + 0x2e1) = uVar6;
        if (param_2 == 4) {
          uVar6 = *(uint *)((longlong)param_1 + 0x84);
          if (-1 < (int)uVar6) {
            lVar8 = (ulonglong)uVar6 + param_1[10];
          }
          FUN_144d8e440(param_1,lVar8,uVar11 - uVar6,1);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          FUN_144b4e060(*param_1);
          return (*(int *)(*param_1 + 0x18) != 0) + '\x02';
        }
        if (*(int *)((longlong)param_1 + 0x16f4) != 0) {
          uVar6 = *(uint *)((longlong)param_1 + 0x84);
          if (-1 < (int)uVar6) {
            lVar8 = (ulonglong)uVar6 + param_1[10];
          }
          FUN_144d8e440(param_1,lVar8,uVar11 - uVar6,0);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          FUN_144b4e060(*param_1);
          if (*(int *)(*param_1 + 0x18) == 0) {
            return '\0';
          }
        }
        return '\x01';
      }
    }
    puVar13 = (uint *)((longlong)param_1 + 0x94);
    if (2 < uVar11) {
      uVar11 = ((uint)*(byte *)((ulonglong)(*puVar13 + 2) + param_1[10]) ^
               (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
               *(uint *)((longlong)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar11;
      *(undefined2 *)
       (param_1[0xc] + (ulonglong)(*puVar13 & *(uint *)((longlong)param_1 + 0x4c)) * 2) =
           *(undefined2 *)(param_1[0xd] + (ulonglong)uVar11 * 2);
      uVar10 = *(ushort *)
                (param_1[0xc] + (ulonglong)(*puVar13 & *(uint *)((longlong)param_1 + 0x4c)) * 2);
      *(short *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) = (short)*puVar13;
      if ((uVar10 != 0) && (*puVar13 - (uint)uVar10 <= *(int *)((longlong)param_1 + 0x44) - 0x106U))
      {
        uVar5 = FUN_144b4e0e0(param_1);
        *(undefined4 *)(param_1 + 0x11) = uVar5;
      }
    }
    if (*(uint *)(param_1 + 0x11) < 3) {
      bVar12 = *(byte *)((ulonglong)*puVar13 + param_1[10]);
      *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 0;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 0;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar12;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar3 = (short *)((longlong)param_1 + (ulonglong)bVar12 * 4 + 0xbc);
      *psVar3 = *psVar3 + 1;
      bVar14 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2df];
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
      uVar11 = *(int *)((longlong)param_1 + 0x94) + 1;
      *(uint *)((longlong)param_1 + 0x94) = uVar11;
    }
    else {
      bVar12 = (char)*(uint *)(param_1 + 0x11) - 3;
      sVar9 = *(short *)puVar13 - (short)param_1[0x13];
      *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = (char)sVar9;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      uVar10 = sVar9 - 1;
      *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) =
           (char)((ushort)sVar9 >> 8);
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar12;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar3 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_1499fe690)[bVar12] * 4 + 0x4c0);
      *psVar3 = *psVar3 + 1;
      if (uVar10 < 0x100) {
        bVar12 = (&DAT_1499fe790)[uVar10];
      }
      else {
        bVar12 = (&DAT_1499fe890)[uVar10 >> 7];
      }
      psVar3 = (short *)((longlong)param_1 + (ulonglong)bVar12 * 4 + 0x9b0);
      *psVar3 = *psVar3 + 1;
      bVar14 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2df];
      uVar11 = *(uint *)(param_1 + 0x11);
      uVar6 = *(int *)((longlong)param_1 + 0x9c) - uVar11;
      *(uint *)((longlong)param_1 + 0x9c) = uVar6;
      if ((*(uint *)(param_1 + 0x15) < uVar11) || (uVar6 < 3)) {
        uVar11 = *(int *)((longlong)param_1 + 0x94) + uVar11;
        *(uint *)((longlong)param_1 + 0x94) = uVar11;
        *(undefined4 *)(param_1 + 0x11) = 0;
        uVar6 = (uint)*(byte *)((ulonglong)uVar11 + param_1[10]);
        *(uint *)(param_1 + 0xe) = uVar6;
        *(uint *)(param_1 + 0xe) =
             (uVar6 << ((byte)(int)param_1[0x10] & 0x1f) ^
             (uint)*(byte *)((ulonglong)(uVar11 + 1) + param_1[10])) &
             *(uint *)((longlong)param_1 + 0x7c);
      }
      else {
        *(uint *)(param_1 + 0x11) = uVar11 - 1;
        do {
          *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
          uVar11 = ((uint)*(byte *)((ulonglong)(*(uint *)((longlong)param_1 + 0x94) + 2) +
                                   param_1[10]) ^
                   (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
                   *(uint *)((longlong)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar11;
          *(undefined2 *)
           (param_1[0xc] +
           (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & *(uint *)((longlong)param_1 + 0x94)) *
           2) = *(undefined2 *)(param_1[0xd] + (ulonglong)uVar11 * 2);
          *(undefined2 *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) =
               *(undefined2 *)((longlong)param_1 + 0x94);
          plVar2 = param_1 + 0x11;
          *(int *)plVar2 = (int)*plVar2 + -1;
        } while ((int)*plVar2 != 0);
        uVar11 = *(int *)((longlong)param_1 + 0x94) + 1;
        *(uint *)((longlong)param_1 + 0x94) = uVar11;
      }
    }
    if (bVar14) {
      uVar6 = *(uint *)((longlong)param_1 + 0x84);
      lVar7 = lVar8;
      if (-1 < (int)uVar6) {
        lVar7 = (ulonglong)uVar6 + param_1[10];
      }
      FUN_144d8e440(param_1,lVar7,uVar11 - uVar6,0);
      lVar7 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      lVar4 = *(longlong *)(lVar7 + 0x28);
      bi_flush(lVar4);
      uVar11 = *(uint *)(lVar7 + 0x18);
      if (*(uint *)(lVar4 + 0x28) <= *(uint *)(lVar7 + 0x18)) {
        uVar11 = *(uint *)(lVar4 + 0x28);
      }
      if (uVar11 != 0) {
        memcpy(*(void **)(lVar7 + 0x10),*(void **)(lVar4 + 0x20),(ulonglong)uVar11);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + (ulonglong)uVar11;
        *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + (ulonglong)uVar11;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + uVar11;
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) - uVar11;
        piVar1 = (int *)(lVar4 + 0x28);
        *piVar1 = *piVar1 - uVar11;
        if (*piVar1 == 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return '\0';
      }
    }
  } while( true );
}



// FUNCTION 144b4bd70 FUN_144b4bd70 body=1392 status=ok
// SIG undefined FUN_144b4bd70(void)

char FUN_144b4bd70(longlong *param_1,int param_2)

{
  longlong *plVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  short sVar11;
  short sVar12;
  ushort uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  
  uVar8 = 0;
  uVar9 = 2;
  do {
    uVar14 = *(uint *)((longlong)param_1 + 0x9c);
    if (uVar14 < 0x106) {
      FUN_144b4ddd0(param_1);
      uVar14 = *(uint *)((longlong)param_1 + 0x9c);
      if ((uVar14 < 0x106) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar14 == 0) {
        if ((int)param_1[0x12] != 0) {
          bVar15 = *(byte *)((ulonglong)(*(uint *)((longlong)param_1 + 0x94) - 1) + param_1[10]);
          *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 0;
          *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
          *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 0;
          *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
          *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar15;
          *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
          psVar2 = (short *)((longlong)param_1 + (ulonglong)bVar15 * 4 + 0xbc);
          *psVar2 = *psVar2 + 1;
          *(undefined4 *)(param_1 + 0x12) = 0;
        }
        uVar14 = *(uint *)((longlong)param_1 + 0x94);
        if (uVar14 < 2) {
          uVar9 = uVar14;
        }
        *(uint *)(param_1 + 0x2e1) = uVar9;
        if (param_2 != 4) {
          if (*(int *)((longlong)param_1 + 0x16f4) != 0) {
            uVar9 = *(uint *)((longlong)param_1 + 0x84);
            if (-1 < (int)uVar9) {
              uVar8 = (ulonglong)uVar9 + param_1[10];
            }
            FUN_144d8e440(param_1,uVar8,uVar14 - uVar9,0);
            *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
            FUN_144b4e060(*param_1);
            if (*(int *)(*param_1 + 0x18) == 0) {
              return '\0';
            }
          }
          return '\x01';
        }
        uVar9 = *(uint *)((longlong)param_1 + 0x84);
        if (-1 < (int)uVar9) {
          uVar8 = (ulonglong)uVar9 + param_1[10];
        }
        FUN_144d8e440(param_1,uVar8,uVar14 - uVar9,1);
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        FUN_144b4e060(*param_1);
        return (*(int *)(*param_1 + 0x18) != 0) + '\x02';
      }
    }
    puVar10 = (uint *)((longlong)param_1 + 0x94);
    uVar7 = uVar8;
    if (2 < uVar14) {
      uVar14 = ((uint)*(byte *)((ulonglong)(*puVar10 + 2) + param_1[10]) ^
               (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
               *(uint *)((longlong)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar14;
      *(undefined2 *)
       (param_1[0xc] + (ulonglong)(*puVar10 & *(uint *)((longlong)param_1 + 0x4c)) * 2) =
           *(undefined2 *)(param_1[0xd] + (ulonglong)uVar14 * 2);
      uVar7 = (ulonglong)
              *(ushort *)
               (param_1[0xc] + (ulonglong)(*puVar10 & *(uint *)((longlong)param_1 + 0x4c)) * 2);
      *(short *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) = (short)*puVar10;
    }
    uVar14 = *(uint *)(param_1 + 0x11);
    *(uint *)(param_1 + 0x14) = uVar14;
    *(int *)((longlong)param_1 + 0x8c) = (int)param_1[0x13];
    *(undefined4 *)(param_1 + 0x11) = 2;
    uVar6 = uVar9;
    if ((((int)uVar7 != 0) && (uVar14 < *(uint *)(param_1 + 0x15))) &&
       (uVar6 = 2, *puVar10 - (int)uVar7 <= *(int *)((longlong)param_1 + 0x44) - 0x106U)) {
      uVar6 = FUN_144b4e0e0(param_1,uVar7);
      *(uint *)(param_1 + 0x11) = uVar6;
      if ((uVar6 < 6) &&
         (((int)param_1[0x16] == 1 ||
          ((uVar6 == 3 && (0x1000 < (uint)(*(int *)((longlong)param_1 + 0x94) - (int)param_1[0x13]))
           ))))) {
        *(undefined4 *)(param_1 + 0x11) = 2;
        uVar6 = 2;
      }
    }
    uVar14 = *(uint *)(param_1 + 0x14);
    if ((uVar14 < 3) || (uVar14 < uVar6)) {
      iVar3 = *(int *)((longlong)param_1 + 0x94);
      if ((int)param_1[0x12] == 0) {
        *(undefined4 *)(param_1 + 0x12) = 1;
        *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
        *(int *)((longlong)param_1 + 0x94) = iVar3 + 1;
      }
      else {
        bVar15 = *(byte *)((ulonglong)(iVar3 - 1) + param_1[10]);
        *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 0;
        *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
        *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 0;
        *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
        *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar15;
        *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
        psVar2 = (short *)((longlong)param_1 + (ulonglong)bVar15 * 4 + 0xbc);
        *psVar2 = *psVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2df]) {
          uVar14 = *(uint *)((longlong)param_1 + 0x84);
          uVar7 = uVar8;
          if (-1 < (int)uVar14) {
            uVar7 = (ulonglong)uVar14 + param_1[10];
          }
          FUN_144d8e440(param_1,uVar7,*(int *)((longlong)param_1 + 0x94) - uVar14,0);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          FUN_144b4e060(*param_1);
        }
        *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
        *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
        if (*(int *)(*param_1 + 0x18) == 0) {
          return '\0';
        }
      }
    }
    else {
      puVar10 = (uint *)((longlong)param_1 + 0x94);
      uVar6 = *puVar10;
      bVar15 = (char)uVar14 - 3;
      iVar3 = *(int *)((longlong)param_1 + 0x9c);
      sVar11 = (short)uVar6 - *(short *)((longlong)param_1 + 0x8c);
      sVar12 = sVar11 + -1;
      *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = (char)sVar12;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) =
           (char)((ushort)sVar12 >> 8);
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar15;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      uVar13 = sVar11 - 2;
      psVar2 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_1499fe690)[bVar15] * 4 + 0x4c0);
      *psVar2 = *psVar2 + 1;
      if (uVar13 < 0x100) {
        bVar15 = (&DAT_1499fe790)[uVar13];
      }
      else {
        bVar15 = (&DAT_1499fe890)[uVar13 >> 7];
      }
      psVar2 = (short *)((longlong)param_1 + (ulonglong)bVar15 * 4 + 0x9b0);
      *psVar2 = *psVar2 + 1;
      *(int *)((longlong)param_1 + 0x9c) =
           *(int *)((longlong)param_1 + 0x9c) + (1 - (int)param_1[0x14]);
      iVar4 = *(int *)((longlong)param_1 + 0x16f4);
      lVar5 = param_1[0x2df];
      *(int *)(param_1 + 0x14) = (int)param_1[0x14] + -2;
      do {
        uVar14 = *puVar10;
        uVar16 = uVar14 + 1;
        *puVar10 = uVar16;
        if (uVar16 <= iVar3 + -3 + uVar6) {
          uVar14 = ((int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f) ^
                   (uint)*(byte *)((ulonglong)(uVar14 + 3) + param_1[10])) &
                   *(uint *)((longlong)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar14;
          *(undefined2 *)
           (param_1[0xc] + (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & uVar16) * 2) =
               *(undefined2 *)(param_1[0xd] + (ulonglong)uVar14 * 2);
          *(undefined2 *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) =
               *(undefined2 *)puVar10;
          uVar16 = *puVar10;
        }
        plVar1 = param_1 + 0x14;
        *(int *)plVar1 = (int)*plVar1 + -1;
      } while ((int)*plVar1 != 0);
      *(undefined4 *)(param_1 + 0x12) = 0;
      *(uint *)((longlong)param_1 + 0x94) = uVar16 + 1;
      *(undefined4 *)(param_1 + 0x11) = 2;
      if (iVar4 == (int)lVar5) {
        uVar14 = *(uint *)((longlong)param_1 + 0x84);
        uVar7 = uVar8;
        if (-1 < (int)uVar14) {
          uVar7 = (ulonglong)uVar14 + param_1[10];
        }
        FUN_144d8e440(param_1,uVar7,(uVar16 + 1) - uVar14,0);
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        FUN_144b4e060(*param_1);
        if (*(int *)(*param_1 + 0x18) == 0) {
          return '\0';
        }
      }
    }
  } while( true );
}



// FUNCTION 144b4c2e0 FUN_144b4c2e0 body=2696 status=ok
// SIG undefined FUN_144b4c2e0(void)

uint FUN_144b4c2e0(longlong *param_1,uint param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar13;
  
  if ((((param_1 == (longlong *)0x0) || (param_1[6] == 0)) || (param_1[7] == 0)) ||
     ((plVar4 = (longlong *)param_1[5], plVar4 == (longlong *)0x0 ||
      ((longlong *)*plVar4 != param_1)))) {
    return 0xfffffffe;
  }
  iVar14 = (int)plVar4[1];
  if (((0x3d < iVar14 - 0x2aU) ||
      ((0x2002000088008001U >> ((ulonglong)(iVar14 - 0x2aU) & 0x3f) & 1) == 0)) &&
     ((iVar14 != 0x71 && (iVar14 != 0x29a)))) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  lVar5 = param_1[5];
  if (((param_1[2] == 0) || (((int)param_1[1] != 0 && (*param_1 == 0)))) ||
     ((*(int *)(lVar5 + 8) == 0x29a && (param_2 != 4)))) {
    param_1[4] = (longlong)"stream error";
    return 0xfffffffe;
  }
  if ((int)param_1[3] == 0) goto LAB_144b4c438;
  iVar14 = *(int *)(lVar5 + 0x40);
  uVar13 = 0;
  iVar12 = 0;
  *(uint *)(lVar5 + 0x40) = param_2;
  uVar15 = 0;
  if (*(int *)(lVar5 + 0x28) == 0) {
    if ((int)param_1[1] == 0) {
      uVar8 = uVar15;
      if (4 < iVar14) {
        uVar8 = 9;
      }
      if (4 < (int)param_2) {
        iVar12 = 9;
      }
      if (((int)(param_2 * 2 - iVar12) <= (int)(iVar14 * 2 - uVar8)) && (param_2 != 4))
      goto LAB_144b4c438;
    }
LAB_144b4c425:
    if (*(int *)(lVar5 + 8) == 0x29a) {
      if ((int)param_1[1] != 0) {
LAB_144b4c438:
        param_1[4] = (longlong)"buffer error";
        return 0xfffffffb;
      }
    }
    else if (*(int *)(lVar5 + 8) == 0x2a) {
      if (*(int *)(lVar5 + 0x2c) == 0) {
        *(undefined4 *)(lVar5 + 8) = 0x71;
      }
      else {
        if ((*(int *)(lVar5 + 0xb0) < 2) && (iVar14 = *(int *)(lVar5 + 0xac), 1 < iVar14)) {
          if (iVar14 < 6) {
            uVar11 = 0x60;
            uVar8 = 0x40;
          }
          else if (iVar14 == 6) {
            uVar11 = 0xa0;
            uVar8 = 0x80;
          }
          else {
            uVar11 = 0xe0;
            uVar8 = 0xc0;
          }
        }
        else {
          uVar11 = 0x20;
          uVar8 = uVar15;
        }
        if (*(int *)(lVar5 + 0x94) != 0) {
          uVar8 = uVar11;
        }
        iVar14 = ((*(int *)(lVar5 + 0x48) * 0x1000 - 0x7800U | uVar8) / 0x1f + 1) * 0x1f;
        *(char *)((ulonglong)*(uint *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x10)) =
             (char)((uint)iVar14 >> 8);
        *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + 1;
        *(char *)((ulonglong)*(uint *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x10)) = (char)iVar14;
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        if (*(int *)(lVar5 + 0x94) != 0) {
          uVar2 = *(undefined2 *)((longlong)param_1 + 0x4e);
          *(char *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) = (char)((ushort)uVar2 >> 8);
          *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + 1;
          *(char *)((ulonglong)*(uint *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x10)) = (char)uVar2;
          *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + 1;
          uVar2 = *(undefined2 *)((longlong)param_1 + 0x4c);
          *(char *)((ulonglong)*(uint *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x10)) =
               (char)((ushort)uVar2 >> 8);
          *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + 1;
          *(char *)((ulonglong)*(uint *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x10)) = (char)uVar2;
          *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + 1;
        }
        uVar7 = FUN_144d90020(0,0,0);
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
        *(undefined4 *)(lVar5 + 8) = 0x71;
        FUN_144b4e060(param_1);
        if (*(int *)(lVar5 + 0x28) != 0) goto LAB_144b4c3c9;
      }
    }
    if (*(int *)(lVar5 + 8) == 0x39) {
      uVar7 = FUN_144d90310(0,0,0);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
      *(undefined1 *)((ulonglong)*(uint *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x10)) = 0x1f;
      uVar8 = *(int *)(lVar5 + 0x28) + 1;
      *(uint *)(lVar5 + 0x28) = uVar8;
      *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) = 0x8b;
      uVar8 = *(int *)(lVar5 + 0x28) + 1;
      *(uint *)(lVar5 + 0x28) = uVar8;
      *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) = 8;
      piVar6 = *(int **)(lVar5 + 0x30);
      uVar8 = *(int *)(lVar5 + 0x28) + 1;
      *(uint *)(lVar5 + 0x28) = uVar8;
      if (piVar6 == (int *)0x0) {
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) = 0;
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) = 0;
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) = 0;
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) = 0;
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) = 0;
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        if (*(int *)(lVar5 + 0xac) == 9) {
          uVar10 = 2;
        }
        else if ((*(int *)(lVar5 + 0xb0) < 2) && (1 < *(int *)(lVar5 + 0xac))) {
          uVar10 = 0;
        }
        else {
          uVar10 = 4;
        }
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) = uVar10;
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) = 10;
        *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + 1;
        *(undefined4 *)(lVar5 + 8) = 0x71;
        FUN_144b4e060(param_1);
        if (*(int *)(lVar5 + 0x28) != 0) goto LAB_144b4c3c9;
      }
      else {
        *(byte *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) =
             (-(*(longlong *)(piVar6 + 0xc) != 0) & 0x10U) + (-(piVar6[0xf] != 0) & 2U) +
             (-(*(longlong *)(piVar6 + 8) != 0) & 8U) + (-(*(longlong *)(piVar6 + 4) != 0) & 4U) +
             (*piVar6 != 0);
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) =
             *(undefined1 *)(*(longlong *)(lVar5 + 0x30) + 4);
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) =
             *(undefined1 *)(*(longlong *)(lVar5 + 0x30) + 5);
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) =
             *(undefined1 *)(*(longlong *)(lVar5 + 0x30) + 6);
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) =
             *(undefined1 *)(*(longlong *)(lVar5 + 0x30) + 7);
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        if (*(int *)(lVar5 + 0xac) == 9) {
          uVar10 = 2;
        }
        else if ((*(int *)(lVar5 + 0xb0) < 2) && (1 < *(int *)(lVar5 + 0xac))) {
          uVar10 = 0;
        }
        else {
          uVar10 = 4;
        }
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) = uVar10;
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar8;
        *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) =
             *(undefined1 *)(*(longlong *)(lVar5 + 0x30) + 0xc);
        uVar8 = *(int *)(lVar5 + 0x28) + 1;
        uVar9 = (ulonglong)uVar8;
        *(uint *)(lVar5 + 0x28) = uVar8;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x10) != 0) {
          *(undefined1 *)(uVar9 + *(longlong *)(lVar5 + 0x10)) =
               *(undefined1 *)(*(longlong *)(lVar5 + 0x30) + 0x18);
          uVar8 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar8;
          *(undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)) =
               *(undefined1 *)(*(longlong *)(lVar5 + 0x30) + 0x19);
          uVar8 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar8;
          uVar9 = (ulonglong)uVar8;
        }
        if (*(int *)(*(longlong *)(lVar5 + 0x30) + 0x3c) != 0) {
          uVar7 = FUN_144d90310(*(undefined4 *)((longlong)param_1 + 0x4c),
                                *(undefined8 *)(lVar5 + 0x10),uVar9);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
        }
        *(undefined4 *)(lVar5 + 0x38) = 0;
        *(undefined4 *)(lVar5 + 8) = 0x45;
      }
    }
    iVar14 = *(int *)(lVar5 + 8);
    if (iVar14 == 0x45) {
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x10) != 0) {
        uVar17 = (uint)*(ushort *)(*(longlong *)(lVar5 + 0x30) + 0x18) - *(int *)(lVar5 + 0x38);
        uVar8 = *(uint *)(lVar5 + 0x28);
        uVar11 = *(uint *)(lVar5 + 0x18);
        if (uVar11 < uVar8 + uVar17) {
          uVar9 = (ulonglong)uVar8;
          do {
            uVar11 = uVar11 - (int)uVar9;
            memcpy((void *)(uVar9 + *(longlong *)(lVar5 + 0x10)),
                   (void *)((ulonglong)*(uint *)(lVar5 + 0x38) +
                           *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x10)),(ulonglong)uVar11);
            uVar3 = *(uint *)(lVar5 + 0x18);
            *(uint *)(lVar5 + 0x28) = uVar3;
            if ((*(int *)(*(longlong *)(lVar5 + 0x30) + 0x3c) != 0) && (uVar8 < uVar3)) {
              uVar7 = FUN_144d90310(*(undefined4 *)((longlong)param_1 + 0x4c),
                                    (ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10),uVar3 - uVar8);
              *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
            }
            *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + uVar11;
            FUN_144b4e060(param_1);
            if (*(int *)(lVar5 + 0x28) != 0) goto LAB_144b4c3c9;
            uVar17 = uVar17 - uVar11;
            uVar11 = *(uint *)(lVar5 + 0x18);
            uVar9 = uVar13;
            uVar8 = uVar15;
          } while (uVar11 < uVar17);
        }
        memcpy((void *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10)),
               (void *)((ulonglong)*(uint *)(lVar5 + 0x38) +
                       *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x10)),(ulonglong)uVar17);
        uVar17 = *(int *)(lVar5 + 0x28) + uVar17;
        *(uint *)(lVar5 + 0x28) = uVar17;
        if ((*(int *)(*(longlong *)(lVar5 + 0x30) + 0x3c) != 0) && (uVar8 < uVar17)) {
          uVar7 = FUN_144d90310(*(undefined4 *)((longlong)param_1 + 0x4c),
                                (ulonglong)uVar8 + *(longlong *)(lVar5 + 0x10),uVar17 - uVar8);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
        }
        *(undefined4 *)(lVar5 + 0x38) = 0;
      }
      *(undefined4 *)(lVar5 + 8) = 0x49;
LAB_144b4c8f9:
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x20) != 0) {
        uVar9 = (ulonglong)*(uint *)(lVar5 + 0x28);
        uVar16 = uVar9;
        do {
          uVar15 = (uint)uVar9;
          if (uVar15 == *(uint *)(lVar5 + 0x18)) {
            if ((*(int *)(*(longlong *)(lVar5 + 0x30) + 0x3c) != 0) && ((uint)uVar16 < uVar15)) {
              uVar7 = FUN_144d90310(*(undefined4 *)((longlong)param_1 + 0x4c),
                                    uVar16 + *(longlong *)(lVar5 + 0x10),uVar15 - (uint)uVar16);
              *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
            }
            FUN_144b4e060(param_1);
            uVar9 = uVar13;
            uVar16 = uVar13;
            if (*(int *)(lVar5 + 0x28) != 0) goto LAB_144b4c3c9;
          }
          cVar1 = *(char *)((ulonglong)*(uint *)(lVar5 + 0x38) +
                           *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x20));
          *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) + 1;
          *(char *)(uVar9 + *(longlong *)(lVar5 + 0x10)) = cVar1;
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          uVar9 = (ulonglong)uVar15;
          *(uint *)(lVar5 + 0x28) = uVar15;
        } while (cVar1 != '\0');
        if ((*(int *)(*(longlong *)(lVar5 + 0x30) + 0x3c) != 0) && ((uint)uVar16 < uVar15)) {
          uVar7 = FUN_144d90310(*(undefined4 *)((longlong)param_1 + 0x4c),
                                uVar16 + *(longlong *)(lVar5 + 0x10),uVar15 - (uint)uVar16);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
        }
        *(undefined4 *)(lVar5 + 0x38) = 0;
      }
      *(undefined4 *)(lVar5 + 8) = 0x5b;
LAB_144b4c9b6:
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x30) != 0) {
        uVar9 = (ulonglong)*(uint *)(lVar5 + 0x28);
        uVar16 = uVar9;
        do {
          uVar15 = (uint)uVar9;
          if (uVar15 == *(uint *)(lVar5 + 0x18)) {
            if ((*(int *)(*(longlong *)(lVar5 + 0x30) + 0x3c) != 0) && ((uint)uVar16 < uVar15)) {
              uVar7 = FUN_144d90310(*(undefined4 *)((longlong)param_1 + 0x4c),
                                    uVar16 + *(longlong *)(lVar5 + 0x10),uVar15 - (uint)uVar16);
              *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
            }
            FUN_144b4e060(param_1);
            uVar9 = uVar13;
            uVar16 = uVar13;
            if (*(int *)(lVar5 + 0x28) != 0) goto LAB_144b4c3c9;
          }
          cVar1 = *(char *)((ulonglong)*(uint *)(lVar5 + 0x38) +
                           *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x30));
          *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) + 1;
          *(char *)(uVar9 + *(longlong *)(lVar5 + 0x10)) = cVar1;
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          uVar9 = (ulonglong)uVar15;
          *(uint *)(lVar5 + 0x28) = uVar15;
        } while (cVar1 != '\0');
        if ((*(int *)(*(longlong *)(lVar5 + 0x30) + 0x3c) != 0) && ((uint)uVar16 < uVar15)) {
          uVar7 = FUN_144d90310(*(undefined4 *)((longlong)param_1 + 0x4c),
                                uVar16 + *(longlong *)(lVar5 + 0x10),uVar15 - (uint)uVar16);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
        }
      }
      *(undefined4 *)(lVar5 + 8) = 0x67;
LAB_144b4ca6f:
      if (*(int *)(*(longlong *)(lVar5 + 0x30) + 0x3c) != 0) {
        uVar15 = *(uint *)(lVar5 + 0x28);
        if (*(uint *)(lVar5 + 0x18) < uVar15 + 2) {
          FUN_144b4e060(param_1);
          uVar15 = 0;
          if (*(int *)(lVar5 + 0x28) != 0) goto LAB_144b4c3c9;
        }
        *(undefined1 *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) =
             *(undefined1 *)((longlong)param_1 + 0x4c);
        uVar15 = *(int *)(lVar5 + 0x28) + 1;
        *(uint *)(lVar5 + 0x28) = uVar15;
        *(undefined1 *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) =
             *(undefined1 *)((longlong)param_1 + 0x4d);
        *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + 1;
        uVar7 = FUN_144d90310(0,0,0);
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
      }
      *(undefined4 *)(lVar5 + 8) = 0x71;
      FUN_144b4e060(param_1);
      if (*(int *)(lVar5 + 0x28) != 0) goto LAB_144b4c3c9;
    }
    else {
      if (iVar14 == 0x49) goto LAB_144b4c8f9;
      if (iVar14 == 0x5b) goto LAB_144b4c9b6;
      if (iVar14 == 0x67) goto LAB_144b4ca6f;
    }
    if (((int)param_1[1] == 0) && (*(int *)(lVar5 + 0x9c) == 0)) {
      if (param_2 == 0) {
        return 0;
      }
      if (*(int *)(lVar5 + 8) != 0x29a) goto LAB_144b4cb05;
    }
    else {
LAB_144b4cb05:
      if (*(int *)(lVar5 + 0xac) == 0) {
        uVar15 = FUN_144b4b420(lVar5);
      }
      else if (*(int *)(lVar5 + 0xb0) == 2) {
        uVar15 = FUN_144b4da60(lVar5);
      }
      else if (*(int *)(lVar5 + 0xb0) == 3) {
        uVar15 = FUN_144b4d6a0(lVar5);
      }
      else {
        uVar15 = (*(code *)(&PTR_FUN_14996cbd8)[(longlong)*(int *)(lVar5 + 0xac) * 2])(lVar5);
      }
      if (uVar15 - 2 < 2) {
        *(undefined4 *)(lVar5 + 8) = 0x29a;
      }
      if ((uVar15 & 0xfffffffd) == 0) {
        if ((int)param_1[3] != 0) {
          return 0;
        }
        goto LAB_144b4c3c9;
      }
      if (uVar15 == 1) {
        if (param_2 == 1) {
          FUN_144d8e7b0(lVar5);
        }
        else if ((param_2 != 5) && (FUN_144d8e8a0(lVar5,0,0,0), param_2 == 3)) {
          *(undefined2 *)(*(longlong *)(lVar5 + 0x68) + (ulonglong)(*(int *)(lVar5 + 0x74) - 1) * 2)
               = 0;
          memset(*(void **)(lVar5 + 0x68),0,(ulonglong)(*(int *)(lVar5 + 0x74) - 1) * 2);
          if (*(int *)(lVar5 + 0x9c) == 0) {
            *(undefined4 *)(lVar5 + 0x94) = 0;
            *(undefined4 *)(lVar5 + 0x84) = 0;
            *(undefined4 *)(lVar5 + 0x1708) = 0;
          }
        }
        FUN_144b4e060(param_1);
        if ((int)param_1[3] == 0) goto LAB_144b4c3c9;
      }
    }
    if (param_2 == 4) {
      if (0 < *(int *)(lVar5 + 0x2c)) {
        if (*(int *)(lVar5 + 0x2c) == 2) {
          *(undefined1 *)((ulonglong)*(uint *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x10)) =
               *(undefined1 *)((longlong)param_1 + 0x4c);
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar15;
          *(undefined1 *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) =
               *(undefined1 *)((longlong)param_1 + 0x4d);
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar15;
          *(undefined1 *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) =
               *(undefined1 *)((longlong)param_1 + 0x4e);
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar15;
          *(undefined1 *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) =
               *(undefined1 *)((longlong)param_1 + 0x4f);
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar15;
          *(undefined1 *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) =
               *(undefined1 *)((longlong)param_1 + 0xc);
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar15;
          *(undefined1 *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) =
               *(undefined1 *)((longlong)param_1 + 0xd);
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar15;
          *(undefined1 *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) =
               *(undefined1 *)((longlong)param_1 + 0xe);
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar15;
          *(undefined1 *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) =
               *(undefined1 *)((longlong)param_1 + 0xf);
        }
        else {
          uVar2 = *(undefined2 *)((longlong)param_1 + 0x4e);
          *(char *)((ulonglong)*(uint *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x10)) =
               (char)((ushort)uVar2 >> 8);
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar15;
          *(char *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) = (char)uVar2;
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar15;
          uVar2 = *(undefined2 *)((longlong)param_1 + 0x4c);
          *(char *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) = (char)((ushort)uVar2 >> 8);
          uVar15 = *(int *)(lVar5 + 0x28) + 1;
          *(uint *)(lVar5 + 0x28) = uVar15;
          *(char *)((ulonglong)uVar15 + *(longlong *)(lVar5 + 0x10)) = (char)uVar2;
        }
        *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + 1;
        FUN_144b4e060(param_1);
        if (0 < *(int *)(lVar5 + 0x2c)) {
          *(int *)(lVar5 + 0x2c) = -*(int *)(lVar5 + 0x2c);
        }
        return (uint)(*(int *)(lVar5 + 0x28) == 0);
      }
      return 1;
    }
  }
  else {
    FUN_144b4e060(param_1);
    if ((int)param_1[3] != 0) goto LAB_144b4c425;
LAB_144b4c3c9:
    *(undefined4 *)(lVar5 + 0x40) = 0xffffffff;
  }
  return 0;
}



// FUNCTION 144b4cd70 FUN_144b4cd70 body=301 status=ok
// SIG undefined FUN_144b4cd70(void)

undefined1 * FUN_144b4cd70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 && (*plVar2 == param_1))))
  {
    iVar1 = (int)plVar2[1];
    if (((iVar1 - 0x2aU < 0x3e) &&
        ((0x2002000088008001U >> ((ulonglong)(iVar1 - 0x2aU) & 0x3f) & 1) != 0)) ||
       ((iVar1 == 0x71 || (iVar1 == 0x29a)))) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 8);
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x68) != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
      }
      puVar4 = (undefined8 *)(param_1 + 0x38);
      plVar2 = (longlong *)(param_1 + 0x28);
      if (*(longlong *)(*plVar2 + 0x60) != 0) {
        (*(code *)*puVar4)(*(undefined8 *)(param_1 + 0x40));
      }
      if (*(longlong *)(*plVar2 + 0x50) != 0) {
        (*(code *)*puVar4)(*(undefined8 *)(param_1 + 0x40));
      }
      (*(code *)*puVar4)(*(undefined8 *)(param_1 + 0x40),*plVar2);
      puVar3 = (undefined1 *)0x0;
      *plVar2 = 0;
      if (iVar1 == 0x71) {
        puVar3 = &DAT_fffffffd;
      }
      return puVar3;
    }
  }
  return (undefined1 *)0xfffffffe;
}



// FUNCTION 144b4cea0 FUN_144b4cea0 body=414 status=ok
// SIG undefined FUN_144b4cea0(void)

undefined8 FUN_144b4cea0(longlong param_1)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 && (*plVar2 == param_1))))
  {
    iVar5 = (int)plVar2[1];
    if (((iVar5 - 0x2aU < 0x3e) &&
        ((0x2002000088008001U >> ((ulonglong)(iVar5 - 0x2aU) & 0x3f) & 1) != 0)) ||
       ((iVar5 == 0x71 || (iVar5 == 0x29a)))) {
      *(undefined4 *)(param_1 + 0x48) = 2;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      lVar3 = *(longlong *)(param_1 + 0x28);
      iVar5 = *(int *)(lVar3 + 0x2c);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
      *(undefined4 *)(lVar3 + 0x28) = 0;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
        *(int *)(lVar3 + 0x2c) = iVar5;
      }
      uVar4 = 0x2a;
      if (iVar5 == 2) {
        uVar4 = 0x39;
      }
      *(undefined4 *)(lVar3 + 8) = uVar4;
      if (iVar5 != 2) {
        uVar4 = FUN_144d90020(0,0,0);
      }
      else {
        uVar4 = FUN_144d90310(0,0,0);
      }
      *(undefined4 *)(param_1 + 0x4c) = uVar4;
      *(undefined4 *)(lVar3 + 0x40) = 0xfffffffe;
      _tr_init(lVar3);
      lVar3 = *(longlong *)(param_1 + 0x28);
      *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x44) * 2;
      *(undefined2 *)(*(longlong *)(lVar3 + 0x68) + (ulonglong)(*(int *)(lVar3 + 0x74) - 1) * 2) = 0
      ;
      memset(*(void **)(lVar3 + 0x68),0,(ulonglong)(*(int *)(lVar3 + 0x74) - 1) * 2);
      lVar6 = (longlong)*(int *)(lVar3 + 0xac);
      *(uint *)(lVar3 + 0xa8) = (uint)*(ushort *)(&DAT_14996cbd2 + lVar6 * 0x10);
      *(uint *)(lVar3 + 0xb4) = (uint)*(ushort *)(&DAT_14996cbd0 + lVar6 * 0x10);
      *(uint *)(lVar3 + 0xb8) = (uint)*(ushort *)(&DAT_14996cbd4 + lVar6 * 0x10);
      uVar1 = *(ushort *)(&DAT_14996cbd6 + lVar6 * 0x10);
      *(undefined8 *)(lVar3 + 0x90) = 0;
      *(undefined4 *)(lVar3 + 0x84) = 0;
      *(undefined4 *)(lVar3 + 0x9c) = 0;
      *(undefined4 *)(lVar3 + 0x1708) = 0;
      *(undefined4 *)(lVar3 + 0x70) = 0;
      *(uint *)(lVar3 + 0xa4) = (uint)uVar1;
      *(undefined4 *)(lVar3 + 0xa0) = 2;
      *(undefined4 *)(lVar3 + 0x88) = 2;
      return 0;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 144b4d040 FUN_144b4d040 body=455 status=ok
// SIG undefined FUN_144b4d040(void)

undefined1 * FUN_144b4d040(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0 && (*plVar1 == param_1))))
  {
    iVar3 = (int)plVar1[1];
    if (((iVar3 - 0x2aU < 0x3e) &&
        ((0x2002000088008001U >> ((ulonglong)(iVar3 - 0x2aU) & 0x3f) & 1) != 0)) ||
       ((iVar3 == 0x71 || (iVar3 == 0x29a)))) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      uVar5 = 6;
      if (param_2 != 0xffffffff) {
        uVar5 = param_2;
      }
      if ((uVar5 < 10) && (param_3 < 5)) {
        if (((param_3 != *(uint *)(lVar2 + 0xb0)) ||
            ((&PTR_FUN_14996cbd8)[(longlong)*(int *)(lVar2 + 0xac) * 2] !=
             (&PTR_FUN_14996cbd8)[(longlong)(int)uVar5 * 2])) && (*(int *)(lVar2 + 0x40) != -2)) {
          iVar3 = FUN_144b4c2e0(param_1);
          if (iVar3 == -2) {
            return (undefined1 *)0xfffffffe;
          }
          if ((*(int *)(param_1 + 8) != 0) ||
             ((*(int *)(lVar2 + 0x9c) - *(int *)(lVar2 + 0x84)) + *(int *)(lVar2 + 0x94) != 0)) {
            return &DAT_fffffffb;
          }
        }
        if (*(uint *)(lVar2 + 0xac) != uVar5) {
          if ((*(uint *)(lVar2 + 0xac) == 0) && (*(int *)(lVar2 + 0x1704) != 0)) {
            if (*(int *)(lVar2 + 0x1704) == 1) {
              slide_hash(lVar2);
            }
            else {
              *(undefined2 *)
               (*(longlong *)(lVar2 + 0x68) + (ulonglong)(*(int *)(lVar2 + 0x74) - 1) * 2) = 0;
              memset(*(void **)(lVar2 + 0x68),0,(ulonglong)(*(int *)(lVar2 + 0x74) - 1) * 2);
            }
            *(undefined4 *)(lVar2 + 0x1704) = 0;
          }
          *(uint *)(lVar2 + 0xac) = uVar5;
          lVar4 = (longlong)(int)uVar5;
          *(uint *)(lVar2 + 0xa8) = (uint)*(ushort *)(&DAT_14996cbd2 + lVar4 * 0x10);
          *(uint *)(lVar2 + 0xb4) = (uint)*(ushort *)(&DAT_14996cbd0 + lVar4 * 0x10);
          *(uint *)(lVar2 + 0xb8) = (uint)*(ushort *)(&DAT_14996cbd4 + lVar4 * 0x10);
          *(uint *)(lVar2 + 0xa4) = (uint)*(ushort *)(&DAT_14996cbd6 + lVar4 * 0x10);
        }
        *(uint *)(lVar2 + 0xb0) = param_3;
        return (undefined1 *)0x0;
      }
    }
  }
  return (undefined1 *)0xfffffffe;
}



// FUNCTION 144b4d210 FUN_144b4d210 body=436 status=ok
// SIG undefined FUN_144b4d210(void)

int FUN_144b4d210(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = (param_2 >> 8) + param_2 + (param_2 >> 9) + (param_2 >> 3) + 4;
  uVar8 = (param_2 >> 7) + param_2 + (param_2 >> 0xb) + (param_2 >> 5) + 7;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 && (*plVar2 == param_1))))
  {
    iVar7 = (int)plVar2[1];
    if (((iVar7 - 0x2aU < 0x3e) &&
        ((0x2002000088008001U >> ((ulonglong)(iVar7 - 0x2aU) & 0x3f) & 1) != 0)) ||
       ((iVar7 == 0x71 || (iVar7 == 0x29a)))) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      iVar7 = *(int *)(lVar3 + 0x2c);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else if (iVar7 == 1) {
        iVar7 = 6;
        if (*(int *)(lVar3 + 0x94) != 0) {
          iVar7 = 10;
        }
      }
      else if (iVar7 == 2) {
        lVar4 = *(longlong *)(lVar3 + 0x30);
        iVar7 = 0x12;
        if (lVar4 != 0) {
          if (*(longlong *)(lVar4 + 0x10) != 0) {
            iVar7 = *(int *)(lVar4 + 0x18) + 0x14;
          }
          pcVar5 = *(char **)(lVar4 + 0x20);
          if (pcVar5 != (char *)0x0) {
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              iVar7 = iVar7 + 1;
            } while (cVar1 != '\0');
          }
          pcVar5 = *(char **)(lVar4 + 0x30);
          if (pcVar5 != (char *)0x0) {
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              iVar7 = iVar7 + 1;
            } while (cVar1 != '\0');
          }
          if (*(int *)(lVar4 + 0x3c) != 0) {
            iVar7 = iVar7 + 2;
          }
        }
      }
      else {
        iVar7 = 6;
      }
      if ((*(uint *)(lVar3 + 0x48) == 0xf) && (*(int *)(lVar3 + 0x78) == 0xf)) {
        return (param_2 >> 0xc) + 7 + (param_2 >> 0xe) + iVar7 + (param_2 >> 0x19) + param_2;
      }
      if ((*(uint *)(lVar3 + 0x78) < *(uint *)(lVar3 + 0x48)) || (*(int *)(lVar3 + 0xac) == 0)) {
        uVar6 = uVar8;
      }
      return uVar6 + iVar7;
    }
  }
  if (uVar8 < uVar6) {
    uVar8 = uVar6;
  }
  return uVar8 + 6;
}



// FUNCTION 144b4d3d0 deflateInit_ body=50 status=ok
// SIG undefined deflateInit_(void)

/* Library Function - Single Match
    deflateInit_
   
   Library: Visual Studio 2019 Release */

void deflateInit_(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_144b4d410(param_1,param_2,8,0xf,8,0,param_3,param_4);
  return;
}



// FUNCTION 144b4d410 FUN_144b4d410 body=649 status=ok
// SIG undefined FUN_144b4d410(void)

undefined8
FUN_144b4d410(longlong param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
             char *param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = 1;
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x58)) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(code **)(param_1 + 0x30) = FUN_144d907e0;
    }
    if (*(longlong *)(param_1 + 0x38) == 0) {
      *(code **)(param_1 + 0x38) = FUN_144d907f0;
    }
    uVar6 = 6;
    if (param_2 != 0xffffffff) {
      uVar6 = param_2;
    }
    if (param_4 < 0) {
      if (param_4 < -0xf) {
        return 0xfffffffe;
      }
      param_4 = -param_4;
      iVar2 = 0;
    }
    else if (0xf < param_4) {
      iVar2 = 2;
      param_4 = param_4 + -0x10;
    }
    if (((param_5 - 1U < 9) && (param_3 == 8)) &&
       ((param_4 - 8U < 8 && ((uVar6 < 10 && (param_6 < 5)))))) {
      if (param_4 == 8) {
        if (iVar2 != 1) {
          return 0xfffffffe;
        }
        param_4 = 9;
      }
      plVar3 = (longlong *)(**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x1718);
      if (plVar3 != (longlong *)0x0) {
        *(longlong **)(param_1 + 0x28) = plVar3;
        *(int *)((longlong)plVar3 + 0x2c) = iVar2;
        *(int *)(plVar3 + 9) = param_4;
        iVar7 = 1 << ((byte)param_4 & 0x1f);
        *plVar3 = param_1;
        *(undefined4 *)(plVar3 + 1) = 0x2a;
        plVar3[6] = 0;
        *(int *)((longlong)plVar3 + 0x44) = iVar7;
        *(int *)((longlong)plVar3 + 0x4c) = iVar7 + -1;
        iVar2 = 1 << ((byte)(param_5 + 7) & 0x1f);
        *(int *)((longlong)plVar3 + 0x74) = iVar2;
        *(int *)((longlong)plVar3 + 0x7c) = iVar2 + -1;
        *(int *)(plVar3 + 0xf) = param_5 + 7;
        *(uint *)(plVar3 + 0x10) = (param_5 + 9U) / 3;
        lVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),iVar7,2);
        plVar3[10] = lVar4;
        lVar4 = (**(code **)(param_1 + 0x30))
                          (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar3 + 0x44),
                           2);
        plVar3[0xc] = lVar4;
        lVar4 = (**(code **)(param_1 + 0x30))
                          (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar3 + 0x74),
                           2);
        *(undefined4 *)((longlong)plVar3 + 0x1714) = 0;
        iVar2 = 1 << ((char)param_5 + 6U & 0x1f);
        *(int *)(plVar3 + 0x2de) = iVar2;
        plVar3[0xd] = lVar4;
        lVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),iVar2,4);
        uVar1 = *(uint *)(plVar3 + 0x2de);
        plVar3[2] = lVar4;
        *(uint *)(plVar3 + 3) = uVar1 * 4;
        if ((((plVar3[10] != 0) && (plVar3[0xc] != 0)) && (plVar3[0xd] != 0)) && (lVar4 != 0)) {
          *(uint *)((longlong)plVar3 + 0xac) = uVar6;
          plVar3[0x2dd] = lVar4 + (ulonglong)uVar1;
          *(uint *)(plVar3 + 0x16) = param_6;
          *(undefined1 *)((longlong)plVar3 + 0x3c) = 8;
          *(uint *)(plVar3 + 0x2df) = (uVar1 - 1) * 3;
          uVar5 = FUN_144b4cea0(param_1);
          return uVar5;
        }
        *(undefined4 *)(plVar3 + 1) = 0x29a;
        *(char **)(param_1 + 0x20) = "insufficient memory";
        FUN_144b4cd70(param_1);
      }
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 144b4d6a0 FUN_144b4d6a0 body=953 status=ok
// SIG undefined FUN_144b4d6a0(void)

char FUN_144b4d6a0(longlong *param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  byte bVar12;
  char *pcVar13;
  bool bVar14;
  
  lVar10 = 0;
  do {
    uVar6 = *(uint *)((longlong)param_1 + 0x9c);
    uVar11 = 0;
    if (uVar6 < 0x103) {
      FUN_144b4ddd0(param_1);
      uVar6 = *(uint *)((longlong)param_1 + 0x9c);
      if ((uVar6 < 0x103) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar6 == 0) {
        *(undefined4 *)(param_1 + 0x2e1) = 0;
        if (param_2 == 4) {
          uVar11 = *(uint *)((longlong)param_1 + 0x84);
          if (-1 < (int)uVar11) {
            lVar10 = (ulonglong)uVar11 + param_1[10];
          }
          FUN_144d8e440(param_1,lVar10,*(int *)((longlong)param_1 + 0x94) - uVar11,1);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          FUN_144b4e060(*param_1);
          return (*(int *)(*param_1 + 0x18) != 0) + '\x02';
        }
        if (*(int *)((longlong)param_1 + 0x16f4) != 0) {
          uVar11 = *(uint *)((longlong)param_1 + 0x84);
          if (-1 < (int)uVar11) {
            lVar10 = (ulonglong)uVar11 + param_1[10];
          }
          FUN_144d8e440(param_1,lVar10,*(int *)((longlong)param_1 + 0x94) - uVar11,0);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          FUN_144b4e060(*param_1);
          if (*(int *)(*param_1 + 0x18) == 0) {
            return '\0';
          }
        }
        return '\x01';
      }
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    if ((2 < uVar6) && (*(uint *)((longlong)param_1 + 0x94) != 0)) {
      pcVar13 = (char *)(param_1[10] + (ulonglong)*(uint *)((longlong)param_1 + 0x94));
      cVar3 = pcVar13[-1];
      if ((cVar3 == *pcVar13) &&
         ((cVar3 == pcVar13[1] && (pcVar8 = pcVar13 + 2, cVar3 == pcVar13[2])))) {
        while (((((iVar7 = (int)pcVar8 + 1, cVar3 == pcVar8[1] &&
                  (iVar5 = (int)(pcVar8 + 2), iVar7 = iVar5, cVar3 == pcVar8[2])) &&
                 (iVar7 = iVar5 + 1, cVar3 == pcVar8[3])) &&
                ((iVar7 = iVar5 + 2, cVar3 == pcVar8[4] && (iVar7 = iVar5 + 3, cVar3 == pcVar8[5])))
                ) && ((iVar7 = iVar5 + 4, cVar3 == pcVar8[6] &&
                      (iVar7 = iVar5 + 5, cVar3 == pcVar8[7]))))) {
          pcVar8 = pcVar8 + 8;
          iVar7 = (int)pcVar8;
          if ((cVar3 != *pcVar8) || (pcVar13 + 0x102 <= pcVar8)) break;
        }
        uVar11 = (iVar7 - (int)(pcVar13 + 0x102)) + 0x102;
        uVar6 = *(uint *)((longlong)param_1 + 0x9c);
        *(uint *)(param_1 + 0x11) = uVar11;
        if (uVar6 < uVar11) {
          *(uint *)(param_1 + 0x11) = uVar6;
          uVar11 = uVar6;
        }
      }
    }
    if (uVar11 < 3) {
      bVar12 = *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10]);
      *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 0;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 0;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar12;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar2 = (short *)((longlong)param_1 + (ulonglong)bVar12 * 4 + 0xbc);
      *psVar2 = *psVar2 + 1;
      bVar14 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2df];
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
      iVar7 = *(int *)((longlong)param_1 + 0x94);
    }
    else {
      bVar12 = (char)uVar11 - 3;
      *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 1;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 0;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar12;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar2 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_1499fe690)[bVar12] * 4 + 0x4c0);
      *psVar2 = *psVar2 + 1;
      *(short *)(param_1 + 0x136) = (short)param_1[0x136] + 1;
      lVar9 = param_1[0x11];
      bVar14 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2df];
      *(undefined4 *)(param_1 + 0x11) = 0;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) - (int)lVar9;
      iVar7 = *(int *)((longlong)param_1 + 0x94) + (int)lVar9;
      *(int *)((longlong)param_1 + 0x94) = iVar7;
    }
    if (bVar14) {
      uVar11 = *(uint *)((longlong)param_1 + 0x84);
      lVar9 = lVar10;
      if (-1 < (int)uVar11) {
        lVar9 = (ulonglong)uVar11 + param_1[10];
      }
      FUN_144d8e440(param_1,lVar9,iVar7 - uVar11,0);
      lVar9 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      lVar4 = *(longlong *)(lVar9 + 0x28);
      bi_flush(lVar4);
      uVar11 = *(uint *)(lVar9 + 0x18);
      if (*(uint *)(lVar4 + 0x28) <= *(uint *)(lVar9 + 0x18)) {
        uVar11 = *(uint *)(lVar4 + 0x28);
      }
      if (uVar11 != 0) {
        memcpy(*(void **)(lVar9 + 0x10),*(void **)(lVar4 + 0x20),(ulonglong)uVar11);
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + (ulonglong)uVar11;
        *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + (ulonglong)uVar11;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + uVar11;
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) - uVar11;
        piVar1 = (int *)(lVar4 + 0x28);
        *piVar1 = *piVar1 - uVar11;
        if (*piVar1 == 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return '\0';
      }
    }
  } while( true );
}



// FUNCTION 144b4da60 FUN_144b4da60 body=577 status=ok
// SIG undefined FUN_144b4da60(void)

char FUN_144b4da60(longlong *param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  
  lVar6 = 0;
  while ((*(int *)((longlong)param_1 + 0x9c) != 0 ||
         (FUN_144b4ddd0(param_1), *(int *)((longlong)param_1 + 0x9c) != 0))) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    bVar3 = *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10]);
    *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 0;
    *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
    *(undefined1 *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = 0;
    *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
    *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar3;
    *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
    psVar2 = (short *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xbc);
    *psVar2 = *psVar2 + 1;
    *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
    iVar7 = *(int *)((longlong)param_1 + 0x94) + 1;
    *(int *)((longlong)param_1 + 0x94) = iVar7;
    if (*(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2df]) {
      uVar8 = *(uint *)((longlong)param_1 + 0x84);
      lVar5 = lVar6;
      if (-1 < (int)uVar8) {
        lVar5 = (ulonglong)uVar8 + param_1[10];
      }
      FUN_144d8e440(param_1,lVar5,iVar7 - uVar8,0);
      lVar5 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      lVar4 = *(longlong *)(lVar5 + 0x28);
      bi_flush(lVar4);
      uVar8 = *(uint *)(lVar5 + 0x18);
      if (*(uint *)(lVar4 + 0x28) <= *(uint *)(lVar5 + 0x18)) {
        uVar8 = *(uint *)(lVar4 + 0x28);
      }
      if (uVar8 != 0) {
        memcpy(*(void **)(lVar5 + 0x10),*(void **)(lVar4 + 0x20),(ulonglong)uVar8);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + (ulonglong)uVar8;
        *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + (ulonglong)uVar8;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + uVar8;
        *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) - uVar8;
        piVar1 = (int *)(lVar4 + 0x28);
        *piVar1 = *piVar1 - uVar8;
        if (*piVar1 == 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return '\0';
      }
    }
  }
  if (param_2 == 0) {
    return '\0';
  }
  *(undefined4 *)(param_1 + 0x2e1) = 0;
  if (param_2 != 4) {
    if (*(int *)((longlong)param_1 + 0x16f4) != 0) {
      uVar8 = *(uint *)((longlong)param_1 + 0x84);
      if (-1 < (int)uVar8) {
        lVar6 = (ulonglong)uVar8 + param_1[10];
      }
      FUN_144d8e440(param_1,lVar6,*(int *)((longlong)param_1 + 0x94) - uVar8,0);
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      FUN_144b4e060(*param_1);
      if (*(int *)(*param_1 + 0x18) == 0) {
        return '\0';
      }
    }
    return '\x01';
  }
  uVar8 = *(uint *)((longlong)param_1 + 0x84);
  if (-1 < (int)uVar8) {
    lVar6 = (ulonglong)uVar8 + param_1[10];
  }
  FUN_144d8e440(param_1,lVar6,*(int *)((longlong)param_1 + 0x94) - uVar8,1);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
  FUN_144b4e060(*param_1);
  return (*(int *)(*param_1 + 0x18) != 0) + '\x02';
}



// FUNCTION 144b4dcb0 slide_hash body=117 status=ok
// SIG undefined slide_hash(void)

/* Library Function - Single Match
    slide_hash
   
   Library: Visual Studio 2019 Release */

void slide_hash(longlong param_1)

{
  ushort *puVar1;
  uint uVar2;
  short sVar3;
  short *psVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x74);
  uVar2 = *(uint *)(param_1 + 0x44);
  psVar4 = (short *)(*(longlong *)(param_1 + 0x68) + uVar6 * 2);
  do {
    puVar1 = (ushort *)(psVar4 + -1);
    psVar4 = psVar4 + -1;
    sVar3 = *puVar1 - (short)uVar2;
    if (*puVar1 < uVar2) {
      sVar3 = 0;
    }
    *psVar4 = sVar3;
    uVar5 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 != 0);
  psVar4 = (short *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar2 * 2);
  uVar5 = uVar2;
  do {
    puVar1 = (ushort *)(psVar4 + -1);
    psVar4 = psVar4 + -1;
    sVar3 = *puVar1 - (short)uVar2;
    if (*puVar1 < uVar2) {
      sVar3 = 0;
    }
    *psVar4 = sVar3;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return;
}



// FUNCTION 144b4dd30 read_buf body=160 status=ok
// SIG undefined read_buf(void)

/* Library Function - Single Match
    read_buf
   
   Library: Visual Studio 2019 Release */

uint read_buf(longlong *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = uVar1;
  if (param_3 < uVar1) {
    uVar3 = param_3;
  }
  if (uVar3 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 1) = uVar1 - uVar3;
  memcpy(param_2,(void *)*param_1,(ulonglong)uVar3);
  if (*(int *)(param_1[5] + 0x2c) == 1) {
    uVar2 = FUN_144d90020(*(undefined4 *)((longlong)param_1 + 0x4c),param_2,uVar3);
  }
  else {
    if (*(int *)(param_1[5] + 0x2c) != 2) goto LAB_144b4ddb3;
    uVar2 = FUN_144d90310(*(undefined4 *)((longlong)param_1 + 0x4c),param_2,uVar3);
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
LAB_144b4ddb3:
  *param_1 = *param_1 + (ulonglong)uVar3;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar3;
  return uVar3;
}



// FUNCTION 144b4ddd0 FUN_144b4ddd0 body=654 status=ok
// SIG undefined FUN_144b4ddd0(void)

void FUN_144b4ddd0(longlong *param_1)

{
  longlong *plVar1;
  ushort *puVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x44);
  plVar1 = param_1 + 10;
  while( true ) {
    puVar6 = (uint *)(param_1 + 0x2e1);
    iVar7 = ((int)param_1[0xb] - *(int *)((longlong)param_1 + 0x9c)) -
            *(uint *)((longlong)param_1 + 0x94);
    if (*(int *)((longlong)param_1 + 0x44) + -0x106 + uVar3 <= *(uint *)((longlong)param_1 + 0x94))
    {
      memcpy((void *)*plVar1,(void *)(*plVar1 + (ulonglong)uVar3),(ulonglong)(uVar3 - iVar7));
      *(uint *)(param_1 + 0x13) = (int)param_1[0x13] - uVar3;
      uVar5 = *(int *)((longlong)param_1 + 0x94) - uVar3;
      *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) - uVar3;
      *(uint *)((longlong)param_1 + 0x94) = uVar5;
      if (uVar5 < *puVar6) {
        *puVar6 = uVar5;
      }
      uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0x74);
      uVar5 = *(uint *)((longlong)param_1 + 0x44);
      psVar9 = (short *)(param_1[0xd] + uVar11 * 2);
      do {
        puVar2 = (ushort *)(psVar9 + -1);
        psVar9 = psVar9 + -1;
        sVar4 = *puVar2 - (short)uVar5;
        if (*puVar2 < uVar5) {
          sVar4 = 0;
        }
        *psVar9 = sVar4;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 != 0);
      psVar9 = (short *)(param_1[0xc] + (ulonglong)uVar5 * 2);
      uVar10 = uVar5;
      do {
        puVar2 = (ushort *)(psVar9 + -1);
        psVar9 = psVar9 + -1;
        sVar4 = *puVar2 - (short)uVar5;
        if (*puVar2 < uVar5) {
          sVar4 = 0;
        }
        *psVar9 = sVar4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      iVar7 = iVar7 + uVar3;
    }
    if (*(int *)(*param_1 + 8) == 0) break;
    iVar7 = read_buf(*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0x9c) +
                              (ulonglong)*(uint *)((longlong)param_1 + 0x94) + *plVar1,iVar7);
    uVar5 = *puVar6;
    uVar10 = *(int *)((longlong)param_1 + 0x9c) + iVar7;
    *(uint *)((longlong)param_1 + 0x9c) = uVar10;
    if (2 < uVar10 + uVar5) {
      uVar12 = *(int *)((longlong)param_1 + 0x94) - uVar5;
      uVar11 = (ulonglong)uVar12;
      uVar8 = (uint)*(byte *)(uVar11 + *plVar1);
      *(uint *)(param_1 + 0xe) = uVar8;
      *(uint *)(param_1 + 0xe) =
           ((uint)*(byte *)((ulonglong)(uVar12 + 1) + *plVar1) ^
           uVar8 << ((byte)(int)param_1[0x10] & 0x1f)) & *(uint *)((longlong)param_1 + 0x7c);
      if (uVar5 != 0) {
        uVar12 = uVar12 + 2;
        do {
          uVar13 = (ulonglong)uVar12;
          uVar12 = uVar12 + 1;
          uVar5 = ((uint)*(byte *)(uVar13 + *plVar1) ^
                  (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
                  *(uint *)((longlong)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar5;
          *(undefined2 *)(param_1[0xc] + (*(uint *)((longlong)param_1 + 0x4c) & uVar11) * 2) =
               *(undefined2 *)(param_1[0xd] + (ulonglong)uVar5 * 2);
          *(short *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) = (short)uVar11;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar10 = *(uint *)((longlong)param_1 + 0x9c);
          iVar7 = (int)param_1[0x2e1] + -1;
          *(int *)(param_1 + 0x2e1) = iVar7;
          if (uVar10 + iVar7 < 3) break;
        } while (iVar7 != 0);
      }
    }
    if ((0x105 < uVar10) || (*(int *)(*param_1 + 8) == 0)) break;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x1714);
  uVar5 = *(uint *)(param_1 + 0xb);
  if (uVar3 < uVar5) {
    uVar10 = *(int *)((longlong)param_1 + 0x9c) + *(int *)((longlong)param_1 + 0x94);
    if (uVar3 < uVar10) {
      uVar5 = uVar5 - uVar10;
      if (0x102 < uVar5) {
        uVar5 = 0x102;
      }
      memset((void *)((ulonglong)uVar10 + param_1[10]),0,(ulonglong)uVar5);
      *(uint *)((longlong)param_1 + 0x1714) = uVar5 + uVar10;
    }
    else if (uVar3 < uVar10 + 0x102) {
      uVar10 = (uVar10 - uVar3) + 0x102;
      uVar8 = uVar5 - uVar3;
      if (uVar10 <= uVar5 - uVar3) {
        uVar8 = uVar10;
      }
      memset((void *)((ulonglong)uVar3 + param_1[10]),0,(ulonglong)uVar8);
      *(int *)((longlong)param_1 + 0x1714) = *(int *)((longlong)param_1 + 0x1714) + uVar8;
    }
  }
  return;
}



// FUNCTION 144b4e060 FUN_144b4e060 body=115 status=ok
// SIG undefined FUN_144b4e060(void)

void FUN_144b4e060(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  bi_flush(lVar2);
  uVar3 = *(uint *)(param_1 + 0x18);
  if (*(uint *)(lVar2 + 0x28) <= *(uint *)(param_1 + 0x18)) {
    uVar3 = *(uint *)(lVar2 + 0x28);
  }
  if (uVar3 != 0) {
    memcpy(*(void **)(param_1 + 0x10),*(void **)(lVar2 + 0x20),(ulonglong)uVar3);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar3;
    *(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + (ulonglong)uVar3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar3;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar3;
    piVar1 = (int *)(lVar2 + 0x28);
    *piVar1 = *piVar1 - uVar3;
    if (*piVar1 == 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
    }
  }
  return;
}



// FUNCTION 144b4e0e0 FUN_144b4e0e0 body=447 status=ok
// SIG undefined FUN_144b4e0e0(void)

uint FUN_144b4e0e0(longlong param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  ulonglong uVar17;
  uint uVar18;
  
  uVar12 = *(uint *)(param_1 + 0x94);
  uVar17 = (ulonglong)param_2;
  uVar9 = (ulonglong)(int)*(uint *)(param_1 + 0xa0);
  pcVar13 = (char *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar12);
  cVar11 = pcVar13[uVar9 - 1];
  cVar10 = pcVar13[uVar9];
  uVar18 = 0;
  if (*(int *)(param_1 + 0x44) - 0x106U < uVar12) {
    uVar18 = (uVar12 - *(int *)(param_1 + 0x44)) + 0x106;
  }
  pcVar2 = pcVar13 + 0x102;
  uVar12 = *(uint *)(param_1 + 0xa4) >> 2;
  if (*(uint *)(param_1 + 0xa0) < *(uint *)(param_1 + 0xb4)) {
    uVar12 = *(uint *)(param_1 + 0xa4);
  }
  uVar4 = *(uint *)(param_1 + 0x9c);
  uVar5 = *(uint *)(param_1 + 0xb8);
  if (uVar4 < *(uint *)(param_1 + 0xb8)) {
    uVar5 = uVar4;
  }
  do {
    pcVar6 = (char *)(*(longlong *)(param_1 + 0x50) + uVar17);
    iVar7 = (int)uVar9;
    if ((((pcVar6[iVar7] == cVar10) && (pcVar6[(longlong)iVar7 + -1] == cVar11)) &&
        (*pcVar6 == *pcVar13)) && (pcVar6[1] == pcVar13[1])) {
      pcVar6 = pcVar6 + 2;
      pcVar15 = pcVar13 + 2;
      while (((((pcVar16 = pcVar15 + 1, *pcVar16 == pcVar6[1] &&
                (pcVar16 = pcVar15 + 2, *pcVar16 == pcVar6[2])) &&
               ((pcVar16 = pcVar15 + 3, *pcVar16 == pcVar6[3] &&
                ((pcVar16 = pcVar15 + 4, *pcVar16 == pcVar6[4] &&
                 (pcVar16 = pcVar15 + 5, *pcVar16 == pcVar6[5])))))) &&
              (pcVar16 = pcVar15 + 6, *pcVar16 == pcVar6[6])) &&
             (pcVar16 = pcVar15 + 7, *pcVar16 == pcVar6[7]))) {
        pcVar1 = pcVar6 + 8;
        pcVar6 = pcVar6 + 8;
        pcVar16 = pcVar15 + 8;
        if ((*pcVar16 != *pcVar1) || (pcVar15 = pcVar16, pcVar2 <= pcVar16)) break;
      }
      iVar14 = (int)pcVar16 - (int)pcVar2;
      uVar8 = iVar14 + 0x102;
      if (iVar7 < (int)uVar8) {
        *(int *)(param_1 + 0x98) = (int)uVar17;
        uVar9 = (ulonglong)uVar8;
        if ((int)uVar5 <= (int)uVar8) {
LAB_144b4e27c:
          if (uVar8 <= uVar4) {
            uVar4 = uVar8;
          }
          return uVar4;
        }
        cVar11 = pcVar2[(longlong)iVar14 + -1];
        cVar10 = pcVar2[(longlong)(int)uVar8 + -0x102];
      }
    }
    uVar8 = (uint)uVar9;
    uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x60) + (*(uint *)(param_1 + 0x4c) & uVar17) * 2);
    uVar17 = (ulonglong)uVar3;
    if ((uVar3 <= uVar18) || (uVar12 = uVar12 - 1, uVar12 == 0)) goto LAB_144b4e27c;
  } while( true );
}



// FUNCTION 144b4e2a0 FUN_144b4e2a0 body=6161 status=ok
// SIG undefined FUN_144b4e2a0(void)

int FUN_144b4e2a0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  byte *_Src;
  uint uVar17;
  ulonglong uVar18;
  undefined2 uVar19;
  int iVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint local_res8;
  int local_res18;
  uint local_res20;
  byte local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  uint local_60;
  undefined1 *local_58;
  longlong *local_50;
  
  if ((((((param_1 != (longlong *)0x0) && (param_1[6] != 0)) && (param_1[7] != 0)) &&
       ((puVar1 = (undefined8 *)param_1[5], puVar1 != (undefined8 *)0x0 &&
        ((longlong *)*puVar1 == param_1)))) && (*(int *)(puVar1 + 1) - 0x3f34U < 0x20)) &&
     ((param_1[2] != 0 && ((*param_1 != 0 || ((int)param_1[1] == 0)))))) {
    lVar2 = param_1[5];
    iVar5 = *(int *)(lVar2 + 8);
    if (iVar5 == 0x3f3f) {
      *(undefined4 *)(lVar2 + 8) = 0x3f40;
      iVar5 = 0x3f40;
    }
    local_50 = param_1 + 2;
    uVar6 = *(uint *)(param_1 + 3);
    puVar21 = (undefined1 *)param_1[2];
    uVar17 = *(uint *)(param_1 + 1);
    _Src = (byte *)*param_1;
    uVar23 = *(uint *)(lVar2 + 0x48);
    uVar15 = *(uint *)(lVar2 + 0x4c);
    local_res18 = 0;
    local_res8 = uVar6;
    local_res20 = uVar6;
    local_58 = puVar21;
    local_60 = uVar17;
    while (iVar5 - 0x3f34U < 0x20) {
      uVar24 = 0;
      uVar13 = 0;
      uVar11 = uVar17;
      uVar7 = local_64;
      switch(IMAGE_DOS_HEADER_140000000.e_magic +
             (&switchD_144b4e3b8::switchdataD_144b4fab4)[(int)(iVar5 - 0x3f34U)]) {
      case (char *)0x144b4e3ba:
        if (*(int *)(lVar2 + 0x10) == 0) {
          *(undefined4 *)(lVar2 + 8) = 0x3f40;
        }
        else {
          for (; uVar15 < 0x10; uVar15 = uVar15 + 8) {
            uVar11 = 0;
            if (uVar17 == 0) goto LAB_144b4ec09;
            uVar17 = uVar17 - 1;
            uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
            _Src = _Src + 1;
          }
          if (((*(byte *)(lVar2 + 0x10) & 2) == 0) || (uVar23 != 0x8b1f)) {
            if (*(longlong *)(lVar2 + 0x28) != 0) {
              *(undefined4 *)(*(longlong *)(lVar2 + 0x28) + 0x40) = 0xffffffff;
            }
            if (((*(byte *)(lVar2 + 0x10) & 1) == 0) ||
               (uVar7 = (uVar23 & 0xff) * 0x100 + (uVar23 >> 8), uVar7 != (uVar7 / 0x1f) * 0x1f)) {
              param_1[4] = (longlong)"incorrect header check";
              *(undefined4 *)(lVar2 + 8) = 0x3f51;
            }
            else if (((byte)uVar23 & 0xf) == 8) {
              uVar15 = uVar15 - 4;
              uVar11 = (uVar23 >> 4 & 0xf) + 8;
              uVar7 = *(uint *)(lVar2 + 0x30);
              if (*(uint *)(lVar2 + 0x30) == 0) {
                *(uint *)(lVar2 + 0x30) = uVar11;
                uVar7 = uVar11;
              }
              if ((uVar11 < 0x10) && (uVar11 <= uVar7)) {
                *(undefined4 *)(lVar2 + 0x18) = 0;
                *(int *)(lVar2 + 0x1c) = 1 << (sbyte)uVar11;
                uVar8 = FUN_144d90020(0,0,0);
                uVar15 = 0;
                *(undefined4 *)(lVar2 + 0x20) = uVar8;
                *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
                *(uint *)(lVar2 + 8) = ~(uVar23 >> 0xc) & 2 | 0x3f3d;
                uVar23 = 0;
                puVar21 = local_58;
                uVar6 = local_res20;
              }
              else {
                param_1[4] = (longlong)"invalid window size";
                *(undefined4 *)(lVar2 + 8) = 0x3f51;
                uVar23 = uVar23 >> 4;
              }
            }
            else {
              param_1[4] = (longlong)"unknown compression method";
              *(undefined4 *)(lVar2 + 8) = 0x3f51;
            }
          }
          else {
            if (*(int *)(lVar2 + 0x30) == 0) {
              *(undefined4 *)(lVar2 + 0x30) = 0xf;
            }
            uVar8 = FUN_144d90310(0,0,0);
            *(undefined4 *)(lVar2 + 0x20) = uVar8;
            local_67 = 0x8b;
            local_68 = (byte)uVar23;
            uVar8 = FUN_144d90310(*(undefined4 *)(lVar2 + 0x20),&local_68,2);
            *(undefined4 *)(lVar2 + 0x20) = uVar8;
            uVar23 = 0;
            uVar15 = 0;
            *(undefined4 *)(lVar2 + 8) = 0x3f35;
            puVar21 = local_58;
            uVar6 = local_res20;
          }
        }
        break;
      case (char *)0x144b4e55b:
        for (; uVar15 < 0x10; uVar15 = uVar15 + 8) {
          uVar11 = 0;
          if (uVar17 == 0) goto LAB_144b4ec09;
          uVar17 = uVar17 - 1;
          uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
          _Src = _Src + 1;
        }
        *(uint *)(lVar2 + 0x18) = uVar23;
        if ((byte)uVar23 == 8) {
          if ((uVar23 & 0xe000) == 0) {
            if (*(uint **)(lVar2 + 0x28) != (uint *)0x0) {
              **(uint **)(lVar2 + 0x28) = uVar23 >> 8 & 1;
            }
            if (((*(uint *)(lVar2 + 0x18) & 0x200) != 0) && ((*(byte *)(lVar2 + 0x10) & 4) != 0)) {
              local_67 = (undefined1)(uVar23 >> 8);
              local_68 = (byte)uVar23;
              uVar8 = FUN_144d90310(*(undefined4 *)(lVar2 + 0x20),&local_68,2);
              *(undefined4 *)(lVar2 + 0x20) = uVar8;
            }
            *(undefined4 *)(lVar2 + 8) = 0x3f36;
            uVar23 = uVar13;
            uVar15 = uVar13;
            do {
              uVar11 = 0;
              uVar7 = local_64;
              if (uVar17 == 0) goto LAB_144b4ec09;
              uVar17 = uVar17 - 1;
              uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
              _Src = _Src + 1;
              uVar15 = uVar15 + 8;
joined_r0x000144b4e61c:
            } while (uVar15 < 0x20);
            if (*(longlong *)(lVar2 + 0x28) != 0) {
              *(uint *)(*(longlong *)(lVar2 + 0x28) + 4) = uVar23;
            }
            if (((*(uint *)(lVar2 + 0x18) & 0x200) != 0) && ((*(byte *)(lVar2 + 0x10) & 4) != 0)) {
              local_68 = (byte)uVar23;
              local_67 = (undefined1)(uVar23 >> 8);
              local_66 = (undefined1)(uVar23 >> 0x10);
              local_65 = (undefined1)(uVar23 >> 0x18);
              uVar8 = FUN_144d90310(*(undefined4 *)(lVar2 + 0x20),&local_68,4);
              *(undefined4 *)(lVar2 + 0x20) = uVar8;
            }
            *(undefined4 *)(lVar2 + 8) = 0x3f37;
            uVar23 = uVar13;
            uVar15 = uVar13;
            do {
              uVar11 = 0;
              uVar7 = local_64;
              if (uVar17 == 0) goto LAB_144b4ec09;
              uVar17 = uVar17 - 1;
              uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
              _Src = _Src + 1;
              uVar15 = uVar15 + 8;
joined_r0x000144b4e6ab:
            } while (uVar15 < 0x10);
            if (*(longlong *)(lVar2 + 0x28) != 0) {
              *(uint *)(*(longlong *)(lVar2 + 0x28) + 8) = uVar23 & 0xff;
              *(uint *)(*(longlong *)(lVar2 + 0x28) + 0xc) = uVar23 >> 8;
            }
            if (((*(uint *)(lVar2 + 0x18) & 0x200) != 0) && ((*(byte *)(lVar2 + 0x10) & 4) != 0)) {
              local_68 = (byte)uVar23;
              local_67 = (undefined1)(uVar23 >> 8);
              uVar8 = FUN_144d90310(*(undefined4 *)(lVar2 + 0x20),&local_68,2);
              *(undefined4 *)(lVar2 + 0x20) = uVar8;
            }
            *(undefined4 *)(lVar2 + 8) = 0x3f38;
            uVar23 = uVar13;
            uVar15 = uVar13;
            goto switchD_144b4e3b8_caseD_44b4e72d;
          }
          param_1[4] = (longlong)"unknown header flags set";
          *(undefined4 *)(lVar2 + 8) = 0x3f51;
        }
        else {
          param_1[4] = (longlong)"unknown compression method";
          *(undefined4 *)(lVar2 + 8) = 0x3f51;
        }
        break;
      case (char *)0x144b4e619:
        goto joined_r0x000144b4e61c;
      case (char *)0x144b4e6a8:
        goto joined_r0x000144b4e6ab;
      case (char *)0x144b4e72d:
switchD_144b4e3b8_caseD_44b4e72d:
        if ((*(uint *)(lVar2 + 0x18) & 0x400) == 0) {
          uVar13 = uVar23;
          if (*(longlong *)(lVar2 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x10) = 0;
          }
        }
        else {
          for (; uVar15 < 0x10; uVar15 = uVar15 + 8) {
            uVar11 = 0;
            uVar7 = local_64;
            if (uVar17 == 0) goto LAB_144b4ec09;
            uVar17 = uVar17 - 1;
            uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
            _Src = _Src + 1;
          }
          *(uint *)(lVar2 + 0x50) = uVar23;
          if (*(longlong *)(lVar2 + 0x28) != 0) {
            *(uint *)(*(longlong *)(lVar2 + 0x28) + 0x18) = uVar23;
          }
          uVar15 = uVar13;
          if (((*(uint *)(lVar2 + 0x18) & 0x200) != 0) && ((*(byte *)(lVar2 + 0x10) & 4) != 0)) {
            local_68 = (byte)uVar23;
            local_67 = (undefined1)(uVar23 >> 8);
            uVar8 = FUN_144d90310(*(undefined4 *)(lVar2 + 0x20),&local_68,2);
            *(undefined4 *)(lVar2 + 0x20) = uVar8;
          }
        }
        uVar23 = uVar13;
        *(undefined4 *)(lVar2 + 8) = 0x3f39;
      case (char *)0x144b4e7c5:
        if ((*(uint *)(lVar2 + 0x18) & 0x400) != 0) {
          uVar6 = *(uint *)(lVar2 + 0x50);
          uVar7 = uVar17;
          if (uVar6 <= uVar17) {
            uVar7 = uVar6;
          }
          uVar11 = uVar17;
          if (uVar7 != 0) {
            lVar14 = *(longlong *)(lVar2 + 0x28);
            if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0x10) != 0)) {
              uVar11 = *(uint *)(lVar14 + 0x1c);
              uVar6 = *(int *)(lVar14 + 0x18) - uVar6;
              if (uVar6 < uVar11) {
                uVar13 = uVar7;
                if (uVar11 < uVar7 + uVar6) {
                  uVar13 = uVar11 - uVar6;
                }
                memcpy((void *)((ulonglong)uVar6 + *(longlong *)(lVar14 + 0x10)),_Src,
                       (ulonglong)uVar13);
              }
            }
            if (((*(uint *)(lVar2 + 0x18) & 0x200) != 0) && ((*(byte *)(lVar2 + 0x10) & 4) != 0)) {
              uVar8 = FUN_144d90310(*(undefined4 *)(lVar2 + 0x20),_Src,uVar7);
              *(undefined4 *)(lVar2 + 0x20) = uVar8;
            }
            uVar11 = uVar17 - uVar7;
            _Src = _Src + uVar7;
            uVar6 = *(int *)(lVar2 + 0x50) - uVar7;
            *(uint *)(lVar2 + 0x50) = uVar6;
          }
          uVar17 = uVar11;
          uVar7 = local_64;
          if (uVar6 != 0) goto LAB_144b4ec09;
        }
        *(undefined4 *)(lVar2 + 0x50) = 0;
        *(undefined4 *)(lVar2 + 8) = 0x3f3a;
switchD_144b4e3b8_caseD_44b4e870:
        if ((*(uint *)(lVar2 + 0x18) & 0x800) == 0) {
          if (*(longlong *)(lVar2 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20) = 0;
          }
LAB_144b4e90b:
          *(undefined4 *)(lVar2 + 0x50) = 0;
          *(undefined4 *)(lVar2 + 8) = 0x3f3b;
switchD_144b4e3b8_caseD_44b4e917:
          uVar24 = 0;
          if ((*(uint *)(lVar2 + 0x18) & 0x1000) == 0) {
            if (*(longlong *)(lVar2 + 0x28) != 0) {
              *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x30) = 0;
            }
LAB_144b4e9ab:
            *(undefined4 *)(lVar2 + 8) = 0x3f3c;
            puVar21 = local_58;
            uVar6 = local_res20;
switchD_144b4e3b8_caseD_44b4e9c0:
            if ((*(uint *)(lVar2 + 0x18) & 0x200) != 0) {
              for (; uVar15 < 0x10; uVar15 = uVar15 + 8) {
                uVar11 = 0;
                uVar7 = local_64;
                if (uVar17 == 0) goto LAB_144b4ec09;
                uVar17 = uVar17 - 1;
                uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
                _Src = _Src + 1;
              }
              if (((*(byte *)(lVar2 + 0x10) & 4) != 0) && (uVar23 != *(ushort *)(lVar2 + 0x20))) {
                param_1[4] = (longlong)"header crc mismatch";
                *(undefined4 *)(lVar2 + 8) = 0x3f51;
                break;
              }
              uVar23 = 0;
              uVar15 = uVar23;
            }
            if (*(longlong *)(lVar2 + 0x28) != 0) {
              *(uint *)(*(longlong *)(lVar2 + 0x28) + 0x3c) = *(int *)(lVar2 + 0x18) >> 9 & 1;
              *(undefined4 *)(*(longlong *)(lVar2 + 0x28) + 0x40) = 1;
            }
            uVar8 = FUN_144d90310(0,0,0);
            *(undefined4 *)(lVar2 + 0x20) = uVar8;
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
LAB_144b4ea53:
            *(undefined4 *)(lVar2 + 8) = 0x3f3f;
            puVar21 = local_58;
            uVar6 = local_res20;
            break;
          }
          uVar11 = uVar17;
          uVar7 = local_64;
          if (uVar17 != 0) {
            do {
              uVar6 = (int)uVar24 + 1;
              uVar18 = (ulonglong)uVar6;
              bVar9 = _Src[uVar24];
              lVar14 = *(longlong *)(lVar2 + 0x28);
              if (((lVar14 != 0) && (*(longlong *)(lVar14 + 0x30) != 0)) &&
                 (*(uint *)(lVar2 + 0x50) < *(uint *)(lVar14 + 0x38))) {
                *(byte *)((ulonglong)*(uint *)(lVar2 + 0x50) + *(longlong *)(lVar14 + 0x30)) = bVar9
                ;
                *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
              }
            } while ((bVar9 != 0) && (uVar24 = uVar18, uVar6 < uVar17));
            if (((*(uint *)(lVar2 + 0x18) & 0x200) != 0) && ((*(byte *)(lVar2 + 0x10) & 4) != 0)) {
              uVar8 = FUN_144d90310(*(undefined4 *)(lVar2 + 0x20),_Src,uVar18);
              *(undefined4 *)(lVar2 + 0x20) = uVar8;
            }
            uVar17 = uVar17 - uVar6;
            _Src = _Src + uVar18;
            uVar11 = uVar17;
            uVar7 = local_64;
            if (bVar9 == 0) goto LAB_144b4e9ab;
          }
        }
        else {
          uVar11 = uVar17;
          uVar7 = local_64;
          if (uVar17 != 0) {
            do {
              uVar11 = (int)uVar24 + 1;
              uVar18 = (ulonglong)uVar11;
              bVar9 = _Src[uVar24];
              lVar14 = *(longlong *)(lVar2 + 0x28);
              if (((lVar14 != 0) && (*(longlong *)(lVar14 + 0x20) != 0)) &&
                 (*(uint *)(lVar2 + 0x50) < *(uint *)(lVar14 + 0x28))) {
                *(byte *)((ulonglong)*(uint *)(lVar2 + 0x50) + *(longlong *)(lVar14 + 0x20)) = bVar9
                ;
                *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
              }
            } while ((bVar9 != 0) && (uVar24 = uVar18, uVar11 < uVar17));
            if (((*(uint *)(lVar2 + 0x18) & 0x200) != 0) && ((*(byte *)(lVar2 + 0x10) & 4) != 0)) {
              uVar8 = FUN_144d90310(*(undefined4 *)(lVar2 + 0x20),_Src,uVar18);
              *(undefined4 *)(lVar2 + 0x20) = uVar8;
            }
            uVar11 = uVar17 - uVar11;
            _Src = _Src + uVar18;
            uVar17 = uVar11;
            uVar7 = local_64;
            if (bVar9 == 0) goto LAB_144b4e90b;
          }
        }
        goto LAB_144b4ec09;
      case (char *)0x144b4e870:
        goto switchD_144b4e3b8_caseD_44b4e870;
      case (char *)0x144b4e917:
        goto switchD_144b4e3b8_caseD_44b4e917;
      case (char *)0x144b4e9c0:
        goto switchD_144b4e3b8_caseD_44b4e9c0;
      case (char *)0x144b4ea92:
        for (; uVar15 < 0x20; uVar15 = uVar15 + 8) {
          uVar11 = 0;
          if (uVar17 == 0) goto LAB_144b4ec09;
          uVar17 = uVar17 - 1;
          uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
          _Src = _Src + 1;
        }
        uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18
        ;
        *(uint *)(lVar2 + 0x20) = uVar23;
        *(uint *)((longlong)param_1 + 0x4c) = uVar23;
        *(undefined4 *)(lVar2 + 8) = 0x3f3e;
        uVar23 = uVar13;
        uVar15 = uVar13;
      case (char *)0x144b4ead1:
        if (*(int *)(lVar2 + 0x14) == 0) {
          param_1[2] = (longlong)puVar21;
          *(uint *)(param_1 + 3) = uVar6;
          *param_1 = (longlong)_Src;
          *(uint *)(param_1 + 1) = uVar17;
          *(uint *)(lVar2 + 0x48) = uVar23;
          *(uint *)(lVar2 + 0x4c) = uVar15;
          return 2;
        }
        uVar8 = FUN_144d90020(0,0,0);
        *(undefined4 *)(lVar2 + 0x20) = uVar8;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
        *(undefined4 *)(lVar2 + 8) = 0x3f3f;
        puVar21 = local_58;
        uVar6 = local_res20;
switchD_144b4e3b8_caseD_44b4eb06:
        uVar11 = uVar17;
        uVar7 = local_64;
        if (param_2 - 5U < 2) goto LAB_144b4ec09;
switchD_144b4e3b8_caseD_44b4eb12:
        if (*(int *)(lVar2 + 0xc) == 0) {
          for (; uVar7 = local_64, uVar15 < 3; uVar15 = uVar15 + 8) {
            uVar11 = 0;
            if (uVar17 == 0) goto LAB_144b4ec09;
            uVar17 = uVar17 - 1;
            uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
            _Src = _Src + 1;
          }
          *(uint *)(lVar2 + 0xc) = uVar23 & 1;
          uVar11 = uVar23 >> 1 & 3;
          if (uVar11 == 0) {
            *(undefined4 *)(lVar2 + 8) = 0x3f41;
          }
          else {
            if (uVar11 != 1) {
              if (uVar11 == 2) {
                uVar15 = uVar15 - 3;
                *(undefined4 *)(lVar2 + 8) = 0x3f44;
                uVar23 = uVar23 >> 3;
              }
              else {
                if (uVar11 != 3) goto LAB_144b4ec98;
                param_1[4] = (longlong)"invalid block type";
                uVar15 = uVar15 - 3;
                *(undefined4 *)(lVar2 + 8) = 0x3f51;
                uVar23 = uVar23 >> 3;
              }
              break;
            }
            *(undefined4 *)(lVar2 + 0x70) = 9;
            *(undefined **)(lVar2 + 0x60) = &DAT_14996cc70;
            *(undefined **)(lVar2 + 0x68) = &DAT_14996d470;
            *(undefined4 *)(lVar2 + 0x74) = 5;
            *(undefined4 *)(lVar2 + 8) = 0x3f47;
            if (param_2 == 6) {
              uVar23 = uVar23 >> 3;
              uVar15 = uVar15 - 3;
              uVar11 = uVar17;
              goto LAB_144b4ec09;
            }
          }
LAB_144b4ec98:
          uVar15 = uVar15 - 3;
          uVar23 = uVar23 >> 3;
        }
        else {
          *(undefined4 *)(lVar2 + 8) = 0x3f4e;
          uVar7 = uVar15 & 7;
          uVar15 = uVar15 - uVar7;
          uVar23 = uVar23 >> (sbyte)uVar7;
        }
        break;
      case (char *)0x144b4eb06:
        goto switchD_144b4e3b8_caseD_44b4eb06;
      case (char *)0x144b4eb12:
        goto switchD_144b4e3b8_caseD_44b4eb12;
      case (char *)0x144b4ec86:
        goto LAB_144b4faa0;
      case (char *)0x144b4eca4:
        uVar23 = uVar23 >> (sbyte)(uVar15 & 7);
        for (uVar15 = uVar15 - (uVar15 & 7); uVar15 < 0x20; uVar15 = uVar15 + 8) {
          uVar11 = 0;
          if (uVar17 == 0) goto LAB_144b4ec09;
          uVar17 = uVar17 - 1;
          uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
          _Src = _Src + 1;
        }
        if ((uVar23 & 0xffff) == ~uVar23 >> 0x10) {
          *(uint *)(lVar2 + 0x50) = uVar23 & 0xffff;
          *(undefined4 *)(lVar2 + 8) = 0x3f42;
          uVar11 = uVar17;
          uVar23 = uVar13;
          uVar15 = uVar13;
          if (param_2 != 6) goto switchD_144b4e3b8_caseD_44b4ed17;
          goto LAB_144b4ec09;
        }
        param_1[4] = (longlong)"invalid stored block lengths";
        *(undefined4 *)(lVar2 + 8) = 0x3f51;
        break;
      case (char *)0x144b4ed17:
switchD_144b4e3b8_caseD_44b4ed17:
        *(undefined4 *)(lVar2 + 8) = 0x3f43;
      case (char *)0x144b4ed1f:
        uVar11 = *(uint *)(lVar2 + 0x50);
        if (uVar11 == 0) {
          *(undefined4 *)(lVar2 + 8) = 0x3f3f;
        }
        else {
          uVar13 = uVar17;
          if (uVar11 <= uVar17) {
            uVar13 = uVar11;
          }
          if (uVar6 < uVar13) {
            uVar13 = uVar6;
          }
          uVar24 = (ulonglong)uVar13;
          uVar11 = uVar17;
          if (uVar13 == 0) goto LAB_144b4ec09;
          memcpy(puVar21,_Src,uVar24);
          uVar17 = uVar17 - uVar13;
          local_res20 = local_res20 - uVar13;
          local_58 = local_58 + uVar24;
          _Src = _Src + uVar24;
          *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) - uVar13;
          puVar21 = local_58;
          uVar6 = local_res20;
        }
        break;
      case (char *)0x144b4ed8d:
        for (; uVar15 < 0xe; uVar15 = uVar15 + 8) {
          uVar11 = 0;
          if (uVar17 == 0) goto LAB_144b4ec09;
          uVar17 = uVar17 - 1;
          uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
          _Src = _Src + 1;
        }
        uVar15 = uVar15 - 0xe;
        uVar13 = uVar23 >> 5;
        uVar11 = (uVar23 & 0x1f) + 0x101;
        uVar22 = uVar23 >> 10;
        *(uint *)(lVar2 + 0x7c) = uVar11;
        uVar23 = uVar23 >> 0xe;
        uVar13 = (uVar13 & 0x1f) + 1;
        *(uint *)(lVar2 + 0x80) = uVar13;
        *(uint *)(lVar2 + 0x78) = (uVar22 & 0xf) + 4;
        if ((uVar11 < 0x11f) && (uVar13 < 0x1f)) {
          *(undefined4 *)(lVar2 + 0x84) = 0;
          *(undefined4 *)(lVar2 + 8) = 0x3f45;
          goto switchD_144b4e3b8_caseD_44b4ee18;
        }
        param_1[4] = (longlong)"too many length or distance symbols";
        *(undefined4 *)(lVar2 + 8) = 0x3f51;
        break;
      case (char *)0x144b4ee18:
switchD_144b4e3b8_caseD_44b4ee18:
        uVar6 = *(uint *)(lVar2 + 0x84);
        if (uVar6 < *(uint *)(lVar2 + 0x78)) {
          do {
            for (; uVar15 < 3; uVar15 = uVar15 + 8) {
              uVar11 = 0;
              if (uVar17 == 0) goto LAB_144b4ec09;
              uVar17 = uVar17 - 1;
              uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
              _Src = _Src + 1;
            }
            uVar10 = (ushort)uVar23;
            uVar23 = uVar23 >> 3;
            uVar15 = uVar15 - 3;
            *(ushort *)
             (lVar2 + 0x90 +
             (ulonglong)*(ushort *)(&DAT_14996d4f0 + (ulonglong)*(uint *)(lVar2 + 0x84) * 2) * 2) =
                 uVar10 & 7;
            uVar6 = *(int *)(lVar2 + 0x84) + 1;
            *(uint *)(lVar2 + 0x84) = uVar6;
          } while (uVar6 < *(uint *)(lVar2 + 0x78));
        }
        while (uVar6 < 0x13) {
          *(undefined2 *)
           (lVar2 + 0x90 + (ulonglong)*(ushort *)(&DAT_14996d4f0 + (ulonglong)uVar6 * 2) * 2) = 0;
          uVar6 = *(int *)(lVar2 + 0x84) + 1;
          *(uint *)(lVar2 + 0x84) = uVar6;
        }
        *(undefined4 *)(lVar2 + 0x70) = 7;
        *(longlong *)(lVar2 + 0x60) = lVar2 + 0x550;
        *(longlong *)(lVar2 + 0x88) = lVar2 + 0x550;
        local_res18 = FUN_144d90800(0,lVar2 + 0x90,0x13,(longlong *)(lVar2 + 0x88),
                                    (undefined4 *)(lVar2 + 0x70),lVar2 + 0x310);
        if (local_res18 == 0) {
          *(undefined4 *)(lVar2 + 0x84) = 0;
          *(undefined4 *)(lVar2 + 8) = 0x3f46;
          uVar6 = local_res20;
          goto switchD_144b4e3b8_caseD_44b4ef4e;
        }
        param_1[4] = (longlong)"invalid code lengths set";
        *(undefined4 *)(lVar2 + 8) = 0x3f51;
        puVar21 = local_58;
        uVar6 = local_res20;
        break;
      case (char *)0x144b4ef4e:
switchD_144b4e3b8_caseD_44b4ef4e:
        if (*(uint *)(lVar2 + 0x84) < (uint)(*(int *)(lVar2 + 0x80) + *(int *)(lVar2 + 0x7c))) {
          do {
            bVar9 = (byte)*(undefined4 *)(lVar2 + 0x70);
            uVar7 = *(uint *)(*(longlong *)(lVar2 + 0x60) +
                             (ulonglong)((1 << (bVar9 & 0x1f)) - 1U & uVar23) * 4);
            uVar13 = uVar7 >> 8 & 0xff;
            uVar10 = (ushort)(uVar7 >> 0x10);
            local_64 = uVar7;
            if (uVar15 < uVar13) {
              do {
                uVar11 = 0;
                uVar7 = local_64;
                if (uVar17 == 0) goto LAB_144b4ec09;
                uVar17 = uVar17 - 1;
                uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
                _Src = _Src + 1;
                uVar15 = uVar15 + 8;
                uVar7 = *(uint *)(*(longlong *)(lVar2 + 0x60) +
                                 (ulonglong)((1 << (bVar9 & 0x1f)) - 1U & uVar23) * 4);
                uVar13 = uVar7 >> 8 & 0xff;
                uVar10 = (ushort)(uVar7 >> 0x10);
                local_64 = uVar7;
              } while (uVar15 < uVar13);
            }
            local_64 = uVar7;
            if (0xf < uVar10) {
              local_64._1_1_ = (byte)(uVar7 >> 8);
              if (uVar10 == 0x10) {
                for (; uVar15 < uVar13 + 2; uVar15 = uVar15 + 8) {
                  uVar11 = 0;
                  if (uVar17 == 0) goto LAB_144b4ec09;
                  uVar17 = uVar17 - 1;
                  uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
                  _Src = _Src + 1;
                }
                uVar15 = uVar15 - local_64._1_1_;
                uVar23 = uVar23 >> (local_64._1_1_ & 0x1f);
                if (*(int *)(lVar2 + 0x84) != 0) {
                  uVar15 = uVar15 - 2;
                  uVar7 = uVar23 & 3;
                  uVar23 = uVar23 >> 2;
                  iVar12 = uVar7 + 3;
                  uVar19 = *(undefined2 *)
                            (lVar2 + 0x90 + (ulonglong)(*(int *)(lVar2 + 0x84) - 1) * 2);
                  goto LAB_144b4f121;
                }
              }
              else {
                if (uVar10 == 0x11) {
                  for (; uVar15 < uVar13 + 3; uVar15 = uVar15 + 8) {
                    uVar11 = 0;
                    if (uVar17 == 0) goto LAB_144b4ec09;
                    uVar17 = uVar17 - 1;
                    uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
                    _Src = _Src + 1;
                  }
                  iVar5 = -3;
                  uVar23 = uVar23 >> (local_64._1_1_ & 0x1f);
                  iVar12 = (uVar23 & 7) + 3;
                  uVar23 = uVar23 >> 3;
                }
                else {
                  for (; uVar15 < uVar13 + 7; uVar15 = uVar15 + 8) {
                    uVar11 = 0;
                    if (uVar17 == 0) goto LAB_144b4ec09;
                    uVar17 = uVar17 - 1;
                    uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
                    _Src = _Src + 1;
                  }
                  iVar5 = -7;
                  uVar23 = uVar23 >> (local_64._1_1_ & 0x1f);
                  iVar12 = (uVar23 & 0x7f) + 0xb;
                  uVar23 = uVar23 >> 7;
                }
                uVar19 = 0;
                uVar15 = uVar15 + (iVar5 - (uint)local_64._1_1_);
LAB_144b4f121:
                uVar7 = *(uint *)(lVar2 + 0x84);
                if (uVar7 + iVar12 <= (uint)(*(int *)(lVar2 + 0x80) + *(int *)(lVar2 + 0x7c))) {
                  do {
                    *(undefined2 *)(lVar2 + 0x90 + (ulonglong)uVar7 * 2) = uVar19;
                    uVar7 = *(int *)(lVar2 + 0x84) + 1;
                    *(uint *)(lVar2 + 0x84) = uVar7;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                  goto LAB_144b4f163;
                }
              }
              param_1[4] = (longlong)"invalid bit length repeat";
              *(undefined4 *)(lVar2 + 8) = 0x3f51;
              break;
            }
            uVar23 = uVar23 >> ((byte)uVar13 & 0x1f);
            uVar15 = uVar15 - (uVar7 >> 8 & 0xff);
            *(short *)(lVar2 + 0x90 + (ulonglong)*(uint *)(lVar2 + 0x84) * 2) =
                 (short)(uVar7 >> 0x10);
            *(int *)(lVar2 + 0x84) = *(int *)(lVar2 + 0x84) + 1;
            uVar7 = *(uint *)(lVar2 + 0x84);
LAB_144b4f163:
          } while (uVar7 < (uint)(*(int *)(lVar2 + 0x80) + *(int *)(lVar2 + 0x7c)));
        }
        puVar21 = local_58;
        if (*(int *)(lVar2 + 8) != 0x3f51) {
          if (*(short *)(lVar2 + 0x290) == 0) {
            param_1[4] = (longlong)"invalid code -- missing end-of-block";
            *(undefined4 *)(lVar2 + 8) = 0x3f51;
          }
          else {
            *(longlong *)(lVar2 + 0x88) = lVar2 + 0x550;
            *(longlong *)(lVar2 + 0x60) = lVar2 + 0x550;
            *(undefined4 *)(lVar2 + 0x70) = 9;
            local_res18 = FUN_144d90800(1,lVar2 + 0x90,*(undefined4 *)(lVar2 + 0x7c),lVar2 + 0x88,
                                        (undefined4 *)(lVar2 + 0x70),lVar2 + 0x310);
            if (local_res18 == 0) {
              *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar2 + 0x88);
              *(undefined4 *)(lVar2 + 0x74) = 6;
              local_res18 = FUN_144d90800(2,(ulonglong)*(uint *)(lVar2 + 0x7c) * 2 + 0x90 + lVar2,
                                          *(undefined4 *)(lVar2 + 0x80),lVar2 + 0x88,
                                          (undefined4 *)(lVar2 + 0x74),lVar2 + 0x310);
              puVar21 = local_58;
              if (local_res18 == 0) {
                *(undefined4 *)(lVar2 + 8) = 0x3f47;
                uVar6 = local_res20;
                uVar11 = uVar17;
                uVar7 = local_64;
                if (param_2 != 6) goto switchD_144b4e3b8_caseD_44b4f2c9;
                goto LAB_144b4ec09;
              }
              param_1[4] = (longlong)"invalid distances set";
              *(undefined4 *)(lVar2 + 8) = 0x3f51;
              uVar6 = local_res20;
            }
            else {
              param_1[4] = (longlong)"invalid literal/lengths set";
              *(undefined4 *)(lVar2 + 8) = 0x3f51;
              puVar21 = local_58;
              uVar6 = local_res20;
            }
          }
        }
        break;
      case (char *)0x144b4f2c9:
switchD_144b4e3b8_caseD_44b4f2c9:
        *(undefined4 *)(lVar2 + 8) = 0x3f48;
      case (char *)0x144b4f2d1:
        plVar3 = local_50;
        if ((5 < uVar17) && (0x101 < uVar6)) {
          *(uint *)(param_1 + 3) = uVar6;
          *param_1 = (longlong)_Src;
          *(uint *)(param_1 + 1) = uVar17;
          *local_50 = (longlong)puVar21;
          *(uint *)(lVar2 + 0x48) = uVar23;
          *(uint *)(lVar2 + 0x4c) = uVar15;
          FUN_144d90da0(param_1,local_res8);
          local_58 = (undefined1 *)*plVar3;
          local_res20 = *(uint *)(param_1 + 3);
          _Src = (byte *)*param_1;
          uVar17 = *(uint *)(param_1 + 1);
          uVar15 = *(uint *)(lVar2 + 0x4c);
          puVar21 = local_58;
          uVar6 = local_res20;
          uVar23 = *(uint *)(lVar2 + 0x48);
          if (*(int *)(lVar2 + 8) == 0x3f3f) {
            *(undefined4 *)(lVar2 + 0x1be4) = 0xffffffff;
          }
          break;
        }
        lVar14 = *(longlong *)(lVar2 + 0x60);
        bVar9 = (byte)*(undefined4 *)(lVar2 + 0x70);
        *(undefined4 *)(lVar2 + 0x1be4) = 0;
        uVar7 = *(uint *)(lVar14 + (ulonglong)((1 << (bVar9 & 0x1f)) - 1U & uVar23) * 4);
        if (uVar15 < (uVar7 >> 8 & 0xff)) {
          do {
            uVar11 = 0;
            uVar7 = local_64;
            if (uVar17 == 0) goto LAB_144b4ec09;
            uVar17 = uVar17 - 1;
            uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
            _Src = _Src + 1;
            uVar15 = uVar15 + 8;
            uVar7 = *(uint *)(lVar14 + (ulonglong)((1 << (bVar9 & 0x1f)) - 1U & uVar23) * 4);
          } while (uVar15 < (uVar7 >> 8 & 0xff));
        }
        cVar4 = (char)uVar7;
        uVar6 = uVar7;
        if ((cVar4 != '\0') && ((uVar7 & 0xf0) == 0)) {
          local_64._1_1_ = (byte)(uVar7 >> 8);
          uVar13 = (uint)local_64._1_1_;
          uVar6 = *(uint *)(lVar14 + (ulonglong)
                                     ((((1 << (cVar4 + local_64._1_1_ & 0x1f)) - 1U & uVar23) >>
                                      (local_64._1_1_ & 0x1f)) + (uVar7 >> 0x10)) * 4);
          if (uVar15 < (uVar6 >> 8 & 0xff) + (uVar7 >> 8 & 0xff)) {
            do {
              uVar11 = 0;
              if (uVar17 == 0) goto LAB_144b4ec09;
              uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
              uVar17 = uVar17 - 1;
              _Src = _Src + 1;
              uVar15 = uVar15 + 8;
              uVar6 = *(uint *)(lVar14 + (ulonglong)
                                         ((((1 << (cVar4 + local_64._1_1_ & 0x1f)) - 1U & uVar23) >>
                                          (local_64._1_1_ & 0x1f)) + (uVar7 >> 0x10)) * 4);
            } while (uVar15 < (uVar6 >> 8 & 0xff) + uVar13);
          }
          uVar23 = uVar23 >> (local_64._1_1_ & 0x1f);
          uVar15 = uVar15 - uVar13;
          *(uint *)(lVar2 + 0x1be4) = uVar13;
          local_64 = uVar7;
        }
        uVar7 = uVar6 >> 8 & 0xff;
        *(int *)(lVar2 + 0x1be4) = *(int *)(lVar2 + 0x1be4) + uVar7;
        uVar23 = uVar23 >> ((byte)(uVar6 >> 8) & 0x1f);
        uVar15 = uVar15 - uVar7;
        *(uint *)(lVar2 + 0x50) = uVar6 >> 0x10;
        puVar21 = local_58;
        if ((char)uVar6 == '\0') {
          *(undefined4 *)(lVar2 + 8) = 0x3f4d;
          uVar6 = local_res20;
          break;
        }
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 0x40) == 0) {
            *(undefined4 *)(lVar2 + 8) = 0x3f49;
            *(uint *)(lVar2 + 0x58) = uVar6 & 0xf;
switchD_144b4e3b8_caseD_44b4f4ed:
            uVar6 = *(uint *)(lVar2 + 0x58);
            if (uVar6 != 0) {
              for (; uVar15 < uVar6; uVar15 = uVar15 + 8) {
                uVar11 = 0;
                uVar7 = local_64;
                if (uVar17 == 0) goto LAB_144b4ec09;
                uVar17 = uVar17 - 1;
                uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
                _Src = _Src + 1;
              }
              uVar15 = uVar15 - uVar6;
              uVar7 = (1 << ((byte)uVar6 & 0x1f)) - 1U & uVar23;
              uVar23 = uVar23 >> ((byte)uVar6 & 0x1f);
              *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + uVar7;
              *(int *)(lVar2 + 0x1be4) = *(int *)(lVar2 + 0x1be4) + uVar6;
            }
            *(undefined4 *)(lVar2 + 0x1be8) = *(undefined4 *)(lVar2 + 0x50);
            *(undefined4 *)(lVar2 + 8) = 0x3f4a;
switchD_144b4e3b8_caseD_44b4f550:
            lVar14 = *(longlong *)(lVar2 + 0x68);
            bVar9 = (byte)*(undefined4 *)(lVar2 + 0x74);
            uVar7 = *(uint *)(lVar14 + (ulonglong)((1 << (bVar9 & 0x1f)) - 1U & uVar23) * 4);
            if (uVar15 < (uVar7 >> 8 & 0xff)) {
              do {
                uVar11 = 0;
                uVar7 = local_64;
                if (uVar17 == 0) goto LAB_144b4ec09;
                uVar17 = uVar17 - 1;
                uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
                _Src = _Src + 1;
                uVar15 = uVar15 + 8;
                uVar7 = *(uint *)(lVar14 + (ulonglong)((1 << (bVar9 & 0x1f)) - 1U & uVar23) * 4);
              } while (uVar15 < (uVar7 >> 8 & 0xff));
            }
            uVar6 = uVar7;
            if ((uVar7 & 0xf0) == 0) {
              local_64._1_1_ = (byte)(uVar7 >> 8);
              uVar13 = (uint)local_64._1_1_;
              uVar6 = *(uint *)(lVar14 + (ulonglong)
                                         ((((1 << ((char)uVar7 + local_64._1_1_ & 0x1f)) - 1U &
                                           uVar23) >> (local_64._1_1_ & 0x1f)) + (uVar7 >> 0x10)) *
                                         4);
              if (uVar15 < (uVar6 >> 8 & 0xff) + (uVar7 >> 8 & 0xff)) {
                do {
                  uVar11 = 0;
                  if (uVar17 == 0) goto LAB_144b4ec09;
                  uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
                  uVar17 = uVar17 - 1;
                  _Src = _Src + 1;
                  uVar15 = uVar15 + 8;
                  uVar6 = *(uint *)(lVar14 + (ulonglong)
                                             ((((1 << ((char)uVar7 + local_64._1_1_ & 0x1f)) - 1U &
                                               uVar23) >> (local_64._1_1_ & 0x1f)) + (uVar7 >> 0x10)
                                             ) * 4);
                } while (uVar15 < (uVar6 >> 8 & 0xff) + uVar13);
              }
              uVar15 = uVar15 - uVar13;
              uVar23 = uVar23 >> (local_64._1_1_ & 0x1f);
              *(int *)(lVar2 + 0x1be4) = *(int *)(lVar2 + 0x1be4) + uVar13;
              local_64 = uVar7;
            }
            uVar7 = uVar6 >> 8 & 0xff;
            *(int *)(lVar2 + 0x1be4) = *(int *)(lVar2 + 0x1be4) + uVar7;
            uVar15 = uVar15 - uVar7;
            uVar23 = uVar23 >> ((byte)(uVar6 >> 8) & 0x1f);
            puVar21 = local_58;
            if ((uVar6 & 0x40) == 0) {
              *(uint *)(lVar2 + 0x54) = uVar6 >> 0x10;
              *(undefined4 *)(lVar2 + 8) = 0x3f4b;
              *(uint *)(lVar2 + 0x58) = uVar6 & 0xf;
              uVar6 = local_res20;
switchD_144b4e3b8_caseD_44b4f6d0:
              uVar13 = *(uint *)(lVar2 + 0x58);
              if (uVar13 != 0) {
                for (; uVar15 < uVar13; uVar15 = uVar15 + 8) {
                  uVar11 = 0;
                  uVar7 = local_64;
                  if (uVar17 == 0) goto LAB_144b4ec09;
                  uVar17 = uVar17 - 1;
                  uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
                  _Src = _Src + 1;
                }
                uVar15 = uVar15 - uVar13;
                uVar7 = (1 << ((byte)uVar13 & 0x1f)) - 1U & uVar23;
                uVar23 = uVar23 >> ((byte)uVar13 & 0x1f);
                *(int *)(lVar2 + 0x54) = *(int *)(lVar2 + 0x54) + uVar7;
                *(int *)(lVar2 + 0x1be4) = *(int *)(lVar2 + 0x1be4) + uVar13;
              }
              *(undefined4 *)(lVar2 + 8) = 0x3f4c;
switchD_144b4e3b8_caseD_44b4f725:
              uVar11 = uVar17;
              uVar7 = local_64;
              if (uVar6 == 0) goto LAB_144b4ec09;
              uVar7 = *(uint *)(lVar2 + 0x54);
              if (local_res8 - uVar6 < uVar7) {
                uVar7 = uVar7 - (local_res8 - uVar6);
                if ((*(uint *)(lVar2 + 0x38) < uVar7) && (*(int *)(lVar2 + 0x1be0) != 0)) {
                  param_1[4] = (longlong)"invalid distance too far back";
                  *(undefined4 *)(lVar2 + 8) = 0x3f51;
                  break;
                }
                uVar13 = *(uint *)(lVar2 + 0x3c);
                if (uVar13 < uVar7) {
                  uVar7 = uVar7 - uVar13;
                  uVar13 = *(int *)(lVar2 + 0x34) - uVar7;
                }
                else {
                  uVar13 = uVar13 - uVar7;
                }
                uVar11 = *(uint *)(lVar2 + 0x50);
                lVar14 = (ulonglong)uVar13 + *(longlong *)(lVar2 + 0x40);
                uVar13 = uVar11;
                if (uVar7 <= uVar11) {
                  uVar13 = uVar7;
                }
              }
              else {
                uVar11 = *(uint *)(lVar2 + 0x50);
                lVar14 = (longlong)puVar21 - (ulonglong)uVar7;
                uVar13 = uVar11;
              }
              if (uVar6 < uVar13) {
                uVar13 = uVar6;
              }
              local_res20 = uVar6 - uVar13;
              lVar14 = lVar14 - (longlong)puVar21;
              *(uint *)(lVar2 + 0x50) = uVar11 - uVar13;
              do {
                *puVar21 = puVar21[lVar14];
                puVar21 = puVar21 + 1;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
              uVar6 = local_res20;
              local_58 = puVar21;
              if (*(int *)(lVar2 + 0x50) == 0) {
                *(undefined4 *)(lVar2 + 8) = 0x3f48;
              }
            }
            else {
              param_1[4] = (longlong)"invalid distance code";
              *(undefined4 *)(lVar2 + 8) = 0x3f51;
              uVar6 = local_res20;
            }
          }
          else {
            param_1[4] = (longlong)"invalid literal/length code";
            *(undefined4 *)(lVar2 + 8) = 0x3f51;
            uVar6 = local_res20;
          }
          break;
        }
        *(undefined4 *)(lVar2 + 0x1be4) = 0xffffffff;
        goto LAB_144b4ea53;
      case (char *)0x144b4f4ed:
        goto switchD_144b4e3b8_caseD_44b4f4ed;
      case (char *)0x144b4f550:
        goto switchD_144b4e3b8_caseD_44b4f550;
      case (char *)0x144b4f6d0:
        goto switchD_144b4e3b8_caseD_44b4f6d0;
      case (char *)0x144b4f725:
        goto switchD_144b4e3b8_caseD_44b4f725;
      case (char *)0x144b4f7ec:
        if (uVar6 == 0) goto LAB_144b4ec09;
        *puVar21 = *(undefined1 *)(lVar2 + 0x50);
        puVar21 = puVar21 + 1;
        local_res20 = uVar6 - 1;
        *(undefined4 *)(lVar2 + 8) = 0x3f48;
        uVar6 = local_res20;
        local_58 = puVar21;
        break;
      case (char *)0x144b4f81d:
        if (*(int *)(lVar2 + 0x10) == 0) {
          *(undefined4 *)(lVar2 + 8) = 0x3f4f;
        }
        else {
          for (; uVar15 < 0x20; uVar15 = uVar15 + 8) {
            uVar11 = 0;
            if (uVar17 == 0) goto LAB_144b4ec09;
            uVar17 = uVar17 - 1;
            uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
            _Src = _Src + 1;
          }
          local_res8 = local_res8 - uVar6;
          *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + local_res8;
          *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + local_res8;
          if (((*(byte *)(lVar2 + 0x10) & 4) != 0) && (local_res8 != 0)) {
            if (*(int *)(lVar2 + 0x18) == 0) {
              uVar8 = FUN_144d90020(*(undefined4 *)(lVar2 + 0x20),
                                    (longlong)puVar21 - (ulonglong)local_res8);
            }
            else {
              uVar8 = FUN_144d90310();
            }
            *(undefined4 *)(lVar2 + 0x20) = uVar8;
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
            puVar21 = local_58;
            uVar6 = local_res20;
          }
          local_res8 = uVar6;
          if ((*(byte *)(lVar2 + 0x10) & 4) != 0) {
            uVar7 = uVar23;
            if (*(int *)(lVar2 + 0x18) == 0) {
              uVar7 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                      uVar23 << 0x18;
            }
            if (uVar7 != *(uint *)(lVar2 + 0x20)) {
              param_1[4] = (longlong)"incorrect data check";
              *(undefined4 *)(lVar2 + 8) = 0x3f51;
              break;
            }
          }
          *(undefined4 *)(lVar2 + 8) = 0x3f4f;
          uVar23 = uVar13;
          uVar15 = uVar13;
        }
        goto LAB_144b4f903;
      case (char *)0x144b4f8fc:
LAB_144b4f903:
        uVar22 = uVar23;
        uVar16 = uVar15;
        uVar7 = local_64;
        if ((*(int *)(lVar2 + 0x10) != 0) && (*(int *)(lVar2 + 0x18) != 0)) {
          for (; uVar15 < 0x20; uVar15 = uVar15 + 8) {
            uVar11 = 0;
            if (uVar17 == 0) goto LAB_144b4ec09;
            uVar17 = uVar17 - 1;
            uVar23 = uVar23 + ((uint)*_Src << ((byte)uVar15 & 0x1f));
            _Src = _Src + 1;
          }
          uVar22 = uVar13;
          uVar16 = uVar13;
          if (((*(byte *)(lVar2 + 0x10) & 4) != 0) && (uVar23 != *(uint *)(lVar2 + 0x24))) {
            param_1[4] = (longlong)"incorrect length check";
            *(undefined4 *)(lVar2 + 8) = 0x3f51;
            break;
          }
        }
        *(undefined4 *)(lVar2 + 8) = 0x3f50;
        local_res18 = 1;
        uVar11 = uVar17;
        uVar23 = uVar22;
        uVar15 = uVar16;
        goto LAB_144b4ec09;
      case (char *)0x144b4f99a:
        local_res18 = 1;
        goto LAB_144b4ec09;
      case (char *)0x144b4f9ac:
        local_res18 = -3;
LAB_144b4ec09:
        local_64 = uVar7;
        param_1[2] = (longlong)local_58;
        *(uint *)(param_1 + 3) = local_res20;
        *param_1 = (longlong)_Src;
        *(uint *)(param_1 + 1) = uVar11;
        *(uint *)(lVar2 + 0x48) = uVar23;
        *(uint *)(lVar2 + 0x4c) = uVar15;
        if (((*(int *)(lVar2 + 0x34) == 0) &&
            (((local_res8 == *(uint *)(param_1 + 3) || (0x3f50 < *(int *)(lVar2 + 8))) ||
             ((0x3f4d < *(int *)(lVar2 + 8) && (param_2 == 4)))))) ||
           (iVar5 = FUN_144b4ff70(param_1,param_1[2],local_res8 - (int)param_1[3]), iVar5 == 0)) {
          local_res8 = local_res8 - (int)param_1[3];
          local_60 = local_60 - (int)param_1[1];
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + local_60;
          *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + local_res8;
          *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + local_res8;
          if (((*(byte *)(lVar2 + 0x10) & 4) != 0) && (local_res8 != 0)) {
            if (*(int *)(lVar2 + 0x18) == 0) {
              uVar8 = FUN_144d90020(*(undefined4 *)(lVar2 + 0x20),param_1[2] - (ulonglong)local_res8
                                    ,local_res8);
            }
            else {
              uVar8 = FUN_144d90310();
            }
            *(undefined4 *)(lVar2 + 0x20) = uVar8;
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
          }
          iVar5 = *(int *)(lVar2 + 8);
          if ((iVar5 == 0x3f47) || (iVar5 == 0x3f42)) {
            iVar12 = 0x100;
          }
          else {
            iVar12 = 0;
          }
          iVar20 = 0;
          if (iVar5 == 0x3f3f) {
            iVar20 = 0x80;
          }
          *(uint *)(param_1 + 9) =
               (-(uint)(*(int *)(lVar2 + 0xc) != 0) & 0x40) + iVar20 + *(int *)(lVar2 + 0x4c) +
               iVar12;
          if (((local_60 != 0) || (local_res8 != 0)) && (param_2 != 4)) {
            return local_res18;
          }
          if (local_res18 != 0) {
            return local_res18;
          }
          return -5;
        }
        *(undefined4 *)(lVar2 + 8) = 0x3f52;
LAB_144b4faa0:
        return -4;
      case (char *)0x144b4fa9b:
        goto LAB_144b4faa0;
      }
      iVar5 = *(int *)(lVar2 + 8);
    }
  }
LAB_144b4faa0:
  return -2;
}



// FUNCTION 144b4fb40 FUN_144b4fb40 body=113 status=ok
// SIG undefined FUN_144b4fb40(void)

undefined8 FUN_144b4fb40(longlong param_1)

{
  longlong *plVar1;
  
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     (((plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0 && (*plVar1 == param_1))
      && ((int)plVar1[1] - 0x3f34U < 0x20)))) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40) != 0) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
    }
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    return 0;
  }
  return 0xfffffffe;
}



// FUNCTION 144b4fbc0 FUN_144b4fbc0 body=268 status=ok
// SIG undefined FUN_144b4fbc0(void)

undefined8 FUN_144b4fbc0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
       (*(longlong *)(param_1 + 0x38) != 0)) &&
      ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 && (*plVar2 == param_1)))
      ) && ((int)plVar2[1] - 0x3f34U < 0x20)) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar3 + 0x34) = 0;
    *(undefined4 *)(lVar3 + 0x3c) = 0;
    if (((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
       ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 &&
        ((*plVar2 == param_1 && ((int)plVar2[1] - 0x3f34U < 0x20)))))) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      *(undefined4 *)(lVar3 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (*(uint *)(lVar3 + 0x10) != 0) {
        *(uint *)(param_1 + 0x4c) = *(uint *)(lVar3 + 0x10) & 1;
      }
      lVar1 = lVar3 + 0x550;
      *(undefined8 *)(lVar3 + 8) = 0x3f34;
      *(longlong *)(lVar3 + 0x88) = lVar1;
      *(longlong *)(lVar3 + 0x68) = lVar1;
      *(longlong *)(lVar3 + 0x60) = lVar1;
      *(undefined4 *)(lVar3 + 0x14) = 0;
      *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
      *(undefined4 *)(lVar3 + 0x1c) = 0x8000;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x48) = 0;
      *(undefined4 *)(lVar3 + 0x1be0) = 1;
      *(undefined4 *)(lVar3 + 0x1be4) = 0xffffffff;
      return 0;
    }
    return 0xfffffffe;
  }
  return 0xfffffffe;
}



// FUNCTION 144b4fcd0 FUN_144b4fcd0 body=16 status=ok
// SIG undefined FUN_144b4fcd0(void)

void FUN_144b4fcd0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_144b4fce0(param_1,0xf,param_2,param_3);
  return;
}



// FUNCTION 144b4fce0 FUN_144b4fce0 body=646 status=ok
// SIG undefined FUN_144b4fce0(void)

undefined8 FUN_144b4fce0(longlong param_1,uint param_2,char *param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x58)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  pcVar4 = *(code **)(param_1 + 0x30);
  uVar8 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar7 = 0;
  if (pcVar4 == (code *)0x0) {
    pcVar4 = FUN_144d907e0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(code **)(param_1 + 0x30) = FUN_144d907e0;
    uVar6 = uVar8;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(code **)(param_1 + 0x38) = FUN_144d907f0;
  }
  plVar5 = (longlong *)(*pcVar4)(uVar6,1,0x1bf0);
  if (plVar5 == (longlong *)0x0) {
    return 0xfffffffc;
  }
  *(longlong **)(param_1 + 0x28) = plVar5;
  *plVar5 = param_1;
  plVar5[8] = 0;
  *(undefined4 *)(plVar5 + 1) = 0x3f34;
  if (((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 &&
      ((*plVar2 == param_1 && ((int)plVar2[1] - 0x3f34U < 0x20)))))) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    if ((int)param_2 < 0) {
      if ((int)param_2 < -0xf) goto LAB_144b4ff2a;
      param_2 = -param_2;
    }
    else {
      iVar7 = (param_2 >> 4) + 5;
      if ((int)param_2 < 0x30) {
        param_2 = param_2 & 0xf;
      }
    }
    if ((param_2 == 0) || (param_2 - 8 < 8)) {
      if ((*(longlong *)(lVar3 + 0x40) != 0) && (*(uint *)(lVar3 + 0x30) != param_2)) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
        *(undefined8 *)(lVar3 + 0x40) = 0;
      }
      *(int *)(lVar3 + 0x10) = iVar7;
      *(uint *)(lVar3 + 0x30) = param_2;
      if ((((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
          (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0)) &&
         ((*plVar2 == param_1 && ((int)plVar2[1] - 0x3f34U < 0x20)))) {
        lVar3 = *(longlong *)(param_1 + 0x28);
        *(undefined8 *)(lVar3 + 0x34) = 0;
        *(undefined4 *)(lVar3 + 0x3c) = 0;
        if (((*(longlong *)(param_1 + 0x30) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) ||
           ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 == (longlong *)0x0 ||
            ((*plVar2 != param_1 || (0x1f < (int)plVar2[1] - 0x3f34U)))))) {
          uVar8 = 0xfffffffe;
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0x28);
          *(undefined4 *)(lVar3 + 0x24) = 0;
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(undefined8 *)(param_1 + 0x20) = 0;
          if (*(uint *)(lVar3 + 0x10) != 0) {
            *(uint *)(param_1 + 0x4c) = *(uint *)(lVar3 + 0x10) & 1;
          }
          lVar1 = lVar3 + 0x550;
          *(undefined8 *)(lVar3 + 8) = 0x3f34;
          *(longlong *)(lVar3 + 0x88) = lVar1;
          *(longlong *)(lVar3 + 0x68) = lVar1;
          *(longlong *)(lVar3 + 0x60) = lVar1;
          *(undefined4 *)(lVar3 + 0x14) = 0;
          *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
          *(undefined4 *)(lVar3 + 0x1c) = 0x8000;
          *(undefined8 *)(lVar3 + 0x28) = 0;
          *(undefined8 *)(lVar3 + 0x48) = 0;
          *(undefined4 *)(lVar3 + 0x1be0) = 1;
          *(undefined4 *)(lVar3 + 0x1be4) = 0xffffffff;
        }
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        goto LAB_144b4ff2f;
      }
    }
  }
LAB_144b4ff2a:
  uVar8 = 0xfffffffe;
LAB_144b4ff2f:
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),plVar5);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return uVar8;
}



// FUNCTION 144b4ff70 FUN_144b4ff70 body=264 status=ok
// SIG undefined FUN_144b4ff70(void)

undefined4 FUN_144b4ff70(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  _Dst = *(void **)(lVar1 + 0x40);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)(**(code **)(param_1 + 0x30))
                             (*(undefined8 *)(param_1 + 0x40),
                              1 << ((byte)*(undefined4 *)(lVar1 + 0x30) & 0x1f),1);
    *(void **)(lVar1 + 0x40) = _Dst;
    if (_Dst == (void *)0x0) {
      return 1;
    }
  }
  uVar3 = *(uint *)(lVar1 + 0x34);
  if (uVar3 == 0) {
    uVar3 = 1 << ((byte)*(undefined4 *)(lVar1 + 0x30) & 0x1f);
    *(uint *)(lVar1 + 0x34) = uVar3;
    *(undefined8 *)(lVar1 + 0x38) = 0;
  }
  if (param_3 < uVar3) {
    uVar3 = uVar3 - *(uint *)(lVar1 + 0x3c);
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    memcpy((void *)((ulonglong)*(uint *)(lVar1 + 0x3c) + (longlong)_Dst),
           (void *)(param_2 - (ulonglong)param_3),(ulonglong)uVar3);
    param_3 = param_3 - uVar3;
    if (param_3 == 0) {
      *(int *)(lVar1 + 0x3c) = *(int *)(lVar1 + 0x3c) + uVar3;
      if (*(uint *)(lVar1 + 0x3c) == *(uint *)(lVar1 + 0x34)) {
        *(undefined4 *)(lVar1 + 0x3c) = 0;
      }
      if (*(uint *)(lVar1 + 0x34) <= *(uint *)(lVar1 + 0x38)) {
        return 0;
      }
      iVar2 = *(uint *)(lVar1 + 0x38) + uVar3;
    }
    else {
      memcpy(*(void **)(lVar1 + 0x40),(void *)(param_2 - (ulonglong)param_3),(ulonglong)param_3);
      iVar2 = *(int *)(lVar1 + 0x34);
      *(uint *)(lVar1 + 0x3c) = param_3;
    }
  }
  else {
    memcpy(_Dst,(void *)(param_2 - (ulonglong)uVar3),(ulonglong)uVar3);
    iVar2 = *(int *)(lVar1 + 0x34);
    *(undefined4 *)(lVar1 + 0x3c) = 0;
  }
  *(int *)(lVar1 + 0x38) = iVar2;
  return 0;
}



// FUNCTION 144b50080 FUN_144b50080 body=1225 status=ok
// SIG undefined FUN_144b50080(void)

void FUN_144b50080(undefined4 *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_218 [32];
  byte local_1f8;
  undefined1 *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
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
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte local_60;
  byte local_5f;
  undefined6 uStack_5e;
  ulonglong local_58;
  
  if (param_4 == 0) {
    return;
  }
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar9 = (ulonglong)*(byte *)(param_1 + 0x24);
  if (*(byte *)(param_1 + 0x24) == 0) {
    uStack_1a0 = *(undefined8 *)(param_1 + 0x12);
    uStack_198 = *(undefined8 *)(param_1 + 0x14);
    uStack_190 = *(undefined8 *)(param_1 + 0x16);
    uStack_188 = *(undefined8 *)(param_1 + 0x18);
    local_158 = *(undefined8 *)(param_1 + 8);
    uStack_150 = *(undefined8 *)(param_1 + 10);
    local_1a8 = *(undefined8 *)(param_1 + 0x10);
    local_148 = *(undefined8 *)(param_1 + 0xc);
    uStack_140 = *(undefined8 *)(param_1 + 0xe);
    uVar8 = param_2 >> 6;
    local_180 = *(undefined8 *)(param_1 + 0x1a);
    uStack_178 = *(undefined8 *)(param_1 + 0x1c);
    local_160._0_2_ =
         CONCAT11((*(char *)((longlong)param_1 + 0x89) == '\0') + 2U |
                  *(byte *)((longlong)param_1 + 0x8a),*(undefined1 *)(param_1 + 0x22));
    local_170 = *(undefined8 *)(param_1 + 0x1e);
    uStack_168 = *(undefined8 *)(param_1 + 0x20);
    uStack_f0 = local_160;
    uVar9 = (ulonglong)((uint)param_2 & 0x3f);
    local_138 = local_1a8;
    uStack_130 = uStack_1a0;
    local_128 = uStack_198;
    uStack_120 = uStack_190;
    local_118 = uStack_188;
    uStack_110 = local_180;
    local_108 = uStack_178;
    uStack_100 = local_170;
    local_f8 = uStack_168;
    do {
      local_1f0 = local_c8;
      local_1f8 = uStack_f0._1_1_ | 8;
      FUN_144d91320(&local_158,&uStack_130,uStack_f0 & 0xff,uVar8);
      uVar7 = 0x40 - uVar9;
      if (param_4 <= 0x40 - uVar9) {
        uVar7 = param_4;
      }
      memcpy(param_3,local_c8 + uVar9,uVar7);
      param_3 = (void *)((longlong)param_3 + uVar7);
      uVar8 = uVar8 + 1;
      param_4 = param_4 - uVar7;
      uVar9 = 0;
    } while (param_4 != 0);
  }
  else {
    local_60 = *(byte *)(param_1 + 0x22);
    if ((ulonglong)*(byte *)((longlong)param_1 + 0x89) * 0x40 + (ulonglong)local_60 == 0) {
      local_1c8 = *param_1;
      uStack_1c4 = param_1[1];
      uStack_1c0 = param_1[2];
      uStack_1bc = param_1[3];
      uVar9 = uVar9 - 2;
      local_60 = 0x40;
      local_1b8 = param_1[4];
      uStack_1b4 = param_1[5];
      uStack_1b0 = param_1[6];
      uStack_1ac = param_1[7];
      local_a8 = 0;
      lVar6 = uVar9 * 0x20;
      puVar1 = (undefined8 *)(lVar6 + 0x91 + (longlong)param_1);
      uStack_a0 = *puVar1;
      uStack_98 = puVar1[1];
      puVar1 = (undefined8 *)(lVar6 + 0xa1 + (longlong)param_1);
      uStack_90 = *puVar1;
      uStack_88 = puVar1[1];
      puVar2 = (undefined4 *)(lVar6 + 0xb1 + (longlong)param_1);
      local_80 = *puVar2;
      uStack_7c = puVar2[1];
      uStack_78 = puVar2[2];
      uStack_74 = puVar2[3];
      puVar2 = (undefined4 *)(lVar6 + 0xc1 + (longlong)param_1);
      local_70 = *puVar2;
      uStack_6c = puVar2[1];
      uStack_68 = puVar2[2];
      uStack_64 = puVar2[3];
      local_5f = *(byte *)((longlong)param_1 + 0x8a) | 4;
    }
    else {
      local_a8 = *(undefined8 *)(param_1 + 0x10);
      uStack_a0 = *(undefined8 *)(param_1 + 0x12);
      uStack_98 = *(undefined8 *)(param_1 + 0x14);
      uStack_90 = *(undefined8 *)(param_1 + 0x16);
      uStack_88 = *(undefined8 *)(param_1 + 0x18);
      local_5f = (*(byte *)((longlong)param_1 + 0x89) == 0) + 2U |
                 *(byte *)((longlong)param_1 + 0x8a);
      local_1c8 = param_1[8];
      uStack_1c4 = param_1[9];
      uStack_1c0 = param_1[10];
      uStack_1bc = param_1[0xb];
      local_1b8 = param_1[0xc];
      uStack_1b4 = param_1[0xd];
      uStack_1b0 = param_1[0xe];
      uStack_1ac = param_1[0xf];
      local_80 = param_1[0x1a];
      uStack_7c = param_1[0x1b];
      uStack_78 = param_1[0x1c];
      uStack_74 = param_1[0x1d];
      local_70 = param_1[0x1e];
      uStack_6c = param_1[0x1f];
      uStack_68 = param_1[0x20];
      uStack_64 = param_1[0x21];
    }
    local_1a8 = local_a8;
    uStack_1a0 = uStack_a0;
    local_180 = CONCAT44(uStack_7c,local_80);
    uStack_188 = uStack_88;
    uStack_198 = uStack_98;
    uStack_190 = uStack_90;
    uStack_168 = CONCAT44(uStack_64,uStack_68);
    local_160 = CONCAT62(uStack_5e,CONCAT11(local_5f,local_60));
    uStack_178 = CONCAT44(uStack_74,uStack_78);
    local_170 = CONCAT44(uStack_6c,local_70);
    if (uVar9 != 0) {
      lVar6 = uVar9 << 5;
      uVar5 = local_1a8;
      do {
        local_1a8 = uVar5;
        puVar1 = (undefined8 *)((longlong)param_1 + lVar6 + 0x71);
        local_1e8 = *puVar1;
        uStack_1e0 = puVar1[1];
        local_1f8 = local_160._1_1_;
        puVar2 = (undefined4 *)((longlong)param_1 + lVar6 + 0x81);
        local_1d8 = *puVar2;
        uStack_1d4 = puVar2[1];
        uStack_1d0 = puVar2[2];
        uStack_1cc = puVar2[3];
        local_e8 = local_1c8;
        uStack_e4 = uStack_1c4;
        uStack_e0 = uStack_1c0;
        uStack_dc = uStack_1bc;
        local_d8 = local_1b8;
        uStack_d4 = uStack_1b4;
        uStack_d0 = uStack_1b0;
        uStack_cc = uStack_1ac;
        FUN_144d91290(&local_e8,&uStack_1a0,local_160 & 0xff,local_1a8);
        local_a8._0_5_ = CONCAT14((char)uStack_e4,local_e8);
        local_a8 = CONCAT17((char)((uint)uStack_e4 >> 0x18),
                            CONCAT25((short)((uint)uStack_e4 >> 8),(undefined5)local_a8));
        uStack_a0._0_5_ = CONCAT14((char)uStack_dc,uStack_e0);
        uStack_a0 = CONCAT17((char)((uint)uStack_dc >> 0x18),
                             CONCAT25((short)((uint)uStack_dc >> 8),(undefined5)uStack_a0));
        uStack_98._0_5_ = CONCAT14((char)uStack_d4,local_d8);
        uStack_98 = CONCAT17((char)((uint)uStack_d4 >> 0x18),
                             CONCAT25((short)((uint)uStack_d4 >> 8),(undefined5)uStack_98));
        uStack_130 = local_1e8;
        local_128 = uStack_1e0;
        uStack_190 = CONCAT44(uStack_1d4,local_1d8);
        uStack_188 = CONCAT44(uStack_1cc,uStack_1d0);
        local_1c8 = *param_1;
        uStack_1c4 = param_1[1];
        uStack_1c0 = param_1[2];
        uStack_1bc = param_1[3];
        local_1b8 = param_1[4];
        uStack_1b4 = param_1[5];
        uStack_1b0 = param_1[6];
        uStack_1ac = param_1[7];
        uStack_110 = local_a8;
        local_108 = uStack_a0;
        uVar3 = local_108;
        uStack_90._0_5_ = CONCAT14((char)uStack_cc,uStack_d0);
        local_138 = 0;
        uStack_90 = CONCAT17((char)((uint)uStack_cc >> 0x18),
                             CONCAT25((short)((uint)uStack_cc >> 8),(undefined5)uStack_90));
        local_f8 = uStack_90;
        uStack_f0 = CONCAT62(uStack_f0._2_6_,
                             CONCAT11(*(undefined1 *)((longlong)param_1 + 0x8a),0x40)) | 0x400;
        uStack_1a0 = local_1e8;
        uStack_100 = uStack_98;
        uVar4 = uStack_100;
        local_1a8 = 0;
        uStack_198 = uStack_1e0;
        local_180 = local_a8;
        local_108._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
        uStack_100._4_4_ = (undefined4)((ulonglong)uStack_98 >> 0x20);
        uStack_178 = CONCAT44(local_108._4_4_,uStack_e0);
        local_170 = CONCAT44(uStack_100._4_4_,local_d8);
        uStack_168 = uStack_90;
        local_160 = uStack_f0;
        uVar9 = uVar9 - 1;
        lVar6 = lVar6 + -0x20;
        uVar5 = 0;
        uStack_120 = uStack_190;
        local_118 = uStack_188;
        local_108 = uStack_a0;
        uStack_100 = uStack_98;
      } while (uVar9 != 0);
    }
    uVar8 = param_2 >> 6;
    uVar9 = (ulonglong)((uint)param_2 & 0x3f);
    do {
      local_1f0 = local_c8;
      local_1f8 = local_160._1_1_ | 8;
      FUN_144d91320(&local_1c8,&uStack_1a0,local_160 & 0xff,uVar8);
      uVar7 = 0x40 - uVar9;
      if (param_4 <= 0x40 - uVar9) {
        uVar7 = param_4;
      }
      memcpy(param_3,local_c8 + uVar9,uVar7);
      param_3 = (void *)((longlong)param_3 + uVar7);
      uVar8 = uVar8 + 1;
      param_4 = param_4 - uVar7;
      uVar9 = 0;
    } while (param_4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_218);
}



// FUNCTION 144b50560 FUN_144b50560 body=1277 status=ok
// SIG undefined FUN_144b50560(void)

void FUN_144b50560(longlong param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4,
                  byte param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char cVar14;
  void *_Src;
  undefined1 auStack_6b8 [32];
  ulonglong local_698;
  undefined8 *local_690;
  byte local_688;
  undefined1 local_680;
  undefined1 local_678;
  undefined8 *local_670;
  ulonglong local_668;
  longlong local_660;
  longlong local_658;
  longlong local_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  longlong local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  byte local_570;
  char cStack_56f;
  byte local_56e;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  longlong local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  uint uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  longlong local_4d8 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448 [2];
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  local_668 = param_4;
  lVar7 = FUN_144d91580();
  if ((ulonglong)(lVar7 * 0x400) < param_2) {
    uVar12 = (param_2 - 1 | 0x400) >> 10;
    lVar7 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar12 = 1L << ((byte)lVar7 & 0x3f);
    uVar13 = uVar12 * 0x400;
    local_658 = param_1 + uVar13;
    local_660 = (uVar12 & 0x3fffffffffffff) + param_4;
    lVar7 = FUN_144d91580();
    if ((0x400 < uVar13) && (lVar7 == 1)) {
      lVar7 = 2;
    }
    local_690 = &local_458;
    local_698._0_1_ = param_5;
    lVar9 = FUN_144b50560(param_1,uVar13,param_3,local_668);
    local_690 = &local_458 + lVar7 * 4;
    local_698 = CONCAT71(local_698._1_7_,param_5);
    lVar7 = FUN_144b50560(local_658,param_2 + uVar12 * -0x400,param_3,local_660);
    if (lVar9 == 1) {
      *param_6 = local_458;
      param_6[1] = uStack_450;
      param_6[2] = local_448[0];
      param_6[3] = local_448[1];
      *(undefined4 *)(param_6 + 4) = local_438;
      *(undefined4 *)((longlong)param_6 + 0x24) = uStack_434;
      *(undefined4 *)(param_6 + 5) = uStack_430;
      *(undefined4 *)((longlong)param_6 + 0x2c) = uStack_42c;
      param_6[6] = local_428;
      param_6[7] = uStack_420;
    }
    else {
      uVar12 = lVar7 + lVar9;
      lVar9 = 0;
      lVar7 = lVar9;
      if (1 < uVar12) {
        puVar11 = &local_458;
        do {
          lVar9 = lVar9 + 2;
          local_4d8[lVar7] = (longlong)puVar11;
          lVar7 = lVar7 + 1;
          puVar11 = puVar11 + 8;
        } while (1 < uVar12 - lVar9);
      }
      local_670 = param_6;
      local_678 = 0;
      local_688 = param_5 | 4;
      local_680 = 0;
      local_690 = (undefined8 *)((ulonglong)local_690 & 0xffffffffffffff00);
      local_698 = 0;
      FUN_144d913d0(local_4d8,lVar7,1,param_3);
      if ((ulonglong)(lVar7 * 2) < uVar12) {
        uVar1 = *(undefined4 *)((longlong)&local_458 + lVar7 * 0x40 + 4);
        uVar2 = *(undefined4 *)(&uStack_450 + lVar7 * 8);
        uVar3 = *(undefined4 *)((longlong)&uStack_450 + lVar7 * 0x40 + 4);
        uVar4 = local_448[lVar7 * 8];
        uVar5 = local_448[lVar7 * 8 + 1];
        puVar11 = param_6 + lVar7 * 4;
        *(undefined4 *)puVar11 = *(undefined4 *)(&local_458 + lVar7 * 8);
        *(undefined4 *)((longlong)puVar11 + 4) = uVar1;
        *(undefined4 *)(puVar11 + 1) = uVar2;
        *(undefined4 *)((longlong)puVar11 + 0xc) = uVar3;
        param_6[lVar7 * 4 + 2] = uVar4;
        (param_6 + lVar7 * 4 + 2)[1] = uVar5;
      }
    }
  }
  else {
    uVar12 = 0;
    uVar13 = uVar12;
    uVar8 = param_2;
    while (0x3ff < uVar8) {
      lVar7 = uVar12 + param_1;
      uVar12 = uVar12 + 0x400;
      local_4d8[uVar13] = lVar7;
      uVar13 = uVar13 + 1;
      uVar8 = param_2 - uVar12;
    }
    local_670 = param_6;
    local_678 = 2;
    local_680 = 1;
    local_688 = param_5;
    local_690 = (undefined8 *)CONCAT71(local_690._1_7_,1);
    local_698 = local_668;
    FUN_144d913d0(local_4d8,uVar13,0x10,param_3);
    if (uVar12 < param_2) {
      local_5d8 = *param_3;
      uStack_5d0 = param_3[1];
      local_5c8 = param_3[2];
      uStack_5c0 = param_3[3];
      local_5b8 = local_668 + uVar13;
      param_2 = param_2 - uVar12;
      _Src = (void *)(param_1 + uVar12);
      local_570 = 0;
      cStack_56f = '\0';
      local_56e = param_5;
      local_5b0 = 0;
      uStack_5a8 = 0;
      local_5a0 = 0;
      uStack_598 = 0;
      local_590 = 0;
      uStack_588 = 0;
      local_580 = 0;
      uStack_578 = 0;
      if (0x40 < param_2) {
        lVar7 = (param_2 - 0x41 >> 6) + 1;
        param_2 = param_2 + lVar7 * -0x40;
        do {
          local_698 = CONCAT71(local_698._1_7_,cStack_56f == '\0' | local_56e);
          FUN_144d91290(&local_5d8,_Src,0x40,local_5b8);
          _Src = (void *)((longlong)_Src + 0x40);
          cStack_56f = cStack_56f + '\x01';
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar12 = 0x40 - (ulonglong)local_570;
      if (uVar12 <= param_2) {
        param_2 = uVar12;
      }
      memcpy((void *)((longlong)&local_5b0 + (ulonglong)local_570),_Src,param_2);
      cVar14 = local_570 + (char)param_2;
      uStack_628 = local_5b0;
      uStack_620 = uStack_5a8;
      local_630 = local_5b8;
      bVar10 = local_56e | cStack_56f == '\0';
      uStack_618 = local_5a0;
      uStack_610 = uStack_598;
      local_5e8 = CONCAT22(local_5e8._2_2_,CONCAT11(bVar10,cVar14)) | 0x200;
      param_6 = param_6 + uVar13 * 4;
      local_608 = local_590;
      uStack_600 = uStack_588;
      uVar4 = uStack_600;
      local_698 = CONCAT71(local_698._1_7_,bVar10) | 2;
      _local_570 = CONCAT11(cStack_56f,cVar14);
      local_5f8 = local_580;
      uVar5 = local_5f8;
      uStack_5f0 = uStack_578;
      uVar6 = uStack_5f0;
      local_548 = local_5b8;
      uStack_540 = local_5b0;
      local_538 = uStack_5a8;
      uStack_530 = local_5a0;
      uStack_600._0_4_ = (undefined4)uStack_588;
      uStack_600._4_4_ = (undefined4)((ulonglong)uStack_588 >> 0x20);
      local_5f8._0_4_ = (undefined4)local_580;
      local_5f8._4_4_ = (undefined4)((ulonglong)local_580 >> 0x20);
      local_528 = uStack_598;
      uStack_520 = local_590;
      uStack_5f0._0_4_ = (undefined4)uStack_578;
      uStack_5f0._4_4_ = (undefined4)((ulonglong)uStack_578 >> 0x20);
      local_568 = (undefined4)local_5d8;
      uStack_564 = local_5d8._4_4_;
      uStack_560 = (undefined4)uStack_5d0;
      uStack_55c = uStack_5d0._4_4_;
      local_508 = (undefined4)uStack_5f0;
      uStack_504 = uStack_5f0._4_4_;
      uStack_500 = local_5e8;
      uStack_4fc = uStack_5e4;
      local_558 = (undefined4)local_5c8;
      uStack_554 = local_5c8._4_4_;
      uStack_550 = (undefined4)uStack_5c0;
      uStack_54c = uStack_5c0._4_4_;
      local_518 = (undefined4)uStack_600;
      uStack_514 = uStack_600._4_4_;
      uStack_510 = (undefined4)local_5f8;
      uStack_50c = local_5f8._4_4_;
      local_4f8 = (undefined4)local_5d8;
      uStack_4f4 = local_5d8._4_4_;
      uStack_4f0 = (undefined4)uStack_5d0;
      uStack_4ec = uStack_5d0._4_4_;
      local_4e8 = (undefined4)local_5c8;
      uStack_4e4 = local_5c8._4_4_;
      uStack_4e0 = (undefined4)uStack_5c0;
      uStack_4dc = uStack_5c0._4_4_;
      uStack_600 = uVar4;
      local_5f8 = uVar5;
      uStack_5f0 = uVar6;
      FUN_144d91290(&local_4f8,&uStack_540);
      *(char *)((longlong)param_6 + 1) = (char)((uint)local_4f8 >> 8);
      *(char *)((longlong)param_6 + 2) = (char)((uint)local_4f8 >> 0x10);
      *(char *)param_6 = (char)local_4f8;
      *(char *)((longlong)param_6 + 3) = (char)((uint)local_4f8 >> 0x18);
      *(char *)((longlong)param_6 + 5) = (char)((uint)uStack_4f4 >> 8);
      *(char *)((longlong)param_6 + 6) = (char)((uint)uStack_4f4 >> 0x10);
      *(char *)((longlong)param_6 + 4) = (char)uStack_4f4;
      *(char *)((longlong)param_6 + 7) = (char)((uint)uStack_4f4 >> 0x18);
      *(char *)((longlong)param_6 + 9) = (char)((uint)uStack_4f0 >> 8);
      *(char *)((longlong)param_6 + 10) = (char)((uint)uStack_4f0 >> 0x10);
      *(char *)(param_6 + 1) = (char)uStack_4f0;
      *(char *)((longlong)param_6 + 0xb) = (char)((uint)uStack_4f0 >> 0x18);
      *(char *)((longlong)param_6 + 0xd) = (char)((uint)uStack_4ec >> 8);
      *(char *)((longlong)param_6 + 0xe) = (char)((uint)uStack_4ec >> 0x10);
      *(char *)((longlong)param_6 + 0xc) = (char)uStack_4ec;
      *(char *)((longlong)param_6 + 0xf) = (char)((uint)uStack_4ec >> 0x18);
      *(char *)((longlong)param_6 + 0x11) = (char)((uint)local_4e8 >> 8);
      *(char *)((longlong)param_6 + 0x12) = (char)((uint)local_4e8 >> 0x10);
      *(char *)(param_6 + 2) = (char)local_4e8;
      *(char *)((longlong)param_6 + 0x13) = (char)((uint)local_4e8 >> 0x18);
      *(char *)((longlong)param_6 + 0x15) = (char)((uint)uStack_4e4 >> 8);
      *(char *)((longlong)param_6 + 0x16) = (char)((uint)uStack_4e4 >> 0x10);
      *(char *)((longlong)param_6 + 0x14) = (char)uStack_4e4;
      *(char *)((longlong)param_6 + 0x17) = (char)((uint)uStack_4e4 >> 0x18);
      *(char *)((longlong)param_6 + 0x19) = (char)((uint)uStack_4e0 >> 8);
      *(char *)((longlong)param_6 + 0x1a) = (char)((uint)uStack_4e0 >> 0x10);
      *(char *)(param_6 + 3) = (char)uStack_4e0;
      *(char *)((longlong)param_6 + 0x1b) = (char)((uint)uStack_4e0 >> 0x18);
      *(char *)((longlong)param_6 + 0x1d) = (char)((uint)uStack_4dc >> 8);
      *(char *)((longlong)param_6 + 0x1c) = (char)uStack_4dc;
      *(char *)((longlong)param_6 + 0x1e) = (char)((uint)uStack_4dc >> 0x10);
      *(char *)((longlong)param_6 + 0x1f) = (char)((uint)uStack_4dc >> 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_6b8);
}



// FUNCTION 144b50a80 FUN_144b50a80 body=87 status=ok
// SIG undefined FUN_144b50a80(void)

void FUN_144b50a80(longlong param_1,int param_2)

{
  HANDLE hHeap;
  LPVOID pvVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2;
  hHeap = GetProcessHeap();
  pvVar1 = HeapAlloc(hHeap,0,param_1 + 7 + lVar2);
  if (pvVar1 == (LPVOID)0x0) {
    return;
  }
  *(LPVOID *)((lVar2 + 7 + (longlong)pvVar1 & -lVar2) - 8) = pvVar1;
  return;
}



// FUNCTION 144b50ae0 FUN_144b50ae0 body=39 status=ok
// SIG undefined FUN_144b50ae0(void)

void FUN_144b50ae0(longlong param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000144b50b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,*(LPVOID *)(param_1 + -8));
  return;
}



// FUNCTION 144b50b20 FUN_144b50b20 body=102 status=ok
// SIG undefined FUN_144b50b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b50b20(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_1038 [32];
  CHAR local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  if (param_1 < 2) {
    uStack_8 = 0x144b50b34;
    local_18 = DAT_14c707940 ^ (ulonglong)auStack_1038;
    FUN_144d93740(local_1018,0x1000,param_4,&stack0x00000028);
    OutputDebugStringA(local_1018);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1038);
  }
  return;
}



// FUNCTION 144b50ba0 FUN_144b50ba0 body=101 status=ok
// SIG undefined FUN_144b50ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b50ba0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_1048 [32];
  undefined4 local_1028;
  undefined8 local_1020;
  CHAR local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x144b50baa;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1048;
  local_1028 = param_2;
  local_1020 = param_4;
  FUN_144d93840(local_1018,0x1000,"%s (%d) : %s\n",param_1);
  OutputDebugStringA(local_1018);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1048);
}



// FUNCTION 144b50c10 FUN_144b50c10 body=19 status=ok
// SIG undefined FUN_144b50c10(void)

undefined8 FUN_144b50c10(code *param_1,undefined8 param_2)

{
  (*param_1)(param_2);
  return 0;
}



// FUNCTION 144b50c30 FUN_144b50c30 body=3 status=ok
// SIG undefined FUN_144b50c30(void)

void FUN_144b50c30(void)

{
  return;
}



// FUNCTION 144b50c40 FUN_144b50c40 body=47 status=ok
// SIG undefined FUN_144b50c40(void)

undefined8 FUN_144b50c40(void)

{
  if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
    (*(code *)PTR_FUN_14c6d9368)
              (0,"v:\\devel\\projects\\oodle2\\core\\oodlecoreplugins_gen.inc",0x3c,
               "Oodle wants to allocate memory but memory allocations are disabled!\n");
  }
  return 0;
}



// FUNCTION 144b50c80 FUN_144b50c80 body=1855 status=ok
// SIG undefined FUN_144b50c80(void)

void FUN_144b50c80(uint param_1,char *param_2,longlong param_3,longlong param_4,int param_5,
                  undefined8 *param_6,char *param_7,undefined8 param_8,char *param_9,char *param_10)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_178 [32];
  char *local_158;
  undefined8 *local_150;
  char *local_148;
  undefined8 local_140;
  char **local_138;
  char *local_128;
  uint local_120;
  longlong local_118;
  char *local_110;
  char *local_108;
  undefined8 local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_58;
  
  local_c8 = 0xfffffffffffffffe;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_128 = param_7;
  local_100 = param_8;
  local_108 = param_9;
  local_110 = param_10;
  local_120 = param_1;
  local_118 = param_4;
  if (DAT_14c793948 == (code *)0x0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = (*DAT_14c793948)("oo2::OodleLZ_Compress",0);
  }
  FUN_144d94370();
  if (DAT_14c77ee98 == '\0') {
    if (((0x3b00U >> ((byte)param_1 & 0x1f) & 1) == 0) && (param_1 != 3)) {
      if (DAT_14c6d94e8 != '\0') {
        DAT_14c6d94e8 = '\0';
        if (param_1 < 0xe) {
          pcVar8 = (&PTR_DAT_14c6d9400)[(int)param_1];
        }
        else {
          pcVar8 = "invalid";
        }
        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
          local_158 = pcVar8;
          (*(code *)PTR_FUN_14c6d9368)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb84,
                     "OODLE USAGE WARNING : Encoding with archaic compressor (%s) is deprecated and will be removed in a future version.\n  Use one of the modern Oodle codecs (Kraken, Mermaid, Leviathan, Selkie, Hydra).\n  Check OodleLZ_Compressor_IsNewLZFamily.\n  This message is only shown once per run.\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                    );
        }
      }
      if (param_6 != (undefined8 *)0x0) {
        if (((*(int *)((longlong)param_6 + 0x14) != 0) &&
            ((0x3f88U >> ((byte)param_1 & 0x1f) & 1) == 0)) && (DAT_14c6d94e9 != '\0')) {
          DAT_14c6d94e9 = '\0';
          if (param_1 < 0xe) {
            pcVar8 = (&PTR_DAT_14c6d9400)[(int)param_1];
          }
          else {
            pcVar8 = "invalid";
          }
          if ((DAT_14c77ee98 == '\0') && (PTR_FUN_14c6d9368 != (undefined *)0x0)) {
            local_158 = pcVar8;
            (*(code *)PTR_FUN_14c6d9368)
                      (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb8e,
                       "OODLE USAGE WARNING : Requested dictionarySize limit but compressor (%s) does not support it.\n  Use one of the modern Oodle codecs (Kraken, Mermaid, Leviathan, Selkie, Hydra).\n  Check OodleLZ_Compressor_RespectsDictionarySize.\n  This message is only shown once per run.\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                      );
          }
        }
LAB_144b50e50:
        if (((1 < *(int *)(param_6 + 6)) && ((code *)PTR_FUN_14c6d9370 == FUN_144b50c10)) &&
           ((DAT_14c6d94ea != '\0' &&
            ((DAT_14c6d94ea = '\0', DAT_14c77ee98 == '\0' && (PTR_FUN_14c6d9368 != (undefined *)0x0)
             ))))) {
          local_158 = (char *)0x0;
          (*(code *)PTR_FUN_14c6d9368)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb99,
                     "OODLE USAGE WARNING : \'jobify\' is enabled, but no job system was installed!\n  Call OodleCore_Plugins_SetJobSystem to set up a job system first.\n  This message is only shown once per run.\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                    );
        }
      }
    }
    else if (param_6 != (undefined8 *)0x0) goto LAB_144b50e50;
    cVar2 = FUN_144b53e80(param_1,param_4,param_3);
    if (cVar2 == '\0') {
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
        pcVar8 = "OODLE ERROR : comp buf size too small!\n";
        uVar6 = 0xba4;
LAB_144b51052:
        (*(code *)PTR_FUN_14c6d9368)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar6,pcVar8);
      }
    }
    else {
      cVar2 = FUN_144b53ed0(param_2,param_3);
      if (cVar2 != '\0') goto LAB_144b50f1b;
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
        pcVar8 = "OODLE ERROR : raw buf mem invalid!\n";
        uVar6 = 0xbaa;
        goto LAB_144b51052;
      }
    }
code_r0x000144b51060:
    FUN_144d94360();
  }
  else {
LAB_144b50f1b:
    if (param_6 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)&DAT_14c6d9490;
    }
    else {
      local_b8 = *param_6;
      uStack_b0 = param_6[1];
      local_a8 = param_6[2];
      uStack_a0 = param_6[3];
      local_98 = param_6[4];
      uStack_90 = param_6[5];
      local_88 = param_6[6];
      uStack_80 = param_6[7];
      local_78 = *(undefined4 *)(param_6 + 8);
      uStack_74 = *(undefined4 *)((longlong)param_6 + 0x44);
      uStack_70 = *(undefined4 *)(param_6 + 9);
      uStack_6c = *(undefined4 *)((longlong)param_6 + 0x4c);
      local_68 = param_6[10];
      FUN_144b52960(&local_b8);
      puVar10 = &local_b8;
    }
    if (param_3 < 0x19) {
      if (param_3 < 1) goto LAB_144b5139e;
    }
    else if ((*(int *)(puVar10 + 3) < param_3) && (param_5 != 0)) {
      if ((*(int *)(puVar10 + 2) == 1) && (param_1 != 8)) {
        if (param_1 < 0xe) {
          pcVar8 = (&PTR_DAT_14c6d9400)[(int)param_1];
        }
        else {
          pcVar8 = "invalid";
        }
        FUN_144d94340();
        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
          local_158 = pcVar8;
          (*(code *)PTR_FUN_14c6d9368)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xbf2,
                     "OODLE ERROR : Reduced profile only supports Kraken, failing compress.\n");
        }
        FUN_144d94360();
        goto LAB_144b5139e;
      }
      pcVar8 = param_2;
      if (local_128 != (char *)0x0) {
        uVar7 = (longlong)param_2 - (longlong)local_128;
        if ((uVar7 & 0x3ffff) != 0) {
          FUN_144d94340();
          if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
            pcVar8 = "OODLE ERROR : dictionary offset must be a multiple of OODLELZ_BLOCK_LEN\n";
            uVar6 = 0xc07;
            goto LAB_144b51052;
          }
          goto code_r0x000144b51060;
        }
        if (*(int *)(puVar10 + 1) == 0) {
          pcVar8 = local_128;
          if (0x20000000 < (longlong)uVar7) {
            pcVar8 = param_2 + -0x20000000;
          }
        }
        else {
          pcVar8 = local_128 +
                   (uVar7 - (longlong)uVar7 % (longlong)*(int *)((longlong)puVar10 + 0xc));
        }
      }
      local_128 = pcVar8;
      if ((local_108 == (char *)0x0) ||
         (pcVar8 = local_108, pcVar9 = (char *)0x0, (longlong)local_110 < 1)) {
        local_110 = (char *)FUN_144b52ac0(param_1,param_5,param_3,puVar10);
        if (local_110 == (char *)0xffffffffffffffff) {
          pcVar8 = (char *)(param_3 * 8 + 0x4000);
          local_110 = (char *)0x100000;
          if ((longlong)pcVar8 < 0x100000) {
            local_110 = pcVar8;
          }
        }
        pcVar8 = (char *)FUN_144b53880(local_110);
        pcVar9 = pcVar8;
      }
      lVar11 = local_118;
      pcVar1 = local_110 + -1 + (longlong)pcVar8;
      *pcVar1 = '\x17';
      local_d8 = 0;
      local_d0 = 1;
      if (((pcVar8 == (char *)0x0) || ((longlong)(local_110 + -1) < 1)) ||
         (local_f8 = (char *)((ulonglong)(pcVar8 + 0xf) & 0xfffffffffffffff0), pcVar1 <= local_f8))
      {
        local_e0 = 0;
        local_f8 = (char *)0x0;
      }
      else {
        local_e0 = (longlong)pcVar1 - (longlong)local_f8;
      }
      local_f0 = local_f8;
      local_e8 = local_f8;
      if (*(int *)(puVar10 + 1) == 0) {
        if ((param_3 < 0x40000000) &&
           ((longlong)(param_2 + (param_3 - (longlong)local_128)) < 0x60000000)) {
          local_138 = &local_f8;
          local_140 = local_100;
          local_148 = local_128;
          local_158 = (char *)CONCAT44(local_158._4_4_,param_5);
          local_150 = puVar10;
          FUN_144b53c00(param_1,param_2,param_3,local_118);
        }
        else {
          local_108 = param_2 + param_3;
          if (param_2 < local_108) {
            do {
              lVar5 = (longlong)local_108 - (longlong)param_2;
              if ((0x257fffff < lVar5) && (0x20000000 < lVar5)) {
                lVar5 = 0x20000000;
              }
              lVar4 = (longlong)param_2 - (longlong)local_128;
              if (0x20000000 < lVar4) {
                lVar4 = 0x20000000;
              }
              local_148 = param_2 + -lVar4;
              local_138 = &local_f8;
              local_140 = local_100;
              local_158 = (char *)CONCAT44(local_158._4_4_,param_5);
              local_150 = puVar10;
              lVar4 = FUN_144b53c00(local_120,param_2,lVar5,lVar11);
              if (lVar4 < 1) goto LAB_144b511cd;
              lVar11 = lVar11 + lVar4;
              param_2 = param_2 + lVar5;
            } while (param_2 < local_108);
          }
        }
      }
      else {
        local_110 = param_2 + param_3;
        if (local_128 != param_2) {
          lVar5 = (longlong)*(int *)((longlong)puVar10 + 0xc) -
                  ((longlong)param_2 - (longlong)local_128);
          if (lVar5 < param_3) {
            param_3 = lVar5;
          }
          local_138 = &local_f8;
          local_140 = 0;
          local_148 = local_128;
          local_158 = (char *)CONCAT44(local_158._4_4_,param_5);
          local_150 = puVar10;
          lVar5 = FUN_144b53c00(local_120,param_2,param_3,local_118);
          if (lVar5 < 1) {
LAB_144b511cd:
            if (pcVar9 != (char *)0x0) {
              (*(code *)PTR_FUN_14c6d9358)(pcVar9);
            }
            goto LAB_144b5139e;
          }
          lVar11 = lVar11 + lVar5;
          param_2 = param_2 + param_3;
        }
        if (param_2 < local_110) {
          do {
            lVar5 = (longlong)local_110 - (longlong)param_2;
            if ((longlong)*(int *)((longlong)puVar10 + 0xc) <=
                (longlong)local_110 - (longlong)param_2) {
              lVar5 = (longlong)*(int *)((longlong)puVar10 + 0xc);
            }
            local_138 = &local_f8;
            local_140 = 0;
            local_158 = (char *)CONCAT44(local_158._4_4_,param_5);
            local_150 = puVar10;
            local_148 = param_2;
            lVar4 = FUN_144b53c00(local_120,param_2,lVar5,lVar11);
            if (lVar4 < 1) goto LAB_144b511cd;
            lVar11 = lVar11 + lVar4;
            param_2 = param_2 + lVar5;
          } while (param_2 < local_110);
        }
      }
      if (pcVar9 != (char *)0x0) {
        (*(code *)PTR_FUN_14c6d9358)(pcVar9);
      }
      goto LAB_144b5139e;
    }
    local_158 = local_128;
    local_150 = puVar10;
    FUN_144b535c0(param_1,param_2,param_3,local_118);
  }
LAB_144b5139e:
  if (DAT_14c793950 != (code *)0x0) {
    (*DAT_14c793950)(uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_178);
}



// FUNCTION 144b513e0 FUN_144b513e0 body=1783 status=ok
// SIG undefined FUN_144b513e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b513e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  undefined4 param_6,int param_7,longlong param_8,ulonglong param_9,code *param_10,
                  undefined8 param_11,undefined1 *param_12,ulonglong param_13,int param_14)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  int iVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined1 *local_c8;
  longlong local_c0;
  undefined4 local_b8 [2];
  longlong local_b0;
  code *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_78 [4];
  undefined8 local_58;
  ulonglong local_50;
  
  puVar13 = auStack_138;
  local_90 = 0xfffffffffffffffe;
  local_50 = DAT_14c707940 ^ (ulonglong)local_d8;
  local_b0 = param_8;
  local_a8 = param_10;
  local_98 = param_11;
  local_c8 = param_12;
  local_d0 = param_1;
  local_c0 = param_4;
  local_a0 = param_3;
  local_88 = param_2;
  if (DAT_14c793948 == (code *)0x0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = (*DAT_14c793948)("oo2::OodleLZ_Decompress",0);
  }
  if (param_3 == 0) {
    FUN_144d94340();
    puVar13 = auStack_138;
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      (*(code *)PTR_FUN_14c6d9368)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5a9,
                 "OODLE ERROR : bad parameter : decodeTo != 0\n");
      puVar13 = auStack_138;
    }
  }
  else if (local_d0 == 0) {
    FUN_144d94340();
    puVar13 = auStack_138;
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      (*(code *)PTR_FUN_14c6d9368)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5aa,
                 "OODLE ERROR : bad parameter : compBuf != 0\n");
      puVar13 = auStack_138;
    }
  }
  else if (local_c0 < 1) {
    FUN_144d94340();
    puVar13 = auStack_138;
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      (*(code *)PTR_FUN_14c6d9368)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5ae,
                 "OODLE ERROR : OodleLZ_Decompress: asked for invalid decompressed size (<=0)\n");
      puVar13 = auStack_138;
    }
  }
  else {
    if ((DAT_14c77ee98 == '\0') && (0x3ff < local_c0)) {
      iVar16 = 0;
      puVar9 = local_78;
      do {
        uVar12 = FUN_14258fd60(param_3);
        *puVar9 = uVar12;
        if (uVar12 < 0xc80) goto LAB_144b515f9;
        iVar16 = iVar16 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar16 < 5);
      if ((DAT_14c77ee98 == '\0') && (PTR_FUN_14c6d9368 != (undefined *)0x0)) {
        local_f8 = local_58;
        local_100 = local_78[3];
        local_108 = local_78[2];
        local_110 = local_78[1];
        local_118 = local_78[0];
        (*(code *)PTR_FUN_14c6d9368)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x250,
                   "OODLE USAGE WARNING : Destination buffer appears to be in uncached or write-combined memory! This is extremely slow. See \"How do I decompress to graphics memory quickly?\" in the Oodle FAQ. (Probe times %lld,%lld,%lld,%lld,%lld)\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                  );
      }
    }
LAB_144b515f9:
    uVar12 = 0;
    lVar15 = param_3;
    if ((local_b0 == 0) || (uVar12 = param_3 - local_b0, lVar15 = local_b0, (uVar12 & 0x3ffff) == 0)
       ) {
      local_b0 = lVar15;
      uVar1 = local_c0 + uVar12;
      lVar15 = 0;
      if ((longlong)param_9 < 1) {
        param_9 = uVar1;
      }
      iVar16 = FUN_144b531e0(local_d0,param_2,local_c0);
      puVar14 = auStack_138;
      if (iVar16 == -1) goto LAB_144b51ab3;
      bVar11 = (byte)iVar16;
      if ((param_5 == 1) && ((0x3f18U >> (bVar11 & 0x1f) & 1) == 0)) {
        if (((0x4e7U >> (bVar11 & 0x1f) & 1) != 0) && (DAT_14c7939c0 == 0)) {
          FUN_144b53b20(local_d0,local_88);
          puVar14 = auStack_138;
          goto LAB_144b51ab3;
        }
        FUN_144d94340();
        puVar13 = auStack_138;
        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
          (*(code *)PTR_FUN_14c6d9368)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5e8,
                     "OODLE ERROR : OodleLZ_Decompress: Requested Fuzz Safety, saw a compressor that can\'t decode Safe\n"
                    );
          puVar13 = auStack_138;
        }
      }
      else {
        if (param_14 != 3) {
          if (param_14 != 0) {
            if ((1 < param_14 - 1U) &&
               (iVar6 = FUN_144d94320("v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",
                                      0x5f8,"oo2::OodleLZ_Decompress",
                                      "threadPhase == OodleLZ_Decode_ThreadPhase1 || threadPhase == OodleLZ_Decode_ThreadPhase2"
                                     ), iVar6 != 0)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((0x3b00U >> (bVar11 & 0x1f) & 1) == 0) {
              FUN_144d94340();
              puVar13 = auStack_138;
              if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                (*(code *)PTR_FUN_14c6d9368)
                          (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5fc,
                           "OODLE ERROR : OodleLZ_Decompress: asked for threaded decode but !OodleLZ_Compressor_CanDecodeThreadPhased\n"
                          );
                puVar13 = auStack_138;
              }
            }
            else {
              if ((local_c8 != (undefined1 *)0x0) && (0xda0f7 < (longlong)param_13))
              goto LAB_144b51733;
              FUN_144d94340();
              puVar13 = auStack_138;
              if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                (*(code *)PTR_FUN_14c6d9368)
                          (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x602,
                           "OODLE ERROR : OodleLZ_Decompress: asked for threaded decode but decoderMemory < OodleLZ_ThreadPhased_BlockDecoderMemorySizeNeeded\n"
                          );
                puVar13 = auStack_138;
              }
            }
            goto LAB_144b51aac;
          }
          param_14 = 3;
        }
LAB_144b51733:
        if (((0x4e7U >> (bVar11 & 0x1f) & 1) != 0) && (DAT_14c7939c0 == 0)) {
          FUN_144b53b20(local_d0,local_88);
          puVar14 = auStack_138;
          goto LAB_144b51ab3;
        }
        iVar6 = FUN_144b53900(iVar16,uVar1,local_b8);
        if (local_c8 == (undefined1 *)0x0) {
          puVar13 = auStack_138;
          if (iVar6 < DAT_14c6d94fc) {
            param_13 = (ulonglong)(iVar6 + 0x10);
            uVar8 = param_13 + 0xf;
            if (uVar8 <= param_13) {
              uVar8 = 0xffffffffffffff0;
            }
            puVar13 = auStack_138 + -(uVar8 & 0xfffffffffffffff0);
            local_c8 = local_d8 + -(uVar8 & 0xfffffffffffffff0);
          }
        }
        else if ((longlong)param_13 < (longlong)(iVar6 + 0x10)) {
          FUN_144d94340();
          puVar13 = auStack_138;
          if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
            (*(code *)PTR_FUN_14c6d9368)
                      (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x625,
                       "OODLE ERROR : OodleLZ_Decompress : decoder memory given, but too small!\n");
            puVar13 = auStack_138;
          }
          goto LAB_144b51aac;
        }
        *(undefined4 *)(puVar13 + 0x28) = local_b8[0];
        *(int *)(puVar13 + 0x20) = iVar6;
        puVar14 = local_c8;
        *(undefined8 *)(puVar13 + -8) = 0x144b51893;
        puVar9 = (ulonglong *)FUN_144b53a20(iVar16,uVar1,puVar14,param_13);
        lVar5 = local_88;
        *puVar9 = uVar12;
        uVar8 = uVar12;
        if (0 < (longlong)uVar12) {
          puVar9[3] = 0;
        }
        do {
          do {
            if ((longlong)uVar1 <= (longlong)uVar8) goto LAB_144b51a65;
            if (lVar5 <= lVar15) {
              *(undefined8 *)(puVar13 + -8) = 0x144b51a39;
              FUN_144d94340();
              if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                pcVar18 = "OODLE ERROR : LZ corruption : OodleLZ_Decompress not enough comp buf\n";
                uVar17 = 0x63d;
LAB_144b51a52:
                *(undefined8 *)(puVar13 + -8) = 0x144b51a5d;
                (*(code *)PTR_FUN_14c6d9368)
                          (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar17,
                           pcVar18);
              }
code_r0x000144b51a60:
              *(undefined8 *)(puVar13 + -8) = 0x144b51a65;
              FUN_144d94360();
              goto LAB_144b51a65;
            }
            if ((2 < param_7) && ((code *)PTR_FUN_14c6d9368 != (code *)0x0)) {
              *(int *)(puVar13 + 0x28) = (int)uVar8;
              *(int *)(puVar13 + 0x20) = (int)lVar15;
              *(undefined8 *)(puVar13 + -8) = 0x144b518f5;
              (*(code *)PTR_FUN_14c6d9368)
                        (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x643,
                         "OodleLZ_Decompress about to DecodeSome, starting at comp %d -> raw %d\n");
            }
            lVar10 = local_d0 + lVar15;
            *(int *)(puVar13 + 0x58) = param_14;
            *(int *)(puVar13 + 0x50) = param_7;
            *(undefined4 *)(puVar13 + 0x48) = param_6;
            *(int *)(puVar13 + 0x40) = param_5;
            *(longlong *)(puVar13 + 0x38) = lVar5 - lVar15;
            *(longlong *)(puVar13 + 0x30) = lVar10;
            *(ulonglong *)(puVar13 + 0x28) = param_9 - uVar8;
            *(ulonglong *)(puVar13 + 0x20) = param_9;
            lVar10 = local_b0;
            *(undefined8 *)(puVar13 + -8) = 0x144b51966;
            iVar16 = FUN_144b51b60(puVar9,&local_88,lVar10,uVar8);
            pcVar2 = local_a8;
            if (iVar16 == 0) goto LAB_144b51a65;
            if ((int)local_88 == 0) {
              *(undefined8 *)(puVar13 + -8) = 0x144b51a17;
              FUN_144d94340();
              if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                pcVar18 = 
                "OODLE ERROR : LZ corruption : OodleLZ_Decompress : DecodeSome wanted more comp data\n"
                ;
                uVar17 = 0x656;
                goto LAB_144b51a52;
              }
              goto code_r0x000144b51a60;
            }
            uVar8 = uVar8 + (longlong)(int)local_88;
            lVar15 = lVar15 + local_88._4_4_;
          } while (local_a8 == (code *)0x0);
          *(longlong *)(puVar13 + 0x30) = lVar15;
          *(ulonglong *)(puVar13 + 0x28) = uVar8 - uVar12;
          *(longlong *)(puVar13 + 0x20) = lVar5;
          uVar17 = local_98;
          lVar4 = local_a0;
          lVar3 = local_c0;
          lVar10 = local_d0;
          *(undefined8 *)(puVar13 + -8) = 0x144b519b5;
          iVar16 = (*pcVar2)(uVar17,lVar4,lVar3,lVar10);
        } while (iVar16 != 1);
LAB_144b51a65:
        if (*(int *)((longlong)puVar9 + 0x2c) != 0) {
          *(undefined8 *)(puVar13 + -8) = 0x144b51a75;
          (*(code *)PTR_FUN_14c6d9358)(puVar9);
        }
        puVar14 = puVar13;
        if (uVar8 == uVar1) goto LAB_144b51ab3;
        *(undefined8 *)(puVar13 + -8) = 0x144b51a7f;
        FUN_144d94340();
        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
          *(int *)(puVar13 + 0x28) = (int)uVar1;
          *(int *)(puVar13 + 0x20) = (int)uVar8;
          *(undefined8 *)(puVar13 + -8) = 0x144b51aac;
          (*(code *)PTR_FUN_14c6d9368)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x66e,
                     "OODLE ERROR : LZ corruption : OodleLZ_Decompress failed (%d != %d)\n");
        }
      }
    }
    else {
      FUN_144d94340(local_d0);
      puVar13 = auStack_138;
      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
        (*(code *)PTR_FUN_14c6d9368)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5c7,
                   "OODLE ERROR : OodleLZ_Decompress: dictionary backup distance must be a multiple of OODLELZ_BLOCK_LEN\n"
                  );
        puVar13 = auStack_138;
      }
    }
  }
LAB_144b51aac:
  *(undefined8 *)(puVar13 + -8) = 0x144b51ab1;
  FUN_144d94360();
  puVar14 = puVar13;
LAB_144b51ab3:
  if (DAT_14c793950 != (code *)0x0) {
    *(undefined8 *)(puVar14 + -8) = 0x144b51ac4;
    (*DAT_14c793950)(uVar7);
  }
  uVar12 = local_50 ^ (ulonglong)local_d8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -8) = &UNK_144b51ad7;
  FUN_144d8e3a0(uVar12);
}



// FUNCTION 144b51af0 FUN_144b51af0 body=94 status=ok
// SIG undefined FUN_144b51af0(void)

int FUN_144b51af0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  if (((0x4e7U >> ((byte)param_1 & 0x1f) & 1) != 0) && (DAT_14c7939c0 == 0)) {
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      (*(code *)PTR_FUN_14c6d9368)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",399,
                 "OODLE ERROR : OodleLZDecoder_MemorySizeNeeded: legacy compressors not supported!\n"
                );
    }
    FUN_144d94360();
    return 0;
  }
  iVar1 = FUN_144b53900(param_1,param_2,0);
  return iVar1 + 0x10;
}



// FUNCTION 144b51b60 FUN_144b51b60 body=3529 status=ok
// SIG undefined FUN_144b51b60(void)

void FUN_144b51b60(ulonglong *param_1,uint *param_2,char *param_3,char *param_4,uint *param_5,
                  ulonglong param_6,void *param_7,longlong param_8,int param_9,int param_10,
                  int param_11,uint param_12)

{
  uint *puVar1;
  ulonglong uVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  uint *_Src;
  uint uVar11;
  size_t sVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  char *pcVar18;
  int iVar19;
  undefined1 auStack_118 [32];
  uint *local_f8;
  char *local_f0;
  uint *local_e8;
  ulonglong *local_e0;
  uint *local_d8;
  char *local_d0;
  uint *local_c8;
  undefined1 local_c0;
  char *local_b8;
  undefined8 local_b0;
  uint local_a8;
  uint local_a4;
  int local_a0;
  undefined8 local_98;
  void *local_90;
  char *local_88;
  char *local_80;
  uint local_78;
  int local_74;
  int local_70;
  longlong local_68;
  int local_60;
  ulonglong local_58;
  ulonglong uVar17;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_90 = param_7;
  local_88 = param_3;
  local_80 = param_4;
  if (param_2 == (uint *)0x0) goto LAB_144b51d60;
  FUN_144d943b0(param_2,0x10);
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  if (999 < (int)param_1[5]) {
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      pcVar18 = "OODLE ERROR : 1000 calls without progress!\n";
      uVar16 = 0x2a9;
      goto LAB_144b520a3;
    }
    goto LAB_144b520ae;
  }
  local_98 = param_1[1];
  uVar2 = *param_1;
  lVar8 = (longlong)param_5 - (longlong)param_4;
  local_a8 = (uint)((longlong)param_5 < (longlong)local_98);
  lVar7 = lVar8;
  if (0x40000 < lVar8) {
    lVar7 = 0x40000;
  }
  uVar11 = (uint)param_5;
  if (lVar7 < (longlong)param_6) {
    if (lVar8 < 0x40001) {
      param_6 = (ulonglong)(uVar11 - (int)param_4);
    }
    else {
      param_6 = 0x40000;
    }
  }
  uVar10 = (uint)param_6;
  uVar17 = uVar2;
  if (local_98 != 0x3fffffffffffffff) {
    uVar15 = (uint)uVar2 & 0x3ffff;
    uVar17 = (ulonglong)uVar15;
    if ((longlong)(0x40000 - uVar17) <= (longlong)(int)uVar10) {
      uVar10 = 0x40000 - uVar15;
    }
    if ((longlong)(local_98 - uVar2) <= (longlong)(int)uVar10) {
      uVar10 = (uint)(local_98 - uVar2);
    }
  }
  if ((uVar10 == 0) || (param_8 == 0)) goto LAB_144b51d60;
  puVar1 = (uint *)(param_8 + (longlong)param_7);
  if ((uVar17 == 0) && (param_1[2] != uVar2)) {
    if (param_8 < 2) goto LAB_144b51d60;
    param_1[2] = uVar2;
    param_7 = (void *)FUN_144d94620(param_1 + 6,param_7);
    if (param_7 == (void *)0x0) {
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
        pcVar18 = "OODLE ERROR : LZ corruption : invalid header..\n";
        uVar16 = 0x306;
        goto LAB_144b520a3;
      }
      goto LAB_144b520ae;
    }
    local_a4 = *(uint *)(&DAT_14996d818 + (longlong)*(int *)((longlong)param_1 + 0x34) * 4);
    uVar15 = 0x4e7 >> ((byte)local_a4 & 0x1f);
    if (((uVar15 & 1) != 0) && (DAT_14c7939c0 == 0)) {
      FUN_144b53b20(param_7,(longlong)puVar1 - (longlong)param_7);
      goto LAB_144b51d60;
    }
    if ((param_9 == 1) && ((0x3f18U >> ((byte)local_a4 & 0x1f) & 1) == 0)) {
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b520ae;
      pcVar18 = "OODLE ERROR : Requested Fuzz Safety, saw a compressor that can\'t decode Safe\n";
      uVar16 = 0x31b;
      goto LAB_144b520a3;
    }
    iVar5 = FUN_144b53900(local_a4,(longlong)(int)uVar10,0);
    if (*(int *)((longlong)param_1 + 0x4c) < iVar5) {
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
        pcVar18 = 
        "OODLE ERROR : Heterogenous compressor file with insufficient decoder memory size!\n";
        uVar16 = 0x324;
        goto LAB_144b520a3;
      }
      goto LAB_144b520ae;
    }
    if ((uVar15 & 1) == 0) {
LAB_144b51e43:
      if (((int)param_1[8] != 0) && (param_1[3] = *param_1, (uVar15 & 1) != 0)) {
        if (DAT_14c793998 == (code *)0x0) {
          FUN_144d94340();
          if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b520ae;
          uVar16 = 0x340;
          goto LAB_144b5209c;
        }
        (*DAT_14c793998)(param_1 + 0xc);
      }
      if ((2 < param_11) && (PTR_FUN_14c6d9368 != (undefined *)0x0)) {
        local_e0 = (ulonglong *)&DAT_14996de1b;
        local_d8 = (uint *)&DAT_14996de1b;
        if (*(int *)((longlong)param_1 + 0x3c) != 0) {
          local_d8 = (uint *)0x14996de14;
        }
        if ((int)param_1[8] != 0) {
          local_e0 = (ulonglong *)0x14996de1c;
        }
        if (local_a4 < 0xe) {
          local_e8 = (uint *)(&PTR_DAT_14c6d9400)[(int)local_a4];
        }
        else {
          local_e8 = (uint *)0x14996ea38;
        }
        local_f8 = (uint *)param_1[2];
        local_f0 = (char *)CONCAT44(local_f0._4_4_,local_a4);
        (*(code *)PTR_FUN_14c6d9368)
                  (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x34e,
                   "CHUNK header @ %lld  , compressor %d=%s %s %s\n");
      }
      goto LAB_144b51f4b;
    }
    if (DAT_14c793990 != (code *)0x0) {
      (*DAT_14c793990)(param_1 + 0xc);
      goto LAB_144b51e43;
    }
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b520ae;
    uVar16 = 0x32c;
LAB_144b5209c:
    pcVar18 = "OODLE ERROR : Legacy LZ VTable not installed";
LAB_144b520a3:
    (*(code *)PTR_FUN_14c6d9368)
              (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar16,pcVar18);
  }
  else {
LAB_144b51f4b:
    uVar2 = local_98;
    local_a0 = *(int *)((longlong)param_1 + 0x34);
    iVar5 = *(int *)(&DAT_14996d818 + (longlong)local_a0 * 4);
    local_98 = CONCAT44(local_98._4_4_,0x4e7 >> ((byte)iVar5 & 0x1f)) & 0xffffffffffffff01;
    if (((param_1[2] != 0) || ((int)param_1[8] != 0)) || ((uVar11 & uVar11 - 1) != 0)) {
      if ((longlong)uVar2 <= (longlong)param_5) goto LAB_144b520d0;
      if ((uVar11 & uVar11 - 1) == 0) goto LAB_144b51f90;
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b520ae;
      pcVar18 = "OODLE ERROR : sliding window must be pow2!\n";
      uVar16 = 0x379;
      goto LAB_144b520a3;
    }
    local_a8 = 1;
LAB_144b51f90:
    if (iVar5 == -1) {
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
        pcVar18 = "OODLE ERROR : invalid decodeType!\n";
        uVar16 = 0x37f;
        goto LAB_144b520a3;
      }
    }
    else if ((0x3b00U >> ((byte)iVar5 & 0x1f) & 1) == 0) {
      if (iVar5 == 4) {
        if (0xffff < (longlong)param_5) {
LAB_144b520d0:
          pvVar3 = local_90;
          pcVar18 = local_80 + (longlong)local_88;
          iVar5 = (int)param_7;
          if (*(int *)((longlong)param_1 + 0x3c) == 0) {
            if (((local_a0 - 6U & 0xfffffff9) == 0) && (local_a0 != 8)) {
              pcVar13 = pcVar18 + (int)uVar10;
              if (((local_a0 != 6) && (local_a0 != 0xc)) && (local_a0 != 10)) goto LAB_144b521fb;
              local_f8 = (uint *)CONCAT44(local_f8._4_4_,uVar10);
              iVar6 = FUN_144d94d40(param_7,puVar1,&local_78,
                                    *(undefined4 *)((longlong)param_1 + 0x44));
            }
            else {
              uVar11 = 0x4000;
              if ((int)uVar10 < 0x4000) {
                uVar11 = uVar10;
              }
              pcVar13 = pcVar18 + (int)uVar11;
              uVar10 = uVar11;
LAB_144b521fb:
              local_f8 = (uint *)CONCAT44(local_f8._4_4_,uVar10);
              iVar6 = FUN_144d94aa0(param_7,puVar1,&local_78,
                                    *(undefined4 *)((longlong)param_1 + 0x44));
            }
            if (0 < iVar6) {
              _Src = (uint *)((longlong)param_7 + (longlong)iVar6);
              param_2[2] = uVar10;
              param_2[3] = ((int)_Src - iVar5) + local_78;
              if ((2 < param_11) && (PTR_FUN_14c6d9368 != (undefined *)0x0)) {
                local_e8 = (uint *)CONCAT44(local_e8._4_4_,local_74);
                local_f0 = (char *)CONCAT44(local_f0._4_4_,local_78);
                local_f8 = (uint *)CONCAT44(local_f8._4_4_,uVar10);
                (*(code *)PTR_FUN_14c6d9368)
                          (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x438,
                           "QH : %d , %d , %08X\n");
              }
              if (uVar10 < local_78) {
                FUN_144d94340();
                if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                  pcVar18 = "OODLE ERROR : LZ corruption : qh.compLen > qh_rawLen!\n";
                  uVar16 = 0x448;
                  goto LAB_144b520a3;
                }
              }
              else {
                if ((longlong)puVar1 - (longlong)_Src < (longlong)(int)local_78) {
                  param_2[1] = iVar5 - (int)local_90;
                  *param_2 = 0;
                  goto LAB_144b51d60;
                }
                local_80 = (char *)((longlong)(int)local_78 + (longlong)_Src);
                if ((((param_10 == 0) || ((int)local_78 < 1)) ||
                    (*(int *)((longlong)param_1 + 0x44) == 0)) ||
                   (iVar5 = FUN_144d949a0(_Src), iVar5 == local_74)) {
                  iVar5 = local_a0;
                  local_a4 = 0;
                  if ((local_60 != 0) && ((char)local_98 != '\0')) {
                    if (DAT_14c7939a8 == (code *)0x0) {
                      FUN_144d94340();
                      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                        pcVar18 = "OODLE ERROR : Legacy LZ Vtable not installed";
                        uVar16 = 0x47e;
                        goto LAB_144b520a3;
                      }
                      goto LAB_144b520ae;
                    }
                    local_f8 = &local_a4;
                    cVar4 = (*DAT_14c7939a8)(local_a0,param_1 + 0xc,_Src,puVar1);
                    if (cVar4 == '\0') goto LAB_144b51d60;
                    _Src = (uint *)((longlong)_Src + (longlong)(int)local_a4);
                  }
                  iVar6 = (int)pcVar13;
                  iVar19 = (int)pcVar18;
                  if (local_78 == uVar10) {
                    uVar11 = iVar6 - iVar19;
                    if (uVar11 == uVar10) {
                      if ((param_12 & 1) != 0) {
                        memmove(pcVar18,_Src,(longlong)(int)uVar11);
                      }
                      *param_1 = *param_1 + (longlong)(int)uVar11;
                      _Src = (uint *)((longlong)_Src + (longlong)(int)uVar11);
                      if ((longlong)*param_1 <= (longlong)param_1[1]) goto LAB_144b52628;
                      FUN_144d94340();
                      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                        pcVar18 = "OODLE ERROR : LZ corruption : overrun!\n";
                        uVar16 = 0x4ae;
                        goto LAB_144b520a3;
                      }
                    }
                    else {
                      FUN_144d94340();
                      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                        pcVar18 = "OODLE ERROR : LZ corruption : memcpy invalid size!\n";
                        uVar16 = 0x499;
                        goto LAB_144b520a3;
                      }
                    }
                  }
                  else {
                    uVar2 = *param_1;
                    if (local_78 == local_a4) {
                      sVar12 = (size_t)(iVar6 - iVar19);
                      if ((longlong)param_1[1] < (longlong)(sVar12 + uVar2)) {
                        FUN_144d94340();
                        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                          pcVar18 = "OODLE ERROR : LZ corruption : overrun!\n";
                          uVar16 = 0x4c6;
                          goto LAB_144b520a3;
                        }
                        goto LAB_144b520ae;
                      }
                      if (local_70 == 0) {
                        if (local_78 != 0) {
                          if ((char)local_98 == '\0') {
                            FUN_144d94340();
                            if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                              pcVar18 = 
                              "OODLE ERROR : LZ corruption : huffman->gotNumSymbols == 1 path is legacy only!\n"
                              ;
                              uVar16 = 0x512;
                              goto LAB_144b520a3;
                            }
                          }
                          else {
                            if (DAT_14c7939b0 != (code *)0x0) {
                              local_74 = (*DAT_14c7939b0)(param_1 + 0xc);
                              if (local_74 < 0) goto LAB_144b51d60;
                              goto LAB_144b5260a;
                            }
                            FUN_144d94340();
                            if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                              pcVar18 = "OODLE ERROR : Legacy LZ Vtable not installed";
                              uVar16 = 0x509;
                              goto LAB_144b520a3;
                            }
                          }
                          goto LAB_144b520ae;
                        }
LAB_144b5260a:
                        if ((param_12 & 1) != 0) {
                          FUN_144d943a0(pcVar18,local_74,sVar12);
                        }
                      }
                      else if ((param_12 & 2) != 0) {
                        if (local_68 < 2) {
                          FUN_144d94340();
                          if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                            pcVar18 = "OODLE ERROR : corruption : matchOff > 1\n";
                            uVar16 = 0x4d5;
                            goto LAB_144b520a3;
                          }
                        }
                        else {
                          if (local_68 <= (longlong)(uVar2 - param_1[3])) {
                            if (local_68 < (longlong)sVar12) {
                              FUN_144d94f00();
                            }
                            else {
                              memcpy(pcVar18,pcVar18 + -local_68,sVar12);
                            }
                            goto LAB_144b52625;
                          }
                          FUN_144d94340();
                          if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                            pcVar18 = "OODLE ERROR : LZ corruption : wholematch offset too large!\n"
                            ;
                            uVar16 = 0x4e1;
                            goto LAB_144b520a3;
                          }
                        }
                        goto LAB_144b520ae;
                      }
LAB_144b52625:
                      *param_1 = *param_1 + sVar12;
LAB_144b52628:
                      *(undefined4 *)(param_1 + 5) = 0;
                      param_2[1] = (int)_Src - (int)local_90;
                      *param_2 = uVar10;
                      goto LAB_144b51d60;
                    }
                    pcVar9 = (char *)(uVar2 - param_1[3]);
                    iVar14 = (int)_Src - (int)local_90;
                    if (iVar5 == 10) {
                      local_d8 = (uint *)CONCAT44(local_d8._4_4_,param_12);
                      local_e0 = (ulonglong *)param_1[0xb];
                      local_e8 = (uint *)param_1[10];
                      local_f8 = puVar1;
                      local_f0 = pcVar9;
                      iVar5 = FUN_144dbb020(pcVar18,pcVar13,_Src);
                    }
                    else if (iVar5 == 6) {
                      local_d8 = (uint *)CONCAT44(local_d8._4_4_,param_12);
                      local_e0 = (ulonglong *)param_1[0xb];
                      local_e8 = (uint *)param_1[10];
                      local_f8 = puVar1;
                      local_f0 = pcVar9;
                      iVar5 = FUN_144d964e0(pcVar18,pcVar13,_Src);
                    }
                    else if (iVar5 == 0xc) {
                      local_d8 = (uint *)CONCAT44(local_d8._4_4_,param_12);
                      local_e0 = (ulonglong *)param_1[0xb];
                      local_e8 = (uint *)param_1[10];
                      local_f8 = puVar1;
                      local_f0 = pcVar9;
                      iVar5 = FUN_144dac420(pcVar18,pcVar13,_Src);
                    }
                    else {
                      if (iVar5 != 2) {
                        if ((char)local_98 == '\0') {
                          FUN_144d94340();
                          if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                            pcVar18 = 
                            "OODLE ERROR : LZ corruption : DecodeOneQ invalid decodeType!\n";
                            uVar16 = 0x569;
                            goto LAB_144b520a3;
                          }
                        }
                        else {
                          if (DAT_14c7939b8 != (code *)0x0) {
                            local_b0 = 0;
                            local_c0 = (undefined1)local_a8;
                            local_c8 = param_5;
                            local_d0 = local_88;
                            local_d8 = &local_78;
                            local_e0 = param_1 + 6;
                            local_f0 = local_80;
                            local_f8 = _Src;
                            local_e8 = puVar1;
                            local_b8 = pcVar9;
                            iVar5 = (*DAT_14c7939b8)(iVar5,param_1 + 0xc,pcVar18,pcVar13);
                            goto LAB_144b52853;
                          }
                          FUN_144d94340();
                          if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                            pcVar18 = "OODLE ERROR : Legacy LZ Vtable not installed";
                            uVar16 = 0x55b;
                            goto LAB_144b520a3;
                          }
                        }
                        goto LAB_144b520ae;
                      }
                      local_d8 = (uint *)(pcVar18 + -(longlong)pcVar9);
                      local_e0 = (ulonglong *)CONCAT44(local_e0._4_4_,local_a8);
                      local_e8 = param_5;
                      local_f0 = local_88;
                      local_f8 = &local_78;
                      iVar5 = FUN_144dd3220(pcVar18,pcVar13,_Src,puVar1);
                    }
LAB_144b52853:
                    if (iVar5 < 0) {
                      FUN_144d94340();
                      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                        pcVar18 = "OODLE ERROR : LZ corruption : DecodeOneQuantum fail!\n";
                        uVar16 = 0x56f;
                        goto LAB_144b520a3;
                      }
                    }
                    else {
                      *param_1 = *param_1 + (longlong)(iVar6 - iVar19);
                      if ((longlong)param_1[1] < (longlong)*param_1) {
                        FUN_144d94340();
                        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                          pcVar18 = "OODLE ERROR : LZ corruption : overrun!\n";
                          uVar16 = 0x57d;
                          goto LAB_144b520a3;
                        }
                      }
                      else {
                        if (local_a4 + iVar5 == local_78) {
                          *(undefined4 *)(param_1 + 5) = 0;
                          param_2[1] = iVar5 + iVar14;
                          *param_2 = iVar6 - iVar19;
                          goto LAB_144b51d60;
                        }
                        FUN_144d94340();
                        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                          pcVar18 = "OODLE ERROR : LZ corruption : not complen!\n";
                          uVar16 = 0x584;
                          goto LAB_144b520a3;
                        }
                      }
                    }
                  }
                }
                else {
                  FUN_144d94340();
                  if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                    pcVar18 = "OODLE ERROR : LZ corruption : crc check fail.\n";
                    uVar16 = 0x46e;
                    goto LAB_144b520a3;
                  }
                }
              }
              goto LAB_144b520ae;
            }
            if (0xf < (longlong)puVar1 - (longlong)param_7) goto LAB_144b51d60;
          }
          else {
            sVar12 = (size_t)(int)uVar10;
            param_2[2] = uVar10;
            param_2[3] = uVar10;
            if ((longlong)sVar12 <= (param_8 - (longlong)param_7) + (longlong)local_90) {
              if ((2 < param_11) && (PTR_FUN_14c6d9368 != (undefined *)0x0)) {
                local_f8 = (uint *)CONCAT44(local_f8._4_4_,uVar10);
                (*(code *)PTR_FUN_14c6d9368)
                          (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x3c2,
                           " decoder memcpy %d\n");
              }
              if ((param_12 & 1) != 0) {
                memmove(pcVar18,param_7,sVar12);
              }
              *param_1 = *param_1 + sVar12;
              *(undefined4 *)(param_1 + 5) = 0;
              param_2[1] = (iVar5 - (int)pvVar3) + uVar10;
              *param_2 = uVar10;
              if (DAT_14c793998 != (code *)0x0) {
                (*DAT_14c793998)(param_1 + 0xc);
              }
              goto LAB_144b51d60;
            }
          }
          *param_2 = 0;
          param_2[1] = iVar5 - (int)local_90;
          goto LAB_144b51d60;
        }
        FUN_144d94340();
        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
          pcVar18 = "OODLE ERROR : you didn\'t give me enough window!\n";
          uVar16 = 0x38c;
          goto LAB_144b520a3;
        }
      }
      else {
        if (DAT_14c7939a0 != (code *)0x0) {
          cVar4 = (*DAT_14c7939a0)(iVar5,param_5);
          if (cVar4 == '\0') goto LAB_144b51d60;
          goto LAB_144b520d0;
        }
        FUN_144d94340();
        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
          uVar16 = 0x394;
          goto LAB_144b5209c;
        }
      }
    }
    else {
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
        pcVar18 = "OODLE ERROR : only legacy compressors do sliding window!\n";
        uVar16 = 0x385;
        goto LAB_144b520a3;
      }
    }
  }
LAB_144b520ae:
  FUN_144d94360();
LAB_144b51d60:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_118);
}



// FUNCTION 144b52940 FUN_144b52940 body=8 status=ok
// SIG undefined FUN_144b52940(void)

undefined * FUN_144b52940(void)

{
  return &DAT_14c6d9490;
}



// FUNCTION 144b52960 FUN_144b52960 body=338 status=ok
// SIG undefined FUN_144b52960(void)

void FUN_144b52960(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = param_1[6];
  *param_1 = 0;
  param_1[7] = 0;
  if (uVar2 == 0) {
    uVar2 = 0x100;
  }
  else if ((int)uVar2 < 0x1000) {
    if (0x7fffffff < uVar2) {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0x1000;
  }
  param_1[6] = uVar2;
  iVar5 = param_1[3];
  if (iVar5 == 0) {
    uVar3 = 0x40000;
  }
  else {
    if (iVar5 < 0x20000000) {
      if (iVar5 < 0x40001) {
        iVar5 = 0x40000;
      }
    }
    else {
      iVar5 = 0x20000000;
    }
    param_1[3] = iVar5;
    uVar3 = FUN_144d94580();
  }
  param_1[3] = uVar3;
  iVar5 = param_1[9];
  if (iVar5 < 1) {
    param_1[9] = 0x1000000;
    iVar5 = 0x1000000;
  }
  else if (iVar5 != 0x1000000) {
    iVar4 = FUN_144d945b0(iVar5);
    if (iVar4 < 0x100001) {
      param_1[9] = 0x100000;
      iVar5 = 0x100000;
    }
    else {
      iVar5 = 0x20000000;
      if (iVar4 < 0x20000000) {
        iVar5 = iVar4;
      }
      param_1[9] = iVar5;
    }
  }
  iVar4 = param_1[5];
  if (0 < iVar4) {
    iVar1 = 0x40000000;
    if (iVar4 < 0x40000000) {
      iVar1 = iVar4;
    }
    param_1[5] = iVar1;
    if (iVar1 <= iVar5) {
      iVar4 = FUN_144d94580();
      iVar5 = iVar4 * 2;
      if ((int)param_1[9] <= iVar4 * 2) {
        iVar5 = param_1[9];
      }
      if (iVar5 < 0x20000000) {
        if (iVar5 < 0x100001) {
          iVar5 = 0x100000;
        }
      }
      else {
        iVar5 = 0x20000000;
      }
      param_1[9] = iVar5;
      param_1[10] = 0;
    }
  }
  iVar5 = param_1[0xc];
  uVar3 = 2;
  if (2 < (int)param_1[1]) {
    uVar3 = param_1[1];
  }
  param_1[1] = uVar3;
  if (iVar5 < 3) {
    if (iVar5 < 1) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = 3;
  }
  param_1[0xc] = iVar5;
  uVar3 = 0x1d;
  if ((int)param_1[0x11] < 0x1d) {
    uVar3 = param_1[0x11];
  }
  param_1[0x11] = uVar3;
  FUN_144d943b0(param_1 + 0x12,0x10);
  return;
}



// FUNCTION 144b52ac0 FUN_144b52ac0 body=366 status=ok
// SIG undefined FUN_144b52ac0(void)

void FUN_144b52ac0(undefined4 param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  undefined1 auStack_118 [32];
  int local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 ***local_d8;
  undefined1 local_c7 [7];
  undefined8 ***local_c0;
  undefined8 ***local_b8;
  undefined8 ***local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((0x3b00U >> ((byte)param_1 & 0x1f) & 1) != 0) && (param_2 < 5)) {
    if (param_4 == (undefined8 *)0x0) {
      local_f0 = (undefined8 *)&DAT_14c6d9490;
    }
    else {
      local_88 = *param_4;
      uStack_80 = param_4[1];
      local_78 = param_4[2];
      uStack_70 = param_4[3];
      local_68 = param_4[4];
      uStack_60 = param_4[5];
      local_58 = param_4[6];
      uStack_50 = param_4[7];
      local_48 = *(undefined4 *)(param_4 + 8);
      uStack_44 = *(undefined4 *)((longlong)param_4 + 0x44);
      uStack_40 = *(undefined4 *)(param_4 + 9);
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0x4c);
      local_38 = param_4[10];
      FUN_144b52960(&local_88);
      local_f0 = &local_88;
    }
    if ((*(int *)(local_f0 + 1) != 0) && (*(int *)((longlong)local_f0 + 0xc) <= param_3)) {
      param_3 = (longlong)*(int *)((longlong)local_f0 + 0xc);
    }
    if (param_3 < 1) {
      param_3 = 0x20000000;
    }
    local_a0 = 0;
    local_98 = 0;
    if (&local_c0 < local_c7) {
      local_a8 = local_c7 + -(longlong)&local_c0;
      local_c0 = &local_c0;
    }
    else {
      local_c0 = (undefined8 ****)0x0;
      local_a8 = (undefined1 *)0x0;
    }
    local_d8 = &local_c0;
    local_b8 = &local_c0;
    if (local_c7 <= &local_c0) {
      local_b8 = (undefined8 ****)0x0;
    }
    local_e0 = 0;
    local_e8 = 0;
    local_f8 = param_2;
    local_b0 = local_c0;
    FUN_144b53c00(param_1,0,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_118);
}



// FUNCTION 144b52c40 FUN_144b52c40 body=55 status=ok
// SIG undefined FUN_144b52c40(void)

longlong FUN_144b52c40(byte param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x18;
  if ((0x3b00U >> (param_1 & 0x1f) & 1) == 0) {
    lVar1 = 0x112;
  }
  return ((longlong)(param_2 + 0x3ffff + (ulonglong)((uint)(param_2 + 0x3ffff >> 0x3f) & 0x3ffff))
         >> 0x12) * lVar1 + param_2;
}



// FUNCTION 144b52c80 FUN_144b52c80 body=1351 status=ok
// SIG undefined FUN_144b52c80(void)

void FUN_144b52c80(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  ulonglong *param_5,undefined4 *param_6)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  undefined1 auStack_f8 [32];
  int local_d8;
  ulonglong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  int local_b0 [8];
  int local_90 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = param_5;
  local_c0 = param_1;
  local_b8 = param_3;
  if ((param_3 & 0x3fff) == 0) {
    if (1 < param_2) {
      param_4 = param_4 + param_3;
      uVar1 = param_2 + param_1;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 1;
      }
      local_60 = 0;
      local_70 = 0;
      uStack_68 = 0;
joined_r0x000144b52d43:
      if (param_4 <= (longlong)param_3) {
        if (local_c8 != (ulonglong *)0x0) {
          *local_c8 = param_3;
        }
        goto LAB_144b5305e;
      }
      uVar5 = (uint)param_4;
      if ((longlong)(param_3 + 0x40000 & 0xfffffffffffc0000) < param_4) {
        uVar5 = (uint)(param_3 + 0x40000) & 0xfffc0000;
      }
      iVar6 = uVar5 - (int)param_3;
      if ((param_3 & 0x3ffff) != 0) {
        if (param_6 != (undefined4 *)0x0) {
LAB_144b52eb6:
          *param_6 = 0;
        }
LAB_144b52ebe:
        iVar2 = 0;
        if (0 < iVar6) {
          do {
            iVar9 = 0x4000;
            if (iVar6 - iVar2 < 0x4000) {
              iVar9 = iVar6 - iVar2;
            }
            local_d8 = iVar9;
            iVar3 = FUN_144d94aa0(param_1,uVar1,local_90,local_60._4_4_);
            if (iVar3 < 1) {
LAB_144b5316c:
              if (local_c8 != (ulonglong *)0x0) {
                *local_c8 = param_3;
              }
              goto LAB_144b5305e;
            }
            if ((longlong)(uVar1 - param_1) < (longlong)(local_90[0] + iVar3)) {
              if ((longlong)local_b8 < (longlong)param_3) goto LAB_144b5316c;
              if ((longlong)(uVar1 - param_1) < (longlong)(local_90[0] + iVar3)) goto LAB_144b5305e;
            }
            if (local_90[0] < 0) {
              FUN_144d94340();
              if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b530b4;
              pcVar8 = "OODLE ERROR : corruption : qh.compLen >= 0\n";
              uVar7 = 0x8f6;
              goto LAB_144b530a9;
            }
            if (0x4000 < local_90[0]) {
              FUN_144d94340();
              if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b530b4;
              pcVar8 = "OODLE ERROR : corruption : qh.compLen <= (1<<14)\n";
              uVar7 = 0x8f7;
              goto LAB_144b530a9;
            }
            param_1 = param_1 + (longlong)iVar3 + (longlong)local_90[0];
            param_3 = param_3 + (longlong)iVar9;
            iVar2 = iVar2 + iVar9;
            if ((param_4 <= (longlong)param_3) && (iVar2 < iVar6)) goto LAB_144b5316c;
          } while (iVar2 < iVar6);
        }
        if (uVar1 < param_1) {
          FUN_144d94340();
          if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b530b4;
          pcVar8 = "OODLE ERROR : corruption : compPtr <= compEnd\n";
          uVar7 = 0x90c;
          goto LAB_144b530a9;
        }
        if (iVar2 != iVar6) goto LAB_144b53186;
        goto joined_r0x000144b52d43;
      }
      if ((longlong)(uVar1 - param_1) < 2) goto LAB_144b5305e;
      param_1 = FUN_144d94620(&local_70,param_1);
      if (param_1 == 0) {
        FUN_144d94340();
        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
          pcVar8 = "OODLE ERROR : corruption : compPtr != 0\n";
          uVar7 = 0x870;
          goto LAB_144b5304c;
        }
LAB_144b53057:
        FUN_144d94360();
        goto LAB_144b5305e;
      }
      if (uStack_68._4_4_ == 0) {
        if (((local_70._4_4_ - 6 & 0xfffffff9) != 0) || (local_70._4_4_ == 8)) {
          if ((local_70._4_4_ < 0xc) && ((0x8bfU >> (local_70._4_4_ & 0x1f) & 1) != 0)) {
            if ((param_6 != (undefined4 *)0x0) && ((int)local_60 == 0)) goto LAB_144b52eb6;
            goto LAB_144b52ebe;
          }
          FUN_144d94340();
          if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b530b4;
          pcVar8 = "OODLE ERROR : corruption : unknown LZ code type";
          uVar7 = 0x8c7;
          goto LAB_144b530a9;
        }
        if ((param_6 != (undefined4 *)0x0) && ((int)local_60 == 0)) {
          *param_6 = 0;
        }
        local_d8 = iVar6;
        iVar2 = FUN_144d94d40(param_1,uVar1,local_b0,local_60._4_4_);
        if (0 < iVar2) {
          if ((longlong)iVar2 <= (longlong)(uVar1 - param_1)) {
            lVar4 = param_1 + (longlong)iVar2;
            if (local_b0[0] < 0) {
              FUN_144d94340();
              if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b530b4;
              pcVar8 = "OODLE ERROR : corruption : qh.compLen >= 0\n";
              uVar7 = 0x8af;
              goto LAB_144b530a9;
            }
            if (0x40000 < local_b0[0]) {
              FUN_144d94340();
              if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b530b4;
              pcVar8 = "OODLE ERROR : corruption : qh.compLen <= (1<<18)\n";
              uVar7 = 0x8b0;
              goto LAB_144b530a9;
            }
            if ((longlong)(uVar1 - lVar4) < (longlong)local_b0[0]) {
              FUN_144d94340();
              if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
                pcVar8 = "OODLE ERROR : corruption : rrPtrDiff(compEnd - compPtr) >= qh.compLen\n";
                uVar7 = 0x8b2;
                goto LAB_144b5304c;
              }
              goto LAB_144b53057;
            }
            param_1 = lVar4 + local_b0[0];
            param_3 = param_3 + (longlong)iVar6;
            goto joined_r0x000144b52d43;
          }
          FUN_144d94340();
          if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
            pcVar8 = "OODLE ERROR : corruption : rrPtrDiff(compEnd - compPtr) >= lzqhlen\n";
            uVar7 = 0x8ab;
LAB_144b5304c:
            (*(code *)PTR_FUN_14c6d9368)
                      (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar7,pcVar8);
          }
          goto LAB_144b53057;
        }
        if (0xf < (longlong)(uVar1 - param_1)) {
          FUN_144d94340();
          if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b530b4;
          pcVar8 = "OODLE ERROR : corruption : lzqhlen > 0\n";
          uVar7 = 0x8a7;
          goto LAB_144b530a9;
        }
      }
      else {
        lVar4 = (longlong)iVar6;
        if (lVar4 <= (longlong)(uVar1 - param_1)) {
          param_3 = param_3 + lVar4;
          param_1 = param_1 + lVar4;
          goto joined_r0x000144b52d43;
        }
      }
      if (local_c8 != (ulonglong *)0x0) {
        *local_c8 = param_3;
      }
    }
    goto LAB_144b5305e;
  }
  FUN_144d94340();
  if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
    pcVar8 = "OODLE ERROR : GetCompressedStepForRawStep : start pos not a quantum!\n";
    uVar7 = 0x832;
    goto LAB_144b530a9;
  }
  goto LAB_144b530b4;
LAB_144b53186:
  FUN_144d94340();
  if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
    pcVar8 = "OODLE ERROR : corruption : chunkGot == chunkLen\n";
    uVar7 = 0x90d;
LAB_144b530a9:
    (*(code *)PTR_FUN_14c6d9368)
              (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar7,pcVar8);
  }
LAB_144b530b4:
  FUN_144d94360();
LAB_144b5305e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144b531e0 FUN_144b531e0 body=483 status=ok
// SIG undefined FUN_144b531e0(void)

ulonglong FUN_144b531e0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong local_res10;
  
  if ((param_2 < 1) || (param_3 < 1)) {
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto code_r0x000144b533a0;
    pcVar7 = "OODLE ERROR : Invalid buffer sizes passed to OodleLZ_GetAllChunksCompressor\n";
    uVar6 = 0x713;
  }
  else {
    uVar2 = FUN_144b533e0(param_1,param_2,0);
    uVar5 = uVar2 & 0xffffffff;
    if ((int)uVar2 == -1) {
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto code_r0x000144b533a0;
      pcVar7 = "OODLE ERROR : Malformed data stream header\n";
      uVar6 = 0x71d;
    }
    else {
      if (param_3 < 0x40001) {
        return uVar2;
      }
      while( true ) {
        local_res10 = 0;
        lVar4 = 0x40000;
        if (param_3 < 0x40000) {
          lVar4 = param_3;
        }
        lVar3 = FUN_144b52c80(param_1,param_2,0,lVar4,&local_res10,0);
        if (lVar3 == param_2) {
          return uVar5;
        }
        if (local_res10 != lVar4) {
          return uVar5;
        }
        if ((lVar3 < 1) || (param_2 <= lVar3)) {
          FUN_144d94340();
          if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
            (*(code *)PTR_FUN_14c6d9368)
                      (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x737,
                       "OODLE ERROR : LZ corruption : insufficient comp data in OodleLZ_GetAllChunksCompressor\n"
                      );
          }
          FUN_144d94360();
          return uVar5;
        }
        param_1 = param_1 + lVar3;
        param_2 = param_2 - lVar3;
        param_3 = param_3 - lVar4;
        if (param_3 == 0) {
          return uVar5;
        }
        iVar1 = FUN_144b533e0(param_1,param_2);
        if (iVar1 == -1) break;
        if ((int)uVar5 != iVar1) {
          if (((0x3b00U >> ((byte)iVar1 & 0x1f) & 1) == 0) ||
             ((0x3b00U >> ((byte)uVar5 & 0x1f) & 1) == 0)) {
            return 0xe;
          }
          uVar5 = 0xc;
        }
        if (param_2 < 1) {
          return uVar5;
        }
      }
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto code_r0x000144b533a0;
      pcVar7 = "OODLE ERROR : Invalid chunk compressor in OodleLZ_GetAllChunksCompressor\n";
      uVar6 = 0x749;
    }
  }
  (*(code *)PTR_FUN_14c6d9368)
            (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar6,pcVar7);
code_r0x000144b533a0:
  FUN_144d94360();
  return 0xffffffff;
}



// FUNCTION 144b533e0 FUN_144b533e0 body=161 status=ok
// SIG undefined FUN_144b533e0(void)

void FUN_144b533e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (1 < param_2) {
    lVar1 = FUN_144d94620(local_28,param_1);
    if (lVar1 != 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_18;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
    }
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      (*(code *)PTR_FUN_14c6d9368)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6f8,
                 "OODLE ERROR : LZ corruption : invalid header..\n");
    }
    FUN_144d94360();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 144b53490 thunk_FUN_144b533e0 body=5 status=ok
// SIG undefined thunk_FUN_144b533e0(void)

void thunk_FUN_144b533e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (1 < param_2) {
    lVar1 = FUN_144d94620(auStack_28,param_1);
    if (lVar1 != 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = uStack_18;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(uStack_10 ^ (ulonglong)auStack_48);
    }
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      (*(code *)PTR_FUN_14c6d9368)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6f8,
                 "OODLE ERROR : LZ corruption : invalid header..\n");
    }
    FUN_144d94360();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 144b534a0 FUN_144b534a0 body=271 status=ok
// SIG undefined FUN_144b534a0(void)

void FUN_144b534a0(undefined4 param_1,void *param_2,longlong param_3,longlong param_4,void *param_5,
                  longlong param_6)

{
  size_t sVar1;
  void *_Dst;
  ulonglong uVar2;
  void *_Src;
  size_t _Size;
  void *pvVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pvVar3 = param_2;
  if (param_5 != (void *)0x0) {
    pvVar3 = param_5;
  }
  local_70 = 4;
  local_68 = 0;
  local_64 = 1;
  local_5c = 0;
  local_78 = param_4;
  local_6c = param_1;
  for (_Src = param_2; _Src < (void *)(param_3 + (longlong)param_2);
      _Src = (void *)((longlong)_Src + _Size)) {
    sVar1 = (param_3 - (longlong)_Src) + (longlong)param_2;
    _Size = 0x40000;
    if ((longlong)sVar1 < 0x40000) {
      _Size = sVar1;
    }
    uVar2 = (longlong)_Src - (longlong)pvVar3;
    if (uVar2 == 0) {
      local_60 = 1;
    }
    else if (((uVar2 & 0x3ffff) == 0) && (*(int *)(param_6 + 8) != 0)) {
      local_60 = (uint)((uVar2 & (longlong)*(int *)(param_6 + 0xc) - 1U) == 0);
    }
    else {
      local_60 = 0;
    }
    _Dst = (void *)FUN_144d945d0(&local_70,param_4);
    param_4 = _Size + (longlong)_Dst;
    memcpy(_Dst,_Src,_Size);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_98);
}



// FUNCTION 144b535c0 FUN_144b535c0 body=327 status=ok
// SIG undefined FUN_144b535c0(void)

void FUN_144b535c0(int param_1,void *param_2,longlong param_3,longlong param_4,void *param_5,
                  longlong param_6)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  void *_Dst;
  ulonglong uVar4;
  size_t _Size;
  void *_Src;
  void *pvVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_4;
  if ((ulonglong)(longlong)param_1 < 0xe) {
    local_6c = *(undefined4 *)(&DAT_14996d7e0 + (longlong)param_1 * 4);
  }
  else {
    iVar2 = FUN_144d94320("v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6bd,
                          "oo2::OodleLZ_Compressor_to_DecodeType","Invalid compressor\n");
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_6c = 0xffffffff;
  }
  local_70 = 4;
  local_68 = 0;
  pvVar5 = param_2;
  if (param_5 != (void *)0x0) {
    pvVar5 = param_5;
  }
  local_64 = 1;
  local_5c = 0;
  for (_Src = param_2; _Src < (void *)((longlong)param_2 + param_3);
      _Src = (void *)((longlong)_Src + _Size)) {
    sVar3 = (param_3 - (longlong)_Src) + (longlong)param_2;
    _Size = 0x40000;
    if ((longlong)sVar3 < 0x40000) {
      _Size = sVar3;
    }
    uVar4 = (longlong)_Src - (longlong)pvVar5;
    if (uVar4 == 0) {
      local_60 = 1;
    }
    else if (((uVar4 & 0x3ffff) == 0) && (*(int *)(param_6 + 8) != 0)) {
      local_60 = (uint)((uVar4 & (longlong)*(int *)(param_6 + 0xc) - 1U) == 0);
    }
    else {
      local_60 = 0;
    }
    _Dst = (void *)FUN_144d945d0(&local_70,param_4);
    param_4 = _Size + (longlong)_Dst;
    memcpy(_Dst,_Src,_Size);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_98);
}



// FUNCTION 144b53720 FUN_144b53720 body=53 status=ok
// SIG undefined FUN_144b53720(void)

longlong FUN_144b53720(int param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x20000;
  if ((0 < param_2) && (param_2 < 0x20000)) {
    lVar2 = param_2;
  }
  lVar1 = lVar2 * 2 + 0xd020;
  if ((param_1 - 9U & 0xfffffffd) != 0) {
    lVar1 = lVar1 + lVar2;
  }
  return lVar1;
}



// FUNCTION 144b53760 FUN_144b53760 body=263 status=ok
// SIG undefined FUN_144b53760(void)

int FUN_144b53760(longlong param_1,int param_2,longlong param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = 0x7fffffff;
  if (param_1 < 0x7fffffff) {
    lVar3 = param_1;
  }
  if (lVar3 < -0x7fffffff) {
    uVar4 = 0x80000000;
  }
  else {
    uVar4 = 0x7fffffff;
    if (param_1 < 0x7fffffff) {
      uVar4 = (uint)param_1;
    }
  }
  if ((*(int *)(param_3 + 8) != 0) && (*(int *)(param_3 + 0xc) < (int)uVar4)) {
    uVar4 = *(uint *)(param_3 + 0xc);
  }
  iVar1 = FUN_144d94560((float)uVar4);
  if (param_2 < 3) {
    iVar1 = iVar1 + -1;
    iVar2 = param_5;
    if (iVar1 < param_5) {
      iVar2 = iVar1;
    }
    param_6 = param_4;
    if ((param_4 < iVar2) && (param_6 = param_5, iVar1 < param_5)) {
      param_6 = iVar1;
    }
  }
  else {
    if (iVar1 < param_7) {
      param_7 = iVar1;
    }
    if (param_6 < param_7) {
      param_6 = param_7;
    }
  }
  iVar1 = *(int *)(param_3 + 0x2c);
  if (iVar1 < 1) {
    return param_6;
  }
  if (iVar1 < 0x65) {
    if (iVar1 <= param_6) {
      param_6 = iVar1;
    }
    iVar1 = 0x1a;
    if (param_6 < 0x1a) {
      iVar1 = param_6;
    }
    iVar2 = 0xc;
    if (0xc < iVar1) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  iVar2 = 0x1c;
  if (iVar1 + -100 < 0x1c) {
    iVar2 = iVar1 + -100;
  }
  iVar1 = 8;
  if (8 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 144b53880 FUN_144b53880 body=59 status=ok
// SIG undefined FUN_144b53880(void)

longlong FUN_144b53880(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_FUN_14c6d9350)(param_1,0x10);
  if (lVar1 == 0) {
    FUN_144d95420(param_1);
  }
  return lVar1;
}



// FUNCTION 144b538c0 FUN_144b538c0 body=36 status=ok
// SIG undefined FUN_144b538c0(void)

void FUN_144b538c0(undefined8 *param_1)

{
  if (DAT_14c793950 != (code *)0x0) {
    (*DAT_14c793950)(*param_1);
  }
  return;
}



// FUNCTION 144b53900 FUN_144b53900 body=274 status=ok
// SIG undefined FUN_144b53900(void)

int FUN_144b53900(int param_1,longlong param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar3 = 0xa8;
  if ((param_1 == -1) || (0xd < param_1)) {
    bVar1 = true;
    if (DAT_14c7939c0 == 0) {
      param_1 = 0xc;
      goto LAB_144b539a7;
    }
    param_1 = 6;
    bVar2 = true;
  }
  else {
    bVar1 = false;
    bVar2 = false;
    if ((0x4e7U >> ((byte)param_1 & 0x1f) & 1) == 0) goto LAB_144b539a7;
  }
  bVar1 = bVar2;
  if (DAT_14c793980 == (code *)0x0) {
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      (*(code *)PTR_FUN_14c6d9368)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x126,
                 "OODLE ERROR : Legacy LZ VTable not installed");
    }
    FUN_144d94360();
    iVar3 = -1;
  }
  else {
    iVar3 = (*DAT_14c793980)(param_1);
    iVar3 = iVar3 + 0xa8;
  }
LAB_144b539a7:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  if ((bVar1) || ((0x3b00U >> ((byte)param_1 & 0x1f) & 1) != 0)) {
    lVar4 = 0x20000;
    if ((0 < param_2) && (param_2 < 0x20000)) {
      lVar4 = param_2;
    }
    iVar5 = (int)lVar4 * 2 + 0x20;
    if ((param_1 - 9U & 0xfffffffd) != 0) {
      iVar5 = iVar5 + (int)lVar4;
    }
    iVar3 = iVar5 + 0xd000 + iVar3;
  }
  return iVar3;
}



// FUNCTION 144b53a20 FUN_144b53a20 body=250 status=ok
// SIG undefined FUN_144b53a20(void)

undefined8 *
FUN_144b53a20(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
             int param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  FUN_144d94370();
  lVar3 = (longlong)param_5;
  if (param_3 == 0) {
    puVar2 = (undefined8 *)(*(code *)PTR_FUN_14c6d9350)(lVar3,0x10);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_144d95420(lVar3);
    }
    FUN_144d943b0(puVar2,0xa0);
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 1;
  }
  else {
    if (param_4 + -0x10 < lVar3) {
      return (undefined8 *)0x0;
    }
    puVar2 = (undefined8 *)(param_3 + 0xfU & 0xfffffffffffffff0);
    FUN_144d943b0(puVar2,0xa0);
    lVar3 = param_4 + -0x10;
  }
  lVar1 = 0x3fffffffffffffff;
  if (-1 < param_2) {
    lVar1 = param_2;
  }
  puVar2[1] = lVar1;
  *puVar2 = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *(int *)((longlong)puVar2 + 0x4c) = (int)lVar3;
  puVar2[4] = 0xabadf00dc0cac01a;
  puVar2[2] = 0xffffffffffffffff;
  *(int *)(puVar2 + 9) = param_6;
  puVar2[10] = puVar2 + 0x14;
  puVar2[0xb] = lVar3 - param_6;
  return puVar2;
}



// FUNCTION 144b53b20 FUN_144b53b20 body=189 status=ok
// SIG undefined FUN_144b53b20(void)

void FUN_144b53b20(char *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_48 [32];
  int local_28 [6];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 < 1) || (*param_1 != '\0')) {
    if (1 < param_2) {
      lVar1 = FUN_144d94620(local_28,param_1);
      if ((lVar1 != 0) && (local_28[0] < 4)) {
        FUN_144d94340();
        if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b53bcb;
        pcVar3 = 
        "OODLE ERROR : OodleLZ_Decompress: data is either corrupted, not a valid Oodle stream, or was compressed with an unsupported legacy compressor!\n"
        ;
        uVar2 = 0x275;
        goto LAB_144b53bc0;
      }
    }
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b53bcb;
    pcVar3 = "OODLE ERROR : OodleLZ_Decompress: asked to decode legacy compressor; not supported!\n"
    ;
    uVar2 = 0x27b;
  }
  else {
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_144b53bcb;
    pcVar3 = 
    "OODLE ERROR : OodleLZ_Decompress: first byte is zero; this is likely not valid compressed data!\n"
    ;
    uVar2 = 0x265;
  }
LAB_144b53bc0:
  (*(code *)PTR_FUN_14c6d9368)
            (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar2,pcVar3);
LAB_144b53bcb:
  FUN_144d94360();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 144b53c00 FUN_144b53c00 body=579 status=ok
// SIG undefined FUN_144b53c00(void)

undefined8
FUN_144b53c00(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (param_5 < 0) {
    param_5 = 1;
  }
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
  case 7:
  case 10:
    if (DAT_14c7939c0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144b53df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*DAT_14c7939c0)(param_1,param_2,param_3,param_4);
      return uVar1;
    }
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      (*(code *)PTR_FUN_14c6d9368)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb25,
                 "OODLE ERROR : Legacy LZ Vtable not installed");
    }
    break;
  case 3:
    uVar1 = FUN_144b535c0(3,param_2,param_3,param_4);
    return uVar1;
  case 4:
    uVar1 = FUN_144dd2fe0(param_2,param_4,param_3,param_5,param_6,param_7,param_8);
    return uVar1;
  case 8:
    uVar1 = FUN_144d96160(8,param_2,param_4,param_3);
    return uVar1;
  case 9:
    uVar1 = FUN_144dbaec0(9,param_2,param_4,param_3);
    return uVar1;
  case 0xb:
    uVar1 = FUN_144dbaec0(0xb,param_2,param_4,param_3);
    return uVar1;
  case 0xc:
    uVar1 = FUN_144d962c0(0xc,param_2,param_4,param_3);
    return uVar1;
  case 0xd:
    uVar1 = FUN_144dac2c0(0xd,param_2,param_4,param_3);
    return uVar1;
  default:
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      (*(code *)PTR_FUN_14c6d9368)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb2b,
                 "OODLE ERROR : invalid compressor : %d\n",CONCAT44(uVar2,param_1));
    }
  }
  FUN_144d94360();
  return 0xffffffffffffffff;
}



// FUNCTION 144b53e80 FUN_144b53e80 body=76 status=ok
// SIG undefined FUN_144b53e80(void)

undefined8 FUN_144b53e80(void)

{
  return 1;
}



// FUNCTION 144b53ed0 FUN_144b53ed0 body=19 status=ok
// SIG undefined FUN_144b53ed0(void)

undefined8 FUN_144b53ed0(void)

{
  return 1;
}



// FUNCTION 144b53ef0 FUN_144b53ef0 body=67 status=ok
// SIG undefined FUN_144b53ef0(void)

void FUN_144b53ef0(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = &DAT_149a04c60;
  ppuVar2 = &PTR_DAT_149970520;
  do {
    FUN_144b558b0(param_1,puVar1);
    puVar1 = ppuVar2[1];
    ppuVar2 = ppuVar2 + 1;
  } while (puVar1 != (undefined *)0x0);
  return;
}



// FUNCTION 144b53f40 FUN_144b53f40 body=40 status=ok
// SIG undefined FUN_144b53f40(void)

void FUN_144b53f40(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}



// FUNCTION 144b53f70 FUN_144b53f70 body=40 status=ok
// SIG undefined FUN_144b53f70(void)

void FUN_144b53f70(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}



// FUNCTION 144b53fa0 FUN_144b53fa0 body=435 status=ok
// SIG undefined FUN_144b53fa0(void)

int FUN_144b53fa0(undefined8 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  void *_Src;
  int iVar5;
  size_t _Size;
  int iVar6;
  int iVar7;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    return 6;
  }
  if (param_2 == param_3) {
    return 0;
  }
  iVar1 = param_3[2];
  iVar5 = param_2[2];
  iVar7 = (iVar1 >> 0x1f & 0xfffffffeU) + 1;
  iVar6 = (iVar5 >> 0x1f & 0xfffffffeU) + 1;
  if (*(longlong *)(param_2 + 4) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 2) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 6) = uVar2;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
    if (iVar6 != iVar7) {
      param_3[2] = -param_3[2];
    }
    return 0;
  }
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  uVar4 = *param_2 * iVar5;
  if (*(longlong *)(param_3 + 4) == 0) {
    uVar2 = FUN_144b56160(*param_1,uVar4,local_res8);
  }
  else {
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (*param_3 * iVar1 == uVar4) goto LAB_144b540c2;
    uVar2 = FUN_144b562a0(*param_1,1,*param_3 * iVar1,uVar4,*(longlong *)(param_3 + 4),local_res8);
  }
  *(undefined8 *)(param_3 + 4) = uVar2;
  if (local_res8[0] != 0) {
    return local_res8[0];
  }
LAB_144b540c2:
  pvVar3 = *(void **)(param_3 + 4);
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_3 = *(undefined8 *)param_2;
  *(undefined8 *)(param_3 + 2) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_3 + 6) = uVar2;
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
  *(void **)(param_3 + 4) = pvVar3;
  if (iVar6 == iVar7) {
    memcpy(pvVar3,*(void **)(param_2 + 4),(ulonglong)uVar4);
  }
  else {
    iVar1 = *param_3;
    _Src = *(void **)(param_2 + 4);
    pvVar3 = (void *)((ulonglong)(uint)((iVar1 + -1) * iVar5) + (longlong)pvVar3);
    if (iVar1 != 0) {
      _Size = (size_t)iVar5;
      do {
        memcpy(pvVar3,_Src,_Size);
        _Src = (void *)((longlong)_Src + _Size);
        pvVar3 = (void *)((longlong)pvVar3 - _Size);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return local_res8[0];
}



// FUNCTION 144b54160 FUN_144b54160 body=1213 status=ok
// SIG undefined FUN_144b54160(void)

int FUN_144b54160(undefined8 *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  byte *_Src;
  uint uVar3;
  byte *_Dst;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int local_res8 [2];
  
  iVar5 = 0;
  local_res8[0] = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if ((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) {
    return 6;
  }
  uVar2 = *param_1;
  if (6 < (byte)(*(char *)((longlong)param_2 + 0x1a) - 1U)) {
    local_res8[0] = 6;
LAB_144b54255:
    _Dst = *(byte **)(param_3 + 4);
    _Src = *(byte **)(param_2 + 4);
    if ((int)param_2[2] < 0) {
      _Src = _Src + -(longlong)(int)((*param_2 - 1) * param_2[2]);
    }
    if ((int)param_3[2] < 0) {
      _Dst = _Dst + -(longlong)(int)((*param_3 - 1) * param_3[2]);
    }
    switch(*(undefined1 *)((longlong)param_2 + 0x1a)) {
    case 1:
      *(undefined2 *)(param_3 + 6) = 2;
      uVar1 = *param_2;
      if (uVar1 != 0) {
        do {
          pbVar6 = _Src;
          pbVar7 = _Dst;
          for (uVar8 = param_2[1] >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            bVar4 = *pbVar6;
            uVar3 = (uint)bVar4;
            pbVar6 = pbVar6 + 1;
            *pbVar7 = (byte)((int)uVar3 >> 7);
            pbVar7[1] = (byte)((int)(uint)bVar4 >> 6) & 1;
            pbVar7[2] = (byte)((int)uVar3 >> 5) & 1;
            pbVar7[3] = (byte)((int)uVar3 >> 4) & 1;
            pbVar7[4] = (byte)((int)uVar3 >> 3) & 1;
            pbVar7[5] = (byte)((int)uVar3 >> 2) & 1;
            pbVar7[7] = bVar4 & 1;
            pbVar7[6] = (byte)((int)uVar3 >> 1) & 1;
            pbVar7 = pbVar7 + 8;
          }
          uVar8 = param_2[1] & 7;
          if (uVar8 != 0) {
            uVar3 = (uint)*pbVar6;
            do {
              iVar5 = (int)uVar3 >> 7;
              uVar3 = uVar3 * 2;
              *pbVar7 = (byte)iVar5 & 1;
              uVar8 = uVar8 - 1;
              pbVar7 = pbVar7 + 1;
            } while (uVar8 != 0);
          }
          _Src = _Src + (int)param_2[2];
          _Dst = _Dst + (int)param_3[2];
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
        return local_res8[0];
      }
      break;
    case 2:
    case 5:
    case 6:
      uVar1 = param_2[1];
      *(undefined2 *)(param_3 + 6) = 0x100;
      uVar8 = *param_2;
      if (uVar8 != 0) {
        do {
          memcpy(_Dst,_Src,(ulonglong)uVar1);
          _Src = _Src + (int)param_2[2];
          _Dst = _Dst + (int)param_3[2];
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        return local_res8[0];
      }
      break;
    case 3:
      *(undefined2 *)(param_3 + 6) = 4;
      uVar1 = *param_2;
      if (uVar1 != 0) {
        do {
          pbVar6 = _Src;
          pbVar7 = _Dst;
          for (uVar8 = param_2[1] >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            bVar4 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            *pbVar7 = (byte)((int)(uint)bVar4 >> 6);
            pbVar7[1] = (byte)((int)(uint)bVar4 >> 4) & 3;
            pbVar7[3] = bVar4 & 3;
            pbVar7[2] = (byte)((int)(uint)bVar4 >> 2) & 3;
            pbVar7 = pbVar7 + 4;
          }
          uVar8 = param_2[1] & 3;
          if (uVar8 != 0) {
            uVar3 = (uint)*pbVar6;
            do {
              iVar5 = (int)uVar3 >> 6;
              uVar3 = uVar3 << 2;
              *pbVar7 = (byte)iVar5 & 3;
              uVar8 = uVar8 - 1;
              pbVar7 = pbVar7 + 1;
            } while (uVar8 != 0);
          }
          _Src = _Src + (int)param_2[2];
          _Dst = _Dst + (int)param_3[2];
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
        return local_res8[0];
      }
      break;
    case 4:
      *(undefined2 *)(param_3 + 6) = 0x10;
      uVar1 = *param_2;
      if (uVar1 != 0) {
        do {
          pbVar6 = _Src;
          pbVar7 = _Dst;
          for (uVar8 = param_2[1] >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
            bVar4 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            pbVar7[1] = bVar4 & 0xf;
            *pbVar7 = (byte)((int)(uint)bVar4 >> 4);
            pbVar7 = pbVar7 + 2;
          }
          if ((param_2[1] & 1) != 0) {
            *pbVar7 = *pbVar6 >> 4;
          }
          _Src = _Src + (int)param_2[2];
          _Dst = _Dst + (int)param_3[2];
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
        return local_res8[0];
      }
      break;
    case 7:
      *(undefined2 *)(param_3 + 6) = 0x100;
      for (uVar1 = *param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
        uVar8 = param_2[1];
        if (uVar8 != 0) {
          pbVar6 = _Src + 1;
          pbVar7 = _Dst;
          do {
            bVar4 = pbVar6[2];
            if (bVar4 != 0) {
              bVar4 = bVar4 - (char)(((uint)pbVar6[1] * (uint)pbVar6[1] * 0x366d +
                                      (uint)*pbVar6 * (uint)*pbVar6 * 0xb717 +
                                      (uint)pbVar6[-1] * (uint)pbVar6[-1] * 0x127c >> 0x10) /
                                    (uint)bVar4);
            }
            *pbVar7 = bVar4;
            pbVar6 = pbVar6 + 4;
            pbVar7 = pbVar7 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        _Src = _Src + (int)param_2[2];
        _Dst = _Dst + (int)param_3[2];
      }
    }
    return local_res8[0];
  }
  uVar1 = param_3[2];
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1;
  }
  uVar8 = *param_3;
  *(undefined1 *)((longlong)param_3 + 0x1a) = 2;
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  if (0 < param_4) {
    iVar5 = 0;
    if ((int)param_2[1] % param_4 != 0) {
      iVar5 = param_4 - (int)param_2[1] % param_4;
    }
  }
  uVar3 = param_2[1] + iVar5;
  if (((int)uVar3 < 1) || (*param_3 <= (uint)(0xffffffff / (ulonglong)uVar3))) {
    uVar2 = FUN_144b562a0(uVar2,1,uVar8 * uVar1,*param_3 * uVar3,*(undefined8 *)(param_3 + 4),
                          local_res8);
    *(undefined8 *)(param_3 + 4) = uVar2;
    if (local_res8[0] == 0) {
      uVar1 = -uVar3;
      if (-1 < (int)param_3[2]) {
        uVar1 = uVar3;
      }
      param_3[2] = uVar1;
      goto LAB_144b54255;
    }
  }
  else {
    local_res8[0] = 6;
  }
  return local_res8[0];
}



// FUNCTION 144b54640 FUN_144b54640 body=99 status=ok
// SIG undefined FUN_144b54640(void)

undefined4 FUN_144b54640(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  FUN_144b56350(*param_1,param_2[2]);
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return 0;
}



// FUNCTION 144b546d0 FUN_144b546d0 body=29 status=ok
// SIG undefined FUN_144b546d0(void)

undefined8 FUN_144b546d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  if (param_2 == 0) {
    return 0x51;
  }
  uVar1 = FUN_144b5e4f0();
  return uVar1;
}



// FUNCTION 144b546f0 FUN_144b546f0 body=121 status=ok
// SIG undefined FUN_144b546f0(void)

int FUN_144b546f0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = FUN_144b5e770(lVar1,param_3,&DAT_149970720);
  if (lVar3 == 0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = FUN_144b5e6c0(param_1,lVar3,param_5);
    if (iVar2 == 0) {
      *param_4 = lVar3;
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    }
  }
  return iVar2;
}



// FUNCTION 144b54770 FUN_144b54770 body=184 status=ok
// SIG undefined FUN_144b54770(void)

undefined4
FUN_144b54770(longlong *param_1,undefined8 param_2,void *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  void *_Dst;
  longlong lVar1;
  size_t _Size;
  int iVar3;
  longlong lVar2;
  
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)((longlong)param_3 + lVar1) != '\0');
  iVar3 = (int)lVar2 + 0x13;
  _Dst = (void *)0x0;
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      return 6;
    }
  }
  else {
    _Dst = (void *)(**(code **)(*param_1 + 8))(*param_1);
    if (_Dst == (void *)0x0) {
      return 0x40;
    }
    memset(_Dst,0,(longlong)iVar3);
  }
  _Size = (size_t)(int)lVar1;
  memcpy(_Dst,param_3,_Size);
  builtin_strncpy((char *)(_Size + (longlong)_Dst),"/..namedfork/rsr",0x10);
  *(undefined2 *)(_Size + 0x10 + (longlong)_Dst) = 99;
  *param_4 = _Dst;
  *param_5 = 0;
  return 0;
}



// FUNCTION 144b54830 FUN_144b54830 body=182 status=ok
// SIG undefined FUN_144b54830(void)

undefined4
FUN_144b54830(longlong *param_1,undefined8 param_2,void *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  void *_Dst;
  longlong lVar1;
  size_t _Size;
  int iVar3;
  longlong lVar2;
  
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)((longlong)param_3 + lVar1) != '\0');
  iVar3 = (int)lVar2 + 7;
  _Dst = (void *)0x0;
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      return 6;
    }
  }
  else {
    _Dst = (void *)(**(code **)(*param_1 + 8))(*param_1);
    if (_Dst == (void *)0x0) {
      return 0x40;
    }
    memset(_Dst,0,(longlong)iVar3);
  }
  _Size = (size_t)(int)lVar1;
  memcpy(_Dst,param_3,_Size);
  *(undefined4 *)(_Size + (longlong)_Dst) = 0x7273722f;
  *(undefined2 *)(_Size + 4 + (longlong)_Dst) = 99;
  *param_4 = _Dst;
  *param_5 = 0;
  return 0;
}



// FUNCTION 144b548f0 FUN_144b548f0 body=65 status=ok
// SIG undefined FUN_144b548f0(void)

undefined8
FUN_144b548f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_144b5e770(*param_1,param_3,"resource.frk/");
  if (lVar1 == 0) {
    return 0x40;
  }
  *param_4 = lVar1;
  *param_5 = 0;
  return 0;
}



// FUNCTION 144b54940 FUN_144b54940 body=65 status=ok
// SIG undefined FUN_144b54940(void)

undefined8
FUN_144b54940(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_144b5e770(*param_1,param_3,".resource/");
  if (lVar1 == 0) {
    return 0x40;
  }
  *param_4 = lVar1;
  *param_5 = 0;
  return 0;
}



// FUNCTION 144b54990 FUN_144b54990 body=121 status=ok
// SIG undefined FUN_144b54990(void)

int FUN_144b54990(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = FUN_144b5e770(lVar1,param_3,&DAT_149f215a3);
  if (lVar3 == 0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = FUN_144b5e6c0(param_1,lVar3,param_5);
    if (iVar2 == 0) {
      *param_4 = lVar3;
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    }
  }
  return iVar2;
}



// FUNCTION 144b54a10 FUN_144b54a10 body=121 status=ok
// SIG undefined FUN_144b54a10(void)

int FUN_144b54a10(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = FUN_144b5e770(lVar1,param_3,".AppleDouble/");
  if (lVar3 == 0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = FUN_144b5e6c0(param_1,lVar3,param_5);
    if (iVar2 == 0) {
      *param_4 = lVar3;
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    }
  }
  return iVar2;
}



// FUNCTION 144b54a90 FUN_144b54a90 body=78 status=ok
// SIG undefined FUN_144b54a90(void)

undefined8
FUN_144b54a90(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 local_48 [2];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_28;
  
  if (param_2 == 0) {
    return 6;
  }
  local_48[0] = 1;
  local_28 = 0;
  local_40 = param_2;
  local_38 = param_3;
  uVar1 = FUN_144b5bd00(param_1,local_48,param_4,param_5,1);
  return uVar1;
}



// FUNCTION 144b54ae0 FUN_144b54ae0 body=19 status=ok
// SIG undefined FUN_144b54ae0(void)

void FUN_144b54ae0(void)

{
  FUN_144b5bd00();
  return;
}



// FUNCTION 144b54b00 FUN_144b54b00 body=226 status=ok
// SIG undefined FUN_144b54b00(void)

undefined8 FUN_144b54b00(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 0x60);
    *piVar1 = *piVar1 + -1;
    if (0 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x60)) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x90);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    puVar2 = (undefined8 *)(lVar3 + 0x20);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar5 = (longlong *)*puVar2; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1])
      {
        if (plVar5[2] == param_1) {
          if (puVar2 != (undefined8 *)0x0) {
            lVar6 = *plVar5;
            plVar5 = (longlong *)plVar5[1];
            if (lVar6 == 0) {
              *puVar2 = plVar5;
            }
            else {
              *(longlong **)(lVar6 + 8) = plVar5;
            }
            if (plVar5 == (longlong *)0x0) {
              *(longlong *)(lVar3 + 0x28) = lVar6;
            }
            else {
              *plVar5 = lVar6;
            }
          }
          (**(code **)(lVar4 + 0x10))(lVar4);
          FUN_144b5c690(lVar4,param_1,lVar3);
          return 0;
        }
      }
    }
    return 0x23;
  }
  return 0x23;
}



// FUNCTION 144b54bf0 FUN_144b54bf0 body=109 status=ok
// SIG undefined FUN_144b54bf0(void)

undefined8 FUN_144b54bf0(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 8) & 2) == 0)) {
    return 0x23;
  }
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x28))) {
    pcVar1 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0xa0);
    if (pcVar1 != (code *)0x0) {
      uVar2 = (*pcVar1)(*(undefined8 *)(param_1 + 0x80));
      return uVar2;
    }
    FUN_144b57d60(param_1);
    return 0;
  }
  return 6;
}



// FUNCTION 144b54c60 FUN_144b54c60 body=219 status=ok
// SIG undefined FUN_144b54c60(void)

undefined8 FUN_144b54c60(longlong param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((((param_2 == (int *)0x0) || (param_2[1] < 0)) || (param_2[2] < 0)) || (4 < *param_2)) {
    uVar2 = 6;
  }
  else {
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x38) + 0x10) = 0;
    pcVar1 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0x98);
    if (pcVar1 != (code *)0x0) {
      uVar2 = (*pcVar1)(*(undefined8 *)(param_1 + 0x80));
      return uVar2;
    }
    if (((*(uint *)(param_1 + 8) & 1) != 0) || ((*(uint *)(param_1 + 8) & 2) == 0)) {
      FUN_144b57e90(param_1);
      return 0;
    }
    uVar2 = FUN_144b581e0(param_1,param_2,0,local_res8);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_144b54bf0(param_1,local_res8[0]);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 144b54d40 FUN_144b54d40 body=1148 status=ok
// SIG undefined FUN_144b54d40(void)

int FUN_144b54d40(longlong param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x80) == 0)) ||
     (lVar3 = *(longlong *)(param_1 + 0x78), lVar3 == 0)) {
    return 0x23;
  }
  FUN_144b5c2a0(lVar3);
  puVar4 = *(undefined8 **)(param_1 + 0x90);
  plVar5 = *(longlong **)(puVar4[1] + 0x130);
  uVar12 = param_3 | 0x801;
  if ((param_3 & 0x400) == 0) {
    uVar12 = param_3;
  }
  if ((uVar12 & 1) != 0) {
    uVar12 = uVar12 & 0xfffffffb | 10;
  }
  uVar7 = uVar12 & 0xfffffffb;
  if ((uVar12 & 0x400000) == 0) {
    uVar7 = uVar12;
  }
  if (((plVar5 == (longlong *)0x0) || ((uVar7 & 0x8002) != 0)) ||
     ((*(uint *)(param_1 + 8) & 0x2001) != 1)) {
LAB_144b54f2e:
    iVar9 = (**(code **)(puVar4[3] + 0x78))(lVar3,*(undefined8 *)(param_1 + 0x80),param_2,uVar7);
    if (iVar9 != 0) {
      return iVar9;
    }
    iVar9 = 0;
    if (*(int *)(lVar3 + 0x60) == 0x6f75746c) {
      iVar9 = FUN_144b5ad30(lVar3 + 0x98);
      if (iVar9 != 0) {
        return iVar9;
      }
      iVar9 = 0;
      if ((uVar7 & 2) == 0) {
        FUN_144b5c470(lVar3,uVar7 >> 4 & 0xfffff01);
      }
    }
  }
  else {
    if ((uVar7 >> 0xb & 1) == 0) {
      piVar6 = *(int **)(param_1 + 0xd0);
      if (((piVar6[2] != 0) || (*piVar6 == 0)) && ((*piVar6 != 0 || (piVar6[2] == 0))))
      goto LAB_144b54f2e;
    }
    if (((uVar7 & 0x20) == 0) && ((*(uint *)*puVar4 & 0x400) != 0)) {
      pcVar10 = (char *)FUN_144b59020(param_1);
      pcVar10 = strstr(pcVar10,"Type 1");
      if ((pcVar10 == (char *)0x0) || (*(int *)(puVar4 + 7) != 1)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (((((uVar7 & 0xf0000) != 0x10000) || ((*(uint *)*puVar4 & 0x800) != 0)) || (bVar8)) &&
         ((((*(byte *)(param_1 + 8) & 8) == 0 || (*(int *)(param_1 + 0x434) == 0)) ||
          ((*(short *)(param_1 + 0x18a) != 0 ||
           ((*(int *)(param_1 + 0x3b0) != 0 || (*(int *)(param_1 + 0x3c0) != 0))))))))
      goto LAB_144b54f2e;
    }
    if (((((*(byte *)(param_1 + 8) & 2) == 0) || ((uVar7 & 8) != 0)) ||
        (iVar9 = (**(code **)(puVar4[3] + 0x78))
                           (lVar3,*(undefined8 *)(param_1 + 0x80),param_2,uVar7 | 0x4000),
        iVar9 != 0)) || (iVar9 = 0, *(int *)(lVar3 + 0x60) != 0x62697473)) {
      lVar16 = *(longlong *)(param_1 + 0xd0);
      uVar2 = *(undefined4 *)(lVar16 + 0x18);
      *(undefined4 *)(lVar16 + 0x18) = 0;
      iVar9 = (**(code **)(*(longlong *)(*plVar5 + 0x18) + 0x18))
                        (plVar5,lVar3,*(undefined8 *)(param_1 + 0x80),param_2,uVar7);
      *(undefined4 *)(lVar16 + 0x18) = uVar2;
    }
  }
  puVar1 = (undefined4 *)(lVar3 + 0x58);
  if ((uVar7 & 0x10) == 0) {
    *puVar1 = *(undefined4 *)(lVar3 + 0x40);
    *(undefined4 *)(lVar3 + 0x5c) = 0;
  }
  else {
    *(undefined4 *)(lVar3 + 0x5c) = *(undefined4 *)(lVar3 + 0x4c);
    *puVar1 = 0;
  }
  if (((uVar7 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    lVar11 = (longlong)*(int *)(lVar3 + 0x50);
    iVar15 = 1;
    lVar16 = *(longlong *)(param_1 + 0x80);
    iVar14 = 1;
    iVar13 = *(int *)(lVar16 + 0x1c);
    lVar17 = (longlong)iVar13;
    if (*(int *)(lVar3 + 0x50) < 0) {
      lVar11 = -lVar11;
      iVar14 = -1;
    }
    if (iVar13 < 0) {
      lVar17 = -lVar17;
      iVar14 = -iVar14;
    }
    iVar13 = (int)(lVar17 * lVar11 + 0x20U >> 6);
    if (iVar14 < 0) {
      iVar13 = -iVar13;
    }
    lVar11 = (longlong)*(int *)(lVar3 + 0x54);
    *(int *)(lVar3 + 0x50) = iVar13;
    iVar13 = *(int *)(lVar16 + 0x20);
    lVar16 = (longlong)iVar13;
    if (*(int *)(lVar3 + 0x54) < 0) {
      lVar11 = -lVar11;
      iVar15 = -1;
    }
    if (iVar13 < 0) {
      lVar16 = -lVar16;
      iVar15 = -iVar15;
    }
    iVar13 = (int)(lVar16 * lVar11 + 0x20U >> 6);
    if (iVar15 < 0) {
      iVar13 = -iVar13;
    }
    *(int *)(lVar3 + 0x54) = iVar13;
  }
  if ((uVar7 >> 0xb & 1) == 0) {
    lVar16 = *(longlong *)(param_1 + 0xd0);
    if (*(uint *)(lVar16 + 0x18) != 0) {
      lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x90) + 8);
      lVar17 = *(longlong *)(lVar11 + 0x128);
      if ((lVar17 == 0) || (iVar13 = *(int *)(lVar3 + 0x60), *(int *)(lVar17 + 0x20) != iVar13)) {
        lVar11 = *(longlong *)(lVar11 + 0x118);
        iVar13 = *(int *)(lVar3 + 0x60);
        while ((lVar17 = 0, lVar11 != 0 &&
               (lVar17 = *(longlong *)(lVar11 + 0x10), *(int *)(lVar17 + 0x20) != iVar13))) {
          lVar11 = *(longlong *)(lVar11 + 8);
        }
      }
      if (lVar17 == 0) {
        if (iVar13 == 0x6f75746c) {
          if ((*(uint *)(lVar16 + 0x18) & 1) != 0) {
            FUN_144b5aea0(lVar3 + 0x98,lVar16);
          }
          if ((*(byte *)(lVar16 + 0x18) & 2) != 0) {
            FUN_144b5ada0(lVar3 + 0x98,*(undefined4 *)(lVar16 + 0x10),*(undefined4 *)(lVar16 + 0x14)
                         );
          }
        }
      }
      else {
        iVar9 = (**(code **)(*(longlong *)(lVar17 + 0x18) + 0x48))
                          (lVar17,lVar3,lVar16,lVar16 + 0x10);
      }
      FUN_144b55650(puVar1,lVar16);
    }
  }
  *(undefined4 *)(lVar3 + 0x18) = param_2;
  *(uint *)(*(longlong *)(lVar3 + 0xf0) + 0x30) = uVar7;
  if ((((iVar9 == 0) && ((uVar7 & 1) == 0)) && (*(int *)(lVar3 + 0x60) != 0x62697473)) &&
     (*(int *)(lVar3 + 0x60) != 0x636f6d70)) {
    uVar12 = (int)uVar7 >> 0x10 & 0xf;
    if ((uVar12 == 0) && (uVar12 = 0, (uVar7 >> 0xc & 1) != 0)) {
      uVar12 = 2;
    }
    if ((uVar7 & 4) == 0) {
      FUN_144b58410(lVar3,uVar12,0);
    }
    else if (*(longlong *)(lVar3 + 8) == 0) {
      iVar9 = 6;
    }
    else {
      iVar9 = FUN_144b58810(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x90) + 8),
                            lVar3,uVar12);
    }
  }
  return iVar9;
}



// FUNCTION 144b551c0 FUN_144b551c0 body=42 status=ok
// SIG undefined FUN_144b551c0(void)

undefined8 FUN_144b551c0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    uVar1 = FUN_144b58810(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                          param_1,param_2);
    return uVar1;
  }
  return 6;
}



// FUNCTION 144b551f0 FUN_144b551f0 body=216 status=ok
// SIG undefined FUN_144b551f0(void)

undefined8 FUN_144b551f0(longlong param_1,int param_2,undefined1 *param_3,int param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
    *param_3 = 0;
    if (*(int *)(param_1 + 0x10) <= param_2) {
      return 0x10;
    }
    if (((*(uint *)(param_1 + 8) & 0x200) != 0) &&
       (puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0xd0) + 0x38),
       puVar2 != (undefined8 *)0xfffffffffffffffe)) {
      if (puVar2 == (undefined8 *)0x0) {
        pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
        if (pcVar1 != (code *)0x0) {
          puVar2 = (undefined8 *)(*pcVar1)(*(longlong **)(param_1 + 0x90),"glyph-dict");
        }
        puVar4 = (undefined8 *)0xfffffffffffffffe;
        if (puVar2 != (undefined8 *)0x0) {
          puVar4 = puVar2;
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0xd0) + 0x38) = puVar4;
        if (puVar2 == (undefined8 *)0x0) {
          return 6;
        }
      }
      if ((code *)*puVar2 != (code *)0x0) {
        uVar3 = (*(code *)*puVar2)(param_1,param_2,param_3,param_4);
        return uVar3;
      }
    }
  }
  return 6;
}



// FUNCTION 144b552d0 FUN_144b552d0 body=100 status=ok
// SIG undefined FUN_144b552d0(void)

undefined4 FUN_144b552d0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      return 6;
    }
  }
  else if (param_2 == 0x756e6963) {
    plVar3 = *(longlong **)(param_1 + 0x40);
    if ((plVar3 != (longlong *)0x0) &&
       (plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x38) + -1, plVar2 = plVar4, plVar3 <= plVar4
       )) {
      do {
        lVar1 = *plVar2;
        if ((*(int *)(lVar1 + 8) == 0x756e6963) &&
           (((*(short *)(lVar1 + 0xc) == 3 && (*(short *)(lVar1 + 0xe) == 10)) ||
            ((*(short *)(lVar1 + 0xc) == 0 && (*(short *)(lVar1 + 0xe) == 4)))))) {
          *(longlong *)(param_1 + 0x88) = lVar1;
          return 0;
        }
        plVar2 = plVar2 + -1;
      } while (plVar3 <= plVar2);
      for (; plVar3 <= plVar4; plVar4 = plVar4 + -1) {
        if (*(int *)(*plVar4 + 8) == 0x756e6963) {
          *(longlong *)(param_1 + 0x88) = *plVar4;
          return 0;
        }
      }
    }
    return 0x26;
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 == (longlong *)0x0) {
    return 0x26;
  }
  plVar4 = plVar3 + *(int *)(param_1 + 0x38);
  if (plVar4 <= plVar3) {
    return 6;
  }
  do {
    if (*(int *)(*plVar3 + 8) == param_2) {
      *(longlong *)(param_1 + 0x88) = *plVar3;
      return 0;
    }
    plVar3 = plVar3 + 1;
  } while (plVar3 < plVar4);
  return 6;
}



// FUNCTION 144b55340 FUN_144b55340 body=160 status=ok
// SIG undefined FUN_144b55340(void)

undefined4 FUN_144b55340(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
  if ((plVar3 != (longlong *)0x0) && (param_2 != 0)) {
    plVar1 = plVar3 + *(int *)(param_1 + 0x38);
    while( true ) {
      if (plVar1 <= plVar3) {
        return 6;
      }
      if ((*plVar3 == param_2) && (iVar2 = FUN_144b58fc0(param_2), iVar2 != 0xe)) break;
      plVar3 = plVar3 + 1;
    }
    *(longlong *)(param_1 + 0x88) = *plVar3;
    return 0;
  }
  return 0x26;
}



// FUNCTION 144b553e0 FUN_144b553e0 body=127 status=ok
// SIG undefined FUN_144b553e0(void)

uint FUN_144b553e0(longlong param_1,uint param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint local_res8 [2];
  
  uVar3 = 0;
  uVar2 = 0;
  if (((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x88), uVar2 = 0, lVar1 != 0)) &&
     (uVar2 = 0, local_res8[0] = param_2, *(int *)(param_1 + 0x10) != 0)) {
    do {
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))(lVar1,local_res8);
    } while (*(uint *)(param_1 + 0x10) <= uVar2);
    uVar3 = local_res8[0];
    if (uVar2 == 0) {
      uVar3 = 0;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  return uVar3;
}



// FUNCTION 144b55460 FUN_144b55460 body=157 status=ok
// SIG undefined FUN_144b55460(void)

undefined8 FUN_144b55460(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x200) != 0)) && (param_2 != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x38), lVar2 != -2)) {
    if (lVar2 == 0) {
      pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
      if (pcVar1 != (code *)0x0) {
        lVar2 = (*pcVar1)(*(longlong **)(param_1 + 0x90),"glyph-dict");
      }
      lVar4 = -2;
      if (lVar2 != 0) {
        lVar4 = lVar2;
      }
      *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x38) = lVar4;
      if (lVar2 == 0) {
        return 0;
      }
    }
    if (*(code **)(lVar2 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144b554ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 8))(param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 144b55500 FUN_144b55500 body=116 status=ok
// SIG undefined FUN_144b55500(void)

undefined8 FUN_144b55500(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x88) + 8) == 0x756e6963)) {
    lVar1 = FUN_144b5c9b0();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000144b5555e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x28))
                        (lVar1,*(undefined8 *)(param_1 + 0x88),param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144b55580 FUN_144b55580 body=85 status=ok
// SIG undefined FUN_144b55580(void)

ulonglong FUN_144b55580(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  iVar2 = 1;
  lVar1 = (longlong)param_2;
  uVar3 = (ulonglong)param_3;
  if (param_1 < 0) {
    lVar4 = -lVar4;
    iVar2 = -1;
  }
  if (param_2 < 0) {
    lVar1 = -lVar1;
    iVar2 = -iVar2;
  }
  if (param_3 < 0) {
    uVar3 = -uVar3;
    iVar2 = -iVar2;
  }
  if (uVar3 == 0) {
    uVar3 = 0x7fffffff;
  }
  else {
    uVar3 = (lVar1 * lVar4 + (uVar3 >> 1)) / uVar3;
  }
  if (iVar2 < 0) {
    uVar3 = (ulonglong)(uint)-(int)uVar3;
  }
  return uVar3;
}



// FUNCTION 144b555e0 FUN_144b555e0 body=71 status=ok
// SIG undefined FUN_144b555e0(void)

ulonglong FUN_144b555e0(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1;
  iVar2 = 1;
  uVar1 = (ulonglong)param_2;
  if (param_1 < 0) {
    lVar3 = -lVar3;
    iVar2 = -1;
  }
  if (param_2 < 0) {
    uVar1 = -uVar1;
    iVar2 = -iVar2;
  }
  if (uVar1 == 0) {
    uVar1 = 0x7fffffff;
  }
  else {
    uVar1 = ((uVar1 >> 1) + lVar3 * 0x10000) / uVar1;
  }
  if (iVar2 < 0) {
    uVar1 = (ulonglong)(uint)-(int)uVar1;
  }
  return uVar1;
}



// FUNCTION 144b55630 FUN_144b55630 body=19 status=ok
// SIG undefined FUN_144b55630(void)

uint FUN_144b55630(int param_1)

{
  return param_1 + (param_1 >> 0x1f) + 0x8000U & 0xffff0000;
}



// FUNCTION 144b55650 FUN_144b55650 body=168 status=ok
// SIG undefined FUN_144b55650(void)

void FUN_144b55650(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    lVar2 = (longlong)param_2[1] * (longlong)param_1[1];
    lVar1 = (longlong)param_2[3] * (longlong)param_1[1];
    lVar3 = (longlong)*param_2 * (longlong)*param_1;
    lVar4 = (longlong)param_2[2] * (longlong)*param_1;
    *param_1 = (int)((ulonglong)(lVar2 + (lVar2 >> 0x3f) + 0x8000) >> 0x10) +
               (int)((ulonglong)(lVar3 + (lVar3 >> 0x3f) + 0x8000) >> 0x10);
    param_1[1] = (int)((ulonglong)(lVar1 + (lVar1 >> 0x3f) + 0x8000) >> 0x10) +
                 (int)((ulonglong)(lVar4 + (lVar4 >> 0x3f) + 0x8000) >> 0x10);
  }
  return;
}



// FUNCTION 144b55700 FUN_144b55700 body=48 status=ok
// SIG undefined FUN_144b55700(void)

void FUN_144b55700(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar3;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar2;
  }
  return;
}



// FUNCTION 144b55730 FUN_144b55730 body=374 status=ok
// SIG undefined FUN_144b55730(void)

ulonglong FUN_144b55730(longlong param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_5 == (int *)0x0) {
    uVar3 = 6;
  }
  else if (((param_2 < *(uint *)(param_1 + 0x10)) && (param_2 <= param_2 + param_3)) &&
          (param_2 + param_3 <= *(uint *)(param_1 + 0x10))) {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      pcVar1 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0x90);
      if ((pcVar1 != (code *)0x0) && (((param_4 & 3) != 0 || ((param_4 & 0xf0000) == 0x10000)))) {
        piVar7 = param_5;
        uVar3 = (*pcVar1)(param_1);
        if ((int)uVar3 == 0) {
          uVar3 = FUN_144b58a60(param_1,param_5,param_3,param_4,piVar7);
          return uVar3;
        }
        if ((char)uVar3 != '\a') {
          return uVar3;
        }
      }
      uVar2 = 0;
      if ((param_4 >> 0x1d & 1) == 0) {
        iVar6 = 0x400;
        if ((param_4 & 1) != 0) {
          iVar6 = 1;
        }
        uVar5 = 0;
        if (param_3 != 0) {
          do {
            uVar2 = FUN_144b54d40(param_1,uVar5 + param_2,param_4 | 0x100);
            if (uVar2 != 0) break;
            if ((param_4 & 0x10) == 0) {
              iVar4 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x58);
            }
            else {
              iVar4 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x5c);
            }
            uVar5 = uVar5 + 1;
            *param_5 = iVar6 * iVar4;
            param_5 = param_5 + 1;
          } while (uVar5 < param_3);
        }
        uVar3 = (ulonglong)uVar2;
      }
      else {
        uVar3 = 7;
      }
    }
  }
  else {
    uVar3 = 0x10;
  }
  return uVar3;
}



// FUNCTION 144b558b0 FUN_144b558b0 body=472 status=ok
// SIG undefined FUN_144b558b0(void)

ulonglong FUN_144b558b0(longlong *param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *_Dst;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (0x2000a < *(int *)(param_2 + 0x14)) {
    return 4;
  }
  uVar7 = 0;
  if (*(uint *)((longlong)param_1 + 0x14) != 0) {
    uVar10 = uVar7;
    do {
      plVar4 = (longlong *)param_1[uVar10 + 3];
      pcVar6 = *(char **)(*plVar4 + 8);
      lVar8 = *(longlong *)(param_2 + 8) - (longlong)pcVar6;
      do {
        cVar1 = *pcVar6;
        cVar2 = pcVar6[lVar8];
        if (cVar1 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        if (*(int *)(param_2 + 0x10) <= *(int *)(*plVar4 + 0x10)) {
          return 5;
        }
        FUN_144b55b10(param_1,plVar4);
        break;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < *(uint *)((longlong)param_1 + 0x14));
  }
  lVar8 = *param_1;
  if (0x1f < *(uint *)((longlong)param_1 + 0x14)) {
    return 0x30;
  }
  _Dst = (undefined8 *)0x0;
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      uVar7 = 6;
    }
  }
  else {
    _Dst = (undefined8 *)(**(code **)(lVar8 + 8))(lVar8);
    if (_Dst == (undefined8 *)0x0) {
      uVar7 = 0x40;
    }
    else {
      memset(_Dst,0,(longlong)iVar3);
    }
  }
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  _Dst[1] = param_1;
  _Dst[2] = lVar8;
  *_Dst = param_2;
  if ((*param_2 & 2) == 0) {
LAB_144b55a00:
    if ((*(byte *)*_Dst & 4) != 0) {
      param_1[0x26] = (longlong)_Dst;
    }
    if ((*(byte *)*_Dst & 1) != 0) {
      _Dst[3] = (byte *)*_Dst;
    }
    if (*(code **)(param_2 + 0x20) != (code *)0x0) {
      uVar9 = (**(code **)(param_2 + 0x20))(_Dst);
      uVar7 = (ulonglong)uVar9;
      if (uVar9 != 0) goto LAB_144b55a2f;
    }
    param_1[(ulonglong)*(uint *)((longlong)param_1 + 0x14) + 3] = (longlong)_Dst;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  }
  else {
    uVar9 = FUN_144b5dd90(_Dst);
    uVar7 = (ulonglong)uVar9;
    if (uVar9 == 0) goto LAB_144b55a00;
LAB_144b55a2f:
    if (((((*(byte *)*_Dst & 2) != 0) && (lVar5 = _Dst[3], lVar5 != 0)) &&
        (*(int *)(lVar5 + 0x38) == 0x6f75746c)) && (_Dst[0xc] != 0)) {
      (**(code **)(*(longlong *)(lVar5 + 0x60) + 0x28))();
    }
    (**(code **)(lVar8 + 0x10))(lVar8,_Dst);
  }
  return uVar7;
}



// FUNCTION 144b55a90 FUN_144b55a90 body=125 status=ok
// SIG undefined FUN_144b55a90(void)

undefined8 FUN_144b55a90(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  puVar5 = (undefined8 *)(param_1 + 0x18);
  puVar1 = puVar5 + *(uint *)(param_1 + 0x14);
  if (puVar1 <= puVar5) {
    return 0;
  }
  do {
    pcVar4 = *(char **)(*(longlong *)*puVar5 + 8);
    lVar6 = param_2 - (longlong)pcVar4;
    do {
      cVar2 = *pcVar4;
      cVar3 = pcVar4[lVar6];
      if (cVar2 != cVar3) break;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    if (cVar2 == cVar3) {
      return *puVar5;
    }
    puVar5 = puVar5 + 1;
    if (puVar1 <= puVar5) {
      return 0;
    }
  } while( true );
}



// FUNCTION 144b55b10 FUN_144b55b10 body=151 status=ok
// SIG undefined FUN_144b55b10(void)

undefined4 FUN_144b55b10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x18);
    plVar2 = plVar3 + *(uint *)(param_1 + 0x14);
    for (; plVar3 < plVar2; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_2) {
        plVar2 = plVar2 + -1;
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) - 1;
        if (plVar3 < plVar2) {
          plVar4 = plVar3;
          for (lVar1 = ((ulonglong)((longlong)plVar2 + (-1 - (longlong)plVar3)) >> 3) + 1;
              plVar3 = plVar3 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
            *plVar4 = *plVar3;
            plVar4 = plVar4 + 1;
          }
        }
        *plVar2 = 0;
        FUN_144b5dfc0(param_2);
        return 0;
      }
    }
  }
  return 0x22;
}



// FUNCTION 144b55bb0 FUN_144b55bb0 body=24 status=ok
// SIG undefined FUN_144b55bb0(void)

void FUN_144b55bb0(void)

{
  FUN_144b5e040();
  return;
}



// FUNCTION 144b55bd0 FUN_144b55bd0 body=149 status=ok
// SIG undefined FUN_144b55bd0(void)

undefined8 FUN_144b55bd0(longlong param_1,undefined8 *param_2)

{
  longlong *_Dst;
  
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    _Dst = (longlong *)(**(code **)(param_1 + 8))();
    if (_Dst != (longlong *)0x0) {
      memset(_Dst,0,0x178);
      *_Dst = param_1;
      *(undefined4 *)(_Dst + 1) = 2;
      *(undefined8 *)((longlong)_Dst + 0xc) = 10;
      *(undefined4 *)(_Dst + 0x2e) = 1;
      *param_2 = _Dst;
      return 0;
    }
    return 0x40;
  }
  return 6;
}



// FUNCTION 144b55c70 FUN_144b55c70 body=417 status=ok
// SIG undefined FUN_144b55c70(void)

undefined4 FUN_144b55c70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_1 == (int *)0x0) {
    return 6;
  }
  iVar1 = *param_1;
  lVar11 = (longlong)iVar1;
  iVar5 = (int)((ulonglong)(lVar11 * param_1[3] + (lVar11 * param_1[3] >> 0x3f) + 0x8000) >> 0x10) -
          (int)((ulonglong)
                ((longlong)param_1[1] * (longlong)param_1[2] +
                 ((longlong)param_1[1] * (longlong)param_1[2] >> 0x3f) + 0x8000) >> 0x10);
  if (iVar5 == 0) {
    return 6;
  }
  iVar7 = 1;
  lVar4 = (longlong)param_1[1];
  iVar10 = 1;
  uVar6 = (ulonglong)iVar5;
  iVar9 = iVar10;
  if (param_1[1] < 0) {
    lVar4 = -lVar4;
    iVar9 = -1;
  }
  uVar8 = uVar6;
  if (iVar5 < 0) {
    uVar8 = -uVar6;
    iVar9 = -iVar9;
  }
  iVar3 = 0x7fffffff;
  if (uVar8 == 0) {
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = (int)(((uVar8 >> 1) + lVar4 * 0x10000) / uVar8);
  }
  if (iVar9 < 0) {
    iVar2 = -iVar2;
  }
  lVar4 = (longlong)param_1[2];
  param_1[1] = -iVar2;
  if (param_1[2] < 0) {
    lVar4 = -lVar4;
    iVar10 = -1;
  }
  uVar8 = uVar6;
  if (iVar5 < 0) {
    uVar8 = -uVar6;
    iVar10 = -iVar10;
  }
  if (uVar8 == 0) {
    iVar9 = 0x7fffffff;
  }
  else {
    iVar9 = (int)(((uVar8 >> 1) + lVar4 * 0x10000) / uVar8);
  }
  if (iVar10 < 0) {
    iVar9 = -iVar9;
  }
  lVar4 = (longlong)param_1[3];
  iVar10 = 1;
  param_1[2] = -iVar9;
  if (param_1[3] < 0) {
    lVar4 = -lVar4;
    iVar10 = -1;
  }
  uVar8 = uVar6;
  if (iVar5 < 0) {
    uVar8 = -uVar6;
    iVar10 = -iVar10;
  }
  if (uVar8 == 0) {
    iVar9 = 0x7fffffff;
  }
  else {
    iVar9 = (int)(((uVar8 >> 1) + lVar4 * 0x10000) / uVar8);
  }
  if (iVar10 < 0) {
    iVar9 = -iVar9;
  }
  *param_1 = iVar9;
  if (iVar1 < 0) {
    lVar11 = -lVar11;
    iVar7 = -1;
  }
  if (iVar5 < 0) {
    uVar6 = -uVar6;
    iVar7 = -iVar7;
  }
  if (uVar6 != 0) {
    iVar3 = (int)(((uVar6 >> 1) + lVar11 * 0x10000) / uVar6);
  }
  if (iVar7 < 0) {
    iVar3 = -iVar3;
  }
  param_1[3] = iVar3;
  return 0;
}



// FUNCTION 144b55e20 FUN_144b55e20 body=349 status=ok
// SIG undefined FUN_144b55e20(void)

int FUN_144b55e20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int local_res8 [2];
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x90) == 0) {
      return 0x22;
    }
    *param_2 = 0;
    lVar1 = *(longlong *)(param_1 + 0x98);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
    plVar4 = (longlong *)FUN_144b560d0(lVar1,*(undefined4 *)(lVar2 + 0x3c),local_res8);
    iVar7 = local_res8[0];
    if (local_res8[0] == 0) {
      puVar5 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x18);
      if (puVar5 == (undefined8 *)0x0) {
        iVar7 = 0x40;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      if (iVar7 == 0) {
        *plVar4 = param_1;
        puVar6 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x28);
        if (puVar6 == (undefined8 *)0x0) {
          iVar7 = 0x40;
        }
        else {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
        }
        if (iVar7 == 0) {
          plVar4[7] = (longlong)puVar6;
          pcVar3 = *(code **)(lVar2 + 0x58);
          if (pcVar3 != (code *)0x0) {
            iVar7 = (*pcVar3)(plVar4);
          }
          if (iVar7 == 0) {
            *param_2 = (longlong)plVar4;
            puVar5[2] = plVar4;
            FUN_144b5a5b0(param_1 + 0xa8,puVar5);
            return 0;
          }
        }
      }
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)(lVar1 + 0x10))(lVar1,puVar5);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(lVar1 + 0x10))(lVar1,plVar4);
    }
    return iVar7;
  }
  return 6;
}



// FUNCTION 144b55f80 FUN_144b55f80 body=282 status=ok
// SIG undefined FUN_144b55f80(void)

undefined4 FUN_144b55f80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return 0x24;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x90);
    if (lVar3 == 0) {
      return 0x22;
    }
    plVar1 = (longlong *)(lVar2 + 0xa8);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      for (plVar5 = (longlong *)*plVar1; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1])
      {
        if ((longlong *)plVar5[2] == param_1) {
          if (plVar1 != (longlong *)0x0) {
            lVar6 = *plVar5;
            plVar5 = (longlong *)plVar5[1];
            if (lVar6 == 0) {
              *plVar1 = (longlong)plVar5;
            }
            else {
              *(longlong **)(lVar6 + 8) = plVar5;
            }
            if (plVar5 == (longlong *)0x0) {
              *(longlong *)(lVar2 + 0xb0) = lVar6;
            }
            else {
              *plVar5 = lVar6;
            }
          }
          (**(code **)(lVar4 + 0x10))(lVar4);
          if (*(longlong **)(lVar2 + 0x80) == param_1) {
            *(undefined8 *)(lVar2 + 0x80) = 0;
            if (*plVar1 != 0) {
              *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(*plVar1 + 0x10);
            }
          }
          FUN_144b5c520(lVar4,param_1,lVar3);
          return 0;
        }
      }
    }
    return 0x24;
  }
  return 0x23;
}



// FUNCTION 144b560a0 FUN_144b560a0 body=45 status=ok
// SIG undefined FUN_144b560a0(void)

undefined8 FUN_144b560a0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0x24;
  }
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x90) != 0)) {
    *(longlong **)(lVar1 + 0x80) = param_1;
    return 0;
  }
  return 0x23;
}



// FUNCTION 144b560d0 FUN_144b560d0 body=140 status=ok
// SIG undefined FUN_144b560d0(void)

void * FUN_144b560d0(longlong param_1,int param_2,undefined4 *param_3)

{
  void *_Dst;
  
  if (param_2 < 1) {
    if (param_2 < 0) {
      *param_3 = 6;
      return (void *)0x0;
    }
    *param_3 = 0;
    return (void *)0x0;
  }
  _Dst = (void *)(**(code **)(param_1 + 8))();
  if (_Dst == (void *)0x0) {
    *param_3 = 0x40;
    return (void *)0x0;
  }
  memset(_Dst,0,(longlong)param_2);
  *param_3 = 0;
  return _Dst;
}



// FUNCTION 144b56160 FUN_144b56160 body=69 status=ok
// SIG undefined FUN_144b56160(void)

longlong FUN_144b56160(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_2 < 1) {
    uVar2 = 0;
    if (param_2 < 0) {
      uVar2 = 6;
    }
    *param_3 = uVar2;
    return 0;
  }
  lVar1 = (**(code **)(param_1 + 8))();
  if (lVar1 == 0) {
    *param_3 = 0x40;
    return 0;
  }
  *param_3 = 0;
  return lVar1;
}



// FUNCTION 144b561b0 FUN_144b561b0 body=240 status=ok
// SIG undefined FUN_144b561b0(void)

longlong FUN_144b561b0(longlong param_1,int param_2,int param_3,int param_4,longlong param_5,
                      undefined4 *param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = 0;
  uVar2 = 0;
  if (((param_3 < 0) || (param_4 < 0)) || (param_2 < 0)) {
    uVar2 = 6;
    lVar1 = param_5;
  }
  else if ((param_4 == 0) || (param_2 == 0)) {
    if (param_5 != 0) {
      (**(code **)(param_1 + 0x10))(param_1,param_5);
    }
  }
  else if ((int)(0x7fffffff / (longlong)param_2) < param_4) {
    uVar2 = 10;
    lVar1 = param_5;
  }
  else {
    if (param_3 == 0) {
      lVar1 = (**(code **)(param_1 + 8))();
      param_5 = lVar1;
    }
    else {
      lVar1 = (**(code **)(param_1 + 0x18))(param_1,param_2 * param_3,param_2 * param_4,param_5);
    }
    if (lVar1 == 0) {
      uVar2 = 0x40;
      lVar1 = param_5;
    }
    else if (param_3 < param_4) {
      memset((void *)(param_2 * param_3 + lVar1),0,(longlong)((param_4 - param_3) * param_2));
    }
  }
  *param_6 = uVar2;
  return lVar1;
}



// FUNCTION 144b562a0 FUN_144b562a0 body=175 status=ok
// SIG undefined FUN_144b562a0(void)

longlong FUN_144b562a0(longlong param_1,int param_2,int param_3,int param_4,longlong param_5,
                      undefined4 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (((param_3 < 0) || (param_4 < 0)) || (param_2 < 0)) {
    uVar3 = 6;
  }
  else if ((param_4 == 0) || (param_2 == 0)) {
    if (param_5 != 0) {
      (**(code **)(param_1 + 0x10))();
    }
    param_5 = 0;
  }
  else if ((int)(0x7fffffff / (longlong)param_2) < param_4) {
    uVar3 = 10;
  }
  else {
    if (param_3 == 0) {
      lVar2 = (**(code **)(param_1 + 8))(param_1,param_2 * param_4);
      lVar1 = lVar2;
    }
    else {
      lVar2 = (**(code **)(param_1 + 0x18))(param_1,param_2 * param_3,param_2 * param_4,param_5);
      lVar1 = param_5;
    }
    param_5 = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0x40;
      param_5 = lVar1;
    }
  }
  *param_6 = uVar3;
  return param_5;
}



// FUNCTION 144b56350 FUN_144b56350 body=10 status=ok
// SIG undefined FUN_144b56350(void)

void FUN_144b56350(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000144b56355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 144b56360 FUN_144b56360 body=51 status=ok
// SIG undefined FUN_144b56360(void)

void FUN_144b56360(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    FUN_144b563a0(param_1,param_2,(int)lVar1 + 1,param_3);
    return;
  }
  FUN_144b563a0(param_1,0,0,param_3);
  return;
}



// FUNCTION 144b563a0 FUN_144b563a0 body=129 status=ok
// SIG undefined FUN_144b563a0(void)

void * FUN_144b563a0(longlong param_1,void *param_2,uint param_3,undefined4 *param_4)

{
  void *_Dst;
  undefined4 uVar1;
  
  _Dst = (void *)0x0;
  uVar1 = 0;
  if ((int)param_3 < 1) {
    if ((int)param_3 < 0) {
      uVar1 = 6;
      goto LAB_144b56400;
    }
  }
  else {
    _Dst = (void *)(**(code **)(param_1 + 8))(param_1,(ulonglong)param_3);
    if (_Dst == (void *)0x0) {
      uVar1 = 0x40;
      goto LAB_144b56400;
    }
  }
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    memcpy(_Dst,param_2,(ulonglong)param_3);
  }
LAB_144b56400:
  *param_4 = uVar1;
  return _Dst;
}



// FUNCTION 144b56430 FUN_144b56430 body=41 status=ok
// SIG undefined FUN_144b56430(void)

bool FUN_144b56430(char *param_1,char *param_2,uint param_3)

{
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_3 = param_3 - 1;
  }
  *param_1 = '\0';
  return *param_2 != '\0';
}



// FUNCTION 144b56460 FUN_144b56460 body=96 status=ok
// SIG undefined FUN_144b56460(void)

undefined4 FUN_144b56460(longlong param_1,undefined8 *param_2)

{
  longlong *_Dst;
  
  _Dst = (longlong *)(**(code **)(param_1 + 8))();
  if (_Dst == (longlong *)0x0) {
    return 0x40;
  }
  memset(_Dst,0,0xb0);
  *_Dst = param_1;
  *param_2 = _Dst;
  return 0;
}



// FUNCTION 144b564c0 FUN_144b564c0 body=175 status=ok
// SIG undefined FUN_144b564c0(void)

int FUN_144b564c0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  _Dst = (void *)0x0;
  lVar2 = param_1[1];
  iVar3 = 0;
  iVar1 = (int)lVar2 * 2;
  if (iVar1 < 0) {
    iVar3 = 6;
  }
  else if (iVar1 != 0) {
    if (iVar1 < 0x10000000) {
      _Dst = (void *)(**(code **)(*param_1 + 8))(*param_1);
      if (_Dst == (void *)0x0) {
        iVar3 = 0x40;
      }
      else if (0 < iVar1) {
        memset(_Dst,0,(longlong)((int)lVar2 << 4));
      }
    }
    else {
      iVar3 = 10;
    }
  }
  param_1[8] = (longlong)_Dst;
  if (iVar3 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    param_1[9] = (longlong)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 8);
    FUN_144b59060(param_1);
  }
  return iVar3;
}



// FUNCTION 144b56570 FUN_144b56570 body=202 status=ok
// SIG undefined FUN_144b56570(void)

void FUN_144b56570(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (param_1[4] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[5] = 0;
  if (param_1[6] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[6] = 0;
  if (param_1[8] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[8] = 0;
  if (param_1[0xb] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = param_1[3];
  param_1[0xd] = param_1[4];
  param_1[0xe] = param_1[5];
  param_1[0xf] = param_1[6];
  param_1[0x10] = param_1[7];
  param_1[0x11] = param_1[8];
  param_1[0x12] = param_1[9];
  param_1[0x13] = param_1[10];
  param_1[0x14] = param_1[0xb];
  return;
}



// FUNCTION 144b56640 FUN_144b56640 body=60 status=ok
// SIG undefined FUN_144b56640(void)

void FUN_144b56640(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x58);
  return;
}



// FUNCTION 144b56680 FUN_144b56680 body=782 status=ok
// SIG undefined FUN_144b56680(void)

int FUN_144b56680(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_res10 [2];
  
  lVar5 = *param_1;
  iVar6 = 0;
  bVar2 = false;
  uVar1 = *(uint *)(param_1 + 1);
  uVar8 = (int)*(short *)((longlong)param_1 + 0x1a) + *(short *)((longlong)param_1 + 0x62) + param_2
  ;
  iVar7 = 0;
  if (uVar1 < uVar8) {
    uVar8 = uVar8 + 7 & 0xfffffff8;
    if (0x7fff < uVar8) {
      return 10;
    }
    lVar4 = param_1[4];
    if (((int)uVar1 < 0) || ((int)uVar8 < 0)) {
      iVar6 = 6;
    }
    else if (uVar8 == 0) {
      if (lVar4 != 0) {
        (**(code **)(lVar5 + 0x10))(lVar5,lVar4);
      }
      lVar4 = 0;
    }
    else if ((int)uVar8 < 0x10000000) {
      if (uVar1 == 0) {
        lVar3 = (**(code **)(lVar5 + 8))();
        if (lVar3 == 0) {
          iVar6 = 0x40;
          lVar4 = lVar3;
        }
        else {
LAB_144b5674d:
          lVar4 = lVar3;
          if ((int)uVar1 < (int)uVar8) {
            memset((void *)((int)(uVar1 * 8) + lVar3),0,(longlong)(int)((uVar8 - uVar1) * 8));
          }
        }
      }
      else {
        lVar3 = (**(code **)(lVar5 + 0x18))(lVar5,uVar1 * 8,uVar8 * 8,lVar4);
        if (lVar3 != 0) goto LAB_144b5674d;
        iVar6 = 0x40;
      }
    }
    else {
      iVar6 = 10;
    }
    param_1[4] = lVar4;
    iVar7 = iVar6;
    if (iVar6 == 0) {
      lVar4 = param_1[5];
      if (((int)uVar1 < 0) || ((int)uVar8 < 0)) {
        iVar6 = 6;
      }
      else if (uVar8 == 0) {
        if (lVar4 != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5,lVar4);
        }
        lVar4 = 0;
      }
      else if (uVar1 == 0) {
        lVar3 = (**(code **)(lVar5 + 8))();
        if (lVar3 == 0) {
          iVar6 = 0x40;
          lVar4 = lVar3;
        }
        else {
LAB_144b567df:
          lVar4 = lVar3;
          if ((int)uVar1 < (int)uVar8) {
            memset((void *)((int)uVar1 + lVar3),0,(longlong)(int)(uVar8 - uVar1));
          }
        }
      }
      else {
        lVar3 = (**(code **)(lVar5 + 0x18))(lVar5,uVar1,(ulonglong)uVar8,lVar4);
        if (lVar3 != 0) goto LAB_144b567df;
        iVar6 = 0x40;
      }
      param_1[5] = lVar4;
      iVar7 = iVar6;
      local_res10[0] = iVar6;
      if (iVar6 == 0) {
        if (*(char *)((longlong)param_1 + 0x14) != '\0') {
          lVar4 = FUN_144b561b0(lVar5,8,uVar1 * 2,uVar8 * 2,param_1[8],local_res10);
          iVar6 = local_res10[0];
          param_1[8] = lVar4;
          iVar7 = local_res10[0];
          if (local_res10[0] != 0) goto LAB_144b5695f;
          lVar3 = (ulonglong)uVar8 * 8;
          memmove((void *)(lVar4 + lVar3),(void *)((ulonglong)uVar1 * 8 + lVar4),
                  (ulonglong)uVar1 * 8);
          param_1[9] = param_1[8] + lVar3;
        }
        bVar2 = true;
        *(uint *)(param_1 + 1) = uVar8;
        iVar7 = iVar6;
        goto LAB_144b56891;
      }
    }
LAB_144b5695f:
    FUN_144b56570(param_1);
  }
  else {
LAB_144b56891:
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    uVar8 = (int)(short)param_1[3] + (short)param_1[0xc] + param_3;
    if (uVar1 < uVar8) {
      uVar8 = uVar8 + 3 & 0xfffffffc;
      if (0x7fff < uVar8) {
        return 10;
      }
      lVar4 = param_1[6];
      if (((int)uVar1 < 0) || ((int)uVar8 < 0)) {
        iVar7 = 6;
      }
      else if (uVar8 == 0) {
        if (lVar4 != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5,lVar4);
        }
        lVar4 = 0;
        iVar7 = 0;
      }
      else if ((int)uVar8 < 0x40000000) {
        if (uVar1 == 0) {
          lVar5 = (**(code **)(lVar5 + 8))();
          if (lVar5 == 0) {
            lVar4 = lVar5;
            iVar7 = 0x40;
          }
          else {
LAB_144b56918:
            lVar4 = lVar5;
            iVar7 = 0;
            if ((int)uVar1 < (int)uVar8) {
              memset((void *)((int)(uVar1 * 2) + lVar5),0,(longlong)(int)((uVar8 - uVar1) * 2));
              iVar7 = 0;
            }
          }
        }
        else {
          lVar5 = (**(code **)(lVar5 + 0x18))(lVar5,uVar1 * 2,uVar8 * 2,lVar4);
          if (lVar5 != 0) goto LAB_144b56918;
          iVar7 = 0x40;
        }
      }
      else {
        iVar7 = 10;
      }
      param_1[6] = lVar4;
      if (iVar7 != 0) goto LAB_144b5695f;
      *(uint *)((longlong)param_1 + 0xc) = uVar8;
    }
    else if (!bVar2) {
      return iVar7;
    }
    FUN_144b59060(param_1);
  }
  return iVar7;
}



// FUNCTION 144b56990 FUN_144b56990 body=279 status=ok
// SIG undefined FUN_144b56990(void)

int FUN_144b56990(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar3 = 0;
  uVar1 = *(uint *)(param_1 + 2);
  uVar5 = (int)param_1[0x13] + (int)param_1[10] + param_2;
  lVar2 = *param_1;
  if (uVar5 <= uVar1) {
    return 0;
  }
  lVar4 = param_1[0xb];
  uVar5 = uVar5 + 1 & 0xfffffffe;
  if (((int)uVar1 < 0) || ((int)uVar5 < 0)) {
    iVar3 = 6;
  }
  else if (uVar5 == 0) {
    if (lVar4 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
    }
    lVar4 = 0;
  }
  else if ((int)uVar5 < 0x4000000) {
    if (uVar1 == 0) {
      lVar2 = (**(code **)(lVar2 + 8))();
      if (lVar2 == 0) {
        lVar4 = lVar2;
        iVar3 = 0x40;
        goto LAB_144b56a6d;
      }
    }
    else {
      lVar2 = (**(code **)(lVar2 + 0x18))(lVar2,uVar1 << 5,uVar5 << 5,lVar4);
      if (lVar2 == 0) {
        iVar3 = 0x40;
        goto LAB_144b56a6d;
      }
    }
    lVar4 = lVar2;
    iVar3 = 0;
    if ((int)uVar1 < (int)uVar5) {
      memset((void *)((int)(uVar1 << 5) + lVar2),0,(longlong)(int)((uVar5 - uVar1) * 0x20));
    }
  }
  else {
    iVar3 = 10;
  }
LAB_144b56a6d:
  param_1[0xb] = lVar4;
  if (iVar3 == 0) {
    *(uint *)(param_1 + 2) = uVar5;
    param_1[0x14] = (ulonglong)*(uint *)(param_1 + 10) * 0x20 + param_1[0xb];
  }
  return iVar3;
}



// FUNCTION 144b56ab0 FUN_144b56ab0 body=128 status=ok
// SIG undefined FUN_144b56ab0(void)

void FUN_144b56ab0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(longlong *)(param_1 + 0x68) =
       *(longlong *)(param_1 + 0x20) + (longlong)*(short *)(param_1 + 0x1a) * 8;
  *(longlong *)(param_1 + 0x70) =
       (longlong)*(short *)(param_1 + 0x1a) + *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x78) =
       *(longlong *)(param_1 + 0x30) + (longlong)*(short *)(param_1 + 0x18) * 2;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(longlong *)(param_1 + 0x88) =
         *(longlong *)(param_1 + 0x40) + (longlong)*(short *)(param_1 + 0x1a) * 8;
    *(longlong *)(param_1 + 0x90) =
         *(longlong *)(param_1 + 0x48) + (longlong)*(short *)(param_1 + 0x1a) * 8;
  }
  *(ulonglong *)(param_1 + 0xa0) =
       (ulonglong)*(uint *)(param_1 + 0x50) * 0x20 + *(longlong *)(param_1 + 0x58);
  return;
}



// FUNCTION 144b56b30 FUN_144b56b30 body=370 status=ok
// SIG undefined FUN_144b56b30(void)

void FUN_144b56b30(longlong param_1)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  ulonglong uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  if (param_1 != 0) {
    sVar3 = *(short *)(param_1 + 0x60);
    sVar4 = *(short *)(param_1 + 0x1a);
    *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x62) + sVar4;
    uVar13 = 0;
    *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + *(short *)(param_1 + 0x60);
    uVar17 = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x98);
    if ((0 < sVar3) && (uVar16 = (uint)sVar3, 0xf < uVar16)) {
      uVar5 = *(ulonglong *)(param_1 + 0x78);
      if ((param_1 + 0x78U < uVar5) || (uVar5 + (longlong)(sVar3 + -1) * 2 < param_1 + 0x78U)) {
        uVar14 = uVar16 & 0x8000000f;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
        }
        uVar18 = uVar13;
        do {
          psVar1 = (short *)(uVar5 + uVar13 * 2);
          sVar6 = psVar1[1];
          sVar7 = psVar1[2];
          sVar8 = psVar1[3];
          sVar9 = psVar1[4];
          sVar10 = psVar1[5];
          sVar11 = psVar1[6];
          sVar12 = psVar1[7];
          uVar17 = (int)uVar18 + 0x10;
          uVar18 = (ulonglong)uVar17;
          psVar2 = (short *)(uVar5 + uVar13 * 2);
          *psVar2 = *psVar1 + sVar4;
          psVar2[1] = sVar6 + sVar4;
          psVar2[2] = sVar7 + sVar4;
          psVar2[3] = sVar8 + sVar4;
          psVar2[4] = sVar9 + sVar4;
          psVar2[5] = sVar10 + sVar4;
          psVar2[6] = sVar11 + sVar4;
          psVar2[7] = sVar12 + sVar4;
          psVar1 = (short *)(uVar5 + 0x10 + uVar13 * 2);
          sVar6 = psVar1[1];
          sVar7 = psVar1[2];
          sVar8 = psVar1[3];
          sVar9 = psVar1[4];
          sVar10 = psVar1[5];
          sVar11 = psVar1[6];
          sVar12 = psVar1[7];
          psVar2 = (short *)(uVar5 + 0x10 + uVar13 * 2);
          *psVar2 = *psVar1 + sVar4;
          psVar2[1] = sVar6 + sVar4;
          psVar2[2] = sVar7 + sVar4;
          psVar2[3] = sVar8 + sVar4;
          psVar2[4] = sVar9 + sVar4;
          psVar2[5] = sVar10 + sVar4;
          psVar2[6] = sVar11 + sVar4;
          psVar2[7] = sVar12 + sVar4;
          uVar13 = uVar13 + 0x10;
        } while ((longlong)uVar13 < (longlong)(int)(uVar16 - uVar14));
      }
    }
    for (lVar15 = (longlong)(int)uVar17; lVar15 < sVar3; lVar15 = lVar15 + 1) {
      psVar1 = (short *)(*(longlong *)(param_1 + 0x78) + lVar15 * 2);
      *psVar1 = *psVar1 + sVar4;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(longlong *)(param_1 + 0x68) =
         *(longlong *)(param_1 + 0x20) + (longlong)*(short *)(param_1 + 0x1a) * 8;
    *(longlong *)(param_1 + 0x70) =
         (longlong)*(short *)(param_1 + 0x1a) + *(longlong *)(param_1 + 0x28);
    *(longlong *)(param_1 + 0x78) =
         *(longlong *)(param_1 + 0x30) + (longlong)*(short *)(param_1 + 0x18) * 2;
    if (*(char *)(param_1 + 0x14) != '\0') {
      *(longlong *)(param_1 + 0x88) =
           *(longlong *)(param_1 + 0x40) + (longlong)*(short *)(param_1 + 0x1a) * 8;
      *(longlong *)(param_1 + 0x90) =
           *(longlong *)(param_1 + 0x48) + (longlong)*(short *)(param_1 + 0x1a) * 8;
    }
    *(ulonglong *)(param_1 + 0xa0) =
         (ulonglong)*(uint *)(param_1 + 0x50) * 0x20 + *(longlong *)(param_1 + 0x58);
  }
  return;
}



// FUNCTION 144b56cb0 FUN_144b56cb0 body=93 status=ok
// SIG undefined FUN_144b56cb0(void)

undefined8 FUN_144b56cb0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    pcVar4 = (char *)*param_1;
    while (pcVar4 != (char *)0x0) {
      lVar5 = param_2 - (longlong)pcVar4;
      do {
        cVar2 = *pcVar4;
        cVar3 = pcVar4[lVar5];
        if (cVar2 != cVar3) break;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        return param_1[1];
      }
      puVar1 = param_1 + 2;
      param_1 = param_1 + 2;
      pcVar4 = (char *)*puVar1;
    }
  }
  return 0;
}



// FUNCTION 144b56d10 FUN_144b56d10 body=76 status=ok
// SIG undefined FUN_144b56d10(void)

ulonglong FUN_144b56d10(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  iVar2 = 1;
  lVar1 = (longlong)param_2;
  uVar3 = (ulonglong)param_3;
  if (param_1 < 0) {
    lVar4 = -lVar4;
    iVar2 = -1;
  }
  if (param_2 < 0) {
    lVar1 = -lVar1;
    iVar2 = -iVar2;
  }
  if (param_3 < 0) {
    uVar3 = -uVar3;
    iVar2 = -iVar2;
  }
  if (uVar3 == 0) {
    uVar3 = 0x7fffffff;
  }
  else {
    uVar3 = (ulonglong)(lVar1 * lVar4) / uVar3;
  }
  if (iVar2 < 0) {
    uVar3 = (ulonglong)(uint)-(int)uVar3;
  }
  return uVar3;
}



// FUNCTION 144b56d60 FUN_144b56d60 body=828 status=ok
// SIG undefined FUN_144b56d60(void)

void FUN_144b56d60(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar5 = 1;
    iVar9 = 1;
    iVar13 = *param_1;
    lVar7 = (longlong)iVar13;
    iVar15 = *param_2;
    lVar17 = (longlong)iVar15;
    uVar18 = (ulonglong)(param_3 << 0x10);
    lVar4 = lVar7;
    iVar8 = iVar9;
    if (iVar13 < 0) {
      lVar4 = -lVar7;
      iVar8 = -1;
    }
    lVar3 = lVar17;
    if (iVar15 < 0) {
      lVar3 = -lVar17;
      iVar8 = -iVar8;
    }
    uVar14 = uVar18;
    if (param_3 << 0x10 < 0) {
      uVar14 = -uVar18;
      iVar8 = -iVar8;
    }
    iVar16 = 0x7fffffff;
    if (uVar14 == 0) {
      iVar12 = 0x7fffffff;
    }
    else {
      iVar12 = (int)((lVar3 * lVar4 + (uVar14 >> 1)) / uVar14);
    }
    if (iVar8 < 0) {
      iVar12 = -iVar12;
    }
    iVar8 = param_1[1];
    lVar6 = (longlong)iVar8;
    lVar3 = (longlong)param_2[2];
    lVar4 = lVar6;
    if (iVar8 < 0) {
      lVar4 = -lVar6;
      iVar9 = -1;
    }
    if (param_2[2] < 0) {
      lVar3 = -lVar3;
      iVar9 = -iVar9;
    }
    uVar14 = uVar18;
    if (param_3 << 0x10 < 0) {
      uVar14 = -uVar18;
      iVar9 = -iVar9;
    }
    if (uVar14 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = (int)((lVar3 * lVar4 + (uVar14 >> 1)) / uVar14);
    }
    if (iVar9 < 0) {
      iVar1 = -iVar1;
    }
    lVar4 = (longlong)param_2[1];
    iVar11 = 1;
    iVar9 = iVar11;
    if (iVar13 < 0) {
      lVar7 = -lVar7;
      iVar9 = -1;
    }
    if (param_2[1] < 0) {
      lVar4 = -lVar4;
      iVar9 = -iVar9;
    }
    uVar14 = uVar18;
    if (param_3 << 0x10 < 0) {
      uVar14 = -uVar18;
      iVar9 = -iVar9;
    }
    if (uVar14 == 0) {
      iVar13 = 0x7fffffff;
    }
    else {
      iVar13 = (int)((lVar4 * lVar7 + (uVar14 >> 1)) / uVar14);
    }
    if (iVar9 < 0) {
      iVar13 = -iVar13;
    }
    lVar4 = (longlong)param_2[3];
    iVar9 = iVar11;
    if (iVar8 < 0) {
      lVar6 = -lVar6;
      iVar9 = -1;
    }
    if (param_2[3] < 0) {
      lVar4 = -lVar4;
      iVar9 = -iVar9;
    }
    uVar14 = uVar18;
    if (param_3 << 0x10 < 0) {
      uVar14 = -uVar18;
      iVar9 = -iVar9;
    }
    if (uVar14 == 0) {
      iVar8 = 0x7fffffff;
    }
    else {
      iVar8 = (int)((lVar4 * lVar6 + (uVar14 >> 1)) / uVar14);
    }
    if (iVar9 < 0) {
      iVar8 = -iVar8;
    }
    iVar9 = param_1[2];
    lVar7 = (longlong)iVar9;
    lVar4 = lVar7;
    iVar10 = iVar11;
    if (iVar9 < 0) {
      lVar4 = -lVar7;
      iVar10 = -1;
    }
    if (iVar15 < 0) {
      lVar17 = -lVar17;
      iVar10 = -iVar10;
    }
    uVar14 = uVar18;
    if (param_3 << 0x10 < 0) {
      uVar14 = -uVar18;
      iVar10 = -iVar10;
    }
    if (uVar14 == 0) {
      iVar15 = 0x7fffffff;
    }
    else {
      iVar15 = (int)((lVar17 * lVar4 + (uVar14 >> 1)) / uVar14);
    }
    if (iVar10 < 0) {
      iVar15 = -iVar15;
    }
    iVar10 = param_1[3];
    lVar3 = (longlong)iVar10;
    lVar17 = (longlong)param_2[2];
    lVar4 = lVar3;
    if (iVar10 < 0) {
      lVar4 = -lVar3;
      iVar11 = -1;
    }
    if (param_2[2] < 0) {
      lVar17 = -lVar17;
      iVar11 = -iVar11;
    }
    uVar14 = uVar18;
    if (param_3 << 0x10 < 0) {
      uVar14 = -uVar18;
      iVar11 = -iVar11;
    }
    if (uVar14 == 0) {
      iVar2 = 0x7fffffff;
    }
    else {
      iVar2 = (int)((lVar17 * lVar4 + (uVar14 >> 1)) / uVar14);
    }
    if (iVar11 < 0) {
      iVar2 = -iVar2;
    }
    lVar4 = (longlong)param_2[1];
    iVar11 = 1;
    if (iVar9 < 0) {
      lVar7 = -lVar7;
      iVar11 = -1;
    }
    if (param_2[1] < 0) {
      lVar4 = -lVar4;
      iVar11 = -iVar11;
    }
    uVar14 = uVar18;
    if (param_3 << 0x10 < 0) {
      uVar14 = -uVar18;
      iVar11 = -iVar11;
    }
    if (uVar14 == 0) {
      iVar9 = 0x7fffffff;
    }
    else {
      iVar9 = (int)((lVar4 * lVar7 + (uVar14 >> 1)) / uVar14);
    }
    if (iVar11 < 0) {
      iVar9 = -iVar9;
    }
    lVar4 = (longlong)param_2[3];
    if (iVar10 < 0) {
      lVar3 = -lVar3;
      iVar5 = -1;
    }
    if (param_2[3] < 0) {
      lVar4 = -lVar4;
      iVar5 = -iVar5;
    }
    if (param_3 << 0x10 < 0) {
      uVar18 = -uVar18;
      iVar5 = -iVar5;
    }
    if (uVar18 != 0) {
      iVar16 = (int)((lVar4 * lVar3 + (uVar18 >> 1)) / uVar18);
    }
    if (iVar5 < 0) {
      iVar16 = -iVar16;
    }
    *param_2 = iVar1 + iVar12;
    param_2[1] = iVar8 + iVar13;
    param_2[3] = iVar16 + iVar9;
    param_2[2] = iVar15 + iVar2;
  }
  return;
}



// FUNCTION 144b570a0 FUN_144b570a0 body=762 status=ok
// SIG undefined FUN_144b570a0(void)

void FUN_144b570a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  int local_38 [4];
  ulonglong local_28;
  
  piVar11 = local_38;
  local_28 = DAT_14c707940 ^ (ulonglong)local_38;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)local_38);
  }
  iVar17 = *param_1;
  lVar12 = (longlong)iVar17;
  local_38[0] = iVar17;
  if (iVar17 < 0) {
    local_38[0] = -iVar17;
  }
  iVar1 = param_1[1];
  lVar13 = (longlong)iVar1;
  local_38[1] = iVar1;
  if (iVar1 < 0) {
    local_38[1] = -iVar1;
  }
  iVar2 = param_1[2];
  lVar21 = (longlong)iVar2;
  local_38[2] = iVar2;
  if (iVar2 < 0) {
    local_38[2] = -iVar2;
  }
  iVar3 = param_1[3];
  lVar19 = (longlong)iVar3;
  local_38[3] = iVar3;
  if (iVar3 < 0) {
    local_38[3] = -iVar3;
  }
  iVar14 = 0;
  iVar5 = 0x7fffffff;
  lVar18 = 4;
  do {
    iVar16 = *piVar11;
    if (iVar14 < iVar16) {
      iVar14 = iVar16;
    }
    if ((iVar16 != 0) && (iVar16 < iVar5)) {
      iVar5 = iVar16;
    }
    piVar11 = piVar11 + 1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  if (iVar14 <= 0x7fffffff) {
    if (iVar14 < 0x5a83) {
      local_38[0] = *param_1;
      local_38[1] = param_1[1];
      local_38[2] = param_1[2];
      local_38[3] = param_1[3];
    }
    else {
      iVar15 = 1;
      uVar8 = (longlong)iVar14 * 0x10000 + 0x2d41;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      piVar11 = SUB168(ZEXT816(0x2d41799a4e9f8003) * auVar4,8);
      iVar16 = 1;
      iVar14 = 1;
      lVar18 = (longlong)iVar5;
      iVar20 = (int)(uVar8 / 0x5a82);
      uVar8 = (ulonglong)iVar20;
      if (iVar5 < 0) {
        lVar18 = -lVar18;
        iVar14 = -1;
      }
      uVar9 = uVar8;
      if (iVar20 < 0) {
        uVar9 = -uVar8;
        iVar14 = -iVar14;
      }
      if (uVar9 == 0) {
        iVar5 = 0x7fffffff;
      }
      else {
        uVar7 = (uVar9 >> 1) + lVar18 * 0x10000;
        iVar5 = (int)(uVar7 / uVar9);
        piVar11 = (int *)(uVar7 % uVar9);
      }
      if (iVar14 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 == 0) goto LAB_144b5737e;
      if (iVar17 < 0) {
        lVar12 = -lVar12;
        iVar16 = -1;
      }
      uVar9 = uVar8;
      if (iVar20 < 0) {
        uVar9 = -uVar8;
        iVar16 = -iVar16;
      }
      if (uVar9 == 0) {
        local_38[0] = 0x7fffffff;
      }
      else {
        local_38[0] = (int)(((uVar9 >> 1) + lVar12 * 0x10000) / uVar9);
      }
      if (iVar16 < 0) {
        local_38[0] = -local_38[0];
      }
      iVar14 = 1;
      iVar17 = iVar14;
      if (iVar1 < 0) {
        lVar13 = -lVar13;
        iVar17 = -1;
      }
      uVar9 = uVar8;
      if (iVar20 < 0) {
        uVar9 = -uVar8;
        iVar17 = -iVar17;
      }
      if (uVar9 == 0) {
        local_38[1] = 0x7fffffff;
      }
      else {
        local_38[1] = (int)(((uVar9 >> 1) + lVar13 * 0x10000) / uVar9);
      }
      if (iVar17 < 0) {
        local_38[1] = -local_38[1];
      }
      if (iVar2 < 0) {
        lVar21 = -lVar21;
        iVar14 = -1;
      }
      uVar9 = uVar8;
      if (iVar20 < 0) {
        uVar9 = -uVar8;
        iVar14 = -iVar14;
      }
      if (uVar9 == 0) {
        local_38[2] = 0x7fffffff;
      }
      else {
        local_38[2] = (int)(((uVar9 >> 1) + lVar21 * 0x10000) / uVar9);
      }
      if (iVar14 < 0) {
        local_38[2] = -local_38[2];
      }
      if (iVar3 < 0) {
        lVar19 = -lVar19;
        iVar15 = -1;
      }
      if (iVar20 < 0) {
        uVar8 = -uVar8;
        iVar15 = -iVar15;
      }
      local_38[3] = 0x7fffffff;
      if (uVar8 != 0) {
        local_38[3] = (int)(((uVar8 >> 1) + lVar19 * 0x10000) / uVar8);
      }
      if (iVar15 < 0) {
        local_38[3] = -local_38[3];
      }
    }
    uVar6 = local_38[3] * local_38[0] - local_38[1] * local_38[2];
    uVar10 = (int)uVar6 >> 0x1f;
    piVar11 = (int *)(ulonglong)uVar10;
    iVar17 = (uVar6 ^ uVar10) - uVar10;
    if (iVar17 != 0) {
      piVar11 = (int *)((longlong)
                        (local_38[1] * local_38[1] + local_38[3] * local_38[3] +
                         local_38[2] * local_38[2] + local_38[0] * local_38[0]) % (longlong)iVar17 &
                       0xffffffff);
    }
  }
LAB_144b5737e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)local_38,piVar11);
}



// FUNCTION 144b573b0 FUN_144b573b0 body=449 status=ok
// SIG undefined FUN_144b573b0(void)

void FUN_144b573b0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    lVar9 = (longlong)*param_2;
    iVar7 = 1;
    iVar6 = 1;
    iVar5 = 1;
    iVar11 = *param_1;
    lVar4 = (longlong)iVar11;
    uVar3 = (ulonglong)(param_3 << 0x10);
    lVar2 = lVar4;
    if (iVar11 < 0) {
      lVar2 = -lVar4;
      iVar5 = -1;
    }
    if (*param_2 < 0) {
      lVar9 = -lVar9;
      iVar5 = -iVar5;
    }
    uVar12 = uVar3;
    if (param_3 << 0x10 < 0) {
      uVar12 = -uVar3;
      iVar5 = -iVar5;
    }
    iVar8 = 0x7fffffff;
    if (uVar12 == 0) {
      iVar10 = 0x7fffffff;
    }
    else {
      iVar10 = (int)((lVar9 * lVar2 + (uVar12 >> 1)) / uVar12);
    }
    if (iVar5 < 0) {
      iVar10 = -iVar10;
    }
    iVar5 = param_1[1];
    lVar13 = (longlong)iVar5;
    lVar9 = (longlong)param_2[1];
    lVar2 = lVar13;
    if (iVar5 < 0) {
      lVar2 = -lVar13;
      iVar6 = -1;
    }
    if (param_2[1] < 0) {
      lVar9 = -lVar9;
      iVar6 = -iVar6;
    }
    uVar12 = uVar3;
    if (param_3 << 0x10 < 0) {
      uVar12 = -uVar3;
      iVar6 = -iVar6;
    }
    if (uVar12 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = (int)((lVar9 * lVar2 + (uVar12 >> 1)) / uVar12);
    }
    if (iVar6 < 0) {
      iVar1 = -iVar1;
    }
    lVar2 = (longlong)param_2[2];
    iVar6 = 1;
    if (iVar11 < 0) {
      lVar4 = -lVar4;
      iVar6 = -1;
    }
    if (param_2[2] < 0) {
      lVar2 = -lVar2;
      iVar6 = -iVar6;
    }
    uVar12 = uVar3;
    if (param_3 << 0x10 < 0) {
      uVar12 = -uVar3;
      iVar6 = -iVar6;
    }
    if (uVar12 == 0) {
      iVar11 = 0x7fffffff;
    }
    else {
      iVar11 = (int)((lVar2 * lVar4 + (uVar12 >> 1)) / uVar12);
    }
    if (iVar6 < 0) {
      iVar11 = -iVar11;
    }
    lVar2 = (longlong)param_2[3];
    if (iVar5 < 0) {
      lVar13 = -lVar13;
      iVar7 = -1;
    }
    if (param_2[3] < 0) {
      lVar2 = -lVar2;
      iVar7 = -iVar7;
    }
    if (param_3 << 0x10 < 0) {
      uVar3 = -uVar3;
      iVar7 = -iVar7;
    }
    if (uVar3 != 0) {
      iVar8 = (int)((lVar2 * lVar13 + (uVar3 >> 1)) / uVar3);
    }
    if (iVar7 < 0) {
      iVar8 = -iVar8;
    }
    *param_1 = iVar1 + iVar10;
    param_1[1] = iVar8 + iVar11;
  }
  return;
}



// FUNCTION 144b57580 FUN_144b57580 body=471 status=ok
// SIG undefined FUN_144b57580(void)

uint FUN_144b57580(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar11 = *param_1;
  uVar10 = param_1[1];
  iVar8 = 1;
  iVar4 = 1;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
    iVar4 = -1;
  }
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
    iVar8 = -1;
  }
  if (uVar11 == 0) {
    if (uVar10 != 0) {
      param_1[1] = iVar8 << 0x10;
    }
    return uVar10;
  }
  if (uVar10 == 0) {
    if (uVar11 != 0) {
      *param_1 = iVar4 << 0x10;
    }
    return uVar11;
  }
  if (uVar10 < uVar11) {
    uVar1 = (uVar10 >> 1) + uVar11;
  }
  else {
    uVar1 = (uVar11 >> 1) + uVar10;
  }
  iVar12 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar12 == 0; iVar12 = iVar12 + -1) {
    }
  }
  iVar12 = (0x1f - iVar12) + (-0xf - (uint)(0xaaaaaaaaU >> ((byte)(0x1f - iVar12) & 0x1f) <= uVar1))
  ;
  bVar5 = (byte)iVar12;
  if (iVar12 < 1) {
    bVar6 = -bVar5;
    uVar11 = uVar11 >> (bVar6 & 0x1f);
    uVar10 = uVar10 >> (bVar6 & 0x1f);
    uVar1 = uVar1 >> (bVar6 & 0x1f);
  }
  else {
    uVar11 = uVar11 << (bVar5 & 0x1f);
    uVar10 = uVar10 << (bVar5 & 0x1f);
    if (uVar10 < uVar11) {
      uVar1 = (uVar10 >> 1) + uVar11;
    }
    else {
      uVar1 = (uVar11 >> 1) + uVar10;
    }
  }
  iVar7 = 0x10000 - uVar1;
  do {
    uVar1 = ((int)(iVar7 * uVar11) >> 0x10) + uVar11;
    uVar9 = ((int)(iVar7 * uVar10) >> 0x10) + uVar10;
    iVar2 = uVar9 * uVar9 + uVar1 * uVar1;
    iVar2 = -((int)(iVar2 + (iVar2 >> 0x1f & 0x1ffU)) >> 9) * (iVar7 + 0x10000 >> 8);
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0xffffU)) >> 0x10;
    iVar7 = iVar7 + iVar2;
  } while (0 < iVar2);
  uVar3 = uVar1;
  if (iVar4 < 0) {
    uVar3 = -uVar1;
  }
  *param_1 = uVar3;
  uVar3 = uVar9;
  if (iVar8 < 0) {
    uVar3 = -uVar9;
  }
  param_1[1] = uVar3;
  iVar4 = uVar1 * uVar11 + uVar9 * uVar10;
  iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0xffffU)) >> 0x10) + 0x10000;
  if (0 < iVar12) {
    return (uint)(iVar4 + (1 << (bVar5 - 1 & 0x1f))) >> (bVar5 & 0x1f);
  }
  return iVar4 << (-bVar5 & 0x1f);
}



// FUNCTION 144b57760 FUN_144b57760 body=41 status=ok
// SIG undefined FUN_144b57760(void)

int FUN_144b57760(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_1 * (longlong)param_4 - (longlong)param_2 * (longlong)param_3;
  return (uint)(0 < lVar1) + (int)(lVar1 >> 0x3f);
}



// FUNCTION 144b57790 FUN_144b57790 body=188 status=ok
// SIG undefined FUN_144b57790(void)

bool FUN_144b57790(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (iVar1 < iVar2) {
    iVar2 = (iVar1 * 3 >> 3) + iVar2;
  }
  else {
    iVar2 = (iVar2 * 3 >> 3) + iVar1;
  }
  iVar4 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  iVar1 = (param_4 ^ (int)param_4 >> 0x1f) - ((int)param_4 >> 0x1f);
  if (iVar1 < iVar4) {
    iVar4 = (iVar1 * 3 >> 3) + iVar4;
  }
  else {
    iVar4 = (iVar4 * 3 >> 3) + iVar1;
  }
  uVar3 = (int)(param_1 + param_3) >> 0x1f;
  iVar5 = (param_1 + param_3 ^ uVar3) - uVar3;
  uVar3 = (int)(param_2 + param_4) >> 0x1f;
  iVar1 = (param_2 + param_4 ^ uVar3) - uVar3;
  if (iVar1 < iVar5) {
    iVar5 = (iVar1 * 3 >> 3) + iVar5;
  }
  else {
    iVar5 = (iVar5 * 3 >> 3) + iVar1;
  }
  return (iVar4 - iVar5) + iVar2 < iVar5 >> 4;
}



// FUNCTION 144b57850 FUN_144b57850 body=27 status=ok
// SIG undefined FUN_144b57850(void)

void FUN_144b57850(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res18 = param_1;
  local_res1c = param_2;
  FUN_144b58e10(&local_res18);
  return;
}



// FUNCTION 144b57870 FUN_144b57870 body=284 status=ok
// SIG undefined FUN_144b57870(void)

int FUN_144b57870(undefined4 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_3 == (longlong *)0x0)) ||
     (lVar1 = *param_3, lVar1 == 0)) {
    return 6;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  puVar7 = (undefined4 *)FUN_144b560d0(uVar2,*param_1,local_res8);
  if (local_res8[0] != 0) goto LAB_144b57953;
  lVar8 = *param_3;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar5 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 **)(puVar7 + 4) = param_1;
  *puVar7 = (int)lVar8;
  puVar7[1] = uVar3;
  puVar7[2] = (int)lVar5;
  puVar7[3] = uVar4;
  if (*(code **)(param_1 + 2) == (code *)0x0) {
LAB_144b57905:
    lVar8 = FUN_144b561b0(uVar2,8,*(int *)(lVar1 + 0x38),*(int *)(lVar1 + 0x38) + 1,
                          *(undefined8 *)(lVar1 + 0x40),local_res8);
    *(longlong *)(lVar1 + 0x40) = lVar8;
    if (local_res8[0] == 0) {
      *(undefined4 **)(lVar8 + (longlong)*(int *)(lVar1 + 0x38) * 8) = puVar7;
      *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
      goto LAB_144b57953;
    }
  }
  else {
    local_res8[0] = (**(code **)(param_1 + 2))(puVar7,param_2);
    if (local_res8[0] == 0) goto LAB_144b57905;
  }
  iVar6 = local_res8[0];
  FUN_144b5c590(puVar7);
  puVar7 = (undefined4 *)0x0;
  local_res8[0] = iVar6;
LAB_144b57953:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = puVar7;
  }
  return local_res8[0];
}



// FUNCTION 144b57990 FUN_144b57990 body=358 status=ok
// SIG undefined FUN_144b57990(void)

void FUN_144b57990(int *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  lVar2 = *param_2;
  piVar6 = (int *)(lVar2 + 0x158);
  if (param_3 != 3) {
    if (param_3 == 4) {
      iVar1 = *(int *)(lVar2 + 0x15c);
      iVar5 = *(int *)(lVar2 + 0x164);
      iVar3 = iVar5;
      if (iVar5 < iVar1) {
        iVar3 = iVar1;
      }
      iVar4 = *(int *)(lVar2 + 0x16c);
      if ((*(int *)(lVar2 + 0x16c) < iVar3) && (iVar4 = iVar5, iVar5 < iVar1)) {
        iVar4 = iVar1;
      }
      *param_1 = *param_1 - iVar4;
      iVar1 = *(int *)(lVar2 + 0x15c);
      iVar5 = *(int *)(lVar2 + 0x164);
      iVar3 = iVar5;
      if (iVar1 < iVar5) {
        iVar3 = iVar1;
      }
      iVar4 = *(int *)(lVar2 + 0x16c);
      if ((iVar3 < *(int *)(lVar2 + 0x16c)) && (iVar4 = iVar5, iVar1 < iVar5)) {
        iVar4 = iVar1;
      }
      param_1[2] = param_1[2] - iVar4;
      iVar1 = *piVar6;
      iVar5 = *(int *)(lVar2 + 0x160);
      iVar3 = iVar5;
      if (iVar1 < iVar5) {
        iVar3 = iVar1;
      }
      iVar4 = *(int *)(lVar2 + 0x168);
      if ((iVar3 < *(int *)(lVar2 + 0x168)) && (iVar4 = iVar5, iVar1 < iVar5)) {
        iVar4 = iVar1;
      }
      param_1[1] = param_1[1] + iVar4;
      iVar1 = *piVar6;
      iVar5 = *(int *)(lVar2 + 0x160);
      iVar3 = iVar5;
      if (iVar5 < iVar1) {
        iVar3 = iVar1;
      }
      if (*(int *)(lVar2 + 0x168) < iVar3) {
        if (iVar5 < iVar1) {
          iVar5 = iVar1;
        }
        param_1[3] = param_1[3] + iVar5;
        return;
      }
      param_1[3] = param_1[3] + *(int *)(lVar2 + 0x168);
    }
    return;
  }
  iVar1 = *piVar6;
  iVar5 = *(int *)(lVar2 + 0x160);
  iVar3 = iVar5;
  if (iVar5 < iVar1) {
    iVar3 = iVar1;
  }
  iVar4 = *(int *)(lVar2 + 0x168);
  if ((*(int *)(lVar2 + 0x168) < iVar3) && (iVar4 = iVar5, iVar5 < iVar1)) {
    iVar4 = iVar1;
  }
  *param_1 = *param_1 - iVar4;
  iVar1 = *piVar6;
  iVar5 = *(int *)(lVar2 + 0x160);
  iVar3 = iVar5;
  if (iVar1 < iVar5) {
    iVar3 = iVar1;
  }
  iVar4 = *(int *)(lVar2 + 0x168);
  if ((iVar3 < *(int *)(lVar2 + 0x168)) && (iVar4 = iVar5, iVar1 < iVar5)) {
    iVar4 = iVar1;
  }
  param_1[2] = param_1[2] - iVar4;
  iVar1 = *(int *)(lVar2 + 0x15c);
  iVar5 = *(int *)(lVar2 + 0x164);
  iVar3 = iVar5;
  if (iVar5 < iVar1) {
    iVar3 = iVar1;
  }
  iVar4 = *(int *)(lVar2 + 0x16c);
  if ((*(int *)(lVar2 + 0x16c) < iVar3) && (iVar4 = iVar5, iVar5 < iVar1)) {
    iVar4 = iVar1;
  }
  param_1[1] = param_1[1] - iVar4;
  iVar1 = *(int *)(lVar2 + 0x15c);
  iVar5 = *(int *)(lVar2 + 0x164);
  iVar3 = iVar5;
  if (iVar1 < iVar5) {
    iVar3 = iVar1;
  }
  if (*(int *)(lVar2 + 0x16c) <= iVar3) {
    param_1[3] = param_1[3] - *(int *)(lVar2 + 0x16c);
    return;
  }
  if (iVar1 < iVar5) {
    iVar5 = iVar1;
  }
  param_1[3] = param_1[3] - iVar5;
  return;
}



// FUNCTION 144b57b00 FUN_144b57b00 body=31 status=ok
// SIG undefined FUN_144b57b00(void)

undefined8 FUN_144b57b00(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144b55a90();
  if (plVar1 != (longlong *)0x0) {
    return *(undefined8 *)(*plVar1 + 0x18);
  }
  return 0;
}



// FUNCTION 144b57b20 FUN_144b57b20 body=171 status=ok
// SIG undefined FUN_144b57b20(void)

longlong FUN_144b57b20(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = 0;
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
      lVar3 = (**(code **)(*param_1 + 0x30))();
    }
    if ((param_3 != '\0') && (lVar3 == 0)) {
      puVar4 = (undefined8 *)(param_1[1] + 0x18);
      puVar1 = puVar4 + *(uint *)(param_1[1] + 0x14);
      lVar3 = 0;
      while ((puVar4 < puVar1 &&
             (((plVar2 = (longlong *)*puVar4, plVar2 == param_1 ||
               (*(code **)(*plVar2 + 0x30) == (code *)0x0)) ||
              (lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2), lVar3 == 0))))) {
        puVar4 = puVar4 + 1;
      }
      return lVar3;
    }
  }
  return lVar3;
}



// FUNCTION 144b57bd0 FUN_144b57bd0 body=250 status=ok
// SIG undefined FUN_144b57bd0(void)

int FUN_144b57bd0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (lVar2 == 0) {
    return 6;
  }
  iVar4 = 0;
  lVar3 = *(longlong *)(lVar2 + 0x10);
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x40);
  if (iVar1 < 1) {
    _Dst = (void *)0x0;
    if (iVar1 < 0) {
      iVar4 = 6;
      _Dst = (void *)0x0;
    }
  }
  else {
    _Dst = (void *)(**(code **)(lVar3 + 8))(lVar3);
    if (_Dst == (void *)0x0) {
      iVar4 = 0x40;
    }
    else {
      memset(_Dst,0,(longlong)iVar1);
    }
  }
  if (iVar4 == 0) {
    *(longlong *)((longlong)_Dst + 8) = param_1;
    iVar4 = FUN_144b5c1e0(_Dst);
    if (iVar4 == 0) {
      *(undefined8 *)((longlong)_Dst + 0x10) = *(undefined8 *)(param_1 + 0x78);
      *(void **)(param_1 + 0x78) = _Dst;
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = _Dst;
      }
    }
    else {
      FUN_144b5c370(_Dst);
      (**(code **)(lVar3 + 0x10))(lVar3,_Dst);
    }
  }
  else if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  return iVar4;
}



// FUNCTION 144b57cd0 FUN_144b57cd0 body=137 status=ok
// SIG undefined FUN_144b57cd0(void)

void FUN_144b57cd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x90) + 0x10);
    lVar3 = *(longlong *)(lVar1 + 0x78);
    lVar5 = 0;
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      while (lVar4 = lVar3, lVar4 != param_1) {
        lVar3 = *(longlong *)(lVar4 + 0x10);
        lVar5 = lVar4;
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          return;
        }
      }
      if (lVar5 == 0) {
        *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar4 + 0x10);
      }
      else {
        *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
      }
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      FUN_144b5c370(param_1);
      (**(code **)(lVar2 + 0x10))(lVar2,param_1);
    }
  }
  return;
}



// FUNCTION 144b57d60 FUN_144b57d60 body=290 status=ok
// SIG undefined FUN_144b57d60(void)

void FUN_144b57d60(longlong param_1,uint param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  psVar7 = (short *)((ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x30));
  *(short *)(lVar2 + 0x18) = (short)(*(int *)(psVar7 + 4) + 0x20 >> 6);
  *(short *)(lVar2 + 0x1a) = (short)(*(int *)(psVar7 + 6) + 0x20 >> 6);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar4 = (longlong)*(int *)(psVar7 + 4);
    iVar8 = 1;
    uVar1 = *(ushort *)(param_1 + 0x68);
    iVar6 = 1;
    if (*(int *)(psVar7 + 4) < 0) {
      lVar4 = -lVar4;
      iVar6 = -1;
    }
    iVar5 = 0x7fffffff;
    if ((ulonglong)uVar1 == 0) {
      iVar3 = 0x7fffffff;
    }
    else {
      iVar3 = (int)(((ulonglong)(uVar1 >> 1) + lVar4 * 0x10000) / (ulonglong)uVar1);
    }
    if (iVar6 < 0) {
      iVar3 = -iVar3;
    }
    *(int *)(lVar2 + 0x1c) = iVar3;
    lVar4 = (longlong)*(int *)(psVar7 + 6);
    uVar1 = *(ushort *)(param_1 + 0x68);
    if (*(int *)(psVar7 + 6) < 0) {
      lVar4 = -lVar4;
      iVar8 = -1;
    }
    if ((ulonglong)uVar1 != 0) {
      iVar5 = (int)(((ulonglong)(uVar1 >> 1) + lVar4 * 0x10000) / (ulonglong)uVar1);
    }
    if (iVar8 < 0) {
      iVar5 = -iVar5;
    }
    *(int *)(lVar2 + 0x20) = iVar5;
    FUN_144b5dce0(param_1,lVar2 + 0x18);
    return;
  }
  *(undefined4 *)(lVar2 + 0x1c) = 0x10000;
  *(undefined4 *)(lVar2 + 0x20) = 0x10000;
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(psVar7 + 6);
  *(undefined4 *)(lVar2 + 0x28) = 0;
  *(int *)(lVar2 + 0x2c) = (int)*psVar7 << 6;
  *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(psVar7 + 4);
  return;
}



// FUNCTION 144b57e90 FUN_144b57e90 body=836 status=ok
// SIG undefined FUN_144b57e90(void)

void FUN_144b57e90(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined4 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0x10000;
    *(undefined4 *)(lVar1 + 0x20) = 0x10000;
    return;
  }
  iVar7 = *param_2;
  uVar5 = 0;
  iVar3 = 0;
  iVar2 = 0;
  if (iVar7 == 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x68);
    uVar9 = uVar5;
  }
  else if (iVar7 == 1) {
    uVar5 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
    uVar9 = uVar5;
  }
  else if (iVar7 == 2) {
    uVar5 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58);
    uVar9 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
  }
  else if (iVar7 == 3) {
    uVar5 = (uint)*(short *)(param_1 + 0x70);
    uVar9 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
  }
  else {
    uVar9 = uVar5;
    if (iVar7 == 4) {
      iVar7 = param_2[1];
      *(int *)(lVar1 + 0x1c) = iVar7;
      iVar11 = param_2[2];
      *(int *)(lVar1 + 0x20) = iVar11;
      if (iVar7 == 0) {
        *(int *)(lVar1 + 0x1c) = iVar11;
        iVar2 = iVar3;
      }
      else if (iVar11 == 0) {
        *(int *)(lVar1 + 0x20) = iVar7;
      }
      goto LAB_144b58095;
    }
  }
  iVar7 = param_2[1];
  iVar12 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  iVar11 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
  iVar3 = iVar7;
  if (param_2[3] != 0) {
    iVar3 = (param_2[3] * iVar7 + 0x24) / 0x48;
  }
  if (param_2[4] == 0) {
    iVar2 = param_2[2];
  }
  else {
    iVar2 = (param_2[4] * param_2[2] + 0x24) / 0x48;
  }
  iVar4 = 1;
  if (iVar7 == 0) {
    lVar6 = (longlong)iVar2;
    uVar10 = (ulonglong)iVar11;
    if (iVar2 < 0) {
      lVar6 = -lVar6;
      iVar4 = -1;
    }
    if (iVar11 < 0) {
      uVar10 = -uVar10;
      iVar4 = -iVar4;
    }
    if (uVar10 == 0) {
      iVar7 = 0x7fffffff;
    }
    else {
      iVar7 = (int)(((uVar10 >> 1) + lVar6 * 0x10000) / uVar10);
    }
    if (iVar4 < 0) {
      iVar7 = -iVar7;
    }
    *(int *)(lVar1 + 0x20) = iVar7;
    *(int *)(lVar1 + 0x1c) = iVar7;
    iVar3 = FUN_144b55580(iVar2,iVar12,iVar11);
  }
  else {
    lVar6 = (longlong)iVar3;
    uVar10 = (ulonglong)iVar12;
    if (iVar3 < 0) {
      lVar6 = -lVar6;
      iVar4 = -1;
    }
    if (iVar12 < 0) {
      uVar10 = -uVar10;
      iVar4 = -iVar4;
    }
    if (uVar10 == 0) {
      iVar7 = 0x7fffffff;
    }
    else {
      iVar7 = (int)(((uVar10 >> 1) + lVar6 * 0x10000) / uVar10);
    }
    if (iVar4 < 0) {
      iVar7 = -iVar7;
    }
    *(int *)(lVar1 + 0x1c) = iVar7;
    if (param_2[2] == 0) {
      *(int *)(lVar1 + 0x20) = iVar7;
      iVar2 = FUN_144b55580(iVar3,iVar11,iVar12);
    }
    else {
      iVar11 = FUN_144b555e0(iVar2);
      *(int *)(lVar1 + 0x20) = iVar11;
      if (*param_2 == 3) {
        if (iVar7 < iVar11) {
          *(int *)(lVar1 + 0x20) = iVar7;
        }
        else {
          *(int *)(lVar1 + 0x1c) = iVar11;
        }
      }
    }
  }
LAB_144b58095:
  if (*param_2 != 0) {
    lVar6 = (longlong)*(int *)(lVar1 + 0x1c) * (ulonglong)*(ushort *)(param_1 + 0x68);
    lVar8 = (longlong)*(int *)(lVar1 + 0x20) * (ulonglong)*(ushort *)(param_1 + 0x68);
    iVar3 = (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
    iVar2 = (int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
  }
  *(short *)(lVar1 + 0x18) = (short)(iVar3 + 0x20 >> 6);
  *(short *)(lVar1 + 0x1a) = (short)(iVar2 + 0x20 >> 6);
  lVar6 = (longlong)*(short *)(param_1 + 0x6a) * (longlong)*(int *)(lVar1 + 0x20);
  *(uint *)(lVar1 + 0x24) =
       (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) + 0x3fU & 0xffffffc0;
  lVar6 = (longlong)*(short *)(param_1 + 0x6c) * (longlong)*(int *)(lVar1 + 0x20);
  *(uint *)(lVar1 + 0x28) =
       (uint)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) & 0xffffffc0;
  lVar6 = (longlong)*(short *)(param_1 + 0x6e) * (longlong)*(int *)(lVar1 + 0x20);
  *(uint *)(lVar1 + 0x2c) =
       (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) + 0x20U & 0xffffffc0;
  lVar6 = (longlong)*(short *)(param_1 + 0x70) * (longlong)*(int *)(lVar1 + 0x1c);
  *(uint *)(lVar1 + 0x30) =
       (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) + 0x20U & 0xffffffc0;
  return;
}



// FUNCTION 144b581e0 FUN_144b581e0 body=350 status=ok
// SIG undefined FUN_144b581e0(void)

undefined8 FUN_144b581e0(longlong param_1,int *param_2,char param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    return 0x23;
  }
  if (*param_2 == 0) {
    iVar7 = param_2[1];
    iVar6 = iVar7;
    if (param_2[3] != 0) {
      iVar6 = (iVar7 * param_2[3] + 0x24) / 0x48;
    }
    iVar1 = param_2[2];
    iVar3 = iVar1;
    if (param_2[4] != 0) {
      iVar3 = (iVar1 * param_2[4] + 0x24) / 0x48;
    }
    if (((iVar7 == 0) || ((iVar4 = iVar6, iVar1 != 0 && (iVar4 = iVar3, iVar7 == 0)))) &&
       (iVar4 = iVar3, iVar1 != 0)) {
      iVar6 = iVar3;
    }
    uVar8 = iVar4 + 0x20U & 0xffffffc0;
    uVar9 = iVar6 + 0x20U & 0xffffffc0;
    if ((uVar9 != 0) && (uVar8 != 0)) {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x28)) {
        lVar5 = 0;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
        do {
          if ((uVar8 == (piVar2[1] + 0x20U & 0xffffffc0)) &&
             ((uVar9 == (*piVar2 + 0x20U & 0xffffffc0) || (param_3 != '\0')))) {
            if (param_4 != (int *)0x0) {
              *param_4 = iVar7;
            }
            return 0;
          }
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + 1;
          piVar2 = piVar2 + 4;
        } while (lVar5 < *(int *)(param_1 + 0x28));
      }
    }
    return 0x17;
  }
  return 7;
}



// FUNCTION 144b58340 FUN_144b58340 body=105 status=ok
// SIG undefined FUN_144b58340(void)

void FUN_144b58340(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar1 < 0) {
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
  }
  else if (0 < iVar1) {
    iVar2 = iVar2 - iVar1;
  }
  if (param_2 == 0) {
    param_2 = (iVar2 * 0xc) / 10;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10) / 2;
  *(int *)(param_1 + 0x18) = (param_2 - iVar2) / 2;
  return;
}



// FUNCTION 144b583b0 FUN_144b583b0 body=93 status=ok
// SIG undefined FUN_144b583b0(void)

void FUN_144b583b0(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0xf0) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
    return;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 144b58410 FUN_144b58410 body=593 status=ok
// SIG undefined FUN_144b58410(void)

undefined8 FUN_144b58410(longlong param_1,int param_2,uint *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar2 = 0;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x60) != 0x6f75746c) {
    return 1;
  }
  if (param_3 != (uint *)0x0) {
    uVar2 = *param_3;
    uVar8 = param_3[1];
  }
  FUN_144b488a0(param_1 + 0x98,&local_38);
  iVar4 = ((int)local_38 >> 6) + ((int)uVar2 >> 6);
  iVar9 = ((int)local_30 >> 6) + ((int)uVar2 >> 6);
  iVar3 = (int)local_34 >> 6;
  iVar5 = (int)local_2c >> 6;
  local_38 = (local_38 & 0x3f) + (uVar2 & 0x3f);
  local_34 = (local_34 & 0x3f) + (uVar8 & 0x3f);
  local_30 = (local_30 & 0x3f) + (uVar2 & 0x3f);
  local_2c = (local_2c & 0x3f) + (uVar8 & 0x3f);
  iVar5 = iVar5 + ((int)uVar8 >> 6);
  iVar3 = iVar3 + ((int)uVar8 >> 6);
  if (param_2 == 2) {
    cVar10 = '\x01';
    iVar4 = iVar4 + ((int)(local_38 + 0x1f) >> 6);
    iVar9 = iVar9 + ((int)(local_30 + 0x20) >> 6);
    if (iVar4 == iVar9) {
      if ((local_30 - 0x20 & 0x3f) + (local_38 + 0x1f & 0x3f) < 0x3f) {
        iVar4 = iVar4 + -1;
      }
      else {
        iVar9 = iVar9 + 1;
      }
    }
    iVar3 = iVar3 + ((int)(local_34 + 0x1f) >> 6);
    iVar5 = iVar5 + ((int)(local_2c + 0x20) >> 6);
    if (iVar3 == iVar5) {
      if ((local_2c - 0x20 & 0x3f) + (local_34 + 0x1f & 0x3f) < 0x3f) {
        iVar3 = iVar3 + -1;
      }
      else {
        iVar5 = iVar5 + 1;
      }
    }
    goto LAB_144b585b8;
  }
  if (param_2 == 3) {
    cVar10 = '\x05';
    uVar6 = 3;
LAB_144b58512:
    FUN_144b57990(&local_38,param_1,uVar6);
  }
  else {
    if (param_2 == 4) {
      cVar10 = '\x06';
      uVar6 = 4;
      goto LAB_144b58512;
    }
    cVar10 = '\x02';
  }
  iVar4 = iVar4 + ((int)local_38 >> 6);
  iVar9 = iVar9 + ((int)(local_30 + 0x3f) >> 6);
  iVar3 = iVar3 + ((int)local_34 >> 6);
  iVar5 = iVar5 + ((int)(local_2c + 0x3f) >> 6);
LAB_144b585b8:
  uVar2 = iVar9 - iVar4;
  iVar7 = iVar5 - iVar3;
  if (cVar10 == '\x01') {
    uVar8 = (int)(uVar2 + 0xf) >> 3 & 0xfffffffe;
  }
  else if (cVar10 == '\x05') {
    uVar2 = uVar2 * 3;
    uVar8 = uVar2 + 3 & 0xfffffffc;
  }
  else {
    uVar8 = uVar2;
    if (cVar10 == '\x06') {
      iVar7 = iVar7 * 3;
    }
  }
  *(int *)(param_1 + 0x90) = iVar4;
  *(int *)(param_1 + 0x94) = iVar5;
  *(undefined2 *)(param_1 + 0x80) = 0x100;
  *(char *)(param_1 + 0x82) = cVar10;
  *(uint *)(param_1 + 0x6c) = uVar2;
  *(int *)(param_1 + 0x68) = iVar7;
  *(uint *)(param_1 + 0x70) = uVar8;
  if ((((iVar4 < -0x8000) || (0x7fff < iVar9)) || (iVar3 < -0x8000)) || (0x7fff < iVar5)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144b58670 FUN_144b58670 body=186 status=ok
// SIG undefined FUN_144b58670(void)

undefined4 FUN_144b58670(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xf0) + 8);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(longlong *)(param_1 + 0xf0) + 8) = uVar1 | 1;
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (param_2 < 1) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (param_2 < 0) {
      return 6;
    }
  }
  else {
    _Dst = (void *)(**(code **)(lVar2 + 8))(lVar2);
    if (_Dst == (void *)0x0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
      return 0x40;
    }
    memset(_Dst,0,(longlong)param_2);
    *(void **)(param_1 + 0x78) = _Dst;
  }
  return 0;
}



// FUNCTION 144b58730 FUN_144b58730 body=118 status=ok
// SIG undefined FUN_144b58730(void)

void FUN_144b58730(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0xf0) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
    *(undefined8 *)(param_1 + 0x78) = param_2;
    return;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return;
}



// FUNCTION 144b587b0 FUN_144b587b0 body=81 status=ok
// SIG undefined FUN_144b587b0(void)

longlong FUN_144b587b0(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    if (param_3 != (longlong *)0x0) {
      if (*param_3 != 0) {
        lVar2 = *(longlong *)(*param_3 + 8);
      }
      *param_3 = 0;
    }
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (*(int *)(lVar1 + 0x20) == param_2) {
        if (param_3 != (longlong *)0x0) {
          *param_3 = lVar2;
        }
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 144b58810 FUN_144b58810 body=590 status=ok
// SIG undefined FUN_144b58810(void)

int FUN_144b58810(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined1 local_38 [8];
  undefined8 local_30;
  
  lVar7 = *(longlong *)(param_2 + 8);
  iVar4 = 0;
  if (*(int *)(param_2 + 0x60) != 0x62697473) {
    if ((*(uint *)(*(longlong *)(param_2 + 0xf0) + 0x30) & 0x100000) != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      local_30 = 0;
      if ((((lVar7 != 0) && (uVar1 < *(uint *)(lVar7 + 0x10))) && ((*(byte *)(lVar7 + 8) & 8) != 0))
         && ((pcVar2 = *(code **)(*(longlong *)(lVar7 + 0x2d0) + 0x108), pcVar2 != (code *)0x0 &&
             (cVar3 = (*pcVar2)(lVar7,uVar1,local_res20,local_res10,local_38), cVar3 != '\0')))) {
        iVar4 = FUN_144b57bd0(lVar7,0);
        if (iVar4 == 0) {
          lVar6 = *(longlong *)(lVar7 + 0x2d0);
          do {
            iVar4 = FUN_144b54d40(lVar7,local_res20[0],
                                  *(uint *)(*(longlong *)(param_2 + 0xf0) + 0x30) & 0xffefffff | 4);
            if ((iVar4 != 0) ||
               (iVar4 = (**(code **)(lVar6 + 0x110))
                                  (lVar7,local_res10[0],param_2,*(undefined8 *)(lVar7 + 0x78)),
               iVar4 != 0)) goto LAB_144b58964;
          } while ((uVar1 < *(uint *)(lVar7 + 0x10)) &&
                  ((((*(byte *)(lVar7 + 8) & 8) != 0 &&
                    (pcVar2 = *(code **)(*(longlong *)(lVar7 + 0x2d0) + 0x108),
                    pcVar2 != (code *)0x0)) &&
                   (cVar3 = (*pcVar2)(lVar7,uVar1,local_res20,local_res10,local_38), cVar3 != '\0'))
                  ));
          *(undefined4 *)(param_2 + 0x60) = 0x62697473;
LAB_144b58964:
          FUN_144b57cd0(*(undefined8 *)(lVar7 + 0x78));
          if (iVar4 == 0) {
            return 0;
          }
        }
        *(undefined4 *)(param_2 + 0x60) = 0x6f75746c;
      }
    }
    if (*(int *)(param_2 + 0x60) == 0x6f75746c) {
      lVar7 = *(longlong *)(param_1 + 0x128);
      lVar6 = *(longlong *)(param_1 + 0x118);
    }
    else {
      lVar7 = 0;
      lVar6 = 0;
      if (param_1 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x118);
        while( true ) {
          lVar7 = 0;
          lVar6 = 0;
          if ((lVar5 == 0) ||
             (lVar7 = *(longlong *)(lVar5 + 0x10), lVar6 = lVar5,
             *(int *)(lVar7 + 0x20) == *(int *)(param_2 + 0x60))) break;
          lVar5 = *(longlong *)(lVar5 + 8);
        }
      }
    }
    iVar4 = 7;
    while (((lVar7 != 0 &&
            (iVar4 = (**(code **)(lVar7 + 0x70))(lVar7,param_2,param_3,0), iVar4 != 0)) &&
           ((char)iVar4 == '\x13'))) {
      lVar7 = 0;
      if (param_1 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x118);
        if (lVar6 != 0) {
          lVar5 = *(longlong *)(lVar6 + 8);
        }
        while ((lVar6 = 0, lVar7 = 0, lVar5 != 0 &&
               (lVar7 = *(longlong *)(lVar5 + 0x10), lVar6 = lVar5,
               *(int *)(lVar7 + 0x20) != *(int *)(param_2 + 0x60)))) {
          lVar5 = *(longlong *)(lVar5 + 8);
        }
      }
    }
  }
  return iVar4;
}



// FUNCTION 144b58a60 FUN_144b58a60 body=160 status=ok
// SIG undefined FUN_144b58a60(void)

undefined8 FUN_144b58a60(longlong param_1,int *param_2,uint param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  if ((param_4 & 1) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x80);
    if (lVar3 == 0) {
      return 0x24;
    }
    if ((param_4 & 0x10) == 0) {
      iVar6 = *(int *)(lVar3 + 0x1c);
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x20);
    }
    if (param_3 != 0) {
      uVar5 = (ulonglong)param_3;
      do {
        lVar3 = (longlong)*param_2;
        iVar4 = 1;
        if (*param_2 < 0) {
          lVar3 = -lVar3;
          iVar4 = -1;
        }
        lVar2 = (longlong)iVar6;
        if (iVar6 < 0) {
          lVar2 = -(longlong)iVar6;
          iVar4 = -iVar4;
        }
        iVar1 = (int)(lVar2 * lVar3 + 0x20U >> 6);
        if (iVar4 < 0) {
          iVar1 = -iVar1;
        }
        *param_2 = iVar1;
        param_2 = param_2 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return 0;
}



// FUNCTION 144b58b00 FUN_144b58b00 body=40 status=ok
// SIG undefined FUN_144b58b00(void)

int FUN_144b58b00(undefined4 param_1)

{
  undefined8 local_18;
  
  local_18 = 0xdbd95b;
  FUN_144b5e880(&local_18,param_1);
  return local_18._4_4_ + 0x80 >> 8;
}



// FUNCTION 144b58b30 FUN_144b58b30 body=40 status=ok
// SIG undefined FUN_144b58b30(void)

int FUN_144b58b30(undefined4 param_1)

{
  undefined8 local_18 [3];
  
  local_18[0] = 0xdbd95b;
  FUN_144b5e880(local_18,param_1);
  return (int)local_18[0] + 0x80 >> 8;
}



// FUNCTION 144b58b60 FUN_144b58b60 body=111 status=ok
// SIG undefined FUN_144b58b60(void)

ulonglong FUN_144b58b60(undefined4 param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 local_res10;
  
  local_res10 = 0x1000000;
  FUN_144b5e880(&local_res10,param_1);
  lVar1 = (longlong)local_res10._4_4_;
  iVar2 = 1;
  uVar3 = (ulonglong)(int)local_res10;
  if (local_res10 < 0) {
    lVar1 = -lVar1;
    iVar2 = -1;
  }
  if ((int)local_res10 < 0) {
    uVar3 = -uVar3;
    iVar2 = -iVar2;
  }
  if (uVar3 == 0) {
    uVar3 = 0x7fffffff;
  }
  else {
    uVar3 = ((uVar3 >> 1) + lVar1 * 0x10000) / uVar3;
  }
  if (iVar2 < 0) {
    uVar3 = (ulonglong)(uint)-(int)uVar3;
  }
  return uVar3;
}



// FUNCTION 144b58bd0 FUN_144b58bd0 body=106 status=ok
// SIG undefined FUN_144b58bd0(void)

int FUN_144b58bd0(uint param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int local_res18;
  int local_res1c;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return 0;
  }
  uVar3 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f) |
          (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  iVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (iVar1 < 0x1e) {
    bVar2 = 0x1d - (char)iVar1;
    local_res18 = param_1 << (bVar2 & 0x1f);
    local_res1c = param_2 << (bVar2 & 0x1f);
  }
  else {
    bVar2 = (char)iVar1 - 0x1d;
    local_res18 = (int)param_1 >> (bVar2 & 0x1f);
    local_res1c = (int)param_2 >> (bVar2 & 0x1f);
  }
  FUN_144b5e990(&local_res18);
  return local_res1c;
}



// FUNCTION 144b58c40 FUN_144b58c40 body=108 status=ok
// SIG undefined FUN_144b58c40(void)

int FUN_144b58c40(int param_1,int param_2)

{
  param_2 = param_2 - param_1;
  if (param_2 < -0xb3ffff) {
    param_2 = param_2 + 0x1680000 + ((-param_2 - 0xb40000U) / 0x1680000) * 0x1680000;
  }
  if (0xb40000 < param_2) {
    return ((param_2 - 0xb40001U) / 0x1680000) * -0x1680000 + -0x1680000 + param_2;
  }
  return param_2;
}



// FUNCTION 144b58cb0 FUN_144b58cb0 body=339 status=ok
// SIG undefined FUN_144b58cb0(void)

void FUN_144b58cb0(int *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_res8;
  int iStackX_c;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    local_res8 = (uint)*(undefined8 *)param_1;
    uVar1 = (uint)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    if ((local_res8 != 0) || (uVar1 != 0)) {
      uVar3 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) |
              (local_res8 ^ (int)local_res8 >> 0x1f) - ((int)local_res8 >> 0x1f);
      iVar4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (iVar4 < 0x1e) {
        iVar4 = 0x1d - iVar4;
        local_res8 = local_res8 << ((byte)iVar4 & 0x1f);
        iStackX_c = uVar1 << ((byte)iVar4 & 0x1f);
      }
      else {
        bVar2 = (byte)(iVar4 + -0x1d);
        local_res8 = (int)local_res8 >> (bVar2 & 0x1f);
        iStackX_c = (int)uVar1 >> (bVar2 & 0x1f);
        iVar4 = -(iVar4 + -0x1d);
      }
      FUN_144b5e880(&local_res8,param_2);
      iVar7 = 1;
      iVar5 = 1;
      if ((int)local_res8 < 0) {
        local_res8 = -local_res8;
        iVar5 = -1;
      }
      iVar6 = (int)((ulonglong)((longlong)(int)local_res8 * 0xdbd95b16 + 0x40000000) >> 0x20);
      if (iVar5 < 0) {
        iVar6 = -iVar6;
      }
      if (iStackX_c < 0) {
        iStackX_c = -iStackX_c;
        iVar7 = -1;
      }
      iVar5 = (int)((ulonglong)((longlong)iStackX_c * 0xdbd95b16 + 0x40000000) >> 0x20);
      if (iVar7 < 0) {
        iVar5 = -iVar5;
      }
      bVar2 = (byte)iVar4;
      if (0 < iVar4) {
        iVar4 = 1 << (bVar2 - 1 & 0x1f);
        *param_1 = (int)((iVar4 - (uint)(iVar6 < 0)) + iVar6) >> (bVar2 & 0x1f);
        param_1[1] = (int)((iVar4 - (uint)(iVar5 < 0)) + iVar5) >> (bVar2 & 0x1f);
        return;
      }
      param_1[1] = iVar5 << (-bVar2 & 0x1f);
      *param_1 = iVar6 << (-bVar2 & 0x1f);
    }
  }
  return;
}



// FUNCTION 144b58e10 FUN_144b58e10 body=242 status=ok
// SIG undefined FUN_144b58e10(void)

int FUN_144b58e10(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_res8;
  int iStackX_c;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  local_res8 = (uint)*param_1;
  uVar5 = (uint)((ulonglong)*param_1 >> 0x20);
  uVar2 = (int)uVar5 >> 0x1f;
  if (local_res8 == 0) {
    return (uVar5 ^ uVar2) - uVar2;
  }
  uVar3 = (int)local_res8 >> 0x1f;
  if (uVar5 == 0) {
    return (local_res8 ^ uVar3) - uVar3;
  }
  uVar2 = (uVar5 ^ uVar2) - uVar2 | (local_res8 ^ uVar3) - uVar3;
  iVar4 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  if (iVar4 < 0x1e) {
    iVar4 = 0x1d - iVar4;
    iVar7 = local_res8 << ((byte)iVar4 & 0x1f);
    iVar6 = uVar5 << ((byte)iVar4 & 0x1f);
  }
  else {
    bVar1 = (byte)(iVar4 + -0x1d);
    iVar7 = (int)local_res8 >> (bVar1 & 0x1f);
    iVar6 = (int)uVar5 >> (bVar1 & 0x1f);
    iVar4 = -(iVar4 + -0x1d);
  }
  _local_res8 = CONCAT44(iVar6,iVar7);
  FUN_144b5e990(&local_res8);
  iVar6 = 1;
  if ((int)local_res8 < 0) {
    local_res8 = -local_res8;
    iVar6 = -1;
  }
  iVar7 = (int)((ulonglong)((longlong)(int)local_res8 * 0xdbd95b16 + 0x40000000) >> 0x20);
  if (iVar6 < 0) {
    iVar7 = -iVar7;
  }
  bVar1 = (byte)iVar4;
  if (0 < iVar4) {
    return iVar7 + (1 << (bVar1 - 1 & 0x1f)) >> (bVar1 & 0x1f);
  }
  return iVar7 << (-bVar1 & 0x1f);
}



// FUNCTION 144b58f10 FUN_144b58f10 body=23 status=ok
// SIG undefined FUN_144b58f10(void)

void FUN_144b58f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1[1] = 0;
    FUN_144b58cb0(param_1,param_3);
    return;
  }
  return;
}



// FUNCTION 144b58f30 FUN_144b58f30 body=134 status=ok
// SIG undefined FUN_144b58f30(void)

undefined8
FUN_144b58f30(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 8) & 8) == 0)) {
    uVar3 = 0x23;
  }
  else {
    pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
    if ((pcVar1 != (code *)0x0) &&
       (puVar2 = (undefined8 *)(*pcVar1)(*(longlong **)(param_1 + 0x90),"sfnt-table"),
       puVar2 != (undefined8 *)0x0)) {
      uVar3 = (*(code *)*puVar2)(param_1,param_2,param_3,param_4,param_5);
      return uVar3;
    }
    uVar3 = 7;
  }
  return uVar3;
}



// FUNCTION 144b58fc0 FUN_144b58fc0 body=95 status=ok
// SIG undefined FUN_144b58fc0(void)

undefined4 FUN_144b58fc0(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [4];
  undefined4 local_resc;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    plVar1 = *(longlong **)(*param_1 + 0x90);
    pcVar2 = *(code **)(*plVar1 + 0x30);
    if (pcVar2 != (code *)0x0) {
      puVar4 = (undefined8 *)(*pcVar2)(plVar1,"tt-cmaps");
      if (puVar4 != (undefined8 *)0x0) {
        iVar3 = (*(code *)*puVar4)(param_1,local_res8);
        if (iVar3 != 0) {
          local_resc = 0xffffffff;
        }
        return local_resc;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 144b59020 FUN_144b59020 body=51 status=ok
// SIG undefined FUN_144b59020(void)

undefined8 FUN_144b59020(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
    if (pcVar1 != (code *)0x0) {
      uVar2 = (*pcVar1)(*(longlong **)(param_1 + 0x90),"font-format");
    }
  }
  return uVar2;
}



// FUNCTION 144b59060 FUN_144b59060 body=97 status=ok
// SIG undefined FUN_144b59060(void)

void FUN_144b59060(longlong param_1)

{
  *(longlong *)(param_1 + 0x68) =
       *(longlong *)(param_1 + 0x20) + (longlong)*(short *)(param_1 + 0x1a) * 8;
  *(longlong *)(param_1 + 0x70) =
       (longlong)*(short *)(param_1 + 0x1a) + *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x78) =
       *(longlong *)(param_1 + 0x30) + (longlong)*(short *)(param_1 + 0x18) * 2;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(longlong *)(param_1 + 0x88) =
         *(longlong *)(param_1 + 0x40) + (longlong)*(short *)(param_1 + 0x1a) * 8;
    *(longlong *)(param_1 + 0x90) =
         *(longlong *)(param_1 + 0x48) + (longlong)*(short *)(param_1 + 0x1a) * 8;
  }
  return;
}



// FUNCTION 144b590d0 FUN_144b590d0 body=128 status=ok
// SIG undefined FUN_144b590d0(void)

undefined4 FUN_144b590d0(undefined4 *param_1,longlong param_2)

{
  void *_Dst;
  
  param_1[1] = 0xf1;
  *param_1 = 0x50;
  param_1[2] = 0;
  *(undefined1 **)(param_1 + 4) = &LAB_144b592d0;
  *(undefined1 **)(param_1 + 6) = &LAB_144b59330;
  _Dst = (void *)(**(code **)(param_2 + 8))(param_2);
  if (_Dst == (void *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
    return 0x40;
  }
  memset(_Dst,0,0x788);
  *(void **)(param_1 + 8) = _Dst;
  return 0;
}



// FUNCTION 144b59150 FUN_144b59150 body=128 status=ok
// SIG undefined FUN_144b59150(void)

undefined4 FUN_144b59150(undefined4 *param_1,longlong param_2)

{
  void *_Dst;
  
  param_1[1] = 0xf1;
  *param_1 = 0x50;
  param_1[2] = 0;
  *(undefined1 **)(param_1 + 4) = &LAB_144b59300;
  *(undefined1 **)(param_1 + 6) = &LAB_144b59360;
  _Dst = (void *)(**(code **)(param_2 + 8))(param_2);
  if (_Dst == (void *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
    return 0x40;
  }
  memset(_Dst,0,0x788);
  *(void **)(param_1 + 8) = _Dst;
  return 0;
}



// FUNCTION 144b591d0 FUN_144b591d0 body=124 status=ok
// SIG undefined FUN_144b591d0(void)

void FUN_144b591d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (*(uint *)(param_1 + 4) != 0) {
      uVar2 = (ulonglong)*(uint *)(param_1 + 4);
      do {
        if (*plVar1 != 0) {
          (**(code **)(param_2 + 0x10))(param_2);
        }
        *plVar1 = 0;
        plVar1 = plVar1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 144b59250 thunk_FUN_144b59540 body=5 status=ok
// SIG undefined thunk_FUN_144b59540(void)

ulonglong thunk_FUN_144b59540(undefined8 param_1,undefined8 param_2,uint *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  
  plVar1 = (longlong *)FUN_144b59370(param_1,param_3);
  uVar4 = 0;
  if (*plVar1 == 0) {
    puVar2 = (undefined8 *)(**(code **)(param_4 + 8))(param_4,0x10);
    if (puVar2 == (undefined8 *)0x0) {
      uVar4 = 0x40;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      *plVar1 = (longlong)puVar2;
      *puVar2 = param_1;
      puVar2[1] = param_2;
      if (*param_3 <= param_3[2]) {
        uVar3 = FUN_144b593f0(param_3,param_4);
        uVar4 = 0;
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      param_3[2] = param_3[2] + 1;
    }
  }
  else {
    *(undefined8 *)(*plVar1 + 8) = param_2;
  }
  return (ulonglong)uVar4;
}



// FUNCTION 144b59260 FUN_144b59260 body=22 status=ok
// SIG undefined FUN_144b59260(void)

void FUN_144b59260(undefined4 param_1)

{
  undefined4 uStack_14;
  
  FUN_144b59540(CONCAT44(uStack_14,param_1));
  return;
}



// FUNCTION 144b59280 FUN_144b59280 body=31 status=ok
// SIG undefined FUN_144b59280(void)

longlong FUN_144b59280(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144b59370();
  if (*plVar1 != 0) {
    return *plVar1 + 8;
  }
  return 0;
}



// FUNCTION 144b592a0 FUN_144b592a0 body=40 status=ok
// SIG undefined FUN_144b592a0(void)

longlong FUN_144b592a0(undefined4 param_1)

{
  longlong *plVar1;
  undefined4 uStackX_1c;
  
  plVar1 = (longlong *)FUN_144b59370(CONCAT44(uStackX_1c,param_1));
  if (*plVar1 != 0) {
    return *plVar1 + 8;
  }
  return 0;
}



// FUNCTION 144b59370 FUN_144b59370 body=113 status=ok
// SIG undefined FUN_144b59370(void)

longlong * FUN_144b59370(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  
  plVar1 = *(longlong **)(param_2 + 0x20);
  local_res8 = param_1;
  uVar4 = (**(code **)(param_2 + 0x10))(&local_res8);
  uVar4 = (uVar4 & 0xffffffff) % (ulonglong)*(uint *)(param_2 + 4);
  lVar2 = plVar1[uVar4];
  plVar5 = plVar1 + uVar4;
  while ((lVar2 != 0 && (cVar3 = (**(code **)(param_2 + 0x18))(lVar2,&local_res8), cVar3 == '\0')))
  {
    plVar5 = plVar5 + -1;
    if (plVar5 < plVar1) {
      plVar5 = plVar1 + (*(int *)(param_2 + 4) - 1);
    }
    lVar2 = *plVar5;
  }
  return plVar5;
}



// FUNCTION 144b593f0 FUN_144b593f0 body=328 status=ok
// SIG undefined FUN_144b593f0(void)

int FUN_144b593f0(uint *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  void *_Dst;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 local_res18 [2];
  
  plVar2 = *(longlong **)(param_1 + 8);
  _Dst = (void *)0x0;
  uVar1 = param_1[1];
  uVar9 = (ulonglong)uVar1;
  uVar5 = uVar1 * 2;
  param_1[1] = uVar5;
  *param_1 = uVar5 / 3;
  if ((int)uVar5 < 0) {
    iVar10 = 6;
  }
  else {
    _Dst = (void *)0x0;
    iVar10 = 0;
    if (uVar5 != 0) {
      if ((int)uVar5 < 0x10000000) {
        _Dst = (void *)(**(code **)(param_2 + 8))(param_2);
        if (_Dst == (void *)0x0) {
          iVar10 = 0x40;
        }
        else {
          iVar10 = 0;
          if (0 < (int)uVar5) {
            memset(_Dst,0,(longlong)(int)(uVar1 << 4));
            iVar10 = 0;
          }
        }
      }
      else {
        iVar10 = 10;
      }
    }
  }
  *(void **)(param_1 + 8) = _Dst;
  if (iVar10 == 0) {
    plVar11 = plVar2;
    if (uVar1 != 0) {
      do {
        if ((undefined8 *)*plVar11 != (undefined8 *)0x0) {
          local_res18[0] = *(undefined8 *)*plVar11;
          plVar3 = *(longlong **)(param_1 + 8);
          uVar7 = (**(code **)(param_1 + 4))(local_res18);
          uVar7 = (uVar7 & 0xffffffff) % (ulonglong)param_1[1];
          lVar4 = plVar3[uVar7];
          plVar8 = plVar3 + uVar7;
          while ((lVar4 != 0 && (cVar6 = (**(code **)(param_1 + 6))(*plVar8), cVar6 == '\0'))) {
            plVar8 = plVar8 + -1;
            if (plVar8 < plVar3) {
              plVar8 = plVar3 + (param_1[1] - 1);
            }
            lVar4 = *plVar8;
          }
          *plVar8 = *plVar11;
        }
        uVar9 = uVar9 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar9 != 0);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(param_2 + 0x10))(param_2,plVar2);
    }
  }
  return iVar10;
}



// FUNCTION 144b59540 FUN_144b59540 body=157 status=ok
// SIG undefined FUN_144b59540(void)

ulonglong FUN_144b59540(undefined8 param_1,undefined8 param_2,uint *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  
  plVar1 = (longlong *)FUN_144b59370(param_1,param_3);
  uVar4 = 0;
  if (*plVar1 == 0) {
    puVar2 = (undefined8 *)(**(code **)(param_4 + 8))(param_4,0x10);
    if (puVar2 == (undefined8 *)0x0) {
      uVar4 = 0x40;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      *plVar1 = (longlong)puVar2;
      *puVar2 = param_1;
      puVar2[1] = param_2;
      if (*param_3 <= param_3[2]) {
        uVar3 = FUN_144b593f0(param_3,param_4);
        uVar4 = 0;
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      param_3[2] = param_3[2] + 1;
    }
  }
  else {
    *(undefined8 *)(*plVar1 + 8) = param_2;
  }
  return (ulonglong)uVar4;
}



// FUNCTION 144b595e0 FUN_144b595e0 body=303 status=ok
// SIG undefined FUN_144b595e0(void)

undefined8 * FUN_144b595e0(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)0x0;
  *param_3 = 0;
  if (param_1 == (longlong *)0x0) {
    return (undefined8 *)&DAT_00000021;
  }
  if (param_2 == (uint *)0x0) {
    return (undefined8 *)&DAT_00000006;
  }
  lVar1 = *param_1;
  puVar3 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x48);
  if (puVar3 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)&DAT_00000040;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar5 = puVar4;
  }
  if ((int)puVar5 != 0) {
    return puVar5;
  }
  puVar3[6] = lVar1;
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 4) != 0) {
      uVar2 = FUN_144e2bd90(puVar3,*(undefined8 *)(param_2 + 6));
      puVar5 = (undefined8 *)(ulonglong)uVar2;
      puVar3[3] = *(undefined8 *)(param_2 + 6);
      goto LAB_144b596d1;
    }
    if (((uVar2 & 2) != 0) && (*(longlong *)(param_2 + 8) != 0)) {
      (**(code **)(lVar1 + 0x10))(lVar1,puVar3);
      puVar3 = *(undefined8 **)(param_2 + 8);
      goto LAB_144b596d1;
    }
    puVar5 = (undefined8 *)&DAT_00000006;
  }
  else {
    uVar2 = param_2[4];
    *puVar3 = *(undefined8 *)(param_2 + 2);
    *(uint *)(puVar3 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
LAB_144b596d1:
    if ((int)puVar5 == 0) {
      puVar3[6] = lVar1;
      puVar4 = puVar3;
      goto LAB_144b596f1;
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)(lVar1 + 0x10))(lVar1,puVar3);
  }
LAB_144b596f1:
  *param_3 = puVar4;
  return puVar5;
}



// FUNCTION 144b59710 FUN_144b59710 body=69 status=ok
// SIG undefined FUN_144b59710(void)

void FUN_144b59710(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))();
    }
    if (param_2 == 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 144b59760 FUN_144b59760 body=25 status=ok
// SIG undefined FUN_144b59760(void)

void FUN_144b59760(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}



// FUNCTION 144b59780 FUN_144b59780 body=18 status=ok
// SIG undefined FUN_144b59780(void)

void FUN_144b59780(longlong param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144b5978e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))();
    return;
  }
  return;
}



// FUNCTION 144b597a0 FUN_144b597a0 body=73 status=ok
// SIG undefined FUN_144b597a0(void)

undefined8 FUN_144b597a0(longlong param_1,uint param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    if (param_2 <= *(uint *)(param_1 + 8)) goto LAB_144b597d9;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x20))(param_1,param_2,0,0);
    if (iVar1 == 0) {
LAB_144b597d9:
      *(uint *)(param_1 + 0xc) = param_2;
      return 0;
    }
  }
  return 0x55;
}



// FUNCTION 144b597f0 FUN_144b597f0 body=117 status=ok
// SIG undefined FUN_144b597f0(void)

undefined8 FUN_144b597f0(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 < 0) {
    return 0x55;
  }
  uVar2 = *(int *)(param_1 + 0xc) + param_2;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    if (uVar2 <= *(uint *)(param_1 + 8)) goto LAB_144b59850;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x20))(param_1,uVar2,0,0);
    if (iVar1 == 0) {
LAB_144b59850:
      *(uint *)(param_1 + 0xc) = uVar2;
      return 0;
    }
  }
  return 0x55;
}



// FUNCTION 144b59870 FUN_144b59870 body=4 status=ok
// SIG undefined FUN_144b59870(void)

undefined4 FUN_144b59870(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 144b59880 FUN_144b59880 body=14 status=ok
// SIG undefined FUN_144b59880(void)

void FUN_144b59880(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_144b59890(param_1,*(undefined4 *)(param_1 + 0xc),param_2,param_3);
  return;
}



// FUNCTION 144b59890 FUN_144b59890 body=120 status=ok
// SIG undefined FUN_144b59890(void)

byte FUN_144b59890(longlong *param_1,uint param_2,void *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 < *(uint *)(param_1 + 1)) {
    if ((code *)param_1[4] == (code *)0x0) {
      uVar2 = *(uint *)(param_1 + 1) - param_2;
      if (param_4 < uVar2) {
        uVar2 = param_4;
      }
      memcpy(param_3,(void *)((ulonglong)param_2 + *param_1),(ulonglong)uVar2);
    }
    else {
      uVar2 = (*(code *)param_1[4])(param_1,(ulonglong)param_2);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar2 + param_2;
    bVar1 = -(uVar2 < param_4) & 0x55;
  }
  else {
    bVar1 = 0x55;
  }
  return bVar1;
}



// FUNCTION 144b59910 FUN_144b59910 body=117 status=ok
// SIG undefined FUN_144b59910(void)

ulonglong FUN_144b59910(longlong *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1) {
    return 0;
  }
  if ((code *)param_1[4] != (code *)0x0) {
    uVar2 = (*(code *)param_1[4])(param_1,uVar1,param_2,param_3);
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + (int)uVar2;
    return uVar2;
  }
  uVar3 = *(uint *)(param_1 + 1) - uVar1;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  memcpy(param_2,(void *)((ulonglong)uVar1 + *param_1),(ulonglong)uVar3);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar3;
  return (ulonglong)uVar3;
}



// FUNCTION 144b59990 FUN_144b59990 body=288 status=ok
// SIG undefined FUN_144b59990(void)

int FUN_144b59990(longlong *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar4 = (ulonglong)param_2;
  if (param_1[4] != 0) {
    lVar1 = param_1[6];
    if (*(uint *)(param_1 + 1) < param_2) {
      iVar5 = 0x55;
    }
    else {
      iVar5 = 0;
      lVar3 = 0;
      if ((int)param_2 < 1) {
        iVar5 = 0;
        if ((int)param_2 < 0) {
          iVar5 = 6;
        }
      }
      else {
        lVar3 = (**(code **)(lVar1 + 8))(lVar1,uVar4);
        if (lVar3 == 0) {
          iVar5 = 0x40;
        }
      }
      *param_1 = lVar3;
      if (iVar5 == 0) {
        uVar2 = (*(code *)param_1[4])(param_1,*(undefined4 *)((longlong)param_1 + 0xc),lVar3,uVar4);
        if (uVar2 < param_2) {
          if (*param_1 != 0) {
            (**(code **)(lVar1 + 0x10))(lVar1);
          }
          *param_1 = 0;
          iVar5 = 0x55;
        }
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar2;
        param_1[7] = *param_1;
        param_1[8] = *param_1 + uVar4;
      }
    }
    return iVar5;
  }
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if ((uVar2 < *(uint *)(param_1 + 1)) && (param_2 <= *(uint *)(param_1 + 1) - uVar2)) {
    param_1[7] = (ulonglong)uVar2 + *param_1;
    param_1[8] = (ulonglong)uVar2 + *param_1 + uVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar2 + param_2;
    return 0;
  }
  return 0x55;
}



// FUNCTION 144b59ab0 FUN_144b59ab0 body=69 status=ok
// SIG undefined FUN_144b59ab0(void)

void FUN_144b59ab0(longlong *param_1)

{
  if (param_1[4] != 0) {
    if (*param_1 != 0) {
      (**(code **)(param_1[6] + 0x10))(param_1[6]);
    }
    *param_1 = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    return;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



// FUNCTION 144b59b00 FUN_144b59b00 body=53 status=ok
// SIG undefined FUN_144b59b00(void)

void FUN_144b59b00(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_144b59990();
  if (iVar1 == 0) {
    *param_3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 144b59b40 FUN_144b59b40 body=61 status=ok
// SIG undefined FUN_144b59b40(void)

void FUN_144b59b40(longlong param_1,longlong *param_2)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    if (*param_2 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(*(longlong *)(param_1 + 0x30));
    }
    *param_2 = 0;
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 144b59b80 FUN_144b59b80 body=27 status=ok
// SIG undefined FUN_144b59b80(void)

ulonglong FUN_144b59b80(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x38);
  if (pbVar2 < *(byte **)(param_1 + 0x40)) {
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x38) = pbVar2 + 1;
    return (ulonglong)bVar1;
  }
  return (ulonglong)pbVar2 & 0xffffffffffffff00;
}



// FUNCTION 144b59ba0 FUN_144b59ba0 body=49 status=ok
// SIG undefined FUN_144b59ba0(void)

undefined2 FUN_144b59ba0(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 0x38);
  if (puVar3 + 1 < *(undefined1 **)(param_1 + 0x40)) {
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    *(undefined1 **)(param_1 + 0x38) = puVar3 + 2;
    return CONCAT11(uVar1,uVar2);
  }
  *(undefined1 **)(param_1 + 0x38) = puVar3;
  return 0;
}



// FUNCTION 144b59be0 FUN_144b59be0 body=65 status=ok
// SIG undefined FUN_144b59be0(void)

undefined4 FUN_144b59be0(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  
  puVar5 = *(undefined1 **)(param_1 + 0x38);
  if (puVar5 + 3 < *(undefined1 **)(param_1 + 0x40)) {
    uVar1 = puVar5[1];
    uVar2 = *puVar5;
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(undefined1 **)(param_1 + 0x38) = puVar5 + 4;
    return CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4);
  }
  *(undefined1 **)(param_1 + 0x38) = puVar5;
  return 0;
}



// FUNCTION 144b59c30 FUN_144b59c30 body=50 status=ok
// SIG undefined FUN_144b59c30(void)

undefined2 FUN_144b59c30(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = *(undefined2 **)(param_1 + 0x38);
  if ((longlong)puVar1 + 1U < *(ulonglong *)(param_1 + 0x40)) {
    uVar2 = *puVar1;
    *(undefined2 **)(param_1 + 0x38) = puVar1 + 1;
    return uVar2;
  }
  *(undefined2 **)(param_1 + 0x38) = puVar1;
  return 0;
}



// FUNCTION 144b59c70 FUN_144b59c70 body=65 status=ok
// SIG undefined FUN_144b59c70(void)

undefined4 FUN_144b59c70(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  if ((longlong)puVar1 + 3U < *(ulonglong *)(param_1 + 0x40)) {
    uVar2 = *puVar1;
    *(undefined4 **)(param_1 + 0x38) = puVar1 + 1;
    return uVar2;
  }
  *(undefined4 **)(param_1 + 0x38) = puVar1;
  return 0;
}



// FUNCTION 144b59cc0 FUN_144b59cc0 body=126 status=ok
// SIG undefined FUN_144b59cc0(void)

ulonglong FUN_144b59cc0(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  byte local_res8 [8];
  
  *param_2 = 0;
  local_res8[0] = 0;
  if ((code *)param_1[4] == (code *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    uVar3 = (ulonglong)uVar2;
    if (uVar2 < *(uint *)(param_1 + 1)) {
      bVar1 = *(byte *)((ulonglong)uVar2 + *param_1);
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
      return (ulonglong)bVar1;
    }
  }
  else {
    uVar3 = (*(code *)param_1[4])(param_1,*(undefined4 *)((longlong)param_1 + 0xc),local_res8,1);
    if ((int)uVar3 == 1) {
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
      return (ulonglong)local_res8[0];
    }
  }
  *param_2 = 0x55;
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 144b59d40 FUN_144b59d40 body=143 status=ok
// SIG undefined FUN_144b59d40(void)

undefined2 FUN_144b59d40(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1 + 1) {
LAB_144b59db6:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar3 = (undefined1 *)((ulonglong)uVar1 + *param_1);
    if (puVar3 == (undefined1 *)0x0) goto LAB_144b59d9f;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar1,local_res8,2);
    if (iVar2 != 2) goto LAB_144b59db6;
    puVar3 = local_res8;
  }
  uVar4 = CONCAT11(*puVar3,puVar3[1]);
LAB_144b59d9f:
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 2;
  return uVar4;
}



// FUNCTION 144b59dd0 FUN_144b59dd0 body=141 status=ok
// SIG undefined FUN_144b59dd0(void)

uint FUN_144b59dd0(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1 + 2) {
LAB_144b59e4a:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar3 = (undefined1 *)((ulonglong)uVar1 + *param_1);
    if (puVar3 == (undefined1 *)0x0) goto LAB_144b59e38;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar1,local_res8,3);
    if (iVar2 != 3) goto LAB_144b59e4a;
    puVar3 = local_res8;
  }
  uVar4 = (uint)CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]);
LAB_144b59e38:
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 3;
  return uVar4;
}



// FUNCTION 144b59e60 FUN_144b59e60 body=152 status=ok
// SIG undefined FUN_144b59e60(void)

undefined4 FUN_144b59e60(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1 + 3) {
LAB_144b59ee5:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar3 = (undefined1 *)((ulonglong)uVar1 + *param_1);
    if (puVar3 == (undefined1 *)0x0) goto LAB_144b59ed3;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar1,local_res8,4);
    if (iVar2 != 4) goto LAB_144b59ee5;
    puVar3 = local_res8;
  }
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
LAB_144b59ed3:
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 4;
  return uVar4;
}



// FUNCTION 144b59f00 FUN_144b59f00 body=143 status=ok
// SIG undefined FUN_144b59f00(void)

undefined2 FUN_144b59f00(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 local_res8 [4];
  
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1 + 1) {
LAB_144b59f76:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar3 = (undefined2 *)((ulonglong)uVar1 + *param_1);
    if (puVar3 == (undefined2 *)0x0) goto LAB_144b59f5f;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar1,local_res8,2);
    if (iVar2 != 2) goto LAB_144b59f76;
    puVar3 = local_res8;
  }
  uVar4 = *puVar3;
LAB_144b59f5f:
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 2;
  return uVar4;
}



// FUNCTION 144b59f90 FUN_144b59f90 body=152 status=ok
// SIG undefined FUN_144b59f90(void)

undefined4 FUN_144b59f90(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_res8 [2];
  
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1 + 3) {
LAB_144b5a015:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar3 = (undefined4 *)((ulonglong)uVar1 + *param_1);
    if (puVar3 == (undefined4 *)0x0) goto LAB_144b5a003;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar1,local_res8,4);
    if (iVar2 != 4) goto LAB_144b5a015;
    puVar3 = local_res8;
  }
  uVar4 = *puVar3;
LAB_144b5a003:
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 4;
  return uVar4;
}



// FUNCTION 144b5a030 FUN_144b5a030 body=557 status=ok
// SIG undefined FUN_144b5a030(void)

int FUN_144b5a030(longlong param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  sbyte sVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  
  bVar4 = false;
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (param_1 == 0) {
    return 0x28;
  }
  iVar5 = 0;
  bVar2 = *param_2;
  puVar9 = *(uint **)(param_1 + 0x38);
  while (bVar2 - 4 < 0x16) {
    switch(bVar2 - 4) {
    case 0:
      iVar5 = FUN_144b59990(param_1,*(undefined2 *)(param_2 + 2));
      if (iVar5 == 0) {
        puVar10 = *(uint **)(param_1 + 0x38);
        bVar4 = true;
        goto LAB_144b5a211;
      }
      goto LAB_144b5a229;
    default:
      goto switchD_144b5a0bd_caseD_1;
    case 4:
    case 5:
      uVar8 = (uint)(byte)*puVar9;
      sVar6 = 0x18;
      puVar10 = (uint *)((longlong)puVar9 + 1);
      break;
    case 8:
    case 9:
      uVar7 = (uint)(byte)*puVar9;
      puVar10 = (uint *)((longlong)puVar9 + 2);
      sVar6 = 0x10;
      uVar8 = (uint)*(byte *)((longlong)puVar9 + 1);
      goto LAB_144b5a1df;
    case 10:
    case 0xb:
      uVar7 = (uint)*(byte *)((longlong)puVar9 + 1);
      puVar10 = (uint *)((longlong)puVar9 + 2);
      sVar6 = 0x10;
      uVar8 = (uint)(byte)*puVar9;
      goto LAB_144b5a1df;
    case 0xc:
    case 0xd:
      puVar10 = puVar9 + 1;
      uVar8 = CONCAT31(CONCAT21(CONCAT11((byte)*puVar9,*(byte *)((longlong)puVar9 + 1)),
                                *(byte *)((longlong)puVar9 + 2)),*(byte *)((longlong)puVar9 + 3));
      sVar6 = 0;
      break;
    case 0xe:
    case 0xf:
      puVar10 = puVar9 + 1;
      uVar8 = *puVar9;
      sVar6 = 0;
      break;
    case 0x10:
    case 0x11:
      uVar3 = CONCAT11((byte)*puVar9,*(byte *)((longlong)puVar9 + 1));
      bVar2 = *(byte *)((longlong)puVar9 + 2);
      goto LAB_144b5a1da;
    case 0x12:
    case 0x13:
      uVar3 = *(ushort *)((longlong)puVar9 + 1);
      bVar2 = (byte)*puVar9;
LAB_144b5a1da:
      uVar8 = (uint)bVar2;
      uVar7 = (uint)uVar3;
      puVar10 = (uint *)((longlong)puVar9 + 3);
      sVar6 = 8;
LAB_144b5a1df:
      uVar8 = uVar7 << 8 | uVar8;
      break;
    case 0x14:
    case 0x15:
      puVar10 = (uint *)((ulonglong)param_2[1] + (longlong)puVar9);
      if (puVar10 <= *(uint **)(param_1 + 0x40)) {
        if (*param_2 == 0x18) {
          memcpy((void *)((ulonglong)*(ushort *)(param_2 + 2) + param_3),puVar9,
                 (ulonglong)param_2[1]);
        }
        goto LAB_144b5a211;
      }
      iVar5 = 0x55;
      goto LAB_144b5a229;
    }
    if ((*param_2 & 1) != 0) {
      uVar8 = (int)(uVar8 << sVar6) >> sVar6;
    }
    puVar9 = (uint *)((ulonglong)*(ushort *)(param_2 + 2) + param_3);
    if (param_2[1] == 1) {
      *(char *)puVar9 = (char)uVar8;
    }
    else if (param_2[1] == 2) {
      *(short *)puVar9 = (short)uVar8;
    }
    else {
      *puVar9 = uVar8;
    }
LAB_144b5a211:
    pbVar1 = param_2 + 4;
    param_2 = param_2 + 4;
    puVar9 = puVar10;
    bVar2 = *pbVar1;
  }
switchD_144b5a0bd_caseD_1:
  *(uint **)(param_1 + 0x38) = puVar9;
LAB_144b5a229:
  if (bVar4) {
    FUN_144b59ab0(param_1);
  }
  return iVar5;
}



// FUNCTION 144b5a2c0 FUN_144b5a2c0 body=400 status=ok
// SIG undefined FUN_144b5a2c0(void)

uint FUN_144b5a2c0(longlong *param_1,longlong param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  uint local_res8 [2];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  
  uVar1 = *(uint *)(param_2 + 0xc);
  uVar3 = param_3 & 0xffff;
  if ((int)param_3 < 1) {
    uVar3 = param_3;
  }
  lVar2 = *param_1;
  local_res20[0] = param_4;
  uVar4 = FUN_144b5cc80(param_2,uVar3,local_res18,local_res8,local_res20);
  if (uVar4 == 0) {
    if (*(uint *)(param_2 + 8) < local_res18[0]) {
      uVar4 = 8;
    }
    else if (*(uint *)(param_2 + 8) - local_res18[0] < local_res8[0]) {
      uVar4 = 8;
    }
    else {
      local_res18[0] = FUN_144b597a0(param_2,local_res18[0] + uVar1);
      uVar4 = local_res18[0];
      if ((local_res18[0] == 0) &&
         (lVar6 = FUN_144b560d0(lVar2,local_res8[0],local_res18), uVar4 = local_res18[0],
         local_res18[0] == 0)) {
        uVar4 = FUN_144b59890(param_2,*(undefined4 *)(param_2 + 0xc),lVar6,local_res8[0]);
        if (uVar4 == 0) {
          pcVar7 = "type1";
          if ((char)local_res20[0] != '\0') {
            pcVar7 = "cid";
          }
          uVar4 = 0;
          if ((int)uVar3 < 0) {
            uVar4 = uVar3;
          }
          uVar4 = FUN_144b5a450(param_1,lVar6,local_res8[0],uVar4,pcVar7,param_6);
        }
        else if (lVar6 != 0) {
          (**(code **)(lVar2 + 0x10))(lVar2,lVar6);
        }
      }
    }
  }
  if ((char)uVar4 == '\x02') {
    if (*(code **)(param_2 + 0x20) == (code *)0x0) {
      if (*(uint *)(param_2 + 8) < uVar1) {
        return 0x55;
      }
    }
    else {
      iVar5 = (**(code **)(param_2 + 0x20))(param_2,uVar1,0,0);
      if (iVar5 != 0) {
        return 0x55;
      }
    }
    *(uint *)(param_2 + 0xc) = uVar1;
  }
  return uVar4;
}



// FUNCTION 144b5a450 FUN_144b5a450 body=302 status=ok
// SIG undefined FUN_144b5a450(void)

undefined8 *
FUN_144b5a450(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5,longlong *param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_58 [8];
  undefined8 *local_38;
  undefined8 local_30;
  
  lVar1 = *param_1;
  if (param_2 == (undefined8 *)0x0) {
    return (undefined8 *)&DAT_00000006;
  }
  puVar3 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x48);
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)&DAT_00000040;
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[8] = 0;
    puVar3[5] = FUN_144b5cc50;
    *puVar3 = param_2;
    *(undefined4 *)(puVar3 + 1) = param_3;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar4 = (undefined8 *)0x0;
  }
  if ((int)puVar4 == 0) {
    local_58[0] = 2;
    local_38 = puVar3;
    if (param_5 != 0) {
      local_58[0] = 10;
      local_30 = FUN_144b55a90(param_1);
    }
    uVar2 = FUN_144b5bd00(param_1,local_58,param_4,param_6,0);
    puVar4 = (undefined8 *)(ulonglong)uVar2;
    if (uVar2 == 0) {
      *(uint *)(*param_6 + 8) = *(uint *)(*param_6 + 8) & 0xfffffbff;
      return (undefined8 *)0x0;
    }
    if (puVar3 == (undefined8 *)0x0) {
      return puVar4;
    }
    param_2 = puVar3;
    if ((code *)puVar3[5] != (code *)0x0) {
      (*(code *)puVar3[5])(puVar3);
    }
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  return puVar4;
}



// FUNCTION 144b5a580 FUN_144b5a580 body=34 status=ok
// SIG undefined FUN_144b5a580(void)

longlong FUN_144b5a580(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      if (*(longlong *)(lVar1 + 0x10) == param_2) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 144b5a5b0 FUN_144b5a5b0 body=47 status=ok
// SIG undefined FUN_144b5a5b0(void)

void FUN_144b5a5b0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (longlong *)0x0)) {
    lVar1 = param_1[1];
    param_2[1] = 0;
    *param_2 = lVar1;
    if (lVar1 != 0) {
      *(longlong **)(lVar1 + 8) = param_2;
      param_1[1] = param_2;
      return;
    }
    *param_1 = param_2;
    param_1[1] = param_2;
  }
  return;
}



// FUNCTION 144b5a5e0 FUN_144b5a5e0 body=101 status=ok
// SIG undefined FUN_144b5a5e0(void)

undefined8 FUN_144b5a5e0(longlong *param_1,code *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  if ((param_1 == (longlong *)0x0) || (param_2 == (code *)0x0)) {
    uVar2 = 6;
  }
  else {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar3 + 8);
        uVar2 = (*param_2)(lVar3,param_3);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar3 = lVar1;
      } while (lVar1 != 0);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 144b5a650 FUN_144b5a650 body=126 status=ok
// SIG undefined FUN_144b5a650(void)

void FUN_144b5a650(longlong *param_1,code *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != (longlong *)0x0) && (param_3 != 0)) {
    lVar2 = *param_1;
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      if (param_2 != (code *)0x0) {
        (*param_2)(param_3,*(undefined8 *)(lVar2 + 0x10),param_4);
      }
      (**(code **)(param_3 + 0x10))(param_3,lVar2);
      lVar2 = lVar1;
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 144b5a6d0 FUN_144b5a6d0 body=913 status=ok
// SIG undefined FUN_144b5a6d0(void)

undefined8 FUN_144b5a6d0(short *param_1,undefined8 *param_2,undefined8 param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int local_res20;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  longlong local_48;
  
  if (param_1 == (short *)0x0) {
    return 0x14;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  uVar6 = 0;
  uVar2 = *(undefined4 *)(param_2 + 4);
  iVar3 = *(int *)((longlong)param_2 + 0x24);
  local_res20 = 0;
  if (*param_1 < 1) {
    return 0;
  }
  local_48 = 0;
LAB_144b5a760:
  sVar1 = *(short *)(local_48 + *(longlong *)(param_1 + 0xc));
  local_80 = (int)sVar1;
  if (-1 < local_80) {
    piVar8 = (int *)(*(longlong *)(param_1 + 4) + uVar6 * 8);
    piVar15 = (int *)(*(longlong *)(param_1 + 4) + (longlong)sVar1 * 8);
    local_98._4_4_ = (int)((ulonglong)*(undefined8 *)piVar8 >> 0x20);
    bVar5 = (byte)uVar2;
    iVar13 = (local_98._4_4_ << (bVar5 & 0x1f)) - iVar3;
    iVar12 = ((int)*(undefined8 *)piVar8 << (bVar5 & 0x1f)) - iVar3;
    local_98 = CONCAT44(iVar13,iVar12);
    local_88._4_4_ = (int)((ulonglong)*(undefined8 *)piVar15 >> 0x20);
    iVar14 = (local_88._4_4_ << (bVar5 & 0x1f)) - iVar3;
    iVar7 = ((int)*(undefined8 *)piVar15 << (bVar5 & 0x1f)) - iVar3;
    local_90 = local_98;
    local_88 = CONCAT44(iVar14,iVar7);
    pbVar10 = (byte *)(uVar6 + *(longlong *)(param_1 + 8));
    if ((*pbVar10 & 3) != 2) {
      if ((*pbVar10 & 3) == 0) {
        if ((*(byte *)(*(longlong *)(param_1 + 8) + (longlong)sVar1) & 3) == 1) {
          piVar15 = piVar15 + -2;
          local_98 = local_88;
        }
        else {
          local_98 = CONCAT44((iVar14 + iVar13) / 2,(iVar7 + iVar12) / 2);
        }
        piVar8 = piVar8 + -2;
        pbVar10 = pbVar10 + -1;
      }
      uVar4 = (*(code *)*param_2)(&local_98,param_3);
      iVar7 = (int)uVar4;
      do {
        if (iVar7 != 0) {
          return uVar4;
        }
        if (piVar15 <= piVar8) {
          uVar4 = (*(code *)param_2[1])(&local_98,param_3);
          goto LAB_144b5a9d1;
        }
        pbVar11 = pbVar10 + 1;
        piVar9 = piVar8 + 2;
        if ((pbVar10[1] & 3) == 0) {
          iVar12 = (*piVar9 << (bVar5 & 0x1f)) - iVar3;
          iVar7 = (piVar8[3] << (bVar5 & 0x1f)) - iVar3;
          local_90 = CONCAT44(iVar7,iVar12);
          piVar8 = piVar9;
          while( true ) {
            if (piVar15 <= piVar8) {
              uVar4 = (*(code *)param_2[2])(&local_90,&local_98,param_3);
              goto LAB_144b5a9d1;
            }
            piVar9 = piVar8 + 2;
            pbVar10 = pbVar11 + 1;
            pbVar11 = pbVar11 + 1;
            local_78 = (piVar8[2] << (bVar5 & 0x1f)) - iVar3;
            iStack_74 = (piVar8[3] << (bVar5 & 0x1f)) - iVar3;
            if ((*pbVar10 & 3) == 1) break;
            if ((*pbVar10 & 3) != 0) {
              return 0x14;
            }
            local_50 = (local_78 + iVar12) / 2;
            local_4c = (iStack_74 + iVar7) / 2;
            uVar4 = (*(code *)param_2[2])(&local_90,&local_50,param_3);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            local_90 = CONCAT44(iStack_74,local_78);
            piVar8 = piVar9;
            iVar7 = iStack_74;
            iVar12 = local_78;
          }
          uVar4 = (*(code *)param_2[2])(&local_90,&local_78,param_3);
        }
        else if ((pbVar10[1] & 3) == 1) {
          local_58 = (*piVar9 << (bVar5 & 0x1f)) - iVar3;
          local_54 = (piVar8[3] << (bVar5 & 0x1f)) - iVar3;
          uVar4 = (*(code *)param_2[1])(&local_58,param_3);
        }
        else {
          if (piVar15 < piVar8 + 4) {
            return 0x14;
          }
          if ((pbVar10[2] & 3) != 2) {
            return 0x14;
          }
          iVar7 = *piVar9;
          piVar9 = piVar8 + 6;
          pbVar11 = pbVar10 + 3;
          local_68 = (iVar7 << (bVar5 & 0x1f)) - iVar3;
          local_64 = (piVar8[3] << (bVar5 & 0x1f)) - iVar3;
          local_70 = (piVar8[4] << (bVar5 & 0x1f)) - iVar3;
          local_6c = (piVar8[5] << (bVar5 & 0x1f)) - iVar3;
          if (piVar15 < piVar9) goto LAB_144b5aa38;
          local_60 = (*piVar9 << (bVar5 & 0x1f)) - iVar3;
          local_5c = (piVar8[7] << (bVar5 & 0x1f)) - iVar3;
          uVar4 = (*(code *)param_2[3])(&local_68,&local_70,&local_60);
        }
        iVar7 = (int)uVar4;
        piVar8 = piVar9;
        pbVar10 = pbVar11;
      } while( true );
    }
  }
  return 0x14;
LAB_144b5aa38:
  uVar4 = (*(code *)param_2[3])(&local_68,&local_70,&local_98,param_3);
LAB_144b5a9d1:
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  local_res20 = local_res20 + 1;
  local_48 = local_48 + 2;
  uVar6 = (ulonglong)(local_80 + 1);
  if (*param_1 <= local_res20) {
    return 0;
  }
  goto LAB_144b5a760;
}



// FUNCTION 144b5aa70 FUN_144b5aa70 body=500 status=ok
// SIG undefined FUN_144b5aa70(void)

undefined1 * FUN_144b5aa70(longlong *param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 *_Dst;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_1 == (longlong *)0x0) {
    return &DAT_00000021;
  }
  lVar1 = *param_1;
  if ((param_4 != (undefined8 *)0x0) && (lVar1 != 0)) {
    *param_4 = 0;
    param_4[1] = 0;
    *(undefined4 *)(param_4 + 2) = 0;
    *(undefined4 *)((longlong)param_4 + 0x14) = 0;
    *(undefined4 *)(param_4 + 3) = 0;
    *(undefined4 *)((longlong)param_4 + 0x1c) = 0;
    param_4[4] = 0;
    if ((-1 < (int)param_3) && (param_3 <= param_2)) {
      if (0x7fff < param_2) {
        return &DAT_0000000a;
      }
      _Dst = (undefined1 *)0x0;
      puVar2 = _Dst;
      if ((int)param_2 < 0) {
        puVar2 = &DAT_00000006;
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = _Dst;
        if (param_2 != 0) {
          if ((int)param_2 < 0x10000000) {
            puVar3 = (undefined1 *)(**(code **)(lVar1 + 8))(lVar1);
            if (puVar3 == (undefined1 *)0x0) {
              puVar2 = &DAT_00000040;
            }
            else if (0 < (int)param_2) {
              memset(puVar3,0,(longlong)(int)(param_2 * 8));
              puVar2 = (undefined1 *)0x0;
            }
          }
          else {
            puVar2 = &DAT_0000000a;
            puVar3 = (undefined1 *)0x0;
          }
        }
      }
      param_4[1] = puVar3;
      if ((int)puVar2 == 0) {
        puVar3 = (undefined1 *)0x0;
        if ((int)param_2 < 0) {
          puVar2 = &DAT_00000006;
        }
        else {
          puVar2 = _Dst;
          puVar3 = _Dst;
          if (param_2 != 0) {
            puVar3 = (undefined1 *)(**(code **)(lVar1 + 8))(lVar1);
            if (puVar3 == (undefined1 *)0x0) {
              puVar2 = &DAT_00000040;
            }
            else {
              puVar2 = (undefined1 *)0x0;
              if (0 < (int)param_2) {
                memset(puVar3,0,(longlong)(int)param_2);
              }
            }
          }
        }
        param_4[2] = puVar3;
        if ((int)puVar2 == 0) {
          puVar2 = _Dst;
          if (param_3 != 0) {
            if ((int)param_3 < 0x40000000) {
              _Dst = (undefined1 *)(**(code **)(lVar1 + 8))(lVar1);
              if (_Dst == (undefined1 *)0x0) {
                puVar2 = &DAT_00000040;
              }
              else {
                puVar2 = (undefined1 *)0x0;
                if (0 < (int)param_3) {
                  memset(_Dst,0,(longlong)(int)(param_3 * 2));
                }
              }
            }
            else {
              puVar2 = &DAT_0000000a;
            }
          }
          param_4[3] = _Dst;
          if ((int)puVar2 == 0) {
            *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 1;
            *(short *)((longlong)param_4 + 2) = (short)param_2;
            *(short *)param_4 = (short)param_3;
            return (undefined1 *)0x0;
          }
        }
      }
      *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 1;
      FUN_144b5ac70(param_1,param_4);
      return puVar2;
    }
  }
  return &DAT_00000006;
}



// FUNCTION 144b5ac70 FUN_144b5ac70 body=186 status=ok
// SIG undefined FUN_144b5ac70(void)

undefined4 FUN_144b5ac70(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0x14;
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 6;
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    if (param_2[1] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_2[1] = 0;
    if (param_2[2] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_2[2] = 0;
    if (param_2[3] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_2[3] = 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return 0;
}



// FUNCTION 144b5ad30 FUN_144b5ad30 body=99 status=ok
// SIG undefined FUN_144b5ad30(void)

undefined8 FUN_144b5ad30(short *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_1 != (short *)0x0) {
    sVar1 = param_1[1];
    sVar2 = *param_1;
    if (sVar1 == 0) {
      if (sVar2 == 0) {
        return 0;
      }
    }
    else if ((0 < sVar1) && (0 < sVar2)) {
      iVar4 = -1;
      if (0 < sVar2) {
        psVar3 = *(short **)(param_1 + 0xc);
        lVar5 = 0;
        iVar6 = -1;
        do {
          iVar4 = (int)*psVar3;
          if (iVar4 <= iVar6) {
            return 6;
          }
          if (sVar1 <= iVar4) {
            return 6;
          }
          lVar5 = lVar5 + 1;
          psVar3 = psVar3 + 1;
          iVar6 = iVar4;
        } while (lVar5 < sVar2);
      }
      if (iVar4 == sVar1 + -1) {
        return 0;
      }
    }
  }
  return 6;
}



// FUNCTION 144b5ada0 FUN_144b5ada0 body=61 status=ok
// SIG undefined FUN_144b5ada0(void)

void FUN_144b5ada0(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 8);
    uVar2 = 0;
    if (0 < *(short *)(param_1 + 2)) {
      do {
        *piVar1 = *piVar1 + param_2;
        uVar2 = uVar2 + 1;
        piVar1[1] = piVar1[1] + param_3;
        piVar1 = piVar1 + 2;
      } while ((int)(uint)uVar2 < (int)*(short *)(param_1 + 2));
    }
  }
  return;
}



// FUNCTION 144b5ade0 FUN_144b5ade0 body=191 status=ok
// SIG undefined FUN_144b5ade0(void)

undefined8 FUN_144b5ade0(short *param_1,short *param_2)

{
  short sVar1;
  
  if ((param_1 == (short *)0x0) || (param_2 == (short *)0x0)) {
    return 0x14;
  }
  sVar1 = param_1[1];
  if ((sVar1 == param_2[1]) && (*param_1 == *param_2)) {
    if (param_1 != param_2) {
      if (sVar1 != 0) {
        memcpy(*(void **)(param_2 + 4),*(void **)(param_1 + 4),(longlong)sVar1 << 3);
        memcpy(*(void **)(param_2 + 8),*(void **)(param_1 + 8),(longlong)param_1[1]);
      }
      if (*param_1 != 0) {
        memcpy(*(void **)(param_2 + 0xc),*(void **)(param_1 + 0xc),(longlong)*param_1 * 2);
      }
      *(uint *)(param_2 + 0x10) =
           *(uint *)(param_1 + 0x10) & 0xfffffffe | *(uint *)(param_2 + 0x10) & 1;
    }
    return 0;
  }
  return 6;
}



// FUNCTION 144b5aea0 FUN_144b5aea0 body=210 status=ok
// SIG undefined FUN_144b5aea0(void)

void FUN_144b5aea0(longlong param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    piVar2 = *(int **)(param_1 + 8);
    piVar1 = piVar2 + (longlong)*(short *)(param_1 + 2) * 2;
    for (; piVar2 < piVar1; piVar2 = piVar2 + 2) {
      if (piVar2 != (int *)0x0) {
        lVar4 = (longlong)param_2[1] * (longlong)piVar2[1];
        lVar5 = (longlong)*param_2 * (longlong)*piVar2;
        lVar6 = (longlong)param_2[2] * (longlong)*piVar2;
        lVar3 = (longlong)param_2[3] * (longlong)piVar2[1];
        *piVar2 = (int)((ulonglong)(lVar4 + (lVar4 >> 0x3f) + 0x8000) >> 0x10) +
                  (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
        piVar2[1] = (int)((ulonglong)(lVar3 + (lVar3 >> 0x3f) + 0x8000) >> 0x10) +
                    (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
      }
    }
  }
  return;
}



// FUNCTION 144b5af80 FUN_144b5af80 body=1146 status=ok
// SIG undefined FUN_144b5af80(void)

byte FUN_144b5af80(short *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  if (param_1 == (short *)0x0) {
    return 0x14;
  }
  local_88 = param_2 / 2;
  param_3 = param_3 / 2;
  if ((local_88 != 0) || (param_3 != 0)) {
    iVar4 = FUN_144b5b400(param_1);
    if (iVar4 == 2) {
      return -(*param_1 != 0) & 6;
    }
    lVar7 = *(longlong *)(param_1 + 4);
    local_58 = (longlong)iVar4;
    local_98 = 0;
    local_7c = 0;
    if (0 < *param_1) {
      local_60 = 0;
      local_68 = lVar7;
      do {
        local_a8._4_4_ = 0;
        local_80 = 0;
        local_78 = 0;
        local_a8 = 0;
        local_84 = (int)*(short *)(local_60 + *(longlong *)(param_1 + 0xc));
        local_9c = -1;
        if (local_98 != local_84) {
          uVar13 = 0;
          uVar10 = 0;
          lVar15 = (longlong)local_98;
          iVar4 = local_84;
          local_a8._0_4_ = local_a8._4_4_;
          iVar5 = local_a8._4_4_;
          iVar14 = local_98;
          do {
            if (iVar4 == local_9c) break;
            local_a0 = local_80;
            local_90 = uVar13;
            if (iVar14 == local_9c) {
LAB_144b5b113:
              uVar12 = local_90;
              iVar9 = iVar14;
              uVar2 = uVar12;
              iVar3 = local_a0;
              if (iVar5 != 0) {
                if (local_9c < 0) {
                  uVar13 = uVar10;
                  local_9c = iVar4;
                  local_80 = iVar5;
                  local_78 = uVar10;
                }
                lVar11 = (longlong)local_a8._4_4_ * (longlong)local_90._4_4_;
                lVar7 = (longlong)(int)local_a8 * (longlong)(int)local_90;
                iVar9 = (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10) +
                        (int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10);
                if (iVar9 < -0xefff) {
                  iVar6 = 0;
                  iVar5 = 0;
                }
                else {
                  iVar6 = local_90._4_4_ + local_a8._4_4_;
                  iVar9 = iVar9 + 0x10000;
                  iVar16 = (int)local_90 + (int)local_a8;
                  if (local_58 == 0) {
                    iVar6 = -iVar6;
                  }
                  else {
                    iVar16 = -iVar16;
                  }
                  lVar7 = (longlong)local_a8._4_4_ * (longlong)(int)local_90;
                  lVar11 = (longlong)local_90._4_4_ * (longlong)(int)local_a8;
                  iVar8 = (int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10) -
                          (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10);
                  local_70 = -iVar8;
                  if (local_58 != 0) {
                    local_70 = iVar8;
                  }
                  local_50 = (longlong)local_70;
                  if (iVar5 < local_a0) {
                    local_a0 = iVar5;
                  }
                  lVar7 = (longlong)local_a0 * (longlong)iVar9 +
                          ((longlong)local_a0 * (longlong)iVar9 >> 0x3f) + 0x8000;
                  local_48 = lVar7 >> 0x10;
                  iVar5 = local_70;
                  iVar8 = local_a0;
                  if ((int)((ulonglong)
                            (local_88 * local_50 + (local_88 * local_50 >> 0x3f) + 0x8000) >> 0x10)
                      <= (int)((ulonglong)lVar7 >> 0x10)) {
                    iVar5 = iVar9;
                    iVar8 = local_88;
                  }
                  iVar5 = FUN_144b55580(iVar6,iVar8,iVar5);
                  if ((int)local_48 <
                      (int)((ulonglong)(param_3 * local_50 + (param_3 * local_50 >> 0x3f) + 0x8000)
                           >> 0x10)) {
                    iVar6 = FUN_144b55580(iVar16,local_a0,local_70);
                  }
                  else {
                    iVar6 = FUN_144b55580(iVar16,param_3,iVar9);
                  }
                }
                iVar9 = iVar4;
                if (iVar4 != lVar15) {
                  lVar7 = (longlong)iVar4;
                  do {
                    piVar1 = (int *)(local_68 + lVar7 * 8);
                    *piVar1 = *piVar1 + iVar5 + local_88;
                    piVar1 = (int *)(local_68 + 4 + lVar7 * 8);
                    *piVar1 = *piVar1 + iVar6 + param_3;
                    lVar11 = (longlong)local_98;
                    iVar9 = local_98;
                    if (lVar7 < local_84) {
                      lVar11 = lVar7 + 1;
                      iVar9 = iVar4 + 1;
                    }
                    iVar4 = iVar9;
                    lVar7 = lVar11;
                    uVar13 = local_78;
                    iVar9 = iVar4;
                  } while (lVar11 != lVar15);
                }
              }
            }
            else {
              piVar1 = (int *)(lVar7 + (longlong)iVar4 * 8);
              local_90 = CONCAT44(*(int *)(lVar7 + 4 + lVar15 * 8) - piVar1[1],
                                  *(int *)(lVar7 + lVar15 * 8) - *piVar1);
              local_a0 = FUN_144b57580(&local_90);
              uVar12 = uVar10;
              iVar9 = iVar4;
              uVar2 = local_a8;
              iVar3 = iVar5;
              if (local_a0 != 0) {
                goto LAB_144b5b113;
              }
            }
            iVar5 = iVar3;
            local_a8 = uVar2;
            iVar4 = iVar9;
            lVar11 = (longlong)local_98;
            iVar9 = local_98;
            if (iVar14 < local_84) {
              lVar11 = lVar15 + 1;
              iVar9 = iVar14 + 1;
            }
            iVar14 = iVar9;
            lVar7 = local_68;
            uVar10 = uVar12;
            lVar15 = lVar11;
          } while (iVar14 != iVar4);
        }
        local_98 = local_84 + 1;
        local_7c = local_7c + 1;
        local_60 = local_60 + 2;
      } while (local_7c < *param_1);
    }
  }
  return 0;
}



// FUNCTION 144b5b400 FUN_144b5b400 body=383 status=ok
// SIG undefined FUN_144b5b400(void)

undefined4 FUN_144b5b400(short *param_1)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  short *psVar13;
  longlong lVar14;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar9 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if ((param_1 == (short *)0x0) || (param_1[1] < 1)) {
    return 0;
  }
  FUN_144b488a0(0,&local_38);
  if ((uint)local_38 == (uint)uStack_30) {
    return 2;
  }
  if (local_38._4_4_ != uStack_30._4_4_) {
    lVar2 = *(longlong *)(param_1 + 4);
    lVar12 = (longlong)*param_1;
    uVar7 = ((uint)uStack_30 ^ (int)(uint)uStack_30 >> 0x1f) - ((int)(uint)uStack_30 >> 0x1f) |
            ((uint)local_38 ^ (int)(uint)local_38 >> 0x1f) - ((int)(uint)local_38 >> 0x1f);
    iVar5 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar3 = 0;
    if (0 < iVar5 + -0xe) {
      iVar3 = iVar5 + -0xe;
    }
    iVar5 = 0x1f;
    if (uStack_30._4_4_ - local_38._4_4_ != 0) {
      for (; (uint)(uStack_30._4_4_ - local_38._4_4_) >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar10 = 0;
    if (0 < iVar5 + -0xe) {
      iVar10 = iVar5 + -0xe;
    }
    iVar5 = 0;
    if (0 < lVar12) {
      psVar13 = *(short **)(param_1 + 0xc);
      do {
        sVar1 = *psVar13;
        lVar14 = (longlong)sVar1;
        lVar6 = (longlong)iVar5;
        iVar5 = *(int *)(lVar2 + lVar14 * 8) >> ((byte)iVar3 & 0x1f);
        iVar4 = *(int *)(lVar2 + 4 + lVar14 * 8) >> ((byte)iVar10 & 0x1f);
        for (; lVar6 <= lVar14; lVar6 = lVar6 + 1) {
          iVar11 = *(int *)(lVar2 + lVar6 * 8) >> ((byte)iVar3 & 0x1f);
          iVar8 = *(int *)(lVar2 + 4 + lVar6 * 8) >> ((byte)iVar10 & 0x1f);
          iVar9 = iVar9 + (iVar8 - iVar4) * (iVar11 + iVar5);
          iVar5 = iVar11;
          iVar4 = iVar8;
        }
        psVar13 = psVar13 + 1;
        iVar5 = sVar1 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (0 < iVar9) {
        return 1;
      }
      if (iVar9 < 0) {
        return 0;
      }
    }
    return 2;
  }
  return 2;
}



// FUNCTION 144b5b580 FUN_144b5b580 body=32 status=ok
// SIG undefined FUN_144b5b580(void)

void FUN_144b5b580(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x100) = param_2;
  *(undefined8 *)(param_1 + 0x108) = param_3;
  *(undefined4 *)(param_1 + 0x110) = param_4;
  *(undefined4 *)(param_1 + 0x114) = 0;
  return;
}



// FUNCTION 144b5b5a0 FUN_144b5b5a0 body=20 status=ok
// SIG undefined FUN_144b5b5a0(void)

void FUN_144b5b5a0(_JBTYPE *param_1,undefined4 param_2)

{
  *(undefined4 *)((longlong)param_1[0x11].Part + 4) = param_2;
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,1);
}



// FUNCTION 144b5b5c0 FUN_144b5b5c0 body=764 status=ok
// SIG undefined FUN_144b5b5c0(void)

void FUN_144b5b5c0(undefined8 param_1,longlong *param_2,uint param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  size_t sVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  int local_68 [2];
  byte local_60 [16];
  byte local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar12 = (ulonglong)param_3;
  if ((code *)param_2[4] == (code *)0x0) {
    if (*(uint *)(param_2 + 1) < param_3) goto LAB_144b5b633;
  }
  else {
    iVar8 = (*(code *)param_2[4])(param_2,uVar12,0,0);
    if (iVar8 != 0) goto LAB_144b5b633;
  }
  *(uint *)((longlong)param_2 + 0xc) = param_3;
  if (param_3 < *(uint *)(param_2 + 1)) {
    if ((code *)param_2[4] == (code *)0x0) {
      uVar9 = *(uint *)(param_2 + 1) - param_3;
      sVar13 = (size_t)uVar9;
      if (0x10 < uVar9) {
        sVar13 = 0x10;
      }
      uVar9 = (uint)sVar13;
      memcpy(local_60,(void *)(uVar12 + *param_2),sVar13);
    }
    else {
      uVar9 = (*(code *)param_2[4])(param_2,uVar12,local_60,0x10);
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar9 + param_3;
    if (((((-(uVar9 < 0x10) & 0x55U) == 0) && (local_60[0] < 0x80)) && (local_60[4] < 0x80)) &&
       ((local_60[8] < 0x80 && (local_60[0xc] < 0x80)))) {
      iVar8 = CONCAT31(CONCAT21(CONCAT11(local_60[0],local_60[1]),local_60[2]),local_60[3]);
      *param_5 = iVar8;
      iVar11 = CONCAT31(CONCAT21(CONCAT11(local_60[4],local_60[5]),local_60[6]),local_60[7]);
      iVar14 = CONCAT31(CONCAT21(CONCAT11(local_60[8],local_60[9]),local_60[10]),local_60[0xb]);
      iVar16 = CONCAT31(CONCAT21(CONCAT11(local_60[0xc],local_60[0xd]),local_60[0xe]),local_60[0xf])
      ;
      if (iVar11 != 0) {
        if (iVar8 < iVar11) {
          if (iVar11 - iVar14 < iVar8) goto LAB_144b5b633;
        }
        else if (iVar8 - iVar16 < iVar11) goto LAB_144b5b633;
        if (((iVar8 <= 0x7fffffff - iVar14) && (iVar11 <= 0x7fffffff - iVar16)) &&
           (((int)param_3 <= (0x7fffffff - iVar14) - iVar8 &&
            ((((int)param_3 <= (0x7fffffff - iVar16) - iVar11 &&
              (iVar8 + param_3 + iVar14 <= *(uint *)(param_2 + 1))) &&
             (param_3 + iVar16 + iVar11 <= *(uint *)(param_2 + 1))))))) {
          *param_5 = iVar8 + param_3;
          iVar8 = FUN_144b597a0(param_2,iVar11 + param_3);
          if (iVar8 == 0) {
            uVar9 = *(uint *)((longlong)param_2 + 0xc);
            local_50[0xf] = local_60[0xf] + '\x01';
            if (uVar9 < *(uint *)(param_2 + 1)) {
              if ((code *)param_2[4] == (code *)0x0) {
                uVar10 = *(uint *)(param_2 + 1) - uVar9;
                sVar13 = (size_t)uVar10;
                if (0x10 < uVar10) {
                  sVar13 = 0x10;
                }
                uVar10 = (uint)sVar13;
                memcpy(local_50,(void *)((ulonglong)uVar9 + *param_2),sVar13);
              }
              else {
                uVar10 = (*(code *)param_2[4])(param_2,(ulonglong)uVar9,local_50,0x10);
              }
              *(uint *)((longlong)param_2 + 0xc) = uVar10 + uVar9;
              if ((-(uVar10 < 0x10) & 0x55U) == 0) {
                lVar15 = 0;
                bVar4 = true;
                bVar6 = true;
                do {
                  pbVar1 = local_50 + lVar15;
                  pbVar2 = local_60 + lVar15;
                  lVar15 = lVar15 + 1;
                  bVar3 = false;
                  if (*pbVar1 == 0) {
                    bVar3 = bVar4;
                  }
                  bVar5 = false;
                  if (*pbVar1 == *pbVar2) {
                    bVar5 = bVar6;
                  }
                  bVar4 = bVar3;
                  bVar6 = bVar5;
                } while (lVar15 < 0x10);
                if ((bVar3) || (bVar5)) {
                  local_68[0] = FUN_144b597f0(param_2,8);
                  sVar7 = FUN_144b59d40(param_2,local_68);
                  if ((local_68[0] == 0) && (-1 < sVar7)) {
                    iVar8 = (int)sVar7 + iVar11 + param_3;
                    iVar11 = FUN_144b597a0(param_2,iVar8);
                    if (iVar11 == 0) {
                      *param_4 = iVar8;
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
LAB_144b5b633:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
}



// FUNCTION 144b5b8d0 FUN_144b5b8d0 body=1059 status=ok
// SIG undefined FUN_144b5b8d0(void)

ulonglong FUN_144b5b8d0(longlong *param_1,longlong *param_2,uint param_3,int param_4,int param_5,
                       char param_6,undefined8 *param_7,int *param_8)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  short sVar9;
  int *_Dst;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined2 *puVar14;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  undefined1 local_48 [16];
  undefined2 *_Base;
  
  lVar1 = *param_1;
  uVar7 = (ulonglong)param_3;
  if ((code *)param_2[4] == (code *)0x0) {
    if (*(uint *)(param_2 + 1) < param_3) {
      return 0x55;
    }
  }
  else {
    iVar3 = (*(code *)param_2[4])(param_2,uVar7,0,0);
    if (iVar3 != 0) {
      return 0x55;
    }
  }
  *(uint *)((longlong)param_2 + 0xc) = param_3;
  sVar9 = 0;
  if (*(uint *)(param_2 + 1) <= param_3 + 1) {
    return 0x55;
  }
  if ((code *)param_2[4] == (code *)0x0) {
    puVar8 = (undefined1 *)(uVar7 + *param_2);
    if (puVar8 == (undefined1 *)0x0) goto LAB_144b5b96a;
  }
  else {
    iVar3 = (*(code *)param_2[4])(param_2,uVar7,local_res8,2);
    if (iVar3 != 2) {
      return 0x55;
    }
    puVar8 = local_res8;
  }
  sVar9 = CONCAT11(*puVar8,puVar8[1]);
LAB_144b5b96a:
  *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 2;
  iVar3 = sVar9 + 1;
  if (iVar3 < 0xff0) {
    iVar10 = 0;
    if (0 < iVar3) {
      do {
        uVar11 = *(uint *)((longlong)param_2 + 0xc);
        iVar4 = 0;
        if (*(uint *)(param_2 + 1) <= uVar11 + 3) {
          return 0x55;
        }
        if ((code *)param_2[4] == (code *)0x0) {
          puVar8 = (undefined1 *)((ulonglong)uVar11 + *param_2);
          if (puVar8 != (undefined1 *)0x0) goto LAB_144b5ba05;
        }
        else {
          iVar4 = (*(code *)param_2[4])(param_2,uVar11,local_48,4);
          if (iVar4 != 4) {
            return 0x55;
          }
          puVar8 = local_48;
LAB_144b5ba05:
          iVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]);
        }
        *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 4;
        sVar9 = 0;
        uVar11 = *(uint *)((longlong)param_2 + 0xc);
        local_res10[0] = 0;
        if (*(uint *)(param_2 + 1) <= uVar11 + 1) {
          return 0x55;
        }
        if ((code *)param_2[4] == (code *)0x0) {
          puVar8 = (undefined1 *)((ulonglong)uVar11 + *param_2);
          if (puVar8 != (undefined1 *)0x0) goto LAB_144b5ba75;
        }
        else {
          iVar5 = (*(code *)param_2[4])(param_2,(ulonglong)uVar11,local_res8,2);
          if (iVar5 != 2) {
            return 0x55;
          }
          puVar8 = local_res8;
LAB_144b5ba75:
          sVar9 = CONCAT11(*puVar8,puVar8[1]);
        }
        *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 2;
        FUN_144b59d40(param_2,local_res10);
        if (local_res10[0] != 0) {
          return (ulonglong)local_res10[0];
        }
        if (iVar4 == param_5) {
          *param_8 = (int)sVar9 + 1;
          if (0xaa6 < (uint)(int)sVar9) {
            return 8;
          }
          uVar7 = FUN_144b597a0(param_2);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          iVar3 = *param_8;
          _Base = (undefined2 *)0x0;
          puVar14 = (undefined2 *)0x0;
          if (iVar3 < 0) {
            uVar11 = 6;
LAB_144b5bb47:
            _Base = puVar14;
            local_res10[0] = uVar11;
            if (uVar11 != 0) goto LAB_144b5bcb6;
          }
          else {
            if (iVar3 != 0) {
              if (iVar3 < 0x10000000) {
                puVar14 = (undefined2 *)(**(code **)(lVar1 + 8))(lVar1);
                if (puVar14 == (undefined2 *)0x0) {
                  uVar11 = 0x40;
                }
                else {
                  uVar11 = 0;
                  if (0 < iVar3) {
                    memset(puVar14,0,(longlong)(iVar3 * 8));
                    uVar11 = 0;
                  }
                }
                goto LAB_144b5bb47;
              }
              uVar11 = 10;
              goto LAB_144b5bcb6;
            }
            local_res10[0] = 0;
          }
          iVar3 = 0;
          puVar14 = _Base;
          if (0 < *param_8) goto LAB_144b5bb61;
          goto LAB_144b5bbe8;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar3);
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 8;
  }
  return uVar7;
  while( true ) {
    iVar3 = iVar3 + 1;
    *(uint *)(puVar14 + 2) = uVar6 & 0xffffff;
    puVar14 = puVar14 + 4;
    if (*param_8 <= iVar3) break;
LAB_144b5bb61:
    uVar2 = FUN_144b59d40(param_2,local_res10);
    *puVar14 = uVar2;
    uVar11 = local_res10[0];
    if ((((local_res10[0] != 0) ||
         (local_res10[0] = FUN_144b597f0(param_2,2), uVar11 = local_res10[0], local_res10[0] != 0))
        || (uVar6 = FUN_144b59e60(param_2,local_res10), uVar11 = local_res10[0], local_res10[0] != 0
           )) || (local_res10[0] = FUN_144b597f0(param_2), uVar11 = local_res10[0],
                 local_res10[0] != 0)) goto LAB_144b5bca6;
    if ((int)uVar6 < 0) {
      uVar11 = 8;
      goto LAB_144b5bca6;
    }
  }
LAB_144b5bbe8:
  if (param_6 != '\0') {
    qsort(_Base,(longlong)*param_8,8,(_PtFuncCompare *)&LAB_144b5e4d0);
  }
  iVar3 = *param_8;
  _Dst = (int *)0x0;
  if (iVar3 < 0) {
    uVar11 = 6;
LAB_144b5bc65:
    if (uVar11 != 0) goto LAB_144b5bca6;
  }
  else {
    _Dst = (int *)0x0;
    if (iVar3 != 0) {
      if (0x1fffffff < iVar3) {
        uVar11 = 10;
        goto LAB_144b5bca6;
      }
      _Dst = (int *)(**(code **)(lVar1 + 8))(lVar1);
      if (_Dst == (int *)0x0) {
        uVar11 = 0x40;
      }
      else {
        uVar11 = 0;
        if (0 < iVar3) {
          memset(_Dst,0,(longlong)(iVar3 * 4));
          uVar11 = 0;
        }
      }
      goto LAB_144b5bc65;
    }
  }
  iVar3 = 0;
  if (0 < *param_8) {
    piVar13 = (int *)(_Base + 2);
    piVar12 = _Dst;
    do {
      iVar10 = *piVar13;
      piVar13 = piVar13 + 2;
      iVar3 = iVar3 + 1;
      *piVar12 = iVar10 + param_4;
      piVar12 = piVar12 + 1;
    } while (iVar3 < *param_8);
  }
  uVar11 = 0;
  *param_7 = _Dst;
LAB_144b5bca6:
  if (_Base != (undefined2 *)0x0) {
    (**(code **)(lVar1 + 0x10))(lVar1,_Base);
  }
LAB_144b5bcb6:
  return (ulonglong)uVar11;
}



// FUNCTION 144b5bd00 FUN_144b5bd00 body=1244 status=ok
// SIG undefined FUN_144b5bd00(void)

ulonglong FUN_144b5bd00(longlong *param_1,uint *param_2,int param_3,undefined8 *param_4,char param_5
                       )

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char cVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar17;
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  longlong *local_40;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  puVar7 = (undefined8 *)0x0;
  local_48 = 0;
  local_58 = 0;
  puVar10 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  if (((param_4 == (undefined8 *)0x0) && (-1 < param_3)) || (param_2 == (uint *)0x0)) {
    return 6;
  }
  if (((*param_2 & 2) == 0) || (*(longlong *)(param_2 + 8) == 0)) {
    cVar14 = '\0';
  }
  else {
    cVar14 = '\x01';
  }
  uVar3 = FUN_144b595e0(param_1,param_2,&local_58);
  uVar12 = (ulonglong)uVar3;
  puVar2 = puVar7;
  lVar11 = local_58;
  if (uVar3 == 0) {
    lVar16 = *param_1;
    local_48 = lVar16;
    if (((*param_2 & 8) != 0) &&
       (puVar15 = *(undefined8 **)(param_2 + 10), puVar15 != (undefined8 *)0x0)) {
      puVar7 = puVar15;
      if ((*(byte *)*puVar15 & 1) == 0) {
        uVar12 = 0x20;
        FUN_144b59710(local_58,cVar14);
        goto LAB_144b5c1a9;
      }
      uVar3 = 0;
      uVar8 = 0;
      if ((*param_2 & 0x10) != 0) {
        uVar3 = param_2[0xc];
        uVar8 = *(undefined8 *)(param_2 + 0xe);
      }
      uVar3 = FUN_144b5ca70(puVar15,&local_58,cVar14,param_3,CONCAT44(uVar17,uVar3),uVar8,&local_50)
      ;
      puVar10 = local_50;
      uVar12 = (ulonglong)uVar3;
      if (uVar3 != 0) {
        FUN_144b59710(local_58,cVar14);
        goto LAB_144b5c1a9;
      }
LAB_144b5bf6e:
      uVar9 = 0;
      plVar6 = (longlong *)(**(code **)(lVar16 + 8))(lVar16,0x18);
      puVar10 = local_50;
      if (plVar6 == (longlong *)0x0) {
        uVar12 = 0x40;
      }
      else {
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
        uVar12 = uVar9;
      }
      if ((int)uVar12 == 0) {
        plVar6[2] = (longlong)local_50;
        lVar11 = local_50[0x12];
        if ((undefined8 *)(lVar11 + 0x20) != (undefined8 *)0x0) {
          lVar1 = *(longlong *)(lVar11 + 0x28);
          plVar6[1] = 0;
          *plVar6 = lVar1;
          if (lVar1 == 0) {
            *(undefined8 *)(lVar11 + 0x20) = plVar6;
          }
          else {
            *(longlong **)(lVar1 + 8) = plVar6;
          }
          *(longlong **)(lVar11 + 0x28) = plVar6;
        }
        if (param_3 < 0) {
LAB_144b5c00f:
          if ((*(byte *)(puVar10 + 1) & 1) != 0) {
            if (*(short *)((longlong)puVar10 + 0x6e) < 0) {
              *(short *)((longlong)puVar10 + 0x6e) = -*(short *)((longlong)puVar10 + 0x6e);
            }
            if ((*(byte *)(puVar10 + 1) & 0x20) == 0) {
              *(undefined2 *)((longlong)puVar10 + 0x72) = *(undefined2 *)((longlong)puVar10 + 0x6e);
            }
          }
          if (((*(byte *)(puVar10 + 1) & 2) != 0) && (uVar13 = uVar9, 0 < *(int *)(puVar10 + 5))) {
            do {
              lVar11 = puVar10[6];
              if (*(short *)(uVar13 + lVar11) < 0) {
                *(short *)(uVar13 + lVar11) = -*(short *)(uVar13 + lVar11);
              }
              iVar5 = *(int *)(uVar13 + 8 + lVar11);
              if (iVar5 < 0) {
                *(int *)(uVar13 + 8 + lVar11) = -iVar5;
              }
              iVar5 = *(int *)(uVar13 + 0xc + lVar11);
              if (iVar5 < 0) {
                *(int *)(uVar13 + 0xc + lVar11) = -iVar5;
              }
              if (((*(short *)(uVar13 + lVar11) < 0) || (*(int *)(uVar13 + 8 + lVar11) < 0)) ||
                 (*(int *)(uVar13 + 0xc + lVar11) < 0)) {
                *(undefined8 *)(uVar13 + lVar11) = 0;
                *(undefined8 *)(uVar13 + 8 + lVar11) = 0;
              }
              uVar3 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar3;
              uVar13 = uVar13 + 0x10;
            } while ((int)uVar3 < *(int *)(puVar10 + 5));
          }
          puVar7 = (undefined8 *)puVar10[0x1a];
          *puVar7 = 0x10000;
          *(undefined4 *)(puVar7 + 1) = 0;
          *(undefined8 *)((longlong)puVar7 + 0xc) = 0x10000;
          *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
          *(undefined4 *)(puVar7 + 0xc) = 1;
          *(undefined1 *)(puVar7 + 0xb) = 0xff;
          if (param_4 != (undefined8 *)0x0) {
            *param_4 = puVar10;
            return uVar12;
          }
          goto LAB_144b5c0f6;
        }
        uVar3 = FUN_144b57bd0(local_50,0);
        uVar12 = (ulonglong)uVar3;
        if (uVar3 == 0) {
          uVar3 = FUN_144b55e20(puVar10,&local_40);
          uVar12 = (ulonglong)uVar3;
          if (uVar3 == 0) {
            puVar10[0x10] = local_40;
            goto LAB_144b5c00f;
          }
        }
      }
      puVar7 = puVar15;
      if (plVar6 != (longlong *)0x0) {
LAB_144b5c0f6:
        FUN_144b54b00(puVar10);
        return uVar12;
      }
      goto LAB_144b5c1a9;
    }
    plVar6 = param_1 + 3;
    uVar12 = 0xb;
    local_40 = plVar6 + *(uint *)((longlong)param_1 + 0x14);
    if (plVar6 < local_40) {
      do {
        puVar15 = (undefined8 *)*plVar6;
        if ((*(byte *)*puVar15 & 1) != 0) {
          uVar3 = 0;
          uVar8 = 0;
          if ((*param_2 & 0x10) != 0) {
            uVar3 = param_2[0xc];
            uVar8 = *(undefined8 *)(param_2 + 0xe);
          }
          uVar4 = FUN_144b5ca70(puVar15,&local_58,cVar14,param_3,uVar3,uVar8,&local_50);
          lVar11 = local_58;
          uVar12 = (ulonglong)uVar4;
          lVar16 = local_48;
          if (uVar4 == 0) goto LAB_144b5bf6e;
          puVar7 = puVar15;
          if (((param_5 != '\0') &&
              (iVar5 = strcmp(*(char **)(*(longlong *)*plVar6 + 8),"truetype"), iVar5 == 0)) &&
             ((char)uVar4 == -0x72)) {
            uVar4 = FUN_144b597a0(lVar11,0);
            uVar12 = (ulonglong)uVar4;
            puVar2 = local_50;
            if (uVar4 != 0) break;
            uVar3 = FUN_144b5a2c0(param_1,lVar11,param_3,uVar3,uVar8,param_4);
            uVar12 = (ulonglong)uVar3;
            if (uVar3 == 0) {
              FUN_144b59710(lVar11,cVar14);
              return 0;
            }
          }
          puVar2 = local_50;
          if ((char)uVar12 != '\x02') break;
        }
        plVar6 = plVar6 + 1;
        puVar2 = local_50;
      } while (plVar6 < local_40);
    }
  }
  puVar10 = puVar2;
  uVar4 = (uint)uVar12;
  uVar3 = uVar4 & 0xff;
  if (((uVar3 == 0x51) || (uVar3 == 2)) || (uVar3 == 0x55)) {
    if ((param_5 != '\0') &&
       (uVar4 = FUN_144b5dc50(param_1,lVar11,param_3,param_4,param_2), uVar4 == 0)) {
      if (lVar11 != 0) {
        lVar16 = *(longlong *)(lVar11 + 0x30);
        if (*(code **)(lVar11 + 0x28) != (code *)0x0) {
          (**(code **)(lVar11 + 0x28))(lVar11);
        }
        if (cVar14 == '\0') {
          (**(code **)(lVar16 + 0x10))(lVar16,lVar11);
        }
      }
      return 0;
    }
    uVar12 = (ulonglong)uVar4;
    if ((char)uVar4 == '\x02') {
      uVar12 = 2;
    }
  }
  lVar16 = local_48;
  if (lVar11 != 0) {
    lVar1 = *(longlong *)(lVar11 + 0x30);
    if (*(code **)(lVar11 + 0x28) != (code *)0x0) {
      (**(code **)(lVar11 + 0x28))(lVar11);
    }
    lVar16 = local_48;
    if (cVar14 == '\0') {
      (**(code **)(lVar1 + 0x10))(lVar1,lVar11);
      lVar16 = local_48;
    }
  }
LAB_144b5c1a9:
  if (puVar10 != (undefined8 *)0x0) {
    FUN_144b5c690(lVar16,puVar10,puVar7);
  }
  return uVar12;
}



// FUNCTION 144b5c1e0 FUN_144b5c1e0 body=189 status=ok
// SIG undefined FUN_144b5c1e0(void)

ulonglong FUN_144b5c1e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar6 = 0;
  puVar1 = *(undefined8 **)(param_1[1] + 0x90);
  lVar2 = puVar1[2];
  lVar3 = puVar1[3];
  *param_1 = puVar1[1];
  puVar4 = (undefined8 *)(**(code **)(lVar2 + 8))(lVar2,0x38);
  if (puVar4 == (undefined8 *)0x0) {
    uVar6 = 0x40;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
  }
  if (uVar6 == 0) {
    param_1[0x1e] = puVar4;
    if ((*(uint *)*puVar1 & 0x200) == 0) {
      uVar6 = FUN_144b56460(lVar2);
    }
    if ((uVar6 == 0) && (*(code **)(lVar3 + 0x68) != (code *)0x0)) {
      uVar5 = (**(code **)(lVar3 + 0x68))(param_1);
      return uVar5;
    }
  }
  return (ulonglong)uVar6;
}



// FUNCTION 144b5c2a0 FUN_144b5c2a0 body=205 status=ok
// SIG undefined FUN_144b5c2a0(void)

void FUN_144b5c2a0(longlong param_1)

{
  uint *puVar1;
  
  if ((*(longlong *)(param_1 + 0xf0) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 144b5c370 FUN_144b5c370 body=244 status=ok
// SIG undefined FUN_144b5c370(void)

void FUN_144b5c370(longlong param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x90);
  lVar3 = puVar2[2];
  if (*(code **)(puVar2[3] + 0x70) != (code *)0x0) {
    (**(code **)(puVar2[3] + 0x70))();
  }
  if ((*(longlong *)(param_1 + 0xf0) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    if ((*(uint *)*puVar2 & 0x200) == 0) {
      plVar5 = (longlong *)**(longlong **)(param_1 + 0xf0);
      if (plVar5 != (longlong *)0x0) {
        lVar4 = *plVar5;
        FUN_144b56570(plVar5);
        (**(code **)(lVar4 + 0x10))(lVar4,plVar5);
      }
      **(undefined8 **)(param_1 + 0xf0) = 0;
    }
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3);
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 144b5c470 FUN_144b5c470 body=176 status=ok
// SIG undefined FUN_144b5c470(void)

void FUN_144b5c470(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (param_2 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xffffffc0;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffffc0;
    uVar4 = uVar2 & 0xffffffc0;
    *(uint *)(param_1 + 0x38) = uVar4;
    uVar3 = iVar1 + 0x3fU & 0xffffffc0;
    *(uint *)(param_1 + 0x3c) = uVar3;
    *(uint *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) + 0x3f + uVar2 & 0xffffffc0) - uVar4;
    *(uint *)(param_1 + 0x34) = uVar3 - (iVar1 - *(int *)(param_1 + 0x34) & 0xffffffc0U);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x44);
    uVar3 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffffc0;
    *(uint *)(param_1 + 0x3c) = iVar1 + 0x3fU & 0xffffffc0;
    uVar5 = uVar2 & 0xffffffc0;
    *(uint *)(param_1 + 0x44) = uVar5;
    uVar4 = uVar3 & 0xffffffc0;
    *(uint *)(param_1 + 0x30) = (uVar2 + 0x3f + *(int *)(param_1 + 0x30) & 0xffffffc0) - uVar5;
    *(uint *)(param_1 + 0x48) = uVar4;
    *(uint *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) + 0x3f + uVar3 & 0xffffffc0) - uVar4;
  }
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x20U & 0xffffffc0;
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x20U & 0xffffffc0;
  return;
}



// FUNCTION 144b5c520 FUN_144b5c520 body=107 status=ok
// SIG undefined FUN_144b5c520(void)

void FUN_144b5c520(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  pcVar1 = *(code **)(*(longlong *)(param_3 + 0x18) + 0x60);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2);
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x000144b5c588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_1,param_2);
  return;
}



// FUNCTION 144b5c590 FUN_144b5c590 body=61 status=ok
// SIG undefined FUN_144b5c590(void)

void FUN_144b5c590(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x98);
  if (*(code **)(param_1[2] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[2] + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000144b5c5ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  return;
}



// FUNCTION 144b5c5d0 FUN_144b5c5d0 body=186 status=ok
// SIG undefined FUN_144b5c5d0(void)

void FUN_144b5c5d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar4 = 0;
    uVar5 = uVar4;
    if (0 < *(int *)(param_1 + 0x38)) {
      do {
        plVar1 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0x40));
        lVar2 = *(longlong *)(*plVar1 + 0x98);
        if (*(code **)(plVar1[2] + 0x10) != (code *)0x0) {
          (**(code **)(plVar1[2] + 0x10))(plVar1);
        }
        (**(code **)(lVar2 + 0x10))(lVar2,plVar1);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        *(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0x40)) = 0;
        uVar5 = uVar5 + 8;
      } while ((int)uVar3 < *(int *)(param_1 + 0x38));
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 144b5c690 FUN_144b5c690 body=508 status=ok
// SIG undefined FUN_144b5c690(void)

void FUN_144b5c690(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar3 = *(longlong *)(param_3 + 0x18);
  if (*(code **)(param_2 + 0xc0) != (code *)0x0) {
    (**(code **)(param_2 + 0xc0))(*(undefined8 *)(param_2 + 0xb8));
  }
  lVar4 = *(longlong *)(param_2 + 0x78);
  do {
    if (lVar4 == 0) {
      plVar1 = (longlong *)(param_2 + 0xa8);
      if ((plVar1 != (longlong *)0x0) && (param_1 != 0)) {
        lVar4 = *plVar1;
        while (lVar4 != 0) {
          lVar5 = *(longlong *)(lVar4 + 0x10);
          lVar6 = *(longlong *)(lVar4 + 8);
          if (*(code **)(lVar5 + 0x10) != (code *)0x0) {
            (**(code **)(lVar5 + 0x10))(lVar5);
          }
          pcVar7 = *(code **)(*(longlong *)(param_3 + 0x18) + 0x60);
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(lVar5);
          }
          if (*(longlong *)(lVar5 + 0x38) != 0) {
            (**(code **)(param_1 + 0x10))(param_1);
          }
          *(undefined8 *)(lVar5 + 0x38) = 0;
          (**(code **)(param_1 + 0x10))(param_1,lVar5);
          (**(code **)(param_1 + 0x10))(param_1,lVar4);
          lVar4 = lVar6;
        }
        *plVar1 = 0;
        *(undefined8 *)(param_2 + 0xb0) = 0;
      }
      *(undefined8 *)(param_2 + 0x80) = 0;
      if (*(code **)(param_2 + 0x50) != (code *)0x0) {
        (**(code **)(param_2 + 0x50))(param_2);
      }
      FUN_144b5c5d0(param_2,param_1);
      pcVar7 = *(code **)(lVar3 + 0x50);
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(param_2);
      }
      lVar3 = *(longlong *)(param_2 + 0xa0);
      uVar2 = *(uint *)(param_2 + 8);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x30);
        if (*(code **)(lVar3 + 0x28) != (code *)0x0) {
          (**(code **)(lVar3 + 0x28))(lVar3);
        }
        if ((uVar2 >> 10 & 1) == 0) {
          (**(code **)(lVar4 + 0x10))(lVar4,lVar3);
        }
      }
      *(undefined8 *)(param_2 + 0xa0) = 0;
      if (*(longlong *)(param_2 + 0xd0) != 0) {
        (**(code **)(param_1 + 0x10))(param_1);
        *(undefined8 *)(param_2 + 0xd0) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000144b5c889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x10))(param_1,param_2);
      return;
    }
    lVar4 = *(longlong *)(param_2 + 0x78);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x90) + 0x10);
      lVar10 = *(longlong *)(lVar5 + 0x78);
      lVar9 = 0;
      while (lVar8 = lVar10, lVar8 != 0) {
        if (lVar8 == lVar4) {
          if (lVar9 == 0) {
            *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar8 + 0x10);
          }
          else {
            *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
          }
          if (*(code **)(lVar4 + 0x28) != (code *)0x0) {
            (**(code **)(lVar4 + 0x28))(lVar4);
          }
          FUN_144b5c370(lVar4);
          (**(code **)(lVar6 + 0x10))(lVar6);
          break;
        }
        lVar9 = lVar8;
        lVar10 = *(longlong *)(lVar8 + 0x10);
      }
    }
    lVar4 = *(longlong *)(param_2 + 0x78);
  } while( true );
}



// FUNCTION 144b5c890 FUN_144b5c890 body=136 status=ok
// SIG undefined FUN_144b5c890(void)

void FUN_144b5c890(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x20);
  if ((plVar1 != (longlong *)0x0) && (lVar2 != 0)) {
    lVar4 = *plVar1;
    while (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar4 + 8);
      FUN_144b5c690(lVar2,*(undefined8 *)(lVar4 + 0x10),param_1);
      (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
      lVar4 = lVar3;
    }
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 144b5c920 FUN_144b5c920 body=143 status=ok
// SIG undefined FUN_144b5c920(void)

undefined8 FUN_144b5c920(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if ((plVar1 != (longlong *)0x0) &&
     (plVar4 = plVar1 + (longlong)*(int *)(param_1 + 0x38) + -1, plVar3 = plVar4, plVar1 <= plVar4))
  {
    do {
      lVar2 = *plVar3;
      if ((*(int *)(lVar2 + 8) == 0x756e6963) &&
         (((*(short *)(lVar2 + 0xc) == 3 && (*(short *)(lVar2 + 0xe) == 10)) ||
          ((*(short *)(lVar2 + 0xc) == 0 && (*(short *)(lVar2 + 0xe) == 4)))))) {
        *(longlong *)(param_1 + 0x88) = lVar2;
        return 0;
      }
      plVar3 = plVar3 + -1;
    } while (plVar1 <= plVar3);
    for (; plVar1 <= plVar4; plVar4 = plVar4 + -1) {
      if (*(int *)(*plVar4 + 8) == 0x756e6963) {
        *(longlong *)(param_1 + 0x88) = *plVar4;
        return 0;
      }
    }
  }
  return 0x26;
}



// FUNCTION 144b5c9b0 FUN_144b5c9b0 body=179 status=ok
// SIG undefined FUN_144b5c9b0(void)

longlong FUN_144b5c9b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [4];
  int local_resc;
  
  plVar7 = *(longlong **)(param_1 + 0x40);
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
  plVar1 = plVar7 + *(int *)(param_1 + 0x38);
  do {
    if (plVar1 <= plVar7) {
      return 0;
    }
    plVar2 = (longlong *)*plVar7;
    if ((((*(short *)((longlong)plVar2 + 0xc) == 0) && (*(short *)((longlong)plVar2 + 0xe) == 5)) &&
        (plVar2 != (longlong *)0x0)) && (*plVar2 != 0)) {
      plVar3 = *(longlong **)(*plVar2 + 0x90);
      pcVar4 = *(code **)(*plVar3 + 0x30);
      if (((pcVar4 != (code *)0x0) &&
          (puVar6 = (undefined8 *)(*pcVar4)(plVar3,"tt-cmaps"), puVar6 != (undefined8 *)0x0)) &&
         ((iVar5 = (*(code *)*puVar6)(plVar2,local_res8), iVar5 == 0 && (local_resc == 0xe)))) {
        return *plVar7;
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 144b5ca70 FUN_144b5ca70 body=478 status=ok
// SIG undefined FUN_144b5ca70(void)

int FUN_144b5ca70(longlong param_1,undefined8 *param_2,char param_3,undefined4 param_4,int param_5,
                 int *param_6,undefined8 *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  void *_Dst_00;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  _Dst_00 = (void *)0x0;
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar6 = 0;
  iVar1 = *(int *)(lVar2 + 0x38);
  if (iVar1 < 1) {
    _Dst = (void *)0x0;
    if (iVar1 < 0) {
      iVar6 = 6;
      _Dst = (void *)0x0;
    }
  }
  else {
    _Dst = (void *)(**(code **)(lVar3 + 8))(lVar3);
    if (_Dst == (void *)0x0) {
      iVar6 = 0x40;
    }
    else {
      memset(_Dst,0,(longlong)iVar1);
    }
  }
  if (iVar6 == 0) {
    *(longlong *)((longlong)_Dst + 0x90) = param_1;
    *(longlong *)((longlong)_Dst + 0x98) = lVar3;
    *(undefined8 *)((longlong)_Dst + 0xa0) = *param_2;
    if (param_3 != '\0') {
      *(uint *)((longlong)_Dst + 8) = *(uint *)((longlong)_Dst + 8) | 0x400;
    }
    iVar6 = 0;
    _Dst_00 = (void *)(**(code **)(lVar3 + 8))(lVar3);
    if (_Dst_00 == (void *)0x0) {
      iVar6 = 0x40;
    }
    else {
      memset(_Dst_00,0,0x68);
    }
    if (iVar6 == 0) {
      lVar5 = 0;
      *(void **)((longlong)_Dst + 0xd0) = _Dst_00;
      *(undefined8 *)((longlong)_Dst_00 + 0x50) = 0;
      piVar4 = param_6;
      if (0 < param_5) {
        do {
          if (*(longlong *)(*(longlong *)((longlong)_Dst + 0xd0) + 0x50) != 0) break;
          if (*piVar4 == 0x696e6372) {
            *(undefined8 *)(*(longlong *)((longlong)_Dst + 0xd0) + 0x50) =
                 *(undefined8 *)(piVar4 + 2);
          }
          lVar5 = lVar5 + 1;
          piVar4 = piVar4 + 4;
        } while (lVar5 < param_5);
      }
      *(undefined4 *)(*(longlong *)((longlong)_Dst + 0xd0) + 0x5c) = 0xffffffff;
      if (*(code **)(lVar2 + 0x48) != (code *)0x0) {
        iVar6 = (**(code **)(lVar2 + 0x48))(*param_2,_Dst,param_4,(longlong)param_5,param_6);
      }
      *param_2 = *(undefined8 *)((longlong)_Dst + 0xa0);
      if ((iVar6 == 0) && ((iVar6 = FUN_144b5c920(_Dst), iVar6 == 0 || ((char)iVar6 == '&')))) {
        *param_7 = _Dst;
        return 0;
      }
    }
  }
  FUN_144b5c5d0(_Dst,lVar3);
  if (*(code **)(lVar2 + 0x50) != (code *)0x0) {
    (**(code **)(lVar2 + 0x50))(_Dst);
  }
  if (_Dst_00 != (void *)0x0) {
    (**(code **)(lVar3 + 0x10))(lVar3,_Dst_00);
  }
  if (_Dst != (void *)0x0) {
    (**(code **)(lVar3 + 0x10))(lVar3,_Dst);
  }
  *param_7 = 0;
  return iVar6;
}



// FUNCTION 144b5cc50 FUN_144b5cc50 body=45 status=ok
// SIG undefined FUN_144b5cc50(void)

void FUN_144b5cc50(longlong *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(param_1[6] + 0x10))(param_1[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 144b5cc80 FUN_144b5cc80 body=748 status=ok
// SIG undefined FUN_144b5cc80(void)

int FUN_144b5cc80(longlong *param_1,int param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_res8 [2];
  int local_res18;
  uint local_res20;
  undefined1 local_48 [16];
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  iVar1 = 0;
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar6 + 3) {
    return 0x55;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    piVar3 = (int *)((ulonglong)uVar6 + *param_1);
    if (piVar3 != (int *)0x0) goto LAB_144b5cceb;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar6,local_res8,4);
    if (iVar1 != 4) {
      return 0x55;
    }
    piVar3 = local_res8;
LAB_144b5cceb:
    iVar1 = CONCAT31(CONCAT21(CONCAT11((char)*piVar3,*(undefined1 *)((longlong)piVar3 + 1)),
                              *(undefined1 *)((longlong)piVar3 + 2)),
                     *(undefined1 *)((longlong)piVar3 + 3));
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 4;
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  if (iVar1 != 0x74797031) {
    return 2;
  }
  if (*(uint *)(param_1 + 1) <= uVar6 + 1) {
    return 0x55;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    local_res20 = 0;
    piVar3 = (int *)((ulonglong)uVar6 + *param_1);
    if (piVar3 != (int *)0x0) goto LAB_144b5cd6f;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar6,local_res8,2);
    if (iVar1 != 2) {
      return 0x55;
    }
    piVar3 = local_res8;
LAB_144b5cd6f:
    local_res20 = (uint)CONCAT11((char)*piVar3,*(undefined1 *)((longlong)piVar3 + 1));
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 2;
  uVar6 = *(int *)((longlong)param_1 + 0xc) + 6;
  if ((code *)param_1[4] == (code *)0x0) {
    if (uVar6 <= *(uint *)(param_1 + 1)) goto LAB_144b5cdba;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,uVar6,0,0);
    if (iVar1 == 0) {
LAB_144b5cdba:
      iVar1 = -1;
      *(uint *)((longlong)param_1 + 0xc) = uVar6;
      *param_5 = 0;
      local_res18 = 0;
      if (local_res20 != 0) {
        do {
          uVar6 = *(uint *)((longlong)param_1 + 0xc);
          iVar5 = 0;
          if (*(uint *)(param_1 + 1) <= uVar6 + 3) {
            return 0x55;
          }
          if ((code *)param_1[4] == (code *)0x0) {
            puVar4 = (undefined1 *)((ulonglong)uVar6 + *param_1);
            if (puVar4 != (undefined1 *)0x0) goto LAB_144b5ce1f;
          }
          else {
            iVar5 = (*(code *)param_1[4])(param_1,uVar6,local_48,4);
            if (iVar5 != 4) {
              return 0x55;
            }
            puVar4 = local_48;
LAB_144b5ce1f:
            iVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]);
          }
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 4;
          iVar7 = 0;
          uVar6 = *(int *)((longlong)param_1 + 0xc) + 4;
          if ((code *)param_1[4] == (code *)0x0) {
            if (uVar6 <= *(uint *)(param_1 + 1)) goto LAB_144b5ce76;
            iVar7 = 0x55;
          }
          else {
            iVar2 = (*(code *)param_1[4])(param_1,uVar6,0,0);
            if (iVar2 == 0) {
LAB_144b5ce76:
              *(uint *)((longlong)param_1 + 0xc) = uVar6;
            }
            else {
              iVar7 = 0x55;
            }
          }
          if (iVar7 != 0) {
            return iVar7;
          }
          local_res8[0] = iVar7;
          iVar7 = FUN_144b59e60(param_1,local_res8);
          *param_3 = iVar7;
          if (local_res8[0] != 0) {
            return local_res8[0];
          }
          iVar7 = FUN_144b59e60(param_1,local_res8);
          *param_4 = iVar7;
          if (local_res8[0] != 0) {
            return local_res8[0];
          }
          if (iVar5 == 0x43494420) {
            *param_3 = *param_3 + 0x16;
            *param_4 = *param_4 + -0x16;
            *param_5 = 1;
joined_r0x000144b5cee0:
            iVar1 = iVar1 + 1;
            if (param_2 < 0) {
              return 0;
            }
LAB_144b5cf27:
            if (iVar1 == param_2) {
              return 0;
            }
          }
          else {
            if (iVar5 == 0x54595031) {
              *param_3 = *param_3 + 0x18;
              *param_4 = *param_4 + -0x18;
              *param_5 = 0;
              goto joined_r0x000144b5cee0;
            }
            if (-1 < param_2) goto LAB_144b5cf27;
          }
          local_res18 = local_res18 + 1;
        } while (local_res18 < (int)local_res20);
      }
      return 0x8e;
    }
  }
  return 0x55;
}



// FUNCTION 144b5cf70 FUN_144b5cf70 body=1269 status=ok
// SIG undefined FUN_144b5cf70(void)

undefined4 *
FUN_144b5cf70(longlong *param_1,longlong *param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *_Dst;
  byte *pbVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  uint local_68;
  uint local_64;
  undefined1 local_60 [4];
  uint local_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  local_50 = *param_1;
  iVar1 = 0;
  if (param_5 != -1) {
    iVar1 = param_5;
  }
  if (iVar1 != 0) {
    return (undefined4 *)&DAT_00000001;
  }
  uVar5 = 0;
  lVar11 = 0;
  lVar17 = (longlong)param_4;
  local_48 = lVar17;
  if (0 < param_4) {
    do {
      puVar8 = (undefined4 *)0x0;
      uVar10 = *(uint *)(param_3 + lVar11 * 4);
      if ((code *)param_2[4] == (code *)0x0) {
        if (uVar10 <= *(uint *)(param_2 + 1)) goto LAB_144b5d023;
        puVar8 = (undefined4 *)&DAT_00000055;
      }
      else {
        iVar1 = (*(code *)param_2[4])(param_2,uVar10,0,0);
        if (iVar1 == 0) {
LAB_144b5d023:
          *(uint *)((longlong)param_2 + 0xc) = uVar10;
        }
        else {
          puVar8 = (undefined4 *)&DAT_00000055;
        }
      }
      if ((int)puVar8 != 0) {
        return puVar8;
      }
      uVar10 = *(uint *)((longlong)param_2 + 0xc);
      uVar13 = 0;
      if (*(uint *)(param_2 + 1) <= uVar10 + 3) {
LAB_144b5d0dc:
        return (undefined4 *)&DAT_00000055;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        puVar8 = (undefined4 *)((ulonglong)uVar10 + *param_2);
        if (puVar8 != (undefined4 *)0x0) goto LAB_144b5d074;
      }
      else {
        iVar1 = (*(code *)param_2[4])(param_2,uVar10,&param_5);
        if (iVar1 != 4) goto LAB_144b5d0dc;
        puVar8 = &param_5;
LAB_144b5d074:
        uVar13 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)puVar8,
                                            *(undefined1 *)((longlong)puVar8 + 1)),
                                   *(undefined1 *)((longlong)puVar8 + 2)),
                          *(undefined1 *)((longlong)puVar8 + 3));
      }
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 4;
      if ((0xffffff < uVar13) || (0xffffff - uVar13 < uVar5 + 6)) {
        return (undefined4 *)&DAT_00000009;
      }
      lVar11 = lVar11 + 1;
      uVar5 = uVar5 + 6 + uVar13;
    } while (lVar11 < lVar17);
  }
  puVar8 = (undefined4 *)0x0;
  uVar10 = uVar5 + 2;
  local_5c = uVar10;
  if (uVar10 < 6) {
    puVar8 = (undefined4 *)&DAT_0000000a;
  }
  else {
    uVar12 = 6;
    uVar13 = 6;
    if ((int)uVar10 < 1) {
      _Dst = puVar8;
      if ((int)uVar10 < 0) {
        puVar8 = (undefined4 *)&DAT_00000006;
        _Dst = (undefined4 *)0x0;
      }
    }
    else {
      _Dst = (undefined4 *)(**(code **)(local_50 + 8))(local_50);
      if (_Dst == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_00000040;
      }
      else {
        memset(_Dst,0,(longlong)(int)uVar10);
      }
    }
    uVar7 = 0;
    iVar1 = 0;
    if ((int)puVar8 == 0) {
      *(short *)(_Dst + 1) = (short)puVar8;
      puVar8 = (undefined4 *)&DAT_00000001;
      local_64 = 1;
      uVar15 = 2;
      *_Dst = 0x180;
      local_68 = 2;
      local_58 = 0;
      if (0 < lVar17) {
        do {
          iVar1 = (int)uVar7;
          uVar13 = (uint)uVar12;
          uVar10 = *(uint *)(param_3 + local_58 * 4);
          uVar15 = (ulonglong)uVar10;
          if ((code *)param_2[4] == (code *)0x0) {
            if (*(uint *)(param_2 + 1) < uVar10) goto LAB_144b5d427;
          }
          else {
            iVar2 = (*(code *)param_2[4])(param_2,uVar15,0,0);
            if (iVar2 != 0) goto LAB_144b5d427;
          }
          *(uint *)((longlong)param_2 + 0xc) = uVar10;
          uVar16 = 0;
          if (*(uint *)(param_2 + 1) <= uVar10 + 3) goto LAB_144b5d427;
          if ((code *)param_2[4] == (code *)0x0) {
            puVar4 = (undefined1 *)(uVar15 + *param_2);
            if (puVar4 != (undefined1 *)0x0) goto LAB_144b5d1fd;
          }
          else {
            iVar2 = (*(code *)param_2[4])(param_2,uVar15,local_60);
            if (iVar2 != 4) goto LAB_144b5d427;
            puVar4 = local_60;
LAB_144b5d1fd:
            uVar16 = CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]);
          }
          uVar14 = 0;
          *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 4;
          uVar10 = *(uint *)((longlong)param_2 + 0xc);
          if (0x7fffffff < uVar16) goto LAB_144b5d427;
          if (uVar10 + 1 < *(uint *)(param_2 + 1)) {
            if ((code *)param_2[4] == (code *)0x0) {
              pbVar3 = (byte *)((ulonglong)uVar10 + *param_2);
              uVar6 = uVar14;
              if (pbVar3 != (byte *)0x0) goto LAB_144b5d27a;
            }
            else {
              iVar2 = (*(code *)param_2[4])(param_2,uVar10,&param_5);
              if (iVar2 != 2) goto LAB_144b5d28f;
              pbVar3 = (byte *)&param_5;
LAB_144b5d27a:
              uVar6 = (uint)*pbVar3 << 8;
            }
            *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 2;
          }
          else {
LAB_144b5d28f:
            uVar14 = 0x55;
            uVar6 = 0;
          }
          if (uVar14 != 0) goto LAB_144b5d427;
          uVar14 = uVar6 >> 8;
          if (uVar14 != 0) {
            uVar9 = uVar16 - 2;
            if (uVar16 < 3) {
              uVar9 = 0;
            }
            if (uVar14 == local_64) {
              uVar10 = iVar1 + uVar9;
            }
            else {
              uVar15 = (ulonglong)local_68;
              uVar10 = uVar5 + 2;
              if (uVar10 < local_68 + 3) goto LAB_144b5d427;
              *(char *)(uVar15 + (longlong)_Dst) = (char)uVar7;
              *(char *)((ulonglong)(local_68 + 1) + (longlong)_Dst) = (char)(uVar7 >> 8);
              *(char *)((ulonglong)(local_68 + 2) + (longlong)_Dst) = (char)(uVar7 >> 0x10);
              *(char *)((ulonglong)(local_68 + 3) + (longlong)_Dst) = (char)(uVar7 >> 0x18);
              if (uVar14 == 5) goto LAB_144b5d3ac;
              if (uVar10 < uVar13 + 6) goto LAB_144b5d427;
              *(undefined1 *)(uVar12 + (longlong)_Dst) = 0x80;
              *(char *)((ulonglong)(uVar13 + 1) + (longlong)_Dst) = (char)(uVar6 >> 8);
              local_68 = uVar13 + 2;
              *(undefined1 *)((ulonglong)local_68 + (longlong)_Dst) = 0;
              *(undefined1 *)((ulonglong)(uVar13 + 3) + (longlong)_Dst) = 0;
              *(undefined1 *)((ulonglong)(uVar13 + 4) + (longlong)_Dst) = 0;
              *(undefined1 *)((ulonglong)(uVar13 + 5) + (longlong)_Dst) = 0;
              uVar12 = (ulonglong)(uVar13 + 6);
              local_64 = uVar14;
              uVar10 = uVar9;
            }
            uVar7 = (ulonglong)uVar10;
            if (((uVar5 < (uint)uVar12) || (uVar9 = uVar9 + (uint)uVar12, uVar5 < uVar9)) ||
               (iVar1 = FUN_144b59890(param_2,*(undefined4 *)((longlong)param_2 + 0xc)), iVar1 != 0)
               ) goto LAB_144b5d427;
            uVar12 = (ulonglong)uVar9;
          }
          iVar1 = (int)uVar7;
          uVar13 = (uint)uVar12;
          local_58 = local_58 + 1;
        } while (local_58 < local_48);
        uVar15 = (ulonglong)local_68;
        uVar10 = local_5c;
      }
LAB_144b5d3ac:
      if (uVar13 + 2 <= uVar10) {
        iVar2 = (int)uVar15;
        *(undefined1 *)((ulonglong)uVar13 + (longlong)_Dst) = 0x80;
        *(undefined1 *)((ulonglong)(uVar13 + 1) + (longlong)_Dst) = 3;
        if (iVar2 + 3U <= uVar10) {
          *(char *)(uVar15 + (longlong)_Dst) = (char)iVar1;
          *(char *)((ulonglong)(iVar2 + 1) + (longlong)_Dst) = (char)((uint)iVar1 >> 8);
          *(char *)((ulonglong)(iVar2 + 2) + (longlong)_Dst) = (char)((uint)iVar1 >> 0x10);
          *(char *)((ulonglong)(iVar2 + 3U) + (longlong)_Dst) = (char)((uint)iVar1 >> 0x18);
          puVar8 = (undefined4 *)FUN_144b5a450(param_1,_Dst,uVar13 + 2,0,"type1",param_6);
          return puVar8;
        }
      }
LAB_144b5d427:
      (**(code **)(local_50 + 0x10))(local_50,_Dst);
    }
  }
  return puVar8;
}



// FUNCTION 144b5d470 FUN_144b5d470 body=480 status=ok
// SIG undefined FUN_144b5d470(void)

int FUN_144b5d470(longlong *param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
                 undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  
  lVar2 = *param_1;
  uVar10 = param_5;
  if ((int)param_5 < 0) {
    uVar10 = ~param_5;
  }
  if (param_4 <= (int)uVar10) {
    return 1;
  }
  bVar3 = false;
  uVar1 = *(uint *)(param_3 + (longlong)(int)uVar10 * 4);
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    if (*(uint *)(param_2 + 8) < uVar1) {
      param_5 = 0x55;
      goto LAB_144b5d4f3;
    }
  }
  else {
    iVar5 = (**(code **)(param_2 + 0x20))(param_2,uVar1,0,0);
    if (iVar5 != 0) {
      param_5 = 0x55;
      goto LAB_144b5d4f3;
    }
  }
  *(uint *)(param_2 + 0xc) = uVar1;
  param_5 = 0;
LAB_144b5d4f3:
  iVar5 = param_5;
  if ((param_5 == 0) &&
     (uVar6 = FUN_144b59e60(param_2,&param_5), uVar4 = param_6, iVar5 = param_5, param_5 == 0)) {
    if ((int)uVar6 < 1) {
      iVar5 = 1;
    }
    else if (uVar6 < 0x1000000) {
      iVar7 = FUN_144b5a2c0(param_1,param_2,uVar10,0,0,param_6);
      iVar5 = 0;
      if (((iVar7 != 0) &&
          (param_5 = FUN_144b597a0(param_2,uVar1 + 4), iVar5 = param_5, param_5 == 0)) &&
         (piVar8 = (int *)FUN_144b560d0(lVar2,uVar6,&param_5), iVar5 = param_5, param_5 == 0)) {
        iVar5 = FUN_144b59890(param_2,*(undefined4 *)(param_2 + 0xc),piVar8,uVar6);
        if (iVar5 == 0) {
          if ((4 < (int)uVar6) && (*piVar8 == 0x4f54544f)) {
            bVar3 = true;
          }
          pcVar9 = "truetype";
          if (bVar3) {
            pcVar9 = "cff";
          }
          iVar5 = FUN_144b5a450(param_1,piVar8,uVar6,0,pcVar9,uVar4);
        }
        else if (piVar8 != (int *)0x0) {
          (**(code **)(lVar2 + 0x10))(lVar2,piVar8);
        }
      }
    }
    else {
      iVar5 = 9;
    }
  }
  return iVar5;
}



// FUNCTION 144b5d650 FUN_144b5d650 body=385 status=ok
// SIG undefined FUN_144b5d650(void)

ulonglong FUN_144b5d650(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                       undefined8 *param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int local_res8 [2];
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  lVar1 = *param_1;
  uVar5 = (undefined4)((ulonglong)&local_38 >> 0x20);
  uVar4 = FUN_144b5b5c0();
  if ((int)uVar4 == 0) {
    uVar4 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffffb0 >> 8),1);
    iVar2 = FUN_144b5b8d0(param_1,param_2,local_34,local_38,CONCAT44(uVar5,0x504f5354),uVar4,
                          &local_30,local_res8);
    if (iVar2 == 0) {
      uVar3 = FUN_144b5cf70(param_1,param_2,local_30,local_res8[0],param_4,param_5);
      uVar4 = (ulonglong)uVar3;
      if (local_30 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1,local_30);
      }
      if (uVar3 == 0) {
        *(undefined4 *)*param_5 = 1;
      }
    }
    else {
      uVar3 = FUN_144b5b8d0(param_1,param_2,local_34,local_38,0x73666e74,uVar4 & 0xffffffffffffff00,
                            &local_30,local_res8);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        uVar3 = FUN_144b5d470(param_1,param_2,local_30,local_res8[0],param_4 % local_res8[0],param_5
                             );
        uVar4 = (ulonglong)uVar3;
        if (local_30 != 0) {
          (**(code **)(lVar1 + 0x10))(lVar1,local_30);
        }
        if (uVar3 == 0) {
          *(int *)*param_5 = local_res8[0];
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 144b5d7e0 FUN_144b5d7e0 body=423 status=ok
// SIG undefined FUN_144b5d7e0(void)

void FUN_144b5d7e0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  char local_c8;
  byte local_c7;
  char acStack_c6 [61];
  char local_89;
  char local_7e;
  char local_76;
  byte local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != (longlong *)0x0) {
    iVar4 = 0;
    if (((code *)param_2[4] == (code *)0x0) ||
       (iVar2 = (*(code *)param_2[4])(param_2,0,0,0), iVar2 == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      iVar4 = 0x55;
    }
    if (iVar4 == 0) {
      uVar1 = *(uint *)((longlong)param_2 + 0xc);
      if (uVar1 < *(uint *)(param_2 + 1)) {
        if ((code *)param_2[4] == (code *)0x0) {
          uVar3 = *(uint *)(param_2 + 1) - uVar1;
          _Size = (size_t)uVar3;
          if (0x80 < uVar3) {
            _Size = 0x80;
          }
          uVar3 = (uint)_Size;
          memcpy(&local_c8,(void *)((ulonglong)uVar1 + *param_2),_Size);
        }
        else {
          uVar3 = (*(code *)param_2[4])(param_2,(ulonglong)uVar1,&local_c8,0x80);
        }
        *(uint *)((longlong)param_2 + 0xc) = uVar3 + uVar1;
        if ((((((-(uVar3 < 0x80) & 0x55U) == 0) && (local_c8 == '\0')) && (local_7e == '\0')) &&
            ((local_76 == '\0' && ((byte)(local_c7 - 1) < 0x21)))) &&
           ((local_89 == '\0' && ((acStack_c6[local_c7] == '\0' && (local_75 < 0x80)))))) {
          local_d8 = param_4;
          FUN_144b5d650(param_1,param_2,
                        (CONCAT31(CONCAT21(CONCAT11(local_75,local_74),local_73),local_72) + 0x7fU &
                        0xffffff80) + 0x80,param_3);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144b5d9a0 FUN_144b5d9a0 body=663 status=ok
// SIG undefined FUN_144b5d9a0(void)

void FUN_144b5d9a0(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 *param_4,
                  longlong param_5)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint unaff_R12D;
  uint uVar10;
  undefined **ppuVar11;
  longlong lVar12;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  int local_188;
  int *local_180;
  uint local_178;
  undefined4 local_174;
  longlong *local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined4 *local_150;
  longlong local_148;
  undefined4 local_138 [6];
  longlong local_120;
  int local_f8 [10];
  undefined4 local_d0 [10];
  longlong local_a8 [10];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_178 = unaff_R12D & 0xffffff00;
  piVar6 = local_f8;
  local_148 = *param_1;
  ppuVar11 = &PTR_LAB_149970640;
  plVar7 = local_a8;
  local_158 = param_5;
  local_188 = 2;
  puVar8 = local_d0;
  local_168 = 0;
  local_160 = 9;
  local_180 = (int *)0x9;
  local_174 = param_3;
  local_170 = param_1;
  local_150 = param_4;
  do {
    *plVar7 = 0;
    iVar4 = 0;
    if (param_2 == 0) {
      *piVar6 = 0;
LAB_144b5da7c:
      local_198 = puVar8;
      iVar4 = (*(code *)*ppuVar11)(local_170,param_2);
      *piVar6 = iVar4;
    }
    else {
      if ((*(code **)(param_2 + 0x20) == (code *)0x0) ||
         (iVar3 = (**(code **)(param_2 + 0x20))(param_2,0,0,0), iVar3 == 0)) {
        *(undefined4 *)(param_2 + 0xc) = 0;
      }
      else {
        iVar4 = 0x55;
      }
      *piVar6 = iVar4;
      if (iVar4 == 0) goto LAB_144b5da7c;
    }
    puVar8 = puVar8 + 1;
    plVar7 = plVar7 + 1;
    ppuVar11 = ppuVar11 + 2;
    piVar6 = piVar6 + 1;
    local_180 = (int *)((longlong)local_180 + -1);
  } while (local_180 != (int *)0x0);
  plVar7 = local_a8;
  uVar9 = 0;
  local_180 = &DAT_149970648;
  lVar12 = 0;
  iVar4 = local_188;
  uVar10 = local_178;
  do {
    piVar6 = local_180;
    if (*local_180 - 3U < 2) {
      bVar2 = true;
      if ((char)uVar10 == '\0') goto LAB_144b5dafa;
    }
    else {
      bVar2 = false;
LAB_144b5dafa:
      if (*(int *)((longlong)local_f8 + lVar12) == 0) {
        local_120 = *plVar7;
        local_138[0] = 4;
        if (local_120 == 0) {
          local_120 = *(longlong *)(local_158 + 0x18);
        }
        iVar4 = FUN_144b595e0(local_170,local_138,&local_168);
        lVar5 = local_168;
        if ((bVar2) && (uVar10 = uVar10 & 0xff, (char)iVar4 == 'Q')) {
          uVar10 = 1;
        }
        if (iVar4 == 0) {
          local_198 = local_150;
          iVar4 = FUN_144b5d650(local_170,local_168,*(undefined4 *)((longlong)local_d0 + lVar12),
                                local_174);
          if (lVar5 != 0) {
            lVar1 = *(longlong *)(lVar5 + 0x30);
            if (*(code **)(lVar5 + 0x28) != (code *)0x0) {
              (**(code **)(lVar5 + 0x28))(lVar5);
            }
            (**(code **)(lVar1 + 0x10))(lVar1,lVar5);
            piVar6 = local_180;
          }
          if (iVar4 == 0) break;
          uVar10 = uVar10 & 0xff;
          if (bVar2) {
            uVar10 = 1;
          }
        }
      }
    }
    local_180 = piVar6 + 4;
    uVar9 = uVar9 + 1;
    plVar7 = plVar7 + 1;
    lVar12 = lVar12 + 4;
  } while (uVar9 < 9);
  lVar12 = local_148;
  plVar7 = local_a8;
  lVar5 = 9;
  local_188 = iVar4;
  do {
    if (*plVar7 != 0) {
      (**(code **)(lVar12 + 0x10))(lVar12);
      *plVar7 = 0;
      lVar5 = local_160;
    }
    plVar7 = plVar7 + 1;
    lVar5 = lVar5 + -1;
    local_160 = lVar5;
  } while (lVar5 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 144b5dc50 FUN_144b5dc50 body=129 status=ok
// SIG undefined FUN_144b5dc50(void)

void FUN_144b5dc50(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  byte *param_5)

{
  char cVar1;
  
  cVar1 = FUN_144b5d7e0();
  if (cVar1 == '\x02') {
    cVar1 = FUN_144b5d650(param_1,param_2,0,param_3,param_4);
  }
  if (((cVar1 == '\x02') || (cVar1 == 'U')) && ((*param_5 & 4) != 0)) {
    FUN_144b5d9a0(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 144b5dce0 FUN_144b5dce0 body=168 status=ok
// SIG undefined FUN_144b5dce0(void)

void FUN_144b5dce0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_2 + 8);
  lVar1 = *(short *)(param_1 + 0x6a) * lVar2;
  *(uint *)(param_2 + 0xc) =
       (int)((ulonglong)(lVar1 + (lVar1 >> 0x3f) + 0x8000) >> 0x10) + 0x3fU & 0xffffffc0;
  lVar1 = *(short *)(param_1 + 0x6c) * lVar2;
  *(uint *)(param_2 + 0x10) =
       (uint)((ulonglong)(lVar1 + (lVar1 >> 0x3f) + 0x8000) >> 0x10) & 0xffffffc0;
  lVar2 = *(short *)(param_1 + 0x6e) * lVar2;
  *(uint *)(param_2 + 0x14) =
       (int)((ulonglong)(lVar2 + (lVar2 >> 0x3f) + 0x8000) >> 0x10) + 0x20U & 0xffffffc0;
  lVar1 = (longlong)*(short *)(param_1 + 0x70) * (longlong)*(int *)(param_2 + 4);
  *(uint *)(param_2 + 0x18) =
       (int)((ulonglong)(lVar1 + (lVar1 >> 0x3f) + 0x8000) >> 0x10) + 0x20U & 0xffffffc0;
  return;
}



// FUNCTION 144b5dd90 FUN_144b5dd90 body=308 status=ok
// SIG undefined FUN_144b5dd90(void)

ulonglong FUN_144b5dd90(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  plVar2 = (longlong *)param_1[1];
  lVar3 = *plVar2;
  plVar7 = (longlong *)(**(code **)(lVar3 + 8))(lVar3,0x18);
  if (plVar7 == (longlong *)0x0) {
    uVar8 = 0x40;
  }
  else {
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    uVar8 = 0;
  }
  if ((int)uVar8 == 0) {
    lVar4 = *param_1;
    param_1[3] = lVar4;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar4 + 0x38);
    if ((*(int *)(lVar4 + 0x38) == 0x6f75746c) &&
       (pcVar5 = *(code **)(*(longlong *)(lVar4 + 0x60) + 8), pcVar5 != (code *)0x0)) {
      uVar6 = (*pcVar5)(lVar3,param_1 + 0xc);
      if (uVar6 != 0) {
        if (plVar7 == (longlong *)0x0) {
          return (ulonglong)uVar6;
        }
        (**(code **)(lVar3 + 0x10))(lVar3,plVar7);
        return (ulonglong)uVar6;
      }
      param_1[0xd] = *(longlong *)(*(longlong *)(lVar4 + 0x60) + 0x20);
      param_1[0xe] = *(longlong *)(lVar4 + 0x40);
      uVar8 = 0;
    }
    plVar1 = plVar2 + 0x23;
    plVar7[2] = (longlong)param_1;
    if (plVar1 != (longlong *)0x0) {
      lVar3 = plVar2[0x24];
      plVar7[1] = 0;
      *plVar7 = lVar3;
      if (lVar3 == 0) {
        *plVar1 = (longlong)plVar7;
      }
      else {
        *(longlong **)(lVar3 + 8) = plVar7;
      }
      plVar2[0x24] = (longlong)plVar7;
    }
    lVar3 = *plVar1;
    while ((uVar9 = 0, lVar3 != 0 &&
           (uVar9 = *(ulonglong *)(lVar3 + 0x10), *(int *)(uVar9 + 0x20) != 0x6f75746c))) {
      lVar3 = *(longlong *)(lVar3 + 8);
    }
    plVar2[0x25] = uVar9;
  }
  return uVar8;
}



// FUNCTION 144b5ded0 FUN_144b5ded0 body=231 status=ok
// SIG undefined FUN_144b5ded0(void)

void FUN_144b5ded0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    plVar1 = plVar2 + 0x23;
    if (plVar1 != (longlong *)0x0) {
      for (plVar4 = (longlong *)*plVar1; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[1])
      {
        if (plVar4[2] == param_1) {
          if ((*(int *)(*(longlong *)(param_1 + 0x18) + 0x38) == 0x6f75746c) &&
             (*(longlong *)(param_1 + 0x60) != 0)) {
            (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x28))();
          }
          if (plVar1 != (longlong *)0x0) {
            lVar5 = *plVar4;
            plVar4 = (longlong *)plVar4[1];
            if (lVar5 == 0) {
              *plVar1 = (longlong)plVar4;
            }
            else {
              *(longlong **)(lVar5 + 8) = plVar4;
            }
            if (plVar4 == (longlong *)0x0) {
              plVar2[0x24] = lVar5;
            }
            else {
              *plVar4 = lVar5;
            }
          }
          (**(code **)(lVar3 + 0x10))(lVar3);
          lVar3 = *plVar1;
          while ((lVar5 = 0, lVar3 != 0 &&
                 (lVar5 = *(longlong *)(lVar3 + 0x10), *(int *)(lVar5 + 0x20) != 0x6f75746c))) {
            lVar3 = *(longlong *)(lVar3 + 8);
          }
          plVar2[0x25] = lVar5;
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 144b5dfc0 FUN_144b5dfc0 body=125 status=ok
// SIG undefined FUN_144b5dfc0(void)

void FUN_144b5dfc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  lVar3 = *param_1;
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x130) == param_1)) {
    *(undefined8 *)(lVar1 + 0x130) = 0;
  }
  if ((*(byte *)*param_1 & 2) != 0) {
    FUN_144b5ded0();
  }
  if ((*(byte *)*param_1 & 1) != 0) {
    FUN_144b5c890(param_1);
  }
  if (*(code **)(lVar3 + 0x28) != (code *)0x0) {
    (**(code **)(lVar3 + 0x28))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000144b5e03a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
  return;
}



// FUNCTION 144b5e040 FUN_144b5e040 body=320 status=ok
// SIG undefined FUN_144b5e040(void)

undefined8
FUN_144b5e040(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char param_5)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  char *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
    return 6;
  }
  puVar8 = (undefined8 *)(param_1 + 0x18);
  puVar1 = puVar8 + *(uint *)(param_1 + 0x14);
  for (; puVar8 < puVar1; puVar8 = puVar8 + 1) {
    pcVar5 = *(char **)(*(longlong *)*puVar8 + 8);
    lVar9 = param_2 - (longlong)pcVar5;
    do {
      cVar2 = *pcVar5;
      cVar3 = pcVar5[lVar9];
      if (cVar2 != cVar3) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    if (cVar2 == cVar3) break;
  }
  if (puVar8 == puVar1) {
    return 0xb;
  }
  pcVar4 = *(code **)(*(longlong *)*puVar8 + 0x30);
  if ((pcVar4 != (code *)0x0) &&
     (plVar6 = (longlong *)(*pcVar4)((longlong *)*puVar8,"properties"), plVar6 != (longlong *)0x0))
  {
    if (param_5 == '\0') {
      lVar9 = plVar6[1];
    }
    else {
      lVar9 = *plVar6;
    }
    if (lVar9 != 0) {
      if (param_5 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000144b5e15a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)*plVar6)();
        return uVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x000144b5e16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)plVar6[1])(*puVar8,param_3,param_4);
      return uVar7;
    }
  }
  return 7;
}



// FUNCTION 144b5e180 FUN_144b5e180 body=589 status=ok
// SIG undefined FUN_144b5e180(void)

void FUN_144b5e180(longlong param_1,char *param_2,byte *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  byte *local_48;
  byte local_40 [28];
  long local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar10 = 0;
  iVar8 = strcmp(param_2,"darkening-parameters");
  if (iVar8 == 0) {
    if (param_4 != '\0') {
      do {
        lVar9 = strtol((char *)param_3,(char **)&local_48,10);
        *(long *)(local_40 + lVar10 * 4) = lVar9;
        if ((*local_48 != 0x2c) || (param_3 == local_48)) goto LAB_144b5e31f;
        lVar10 = lVar10 + 1;
        param_3 = local_48 + 1;
      } while (lVar10 < 7);
      local_24 = strtol((char *)param_3,(char **)&local_48,10);
      if (((*local_48 & 0xdf) != 0) || (param_3 == local_48)) goto LAB_144b5e31f;
      param_3 = local_40;
    }
    iVar8 = *(int *)param_3;
    iVar1 = *(int *)(param_3 + 4);
    iVar2 = *(int *)(param_3 + 8);
    iVar3 = *(int *)(param_3 + 0xc);
    iVar4 = *(int *)(param_3 + 0x10);
    iVar5 = *(int *)(param_3 + 0x14);
    iVar6 = *(int *)(param_3 + 0x18);
    iVar7 = *(int *)(param_3 + 0x1c);
    if (((((-1 < iVar8) && (-1 < iVar2)) && (-1 < iVar4)) &&
        (((-1 < iVar6 && (-1 < iVar1)) && ((-1 < iVar3 && ((-1 < iVar5 && (-1 < iVar7)))))))) &&
       ((iVar8 <= iVar2 &&
        (((((iVar2 <= iVar4 && (iVar4 <= iVar6)) && (iVar1 < 0x1f5)) &&
          ((iVar3 < 0x1f5 && (iVar5 < 0x1f5)))) && (iVar7 < 0x1f5)))))) {
      *(int *)(param_1 + 0x48) = iVar2;
      *(int *)(param_1 + 0x40) = iVar8;
      *(int *)(param_1 + 0x44) = iVar1;
      *(int *)(param_1 + 0x4c) = iVar3;
      *(int *)(param_1 + 0x50) = iVar4;
      *(int *)(param_1 + 0x54) = iVar5;
      *(int *)(param_1 + 0x58) = iVar6;
      *(int *)(param_1 + 0x5c) = iVar7;
    }
  }
  else {
    iVar8 = strcmp(param_2,"hinting-engine");
    if (iVar8 == 0) {
      if (param_4 == '\0') {
        if (*(int *)param_3 == 1) {
          *(undefined4 *)(param_1 + 0x38) = 1;
        }
      }
      else {
        do {
          lVar11 = lVar10 + 1;
          if (param_3[lVar10] != (&DAT_149970830)[lVar10]) goto LAB_144b5e31f;
          lVar10 = lVar11;
        } while (lVar11 != 6);
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
    }
    else {
      iVar8 = strcmp(param_2,"no-stem-darkening");
      if (iVar8 == 0) {
        if (param_4 == '\0') {
          *(byte *)(param_1 + 0x3c) = *param_3;
        }
        else {
          lVar9 = strtol((char *)param_3,(char **)0x0,10);
          *(bool *)(param_1 + 0x3c) = lVar9 != 0;
        }
      }
      else {
        iVar8 = strcmp(param_2,"random-seed");
        if (iVar8 == 0) {
          if (param_4 == '\0') {
            iVar8 = 0;
            if (-1 < *(int *)param_3) {
              iVar8 = *(int *)param_3;
            }
            *(int *)(param_1 + 0x60) = iVar8;
          }
          else {
            lVar9 = strtol((char *)param_3,(char **)0x0,10);
            iVar8 = 0;
            if (-1 < lVar9) {
              iVar8 = lVar9;
            }
            *(int *)(param_1 + 0x60) = iVar8;
          }
        }
      }
    }
  }
LAB_144b5e31f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 144b5e3f0 FUN_144b5e3f0 body=214 status=ok
// SIG undefined FUN_144b5e3f0(void)

undefined8 FUN_144b5e3f0(longlong param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,"darkening-parameters");
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x40);
    param_3[1] = *(undefined4 *)(param_1 + 0x44);
    param_3[2] = *(undefined4 *)(param_1 + 0x48);
    param_3[3] = *(undefined4 *)(param_1 + 0x4c);
    param_3[4] = *(undefined4 *)(param_1 + 0x50);
    param_3[5] = *(undefined4 *)(param_1 + 0x54);
    param_3[6] = *(undefined4 *)(param_1 + 0x58);
    param_3[7] = *(undefined4 *)(param_1 + 0x5c);
    return 0;
  }
  iVar1 = strcmp(param_2,"hinting-engine");
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x38);
    return 0;
  }
  iVar1 = strcmp(param_2,"no-stem-darkening");
  if (iVar1 == 0) {
    *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x3c);
    return 0;
  }
  return 0xc;
}



// FUNCTION 144b5e4f0 FUN_144b5e4f0 body=455 status=ok
// SIG undefined FUN_144b5e4f0(void)

ulonglong FUN_144b5e4f0(undefined8 param_1,longlong *param_2,ulonglong param_3,int param_4,
                       undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 local_res8;
  ulonglong local_res18 [2];
  
  local_res8 = param_1;
  iVar8 = 0;
  uVar6 = *(uint *)((longlong)param_2 + 0xc);
  iVar2 = 0;
  local_res18[0] = param_3 & 0xffffffff00000000;
  if (*(uint *)(param_2 + 1) <= uVar6 + 3) {
    return 0x55;
  }
  if ((code *)param_2[4] == (code *)0x0) {
    puVar5 = (undefined8 *)((ulonglong)uVar6 + *param_2);
    if (puVar5 != (undefined8 *)0x0) goto LAB_144b5e54a;
  }
  else {
    iVar2 = (*(code *)param_2[4])(param_2,(ulonglong)uVar6,&local_res8,4);
    if (iVar2 != 4) {
      return 0x55;
    }
    puVar5 = &local_res8;
LAB_144b5e54a:
    iVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)puVar5,*(undefined1 *)((longlong)puVar5 + 1)),
                              *(undefined1 *)((longlong)puVar5 + 2)),
                     *(undefined1 *)((longlong)puVar5 + 3));
  }
  *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 4;
  if (iVar2 != param_4) {
    return 2;
  }
  FUN_144b59e60(param_2,local_res18);
  if ((int)local_res18[0] != 0) {
    return local_res18[0] & 0xffffffff;
  }
  uVar7 = 0;
  uVar6 = *(int *)((longlong)param_2 + 0xc) + 0x10;
  if ((code *)param_2[4] == (code *)0x0) {
    if (*(uint *)(param_2 + 1) < uVar6) {
      uVar7 = 0x55;
      goto LAB_144b5e5cf;
    }
  }
  else {
    iVar2 = (*(code *)param_2[4])(param_2,uVar6,0,0);
    if (iVar2 != 0) {
      uVar7 = 0x55;
      goto LAB_144b5e5cf;
    }
  }
  *(uint *)((longlong)param_2 + 0xc) = uVar6;
LAB_144b5e5cf:
  local_res18[0] = CONCAT44(local_res18[0]._4_4_,uVar7);
  if (uVar7 != 0) {
    return (ulonglong)uVar7;
  }
  uVar1 = FUN_144b59d40(param_2,local_res18);
  if ((int)local_res18[0] == 0) {
    if ((uVar1 != 0) && (uVar1 != 0)) {
      do {
        iVar2 = FUN_144b59e60(param_2,local_res18);
        if ((int)local_res18[0] != 0) {
          return local_res18[0] & 0xffffffff;
        }
        if (iVar2 == 2) {
          uVar3 = FUN_144b59e60(param_2,local_res18);
          if ((int)local_res18[0] == 0) {
            FUN_144b59e60(param_2,local_res18);
            if ((int)local_res18[0] == 0) {
              *param_5 = uVar3;
              return 0;
            }
          }
        }
        else {
          uVar4 = FUN_144b597f0(param_2,8);
          local_res18[0] = CONCAT44(local_res18[0]._4_4_,(int)uVar4);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(uint)uVar1);
    }
    return 2;
  }
  return local_res18[0] & 0xffffffff;
}



// FUNCTION 144b5e6c0 FUN_144b5e6c0 body=161 status=ok
// SIG undefined FUN_144b5e6c0(void)

ulonglong FUN_144b5e6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong local_res10;
  undefined4 local_48 [6];
  undefined8 local_30;
  
  local_48[0] = 4;
  local_30 = param_2;
  uVar2 = FUN_144b595e0(param_1,local_48,&local_res10);
  if ((int)uVar2 == 0) {
    if (local_res10 == 0) {
      uVar3 = 0x51;
    }
    else {
      uVar3 = FUN_144b5e4f0(param_1,local_res10,param_2,0x51607,param_3);
      lVar1 = *(longlong *)(local_res10 + 0x30);
      if (*(code **)(local_res10 + 0x28) != (code *)0x0) {
        (**(code **)(local_res10 + 0x28))(local_res10);
      }
      (**(code **)(lVar1 + 0x10))(lVar1,local_res10);
    }
    uVar2 = (ulonglong)uVar3;
  }
  return uVar2;
}



// FUNCTION 144b5e770 FUN_144b5e770 body=264 status=ok
// SIG undefined FUN_144b5e770(void)

char * FUN_144b5e770(longlong param_1,char *param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  
  lVar3 = -1;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (param_2[lVar7] != '\0');
  do {
    pcVar4 = (char *)(param_3 + 1 + lVar3);
    lVar3 = lVar3 + 1;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
  iVar6 = (int)lVar3 + 1 + (int)lVar7;
  if (iVar6 < 1) {
    if (iVar6 < 0) {
      return (char *)0x0;
    }
  }
  else {
    pcVar4 = (char *)(**(code **)(param_1 + 8))();
    if (pcVar4 == (char *)0x0) {
      return (char *)0x0;
    }
    memset(pcVar4,0,(longlong)iVar6);
  }
  pcVar5 = strrchr(param_2,0x2f);
  if (pcVar5 == (char *)0x0) {
    *pcVar4 = '\0';
  }
  else {
    strncpy(pcVar4,param_2,(size_t)(pcVar5 + (1 - (longlong)param_2)));
    pcVar4[(longlong)(pcVar5 + (1 - (longlong)param_2))] = '\0';
    param_2 = pcVar5 + 1;
  }
  pcVar5 = pcVar4 + -1;
  do {
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  lVar3 = 0;
  do {
    cVar2 = *(char *)(param_3 + lVar3);
    pcVar5[lVar3] = cVar2;
    lVar3 = lVar3 + 1;
  } while (cVar2 != '\0');
  pcVar5 = pcVar4 + -1;
  do {
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  lVar3 = 0;
  do {
    cVar2 = param_2[lVar3];
    pcVar5[lVar3] = cVar2;
    lVar3 = lVar3 + 1;
  } while (cVar2 != '\0');
  return pcVar4;
}



// FUNCTION 144b5e880 FUN_144b5e880 body=263 status=ok
// SIG undefined FUN_144b5e880(void)

void FUN_144b5e880(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  iVar9 = *param_1;
  iVar8 = param_1[1];
  if (param_2 < -0x2d0000) {
    uVar10 = (-param_2 - 0x2d0001U) / 0x5a0000 + 1;
    uVar6 = (ulonglong)uVar10;
    param_2 = param_2 + uVar10 * 0x5a0000;
    iVar11 = iVar9;
    do {
      iVar9 = iVar8;
      iVar8 = -iVar11;
      uVar6 = uVar6 - 1;
      iVar11 = iVar9;
    } while (uVar6 != 0);
  }
  if (0x2d0000 < param_2) {
    uVar10 = (param_2 - 0x2d0001U) / 0x5a0000 + 1;
    uVar6 = (ulonglong)uVar10;
    param_2 = param_2 + uVar10 * -0x5a0000;
    iVar11 = iVar8;
    do {
      iVar8 = iVar9;
      iVar9 = -iVar11;
      uVar6 = uVar6 - 1;
      iVar11 = iVar8;
    } while (uVar6 != 0);
  }
  iVar11 = 1;
  piVar7 = &DAT_1499705e0;
  iVar4 = 1;
  do {
    bVar3 = (byte)iVar4;
    if (param_2 < 0) {
      iVar5 = iVar11 + iVar8 >> (bVar3 & 0x1f);
      iVar2 = -(iVar11 + iVar9 >> (bVar3 & 0x1f));
      iVar1 = *piVar7;
    }
    else {
      iVar5 = -(iVar11 + iVar8 >> (bVar3 & 0x1f));
      iVar2 = iVar11 + iVar9 >> (bVar3 & 0x1f);
      iVar1 = -*piVar7;
    }
    iVar8 = iVar8 + iVar2;
    param_2 = param_2 + iVar1;
    iVar9 = iVar5 + iVar9;
    iVar11 = iVar11 * 2;
    iVar4 = iVar4 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar4 < 0x17);
  *param_1 = iVar9;
  param_1[1] = iVar8;
  return;
}



// FUNCTION 144b5e990 FUN_144b5e990 body=238 status=ok
// SIG undefined FUN_144b5e990(void)

void FUN_144b5e990(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = *param_1;
  iVar2 = param_1[1];
  if (iVar7 < iVar2) {
    iVar7 = -iVar7;
    if (iVar7 < iVar2) {
      iVar10 = 0x5a0000;
      iVar9 = iVar2;
      iVar2 = iVar7;
    }
    else {
      iVar10 = -0xb40000;
      if (0 < iVar2) {
        iVar10 = 0xb40000;
      }
      iVar9 = iVar7;
      iVar2 = -iVar2;
    }
  }
  else if (iVar2 < -iVar7) {
    iVar10 = -0x5a0000;
    iVar9 = -iVar2;
    iVar2 = iVar7;
  }
  else {
    iVar10 = 0;
    iVar9 = iVar7;
  }
  iVar7 = 1;
  piVar6 = &DAT_1499705e0;
  iVar4 = 1;
  do {
    bVar3 = (byte)iVar4;
    if (iVar2 < 1) {
      iVar8 = -(iVar7 + iVar2 >> (bVar3 & 0x1f));
      iVar5 = iVar7 + iVar9 >> (bVar3 & 0x1f);
      iVar1 = -*piVar6;
    }
    else {
      iVar8 = iVar7 + iVar2 >> (bVar3 & 0x1f);
      iVar5 = -(iVar7 + iVar9 >> (bVar3 & 0x1f));
      iVar1 = *piVar6;
    }
    iVar2 = iVar2 + iVar5;
    iVar9 = iVar8 + iVar9;
    iVar10 = iVar10 + iVar1;
    iVar7 = iVar7 * 2;
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar4 < 0x17);
  *param_1 = iVar9;
  if (-1 < iVar10) {
    param_1[1] = iVar10 + 8U & 0xfffffff0;
    return;
  }
  param_1[1] = -(8U - iVar10 & 0xfffffff0);
  return;
}



// FUNCTION 144b5ea80 FUN_144b5ea80 body=172 status=ok
// SIG undefined FUN_144b5ea80(void)

undefined8 FUN_144b5ea80(undefined8 *param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  if (*(int *)(param_2 + 0x60) != 0x62697473) {
    return 0x12;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x94);
  if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    param_1[5] = *(undefined8 *)(param_2 + 0x68);
    param_1[6] = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    param_1[7] = *(undefined8 *)(param_2 + 0x78);
    param_1[8] = uVar2;
    param_1[9] = *(undefined8 *)(param_2 + 0x88);
    puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
    return 0;
  }
  FUN_144b53f40(param_1 + 5);
  uVar2 = FUN_144b53fa0(uVar2,param_2 + 0x68,param_1 + 5);
  return uVar2;
}


