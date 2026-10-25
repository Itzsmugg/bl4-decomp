// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144d4e1c0 GetObjectObstructionAndOcclusion body=333 status=ok
// SIG AKRESULT GetObjectObstructionAndOcclusion(__uint64 param_1, __uint64 param_2, float * param_3, float * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetObjectObstructionAndOcclusion(unsigned
   __int64,unsigned __int64,float & __ptr64,float & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetObjectObstructionAndOcclusion
          (__uint64 param_1,__uint64 param_2,float *param_3,float *param_4)

{
  __uint64 *p_Var1;
  AKRESULT AVar2;
  CAkRegisteredObj *pCVar3;
  __uint64 *p_Var4;
  longlong lVar5;
  AKRESULT AVar6;
  undefined8 *puVar7;
  __uint64 *p_Var8;
  undefined8 *puVar9;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
                    /* 0x4d4e1c0  105
                       ?GetObjectObstructionAndOcclusion@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_K0AEAM1@Z
                        */
  FUN_1450719c0(local_38);
  pCVar3 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
  if ((pCVar3 == (CAkRegisteredObj *)0x0) || (lVar5 = *(longlong *)(pCVar3 + 8), lVar5 == 0)) {
    AVar6 = 0xf;
  }
  else {
    p_Var4 = *(__uint64 **)(lVar5 + 0x28);
    local_30 = 0;
    p_Var1 = p_Var4 + (ulonglong)*(uint *)(lVar5 + 0x30) * 3;
    for (; (p_Var4 != p_Var1 && (*p_Var4 != param_2)); p_Var4 = p_Var4 + 3) {
    }
    p_Var8 = p_Var4 + 1;
    if (p_Var4 == p_Var1) {
      p_Var8 = (__uint64 *)0x0;
    }
    AVar6 = 1;
    if ((p_Var8 != (__uint64 *)0x0) && (AVar2 = *(AKRESULT *)(p_Var8 + 1), AVar2 != 0)) {
      if (1 < AVar2) {
        AVar2 = AVar6;
      }
      memcpy(&local_30,(void *)*p_Var8,(ulonglong)AVar2 << 4);
      if (AVar2 == 0) {
        local_30 = *(undefined8 *)(*p_Var8 + 0xffffffff0);
        uStack_28 = *(undefined8 *)(*p_Var8 + 0xffffffff8);
        puVar7 = &local_30;
        puVar9 = &local_20;
        for (lVar5 = 0; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
      }
    }
    *param_3 = local_30._4_4_;
    *param_4 = (float)local_30;
  }
  FUN_1450719f0(local_38);
  return AVar6;
}



// FUNCTION 144d4e310 QueryAudioObjectIDs body=354 status=ok
// SIG AKRESULT QueryAudioObjectIDs(uint param_1, uint * param_2, AkObjectInfo * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::QueryAudioObjectIDs(unsigned int,unsigned int &
   __ptr64,struct AkObjectInfo * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::QueryAudioObjectIDs(uint param_1,uint *param_2,AkObjectInfo *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  AKRESULT AVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  
                    /* 0x4d4e310  216
                       ?QueryAudioObjectIDs@Query@SoundEngine@AK@@YA?AW4AKRESULT@@IAEAIPEAUAkObjectInfo@@@Z
                        */
  if ((*param_2 != 0) && (param_3 == (AkObjectInfo *)0x0)) {
    return 0x1f;
  }
  FUN_1450719c0(local_res10);
  lVar3 = DAT_14c791060;
  do {
    while (iVar2 = *(int *)(lVar3 + 0x108), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
      if (*(int *)(lVar3 + 0x108) < 0) goto LAB_144d4e36a;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar3 + 0x108);
    if (bVar6) {
      *(int *)(lVar3 + 0x108) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_144d4e36a:
  if (*(uint *)(lVar3 + 0x150) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(lVar3 + 0x148) +
                   ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar3 + 0x150)) * 8);
        plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_1) goto LAB_144d4e3a0;
    }
    plVar5 = (longlong *)0x0;
LAB_144d4e3a0:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar3 + 0x108);
  do {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
LAB_144d4e404:
      if (plVar5 == (longlong *)0x0) {
        AVar4 = 0xf;
      }
      else {
        AVar4 = FUN_1450db6c0(plVar5,param_2,param_3);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      FUN_1450719f0(local_res10);
      return AVar4;
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar3 + 0x108);
    if (bVar6) {
      *(int *)(lVar3 + 0x108) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar3 + 0x140));
      }
      goto LAB_144d4e404;
    }
    iVar2 = *(int *)(lVar3 + 0x108);
  } while( true );
}



// FUNCTION 144d4e480 QueryAudioObjectIDs body=64 status=ok
// SIG AKRESULT QueryAudioObjectIDs(wchar_t * param_1, uint * param_2, AkObjectInfo * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::QueryAudioObjectIDs(wchar_t const *
   __ptr64,unsigned int & __ptr64,struct AkObjectInfo * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::QueryAudioObjectIDs(wchar_t *param_1,uint *param_2,AkObjectInfo *param_3)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d4e480  218
                       ?QueryAudioObjectIDs@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WAEAIPEAUAkObjectInfo@@@Z
                        */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0xf;
  }
  AVar2 = QueryAudioObjectIDs(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 144d4e4c0 QueryAudioObjectIDs body=64 status=ok
// SIG AKRESULT QueryAudioObjectIDs(char * param_1, uint * param_2, AkObjectInfo * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::QueryAudioObjectIDs(char const * __ptr64,unsigned
   int & __ptr64,struct AkObjectInfo * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::QueryAudioObjectIDs(char *param_1,uint *param_2,AkObjectInfo *param_3)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d4e4c0  217
                       ?QueryAudioObjectIDs@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDAEAIPEAUAkObjectInfo@@@Z
                        */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0xf;
  }
  AVar2 = QueryAudioObjectIDs(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 144d4e500 GetPositioningInfo body=286 status=ok
// SIG AKRESULT GetPositioningInfo(uint param_1, AkPositioningInfo * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetPositioningInfo(unsigned int,struct
   AkPositioningInfo & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetPositioningInfo(uint param_1,AkPositioningInfo *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  AKRESULT AVar6;
  longlong lVar7;
  undefined1 local_res18 [16];
  
                    /* 0x4d4e500  117
                       ?GetPositioningInfo@Query@SoundEngine@AK@@YA?AW4AKRESULT@@IAEAUAkPositioningInfo@@@Z
                        */
  FUN_1450719c0(local_res18);
  piVar1 = DAT_14c791060;
  do {
    while (iVar3 = *piVar1, iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      if (*piVar1 < 0) goto LAB_144d4e537;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = iVar3 + 1;
    }
    UNLOCK();
  } while (iVar3 != iVar2);
LAB_144d4e537:
  lVar5 = 0;
  lVar7 = lVar5;
  if (piVar1[0x12] != 0) {
    for (lVar4 = *(longlong *)
                  (*(longlong *)(piVar1 + 0x10) +
                  ((ulonglong)param_1 % (ulonglong)(uint)piVar1[0x12]) * 8);
        (lVar7 = lVar5, lVar4 != 0 && (lVar7 = lVar4, *(uint *)(lVar4 + 0x10) != param_1));
        lVar4 = *(longlong *)(lVar4 + 8)) {
    }
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar3 = *piVar1;
  do {
    if (iVar3 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_144d4e5ad:
      lVar4 = lVar7 + -0x10;
      if (lVar7 == 0) {
        lVar4 = lVar5;
      }
      if (lVar4 == 0) {
        AVar6 = 0xf;
      }
      else {
        AVar6 = FUN_1450d7420(lVar4,param_2);
        LOCK();
        piVar1 = (int *)(lVar4 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
        }
      }
      FUN_1450719f0(local_res18);
      return AVar6;
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = iVar3 + -1;
    }
    UNLOCK();
    if (iVar3 == iVar2) {
      if ((iVar3 + -1 == 0) && (0 < piVar1[0xc])) {
        SetEvent(*(HANDLE *)(piVar1 + 0xe));
      }
      goto LAB_144d4e5ad;
    }
    iVar3 = *piVar1;
  } while( true );
}



// FUNCTION 144d4e620 GetActiveGameObjects body=54 status=ok
// SIG AKRESULT GetActiveGameObjects(AkArray<unsigned___int64,unsigned___int64,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<unsigned___int64>_> * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetActiveGameObjects(class AkArray<unsigned
   __int64,unsigned __int64,struct AkArrayAllocatorNoAlign<0>,struct
   AkGrowByPolicy_Proportional,struct AkAssignmentMovePolicy<unsigned __int64> > & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetActiveGameObjects
          (AkArray<unsigned___int64,unsigned___int64,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<unsigned___int64>_>
           *param_1)

{
  AKRESULT AVar1;
  undefined1 local_res10 [24];
  
                    /* 0x4d4e620  62
                       ?GetActiveGameObjects@Query@SoundEngine@AK@@YA?AW4AKRESULT@@AEAV?$AkArray@_K_KU?$AkArrayAllocatorNoAlign@$0A@@@UAkGrowByPolicy_Proportional@@U?$AkAssignmentMovePolicy@_K@@@@@Z
                        */
  FUN_1450719c0(local_res10);
  AVar1 = FUN_1450ad5b0(g_pRegistryMgr,param_1);
  FUN_1450719f0(local_res10);
  return AVar1;
}



// FUNCTION 144d4e660 GetIsGameObjectActive body=56 status=ok
// SIG bool GetIsGameObjectActive(__uint64 param_1)

/* bool __cdecl AK::SoundEngine::Query::GetIsGameObjectActive(unsigned __int64) */

bool __cdecl AK::SoundEngine::Query::GetIsGameObjectActive(__uint64 param_1)

{
  undefined1 uVar1;
  undefined1 local_res10 [24];
  
                    /* 0x4d4e660  97  ?GetIsGameObjectActive@Query@SoundEngine@AK@@YA_N_K@Z */
  FUN_1450719c0(local_res10);
  uVar1 = FUN_1450ad6a0(g_pRegistryMgr,param_1);
  FUN_1450719f0(local_res10);
  return (bool)uVar1;
}



// FUNCTION 144d4e6a0 GetMaxRadius body=47 status=ok
// SIG AKRESULT GetMaxRadius(AkArray<AK::SoundEngine::Query::GameObjDst,AK::SoundEngine::Query::GameObjDst_const&___ptr64,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<AK::SoundEngine::Query::GameObjDst>_> * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetMaxRadius(class AkArray<struct
   AK::SoundEngine::Query::GameObjDst,struct AK::SoundEngine::Query::GameObjDst const &
   __ptr64,struct AkArrayAllocatorNoAlign<0>,struct AkGrowByPolicy_Proportional,struct
   AkAssignmentMovePolicy<struct AK::SoundEngine::Query::GameObjDst> > & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetMaxRadius
          (AkArray<AK::SoundEngine::Query::GameObjDst,AK::SoundEngine::Query::GameObjDst_const&___ptr64,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<AK::SoundEngine::Query::GameObjDst>_>
           *param_1)

{
  AKRESULT AVar1;
  undefined1 local_res10 [24];
  
                    /* 0x4d4e6a0  101
                       ?GetMaxRadius@Query@SoundEngine@AK@@YA?AW4AKRESULT@@AEAV?$AkArray@UGameObjDst@Query@SoundEngine@AK@@AEBU1234@U?$AkArrayAllocatorNoAlign@$0A@@@UAkGrowByPolicy_Proportional@@U?$AkAssignmentMovePolicy@UGameObjDst@Query@SoundEngine@AK@@@@@@@Z
                        */
  FUN_1450719c0(local_res10);
  AVar1 = FUN_1450c7ac0(param_1);
  FUN_1450719f0(local_res10);
  return AVar1;
}



// FUNCTION 144d4e6d0 GetMaxRadius body=59 status=ok
// SIG float GetMaxRadius(__uint64 param_1)

/* float __cdecl AK::SoundEngine::Query::GetMaxRadius(unsigned __int64) */

float __cdecl AK::SoundEngine::Query::GetMaxRadius(__uint64 param_1)

{
  float fVar1;
  undefined1 local_res10 [24];
  
                    /* 0x4d4e6d0  102  ?GetMaxRadius@Query@SoundEngine@AK@@YAM_K@Z */
  FUN_1450719c0(local_res10);
  fVar1 = (float)FUN_1450c7a60(param_1);
  FUN_1450719f0(local_res10);
  return fVar1;
}



// FUNCTION 144d4e710 GetEventIDFromPlayingID body=21 status=ok
// SIG uint GetEventIDFromPlayingID(uint param_1)

/* unsigned int __cdecl AK::SoundEngine::Query::GetEventIDFromPlayingID(unsigned int) */

uint __cdecl AK::SoundEngine::Query::GetEventIDFromPlayingID(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  
                    /* 0x4d4e710  88  ?GetEventIDFromPlayingID@Query@SoundEngine@AK@@YAII@Z */
  plVar2 = DAT_14c790fc0;
  if (DAT_14c790fc0 != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c790fc0 + 3));
    uVar4 = 0;
    if (*(uint *)(plVar2 + 1) != 0) {
      for (lVar1 = *(longlong *)
                    (*plVar2 + ((ulonglong)param_1 % (ulonglong)*(uint *)(plVar2 + 1)) * 8);
          (lVar3 = 0, lVar1 != 0 && (lVar3 = lVar1, *(uint *)(lVar1 + 0x4c) != param_1));
          lVar1 = *(longlong *)(lVar1 + 0x68)) {
      }
      if (lVar3 != 0) {
        uVar4 = *(uint *)(lVar3 + 0x24);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 3));
    return uVar4;
  }
  return 0;
}



// FUNCTION 144d4e730 GetGameObjectFromPlayingID body=26 status=ok
// SIG __uint64 GetGameObjectFromPlayingID(uint param_1)

/* unsigned __int64 __cdecl AK::SoundEngine::Query::GetGameObjectFromPlayingID(unsigned int) */

__uint64 __cdecl AK::SoundEngine::Query::GetGameObjectFromPlayingID(uint param_1)

{
  longlong *plVar1;
  longlong lVar2;
  __uint64 _Var3;
  
                    /* 0x4d4e730  92  ?GetGameObjectFromPlayingID@Query@SoundEngine@AK@@YA_KI@Z */
  plVar1 = DAT_14c790fc0;
  if (DAT_14c790fc0 == (longlong *)0x0) {
    return 0xffffffffffffffff;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c790fc0 + 3));
  if (*(uint *)(plVar1 + 1) != 0) {
    for (lVar2 = *(longlong *)
                  (*plVar1 + ((ulonglong)param_1 % (ulonglong)*(uint *)(plVar1 + 1)) * 8);
        lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x68)) {
      if (*(uint *)(lVar2 + 0x4c) == param_1) goto LAB_1450b2a07;
    }
    lVar2 = 0;
LAB_1450b2a07:
    if (lVar2 != 0) {
      _Var3 = *(__uint64 *)(lVar2 + 0x28);
      goto LAB_1450b2a19;
    }
  }
  _Var3 = 0xffffffffffffffff;
LAB_1450b2a19:
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar1 + 3));
  return _Var3;
}



// FUNCTION 144d4e750 GetPlayingIDsFromGameObject body=35 status=ok
// SIG AKRESULT GetPlayingIDsFromGameObject(__uint64 param_1, uint * param_2, uint * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetPlayingIDsFromGameObject(unsigned
   __int64,unsigned int & __ptr64,unsigned int * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetPlayingIDsFromGameObject(__uint64 param_1,uint *param_2,uint *param_3)

{
  AKRESULT AVar1;
  
                    /* 0x4d4e750  112
                       ?GetPlayingIDsFromGameObject@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEAIPEAI@Z
                        */
  if (DAT_14c790fc0 != 0) {
    AVar1 = FUN_1450b2a40(DAT_14c790fc0,param_1,param_2,param_3);
    return AVar1;
  }
  return 2;
}



// FUNCTION 144d4e780 GetCustomPropertyValue body=352 status=ok
// SIG AKRESULT GetCustomPropertyValue(uint param_1, uint param_2, int * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetCustomPropertyValue(unsigned int,unsigned
   int,int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetCustomPropertyValue(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  AKRESULT AVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res20 [8];
  
                    /* 0x4d4e780  72
                       ?GetCustomPropertyValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@IIAEAH@Z */
  FUN_1450719c0(local_res20);
  piVar3 = DAT_14c791060;
  do {
    while (iVar2 = *piVar3, iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar3 + 2));
      if (*piVar3 < 0) goto LAB_144d4e7c0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar3 + 2));
    }
    LOCK();
    iVar1 = *piVar3;
    if (iVar2 == iVar1) {
      *piVar3 = iVar2 + 1;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
LAB_144d4e7c0:
  plVar6 = (longlong *)0x0;
  plVar7 = plVar6;
  if (piVar3[0x12] != 0) {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(piVar3 + 0x10) +
                   ((ulonglong)param_1 % (ulonglong)(uint)piVar3[0x12]) * 8);
        (plVar7 = plVar6, plVar5 != (longlong *)0x0 &&
        (plVar7 = plVar5, *(uint *)(plVar5 + 2) != param_1)); plVar5 = (longlong *)plVar5[1]) {
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *piVar3;
  do {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar3 + 2));
LAB_144d4e83a:
      plVar5 = plVar7 + -2;
      if (plVar7 == (longlong *)0x0) {
        plVar5 = plVar6;
      }
      if (plVar5 == (longlong *)0x0) {
        AVar4 = 0xf;
      }
      else {
        piVar3 = (int *)(**(code **)(*plVar5 + 0x1a0))(plVar5,param_2);
        if (piVar3 == (int *)0x0) {
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0x24);
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(plVar5[2] + 0x18))();
          }
          AVar4 = 3;
        }
        else {
          *param_3 = *piVar3;
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0x24);
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(plVar5[2] + 0x18))();
          }
          AVar4 = 1;
        }
      }
      FUN_1450719f0(local_res20);
      return AVar4;
    }
    LOCK();
    iVar1 = *piVar3;
    if (iVar2 == iVar1) {
      *piVar3 = iVar2 + -1;
    }
    UNLOCK();
    if (iVar2 == iVar1) {
      if ((iVar2 + -1 == 0) && (0 < piVar3[0xc])) {
        SetEvent(*(HANDLE *)(piVar3 + 0xe));
      }
      goto LAB_144d4e83a;
    }
    iVar2 = *piVar3;
  } while( true );
}



// FUNCTION 144d4e8e0 GetCustomPropertyValue body=352 status=ok
// SIG AKRESULT GetCustomPropertyValue(uint param_1, uint param_2, float * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetCustomPropertyValue(unsigned int,unsigned
   int,float & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetCustomPropertyValue(uint param_1,uint param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  AKRESULT AVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res20 [8];
  
                    /* 0x4d4e8e0  73
                       ?GetCustomPropertyValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@IIAEAM@Z */
  FUN_1450719c0(local_res20);
  piVar1 = DAT_14c791060;
  do {
    while (iVar3 = *piVar1, iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      if (*piVar1 < 0) goto LAB_144d4e920;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = iVar3 + 1;
    }
    UNLOCK();
  } while (iVar3 != iVar2);
LAB_144d4e920:
  plVar7 = (longlong *)0x0;
  plVar8 = plVar7;
  if (piVar1[0x12] != 0) {
    for (plVar6 = *(longlong **)
                   (*(longlong *)(piVar1 + 0x10) +
                   ((ulonglong)param_1 % (ulonglong)(uint)piVar1[0x12]) * 8);
        (plVar8 = plVar7, plVar6 != (longlong *)0x0 &&
        (plVar8 = plVar6, *(uint *)(plVar6 + 2) != param_1)); plVar6 = (longlong *)plVar6[1]) {
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar3 = *piVar1;
  do {
    if (iVar3 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_144d4e99a:
      plVar6 = plVar8 + -2;
      if (plVar8 == (longlong *)0x0) {
        plVar6 = plVar7;
      }
      if (plVar6 == (longlong *)0x0) {
        AVar5 = 0xf;
      }
      else {
        pfVar4 = (float *)(**(code **)(*plVar6 + 0x1a0))(plVar6,param_2);
        if (pfVar4 == (float *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0x24);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(plVar6[2] + 0x18))();
          }
          AVar5 = 3;
        }
        else {
          *param_3 = *pfVar4;
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0x24);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(plVar6[2] + 0x18))();
          }
          AVar5 = 1;
        }
      }
      FUN_1450719f0(local_res20);
      return AVar5;
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = iVar3 + -1;
    }
    UNLOCK();
    if (iVar3 == iVar2) {
      if ((iVar3 + -1 == 0) && (0 < piVar1[0xc])) {
        SetEvent(*(HANDLE *)(piVar1 + 0xe));
      }
      goto LAB_144d4e99a;
    }
    iVar3 = *piVar1;
  } while( true );
}



// FUNCTION 144d4ea40 FUN_144d4ea40 body=6 status=ok
// SIG undefined FUN_144d4ea40(void)

undefined8 FUN_144d4ea40(void)

{
  return 1;
}



// FUNCTION 144d4ea50 FUN_144d4ea50 body=43 status=ok
// SIG undefined FUN_144d4ea50(void)

undefined8 * FUN_144d4ea50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144d4ea80 FUN_144d4ea80 body=125 status=ok
// SIG undefined FUN_144d4ea80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144d4ea80(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_1499d1438;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c7913b8) {
    puVar1[2] = (undefined8 *)param_1[2];
    puVar2 = DAT_14c7913b8;
  }
  DAT_14c7913b8 = puVar2;
  if (param_1 == DAT_14c7913b0) {
    DAT_14c7913b0 = puVar1;
  }
  _DAT_14c7913a8 = _DAT_14c7913a8 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144d4eb00 FUN_144d4eb00 body=39 status=ok
// SIG undefined FUN_144d4eb00(void)

longlong FUN_144d4eb00(longlong param_1)

{
  while (*(char *)(param_1 + 0xe0) == '\0') {
    param_1 = FUN_144d4eb60();
  }
  return param_1 + 0x20;
}



// FUNCTION 144d4eb30 FUN_144d4eb30 body=39 status=ok
// SIG undefined FUN_144d4eb30(void)

longlong FUN_144d4eb30(longlong param_1)

{
  while (*(char *)(param_1 + 0xe1) == '\0') {
    param_1 = FUN_144d4eb60();
  }
  return param_1 + 0x70;
}



// FUNCTION 144d4eb60 FUN_144d4eb60 body=248 status=ok
// SIG undefined FUN_144d4eb60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144d4eb60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (DAT_14c79c4e0 == (undefined8 *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(4,0xf0);
    DAT_14c79c4e0 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_1499d1438;
      puVar2[3] = DAT_14c7913b0;
      puVar2[2] = 0;
      puVar1 = puVar2;
      if (DAT_14c7913b8 != (undefined8 *)0x0) {
        *(undefined8 **)((longlong)DAT_14c7913b0 + 0x10) = puVar2;
        puVar1 = DAT_14c7913b8;
      }
      DAT_14c7913b8 = puVar1;
      _DAT_14c7913a8 = _DAT_14c7913a8 + 1;
      DAT_14c7913b0 = puVar2;
      *puVar2 = &PTR_FUN_1499d1448;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      *(undefined2 *)(puVar2 + 0x1c) = 0;
      DAT_14c79c4e0 = puVar2;
      *(undefined1 *)(puVar2 + 0x1c) = 1;
      *(undefined1 *)((longlong)DAT_14c79c4e0 + 0xe1) = 1;
      return DAT_14c79c4e0;
    }
  }
  return DAT_14c79c4e0;
}



// FUNCTION 144d4ec60 FUN_144d4ec60 body=170 status=ok
// SIG undefined FUN_144d4ec60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144d4ec60(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_1499d1448;
  FUN_1450d1090();
  FUN_1450d08e0(param_1 + 0xe);
  FUN_1450d08e0(param_1 + 4);
  *param_1 = &PTR_FUN_1499d1438;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c7913b8) {
    puVar1[2] = (undefined8 *)param_1[2];
    puVar2 = DAT_14c7913b8;
  }
  DAT_14c7913b8 = puVar2;
  if (param_1 == DAT_14c7913b0) {
    DAT_14c7913b0 = puVar1;
  }
  _DAT_14c7913a8 = _DAT_14c7913a8 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 144d4ed60 Term body=50 status=ok
// SIG void Term(void)

/* void __cdecl AK::MemoryMgr::Term(void) */

void __cdecl AK::MemoryMgr::Term(void)

{
                    /* 0x4d4ed60  336  ?Term@MemoryMgr@AK@@YAXXZ */
  if (DAT_14c79149c != '\0') {
    FUN_1450dc170(0,DAT_14c791488);
    FUN_1450dbfc0(0);
    DAT_14c79149c = '\0';
  }
  FUN_144d4f7c0();
  return;
}



// FUNCTION 144d4eda0 InitForThread body=16 status=ok
// SIG void InitForThread(void)

/* void __cdecl AK::MemoryMgr::InitForThread(void) */

void __cdecl AK::MemoryMgr::InitForThread(void)

{
                    /* 0x4d4eda0  142  ?InitForThread@MemoryMgr@AK@@YAXXZ */
  if (DAT_14c7914a0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144d4edac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c7914a0)();
    return;
  }
  return;
}



// FUNCTION 144d4edb0 TermForThread body=16 status=ok
// SIG void TermForThread(void)

/* void __cdecl AK::MemoryMgr::TermForThread(void) */

void __cdecl AK::MemoryMgr::TermForThread(void)

{
                    /* 0x4d4edb0  339  ?TermForThread@MemoryMgr@AK@@YAXXZ */
  if (DAT_14c7914a8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144d4edbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c7914a8)();
    return;
  }
  return;
}



// FUNCTION 144d4edc0 TrimForThread body=16 status=ok
// SIG void TrimForThread(void)

/* void __cdecl AK::MemoryMgr::TrimForThread(void) */

void __cdecl AK::MemoryMgr::TrimForThread(void)

{
                    /* 0x4d4edc0  340  ?TrimForThread@MemoryMgr@AK@@YAXXZ */
  if (DAT_14c791558 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144d4edcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c791558)();
    return;
  }
  return;
}



// FUNCTION 144d4edd0 DumpToFile body=3 status=ok
// SIG void DumpToFile(wchar_t * param_1)

/* void __cdecl AK::MemoryMgr::DumpToFile(wchar_t const * __ptr64) */

void __cdecl AK::MemoryMgr::DumpToFile(wchar_t *param_1)

{
                    /* 0x4d4edd0  54  ?DumpToFile@MemoryMgr@AK@@YAXPEB_W@Z */
  return;
}



// FUNCTION 144d4ede0 Init body=697 status=ok
// SIG AKRESULT Init(AkMemSettings * param_1)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* enum AKRESULT __cdecl AK::MemoryMgr::Init(struct AkMemSettings * __ptr64) */

AKRESULT __cdecl AK::MemoryMgr::Init(AkMemSettings *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  AKRESULT AVar8;
  ulonglong uVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
                    /* 0x4d4ede0  139  ?Init@MemoryMgr@AK@@YA?AW4AKRESULT@@PEAUAkMemSettings@@@Z */
  bVar7 = IsInitialized();
  if (bVar7) {
    return 1;
  }
  if (param_1 == (AkMemSettings *)0x0) {
    return 2;
  }
  _DAT_14c791550 = *(undefined4 *)(param_1 + 0xb0);
  _DAT_14c7914f8 = *(undefined8 *)(param_1 + 0x58);
  _DAT_14c791500 = *(undefined8 *)(param_1 + 0x60);
  _DAT_14c791518 = *(uint *)(param_1 + 0x78);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (lVar2 == 0) {
      return 2;
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 2;
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return 2;
    }
    if (*(longlong *)(param_1 + 0x30) == 0) {
      return 2;
    }
    DAT_14c7914a0 = *(undefined1 **)param_1;
    DAT_14c7914a8 = *(code **)(param_1 + 8);
    DAT_14c791558 = *(code **)(param_1 + 0xb8);
    _DAT_14c7914b0 = *(code **)(param_1 + 0x10);
    _DAT_14c7914b8 = *(code **)(param_1 + 0x18);
    _DAT_14c7914c0 = *(code **)(param_1 + 0x20);
    _DAT_14c7914c8 = *(code **)(param_1 + 0x28);
    _DAT_14c7914d0 = *(code **)(param_1 + 0x30);
    _DAT_14c7914d8 = *(undefined1 **)(param_1 + 0x38);
    _DAT_14c7914e0 = *(undefined1 **)(param_1 + 0x40);
    goto LAB_144d4f079;
  }
  if (lVar2 != 0) {
    return 2;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return 2;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    return 2;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return 2;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return 2;
  }
  local_48 = &LAB_144d4f1e0;
  local_18 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = 0x10000;
  local_38 = 0x10000;
  if (_DAT_14c791518 != 0) {
    uVar9 = (ulonglong)_DAT_14c791518;
    local_38 = (ulonglong)_DAT_14c791518;
  }
  iVar1 = *(int *)(param_1 + 0xc0);
  local_30 = 0x10000;
  if (0x10000 < uVar9) {
    local_30 = uVar9;
  }
  if (iVar1 == 0) {
LAB_144d4ef18:
    local_28 = 1;
  }
  else if (iVar1 == 1) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_30;
    if (SUB168((ZEXT416(0) << 0x40 | ZEXT816(0x80000)) / auVar5,0) < 2) goto LAB_144d4ef18;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_30;
    local_28 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80000)) / auVar6,0);
  }
  else {
    if ((iVar1 != 2) ||
       (auVar3._8_8_ = 0, auVar3._0_8_ = local_30,
       SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x200000)) / auVar3,0) < 2)) goto LAB_144d4ef18;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_30;
    local_28 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x200000)) / auVar4,0);
  }
  local_58 = _DAT_14c7914f8;
  local_50 = _DAT_14c791500;
  local_40 = lVar2;
  local_20 = lVar2;
  FUN_1450dbb20(0,&local_58);
  DAT_14c791488 = FUN_1450dc150(0);
  DAT_14c7914a0 = &LAB_144d4f1a0;
  DAT_14c7914a8 = FUN_144d4f200;
  DAT_14c791558 = FUN_144d4f250;
  _DAT_14c7914b0 = FUN_144d4f2a0;
  _DAT_14c7914b8 = FUN_144d4f350;
  _DAT_14c7914c0 = FUN_144d4f410;
  _DAT_14c7914c8 = FUN_144d4f500;
  _DAT_14c7914d0 = FUN_144d4f5e0;
  _DAT_14c7914d8 = &LAB_144d4f1d0;
  _DAT_14c7914e0 = &LAB_144d4f680;
  DAT_14c791498 = *(undefined4 *)(param_1 + 0x80);
  DAT_14c79149c = 1;
LAB_144d4f079:
  _DAT_14c7914e8 = *(undefined8 *)(param_1 + 0x48);
  AVar8 = FUN_144d4f7b0();
  return AVar8;
}



// FUNCTION 144d4f0a0 FUN_144d4f0a0 body=253 status=ok
// SIG undefined FUN_144d4f0a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d4f0a0(void)

{
  DWORD DVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  LOCK();
  bVar2 = DAT_14c791470 == -1;
  if (bVar2) {
    DAT_14c791470 = 0;
  }
  UNLOCK();
  if (!bVar2) {
    DVar1 = GetCurrentThreadId();
    if (DAT_14c791480 == DVar1) {
      DAT_14c791480 = GetCurrentThreadId();
      _DAT_14c791474 = _DAT_14c791474 + 1;
      LOCK();
      DAT_14c791470 = DAT_14c791470 + 1;
      UNLOCK();
      return;
    }
    LOCK();
    bVar2 = DAT_14c791470 == -1;
    if (bVar2) {
      DAT_14c791470 = 0;
    }
    UNLOCK();
    if (!bVar2) {
      local_res8.QuadPart = 0;
      local_res10[0].QuadPart = 0;
      QueryPerformanceCounter(&local_res8);
      local_res8.QuadPart = local_res8.QuadPart + (longlong)(DAT_14c79c4d4 * 0.01);
      LOCK();
      bVar2 = DAT_14c791470 == -1;
      if (bVar2) {
        DAT_14c791470 = 0;
      }
      UNLOCK();
      while (!bVar2) {
        QueryPerformanceCounter(local_res10);
        if (local_res8.QuadPart < local_res10[0].QuadPart) {
          LOCK();
          DAT_14c791470 = DAT_14c791470 + 1;
          UNLOCK();
          if (DAT_14c791470 != 0) {
            WaitForSingleObject(DAT_14c791478,0xffffffff);
          }
          break;
        }
        LOCK();
        bVar2 = DAT_14c791470 == -1;
        if (bVar2) {
          DAT_14c791470 = 0;
        }
        UNLOCK();
      }
    }
  }
  DAT_14c791480 = GetCurrentThreadId();
  _DAT_14c791474 = _DAT_14c791474 + 1;
  return;
}



// FUNCTION 144d4f200 FUN_144d4f200 body=65 status=ok
// SIG undefined FUN_144d4f200(void)

void FUN_144d4f200(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf8);
  if (*plVar1 != DAT_14c703fa8) {
    FUN_1450dc170(0);
  }
  *plVar1 = 0;
  return;
}



// FUNCTION 144d4f250 FUN_144d4f250 body=68 status=ok
// SIG undefined FUN_144d4f250(void)

void FUN_144d4f250(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf8);
  if (*plVar1 != DAT_14c703fa8) {
    FUN_1450dc170(0);
    *plVar1 = DAT_14c703fa8;
  }
  return;
}



// FUNCTION 144d4f2a0 FUN_144d4f2a0 body=163 status=ok
// SIG undefined FUN_144d4f2a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144d4f2a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_144d4f690();
  if (lVar3 != DAT_14c791488) {
    uVar4 = thunk_FUN_1450de340(0,lVar3,param_2);
    return uVar4;
  }
  FUN_144d4f0a0();
  uVar4 = thunk_FUN_1450de340(0,lVar3,param_2);
  _DAT_14c791474 = _DAT_14c791474 + -1;
  if (_DAT_14c791474 != 0) {
    LOCK();
    DAT_14c791470 = DAT_14c791470 + -1;
    UNLOCK();
    return uVar4;
  }
  DAT_14c791480 = 0;
  LOCK();
  iVar2 = DAT_14c791470 + -1;
  UNLOCK();
  iVar1 = DAT_14c791470 + -1;
  DAT_14c791470 = iVar2;
  if (-1 < iVar1) {
    ReleaseSemaphore(DAT_14c791478,1,(LPLONG)0x0);
  }
  return uVar4;
}



// FUNCTION 144d4f350 FUN_144d4f350 body=192 status=ok
// SIG undefined FUN_144d4f350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144d4f350(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_144d4f690();
  if (lVar3 != DAT_14c791488) {
    uVar4 = thunk_FUN_1450de4a0(0,lVar3,param_3,param_2);
    return uVar4;
  }
  FUN_144d4f0a0();
  uVar4 = thunk_FUN_1450de4a0(0,lVar3,param_3,param_2);
  _DAT_14c791474 = _DAT_14c791474 + -1;
  if (_DAT_14c791474 != 0) {
    LOCK();
    DAT_14c791470 = DAT_14c791470 + -1;
    UNLOCK();
    return uVar4;
  }
  DAT_14c791480 = 0;
  LOCK();
  iVar2 = DAT_14c791470 + -1;
  UNLOCK();
  iVar1 = DAT_14c791470 + -1;
  DAT_14c791470 = iVar2;
  if (-1 < iVar1) {
    ReleaseSemaphore(DAT_14c791478,1,(LPLONG)0x0);
  }
  return uVar4;
}



// FUNCTION 144d4f410 FUN_144d4f410 body=230 status=ok
// SIG undefined FUN_144d4f410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144d4f410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_144d4f690(param_1,param_3);
  lVar4 = FUN_1450dc360(0,param_2);
  if ((lVar4 != DAT_14c791488) && (lVar3 != DAT_14c791488)) {
    uVar5 = FUN_1450dc1b0(0,lVar3,param_2,param_3,0);
    return uVar5;
  }
  FUN_144d4f0a0();
  uVar5 = FUN_1450dc1b0(0,lVar3,param_2,param_3,0);
  _DAT_14c791474 = _DAT_14c791474 + -1;
  if (_DAT_14c791474 != 0) {
    LOCK();
    DAT_14c791470 = DAT_14c791470 + -1;
    UNLOCK();
    return uVar5;
  }
  DAT_14c791480 = 0;
  LOCK();
  iVar2 = DAT_14c791470 + -1;
  UNLOCK();
  iVar1 = DAT_14c791470 + -1;
  DAT_14c791470 = iVar2;
  if (-1 < iVar1) {
    ReleaseSemaphore(DAT_14c791478,1,(LPLONG)0x0);
  }
  return uVar5;
}



// FUNCTION 144d4f500 FUN_144d4f500 body=217 status=ok
// SIG undefined FUN_144d4f500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144d4f500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_144d4f690(param_1,param_3);
  lVar4 = FUN_1450dc360(0,param_2);
  if ((lVar4 == DAT_14c791488) || (lVar3 == DAT_14c791488)) {
    FUN_144d4f0a0();
    uVar5 = FUN_1450dc1d0(0,lVar3,param_2,param_4,param_3,0);
    _DAT_14c791474 = _DAT_14c791474 + -1;
    if (_DAT_14c791474 == 0) {
      DAT_14c791480 = 0;
      LOCK();
      iVar2 = DAT_14c791470 + -1;
      UNLOCK();
      iVar1 = DAT_14c791470 + -1;
      DAT_14c791470 = iVar2;
      if (-1 < iVar1) {
        ReleaseSemaphore(DAT_14c791478,1,(LPLONG)0x0);
      }
    }
    else {
      LOCK();
      DAT_14c791470 = DAT_14c791470 + -1;
      UNLOCK();
    }
  }
  else {
    uVar5 = FUN_1450dc1d0(0,lVar3,param_2,param_4,param_3,0);
  }
  return uVar5;
}



// FUNCTION 144d4f5e0 FUN_144d4f5e0 body=160 status=ok
// SIG undefined FUN_144d4f5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d4f5e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_1450dc360(0);
  if (lVar3 == DAT_14c791488) {
    FUN_144d4f0a0();
    FUN_1450dc2d0(0,lVar3,param_2);
    _DAT_14c791474 = _DAT_14c791474 + -1;
    if (_DAT_14c791474 != 0) {
      LOCK();
      DAT_14c791470 = DAT_14c791470 + -1;
      UNLOCK();
      return;
    }
    DAT_14c791480 = 0;
    LOCK();
    iVar2 = DAT_14c791470 + -1;
    UNLOCK();
    iVar1 = DAT_14c791470 + -1;
    DAT_14c791470 = iVar2;
    if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x000144d4f661. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSemaphore(DAT_14c791478,1,(LPLONG)0x0);
      return;
    }
  }
  else {
    FUN_1450dc2d0(0,lVar3,param_2);
  }
  return;
}



// FUNCTION 144d4f690 FUN_144d4f690 body=126 status=ok
// SIG undefined FUN_144d4f690(void)

longlong FUN_144d4f690(uint param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (((param_1 >> 0x1d & 1) == 0) && (param_2 <= DAT_14c791498)) {
    plVar2 = (longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf8)
    ;
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      if (lVar1 == DAT_14c703fa8) {
        lVar1 = FUN_1450dc150(0);
        *plVar2 = lVar1;
        FUN_1450dc2e0(0,lVar1);
      }
      return lVar1;
    }
  }
  return DAT_14c791488;
}



// FUNCTION 144d4f710 IsInitialized body=8 status=ok
// SIG bool IsInitialized(void)

/* bool __cdecl AK::MemoryMgr::IsInitialized(void) */

bool __cdecl AK::MemoryMgr::IsInitialized(void)

{
                    /* 0x4d4f710  144  ?IsInitialized@MemoryMgr@AK@@YA_NXZ */
  return (bool)DAT_14c791568;
}



// FUNCTION 144d4f720 Malloc body=7 status=ok
// SIG void * Malloc(int param_1, __uint64 param_2)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void * __ptr64 __cdecl AK::MemoryMgr::Malloc(int,unsigned __int64) */

void * __cdecl AK::MemoryMgr::Malloc(int param_1,__uint64 param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144d4f720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x4d4f720  162  ?Malloc@MemoryMgr@AK@@YAPEAXH_K@Z */
  pvVar1 = (void *)(*_DAT_14c7914b0)();
  return pvVar1;
}



// FUNCTION 144d4f730 Realloc body=7 status=ok
// SIG void * Realloc(int param_1, void * param_2, __uint64 param_3)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void * __ptr64 __cdecl AK::MemoryMgr::Realloc(int,void * __ptr64,unsigned __int64) */

void * __cdecl AK::MemoryMgr::Realloc(int param_1,void *param_2,__uint64 param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144d4f730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x4d4f730  221  ?Realloc@MemoryMgr@AK@@YAPEAXHPEAX_K@Z */
  pvVar1 = (void *)(*_DAT_14c7914c0)();
  return pvVar1;
}



// FUNCTION 144d4f740 ReallocAligned body=7 status=ok
// SIG void * ReallocAligned(int param_1, void * param_2, __uint64 param_3, uint param_4)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void * __ptr64 __cdecl AK::MemoryMgr::ReallocAligned(int,void * __ptr64,unsigned __int64,unsigned
   int) */

void * __cdecl
AK::MemoryMgr::ReallocAligned(int param_1,void *param_2,__uint64 param_3,uint param_4)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144d4f740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x4d4f740  222  ?ReallocAligned@MemoryMgr@AK@@YAPEAXHPEAX_KI@Z */
  pvVar1 = (void *)(*_DAT_14c7914c8)();
  return pvVar1;
}



// FUNCTION 144d4f750 Free body=7 status=ok
// SIG void Free(int param_1, void * param_2)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl AK::MemoryMgr::Free(int,void * __ptr64) */

void __cdecl AK::MemoryMgr::Free(int param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144d4f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x4d4f750  61  ?Free@MemoryMgr@AK@@YAXHPEAX@Z */
  (*_DAT_14c7914d0)();
  return;
}



// FUNCTION 144d4f760 Malign body=7 status=ok
// SIG void * Malign(int param_1, __uint64 param_2, uint param_3)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void * __ptr64 __cdecl AK::MemoryMgr::Malign(int,unsigned __int64,unsigned int) */

void * __cdecl AK::MemoryMgr::Malign(int param_1,__uint64 param_2,uint param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144d4f760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x4d4f760  161  ?Malign@MemoryMgr@AK@@YAPEAXH_KI@Z */
  pvVar1 = (void *)(*_DAT_14c7914b8)();
  return pvVar1;
}



// FUNCTION 144d4f770 GetCategoryStats body=3 status=ok
// SIG void GetCategoryStats(int param_1, CategoryStats * param_2)

/* void __cdecl AK::MemoryMgr::GetCategoryStats(int,struct AK::MemoryMgr::CategoryStats & __ptr64)
    */

void __cdecl AK::MemoryMgr::GetCategoryStats(int param_1,CategoryStats *param_2)

{
                    /* 0x4d4f770  69  ?GetCategoryStats@MemoryMgr@AK@@YAXHAEAUCategoryStats@12@@Z */
  return;
}



// FUNCTION 144d4f780 GetGlobalStats body=11 status=ok
// SIG void GetGlobalStats(GlobalStats * param_1)

/* void __cdecl AK::MemoryMgr::GetGlobalStats(struct AK::MemoryMgr::GlobalStats & __ptr64) */

void __cdecl AK::MemoryMgr::GetGlobalStats(GlobalStats *param_1)

{
                    /* 0x4d4f780  94  ?GetGlobalStats@MemoryMgr@AK@@YAXAEAUGlobalStats@12@@Z */
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 144d4f790 StartProfileThreadUsage body=3 status=ok
// SIG void StartProfileThreadUsage(void)

/* void __cdecl AK::MemoryMgr::StartProfileThreadUsage(void) */

void __cdecl AK::MemoryMgr::StartProfileThreadUsage(void)

{
                    /* 0x4d4f790  325  ?StartProfileThreadUsage@MemoryMgr@AK@@YAXXZ */
  return;
}



// FUNCTION 144d4f7a0 StopProfileThreadUsage body=3 status=ok
// SIG __uint64 StopProfileThreadUsage(void)

/* unsigned __int64 __cdecl AK::MemoryMgr::StopProfileThreadUsage(void) */

__uint64 __cdecl AK::MemoryMgr::StopProfileThreadUsage(void)

{
                    /* 0x4d4f7a0  332  ?StopProfileThreadUsage@MemoryMgr@AK@@YA_KXZ */
  return 0;
}



// FUNCTION 144d4f7b0 FUN_144d4f7b0 body=13 status=ok
// SIG undefined FUN_144d4f7b0(void)

undefined8 FUN_144d4f7b0(void)

{
  DAT_14c791568 = 1;
  return 1;
}



// FUNCTION 144d4f7c0 FUN_144d4f7c0 body=45 status=ok
// SIG undefined FUN_144d4f7c0(void)

void FUN_144d4f7c0(void)

{
  if (DAT_14c791568 != '\0') {
    memset(&DAT_14c7914a0,0,200);
    DAT_14c791568 = '\0';
  }
  return;
}



// FUNCTION 144d4f7f0 FUN_144d4f7f0 body=43 status=ok
// SIG undefined FUN_144d4f7f0(void)

undefined8 * FUN_144d4f7f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d15d8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144d4f820 FUN_144d4f820 body=109 status=ok
// SIG undefined FUN_144d4f820(void)

void FUN_144d4f820(wchar_t *param_1,wchar_t *param_2,rsize_t param_3)

{
  longlong lVar1;
  ulonglong _MaxCount;
  longlong lVar2;
  
  _MaxCount = param_3 - 1;
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (param_2[lVar1] != L'\0');
  if (lVar2 + 2U <= _MaxCount) {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (param_2[lVar1] != L'\0');
    _MaxCount = lVar2 + 2;
  }
  wcsncpy_s(param_1,param_3,param_2,_MaxCount);
  param_1[_MaxCount] = L'\0';
  return;
}



// FUNCTION 144d4f890 Create body=114 status=ok
// SIG IAkStreamMgr * Create(AkStreamMgrSettings * param_1)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class AK::IAkStreamMgr * __ptr64 __cdecl AK::StreamMgr::Create(struct AkStreamMgrSettings const &
   __ptr64) */

IAkStreamMgr * __cdecl AK::StreamMgr::Create(AkStreamMgrSettings *param_1)

{
  bool bVar1;
  IAkStreamMgr *pIVar2;
  
                    /* 0x4d4f890  48
                       ?Create@StreamMgr@AK@@YAPEAVIAkStreamMgr@2@AEBUAkStreamMgrSettings@@@Z */
  bVar1 = MemoryMgr::IsInitialized();
  if (!bVar1) {
    return (IAkStreamMgr *)0x0;
  }
  if (IAkStreamMgr::m_pStreamMgr == (IAkStreamMgr *)0x0) {
    _DAT_14c7915a0 = 0;
    pIVar2 = MemoryMgr::Malloc(7,0x18);
    if (pIVar2 != (IAkStreamMgr *)0x0) {
      *(undefined8 *)(pIVar2 + 8) = 0;
      *(undefined8 *)(pIVar2 + 0x10) = 0;
      *(undefined ***)pIVar2 = &PTR_FUN_1499d1640;
      IAkStreamMgr::m_pStreamMgr = pIVar2;
      return pIVar2;
    }
  }
  return IAkStreamMgr::m_pStreamMgr;
}



// FUNCTION 144d4f910 PerformIO body=6 status=ok
// SIG AKRESULT PerformIO(void)

/* enum AKRESULT __cdecl AK::StreamMgr::PerformIO(void) */

AKRESULT __cdecl AK::StreamMgr::PerformIO(void)

{
                    /* 0x4d4f910  173  ?PerformIO@StreamMgr@AK@@YA?AW4AKRESULT@@XZ */
  return 4;
}



// FUNCTION 144d4f920 SetCurrentLanguage body=249 status=ok
// SIG AKRESULT SetCurrentLanguage(wchar_t * param_1)

/* enum AKRESULT __cdecl AK::StreamMgr::SetCurrentLanguage(wchar_t const * __ptr64) */

AKRESULT __cdecl AK::StreamMgr::SetCurrentLanguage(wchar_t *param_1)

{
  ulonglong uVar1;
  longlong lVar3;
  undefined8 *puVar5;
  uint uVar6;
  rsize_t _MaxCount;
  ulonglong uVar2;
  longlong lVar4;
  
                    /* 0x4d4f920  280  ?SetCurrentLanguage@StreamMgr@AK@@YA?AW4AKRESULT@@PEB_W@Z */
  if (param_1 == (wchar_t *)0x0) {
    return 2;
  }
  uVar1 = 0xffffffffffffffff;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while (param_1[uVar1] != L'\0');
  if ((uVar1 < 0x20) && ((uVar1 == 0 || ((param_1[uVar2] != L'/' && (param_1[uVar2] != L'\\')))))) {
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (param_1[lVar3] != L'\0');
    lVar3 = -1;
    if (lVar4 + 2U < 0x20) {
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (param_1[lVar3] != L'\0');
      _MaxCount = lVar4 + 2;
    }
    else {
      _MaxCount = 0x1f;
    }
    wcsncpy_s((wchar_t *)&DAT_14c7915a0,0x20,param_1,_MaxCount);
    *(undefined2 *)(&DAT_14c7915a0 + _MaxCount * 2) = 0;
    uVar6 = DAT_14c791598;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      puVar5 = (undefined8 *)((ulonglong)uVar6 * 0x10 + DAT_14c791590);
      (*(code *)*puVar5)(&DAT_14c7915a0,puVar5[1]);
    }
    return 1;
  }
  return 2;
}



// FUNCTION 144d4fa20 AddLanguageChangeObserver body=156 status=ok
// SIG AKRESULT AddLanguageChangeObserver(_func_void_wchar_t_ptr_void_ptr * param_1, void * param_2)

/* enum AKRESULT __cdecl AK::StreamMgr::AddLanguageChangeObserver(void (__cdecl*)(wchar_t const *
   __ptr64 const,void * __ptr64),void * __ptr64) */

AKRESULT __cdecl
AK::StreamMgr::AddLanguageChangeObserver(_func_void_wchar_t_ptr_void_ptr *param_1,void *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
                    /* 0x4d4fa20  23
                       ?AddLanguageChangeObserver@StreamMgr@AK@@YA?AW4AKRESULT@@P6AXQEB_WPEAX@Z1@Z
                        */
  uVar3 = (ulonglong)DAT_14c791598;
  uVar5 = (ulonglong)DAT_14c79159c;
  uVar4 = uVar3;
  if (uVar5 <= uVar3) {
    cVar1 = FUN_144d51630(&DAT_14c791590);
    if (cVar1 == '\0') {
      return 2;
    }
    uVar5 = (ulonglong)DAT_14c79159c;
    uVar4 = (ulonglong)DAT_14c791598;
  }
  if (uVar3 < uVar5) {
    DAT_14c791598 = (int)uVar4 + 1;
    puVar2 = (undefined8 *)(uVar4 * 0x10 + DAT_14c791590);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      puVar2[1] = param_2;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 144d4fac0 RemoveLanguageChangeObserver body=142 status=ok
// SIG void RemoveLanguageChangeObserver(void * param_1)

/* void __cdecl AK::StreamMgr::RemoveLanguageChangeObserver(void * __ptr64) */

void __cdecl AK::StreamMgr::RemoveLanguageChangeObserver(void *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *_Dst;
  void *pvVar3;
  
                    /* 0x4d4fac0  237  ?RemoveLanguageChangeObserver@StreamMgr@AK@@YAXPEAX@Z */
  _Dst = DAT_14c791590;
  pvVar3 = DAT_14c791590;
  uVar2 = DAT_14c791598;
  if (DAT_14c791590 != (void *)((ulonglong)DAT_14c791598 * 0x10 + (longlong)DAT_14c791590)) {
    do {
      if (*(void **)((longlong)_Dst + 8) == param_1) {
        pvVar1 = (void *)((ulonglong)(uVar2 - 1) * 0x10 + (longlong)pvVar3);
        if (_Dst < pvVar1) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                  (ulonglong)((int)pvVar1 - (int)_Dst & 0xfffffff0));
          pvVar3 = DAT_14c791590;
          uVar2 = DAT_14c791598;
        }
        uVar2 = uVar2 - 1;
        DAT_14c791598 = uVar2;
      }
      else {
        _Dst = (void *)((longlong)_Dst + 0x10);
      }
    } while (_Dst != (void *)((ulonglong)uVar2 * 0x10 + (longlong)pvVar3));
  }
  return;
}



// FUNCTION 144d4fb50 FlushAllCaches body=71 status=ok
// SIG void FlushAllCaches(void)

/* void __cdecl AK::StreamMgr::FlushAllCaches(void) */

void __cdecl AK::StreamMgr::FlushAllCaches(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
                    /* 0x4d4fb50  60  ?FlushAllCaches@StreamMgr@AK@@YAXXZ */
  uVar3 = 0;
  uVar1 = DAT_14c791588;
  if (DAT_14c791588 != 0) {
    do {
      if (*(longlong *)(DAT_14c791580 + uVar3 * 8) != 0) {
        FUN_1450df340();
        uVar1 = DAT_14c791588;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 144d4fba0 FUN_144d4fba0 body=228 status=ok
// SIG undefined FUN_144d4fba0(void)

/* WARNING: Removing unreachable block (ram,0x000144d4fc56) */

undefined8 * FUN_144d4fba0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar2 = AK::MemoryMgr::Malloc(7,0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 6) = param_3;
    if (param_2 == (undefined8 *)0x0) {
      *(uint *)((longlong)puVar2 + 0x34) = *(uint *)((longlong)puVar2 + 0x34) & 0xfffffffd | 1;
    }
    else {
      *(uint *)((longlong)puVar2 + 0x34) = *(uint *)((longlong)puVar2 + 0x34) | 3;
      uVar1 = param_2[1];
      puVar2[1] = *param_2;
      puVar2[2] = uVar1;
      uVar1 = param_2[3];
      puVar2[3] = param_2[2];
      puVar2[4] = uVar1;
      puVar2[5] = param_2[4];
    }
    lVar4 = -1;
    do {
      lVar5 = lVar4;
      lVar4 = lVar5 + 1;
    } while (*(short *)(param_1 + lVar4 * 2) != 0);
    lVar5 = lVar5 + 2;
    pvVar3 = AK::MemoryMgr::Malloc(7,lVar5 * 2);
    *puVar2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      AK::MemoryMgr::Free(7,puVar2);
      puVar2 = (undefined8 *)0x0;
    }
    else {
      FUN_144d4f820(pvVar3,param_1,lVar5);
    }
  }
  return puVar2;
}



// FUNCTION 144d4fc90 FUN_144d4fc90 body=118 status=ok
// SIG undefined FUN_144d4fc90(void)

void FUN_144d4fc90(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = AK::MemoryMgr::Malloc(7,0x38);
  if (puVar2 != (undefined4 *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      puVar2[0xd] = puVar2[0xd] & 0xfffffffc;
    }
    else {
      puVar2[0xd] = puVar2[0xd] & 0xfffffffe | 2;
      uVar1 = param_2[1];
      *(undefined8 *)(puVar2 + 2) = *param_2;
      *(undefined8 *)(puVar2 + 4) = uVar1;
      uVar1 = param_2[3];
      *(undefined8 *)(puVar2 + 6) = param_2[2];
      *(undefined8 *)(puVar2 + 8) = uVar1;
      *(undefined8 *)(puVar2 + 10) = param_2[4];
    }
    *puVar2 = param_1;
    puVar2[0xc] = param_3;
  }
  return;
}



// FUNCTION 144d4fd10 FUN_144d4fd10 body=51 status=ok
// SIG undefined FUN_144d4fd10(void)

void FUN_144d4fd10(undefined8 *param_1)

{
  if (((*(byte *)((longlong)param_1 + 0x34) & 1) != 0) && ((void *)*param_1 != (void *)0x0)) {
    AK::MemoryMgr::Free(7,(void *)*param_1);
  }
  AK::MemoryMgr::Free(7,param_1);
  return;
}



// FUNCTION 144d4fd50 FUN_144d4fd50 body=235 status=ok
// SIG undefined FUN_144d4fd50(void)

undefined8 FUN_144d4fd50(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char local_res8 [8];
  int local_res18 [4];
  undefined1 local_228 [456];
  undefined8 uStack_60;
  char *local_38;
  longlong *local_30;
  
  puVar2 = param_1 + 1;
  local_res8[0] = '\x01';
  local_38 = local_res8;
  if ((*(uint *)((longlong)param_1 + 0x34) & 2) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  local_30 = param_2;
  if ((*(uint *)((longlong)param_1 + 0x34) & 1) == 0) {
    uStack_60 = 0x144d4fdad;
    uVar1 = (**(code **)(*DAT_14c791570 + 8))
                      (DAT_14c791570,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 6),puVar2);
  }
  else {
    uStack_60 = 0x144d4fda6;
    uVar1 = (**(code **)(*DAT_14c791570 + 0x10))();
  }
  local_res18[0] = (int)uVar1;
  if ((local_res18[0] != 1) ||
     (((*param_2 < 1 && (*(int *)(param_1 + 6) == 0)) || (local_res8[0] == '\0')))) {
    memset(local_228,0,0x104);
    if ((*(byte *)((longlong)param_1 + 0x34) & 1) == 0) {
      (**(code **)(*DAT_14c791570 + 0x18))
                (DAT_14c791570,local_res18,*(undefined4 *)param_1,puVar2,
                 *(undefined4 *)(param_1 + 6),local_228,0x104);
    }
    else {
      (**(code **)(*DAT_14c791570 + 0x20))(DAT_14c791570,local_res18,*param_1);
    }
    uVar1 = 2;
  }
  return uVar1;
}



// FUNCTION 144d4fe40 FUN_144d4fe40 body=219 status=ok
// SIG undefined FUN_144d4fe40(void)

void FUN_144d4fe40(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)DAT_14c791588;
  DAT_14c791570 = 0;
  plVar1 = DAT_14c791580;
  plVar2 = DAT_14c791580;
  if (DAT_14c791580 != DAT_14c791580 + uVar3) {
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x28))();
        uVar3 = (ulonglong)DAT_14c791588;
        plVar2 = DAT_14c791580;
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != plVar2 + uVar3);
  }
  if (plVar2 != (longlong *)0x0) {
    DAT_14c791588 = 0;
    AK::MemoryMgr::Free(7,plVar2);
    DAT_14c791580 = (longlong *)0x0;
    DAT_14c79158c = 0;
  }
  if (DAT_14c791590 != (void *)0x0) {
    DAT_14c791598 = 0;
    AK::MemoryMgr::Free(7,DAT_14c791590);
    DAT_14c791590 = (void *)0x0;
    DAT_14c79159c = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(7,param_1);
  }
  return;
}



// FUNCTION 144d4ff20 FUN_144d4ff20 body=109 status=ok
// SIG undefined FUN_144d4ff20(void)

void FUN_144d4ff20(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = DAT_14c791588;
  if (DAT_14c791588 != 0) {
    do {
      lVar1 = *(longlong *)(DAT_14c791580 + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_1450df2e0(lVar1,param_1 == lVar1,param_2);
        uVar4 = DAT_14c791588;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar4);
  }
  return;
}



// FUNCTION 144d4ff90 FUN_144d4ff90 body=450 status=ok
// SIG undefined FUN_144d4ff90(void)

undefined4
FUN_144d4ff90(undefined8 param_1,longlong param_2,longlong param_3,int param_4,undefined8 *param_5,
             char param_6)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char local_res10 [8];
  char *pcVar5;
  undefined8 local_28 [2];
  undefined4 uVar6;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 0x19) = 0;
  }
  plVar3 = AK::MemoryMgr::Malloc(7,0x38);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0;
    pcVar5 = local_res10;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    local_res10[0] = param_6;
    iVar2 = (**(code **)(*DAT_14c791570 + 0x10))
                      (DAT_14c791570,param_2,param_4,param_3,pcVar5,plVar3);
    uVar6 = (undefined4)((ulonglong)pcVar5 >> 0x20);
    if ((iVar2 == 1) && (((0 < *plVar3 || (local_res10[0] == '\0')) || (param_4 != 0)))) {
      if ((*(uint *)(plVar3 + 5) < DAT_14c791588) &&
         (lVar1 = *(longlong *)(DAT_14c791580 + (ulonglong)*(uint *)(plVar3 + 5) * 8), lVar1 != 0))
      {
        local_28[0] = 0;
        plVar4 = (longlong *)FUN_1450df0a0(lVar1,plVar3,param_4,local_28);
        if (plVar4 != (longlong *)0x0) {
          if (local_res10[0] == '\0') {
            iVar2 = FUN_1450dfeb0(plVar4,plVar3,param_2,param_3,CONCAT44(uVar6,param_4));
            if (iVar2 != 1) {
              *(undefined1 *)(plVar4 + 0xf) = 1;
              *(undefined1 *)((longlong)plVar4 + 0x7c) = 0;
              (**(code **)(*plVar4 + 0x10))(plVar4);
              return 2;
            }
          }
          else {
            plVar4[5] = (longlong)plVar3;
            *(undefined1 *)((longlong)plVar4 + 0x79) = 1;
          }
          *param_5 = local_28[0];
          return 1;
        }
        if (local_res10[0] != '\0') {
          (**(code **)(**(longlong **)(lVar1 + 0x428) + 8))(*(longlong **)(lVar1 + 0x428),plVar3);
        }
      }
      AK::MemoryMgr::Free(7,plVar3);
      return 2;
    }
    AK::MemoryMgr::Free(7,plVar3);
    if (iVar2 == 0x42) {
      return 0x42;
    }
    return 2;
  }
  return 2;
}



// FUNCTION 144d50160 FUN_144d50160 body=426 status=ok
// SIG undefined FUN_144d50160(void)

undefined4
FUN_144d50160(undefined8 param_1,undefined4 param_2,longlong param_3,int param_4,undefined8 *param_5
             ,char param_6)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char local_res18 [8];
  char *pcVar5;
  undefined8 local_28 [2];
  undefined4 uVar6;
  
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 0x19) = 0;
  }
  plVar3 = AK::MemoryMgr::Malloc(7,0x38);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0;
    pcVar5 = local_res18;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    local_res18[0] = param_6;
    iVar2 = (**(code **)(*DAT_14c791570 + 8))(DAT_14c791570,param_2,param_4,param_3,pcVar5,plVar3);
    uVar6 = (undefined4)((ulonglong)pcVar5 >> 0x20);
    if ((iVar2 == 1) && (((0 < *plVar3 || (local_res18[0] == '\0')) || (param_4 != 0)))) {
      if ((*(uint *)(plVar3 + 5) < DAT_14c791588) &&
         (lVar1 = *(longlong *)(DAT_14c791580 + (ulonglong)*(uint *)(plVar3 + 5) * 8), lVar1 != 0))
      {
        local_28[0] = 0;
        plVar4 = (longlong *)FUN_1450df0a0(lVar1,plVar3,param_4,local_28);
        if (plVar4 != (longlong *)0x0) {
          if (local_res18[0] == '\0') {
            iVar2 = FUN_1450dfef0(plVar4,plVar3,param_2,param_3,CONCAT44(uVar6,param_4));
            if (iVar2 != 1) {
              *(undefined1 *)(plVar4 + 0xf) = 1;
              *(undefined1 *)((longlong)plVar4 + 0x7c) = 0;
              (**(code **)(*plVar4 + 0x10))(plVar4);
              return 2;
            }
          }
          else {
            plVar4[5] = (longlong)plVar3;
            *(undefined1 *)((longlong)plVar4 + 0x79) = 1;
          }
          *param_5 = local_28[0];
          return 1;
        }
        if (local_res18[0] != '\0') {
          (**(code **)(**(longlong **)(lVar1 + 0x428) + 8))(*(longlong **)(lVar1 + 0x428),plVar3);
        }
      }
      AK::MemoryMgr::Free(7,plVar3);
      return 2;
    }
    AK::MemoryMgr::Free(7,plVar3);
    if (iVar2 == 0x42) {
      return 0x42;
    }
    return 2;
  }
  return 2;
}



// FUNCTION 144d50310 FUN_144d50310 body=552 status=ok
// SIG undefined FUN_144d50310(void)

undefined8
FUN_144d50310(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,char *param_5,
             longlong *param_6,char param_7)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char local_res10 [8];
  undefined1 local_248 [456];
  undefined8 uStack_80;
  char *local_58;
  longlong *local_50;
  int local_38 [2];
  longlong local_30;
  
  if (((param_2 == 0) || (*param_4 <= 0.0 && *param_4 != 0.0)) ||
     (100 < *(byte *)((longlong)param_4 + 0xd))) {
    uVar5 = 0x1f;
  }
  else {
    uVar6 = 0xffffffff;
    if (param_3 != 0) {
      uVar6 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined1 *)(param_3 + 0x19) = 1;
    }
    uStack_80 = 0x144d50375;
    plVar3 = AK::MemoryMgr::Malloc(7,0x38);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      local_58 = local_res10;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      local_res10[0] = param_7;
      uStack_80 = 0x144d503c0;
      local_50 = plVar3;
      local_38[0] = (**(code **)(*DAT_14c791570 + 0x10))(DAT_14c791570,param_2,0,param_3);
      if ((local_38[0] != 1) || ((local_res10[0] != '\0' && (*plVar3 < 1)))) {
        uStack_80 = 0x144d504be;
        AK::MemoryMgr::Free(7,plVar3);
        memset(local_248,0,0x104);
        (**(code **)(*DAT_14c791570 + 0x20))
                  (DAT_14c791570,local_38,param_2,param_3,0,local_248,0x104);
        if (local_38[0] != 0x42) {
          return 2;
        }
        return 0x42;
      }
      if ((*(uint *)(plVar3 + 5) < DAT_14c791588) &&
         (lVar1 = *(longlong *)(DAT_14c791580 + (ulonglong)*(uint *)(plVar3 + 5) * 8), lVar1 != 0))
      {
        local_50 = &local_30;
        local_30 = 0;
        local_58 = param_5;
        uStack_80 = 0x144d50424;
        plVar4 = (longlong *)FUN_1450df120(lVar1,plVar3,uVar6,param_4);
        if (plVar4 != (longlong *)0x0) {
          if (local_res10[0] == '\0') {
            local_58 = (char *)((ulonglong)local_58 & 0xffffffff00000000);
            uStack_80 = 0x144d50494;
            iVar2 = FUN_1450dfeb0(plVar4,plVar3,param_2,param_3);
            if (iVar2 != 1) {
              *(undefined1 *)(plVar4 + 0xf) = 1;
              *(undefined1 *)((longlong)plVar4 + 0x7c) = 0;
              uStack_80 = 0x144d504aa;
              (**(code **)(*plVar4 + 0x10))(plVar4);
              return 2;
            }
          }
          else {
            plVar4[5] = (longlong)plVar3;
            *(undefined1 *)((longlong)plVar4 + 0x79) = 1;
          }
          *param_6 = local_30;
          return 1;
        }
        if (local_res10[0] != '\0') {
          uStack_80 = 0x144d50441;
          (**(code **)(**(longlong **)(lVar1 + 0x428) + 8))(*(longlong **)(lVar1 + 0x428),plVar3);
        }
      }
      uStack_80 = 0x144d5044e;
      AK::MemoryMgr::Free(7,plVar3);
    }
    uVar5 = 2;
  }
  return uVar5;
}



// FUNCTION 144d50540 FUN_144d50540 body=547 status=ok
// SIG undefined FUN_144d50540(void)

undefined8
FUN_144d50540(undefined8 param_1,undefined4 param_2,longlong param_3,float *param_4,char *param_5,
             longlong *param_6,char param_7)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char local_res20 [8];
  undefined1 local_248 [456];
  undefined8 uStack_80;
  char *local_58;
  longlong *local_50;
  int local_38 [2];
  longlong local_30;
  
  if ((*param_4 <= 0.0 && *param_4 != 0.0) || (100 < *(byte *)((longlong)param_4 + 0xd))) {
    uVar5 = 0x1f;
  }
  else {
    uVar6 = 0xffffffff;
    if (param_3 != 0) {
      *(undefined1 *)(param_3 + 0x19) = 1;
      uVar6 = 0xffffffff;
      if (*(int *)(param_3 + 0x1c) != -1) {
        uVar6 = *(undefined4 *)(param_3 + 0x1c);
      }
    }
    uStack_80 = 0x144d505a0;
    plVar3 = AK::MemoryMgr::Malloc(7,0x38);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      local_58 = local_res20;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      local_res20[0] = param_7;
      uStack_80 = 0x144d505eb;
      local_50 = plVar3;
      local_38[0] = (**(code **)(*DAT_14c791570 + 8))(DAT_14c791570,param_2,0,param_3);
      if ((local_38[0] != 1) || ((local_res20[0] != '\0' && (*plVar3 < 1)))) {
        uStack_80 = 0x144d506e9;
        AK::MemoryMgr::Free(7,plVar3);
        memset(local_248,0,0x104);
        (**(code **)(*DAT_14c791570 + 0x18))
                  (DAT_14c791570,local_38,param_2,param_3,0,local_248,0x104);
        if (local_38[0] != 0x42) {
          return 2;
        }
        return 0x42;
      }
      if ((*(uint *)(plVar3 + 5) < DAT_14c791588) &&
         (lVar1 = *(longlong *)(DAT_14c791580 + (ulonglong)*(uint *)(plVar3 + 5) * 8), lVar1 != 0))
      {
        local_50 = &local_30;
        local_30 = 0;
        local_58 = param_5;
        uStack_80 = 0x144d5064f;
        plVar4 = (longlong *)FUN_1450df120(lVar1,plVar3,uVar6,param_4);
        if (plVar4 != (longlong *)0x0) {
          if (local_res20[0] == '\0') {
            local_58 = (char *)((ulonglong)local_58 & 0xffffffff00000000);
            uStack_80 = 0x144d506bf;
            iVar2 = FUN_1450dfef0(plVar4,plVar3,param_2,param_3);
            if (iVar2 != 1) {
              *(undefined1 *)(plVar4 + 0xf) = 1;
              *(undefined1 *)((longlong)plVar4 + 0x7c) = 0;
              uStack_80 = 0x144d506d5;
              (**(code **)(*plVar4 + 0x10))(plVar4);
              return 2;
            }
          }
          else {
            plVar4[5] = (longlong)plVar3;
            *(undefined1 *)((longlong)plVar4 + 0x79) = 1;
          }
          *param_6 = local_30;
          return 1;
        }
        if (local_res20[0] != '\0') {
          uStack_80 = 0x144d5066c;
          (**(code **)(**(longlong **)(lVar1 + 0x428) + 8))(*(longlong **)(lVar1 + 0x428),plVar3);
        }
      }
      uStack_80 = 0x144d50679;
      AK::MemoryMgr::Free(7,plVar3);
    }
    uVar5 = 2;
  }
  return uVar5;
}



// FUNCTION 144d50770 FUN_144d50770 body=178 status=ok
// SIG undefined FUN_144d50770(void)

undefined8
FUN_144d50770(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
             undefined8 *param_5)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((*param_4 <= 0.0 && *param_4 != 0.0) || (100 < *(byte *)((longlong)param_4 + 0xd))) {
    return 0x1f;
  }
  pvVar1 = AK::MemoryMgr::Malloc(7,0x48);
  if ((pvVar1 != (void *)0x0) &&
     (plVar2 = (longlong *)FUN_1450e2330(pvVar1,param_2,param_3), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_4);
    *param_5 = plVar2;
    return 1;
  }
  *param_5 = 0;
  return 0x34;
}



// FUNCTION 144d50830 FUN_144d50830 body=583 status=ok
// SIG undefined FUN_144d50830(void)

undefined4 FUN_144d50830(longlong *param_1,int param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulonglong uVar8;
  int *piVar9;
  char cVar10;
  char *pcVar11;
  int *piVar12;
  longlong lVar13;
  undefined1 local_48 [32];
  
  piVar12 = (int *)param_1[1];
  uVar8 = (ulonglong)*(uint *)(param_1 + 2);
  piVar1 = piVar12 + uVar8 * 6;
  for (piVar9 = piVar12; (piVar9 != piVar1 && (*piVar9 != param_2)); piVar9 = piVar9 + 6) {
  }
  piVar7 = piVar9 + 2;
  if (piVar9 == piVar1) {
    piVar7 = (int *)0x0;
  }
  if (piVar7 != (int *)0x0) {
    plVar2 = *(longlong **)(piVar7 + 2);
    cVar3 = FUN_144d51190(plVar2,param_4);
    if (cVar3 == '\0') {
      return 2;
    }
    lVar13 = *plVar2 + -0x80;
    if (*plVar2 == 0) {
      lVar13 = 0;
    }
    pcVar5 = (char *)plVar2[3];
    pcVar11 = pcVar5 + *(uint *)(plVar2 + 4);
    cVar3 = '\0';
    for (; pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
      cVar10 = *pcVar5;
      if (*pcVar5 <= cVar3) {
        cVar10 = cVar3;
      }
      cVar3 = cVar10;
    }
    FUN_1450df270(*(undefined8 *)(lVar13 + 0x60),lVar13,cVar3);
    return 1;
  }
  for (; (piVar12 != piVar1 && (*piVar12 != param_2)); piVar12 = piVar12 + 6) {
  }
  piVar9 = piVar12 + 2;
  if (piVar12 == piVar1) {
    piVar9 = (int *)0x0;
  }
  if (piVar9 == (int *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0x14) <= uVar8) &&
       (cVar3 = FUN_144d512f0(param_1 + 1), cVar3 == '\0')) {
      return 2;
    }
    if (*(uint *)((longlong)param_1 + 0x14) <= uVar8) {
      return 2;
    }
    piVar9 = (int *)(param_1[1] + (ulonglong)*(uint *)(param_1 + 2) * 0x18);
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) + 1;
    if (piVar9 == (int *)0x0) {
      return 2;
    }
    piVar9[4] = 0;
    piVar9[5] = 0;
    *piVar9 = param_2;
    piVar9 = piVar9 + 2;
    if (piVar9 == (int *)0x0) {
      return 2;
    }
  }
  puVar6 = AK::MemoryMgr::Malloc(0,0x28);
  *(undefined8 **)(piVar9 + 2) = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    FUN_144d513e0(param_1 + 1,param_2);
  }
  else {
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6 = *(undefined8 **)(piVar9 + 2);
    iVar4 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3,param_4,puVar6);
    if (iVar4 == 1) {
      FUN_14190d354(local_48,0xb,&DAT_1499d16b0,param_2);
      (**(code **)(*(longlong *)*puVar6 + 0x40))((longlong *)*puVar6,local_48);
      iVar4 = (**(code **)(*(longlong *)*puVar6 + 0x60))();
      if (iVar4 == 1) {
        FUN_144d51190(puVar6,param_4);
        return 1;
      }
      (**(code **)(*(longlong *)*puVar6 + 8))();
      *puVar6 = 0;
    }
    FUN_144d51700(piVar9);
    FUN_144d513e0(param_1 + 1,param_2);
  }
  return 2;
}



// FUNCTION 144d50a80 FUN_144d50a80 body=313 status=ok
// SIG undefined FUN_144d50a80(void)

undefined8 FUN_144d50a80(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  char cVar10;
  
  piVar4 = *(int **)(param_1 + 8);
  piVar7 = piVar4 + (ulonglong)*(uint *)(param_1 + 0x10) * 6;
  for (; (piVar4 != piVar7 && (*piVar4 != param_2)); piVar4 = piVar4 + 6) {
  }
  piVar9 = piVar4 + 2;
  if (piVar4 == piVar7) {
    piVar9 = (int *)0x0;
  }
  if (piVar9 == (int *)0x0) {
    uVar6 = 2;
  }
  else {
    plVar2 = *(longlong **)(piVar9 + 2);
    pcVar5 = (char *)plVar2[3];
    pcVar8 = pcVar5 + *(uint *)(plVar2 + 4);
    for (; pcVar5 != pcVar8; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == param_3) {
        if (pcVar5 < pcVar8 + -1) {
          *pcVar5 = pcVar8[-1];
        }
        *(int *)(plVar2 + 4) = (int)plVar2[4] + -1;
        break;
      }
    }
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 8))();
        *plVar2 = 0;
      }
      FUN_144d51700(piVar9);
      FUN_144d513e0(param_1 + 8,param_2);
      uVar6 = 1;
    }
    else {
      pcVar5 = (char *)plVar2[3];
      piVar7 = (int *)(*plVar2 + -0x80);
      if (*plVar2 == 0) {
        piVar7 = (int *)0x0;
      }
      pcVar8 = pcVar5 + *(uint *)(plVar2 + 4);
      cVar3 = '\0';
      for (; pcVar5 != pcVar8; pcVar5 = pcVar5 + 1) {
        cVar10 = *pcVar5;
        if (*pcVar5 <= cVar3) {
          cVar10 = cVar3;
        }
        cVar3 = cVar10;
      }
      FUN_1450df270(*(undefined8 *)(piVar7 + 0x18),piVar7,cVar3);
      uVar6 = 2;
    }
  }
  return uVar6;
}



// FUNCTION 144d50bc0 FUN_144d50bc0 body=198 status=ok
// SIG undefined FUN_144d50bc0(void)

undefined8 FUN_144d50bc0(longlong param_1,int param_2,char param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  char cVar6;
  char *pcVar7;
  int *piVar8;
  
  piVar3 = *(int **)(param_1 + 8);
  piVar8 = piVar3 + (ulonglong)*(uint *)(param_1 + 0x10) * 6;
  for (; (piVar3 != piVar8 && (*piVar3 != param_2)); piVar3 = piVar3 + 6) {
  }
  piVar5 = piVar3 + 2;
  if (piVar3 == piVar8) {
    piVar5 = (int *)0x0;
  }
  if (piVar5 != (int *)0x0) {
    plVar1 = *(longlong **)(piVar5 + 2);
    pcVar4 = (char *)plVar1[3];
    pcVar7 = pcVar4 + *(uint *)(plVar1 + 4);
    for (; pcVar4 != pcVar7; pcVar4 = pcVar4 + 1) {
      if (*pcVar4 == param_4) {
        *pcVar4 = param_3;
        pcVar4 = (char *)plVar1[3];
        piVar8 = (int *)(*plVar1 + -0x80);
        if (*plVar1 == 0) {
          piVar8 = (int *)0x0;
        }
        pcVar7 = pcVar4 + *(uint *)(plVar1 + 4);
        cVar2 = '\0';
        for (; pcVar4 != pcVar7; pcVar4 = pcVar4 + 1) {
          cVar6 = *pcVar4;
          if (*pcVar4 <= cVar2) {
            cVar6 = cVar2;
          }
          cVar2 = cVar6;
        }
        FUN_1450df270(*(undefined8 *)(piVar8 + 0x18),piVar8,cVar2);
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 144d50c90 FUN_144d50c90 body=322 status=ok
// SIG undefined FUN_144d50c90(void)

char FUN_144d50c90(longlong param_1,int param_2,float *param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  uint local_res8 [2];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  *param_3 = 0.0;
  *param_4 = 0;
  piVar4 = *(int **)(param_1 + 8);
  iVar7 = 2;
  piVar1 = piVar4 + (ulonglong)*(uint *)(param_1 + 0x10) * 6;
  for (; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 6) {
  }
  plVar5 = (longlong *)(piVar4 + 2);
  if (piVar4 == piVar1) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    local_res8[0] = 0;
    plVar8 = (longlong *)(*(longlong *)plVar5[1] + -0x80);
    if (*(longlong *)plVar5[1] == 0) {
      plVar8 = (longlong *)0x0;
    }
    iVar7 = (**(code **)(plVar8[0x10] + 0x50))(plVar8 + 0x10,local_res8);
    if (iVar7 != 2) {
      uVar3 = (**(code **)(*plVar8 + 0x40))(plVar8);
      uVar6 = (ulonglong)uVar3;
      if (uVar3 != 0) {
        (**(code **)(plVar8[0x10] + 0x10))(plVar8 + 0x10,local_48);
        if ((local_38 != 0) && (local_38 <= uVar6)) {
          uVar6 = local_38 & 0xffffffff;
        }
        *param_3 = ((float)local_res8[0] / (float)uVar6) * 100.0;
        if ((local_res8[0] < (uint)uVar6) &&
           ((uint)(*(int *)(plVar8[0xc] + 0x43c) - *(int *)(plVar8[0xc] + 0x440)) <
            (uint)uVar6 - local_res8[0])) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
        *param_4 = uVar2;
      }
    }
  }
  return (iVar7 == 2) + '\x01';
}



// FUNCTION 144d50e00 FUN_144d50e00 body=504 status=ok
// SIG undefined FUN_144d50e00(void)

undefined4
FUN_144d50e00(undefined8 param_1,undefined4 param_2,longlong param_3,undefined1 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char local_res18 [16];
  undefined1 local_248 [456];
  undefined8 uStack_80;
  char *local_58;
  longlong *local_50;
  int local_38 [2];
  longlong local_30;
  
  *(undefined1 *)(param_3 + 0x19) = 1;
  uStack_80 = 0x144d50e36;
  plVar4 = AK::MemoryMgr::Malloc(7,0x38);
  if (plVar4 == (longlong *)0x0) {
    uVar2 = 2;
  }
  else {
    *plVar4 = 0;
    plVar4[1] = 0;
    local_58 = local_res18;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    local_res18[0] = '\0';
    uStack_80 = 0x144d50e81;
    local_50 = plVar4;
    local_38[0] = (**(code **)(*DAT_14c791570 + 8))(DAT_14c791570,param_2,0,param_3);
    if (*(int *)(param_3 + 0x20) == 0) {
      local_38[0] = 2;
    }
    else if ((local_38[0] == 1) && ((local_res18[0] == '\0' || (0 < *plVar4)))) {
      if ((*(uint *)(plVar4 + 5) < DAT_14c791588) &&
         (plVar1 = *(longlong **)(DAT_14c791580 + (ulonglong)*(uint *)(plVar4 + 5) * 8),
         plVar1 != (longlong *)0x0)) {
        local_30 = 0;
        local_50 = &local_30;
        local_58 = (char *)CONCAT71(local_58._1_7_,param_4);
        uStack_80 = 0x144d50f72;
        plVar5 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1,plVar4,param_2);
        if (plVar5 != (longlong *)0x0) {
          if (local_res18[0] == '\0') {
            local_58 = (char *)((ulonglong)local_58 & 0xffffffff00000000);
            uStack_80 = 0x144d50fdd;
            iVar3 = FUN_1450dfef0(plVar5,plVar4,param_2,param_3);
            if (iVar3 != 1) {
              *(undefined1 *)(plVar5 + 0xf) = 1;
              *(undefined1 *)((longlong)plVar5 + 0x7c) = 0;
              uStack_80 = 0x144d50ff3;
              (**(code **)(*plVar5 + 0x10))(plVar5);
              return 2;
            }
          }
          else {
            plVar5[5] = (longlong)plVar4;
            *(undefined1 *)((longlong)plVar5 + 0x79) = 1;
          }
          *param_5 = local_30;
          return 1;
        }
        if (local_res18[0] != '\0') {
          uStack_80 = 0x144d50f8f;
          (**(code **)(*(longlong *)plVar1[0x85] + 8))((longlong *)plVar1[0x85],plVar4);
        }
      }
      uStack_80 = 0x144d50f9c;
      AK::MemoryMgr::Free(7,plVar4);
      return 2;
    }
    uStack_80 = 0x144d50ea6;
    AK::MemoryMgr::Free(7,plVar4);
    memset(local_248,0,0x104);
    (**(code **)(*DAT_14c791570 + 0x18))(DAT_14c791570,local_38,param_2,param_3,0,local_248,0x104);
    uVar2 = 2;
    if (local_38[0] == 0x42) {
      uVar2 = 0x42;
    }
  }
  return uVar2;
}



// FUNCTION 144d51000 FUN_144d51000 body=395 status=ok
// SIG undefined FUN_144d51000(void)

undefined8 FUN_144d51000(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  void *_Dst;
  uint local_38 [8];
  
  if ((param_2 < DAT_14c791588) &&
     (lVar1 = (ulonglong)param_2 * 8, *(longlong *)(lVar1 + DAT_14c791580) != 0)) {
    _Dst = *(void **)(param_1 + 8);
    if (_Dst != (void *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18)) {
      do {
        (**(code **)(*(longlong *)**(undefined8 **)((longlong)_Dst + 0x10) + 0x10))
                  ((longlong *)**(undefined8 **)((longlong)_Dst + 0x10),local_38);
        if (local_38[0] == param_2) {
          (**(code **)(*(longlong *)**(undefined8 **)((longlong)_Dst + 0x10) + 8))();
          **(undefined8 **)((longlong)_Dst + 0x10) = 0;
          lVar2 = *(longlong *)((longlong)_Dst + 0x10);
          if (lVar2 != 0) {
            pvVar3 = *(void **)(lVar2 + 0x18);
            if (pvVar3 != (void *)0x0) {
              *(undefined4 *)(lVar2 + 0x20) = 0;
              if ((void *)(lVar2 + 0x10) != pvVar3) {
                AK::MemoryMgr::Free(0,pvVar3);
              }
              *(undefined8 *)(lVar2 + 0x18) = 0;
              *(undefined4 *)(lVar2 + 0x24) = 0;
            }
            AK::MemoryMgr::Free(0,*(void **)((longlong)_Dst + 0x10));
            *(undefined8 *)((longlong)_Dst + 0x10) = 0;
          }
          pvVar3 = (void *)(*(longlong *)(param_1 + 8) +
                           (ulonglong)(*(int *)(param_1 + 0x10) - 1) * 0x18);
          if (_Dst < pvVar3) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x18),
                    (ulonglong)(uint)((int)(((longlong)pvVar3 - (longlong)_Dst) / 0x18) * 0x18));
          }
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        }
        else {
          _Dst = (void *)((longlong)_Dst + 0x18);
        }
      } while (_Dst != (void *)(*(longlong *)(param_1 + 8) +
                               (ulonglong)*(uint *)(param_1 + 0x10) * 0x18));
    }
    (**(code **)(**(longlong **)(lVar1 + DAT_14c791580) + 0x28))();
    *(undefined8 *)(lVar1 + DAT_14c791580) = 0;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 144d51190 FUN_144d51190 body=96 status=ok
// SIG undefined FUN_144d51190(void)

undefined8 FUN_144d51190(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  uVar1 = *(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x24) <= uVar1) {
    cVar2 = FUN_144d511f0(param_1 + 0x10);
    if ((cVar2 == '\0') || (*(uint *)(param_1 + 0x24) <= uVar1)) {
      puVar3 = (undefined1 *)0x0;
      goto LAB_144d511da;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar1 + 1;
  puVar3 = (undefined1 *)((ulonglong)uVar1 + *(longlong *)(param_1 + 0x18));
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = param_2;
  }
LAB_144d511da:
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),puVar3 != (undefined1 *)0x0);
}



// FUNCTION 144d511f0 FUN_144d511f0 body=243 status=ok
// SIG undefined FUN_144d511f0(void)

undefined8 FUN_144d511f0(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong _Size;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x14);
  pvVar2 = *(void **)((longlong)param_1 + 8);
  _Size = (ulonglong)*(uint *)((longlong)param_1 + 0x10);
  iVar5 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar5 = 1;
  }
  uVar4 = (ulonglong)(iVar5 + uVar1);
  pvVar3 = param_1;
  if (pvVar2 == (void *)0x0) {
    if (1 < uVar4) {
      pvVar3 = AK::MemoryMgr::Malign(0,uVar4,1);
    }
    if (pvVar3 != (void *)0x0) {
      if ((*(void **)((longlong)param_1 + 8) != (void *)0x0) &&
         (*(void **)((longlong)param_1 + 8) != pvVar3)) {
        uVar4 = 0;
        if (_Size != 0) {
          do {
            *(undefined1 *)(uVar4 + (longlong)pvVar3) =
                 *(undefined1 *)(uVar4 + *(longlong *)((longlong)param_1 + 8));
            uVar4 = uVar4 + 1;
          } while (uVar4 < _Size);
        }
        if (param_1 != *(void **)((longlong)param_1 + 8)) {
          AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 8));
        }
      }
      goto LAB_144d512c5;
    }
  }
  else {
    if (1 < uVar4) {
      if (param_1 == pvVar2) {
        pvVar3 = AK::MemoryMgr::Malign(0,uVar4,1);
        if (pvVar3 == (void *)0x0) {
          return 0;
        }
        memcpy(pvVar3,param_1,_Size);
        goto LAB_144d512c5;
      }
      pvVar3 = AK::MemoryMgr::ReallocAligned(0,pvVar2,uVar4,1);
    }
    if (pvVar3 != (void *)0x0) {
LAB_144d512c5:
      *(void **)((longlong)param_1 + 8) = pvVar3;
      *(uint *)((longlong)param_1 + 0x14) = iVar5 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144d512f0 FUN_144d512f0 body=232 status=ok
// SIG undefined FUN_144d512f0(void)

undefined8 FUN_144d512f0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  __uint64 _Var8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  iVar4 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar4 = 1;
  }
  _Var8 = (ulonglong)(iVar4 + uVar2) * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    puVar7 = AK::MemoryMgr::Malloc(7,_Var8);
    if (puVar7 != (undefined8 *)0x0) {
      if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
         (puVar6 = puVar7, (undefined8 *)*param_1 != puVar7)) {
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          if (puVar6 != (undefined8 *)0x0) {
            puVar6[2] = 0;
          }
          lVar3 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar6 + (lVar3 - (longlong)puVar7));
          uVar5 = puVar1[1];
          *puVar6 = *puVar1;
          puVar6[1] = uVar5;
          puVar6[2] = *(undefined8 *)((longlong)puVar6 + lVar3 + (0x10 - (longlong)puVar7));
          puVar6 = puVar6 + 3;
        }
        AK::MemoryMgr::Free(7,(void *)*param_1);
      }
      goto LAB_144d513bb;
    }
  }
  else {
    puVar7 = AK::MemoryMgr::Realloc(7,(void *)*param_1,_Var8);
    if (puVar7 != (undefined8 *)0x0) {
LAB_144d513bb:
      *param_1 = (longlong)puVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar4 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144d513e0 FUN_144d513e0 body=124 status=ok
// SIG undefined FUN_144d513e0(void)

void FUN_144d513e0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *_Dst;
  
  piVar1 = (int *)*param_1;
  _Dst = piVar1;
  if (piVar1 != piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 6) {
    while (*_Dst != param_2) {
      _Dst = _Dst + 6;
      if (_Dst == piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 6) {
        return;
      }
    }
    if (_Dst < piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 6) {
      memmove(_Dst,_Dst + 6,
              (ulonglong)
              (uint)((int)(((longlong)(piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 6) -
                           (longlong)_Dst) / 0x18) * 0x18));
    }
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
  }
  return;
}



// FUNCTION 144d51460 FUN_144d51460 body=267 status=ok
// SIG undefined FUN_144d51460(void)

undefined8 * FUN_144d51460(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_1499d1640;
  pvVar2 = pvVar3;
  if (pvVar3 != (void *)((longlong)pvVar3 + (ulonglong)*(uint *)(param_1 + 2) * 0x18)) {
    do {
      (**(code **)(*(longlong *)**(undefined8 **)((longlong)pvVar2 + 0x10) + 8))();
      **(undefined8 **)((longlong)pvVar2 + 0x10) = 0;
      lVar1 = *(longlong *)((longlong)pvVar2 + 0x10);
      if (lVar1 != 0) {
        pvVar3 = *(void **)(lVar1 + 0x18);
        if (pvVar3 != (void *)0x0) {
          *(undefined4 *)(lVar1 + 0x20) = 0;
          if ((void *)(lVar1 + 0x10) != pvVar3) {
            AK::MemoryMgr::Free(0,pvVar3);
          }
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined4 *)(lVar1 + 0x24) = 0;
        }
        AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar2 + 0x10));
        *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
      }
      pvVar2 = (void *)((longlong)pvVar2 + 0x18);
      pvVar3 = (void *)param_1[1];
    } while (pvVar2 != (void *)((longlong)pvVar3 + (ulonglong)*(uint *)(param_1 + 2) * 0x18));
  }
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    AK::MemoryMgr::Free(7,pvVar3);
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  AK::IAkStreamMgr::m_pStreamMgr = (IAkStreamMgr *)0x0;
  *param_1 = &PTR_FUN_1499d15d8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144d51570 FUN_144d51570 body=189 status=ok
// SIG undefined FUN_144d51570(void)

undefined8 FUN_144d51570(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(7,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(7,(void *)*param_1);
      }
      goto LAB_144d51610;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(7,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_144d51610:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144d51630 FUN_144d51630 body=193 status=ok
// SIG undefined FUN_144d51630(void)

undefined8 FUN_144d51630(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar2 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  _Var6 = (ulonglong)(iVar2 + uVar1) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(7,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar5 = 0;
          do {
            uVar3 = ((undefined8 *)(lVar5 + *param_1))[1];
            *(undefined8 *)(lVar5 + (longlong)pvVar4) = *(undefined8 *)(lVar5 + *param_1);
            ((undefined8 *)(lVar5 + (longlong)pvVar4))[1] = uVar3;
            uVar7 = uVar7 - 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(7,(void *)*param_1);
      }
      goto LAB_144d516d4;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(7,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_144d516d4:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144d51700 FUN_144d51700 body=95 status=ok
// SIG undefined FUN_144d51700(void)

void FUN_144d51700(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    pvVar2 = *(void **)(lVar1 + 0x18);
    if (pvVar2 != (void *)0x0) {
      *(undefined4 *)(lVar1 + 0x20) = 0;
      if ((void *)(lVar1 + 0x10) != pvVar2) {
        AK::MemoryMgr::Free(0,pvVar2);
      }
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined4 *)(lVar1 + 0x24) = 0;
    }
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 144d51760 Init body=354 status=ok
// SIG AKRESULT Init(AkMusicSettings * param_1)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* enum AKRESULT __cdecl AK::MusicEngine::Init(struct AkMusicSettings * __ptr64) */

AKRESULT __cdecl AK::MusicEngine::Init(AkMusicSettings *param_1)

{
  undefined8 *puVar1;
  AKRESULT AVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 in_R9D;
  AkPluginType AVar5;
  
                    /* 0x4d51760  140  ?Init@MusicEngine@AK@@YA?AW4AKRESULT@@PEAUAkMusicSettings@@@Z
                        */
  if (param_1 == (AkMusicSettings *)0x0) {
    _DAT_14c7915e0 = 0x3f800000;
  }
  else {
    _DAT_14c7915e0 = *(undefined4 *)param_1;
  }
  FUN_1450f3730();
  DAT_14c7915e4 = 0;
  DAT_14c7915e5 = 0;
  DAT_14c791648 = MemoryMgr::Malloc(0,0x60);
  if (DAT_14c791648 != (undefined8 *)0x0) {
    uVar4 = 0;
    DAT_14c791650 = 4;
    puVar1 = DAT_14c791648;
    DAT_14c791640 = DAT_14c791648;
    do {
      puVar3 = puVar1;
      uVar4 = uVar4 + 1;
      *puVar3 = puVar3 + 3;
      puVar1 = puVar3 + 3;
    } while (uVar4 < DAT_14c791650);
    *puVar3 = 0;
    AVar5 = CONCAT31((int3)((uint)in_R9D >> 8),8);
    AVar2 = SoundEngine::RegisterGlobalCallback(FUN_144d52020,0x10,(void *)0x0,AVar5,0,0x321);
    if (AVar2 == 1) {
      AVar2 = SoundEngine::RegisterGlobalCallback
                        ((_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *)
                         &LAB_144d520f0,0x80,(void *)0x0,CONCAT31((int3)(AVar5 >> 8),8),0,0x321);
      if (AVar2 == 1) {
        FUN_144d419f0(FUN_144d52900);
        FUN_144d41a00(&LAB_1450f1af0);
        FUN_144d41a10(&LAB_1450f1b80);
        FUN_144d41a20(&LAB_1450f1b90);
        return 1;
      }
    }
    SoundEngine::UnregisterGlobalCallback(FUN_144d52020,0x10);
    SoundEngine::UnregisterGlobalCallback
              ((_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *)
               &LAB_144d520f0,0x10);
    FUN_144d51c00();
    return AVar2;
  }
  return 2;
}



// FUNCTION 144d518d0 Term body=42 status=ok
// SIG void Term(void)

/* void __cdecl AK::MusicEngine::Term(void) */

void __cdecl AK::MusicEngine::Term(void)

{
                    /* 0x4d518d0  337  ?Term@MusicEngine@AK@@YAXXZ */
  SoundEngine::UnregisterGlobalCallback(FUN_144d52020,0x10);
  SoundEngine::UnregisterGlobalCallback
            ((_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *)
             &LAB_144d520f0,0x10);
  return;
}



// FUNCTION 144d51900 GetPlayingSegmentInfo body=21 status=ok
// SIG AKRESULT GetPlayingSegmentInfo(uint param_1, AkSegmentInfo * param_2, bool param_3)

/* enum AKRESULT __cdecl AK::MusicEngine::GetPlayingSegmentInfo(unsigned int,struct AkSegmentInfo &
   __ptr64,bool) */

AKRESULT __cdecl
AK::MusicEngine::GetPlayingSegmentInfo(uint param_1,AkSegmentInfo *param_2,bool param_3)

{
  AKRESULT AVar1;
  
                    /* 0x4d51900  114
                       ?GetPlayingSegmentInfo@MusicEngine@AK@@YA?AW4AKRESULT@@IAEAUAkSegmentInfo@@_N@Z
                        */
  AVar1 = FUN_1450f3910(&DAT_14c7915f8,param_1,param_2,param_3);
  return AVar1;
}



// FUNCTION 144d51920 FUN_144d51920 body=383 status=ok
// SIG undefined FUN_144d51920(void)

undefined8 * FUN_144d51920(undefined8 *param_1)

{
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0xf000000006000018;
  param_1[0x15] = param_1[0x15] | 0x3f;
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
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(byte *)((longlong)param_1 + 0xc3) = *(byte *)((longlong)param_1 + 0xc3) & 0xf8;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
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
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(byte *)((longlong)param_1 + 0xc3) = *(byte *)((longlong)param_1 + 0xc3) & 0xf8;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  return param_1;
}



// FUNCTION 144d51aa0 FUN_144d51aa0 body=347 status=ok
// SIG undefined FUN_144d51aa0(void)

void FUN_144d51aa0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint *puVar7;
  
  if (*(void **)(param_1 + 200) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x230);
  if (lVar4 != 0) {
    lVar2 = lVar4 + (ulonglong)*(uint *)(param_1 + 0x238) * 0x28;
    if (lVar4 != lVar2) {
      puVar7 = (uint *)(lVar4 + 0x20);
      do {
        plVar6 = *(longlong **)(puVar7 + -2);
        plVar5 = plVar6;
        if (plVar6 != plVar6 + *puVar7) {
          do {
            plVar6 = (longlong *)*plVar5;
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0x14);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 0x18))();
            }
            plVar6 = *(longlong **)(puVar7 + -2);
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar6 + *puVar7);
        }
        if (plVar6 != (longlong *)0x0) {
          *puVar7 = 0;
          AK::MemoryMgr::Free(0,plVar6);
          puVar7[-2] = 0;
          puVar7[-1] = 0;
          puVar7[1] = 0;
        }
        lVar4 = lVar4 + 0x28;
        puVar7 = puVar7 + 10;
      } while (lVar4 != lVar2);
    }
    *(undefined4 *)(param_1 + 0x238) = 0;
    if ((void *)(param_1 + 0xf0) != *(void **)(param_1 + 0x230)) {
      AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x230));
    }
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}



// FUNCTION 144d51c00 FUN_144d51c00 body=346 status=ok
// SIG undefined FUN_144d51c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d51c00(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar3 = DAT_14c7915f0;
  while (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x78);
    local_res8 = 0;
    local_resc = 4;
    FUN_1450ed780(lVar3,&local_res8,0);
    lVar3 = lVar1;
  }
  FUN_1450f3260();
  DAT_14c7915f0 = 0;
  DAT_14c7915e8 = 0;
  FUN_1450f3740();
  while (puVar5 = DAT_14c791630, DAT_14c791630 != (undefined8 *)0x0) {
    if (DAT_14c791630 == DAT_14c791638) {
      DAT_14c791638 = (undefined8 *)0x0;
    }
    if ((DAT_14c791630 < DAT_14c791648) ||
       (DAT_14c791648 + (ulonglong)DAT_14c791650 * 3 <= DAT_14c791630)) {
      DAT_14c791630 = (undefined8 *)*DAT_14c791630;
      AK::MemoryMgr::Free(0,puVar5);
      _DAT_14c791654 = _DAT_14c791654 + -1;
    }
    else {
      puVar4 = (undefined8 *)*DAT_14c791630;
      *DAT_14c791630 = DAT_14c791640;
      DAT_14c791630 = puVar4;
      _DAT_14c791654 = _DAT_14c791654 + -1;
      DAT_14c791640 = puVar5;
    }
  }
  DAT_14c791630 = (undefined8 *)0x0;
  puVar5 = DAT_14c791640;
  puVar4 = DAT_14c791648;
  while (puVar2 = puVar5, puVar2 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar2;
    if ((puVar2 < puVar4) || (puVar4 + (ulonglong)DAT_14c791650 * 3 <= puVar2)) {
      AK::MemoryMgr::Free(0,puVar2);
      puVar4 = DAT_14c791648;
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    AK::MemoryMgr::Free(0,puVar4);
    DAT_14c791648 = (undefined8 *)0x0;
  }
  DAT_14c791630 = (undefined8 *)0x0;
  DAT_14c791638 = (undefined8 *)0x0;
  DAT_14c791650 = 0;
  DAT_14c791640 = (undefined8 *)0x0;
  return;
}



// FUNCTION 144d51d60 FUN_144d51d60 body=416 status=ok
// SIG undefined FUN_144d51d60(void)

undefined4 FUN_144d51d60(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  uint local_18 [4];
  
  pvVar4 = AK::MemoryMgr::Malloc(0,0x98);
  if (pvVar4 == (void *)0x0) {
    return 2;
  }
  pvVar4 = (void *)FUN_1450f0710(pvVar4,param_1,param_2,param_3,param_4);
  if (pvVar4 != (void *)0x0) {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
    if (plVar5 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar5 + 0x118))(plVar5,1);
      if (cVar1 != '\0') {
        FUN_1450dabb0();
        if (DAT_14c7915f0 == (longlong *)0x0) {
          DAT_14c7915e8 = param_1;
          DAT_14c7915f0 = param_1;
          param_1[0xf] = 0;
        }
        else {
          param_1[0xf] = (longlong)DAT_14c7915f0;
          DAT_14c7915f0 = param_1;
        }
        FUN_1450ef3b0(param_1,pvVar4);
        if (*(int *)(param_2 + 0x14) == 0) {
          return 2;
        }
        local_18[0] = 0;
        plVar5 = param_1 + 3;
        if (param_1 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        uVar2 = FUN_1450b25f0(DAT_14c790fc0,*(int *)(param_2 + 0x14),plVar5,param_3,local_18);
        FUN_1450ef3c0(param_1,local_18[0]);
        if (((local_18[0] & 0x200000) != 0) &&
           (iVar3 = FUN_1450f3780(&DAT_14c7915f8,*(undefined4 *)(param_2 + 0x14)), iVar3 != 1)) {
          FUN_1450ef3c0(param_1,local_18[0] & 0xffdfffff);
        }
        FUN_1450b2f30(DAT_14c790fc0,*(undefined4 *)(param_2 + 0x14));
        return uVar2;
      }
      (**(code **)(*plVar5 + 0x120))(plVar5,1);
      FUN_1450dabf0(plVar5);
    }
    FUN_1450f0800();
    AK::MemoryMgr::Free(0,pvVar4);
  }
  return 2;
}



// FUNCTION 144d51f00 FUN_144d51f00 body=262 status=ok
// SIG undefined FUN_144d51f00(void)

void FUN_144d51f00(longlong *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  
  plVar5 = (longlong *)0x0;
  plVar2 = DAT_14c7915f0;
  do {
    if (plVar2 == (longlong *)0x0) {
LAB_144d51f5e:
      pvVar1 = (void *)param_1[0xd];
      if (pvVar1 != (void *)0x0) {
        iVar7 = *(int *)((longlong)pvVar1 + 0x2c);
        if (iVar7 != 0) {
          if ((*(uint *)(param_1 + 4) & 0x200000) != 0) {
            FUN_1450f39f0(&DAT_14c7915f8);
            iVar7 = *(int *)((longlong)pvVar1 + 0x2c);
          }
          plVar5 = param_1 + 3;
          if (param_1 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          FUN_1450b2740(DAT_14c790fc0,iVar7,plVar5);
          lVar4 = (**(code **)(*param_1 + 0xb8))(param_1);
          if (lVar4 != 0) {
            plVar5 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
            (**(code **)(*plVar5 + 0x120))(plVar5,1);
            uVar6 = (**(code **)(*param_1 + 0xb8))(param_1);
            FUN_1450dabf0(uVar6);
          }
        }
        FUN_1450f0800();
        AK::MemoryMgr::Free(0,pvVar1);
      }
      return;
    }
    if (plVar2 == param_1) {
      plVar3 = (longlong *)plVar2[0xf];
      if (plVar2 != DAT_14c7915f0) {
        plVar5[0xf] = plVar2[0xf];
        plVar3 = DAT_14c7915f0;
      }
      DAT_14c7915f0 = plVar3;
      if (plVar2 == DAT_14c7915e8) {
        DAT_14c7915e8 = plVar5;
      }
      goto LAB_144d51f5e;
    }
    plVar5 = plVar2;
    plVar2 = (longlong *)plVar2[0xf];
  } while( true );
}



// FUNCTION 144d52010 FUN_144d52010 body=14 status=ok
// SIG undefined FUN_144d52010(void)

void FUN_144d52010(undefined1 param_1)

{
  DAT_14c7915e4 = 1;
  DAT_14c7915e5 = param_1;
  return;
}



// FUNCTION 144d52020 FUN_144d52020 body=197 status=ok
// SIG undefined FUN_144d52020(void)

void FUN_144d52020(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_38 [48];
  
  bVar6 = DAT_14c7915e4 != '\0';
  DAT_14c7915e4 = 0;
  plVar3 = DAT_14c7915f0;
  uVar4 = DAT_14c7915e5;
  if (bVar6) {
    for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[0xf]) {
      lVar1 = plVar3[0xd];
      DAT_14c7915e5 = uVar4;
      *(undefined1 *)(lVar1 + 0x58) = 0;
      *(undefined1 *)(lVar1 + 0x59) = uVar4;
      uVar4 = DAT_14c7915e5;
    }
    DAT_14c7915e4 = 0;
    DAT_14c7915e5 = 0;
    plVar3 = DAT_14c7915f0;
  }
  while (plVar3 != (longlong *)0x0) {
    plVar2 = (longlong *)plVar3[0xf];
    lVar1 = plVar3[0xd];
    if (((*(uint *)(plVar3 + 4) & 0x200000) != 0) &&
       (iVar5 = (**(code **)(*plVar3 + 0xe8))(plVar3,local_38), iVar5 == 1)) {
      FUN_1450f3870(&DAT_14c7915f8,*(undefined4 *)(lVar1 + 0x2c),local_38);
    }
    FUN_1450f08c0(lVar1,DAT_14c72f434);
    plVar3 = plVar2;
  }
  FUN_145083140(DAT_14c790fd8);
  return;
}



// FUNCTION 144d52100 FUN_144d52100 body=1003 status=ok
// SIG undefined FUN_144d52100(void)

int FUN_144d52100(undefined8 param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5,undefined8 *param_6,char param_7,undefined8 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,longlong *param_12)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_407;
  undefined4 local_404;
  undefined4 local_400;
  int local_3fc;
  int local_3f8;
  ulonglong local_3e8;
  undefined2 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  longlong local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_398 [2];
  undefined8 uStack_390;
  undefined4 local_388;
  undefined1 local_378 [8];
  undefined8 uStack_370;
  undefined4 local_368;
  undefined1 local_358 [8];
  undefined8 local_350;
  ulonglong local_348;
  int *local_338;
  undefined8 local_330;
  undefined8 local_328;
  ulonglong local_320;
  undefined8 local_310;
  undefined8 uStack_308;
  longlong local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2c8;
  undefined2 local_2c0;
  undefined8 local_2b0;
  undefined1 local_2a8 [600];
  undefined4 local_50;
  byte local_4c;
  byte local_48;
  
  plVar2 = param_12;
  local_407 = 0;
  *param_12 = 0;
  uVar3 = FUN_1450c6d50(param_2,0,&local_3fc);
  FUN_1450c7400(local_398,param_2,param_4,&local_400);
  local_3f8 = FUN_1450c6ba0(local_398[0],&local_404);
  if (local_3f8 == 2) {
    iVar7 = 3;
  }
  else {
    local_3e8 = local_3e8 & 0xffffffff00000000;
    local_350 = 0;
    local_328 = 0;
    local_330 = 0;
    local_338 = (int *)0x0;
    local_2dc = 0;
    local_2c8 = 0;
    local_2c0 = 0xff00;
    local_2b0 = 0;
    FUN_144d51920(local_2a8);
    local_4c = local_4c & 0xfe;
    local_48 = local_48 & 0xf3 | 3;
    local_330 = param_6[1];
    local_328 = param_6[2];
    local_50 = 0;
    local_320 = local_320 & 0xffffffff00000000;
    piVar1 = (int *)*param_6;
    local_348 = param_4;
    if (local_338 != (int *)0x0) {
      FUN_144d4a460();
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + 1;
    }
    local_2e0 = local_3a8;
    local_2d4 = param_10;
    local_48 = local_48 & 0xfb | param_7 << 2;
    local_320 = local_3e8;
    bVar8 = false;
    local_310 = local_3d8;
    uStack_308 = uStack_3d0;
    local_2dc = 0;
    local_2f0 = local_3b8;
    uStack_2e8 = uStack_3b0;
    local_338 = piVar1;
    pvVar5 = AK::MemoryMgr::Malloc(0,0x3d0);
    if (pvVar5 == (void *)0x0) {
      *plVar2 = 0;
      param_12 = (longlong *)((ulonglong)param_12 & 0xffffffffffffff00);
LAB_144d52421:
      iVar7 = 2;
    }
    else {
      local_368 = local_388;
      uStack_370 = uStack_390;
      lVar6 = FUN_1450eeec0(pvVar5,local_358,param_1,param_2,param_3,param_8,local_378,param_9,
                            param_11);
      *plVar2 = lVar6;
      param_12 = (longlong *)((ulonglong)param_12 & 0xffffffffffffff00);
      if (lVar6 == 0) goto LAB_144d52421;
      iVar7 = FUN_1450e6620(lVar6 + 0x18,local_400,0,uVar3,&local_404,local_2a8,&param_12);
      if (iVar7 == 1) {
        if (((char)param_12 == '\0') || (local_3fc == 0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
        iVar7 = FUN_1450c6df0(param_2,param_4,local_398[0],local_3f8,uVar3,&local_404,*plVar2,uVar4)
        ;
        bVar8 = iVar7 == 1;
        local_407 = 1;
        if (bVar8) {
          local_3b8 = *plVar2;
          uStack_3e0 = 0xff00;
          uStack_3d0 = 0;
          local_3c8 = 0;
          uStack_3c4 = *(undefined4 *)(local_3b8 + 0x280);
          uStack_3c0 = param_10;
          uStack_3bc = 0;
          local_3e8 = param_4;
          (**(code **)(*param_2 + 0x138))(param_2,&local_3e8,local_3b8 + 0x90,1);
          lVar6 = *plVar2;
          FUN_1450c6830(lVar6);
          FUN_1450ea570(lVar6);
          FUN_1450ea800(lVar6,param_5,0,1);
        }
      }
    }
    FUN_144d51aa0(local_2a8);
    if (local_338 != (int *)0x0) {
      FUN_144d4a460();
    }
    if (iVar7 == 1) {
      return 1;
    }
    if (bVar8) goto LAB_144d52473;
  }
  if (*(int *)((longlong)param_6 + 0x14) != 0) {
    FUN_1450b25f0(DAT_14c790fc0,*(int *)((longlong)param_6 + 0x14),*plVar2,param_4,&param_12);
  }
LAB_144d52473:
  param_12 = (longlong *)*plVar2;
  FUN_1450c6ed0(param_2,&param_12,local_407,param_4);
  *plVar2 = 0;
  if (iVar7 != 3) {
    local_404 = 0x1e;
  }
  local_3a4 = 0;
  local_3e8 = local_3e8 & 0xffffffff00000000;
  FUN_1450ee390(param_2,local_404,*(undefined8 *)(param_4 + 0x58),param_6,&local_3e8);
  return iVar7;
}



// FUNCTION 144d524f0 FUN_144d524f0 body=147 status=ok
// SIG undefined FUN_144d524f0(void)

void FUN_144d524f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = DAT_14c7915f0;
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[0xf];
    lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2);
    if (((lVar3 == param_1) && ((param_2 == 0 || (param_2 == *(longlong *)(plVar2[0xd] + 0x30)))))
       && ((param_4 == 0 || (param_4 == *(int *)(plVar2[0xd] + 0x2c))))) {
      FUN_1450ed780(plVar2,param_3,0xffffffff);
    }
  }
  return;
}



// FUNCTION 144d52590 FUN_144d52590 body=142 status=ok
// SIG undefined FUN_144d52590(void)

void FUN_144d52590(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  for (plVar1 = DAT_14c7915f0; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[0xf]) {
    lVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1);
    if (((lVar2 == param_1) && ((param_2 == 0 || (param_2 == *(longlong *)(plVar1[0xd] + 0x30)))))
       && ((param_4 == 0 || (param_4 == *(int *)(plVar1[0xd] + 0x2c))))) {
      FUN_1450ed8d0(plVar1,param_3);
    }
  }
  return;
}



// FUNCTION 144d52620 FUN_144d52620 body=158 status=ok
// SIG undefined FUN_144d52620(void)

void FUN_144d52620(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  
  for (plVar1 = DAT_14c7915f0; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[0xf]) {
    lVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1);
    if (((lVar2 == param_1) && ((param_2 == 0 || (param_2 == *(longlong *)(plVar1[0xd] + 0x30)))))
       && ((param_5 == 0 || (param_5 == *(int *)(plVar1[0xd] + 0x2c))))) {
      FUN_1450ed9c0(plVar1,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 144d526c0 FUN_144d526c0 body=192 status=ok
// SIG undefined FUN_144d526c0(void)

void FUN_144d526c0(longlong param_1,longlong param_2,int param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_res20 [2];
  
  local_res20[0] = param_4;
  plVar1 = DAT_14c7915f0;
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[0xf];
    lVar4 = (**(code **)(*plVar2 + 0xb8))(plVar2);
    if ((((lVar4 == param_1) && ((param_2 == 0 || (*(longlong *)(plVar2[0xd] + 0x30) == param_2))))
        && ((param_3 == 0 || (*(int *)(plVar2[0xd] + 0x2c) == param_3)))) &&
       (iVar3 = (**(code **)(*plVar2 + 0xd8))(plVar2,local_res20,param_5), iVar3 == 1)) {
      FUN_1450b2f30(DAT_14c790fc0,*(undefined4 *)(plVar2[0xd] + 0x2c));
    }
  }
  return;
}



// FUNCTION 144d52780 FUN_144d52780 body=192 status=ok
// SIG undefined FUN_144d52780(void)

void FUN_144d52780(longlong param_1,longlong param_2,int param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_res20 [2];
  
  local_res20[0] = param_4;
  plVar1 = DAT_14c7915f0;
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[0xf];
    lVar4 = (**(code **)(*plVar2 + 0xb8))(plVar2);
    if ((((lVar4 == param_1) && ((param_2 == 0 || (*(longlong *)(plVar2[0xd] + 0x30) == param_2))))
        && ((param_3 == 0 || (*(int *)(plVar2[0xd] + 0x2c) == param_3)))) &&
       (iVar3 = (**(code **)(*plVar2 + 0xe0))(plVar2,local_res20,param_5), iVar3 == 1)) {
      FUN_1450b2f30(DAT_14c790fc0,*(undefined4 *)(plVar2[0xd] + 0x2c));
    }
  }
  return;
}



// FUNCTION 144d52840 FUN_144d52840 body=83 status=ok
// SIG undefined FUN_144d52840(void)

void FUN_144d52840(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  
  for (lVar1 = DAT_14c7915f0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x78)) {
    if (*(longlong *)(lVar1 + 0x68) != 0) {
      FUN_1450ef680(*(longlong *)(lVar1 + 0x68) + 0x60,param_1,param_2);
    }
  }
  return;
}



// FUNCTION 144d528a0 FUN_144d528a0 body=83 status=ok
// SIG undefined FUN_144d528a0(void)

void FUN_144d528a0(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  
  for (lVar1 = DAT_14c7915f0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x78)) {
    if (*(longlong *)(lVar1 + 0x68) != 0) {
      FUN_1450ef710(*(longlong *)(lVar1 + 0x68) + 0x60,param_1,param_2);
    }
  }
  return;
}



// FUNCTION 144d52900 FUN_144d52900 body=424 status=ok
// SIG undefined FUN_144d52900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144d52900(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint local_res18;
  undefined4 uStackX_1c;
  uint local_res20 [2];
  undefined8 local_38 [2];
  
  uVar10 = CONCAT44(uStackX_1c,local_res18);
  uVar7 = 0;
  uVar8 = uVar7;
  uVar9 = local_res18;
  puVar5 = DAT_14c791640;
  for (uVar6 = DAT_14c7915f0; DAT_14c791640 = puVar5, uVar6 != 0;
      uVar6 = *(ulonglong *)(uVar6 + 0x78)) {
    if (((*(byte *)(uVar6 + 0x62) & 1) != 0) && ((*(byte *)(uVar6 + 0x62) & 0x10) == 0)) {
      local_res18 = local_res18 & 0xffffff00;
      uVar4 = FUN_1450f0d30(*(undefined8 *)(uVar6 + 0x68),param_1,&local_res18,local_res20,local_38)
      ;
      if (((char)local_res18 != '\0') && ((uVar7 == 0 || ((longlong)uVar4 < (longlong)uVar8)))) {
        uVar7 = uVar6;
        uVar8 = uVar4;
        uVar10 = local_38[0];
        uVar9 = local_res20[0];
      }
    }
    puVar5 = DAT_14c791640;
  }
  uVar6 = (ulonglong)DAT_14c72f434;
  if (uVar8 == uVar6 || (longlong)(uVar8 - uVar6) < 0) goto LAB_144d52a86;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = AK::MemoryMgr::Malloc(0,0x18);
    puVar2 = DAT_14c791630;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = DAT_14c791640;
      goto LAB_144d529f1;
    }
  }
  else {
LAB_144d529f1:
    if (DAT_14c791630 == (undefined8 *)0x0) {
      DAT_14c791638 = puVar5;
    }
    DAT_14c791640 = (undefined8 *)*puVar5;
    piVar1 = (int *)(puVar5 + 1);
    *puVar5 = DAT_14c791630;
    _DAT_14c791654 = _DAT_14c791654 + 1;
    puVar2 = puVar5;
    DAT_14c791630 = puVar5;
    if (piVar1 != (int *)0x0) {
      if ((uVar7 != 0) &&
         (iVar3 = FUN_1450f0ee0(*(undefined8 *)(uVar7 + 0x68),piVar1,uVar9,uVar10), iVar3 == 1)) {
        uVar9 = *(uint *)(puVar5 + 2);
        *piVar1 = param_1;
        *(undefined4 *)((longlong)puVar5 + 0xc) = param_2;
        *(uint *)(puVar5 + 2) = uVar9 & 0xfffffffe | 2;
        return CONCAT71((uint7)(uint3)((uVar9 & 0xfffffffe) >> 8),1);
      }
      uVar6 = FUN_144d52cf0(&DAT_14c791630);
      goto LAB_144d52a86;
    }
  }
  for (; uVar6 = 0, puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    if (*(int *)(puVar2 + 1) == param_1) {
      *(uint *)(puVar2 + 2) = *(uint *)(puVar2 + 2) | 1;
    }
  }
LAB_144d52a86:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 144d52ab0 FUN_144d52ab0 body=128 status=ok
// SIG undefined FUN_144d52ab0(void)

void FUN_144d52ab0(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  for (puVar3 = DAT_14c791630; (puVar3 != (undefined8 *)0x0 && (puVar3 + 1 != param_1));
      puVar3 = (undefined8 *)*puVar3) {
  }
  uVar1 = *(uint *)(puVar3 + 2);
  uVar4 = uVar1 & 0xfffffffd;
  *(uint *)(puVar3 + 2) = uVar4;
  if ((uVar1 & 1) == 0) {
    *(uint *)(puVar3 + 2) = uVar4 | 1;
    iVar2 = *(int *)(puVar3 + 1);
    FUN_144d41800(iVar2,*(undefined4 *)((longlong)puVar3 + 0xc),0,1);
    for (puVar3 = (undefined8 *)*puVar3; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3
        ) {
      if (*(int *)(puVar3 + 1) == iVar2) {
        *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) | 1;
      }
    }
  }
  FUN_144d52d70();
  return;
}



// FUNCTION 144d52b30 FUN_144d52b30 body=437 status=ok
// SIG undefined FUN_144d52b30(void)

void FUN_144d52b30(undefined8 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint local_res10;
  undefined4 uStackX_14;
  uint local_res18 [2];
  undefined8 local_res20;
  
  for (puVar6 = DAT_14c791630; (puVar6 != (undefined8 *)0x0 && (puVar6 + 1 != param_1));
      puVar6 = (undefined8 *)*puVar6) {
  }
  if ((*(uint *)(puVar6 + 2) & 1) != 0) {
    *(uint *)(puVar6 + 2) = *(uint *)(puVar6 + 2) & 0xfffffffd;
    FUN_144d52d70();
    return;
  }
  uVar5 = 0;
  iVar1 = *(int *)(puVar6 + 1);
  uVar8 = CONCAT44(uStackX_14,local_res10);
  uVar9 = uVar5;
  uVar7 = local_res10;
  for (uVar2 = DAT_14c7915f0; uVar2 != 0; uVar2 = *(ulonglong *)(uVar2 + 0x78)) {
    if (((*(byte *)(uVar2 + 0x62) & 1) != 0) && ((*(byte *)(uVar2 + 0x62) & 0x10) == 0)) {
      local_res10 = local_res10 & 0xffffff00;
      uVar4 = FUN_1450f0d30(*(undefined8 *)(uVar2 + 0x68),iVar1,&local_res10,local_res18,
                            &local_res20);
      if (((char)local_res10 != '\0') && ((uVar9 == 0 || ((longlong)uVar4 < (longlong)uVar5)))) {
        uVar5 = uVar4;
        uVar8 = local_res20;
        uVar9 = uVar2;
        uVar7 = local_res18[0];
      }
    }
  }
  if (uVar5 == DAT_14c72f434 || (longlong)(uVar5 - DAT_14c72f434) < 0) {
    FUN_144d41800(iVar1,*(undefined4 *)((longlong)puVar6 + 0xc),0,1);
    *(uint *)(puVar6 + 2) = *(uint *)(puVar6 + 2) & 0xfffffffd | 1;
    do {
      if (*(int *)(puVar6 + 1) == iVar1) {
        *(uint *)(puVar6 + 2) = *(uint *)(puVar6 + 2) | 1;
      }
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)0x0);
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    iVar3 = FUN_1450f0ee0(*(undefined8 *)(uVar9 + 0x68),param_1,uVar7,uVar8);
    if (iVar3 == 1) {
      return;
    }
    FUN_144d41800(iVar1,*(undefined4 *)((longlong)puVar6 + 0xc),0,1);
    *(uint *)(puVar6 + 2) = *(uint *)(puVar6 + 2) & 0xfffffffd | 1;
    do {
      if (*(int *)(puVar6 + 1) == iVar1) {
        *(uint *)(puVar6 + 2) = *(uint *)(puVar6 + 2) | 1;
      }
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)0x0);
  }
  FUN_144d52d70();
  return;
}



// FUNCTION 144d52cf0 FUN_144d52cf0 body=119 status=ok
// SIG undefined FUN_144d52cf0(void)

undefined8 FUN_144d52cf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    return 2;
  }
  *param_1 = *puVar1;
  if (puVar1 == (undefined8 *)param_1[1]) {
    param_1[1] = 0;
  }
  if (((undefined8 *)param_1[3] <= puVar1) &&
     (puVar1 < (undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 3)) {
    *puVar1 = param_1[2];
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    param_1[2] = puVar1;
    return 1;
  }
  AK::MemoryMgr::Free(0,puVar1);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
  return 1;
}



// FUNCTION 144d52d70 FUN_144d52d70 body=188 status=ok
// SIG undefined FUN_144d52d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d52d70(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)0x0;
  puVar1 = DAT_14c791630;
  puVar4 = DAT_14c791630;
  while (puVar3 = puVar1, puVar2 = puVar5, puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    puVar5 = puVar3;
    if ((*(byte *)(puVar3 + 2) & 2) == 0) {
      puVar5 = puVar1;
      if (puVar3 != puVar4) {
        *puVar2 = puVar1;
        puVar5 = DAT_14c791630;
      }
      DAT_14c791630 = puVar5;
      if (puVar3 == DAT_14c791638) {
        DAT_14c791638 = puVar2;
      }
      puVar5 = puVar2;
      if ((puVar3 < DAT_14c791648) || (DAT_14c791648 + (ulonglong)DAT_14c791650 * 3 <= puVar3)) {
        AK::MemoryMgr::Free(0,puVar3);
        _DAT_14c791654 = _DAT_14c791654 + -1;
        puVar4 = DAT_14c791630;
      }
      else {
        *puVar3 = DAT_14c791640;
        _DAT_14c791654 = _DAT_14c791654 + -1;
        puVar4 = DAT_14c791630;
        DAT_14c791640 = puVar3;
      }
    }
  }
  return;
}



// FUNCTION 144d52e50 FUN_144d52e50 body=43 status=ok
// SIG undefined FUN_144d52e50(void)

undefined8 * FUN_144d52e50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144d52ed0 FUN_144d52ed0 body=169 status=ok
// SIG undefined FUN_144d52ed0(void)

undefined8
FUN_144d52ed0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,uint *param_5
             )

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  *(longlong **)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 8) = param_4;
  if (DAT_14c791660 != (code *)0x0) {
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x78))(param_3);
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*DAT_14c791660)(uVar2,param_5);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)param_5;
  *(uint *)(param_1 + 0x38) = param_5[2];
  uVar1 = *param_5;
  uVar2 = FUN_144d53480(param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(float *)(param_1 + 0x18) = 10.0 / (float)uVar1;
  *(float *)(param_1 + 0x1c) = -(10.0 / (float)uVar1);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return 1;
}



// FUNCTION 144d52f80 FUN_144d52f80 body=56 status=ok
// SIG undefined FUN_144d52f80(void)

undefined8 FUN_144d52f80(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 144d52ff0 FUN_144d52ff0 body=1128 status=ok
// SIG undefined FUN_144d52ff0(void)

void FUN_144d52ff0(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  short *psVar12;
  char *pcVar13;
  float *pfVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  
  if (DAT_14c791658 != (code *)0x0) {
    pfVar1 = (float *)(param_1 + 0x18);
    fVar18 = (float)FUN_144d53480();
    fVar19 = *pfVar1;
    *(float *)(param_1 + 0x20) = fVar18;
    uVar15 = 0;
    fVar18 = fVar18 - *(float *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x2c) = (int)(longlong)(ABS(fVar18) / fVar19);
    if (fVar18 <= 0.0) {
      fVar19 = -fVar19;
    }
    *(float *)(param_1 + 0x1c) = fVar19;
    plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))();
    uVar7 = (**(code **)(*plVar10 + 8))(plVar10);
    (*DAT_14c791658)(uVar7);
    uVar4 = *(ushort *)((longlong)param_2 + 0x12);
    uVar16 = (ulonglong)uVar4;
    bVar3 = *(byte *)(param_2 + 1);
    uVar17 = (uint)bVar3;
    uVar9 = (uint)uVar4;
    if ((*(uint *)(param_1 + 0x38) & 0x30000) == 0x10000) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)pfVar1;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar16 = uVar15;
      if (uVar17 != 0) {
        do {
          if ((int)uVar16 != 0) {
            *(undefined8 *)pfVar1 = uVar5;
            *(undefined8 *)(param_1 + 0x20) = uVar6;
            *(undefined8 *)(param_1 + 0x28) = uVar2;
          }
          pfVar14 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar15 * 4);
          uVar8 = 0;
          if (3 < uVar9) {
            uVar8 = (uVar4 - 4 >> 2) + 1;
            uVar11 = (ulonglong)uVar8;
            uVar8 = uVar8 * 4;
            do {
              if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
                fVar19 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
                *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
              }
              else {
                fVar19 = *(float *)(param_1 + 0x20);
              }
              *(float *)(param_1 + 0x24) = fVar19;
              *pfVar14 = fVar19 * *pfVar14;
              if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
                fVar19 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
                *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
              }
              else {
                fVar19 = *(float *)(param_1 + 0x20);
              }
              *(float *)(param_1 + 0x24) = fVar19;
              pfVar14[1] = fVar19 * pfVar14[1];
              if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
                fVar19 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
                *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
              }
              else {
                fVar19 = *(float *)(param_1 + 0x20);
              }
              *(float *)(param_1 + 0x24) = fVar19;
              pfVar14[2] = fVar19 * pfVar14[2];
              if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
                fVar19 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
                *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
              }
              else {
                fVar19 = *(float *)(param_1 + 0x20);
              }
              *(float *)(param_1 + 0x24) = fVar19;
              pfVar14[3] = fVar19 * pfVar14[3];
              pfVar14 = pfVar14 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (uVar8 < uVar9) {
            uVar11 = (ulonglong)(uVar4 - uVar8);
            do {
              if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
                fVar19 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
                *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
              }
              else {
                fVar19 = *(float *)(param_1 + 0x20);
              }
              *(float *)(param_1 + 0x24) = fVar19;
              *pfVar14 = fVar19 * *pfVar14;
              pfVar14 = pfVar14 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          uVar8 = (int)uVar16 + 1;
          uVar15 = uVar15 + 1;
          uVar16 = (ulonglong)uVar8;
        } while (uVar8 < uVar17);
      }
    }
    else {
      uVar8 = (*(uint *)(param_1 + 0x38) >> 6 & 0x3ff) / (uint)*(byte *)(param_1 + 0x34);
      if (uVar8 == 1) {
        pcVar13 = (char *)*param_2;
        if (uVar9 != 0) {
          do {
            if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
              fVar19 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
            }
            else {
              fVar19 = *(float *)(param_1 + 0x20);
            }
            *(float *)(param_1 + 0x24) = fVar19;
            uVar9 = 0;
            if (3 < uVar17) {
              uVar9 = (bVar3 - 4 >> 2) + 1;
              uVar15 = (ulonglong)uVar9;
              uVar9 = uVar9 * 4;
              do {
                *pcVar13 = (char)(int)((float)(int)*pcVar13 * fVar19);
                pcVar13[1] = (char)(int)((float)(int)pcVar13[1] * fVar19);
                pcVar13[2] = (char)(int)((float)(int)pcVar13[2] * fVar19);
                pcVar13[3] = (char)(int)((float)(int)pcVar13[3] * fVar19);
                pcVar13 = pcVar13 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            if (uVar9 < uVar17) {
              uVar15 = (ulonglong)(bVar3 - uVar9);
              do {
                *pcVar13 = (char)(int)((float)(int)*pcVar13 * fVar19);
                pcVar13 = pcVar13 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
      else if (uVar8 == 2) {
        psVar12 = (short *)*param_2;
        if (uVar9 != 0) {
          do {
            if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
              fVar19 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
            }
            else {
              fVar19 = *(float *)(param_1 + 0x20);
            }
            *(float *)(param_1 + 0x24) = fVar19;
            uVar9 = 0;
            if (3 < uVar17) {
              uVar9 = (bVar3 - 4 >> 2) + 1;
              uVar15 = (ulonglong)uVar9;
              uVar9 = uVar9 * 4;
              do {
                *psVar12 = (short)(int)((float)(int)*psVar12 * fVar19);
                psVar12[1] = (short)(int)((float)(int)psVar12[1] * fVar19);
                psVar12[2] = (short)(int)((float)(int)psVar12[2] * fVar19);
                psVar12[3] = (short)(int)((float)(int)psVar12[3] * fVar19);
                psVar12 = psVar12 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            if (uVar9 < uVar17) {
              uVar15 = (ulonglong)(bVar3 - uVar9);
              do {
                *psVar12 = (short)(int)((float)(int)*psVar12 * fVar19);
                psVar12 = psVar12 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
      else if (uVar8 == 4) {
        FUN_144d535d0(uVar16,bVar3,param_2,pfVar1);
      }
    }
    return;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 2;
  *(undefined2 *)((longlong)param_2 + 0x12) = 0;
  return;
}



// FUNCTION 144d53480 FUN_144d53480 body=115 status=ok
// SIG undefined FUN_144d53480(void)

undefined8 FUN_144d53480(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  float fVar4;
  undefined4 uVar5;
  
  fVar4 = 1.0;
  uVar5 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    fVar4 = powf(10.0,*(float *)(*(longlong *)(param_1 + 8) + 8) * 0.05);
    uVar5 = extraout_XMM0_Db;
  }
  if (DAT_14c791668 != (code *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))();
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    fVar3 = (float)(*DAT_14c791668)(uVar1);
    fVar4 = fVar4 * fVar3;
  }
  return CONCAT44(uVar5,fVar4);
}



// FUNCTION 144d53500 FUN_144d53500 body=43 status=ok
// SIG undefined FUN_144d53500(void)

undefined8 * FUN_144d53500(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144d53530 FUN_144d53530 body=88 status=ok
// SIG undefined FUN_144d53530(void)

undefined8 * FUN_144d53530(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x40,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkAudioInput\\Sources\\AudioEngineFX\\AkFXSrcAudioInput.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1499d16e8;
    *(undefined1 *)((longlong)puVar1 + 0x34) = 0;
    *(uint *)((longlong)puVar1 + 0x34) = *(uint *)((longlong)puVar1 + 0x34) & 0xff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144d53590 FUN_144d53590 body=49 status=ok
// SIG undefined FUN_144d53590(void)

void FUN_144d53590(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))
                    (param_1,0x10,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkAudioInput\\Sources\\AudioEngineFX\\AkFXSrcAudioInput.cpp"
                    );
  if (lVar1 != 0) {
    FUN_1450f3b70(lVar1);
    return;
  }
  return;
}



// FUNCTION 144d535d0 FUN_144d535d0 body=399 status=ok
// SIG undefined FUN_144d535d0(void)

void FUN_144d535d0(uint param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  float fVar8;
  
  piVar6 = (int *)*param_3;
  if (param_1 != 0) {
    uVar7 = *(uint *)(param_4 + 0x10);
    uVar1 = *(uint *)(param_4 + 0x14);
    uVar4 = (ulonglong)param_1;
    do {
      if (uVar7 < uVar1) {
        uVar7 = uVar7 + 1;
        fVar8 = *(float *)(param_4 + 0xc) + *(float *)(param_4 + 4);
      }
      else {
        fVar8 = *(float *)(param_4 + 8);
      }
      uVar3 = 0;
      *(float *)(param_4 + 0xc) = fVar8;
      if (param_2 != 0) {
        if (0xf < param_2) {
          do {
            uVar3 = uVar3 + 0x10;
            *piVar6 = (int)((float)*piVar6 * fVar8);
            piVar6[1] = (int)((float)piVar6[1] * fVar8);
            piVar6[2] = (int)((float)piVar6[2] * fVar8);
            piVar6[3] = (int)((float)piVar6[3] * fVar8);
            piVar6[4] = (int)((float)piVar6[4] * fVar8);
            piVar6[5] = (int)((float)piVar6[5] * fVar8);
            piVar6[6] = (int)((float)piVar6[6] * fVar8);
            piVar6[7] = (int)((float)piVar6[7] * fVar8);
            piVar6[8] = (int)((float)piVar6[8] * fVar8);
            piVar6[9] = (int)((float)piVar6[9] * fVar8);
            piVar6[10] = (int)((float)piVar6[10] * fVar8);
            piVar6[0xb] = (int)((float)piVar6[0xb] * fVar8);
            piVar6[0xc] = (int)((float)piVar6[0xc] * fVar8);
            piVar6[0xd] = (int)((float)piVar6[0xd] * fVar8);
            piVar6[0xe] = (int)((float)piVar6[0xe] * fVar8);
            piVar6[0xf] = (int)((float)piVar6[0xf] * fVar8);
            piVar6 = piVar6 + 0x10;
          } while (uVar3 < (param_2 & 0xfffffff0));
          if (param_2 <= uVar3) goto LAB_144d53743;
        }
        if (3 < param_2 - uVar3) {
          uVar2 = ((param_2 - uVar3) - 4 >> 2) + 1;
          uVar5 = (ulonglong)uVar2;
          uVar3 = uVar3 + uVar2 * 4;
          do {
            *piVar6 = (int)((float)*piVar6 * fVar8);
            piVar6[1] = (int)((float)piVar6[1] * fVar8);
            piVar6[2] = (int)((float)piVar6[2] * fVar8);
            piVar6[3] = (int)((float)piVar6[3] * fVar8);
            piVar6 = piVar6 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          if (param_2 <= uVar3) goto LAB_144d53743;
        }
        uVar5 = (ulonglong)(param_2 - uVar3);
        do {
          *piVar6 = (int)((float)*piVar6 * fVar8);
          piVar6 = piVar6 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
LAB_144d53743:
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(uint *)(param_4 + 0x10) = uVar7;
  }
  return;
}



// FUNCTION 144d53760 FUN_144d53760 body=58 status=ok
// SIG undefined FUN_144d53760(void)

void FUN_144d53760(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(5,0xe8);
  if (pvVar1 != (void *)0x0) {
    FUN_1450f4ee0(pvVar1,param_1,FUN_1450f6350);
    return;
  }
  return;
}



// FUNCTION 144d537a0 FUN_144d537a0 body=42 status=ok
// SIG undefined FUN_144d537a0(void)

void FUN_144d537a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(5,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1499d17f0;
    return;
  }
  return;
}



// FUNCTION 144d537d0 FUN_144d537d0 body=41 status=ok
// SIG undefined FUN_144d537d0(void)

void FUN_144d537d0(void)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(5,0x130);
  if (pvVar1 != (void *)0x0) {
    FUN_1450f47e0(pvVar1);
    return;
  }
  return;
}



// FUNCTION 144d53800 FUN_144d53800 body=43 status=ok
// SIG undefined FUN_144d53800(void)

undefined8 * FUN_144d53800(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d17e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144d53830 FUN_144d53830 body=43 status=ok
// SIG undefined FUN_144d53830(void)

undefined8 * FUN_144d53830(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d17e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144d53860 FUN_144d53860 body=43 status=ok
// SIG undefined FUN_144d53860(void)

undefined8 * FUN_144d53860(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d17e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144d53890 FUN_144d53890 body=43 status=ok
// SIG undefined FUN_144d53890(void)

undefined8 * FUN_144d53890(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d17e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144d538c0 FUN_144d538c0 body=51 status=ok
// SIG undefined FUN_144d538c0(void)

void FUN_144d538c0(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(5,0xb0);
  if (pvVar1 != (void *)0x0) {
    FUN_1450f72b0(pvVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 144d53900 FUN_144d53900 body=42 status=ok
// SIG undefined FUN_144d53900(void)

void FUN_144d53900(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(5,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1499d1800;
    return;
  }
  return;
}



// FUNCTION 144d53930 FUN_144d53930 body=58 status=ok
// SIG undefined FUN_144d53930(void)

void FUN_144d53930(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(5,0xe8);
  if (pvVar1 != (void *)0x0) {
    FUN_1450f4ee0(pvVar1,param_1,FUN_144d539e0);
    return;
  }
  return;
}



// FUNCTION 144d53970 FUN_144d53970 body=42 status=ok
// SIG undefined FUN_144d53970(void)

void FUN_144d53970(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(5,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1499d1810;
    return;
  }
  return;
}



// FUNCTION 144d539a0 FUN_144d539a0 body=13 status=ok
// SIG undefined FUN_144d539a0(void)

void FUN_144d539a0(__uint64 param_1)

{
  AK::MemoryMgr::Malloc(5,param_1);
  return;
}



// FUNCTION 144d539b0 FUN_144d539b0 body=16 status=ok
// SIG undefined FUN_144d539b0(void)

void FUN_144d539b0(void *param_1,__uint64 param_2)

{
  AK::MemoryMgr::Realloc(5,param_1,param_2);
  return;
}



// FUNCTION 144d539c0 FUN_144d539c0 body=19 status=ok
// SIG undefined FUN_144d539c0(void)

void FUN_144d539c0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    AK::MemoryMgr::Free(5,param_1);
    return;
  }
  return;
}



// FUNCTION 144d539e0 FUN_144d539e0 body=41 status=ok
// SIG undefined FUN_144d539e0(void)

void FUN_144d539e0(void)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(5,0xb8);
  if (pvVar1 != (void *)0x0) {
    FUN_1450f8880(pvVar1);
    return;
  }
  return;
}



// FUNCTION 144d53a10 FUN_144d53a10 body=43 status=ok
// SIG undefined FUN_144d53a10(void)

undefined8 * FUN_144d53a10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144d53a40 FUN_144d53a40 body=81 status=ok
// SIG undefined FUN_144d53a40(void)

void FUN_144d53a40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x18,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkSilenceSource\\AkFXSrcSilence.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1499d1830;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 144d53ad0 FUN_144d53ad0 body=56 status=ok
// SIG undefined FUN_144d53ad0(void)

undefined8 FUN_144d53ad0(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 144d53b70 FUN_144d53b70 body=43 status=ok
// SIG undefined FUN_144d53b70(void)

undefined8 * FUN_144d53b70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144d53ba0 FUN_144d53ba0 body=189 status=ok
// SIG undefined FUN_144d53ba0(void)

undefined8
FUN_144d53ba0(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined4 *param_5)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  
  *(longlong **)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 8) = *param_5;
  *(uint *)(param_1 + 0xc) = (uint)param_5[2] >> 3 & 7;
  uVar2 = (**(code **)(*param_3 + 0x70))(param_3);
  *(undefined2 *)(param_1 + 0x18) = uVar2;
  *(longlong *)(param_1 + 0x20) = param_4;
  fVar1 = *(float *)(param_4 + 0x10);
  fVar5 = *(float *)(param_4 + 0xc);
  plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  iVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4);
  fVar5 = (float)iVar3 * 4.656613e-10 * (fVar1 - fVar5) + fVar5;
  *(float *)(param_1 + 0x14) = fVar5;
  fVar5 = fVar5 + *(float *)(*(longlong *)(param_1 + 0x20) + 8);
  *(float *)(param_1 + 0x1c) = fVar5;
  if (fVar5 < 0.001) {
    *(undefined4 *)(param_1 + 0x1c) = 0x3a83126f;
  }
  return 1;
}



// FUNCTION 144d53c60 FUN_144d53c60 body=56 status=ok
// SIG undefined FUN_144d53c60(void)

undefined8 FUN_144d53c60(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 144d53cd0 FUN_144d53cd0 body=160 status=ok
// SIG undefined FUN_144d53cd0(void)

undefined4 FUN_144d53cd0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar4 = 0;
  uVar6 = uVar1 * *param_2;
  uVar5 = 0x2d;
  if (*(short *)(param_1 + 0x18) != 0) {
    fVar8 = *(float *)(*(longlong *)(param_1 + 0x20) + 8) + *(float *)(param_1 + 0x14);
    uVar2 = *(uint *)(param_1 + 0x10);
    if (fVar8 <= 0.001) {
      fVar8 = 0.001;
    }
    uVar3 = (int)(longlong)(fVar8 * (float)*(uint *)(param_1 + 8)) * (int)*(short *)(param_1 + 0x18)
            * uVar1;
    if (uVar2 < uVar3) {
      uVar3 = uVar3 - uVar2;
      uVar4 = uVar6;
      if (uVar3 <= uVar6) {
        uVar4 = uVar3;
      }
      *(uint *)(param_1 + 0x10) = uVar4 + uVar2;
      bVar7 = uVar6 <= uVar4;
      uVar6 = uVar4;
      if (bVar7) goto LAB_144d53d56;
    }
    uVar5 = 0x11;
    uVar6 = uVar4;
  }
LAB_144d53d56:
  *param_2 = uVar6 / uVar1 & 0xffff;
  return uVar5;
}



// FUNCTION 144d53d70 FUN_144d53d70 body=74 status=ok
// SIG undefined FUN_144d53d70(void)

void FUN_144d53d70(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar2 = (**(code **)(*param_1 + 0x58))();
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(ushort *)((longlong)param_2 + 0x12) = uVar1;
  memset((void *)*param_2,0,(ulonglong)((uint)uVar1 * *(int *)((longlong)param_1 + 0xc)));
  return;
}



// FUNCTION 144d53e50 FUN_144d53e50 body=43 status=ok
// SIG undefined FUN_144d53e50(void)

undefined8 * FUN_144d53e50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144d53e80 FUN_144d53e80 body=52 status=ok
// SIG undefined FUN_144d53e80(void)

void FUN_144d53e80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x18,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkSilenceSource\\AkFXSrcSilence.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1499d1830;
    return;
  }
  return;
}



// FUNCTION 144d53ec0 FUN_144d53ec0 body=83 status=ok
// SIG undefined FUN_144d53ec0(void)

undefined8 * FUN_144d53ec0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x30,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkSilenceSource\\AkFXSrcSilence.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = &PTR_FUN_1499d1860;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144d53f20 FUN_144d53f20 body=219 status=ok
// SIG undefined FUN_144d53f20(void)

undefined8
FUN_144d53f20(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,uint *param_5)

{
  float fVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  char cVar5;
  
  *(longlong *)(param_1 + 0x28) = param_4;
  cVar5 = '\0';
  uVar2 = *(uint *)(param_4 + 0x14);
  for (uVar4 = uVar2; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
    cVar5 = cVar5 + '\x01';
  }
  *(char *)(param_5 + 1) = cVar5;
  param_5[1] = param_5[1] & 0xff;
  param_5[1] = param_5[1] | uVar2 << 0xc | 0x100;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc);
  uVar2 = *param_5;
  uVar3 = (**(code **)(*param_3 + 0x70))(param_3);
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x10);
  *(uint *)(param_1 + 0x10) = uVar2;
  *(undefined2 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 8) = (int)(longlong)((float)uVar2 * fVar1) + 3U & 0xfffffffc;
  uVar2 = *param_5;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 0x20) = (float)uVar2;
  *(float *)(param_1 + 0x1c) = (fVar1 * 6.2831855) / (float)uVar2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x18) = 0;
  return 1;
}



// FUNCTION 144d54000 FUN_144d54000 body=56 status=ok
// SIG undefined FUN_144d54000(void)

undefined8 FUN_144d54000(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 144d54070 FUN_144d54070 body=248 status=ok
// SIG undefined FUN_144d54070(void)

void FUN_144d54070(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    *(float *)(param_1 + 0x1c) = (*(float *)(lVar1 + 8) * 6.2831855) / *(float *)(param_1 + 0x20);
  }
  if ((*(byte *)(lVar1 + 0x18) & 4) != 0) {
    *(uint *)(param_1 + 8) =
         (int)(longlong)((float)*(uint *)(param_1 + 0x10) * *(float *)(lVar1 + 0x10)) + 3U &
         0xfffffffc;
  }
  *(undefined1 *)(lVar1 + 0x18) = 0;
  uVar3 = (uint)*(ushort *)(param_2 + 2);
  *(ushort *)((longlong)param_2 + 0x12) = *(ushort *)(param_2 + 2);
  uVar4 = 0x2d;
  if (*(short *)(param_1 + 0x14) != 0) {
    uVar2 = (int)*(short *)(param_1 + 0x14) * *(int *)(param_1 + 8);
    if (*(uint *)(param_1 + 0xc) < uVar2) {
      uVar2 = uVar2 - *(uint *)(param_1 + 0xc);
      if (uVar2 <= uVar3) {
        *(short *)((longlong)param_2 + 0x12) = (short)uVar2;
        uVar4 = 0x11;
        uVar3 = uVar2 & 0xffff;
      }
    }
    else {
      uVar3 = 0;
      uVar4 = 0x11;
      *(undefined2 *)((longlong)param_2 + 0x12) = 0;
    }
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  if (*(short *)((longlong)param_2 + 0x12) != 0) {
    FUN_1450fa230(param_1 + 0x18,*param_2,*(short *)((longlong)param_2 + 0x12),
                  *(undefined4 *)(param_1 + 0x24),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc));
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc);
  }
  return;
}



// FUNCTION 144d54260 FUN_144d54260 body=43 status=ok
// SIG undefined FUN_144d54260(void)

undefined8 * FUN_144d54260(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144d54290 FUN_144d54290 body=60 status=ok
// SIG undefined FUN_144d54290(void)

void FUN_144d54290(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x30,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkSineTone\\Sources\\AudioEngineFX\\AkFXSrcSine.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1499d1960;
    return;
  }
  return;
}



// FUNCTION 144d542d0 FUN_144d542d0 body=49 status=ok
// SIG undefined FUN_144d542d0(void)

void FUN_144d542d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))
                    (param_1,0x20,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkSineTone\\Sources\\AudioEngineFX\\AkFXSrcSine.cpp"
                    );
  if (lVar1 != 0) {
    FUN_1450f9fb0(lVar1);
    return;
  }
  return;
}



// FUNCTION 144d54310 FUN_144d54310 body=1777 status=ok
// SIG undefined FUN_144d54310(void)

undefined8
FUN_144d54310(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  char cVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  
  puVar3 = param_5;
  *(longlong **)(param_1 + 0x150) = param_3;
  cVar13 = '\0';
  uVar1 = *param_5;
  *(uint *)(param_1 + 8) = uVar1;
  *(longlong *)(param_1 + 0x148) = param_4;
  fVar19 = (float)uVar1 * 0.5;
  if (20000.0 <= fVar19) {
    fVar19 = 20000.0;
  }
  *(float *)(param_1 + 0x30) = fVar19;
  uVar2 = *(undefined8 *)(param_4 + 0x1c);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_4 + 0x14);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x2c);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_4 + 0x24);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x3c);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_4 + 0x34);
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_4 + 0x44);
  uVar1 = *(uint *)(param_4 + 0x4c);
  *(uint *)(param_1 + 0xd8) = uVar1;
  for (uVar9 = uVar1; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
    cVar13 = cVar13 + '\x01';
  }
  *(char *)(param_5 + 1) = cVar13;
  param_5[1] = param_5[1] & 0xff;
  param_5[1] = param_5[1] | uVar1 << 0xc | 0x100;
  sVar4 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x70))();
  *(short *)(param_1 + 0xc) = sVar4;
  *(bool *)(param_1 + 0x3c) = sVar4 != 0;
  if (*(int *)(param_1 + 0xbc) == 1) {
    fVar19 = (float)*(uint *)(param_1 + 8);
    uVar15 = (ulonglong)(fVar19 * *(float *)(param_1 + 0xc4));
    iVar14 = (int)uVar15;
    *(int *)(param_1 + 0x68) = iVar14;
    uVar18 = (ulonglong)(fVar19 * *(float *)(param_1 + 200));
    iVar17 = (int)uVar18;
    *(int *)(param_1 + 0x6c) = iVar17;
    iVar6 = (int)(longlong)((float)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xcc));
    *(int *)(param_1 + 0x70) = iVar6;
    uVar16 = (ulonglong)(fVar19 * *(float *)(param_1 + 0xd4));
    iVar5 = (int)uVar16;
    *(int *)(param_1 + 0x74) = iVar5;
    *(int *)(param_1 + 0x1c) = iVar14 + iVar5 + iVar6 + iVar17;
    if (iVar14 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 1;
      uVar15 = 1;
    }
    *(float *)(param_1 + 0x54) = 1.0 / (float)(uVar15 & 0xffffffff);
    fVar19 = powf(10.0,*(float *)(param_1 + 0xd0) * 0.05);
    if (iVar17 == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
      uVar18 = 1;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(float *)(param_1 + 0x58) = (-1.0 / (float)(uVar18 & 0xffffffff)) * (1.0 - fVar19);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x74) = 1;
      uVar16 = 1;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(float *)(param_1 + 0x60) = (-1.0 / (float)(uVar16 & 0xffffffff)) * fVar19;
  }
  else {
    iVar6 = 0;
    if (sVar4 == 1) {
      uVar1 = *puVar3;
      uVar21 = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      uVar15 = (ulonglong)((float)uVar1 * 0.005);
      iVar6 = (int)uVar15;
      *(int *)(param_1 + 0x68) = iVar6;
      iVar5 = (int)(longlong)((float)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xc0));
      *(int *)(param_1 + 0x70) = iVar5;
      uVar1 = *puVar3;
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar16 = (ulonglong)((float)uVar1 * 0.005);
      iVar14 = (int)uVar16;
      *(int *)(param_1 + 0x74) = iVar14;
      *(float *)(param_1 + 0x54) = 1.0 / (float)(uVar15 & 0xffffffff);
      *(float *)(param_1 + 0x60) = -1.0 / (float)(uVar16 & 0xffffffff);
    }
    else {
      uVar21 = 0x3f800000;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      iVar5 = (int)(longlong)((float)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xc0));
      *(int *)(param_1 + 0x70) = iVar5;
      *(undefined8 *)(param_1 + 0x54) = 0;
      *(undefined8 *)(param_1 + 0x5c) = 0;
      iVar14 = iVar6;
    }
    *(undefined4 *)(param_1 + 0x7c) = uVar21;
    *(int *)(param_1 + 0x1c) = iVar6 + iVar14 + iVar5;
  }
  lVar11 = 0;
  *(int *)(param_1 + 0x18) = (int)sVar4 * *(int *)(param_1 + 0x1c);
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 < 4) {
    fVar19 = *(float *)(param_1 + 0xa0);
    fVar20 = *(float *)(param_1 + 0xa4);
    if (fVar19 != fVar20) {
      iVar6 = rand();
      fVar19 = (float)iVar6 * 3.051851e-05 * (fVar20 - fVar19) + fVar19;
    }
    *(float *)(param_1 + 0x2c) = fVar19;
    if (*(char *)(param_1 + 0xa8) != '\0') {
      fVar19 = *(float *)(param_1 + 0xb4);
      fVar20 = *(float *)(param_1 + 0xb0);
      if (fVar20 != fVar19) {
        iVar6 = rand();
        fVar20 = (float)iVar6 * 3.051851e-05 * (fVar19 - fVar20) + fVar20;
      }
      *(float *)(param_1 + 0x34) = fVar20;
    }
  }
  else if (uVar1 == 5) {
    plVar7 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
    plVar7 = (longlong *)(**(code **)(*plVar7 + 200))(plVar7,1);
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,&param_5);
    lVar10 = *plVar7 * 0x5851f42d4c957f2d + 1;
    *plVar7 = lVar10;
    *(uint *)(param_1 + 0x80) = (uint)((ulonglong)lVar10 >> 0x21);
    plVar8 = (longlong *)
             (**(code **)(*param_2 + 8))
                       (param_2,0x78,
                        "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkToneGenerator\\Sources\\AudioEngineFX\\AkToneGen.cpp"
                        ,0x161);
    plVar7 = (longlong *)(param_1 + 0x98);
    *plVar7 = (longlong)plVar8;
    if (plVar8 == (longlong *)0x0) {
      return 0x34;
    }
    *(undefined8 *)(param_1 + 0x40) = 0x3fffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0x3e042108;
    if ((plVar7 < plVar8) || ((longlong *)((longlong)plVar8 + 0x74) < plVar7)) {
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      plVar8[3] = 0;
      plVar8[4] = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      plVar8[7] = 0;
      plVar8[8] = 0;
      plVar8[9] = 0;
      plVar8[10] = 0;
      plVar8[0xb] = 0;
      plVar8[0xc] = 0;
      plVar8[0xd] = 0;
      lVar11 = 0x1c;
    }
    else {
      lVar10 = 7;
      do {
        *(undefined4 *)(*plVar7 + lVar11 * 4) = 0;
        *(undefined4 *)(*plVar7 + 4 + lVar11 * 4) = 0;
        *(undefined4 *)(*plVar7 + 8 + lVar11 * 4) = 0;
        *(undefined4 *)(*plVar7 + 0xc + lVar11 * 4) = 0;
        lVar11 = lVar11 + 4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    lVar10 = 2;
    lVar11 = lVar11 * 4;
    do {
      *(undefined4 *)(lVar11 + *(longlong *)(param_1 + 0x98)) = 0;
      lVar10 = lVar10 + -1;
      lVar11 = lVar11 + 4;
    } while (lVar10 != 0);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else if (uVar1 == 4) {
    plVar7 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
    plVar7 = (longlong *)(**(code **)(*plVar7 + 200))(plVar7,1);
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,&param_5);
    lVar11 = *plVar7 * 0x5851f42d4c957f2d + 1;
    *plVar7 = lVar11;
    *(uint *)(param_1 + 0x80) = (uint)((ulonglong)lVar11 >> 0x21);
  }
  lVar11 = param_1 + 0xdc;
  lVar10 = 3;
  *(float *)(param_1 + 0x50) = (float)(uint)(*(int *)(param_1 + 8) << 2);
  do {
    FUN_1450fa9f0(lVar11,(float)*(uint *)(param_1 + 8) * 0.375,*(undefined4 *)(param_1 + 0x50));
    lVar11 = lVar11 + 0x24;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  switch(*(undefined4 *)(param_1 + 0xb8)) {
  case 0:
    *(undefined **)(param_1 + 0x90) = &DAT_14c704350;
    if (*(char *)(param_1 + 0xa8) == '\0') {
      *(code **)(param_1 + 0x88) = FUN_1450faa90;
    }
    else {
      pcVar12 = FUN_1450faf90;
      if (*(int *)(param_1 + 0xac) != 1) {
        pcVar12 = FUN_1450facd0;
      }
      *(code **)(param_1 + 0x88) = pcVar12;
    }
    break;
  case 1:
    *(undefined **)(param_1 + 0x90) = &DAT_14c704b50;
    if (*(char *)(param_1 + 0xa8) != '\0') {
      pcVar12 = FUN_1450fb280;
      if (*(int *)(param_1 + 0xac) != 1) {
        pcVar12 = FUN_1450fb930;
      }
      *(code **)(param_1 + 0x88) = pcVar12;
      return 1;
    }
    goto LAB_144d5493a;
  case 2:
    *(undefined **)(param_1 + 0x90) = &DAT_14c705350;
    if (*(char *)(param_1 + 0xa8) != '\0') {
      pcVar12 = FUN_1450fb280;
      if (*(int *)(param_1 + 0xac) != 1) {
        pcVar12 = FUN_1450fb930;
      }
      *(code **)(param_1 + 0x88) = pcVar12;
      return 1;
    }
    goto LAB_144d5493a;
  case 3:
    *(undefined **)(param_1 + 0x90) = &DAT_14c705b50;
    if (*(char *)(param_1 + 0xa8) != '\0') {
      pcVar12 = FUN_1450fb280;
      if (*(int *)(param_1 + 0xac) != 1) {
        pcVar12 = FUN_1450fb930;
      }
      *(code **)(param_1 + 0x88) = pcVar12;
      return 1;
    }
LAB_144d5493a:
    *(code **)(param_1 + 0x88) = FUN_1450fbf80;
    break;
  case 4:
    *(code **)(param_1 + 0x88) = FUN_1450fc550;
    break;
  case 5:
    *(code **)(param_1 + 0x88) = FUN_1450fc700;
  }
  return 1;
}



// FUNCTION 144d54a20 FUN_144d54a20 body=86 status=ok
// SIG undefined FUN_144d54a20(void)

undefined8 FUN_144d54a20(undefined8 *param_1,longlong *param_2)

{
  if (param_1[0x13] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x13] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 144d54a80 FUN_144d54a80 body=215 status=ok
// SIG undefined FUN_144d54a80(void)

undefined4 FUN_144d54a80(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((*(int *)(param_1 + 0xbc) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  fVar3 = powf(10.0,*(float *)(*(longlong *)(param_1 + 0x148) + 8) * 0.05);
  *(undefined8 *)(param_1 + 0x168) = 0;
  lVar1 = 3;
  *(float *)(param_1 + 0x164) = fVar3;
  *(float *)(param_1 + 0x160) = fVar3;
  fVar3 = 10.0 / (float)*(uint *)(param_1 + 8);
  *(float *)(param_1 + 0x158) = fVar3;
  *(float *)(param_1 + 0x15c) = -fVar3;
  param_1 = param_1 + 0xdc;
  do {
    FUN_1450faa80(param_1);
    param_1 = param_1 + 0x24;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return 1;
}



// FUNCTION 144d54b80 FUN_144d54b80 body=122 status=ok
// SIG undefined FUN_144d54b80(void)

void FUN_144d54b80(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar3 = (uint)uVar1;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    uVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
    uVar3 = (uint)uVar1;
    if (uVar2 <= uVar1) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 != 0) {
    (**(code **)(param_1 + 0x88))(param_1,*param_2,uVar3);
    *(short *)((longlong)param_2 + 0x12) = (short)uVar3;
  }
  if ((*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) &&
     (*(char *)(param_1 + 0x3c) != '\0')) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x11;
    return;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  return;
}



// FUNCTION 144d54c70 FUN_144d54c70 body=103 status=ok
// SIG undefined FUN_144d54c70(void)

undefined8 * FUN_144d54c70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1a58;
  FUN_1450fa9e0((longlong)param_1 + 0x124);
  FUN_1450fa9e0(param_1 + 0x20);
  FUN_1450fa9e0((longlong)param_1 + 0xdc);
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 144d54ce0 FUN_144d54ce0 body=305 status=ok
// SIG undefined FUN_144d54ce0(void)

undefined8 * FUN_144d54ce0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x170,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkToneGenerator\\Sources\\AudioEngineFX\\AkToneGen.cpp"
                      ,0x9c);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1499d1a58;
    FUN_1450fa9c0((undefined8 *)((longlong)puVar1 + 0xdc));
    FUN_1450fa9c0(puVar1 + 0x20);
    FUN_1450fa9c0();
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xec) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xf4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xfc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x104) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x10c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x114) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x11c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x124) = 0;
    *(undefined8 *)((longlong)puVar1 + 300) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x134) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x13c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x144) = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x11] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[5] = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x3c) = 1;
    *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
    *(undefined2 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0x56ce;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144d54e20 FUN_144d54e20 body=49 status=ok
// SIG undefined FUN_144d54e20(void)

void FUN_144d54e20(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))
                    (param_1,0x50,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkToneGenerator\\Sources\\AudioEngineFX\\AkToneGen.cpp"
                    );
  if (lVar1 != 0) {
    FUN_1450fa650(lVar1);
    return;
  }
  return;
}



// FUNCTION 144d54e60 FUN_144d54e60 body=171 status=ok
// SIG undefined FUN_144d54e60(void)

undefined4
FUN_144d54e60(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(longlong *)(param_1 + 0x50) = param_4;
  lVar2 = param_4 + 8;
  if (param_4 == 0) {
    lVar2 = 0;
  }
  FUN_14510d460(param_1 + 8,lVar2,*param_5);
  lVar2 = *(longlong *)(param_1 + 0x50) + 8;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar2 = 0;
  }
  uVar1 = FUN_14510d490(param_1 + 8,param_2,lVar2,param_5[1]);
  FUN_14510d640(param_1 + 8,*(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x14),
                *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 8));
  *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x1d) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x15) = 0;
  return uVar1;
}



// FUNCTION 144d54f10 FUN_144d54f10 body=68 status=ok
// SIG undefined FUN_144d54f10(void)

undefined8 FUN_144d54f10(undefined8 *param_1,longlong *param_2)

{
  thunk_FUN_14510dae0(param_1 + 1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 144d54f60 FUN_144d54f60 body=23 status=ok
// SIG undefined FUN_144d54f60(void)

undefined8 FUN_144d54f60(longlong param_1)

{
  FUN_14510d5c0(param_1 + 8);
  return 1;
}



// FUNCTION 144d54fa0 FUN_144d54fa0 body=172 status=ok
// SIG undefined FUN_144d54fa0(void)

void FUN_144d54fa0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (*(char *)(lVar3 + 0x1d) != '\0') {
    lVar2 = lVar3 + 8;
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    iVar1 = FUN_14510d490(param_1 + 8,*(undefined8 *)(param_1 + 0x58),lVar2,
                          *(undefined4 *)(param_2 + 8));
    if (iVar1 != 1) {
      return;
    }
    FUN_14510d5c0(param_1 + 8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x1d) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (*(char *)(lVar3 + 0x15) != '\0') {
    FUN_14510d640(param_1 + 8,*(undefined1 *)(lVar3 + 0x14),*(undefined4 *)(lVar3 + 8));
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x15) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x50) + 8;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar3 = 0;
  }
  FUN_14510d6b0(param_1 + 8,param_2,lVar3);
  return;
}



// FUNCTION 144d55060 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__1499d1b58;
  FUN_14510d450(this + 8);
  *(undefined ***)this = &PTR_FUN_1499d16b8;
  if ((param_1 & 1) != 0) {
    thunk_FUN_1400020a8(this,0x60);
  }
  return this;
}



// FUNCTION 144d550b0 FUN_144d550b0 body=87 status=ok
// SIG undefined FUN_144d550b0(void)

undefined8 * FUN_144d550b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x60,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkDelay\\Sources\\AudioEngineFX\\AkDelayFX.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__1499d1b58;
    FUN_14510d430(puVar1 + 1);
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144d55110 FUN_144d55110 body=49 status=ok
// SIG undefined FUN_144d55110(void)

void FUN_144d55110(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))
                    (param_1,0x20,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkDelay\\Sources\\AudioEngineFX\\AkDelayFX.cpp"
                    );
  if (lVar1 != 0) {
    FUN_14510d110(lVar1);
    return;
  }
  return;
}



// FUNCTION 144d55150 snprintf body=92 status=ok
// SIG undefined snprintf(void)

/* Library Function - Single Match
    snprintf
   
   Library: Visual Studio 2019 Release */

int snprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_144737586();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 144d551b0 FUN_144d551b0 body=791 status=ok
// SIG undefined FUN_144d551b0(void)

longlong FUN_144d551b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x624);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar2 = 6;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  do {
    *puVar1 = 0x3f800000;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    puVar1[9] = 0;
    puVar1[0xf] = 0;
    puVar1[0x15] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    puVar1[10] = 0;
    puVar1[0x10] = 0;
    puVar1[0x16] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    puVar1[0xb] = 0;
    puVar1[0x11] = 0;
    puVar1[0x17] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    puVar1[0xc] = 0;
    puVar1[0x12] = 0;
    puVar1[0x18] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[0xd] = 0;
    puVar1[0x13] = 0;
    puVar1[0x19] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[0xe] = 0;
    puVar1[0x14] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1 = puVar1 + 0x1b;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = (undefined8 *)(param_1 + 0xb9c);
  do {
    *puVar1 = 0x3f800000;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    puVar1[9] = 0;
    puVar1[0xf] = 0;
    puVar1[0x15] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    puVar1[10] = 0;
    puVar1[0x10] = 0;
    puVar1[0x16] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    puVar1[0xb] = 0;
    puVar1[0x11] = 0;
    puVar1[0x17] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    puVar1[0xc] = 0;
    puVar1[0x12] = 0;
    puVar1[0x18] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[0xd] = 0;
    puVar1[0x13] = 0;
    puVar1[0x19] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[0xe] = 0;
    puVar1[0x14] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1 = puVar1 + 0x1b;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 0x1b30) = 0;
  *(undefined8 *)(param_1 + 0x1b38) = 0;
  *(undefined8 *)(param_1 + 0x1b40) = 0;
  *(undefined8 *)(param_1 + 0x1b48) = 0;
  *(undefined8 *)(param_1 + 0x1b50) = 0;
  *(undefined8 *)(param_1 + 7000) = 0;
  *(undefined8 *)(param_1 + 0x1b60) = 0;
  *(undefined8 *)(param_1 + 0x1b68) = 0;
  *(undefined8 *)(param_1 + 0x1b70) = 0;
  *(undefined8 *)(param_1 + 0x1b78) = 0;
  *(undefined8 *)(param_1 + 0x1b80) = 0;
  *(undefined8 *)(param_1 + 0x1b88) = 0;
  *(undefined8 *)(param_1 + 0x1da0) = 0;
  *(undefined8 *)(param_1 + 0x1da8) = 0;
  *(undefined8 *)(param_1 + 0x1db0) = 0;
  *(undefined8 *)(param_1 + 0x1db8) = 0;
  *(undefined8 *)(param_1 + 0x1dc0) = 0;
  *(undefined8 *)(param_1 + 0x1dc8) = 0;
  *(undefined8 *)(param_1 + 0x1dd0) = 0;
  *(undefined8 *)(param_1 + 0x1dd8) = 0;
  *(undefined8 *)(param_1 + 0x1de0) = 0;
  *(undefined8 *)(param_1 + 0x1de8) = 0;
  *(undefined8 *)(param_1 + 0x1df0) = 0;
  *(undefined8 *)(param_1 + 0x1df8) = 0;
  *(undefined8 *)(param_1 + 0x2010) = 0;
  *(undefined8 *)(param_1 + 0x2018) = 0;
  *(undefined8 *)(param_1 + 0x2020) = 0;
  *(undefined8 *)(param_1 + 0x2028) = 0;
  *(undefined8 *)(param_1 + 0x2030) = 0;
  *(undefined8 *)(param_1 + 0x2038) = 0;
  *(undefined8 *)(param_1 + 0x2040) = 0;
  *(undefined8 *)(param_1 + 0x2048) = 0;
  *(undefined8 *)(param_1 + 0x2050) = 0;
  *(undefined8 *)(param_1 + 0x2058) = 0;
  *(undefined8 *)(param_1 + 0x2060) = 0;
  *(undefined8 *)(param_1 + 0x2068) = 0;
  *(undefined8 *)(param_1 + 0x2280) = 0;
  *(undefined8 *)(param_1 + 0x2288) = 0;
  *(undefined8 *)(param_1 + 0x2290) = 0;
  *(undefined8 *)(param_1 + 0x2298) = 0;
  *(undefined8 *)(param_1 + 0x22a0) = 0;
  *(undefined8 *)(param_1 + 0x22a8) = 0;
  *(undefined8 *)(param_1 + 0x22b0) = 0;
  *(undefined8 *)(param_1 + 0x22b8) = 0;
  *(undefined8 *)(param_1 + 0x22c0) = 0;
  *(undefined8 *)(param_1 + 0x22c8) = 0;
  *(undefined8 *)(param_1 + 0x22d0) = 0;
  *(undefined8 *)(param_1 + 0x22d8) = 0;
  *(undefined4 *)(param_1 + 0xb80) = 0;
  return param_1;
}



// FUNCTION 144d554d0 FUN_144d554d0 body=235 status=ok
// SIG undefined FUN_144d554d0(void)

undefined8
FUN_144d554d0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             longlong param_5,uint *param_6)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(longlong **)(param_1 + 0x20) = param_3;
  *(longlong **)(param_1 + 0x420) = param_3;
  if ((*(uint *)(param_5 + 4) & 0xf00) == 0x300) {
    if ((*param_6 & 0xfffff000) == 0x4000) {
      (**(code **)(*param_3 + 0x40))
                (param_3,"Mastering Suite: Mono configs should not be object based.",2);
      return 0x4e;
    }
    if (*(char *)((longlong)param_6 + 0xd) != '\0') {
      (**(code **)(*param_3 + 0x40))
                (param_3,"Mastering Suite does not support multi-channel system audio objects.",2);
      return 0x4e;
    }
    *(uint *)(param_1 + 0x3e0) = *param_6;
    *(char *)(param_1 + 0x3ec) = (char)param_6[3];
    *(bool *)(param_1 + 0x3ed) = param_6[1] != 0;
    *(uint *)(param_1 + 0x3f0) = param_6[1];
  }
  else {
    *(uint *)(param_1 + 0x3e0) = *(uint *)(param_5 + 4);
    *(undefined2 *)(param_1 + 0x3ec) = 0;
  }
  if (*(char *)(param_1 + 0x410) != '\0') {
    uVar1 = FUN_144d55870(param_1,param_5);
    return uVar1;
  }
  return 2;
}



// FUNCTION 144d555c0 FUN_144d555c0 body=247 status=ok
// SIG undefined FUN_144d555c0(void)

undefined8 FUN_144d555c0(undefined8 *param_1,longlong *param_2)

{
  if (param_1[5] != 0) {
    FUN_14512dae0(param_1[5],param_1[3]);
    if (param_1[5] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    param_1[5] = 0;
  }
  if (param_1[0x7f] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x7f] = 0;
  }
  if (param_1[0x80] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x80] = 0;
  }
  if (param_1[0x81] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x81] = 0;
  }
  if ((*(char *)(param_1 + 0x82) != '\0') && (param_1[0x83] != 0)) {
    FUN_14512f9a0(param_1[0x83],param_2);
    if (param_1[0x83] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    param_1[0x83] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 144d556c0 FUN_144d556c0 body=134 status=ok
// SIG undefined FUN_144d556c0(void)

undefined8 FUN_144d556c0(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (DAT_14c7916b0 == 0) {
    return 1;
  }
  uVar4 = 0;
  if (DAT_14c7916c8 != 0) {
    do {
      if (*(longlong *)(DAT_14c7916c0 + uVar4 * 8) == param_1[0x84]) break;
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < DAT_14c7916c8);
  }
  piVar1 = (int *)(DAT_14c7916a8 + uVar4 * 4);
  iVar3 = (**(code **)(*param_1 + 0x40))();
  if (iVar3 - *piVar1 == 1) {
    lVar5 = uVar4 * 0x68 + DAT_14c7916d8;
    *(undefined4 *)(lVar5 + 0x3c) = *(undefined4 *)(lVar5 + 0x38);
  }
  return 1;
}



// FUNCTION 144d55770 FUN_144d55770 body=219 status=ok
// SIG undefined FUN_144d55770(void)

void FUN_144d55770(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  if ((char)param_1[0x82] != '\0') {
    FUN_144d56280();
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c791678);
    uVar4 = 0;
    if (DAT_14c7916c8 != 0) {
      do {
        if (*(longlong *)(DAT_14c7916c0 + uVar4 * 8) == param_1[0x84]) break;
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 < DAT_14c7916c8);
    }
    FUN_144d57ed0(uVar4 * 0x68 + DAT_14c7916d8,param_2,param_3,param_4,
                  *(undefined1 *)((longlong)param_1 + 0x3ec),
                  *(undefined1 *)((longlong)param_1 + 0x3ed));
    puVar1 = (undefined4 *)(DAT_14c7916a8 + uVar4 * 4);
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    *puVar1 = uVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c791678);
  }
  return;
}



// FUNCTION 144d55850 FUN_144d55850 body=31 status=ok
// SIG undefined FUN_144d55850(void)

void FUN_144d55850(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
                    /* WARNING: Could not recover jumptable at 0x000144d55868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xd0))(plVar1);
  return;
}



// FUNCTION 144d55870 FUN_144d55870 body=2211 status=ok
// SIG undefined FUN_144d55870(void)

int FUN_144d55870(longlong *param_1,uint *param_2)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined4 local_458;
  undefined4 local_454;
  char local_450;
  char local_44f;
  uint local_44c;
  uint local_448;
  undefined4 local_444;
  longlong local_440;
  longlong local_438;
  longlong local_430;
  undefined1 local_428 [1024];
  
  uVar3 = *(uint *)(param_1 + 0x7c) & 0xf00;
  if (uVar3 == 0) {
    (**(code **)(*(longlong *)param_1[4] + 0x40))
              ((longlong *)param_1[4],
               "Mastering Suite does not support anonymous channel configurations.",2);
    return 0x4e;
  }
  if (uVar3 == 0x200) {
    (**(code **)(*(longlong *)param_1[4] + 0x40))
              ((longlong *)param_1[4],
               "Mastering Suite does not support ambisonic channel configurations.",2);
    return 0x4e;
  }
  uVar3 = *(uint *)(param_1 + 0x7c) & 0xff;
  if (0xc < uVar3) {
    snprintf(local_428,0x400,"Mastering Suite only supports up to %d channels.",0xc);
    (**(code **)(*(longlong *)param_1[4] + 0x40))((longlong *)param_1[4],local_428,2);
    return 0x4e;
  }
  uVar3 = uVar3 + 3 & 0xfffffffc;
  *(uint *)(param_1 + 0x7d) = uVar3;
  iVar4 = uVar3 << 10;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 4;
  lVar6 = (**(code **)(*(longlong *)param_1[3] + 8))
                    ((longlong *)param_1[3],iVar4,
                     "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFX.cpp"
                     ,0x313);
  param_1[0x7f] = lVar6;
  lVar6 = (**(code **)(*(longlong *)param_1[3] + 8))
                    ((longlong *)param_1[3],iVar4,
                     "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFX.cpp"
                     ,0x314);
  param_1[0x80] = lVar6;
  if (param_1[0x7f] == 0) {
    return 0x34;
  }
  if (lVar6 == 0) {
    return 0x34;
  }
  if ((*(char *)((longlong)param_1 + 0x3ed) != '\0') ||
     (*(char *)((longlong)param_1 + 0x3ec) != '\0')) {
    lVar6 = (**(code **)(*(longlong *)param_1[3] + 8))
                      ((longlong *)param_1[3],iVar4,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFX.cpp"
                       ,0x31a);
    param_1[0x81] = lVar6;
    if (lVar6 == 0) {
      return 0x34;
    }
  }
  if (DAT_14c7916e0 == 0) {
    plVar7 = (longlong *)param_1[3];
    if (DAT_14c7916d8 != 0) {
      DAT_14c7916e0 = 0;
      (**(code **)(*DAT_14c7916d0 + 0x10))();
      DAT_14c7916d8 = 0;
      DAT_14c7916e4 = 0;
    }
    DAT_14c7916d0 = plVar7;
    if (DAT_14c7916a8 != 0) {
      DAT_14c7916b0 = 0;
      (**(code **)(*DAT_14c7916a0 + 0x10))();
      DAT_14c7916a8 = 0;
      DAT_14c7916b4 = 0;
    }
    DAT_14c7916a0 = plVar7;
    if (DAT_14c7916c0 == (longlong *)0x0) {
      plVar13 = (longlong *)(ulonglong)DAT_14c7916cc;
      DAT_14c7916b8 = plVar7;
    }
    else {
      DAT_14c7916c8 = 0;
      (**(code **)(*DAT_14c7916b8 + 0x10))(DAT_14c7916b8,DAT_14c7916c0);
      DAT_14c7916cc = 0;
      DAT_14c7916c0 = (longlong *)0x0;
      plVar13 = (longlong *)0x0;
      DAT_14c7916b8 = plVar7;
    }
  }
  else {
    plVar13 = (longlong *)(ulonglong)DAT_14c7916cc;
  }
  uVar10 = (ulonglong)DAT_14c7916c8;
  lVar6 = param_1[0x84];
  plVar16 = (longlong *)(ulonglong)DAT_14c7916c8;
  for (plVar7 = DAT_14c7916c0; (plVar7 != DAT_14c7916c0 + uVar10 && (*plVar7 != lVar6));
      plVar7 = plVar7 + 1) {
  }
  plVar9 = (longlong *)0x0;
  if (plVar7 != DAT_14c7916c0 + uVar10) {
    plVar9 = plVar7;
  }
  iVar4 = (int)plVar13;
  if (plVar9 == (longlong *)0x0) {
    if (plVar13 <= plVar16) {
      iVar5 = (int)((ulonglong)plVar13 >> 1) + iVar4;
      if (iVar4 == 0) {
        iVar5 = 1;
      }
      plVar13 = (longlong *)(ulonglong)(uint)(iVar4 + iVar5);
      if (DAT_14c7916c0 == (longlong *)0x0) {
        plVar7 = (longlong *)
                 (**(code **)(*DAT_14c7916b8 + 8))
                           (DAT_14c7916b8,(longlong)plVar13 << 3,
                            "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                            ,0xcc);
        if (plVar7 == (longlong *)0x0) {
          return 2;
        }
        if ((DAT_14c7916c0 != (longlong *)0x0) && (DAT_14c7916c0 != plVar7)) {
          plVar9 = (longlong *)0x0;
          if (plVar16 != (longlong *)0x0) {
            do {
              plVar7[(longlong)plVar9] = DAT_14c7916c0[(longlong)plVar9];
              plVar9 = (longlong *)((longlong)plVar9 + 1);
            } while (plVar9 < plVar16);
          }
          (**(code **)(*DAT_14c7916b8 + 0x10))();
        }
      }
      else {
        plVar7 = (longlong *)
                 (**(code **)(*DAT_14c7916b8 + 0x20))
                           (DAT_14c7916b8,DAT_14c7916c0,(longlong)plVar13 << 3,
                            "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                            ,0xcd);
        if (plVar7 == (longlong *)0x0) {
          return 2;
        }
      }
      uVar10 = (ulonglong)DAT_14c7916c8;
      DAT_14c7916c0 = plVar7;
      DAT_14c7916cc = iVar4 + iVar5;
    }
    if (plVar13 <= plVar16) {
      return 2;
    }
    DAT_14c7916c8 = (int)uVar10 + 1;
    if (DAT_14c7916c0 + uVar10 == (longlong *)0x0) {
      return 2;
    }
    DAT_14c7916c0[uVar10] = lVar6;
    uVar10 = (ulonglong)DAT_14c7916b0;
    uVar11 = (ulonglong)DAT_14c7916b4;
    uVar15 = (ulonglong)DAT_14c7916b0;
    if (uVar11 <= uVar10) {
      iVar4 = (DAT_14c7916b4 >> 1) + DAT_14c7916b4;
      if (DAT_14c7916b4 == 0) {
        iVar4 = 1;
      }
      uVar3 = DAT_14c7916b4 + iVar4;
      uVar11 = (ulonglong)uVar3;
      if (DAT_14c7916a8 == 0) {
        lVar6 = (**(code **)(*DAT_14c7916a0 + 8))
                          (DAT_14c7916a0,uVar11 << 2,
                           "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                           ,0xcc);
        if (lVar6 == 0) goto LAB_144d55c7e;
        if ((DAT_14c7916a8 != 0) && (DAT_14c7916a8 != lVar6)) {
          uVar10 = 0;
          if (uVar15 != 0) {
            do {
              *(undefined4 *)(lVar6 + uVar10 * 4) = *(undefined4 *)(DAT_14c7916a8 + uVar10 * 4);
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar15);
          }
          (**(code **)(*DAT_14c7916a0 + 0x10))();
        }
      }
      else {
        lVar6 = (**(code **)(*DAT_14c7916a0 + 0x20))
                          (DAT_14c7916a0,DAT_14c7916a8,uVar11 << 2,
                           "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                           ,0xcd);
        if (lVar6 == 0) goto LAB_144d55c7e;
      }
      uVar10 = (ulonglong)DAT_14c7916b0;
      DAT_14c7916a8 = lVar6;
      DAT_14c7916b4 = uVar3;
    }
    if ((uVar11 <= uVar15) || (DAT_14c7916b0 = (int)uVar10 + 1, DAT_14c7916a8 + uVar10 * 4 == 0)) {
LAB_144d55c7e:
      DAT_14c7916c8 = DAT_14c7916c8 - 1;
      return 2;
    }
    uVar15 = (ulonglong)DAT_14c7916e0;
    uVar11 = (ulonglong)DAT_14c7916e4;
    uVar10 = uVar15;
    if (uVar11 <= uVar15) {
      cVar2 = FUN_144d5ad10(&DAT_14c7916d0);
      if (cVar2 == '\0') goto LAB_144d55db9;
      uVar11 = (ulonglong)DAT_14c7916e4;
      uVar10 = (ulonglong)DAT_14c7916e0;
    }
    if (uVar11 <= uVar15) {
LAB_144d55db9:
      DAT_14c7916c8 = DAT_14c7916c8 - 1;
      DAT_14c7916b0 = DAT_14c7916b0 - 1;
      return 2;
    }
    DAT_14c7916e0 = (int)uVar10 + 1;
    puVar12 = (undefined8 *)(uVar10 * 0x68 + DAT_14c7916d8);
    if (puVar12 == (undefined8 *)0x0) goto LAB_144d55db9;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0x200;
    *(undefined4 *)(puVar12 + 8) = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    *(undefined4 *)(puVar12 + 0xc) = 0;
  }
  lVar6 = DAT_14c7916d8;
  uVar10 = 0;
  if (DAT_14c7916c8 != 0) {
    do {
      if (DAT_14c7916c0[uVar10] == param_1[0x84]) break;
      uVar3 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar3;
    } while (uVar3 < DAT_14c7916c8);
  }
  if (*(char *)((longlong)param_1 + 0x3ed) == '\0') {
LAB_144d55ebc:
    if (*(char *)((longlong)param_1 + 0x3ec) == '\0') goto LAB_144d56011;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x7e);
    uVar11 = (ulonglong)uVar3;
    plVar13 = (longlong *)param_1[3];
    lVar14 = uVar10 * 0x68;
    if (*(longlong *)(DAT_14c7916d8 + 0x58 + lVar14) == 0) {
      *(uint *)(DAT_14c7916d8 + 0x60 + lVar14) = uVar3;
      *(longlong **)(lVar6 + 0x48 + lVar14) = plVar13;
      lVar8 = (**(code **)(*plVar13 + 8))
                        (plVar13,uVar11 * 8,
                         "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFX.cpp"
                         ,299);
      *(longlong *)(lVar6 + 0x50 + lVar14) = lVar8;
      if (lVar8 == 0) {
LAB_144d55e9e:
        iVar4 = 2;
      }
      else {
        lVar8 = (**(code **)(*plVar13 + 8))
                          (plVar13,(ulonglong)uVar3 * 4,
                           "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFX.cpp"
                           ,0x131);
        *(longlong *)(lVar6 + 0x58 + lVar14) = lVar8;
        iVar4 = 1;
        if (lVar8 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13,*(undefined8 *)(lVar6 + 0x50 + lVar14));
          *(undefined8 *)(lVar6 + 0x50 + lVar14) = 0;
          goto LAB_144d55e9e;
        }
      }
      if (iVar4 != 1) {
        return iVar4;
      }
    }
    else if (*(uint *)(DAT_14c7916d8 + 0x60 + lVar14) != uVar3) {
      uVar1 = *(undefined8 *)(DAT_14c7916d8 + 0x50 + lVar14);
      *(uint *)(DAT_14c7916d8 + 0x60 + lVar14) = uVar3;
      *(longlong **)(lVar6 + 0x48 + lVar14) = plVar13;
      lVar8 = (**(code **)(*plVar13 + 0x20))
                        (plVar13,uVar1,uVar11 * 8,
                         "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFX.cpp"
                         ,0x143);
      *(longlong *)(lVar6 + 0x50 + lVar14) = lVar8;
      if (lVar8 == 0) {
        return 2;
      }
      lVar8 = (**(code **)(*plVar13 + 0x20))
                        (plVar13,*(undefined8 *)(lVar6 + 0x58 + lVar14),uVar11 * 4,
                         "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFX.cpp"
                         ,0x14d);
      *(longlong *)(lVar6 + 0x58 + lVar14) = lVar8;
      if (lVar8 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13,*(undefined8 *)(lVar6 + 0x50 + lVar14));
        *(undefined8 *)(lVar6 + 0x50 + lVar14) = 0;
        return 2;
      }
    }
    if (*(char *)((longlong)param_1 + 0x3ed) == '\0') goto LAB_144d55ebc;
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  if (param_1[0x83] == 0) {
    return 2;
  }
  local_44f = *(char *)((longlong)param_1 + 0x3ec);
  local_454 = (undefined4)param_1[1];
  local_450 = *(char *)((longlong)param_1 + 0x3ed);
  local_44c = (uint)*(byte *)(param_1 + 0x7c);
  local_458 = 0xba0003;
  local_448 = (local_44c - *(byte *)(param_1 + 0x7c)) - (uint)(local_44f != '\0') & 2;
  if (local_450 == '\0') {
    local_444 = 0;
  }
  else {
    local_444 = (undefined4)param_1[0x7e];
  }
  local_440 = param_1[0x7f];
  local_438 = param_1[0x80];
  local_430 = param_1[0x81];
  iVar4 = FUN_14512f550(param_1[0x83],param_1[3],&local_458);
  if (iVar4 != 1) {
    return iVar4;
  }
LAB_144d56011:
  uVar3 = *param_2;
  lVar6 = uVar10 * 0x68 + DAT_14c7916d8;
  *(undefined4 *)(lVar6 + 0x3c) = 0;
  uVar3 = (int)(longlong)((float)uVar3 * 0.05) - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  *(uint *)(lVar6 + 0x38) = (uVar3 >> 0x10 | uVar3) + 1;
  *(undefined4 *)(DAT_14c7916a8 + uVar10 * 4) = 0;
  puVar12 = (undefined8 *)
            (**(code **)(*(longlong *)param_1[3] + 8))
                      ((longlong *)param_1[3],0x2310,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFX.cpp"
                       ,0x342);
  if (puVar12 == (undefined8 *)0x0) {
    param_1[5] = 0;
    return 0x34;
  }
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  FUN_144d551b0(puVar12 + 5);
  *(undefined1 *)(puVar12 + 0x461) = 0;
  param_1[5] = (longlong)puVar12;
  cVar2 = FUN_144d56120(param_1,1);
  if (cVar2 == '\0') {
    return 0x1f;
  }
  return 1;
}



// FUNCTION 144d56120 FUN_144d56120 body=341 status=ok
// SIG undefined FUN_144d56120(void)

undefined8 FUN_144d56120(longlong param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  
  bVar1 = -(param_2 != '\0') & 3;
  bVar3 = bVar1 | 2;
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x178) == '\0') {
    bVar3 = bVar1;
  }
  if (bVar3 == 0) {
    return 1;
  }
  *(undefined1 *)(param_1 + 0x411) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x178) = 0;
  if (*(char *)(param_1 + 0x3ed) != '\0') {
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x8c) != 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x8c) = 1;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x16c) != 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x16c) = 1;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x158) == 2) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x158) = 0;
    }
  }
  iVar2 = FUN_14512d740(*(longlong *)(param_1 + 0x10) + 8,param_1 + 0x270,0,0);
  if (iVar2 == 0) {
    iVar2 = FUN_14512d160(0,0,param_1 + 0x270,*(undefined8 *)(param_1 + 0x28),0,0,
                          *(uint *)(param_1 + 0x3e0) & 0xff,*(undefined4 *)(param_1 + 1000),
                          *(uint *)(param_1 + 0x3e0) >> 0xc,*(longlong *)(param_1 + 0x418) != 0,
                          bVar3,*(undefined8 *)(param_1 + 0x18));
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x411) = 1;
      FUN_144d56860(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144d56280 FUN_144d56280 body=1301 status=ok
// SIG undefined FUN_144d56280(void)

void FUN_144d56280(longlong *param_1,longlong param_2,longlong param_3,uint *param_4)

{
  int *piVar1;
  ushort uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ulonglong uVar16;
  ulonglong uVar7;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x10) & 3) == 0)) {
    uVar6 = *(uint *)(param_1 + 0x7c);
    uVar12 = *(uint *)(param_2 + 8);
    if ((((char)uVar6 == (char)uVar12) &&
        ((((uVar6 ^ uVar12) & 0xf00) == 0 && (((uVar6 ^ uVar12) & 0xfffff000) == 0)))) &&
       ((*(char *)((longlong)param_1 + 0x3ec) == '\0' || (param_3 != 0)))) {
      uVar14 = 0;
      uVar6 = 0;
      if (DAT_14c7916c8 != 0) {
        uVar7 = uVar14;
        do {
          uVar6 = (uint)uVar7;
          if (*(longlong *)(DAT_14c7916c0 + uVar7 * 8) == param_1[0x84]) break;
          uVar6 = uVar6 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < DAT_14c7916c8);
      }
      piVar1 = (int *)(DAT_14c7916a8 + (ulonglong)uVar6 * 4);
      iVar5 = (**(code **)(*param_1 + 0x40))(param_1);
      if (iVar5 - *piVar1 != 1) {
        puVar11 = (undefined8 *)((ulonglong)uVar6 * 0x68 + DAT_14c7916d8);
        *(undefined4 *)((longlong)puVar11 + 0x3c) = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        if ((void *)puVar11[10] != (void *)0x0) {
          memset((void *)puVar11[10],0,(ulonglong)(uint)(*(int *)(puVar11 + 0xc) << 3));
        }
        if ((void *)puVar11[0xb] != (void *)0x0) {
          memset((void *)puVar11[0xb],0,(ulonglong)(uint)(*(int *)(puVar11 + 0xc) << 2));
        }
        lVar9 = param_1[5];
        if (*(void **)(lVar9 + 0x598) != (void *)0x0) {
          memset(*(void **)(lVar9 + 0x598),0,(ulonglong)(uint)(*(int *)(lVar9 + 0x21c) << 9));
        }
        lVar10 = 4;
        puVar11 = (undefined8 *)(lVar9 + 0xc0c);
        do {
          lVar8 = 4;
          do {
            puVar11[-6] = 0;
            puVar11[-5] = 0;
            puVar11[-4] = 0;
            puVar11[-3] = 0;
            puVar11[-2] = 0;
            puVar11[-1] = 0;
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            puVar11[8] = 0;
            puVar11[9] = 0;
            puVar11[10] = 0;
            puVar11[0xb] = 0;
            puVar11[0xc] = 0;
            puVar11[0xd] = 0;
            puVar11[0xe] = 0;
            puVar11[0xf] = 0;
            puVar11[0x10] = 0;
            puVar11[0x11] = 0;
            puVar11 = puVar11 + 0x1b;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        lVar10 = 6;
        puVar11 = (undefined8 *)(lVar9 + 0x694);
        do {
          puVar11[-6] = 0;
          puVar11[-5] = 0;
          puVar11[-4] = 0;
          puVar11[-3] = 0;
          puVar11[-2] = 0;
          puVar11[-1] = 0;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          puVar11[6] = 0;
          puVar11[7] = 0;
          puVar11[8] = 0;
          puVar11[9] = 0;
          puVar11[10] = 0;
          puVar11[0xb] = 0;
          puVar11[0xc] = 0;
          puVar11[0xd] = 0;
          puVar11[0xe] = 0;
          puVar11[0xf] = 0;
          puVar11[0x10] = 0;
          puVar11[0x11] = 0;
          puVar11 = puVar11 + 0x1b;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        if (param_1[0x83] != 0) {
          FUN_145130260();
        }
      }
      cVar4 = FUN_144d56120(param_1,0);
      if (cVar4 == '\0') {
        *(undefined4 *)(param_2 + 0xc) = 2;
        if (param_3 != 0) {
          *(undefined4 *)(param_3 + 0xc) = 2;
        }
        lVar9 = *(longlong *)(param_4 + 2);
        if ((lVar9 != 0) && (*param_4 != 0)) {
          do {
            lVar10 = *(longlong *)(lVar9 + uVar14 * 8);
            if (lVar10 != 0) {
              *(undefined4 *)(lVar10 + 0xc) = 2;
              lVar9 = *(longlong *)(param_4 + 2);
            }
            uVar6 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar6;
          } while (uVar6 < *param_4);
        }
      }
      else if ((*(char *)((longlong)param_1 + 0x411) != '\0') ||
              (*(char *)(param_1[2] + 0x178) != '\0')) {
        uVar7 = uVar14;
        if (*param_4 != 0) {
          do {
            plVar3 = *(longlong **)(*(longlong *)(param_4 + 2) + uVar7 * 8);
            if (*plVar3 != 0) {
              uVar2 = *(ushort *)(plVar3 + 2);
              uVar15 = *(ushort *)((longlong)plVar3 + 0x12);
              if (uVar2 <= *(ushort *)((longlong)plVar3 + 0x12)) {
                uVar15 = uVar2;
              }
              iVar5 = (uint)uVar2 - (uint)uVar15;
              if (iVar5 != 0) {
                if (*(byte *)(plVar3 + 1) != 0) {
                  uVar16 = (ulonglong)*(byte *)(plVar3 + 1);
                  uVar13 = uVar14;
                  do {
                    memset((void *)(*plVar3 +
                                   (*(ushort *)(plVar3 + 2) * uVar13 + (ulonglong)(uint)uVar15) * 4)
                           ,0,(ulonglong)(uint)(iVar5 * 4));
                    uVar13 = uVar13 + 1;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                *(short *)((longlong)plVar3 + 0x12) = (short)plVar3[2];
              }
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < *param_4);
        }
        if (param_1[0x83] != 0) {
          FUN_14512fb90(param_1[0x83],param_4);
        }
        uVar6 = *(uint *)(param_1 + 0x7c);
        uVar15 = 0;
        uVar2 = *(ushort *)(param_2 + 0x10);
        uVar7 = uVar14;
        if (uVar2 != 0) {
          do {
            uVar12 = (uint)uVar2 - (int)uVar7;
            if (0x100 < uVar12) {
              uVar12 = 0x100;
            }
            FUN_144d56f40(param_1,param_2,param_3,param_4,uVar7,uVar12);
            iVar5 = FUN_14512d160(param_1[0x7f],param_1[0x80],param_1 + 0x4e,param_1[5],param_1 + 6,
                                  uVar12,uVar6 & 0xff,(int)param_1[0x7d],uVar6 >> 0xc,
                                  param_1[0x83] != 0,0,param_1[3]);
            if (iVar5 != 0) {
              *(undefined4 *)(param_2 + 0xc) = 2;
              if (param_3 != 0) {
                *(undefined4 *)(param_3 + 0xc) = 2;
              }
              lVar9 = *(longlong *)(param_4 + 2);
              if ((lVar9 != 0) && (*param_4 != 0)) {
                do {
                  lVar10 = *(longlong *)(lVar9 + uVar14 * 8);
                  if (lVar10 != 0) {
                    *(undefined4 *)(lVar10 + 0xc) = 2;
                    lVar9 = *(longlong *)(param_4 + 2);
                  }
                  uVar6 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar6;
                } while (uVar6 < *param_4);
              }
              *(undefined1 *)((longlong)param_1 + 0x411) = 0;
              return;
            }
            FUN_144d57520(param_1,param_2,param_3,param_4,uVar7,uVar12);
            uVar15 = uVar15 + 0x100;
            uVar7 = (ulonglong)uVar15;
          } while (uVar15 < uVar2);
        }
        if (param_1[0x83] != 0) {
          FUN_14512fcc0(param_1[0x83],param_4);
        }
        FUN_144d576f0(param_1,param_2,param_3,param_4);
      }
    }
  }
  return;
}



// FUNCTION 144d567a0 FUN_144d567a0 body=190 status=ok
// SIG undefined FUN_144d567a0(void)

void FUN_144d567a0(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                     (*(longlong **)(param_1 + 0x18),0x518,
                      "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFX.cpp"
                      ,0x47c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
    FUN_144d579b0(puVar1 + 0xc);
    FUN_144d57a70(puVar1 + 0xe4);
    *(undefined8 *)(puVar1 + 0x13c) = 0;
    *(undefined8 *)(puVar1 + 0x13e) = 0;
    *(undefined8 *)(puVar1 + 0x140) = 0;
    *(undefined8 *)(puVar1 + 0x142) = 0;
    *(undefined8 *)(puVar1 + 0x144) = 0;
    *(undefined4 **)(param_1 + 0x418) = puVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x418) = 0;
  return;
}



// FUNCTION 144d56860 FUN_144d56860 body=1750 status=ok
// SIG undefined FUN_144d56860(void)

void FUN_144d56860(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  float *pfVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  ushort *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  byte local_298 [4];
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  uint local_284;
  uint local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  uint local_270;
  uint local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  uint local_25c;
  uint local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  uint local_248;
  uint local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  uint local_234;
  uint local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  uint local_220;
  uint local_21c;
  byte local_218;
  undefined4 local_214;
  undefined1 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined8 local_200;
  uint local_1d4 [11];
  undefined1 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined1 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined8 local_130;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  float local_b4 [17];
  byte local_70;
  float local_3c;
  byte local_38;
  bool local_37;
  undefined8 local_30;
  
  lVar6 = *(longlong *)(param_1 + 0x418);
  if (lVar6 == 0) {
    return;
  }
  uVar16 = 0;
  uVar19 = *(uint *)(param_1 + 0x274);
  lVar7 = *(longlong *)(param_1 + 0x28);
  local_298[0] = ~*(byte *)(param_1 + 0x274) & 1;
  lVar13 = 4;
  local_70 = ~(byte)(uVar19 >> 2) & 1;
  local_210 = 0;
  local_218 = ~(byte)(uVar19 >> 1) & 1;
  local_20c = 4;
  local_208 = 0x3f800000;
  local_38 = ~(byte)(uVar19 >> 3) & 1;
  local_200 = 0;
  local_1a8 = 0;
  local_1a4 = 4;
  local_1a0 = 0x3f800000;
  local_198 = 0;
  local_140 = 0;
  local_13c = 4;
  local_138 = 0x3f800000;
  local_130 = 0;
  local_d8 = 0;
  local_d4 = 4;
  local_d0 = 0x3f800000;
  local_c8 = 0;
  uVar19 = 0;
  if (local_298[0] == 0) {
    local_294 = 0;
  }
  else {
    local_294 = *(undefined4 *)(lVar7 + 0x648);
  }
  local_290 = *(undefined4 *)(lVar7 + 0x658);
  local_28c = *(undefined4 *)(lVar7 + 0x65c);
  local_288 = *(undefined4 *)(lVar7 + 0x660);
  local_280 = *(uint *)(lVar7 + 0x654) ^ 0x80000000;
  local_284 = *(uint *)(lVar7 + 0x650) ^ 0x80000000;
  local_26c = *(uint *)(lVar7 + 0x72c) ^ 0x80000000;
  local_27c = *(undefined4 *)(lVar7 + 0x730);
  local_270 = *(uint *)(lVar7 + 0x728) ^ 0x80000000;
  local_278 = *(undefined4 *)(lVar7 + 0x734);
  local_274 = *(undefined4 *)(lVar7 + 0x738);
  local_258 = *(uint *)(lVar7 + 0x804) ^ 0x80000000;
  local_268 = *(undefined4 *)(lVar7 + 0x808);
  local_25c = *(uint *)(lVar7 + 0x800) ^ 0x80000000;
  local_264 = *(undefined4 *)(lVar7 + 0x80c);
  local_260 = *(undefined4 *)(lVar7 + 0x810);
  local_244 = *(uint *)(lVar7 + 0x8dc) ^ 0x80000000;
  local_254 = *(undefined4 *)(lVar7 + 0x8e0);
  local_248 = *(uint *)(lVar7 + 0x8d8) ^ 0x80000000;
  local_250 = *(undefined4 *)(lVar7 + 0x8e4);
  local_24c = *(undefined4 *)(lVar7 + 0x8e8);
  local_230 = *(uint *)(lVar7 + 0x9b4) ^ 0x80000000;
  local_240 = *(undefined4 *)(lVar7 + 0x9b8);
  local_234 = *(uint *)(lVar7 + 0x9b0) ^ 0x80000000;
  local_23c = *(undefined4 *)(lVar7 + 0x9bc);
  local_238 = *(undefined4 *)(lVar7 + 0x9c0);
  local_21c = *(uint *)(lVar7 + 0xa8c) ^ 0x80000000;
  local_22c = *(undefined4 *)(lVar7 + 0xa90);
  local_220 = *(uint *)(lVar7 + 0xa88) ^ 0x80000000;
  local_228 = *(undefined4 *)(lVar7 + 0xa94);
  local_224 = *(undefined4 *)(lVar7 + 0xa98);
  if (local_218 == 0) {
    local_214 = 0;
  }
  else {
    local_214 = *(undefined4 *)(lVar7 + 0xba8);
  }
  uVar17 = 1;
  puVar14 = (ushort *)(lVar7 + 0xbbc);
  puVar9 = local_1d4;
  puVar11 = (uint *)(lVar7 + 0xcac);
  puVar15 = (undefined8 *)(lVar7 + 7000);
  do {
    uVar5 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar9[-0xe] = (uint)uVar5;
    uVar8 = *(uint *)(lVar7 + 3000) & uVar17;
    uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
    *(bool *)(puVar9 + -0xf) = uVar8 != 0;
    puVar9[-0xd] = *(uint *)(lVar7 + 0x1a98);
    uVar8 = puVar11[-0x38];
    uVar1 = puVar11[-0x37];
    uVar2 = puVar11[-0x36];
    uVar3 = puVar11[-0x35];
    puVar9[-6] = puVar11[-0x39] ^ 0x80000000;
    puVar9[-5] = uVar8 ^ 0x80000000;
    puVar9[-9] = uVar1;
    puVar9[-8] = uVar2;
    puVar9[-7] = uVar3;
    puVar9[-0xd] = *(uint *)(lVar7 + 0x1d08);
    uVar8 = puVar11[-2];
    uVar1 = puVar11[-1];
    uVar2 = *puVar11;
    uVar3 = puVar11[1];
    puVar9[-1] = puVar11[-3] ^ 0x80000000;
    *puVar9 = uVar8 ^ 0x80000000;
    puVar9[-4] = uVar1;
    puVar9[-3] = uVar2;
    puVar9[-2] = uVar3;
    puVar9[-0xd] = *(uint *)(lVar7 + 0x1f78);
    uVar8 = puVar11[0x34];
    uVar1 = puVar11[0x35];
    uVar2 = puVar11[0x36];
    uVar3 = puVar11[0x37];
    puVar9[4] = puVar11[0x33] ^ 0x80000000;
    puVar9[5] = uVar8 ^ 0x80000000;
    puVar9[1] = uVar1;
    puVar9[2] = uVar2;
    puVar9[3] = uVar3;
    puVar9[-0xd] = *(uint *)(lVar7 + 0x21e8);
    uVar8 = puVar11[0x6a];
    uVar1 = puVar11[0x6b];
    uVar2 = puVar11[0x6c];
    uVar3 = puVar11[0x6d];
    puVar9[9] = puVar11[0x69] ^ 0x80000000;
    puVar9[10] = uVar8 ^ 0x80000000;
    puVar9[6] = uVar1;
    puVar9[7] = uVar2;
    puVar9[8] = uVar3;
    *(undefined8 *)(puVar9 + -0xb) = *puVar15;
    lVar13 = lVar13 + -1;
    puVar9 = puVar9 + 0x1a;
    puVar11 = puVar11 + 0xd8;
    puVar15 = puVar15 + 0x4e;
  } while (lVar13 != 0);
  bVar4 = *(byte *)(param_1 + 0x3e0);
  lVar13 = lVar7 + 0x1a0;
  local_3c = 0.0;
  if (bVar4 < 4) {
    if (bVar4 == 0) goto LAB_144d56ea8;
    lVar12 = (longlong)local_b4 - lVar13;
    uVar18 = uVar16;
  }
  else {
    lVar12 = (longlong)local_b4 - lVar13;
    pfVar10 = (float *)(lVar7 + 0x1e8);
    uVar17 = (bVar4 - 4 >> 2) + 1;
    uVar18 = (ulonglong)uVar17;
    uVar19 = uVar17 * 4;
    do {
      *(float *)(lVar12 + (longlong)pfVar10) = *pfVar10;
      if (pfVar10[-0xf] != 4.2039e-45) {
        uVar16 = (ulonglong)((int)uVar16 + 1);
        local_3c = local_3c + *pfVar10;
      }
      *(float *)((longlong)local_b4 + (4 - lVar13) + (longlong)pfVar10) = pfVar10[1];
      if (pfVar10[-0xe] != 4.2039e-45) {
        uVar16 = (ulonglong)((int)uVar16 + 1);
        local_3c = local_3c + pfVar10[1];
      }
      *(float *)((longlong)local_b4 + (8 - lVar13) + (longlong)pfVar10) = pfVar10[2];
      if (pfVar10[-0xd] != 4.2039e-45) {
        uVar16 = (ulonglong)((int)uVar16 + 1);
        local_3c = local_3c + pfVar10[2];
      }
      *(float *)((longlong)local_b4 + (0xc - lVar13) + (longlong)pfVar10) = pfVar10[3];
      if (pfVar10[-0xc] != 4.2039e-45) {
        uVar16 = (ulonglong)((int)uVar16 + 1);
        local_3c = local_3c + pfVar10[3];
      }
      pfVar10 = pfVar10 + 4;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    uVar18 = (ulonglong)uVar17 * 4;
    if (bVar4 <= uVar19) goto LAB_144d56ea8;
  }
  pfVar10 = (float *)(lVar7 + 0x1e8 + uVar18 * 4);
  uVar18 = (ulonglong)(bVar4 - uVar19);
  do {
    *(float *)(lVar12 + (longlong)pfVar10) = *pfVar10;
    if (pfVar10[-0xf] != 4.2039e-45) {
      uVar16 = (ulonglong)((int)uVar16 + 1);
      local_3c = local_3c + *pfVar10;
    }
    pfVar10 = pfVar10 + 1;
    uVar18 = uVar18 - 1;
  } while (uVar18 != 0);
LAB_144d56ea8:
  local_3c = local_3c / (float)uVar16;
  if (local_38 == 0) {
    local_37 = false;
  }
  else {
    local_37 = *(int *)(lVar7 + 0x260) == 2;
  }
  local_30 = *(undefined8 *)(lVar7 + 0x5a0);
  FUN_145130020(lVar6,local_298);
  return;
}



// FUNCTION 144d56f40 FUN_144d56f40 body=1498 status=ok
// SIG undefined FUN_144d56f40(void)

void FUN_144d56f40(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4,uint param_5,
                  uint param_6)

{
  undefined8 uVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ushort uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong local_res8;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 uStack_120;
  undefined1 local_118 [32];
  undefined4 local_f8;
  ushort local_f0;
  ushort local_d8;
  uint local_d4;
  byte *local_d0;
  longlong local_c8;
  uint local_c0;
  undefined4 local_bc;
  ushort local_b8;
  ushort local_b6;
  undefined8 *local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [5];
  undefined1 auStack_53 [27];
  
  puVar13 = local_118;
  local_b0 = (undefined8 *)(param_1 + 0x20);
  local_d0 = (byte *)(param_1 + 0x3e0);
  local_c0 = local_c0 & 0xffffff00;
  bVar2 = *local_d0;
  uVar17 = (ulonglong)bVar2;
  local_bc = 0x2b;
  uStack_120 = 0x144d56faf;
  local_d4 = (uint)bVar2;
  plVar8 = (longlong *)(**(code **)(*(longlong *)*local_b0 + 8))();
  uStack_120 = 0x144d56fbe;
  local_a8 = (longlong *)(**(code **)(*plVar8 + 200))(plVar8,0);
  if ((*(char *)(param_1 + 0x3ed) == '\0') && (*(char *)(param_1 + 0x3ec) == '\0')) {
    local_c8 = *param_2;
    local_b8 = *(ushort *)(param_2 + 2);
    local_c0 = (uint)param_2[1];
    local_b6 = local_b8;
  }
  else {
    local_c8 = *(longlong *)(param_1 + 0x408);
    local_c0 = (uint)param_2[1];
    uVar18 = (ushort)param_6;
    local_b8 = uVar18;
    local_b6 = uVar18;
    if (bVar2 != 0) {
      lVar11 = 0;
      local_d8 = uVar18;
      do {
        uStack_120 = 0x144d5707b;
        memcpy((void *)(local_c8 + (ulonglong)local_b8 * lVar11 * 4),
               (void *)(*param_2 +
                       ((ulonglong)*(ushort *)(param_2 + 2) * lVar11 + (ulonglong)param_5) * 4),
               (ulonglong)(param_6 * 4));
        lVar11 = lVar11 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      local_d0 = (byte *)(param_1 + 0x3e0);
      uVar17 = (ulonglong)local_d4;
      local_b0 = (undefined8 *)(param_1 + 0x20);
    }
    plVar8 = local_a8;
    local_d8 = uVar18;
    if ((*(char *)(param_1 + 0x3ec) != '\0') &&
       (local_d0 = (byte *)(param_1 + 0x3e0), local_b0 = (undefined8 *)(param_1 + 0x20),
       param_3 != (longlong *)0x0)) {
      lVar11 = 0;
      lVar20 = 2;
      do {
        local_f8 = 0x3f800000;
        uStack_120 = 0x144d5713d;
        local_f0 = uVar18;
        (**(code **)(*plVar8 + 0x18))
                  (plVar8,*param_3 +
                          ((ulonglong)*(ushort *)(param_3 + 2) * lVar11 + (ulonglong)param_5) * 4,
                   local_c8 + (ulonglong)local_b8 * lVar11 * 4,0x3f800000);
        lVar11 = lVar11 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uVar17 = (ulonglong)local_d4;
      local_d0 = (byte *)(param_1 + 0x3e0);
      local_b0 = (undefined8 *)(param_1 + 0x20);
    }
    plVar8 = local_a8;
    puVar4 = local_b0;
    pbVar12 = (byte *)(param_1 + 0x3e0);
    puVar13 = local_118;
    puVar6 = local_a0;
    if (*(char *)(param_1 + 0x3ed) != '\0') {
      uVar21 = 0;
      puVar13 = auStack_158;
      local_a0 = local_118;
      puVar6 = local_118;
      if (*param_4 != 0) {
        do {
          lVar11 = *(longlong *)(*(longlong *)(param_4 + 2) + uVar21 * 8);
          if (*(short *)(lVar11 + 0x12) != 0) {
            lVar20 = *(longlong *)(*(longlong *)(param_4 + 4) + uVar21 * 8);
            local_98 = *(undefined8 *)(lVar20 + 8);
            uStack_90 = *(undefined8 *)(lVar20 + 0x10);
            local_88 = *(undefined8 *)(lVar20 + 0x18);
            uStack_80 = *(undefined8 *)(lVar20 + 0x20);
            uStack_70 = *(undefined8 *)(lVar20 + 0x30);
            local_68 = *(undefined4 *)(lVar20 + 0x38);
            uStack_64 = *(undefined4 *)(lVar20 + 0x3c);
            uStack_60 = *(undefined4 *)(lVar20 + 0x40);
            uStack_5c = *(undefined4 *)(lVar20 + 0x44);
            uVar1 = *(undefined8 *)(lVar20 + 0x48);
            auStack_53._0_3_ = (undefined3)((ulonglong)uVar1 >> 0x28);
            local_58 = (undefined1  [5])CONCAT14(1,(int)uVar1);
            uVar5 = _local_58;
            auStack_53[2] = (undefined1)((ulonglong)uVar1 >> 0x38);
            _local_58 = (uint7)(uint6)uVar5;
            local_78 = *(ulonglong *)(lVar20 + 0x28) & 0xffffffff;
            local_138 = local_118;
            iVar10 = (**(code **)(*(longlong *)*puVar4 + 0x70))
                               ((longlong *)*puVar4,&local_98,*(undefined4 *)(lVar11 + 8),
                                *(undefined4 *)pbVar12);
            if (iVar10 == 1) {
              local_138 = (undefined1 *)((ulonglong)local_138 & 0xffffffffffffff00);
              plVar3 = *(longlong **)(*(longlong *)(param_4 + 2) + uVar21 * 8);
              lVar11 = *plVar3;
              (**(code **)(*plVar8 + 0x28))
                        (plVar8,plVar3,plVar3,
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_4 + 4) + uVar21 * 8) + 0x50));
              local_138 = (undefined1 *)CONCAT44(local_138._4_4_,0x3f800000);
              lVar20 = *(longlong *)(*(longlong *)(param_4 + 4) + uVar21 * 8);
              *(undefined4 *)(lVar20 + 0x50) = 0x3f800000;
              *(undefined4 *)(lVar20 + 0x54) = 0x3f800000;
              local_130 = local_118;
              local_128 = local_118;
              (**(code **)(*plVar8 + 0x10))
                        (plVar8,lVar11 + (ulonglong)param_5 * 4,&local_c8,0x3f800000);
              pbVar12 = local_d0;
            }
          }
          uVar16 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar16;
        } while (uVar16 < *param_4);
        uVar17 = (ulonglong)local_d4;
        puVar13 = auStack_158;
        puVar6 = local_a0;
      }
    }
    local_a0 = puVar6;
    param_5 = 0;
  }
  uVar16 = 0;
  if ((int)uVar17 != 0) {
    local_res8 = 0;
    do {
      uVar15 = 0;
      lVar11 = local_c8 + (ulonglong)local_b8 * local_res8 * 4;
      if (3 < param_6) {
        uVar19 = param_5 + 2;
        do {
          iVar10 = uVar15 * *(int *)(param_1 + 1000);
          uVar15 = uVar15 + 4;
          *(undefined4 *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(iVar10 + uVar16) * 4) =
               *(undefined4 *)(lVar11 + (ulonglong)(uVar19 - 2) * 4);
          *(undefined4 *)
           (*(longlong *)(param_1 + 0x3f8) +
           (ulonglong)((~param_5 + uVar19) * *(int *)(param_1 + 1000) + uVar16) * 4) =
               *(undefined4 *)(lVar11 + (ulonglong)(uVar19 - 1) * 4);
          *(undefined4 *)
           (*(longlong *)(param_1 + 0x3f8) +
           (ulonglong)((uVar19 - param_5) * *(int *)(param_1 + 1000) + uVar16) * 4) =
               *(undefined4 *)(lVar11 + (ulonglong)uVar19 * 4);
          iVar10 = uVar19 + (1 - param_5);
          uVar7 = uVar19 + 1;
          uVar19 = uVar19 + 4;
          *(undefined4 *)
           (*(longlong *)(param_1 + 0x3f8) +
           (ulonglong)(iVar10 * *(int *)(param_1 + 1000) + uVar16) * 4) =
               *(undefined4 *)(lVar11 + (ulonglong)uVar7 * 4);
        } while (uVar15 < param_6 - 3);
        uVar17 = (ulonglong)local_d4;
      }
      for (; uVar15 < param_6; uVar15 = uVar15 + 1) {
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x3f8) +
         (ulonglong)(uVar15 * *(int *)(param_1 + 1000) + uVar16) * 4) =
             *(undefined4 *)(lVar11 + (ulonglong)(uVar15 + param_5) * 4);
      }
      local_res8 = local_res8 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < (uint)uVar17);
  }
  uVar16 = *(uint *)(param_1 + 1000);
  if ((uint)uVar17 < uVar16) {
    do {
      iVar10 = (int)uVar17;
      uVar16 = 0;
      if (3 < param_6) {
        iVar14 = 2;
        do {
          iVar9 = uVar16 * *(int *)(param_1 + 1000);
          uVar16 = uVar16 + 4;
          *(undefined4 *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(uint)(iVar9 + iVar10) * 4) =
               0;
          *(undefined4 *)
           (*(longlong *)(param_1 + 0x3f8) +
           (ulonglong)(uint)((iVar14 + -1) * *(int *)(param_1 + 1000) + iVar10) * 4) = 0;
          *(undefined4 *)
           (*(longlong *)(param_1 + 0x3f8) +
           (ulonglong)(uint)(iVar14 * *(int *)(param_1 + 1000) + iVar10) * 4) = 0;
          iVar9 = iVar14 + 1;
          iVar14 = iVar14 + 4;
          *(undefined4 *)
           (*(longlong *)(param_1 + 0x3f8) +
           (ulonglong)(uint)(iVar9 * *(int *)(param_1 + 1000) + iVar10) * 4) = 0;
        } while (uVar16 < param_6 - 3);
      }
      for (; uVar16 < param_6; uVar16 = uVar16 + 1) {
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x3f8) +
         (ulonglong)(uVar16 * *(int *)(param_1 + 1000) + iVar10) * 4) = 0;
      }
      uVar16 = *(uint *)(param_1 + 1000);
      uVar17 = (ulonglong)(iVar10 + 1U);
    } while (iVar10 + 1U < uVar16);
  }
  if (param_6 < 0x100) {
    lVar11 = *(longlong *)(param_1 + 0x3f8);
    *(undefined8 *)(puVar13 + -8) = 0x144d574f9;
    memset((void *)(lVar11 + (ulonglong)(uVar16 * param_6) * 4),0,
           (ulonglong)((0x100 - param_6) * uVar16 * 4));
  }
  return;
}



// FUNCTION 144d57520 FUN_144d57520 body=456 status=ok
// SIG undefined FUN_144d57520(void)

void FUN_144d57520(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint param_6)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  
  bVar2 = *(byte *)(param_1 + 0x3e0);
  if ((*(char *)(param_1 + 0x3ed) == '\0') && (*(char *)(param_1 + 0x3ec) == '\0')) {
    uVar5 = 0;
    if (bVar2 != 0) {
      lVar8 = 0;
      do {
        piVar7 = (int *)(param_1 + 1000);
        uVar6 = 0;
        lVar1 = *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar8 * 4;
        if (3 < param_6) {
          uVar9 = param_5 + 2;
          uVar4 = uVar6;
          do {
            uVar6 = uVar4 + 4;
            *(undefined4 *)(lVar1 + (ulonglong)(uVar9 - 2) * 4) =
                 *(undefined4 *)
                  (*(longlong *)(param_1 + 0x400) + (ulonglong)(uVar4 * *piVar7 + uVar5) * 4);
            *(undefined4 *)(lVar1 + (ulonglong)(uVar9 - 1) * 4) =
                 *(undefined4 *)
                  (*(longlong *)(param_1 + 0x400) +
                  (ulonglong)((~param_5 + uVar9) * *piVar7 + uVar5) * 4);
            uVar4 = uVar9 + 1;
            *(undefined4 *)(lVar1 + (ulonglong)uVar9 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(param_1 + 0x400) +
                  (ulonglong)((uVar9 - param_5) * *piVar7 + uVar5) * 4);
            iVar3 = (1 - param_5) + uVar9;
            uVar9 = uVar9 + 4;
            *(undefined4 *)(lVar1 + (ulonglong)uVar4 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(param_1 + 0x400) + (ulonglong)(iVar3 * *piVar7 + uVar5) * 4);
            uVar4 = uVar6;
          } while (uVar6 < param_6 - 3);
        }
        for (; uVar6 < param_6; uVar6 = uVar6 + 1) {
          *(undefined4 *)(lVar1 + (ulonglong)(uVar6 + param_5) * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x400) +
                (ulonglong)(uVar6 * *(int *)(param_1 + 1000) + uVar5) * 4);
        }
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 1;
      } while (uVar5 < bVar2);
    }
  }
  else if (*(longlong *)(param_1 + 0x418) != 0) {
    FUN_14512fdb0();
    return;
  }
  return;
}



// FUNCTION 144d576f0 FUN_144d576f0 body=649 status=ok
// SIG undefined FUN_144d576f0(void)

void FUN_144d576f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  longlong *plVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0xc) == 0x11)) {
    FUN_144d57cc0(param_2,0x3f800000,0);
  }
  if ((param_3 != 0) && (*(int *)(param_3 + 0xc) == 0x11)) {
    FUN_144d57cc0(param_3,0x3f800000,0);
  }
  uVar9 = 0;
  if (*param_4 != 0) {
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_4 + 2) + uVar9 * 8);
      if ((*(int *)((longlong)plVar4 + 0xc) == 0x11) && (*plVar4 != 0)) {
        uVar3 = *(ushort *)((longlong)plVar4 + 0x12);
        if (*(byte *)(plVar4 + 1) != 0) {
          lVar10 = 0;
          uVar8 = (ulonglong)*(byte *)(plVar4 + 1);
          do {
            fVar13 = 1.0;
            pfVar7 = (float *)(*plVar4 + (ulonglong)*(ushort *)(plVar4 + 2) * lVar10 * 4);
            pfVar1 = pfVar7 + uVar3;
            if (3 < uVar3) {
              uVar6 = uVar3 & 0xfffffffc;
              pfVar2 = pfVar7 + uVar6;
              fVar12 = (float)uVar6;
              fVar11 = -1.0 / fVar12 + 1.0;
              fVar15 = -4.0 / fVar12;
              fVar14 = fVar11 + -1.0 / fVar12;
              fVar12 = fVar11 - 2.0 / fVar12;
              fVar5 = 1.0;
              for (; pfVar7 < pfVar2; pfVar7 = pfVar7 + 4) {
                *pfVar7 = *pfVar7 * fVar5;
                pfVar7[1] = pfVar7[1] * fVar11;
                pfVar7[2] = pfVar7[2] * fVar14;
                pfVar7[3] = pfVar7[3] * fVar12;
                fVar11 = fVar11 + fVar15;
                fVar14 = fVar14 + fVar15;
                fVar12 = fVar12 + fVar15;
                fVar5 = fVar5 + fVar15;
              }
            }
            if (pfVar7 < pfVar1) {
              fVar11 = -1.0 / (float)uVar3;
              if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar7) & 0xfffffffffffffffcU)) {
                do {
                  *pfVar7 = fVar13 * *pfVar7;
                  fVar14 = fVar13 + fVar11 + fVar11;
                  pfVar7[1] = (fVar13 + fVar11) * pfVar7[1];
                  fVar12 = fVar14 + fVar11;
                  pfVar7[2] = fVar14 * pfVar7[2];
                  fVar13 = fVar12 + fVar11;
                  pfVar7[3] = fVar12 * pfVar7[3];
                  pfVar7 = pfVar7 + 4;
                } while (pfVar7 < pfVar1 + -3);
                if (pfVar1 <= pfVar7) goto LAB_144d57928;
              }
              do {
                *pfVar7 = fVar13 * *pfVar7;
                pfVar7 = pfVar7 + 1;
                fVar13 = fVar13 + fVar11;
              } while (pfVar7 < pfVar1);
            }
LAB_144d57928:
            lVar10 = lVar10 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar6;
    } while (uVar6 < *param_4);
  }
  return;
}



// FUNCTION 144d57980 FUN_144d57980 body=43 status=ok
// SIG undefined FUN_144d57980(void)

undefined8 * FUN_144d57980(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x428);
  }
  return param_1;
}



// FUNCTION 144d579b0 FUN_144d579b0 body=186 status=ok
// SIG undefined FUN_144d579b0(void)

undefined1 * FUN_144d579b0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x88] = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 4;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 4;
  *(undefined4 *)(param_1 + 0xf8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x100) = 0;
  param_1[0x158] = 0;
  *(undefined4 *)(param_1 + 0x15c) = 4;
  *(undefined4 *)(param_1 + 0x160) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x168) = 0;
  param_1[0x1c0] = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 4;
  *(undefined4 *)(param_1 + 0x1c8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  param_1[0x228] = 0;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
  return param_1;
}



// FUNCTION 144d57a70 FUN_144d57a70 body=265 status=ok
// SIG undefined FUN_144d57a70(void)

undefined8 * FUN_144d57a70(undefined8 *param_1)

{
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
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



// FUNCTION 144d57b80 FUN_144d57b80 body=309 status=ok
// SIG undefined FUN_144d57b80(void)

void FUN_144d57b80(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 144d57cc0 FUN_144d57cc0 body=528 status=ok
// SIG undefined FUN_144d57cc0(void)

void FUN_144d57cc0(longlong *param_1,float param_2,float param_3,char param_4)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = *(uint *)(param_1 + 1) & 0xff;
  if ((param_4 == '\0') && ((*(uint *)(param_1 + 1) & 0x8000) != 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = (ulonglong)uVar4;
    if (param_3 == param_2) {
      do {
        FUN_144d57b80(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4,param_2,uVar3);
        lVar6 = lVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
    do {
      pfVar5 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4);
      pfVar1 = pfVar5 + uVar3;
      if (3 < uVar3) {
        uVar4 = uVar3 & 0xfffffffc;
        pfVar2 = pfVar5 + uVar4;
        fVar9 = (param_3 - param_2) / (float)uVar4;
        fVar12 = fVar9 * 4.0;
        fVar8 = fVar9 + param_2 + fVar9;
        fVar11 = fVar9 + param_2;
        fVar9 = fVar8 + fVar9;
        fVar10 = param_2;
        for (; pfVar5 < pfVar2; pfVar5 = pfVar5 + 4) {
          *pfVar5 = *pfVar5 * fVar10;
          pfVar5[1] = pfVar5[1] * fVar11;
          pfVar5[2] = pfVar5[2] * fVar8;
          pfVar5[3] = pfVar5[3] * fVar9;
          fVar11 = fVar11 + fVar12;
          fVar8 = fVar8 + fVar12;
          fVar9 = fVar9 + fVar12;
          fVar10 = fVar10 + fVar12;
        }
      }
      if (pfVar5 < pfVar1) {
        fVar8 = (param_3 - param_2) / (float)uVar3;
        fVar11 = param_2;
        if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar5) & 0xfffffffffffffffcU)) {
          do {
            *pfVar5 = fVar11 * *pfVar5;
            fVar9 = fVar11 + fVar8 + fVar8;
            pfVar5[1] = (fVar11 + fVar8) * pfVar5[1];
            fVar10 = fVar9 + fVar8;
            pfVar5[2] = fVar9 * pfVar5[2];
            fVar11 = fVar10 + fVar8;
            pfVar5[3] = fVar10 * pfVar5[3];
            pfVar5 = pfVar5 + 4;
          } while (pfVar5 < pfVar1 + -3);
          if (pfVar1 <= pfVar5) goto LAB_144d57ea8;
        }
        do {
          *pfVar5 = fVar11 * *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar11 = fVar11 + fVar8;
        } while (pfVar5 < pfVar1);
      }
LAB_144d57ea8:
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 144d57ed0 FUN_144d57ed0 body=11825 status=ok
// SIG undefined FUN_144d57ed0(void)

void FUN_144d57ed0(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4,char param_5,
                  char param_6)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  float fVar4;
  ushort uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  puVar1 = (uint *)(param_1 + 0x3c);
  uVar17 = *(uint *)(param_2 + 1) & 0xff;
  uVar8 = *puVar1;
  if (uVar8 == 0) {
    uVar20 = 0;
    uVar8 = 0;
    uVar16 = uVar20;
    if (uVar17 < 0xc) {
      if (3 < uVar17) goto LAB_144d5a9c4;
      if (uVar17 != 0) goto LAB_144d5aa7b;
    }
    else {
      uVar17 = 0xc;
LAB_144d5a9c4:
      uVar8 = (uVar17 - 4 >> 2) + 1;
      lVar12 = 2;
      uVar15 = (ulonglong)uVar8;
      uVar8 = uVar8 * 4;
      puVar19 = (undefined4 *)(param_1 + 8);
      do {
        lVar11 = *(ushort *)(param_2 + 2) * uVar16;
        uVar16 = uVar16 + 4;
        puVar19[-2] = *(undefined4 *)
                       (*param_2 + -4 +
                       (lVar11 + (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4);
        puVar19[-1] = *(undefined4 *)
                       (*param_2 + -4 +
                       ((lVar12 + -1) * (ulonglong)*(ushort *)(param_2 + 2) +
                       (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4);
        *puVar19 = *(undefined4 *)
                    (*param_2 + -4 +
                    ((ulonglong)*(ushort *)(param_2 + 2) * lVar12 +
                    (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4);
        lVar11 = lVar12 + 1;
        lVar12 = lVar12 + 4;
        puVar19[1] = *(undefined4 *)
                      (*param_2 + -4 +
                      (lVar11 * (ulonglong)*(ushort *)(param_2 + 2) +
                      (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4);
        uVar15 = uVar15 - 1;
        puVar19 = puVar19 + 4;
      } while (uVar15 != 0);
      if (uVar8 < uVar17) {
LAB_144d5aa7b:
        uVar15 = (ulonglong)(uVar17 - uVar8);
        do {
          *(undefined4 *)(param_1 + uVar16 * 4) =
               *(undefined4 *)
                (*param_2 + -4 +
                (*(ushort *)(param_2 + 2) * uVar16 +
                (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4);
          uVar16 = uVar16 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
    if ((param_5 != '\0') && (param_3 != (longlong *)0x0)) {
      uVar8 = *(uint *)(param_3 + 1) & 0xff;
      if (uVar8 < 2) {
        if (uVar8 == 0) goto LAB_144d5aafd;
      }
      else {
        uVar8 = 2;
      }
      uVar15 = (ulonglong)uVar8;
      uVar16 = uVar20;
      puVar19 = (undefined4 *)(param_1 + 0x30);
      do {
        lVar12 = *(ushort *)(param_3 + 2) * uVar16;
        uVar16 = uVar16 + 1;
        *puVar19 = *(undefined4 *)
                    (*param_3 + -4 + (lVar12 + (ulonglong)*(ushort *)((longlong)param_3 + 0x12)) * 4
                    );
        uVar15 = uVar15 - 1;
        puVar19 = puVar19 + 1;
      } while (uVar15 != 0);
    }
LAB_144d5aafd:
    if (param_6 == '\0') {
      return;
    }
    uVar8 = *param_4;
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(uint *)(param_1 + 0x60) <= uVar8) {
      uVar8 = *(uint *)(param_1 + 0x60);
    }
    uVar16 = uVar20;
    if (uVar8 < 4) {
      if (uVar8 == 0) {
        return;
      }
    }
    else {
      uVar17 = (uVar8 - 4 >> 2) + 1;
      uVar20 = (ulonglong)uVar17;
      uVar17 = uVar17 * 4;
      do {
        plVar6 = *(longlong **)(*(longlong *)(param_4 + 2) + uVar16 * 8);
        if ((*(int *)((longlong)plVar6 + 0xc) != 0x11) && (*(short *)((longlong)plVar6 + 0x12) != 0)
           ) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x40) * 8)
               = **(undefined8 **)(*(longlong *)(param_4 + 4) + uVar16 * 8);
          *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x40) * 4)
               = *(undefined4 *)(*plVar6 + -4 + (ulonglong)*(ushort *)((longlong)plVar6 + 0x12) * 4)
          ;
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
        plVar6 = *(longlong **)(*(longlong *)(param_4 + 2) + 8 + uVar16 * 8);
        if ((*(int *)((longlong)plVar6 + 0xc) != 0x11) && (*(short *)((longlong)plVar6 + 0x12) != 0)
           ) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x40) * 8)
               = **(undefined8 **)(*(longlong *)(param_4 + 4) + 8 + uVar16 * 8);
          *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x40) * 4)
               = *(undefined4 *)(*plVar6 + -4 + (ulonglong)*(ushort *)((longlong)plVar6 + 0x12) * 4)
          ;
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
        plVar6 = *(longlong **)(*(longlong *)(param_4 + 2) + 0x10 + uVar16 * 8);
        if ((*(int *)((longlong)plVar6 + 0xc) != 0x11) && (*(short *)((longlong)plVar6 + 0x12) != 0)
           ) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x40) * 8)
               = **(undefined8 **)(*(longlong *)(param_4 + 4) + 0x10 + uVar16 * 8);
          *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x40) * 4)
               = *(undefined4 *)(*plVar6 + -4 + (ulonglong)*(ushort *)((longlong)plVar6 + 0x12) * 4)
          ;
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
        plVar6 = *(longlong **)(*(longlong *)(param_4 + 2) + 0x18 + uVar16 * 8);
        if ((*(int *)((longlong)plVar6 + 0xc) != 0x11) && (*(short *)((longlong)plVar6 + 0x12) != 0)
           ) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x40) * 8)
               = **(undefined8 **)(*(longlong *)(param_4 + 4) + 0x18 + uVar16 * 8);
          *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x40) * 4)
               = *(undefined4 *)(*plVar6 + -4 + (ulonglong)*(ushort *)((longlong)plVar6 + 0x12) * 4)
          ;
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
        uVar16 = uVar16 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      uVar20 = (ulonglong)uVar17;
      if (uVar8 <= uVar17) {
        return;
      }
    }
    lVar12 = uVar16 * 8;
    do {
      plVar6 = *(longlong **)(lVar12 + *(longlong *)(param_4 + 2));
      if ((*(int *)((longlong)plVar6 + 0xc) != 0x11) && (*(short *)((longlong)plVar6 + 0x12) != 0))
      {
        *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x40) * 8) =
             **(undefined8 **)(lVar12 + *(longlong *)(param_4 + 4));
        *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x40) * 4) =
             *(undefined4 *)(*plVar6 + -4 + (ulonglong)*(ushort *)((longlong)plVar6 + 0x12) * 4);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
      lVar12 = lVar12 + 8;
      uVar17 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar17;
    } while (uVar17 < uVar8);
    return;
  }
  if (*(ushort *)(param_2 + 2) <= uVar8) {
    uVar8 = (uint)*(ushort *)(param_2 + 2);
  }
  uVar16 = 0;
  if (uVar17 < 0xc) {
    if (uVar17 != 0) goto LAB_144d57fb5;
  }
  else {
    uVar17 = 0xc;
LAB_144d57fb5:
    uVar15 = (ulonglong)uVar17;
    uVar20 = uVar16;
    do {
      fVar4 = *(float *)(param_1 + uVar20 * 4);
      uVar5 = *(ushort *)((longlong)param_2 + 0x12);
      puVar2 = (uint *)(*param_2 + *(ushort *)(param_2 + 2) * uVar20 * 4);
      if (uVar5 != 0) {
        fVar40 = 1.0 / (float)*(uint *)(param_1 + 0x38);
        uVar17 = (uint)uVar5;
        if (uVar17 < uVar8) {
          fVar41 = 1.0 / (float)uVar5;
          if (uVar17 != 0) {
            uVar24 = (uint)uVar5;
            uVar14 = uVar16;
            if (7 < uVar17) {
              uVar17 = *puVar1;
              if ((puVar1 < puVar2) || (uVar14 = 0, puVar2 + (uVar5 - 1) < puVar1)) {
                uVar14 = uVar16;
                do {
                  uVar7 = (uint)uVar14;
                  uVar28 = uVar7 + 1;
                  uVar29 = uVar7 + 2;
                  uVar31 = uVar7 + 3;
                  fVar36 = (1.0 - ((float)(uVar7 >> 8) * 256.0 + (float)(uVar7 & 0xff)) * fVar41) *
                           ((float)(uVar17 - uVar7 >> 8) * 256.0 + (float)(uVar17 - uVar7 & 0xff)) *
                           fVar40;
                  fVar37 = (1.0 - ((float)(uVar28 >> 8) * 256.0 + (float)(uVar28 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar28 >> 8) * 256.0 +
                             (float)(uVar17 - uVar28 & 0xff)) * fVar40;
                  fVar38 = (1.0 - ((float)(uVar29 >> 8) * 256.0 + (float)(uVar29 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar29 >> 8) * 256.0 +
                             (float)(uVar17 - uVar29 & 0xff)) * fVar40;
                  fVar39 = (1.0 - ((float)(uVar31 >> 8) * 256.0 + (float)(uVar31 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar31 >> 8) * 256.0 +
                             (float)(uVar17 - uVar31 & 0xff)) * fVar40;
                  fVar21 = 1.0 - fVar36;
                  fVar23 = 1.0 - fVar37;
                  fVar25 = 1.0 - fVar38;
                  fVar26 = 1.0 - fVar39;
                  pfVar10 = (float *)(puVar2 + uVar14);
                  fVar22 = pfVar10[1];
                  fVar35 = pfVar10[2];
                  fVar27 = pfVar10[3];
                  pfVar9 = (float *)(puVar2 + uVar14);
                  *pfVar9 = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21 +
                               34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) * fVar21 +
                            0.07175691) * *pfVar10 +
                            ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36 +
                               34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) * fVar36 +
                            0.07175691) * fVar4;
                  pfVar9[1] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) * fVar23 +
                                 34.484993) * fVar23 - 12.930046) * fVar23 + 3.447074) * fVar23 +
                              0.07175691) * fVar22 +
                              ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) * fVar37 +
                                 34.484993) * fVar37 - 12.930046) * fVar37 + 3.447074) * fVar37 +
                              0.07175691) * fVar4;
                  pfVar9[2] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) * fVar25 +
                                 34.484993) * fVar25 - 12.930046) * fVar25 + 3.447074) * fVar25 +
                              0.07175691) * fVar35 +
                              ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) * fVar38 +
                                 34.484993) * fVar38 - 12.930046) * fVar38 + 3.447074) * fVar38 +
                              0.07175691) * fVar4;
                  pfVar9[3] = ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) * fVar26 +
                                 34.484993) * fVar26 - 12.930046) * fVar26 + 3.447074) * fVar26 +
                              0.07175691) * fVar27 +
                              ((((((37.939247 - fVar39 * 11.209858) * fVar39 - 50.8083) * fVar39 +
                                 34.484993) * fVar39 - 12.930046) * fVar39 + 3.447074) * fVar39 +
                              0.07175691) * fVar4;
                  uVar28 = uVar7 + 4;
                  uVar29 = uVar7 + 5;
                  uVar31 = uVar7 + 6;
                  uVar32 = uVar7 + 7;
                  uVar14 = (ulonglong)(uVar7 + 8);
                  fVar21 = (1.0 - ((float)(uVar28 >> 8) * 256.0 + (float)(uVar28 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar28 >> 8) * 256.0 +
                             (float)(uVar17 - uVar28 & 0xff)) * fVar40;
                  fVar23 = (1.0 - ((float)(uVar29 >> 8) * 256.0 + (float)(uVar29 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar29 >> 8) * 256.0 +
                             (float)(uVar17 - uVar29 & 0xff)) * fVar40;
                  fVar25 = (1.0 - ((float)(uVar31 >> 8) * 256.0 + (float)(uVar31 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar31 >> 8) * 256.0 +
                             (float)(uVar17 - uVar31 & 0xff)) * fVar40;
                  fVar26 = (1.0 - ((float)(uVar32 >> 8) * 256.0 + (float)(uVar32 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar32 >> 8) * 256.0 +
                             (float)(uVar17 - uVar32 & 0xff)) * fVar40;
                  fVar36 = 1.0 - fVar21;
                  fVar37 = 1.0 - fVar23;
                  fVar38 = 1.0 - fVar25;
                  fVar39 = 1.0 - fVar26;
                  pfVar10 = (float *)(puVar2 + uVar28);
                  fVar22 = pfVar10[1];
                  fVar35 = pfVar10[2];
                  fVar27 = pfVar10[3];
                  pfVar9 = (float *)(puVar2 + uVar28);
                  *pfVar9 = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21 +
                               34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) * fVar21 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36 +
                               34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) * fVar36 +
                            0.07175691) * *pfVar10;
                  pfVar9[1] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) * fVar23 +
                                 34.484993) * fVar23 - 12.930046) * fVar23 + 3.447074) * fVar23 +
                              0.07175691) * fVar4 +
                              ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) * fVar37 +
                                 34.484993) * fVar37 - 12.930046) * fVar37 + 3.447074) * fVar37 +
                              0.07175691) * fVar22;
                  pfVar9[2] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) * fVar25 +
                                 34.484993) * fVar25 - 12.930046) * fVar25 + 3.447074) * fVar25 +
                              0.07175691) * fVar4 +
                              ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) * fVar38 +
                                 34.484993) * fVar38 - 12.930046) * fVar38 + 3.447074) * fVar38 +
                              0.07175691) * fVar35;
                  pfVar9[3] = ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) * fVar26 +
                                 34.484993) * fVar26 - 12.930046) * fVar26 + 3.447074) * fVar26 +
                              0.07175691) * fVar4 +
                              ((((((37.939247 - fVar39 * 11.209858) * fVar39 - 50.8083) * fVar39 +
                                 34.484993) * fVar39 - 12.930046) * fVar39 + 3.447074) * fVar39 +
                              0.07175691) * fVar27;
                } while (uVar7 + 8 < (uVar24 & 0xfffffff8));
              }
            }
            uVar17 = (uint)uVar14;
            if (uVar17 < uVar24) {
              uVar18 = uVar14;
              if (3 < uVar24 - uVar17) {
                pfVar10 = (float *)(puVar2 + uVar14 + 2);
                uVar18 = uVar14 + (ulonglong)((((uVar5 - 3) - uVar17) - 1 >> 2) + 1) * 4;
                do {
                  iVar13 = (int)uVar14;
                  fVar35 = (1.0 - (float)uVar14 * fVar41) * (float)(*puVar1 - iVar13) * fVar40;
                  fVar22 = 1.0 - fVar35;
                  pfVar10[-2] = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                   34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                                0.07175691) * pfVar10[-2] +
                                ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) * fVar35 +
                                   34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074) * fVar35 +
                                0.07175691) * fVar4;
                  fVar35 = (1.0 - (float)(iVar13 + 1) * fVar41) *
                           (float)((*puVar1 - iVar13) - 1) * fVar40;
                  fVar22 = 1.0 - fVar35;
                  pfVar10[-1] = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                   34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                                0.07175691) * pfVar10[-1] +
                                ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) * fVar35 +
                                   34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074) * fVar35 +
                                0.07175691) * fVar4;
                  fVar35 = (1.0 - (float)(iVar13 + 2) * fVar41) *
                           (float)((*puVar1 - iVar13) - 2) * fVar40;
                  fVar22 = 1.0 - fVar35;
                  *pfVar10 = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                             0.07175691) * *pfVar10 +
                             ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) * fVar35 +
                                34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074) * fVar35 +
                             0.07175691) * fVar4;
                  fVar22 = (1.0 - (float)(iVar13 + 3) * fVar41) *
                           (float)((*puVar1 - iVar13) - 3) * fVar40;
                  fVar35 = 1.0 - fVar22;
                  uVar17 = iVar13 + 4;
                  uVar14 = (ulonglong)uVar17;
                  pfVar10[1] = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                  34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                               0.07175691) * fVar4 +
                               ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) * fVar35 +
                                  34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074) * fVar35 +
                               0.07175691) * pfVar10[1];
                  pfVar10 = pfVar10 + 4;
                } while (uVar17 < uVar5 - 3);
                if (uVar24 <= uVar17) goto LAB_144d58d2c;
              }
              pfVar10 = (float *)(puVar2 + uVar18);
              do {
                iVar13 = (int)uVar14;
                fVar22 = (float)uVar14;
                uVar17 = iVar13 + 1;
                uVar14 = (ulonglong)uVar17;
                fVar35 = (1.0 - fVar22 * fVar41) * (float)(*puVar1 - iVar13) * fVar40;
                fVar22 = 1.0 - fVar35;
                *pfVar10 = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                              34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                           0.07175691) * *pfVar10 +
                           ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) * fVar35 +
                              34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074) * fVar35 +
                           0.07175691) * fVar4;
                pfVar10 = pfVar10 + 1;
              } while (uVar17 < uVar24);
            }
          }
        }
        else if (uVar8 != 0) {
          uVar14 = uVar16;
          if (7 < uVar8) {
            uVar17 = *puVar1;
            if ((puVar1 < puVar2) || (uVar14 = 0, puVar2 + (uVar8 - 1) < puVar1)) {
              uVar14 = uVar16;
              do {
                iVar13 = (int)uVar14;
                uVar24 = uVar17 - (iVar13 + 1);
                uVar28 = uVar17 - (iVar13 + 2);
                uVar7 = uVar17 - (iVar13 + 3);
                fVar27 = ((float)(uVar17 - iVar13 >> 8) * 256.0 + (float)(uVar17 - iVar13 & 0xff)) *
                         fVar40;
                fVar21 = ((float)(uVar24 >> 8) * 256.0 + (float)(uVar24 & 0xff)) * fVar40;
                fVar23 = ((float)(uVar28 >> 8) * 256.0 + (float)(uVar28 & 0xff)) * fVar40;
                fVar25 = ((float)(uVar7 >> 8) * 256.0 + (float)(uVar7 & 0xff)) * fVar40;
                fVar26 = 1.0 - fVar27;
                fVar36 = 1.0 - fVar21;
                fVar37 = 1.0 - fVar23;
                fVar38 = 1.0 - fVar25;
                pfVar10 = (float *)(puVar2 + uVar14);
                fVar41 = pfVar10[1];
                fVar22 = pfVar10[2];
                fVar35 = pfVar10[3];
                pfVar9 = (float *)(puVar2 + uVar14);
                *pfVar9 = ((((((37.939247 - fVar27 * 11.209858) * fVar27 - 50.8083) * fVar27 +
                             34.484993) * fVar27 - 12.930046) * fVar27 + 3.447074) * fVar27 +
                          0.07175691) * fVar4 +
                          ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) * fVar26 +
                             34.484993) * fVar26 - 12.930046) * fVar26 + 3.447074) * fVar26 +
                          0.07175691) * *pfVar10;
                pfVar9[1] = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21 +
                               34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) * fVar21 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36 +
                               34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) * fVar36 +
                            0.07175691) * fVar41;
                pfVar9[2] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) * fVar23 +
                               34.484993) * fVar23 - 12.930046) * fVar23 + 3.447074) * fVar23 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) * fVar37 +
                               34.484993) * fVar37 - 12.930046) * fVar37 + 3.447074) * fVar37 +
                            0.07175691) * fVar22;
                pfVar9[3] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) * fVar25 +
                               34.484993) * fVar25 - 12.930046) * fVar25 + 3.447074) * fVar25 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) * fVar38 +
                               34.484993) * fVar38 - 12.930046) * fVar38 + 3.447074) * fVar38 +
                            0.07175691) * fVar35;
                uVar24 = iVar13 + 4;
                uVar28 = uVar17 - (iVar13 + 5);
                uVar7 = uVar17 - (iVar13 + 6);
                uVar29 = uVar17 - (iVar13 + 7);
                fVar27 = ((float)(uVar17 - uVar24 >> 8) * 256.0 + (float)(uVar17 - uVar24 & 0xff)) *
                         fVar40;
                fVar21 = ((float)(uVar28 >> 8) * 256.0 + (float)(uVar28 & 0xff)) * fVar40;
                fVar23 = ((float)(uVar7 >> 8) * 256.0 + (float)(uVar7 & 0xff)) * fVar40;
                fVar25 = ((float)(uVar29 >> 8) * 256.0 + (float)(uVar29 & 0xff)) * fVar40;
                fVar26 = 1.0 - fVar27;
                fVar36 = 1.0 - fVar21;
                fVar37 = 1.0 - fVar23;
                fVar38 = 1.0 - fVar25;
                uVar14 = (ulonglong)(iVar13 + 8U);
                pfVar10 = (float *)(puVar2 + uVar24);
                fVar41 = pfVar10[1];
                fVar22 = pfVar10[2];
                fVar35 = pfVar10[3];
                pfVar9 = (float *)(puVar2 + uVar24);
                *pfVar9 = ((((((37.939247 - fVar27 * 11.209858) * fVar27 - 50.8083) * fVar27 +
                             34.484993) * fVar27 - 12.930046) * fVar27 + 3.447074) * fVar27 +
                          0.07175691) * fVar4 +
                          ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) * fVar26 +
                             34.484993) * fVar26 - 12.930046) * fVar26 + 3.447074) * fVar26 +
                          0.07175691) * *pfVar10;
                pfVar9[1] = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21 +
                               34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) * fVar21 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36 +
                               34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) * fVar36 +
                            0.07175691) * fVar41;
                pfVar9[2] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) * fVar23 +
                               34.484993) * fVar23 - 12.930046) * fVar23 + 3.447074) * fVar23 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) * fVar37 +
                               34.484993) * fVar37 - 12.930046) * fVar37 + 3.447074) * fVar37 +
                            0.07175691) * fVar22;
                pfVar9[3] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) * fVar25 +
                               34.484993) * fVar25 - 12.930046) * fVar25 + 3.447074) * fVar25 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) * fVar38 +
                               34.484993) * fVar38 - 12.930046) * fVar38 + 3.447074) * fVar38 +
                            0.07175691) * fVar35;
              } while (iVar13 + 8U < (uVar8 & 0xfffffff8));
            }
          }
          uVar17 = (uint)uVar14;
          if (uVar17 < uVar8) {
            uVar18 = uVar14;
            if (3 < uVar8 - uVar17) {
              pfVar10 = (float *)(puVar2 + uVar14 + 2);
              uVar18 = uVar14 + (ulonglong)((((uVar8 - 3) - uVar17) - 1 >> 2) + 1) * 4;
              do {
                iVar13 = (int)uVar14;
                fVar22 = (float)(*puVar1 - iVar13) * fVar40;
                fVar41 = 1.0 - fVar22;
                pfVar10[-2] = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41 +
                                 34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41 +
                              0.07175691) * pfVar10[-2] +
                              ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                 34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                              0.07175691) * fVar4;
                fVar22 = (float)((*puVar1 - iVar13) - 1) * fVar40;
                fVar41 = 1.0 - fVar22;
                pfVar10[-1] = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41 +
                                 34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41 +
                              0.07175691) * pfVar10[-1] +
                              ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                 34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                              0.07175691) * fVar4;
                fVar22 = (float)((*puVar1 - iVar13) - 2) * fVar40;
                fVar41 = 1.0 - fVar22;
                *pfVar10 = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41 +
                              34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41 +
                           0.07175691) * *pfVar10 +
                           ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                              34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                           0.07175691) * fVar4;
                uVar17 = iVar13 + 4;
                uVar14 = (ulonglong)uVar17;
                fVar41 = (float)((*puVar1 - iVar13) - 3) * fVar40;
                fVar22 = 1.0 - fVar41;
                pfVar10[1] = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41 +
                                34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41 +
                             0.07175691) * fVar4 +
                             ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                             0.07175691) * pfVar10[1];
                pfVar10 = pfVar10 + 4;
              } while (uVar17 < uVar8 - 3);
              if (uVar8 <= uVar17) goto LAB_144d58d2c;
            }
            pfVar10 = (float *)(puVar2 + uVar18);
            do {
              iVar13 = (int)uVar14;
              uVar17 = iVar13 + 1;
              uVar14 = (ulonglong)uVar17;
              fVar41 = (float)(*puVar1 - iVar13) * fVar40;
              fVar22 = 1.0 - fVar41;
              *pfVar10 = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41 +
                            34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41 +
                         0.07175691) * fVar4 +
                         ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                            34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                         0.07175691) * *pfVar10;
              pfVar10 = pfVar10 + 1;
            } while (uVar17 < uVar8);
          }
        }
      }
LAB_144d58d2c:
      uVar20 = uVar20 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if ((param_5 != '\0') && (param_3 != (longlong *)0x0)) {
    uVar17 = *(uint *)(param_3 + 1) & 0xff;
    if (uVar17 < 2) {
      if (uVar17 == 0) goto LAB_144d59b4d;
    }
    else {
      uVar17 = 2;
    }
    uVar15 = (ulonglong)uVar17;
    pfVar10 = (float *)(param_1 + 0x30);
    uVar20 = uVar16;
    do {
      fVar4 = *pfVar10;
      uVar5 = *(ushort *)((longlong)param_3 + 0x12);
      puVar2 = (uint *)(*param_3 + *(ushort *)(param_3 + 2) * uVar20 * 4);
      if (uVar5 != 0) {
        fVar40 = 1.0 / (float)*(uint *)(param_1 + 0x38);
        uVar17 = (uint)uVar5;
        if (uVar17 < uVar8) {
          fVar41 = 1.0 / (float)uVar5;
          if (uVar17 != 0) {
            uVar24 = (uint)uVar5;
            uVar14 = uVar16;
            if (7 < uVar17) {
              uVar17 = *puVar1;
              if ((puVar1 < puVar2) || (uVar14 = 0, puVar2 + (uVar5 - 1) < puVar1)) {
                uVar14 = uVar16;
                do {
                  uVar7 = (uint)uVar14;
                  uVar28 = uVar7 + 1;
                  uVar29 = uVar7 + 2;
                  uVar31 = uVar7 + 3;
                  fVar21 = (1.0 - ((float)(uVar7 >> 8) * 256.0 + (float)(uVar7 & 0xff)) * fVar41) *
                           ((float)(uVar17 - uVar7 >> 8) * 256.0 + (float)(uVar17 - uVar7 & 0xff)) *
                           fVar40;
                  fVar23 = (1.0 - ((float)(uVar28 >> 8) * 256.0 + (float)(uVar28 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar28 >> 8) * 256.0 +
                             (float)(uVar17 - uVar28 & 0xff)) * fVar40;
                  fVar25 = (1.0 - ((float)(uVar29 >> 8) * 256.0 + (float)(uVar29 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar29 >> 8) * 256.0 +
                             (float)(uVar17 - uVar29 & 0xff)) * fVar40;
                  fVar26 = (1.0 - ((float)(uVar31 >> 8) * 256.0 + (float)(uVar31 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar31 >> 8) * 256.0 +
                             (float)(uVar17 - uVar31 & 0xff)) * fVar40;
                  fVar36 = 1.0 - fVar21;
                  fVar37 = 1.0 - fVar23;
                  fVar38 = 1.0 - fVar25;
                  fVar39 = 1.0 - fVar26;
                  pfVar9 = (float *)(puVar2 + uVar14);
                  fVar22 = pfVar9[1];
                  fVar35 = pfVar9[2];
                  fVar27 = pfVar9[3];
                  pfVar3 = (float *)(puVar2 + uVar14);
                  *pfVar3 = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21 +
                               34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) * fVar21 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36 +
                               34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) * fVar36 +
                            0.07175691) * *pfVar9;
                  pfVar3[1] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) * fVar23 +
                                 34.484993) * fVar23 - 12.930046) * fVar23 + 3.447074) * fVar23 +
                              0.07175691) * fVar4 +
                              ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) * fVar37 +
                                 34.484993) * fVar37 - 12.930046) * fVar37 + 3.447074) * fVar37 +
                              0.07175691) * fVar22;
                  pfVar3[2] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) * fVar25 +
                                 34.484993) * fVar25 - 12.930046) * fVar25 + 3.447074) * fVar25 +
                              0.07175691) * fVar4 +
                              ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) * fVar38 +
                                 34.484993) * fVar38 - 12.930046) * fVar38 + 3.447074) * fVar38 +
                              0.07175691) * fVar35;
                  pfVar3[3] = ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) * fVar26 +
                                 34.484993) * fVar26 - 12.930046) * fVar26 + 3.447074) * fVar26 +
                              0.07175691) * fVar4 +
                              ((((((37.939247 - fVar39 * 11.209858) * fVar39 - 50.8083) * fVar39 +
                                 34.484993) * fVar39 - 12.930046) * fVar39 + 3.447074) * fVar39 +
                              0.07175691) * fVar27;
                  uVar28 = uVar7 + 4;
                  uVar29 = uVar7 + 5;
                  uVar31 = uVar7 + 6;
                  uVar32 = uVar7 + 7;
                  uVar14 = (ulonglong)(uVar7 + 8);
                  fVar21 = (1.0 - ((float)(uVar28 >> 8) * 256.0 + (float)(uVar28 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar28 >> 8) * 256.0 +
                             (float)(uVar17 - uVar28 & 0xff)) * fVar40;
                  fVar23 = (1.0 - ((float)(uVar29 >> 8) * 256.0 + (float)(uVar29 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar29 >> 8) * 256.0 +
                             (float)(uVar17 - uVar29 & 0xff)) * fVar40;
                  fVar25 = (1.0 - ((float)(uVar31 >> 8) * 256.0 + (float)(uVar31 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar31 >> 8) * 256.0 +
                             (float)(uVar17 - uVar31 & 0xff)) * fVar40;
                  fVar26 = (1.0 - ((float)(uVar32 >> 8) * 256.0 + (float)(uVar32 & 0xff)) * fVar41)
                           * ((float)(uVar17 - uVar32 >> 8) * 256.0 +
                             (float)(uVar17 - uVar32 & 0xff)) * fVar40;
                  fVar36 = 1.0 - fVar21;
                  fVar37 = 1.0 - fVar23;
                  fVar38 = 1.0 - fVar25;
                  fVar39 = 1.0 - fVar26;
                  pfVar9 = (float *)(puVar2 + uVar28);
                  fVar22 = pfVar9[1];
                  fVar35 = pfVar9[2];
                  fVar27 = pfVar9[3];
                  pfVar3 = (float *)(puVar2 + uVar28);
                  *pfVar3 = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21 +
                               34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) * fVar21 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36 +
                               34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) * fVar36 +
                            0.07175691) * *pfVar9;
                  pfVar3[1] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) * fVar23 +
                                 34.484993) * fVar23 - 12.930046) * fVar23 + 3.447074) * fVar23 +
                              0.07175691) * fVar4 +
                              ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) * fVar37 +
                                 34.484993) * fVar37 - 12.930046) * fVar37 + 3.447074) * fVar37 +
                              0.07175691) * fVar22;
                  pfVar3[2] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) * fVar25 +
                                 34.484993) * fVar25 - 12.930046) * fVar25 + 3.447074) * fVar25 +
                              0.07175691) * fVar4 +
                              ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) * fVar38 +
                                 34.484993) * fVar38 - 12.930046) * fVar38 + 3.447074) * fVar38 +
                              0.07175691) * fVar35;
                  pfVar3[3] = ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) * fVar26 +
                                 34.484993) * fVar26 - 12.930046) * fVar26 + 3.447074) * fVar26 +
                              0.07175691) * fVar4 +
                              ((((((37.939247 - fVar39 * 11.209858) * fVar39 - 50.8083) * fVar39 +
                                 34.484993) * fVar39 - 12.930046) * fVar39 + 3.447074) * fVar39 +
                              0.07175691) * fVar27;
                } while (uVar7 + 8 < (uVar24 & 0xfffffff8));
              }
            }
            uVar17 = (uint)uVar14;
            if (uVar17 < uVar24) {
              uVar18 = uVar14;
              if (3 < uVar24 - uVar17) {
                pfVar9 = (float *)(puVar2 + uVar14 + 2);
                uVar18 = uVar14 + (ulonglong)((((uVar5 - 3) - uVar17) - 1 >> 2) + 1) * 4;
                do {
                  iVar13 = (int)uVar14;
                  fVar35 = (1.0 - (float)uVar14 * fVar41) * (float)(*puVar1 - iVar13) * fVar40;
                  fVar22 = 1.0 - fVar35;
                  pfVar9[-2] = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                  34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                               0.07175691) * pfVar9[-2] +
                               ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) * fVar35 +
                                  34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074) * fVar35 +
                               0.07175691) * fVar4;
                  fVar35 = (1.0 - (float)(iVar13 + 1) * fVar41) *
                           (float)((*puVar1 - iVar13) - 1) * fVar40;
                  fVar22 = 1.0 - fVar35;
                  pfVar9[-1] = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                  34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                               0.07175691) * pfVar9[-1] +
                               ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) * fVar35 +
                                  34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074) * fVar35 +
                               0.07175691) * fVar4;
                  fVar35 = (1.0 - (float)(iVar13 + 2) * fVar41) *
                           (float)((*puVar1 - iVar13) - 2) * fVar40;
                  fVar22 = 1.0 - fVar35;
                  *pfVar9 = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                               34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                            0.07175691) * *pfVar9 +
                            ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) * fVar35 +
                               34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074) * fVar35 +
                            0.07175691) * fVar4;
                  fVar22 = (1.0 - (float)(iVar13 + 3) * fVar41) *
                           (float)((*puVar1 - iVar13) - 3) * fVar40;
                  fVar35 = 1.0 - fVar22;
                  uVar17 = iVar13 + 4;
                  uVar14 = (ulonglong)uVar17;
                  pfVar9[1] = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                 34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                              0.07175691) * fVar4 +
                              ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) * fVar35 +
                                 34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074) * fVar35 +
                              0.07175691) * pfVar9[1];
                  pfVar9 = pfVar9 + 4;
                } while (uVar17 < uVar5 - 3);
                if (uVar24 <= uVar17) goto LAB_144d59b2c;
              }
              pfVar9 = (float *)(puVar2 + uVar18);
              do {
                iVar13 = (int)uVar14;
                fVar22 = (float)uVar14;
                uVar17 = iVar13 + 1;
                uVar14 = (ulonglong)uVar17;
                fVar35 = (1.0 - fVar22 * fVar41) * (float)(*puVar1 - iVar13) * fVar40;
                fVar22 = 1.0 - fVar35;
                *pfVar9 = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                             34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                          0.07175691) * *pfVar9 +
                          ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) * fVar35 +
                             34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074) * fVar35 +
                          0.07175691) * fVar4;
                pfVar9 = pfVar9 + 1;
              } while (uVar17 < uVar24);
            }
          }
        }
        else if (uVar8 != 0) {
          uVar14 = uVar16;
          if (7 < uVar8) {
            uVar17 = *puVar1;
            if ((puVar1 < puVar2) || (uVar14 = 0, puVar2 + (uVar8 - 1) < puVar1)) {
              uVar14 = uVar16;
              do {
                iVar13 = (int)uVar14;
                uVar24 = uVar17 - (iVar13 + 1);
                uVar28 = uVar17 - (iVar13 + 2);
                uVar7 = uVar17 - (iVar13 + 3);
                fVar26 = ((float)(uVar17 - iVar13 >> 8) * 256.0 + (float)(uVar17 - iVar13 & 0xff)) *
                         fVar40;
                fVar36 = ((float)(uVar24 >> 8) * 256.0 + (float)(uVar24 & 0xff)) * fVar40;
                fVar37 = ((float)(uVar28 >> 8) * 256.0 + (float)(uVar28 & 0xff)) * fVar40;
                fVar38 = ((float)(uVar7 >> 8) * 256.0 + (float)(uVar7 & 0xff)) * fVar40;
                fVar27 = 1.0 - fVar26;
                fVar21 = 1.0 - fVar36;
                fVar23 = 1.0 - fVar37;
                fVar25 = 1.0 - fVar38;
                pfVar9 = (float *)(puVar2 + uVar14);
                fVar41 = pfVar9[1];
                fVar22 = pfVar9[2];
                fVar35 = pfVar9[3];
                pfVar3 = (float *)(puVar2 + uVar14);
                *pfVar3 = ((((((37.939247 - fVar27 * 11.209858) * fVar27 - 50.8083) * fVar27 +
                             34.484993) * fVar27 - 12.930046) * fVar27 + 3.447074) * fVar27 +
                          0.07175691) * *pfVar9 +
                          ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) * fVar26 +
                             34.484993) * fVar26 - 12.930046) * fVar26 + 3.447074) * fVar26 +
                          0.07175691) * fVar4;
                pfVar3[1] = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21 +
                               34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) * fVar21 +
                            0.07175691) * fVar41 +
                            ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36 +
                               34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) * fVar36 +
                            0.07175691) * fVar4;
                pfVar3[2] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) * fVar23 +
                               34.484993) * fVar23 - 12.930046) * fVar23 + 3.447074) * fVar23 +
                            0.07175691) * fVar22 +
                            ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) * fVar37 +
                               34.484993) * fVar37 - 12.930046) * fVar37 + 3.447074) * fVar37 +
                            0.07175691) * fVar4;
                pfVar3[3] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) * fVar25 +
                               34.484993) * fVar25 - 12.930046) * fVar25 + 3.447074) * fVar25 +
                            0.07175691) * fVar35 +
                            ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) * fVar38 +
                               34.484993) * fVar38 - 12.930046) * fVar38 + 3.447074) * fVar38 +
                            0.07175691) * fVar4;
                uVar24 = iVar13 + 4;
                uVar28 = uVar17 - (iVar13 + 5);
                uVar7 = uVar17 - (iVar13 + 6);
                uVar29 = uVar17 - (iVar13 + 7);
                fVar27 = ((float)(uVar17 - uVar24 >> 8) * 256.0 + (float)(uVar17 - uVar24 & 0xff)) *
                         fVar40;
                fVar21 = ((float)(uVar28 >> 8) * 256.0 + (float)(uVar28 & 0xff)) * fVar40;
                fVar23 = ((float)(uVar7 >> 8) * 256.0 + (float)(uVar7 & 0xff)) * fVar40;
                fVar25 = ((float)(uVar29 >> 8) * 256.0 + (float)(uVar29 & 0xff)) * fVar40;
                fVar26 = 1.0 - fVar27;
                fVar36 = 1.0 - fVar21;
                fVar37 = 1.0 - fVar23;
                fVar38 = 1.0 - fVar25;
                uVar14 = (ulonglong)(iVar13 + 8U);
                pfVar9 = (float *)(puVar2 + uVar24);
                fVar41 = pfVar9[1];
                fVar22 = pfVar9[2];
                fVar35 = pfVar9[3];
                pfVar3 = (float *)(puVar2 + uVar24);
                *pfVar3 = ((((((37.939247 - fVar27 * 11.209858) * fVar27 - 50.8083) * fVar27 +
                             34.484993) * fVar27 - 12.930046) * fVar27 + 3.447074) * fVar27 +
                          0.07175691) * fVar4 +
                          ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) * fVar26 +
                             34.484993) * fVar26 - 12.930046) * fVar26 + 3.447074) * fVar26 +
                          0.07175691) * *pfVar9;
                pfVar3[1] = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21 +
                               34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) * fVar21 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36 +
                               34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) * fVar36 +
                            0.07175691) * fVar41;
                pfVar3[2] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) * fVar23 +
                               34.484993) * fVar23 - 12.930046) * fVar23 + 3.447074) * fVar23 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) * fVar37 +
                               34.484993) * fVar37 - 12.930046) * fVar37 + 3.447074) * fVar37 +
                            0.07175691) * fVar22;
                pfVar3[3] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) * fVar25 +
                               34.484993) * fVar25 - 12.930046) * fVar25 + 3.447074) * fVar25 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) * fVar38 +
                               34.484993) * fVar38 - 12.930046) * fVar38 + 3.447074) * fVar38 +
                            0.07175691) * fVar35;
              } while (iVar13 + 8U < (uVar8 & 0xfffffff8));
            }
          }
          uVar17 = (uint)uVar14;
          if (uVar17 < uVar8) {
            uVar18 = uVar14;
            if (3 < uVar8 - uVar17) {
              pfVar9 = (float *)(puVar2 + uVar14 + 2);
              uVar18 = uVar14 + (ulonglong)((((uVar8 - 3) - uVar17) - 1 >> 2) + 1) * 4;
              do {
                iVar13 = (int)uVar14;
                fVar41 = (float)(*puVar1 - iVar13) * fVar40;
                fVar22 = 1.0 - fVar41;
                pfVar9[-2] = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41 +
                                34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41 +
                             0.07175691) * fVar4 +
                             ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                             0.07175691) * pfVar9[-2];
                fVar41 = (float)((*puVar1 - iVar13) - 1) * fVar40;
                fVar22 = 1.0 - fVar41;
                pfVar9[-1] = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41 +
                                34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41 +
                             0.07175691) * fVar4 +
                             ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                             0.07175691) * pfVar9[-1];
                fVar41 = (float)((*puVar1 - iVar13) - 2) * fVar40;
                fVar22 = 1.0 - fVar41;
                *pfVar9 = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41 +
                             34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41 +
                          0.07175691) * fVar4 +
                          ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                             34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                          0.07175691) * *pfVar9;
                uVar17 = iVar13 + 4;
                uVar14 = (ulonglong)uVar17;
                fVar41 = (float)((*puVar1 - iVar13) - 3) * fVar40;
                fVar22 = 1.0 - fVar41;
                pfVar9[1] = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41 +
                               34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41 +
                            0.07175691) * fVar4 +
                            ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                               34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                            0.07175691) * pfVar9[1];
                pfVar9 = pfVar9 + 4;
              } while (uVar17 < uVar8 - 3);
              if (uVar8 <= uVar17) goto LAB_144d59b2c;
            }
            pfVar9 = (float *)(puVar2 + uVar18);
            do {
              iVar13 = (int)uVar14;
              uVar17 = iVar13 + 1;
              uVar14 = (ulonglong)uVar17;
              fVar41 = (float)(*puVar1 - iVar13) * fVar40;
              fVar22 = 1.0 - fVar41;
              *pfVar9 = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41 +
                           34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41 +
                        0.07175691) * fVar4 +
                        ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                           34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                        0.07175691) * *pfVar9;
              pfVar9 = pfVar9 + 1;
            } while (uVar17 < uVar8);
          }
        }
      }
LAB_144d59b2c:
      uVar20 = uVar20 + 1;
      pfVar10 = pfVar10 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
LAB_144d59b4d:
  if (param_6 != '\0') {
    uVar17 = 0;
    uVar24 = *param_4;
    if (*(uint *)(param_1 + 0x40) <= *param_4) {
      uVar24 = *(uint *)(param_1 + 0x40);
    }
    uVar20 = uVar16;
    uVar15 = uVar16;
    if (uVar24 != 0) {
      do {
        uVar28 = (uint)uVar15;
        if (*(uint *)(param_1 + 0x40) != 0) {
          uVar15 = uVar16;
LAB_144d59ba7:
          if (*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar15 * 8) !=
              **(longlong **)(*(longlong *)(param_4 + 4) + uVar20)) goto code_r0x000144d59baf;
          if ((int)uVar15 != -1) {
            uVar5 = *(ushort *)
                     ((longlong)*(undefined8 **)(*(longlong *)(param_4 + 2) + uVar20) + 0x12);
            puVar2 = (uint *)**(undefined8 **)(*(longlong *)(param_4 + 2) + uVar20);
            fVar4 = *(float *)(*(longlong *)(param_1 + 0x58) + uVar15 * 4);
            if (uVar5 != 0) {
              fVar40 = 1.0 / (float)*(uint *)(param_1 + 0x38);
              uVar7 = (uint)uVar5;
              if (uVar7 < uVar8) {
                fVar41 = 1.0 / (float)uVar5;
                if (uVar7 != 0) {
                  uVar29 = (uint)uVar5;
                  uVar15 = uVar16;
                  if (7 < uVar7) {
                    uVar7 = *puVar1;
                    if ((puVar1 < puVar2) || (uVar15 = 0, puVar2 + (uVar5 - 1) < puVar1)) {
                      uVar15 = uVar16;
                      do {
                        uVar32 = (uint)uVar15;
                        uVar31 = uVar32 + 1;
                        uVar30 = uVar32 + 2;
                        uVar33 = uVar32 + 3;
                        fVar36 = (1.0 - ((float)(uVar32 >> 8) * 256.0 + (float)(uVar32 & 0xff)) *
                                        fVar41) *
                                 ((float)(uVar7 - uVar32 >> 8) * 256.0 +
                                 (float)(uVar7 - uVar32 & 0xff)) * fVar40;
                        fVar37 = (1.0 - ((float)(uVar31 >> 8) * 256.0 + (float)(uVar31 & 0xff)) *
                                        fVar41) *
                                 ((float)(uVar7 - uVar31 >> 8) * 256.0 +
                                 (float)(uVar7 - uVar31 & 0xff)) * fVar40;
                        fVar38 = (1.0 - ((float)(uVar30 >> 8) * 256.0 + (float)(uVar30 & 0xff)) *
                                        fVar41) *
                                 ((float)(uVar7 - uVar30 >> 8) * 256.0 +
                                 (float)(uVar7 - uVar30 & 0xff)) * fVar40;
                        fVar39 = (1.0 - ((float)(uVar33 >> 8) * 256.0 + (float)(uVar33 & 0xff)) *
                                        fVar41) *
                                 ((float)(uVar7 - uVar33 >> 8) * 256.0 +
                                 (float)(uVar7 - uVar33 & 0xff)) * fVar40;
                        fVar21 = 1.0 - fVar36;
                        fVar23 = 1.0 - fVar37;
                        fVar25 = 1.0 - fVar38;
                        fVar26 = 1.0 - fVar39;
                        pfVar10 = (float *)(puVar2 + uVar15);
                        fVar22 = pfVar10[1];
                        fVar35 = pfVar10[2];
                        fVar27 = pfVar10[3];
                        pfVar9 = (float *)(puVar2 + uVar15);
                        *pfVar9 = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21
                                     + 34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) *
                                   fVar21 + 0.07175691) * *pfVar10 +
                                  ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36
                                     + 34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) *
                                   fVar36 + 0.07175691) * fVar4;
                        pfVar9[1] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) *
                                        fVar23 + 34.484993) * fVar23 - 12.930046) * fVar23 +
                                     3.447074) * fVar23 + 0.07175691) * fVar22 +
                                    ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) *
                                        fVar37 + 34.484993) * fVar37 - 12.930046) * fVar37 +
                                     3.447074) * fVar37 + 0.07175691) * fVar4;
                        pfVar9[2] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) *
                                        fVar25 + 34.484993) * fVar25 - 12.930046) * fVar25 +
                                     3.447074) * fVar25 + 0.07175691) * fVar35 +
                                    ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) *
                                        fVar38 + 34.484993) * fVar38 - 12.930046) * fVar38 +
                                     3.447074) * fVar38 + 0.07175691) * fVar4;
                        pfVar9[3] = ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) *
                                        fVar26 + 34.484993) * fVar26 - 12.930046) * fVar26 +
                                     3.447074) * fVar26 + 0.07175691) * fVar27 +
                                    ((((((37.939247 - fVar39 * 11.209858) * fVar39 - 50.8083) *
                                        fVar39 + 34.484993) * fVar39 - 12.930046) * fVar39 +
                                     3.447074) * fVar39 + 0.07175691) * fVar4;
                        uVar31 = uVar32 + 4;
                        uVar30 = uVar32 + 5;
                        uVar33 = uVar32 + 6;
                        uVar34 = uVar32 + 7;
                        uVar15 = (ulonglong)(uVar32 + 8);
                        fVar21 = (1.0 - ((float)(uVar31 >> 8) * 256.0 + (float)(uVar31 & 0xff)) *
                                        fVar41) *
                                 ((float)(uVar7 - uVar31 >> 8) * 256.0 +
                                 (float)(uVar7 - uVar31 & 0xff)) * fVar40;
                        fVar23 = (1.0 - ((float)(uVar30 >> 8) * 256.0 + (float)(uVar30 & 0xff)) *
                                        fVar41) *
                                 ((float)(uVar7 - uVar30 >> 8) * 256.0 +
                                 (float)(uVar7 - uVar30 & 0xff)) * fVar40;
                        fVar25 = (1.0 - ((float)(uVar33 >> 8) * 256.0 + (float)(uVar33 & 0xff)) *
                                        fVar41) *
                                 ((float)(uVar7 - uVar33 >> 8) * 256.0 +
                                 (float)(uVar7 - uVar33 & 0xff)) * fVar40;
                        fVar26 = (1.0 - ((float)(uVar34 >> 8) * 256.0 + (float)(uVar34 & 0xff)) *
                                        fVar41) *
                                 ((float)(uVar7 - uVar34 >> 8) * 256.0 +
                                 (float)(uVar7 - uVar34 & 0xff)) * fVar40;
                        fVar36 = 1.0 - fVar21;
                        fVar37 = 1.0 - fVar23;
                        fVar38 = 1.0 - fVar25;
                        fVar39 = 1.0 - fVar26;
                        pfVar10 = (float *)(puVar2 + uVar31);
                        fVar22 = pfVar10[1];
                        fVar35 = pfVar10[2];
                        fVar27 = pfVar10[3];
                        pfVar9 = (float *)(puVar2 + uVar31);
                        *pfVar9 = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21
                                     + 34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) *
                                   fVar21 + 0.07175691) * fVar4 +
                                  ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36
                                     + 34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) *
                                   fVar36 + 0.07175691) * *pfVar10;
                        pfVar9[1] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) *
                                        fVar23 + 34.484993) * fVar23 - 12.930046) * fVar23 +
                                     3.447074) * fVar23 + 0.07175691) * fVar4 +
                                    ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) *
                                        fVar37 + 34.484993) * fVar37 - 12.930046) * fVar37 +
                                     3.447074) * fVar37 + 0.07175691) * fVar22;
                        pfVar9[2] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) *
                                        fVar25 + 34.484993) * fVar25 - 12.930046) * fVar25 +
                                     3.447074) * fVar25 + 0.07175691) * fVar4 +
                                    ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) *
                                        fVar38 + 34.484993) * fVar38 - 12.930046) * fVar38 +
                                     3.447074) * fVar38 + 0.07175691) * fVar35;
                        pfVar9[3] = ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) *
                                        fVar26 + 34.484993) * fVar26 - 12.930046) * fVar26 +
                                     3.447074) * fVar26 + 0.07175691) * fVar4 +
                                    ((((((37.939247 - fVar39 * 11.209858) * fVar39 - 50.8083) *
                                        fVar39 + 34.484993) * fVar39 - 12.930046) * fVar39 +
                                     3.447074) * fVar39 + 0.07175691) * fVar27;
                      } while (uVar32 + 8 < (uVar29 & 0xfffffff8));
                    }
                  }
                  uVar7 = (uint)uVar15;
                  if (uVar7 < uVar29) {
                    uVar14 = uVar15;
                    if (3 < uVar29 - uVar7) {
                      pfVar10 = (float *)(puVar2 + uVar15 + 2);
                      uVar14 = uVar15 + (ulonglong)((((uVar5 - 3) - uVar7) - 1 >> 2) + 1) * 4;
                      do {
                        iVar13 = (int)uVar15;
                        fVar22 = (1.0 - (float)uVar15 * fVar41) * (float)(*puVar1 - iVar13) * fVar40
                        ;
                        fVar35 = 1.0 - fVar22;
                        pfVar10[-2] = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) *
                                          fVar22 + 34.484993) * fVar22 - 12.930046) * fVar22 +
                                       3.447074) * fVar22 + 0.07175691) * fVar4 +
                                      ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) *
                                          fVar35 + 34.484993) * fVar35 - 12.930046) * fVar35 +
                                       3.447074) * fVar35 + 0.07175691) * pfVar10[-2];
                        fVar22 = (1.0 - (float)(iVar13 + 1) * fVar41) *
                                 (float)((*puVar1 - iVar13) - 1) * fVar40;
                        fVar35 = 1.0 - fVar22;
                        pfVar10[-1] = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) *
                                          fVar22 + 34.484993) * fVar22 - 12.930046) * fVar22 +
                                       3.447074) * fVar22 + 0.07175691) * fVar4 +
                                      ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) *
                                          fVar35 + 34.484993) * fVar35 - 12.930046) * fVar35 +
                                       3.447074) * fVar35 + 0.07175691) * pfVar10[-1];
                        fVar22 = (1.0 - (float)(iVar13 + 2) * fVar41) *
                                 (float)((*puVar1 - iVar13) - 2) * fVar40;
                        fVar35 = 1.0 - fVar22;
                        *pfVar10 = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) *
                                       fVar22 + 34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074
                                    ) * fVar22 + 0.07175691) * fVar4 +
                                   ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) *
                                       fVar35 + 34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074
                                    ) * fVar35 + 0.07175691) * *pfVar10;
                        fVar22 = (1.0 - (float)(iVar13 + 3) * fVar41) *
                                 (float)((*puVar1 - iVar13) - 3) * fVar40;
                        fVar35 = 1.0 - fVar22;
                        uVar7 = iVar13 + 4;
                        uVar15 = (ulonglong)uVar7;
                        pfVar10[1] = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) *
                                         fVar22 + 34.484993) * fVar22 - 12.930046) * fVar22 +
                                      3.447074) * fVar22 + 0.07175691) * fVar4 +
                                     ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) *
                                         fVar35 + 34.484993) * fVar35 - 12.930046) * fVar35 +
                                      3.447074) * fVar35 + 0.07175691) * pfVar10[1];
                        pfVar10 = pfVar10 + 4;
                      } while (uVar7 < uVar5 - 3);
                      uVar28 = uVar17;
                      if (uVar29 <= uVar7) goto LAB_144d5a924;
                    }
                    pfVar10 = (float *)(puVar2 + uVar14);
                    do {
                      iVar13 = (int)uVar15;
                      fVar22 = (float)uVar15;
                      uVar17 = iVar13 + 1;
                      uVar15 = (ulonglong)uVar17;
                      fVar22 = (1.0 - fVar22 * fVar41) * (float)(*puVar1 - iVar13) * fVar40;
                      fVar35 = 1.0 - fVar22;
                      *pfVar10 = ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22
                                    + 34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22
                                 + 0.07175691) * fVar4 +
                                 ((((((37.939247 - fVar35 * 11.209858) * fVar35 - 50.8083) * fVar35
                                    + 34.484993) * fVar35 - 12.930046) * fVar35 + 3.447074) * fVar35
                                 + 0.07175691) * *pfVar10;
                      pfVar10 = pfVar10 + 1;
                    } while (uVar17 < uVar29);
                  }
                }
              }
              else if (uVar8 != 0) {
                uVar15 = uVar16;
                if (7 < uVar8) {
                  uVar17 = *puVar1;
                  if ((puVar1 < puVar2) || (uVar15 = 0, puVar2 + (uVar8 - 1) < puVar1)) {
                    uVar15 = uVar16;
                    do {
                      iVar13 = (int)uVar15;
                      uVar7 = uVar17 - (iVar13 + 1);
                      uVar29 = uVar17 - (iVar13 + 2);
                      uVar31 = uVar17 - (iVar13 + 3);
                      fVar27 = ((float)(uVar17 - iVar13 >> 8) * 256.0 +
                               (float)(uVar17 - iVar13 & 0xff)) * fVar40;
                      fVar21 = ((float)(uVar7 >> 8) * 256.0 + (float)(uVar7 & 0xff)) * fVar40;
                      fVar23 = ((float)(uVar29 >> 8) * 256.0 + (float)(uVar29 & 0xff)) * fVar40;
                      fVar25 = ((float)(uVar31 >> 8) * 256.0 + (float)(uVar31 & 0xff)) * fVar40;
                      fVar26 = 1.0 - fVar27;
                      fVar36 = 1.0 - fVar21;
                      fVar37 = 1.0 - fVar23;
                      fVar38 = 1.0 - fVar25;
                      pfVar10 = (float *)(puVar2 + uVar15);
                      fVar41 = pfVar10[1];
                      fVar22 = pfVar10[2];
                      fVar35 = pfVar10[3];
                      pfVar9 = (float *)(puVar2 + uVar15);
                      *pfVar9 = ((((((37.939247 - fVar27 * 11.209858) * fVar27 - 50.8083) * fVar27 +
                                   34.484993) * fVar27 - 12.930046) * fVar27 + 3.447074) * fVar27 +
                                0.07175691) * fVar4 +
                                ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) * fVar26 +
                                   34.484993) * fVar26 - 12.930046) * fVar26 + 3.447074) * fVar26 +
                                0.07175691) * *pfVar10;
                      pfVar9[1] = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21
                                     + 34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) *
                                   fVar21 + 0.07175691) * fVar4 +
                                  ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36
                                     + 34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) *
                                   fVar36 + 0.07175691) * fVar41;
                      pfVar9[2] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) * fVar23
                                     + 34.484993) * fVar23 - 12.930046) * fVar23 + 3.447074) *
                                   fVar23 + 0.07175691) * fVar4 +
                                  ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) * fVar37
                                     + 34.484993) * fVar37 - 12.930046) * fVar37 + 3.447074) *
                                   fVar37 + 0.07175691) * fVar22;
                      pfVar9[3] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) * fVar25
                                     + 34.484993) * fVar25 - 12.930046) * fVar25 + 3.447074) *
                                   fVar25 + 0.07175691) * fVar4 +
                                  ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) * fVar38
                                     + 34.484993) * fVar38 - 12.930046) * fVar38 + 3.447074) *
                                   fVar38 + 0.07175691) * fVar35;
                      uVar7 = iVar13 + 4;
                      uVar29 = uVar17 - (iVar13 + 5);
                      uVar31 = uVar17 - (iVar13 + 6);
                      uVar32 = uVar17 - (iVar13 + 7);
                      fVar27 = ((float)(uVar17 - uVar7 >> 8) * 256.0 +
                               (float)(uVar17 - uVar7 & 0xff)) * fVar40;
                      fVar21 = ((float)(uVar29 >> 8) * 256.0 + (float)(uVar29 & 0xff)) * fVar40;
                      fVar23 = ((float)(uVar31 >> 8) * 256.0 + (float)(uVar31 & 0xff)) * fVar40;
                      fVar25 = ((float)(uVar32 >> 8) * 256.0 + (float)(uVar32 & 0xff)) * fVar40;
                      fVar26 = 1.0 - fVar27;
                      fVar36 = 1.0 - fVar21;
                      fVar37 = 1.0 - fVar23;
                      fVar38 = 1.0 - fVar25;
                      uVar15 = (ulonglong)(iVar13 + 8U);
                      pfVar10 = (float *)(puVar2 + uVar7);
                      fVar41 = pfVar10[1];
                      fVar22 = pfVar10[2];
                      fVar35 = pfVar10[3];
                      pfVar9 = (float *)(puVar2 + uVar7);
                      *pfVar9 = ((((((37.939247 - fVar27 * 11.209858) * fVar27 - 50.8083) * fVar27 +
                                   34.484993) * fVar27 - 12.930046) * fVar27 + 3.447074) * fVar27 +
                                0.07175691) * fVar4 +
                                ((((((37.939247 - fVar26 * 11.209858) * fVar26 - 50.8083) * fVar26 +
                                   34.484993) * fVar26 - 12.930046) * fVar26 + 3.447074) * fVar26 +
                                0.07175691) * *pfVar10;
                      pfVar9[1] = ((((((37.939247 - fVar21 * 11.209858) * fVar21 - 50.8083) * fVar21
                                     + 34.484993) * fVar21 - 12.930046) * fVar21 + 3.447074) *
                                   fVar21 + 0.07175691) * fVar4 +
                                  ((((((37.939247 - fVar36 * 11.209858) * fVar36 - 50.8083) * fVar36
                                     + 34.484993) * fVar36 - 12.930046) * fVar36 + 3.447074) *
                                   fVar36 + 0.07175691) * fVar41;
                      pfVar9[2] = ((((((37.939247 - fVar23 * 11.209858) * fVar23 - 50.8083) * fVar23
                                     + 34.484993) * fVar23 - 12.930046) * fVar23 + 3.447074) *
                                   fVar23 + 0.07175691) * fVar4 +
                                  ((((((37.939247 - fVar37 * 11.209858) * fVar37 - 50.8083) * fVar37
                                     + 34.484993) * fVar37 - 12.930046) * fVar37 + 3.447074) *
                                   fVar37 + 0.07175691) * fVar22;
                      pfVar9[3] = ((((((37.939247 - fVar25 * 11.209858) * fVar25 - 50.8083) * fVar25
                                     + 34.484993) * fVar25 - 12.930046) * fVar25 + 3.447074) *
                                   fVar25 + 0.07175691) * fVar4 +
                                  ((((((37.939247 - fVar38 * 11.209858) * fVar38 - 50.8083) * fVar38
                                     + 34.484993) * fVar38 - 12.930046) * fVar38 + 3.447074) *
                                   fVar38 + 0.07175691) * fVar35;
                    } while (iVar13 + 8U < (uVar8 & 0xfffffff8));
                  }
                }
                uVar17 = (uint)uVar15;
                if (uVar17 < uVar8) {
                  uVar14 = uVar15;
                  if (3 < uVar8 - uVar17) {
                    pfVar10 = (float *)(puVar2 + uVar15 + 2);
                    uVar14 = uVar15 + (ulonglong)((((uVar8 - 3) - uVar17) - 1 >> 2) + 1) * 4;
                    do {
                      iVar13 = (int)uVar15;
                      fVar41 = (float)(*puVar1 - iVar13) * fVar40;
                      fVar22 = 1.0 - fVar41;
                      pfVar10[-2] = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) *
                                        fVar41 + 34.484993) * fVar41 - 12.930046) * fVar41 +
                                     3.447074) * fVar41 + 0.07175691) * fVar4 +
                                    ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) *
                                        fVar22 + 34.484993) * fVar22 - 12.930046) * fVar22 +
                                     3.447074) * fVar22 + 0.07175691) * pfVar10[-2];
                      fVar41 = (float)((*puVar1 - iVar13) - 1) * fVar40;
                      fVar22 = 1.0 - fVar41;
                      pfVar10[-1] = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) *
                                        fVar41 + 34.484993) * fVar41 - 12.930046) * fVar41 +
                                     3.447074) * fVar41 + 0.07175691) * fVar4 +
                                    ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) *
                                        fVar22 + 34.484993) * fVar22 - 12.930046) * fVar22 +
                                     3.447074) * fVar22 + 0.07175691) * pfVar10[-1];
                      fVar41 = (float)((*puVar1 - iVar13) - 2) * fVar40;
                      fVar22 = 1.0 - fVar41;
                      *pfVar10 = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41
                                    + 34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41
                                 + 0.07175691) * fVar4 +
                                 ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22
                                    + 34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22
                                 + 0.07175691) * *pfVar10;
                      uVar17 = iVar13 + 4;
                      uVar15 = (ulonglong)uVar17;
                      fVar41 = (float)((*puVar1 - iVar13) - 3) * fVar40;
                      fVar22 = 1.0 - fVar41;
                      pfVar10[1] = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) *
                                       fVar41 + 34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074
                                    ) * fVar41 + 0.07175691) * fVar4 +
                                   ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) *
                                       fVar22 + 34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074
                                    ) * fVar22 + 0.07175691) * pfVar10[1];
                      pfVar10 = pfVar10 + 4;
                    } while (uVar17 < uVar8 - 3);
                    if (uVar8 <= uVar17) goto LAB_144d5a924;
                  }
                  pfVar10 = (float *)(puVar2 + uVar14);
                  do {
                    iVar13 = (int)uVar15;
                    uVar17 = iVar13 + 1;
                    uVar15 = (ulonglong)uVar17;
                    fVar41 = (float)(*puVar1 - iVar13) * fVar40;
                    fVar22 = 1.0 - fVar41;
                    *pfVar10 = ((((((37.939247 - fVar41 * 11.209858) * fVar41 - 50.8083) * fVar41 +
                                  34.484993) * fVar41 - 12.930046) * fVar41 + 3.447074) * fVar41 +
                               0.07175691) * fVar4 +
                               ((((((37.939247 - fVar22 * 11.209858) * fVar22 - 50.8083) * fVar22 +
                                  34.484993) * fVar22 - 12.930046) * fVar22 + 3.447074) * fVar22 +
                               0.07175691) * *pfVar10;
                    pfVar10 = pfVar10 + 1;
                  } while (uVar17 < uVar8);
                }
              }
            }
          }
        }
LAB_144d5a924:
        uVar17 = uVar28 + 1;
        uVar20 = uVar20 + 8;
        uVar15 = (ulonglong)uVar17;
      } while (uVar17 < uVar24);
    }
  }
  *puVar1 = *puVar1 - uVar8;
  return;
code_r0x000144d59baf:
  uVar7 = (int)uVar15 + 1;
  uVar15 = (ulonglong)uVar7;
  if (*(uint *)(param_1 + 0x40) <= uVar7) goto LAB_144d5a924;
  goto LAB_144d59ba7;
}



// FUNCTION 144d5ad10 FUN_144d5ad10 body=377 status=ok
// SIG undefined FUN_144d5ad10(void)

undefined8 FUN_144d5ad10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  uVar11 = (ulonglong)*(uint *)(param_1 + 2);
  iVar6 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar6 = 1;
  }
  plVar4 = (longlong *)*param_1;
  lVar10 = (ulonglong)(iVar6 + uVar3) * 0x68;
  if (param_1[1] == 0) {
    lVar10 = (**(code **)(*plVar4 + 8))
                       (plVar4,lVar10,
                        "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                        ,0xcc);
    if (lVar10 != 0) {
      if ((param_1[1] != 0) && (param_1[1] != lVar10)) {
        if (uVar11 != 0) {
          lVar7 = -lVar10;
          puVar9 = (undefined8 *)(lVar10 + 0x58);
          do {
            puVar2 = puVar9 + -0xb;
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = 0;
              puVar9[-10] = 0;
              puVar9[-9] = 0;
              puVar9[-8] = 0;
              puVar9[-7] = 0;
              puVar9[-6] = 0;
              puVar9[-5] = 0;
              puVar9[-4] = 0x200;
              *(undefined4 *)(puVar9 + -3) = 0;
              puVar9[-2] = 0;
              puVar9[-1] = 0;
              *puVar9 = 0;
              *(undefined4 *)(puVar9 + 1) = 0;
            }
            lVar5 = param_1[1];
            puVar1 = (undefined8 *)((longlong)puVar9 + lVar5 + lVar7 + -0x58);
            uVar8 = puVar1[1];
            *puVar2 = *puVar1;
            puVar9[-10] = uVar8;
            puVar2 = (undefined8 *)((longlong)puVar9 + lVar5 + lVar7 + -0x48);
            uVar8 = puVar2[1];
            puVar9[-9] = *puVar2;
            puVar9[-8] = uVar8;
            puVar2 = (undefined8 *)((longlong)puVar9 + lVar5 + lVar7 + -0x38);
            uVar8 = puVar2[1];
            puVar9[-7] = *puVar2;
            puVar9[-6] = uVar8;
            puVar2 = (undefined8 *)((longlong)puVar9 + lVar5 + lVar7 + -0x28);
            uVar8 = puVar2[1];
            puVar9[-5] = *puVar2;
            puVar9[-4] = uVar8;
            puVar2 = (undefined8 *)((longlong)puVar9 + lVar5 + lVar7 + -0x18);
            uVar8 = puVar2[1];
            puVar9[-3] = *puVar2;
            puVar9[-2] = uVar8;
            puVar2 = (undefined8 *)((longlong)puVar9 + lVar5 + lVar7 + -8);
            uVar8 = puVar2[1];
            puVar9[-1] = *puVar2;
            *puVar9 = uVar8;
            puVar9[1] = *(undefined8 *)((longlong)puVar9 + lVar5 + lVar7 + 8);
            uVar11 = uVar11 - 1;
            puVar9 = puVar9 + 0xd;
          } while (uVar11 != 0);
        }
        (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,param_1[1]);
      }
      goto LAB_144d5ae6b;
    }
  }
  else {
    lVar10 = (**(code **)(*plVar4 + 0x20))
                       (plVar4,param_1[1],lVar10,
                        "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                        ,0xcd);
    if (lVar10 != 0) {
LAB_144d5ae6b:
      param_1[1] = lVar10;
      *(uint *)((longlong)param_1 + 0x14) = iVar6 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144d5ae90 FUN_144d5ae90 body=375 status=ok
// SIG undefined FUN_144d5ae90(void)

void FUN_144d5ae90(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar3;
  
  if (param_2 != 1) {
    if (param_2 == 0x80) {
      uVar3 = 0;
      lVar1 = DAT_14c7916d8;
      uVar5 = DAT_14c7916e0;
      if (DAT_14c7916e0 != 0) {
        do {
          lVar4 = uVar3 * 0x68 + lVar1;
          if (*(longlong *)(lVar4 + 0x58) != 0) {
            (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x10))
                      (*(longlong **)(lVar4 + 0x48),*(longlong *)(lVar4 + 0x58));
            (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x10))
                      (*(longlong **)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x50));
            *(undefined8 *)(lVar4 + 0x58) = 0;
            *(undefined8 *)(lVar4 + 0x50) = 0;
            *(undefined8 *)(lVar4 + 0x48) = 0;
            lVar1 = DAT_14c7916d8;
            uVar5 = DAT_14c7916e0;
          }
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < uVar5);
      }
      if (lVar1 != 0) {
        DAT_14c7916e0 = 0;
        (**(code **)(*DAT_14c7916d0 + 0x10))();
        DAT_14c7916d8 = 0;
        DAT_14c7916e4 = 0;
      }
      if (DAT_14c7916a8 != 0) {
        DAT_14c7916b0 = 0;
        (**(code **)(*DAT_14c7916a0 + 0x10))();
        DAT_14c7916a8 = 0;
        DAT_14c7916b4 = 0;
      }
      if (DAT_14c7916c0 != 0) {
        DAT_14c7916c8 = 0;
        (**(code **)(*DAT_14c7916b8 + 0x10))();
        DAT_14c7916c0 = 0;
        DAT_14c7916cc = 0;
      }
      (**(code **)(*param_1 + 0x48))(param_1,FUN_144d5ae90,0x80);
    }
    return;
  }
  (**(code **)(*param_1 + 0x40))(param_1,0x144d5ae03,0,0xba,FUN_144d5ae90,0x80,0);
  return;
}



// FUNCTION 144d5b010 FUN_144d5b010 body=199 status=ok
// SIG undefined FUN_144d5b010(void)

undefined8 * FUN_144d5b010(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x428,
                      "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFX.cpp"
                      ,0x279);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)puVar1 + 0x3e4) = 4;
    *puVar1 = &PTR_FUN_1499d1c78;
    *(undefined1 *)(puVar1 + 0x7c) = 0;
    *(uint *)(puVar1 + 0x7c) = *(uint *)(puVar1 + 0x7c) & 0xff;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x3ec) = 0;
    *(undefined4 *)(puVar1 + 0x7e) = 0;
    puVar1[0x7f] = 0;
    puVar1[0x80] = 0;
    puVar1[0x81] = 0;
    puVar1[0x83] = 0;
    puVar1[0x84] = 0;
    *(undefined2 *)(puVar1 + 0x82) = 1;
    DAT_14c791670 = DAT_14c791670 + 1;
    *(int *)(puVar1 + 1) = DAT_14c791670;
    *(undefined4 *)(puVar1 + 6) = 3;
    *(undefined4 *)(puVar1 + 0x4e) = 4;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144d5b0e0 FUN_144d5b0e0 body=50 status=ok
// SIG undefined FUN_144d5b0e0(void)

void FUN_144d5b0e0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))
                    (param_1,0x198,
                     "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFX.cpp"
                     ,0x27e);
  if (lVar1 != 0) {
    FUN_14512dc30(lVar1);
    return;
  }
  return;
}



// FUNCTION 144d5b120 FUN_144d5b120 body=862 status=ok
// SIG undefined FUN_144d5b120(void)

undefined8
FUN_144d5b120(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char cStack_9b;
  char cStack_87;
  char cStack_6b;
  char cStack_53;
  char cStack_47;
  char cStack_37;
  
  *(longlong *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar12 = *(undefined8 *)(param_4 + 0x20);
  uVar6 = *(undefined8 *)(param_4 + 0x30);
  uVar7 = *(undefined8 *)(param_4 + 0x48);
  uVar8 = *(undefined8 *)(param_4 + 0x60);
  uVar11 = *(undefined4 *)(param_4 + 0x88);
  uVar9 = *(undefined8 *)(param_4 + 0x78);
  uVar2 = *(undefined4 *)(param_4 + 0x98);
  uVar3 = *(undefined4 *)(param_4 + 0x9c);
  uVar4 = *(undefined4 *)(param_4 + 0xa0);
  uVar5 = *(undefined4 *)(param_4 + 0xa4);
  *(undefined4 *)(param_1 + 0x20) = *param_5;
  uVar1 = *(undefined1 *)(param_5 + 1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((char)((ulonglong)uVar12 >> 8) != '\0') {
    uVar10 = FUN_145139460(param_1 + 0x120,uVar1);
    uVar12 = FUN_145138f20(param_1 + 0x40,param_2,uVar10);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_145139470(param_1 + 0x120,param_1 + 0x40,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_9b = (char)((ulonglong)uVar6 >> 0x28);
  if (cStack_9b != '\0') {
    uVar10 = FUN_145139b70(param_1 + 0x138,uVar1);
    uVar12 = FUN_145138f20(param_1 + 0x60,param_2,uVar10);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_145139b80(param_1 + 0x138,param_1 + 0x60,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_87 = (char)((ulonglong)uVar7 >> 8);
  if (cStack_87 != '\0') {
    uVar10 = FUN_14513a6b0(param_1 + 0x148,uVar1);
    uVar12 = FUN_145138f20(param_1 + 0x80,param_2,uVar10);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_14513a6c0(param_1 + 0x148,param_1 + 0x80,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_6b = (char)((ulonglong)uVar8 >> 0x28);
  if (cStack_6b != '\0') {
    uVar10 = FUN_14513a8e0(param_1 + 0x160,uVar1);
    uVar12 = FUN_145138f20(param_1 + 0xa0,param_2,uVar10);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_14513a8f0(param_1 + 0x160,param_1 + 0xa0,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_53 = (char)((ulonglong)uVar9 >> 0x28);
  if (cStack_53 != '\0') {
    uVar10 = FUN_14513b190(param_1 + 0x188,uVar1);
    uVar12 = FUN_145138f20(param_1 + 0xe0,param_2,uVar10);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_14513b1a0(param_1 + 0x188,param_1 + 0xe0,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_47 = (char)((uint)uVar11 >> 8);
  if (cStack_47 != '\0') {
    uVar11 = FUN_14513b510(param_1 + 0x170,uVar1);
    uVar12 = FUN_145138f20(param_1 + 0xc0,param_2,uVar11);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_14513b520(param_1 + 0x170,param_1 + 0xc0,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_37 = (char)((uint)uVar2 >> 8);
  if (cStack_37 != '\0') {
    uVar11 = FUN_14513c2d0(param_1 + 0x198,uVar1);
    uVar12 = FUN_145138f20(param_1 + 0x100,param_2,uVar11);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_14513c2e0(param_1 + 0x198,param_1 + 0x100,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  return 1;
}



// FUNCTION 144d5b480 FUN_144d5b480 body=155 status=ok
// SIG undefined FUN_144d5b480(void)

undefined8 FUN_144d5b480(undefined8 *param_1,longlong *param_2)

{
  FUN_145138fa0(param_1 + 8);
  FUN_145138fa0(param_1 + 0xc,param_2);
  FUN_145138fa0(param_1 + 0x10,param_2);
  FUN_145138fa0(param_1 + 0x14,param_2);
  FUN_145138fa0(param_1 + 0x18,param_2);
  FUN_145138fa0(param_1 + 0x1c,param_2);
  FUN_145138fa0(param_1 + 0x20,param_2);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 144d5b550 FUN_144d5b550 body=1802 status=ok
// SIG undefined FUN_144d5b550(void)

void FUN_144d5b550(longlong param_1,longlong *param_2)

{
  float *_Src;
  float *pfVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  uint uVar9;
  void *_Dst;
  uint uVar10;
  int iVar11;
  size_t _Size;
  float *pfVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
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
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 local_e8;
  
  lVar13 = *(longlong *)(param_1 + 8);
  local_188 = *(undefined8 *)(lVar13 + 8);
  uStack_180 = *(undefined8 *)(lVar13 + 0x10);
  local_178 = *(undefined8 *)(lVar13 + 0x18);
  uStack_170 = *(undefined8 *)(lVar13 + 0x20);
  local_168 = *(undefined8 *)(lVar13 + 0x28);
  uStack_160 = *(undefined8 *)(lVar13 + 0x30);
  local_158 = *(undefined8 *)(lVar13 + 0x38);
  uStack_150 = *(undefined8 *)(lVar13 + 0x40);
  local_148 = *(undefined8 *)(lVar13 + 0x48);
  uStack_140 = *(undefined8 *)(lVar13 + 0x50);
  local_138 = *(undefined8 *)(lVar13 + 0x58);
  uStack_130 = *(undefined8 *)(lVar13 + 0x60);
  local_128 = *(undefined8 *)(lVar13 + 0x68);
  uStack_120 = *(undefined8 *)(lVar13 + 0x70);
  local_108 = *(undefined4 *)(lVar13 + 0x88);
  uStack_104 = *(undefined4 *)(lVar13 + 0x8c);
  uStack_100 = *(undefined4 *)(lVar13 + 0x90);
  uStack_fc = *(undefined4 *)(lVar13 + 0x94);
  local_118 = *(undefined8 *)(lVar13 + 0x78);
  uStack_110 = *(undefined8 *)(lVar13 + 0x80);
  local_f8 = *(undefined4 *)(lVar13 + 0x98);
  fStack_f4 = *(float *)(lVar13 + 0x9c);
  fStack_f0 = *(float *)(lVar13 + 0xa0);
  fStack_ec = *(float *)(lVar13 + 0xa4);
  local_e8 = *(undefined4 *)(lVar13 + 0xa8);
  FUN_144d5bc70(local_f8,&local_188);
  lVar13 = *(longlong *)(param_1 + 8);
  lVar16 = 0;
  *(undefined1 *)(lVar13 + 0x20) = 0;
  *(undefined1 *)(lVar13 + 0x34) = 0;
  *(undefined1 *)(lVar13 + 0x48) = 0;
  *(undefined1 *)(lVar13 + 100) = 0;
  *(undefined1 *)(lVar13 + 0x7c) = 0;
  *(undefined1 *)(lVar13 + 0x88) = 0;
  *(undefined1 *)(lVar13 + 0x98) = 0;
  *(undefined1 *)(lVar13 + 0xa8) = 0;
  uVar9 = *(uint *)(param_1 + 0x38);
  if (*(int *)((longlong)param_2 + 0xc) != 0x11) {
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    goto LAB_144d5b72e;
  }
  uVar15 = *(uint *)(param_1 + 0x30);
  if (uVar15 == 0) {
    if (*(short *)((longlong)param_2 + 0x12) == 0) goto LAB_144d5b72e;
LAB_144d5b649:
    *(uint *)(param_1 + 0x30) = uVar9;
    uVar15 = uVar9;
LAB_144d5b652:
    *(uint *)(param_1 + 0x34) = uVar9;
  }
  else {
    if ((uVar15 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) goto LAB_144d5b649;
    if (*(uint *)(param_1 + 0x34) < uVar9) {
      uVar15 = (uVar15 - *(uint *)(param_1 + 0x34)) + uVar9;
      *(uint *)(param_1 + 0x30) = uVar15;
      goto LAB_144d5b652;
    }
  }
  uVar10 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar9 = uVar15;
  if (uVar10 <= uVar15) {
    uVar9 = uVar10;
  }
  *(uint *)(param_1 + 0x30) = uVar15 - uVar9;
  uVar4 = *(ushort *)(param_2 + 2);
  uVar8 = *(ushort *)((longlong)param_2 + 0x12);
  uVar14 = (ulonglong)*(byte *)(param_2 + 1);
  if (uVar4 <= uVar8) {
    uVar8 = uVar4;
  }
  iVar11 = (uint)uVar4 - (uint)uVar8;
  if (iVar11 != 0) {
    if (*(byte *)(param_2 + 1) != 0) {
      lVar13 = lVar16;
      do {
        memset((void *)(*param_2 +
                       ((ulonglong)*(ushort *)(param_2 + 2) * lVar13 + (ulonglong)(uint)uVar8) * 4),
               0,(ulonglong)(uint)(iVar11 * 4));
        lVar13 = lVar13 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    *(short *)((longlong)param_2 + 0x12) = (short)param_2[2];
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  }
LAB_144d5b72e:
  uVar4 = *(ushort *)((longlong)param_2 + 0x12);
  if (uVar4 != 0) {
    bVar3 = *(byte *)(param_2 + 1);
    uVar14 = (ulonglong)bVar3;
    _Size = (ulonglong)*(ushort *)(param_2 + 2) << 2;
    _Dst = (void *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                             (*(longlong **)(param_1 + 0x10),_Size,
                              "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\Partners\\McDSP\\McDSPFutzBox\\SoundEnginePlugin\\McDSPFutzBoxFX.cpp"
                              ,0x21c);
    if (_Dst != (void *)0x0) {
      lVar13 = lVar16;
      if ((uStack_130._5_1_ == '\0') ||
         (lVar13 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                             (*(longlong **)(param_1 + 0x10),_Size,
                              "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\Partners\\McDSP\\McDSPFutzBox\\SoundEnginePlugin\\McDSPFutzBoxFX.cpp"
                              ,0x223), lVar13 != 0)) {
        fVar7 = fStack_ec;
        fVar6 = fStack_f0;
        fVar23 = *(float *)(param_1 + 0x2c) * 0.01;
        fVar24 = fStack_ec * 0.01;
        fVar2 = *(float *)(param_1 + 0x28);
        fVar25 = fVar24 * fStack_f0;
        local_res10 = FUN_145138fe0(param_1 + 0x40,0);
        local_res18 = FUN_145138fe0(param_1 + 0x60,0);
        local_res20 = FUN_145138fe0(param_1 + 0x80,0);
        local_1b8 = FUN_145138fe0(param_1 + 0xa0,0);
        local_1b0 = FUN_145138fe0(param_1 + 0xc0,0);
        local_1a8 = FUN_145138fe0(param_1 + 0xe0,0);
        local_1a0 = FUN_145138fe0(param_1 + 0x100,0);
        fVar5 = fStack_f4;
        if (bVar3 != 0) {
          do {
            fVar21 = *(float *)(param_1 + 0x24);
            _Src = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar16 * 4);
            uVar9 = (uint)uVar4;
            if (fVar5 == fVar21) {
              FUN_144d5c020(_Src,fVar21,uVar4);
            }
            else {
              pfVar1 = _Src + uVar4;
              pfVar12 = _Src;
              if (3 < uVar9) {
                fVar19 = (fVar5 - fVar21) / (float)(uVar9 & 0xfffffffc);
                fVar22 = fVar19 * 4.0;
                fVar17 = fVar19 + fVar21 + fVar19;
                fVar18 = fVar21;
                fVar20 = fVar19 + fVar21;
                fVar19 = fVar17 + fVar19;
                for (; pfVar12 < _Src + (uVar9 & 0xfffffffc); pfVar12 = pfVar12 + 4) {
                  *pfVar12 = *pfVar12 * fVar18;
                  pfVar12[1] = pfVar12[1] * fVar20;
                  pfVar12[2] = pfVar12[2] * fVar17;
                  pfVar12[3] = pfVar12[3] * fVar19;
                  fVar18 = fVar18 + fVar22;
                  fVar20 = fVar20 + fVar22;
                  fVar17 = fVar17 + fVar22;
                  fVar19 = fVar19 + fVar22;
                }
              }
              if (pfVar12 < pfVar1) {
                fVar18 = (fVar5 - fVar21) * (1.0 / (float)uVar4);
                if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar12) & 0xfffffffffffffffcU)) {
                  do {
                    *pfVar12 = fVar21 * *pfVar12;
                    fVar20 = fVar21 + fVar18 + fVar18;
                    pfVar12[1] = (fVar21 + fVar18) * pfVar12[1];
                    fVar17 = fVar20 + fVar18;
                    pfVar12[2] = fVar20 * pfVar12[2];
                    fVar21 = fVar17 + fVar18;
                    pfVar12[3] = fVar17 * pfVar12[3];
                    pfVar12 = pfVar12 + 4;
                  } while (pfVar12 < pfVar1 + -3);
                  if (pfVar1 <= pfVar12) goto LAB_144d5ba68;
                }
                do {
                  *pfVar12 = fVar21 * *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  fVar21 = fVar21 + fVar18;
                } while (pfVar12 < pfVar1);
              }
            }
LAB_144d5ba68:
            memcpy(_Dst,_Src,_Size);
            if (uStack_170._1_1_ != '\0') {
              local_res10 = FUN_1451390f0(local_res10,_Src,_Src,uVar4);
            }
            if (uStack_160._5_1_ != '\0') {
              local_res18 = FUN_145139790(local_res18,_Src,_Src,uVar4);
            }
            if (local_148._1_1_ != '\0') {
              local_res20 = FUN_14513a550(local_res20,_Src,_Src,uVar4);
            }
            if (uStack_130._5_1_ != '\0') {
              FUN_145139010(param_1 + 0x18,lVar13,uVar9);
              local_1b8 = FUN_14513a890(local_1b8,_Src,lVar13,_Src,uVar9);
            }
            if (local_108._1_1_ != '\0') {
              local_1b0 = FUN_14513b4c0(local_1b0,_Src,_Src,uVar9);
            }
            if (local_118._5_1_ != '\0') {
              local_1a8 = FUN_14513b070(local_1a8,_Src,_Src,uVar9);
            }
            if (local_f8._1_1_ != '\0') {
              local_1a0 = FUN_14513c040(local_1a0,_Src,_Src,uVar9);
            }
            FUN_14513c5e0(_Src,_Dst,fVar23 * fVar2,fVar25,1.0 - fVar23,1.0 - fVar24,uVar9);
            lVar16 = lVar16 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        *(float *)(param_1 + 0x24) = fVar5;
        *(float *)(param_1 + 0x28) = fVar6;
        *(float *)(param_1 + 0x2c) = fVar7;
        if (lVar13 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                    (*(longlong **)(param_1 + 0x10),lVar13);
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),_Dst);
    }
  }
  return;
}



// FUNCTION 144d5bc70 FUN_144d5bc70 body=702 status=ok
// SIG undefined FUN_144d5bc70(void)

void FUN_144d5bc70(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  double local_58;
  double local_50;
  undefined4 local_48;
  undefined1 local_44;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  undefined1 local_10;
  
  if ((*(char *)((longlong)param_2 + 0x19) != '\0') && (*(char *)(param_2 + 6) != '\0')) {
    local_48 = *param_2;
    iVar1 = *(int *)(param_1 + 0x130);
    local_58 = (double)(float)param_2[1];
    local_44 = 0;
    local_30._0_5_ = (uint5)(uint)param_2[3];
    local_50 = (double)(float)param_2[2];
    local_40 = (double)(float)param_2[4];
    local_38 = (double)(float)param_2[5];
    FUN_1451394d0(param_1 + 0x120,&local_40,&local_58);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x130) - iVar1);
  }
  if ((*(char *)((longlong)param_2 + 0x2d) != '\0') && (*(char *)(param_2 + 0xb) != '\0')) {
    local_40 = (double)(float)param_2[8];
    local_28._0_5_ = (uint5)(uint)param_2[7];
    local_38 = (double)(float)param_2[9];
    local_30 = (double)(float)param_2[10];
    FUN_145139bd0(param_1 + 0x138,&local_40);
  }
  if ((*(char *)((longlong)param_2 + 0x41) != '\0') && (*(char *)(param_2 + 0x10) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x158);
    local_40 = (double)(float)param_2[0xd];
    local_28._0_5_ = (uint5)(uint)param_2[0xc];
    local_38 = (double)(float)param_2[0xe];
    local_30 = (double)(float)param_2[0xf];
    FUN_14513a720(param_1 + 0x148,&local_40);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x158) - iVar1);
  }
  if ((*(char *)((longlong)param_2 + 0x5d) != '\0') && (*(char *)(param_2 + 0x17) != '\0')) {
    local_40 = (double)(float)param_2[0x11];
    local_10 = 0;
    local_38 = (double)(float)param_2[0x13];
    local_30 = (double)(float)param_2[0x12];
    local_28 = (double)(float)param_2[0x14];
    local_20 = (double)(float)param_2[0x15];
    local_18 = (double)(float)param_2[0x16];
    FUN_14513a9b0(param_1 + 0x160,&local_40);
  }
  if ((*(char *)((longlong)param_2 + 0x81) != '\0') && (*(char *)(param_2 + 0x20) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x180);
    local_38 = (double)(float)param_2[0x1f];
    local_40 = (double)CONCAT44(local_40._4_4_,param_2[0x1e]);
    local_30 = (double)((ulonglong)local_30 & 0xffffffffffffff00);
    FUN_14513b580(param_1 + 0x170,&local_40);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x180) - iVar1);
  }
  if ((*(char *)((longlong)param_2 + 0x75) != '\0') && (*(char *)(param_2 + 0x1d) != '\0')) {
    local_40 = (double)(float)param_2[0x18];
    local_18 = (double)((ulonglong)local_18 & 0xffffffffffffff00);
    local_38 = (double)(float)param_2[0x19];
    local_30 = (double)(float)param_2[0x1a];
    local_20 = (double)(float)param_2[0x1c];
    local_28 = (double)(float)param_2[0x1b];
    FUN_14513b250(param_1 + 0x188,&local_40);
  }
  if ((*(char *)((longlong)param_2 + 0x91) != '\0') && (*(char *)(param_2 + 0x24) != '\0')) {
    local_38 = (double)(float)param_2[0x23];
    local_40 = *(double *)(param_2 + 0x21);
    local_30 = (double)((ulonglong)local_30 & 0xffffffffffffff00);
    FUN_14513c330(param_1 + 0x198,&local_40);
  }
  return;
}



// FUNCTION 144d5bf30 FUN_144d5bf30 body=229 status=ok
// SIG undefined FUN_144d5bf30(void)

undefined8 * FUN_144d5bf30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1f40;
  thunk_FUN_1453ce200(param_1 + 0x33);
  thunk_FUN_1453ce200(param_1 + 0x31);
  thunk_FUN_1453ce200(param_1 + 0x2e);
  thunk_FUN_1453ce200(param_1 + 0x2c);
  thunk_FUN_1453ce200(param_1 + 0x29);
  thunk_FUN_1453ce200(param_1 + 0x27);
  thunk_FUN_1453ce200(param_1 + 0x24);
  FUN_145138f10(param_1 + 0x20);
  FUN_145138f10(param_1 + 0x1c);
  FUN_145138f10(param_1 + 0x18);
  FUN_145138f10(param_1 + 0x14);
  FUN_145138f10(param_1 + 0x10);
  FUN_145138f10(param_1 + 0xc);
  FUN_145138f10(param_1 + 8);
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 144d5c020 FUN_144d5c020 body=309 status=ok
// SIG undefined FUN_144d5c020(void)

void FUN_144d5c020(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 144d5c160 FUN_144d5c160 body=270 status=ok
// SIG undefined FUN_144d5c160(void)

undefined8 * FUN_144d5c160(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x1a8,
                      "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\Partners\\McDSP\\McDSPFutzBox\\SoundEnginePlugin\\McDSPFutzBoxFX.cpp"
                      ,0x1b);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1499d1f40;
    puVar1[1] = 0;
    FUN_145139000(puVar1 + 3);
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    FUN_145138ef0(puVar1 + 8);
    FUN_145138ef0(puVar1 + 0xc);
    FUN_145138ef0(puVar1 + 0x10);
    FUN_145138ef0(puVar1 + 0x14);
    FUN_145138ef0(puVar1 + 0x18);
    FUN_145138ef0(puVar1 + 0x1c);
    FUN_145138ef0(puVar1 + 0x20);
    FUN_145139430(puVar1 + 0x24);
    FUN_145139b40(puVar1 + 0x27);
    FUN_14513a680(puVar1 + 0x29);
    FUN_14513a8b0(puVar1 + 0x2c);
    FUN_14513b4e0(puVar1 + 0x2e);
    FUN_14513b160(puVar1 + 0x31);
    FUN_14513c2a0(puVar1 + 0x33);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144d5c270 FUN_144d5c270 body=50 status=ok
// SIG undefined FUN_144d5c270(void)

void FUN_144d5c270(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))
                    (param_1,0xb0,
                     "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\Partners\\McDSP\\McDSPFutzBox\\SoundEnginePlugin\\McDSPFutzBoxFX.cpp"
                     ,0x21);
  if (lVar1 != 0) {
    FUN_145138500(lVar1);
    return;
  }
  return;
}



// FUNCTION 144d5c2d0 FUN_144d5c2d0 body=43 status=ok
// SIG undefined FUN_144d5c2d0(void)

undefined8 * FUN_144d5c2d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1ff8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144d5c300 FUN_144d5c300 body=8 status=ok
// SIG undefined FUN_144d5c300(void)

void FUN_144d5c300(undefined8 param_1)

{
  DAT_14c7916e8 = param_1;
  return;
}



// FUNCTION 144d5c310 FUN_144d5c310 body=452 status=ok
// SIG undefined FUN_144d5c310(void)

undefined8
FUN_144d5c310(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(undefined8 *)(param_1 + 8) = param_4;
  *(longlong **)(param_1 + 0x10) = param_2;
  *(longlong **)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x30) = *param_5;
  plVar10 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  uVar7 = (**(code **)(*plVar10 + 0x10))(plVar10);
  *(uint *)(param_1 + 0x34) = (uint)uVar7;
  if (DAT_14c7916e8 != (longlong *)0x0) {
    puVar11 = (undefined8 *)
              (**(code **)(*DAT_14c7916e8 + 8))
                        (DAT_14c7916e8,local_28,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50),
                         *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),
                         *(undefined4 *)(param_1 + 0x30));
    uVar12 = *puVar11;
    uVar5 = puVar11[1];
    *puVar11 = 0;
    puVar11[1] = 0;
    plVar10 = *(longlong **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar12;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_20 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20);
        }
      }
    }
  }
  plVar10 = *(longlong **)(param_1 + 0x20);
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*param_3 + 0x40))(param_3,"Failed to load DSP instance",2);
    uVar12 = 2;
  }
  else {
    (**(code **)(*plVar10 + 0x18))(plVar10,param_1 + 0x40);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))
              (*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30));
    bVar4 = *(byte *)(param_5 + 1);
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    if ((uVar8 == bVar4) && (uVar9 == bVar4)) {
      uVar12 = (**(code **)(*param_2 + 8))
                         (param_2,(longlong)(int)uVar9 << 3,
                          "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\FaustDSP\\FaustEffectPlugin\\SoundEnginePlugin\\FaustEffectPluginFX.cpp"
                          ,0x70);
      *(undefined8 *)(param_1 + 0x38) = uVar12;
      FUN_14513d3a0(param_1 + 0x40,1);
      uVar12 = 1;
    }
    else {
      uVar12 = 2;
    }
  }
  return uVar12;
}



// FUNCTION 144d5c4e0 FUN_144d5c4e0 body=157 status=ok
// SIG undefined FUN_144d5c4e0(void)

undefined8 FUN_144d5c4e0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[7] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  plVar4 = (longlong *)param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 144d5c580 FUN_144d5c580 body=155 status=ok
// SIG undefined FUN_144d5c580(void)

undefined8 FUN_144d5c580(longlong param_1)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 2;
  }
  FUN_14513d060(param_1 + 0x40);
  FUN_14513d3a0(param_1 + 0x40,1);
  rand();
  FUN_14513d3f0(param_1 + 0x40);
  fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 8);
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(int *)(param_1 + 0x210) = (int)((float)*(int *)(param_1 + 0x30) * fVar1);
  FUN_14513d3d0(param_1 + 0x40);
  return 1;
}



// FUNCTION 144d5c640 FUN_144d5c640 body=770 status=ok
// SIG undefined FUN_144d5c640(void)

void FUN_144d5c640(longlong param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar25 [16];
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    param_2[6] = 0x2e;
    param_2[7] = 0;
    return;
  }
  uVar8 = *(uint *)(param_2 + 4);
  puVar1 = param_2 + 8;
  uVar4 = param_2[8];
  uVar6 = param_2[9];
  if (uVar4 <= param_2[9]) {
    uVar6 = uVar4;
  }
  iVar10 = (uint)uVar4 - (uint)uVar6;
  if (iVar10 != 0) {
    if ((char)uVar8 != '\0') {
      lVar13 = 0;
      uVar12 = (ulonglong)(uVar8 & 0xff);
      do {
        memset((void *)(*(longlong *)param_2 +
                       ((ulonglong)*puVar1 * lVar13 + (ulonglong)(uint)uVar6) * 4),0,
               (ulonglong)(uint)(iVar10 * 4));
        lVar13 = lVar13 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      uVar8 = *(uint *)(param_2 + 4);
    }
    param_2[9] = *puVar1;
  }
  uVar16 = uVar8 & 0xff;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  uVar4 = param_2[9];
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar10 = 0;
    do {
      FUN_14513d360(param_1 + 0x40,iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x10);
  }
  uVar12 = 0;
  if (uVar16 != 0) {
    uVar11 = uVar12;
    if ((7 < uVar16) && (5 < DAT_14c707900)) {
      puVar2 = (ushort *)(param_1 + 0x38);
      puVar5 = *(ushort **)puVar2;
      lVar13 = *(longlong *)param_2;
      puVar3 = puVar5 + (ulonglong)(uVar16 - 1) * 4;
      if ((((puVar2 < puVar5) || (puVar3 < puVar2)) &&
          ((uVar11 = 0, param_2 < puVar5 || (puVar3 < param_2)))) &&
         ((puVar1 < puVar5 || (puVar3 < puVar1)))) {
        auVar25 = pmovzxwq(in_XMM4,ZEXT416(CONCAT22(*puVar1,*puVar1)));
        uVar14 = 4;
        do {
          iVar10 = (int)uVar12;
          uVar7 = uVar14 - 2;
          auVar17._4_4_ = iVar10 + 1;
          auVar17._0_4_ = iVar10;
          auVar17._8_4_ = iVar10;
          auVar17._12_4_ = iVar10;
          auVar17 = pmovzxdq(auVar17,auVar17);
          auVar19._0_8_ = auVar17._0_8_ << 2;
          auVar19._8_8_ = auVar17._8_8_ << 2;
          auVar17 = vpmullq_avx512vl(auVar25,auVar19);
          auVar18._4_4_ = uVar14 - 1;
          auVar18._0_4_ = uVar7;
          auVar18._8_4_ = uVar7;
          auVar18._12_4_ = uVar7;
          auVar19 = pmovzxdq(auVar18,auVar18);
          auVar20._0_8_ = auVar19._0_8_ << 2;
          auVar20._8_8_ = auVar19._8_8_ << 2;
          *(longlong *)(puVar5 + uVar12 * 4) = auVar17._0_8_ + lVar13;
          *(longlong *)(puVar5 + uVar12 * 4 + 4) = auVar17._8_8_ + lVar13;
          auVar17 = vpmullq_avx512vl(auVar25,auVar20);
          uVar15 = iVar10 + 8;
          uVar12 = (ulonglong)uVar15;
          *(longlong *)(puVar5 + (ulonglong)uVar7 * 4) = auVar17._0_8_ + lVar13;
          *(longlong *)(puVar5 + (ulonglong)uVar7 * 4 + 4) = auVar17._8_8_ + lVar13;
          auVar21._4_4_ = uVar14 + 1;
          auVar21._0_4_ = uVar14;
          auVar21._8_4_ = uVar14;
          auVar21._12_4_ = uVar14;
          auVar17 = pmovzxdq(auVar21,auVar21);
          auVar22._0_8_ = auVar17._0_8_ << 2;
          auVar22._8_8_ = auVar17._8_8_ << 2;
          auVar17 = vpmullq_avx512vl(auVar25,auVar22);
          *(longlong *)(puVar5 + (ulonglong)uVar14 * 4) = auVar17._0_8_ + lVar13;
          *(longlong *)(puVar5 + (ulonglong)uVar14 * 4 + 4) = auVar17._8_8_ + lVar13;
          uVar7 = uVar14 + 2;
          auVar23._4_4_ = uVar14 + 3;
          auVar23._0_4_ = uVar7;
          auVar23._8_4_ = uVar7;
          auVar23._12_4_ = uVar7;
          auVar17 = pmovzxdq(auVar23,auVar23);
          auVar24._0_8_ = auVar17._0_8_ << 2;
          auVar24._8_8_ = auVar17._8_8_ << 2;
          auVar17 = vpmullq_avx512vl(auVar25,auVar24);
          *(longlong *)(puVar5 + (ulonglong)uVar7 * 4) = auVar17._0_8_ + lVar13;
          *(longlong *)(puVar5 + (ulonglong)uVar7 * 4 + 4) = auVar17._8_8_ + lVar13;
          uVar14 = uVar14 + 8;
        } while (uVar15 < (uVar8 & 0xf8));
        uVar11 = uVar12;
        if (uVar16 <= uVar15) goto LAB_144d5c8d6;
      }
    }
    uVar12 = (ulonglong)(uVar16 - (int)uVar11);
    lVar13 = uVar11 * 8;
    do {
      lVar9 = *puVar1 * uVar11;
      uVar11 = uVar11 + 1;
      *(longlong *)(lVar13 + *(longlong *)(param_1 + 0x38)) = *(longlong *)param_2 + lVar9 * 4;
      uVar12 = uVar12 - 1;
      lVar13 = lVar13 + 8;
    } while (uVar12 != 0);
  }
LAB_144d5c8d6:
  if (*(int *)(param_2 + 6) == 0x11) {
    FUN_14513d3a0(param_1 + 0x40,0);
    if (*(int *)(param_1 + 0x210) <= *(int *)(param_1 + 0x214)) {
      return;
    }
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + *(int *)(param_1 + 0x34);
    param_2[6] = 0x2d;
    param_2[7] = 0;
  }
  else {
    FUN_14513d3a0(param_1 + 0x40,1);
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x68))
            (*(longlong **)(param_1 + 0x20),uVar4,*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 144d5c960 FUN_144d5c960 body=153 status=ok
// SIG undefined FUN_144d5c960(void)

undefined8 * FUN_144d5c960(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1499d2070;
  param_1[8] = &PTR_FUN_1499d1ff8;
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 144d5ca00 FUN_144d5ca00 body=136 status=ok
// SIG undefined FUN_144d5ca00(void)

undefined8 * FUN_144d5ca00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x218,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\FaustDSP\\FaustEffectPlugin\\SoundEnginePlugin\\FaustEffectPluginFX.cpp"
                      ,0x23);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_1499d2070;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 48000;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x400;
    puVar1[7] = 0;
    FUN_14513cc00(puVar1 + 8);
    puVar1[0x42] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144d5ca90 FUN_144d5ca90 body=50 status=ok
// SIG undefined FUN_144d5ca90(void)

void FUN_144d5ca90(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))
                    (param_1,0x60,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\FaustDSP\\FaustEffectPlugin\\SoundEnginePlugin\\FaustEffectPluginFX.cpp"
                     ,0x28);
  if (lVar1 != 0) {
    FUN_14513c830(lVar1);
    return;
  }
  return;
}



// FUNCTION 144d5cad0 FUN_144d5cad0 body=642 status=ok
// SIG undefined FUN_144d5cad0(void)

undefined8
FUN_144d5cad0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  byte bVar13;
  char *pcVar14;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(undefined8 *)(param_1 + 8) = param_4;
  *(longlong **)(param_1 + 0x10) = param_2;
  *(longlong **)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x30) = *param_5;
  plVar10 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  uVar6 = (**(code **)(*plVar10 + 0x10))(plVar10);
  *(uint *)(param_1 + 0x34) = (uint)uVar6;
  if (DAT_14c7916e8 != (longlong *)0x0) {
    puVar11 = (undefined8 *)
              (**(code **)(*DAT_14c7916e8 + 8))
                        (DAT_14c7916e8,local_28,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50),
                         *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),
                         *(undefined4 *)(param_1 + 0x30));
    uVar12 = *puVar11;
    uVar3 = puVar11[1];
    *puVar11 = 0;
    puVar11[1] = 0;
    plVar10 = *(longlong **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar12;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_20 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_20 + 8))(local_20);
        }
      }
    }
  }
  plVar10 = *(longlong **)(param_1 + 0x20);
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*param_3 + 0x40))(param_3,"Failed to load DSP instance",2);
    return 2;
  }
  (**(code **)(*plVar10 + 0x18))(plVar10,param_1 + 0x50);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))
            (*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30));
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  switch(uVar7) {
  case 1:
    uVar8 = 4;
    bVar13 = 0;
    do {
      bVar13 = bVar13 + 1;
      uVar8 = uVar8 & uVar8 - 1;
    } while (uVar8 != 0);
    uVar8 = bVar13 | 0x4100;
    *(byte *)(param_5 + 1) = bVar13;
    goto LAB_144d5ccab;
  case 2:
    uVar8 = 3;
    bVar13 = 0;
    do {
      bVar13 = bVar13 + 1;
      uVar8 = uVar8 & uVar8 - 1;
    } while (uVar8 != 0);
    uVar8 = bVar13 | 0x3100;
    *(byte *)(param_5 + 1) = bVar13;
    goto LAB_144d5ccab;
  default:
    pcVar14 = "Invalid output channel count specified!";
    goto LAB_144d5cd2f;
  case 4:
    *(undefined1 *)(param_5 + 1) = 4;
    break;
  case 9:
    *(undefined1 *)(param_5 + 1) = 9;
    break;
  case 0x10:
    *(undefined1 *)(param_5 + 1) = 0x10;
    break;
  case 0x19:
    *(undefined1 *)(param_5 + 1) = 0x19;
    break;
  case 0x24:
    *(undefined1 *)(param_5 + 1) = 0x24;
  }
  uVar8 = *(byte *)(param_5 + 1) | 0x200;
LAB_144d5ccab:
  param_5[1] = uVar8;
  iVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
  if (iVar9 < 1) {
    pcVar4 = *(code **)(*param_2 + 8);
    iVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    uVar12 = (*pcVar4)(param_2,(longlong)iVar9 << 3,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\FaustDSP\\FaustSynthPlugin\\SoundEnginePlugin\\FaustSynthPluginSource.cpp"
                       ,0x92);
    *(undefined8 *)(param_1 + 0x38) = uVar12;
    puVar11 = (undefined8 *)
              (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))
                        (*(longlong **)(param_1 + 0x18),local_28);
    *(undefined8 *)(param_1 + 0x40) = *puVar11;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(puVar11 + 1);
    return 1;
  }
  pcVar14 = "Synths cannot have inputs!";
LAB_144d5cd2f:
  (**(code **)(*param_3 + 0x40))(param_3,pcVar14,2);
  return 2;
}



// FUNCTION 144d5cda0 FUN_144d5cda0 body=157 status=ok
// SIG undefined FUN_144d5cda0(void)

undefined8 FUN_144d5cda0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[7] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  plVar4 = (longlong *)param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 144d5ce40 FUN_144d5ce40 body=230 status=ok
// SIG undefined FUN_144d5ce40(void)

undefined8 FUN_144d5ce40(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 2;
  }
  FUN_14513dd80(param_1 + 0x50);
  rand();
  FUN_14513e1f0(param_1 + 0x50);
  FUN_14513e1d0(param_1 + 0x50);
  FUN_14513e170(param_1 + 0x50,1);
  if (*(char *)(param_1 + 0x40) == -0x70) {
    FUN_14513e100(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x250) =
       (int)(longlong)
            ((float)*(int *)(param_1 + 0x30) * *(float *)(*(longlong *)(param_1 + 8) + 0xc));
  if (*(float *)(*(longlong *)(param_1 + 8) + 0xc) <= 0.0) {
    cVar1 = FUN_14513e1c0(param_1 + 0x50);
    uVar2 = 0;
    if (cVar1 == '\0') goto LAB_144d5cf03;
  }
  uVar2 = 1;
LAB_144d5cf03:
  *(undefined1 *)(param_1 + 0x254) = uVar2;
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 8);
  return 1;
}



// FUNCTION 144d5cf50 FUN_144d5cf50 body=930 status=ok
// SIG undefined FUN_144d5cf50(void)

void FUN_144d5cf50(longlong param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort *puVar7;
  char cVar8;
  ushort uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar25 [16];
  
  if ((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 8) == 0)) {
    param_2[6] = 0x2e;
    param_2[7] = 0;
    return;
  }
  if (*(char *)(param_1 + 0x254) != '\0') {
    cVar8 = FUN_14513e1a0(param_1 + 0x50);
    if (cVar8 == '\0') {
      if (*(int *)(param_1 + 0x250) < 1) {
        param_2[6] = 0x11;
        param_2[7] = 0;
        return;
      }
      *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x34);
    }
  }
  uVar6 = param_2[8];
  uVar11 = *(uint *)(param_2 + 4);
  uVar9 = param_2[9];
  if (uVar6 <= param_2[9]) {
    uVar9 = uVar6;
  }
  puVar1 = param_2 + 8;
  uVar18 = 0;
  uVar14 = (ulonglong)(uVar11 & 0xff);
  iVar13 = (uint)uVar6 - (uint)uVar9;
  if (iVar13 != 0) {
    if ((char)uVar11 != '\0') {
      uVar16 = uVar18;
      do {
        memset((void *)(*(longlong *)param_2 + (*puVar1 * uVar16 + (ulonglong)(uint)uVar9) * 4),0,
               (ulonglong)(uint)(iVar13 * 4));
        uVar16 = uVar16 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      uVar11 = *(uint *)(param_2 + 4);
    }
    param_2[9] = *puVar1;
  }
  param_2[6] = 0x2d;
  param_2[7] = 0;
  uVar19 = uVar11 & 0xff;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  uVar6 = param_2[9];
  uVar14 = uVar18;
  do {
    FUN_14513e0c0(param_1 + 0x50,uVar14);
    uVar15 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar15;
  } while ((int)uVar15 < 0x10);
  if (uVar19 != 0) {
    uVar14 = uVar18;
    if ((7 < uVar19) && (5 < DAT_14c707900)) {
      puVar2 = (ushort *)(param_1 + 0x38);
      puVar7 = *(ushort **)puVar2;
      lVar17 = *(longlong *)param_2;
      puVar3 = puVar7 + (ulonglong)(uVar19 - 1) * 4;
      if ((((puVar2 < puVar7) || (puVar3 < puVar2)) &&
          ((uVar14 = 0, param_2 < puVar7 || (puVar3 < param_2)))) &&
         ((puVar1 < puVar7 || (puVar3 < puVar1)))) {
        uVar16 = 4;
        auVar25 = pmovzxwq(in_XMM4,ZEXT416(CONCAT22(*puVar1,*puVar1)));
        do {
          iVar13 = (int)uVar18;
          uVar20 = iVar13 + 8;
          uVar14 = (ulonglong)uVar20;
          auVar21._4_4_ = iVar13 + 1;
          auVar21._0_4_ = iVar13;
          auVar21._8_4_ = iVar13;
          auVar21._12_4_ = iVar13;
          auVar21 = pmovzxdq(auVar21,auVar21);
          auVar21 = vpmullq_avx512vl(auVar25,auVar21);
          *(longlong *)(puVar7 + uVar18 * 4) = auVar21._0_8_ * 4 + lVar17;
          *(longlong *)(puVar7 + uVar18 * 4 + 4) = auVar21._8_8_ * 4 + lVar17;
          iVar13 = (int)uVar16;
          uVar15 = iVar13 - 2;
          auVar22._4_4_ = iVar13 + -1;
          auVar22._0_4_ = uVar15;
          auVar22._8_4_ = uVar15;
          auVar22._12_4_ = uVar15;
          auVar21 = pmovzxdq(auVar22,auVar22);
          auVar21 = vpmullq_avx512vl(auVar25,auVar21);
          *(longlong *)(puVar7 + (ulonglong)uVar15 * 4) = auVar21._0_8_ * 4 + lVar17;
          *(longlong *)(puVar7 + (ulonglong)uVar15 * 4 + 4) = auVar21._8_8_ * 4 + lVar17;
          auVar23._4_4_ = iVar13 + 1;
          auVar23._0_4_ = iVar13;
          auVar23._8_4_ = iVar13;
          auVar23._12_4_ = iVar13;
          auVar21 = pmovzxdq(auVar23,auVar23);
          auVar21 = vpmullq_avx512vl(auVar25,auVar21);
          *(longlong *)(puVar7 + uVar16 * 4) = auVar21._0_8_ * 4 + lVar17;
          *(longlong *)(puVar7 + uVar16 * 4 + 4) = auVar21._8_8_ * 4 + lVar17;
          uVar15 = iVar13 + 2;
          uVar16 = (ulonglong)(iVar13 + 8);
          auVar24._4_4_ = iVar13 + 3;
          auVar24._0_4_ = uVar15;
          auVar24._8_4_ = uVar15;
          auVar24._12_4_ = uVar15;
          auVar21 = pmovzxdq(auVar24,auVar24);
          auVar21 = vpmullq_avx512vl(auVar25,auVar21);
          *(longlong *)(puVar7 + (ulonglong)uVar15 * 4) = auVar21._0_8_ * 4 + lVar17;
          *(longlong *)(puVar7 + (ulonglong)uVar15 * 4 + 4) = auVar21._8_8_ * 4 + lVar17;
          uVar18 = uVar14;
        } while (uVar20 < (uVar11 & 0xf8));
        if (uVar19 <= uVar20) goto LAB_144d5d255;
      }
    }
    uVar18 = (ulonglong)(uVar19 - (int)uVar14);
    lVar17 = uVar14 * 8;
    do {
      lVar12 = *puVar1 * uVar14;
      uVar14 = uVar14 + 1;
      *(longlong *)(lVar17 + *(longlong *)(param_1 + 0x38)) = *(longlong *)param_2 + lVar12 * 4;
      uVar18 = uVar18 - 1;
      lVar17 = lVar17 + 8;
    } while (uVar18 != 0);
  }
LAB_144d5d255:
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x68))
            (*(longlong **)(param_1 + 0x20),uVar6,0,*(undefined8 *)(param_1 + 0x38));
  uVar4 = *(undefined4 *)(param_1 + 600);
  uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 8);
  plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
  plVar10 = (longlong *)(**(code **)(*plVar10 + 200))(plVar10,0);
  (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_2,CONCAT44(uVar5,uVar4),0);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 8);
  return;
}



// FUNCTION 144d5d300 FUN_144d5d300 body=63 status=ok
// SIG undefined FUN_144d5d300(void)

float FUN_144d5d300(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x254) != '\0') {
    cVar1 = FUN_14513e1c0(param_1 + 0x50);
    if (cVar1 == '\0') {
      return *(float *)(*(longlong *)(param_1 + 8) + 0xc) * 1000.0;
    }
  }
  return 0.0;
}



// FUNCTION 144d5d340 FUN_144d5d340 body=25 status=ok
// SIG undefined FUN_144d5d340(void)

undefined8 FUN_144d5d340(longlong param_1)

{
  FUN_14513e170(param_1 + 0x50,0);
  return 1;
}



// FUNCTION 144d5d380 FUN_144d5d380 body=153 status=ok
// SIG undefined FUN_144d5d380(void)

undefined8 * FUN_144d5d380(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1499d2170;
  param_1[10] = &PTR_FUN_1499d1ff8;
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 144d5d420 FUN_144d5d420 body=152 status=ok
// SIG undefined FUN_144d5d420(void)

undefined8 * FUN_144d5d420(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x260,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\FaustDSP\\FaustSynthPlugin\\SoundEnginePlugin\\FaustSynthPluginSource.cpp"
                      ,0x23);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_1499d2170;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 48000;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x400;
    puVar1[7] = 0;
    FUN_14513d970(puVar1 + 10);
    *(undefined4 *)(puVar1 + 0x4a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x254) = 1;
    *(undefined4 *)(puVar1 + 0x4b) = 0x3f800000;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144d5d4c0 FUN_144d5d4c0 body=50 status=ok
// SIG undefined FUN_144d5d4c0(void)

void FUN_144d5d4c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))
                    (param_1,0x60,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\FaustDSP\\FaustSynthPlugin\\SoundEnginePlugin\\FaustSynthPluginSource.cpp"
                     ,0x28);
  if (lVar1 != 0) {
    FUN_14513d530(lVar1);
    return;
  }
  return;
}



// FUNCTION 144d5d500 FUN_144d5d500 body=1566 status=ok
// SIG undefined FUN_144d5d500(void)

void FUN_144d5d500(longlong param_1,longlong param_2,void *param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  longlong lVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    memset(param_3,0,(ulonglong)param_4 << 2);
    uVar16 = fminf(param_5,0x3f7d70a4);
    fVar17 = (float)fmaxf(0,uVar16);
    uVar14 = 0;
    fVar23 = (fVar17 - *(float *)(param_1 + 0x40)) / (float)param_4;
    if (param_4 >> 5 != 0) {
      do {
        puVar10 = (uint *)(param_1 + 8);
        uVar9 = (ulonglong)(uVar14 << 5);
        lVar12 = 2;
        puVar5 = (undefined8 *)(param_2 + uVar9 * 4);
        puVar2 = (undefined8 *)(param_2 + 0x10 + uVar9 * 4);
        local_e8 = *puVar5;
        uStack_e0 = puVar5[1];
        puVar5 = (undefined8 *)(param_2 + 0x20 + uVar9 * 4);
        local_d8 = *puVar2;
        uStack_d0 = puVar2[1];
        puVar2 = (undefined8 *)(param_2 + 0x30 + uVar9 * 4);
        local_c8 = *puVar5;
        uStack_c0 = puVar5[1];
        puVar5 = (undefined8 *)(param_2 + 0x40 + uVar9 * 4);
        local_b8 = *puVar2;
        uStack_b0 = puVar2[1];
        puVar2 = (undefined8 *)(param_2 + 0x50 + uVar9 * 4);
        local_a8 = *puVar5;
        uStack_a0 = puVar5[1];
        puVar3 = (undefined4 *)(param_2 + 0x60 + uVar9 * 4);
        local_98 = *puVar2;
        uStack_90 = puVar2[1];
        puVar4 = (undefined4 *)(param_2 + 0x70 + uVar9 * 4);
        local_88 = *puVar3;
        uStack_84 = puVar3[1];
        uStack_80 = puVar3[2];
        uStack_7c = puVar3[3];
        local_78 = *puVar4;
        uStack_74 = puVar4[1];
        uStack_70 = puVar4[2];
        uStack_6c = puVar4[3];
        do {
          lVar8 = *(longlong *)(puVar10 + -2);
          if ((lVar8 != 0) && (uVar6 = puVar10[1], uVar6 != 0)) {
            iVar11 = 2;
            pfVar13 = (float *)((longlong)&local_e8 + 4);
            lVar15 = 4;
            do {
              fVar18 = pfVar13[-1];
              fVar22 = (float)puVar10[2];
              uVar7 = *puVar10;
              pfVar13[-1] = fVar18 + fVar22;
              fVar19 = (float)(iVar11 + -2) * fVar23 + *(float *)(param_1 + 0x40);
              *(float *)(lVar8 + (ulonglong)uVar7 * 4) = fVar18 + fVar22;
              uVar9 = (ulonglong)(*puVar10 + 1) % (ulonglong)uVar6;
              fVar18 = pfVar13[-1];
              *puVar10 = (uint)uVar9;
              pfVar13[-1] = fVar19 * fVar18;
              fVar18 = *(float *)(lVar8 + uVar9 * 4);
              *(undefined4 *)(lVar8 + uVar9 * 4) = 0;
              fVar22 = pfVar13[-1];
              fVar20 = (float)puVar10[3];
              puVar10[3] = (uint)fVar18;
              pfVar13[-1] = fVar22 + fVar20;
              fVar18 = -(fVar18 * fVar19);
              puVar10[2] = (uint)fVar18;
              fVar18 = fVar18 + *pfVar13;
              uVar7 = *puVar10;
              *pfVar13 = fVar18;
              fVar19 = (float)(iVar11 + -1) * fVar23 + *(float *)(param_1 + 0x40);
              *(float *)(lVar8 + (ulonglong)uVar7 * 4) = fVar18;
              uVar9 = (ulonglong)(*puVar10 + 1) % (ulonglong)uVar6;
              fVar18 = *pfVar13;
              *puVar10 = (uint)uVar9;
              *pfVar13 = fVar19 * fVar18;
              fVar18 = *(float *)(lVar8 + uVar9 * 4);
              *(undefined4 *)(lVar8 + uVar9 * 4) = 0;
              fVar22 = (float)puVar10[3];
              fVar20 = *pfVar13;
              puVar10[3] = (uint)fVar18;
              *pfVar13 = fVar22 + fVar20;
              fVar18 = -(fVar18 * fVar19);
              puVar10[2] = (uint)fVar18;
              fVar18 = fVar18 + pfVar13[1];
              uVar7 = *puVar10;
              pfVar13[1] = fVar18;
              fVar20 = (float)iVar11 * fVar23 + *(float *)(param_1 + 0x40);
              *(float *)(lVar8 + (ulonglong)uVar7 * 4) = fVar18;
              uVar9 = (ulonglong)(*puVar10 + 1) % (ulonglong)uVar6;
              fVar18 = pfVar13[1];
              *puVar10 = (uint)uVar9;
              pfVar13[1] = fVar20 * fVar18;
              fVar18 = *(float *)(lVar8 + uVar9 * 4);
              *(undefined4 *)(lVar8 + uVar9 * 4) = 0;
              fVar22 = pfVar13[1];
              fVar19 = -(fVar18 * fVar20);
              puVar10[2] = (uint)fVar19;
              fVar20 = (float)puVar10[3];
              fVar19 = fVar19 + pfVar13[2];
              puVar10[3] = (uint)fVar18;
              uVar7 = *puVar10;
              pfVar13[1] = fVar22 + fVar20;
              pfVar13[2] = fVar19;
              fVar21 = (float)(iVar11 + 1) * fVar23 + *(float *)(param_1 + 0x40);
              *(float *)(lVar8 + (ulonglong)uVar7 * 4) = fVar19;
              uVar9 = (ulonglong)(*puVar10 + 1) % (ulonglong)uVar6;
              fVar18 = pfVar13[2];
              *puVar10 = (uint)uVar9;
              pfVar13[2] = fVar21 * fVar18;
              fVar18 = *(float *)(lVar8 + uVar9 * 4);
              *(undefined4 *)(lVar8 + uVar9 * 4) = 0;
              fVar22 = pfVar13[2];
              fVar20 = (float)puVar10[3];
              puVar10[3] = (uint)fVar18;
              pfVar13[2] = fVar22 + fVar20;
              fVar18 = -(fVar18 * fVar21);
              puVar10[2] = (uint)fVar18;
              fVar18 = fVar18 + pfVar13[3];
              uVar7 = *puVar10;
              pfVar13[3] = fVar18;
              fVar19 = (float)(iVar11 + 2) * fVar23 + *(float *)(param_1 + 0x40);
              *(float *)(lVar8 + (ulonglong)uVar7 * 4) = fVar18;
              uVar9 = (ulonglong)(*puVar10 + 1) % (ulonglong)uVar6;
              fVar18 = pfVar13[3];
              *puVar10 = (uint)uVar9;
              pfVar13[3] = fVar19 * fVar18;
              fVar18 = *(float *)(lVar8 + uVar9 * 4);
              *(undefined4 *)(lVar8 + uVar9 * 4) = 0;
              fVar22 = (float)puVar10[3];
              fVar20 = pfVar13[3];
              puVar10[3] = (uint)fVar18;
              pfVar13[3] = fVar22 + fVar20;
              fVar18 = -(fVar18 * fVar19);
              puVar10[2] = (uint)fVar18;
              fVar18 = fVar18 + pfVar13[4];
              uVar7 = *puVar10;
              pfVar13[4] = fVar18;
              fVar19 = (float)(iVar11 + 3) * fVar23 + *(float *)(param_1 + 0x40);
              *(float *)(lVar8 + (ulonglong)uVar7 * 4) = fVar18;
              uVar9 = (ulonglong)(*puVar10 + 1) % (ulonglong)uVar6;
              fVar18 = pfVar13[4];
              *puVar10 = (uint)uVar9;
              pfVar13[4] = fVar19 * fVar18;
              fVar18 = *(float *)(lVar8 + uVar9 * 4);
              *(undefined4 *)(lVar8 + uVar9 * 4) = 0;
              fVar22 = (float)puVar10[3];
              fVar20 = pfVar13[4];
              puVar10[3] = (uint)fVar18;
              fVar18 = -(fVar18 * fVar19);
              puVar10[2] = (uint)fVar18;
              fVar18 = fVar18 + pfVar13[5];
              uVar7 = *puVar10;
              pfVar13[4] = fVar22 + fVar20;
              pfVar13[5] = fVar18;
              fVar19 = (float)(iVar11 + 4) * fVar23 + *(float *)(param_1 + 0x40);
              *(float *)(lVar8 + (ulonglong)uVar7 * 4) = fVar18;
              uVar9 = (ulonglong)(*puVar10 + 1) % (ulonglong)uVar6;
              iVar1 = iVar11 + 5;
              fVar18 = pfVar13[5];
              iVar11 = iVar11 + 8;
              *puVar10 = (uint)uVar9;
              pfVar13[5] = fVar19 * fVar18;
              fVar18 = *(float *)(lVar8 + uVar9 * 4);
              *(undefined4 *)(lVar8 + uVar9 * 4) = 0;
              fVar22 = pfVar13[5];
              fVar20 = (float)puVar10[3];
              puVar10[3] = (uint)fVar18;
              pfVar13[5] = fVar22 + fVar20;
              fVar18 = -(fVar18 * fVar19);
              puVar10[2] = (uint)fVar18;
              fVar18 = fVar18 + pfVar13[6];
              uVar7 = *puVar10;
              pfVar13[6] = fVar18;
              fVar22 = (float)iVar1 * fVar23 + *(float *)(param_1 + 0x40);
              *(float *)(lVar8 + (ulonglong)uVar7 * 4) = fVar18;
              uVar9 = (ulonglong)(*puVar10 + 1) % (ulonglong)uVar6;
              fVar18 = pfVar13[6];
              *puVar10 = (uint)uVar9;
              pfVar13[6] = fVar22 * fVar18;
              fVar18 = *(float *)(lVar8 + uVar9 * 4);
              *(undefined4 *)(lVar8 + uVar9 * 4) = 0;
              puVar10[2] = (uint)-(fVar18 * fVar22);
              fVar22 = pfVar13[6];
              fVar20 = (float)puVar10[3];
              puVar10[3] = (uint)fVar18;
              pfVar13[6] = fVar22 + fVar20;
              pfVar13 = pfVar13 + 8;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          puVar10 = puVar10 + 6;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                  (*(longlong **)(param_1 + 0x38),&local_e8,
                   (void *)((longlong)param_3 + (ulonglong)(uVar14 << 5) * 4));
        uVar14 = uVar14 + 1;
      } while (uVar14 < param_4 >> 5);
    }
    *(float *)(param_1 + 0x40) = fVar17;
  }
  return;
}



// FUNCTION 144d5db20 FUN_144d5db20 body=438 status=ok
// SIG undefined FUN_144d5db20(void)

byte FUN_144d5db20(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar5 = (longlong *)(param_1 + 0x10);
  puVar6 = (undefined8 *)(param_1 + 0xb0);
  bVar4 = 1;
  lVar7 = 4;
  do {
    if (((longlong *)plVar5[-2] != (longlong *)0x0) && (*plVar5 != 0)) {
      (**(code **)(*(longlong *)plVar5[-2] + 0x10))();
    }
    plVar5[-2] = 0;
    plVar5[-1] = 0;
    *plVar5 = 0;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
    if (((param_2 == (longlong *)0x0) || (param_3 == 0)) || (param_4 == 0)) {
      bVar8 = false;
    }
    else {
      plVar5[-2] = (longlong)param_2;
      uVar1 = (param_4 & 0xfffffff0) + 0x410;
      plVar5[-1] = param_3;
      *(uint *)((longlong)plVar5 + 0xc) = uVar1;
      lVar2 = (**(code **)(*param_2 + 0x18))
                        (param_2,(ulonglong)uVar1 << 2,0x10,
                         "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\AcousticsMixer\\SoundEnginePlugin\\AcousticsMixerFX.cpp"
                         ,0x2e);
      *plVar5 = lVar2;
      bVar8 = lVar2 != 0;
      if (!bVar8) {
        *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
      }
    }
    *puVar6 = param_2;
    puVar6[1] = param_3;
    lVar2 = (**(code **)(*param_2 + 8))
                      (param_2,0xaf0,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\AcousticsMixer\\SoundEnginePlugin\\AcousticsMixerFX.cpp"
                       ,0x9a);
    puVar6[-6] = lVar2;
    *(uint *)((longlong)puVar6 + -0x24) = -(uint)(lVar2 != 0) & 700;
    lVar3 = (**(code **)(*param_2 + 8))
                      (param_2,0x1138,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\AcousticsMixer\\SoundEnginePlugin\\AcousticsMixerFX.cpp"
                       ,0x9a);
    puVar6[-3] = lVar3;
    *(uint *)((longlong)puVar6 + -0xc) = -(uint)(lVar3 != 0) & 0x44e;
    if ((void *)puVar6[-6] != (void *)0x0) {
      memset((void *)puVar6[-6],0,(ulonglong)*(uint *)((longlong)puVar6 + -0x24) << 2);
    }
    *(undefined4 *)(puVar6 + -5) = 0;
    puVar6[-4] = 0;
    if ((void *)puVar6[-3] != (void *)0x0) {
      memset((void *)puVar6[-3],0,(ulonglong)*(uint *)((longlong)puVar6 + -0xc) << 2);
    }
    bVar4 = bVar4 & bVar8 & (lVar3 != 0 && lVar2 != 0);
    *(undefined4 *)(puVar6 + -2) = 0;
    plVar5 = plVar5 + 4;
    puVar6[-1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6 = puVar6 + 9;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return bVar4;
}



// FUNCTION 144d5dce0 FUN_144d5dce0 body=367 status=ok
// SIG undefined FUN_144d5dce0(void)

void FUN_144d5dce0(longlong param_1,longlong param_2,ushort param_3,uint param_4,int param_5,
                  undefined8 param_6)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  float fVar6;
  
  if ((((param_4 < 4) && (param_2 != 0)) && (param_3 != 0)) &&
     ((int)(uint)param_3 < *(int *)(param_1 + 0x1c))) {
    param_1 = (ulonglong)param_4 * 0x20 + param_1;
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = *(uint *)(param_1 + 0x1c);
      if ((param_3 < uVar1) && ((uint)param_3 + param_5 < uVar1)) {
        lVar3 = *plVar2;
        uVar4 = (ulonglong)(uint)(*(int *)(param_1 + 0x18) + param_5) % (ulonglong)uVar1;
        if (uVar1 <= (uint)param_3 + (int)uVar4) {
          uVar5 = (short)uVar1 - (short)uVar4;
          fVar6 = ((float)uVar5 / (float)uVar1) * (param_6._4_4_ - (float)param_6);
          (**(code **)(lVar3 + 0x18))
                    (plVar2,param_2,*(longlong *)(param_1 + 0x10) + uVar4 * 4,lVar3,fVar6,uVar5);
                    /* WARNING: Could not recover jumptable at 0x000144d5de14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                    (*(longlong **)(param_1 + 8),param_2 + (ulonglong)uVar5 * 4,
                     *(undefined8 *)(param_1 + 0x10),fVar6);
          return;
        }
        (**(code **)(lVar3 + 0x18))(plVar2,param_2,*(longlong *)(param_1 + 0x10) + uVar4 * 4);
      }
    }
  }
  return;
}



// FUNCTION 144d5de50 FUN_144d5de50 body=396 status=ok
// SIG undefined FUN_144d5de50(void)

ulonglong FUN_144d5de50(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  ulonglong _Size;
  uint uVar5;
  ulonglong _Size_00;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  pvVar3 = (void *)((ulonglong)uVar2 * 4 + *(longlong *)(param_1 + 0x10));
  uVar5 = param_2 * 4;
  uVar1 = uVar5;
  if (*(uint *)(param_1 + 0x1c) < uVar2 + param_2) {
    iVar4 = *(uint *)(param_1 + 0x1c) - uVar2;
    memset(pvVar3,0,(ulonglong)(uint)(iVar4 * 4));
    pvVar3 = *(void **)(param_1 + 0x10);
    uVar1 = uVar5 + iVar4 * -4;
  }
  memset(pvVar3,0,(ulonglong)uVar1);
  *(uint *)(param_1 + 0x18) = (uint)(*(int *)(param_1 + 0x18) + param_2) % *(uint *)(param_1 + 0x1c)
  ;
  uVar2 = *(uint *)(param_1 + 0x38);
  pvVar3 = (void *)((ulonglong)uVar2 * 4 + *(longlong *)(param_1 + 0x30));
  if (*(uint *)(param_1 + 0x3c) < uVar2 + param_2) {
    iVar4 = *(uint *)(param_1 + 0x3c) - uVar2;
    memset(pvVar3,0,(ulonglong)(uint)(iVar4 * 4));
    memset(*(void **)(param_1 + 0x30),0,(ulonglong)(uVar5 + iVar4 * -4));
  }
  else {
    memset(pvVar3,0,(ulonglong)uVar5);
  }
  _Size = (ulonglong)uVar5;
  *(uint *)(param_1 + 0x38) = (uint)(*(int *)(param_1 + 0x38) + param_2) % *(uint *)(param_1 + 0x3c)
  ;
  uVar2 = *(uint *)(param_1 + 0x58);
  pvVar3 = (void *)((ulonglong)uVar2 * 4 + *(longlong *)(param_1 + 0x50));
  _Size_00 = _Size;
  if (*(uint *)(param_1 + 0x5c) < uVar2 + param_2) {
    iVar4 = *(uint *)(param_1 + 0x5c) - uVar2;
    memset(pvVar3,0,(ulonglong)(uint)(iVar4 * 4));
    pvVar3 = *(void **)(param_1 + 0x50);
    _Size_00 = (ulonglong)(uVar5 + iVar4 * -4);
  }
  memset(pvVar3,0,_Size_00);
  *(uint *)(param_1 + 0x58) = (uint)(*(int *)(param_1 + 0x58) + param_2) % *(uint *)(param_1 + 0x5c)
  ;
  uVar2 = *(uint *)(param_1 + 0x78);
  pvVar3 = (void *)((ulonglong)uVar2 * 4 + *(longlong *)(param_1 + 0x70));
  if (*(uint *)(param_1 + 0x7c) < uVar2 + param_2) {
    iVar4 = *(uint *)(param_1 + 0x7c) - uVar2;
    memset(pvVar3,0,(ulonglong)(uint)(iVar4 * 4));
    pvVar3 = *(void **)(param_1 + 0x70);
    _Size = (ulonglong)(uVar5 + iVar4 * -4);
  }
  memset(pvVar3,0,_Size);
  uVar2 = *(int *)(param_1 + 0x78) + param_2;
  *(uint *)(param_1 + 0x78) = uVar2 % *(uint *)(param_1 + 0x7c);
  return (ulonglong)uVar2 / (ulonglong)*(uint *)(param_1 + 0x7c);
}



// FUNCTION 144d5dfe0 FUN_144d5dfe0 body=639 status=ok
// SIG undefined FUN_144d5dfe0(void)

undefined8
FUN_144d5dfe0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             longlong param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  short sVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  *(undefined8 *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(longlong **)(param_1 + 0x18) = param_3;
  plVar4 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  *(longlong **)(param_1 + 0x28) = plVar4;
  uVar5 = (**(code **)(*plVar4 + 200))(plVar4,0);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  sVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  *(short *)(param_1 + 0x30) = sVar3;
  if ((((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
      (*(longlong *)(param_1 + 0x18) != 0)) &&
     (((*(longlong *)(param_1 + 0x28) != 0 && (*(longlong *)(param_1 + 0x20) != 0)) && (sVar3 != 0))
     )) {
    *(undefined1 *)(param_5 + 4) = 4;
    *(uint *)(param_5 + 4) = *(byte *)(param_5 + 4) | 0x200;
    FUN_144d5db20(param_1 + 0x78,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),
                  0x3840);
    local_38 = 0x3f800000;
    uStack_30 = 0;
    local_28 = 0x3f80000000000000;
    uStack_20 = 0xbf800000;
    local_18 = 0;
    uStack_10 = 0xbf80000000000000;
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),0x80,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\AcousticsMixer\\SoundEnginePlugin\\AcousticsMixerFX.cpp"
                       ,0x18b);
    *(undefined8 *)(param_1 + 0x218) = uVar5;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x70))
              (*(longlong **)(param_1 + 0x28),&local_38,4,*(undefined4 *)(param_5 + 4),uVar5);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),0x80,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\AcousticsMixer\\SoundEnginePlugin\\AcousticsMixerFX.cpp"
                       ,0x18e);
    *(undefined8 *)(param_1 + 0x220) = uVar5;
    uVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x220) + (ulonglong)(uVar6 * 8) * 4;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))
                (*(longlong **)(param_1 + 0x28),lVar1,0,*(undefined4 *)(param_5 + 4),lVar1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),(ulonglong)*(ushort *)(param_1 + 0x30) << 4,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\AcousticsMixer\\SoundEnginePlugin\\AcousticsMixerFX.cpp"
                       ,0x195);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    uVar2 = *(undefined4 *)(param_5 + 4);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),(ulonglong)*(ushort *)(param_1 + 0x30) << 4,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\AcousticsMixer\\SoundEnginePlugin\\AcousticsMixerFX.cpp"
                       ,0x19a);
    *(undefined8 *)(param_1 + 0x58) = uVar5;
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x60) = 4;
    *(undefined8 *)(param_1 + 0x248) = 0x3d4ccccd3cf5c28f;
    *(undefined8 *)(param_1 + 0x250) = 0x3e051eb83d8f5c29;
    *(undefined8 *)(param_1 + 600) = 0x3e4ccccd3e99999a;
    *(undefined8 *)(param_1 + 0x260) = 0x3d4ccccd3dcccccd;
    *(undefined8 *)(param_1 + 0x268) = 0x3e4ccccd3dcccccd;
    *(undefined8 *)(param_1 + 0x270) = 0x3dcccccd3e4ccccd;
    *(undefined4 *)(param_1 + 0x278) = 0;
    return 1;
  }
  return 2;
}



// FUNCTION 144d5e260 FUN_144d5e260 body=279 status=ok
// SIG undefined FUN_144d5e260(void)

undefined8 FUN_144d5e260(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],param_1[10]);
  (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],param_1[0xe]);
  (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],param_1[0x43]);
  (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],param_1[0x44]);
  plVar3 = param_1 + 0x11;
  lVar2 = 4;
  plVar1 = param_1 + 0x22;
  do {
    if (((longlong *)plVar3[-2] != (longlong *)0x0) && (*plVar3 != 0)) {
      (**(code **)(*(longlong *)plVar3[-2] + 0x10))();
    }
    plVar3[-2] = 0;
    plVar3[-1] = 0;
    *plVar3 = 0;
    *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
    if ((longlong *)plVar1[3] != (longlong *)0x0) {
      if (plVar1[-3] != 0) {
        (**(code **)(*(longlong *)plVar1[3] + 0x10))();
      }
      plVar1[-3] = 0;
      *(undefined4 *)((longlong)plVar1 + -0xc) = 0;
      if (*plVar1 != 0) {
        (**(code **)(*(longlong *)plVar1[3] + 0x10))();
      }
      *plVar1 = 0;
      *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
    }
    plVar1[3] = 0;
    plVar3 = plVar3 + 4;
    plVar1[4] = 0;
    plVar1 = plVar1 + 9;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 144d5e380 FUN_144d5e380 body=221 status=ok
// SIG undefined FUN_144d5e380(void)

undefined8 FUN_144d5e380(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  memset(*(void **)(param_1 + 0x50),0,(ulonglong)*(ushort *)(param_1 + 0x30) << 4);
  memset(*(void **)(param_1 + 0x70),0,(ulonglong)*(ushort *)(param_1 + 0x30) << 4);
  puVar3 = (undefined8 *)(param_1 + 0x88);
  lVar2 = 4;
  puVar1 = (undefined4 *)(param_1 + 0x100);
  do {
    memset((void *)*puVar3,0,(ulonglong)*(uint *)((longlong)puVar3 + 0xc) << 2);
    *(undefined4 *)(puVar3 + 1) = 0;
    if (*(void **)(puVar1 + -2) != (void *)0x0) {
      memset(*(void **)(puVar1 + -2),0,(ulonglong)(uint)puVar1[1] << 2);
    }
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    if (*(void **)(puVar1 + 4) != (void *)0x0) {
      memset(*(void **)(puVar1 + 4),0,(ulonglong)(uint)puVar1[7] << 2);
    }
    puVar1[6] = 0;
    puVar3 = puVar3 + 4;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[0xe] = 0;
    puVar1 = puVar1 + 0x12;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return 1;
}



// FUNCTION 144d5e480 FUN_144d5e480 body=1124 status=ok
// SIG undefined FUN_144d5e480(void)

void FUN_144d5e480(longlong param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint local_res8 [2];
  uint *local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  uint in_stack_ffffffffffffff68;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  *(undefined8 *)(param_1 + 0x28c) = *(undefined8 *)(param_1 + 0x280);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x288);
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(lVar2 + 0xc);
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(lVar2 + 0x14);
  }
  if (*param_3 == 1) {
    plVar3 = (longlong *)**(longlong **)(param_3 + 2);
    local_50 = 0;
    local_80 = 0x3d4ccccd3cf5c28f;
    uStack_78 = 0x3e051eb83d8f5c29;
    local_70 = 0x3e99999a;
    uStack_6c = 0x3e4ccccd;
    uStack_68 = 0x3dcccccd;
    uStack_64 = 0x3d4ccccd;
    local_60 = 0x3dcccccd;
    uStack_5c = 0x3e4ccccd;
    uStack_58 = 0x3e4ccccd;
    uStack_54 = 0x3dcccccd;
    if (lVar2 != 0) {
      local_70 = *(undefined4 *)(lVar2 + 0x1c);
      local_60 = *(undefined4 *)(lVar2 + 0x20);
      uStack_6c = *(undefined4 *)(lVar2 + 0x28);
      local_80 = CONCAT44(*(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x18));
      uStack_5c = *(undefined4 *)(lVar2 + 0x2c);
      uStack_68 = *(undefined4 *)(lVar2 + 0x34);
      uStack_58 = *(undefined4 *)(lVar2 + 0x38);
      uStack_64 = *(undefined4 *)(lVar2 + 0x40);
      uStack_78 = CONCAT44(*(undefined4 *)(lVar2 + 0x3c),*(undefined4 *)(lVar2 + 0x30));
      uStack_54 = *(undefined4 *)(lVar2 + 0x44);
    }
    plVar4 = *(longlong **)(param_1 + 0x18);
    local_res18 = &local_80;
    uVar11 = 0;
    local_res20 = (undefined8 *)0x0;
    uVar17 = 0;
    local_res8[0] = 0;
    puVar14 = local_res18;
    uVar13 = uVar11;
    local_res10 = param_2;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_res20,local_res8);
      uVar13 = uVar17;
      if ((local_res20 == (undefined8 *)0x0) || (local_res8[0] < 0x34)) {
        puVar14 = &local_80;
      }
      else {
        local_res18 = local_res20;
        puVar14 = local_res20;
        if ((*(int *)(local_res20 + 6) * 8 + 0x34U == local_res8[0]) &&
           (*(int *)(local_res20 + 6) != 0)) {
          uVar13 = (longlong)local_res20 + 0x34;
        }
      }
    }
    uVar17 = uVar11;
    if (*param_2 == 0) {
      *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) - (uint)*(ushort *)(param_1 + 0x30);
    }
    else {
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 4) + uVar17 * 8);
        if ((lVar2 != 0) &&
           (plVar4 = *(longlong **)(*(longlong *)(param_2 + 2) + uVar17 * 8),
           plVar4 != (longlong *)0x0)) {
          puVar15 = &DAT_1499d22b8;
          if ((uVar13 != 0) && (*(uint *)(puVar14 + 6) != 0)) {
            uVar12 = uVar11;
            do {
              puVar15 = (undefined *)(uVar13 + uVar12 * 8);
              if (*(int *)(uVar13 + uVar12 * 8) == *(int *)(lVar2 + 0x70)) break;
              uVar9 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar9;
              puVar15 = &DAT_1499d22b8;
            } while (uVar9 < *(uint *)(puVar14 + 6));
          }
          if (((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
             (uVar9 = *(uint *)(plVar4 + 1), (uVar9 & 0xf00) == 0x200)) {
            uVar7 = uVar9 & 0xff;
            if (uVar7 < 4) {
              if ((char)uVar9 == '\0') goto LAB_144d5e751;
            }
            else {
              uVar7 = 4;
            }
            uVar16 = (ulonglong)uVar7;
            uVar12 = uVar11;
            do {
              in_stack_ffffffffffffff68 = *(uint *)(puVar15 + 4);
              lVar2 = **(longlong **)(param_1 + 0x20);
              (**(code **)(lVar2 + 0x18))
                        (*(longlong **)(param_1 + 0x20),
                         *plVar4 + *(ushort *)(plVar4 + 2) * uVar12 * 4,
                         *(longlong *)(param_1 + 0x38) + *(ushort *)(param_1 + 0x48) * uVar12 * 4,
                         lVar2,in_stack_ffffffffffffff68,*(undefined2 *)((longlong)plVar4 + 0x12));
              uVar12 = uVar12 + 1;
              uVar16 = uVar16 - 1;
              param_2 = local_res10;
            } while (uVar16 != 0);
          }
        }
LAB_144d5e751:
        uVar9 = (int)uVar17 + 1;
        puVar14 = local_res18;
        uVar17 = (ulonglong)uVar9;
      } while (uVar9 < *param_2);
      *(undefined4 *)(param_1 + 0x27c) = 0x3840;
    }
    uVar1 = *(ushort *)(plVar3 + 2);
    uVar6 = *(ushort *)((longlong)plVar3 + 0x12);
    if (uVar1 <= *(ushort *)((longlong)plVar3 + 0x12)) {
      uVar6 = uVar1;
    }
    iVar10 = (uint)uVar1 - (uint)uVar6;
    if (iVar10 != 0) {
      if (*(byte *)(plVar3 + 1) != 0) {
        uVar13 = (ulonglong)*(byte *)(plVar3 + 1);
        do {
          memset((void *)(*plVar3 + (*(ushort *)(plVar3 + 2) * uVar11 + (ulonglong)(uint)uVar6) * 4)
                 ,0,(ulonglong)(uint)(iVar10 * 4));
          uVar11 = uVar11 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      *(short *)((longlong)plVar3 + 0x12) = (short)plVar3[2];
    }
    puVar14 = local_res18;
    FUN_144d5e8f0(param_1,*(undefined2 *)(param_1 + 0x30),local_res18,plVar3);
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffff00;
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
              (*(longlong **)(param_1 + 0x20),plVar3,param_1 + 0x38,
               CONCAT44(*(undefined4 *)(param_1 + 0x284),*(undefined4 *)(param_1 + 0x290)),
               in_stack_ffffffffffffff68);
    plVar4 = *(longlong **)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x27c) < 1) {
      (**(code **)(*plVar4 + 0x28))
                (plVar4,plVar3,plVar3,*(undefined4 *)(param_1 + 0x28c),
                 in_stack_ffffffffffffff68 & 0xffffff00);
      uVar8 = 0x11;
    }
    else {
      (**(code **)(*plVar4 + 0x28))
                (plVar4,plVar3,plVar3,
                 CONCAT44(*(undefined4 *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x28c)));
      uVar8 = 0x2d;
    }
    *(undefined4 *)((longlong)plVar3 + 0xc) = uVar8;
    uVar5 = puVar14[1];
    *(undefined8 *)(param_1 + 0x248) = *puVar14;
    *(undefined8 *)(param_1 + 0x250) = uVar5;
    uVar5 = puVar14[3];
    *(undefined8 *)(param_1 + 600) = puVar14[2];
    *(undefined8 *)(param_1 + 0x260) = uVar5;
    uVar5 = puVar14[5];
    *(undefined8 *)(param_1 + 0x268) = puVar14[4];
    *(undefined8 *)(param_1 + 0x270) = uVar5;
    *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(puVar14 + 6);
  }
  return;
}



// FUNCTION 144d5e8f0 FUN_144d5e8f0 body=1193 status=ok
// SIG undefined FUN_144d5e8f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144d5e8f0(longlong param_1,ushort param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong local_10b0;
  undefined1 local_1098 [4176];
  undefined8 uStack_48;
  
  uStack_48 = 0x144d5e915;
  uVar15 = 0;
  if (((*(uint *)(param_1 + 0x40) & 0xf00) == 0x200) &&
     (uVar14 = 1, 1 < (byte)*(uint *)(param_1 + 0x40))) {
    uVar13 = *(ushort *)(param_1 + 0x4a);
    do {
      puVar7 = (uint *)(*(longlong *)(param_1 + 0x38) + *(ushort *)(param_1 + 0x48) * uVar14 * 4);
      uVar17 = uVar15;
      if (uVar13 != 0) {
        do {
          uVar6 = (int)uVar17 + 1;
          *puVar7 = *puVar7 ^ 0x80000000;
          uVar13 = *(ushort *)(param_1 + 0x4a);
          uVar17 = (ulonglong)uVar6;
          puVar7 = puVar7 + 1;
        } while ((int)uVar6 < (int)(uint)uVar13);
      }
      uVar6 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar6;
    } while (uVar6 < *(byte *)(param_1 + 0x40));
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
            (*(longlong **)(param_1 + 0x20),param_1 + 0x38,plVar1,0x3e800000,0x3e800000,
             *(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x218));
  lVar2 = param_1 + 0x78;
  puVar9 = (undefined4 *)(param_3 + 0x10);
  lVar16 = param_1 - param_3;
  uVar14 = uVar15;
  do {
    fVar18 = (float)roundf((float)((longlong)((float)puVar9[-4] * 48000.0) & 0xffffffff) * 0.0078125
                          );
    iVar3 = *(int *)((longlong)puVar9 + lVar16 + 0x218);
    uVar19 = *(undefined4 *)(lVar16 + 0x228 + (longlong)puVar9);
    lVar8 = *plVar1 + *(ushort *)(param_1 + 0x68) * uVar15 * 4;
    iVar10 = (int)(longlong)fVar18 << 7;
    if (iVar10 == iVar3) {
      uVar20 = *puVar9;
    }
    else {
      uVar20 = *puVar9;
      FUN_144d5dce0(lVar2,lVar8,param_2,uVar14,iVar3,uVar19);
      uVar19 = 0;
      lVar8 = *plVar1 + *(ushort *)(param_1 + 0x68) * uVar15 * 4;
    }
    FUN_144d5dce0(lVar2,lVar8,param_2,uVar14,iVar10,CONCAT44(uVar20,uVar19));
    *(int *)((longlong)puVar9 + lVar16 + 0x218) = iVar10;
    uVar6 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar6;
    uVar15 = uVar15 + 1;
    *(undefined4 *)(lVar16 + 0x228 + (longlong)puVar9) = *puVar9;
    puVar9 = puVar9 + 1;
  } while (uVar6 < 4);
  memset(*(void **)(param_1 + 0x70),0,(ulonglong)*(ushort *)(param_1 + 0x30) << 4);
  uVar12 = 0;
  local_10b0 = 0;
  puVar9 = (undefined4 *)(param_3 + 0x20);
  uVar15 = uVar12;
  uVar14 = uVar12;
  uVar17 = uVar12;
  do {
    uVar19 = *puVar9;
    lVar16 = *plVar1 + *(ushort *)(param_1 + 0x68) * uVar17 * 4;
    uVar6 = (uint)param_2;
    if (((((uint)uVar14 < 4) && (lVar16 != 0)) && (param_2 != 0)) &&
       (((int)uVar6 < *(int *)(param_1 + 0x94) && (param_2 < 0x401)))) {
      memset(local_1098,0,0x1000);
      memset(local_1098,0,(ulonglong)((uint)param_2 * 4));
      plVar5 = *(longlong **)(uVar15 + 8 + lVar2);
      if (plVar5 != (longlong *)0x0) {
        uVar11 = *(uint *)(uVar15 + 0x18 + lVar2);
        uVar4 = *(uint *)(uVar15 + 0x1c + lVar2);
        lVar8 = *(longlong *)(uVar15 + 0x10 + lVar2);
        if (param_2 + uVar11 < uVar4) {
          (**(code **)(*plVar5 + 0x18))
                    (plVar5,lVar8 + (ulonglong)uVar11 * 4,local_1098,0x3f800000,0x3f800000,param_2);
        }
        else {
          uVar13 = (short)uVar4 - (short)uVar11;
          (**(code **)(*plVar5 + 0x18))
                    (plVar5,lVar8 + (ulonglong)uVar11 * 4,local_1098,lVar8,0x3f800000,uVar13);
          plVar5 = *(longlong **)(uVar15 + 8 + lVar2);
          (**(code **)(*plVar5 + 0x18))
                    (plVar5,*(undefined8 *)(uVar15 + 0x10 + lVar2),
                     local_1098 + (ulonglong)uVar13 * 4,0x3f800000,0x3f800000,param_2 - uVar13);
        }
      }
      FUN_144d5d500(local_10b0 + 0x80 + lVar2,local_1098,lVar16,uVar6,uVar19);
    }
    local_10b0 = local_10b0 + 0x48;
    uVar11 = (uint)uVar14 + 1;
    uVar14 = (ulonglong)uVar11;
    uVar17 = uVar17 + 1;
    puVar9 = puVar9 + 1;
    uVar15 = uVar15 + 0x20;
  } while (uVar11 < 4);
  lVar16 = 4;
  do {
    memset((void *)(*param_4 + *(ushort *)(param_4 + 2) * uVar12 * 4),0,
           (ulonglong)*(ushort *)(param_1 + 0x30) << 2);
    uVar12 = uVar12 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
            (*(longlong **)(param_1 + 0x20),plVar1,param_4,0x3e800000,0x3e800000,
             *(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x220));
  memset(*(void **)(param_1 + 0x50),0,(ulonglong)*(ushort *)(param_1 + 0x30) << 4);
  memset(*(void **)(param_1 + 0x70),0,(ulonglong)*(ushort *)(param_1 + 0x30) << 4);
  FUN_144d5de50(lVar2,uVar6);
  return;
}



// FUNCTION 144d5eda0 FUN_144d5eda0 body=43 status=ok
// SIG undefined FUN_144d5eda0(void)

undefined8 * FUN_144d5eda0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x298);
  }
  return param_1;
}



// FUNCTION 144d5edd0 FUN_144d5edd0 body=481 status=ok
// SIG undefined FUN_144d5edd0(void)

undefined8 * FUN_144d5edd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x298,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\AcousticsMixer\\SoundEnginePlugin\\AcousticsMixerFX.cpp"
                      ,0x15d);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0x2b;
    *puVar1 = &PTR_FUN_1499d22f8;
    *(undefined8 *)((longlong)puVar1 + 100) = 0x2b;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(uint *)(puVar1 + 8) = *(uint *)(puVar1 + 8) & 0xff;
    *(undefined1 *)(puVar1 + 0xc) = 0;
    *(uint *)(puVar1 + 0xc) = *(uint *)(puVar1 + 0xc) & 0xff;
    puVar1[7] = 0;
    puVar1[0xb] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    *(undefined4 *)(puVar1 + 0x49) = 0x3cf5c28f;
    *(undefined4 *)((longlong)puVar1 + 0x24c) = 0x3d4ccccd;
    *(undefined4 *)(puVar1 + 0x4a) = 0x3d8f5c29;
    *(undefined4 *)((longlong)puVar1 + 0x254) = 0x3e051eb8;
    *(undefined4 *)(puVar1 + 0x4b) = 0x3e99999a;
    *(undefined4 *)((longlong)puVar1 + 0x25c) = 0x3e4ccccd;
    *(undefined4 *)(puVar1 + 0x4c) = 0x3dcccccd;
    *(undefined4 *)((longlong)puVar1 + 0x264) = 0x3d4ccccd;
    *(undefined4 *)(puVar1 + 0x4d) = 0x3dcccccd;
    *(undefined4 *)((longlong)puVar1 + 0x26c) = 0x3e4ccccd;
    *(undefined4 *)(puVar1 + 0x4e) = 0x3e4ccccd;
    *(undefined8 *)((longlong)puVar1 + 0x274) = 0x3dcccccd;
    *(undefined4 *)((longlong)puVar1 + 0x27c) = 0;
    puVar1[0x50] = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x51) = 0x3e19999a;
    *(undefined8 *)((longlong)puVar1 + 0x28c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x294) = 0x3e19999a;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144d5efc0 FUN_144d5efc0 body=50 status=ok
// SIG undefined FUN_144d5efc0(void)

void FUN_144d5efc0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))
                    (param_1,0x48,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\AcousticsMixer\\SoundEnginePlugin\\AcousticsMixerFX.cpp"
                     ,0x162);
  if (lVar1 != 0) {
    FUN_14513e260(lVar1);
    return;
  }
  return;
}



// FUNCTION 144d5f000 FUN_144d5f000 body=130 status=ok
// SIG undefined FUN_144d5f000(void)

undefined4 FUN_144d5f000(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    if (param_2 == 0) {
      uVar1 = 0xffffffff;
    }
    else if (*(int *)(param_2 + 0x18) < 0) {
      uVar1 = 0xfffffff7;
    }
    else {
      LOCK();
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      UNLOCK();
      uVar1 = 0xfffffff8;
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x50) + 0x18) ==
          *(longlong *)(**(longlong **)(param_2 + 0x20) + 0x18)) {
        uVar1 = 0;
      }
      if ((*(int *)(param_2 + 0x18) != 0) && (-1 < *(int *)(param_2 + 0x18))) {
        LOCK();
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
        UNLOCK();
      }
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
      return uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 144d5f090 FUN_144d5f090 body=478 status=ok
// SIG undefined FUN_144d5f090(void)

undefined1 *
FUN_144d5f090(int *param_1,ulonglong param_2,int param_3,undefined4 param_4,longlong *param_5,
             longlong *param_6)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (((((param_1 == (int *)0x0) || (param_5 == (longlong *)0x0)) || (*param_5 != 0)) ||
      ((param_6 == (longlong *)0x0 || (*param_6 == 0)))) || (param_6[1] == 0)) {
    puVar3 = (undefined1 *)0xffffffff;
  }
  else if (param_2 < 0x10) {
    puVar3 = (undefined1 *)0xfffffffe;
  }
  else if ((*param_1 == 0x66665f5f) && ((char)param_1[1] == 'x')) {
    bVar1 = *(byte *)((longlong)param_1 + 6);
    if (bVar1 < 2) {
      if (*(char *)((longlong)param_1 + 7) == '\x02') {
        if ((uint)param_1[2] == param_2) {
          if (param_3 != 0) {
            iVar2 = FUN_14513e5d0(param_1 + 4,(ulonglong)(uint)param_1[2] - 0x10);
            if (param_1[3] != iVar2) {
              return (undefined1 *)0xfffffff9;
            }
            bVar1 = *(byte *)((longlong)param_1 + 6);
          }
          *param_5 = 0;
          puVar3 = (undefined1 *)(ulonglong)(bVar1 == 0);
          puVar4 = (undefined4 *)(*(code *)*param_6)(0x28,0,param_6[2]);
          if (puVar4 != (undefined4 *)0x0) {
            lVar5 = param_6[2];
            local_38 = (undefined4)*param_6;
            uStack_34 = (undefined4)((ulonglong)*param_6 >> 0x20);
            uStack_30 = (undefined4)param_6[1];
            uStack_2c = (undefined4)((ulonglong)param_6[1] >> 0x20);
            *puVar4 = local_38;
            puVar4[1] = uStack_34;
            puVar4[2] = uStack_30;
            puVar4[3] = uStack_2c;
            *(longlong *)(puVar4 + 4) = lVar5;
            puVar4[6] = 0;
            *(undefined8 *)(puVar4 + 8) = 0;
            lVar5 = (*(code *)*param_6)(0xa0,0,param_6[2]);
            if (lVar5 != 0) {
              uVar6 = FUN_14513f3c0(lVar5,param_1,param_2);
              *(undefined8 *)(puVar4 + 8) = uVar6;
            }
            FUN_14513f440(*(undefined8 *)(puVar4 + 8),param_4,param_6);
            *param_5 = (longlong)puVar4;
          }
        }
        else {
          puVar3 = &DAT_fffffffb;
        }
      }
      else {
        puVar3 = (undefined1 *)0xfffffffc;
      }
    }
    else {
      puVar3 = &DAT_fffffffd;
    }
  }
  else {
    puVar3 = (undefined1 *)0xfffffffe;
  }
  return puVar3;
}



// FUNCTION 144d5f270 FUN_144d5f270 body=179 status=ok
// SIG undefined FUN_144d5f270(void)

undefined1 * FUN_144d5f270(longlong param_1,longlong param_2,ulonglong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  if (param_1 == 0) {
    return (undefined1 *)0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    if (param_3 == (ulonglong *)0x0) {
      puVar3 = (undefined1 *)0xffffffff;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x20);
      puVar8 = (undefined1 *)(ulonglong)*(ushort *)(*(longlong *)(lVar2 + 0x50) + 0x18);
      if (param_2 == 0) {
        *param_3 = (ulonglong)puVar8;
        puVar3 = (undefined1 *)0x0;
      }
      else if ((undefined1 *)*param_3 == puVar8) {
        puVar4 = (undefined1 *)0x0;
        puVar3 = puVar4;
        puVar6 = puVar4;
        puVar7 = puVar4;
        if (puVar8 != (undefined1 *)0x0) {
          do {
            piVar5 = (int *)(*(longlong *)(lVar2 + 0x50) + 0x20);
            iVar1 = *piVar5;
            puVar3 = puVar4;
            if (iVar1 != 0) {
              puVar3 = (undefined1 *)((longlong)iVar1 + (longlong)piVar5);
            }
            *(undefined8 *)(param_2 + (longlong)puVar6 * 8) =
                 *(undefined8 *)(puVar7 + (longlong)puVar3);
            puVar6 = puVar6 + 1;
            puVar3 = (undefined1 *)0x0;
            puVar7 = puVar7 + 0x38;
          } while (puVar6 < puVar8);
        }
      }
      else {
        puVar3 = (undefined1 *)0xffffffff;
      }
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return puVar3;
  }
  return &DAT_fffffff7;
}



// FUNCTION 144d5f330 FUN_144d5f330 body=214 status=ok
// SIG undefined FUN_144d5f330(void)

undefined1 * FUN_144d5f330(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((param_1 == (longlong *)0x0) || (lVar6 = *param_1, lVar6 == 0)) {
    return &DAT_ffffffff;
  }
  if (*(int *)(lVar6 + 0x18) < 0) {
LAB_144d5f37e:
    lVar6 = *param_1;
    lVar1 = *(longlong *)(lVar6 + 0x20);
    if ((param_2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)(lVar1 + 0x50);
      *param_3 = *(undefined8 *)(lVar1 + 0x58);
      lVar6 = *param_1;
    }
    pcVar2 = *(code **)(lVar6 + 8);
    uVar3 = *(undefined8 *)(lVar6 + 0x10);
    FUN_14513f510(*(undefined8 *)(lVar6 + 0x20),lVar6);
    uVar5 = 0;
    if (*(longlong *)(lVar6 + 0x20) != 0) {
      FUN_14513f430();
      uVar5 = *(undefined8 *)(lVar6 + 0x20);
    }
    (**(code **)(lVar6 + 8))(uVar5,0,*(undefined8 *)(lVar6 + 0x10));
    *(undefined8 *)(lVar6 + 0x20) = 0;
    (*pcVar2)(*param_1,0,uVar3);
    *param_1 = 0;
    puVar4 = (undefined1 *)0x0;
  }
  else {
    if (*(int *)(lVar6 + 0x18) == 0) {
      LOCK();
      bVar7 = *(int *)(lVar6 + 0x18) == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x18) = -1;
      }
      UNLOCK();
      if (bVar7) goto LAB_144d5f37e;
    }
    puVar4 = &DAT_fffffff6;
  }
  return puVar4;
}



// FUNCTION 144d5f410 FUN_144d5f410 body=513 status=ok
// SIG undefined FUN_144d5f410(void)

undefined1 *
FUN_144d5f410(int *param_1,ulonglong param_2,int param_3,longlong param_4,longlong *param_5,
             longlong *param_6,longlong *param_7)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((((((param_1 == (int *)0x0) || (param_4 == 0)) || (param_5 == (longlong *)0x0)) ||
       ((*param_5 != 0 || (param_6 == (longlong *)0x0)))) ||
      ((*param_6 == 0 || ((param_7 == (longlong *)0x0 || (*param_7 == 0)))))) || (param_7[1] == 0))
  {
    puVar3 = (undefined1 *)0xffffffff;
  }
  else if (param_2 < 0x10) {
    puVar3 = (undefined1 *)0xfffffffe;
  }
  else if ((*param_1 == 0x66665f5f) && ((char)param_1[1] == 'x')) {
    bVar1 = *(byte *)((longlong)param_1 + 6);
    if (bVar1 < 2) {
      if (*(char *)((longlong)param_1 + 7) == '\x01') {
        if ((uint)param_1[2] == param_2) {
          if (param_3 != 0) {
            iVar2 = FUN_14513e5d0(param_1 + 4,(ulonglong)(uint)param_1[2] - 0x10);
            if (param_1[3] != iVar2) {
              return (undefined1 *)0xfffffff9;
            }
            bVar1 = *(byte *)((longlong)param_1 + 6);
          }
          *param_5 = 0;
          puVar3 = (undefined1 *)(ulonglong)(bVar1 == 0);
          puVar4 = (undefined4 *)(*(code *)*param_7)(0x28,0,param_7[2]);
          if (puVar4 != (undefined4 *)0x0) {
            lVar5 = param_7[2];
            local_48 = (undefined4)*param_7;
            uStack_44 = (undefined4)((ulonglong)*param_7 >> 0x20);
            uStack_40 = (undefined4)param_7[1];
            uStack_3c = (undefined4)((ulonglong)param_7[1] >> 0x20);
            *puVar4 = local_48;
            puVar4[1] = uStack_44;
            puVar4[2] = uStack_40;
            puVar4[3] = uStack_3c;
            *(longlong *)(puVar4 + 4) = lVar5;
            puVar4[6] = 0;
            *(undefined8 *)(puVar4 + 8) = 0;
            lVar5 = (*(code *)*param_7)(0xa0,0,param_7[2]);
            if (lVar5 != 0) {
              uVar6 = FUN_14513e610(lVar5,puVar4,param_1,param_2);
              *(undefined8 *)(puVar4 + 8) = uVar6;
            }
            FUN_14513e6a0(*(undefined8 *)(puVar4 + 8),param_4,param_6,param_7);
            *param_5 = (longlong)puVar4;
          }
        }
        else {
          puVar3 = &DAT_fffffffb;
        }
      }
      else {
        puVar3 = (undefined1 *)0xfffffffc;
      }
    }
    else {
      puVar3 = &DAT_fffffffd;
    }
  }
  else {
    puVar3 = (undefined1 *)0xfffffffe;
  }
  return puVar3;
}



// FUNCTION 144d5f620 FUN_144d5f620 body=152 status=ok
// SIG undefined FUN_144d5f620(void)

undefined4 FUN_144d5f620(longlong param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    if (param_3 == (ulonglong *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x20);
      uVar5 = (ulonglong)*(ushort *)(*(longlong *)(lVar1 + 0x50) + 0x20);
      if (param_2 == 0) {
        *param_3 = uVar5;
        uVar2 = 0;
      }
      else if (*param_3 == uVar5) {
        uVar2 = 0;
        uVar3 = 0;
        if (uVar5 != 0) {
          lVar4 = 0;
          do {
            lVar4 = lVar4 + 0x10;
            *(undefined8 *)(param_2 + uVar3 * 8) =
                 *(undefined8 *)(*(longlong *)(lVar1 + 0x50) + 0x18 + lVar4);
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar5);
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return uVar2;
  }
  return 0xfffffff7;
}



// FUNCTION 144d5f6c0 FUN_144d5f6c0 body=290 status=ok
// SIG undefined FUN_144d5f6c0(void)

undefined1 * FUN_144d5f6c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  
  if ((param_1 == (longlong *)0x0) || (lVar3 = *param_1, lVar3 == 0)) {
    return &DAT_ffffffff;
  }
  if (*(int *)(lVar3 + 0x18) < 0) {
    return &DAT_fffffff7;
  }
  LOCK();
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  UNLOCK();
  lVar3 = *param_1;
  cVar6 = FUN_14513e9e0(*(undefined8 *)(lVar3 + 0x20));
  if (cVar6 == '\0') {
    if (0 < *(int *)(lVar3 + 0x18)) {
      LOCK();
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + -1;
      UNLOCK();
      return &DAT_fffffff6;
    }
  }
  else {
    if (0 < *(int *)(lVar3 + 0x18)) {
      LOCK();
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + -1;
      UNLOCK();
    }
    iVar2 = *(int *)(*param_1 + 0x18);
    if (iVar2 < 0) {
LAB_144d5f752:
      if ((param_2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
        lVar3 = *(longlong *)(*param_1 + 0x20);
        *param_2 = *(undefined8 *)(lVar3 + 0x50);
        *param_3 = *(undefined8 *)(lVar3 + 0x58);
      }
      lVar3 = *param_1;
      pcVar4 = *(code **)(lVar3 + 8);
      uVar5 = *(undefined8 *)(lVar3 + 0x10);
      lVar8 = 0;
      if (lVar3 != 0) {
        FUN_14513e8c0(*(undefined8 *)(lVar3 + 0x20),lVar3);
        uVar7 = 0;
        if (*(longlong *)(lVar3 + 0x20) != 0) {
          FUN_14513e690();
          uVar7 = *(undefined8 *)(lVar3 + 0x20);
        }
        (**(code **)(lVar3 + 8))(uVar7,0,*(undefined8 *)(lVar3 + 0x10));
        *(undefined8 *)(lVar3 + 0x20) = 0;
        lVar8 = *param_1;
      }
      (*pcVar4)(lVar8,0,uVar5);
      *param_1 = 0;
      return (undefined1 *)0x0;
    }
    if (iVar2 == 0) {
      piVar1 = (int *)(*param_1 + 0x18);
      LOCK();
      bVar9 = *piVar1 == 0;
      if (bVar9) {
        *piVar1 = -1;
      }
      UNLOCK();
      if (bVar9) goto LAB_144d5f752;
    }
  }
  return &DAT_fffffff6;
}



// FUNCTION 144d5f7f0 FUN_144d5f7f0 body=523 status=ok
// SIG undefined FUN_144d5f7f0(void)

undefined1 *
FUN_144d5f7f0(int *param_1,ulonglong param_2,int param_3,longlong *param_4,longlong *param_5)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (((((param_1 != (int *)0x0) && (param_4 != (longlong *)0x0)) && (*param_4 == 0)) &&
      ((param_5 != (longlong *)0x0 && (*param_5 != 0)))) && (param_5[1] != 0)) {
    if (param_2 < 0x10) {
      puVar4 = (undefined1 *)0xfffffffe;
    }
    else if ((*param_1 == 0x66665f5f) && ((char)param_1[1] == 'x')) {
      bVar2 = *(byte *)((longlong)param_1 + 6);
      if (bVar2 < 2) {
        if (*(char *)((longlong)param_1 + 7) == '\x03') {
          if ((uint)param_1[2] == param_2) {
            if (param_3 != 0) {
              iVar3 = FUN_14513e5d0(param_1 + 4,(ulonglong)(uint)param_1[2] - 0x10);
              if (param_1[3] != iVar3) {
                return (undefined1 *)0xfffffff9;
              }
              bVar2 = *(byte *)((longlong)param_1 + 6);
            }
            *param_4 = 0;
            puVar4 = (undefined1 *)(ulonglong)(bVar2 == 0);
            puVar5 = (undefined4 *)(*(code *)*param_5)(0x28,0,param_5[2]);
            if (puVar5 != (undefined4 *)0x0) {
              lVar1 = param_5[2];
              local_38 = (undefined4)*param_5;
              uStack_34 = (undefined4)((ulonglong)*param_5 >> 0x20);
              uStack_30 = (undefined4)param_5[1];
              uStack_2c = (undefined4)((ulonglong)param_5[1] >> 0x20);
              *puVar5 = local_38;
              puVar5[1] = uStack_34;
              puVar5[2] = uStack_30;
              puVar5[3] = uStack_2c;
              *(longlong *)(puVar5 + 4) = lVar1;
              puVar5[6] = 0;
              *(undefined8 *)(puVar5 + 8) = 0;
              puVar6 = (undefined8 *)(*(code *)*param_5)(0x20,0,param_5[2]);
              if (puVar6 != (undefined8 *)0x0) {
                *puVar6 = param_1;
                puVar6[1] = param_2;
                puVar6[2] = 0;
                puVar6[3] = 0;
                if ((*(char *)((longlong)param_1 + 6) != '\0') &&
                   (iVar3 = *(int *)((longlong)param_1 + (param_2 - 8)),
                   iVar3 != *(int *)((longlong)param_1 + (param_2 - 4)))) {
                  puVar6[2] = (longlong)iVar3 + (longlong)param_1;
                  puVar6[3] = (longlong)*(int *)((longlong)param_1 + (param_2 - 4)) +
                              (longlong)param_1;
                }
                *(undefined8 **)(puVar5 + 8) = puVar6;
              }
              *param_4 = (longlong)puVar5;
            }
          }
          else {
            puVar4 = &DAT_fffffffb;
          }
        }
        else {
          puVar4 = (undefined1 *)0xfffffffc;
        }
      }
      else {
        puVar4 = &DAT_fffffffd;
      }
    }
    else {
      puVar4 = (undefined1 *)0xfffffffe;
    }
    return puVar4;
  }
  return (undefined1 *)0xffffffff;
}



// FUNCTION 144d5fa00 FUN_144d5fa00 body=135 status=ok
// SIG undefined FUN_144d5fa00(void)

undefined4 FUN_144d5fa00(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    uVar3 = 0xfffffff7;
  }
  else {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    if ((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
      uVar3 = 0xffffffff;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x20);
      lVar2 = *plVar1;
      uVar4 = (ulonglong)*(uint *)(lVar2 + 0x20);
      if (uVar4 < 2) {
        uVar3 = 0xfffffffe;
      }
      else {
        *param_2 = (int)*(undefined8 *)(lVar2 + 0x24);
        uVar3 = 0;
        *param_3 = (int)*(undefined8 *)(*plVar1 + 0x18 + uVar4 * 0xc);
      }
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 144d5fa90 FUN_144d5fa90 body=208 status=ok
// SIG undefined FUN_144d5fa90(void)

undefined1 * FUN_144d5fa90(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) {
    return &DAT_ffffffff;
  }
  if (*(int *)(lVar1 + 0x18) < 0) {
LAB_144d5fadc:
    if ((param_2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar2 = *(undefined8 **)(*param_1 + 0x20);
      *param_2 = *puVar2;
      *param_3 = puVar2[1];
    }
    lVar1 = *param_1;
    pcVar3 = *(code **)(lVar1 + 8);
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)(lVar1 + 0x20);
      uVar7 = 0;
      pcVar6 = pcVar3;
      uVar8 = uVar4;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar7 = *(undefined8 *)(lVar1 + 0x20);
        uVar8 = *(undefined8 *)(lVar1 + 0x10);
        pcVar6 = *(code **)(lVar1 + 8);
      }
      (*pcVar6)(uVar7,0,uVar8);
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    (*pcVar3)(*param_1,0,uVar4);
    *param_1 = 0;
    puVar5 = (undefined1 *)0x0;
  }
  else {
    if (*(int *)(lVar1 + 0x18) == 0) {
      LOCK();
      bVar9 = *(int *)(lVar1 + 0x18) == 0;
      if (bVar9) {
        *(int *)(lVar1 + 0x18) = -1;
      }
      UNLOCK();
      if (bVar9) goto LAB_144d5fadc;
    }
    puVar5 = &DAT_fffffff6;
  }
  return puVar5;
}



// FUNCTION 144d5fb60 FUN_144d5fb60 body=281 status=ok
// SIG undefined FUN_144d5fb60(void)

undefined4 FUN_144d5fb60(longlong param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong local_res8;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    return 0xfffffff7;
  }
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  UNLOCK();
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
    goto LAB_144d5fc45;
  }
  if (*(int *)(param_2 + 0x18) < 0) {
    uVar3 = 0xfffffff7;
    goto LAB_144d5fc45;
  }
  LOCK();
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(param_1 + 0x20);
  cVar2 = FUN_14513ea50(lVar1);
  if (cVar2 == '\0') {
    uVar3 = 0xfffffff8;
  }
  else {
    local_res8 = 0xffffffff;
    if (param_3 != (ulonglong *)0x0) {
      local_res8 = *param_3;
      if ((local_res8 != 0xffffffff) && (*(ulonglong *)(lVar1 + 0x78) <= local_res8)) {
        uVar3 = 0xfffffffa;
        goto LAB_144d5fc2c;
      }
    }
    cVar2 = FUN_14513ea70(lVar1,param_2,&local_res8);
    if (cVar2 == '\0') {
      uVar3 = 0xfffffff6;
    }
    else {
      if (param_3 != (ulonglong *)0x0) {
        *param_3 = local_res8;
      }
      uVar3 = 0;
    }
  }
LAB_144d5fc2c:
  if (0 < *(int *)(param_2 + 0x18)) {
    LOCK();
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
    UNLOCK();
  }
LAB_144d5fc45:
  if (0 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 144d5fc80 FUN_144d5fc80 body=88 status=ok
// SIG undefined FUN_144d5fc80(void)

undefined4 FUN_144d5fc80(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    cVar1 = FUN_14513eb40(*(undefined8 *)(param_1 + 0x20));
    uVar2 = 0;
    if (cVar1 == '\0') {
      uVar2 = 0xfffffff6;
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return uVar2;
  }
  return 0xfffffff7;
}



// FUNCTION 144d5fce0 FUN_144d5fce0 body=88 status=ok
// SIG undefined FUN_144d5fce0(void)

undefined4 FUN_144d5fce0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    cVar1 = FUN_14513ebb0(*(undefined8 *)(param_1 + 0x20));
    uVar2 = 0;
    if (cVar1 == '\0') {
      uVar2 = 0xfffffff6;
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return uVar2;
  }
  return 0xfffffff7;
}



// FUNCTION 144d5fd40 FUN_144d5fd40 body=106 status=ok
// SIG undefined FUN_144d5fd40(void)

undefined4 FUN_144d5fd40(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    return 0xfffffff7;
  }
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  UNLOCK();
  if (param_2 == 0xffffffff) {
    FUN_14513ec70();
  }
  else {
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78) <= param_2) {
      uVar1 = 0xfffffffa;
      goto LAB_144d5fd8c;
    }
    FUN_14513ed00();
  }
  uVar1 = 0;
LAB_144d5fd8c:
  if (*(int *)(param_1 + 0x18) < 1) {
    return uVar1;
  }
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 144d5fdb0 FUN_144d5fdb0 body=211 status=ok
// SIG undefined FUN_144d5fdb0(void)

undefined4 FUN_144d5fdb0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    if ((((param_2 == (longlong *)0x0) || (*param_2 != 0)) || (param_3 == (longlong *)0x0)) ||
       ((*param_3 == 0 || (param_3[1] == 0)))) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      *param_2 = 0;
      lVar1 = (*(code *)*param_3)(0xb0,0,param_3[2]);
      if (lVar1 != 0) {
        lVar1 = FUN_144d602d0(lVar1,*(longlong *)(param_1 + 0x20) + 0x50,
                              *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x78),param_3);
        *param_2 = lVar1;
      }
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return uVar2;
  }
  return 0xfffffff7;
}



// FUNCTION 144d5fe90 FUN_144d5fe90 body=198 status=ok
// SIG undefined FUN_144d5fe90(void)

undefined4 FUN_144d5fe90(longlong param_1,void *param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    if ((param_2 == (void *)0x0) || (param_3 != *(longlong *)(param_1 + 0x78))) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar1 = _Mtx_lock(param_1 + 0x20);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_C_error(iVar1);
      }
      if (param_3 != 0) {
        memcpy(param_2,*(void **)(param_1 + 0x88),param_3 << 2);
      }
      uVar2 = 0;
      _Mtx_unlock(param_1 + 0x20);
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return uVar2;
  }
  return 0xfffffff7;
}



// FUNCTION 144d5ff60 FUN_144d5ff60 body=205 status=ok
// SIG undefined FUN_144d5ff60(void)

undefined4 FUN_144d5ff60(longlong param_1,void *param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    if (param_2 == (void *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar1 = _Mtx_lock(param_1 + 0x20);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_C_error(iVar1);
      }
      if (param_3 == *(longlong *)(param_1 + 0x80)) {
        memcpy(param_2,*(void **)(param_1 + 0xa0),*(longlong *)(param_1 + 0x80) * 4);
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
      _Mtx_unlock(param_1 + 0x20);
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    return uVar2;
  }
  return 0xfffffff7;
}



// FUNCTION 144d60030 FUN_144d60030 body=136 status=ok
// SIG undefined FUN_144d60030(void)

undefined1 * FUN_144d60030(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) {
    return (undefined1 *)0xffffffff;
  }
  if (*(int *)(lVar1 + 0x18) < 0) {
LAB_144d60069:
    lVar1 = *param_1;
    pcVar2 = *(code **)(lVar1 + 8);
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    lVar4 = 0;
    if (lVar1 != 0) {
      FUN_144d60450(lVar1,0);
      lVar4 = *param_1;
    }
    (*pcVar2)(lVar4,0,uVar3);
    *param_1 = 0;
    return (undefined1 *)0x0;
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
    LOCK();
    bVar5 = *(int *)(lVar1 + 0x18) == 0;
    if (bVar5) {
      *(int *)(lVar1 + 0x18) = -1;
    }
    UNLOCK();
    if (bVar5) goto LAB_144d60069;
  }
  return &DAT_fffffff6;
}



// FUNCTION 144d600c0 FUN_144d600c0 body=223 status=ok
// SIG undefined FUN_144d600c0(void)

undefined4 FUN_144d600c0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x18) < 0) {
    uVar2 = 0xfffffff7;
  }
  else {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    UNLOCK();
    if (param_2 == 0) {
      uVar2 = 0xffffffff;
    }
    else if (*(int *)(param_2 + 0x18) < 0) {
      uVar2 = 0xfffffff7;
    }
    else {
      LOCK();
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      UNLOCK();
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x18) == *(longlong *)(param_2 + 0x70)) {
        iVar3 = _Mtx_lock(param_2 + 0x20);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_C_error(iVar3);
        }
        FUN_14513ede0(lVar1,param_3,param_2);
        uVar2 = 0;
        _Mtx_unlock(param_2 + 0x20);
      }
      else {
        uVar2 = 0xfffffff8;
      }
      if (0 < *(int *)(param_2 + 0x18)) {
        LOCK();
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
        UNLOCK();
      }
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
  }
  return uVar2;
}



// FUNCTION 144d601a0 FUN_144d601a0 body=275 status=ok
// SIG undefined FUN_144d601a0(void)

undefined4 FUN_144d601a0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    return 0xfffffff7;
  }
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  UNLOCK();
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
    goto LAB_144d6027c;
  }
  if (*(int *)(param_2 + 0x18) < 0) {
    uVar3 = 0xfffffff7;
    goto LAB_144d6027c;
  }
  LOCK();
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  UNLOCK();
  if (param_3 == 0) {
LAB_144d60263:
    uVar3 = 0xffffffff;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (param_4 != *(ushort *)(*(longlong *)(lVar1 + 0x50) + 0x18)) goto LAB_144d60263;
    if (*(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x10) == *(longlong *)(param_2 + 0x70)) {
      iVar2 = _Mtx_lock(param_2 + 0x20);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_C_error(iVar2);
      }
      uVar3 = *(undefined4 *)(param_2 + 0xa8);
      FUN_14513f5d0(lVar1,param_2);
      _Mtx_unlock(param_2 + 0x20);
      FUN_14513f6d0(lVar1,uVar3,param_3);
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffff8;
    }
  }
  if (0 < *(int *)(param_2 + 0x18)) {
    LOCK();
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
    UNLOCK();
  }
LAB_144d6027c:
  if (0 < *(int *)(param_1 + 0x18)) {
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 144d602d0 FUN_144d602d0 body=375 status=ok
// SIG undefined FUN_144d602d0(void)

undefined4 *
FUN_144d602d0(undefined4 *param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined4 *local_res8;
  undefined4 local_res10 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = param_4[2];
  local_38 = (undefined4)*param_4;
  uStack_34 = (undefined4)((ulonglong)*param_4 >> 0x20);
  uStack_30 = (undefined4)param_4[1];
  uStack_2c = (undefined4)((ulonglong)param_4[1] >> 0x20);
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  *(undefined8 *)(param_1 + 4) = uVar2;
  param_1[6] = 0;
  local_res8 = param_1;
  _Mtx_init_in_situ(param_1 + 8);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(*param_2 + 0x18);
  *(longlong *)(param_1 + 0x1e) = param_3;
  *(ulonglong *)(param_1 + 0x20) = (ulonglong)*(ushort *)(*param_2 + 0x20);
  pvVar1 = (void *)(*(code *)*param_4)(param_3 * 4,0,param_4[2]);
  *(void **)(param_1 + 0x22) = pvVar1;
  if (*(longlong *)(param_1 + 0x1e) != 0) {
    memset(pvVar1,0,*(longlong *)(param_1 + 0x1e) * 4);
  }
  uVar2 = (*(code *)*param_4)(*(longlong *)(param_1 + 0x1e) * 4,0,param_4[2]);
  *(undefined8 *)(param_1 + 0x24) = uVar2;
  local_res10[0] = 0;
  FUN_144d60520(uVar2,*(undefined8 *)(param_1 + 0x1e),local_res10);
  pvVar1 = (void *)(*(code *)*param_4)(*(longlong *)(param_1 + 0x1e) * 8,0,param_4[2]);
  *(void **)(param_1 + 0x26) = pvVar1;
  if (*(longlong *)(param_1 + 0x1e) != 0) {
    memset(pvVar1,0,*(longlong *)(param_1 + 0x1e) * 8);
  }
  uVar2 = (*(code *)*param_4)(*(longlong *)(param_1 + 0x20) * 4,0,param_4[2]);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  local_res8 = (undefined4 *)((ulonglong)local_res8 & 0xffffffff00000000);
  FUN_144d60520(uVar2,*(undefined8 *)(param_1 + 0x20),&local_res8);
  param_1[0x2a] = 0;
  return param_1;
}



// FUNCTION 144d60450 FUN_144d60450 body=205 status=ok
// SIG undefined FUN_144d60450(void)

longlong FUN_144d60450(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x20);
  if (iVar1 == 0) {
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0xa0),0,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x98),0,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x98) = 0;
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x90) = 0;
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x88),0,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x88) = 0;
    _Mtx_unlock(param_1 + 0x20);
    _Mtx_destroy_in_situ(param_1 + 0x20);
    if ((param_2 & 1) != 0) {
      thunk_FUN_1400020a8(param_1,0xb0);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_C_error(iVar1);
}



// FUNCTION 144d60520 FUN_144d60520 body=168 status=ok
// SIG undefined FUN_144d60520(void)

int * FUN_144d60520(int *param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    if (*param_3 == 0) {
      memset(param_1,0,param_2 * 4);
      return param_1 + param_2;
    }
    if (3 < param_2) {
      lVar1 = (param_2 - 4 >> 2) + 1;
      param_2 = param_2 + lVar1 * -4;
      do {
        *param_1 = *param_3;
        param_1[1] = *param_3;
        param_1[2] = *param_3;
        param_1[3] = *param_3;
        param_1 = param_1 + 4;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      if (param_2 == 0) {
        return param_1;
      }
    }
    do {
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return param_1;
}



// FUNCTION 144d605d0 FUN_144d605d0 body=10 status=ok
// SIG undefined FUN_144d605d0(void)

void FUN_144d605d0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144d605d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  return;
}



// FUNCTION 144d605e0 FUN_144d605e0 body=284 status=ok
// SIG undefined FUN_144d605e0(void)

undefined8
FUN_144d605e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined2 local_38 [4];
  longlong local_30;
  undefined8 uStack_28;
  undefined2 *local_20;
  longlong lStack_18;
  ulonglong local_10;
  
  uVar3 = FUN_144d61270(param_2,param_3,param_4,param_5);
  pcVar2 = DAT_14c791728;
  pcVar1 = DAT_14c791720;
  if ((int)uVar3 == 1) {
    if (DAT_14c791728 == (code *)0x0) {
      if (((param_4 == (longlong *)0x0) || (*param_4 == 0)) || ((int)param_4[1] == 0)) {
        _guard_check_icall(DAT_14c791720);
        uVar3 = (*pcVar1)(param_1,param_2,param_3,param_5);
      }
      else {
        uVar3 = 0xbad0000c;
      }
    }
    else {
      local_38[0] = 0;
      if (param_4 == (longlong *)0x0) {
        local_30 = 0;
        uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
        lStack_18 = 0;
        local_10 = local_10 & 0xffffff0000000000;
      }
      else {
        local_30 = *param_4;
        uStack_28 = param_4[1];
        lStack_18 = param_4[3];
        local_10 = param_4[4];
      }
      local_20 = local_38;
      _guard_check_icall(DAT_14c791728);
      uVar3 = (*pcVar2)(param_1,param_2,param_3,param_5,&local_30);
    }
  }
  return uVar3;
}



// FUNCTION 144d60700 FUN_144d60700 body=263 status=ok
// SIG undefined FUN_144d60700(void)

undefined8
FUN_144d60700(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined2 local_58 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 *local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  uVar2 = FUN_144d61270(param_4,param_5,param_6,param_7);
  pcVar1 = DAT_14c791730;
  if ((int)uVar2 == 1) {
    if (DAT_14c791730 == (code *)0x0) {
      uVar2 = 0xbad0000c;
    }
    else {
      local_58[0] = 0;
      if (param_6 == (undefined8 *)0x0) {
        local_50 = 0;
        uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
        uStack_38 = 0;
        local_30 = local_30 & 0xffffff0000000000;
      }
      else {
        local_50 = *param_6;
        uStack_48 = param_6[1];
        uStack_38 = param_6[3];
        local_30 = param_6[4];
      }
      local_40 = local_58;
      _guard_check_icall(DAT_14c791730);
      uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_7,&local_50);
    }
  }
  return uVar2;
}



// FUNCTION 144d60810 NVSDK_NGX_D3D11_Shutdown body=7 status=ok
// SIG undefined NVSDK_NGX_D3D11_Shutdown(void)

void NVSDK_NGX_D3D11_Shutdown(void)

{
                    /* 0x4d60810  388  NVSDK_NGX_D3D11_Shutdown */
  NVSDK_NGX_D3D11_Shutdown1(0);
  return;
}



// FUNCTION 144d60820 NVSDK_NGX_D3D11_Shutdown1 body=362 status=ok
// SIG undefined NVSDK_NGX_D3D11_Shutdown1(void)

int NVSDK_NGX_D3D11_Shutdown1(longlong param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
                    /* 0x4d60820  389  NVSDK_NGX_D3D11_Shutdown1 */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7916f8);
  pcVar2 = DAT_14c791740;
  pcVar1 = DAT_14c791738;
  if (param_1 == 0) {
    if (DAT_14c791738 == (code *)0x0) {
      if (DAT_14c791740 == (code *)0x0) goto LAB_144d6095d;
      _guard_check_icall(DAT_14c791740);
      param_1 = 0;
      goto LAB_144d608a8;
    }
    _guard_check_icall(DAT_14c791738);
    iVar3 = (*pcVar1)();
  }
  else {
    if (DAT_14c791740 == (code *)0x0) {
LAB_144d6095d:
      iVar3 = -0x452ffff9;
      goto LAB_144d60962;
    }
    _guard_check_icall(DAT_14c791740);
LAB_144d608a8:
    iVar3 = (*pcVar2)(param_1);
  }
  if (iVar3 == 1) {
    FUN_145140ad0();
    memset(&local_78,0,0x70);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    DAT_14c791720 = 0;
    DAT_14c791728 = 0;
    DAT_14c791730 = 0;
    DAT_14c791738 = (code *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    DAT_14c791740 = (code *)0x0;
    DAT_14c791748 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    DAT_14c791760 = 0;
    DAT_14c791768 = 0;
    local_18 = 0;
    uStack_10 = 0;
    DAT_14c791750 = 0;
    DAT_14c791758 = 0;
    DAT_14c791780._0_4_ = 0;
    DAT_14c791780._4_4_ = 0;
    DAT_14c791788._0_4_ = 0;
    DAT_14c791788._4_4_ = 0;
    DAT_14c791770 = 0;
    DAT_14c791778 = 0;
  }
LAB_144d60962:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7916f8);
  return iVar3;
}


