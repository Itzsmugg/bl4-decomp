// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142535a80 Unwind@142535a80 body=62 status=ok
// SIG undefined Unwind@142535a80(void)

void Unwind_142535a80(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa0));
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0xa8);
  return;
}



// FUNCTION 142535ac0 Unwind@142535ac0 body=93 status=ok
// SIG undefined Unwind@142535ac0(void)

void Unwind_142535ac0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x98);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x90) == 0) {
    FUN_142501400(&DAT_14c793018);
  }
  return;
}



// FUNCTION 142535b20 FUN_142535b20 body=59 status=ok
// SIG undefined FUN_142535b20(void)

void FUN_142535b20(int *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = *param_1 + -1;
  if (*param_1 != 0) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x12);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_1 + 2);
  FUN_1401773f0(param_1);
  return;
}



// FUNCTION 142535b60 FUN_142535b60 body=3 status=ok
// SIG undefined FUN_142535b60(void)

undefined8 FUN_142535b60(void)

{
  return 0;
}



// FUNCTION 142535b70 FUN_142535b70 body=11 status=ok
// SIG undefined FUN_142535b70(void)

void FUN_142535b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142535b80(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 142535b80 FUN_142535b80 body=468 status=ok
// SIG undefined FUN_142535b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142535b80(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1425160a0(param_2);
  if (*param_4 < 1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c793068) {
      FUN_144b3d300(&DAT_14c793068);
      if (DAT_14c793068 == -1) {
        _DAT_14c793058 = 0;
        uRam000000014c793060 = 0;
        _DAT_14c793048 = 0;
        uRam000000014c793050 = 0;
        _DAT_14c793038 = 0;
        uRam000000014c793040 = 0;
        _DAT_14c793028 = 0;
        uRam000000014c793030 = 0;
        _DAT_14c793018 = 0;
        uRam000000014c793020 = 0;
        _Mtx_init_in_situ(&DAT_14c793018,2);
        atexit((_func_5014 *)&LAB_1425367d0);
        _Init_thread_footer(&DAT_14c793068);
      }
    }
    FUN_142501320(&DAT_14c793018);
    puVar3 = (undefined8 *)FUN_142535dd0(param_1,param_4);
    if (puVar3 != (undefined8 *)0x0) {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x60))(param_1,param_3,param_4);
      local_44 = 0xffffffff;
LAB_142535c20:
      do {
        lVar5 = FUN_1425022e0(*puVar3,&local_44);
        if (lVar5 == 0) goto LAB_142535caa;
        uVar1 = *(undefined8 *)(lVar5 + 0x10);
        if (plVar4 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,uVar1);
          if (cVar2 == '\0') goto LAB_142535c20;
        }
        puVar6 = (undefined8 *)thunk_FUN_1424da030(0x40);
        if (puVar6 == (undefined8 *)0x0) {
LAB_142535ca4:
          *param_4 = 7;
          goto LAB_142535caa;
        }
        FUN_1424a6be0(puVar6,uVar1);
        if ((*(byte *)(puVar6 + 1) & 1) != 0) {
          (**(code **)*puVar6)(puVar6,1);
          goto LAB_142535ca4;
        }
        FUN_1425163e0(param_2,puVar6,param_4);
      } while (*param_4 < 1);
      (**(code **)*puVar6)(puVar6,1);
LAB_142535caa:
      if (plVar4 != (longlong *)0x0) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
    FUN_142501400(&DAT_14c793018);
    if (0 < *param_4) {
      FUN_1425160a0(param_2);
    }
  }
  return param_2;
}



// FUNCTION 142535d60 Unwind@142535d60 body=48 status=ok
// SIG undefined Unwind@142535d60(void)

void Unwind_142535d60(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142535d90 Unwind@142535d90 body=51 status=ok
// SIG undefined Unwind@142535d90(void)

void Unwind_142535d90(void)

{
  FUN_142501400(&DAT_14c793018);
  return;
}



// FUNCTION 142535dd0 FUN_142535dd0 body=290 status=ok
// SIG undefined FUN_142535dd0(void)

longlong * FUN_142535dd0(longlong param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  
  if (*param_2 < 1) {
    if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
      return *(longlong **)(param_1 + 0x68);
    }
    plVar2 = (longlong *)thunk_FUN_1424da030(0x58);
    if (plVar2 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      *param_2 = 7;
      return *(longlong **)(param_1 + 0x68);
    }
    *plVar2 = 0;
    if (*param_2 < 1) {
      plVar4 = plVar2 + 1;
      FUN_142502140(plVar4,FUN_1424a9c90,FUN_1424a9cd0,0,param_2);
      if (*param_2 < 1) {
        *plVar2 = (longlong)plVar4;
        FUN_142502340(plVar4,&LAB_1424b70f0);
      }
    }
    *(longlong **)(param_1 + 0x68) = plVar2;
    if (*(longlong *)(param_1 + 0x58) == 0) {
      return plVar2;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x58) + 8);
    if (0 < iVar1) {
      uVar3 = iVar1 + 1;
      do {
        plVar2 = (longlong *)FUN_142516630(*(undefined8 *)(param_1 + 0x58),uVar3 - 2);
        (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(param_1 + 0x68),param_2);
        uVar3 = uVar3 - 1;
      } while (1 < uVar3);
      plVar2 = *(longlong **)(param_1 + 0x68);
    }
    if (*param_2 < 1) {
      return plVar2;
    }
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        FUN_142502220();
      }
      FUN_1401773f0(plVar2);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return (longlong *)0x0;
}



// FUNCTION 142535f00 FUN_142535f00 body=208 status=ok
// SIG undefined FUN_142535f00(void)

undefined8
FUN_142535f00(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined **local_78;
  undefined2 local_70;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x60))(param_1,param_3,param_5);
  if (plVar1 != (longlong *)0x0) {
    local_78 = &PTR_FUN_149e18960;
    local_70 = 2;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_78);
    (**(code **)*plVar1)(plVar1,1);
    lVar2 = (**(code **)(*param_1 + 0x70))(param_1,param_2,&local_78,param_4,param_5);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x40))(param_1,lVar2,param_5);
      FUN_140859a90(&local_78);
      return uVar3;
    }
    FUN_140859a90(&local_78);
  }
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,1);
  }
  return 0;
}



// FUNCTION 142535fd0 Unwind@142535fd0 body=44 status=ok
// SIG undefined Unwind@142535fd0(void)

void Unwind_142535fd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142536000 FUN_142536000 body=125 status=ok
// SIG undefined FUN_142536000(void)

undefined8 *
FUN_142536000(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,int *param_5)

{
  undefined8 *puVar1;
  
  if (*param_5 < 1) {
    if ((param_2 == 0) || ((*(byte *)(param_3 + 8) & 1) != 0)) {
      *param_5 = 1;
    }
    else {
      puVar1 = (undefined8 *)thunk_FUN_1424da030(0x58);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = icu_64::SimpleFactory::vftable;
        puVar1[1] = param_2;
        FUN_1424a6be0(puVar1 + 2,param_3);
        *(undefined1 *)(puVar1 + 10) = param_4;
        return puVar1;
      }
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142536080 Unwind@142536080 body=47 status=ok
// SIG undefined Unwind@142536080(void)

void Unwind_142536080(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1425360b0 FUN_1425360b0 body=391 status=ok
// SIG undefined FUN_1425360b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425360b0(longlong *param_1,undefined8 *param_2,int *param_3)

{
  undefined8 *puVar1;
  
  if ((param_2 != (undefined8 *)0x0) && (*param_3 < 1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c793068) && (FUN_144b3d300(&DAT_14c793068), DAT_14c793068 == -1)) {
      _DAT_14c793058 = 0;
      uRam000000014c793060 = 0;
      _DAT_14c793048 = 0;
      uRam000000014c793050 = 0;
      _DAT_14c793038 = 0;
      uRam000000014c793040 = 0;
      _DAT_14c793028 = 0;
      uRam000000014c793030 = 0;
      _DAT_14c793018 = 0;
      uRam000000014c793020 = 0;
      _Mtx_init_in_situ(&DAT_14c793018,2);
      atexit((_func_5014 *)&LAB_1425367d0);
      _Init_thread_footer(&DAT_14c793068);
    }
    FUN_142501320(&DAT_14c793018);
    puVar1 = (undefined8 *)param_1[0xb];
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)thunk_FUN_1424da030(0x28);
      if (puVar1 == (undefined8 *)0x0) {
        param_1[0xb] = 0;
LAB_1425361b0:
        FUN_142501400(&DAT_14c793018);
        return (undefined8 *)0x0;
      }
      FUN_142515f20(puVar1,&LAB_1425362a0,0,param_3);
      param_1[0xb] = (longlong)puVar1;
      if (0 < *param_3) {
        (**(code **)*puVar1)(puVar1,1);
        goto LAB_1425361b0;
      }
    }
    FUN_142516500(puVar1,param_2,0,param_3);
    if (*param_3 < 1) {
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    else {
      (**(code **)*param_2)(param_2,1);
      param_2 = (undefined8 *)0x0;
    }
    FUN_142501400(&DAT_14c793018);
  }
  if (param_2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return param_2;
}



// FUNCTION 142536240 Unwind@142536240 body=36 status=ok
// SIG undefined Unwind@142536240(void)

void Unwind_142536240(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142536270 Unwind@142536270 body=39 status=ok
// SIG undefined Unwind@142536270(void)

void Unwind_142536270(void)

{
  FUN_142501400(&DAT_14c793018);
  return;
}



// FUNCTION 1425362c0 FUN_1425362c0 body=295 status=ok
// SIG undefined FUN_1425362c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1425362c0(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  
  if ((param_2 != (undefined8 *)0x0) && (param_1[0xb] != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c793068) && (FUN_144b3d300(&DAT_14c793068), DAT_14c793068 == -1)) {
      _DAT_14c793058 = 0;
      uRam000000014c793060 = 0;
      _DAT_14c793048 = 0;
      uRam000000014c793050 = 0;
      _DAT_14c793038 = 0;
      uRam000000014c793040 = 0;
      _DAT_14c793028 = 0;
      uRam000000014c793030 = 0;
      _DAT_14c793018 = 0;
      uRam000000014c793020 = 0;
      _Mtx_init_in_situ(&DAT_14c793018,2);
      atexit((_func_5014 *)&LAB_1425367d0);
      _Init_thread_footer(&DAT_14c793068);
    }
    FUN_142501320(&DAT_14c793018);
    cVar1 = FUN_142516a40(param_1[0xb],param_2);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x88))(param_1);
      FUN_142501400(&DAT_14c793018);
      (**(code **)(*param_1 + 0x18))(param_1);
      return 1;
    }
    *param_3 = 1;
    (**(code **)*param_2)(param_2,1);
    FUN_142501400(&DAT_14c793018);
  }
  return 0;
}



// FUNCTION 1425363f0 Unwind@1425363f0 body=39 status=ok
// SIG undefined Unwind@1425363f0(void)

void Unwind_1425363f0(void)

{
  FUN_142501400(&DAT_14c793018);
  return;
}



// FUNCTION 142536420 FUN_142536420 body=221 status=ok
// SIG undefined FUN_142536420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142536420(longlong *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793068) {
    FUN_144b3d300(&DAT_14c793068);
    if (DAT_14c793068 == -1) {
      _DAT_14c793058 = 0;
      uRam000000014c793060 = 0;
      _DAT_14c793048 = 0;
      uRam000000014c793050 = 0;
      _DAT_14c793038 = 0;
      uRam000000014c793040 = 0;
      _DAT_14c793028 = 0;
      uRam000000014c793030 = 0;
      _DAT_14c793018 = 0;
      uRam000000014c793020 = 0;
      _Mtx_init_in_situ(&DAT_14c793018,2);
      atexit((_func_5014 *)&LAB_1425367d0);
      _Init_thread_footer(&DAT_14c793068);
    }
  }
  FUN_142501320(&DAT_14c793018);
  (**(code **)(*param_1 + 0x78))(param_1);
  (**(code **)(*param_1 + 0x88))(param_1);
  FUN_142501400(&DAT_14c793018);
                    /* WARNING: Could not recover jumptable at 0x000142536490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



// FUNCTION 142536500 Unwind@142536500 body=35 status=ok
// SIG undefined Unwind@142536500(void)

void Unwind_142536500(void)

{
  FUN_142501400(&DAT_14c793018);
  return;
}



// FUNCTION 142536530 FUN_142536530 body=14 status=ok
// SIG undefined FUN_142536530(void)

void FUN_142536530(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    iVar2 = *(int *)(lVar1 + 8);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8) != 0) {
          (**(code **)(lVar1 + 0x18))();
          iVar2 = *(int *)(lVar1 + 8);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  *(undefined4 *)(lVar1 + 8) = 0;
  return;
}



// FUNCTION 142536540 FUN_142536540 body=20 status=ok
// SIG undefined FUN_142536540(void)

undefined8 FUN_142536540(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 8) == 0);
  }
  return 1;
}



// FUNCTION 142536560 FUN_142536560 body=16 status=ok
// SIG undefined FUN_142536560(void)

undefined4 FUN_142536560(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 8);
  }
  return 0;
}



// FUNCTION 142536570 FUN_142536570 body=94 status=ok
// SIG undefined FUN_142536570(void)

undefined8 * FUN_142536570(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x0;
  if ((param_2 != 0) && (*param_3 < 1)) {
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x48);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      *puVar1 = icu_64::ICUServiceKey::vftable;
      FUN_1424a6be0(puVar1 + 1,param_2);
    }
  }
  return puVar1;
}



// FUNCTION 1425365d0 Unwind@1425365d0 body=43 status=ok
// SIG undefined Unwind@1425365d0(void)

void Unwind_1425365d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 142536600 FUN_142536600 body=142 status=ok
// SIG undefined FUN_142536600(void)

void FUN_142536600(longlong param_1)

{
  longlong *plVar1;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    FUN_1414b3f60(plVar1 + 0xb);
    if (*plVar1 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar1);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar1);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 142536690 FUN_142536690 body=54 status=ok
// SIG undefined FUN_142536690(void)

void FUN_142536690(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar1);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 1425366d0 FUN_1425366d0 body=47 status=ok
// SIG undefined FUN_1425366d0(void)

bool FUN_1425366d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&icu_64::EventListener::RTTI_Type_Descriptor,
                          &icu_64::ServiceListener::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}



// FUNCTION 142536700 FUN_142536700 body=19 status=ok
// SIG undefined FUN_142536700(void)

void FUN_142536700(undefined8 param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000142536710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,param_1,*(code **)(*param_2 + 0x10));
  return;
}



// FUNCTION 142536720 FUN_142536720 body=4 status=ok
// SIG undefined FUN_142536720(void)

undefined4 FUN_142536720(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// FUNCTION 142536730 FUN_142536730 body=60 status=ok
// SIG undefined FUN_142536730(void)

undefined8 * FUN_142536730(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::ICUServiceKey::vftable;
  FUN_140859a90(param_1 + 1);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142536770 FUN_142536770 body=79 status=ok
// SIG undefined FUN_142536770(void)

undefined8 * FUN_142536770(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::SimpleFactory::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_1 + 2);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425367c0 FUN_1425367c0 body=2 status=ok
// SIG undefined FUN_1425367c0(void)

void FUN_1425367c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1425367e0 FUN_1425367e0 body=22 status=ok
// SIG undefined FUN_1425367e0(void)

void FUN_1425367e0(undefined8 *param_1)

{
  *param_1 = icu_64::ICUNotifier::vftable;
  param_1[1] = 0;
  return;
}



// FUNCTION 142536800 FUN_142536800 body=212 status=ok
// SIG undefined FUN_142536800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142536800(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::ICUNotifier::vftable;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c7930c8) {
    FUN_144b3d300(&DAT_14c7930c8);
    if (DAT_14c7930c8 == -1) {
      _DAT_14c7930b8 = 0;
      uRam000000014c7930c0 = 0;
      _DAT_14c7930a8 = 0;
      uRam000000014c7930b0 = 0;
      _DAT_14c793098 = 0;
      uRam000000014c7930a0 = 0;
      _DAT_14c793088 = 0;
      uRam000000014c793090 = 0;
      _DAT_14c793078 = 0;
      uRam000000014c793080 = 0;
      _Mtx_init_in_situ(&DAT_14c793078,2);
      atexit((_func_5014 *)&LAB_142536d90);
      _Init_thread_footer(&DAT_14c7930c8);
    }
  }
  FUN_142501320(&DAT_14c793078);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[1] = 0;
  FUN_142501400(&DAT_14c793078);
  return;
}



// FUNCTION 1425368e0 FUN_1425368e0 body=370 status=ok
// SIG undefined FUN_1425368e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425368e0(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  
  if (*param_3 < 1) {
    if (param_2 == 0) {
      *param_3 = 1;
    }
    else {
      cVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      if (cVar2 != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c7930c8) &&
           (FUN_144b3d300(&DAT_14c7930c8), DAT_14c7930c8 == -1)) {
          _DAT_14c7930b8 = 0;
          uRam000000014c7930c0 = 0;
          _DAT_14c7930a8 = 0;
          uRam000000014c7930b0 = 0;
          _DAT_14c793098 = 0;
          uRam000000014c7930a0 = 0;
          _DAT_14c793088 = 0;
          uRam000000014c793090 = 0;
          _DAT_14c793078 = 0;
          uRam000000014c793080 = 0;
          _Mtx_init_in_situ(&DAT_14c793078,2);
          atexit((_func_5014 *)&LAB_142536d90);
          _Init_thread_footer(&DAT_14c7930c8);
        }
        FUN_142501320(&DAT_14c793078);
        if (param_1[1] == 0) {
          lVar3 = thunk_FUN_1424da030(0x28);
          if (lVar3 != 0) {
            FUN_142515eb0(lVar3,5,param_3);
          }
          param_1[1] = lVar3;
LAB_1425369c2:
          FUN_1425163e0(lVar3,param_2,param_3);
        }
        else {
          iVar1 = *(int *)(param_1[1] + 8);
          iVar4 = 0;
          do {
            lVar3 = param_1[1];
            if (iVar1 <= iVar4) goto LAB_1425369c2;
            lVar3 = FUN_142516630(lVar3,iVar4);
            iVar4 = iVar4 + 1;
          } while (lVar3 != param_2);
        }
        FUN_142501400(&DAT_14c793078);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142536a60 Unwind@142536a60 body=44 status=ok
// SIG undefined Unwind@142536a60(void)

void Unwind_142536a60(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142536a90 Unwind@142536a90 body=47 status=ok
// SIG undefined Unwind@142536a90(void)

void Unwind_142536a90(void)

{
  FUN_142501400(&DAT_14c793078);
  return;
}



// FUNCTION 142536ac0 FUN_142536ac0 body=335 status=ok
// SIG undefined FUN_142536ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142536ac0(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  if (*param_3 < 1) {
    if (param_2 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c7930c8) && (FUN_144b3d300(&DAT_14c7930c8), DAT_14c7930c8 == -1))
      {
        _DAT_14c7930b8 = 0;
        uRam000000014c7930c0 = 0;
        _DAT_14c7930a8 = 0;
        uRam000000014c7930b0 = 0;
        _DAT_14c793098 = 0;
        uRam000000014c7930a0 = 0;
        _DAT_14c793088 = 0;
        uRam000000014c793090 = 0;
        _DAT_14c793078 = 0;
        uRam000000014c793080 = 0;
        _Mtx_init_in_situ(&DAT_14c793078,2);
        atexit((_func_5014 *)&LAB_142536d90);
        _Init_thread_footer(&DAT_14c7930c8);
      }
      FUN_142501320(&DAT_14c793078);
      if (*(longlong *)(param_1 + 8) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 8);
        iVar4 = 0;
        if (0 < iVar1) {
          do {
            lVar3 = FUN_142516630(*(undefined8 *)(param_1 + 8),iVar4);
            if (lVar3 == param_2) {
              FUN_142516850(*(undefined8 *)(param_1 + 8),iVar4);
              puVar2 = *(undefined8 **)(param_1 + 8);
              if (*(int *)(puVar2 + 1) == 0) {
                (**(code **)*puVar2)(puVar2,1);
                *(undefined8 *)(param_1 + 8) = 0;
              }
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar1);
        }
      }
      FUN_142501400(&DAT_14c793078);
      return;
    }
    *param_3 = 1;
  }
  return;
}



// FUNCTION 142536c10 Unwind@142536c10 body=43 status=ok
// SIG undefined Unwind@142536c10(void)

void Unwind_142536c10(void)

{
  FUN_142501400(&DAT_14c793078);
  return;
}



// FUNCTION 142536c40 FUN_142536c40 body=261 status=ok
// SIG undefined FUN_142536c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142536c40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  if (param_1[1] != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c7930c8) {
      FUN_144b3d300(&DAT_14c7930c8);
      if (DAT_14c7930c8 == -1) {
        _DAT_14c7930b8 = 0;
        uRam000000014c7930c0 = 0;
        _DAT_14c7930a8 = 0;
        uRam000000014c7930b0 = 0;
        _DAT_14c793098 = 0;
        uRam000000014c7930a0 = 0;
        _DAT_14c793088 = 0;
        uRam000000014c793090 = 0;
        _DAT_14c793078 = 0;
        uRam000000014c793080 = 0;
        _Mtx_init_in_situ(&DAT_14c793078,2);
        atexit((_func_5014 *)&LAB_142536d90);
        _Init_thread_footer(&DAT_14c7930c8);
      }
    }
    FUN_142501320(&DAT_14c793078);
    if ((param_1[1] != 0) && (iVar1 = *(int *)(param_1[1] + 8), 0 < iVar1)) {
      iVar3 = 0;
      do {
        uVar2 = FUN_142516630(param_1[1],iVar3);
        (**(code **)(*param_1 + 0x28))(param_1,uVar2,*param_1,param_4,uVar4);
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
    FUN_142501400(&DAT_14c793078);
    return;
  }
  return;
}



// FUNCTION 142536d50 Unwind@142536d50 body=39 status=ok
// SIG undefined Unwind@142536d50(void)

void Unwind_142536d50(void)

{
  FUN_142501400(&DAT_14c793078);
  return;
}



// FUNCTION 142536d80 FUN_142536d80 body=2 status=ok
// SIG undefined FUN_142536d80(void)

void FUN_142536d80(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 142536da0 FUN_142536da0 body=34 status=ok
// SIG undefined FUN_142536da0(void)

void FUN_142536da0(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = icu_64::LocaleKeyFactory::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  *(undefined4 *)(param_1 + 9) = param_2;
  return;
}



// FUNCTION 142536dd0 FUN_142536dd0 body=40 status=ok
// SIG undefined FUN_142536dd0(void)

void FUN_142536dd0(undefined8 *param_1)

{
  *param_1 = icu_64::LocaleKeyFactory::vftable;
  FUN_140859a90(param_1 + 1);
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142536e00 FUN_142536e00 body=161 status=ok
// SIG undefined FUN_142536e00(void)

undefined8 FUN_142536e00(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_120 [224];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
    FUN_1424a3c00(local_120);
    (**(code **)(*param_2 + 0x58))(param_2,local_120);
    uVar3 = (**(code **)(*param_1 + 0x30))(param_1,local_120,uVar2,param_3,param_4);
    FUN_1414b3f60(local_120);
  }
  return uVar3;
}



// FUNCTION 142536eb0 Unwind@142536eb0 body=51 status=ok
// SIG undefined Unwind@142536eb0(void)

void Unwind_142536eb0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 142536ef0 FUN_142536ef0 body=114 status=ok
// SIG undefined FUN_142536ef0(void)

ulonglong FUN_142536ef0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined **local_60;
  undefined2 local_58;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,param_3);
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_60 = &PTR_FUN_149e18960;
    local_58 = 2;
    (**(code **)(*param_2 + 0x20))(param_2,&local_60);
    lVar2 = FUN_142502620(*puVar1,&local_60);
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),lVar2 != 0);
    FUN_140859a90(&local_60);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 142536f70 Unwind@142536f70 body=34 status=ok
// SIG undefined Unwind@142536f70(void)

void Unwind_142536f70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142536fa0 FUN_142536fa0 body=201 status=ok
// SIG undefined FUN_142536fa0(void)

void FUN_142536fa0(longlong *param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,param_3);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 9);
    local_4c = 0xffffffff;
    lVar4 = FUN_1425022e0(*puVar3,&local_4c);
    if (lVar4 != 0) {
      do {
        uVar2 = *(undefined8 *)(lVar4 + 0x10);
        if ((uVar1 & 1) == 0) {
          lVar4 = thunk_FUN_1424da030(0x40);
          if (lVar4 != 0) {
            FUN_1424a6be0(lVar4,uVar2);
          }
          FUN_142502aa0(*param_2,lVar4,param_1,param_3);
          if (0 < *param_3) {
            return;
          }
        }
        else {
          thunk_FUN_142502da0(*param_2,uVar2);
        }
        lVar4 = FUN_1425022e0(*puVar3,&local_4c);
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 142537070 Unwind@142537070 body=52 status=ok
// SIG undefined Unwind@142537070(void)

void Unwind_142537070(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425370b0 FUN_1425370b0 body=124 status=ok
// SIG undefined FUN_1425370b0(void)

undefined8 FUN_1425370b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_110 [224];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    FUN_1424a3c00(local_110);
    FUN_142537360(param_2,local_110);
    param_4 = FUN_1412ac780(local_110,param_3,param_4);
    FUN_1414b3f60(local_110);
  }
  else {
    FUN_1424a7130(param_4);
  }
  return param_4;
}



// FUNCTION 142537130 Unwind@142537130 body=43 status=ok
// SIG undefined Unwind@142537130(void)

void Unwind_142537130(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 142537160 FUN_142537160 body=3 status=ok
// SIG undefined FUN_142537160(void)

undefined8 FUN_142537160(void)

{
  return 0;
}



// FUNCTION 142537170 FUN_142537170 body=3 status=ok
// SIG undefined FUN_142537170(void)

undefined8 FUN_142537170(void)

{
  return 0;
}



// FUNCTION 142537180 FUN_142537180 body=8 status=ok
// SIG undefined FUN_142537180(void)

undefined * FUN_142537180(void)

{
  return &DAT_14c7930cc;
}



// FUNCTION 142537190 FUN_142537190 body=60 status=ok
// SIG undefined FUN_142537190(void)

undefined8 * FUN_142537190(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::LocaleKeyFactory::vftable;
  FUN_140859a90(param_1 + 1);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425371d0 FUN_1425371d0 body=383 status=ok
// SIG undefined FUN_1425371d0(void)

longlong FUN_1425371d0(longlong param_1,longlong param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1 == 0) {
    FUN_1424a7130(param_2);
  }
  else {
    FUN_1424a7c80(param_2,param_1);
    if (*(short *)(param_2 + 8) < 0) {
      iVar8 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar8 = (int)*(short *)(param_2 + 8) >> 5;
    }
    uVar3 = FUN_1424a8940(param_2,0x40,0,iVar8);
    if (*(short *)(param_2 + 8) < 0) {
      iVar8 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar8 = (int)*(short *)(param_2 + 8) >> 5;
    }
    uVar4 = FUN_1424a8940(param_2,0x2e,0,iVar8);
    uVar7 = uVar3;
    if ((int)uVar4 < (int)uVar3) {
      uVar7 = uVar4;
    }
    if ((int)uVar4 < 0) {
      uVar7 = uVar3;
    }
    sVar1 = *(short *)(param_2 + 8);
    if (((int)uVar7 < 0) && (uVar7 = (int)sVar1 >> 5, sVar1 < 0)) {
      uVar7 = *(uint *)(param_2 + 0xc);
    }
    uVar3 = (int)sVar1 >> 5;
    if (sVar1 < 0) {
      uVar3 = *(uint *)(param_2 + 0xc);
    }
    uVar3 = FUN_1424a8940(param_2,0x5f,0,uVar3);
    if ((int)uVar3 < 0) {
      uVar3 = uVar7;
    }
    uVar4 = 0;
    if (0 < (int)uVar3) {
      uVar6 = 0;
      do {
        sVar1 = *(short *)(param_2 + 8);
        uVar4 = (int)sVar1 >> 5;
        if (sVar1 < 0) {
          uVar4 = *(uint *)(param_2 + 0xc);
        }
        if (uVar6 < uVar4) {
          lVar5 = param_2 + 10;
          if (((int)sVar1 & 2U) == 0) {
            lVar5 = *(longlong *)(param_2 + 0x18);
          }
          uVar2 = *(ushort *)(lVar5 + uVar6 * 2);
          if ((ushort)(uVar2 - 0x41) < 0x1a) {
            FUN_1424a9010(param_2,uVar6 & 0xffffffff,uVar2 + 0x20);
          }
        }
        uVar6 = uVar6 + 1;
        uVar4 = uVar3;
      } while (uVar3 != uVar6);
    }
    if ((int)uVar4 < (int)uVar7) {
      uVar6 = (ulonglong)uVar4;
      do {
        sVar1 = *(short *)(param_2 + 8);
        uVar3 = (int)sVar1 >> 5;
        if (sVar1 < 0) {
          uVar3 = *(uint *)(param_2 + 0xc);
        }
        if (uVar6 < uVar3) {
          lVar5 = param_2 + 10;
          if (((int)sVar1 & 2U) == 0) {
            lVar5 = *(longlong *)(param_2 + 0x18);
          }
          uVar2 = *(ushort *)(lVar5 + uVar6 * 2);
          if ((ushort)(uVar2 - 0x61) < 0x1a) {
            FUN_1424a9010(param_2,uVar6 & 0xffffffff,uVar2 - 0x20);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
  }
  return param_2;
}



// FUNCTION 142537360 FUN_142537360 body=346 status=ok
// SIG undefined FUN_142537360(void)

void FUN_142537360(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_1b8 [32];
  int local_198;
  undefined4 local_190;
  undefined1 local_188 [224];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)local_1b8;
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    uVar2 = (int)(short)uVar1 >> 5;
    if ((short)uVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
    }
    if ((int)uVar2 < 0x80) {
      uVar3 = (int)(short)uVar1 >> 5;
      if ((short)uVar1 < 0) {
        uVar3 = *(uint *)(param_1 + 0xc);
      }
      uVar4 = (int)uVar3 >> 0x1f & uVar3;
      uVar2 = FUN_1424a8940(param_1,CONCAT62((uint6)(ushort)(uVar2 >> 0x10),0x40),uVar4,
                            uVar3 - uVar4);
      if ((int)uVar2 < 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          local_198 = 0x80 - uVar3;
          local_190 = 0;
          FUN_1424a83f0(param_1,uVar3,uVar2 - uVar3,local_a8 + uVar3);
          local_a8[uVar2] = 0x40;
          if (*(short *)(param_1 + 8) < 0) {
            uVar4 = *(uint *)(param_1 + 0xc);
          }
          else {
            uVar4 = (int)*(short *)(param_1 + 8) >> 5;
          }
          uVar3 = uVar2 + 1;
          uVar2 = uVar3;
          if ((int)uVar4 < (int)uVar3) {
            uVar2 = uVar4;
          }
          uVar2 = FUN_1424a8940(param_1,0x40,uVar2,uVar4 - uVar2);
        } while (-1 < (int)uVar2);
      }
      local_198 = 0x80 - uVar3;
      local_190 = 0;
      FUN_1424a83f0(param_1,uVar3,0x7fffffff,local_a8 + uVar3);
      FUN_1424a4210(local_188,local_a8);
      FUN_1424a3e60(param_2,local_188);
      FUN_1414b3f60(local_188);
      goto LAB_1425374ac;
    }
  }
  FUN_1424a3c70(param_2);
LAB_1425374ac:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)local_1b8);
}



// FUNCTION 1425374d0 FUN_1425374d0 body=122 status=ok
// SIG undefined FUN_1425374d0(void)

undefined8 FUN_1425374d0(longlong param_1,undefined8 param_2)

{
  undefined1 local_60 [8];
  short local_58;
  int local_54;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0xd8) == '\0') {
    FUN_1424a7220(local_60,*(undefined8 *)(param_1 + 0x28),0xffffffff,0);
    if (-1 < local_58) {
      local_54 = (int)local_58 >> 5;
    }
    FUN_1424a9690(param_2,local_60,0,local_54);
    FUN_140859a90(local_60);
  }
  else {
    FUN_1424a7130(param_2);
  }
  return param_2;
}



// FUNCTION 142537550 Unwind@142537550 body=34 status=ok
// SIG undefined Unwind@142537550(void)

void Unwind_142537550(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142537580 FUN_142537580 body=866 status=ok
// SIG undefined FUN_142537580(void)

longlong * FUN_142537580(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_d8 [64];
  longlong local_98;
  undefined4 local_90;
  undefined2 local_8c;
  int local_60;
  longlong local_58;
  longlong local_50;
  int local_44 [3];
  
  local_44[1] = -2;
  local_44[2] = -1;
  local_44[0] = 0;
  if ((DAT_14c7930d8 == 2) || (cVar2 = FUN_142501800(&DAT_14c7930d8), cVar2 == '\0')) {
    if (0 < DAT_14c7930dc) {
      local_44[0] = DAT_14c7930dc;
    }
    goto LAB_1425376c7;
  }
  FUN_1424d6720(4,FUN_1425379b0);
  plVar3 = (longlong *)thunk_FUN_1424da030();
  if (plVar3 == (longlong *)0x0) {
    DAT_14c7930d0 = (longlong *)0x0;
    if (0 < local_44[0]) goto LAB_1425376a7;
    local_44[0] = 7;
  }
  else {
    *plVar3 = 0;
    if (local_44[0] < 1) {
      plVar4 = plVar3 + 1;
      FUN_142502140(plVar4,FUN_1424a9c90,FUN_1424a9cd0,0,local_44);
      if (local_44[0] < 1) {
        *plVar3 = (longlong)plVar4;
        FUN_142502340(plVar4,&LAB_1424b70f0);
        lVar7 = *plVar3;
        if (local_44[0] < 1) {
          DAT_14c7930d0 = plVar3;
          FUN_142502350(lVar7,FUN_1425e8b30);
          goto LAB_1425376b2;
        }
      }
      else {
        lVar7 = *plVar3;
      }
    }
    else {
      lVar7 = 0;
    }
    DAT_14c7930d0 = plVar3;
    if (lVar7 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar3);
LAB_1425376a7:
    DAT_14c7930d0 = (longlong *)0x0;
  }
LAB_1425376b2:
  DAT_14c7930dc = local_44[0];
  FUN_1425019c0(&DAT_14c7930d8);
LAB_1425376c7:
  plVar3 = DAT_14c7930d0;
  if (DAT_14c7930d0 != (longlong *)0x0) {
    FUN_142501320(0);
    plVar4 = (longlong *)FUN_142502620(*plVar3,param_1);
    FUN_142501400(0);
    if (plVar4 != (longlong *)0x0) {
      return plVar4;
    }
    plVar4 = (longlong *)thunk_FUN_1424da030(0x58);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      if (0 < local_44[0]) {
        return plVar4;
      }
      plVar6 = plVar4 + 1;
      FUN_142502140(plVar6,FUN_1424a9c90,FUN_1424a9cd0,0,local_44);
      if (0 < local_44[0]) {
        return plVar4;
      }
      *plVar4 = (longlong)plVar6;
      FUN_142502340(plVar6,&LAB_1424b70f0);
      if (0 < local_44[0]) {
        return plVar4;
      }
      local_98 = (longlong)&local_8c + 1;
      local_90 = 0x28;
      local_8c = 0;
      local_60 = 0;
      FUN_142503780(&local_98,param_1,local_44);
      lVar7 = local_98;
      if (local_60 == 0) {
        lVar7 = 0;
      }
      local_50 = FUN_1424edb00(lVar7,local_44);
      while (lVar7 = local_50, lVar5 = FUN_142564b90(local_50,0,local_44), iVar1 = local_44[0],
            lVar5 != 0) {
        FUN_1424a6c90(local_d8,lVar5);
        local_58 = thunk_FUN_1424da030(0x40);
        if (local_58 != 0) {
          FUN_1424a6be0(local_58,local_d8);
        }
        FUN_142502aa0(*plVar4,local_58,plVar4,local_44);
        FUN_140859a90(local_d8);
      }
      if (local_44[0] < 1) {
        FUN_142501320(0);
        plVar6 = (longlong *)FUN_142502620(*plVar3,param_1);
        if (plVar6 == (longlong *)0x0) {
          FUN_142534fd0(plVar3,param_1,plVar4,local_44);
          FUN_142501400(0);
          lVar7 = local_50;
        }
        else {
          FUN_142501400(0);
          if (*plVar4 != 0) {
            FUN_142502220();
          }
          FUN_1401773f0(plVar4);
          plVar4 = plVar6;
        }
      }
      else {
        if (*plVar4 != 0) {
          FUN_142502220();
        }
        FUN_1401773f0(plVar4);
      }
      if (lVar7 != 0) {
        FUN_142564960(lVar7);
      }
      if ((char)local_8c != '\0') {
        FUN_1424da110(local_98);
      }
      if (iVar1 < 1) {
        return plVar4;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1425378f0 Unwind@1425378f0 body=58 status=ok
// SIG undefined Unwind@1425378f0(void)

void Unwind_1425378f0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    FUN_142564960(*(undefined8 *)(param_2 + 0xb8));
  }
  return;
}



// FUNCTION 142537930 Unwind@142537930 body=57 status=ok
// SIG undefined Unwind@142537930(void)

void Unwind_142537930(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x7c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}



// FUNCTION 142537970 Unwind@142537970 body=60 status=ok
// SIG undefined Unwind@142537970(void)

void Unwind_142537970(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xb0));
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425379b0 FUN_1425379b0 body=57 status=ok
// SIG undefined FUN_1425379b0(void)

undefined1 FUN_1425379b0(void)

{
  longlong *plVar1;
  
  plVar1 = DAT_14c7930d0;
  if (DAT_14c7930d0 != (longlong *)0x0) {
    if (*DAT_14c7930d0 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar1);
    DAT_14c7930d0 = (longlong *)0x0;
  }
  return 1;
}



// FUNCTION 1425379f0 FUN_1425379f0 body=8 status=ok
// SIG undefined FUN_1425379f0(void)

undefined * FUN_1425379f0(void)

{
  return &DAT_14c7930e0;
}



// FUNCTION 142537a00 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 142537a10 FUN_142537a10 body=25 status=ok
// SIG undefined FUN_142537a10(void)

void FUN_142537a10(undefined8 *param_1)

{
  *param_1 = icu_64::Format::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa5) = 0;
  return;
}



// FUNCTION 142537a30 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 142537a40 FUN_142537a40 body=72 status=ok
// SIG undefined FUN_142537a40(void)

undefined8 * FUN_142537a40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = icu_64::Format::vftable;
  if (param_1 != param_2) {
    strcpy((char *)((longlong)param_1 + 0xa5),(char *)((longlong)param_2 + 0xa5));
    strcpy((char *)(param_1 + 1),(char *)(param_2 + 1));
  }
  return param_1;
}



// FUNCTION 142537a90 FUN_142537a90 body=62 status=ok
// SIG undefined FUN_142537a90(void)

longlong FUN_142537a90(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    strcpy((char *)(param_1 + 0xa5),(char *)(param_2 + 0xa5));
    strcpy((char *)(param_1 + 8),(char *)(param_2 + 8));
  }
  return param_1;
}



// FUNCTION 142537ad0 FUN_142537ad0 body=98 status=ok
// SIG undefined FUN_142537ad0(void)

undefined8 FUN_142537ad0(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined **local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    local_30 = icu_64::FieldPosition::vftable;
    local_28 = 0xffffffff;
    local_20 = 0;
    param_3 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,&local_30,param_4);
    FUN_1424b70d0(&local_30);
  }
  return param_3;
}



// FUNCTION 142537b40 Unwind@142537b40 body=32 status=ok
// SIG undefined Unwind@142537b40(void)

void Unwind_142537b40(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 142537b60 FUN_142537b60 body=21 status=ok
// SIG undefined FUN_142537b60(void)

undefined8
FUN_142537b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  if (0 < *param_5) {
    return param_3;
  }
  *param_5 = 0x10;
  return param_3;
}



// FUNCTION 142537b80 FUN_142537b80 body=53 status=ok
// SIG undefined FUN_142537b80(void)

bool FUN_142537b80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = __RTtypeid();
  lVar2 = __RTtypeid(param_2);
  iVar3 = __std_type_info_compare(lVar1 + 8,lVar2 + 8);
  return iVar3 == 0;
}



// FUNCTION 142537bc0 FUN_142537bc0 body=67 status=ok
// SIG undefined FUN_142537bc0(void)

void FUN_142537bc0(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_1 + 8;
  local_20 = param_1 + 0xa5;
  FUN_142532180(&local_20);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 142537c10 FUN_142537c10 body=63 status=ok
// SIG undefined FUN_142537c10(void)

void FUN_142537c10(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1 + 8;
  local_18 = param_1 + 0xa5;
  FUN_1425321b0(&local_18);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 142537c60 FUN_142537c60 body=2 status=ok
// SIG undefined FUN_142537c60(void)

void FUN_142537c60(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 142537c70 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 142537c80 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  FUN_1424b70d0();
  return;
}



// FUNCTION 142537c90 FUN_142537c90 body=5 status=ok
// SIG undefined FUN_142537c90(void)

void FUN_142537c90(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  UNLOCK();
  return;
}



// FUNCTION 142537ca0 FUN_142537ca0 body=40 status=ok
// SIG undefined FUN_142537ca0(void)

void FUN_142537ca0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)param_1[2];
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    return;
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142537cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142537cc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 142537cd0 FUN_142537cd0 body=4 status=ok
// SIG undefined FUN_142537cd0(void)

undefined4 FUN_142537cd0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 142537ce0 FUN_142537ce0 body=28 status=ok
// SIG undefined FUN_142537ce0(void)

void FUN_142537ce0(undefined8 *param_1)

{
  if ((param_1[2] == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000142537cf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142537d00 FUN_142537d00 body=1 status=ok
// SIG undefined FUN_142537d00(void)

void FUN_142537d00(void)

{
  return;
}



// FUNCTION 142537d10 FUN_142537d10 body=60 status=ok
// SIG undefined FUN_142537d10(void)

void FUN_142537d10(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::DecimalQuantity::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 142537d50 FUN_142537d50 body=51 status=ok
// SIG undefined FUN_142537d50(void)

void FUN_142537d50(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::DecimalQuantity::vftable;
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_1424da110(param_1[6]);
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 142537d90 FUN_142537d90 body=33 status=ok
// SIG undefined FUN_142537d90(void)

void FUN_142537d90(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::DecimalQuantity::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  FUN_142537dc0();
  return;
}



// FUNCTION 142537dc0 FUN_142537dc0 body=229 status=ok
// SIG undefined FUN_142537dc0(void)

longlong FUN_142537dc0(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  
  if (param_1 != param_2) {
    if (*(char *)(param_1 + 0x40) != '\0') {
      FUN_1424da110();
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(char *)(param_2 + 0x40) == '\0') {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x10);
      sVar3 = (size_t)iVar1;
      if (sVar3 == 0) {
        sVar3 = 0;
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)FUN_1424da030(sVar3);
        *(void **)(param_1 + 0x30) = pvVar2;
        *(int *)(param_1 + 0x38) = iVar1;
        memset(pvVar2,0,sVar3);
        pvVar2 = *(void **)(param_1 + 0x30);
        *(undefined1 *)(param_1 + 0x40) = 1;
        sVar3 = (size_t)*(int *)(param_2 + 0x10);
      }
      memcpy(pvVar2,*(void **)(param_2 + 0x30),sVar3);
    }
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  }
  return param_1;
}



// FUNCTION 142537eb0 FUN_142537eb0 body=192 status=ok
// SIG undefined FUN_142537eb0(void)

longlong FUN_142537eb0(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    if (*(char *)(param_1 + 0x40) != '\0') {
      FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(char *)(param_2 + 0x40) == '\0') {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    else {
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined1 *)(param_2 + 0x40) = 0;
    }
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  }
  return param_1;
}



// FUNCTION 142537f70 FUN_142537f70 body=80 status=ok
// SIG undefined FUN_142537f70(void)

void FUN_142537f70(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 142537fc0 FUN_142537fc0 body=12 status=ok
// SIG undefined FUN_142537fc0(void)

void FUN_142537fc0(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x24)) {
    param_2 = *(int *)(param_1 + 0x24);
  }
  *(int *)(param_1 + 0x24) = param_2;
  return;
}



// FUNCTION 142537fd0 FUN_142537fd0 body=6 status=ok
// SIG undefined FUN_142537fd0(void)

void FUN_142537fd0(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x28) = -param_2;
  return;
}



// FUNCTION 142537fe0 FUN_142537fe0 body=198 status=ok
// SIG undefined FUN_142537fe0(void)

void FUN_142537fe0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)iVar1;
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar5 = iVar1 + *(int *)(param_1 + 0xc) + -1;
      iVar6 = iVar5 - param_2;
      if (param_2 <= iVar5) {
        lVar3 = (longlong)iVar6 + 1;
        iVar5 = (int)lVar3;
        if (*(char *)(param_1 + 0x40) == '\0') {
          iVar1 = iVar1 - iVar5;
          *(ulonglong *)(param_1 + 0x30) =
               *(ulonglong *)(param_1 + 0x30) & ~(-1L << ((char)iVar1 * '\x04' & 0x3fU));
        }
        else if (iVar6 < 0) {
          iVar1 = iVar1 - iVar5;
        }
        else {
          do {
            *(undefined1 *)(*(longlong *)(param_1 + 0x30) + -1 + lVar2) = 0;
            lVar2 = lVar2 + -1;
            lVar4 = *(int *)(param_1 + 0x10) - lVar3;
          } while (lVar4 < lVar2);
          iVar1 = (int)lVar4;
        }
        *(int *)(param_1 + 0x10) = iVar1;
        FUN_1425380c0(param_1);
        return;
      }
    }
    else {
      if (*(char *)(param_1 + 0x40) != '\0') {
        FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined1 *)(param_1 + 0x15) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  return;
}



// FUNCTION 1425380b0 FUN_1425380b0 body=11 status=ok
// SIG undefined FUN_1425380b0(void)

int FUN_1425380b0(longlong param_1)

{
  return *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) + -1;
}



// FUNCTION 1425380c0 FUN_1425380c0 body=608 status=ok
// SIG undefined FUN_1425380c0(void)

void FUN_1425380c0(longlong param_1)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar6 = *(ulonglong *)(param_1 + 0x30);
    if (uVar6 != 0) {
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar10 = (ulonglong)uVar3;
      uVar11 = 0;
      if (0 < (int)uVar3) {
        do {
          if ((uVar11 < 0x10) && ((uVar6 >> ((char)uVar11 * '\x04' & 0x3fU) & 0xf) != 0))
          goto LAB_142538266;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar10);
        uVar11 = (ulonglong)uVar3;
      }
LAB_142538266:
      uVar6 = uVar6 >> ((char)uVar11 * '\x04' & 0x3fU);
      *(ulonglong *)(param_1 + 0x30) = uVar6;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (int)uVar11;
      lVar5 = uVar10 * 4 + -4;
      uVar11 = uVar10 - 1;
      do {
        uVar9 = (uint)uVar10;
        uVar8 = (int)uVar3 >> 0x1f & uVar3;
        if ((int)uVar9 < 1) break;
        bVar2 = (byte)lVar5;
        uVar10 = (ulonglong)(uVar9 - 1);
        uVar12 = uVar11 - 1;
        lVar5 = lVar5 + -4;
        uVar7 = uVar11 & 0xfffffff0;
        uVar11 = uVar12;
      } while ((uVar7 != 0) || (uVar8 = uVar9, (0xfL << (bVar2 & 0x3f) & uVar6) == 0));
      *(uint *)(param_1 + 0x10) = uVar8;
      return;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x10);
    if ((int)uVar3 < 1) {
      uVar6 = 0;
      uVar10 = 0;
      if (uVar3 != 0) {
LAB_1425381b1:
        if ((int)uVar10 < (int)uVar3) {
          uVar10 = uVar10 & 0xffffffff;
          do {
            *(undefined1 *)(*(longlong *)(param_1 + 0x30) + uVar10) = 0;
            uVar10 = uVar10 + 1;
            uVar3 = *(uint *)(param_1 + 0x10);
          } while ((int)uVar10 < (int)uVar3);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (int)uVar6;
        uVar3 = uVar3 - (int)uVar6;
        *(uint *)(param_1 + 0x10) = uVar3;
        uVar6 = *(ulonglong *)(param_1 + 0x30);
        uVar8 = uVar3 + 1;
        uVar10 = (ulonglong)uVar3;
        do {
          if ((int)uVar10 < 1) {
            *(int *)(param_1 + 0x10) = (int)uVar10;
            if (*(char *)(param_1 + 0x40) == '\0') goto LAB_1425382c7;
            uVar10 = 0;
            goto LAB_14253824e;
          }
          uVar11 = uVar10 - 1;
          uVar8 = uVar8 - 1;
          pcVar1 = (char *)((uVar6 - 1) + uVar10);
          uVar10 = uVar11;
        } while (*pcVar1 == '\0');
        *(uint *)(param_1 + 0x10) = uVar8;
        if (0x10 < uVar8) {
          return;
        }
        if (*(char *)(param_1 + 0x40) == '\0') {
LAB_1425382c7:
          puVar4 = (undefined8 *)FUN_1424da030(0x28);
          *(undefined8 **)(param_1 + 0x30) = puVar4;
          *(undefined4 *)(param_1 + 0x38) = 0x28;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          *(undefined1 *)(param_1 + 0x40) = 1;
          if (*(int *)(param_1 + 0x10) < 1) {
            return;
          }
          lVar5 = 0;
          do {
            *(byte *)(*(longlong *)(param_1 + 0x30) + lVar5) = (byte)uVar6 & 0xf;
            uVar6 = uVar6 >> 4;
            lVar5 = lVar5 + 1;
          } while (lVar5 < *(int *)(param_1 + 0x10));
          return;
        }
        uVar10 = 0;
        do {
          uVar10 = (longlong)*(char *)(uVar6 + (uVar11 & 0xffffffff)) | uVar10 << 4;
          uVar7 = uVar11 + 1;
          uVar11 = uVar11 - 1;
        } while (1 < uVar7);
LAB_14253824e:
        FUN_1424da110(uVar6);
        *(ulonglong *)(param_1 + 0x30) = uVar10;
        *(undefined1 *)(param_1 + 0x40) = 0;
        return;
      }
    }
    else {
      uVar6 = 0;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x30) + uVar6) != '\0') {
          uVar10 = 0;
          do {
            *(undefined1 *)(*(longlong *)(param_1 + 0x30) + uVar10) =
                 *(undefined1 *)(uVar6 + *(longlong *)(param_1 + 0x30) + uVar10);
            uVar10 = uVar10 + 1;
            uVar3 = *(uint *)(param_1 + 0x10);
          } while ((longlong)uVar10 < (longlong)((longlong)(int)uVar3 - uVar6));
          goto LAB_1425381b1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
    }
    FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 142538330 FUN_142538330 body=170 status=ok
// SIG undefined FUN_142538330(void)

void FUN_142538330(undefined8 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined8 local_a0;
  char local_94;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_142544930(&local_a0);
  FUN_142544c50(&local_a0,param_2,param_4);
  if (*param_4 < 1) {
    FUN_142538420(param_1,&local_a0,param_4);
    if (*param_4 < 1) {
      FUN_14253a340(param_1,0,param_3,0,param_4);
      if (*param_4 < 1) {
        FUN_142538530(param_1,&local_a0,param_4);
      }
    }
  }
  if (local_94 != '\0') {
    FUN_1424da110(local_a0);
  }
  return;
}



// FUNCTION 1425383e0 Unwind@1425383e0 body=58 status=ok
// SIG undefined Unwind@1425383e0(void)

void Unwind_1425383e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x34) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



// FUNCTION 142538420 FUN_142538420 body=163 status=ok
// SIG undefined FUN_142538420(void)

void FUN_142538420(longlong *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  undefined8 local_90;
  char local_84;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if ((cVar1 == '\0') && ((int)param_1[2] != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar1 == '\0') {
      FUN_142544930(&local_90);
      FUN_142538630(param_1,&local_90,param_3);
      if (*param_3 < 1) {
        FUN_142544ee0(&local_90,param_2,param_3);
        if (*param_3 < 1) {
          FUN_1425387a0(param_1,&local_90,param_3);
        }
      }
      if (local_84 != '\0') {
        FUN_1424da110(local_90);
      }
    }
  }
  return;
}



// FUNCTION 1425384d0 Unwind@1425384d0 body=49 status=ok
// SIG undefined Unwind@1425384d0(void)

void Unwind_1425384d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x34) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



// FUNCTION 142538510 FUN_142538510 body=23 status=ok
// SIG undefined FUN_142538510(void)

void FUN_142538510(void)

{
  FUN_14253a340();
  return;
}



// FUNCTION 142538530 FUN_142538530 body=163 status=ok
// SIG undefined FUN_142538530(void)

void FUN_142538530(longlong *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  undefined8 local_90;
  char local_84;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if ((cVar1 == '\0') && ((int)param_1[2] != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar1 == '\0') {
      FUN_142544930(&local_90);
      FUN_142538630(param_1,&local_90,param_3);
      if (*param_3 < 1) {
        FUN_142544ea0(&local_90,param_2,param_3);
        if (*param_3 < 1) {
          FUN_1425387a0(param_1,&local_90,param_3);
        }
      }
      if (local_84 != '\0') {
        FUN_1424da110(local_90);
      }
    }
  }
  return;
}



// FUNCTION 1425385e0 Unwind@1425385e0 body=49 status=ok
// SIG undefined Unwind@1425385e0(void)

void Unwind_1425385e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x34) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



// FUNCTION 142538620 FUN_142538620 body=8 status=ok
// SIG undefined FUN_142538620(void)

bool FUN_142538620(longlong param_1)

{
  return *(int *)(param_1 + 0x10) == 0;
}



// FUNCTION 142538630 FUN_142538630 body=290 status=ok
// SIG undefined FUN_142538630(void)

/* WARNING: Removing unreachable block (ram,0x0001425386a0) */

void FUN_142538630(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined1 *local_60;
  undefined1 local_53 [27];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    FUN_142544b90(param_2,&DAT_149dfd150,param_3);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  bVar1 = false;
  local_60 = local_53;
  if ((0x14 < iVar2) && (puVar3 = (undefined1 *)FUN_1424da030(iVar2), puVar3 != (undefined1 *)0x0))
  {
    bVar1 = true;
    local_60 = puVar3;
  }
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    iVar2 = -1;
    bVar4 = 0;
    uVar6 = 0;
    do {
      if (*(char *)(param_1 + 0x40) == '\0') {
        if (uVar6 < 0x10) {
          bVar7 = (byte)(*(ulonglong *)(param_1 + 0x30) >> (bVar4 & 0x3c)) & 0xf;
        }
        else {
          bVar7 = 0;
        }
      }
      else {
        bVar7 = *(byte *)(*(longlong *)(param_1 + 0x30) + uVar6);
      }
      local_60[(int)uVar5 + iVar2] = bVar7;
      uVar6 = uVar6 + 1;
      uVar5 = (ulonglong)*(int *)(param_1 + 0x10);
      bVar4 = bVar4 + 4;
      iVar2 = iVar2 + -1;
    } while ((longlong)uVar6 < (longlong)uVar5);
  }
  FUN_142544dc0(param_2,local_60,uVar5,*(undefined4 *)(param_1 + 0xc),*(byte *)(param_1 + 0x14) & 1,
                param_3);
  if (bVar1) {
    FUN_1424da110(local_60);
  }
  return;
}



// FUNCTION 142538760 Unwind@142538760 body=50 status=ok
// SIG undefined Unwind@142538760(void)

void Unwind_142538760(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 1425387a0 FUN_1425387a0 body=135 status=ok
// SIG undefined FUN_1425387a0(void)

longlong FUN_1425387a0(longlong param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  if (*param_3 < 1) {
    cVar1 = FUN_142544f20(param_2);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
    }
    cVar1 = FUN_142544f30(param_2);
    if (cVar1 == '\0') {
      FUN_1425393f0(param_1,param_2);
      FUN_1425380c0(param_1);
    }
  }
  return param_1;
}



// FUNCTION 142538840 FUN_142538840 body=107 status=ok
// SIG undefined FUN_142538840(void)

void FUN_142538840(longlong param_1,ulonglong param_2)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_1424d9820(*(undefined4 *)(param_1 + 0xc),param_2,param_1 + 0xc);
    cVar2 = FUN_1424d9820(*(undefined4 *)(param_1 + 0x20),param_2 & 0xffffffff,param_1 + 0x20);
    if (cVar2 == '\0' && cVar1 == '\0') {
      FUN_1424d9820(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),local_24);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425388c0 FUN_1425388c0 body=965 status=ok
// SIG undefined FUN_1425388c0(void)

double FUN_1425388c0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  
  switch(param_2) {
  case 1:
    iVar6 = *(int *)(param_1 + 0xc);
    iVar8 = *(int *)(param_1 + 0x10);
    uVar13 = (iVar6 + iVar8) - 1;
    uVar7 = 0x11;
    if ((int)uVar13 < 0x11) {
      uVar7 = uVar13;
    }
    if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
      if ((int)uVar7 < 0) {
LAB_142538c94:
        lVar11 = 0;
      }
      else {
        iVar5 = uVar7 * 4 + iVar6 * -4;
        uVar13 = uVar7 - iVar6;
        lVar11 = 0;
        lVar9 = (ulonglong)uVar7 + 1;
        do {
          if (*(char *)(param_1 + 0x40) == '\0') {
            if (uVar13 < 0x10) {
              bVar10 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((byte)iVar5 & 0x3f)) & 0xf;
            }
            else {
              bVar10 = 0;
            }
          }
          else {
            bVar10 = 0;
            if ((-1 < (int)uVar13) && ((int)uVar13 < iVar8)) {
              bVar10 = *(byte *)(*(ulonglong *)(param_1 + 0x30) + (ulonglong)uVar13);
            }
          }
          lVar11 = (longlong)(char)bVar10 + lVar11 * 10;
          iVar5 = iVar5 + -4;
          uVar13 = uVar13 - 1;
          lVar14 = lVar9 + -1;
          bVar2 = 0 < lVar9;
          lVar9 = lVar14;
        } while (lVar14 != 0 && bVar2);
      }
    }
    else {
      if ((int)uVar7 < 0) goto LAB_142538c94;
      iVar5 = uVar7 * 4 + iVar6 * -4;
      uVar13 = uVar7 - iVar6;
      lVar11 = 0;
      lVar9 = (ulonglong)uVar7 + 1;
      do {
        if (*(char *)(param_1 + 0x40) == '\0') {
          if (uVar13 < 0x10) {
            bVar10 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((byte)iVar5 & 0x3f)) & 0xf;
          }
          else {
            bVar10 = 0;
          }
        }
        else {
          bVar10 = 0;
          if ((-1 < (int)uVar13) && ((int)uVar13 < iVar8)) {
            bVar10 = *(byte *)(*(ulonglong *)(param_1 + 0x30) + (ulonglong)uVar13);
          }
        }
        lVar11 = (longlong)(char)bVar10 + lVar11 * 10;
        iVar5 = iVar5 + -4;
        uVar13 = uVar13 - 1;
        lVar14 = lVar9 + -1;
        bVar2 = 0 < lVar9;
        lVar9 = lVar14;
      } while (lVar14 != 0 && bVar2);
    }
    dVar15 = (double)lVar11;
    break;
  case 2:
    uVar7 = *(uint *)(param_1 + 0xc);
    uVar13 = *(uint *)(param_1 + 0x28);
    if ((int)uVar7 <= (int)*(uint *)(param_1 + 0x28)) {
      uVar13 = uVar7;
    }
    dVar15 = 0.0;
    if ((int)uVar13 < 0) {
      iVar6 = ~uVar7 << 2;
      iVar8 = -1;
      lVar9 = 0;
      do {
        uVar1 = iVar8 - uVar7;
        if (*(char *)(param_1 + 0x40) == '\0') {
          if (uVar1 < 0x10) {
            bVar10 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((byte)iVar6 & 0x3f)) & 0xf;
          }
          else {
            bVar10 = 0;
          }
        }
        else {
          bVar10 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x10))) {
            bVar10 = *(byte *)(*(ulonglong *)(param_1 + 0x30) + (ulonglong)uVar1);
          }
        }
        lVar9 = (longlong)(char)bVar10 + lVar9 * 10;
        uVar20 = (undefined4)((ulonglong)lVar9 >> 0x20);
        auVar19._8_4_ = uVar20;
        auVar19._0_8_ = lVar9;
        auVar19._12_4_ = 0x45300000;
        if (iVar8 <= (int)uVar13) break;
        iVar8 = iVar8 + -1;
        iVar6 = iVar6 + -4;
      } while ((auVar19._8_8_ - 1.9342813113834067e+25) +
               ((double)CONCAT44(0x43300000,(int)lVar9) - 4503599627370496.0) <= 1e+18);
      auVar17._8_4_ = uVar20;
      auVar17._0_8_ = lVar9;
      auVar17._12_4_ = 0x45300000;
      dVar15 = (auVar17._8_8_ - 1.9342813113834067e+25) +
               ((double)CONCAT44(0x43300000,(int)lVar9) - 4503599627370496.0);
    }
    break;
  case 3:
    uVar7 = *(uint *)(param_1 + 0xc);
    if ((int)uVar7 < 0) {
      iVar6 = ~uVar7 << 2;
      iVar8 = -1;
      uVar12 = 0;
      do {
        uVar13 = iVar8 - uVar7;
        if (*(char *)(param_1 + 0x40) == '\0') {
          if (uVar13 < 0x10) {
            bVar10 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((byte)iVar6 & 0x3f)) & 0xf;
          }
          else {
            bVar10 = 0;
          }
        }
        else {
          bVar10 = 0;
          if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(param_1 + 0x10))) {
            bVar10 = *(byte *)(*(ulonglong *)(param_1 + 0x30) + (ulonglong)uVar13);
          }
        }
        uVar12 = (longlong)(char)bVar10 + uVar12 * 10;
        auVar18._8_4_ = (int)(uVar12 >> 0x20);
        auVar18._0_8_ = uVar12;
        auVar18._12_4_ = 0x45300000;
        if (iVar8 <= (int)uVar7) break;
        iVar8 = iVar8 + -1;
        iVar6 = iVar6 + -4;
      } while ((auVar18._8_8_ - 1.9342813113834067e+25) +
               ((double)CONCAT44(0x43300000,(int)uVar12) - 4503599627370496.0) <= 1e+18);
      if (uVar12 != 0) {
        do {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar12;
          uVar4 = SUB168(auVar3 * ZEXT816(0xcccccccccccccccd),0);
          if (0x1999999999999999 < (uVar4 >> 1 | (ulonglong)((uVar4 & 1) != 0) << 0x3f))
          goto LAB_142538aab;
          bVar2 = 9 < uVar12;
          uVar12 = uVar12 / 10;
        } while (bVar2);
      }
    }
    uVar12 = 0;
LAB_142538aab:
    auVar16._8_4_ = (int)(uVar12 >> 0x20);
    auVar16._0_8_ = uVar12;
    auVar16._12_4_ = 0x45300000;
    dVar15 = (auVar16._8_8_ - 1.9342813113834067e+25) +
             ((double)CONCAT44(0x43300000,(int)uVar12) - 4503599627370496.0);
    break;
  case 4:
    iVar6 = *(int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0xc)) {
      iVar6 = *(int *)(param_1 + 0x28);
    }
    dVar15 = (double)-iVar6;
    break;
  case 5:
    dVar15 = (double)(*(int *)(param_1 + 0xc) >> 0x1f & -*(int *)(param_1 + 0xc));
    break;
  default:
    dVar15 = (double)FUN_142538d80();
    dVar15 = ABS(dVar15);
  }
  return dVar15;
}



// FUNCTION 142538cb0 FUN_142538cb0 body=7 status=ok
// SIG undefined FUN_142538cb0(void)

byte FUN_142538cb0(longlong param_1)

{
  return *(byte *)(param_1 + 0x14) & 1;
}



// FUNCTION 142538cc0 FUN_142538cc0 body=184 status=ok
// SIG undefined FUN_142538cc0(void)

longlong FUN_142538cc0(longlong param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar8 = (iVar1 + *(int *)(param_1 + 0x10)) - 1;
  uVar4 = 0x11;
  if ((int)uVar8 < 0x11) {
    uVar4 = uVar8;
  }
  if (param_2 == '\0') {
    uVar4 = uVar8;
  }
  if ((int)uVar4 < 0) {
    lVar9 = 0;
  }
  else {
    iVar5 = uVar4 * 4 + iVar1 * -4;
    lVar9 = 0;
    uVar6 = (ulonglong)uVar4;
    do {
      uVar4 = (uint)((uint)-iVar1 + uVar6);
      if (*(char *)(param_1 + 0x40) == '\0') {
        if (uVar4 < 0x10) {
          bVar7 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((byte)iVar5 & 0x3f)) & 0xf;
        }
        else {
          bVar7 = 0;
        }
      }
      else {
        bVar7 = 0;
        if ((-1 < (int)uVar4) && (bVar7 = 0, (int)uVar4 < *(int *)(param_1 + 0x10))) {
          bVar7 = *(byte *)(*(ulonglong *)(param_1 + 0x30) + ((uint)-iVar1 + uVar6 & 0xffffffff));
        }
      }
      lVar9 = (longlong)(char)bVar7 + lVar9 * 10;
      iVar5 = iVar5 + -4;
      bVar2 = 0 < (longlong)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar2);
  }
  lVar3 = -lVar9;
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    lVar3 = lVar9;
  }
  return lVar3;
}



// FUNCTION 142538d80 FUN_142538d80 body=227 status=ok
// SIG undefined FUN_142538d80(void)

undefined8 FUN_142538d80(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_a8 [8];
  ushort local_a0;
  undefined1 local_9e [2];
  int local_9c;
  undefined1 *local_90;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined2 local_40;
  undefined1 local_34 [4];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
    return 0xfff8000000000000;
  }
  cVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (cVar1 != '\0') {
    return *(undefined8 *)
            (&DAT_1499dd830 + (ulonglong)((*(byte *)((longlong)param_1 + 0x14) & 1) == 0) * 8);
  }
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = &DAT_149e02088;
  local_48 = &DAT_149e02088;
  local_40 = 0;
  FUN_142539ee0(param_1,local_a8);
  if (-1 < (short)local_a0) {
    local_9c = (int)(short)local_a0 >> 5;
  }
  if ((local_a0 & 0x11) == 0) {
    if ((local_a0 & 2) != 0) {
      local_90 = local_9e;
    }
  }
  else {
    local_90 = (undefined1 *)0x0;
  }
  uVar2 = FUN_1425e8c90(local_68,local_90,local_9c,local_34);
  FUN_140859a90(local_a8);
  return uVar2;
}



// FUNCTION 142538e70 Unwind@142538e70 body=44 status=ok
// SIG undefined Unwind@142538e70(void)

void Unwind_142538e70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142538ea0 FUN_142538ea0 body=8 status=ok
// SIG undefined FUN_142538ea0(void)

bool FUN_142538ea0(longlong param_1)

{
  return -1 < *(int *)(param_1 + 0xc);
}



// FUNCTION 142538eb0 FUN_142538eb0 body=17 status=ok
// SIG undefined FUN_142538eb0(void)

int FUN_142538eb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc);
  if (iVar1 < *(int *)(param_1 + 0x24)) {
    iVar1 = *(int *)(param_1 + 0x24);
  }
  return iVar1 + -1;
}



// FUNCTION 142538ed0 FUN_142538ed0 body=12 status=ok
// SIG undefined FUN_142538ed0(void)

int FUN_142538ed0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  return iVar1;
}



// FUNCTION 142538ee0 FUN_142538ee0 body=54 status=ok
// SIG undefined FUN_142538ee0(void)

ulonglong FUN_142538ee0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = param_2 - *(int *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (0xf < uVar2) {
      return 0;
    }
    uVar1 = *(ulonglong *)(param_1 + 0x30) >> ((char)uVar2 * '\x04' & 0x3fU) & 0xffffffffffffff0f;
  }
  else {
    uVar1 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x10))) {
      return (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar2);
    }
  }
  return uVar1;
}



// FUNCTION 142538f20 FUN_142538f20 body=23 status=ok
// SIG undefined FUN_142538f20(void)

undefined4 FUN_142538f20(longlong param_1)

{
  int iVar1;
  
  iVar1 = -(uint)((*(byte *)(param_1 + 0x14) & 1) != 0);
  return CONCAT31((int3)((uint)iVar1 >> 8),(byte)iVar1 | *(int *)(param_1 + 0x10) != 0);
}



// FUNCTION 142538f40 FUN_142538f40 body=9 status=ok
// SIG undefined FUN_142538f40(void)

byte FUN_142538f40(longlong param_1)

{
  return (*(byte *)(param_1 + 0x14) & 2) >> 1;
}



// FUNCTION 142538f50 FUN_142538f50 body=10 status=ok
// SIG undefined FUN_142538f50(void)

byte FUN_142538f50(longlong param_1)

{
  return (*(byte *)(param_1 + 0x14) & 4) >> 2;
}



// FUNCTION 142538f60 FUN_142538f60 body=243 status=ok
// SIG undefined FUN_142538f60(void)

longlong FUN_142538f60(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  if (param_2 == -0x80000000) {
    *(undefined1 *)(param_1 + 0x14) = 1;
    *(undefined8 *)(param_1 + 0x30) = 0x2147483648;
    iVar4 = 10;
  }
  else {
    if (param_2 < 0) {
      *(undefined1 *)(param_1 + 0x14) = 1;
      param_2 = -param_2;
    }
    else if (param_2 == 0) {
      return param_1;
    }
    iVar4 = 0;
    bVar3 = 0;
    uVar5 = 0;
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (longlong)param_2;
      uVar5 = uVar5 >> 4 |
              (ulonglong)
              (param_2 + (SUB164(auVar1 * ZEXT816(0xcccccccccccccccd),8) >> 2 & 0xfffffffe) * -5) <<
              0x3c;
      uVar2 = param_2 + 9;
      param_2 = param_2 / 10;
      iVar4 = iVar4 + 1;
      bVar3 = bVar3 - 4;
    } while (0x12 < uVar2);
    *(ulonglong *)(param_1 + 0x30) = uVar5 >> (bVar3 & 0x3f);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(int *)(param_1 + 0x10) = iVar4;
  FUN_1425380c0(param_1);
  return param_1;
}



// FUNCTION 142539060 FUN_142539060 body=417 status=ok
// SIG undefined FUN_142539060(void)

void FUN_142539060(longlong param_1,longlong param_2)

{
  void *_Dst;
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 < 10000000000000000) {
    if (param_2 == 0) {
      uVar3 = 0;
      iVar4 = 0x10;
    }
    else {
      iVar4 = 0x10;
      uVar3 = 0;
      do {
        uVar3 = uVar3 >> 4 | (ulonglong)(uint)((int)param_2 + (int)(param_2 / 10) * -10) << 0x3c;
        iVar4 = iVar4 + -1;
        uVar2 = param_2 + 9;
        param_2 = param_2 / 10;
      } while (0x12 < uVar2);
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3 >> ((char)iVar4 * '\x04' & 0x3fU);
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar3 = (ulonglong)(0x10 - iVar4);
  }
  else {
    if (*(char *)(param_1 + 0x40) == '\0') {
      puVar1 = (undefined8 *)FUN_1424da030(0x28);
      *(undefined8 **)(param_1 + 0x30) = puVar1;
      *(undefined4 *)(param_1 + 0x38) = 0x28;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x38);
      if (iVar4 < 0x28) {
        _Dst = (void *)FUN_1424da030(0x50);
        memcpy(_Dst,*(void **)(param_1 + 0x30),(longlong)iVar4);
        memset((void *)((longlong)iVar4 + (longlong)_Dst),0,(ulonglong)(0x28 - iVar4));
        FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
        *(void **)(param_1 + 0x30) = _Dst;
        *(undefined4 *)(param_1 + 0x38) = 0x50;
      }
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    uVar3 = 0;
    do {
      *(char *)(*(longlong *)(param_1 + 0x30) + uVar3) = (char)param_2 + (char)(param_2 / 10) * -10;
      uVar3 = uVar3 + 1;
      uVar2 = param_2 + 9;
      param_2 = param_2 / 10;
    } while (0x12 < uVar2);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(int *)(param_1 + 0x10) = (int)uVar3;
  return;
}



// FUNCTION 142539210 FUN_142539210 body=126 status=ok
// SIG undefined FUN_142539210(void)

longlong FUN_142539210(longlong param_1,ulonglong param_2)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  if (param_2 < 0x8000000000000001) {
    if (param_2 == 0) {
      return param_1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x14) = 1;
    param_2 = -param_2;
  }
  FUN_142539290(param_1,param_2);
  FUN_1425380c0(param_1);
  return param_1;
}



// FUNCTION 142539290 FUN_142539290 body=301 status=ok
// SIG undefined FUN_142539290(void)

void FUN_142539290(longlong param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 local_88;
  char local_7c;
  int local_24 [3];
  
  local_24[1] = -2;
  local_24[2] = -1;
  if (param_2 == 0x8000000000000000) {
    FUN_142544930(&local_88);
    local_24[0] = 0;
    FUN_142544b90(&local_88,&DAT_1499dd900,local_24);
    if (local_24[0] < 1) {
      *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
      FUN_1425393f0(param_1,&local_88);
    }
    if (local_7c != '\0') {
      FUN_1424da110(local_88);
    }
  }
  else {
    if (0x7fffffff < (longlong)param_2) {
      FUN_142539060(param_1);
      return;
    }
    if ((int)param_2 == 0) {
      uVar4 = 0;
      iVar3 = 0x10;
    }
    else {
      iVar3 = 0x10;
      uVar4 = 0;
      do {
        iVar2 = (int)param_2;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = (longlong)iVar2;
        uVar4 = uVar4 >> 4 |
                (ulonglong)
                (iVar2 + (SUB164(auVar1 * ZEXT816(0xcccccccccccccccd),8) >> 2 & 0xfffffffe) * -5) <<
                0x3c;
        param_2 = (ulonglong)(uint)(iVar2 / 10);
        iVar3 = iVar3 + -1;
      } while (0x12 < iVar2 + 9U);
    }
    *(ulonglong *)(param_1 + 0x30) = uVar4 >> ((char)iVar3 * '\x04' & 0x3fU);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 0x10) = 0x10 - iVar3;
  }
  return;
}



// FUNCTION 1425393c0 Unwind@1425393c0 body=43 status=ok
// SIG undefined Unwind@1425393c0(void)

void Unwind_1425393c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1425393f0 FUN_1425393f0 body=410 status=ok
// SIG undefined FUN_1425393f0(void)

void FUN_1425393f0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  puVar3 = (uint *)*param_2;
  uVar1 = *puVar3;
  uVar8 = (ulonglong)uVar1;
  if ((int)uVar1 < 0x11) {
    if ((int)uVar1 < 1) {
      uVar8 = 0;
    }
    else {
      if (uVar1 < 4) {
        uVar6 = 0;
        uVar8 = 0;
      }
      else {
        bVar7 = 0xc;
        uVar6 = 0;
        uVar8 = 0;
        do {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar3 + uVar6 + 0xc) << (bVar7 & 0x3f) |
                  (ulonglong)*(byte *)((longlong)puVar3 + uVar6 + 0xb) << (bVar7 - 4 & 0x3f) |
                  (ulonglong)*(byte *)((longlong)puVar3 + uVar6 + 10) << (bVar7 - 8 & 0x3f) |
                  (ulonglong)*(byte *)((longlong)puVar3 + uVar6 + 9) << (bVar7 - 0xc & 0x3f) | uVar8
          ;
          uVar6 = uVar6 + 4;
          bVar7 = bVar7 + 0x10;
        } while ((uVar1 & 0xfffffffc) != uVar6);
      }
      if ((ulonglong)(uVar1 & 3) != 0) {
        lVar5 = uVar6 << 2;
        uVar9 = 0;
        do {
          uVar8 = uVar8 | (ulonglong)*(byte *)((longlong)puVar3 + uVar9 + uVar6 + 9) <<
                          ((byte)lVar5 & 0x3f);
          uVar9 = uVar9 + 1;
          lVar5 = lVar5 + 4;
        } while ((uVar1 & 3) != uVar9);
      }
    }
    *(ulonglong *)(param_1 + 0x30) = uVar8;
  }
  else {
    if (*(char *)(param_1 + 0x40) == '\0') {
      pvVar4 = (void *)FUN_1424da030(uVar8);
      *(void **)(param_1 + 0x30) = pvVar4;
      *(uint *)(param_1 + 0x38) = uVar1;
      memset(pvVar4,0,uVar8);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 < (int)uVar1) {
        pvVar4 = (void *)FUN_1424da030(uVar8 * 2);
        memcpy(pvVar4,*(void **)(param_1 + 0x30),(longlong)iVar2);
        memset((void *)((longlong)iVar2 + (longlong)pvVar4),0,(longlong)(int)(uVar1 - iVar2));
        FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
        *(void **)(param_1 + 0x30) = pvVar4;
        *(int *)(param_1 + 0x38) = (int)(uVar8 * 2);
      }
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    if (0 < (int)*puVar3) {
      lVar5 = 0;
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar5) =
             *(undefined1 *)((longlong)puVar3 + lVar5 + 9);
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)*puVar3);
    }
  }
  *(uint *)(param_1 + 0xc) = puVar3[1];
  *(uint *)(param_1 + 0x10) = *puVar3;
  return;
}



// FUNCTION 142539590 FUN_142539590 body=216 status=ok
// SIG undefined FUN_142539590(void)

void FUN_142539590(longlong param_1,double param_2)

{
  short sVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  iVar2 = _dsign(param_2);
  if (iVar2 != 0) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
    param_2 = -param_2;
  }
  local_28 = param_2;
  sVar1 = _dtest(&local_28);
  if (sVar1 == 2) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 4;
  }
  else {
    local_28 = param_2;
    sVar1 = _dtest(&local_28);
    if (sVar1 < 1) {
      if ((param_2 != 0.0) || (NAN(param_2))) {
        FUN_142539680(param_1,param_2);
        FUN_1425380c0(param_1);
      }
    }
    else {
      *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 142539680 FUN_142539680 body=247 status=ok
// SIG undefined FUN_142539680(void)

void FUN_142539680(longlong param_1,double param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  double dVar5;
  
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(double *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = (uint)((ulonglong)param_2 >> 0x34) & 0x7ff;
  if (uVar1 < 0x434) {
    if (((double)(longlong)param_2 == param_2) && (!NAN((double)(longlong)param_2) && !NAN(param_2))
       ) {
      FUN_142539290(param_1);
      return;
    }
  }
  uVar1 = (uint)((double)(int)(0x433 - uVar1) / 3.32192809489);
  if ((int)uVar1 < 0) {
    uVar3 = uVar1;
    uVar2 = uVar1;
    if (uVar1 < 0xffffffeb) {
      do {
        param_2 = param_2 / 1e+22;
        uVar2 = uVar3 + 0x16;
        bVar4 = uVar3 < 0xffffffd5;
        uVar3 = uVar2;
      } while (bVar4);
    }
    param_2 = param_2 / *(double *)(&DAT_1499dd730 + (ulonglong)-uVar2 * 8);
  }
  else {
    uVar3 = uVar1;
    uVar2 = uVar1;
    if (0x15 < uVar1) {
      do {
        param_2 = param_2 * 1e+22;
        uVar2 = uVar3 - 0x16;
        bVar4 = 0x2b < uVar3;
        uVar3 = uVar2;
      } while (bVar4);
    }
    param_2 = param_2 * *(double *)(&DAT_1499dd730 + (ulonglong)uVar2 * 8);
  }
  dVar5 = (double)round(param_2);
  if ((longlong)dVar5 != 0) {
    FUN_142539290(param_1);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - uVar1;
  }
  return;
}



// FUNCTION 142539780 FUN_142539780 body=182 status=ok
// SIG undefined FUN_142539780(void)

void FUN_142539780(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_39;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x20);
  local_50 = &local_44;
  local_58 = &local_40;
  local_60 = &local_39;
  local_68 = 0x12;
  FUN_1425e8b60(*(undefined8 *)(param_1 + 0x18),0,0,local_38);
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_142539840(param_1,local_38,local_40,local_44);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1;
  *(undefined1 *)(param_1 + 0x41) = 1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
}



// FUNCTION 142539840 FUN_142539840 body=1181 status=ok
// SIG undefined FUN_142539840(void)

void FUN_142539840(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  undefined2 uVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 uVar13;
  int iVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar9 = (uint)param_3;
  if (0x10 < (int)uVar9) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      pvVar2 = (void *)FUN_1424da030(param_3 & 0xffffffff);
      *(void **)(param_1 + 0x30) = pvVar2;
      *(uint *)(param_1 + 0x38) = uVar9;
      memset(pvVar2,0,param_3 & 0xffffffff);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x38);
      if (iVar7 < (int)uVar9) {
        pvVar2 = (void *)FUN_1424da030(uVar9 * 2);
        memcpy(pvVar2,*(void **)(param_1 + 0x30),(longlong)iVar7);
        memset((void *)((longlong)iVar7 + (longlong)pvVar2),0,(longlong)(int)(uVar9 - iVar7));
        FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
        *(void **)(param_1 + 0x30) = pvVar2;
        *(uint *)(param_1 + 0x38) = uVar9 * 2;
      }
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    if (uVar9 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      uVar6 = uVar9;
      do {
        *(char *)(*(longlong *)(param_1 + 0x30) + uVar4) =
             *(char *)(param_2 + (int)(uVar6 - 1)) + -0x30;
        *(char *)(*(longlong *)(param_1 + 0x30) + 1 + uVar4) =
             *(char *)(param_2 + (int)(uVar6 - 2)) + -0x30;
        uVar4 = uVar4 + 2;
        uVar6 = uVar6 - 2;
      } while ((uVar9 & 0xfffffffe) != uVar4);
    }
    if ((param_3 & 1) != 0) {
      *(char *)(*(longlong *)(param_1 + 0x30) + uVar4) =
           *(char *)(param_2 + (int)(~(uint)uVar4 + uVar9)) + -0x30;
    }
    goto LAB_142539cc5;
  }
  if ((int)uVar9 < 1) {
    uVar4 = 0;
  }
  else {
    uVar3 = param_3 & 0xffffffff;
    uVar4 = param_3;
    if (uVar9 < 10) {
LAB_142539c26:
      uVar8 = 0;
      uVar10 = 0;
    }
    else {
      uVar4 = uVar3 - 1;
      iVar7 = uVar9 - 1;
      uVar8 = 0;
      if (iVar7 < iVar7 - (int)uVar4) goto LAB_142539c26;
      uVar4 = uVar4 >> 0x20;
      uVar10 = 0;
      if (uVar4 == 0) {
        uVar6 = uVar9 & 0xfffffffe;
        uVar8 = (ulonglong)uVar6;
        uVar1 = *(undefined2 *)(param_2 + -1 + (longlong)iVar7);
        uVar13 = (undefined1)((ushort)uVar1 >> 8);
        auVar17 = pshuflw(in_XMM2,ZEXT416(CONCAT22((short)(CONCAT13(uVar13,CONCAT12(uVar13,uVar1))
                                                          >> 0x10),CONCAT11((char)uVar1,(char)uVar1)
                                                  )),0x24);
        iVar31 = auVar17._0_4_ >> 0x18;
        auVar18._4_4_ = auVar17._4_4_ >> 0x18;
        auVar18._8_4_ = auVar18._4_4_;
        auVar18._12_4_ = -(uint)(auVar17._4_4_ < 0);
        auVar17._0_8_ = CONCAT44(-(uint)(auVar17._0_4_ < 0),iVar31) + -0x30;
        auVar17._8_8_ = auVar18._8_8_ * 0x10 + -0x300;
        if (uVar8 != 2) {
          uVar1 = *(undefined2 *)(param_2 + -1 + (longlong)(int)(uVar9 - 3));
          uVar13 = (undefined1)((ushort)uVar1 >> 8);
          auVar18 = ZEXT416(CONCAT22((short)(CONCAT13(uVar13,CONCAT12(uVar13,uVar1)) >> 0x10),
                                     CONCAT11((char)uVar1,(char)uVar1)));
          auVar18 = pshuflw(auVar18,auVar18,0x24);
          iVar32 = auVar18._0_4_ >> 0x18;
          auVar19._4_4_ = auVar18._4_4_ >> 0x18;
          auVar19._8_4_ = auVar19._4_4_;
          auVar19._12_4_ = -(uint)(auVar18._4_4_ < 0);
          auVar20._0_8_ = CONCAT44(-(uint)(auVar18._0_4_ < 0),iVar32) * 0x100 + -0x3000;
          auVar20._8_8_ = auVar19._8_8_ * 0x1000 + -0x30000;
          auVar17 = auVar17 | auVar20;
          if (uVar6 != 4) {
            uVar1 = *(undefined2 *)(param_2 + -1 + (longlong)(int)(uVar9 - 5));
            uVar13 = (undefined1)((ushort)uVar1 >> 8);
            auVar18 = pshuflw(auVar20,ZEXT416(CONCAT22((short)(CONCAT13(uVar13,CONCAT12(uVar13,uVar1
                                                                                       )) >> 0x10),
                                                       CONCAT11((char)uVar1,(char)uVar1))),0x24);
            iVar33 = auVar18._0_4_ >> 0x18;
            auVar21._4_4_ = auVar18._4_4_ >> 0x18;
            auVar21._8_4_ = auVar21._4_4_;
            auVar21._12_4_ = -(uint)(auVar18._4_4_ < 0);
            auVar22._0_8_ = CONCAT44(-(uint)(auVar18._0_4_ < 0),iVar33) * 0x10000 + -0x300000;
            auVar22._8_8_ = auVar21._8_8_ * 0x100000 + -0x3000000;
            auVar17 = auVar17 | auVar22;
            if (uVar6 != 6) {
              uVar1 = *(undefined2 *)(param_2 + -1 + (longlong)(int)(uVar9 - 7));
              uVar13 = (undefined1)((ushort)uVar1 >> 8);
              auVar18 = ZEXT416(CONCAT22((short)(CONCAT13(uVar13,CONCAT12(uVar13,uVar1)) >> 0x10),
                                         CONCAT11((char)uVar1,(char)uVar1)));
              auVar18 = pshuflw(auVar18,auVar18,0x24);
              iVar34 = auVar18._0_4_ >> 0x18;
              auVar23._4_4_ = auVar18._4_4_ >> 0x18;
              auVar23._8_4_ = auVar23._4_4_;
              auVar23._12_4_ = -(uint)(auVar18._4_4_ < 0);
              auVar24._0_8_ = CONCAT44(-(uint)(auVar18._0_4_ < 0),iVar34) * 0x1000000 + -0x30000000;
              auVar24._8_8_ = auVar23._8_8_ * 0x10000000 + -0x300000000;
              auVar17 = auVar17 | auVar24;
              if (uVar6 != 8) {
                uVar1 = *(undefined2 *)(param_2 + -1 + (longlong)(int)(uVar9 - 9));
                uVar13 = (undefined1)((ushort)uVar1 >> 8);
                auVar18 = ZEXT416(CONCAT22((short)(CONCAT13(uVar13,CONCAT12(uVar13,uVar1)) >> 0x10),
                                           CONCAT11((char)uVar1,(char)uVar1)));
                auVar18 = pshuflw(auVar18,auVar18,0x24);
                iVar7 = auVar18._0_4_ >> 0x18;
                iVar16 = auVar18._4_4_ >> 0x18;
                auVar25._4_4_ = iVar16;
                auVar25._0_4_ = iVar7;
                auVar25._8_4_ = iVar16;
                auVar25._12_4_ = auVar18._12_4_ >> 0x18;
                auVar26._0_8_ = (CONCAT44(iVar16,iVar7) << 0x20) + -0x3000000000;
                auVar26._8_8_ = (auVar25._8_8_ << 0x24) + -0x30000000000;
                auVar17 = auVar17 | auVar26;
                if (uVar6 != 10) {
                  uVar1 = *(undefined2 *)(param_2 + -1 + (longlong)(int)(uVar9 - 0xb));
                  uVar13 = (undefined1)((ushort)uVar1 >> 8);
                  auVar18 = pshuflw(auVar26,ZEXT416(CONCAT22((short)(CONCAT13(uVar13,CONCAT12(uVar13
                                                  ,uVar1)) >> 0x10),
                                                  CONCAT11((char)uVar1,(char)uVar1))),0x24);
                  auVar27._0_4_ = auVar18._0_4_ >> 0x18;
                  auVar27._4_4_ = auVar18._4_4_ >> 0x18;
                  auVar27._8_4_ = auVar27._4_4_;
                  auVar27._12_4_ = -(uint)(auVar18._4_4_ < 0);
                  auVar28._0_8_ = ((ulonglong)auVar27._0_4_ << 0x28) + -0x300000000000;
                  auVar28._8_8_ = (auVar27._8_8_ << 0x2c) + -0x3000000000000;
                  auVar17 = auVar17 | auVar28;
                  if (uVar6 != 0xc) {
                    uVar1 = *(undefined2 *)(param_2 + -1 + (longlong)(int)(uVar9 - 0xd));
                    uVar13 = (undefined1)((ushort)uVar1 >> 8);
                    auVar18 = ZEXT416(CONCAT22((short)(CONCAT13(uVar13,CONCAT12(uVar13,uVar1)) >>
                                                      0x10),CONCAT11((char)uVar1,(char)uVar1)));
                    auVar18 = pshuflw(auVar18,auVar18,0x24);
                    auVar29._0_4_ = auVar18._0_4_ >> 0x18;
                    auVar29._4_4_ = auVar18._4_4_ >> 0x18;
                    auVar29._8_4_ = auVar29._4_4_;
                    auVar29._12_4_ = -(uint)(auVar18._4_4_ < 0);
                    auVar30._0_8_ = ((ulonglong)auVar29._0_4_ << 0x30) + -0x30000000000000;
                    auVar30._8_8_ = (auVar29._8_8_ << 0x34) + -0x300000000000000;
                    auVar17 = auVar17 | auVar30;
                    if (uVar6 != 0xe) {
                      uVar1 = *(undefined2 *)(param_2 + -1 + (longlong)(int)(uVar9 - 0xf));
                      uVar13 = (undefined1)((ushort)uVar1 >> 8);
                      auVar18 = ZEXT416(CONCAT22((short)(CONCAT13(uVar13,CONCAT12(uVar13,uVar1)) >>
                                                        0x10),CONCAT11((char)uVar1,(char)uVar1)));
                      auVar18 = pshuflw(auVar18,auVar18,0x24);
                      auVar14._0_4_ = auVar18._0_4_ >> 0x18;
                      auVar14._4_4_ = auVar18._4_4_ >> 0x18;
                      auVar14._8_4_ = auVar14._4_4_;
                      auVar14._12_4_ = -(uint)(auVar18._4_4_ < 0);
                      auVar15._8_8_ = auVar14._8_8_ << 0x3c;
                      auVar15._0_8_ = ((ulonglong)auVar14._0_4_ << 0x38) + -0x3000000000000000;
                      auVar17 = auVar17 | auVar15;
                    }
                  }
                }
              }
            }
          }
        }
        uVar4 = auVar17._8_8_ | auVar17._0_8_;
        uVar10 = uVar4;
        if (uVar8 == uVar3) goto LAB_142539cc1;
      }
    }
    uVar11 = ~uVar8;
    if ((param_3 & 1) != 0) {
      uVar4 = (longlong)*(char *)(param_2 + (int)(~(uint)uVar8 + uVar9)) + -0x30 <<
              ((char)uVar8 * '\x04' & 0x38U) | uVar10;
      uVar8 = uVar8 | 1;
      uVar10 = uVar4;
    }
    if (uVar11 + uVar3 != 0) {
      lVar5 = uVar3 - uVar8;
      lVar12 = uVar8 * 4;
      iVar7 = ~(uint)uVar8 + uVar9;
      uVar4 = uVar10;
      do {
        uVar4 = (longlong)*(char *)(param_2 + (iVar7 + -1)) + -0x30 << ((byte)lVar12 + 4 & 0x3f) |
                (longlong)*(char *)(param_2 + iVar7) + -0x30 << ((byte)lVar12 & 0x3f) | uVar4;
        lVar12 = lVar12 + 8;
        iVar7 = iVar7 + -2;
        lVar5 = lVar5 + -2;
      } while (lVar5 != 0);
    }
  }
LAB_142539cc1:
  *(ulonglong *)(param_1 + 0x30) = uVar4;
LAB_142539cc5:
  *(uint *)(param_1 + 0xc) = param_4 - uVar9;
  *(uint *)(param_1 + 0x10) = uVar9;
  return;
}



// FUNCTION 142539ce0 FUN_142539ce0 body=214 status=ok
// SIG undefined FUN_142539ce0(void)

longlong FUN_142539ce0(longlong param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  undefined8 local_a8;
  char local_9c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  FUN_142544930(&local_a8);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_142544a40(&local_a8,&local_48,param_3);
  if (*param_3 < 1) {
    cVar1 = FUN_142544f20(&local_a8);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
    }
    cVar1 = FUN_142544f30(&local_a8);
    if (cVar1 == '\0') {
      FUN_1425393f0(param_1,&local_a8);
      FUN_1425380c0(param_1);
    }
  }
  if (local_9c != '\0') {
    FUN_1424da110(local_a8);
  }
  return param_1;
}



// FUNCTION 142539dc0 Unwind@142539dc0 body=49 status=ok
// SIG undefined Unwind@142539dc0(void)

void Unwind_142539dc0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 142539e00 FUN_142539e00 body=204 status=ok
// SIG undefined FUN_142539e00(void)

bool FUN_142539e00(longlong param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((ulonglong)uVar1 == 0) {
    return true;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if ((-1 < iVar2) || (param_2 != '\0')) {
    iVar3 = uVar1 + iVar2 + -1;
    if (iVar3 < 0x12) {
      return true;
    }
    if (iVar3 == 0x12) {
      if (0 < (int)uVar1) {
        iVar3 = iVar2 * -4 + 0x48;
        uVar5 = 0x12 - iVar2;
        uVar6 = 0;
        do {
          if (*(char *)(param_1 + 0x40) == '\0') {
            if (uVar5 < 0x10) {
              bVar4 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((byte)iVar3 & 0x3f)) & 0xf;
            }
            else {
              bVar4 = 0;
            }
          }
          else {
            bVar4 = 0;
            if ((-1 < (int)uVar5) && ((int)uVar5 < (int)uVar1)) {
              bVar4 = *(byte *)(*(ulonglong *)(param_1 + 0x30) + (ulonglong)uVar5);
            }
          }
          if (bVar4 != (&DAT_1499dd7e0)[uVar6]) {
            return (char)bVar4 < (char)(&DAT_1499dd7e0)[uVar6];
          }
          uVar6 = uVar6 + 1;
          iVar3 = iVar3 + -4;
          uVar5 = uVar5 - 1;
        } while (uVar1 != uVar6);
      }
      return (bool)(*(byte *)(param_1 + 0x14) & 1);
    }
  }
  return false;
}



// FUNCTION 142539ee0 FUN_142539ee0 body=652 status=ok
// SIG undefined FUN_142539ee0(void)

undefined8 * FUN_142539ee0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  div_t dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 local_78 [4];
  short local_70;
  int local_6c;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
  local_38 = param_2;
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    local_78[0] = 0x2d;
    FUN_1424a6cf0(param_2,local_78,0,1);
  }
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 0) {
    FUN_1424a6cf0(local_38,L"0E+0",0,0xffffffff);
    return local_38;
  }
  uVar1 = iVar7 - 1;
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (uVar1 < 0x10) {
      bVar3 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((char)uVar1 * '\x04' & 0x3fU)) & 0xf;
      goto LAB_142539f9d;
    }
  }
  else if (0 < iVar7) {
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar1);
    goto LAB_142539f9d;
  }
  bVar3 = 0;
LAB_142539f9d:
  FUN_1424a7d60(local_38,(char)bVar3 + 0x30);
  if (1 < iVar7) {
    local_78[0] = 0x2e;
    FUN_1424a6cf0(local_38,local_78,0,1);
    for (uVar5 = iVar7 - 2; -1 < (int)uVar5; uVar5 = uVar5 - 1) {
      if (*(char *)(param_1 + 0x40) == '\0') {
        if (0xf < uVar5) goto LAB_14253a005;
        bVar3 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((char)uVar5 * '\x04' & 0x3fU)) & 0xf;
      }
      else if ((int)uVar5 < *(int *)(param_1 + 0x10)) {
        bVar3 = *(byte *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar5);
      }
      else {
LAB_14253a005:
        bVar3 = 0;
      }
      FUN_1424a7d60(local_38,(char)bVar3 + 0x30);
    }
  }
  local_78[0] = 0x45;
  FUN_1424a6cf0(local_38,local_78,0,1);
  dVar4.quot = uVar1 + *(int *)(param_1 + 0xc);
  dVar4.rem = 0;
  if (dVar4.quot == 0x80000000) {
    FUN_1424a7000(local_78,L"-2147483648",0xffffffff);
    if (-1 < local_70) {
      local_6c = (int)local_70 >> 5;
    }
    FUN_1424a9690(local_38,local_78,0,local_6c);
    FUN_140859a90(local_78);
  }
  else {
    if ((int)dVar4.quot < 0) {
      local_78[0] = 0x2d;
      FUN_1424a6cf0(local_38,local_78,0,1);
      dVar4.quot = -dVar4.quot;
      dVar4.rem = 0;
    }
    else {
      local_78[0] = 0x2b;
      FUN_1424a6cf0(local_38,local_78,0,1);
      if (dVar4.quot == 0) {
        local_78[0] = 0x30;
        dVar4.quot = 0;
        dVar4.rem = 0;
        FUN_1424a6cf0(local_38,local_78,0,1);
      }
    }
    if (*(short *)(local_38 + 1) < 0) {
      iVar7 = *(int *)((longlong)local_38 + 0xc);
    }
    else {
      iVar7 = (int)*(short *)(local_38 + 1) >> 5;
    }
    iVar6 = dVar4.quot;
    puVar2 = local_38;
    while (local_38 = puVar2, 0 < iVar6) {
      dVar4 = div(dVar4.quot,10);
      FUN_1424a90a0(puVar2,iVar7,0,dVar4.rem + 0x30);
      puVar2 = local_38;
      iVar6 = dVar4.quot;
    }
  }
  return local_38;
}



// FUNCTION 14253a170 Unwind@14253a170 body=43 status=ok
// SIG undefined Unwind@14253a170(void)

void Unwind_14253a170(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 14253a1a0 Unwind@14253a1a0 body=44 status=ok
// SIG undefined Unwind@14253a1a0(void)

void Unwind_14253a1a0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x20) = L"0E+0";
  return;
}



// FUNCTION 14253a1d0 Unwind@14253a1d0 body=43 status=ok
// SIG undefined Unwind@14253a1d0(void)

void Unwind_14253a1d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 14253a200 FUN_14253a200 body=152 status=ok
// SIG undefined FUN_14253a200(void)

void FUN_14253a200(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < 0) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      *(ulonglong *)(param_1 + 0x30) = *(ulonglong *)(param_1 + 0x30) >> ((char)iVar1 * -4 & 0x3fU);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x10);
      uVar3 = 0;
      if (-iVar1 < iVar2) {
        uVar3 = 0;
        do {
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + uVar3) =
               *(undefined1 *)((ulonglong)(uint)-iVar1 + *(longlong *)(param_1 + 0x30) + uVar3);
          uVar3 = uVar3 + 1;
          iVar2 = *(int *)(param_1 + 0x10);
        } while ((longlong)uVar3 < (longlong)(iVar2 + iVar1));
      }
      if ((int)uVar3 < iVar2) {
        uVar3 = uVar3 & 0xffffffff;
        do {
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + uVar3) = 0;
          uVar3 = uVar3 + 1;
          iVar2 = *(int *)(param_1 + 0x10);
        } while ((int)uVar3 < iVar2);
      }
    }
    *(int *)(param_1 + 0x10) = iVar2 + iVar1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1425380c0(param_1);
    return;
  }
  return;
}



// FUNCTION 14253a2a0 FUN_14253a2a0 body=125 status=ok
// SIG undefined FUN_14253a2a0(void)

void FUN_14253a2a0(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(ulonglong *)(param_1 + 0x30) =
         *(ulonglong *)(param_1 + 0x30) >> ((char)param_2 * '\x04' & 0x3fU);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    uVar2 = 0;
    if (param_2 < iVar1) {
      uVar2 = 0;
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + uVar2) =
             *(undefined1 *)((longlong)param_2 + *(longlong *)(param_1 + 0x30) + uVar2);
        uVar2 = uVar2 + 1;
        iVar1 = *(int *)(param_1 + 0x10);
      } while ((longlong)uVar2 < (longlong)(iVar1 - param_2));
    }
    if ((int)uVar2 < iVar1) {
      uVar2 = uVar2 & 0xffffffff;
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + uVar2) = 0;
        uVar2 = uVar2 + 1;
        iVar1 = *(int *)(param_1 + 0x10);
      } while ((int)uVar2 < iVar1);
    }
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  *(int *)(param_1 + 0x10) = iVar1 - param_2;
  return;
}



// FUNCTION 14253a320 FUN_14253a320 body=23 status=ok
// SIG undefined FUN_14253a320(void)

void FUN_14253a320(void)

{
  FUN_14253a340();
  return;
}



// FUNCTION 14253a340 FUN_14253a340 body=2465 status=ok
// SIG undefined FUN_14253a340(void)

void FUN_14253a340(longlong param_1,int param_2,uint param_3,char param_4,int *param_5)

{
  int iVar1;
  char *_Dst;
  undefined1 *_Dst_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  size_t sVar6;
  byte bVar7;
  char cVar8;
  ulonglong uVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  
  do {
    iVar3 = *(int *)(param_1 + 0xc);
    uVar2 = param_2 - iVar3;
    uVar4 = uVar2;
    if (param_2 < (int)uVar2) {
      uVar4 = 0x80000000;
    }
    if (iVar3 < 1) {
      uVar4 = uVar2;
    }
    uVar5 = (ulonglong)uVar4;
    if ((int)uVar2 < param_2) {
      uVar5 = 0x7fffffff;
    }
    if (-1 < iVar3) {
      uVar5 = (ulonglong)uVar4;
    }
    cVar8 = *(char *)(param_1 + 0x40);
    uVar4 = (uint)uVar5;
    if (cVar8 == '\0') {
      if (uVar4 < 0x10) {
        bVar14 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((char)uVar5 * '\x04' & 0x3fU)) & 0xf;
      }
      else {
        bVar14 = 0;
      }
    }
    else {
      bVar14 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x10))) {
        bVar14 = *(byte *)(*(longlong *)(param_1 + 0x30) + uVar5);
      }
    }
    if (((int)uVar4 < 1) && (*(char *)(param_1 + 0x15) == '\0')) {
      if (param_4 == '\0') {
        return;
      }
      if (bVar14 == 0) {
        return;
      }
      if (bVar14 == 5) {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar3 == 0) {
      return;
    }
    uVar9 = (ulonglong)(uVar4 - 1);
    if (uVar4 == 0x80000000) {
      uVar9 = uVar5;
    }
    uVar2 = (uint)uVar9;
    if (cVar8 == '\0') {
      if (0xf < uVar2) goto LAB_14253a490;
      bVar16 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((char)uVar9 * '\x04' & 0x3fU)) & 0xf;
    }
    else if (((int)uVar2 < 0) || (iVar3 <= (int)uVar2)) {
LAB_14253a490:
      bVar16 = 0;
    }
    else {
      bVar16 = *(byte *)(*(longlong *)(param_1 + 0x30) + uVar9);
    }
    bVar7 = bVar14;
    if (*(char *)(param_1 + 0x15) == '\0') {
      if (((param_4 != '\0') && (bVar14 != 2)) && (bVar14 != 7)) {
        if ((char)bVar14 < '\x02') {
          bVar17 = true;
          iVar10 = 1;
          goto LAB_14253a9e4;
        }
        iVar10 = 3;
        if (bVar14 < 5) goto LAB_14253a9cf;
        iVar10 = (uint)(6 < bVar14) * 2 + 1;
        goto LAB_14253a957;
      }
      iVar10 = 1;
      if (((char)bVar16 < '\x05') || (iVar10 = 3, bVar16 != 5)) goto LAB_14253a950;
      uVar2 = 0x80000000;
      if (-0x7fffffff < (int)uVar4) {
        uVar2 = uVar4 - 2;
      }
      if ((int)uVar2 < 0) goto LAB_14253a9a8;
      lVar13 = (ulonglong)uVar2 * 4;
      uVar9 = (ulonglong)uVar2;
      goto LAB_14253a909;
    }
    iVar3 = uVar4 - 2;
    if ((int)uVar4 < -0x7ffffffe) {
      iVar3 = -0x80000000;
    }
    iVar1 = FUN_142501300(0);
    switch(bVar16) {
    case 0:
      if (param_4 != '\0') {
        switch(bVar14) {
        case 0:
        case 5:
          break;
        default:
          goto switchD_14253a6a3_caseD_3;
        case 2:
        case 7:
          goto switchD_14253a6a3_caseD_2;
        }
      }
      iVar10 = 1;
      if (iVar1 <= iVar3) {
        uVar15 = 0x80000002;
        if (-0x7ffffffe < (int)uVar4) {
          uVar15 = uVar4;
        }
        iVar3 = uVar15 * 4 + -8;
        uVar15 = uVar15 - 1;
        do {
          uVar15 = uVar15 - 1;
          if (*(char *)(param_1 + 0x40) == '\0') {
            if (uVar15 < 0x10) {
              bVar16 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((byte)iVar3 & 0x3f)) & 0xf;
              goto LAB_14253a540;
            }
          }
          else if ((-1 < (int)uVar15) && ((int)uVar15 < *(int *)(param_1 + 0x10))) {
            bVar16 = *(byte *)(*(ulonglong *)(param_1 + 0x30) + (ulonglong)uVar15);
LAB_14253a540:
            if (bVar16 != 0) goto LAB_14253a7c0;
          }
          iVar3 = iVar3 + -4;
        } while (iVar1 < (int)uVar15);
      }
LAB_14253a70c:
      bVar16 = 1;
      bVar11 = 0;
      break;
    default:
      if (((param_4 == '\0') || (bVar14 == 2)) || (bVar14 == 7)) {
switchD_14253a6a3_caseD_2:
        bVar17 = '\x04' < (char)bVar16;
LAB_14253a6b9:
        iVar10 = (uint)bVar17 * 2 + 1;
      }
      else {
switchD_14253a6a3_caseD_3:
        if ((char)bVar14 < '\x02') {
LAB_14253a6f0:
          iVar10 = 1;
        }
        else {
          if (4 < bVar14) {
            bVar17 = 6 < bVar14;
            goto LAB_14253a6b9;
          }
LAB_14253a7ab:
          iVar10 = 3;
        }
      }
LAB_14253a7c0:
      bVar12 = 0;
      goto LAB_14253a7c3;
    case 4:
      if (((param_4 != '\0') && (bVar14 != 7)) && (bVar14 != 2)) goto switchD_14253a6a3_caseD_3;
      if (iVar1 <= iVar3) {
        uVar15 = 0x80000002;
        if (-0x7ffffffe < (int)uVar4) {
          uVar15 = uVar4;
        }
        iVar3 = uVar15 * 4 + -8;
        uVar15 = uVar15 - 1;
        do {
          uVar15 = uVar15 - 1;
          if (*(char *)(param_1 + 0x40) == '\0') {
            if (0xf < uVar15) goto LAB_14253a6f0;
            bVar16 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((byte)iVar3 & 0x3f)) & 0xf;
          }
          else {
            bVar11 = 0;
            iVar10 = 1;
            bVar12 = 0;
            if ((int)uVar15 < 0) goto LAB_14253a7c3;
            bVar16 = 0;
            if (*(int *)(param_1 + 0x10) <= (int)uVar15) goto LAB_14253a7c5;
            bVar16 = *(byte *)(*(ulonglong *)(param_1 + 0x30) + (ulonglong)uVar15);
          }
          if (bVar16 != 9) goto LAB_14253a6f0;
          iVar3 = iVar3 + -4;
        } while (iVar1 < (int)uVar15);
      }
      bVar16 = 0;
      bVar11 = 1;
      iVar10 = 2;
      break;
    case 5:
      if (((param_4 != '\0') && (bVar14 != 7)) && (bVar14 != 2)) goto switchD_14253a6a3_caseD_3;
      iVar10 = 2;
      bVar12 = 1;
      if (iVar1 <= iVar3) {
        uVar15 = 0x80000002;
        if (-0x7ffffffe < (int)uVar4) {
          uVar15 = uVar4;
        }
        iVar3 = uVar15 * 4 + -8;
        uVar15 = uVar15 - 1;
        do {
          uVar15 = uVar15 - 1;
          if (*(char *)(param_1 + 0x40) == '\0') {
            if (uVar15 < 0x10) {
              bVar16 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((byte)iVar3 & 0x3f)) & 0xf;
              goto LAB_14253a640;
            }
          }
          else if ((-1 < (int)uVar15) && ((int)uVar15 < *(int *)(param_1 + 0x10))) {
            bVar16 = *(byte *)(*(ulonglong *)(param_1 + 0x30) + (ulonglong)uVar15);
LAB_14253a640:
            if (bVar16 != 0) goto LAB_14253a7ab;
          }
          iVar3 = iVar3 + -4;
        } while (iVar1 < (int)uVar15);
      }
LAB_14253a7c3:
      bVar11 = bVar12;
      bVar16 = 0;
      break;
    case 9:
      if (param_4 != '\0') {
        switch(bVar14) {
        case 2:
        case 7:
          goto switchD_14253a6a3_caseD_2;
        default:
          goto switchD_14253a6a3_caseD_3;
        case 4:
        case 9:
          break;
        }
      }
      iVar10 = 3;
      bVar16 = 1;
      if (iVar3 < iVar1) goto LAB_14253a70c;
      uVar15 = 0x80000002;
      if (-0x7ffffffe < (int)uVar4) {
        uVar15 = uVar4;
      }
      iVar3 = uVar15 * 4 + -8;
      uVar15 = uVar15 - 1;
      do {
        uVar15 = uVar15 - 1;
        if (*(char *)(param_1 + 0x40) == '\0') {
          if (0xf < uVar15) goto LAB_14253a7c0;
          bVar12 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((byte)iVar3 & 0x3f)) & 0xf;
        }
        else {
          bVar12 = 0;
          if (((int)uVar15 < 0) || (*(int *)(param_1 + 0x10) <= (int)uVar15)) goto LAB_14253a7c3;
          bVar12 = *(byte *)(*(ulonglong *)(param_1 + 0x30) + (ulonglong)uVar15);
        }
        if (bVar12 != 9) goto LAB_14253a7c0;
        iVar3 = iVar3 + -4;
        bVar11 = 0;
      } while (iVar1 < (int)uVar15);
    }
LAB_14253a7c5:
    if (((!(bool)(param_3 < 4 & bVar16)) && (!(bool)(3 < param_3 & bVar11))) &&
       (*(int *)(param_1 + 0x10) + -0xe <= (int)uVar2)) break;
    FUN_142539780(param_1);
  } while( true );
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((int)uVar4 < 1) {
    if (param_4 == '\0') {
      return;
    }
    if (bVar14 == 0) {
      return;
    }
    if (bVar14 == 5) {
      return;
    }
  }
  else {
LAB_14253a950:
    if (param_4 == '\0') goto LAB_14253a9b5;
  }
LAB_14253a957:
  bVar17 = true;
  if ((0xf9 < (byte)(bVar14 - 8)) && ((bVar14 != 2 || (bVar7 = 2, iVar10 == 3)))) {
LAB_14253a9cf:
    bVar17 = iVar10 == 3 && bVar14 == 7;
    bVar7 = bVar14;
  }
  goto LAB_14253a9e4;
LAB_14253a909:
  do {
    if (cVar8 == '\0') {
      if (uVar9 < 0x10) {
        bVar16 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((byte)lVar13 & 0x3f)) & 0xf;
        goto LAB_14253a8f0;
      }
    }
    else if ((longlong)uVar9 < (longlong)iVar3) {
      bVar16 = *(byte *)(*(ulonglong *)(param_1 + 0x30) + uVar9);
LAB_14253a8f0:
      if (bVar16 != 0) goto LAB_14253a950;
    }
    lVar13 = lVar13 + -4;
    bVar17 = 0 < (longlong)uVar9;
    uVar9 = uVar9 - 1;
  } while (bVar17);
LAB_14253a9a8:
  iVar10 = 2;
  if (param_4 != '\0') goto LAB_14253a957;
LAB_14253a9b5:
  bVar17 = (bVar14 & 1) == 0;
LAB_14253a9e4:
  if (6 < param_3) {
LAB_14253aad7:
    *param_5 = 0x10111;
    return;
  }
  switch(param_3) {
  case 0:
    bVar17 = (bool)(*(byte *)(param_1 + 0x14) & 1);
    break;
  case 1:
    bVar17 = (*(byte *)(param_1 + 0x14) & 1) == 0;
    break;
  case 2:
switchD_14253aa01_caseD_2:
    bVar17 = true;
    break;
  case 3:
switchD_14253aa01_caseD_3:
    bVar17 = false;
    break;
  case 4:
    if (iVar10 == 3) goto switchD_14253aa01_caseD_3;
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_14253aad7;
      goto switchD_14253aa01_caseD_2;
    }
    break;
  case 5:
    if (2 < iVar10 - 1U) goto LAB_14253aad7;
    bVar17 = (3U >> (iVar10 - 1U & 7) & 1) != 0;
    break;
  case 6:
    if (2 < iVar10 - 1U) goto LAB_14253aad7;
    bVar17 = (iVar10 - 1U & 7) == 0;
  }
  if (0 < *param_5) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if ((int)uVar4 < iVar3) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      *(ulonglong *)(param_1 + 0x30) =
           *(ulonglong *)(param_1 + 0x30) >> ((char)uVar5 * '\x04' & 0x3fU);
    }
    else {
      lVar13 = 0;
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar13) =
             *(undefined1 *)((longlong)(int)uVar4 + *(longlong *)(param_1 + 0x30) + lVar13);
        lVar13 = lVar13 + 1;
        iVar3 = *(int *)(param_1 + 0x10);
      } while (lVar13 < (int)(iVar3 - uVar4));
      for (; (int)lVar13 < iVar3; lVar13 = lVar13 + 1) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar13) = 0;
        iVar3 = *(int *)(param_1 + 0x10);
      }
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar4;
    *(uint *)(param_1 + 0x10) = iVar3 - uVar4;
    if (param_4 != '\0') goto LAB_14253ab69;
LAB_14253ab30:
    if (bVar17 != false) goto LAB_14253ad38;
    cVar8 = *(char *)(param_1 + 0x40);
    if (bVar7 == 9) goto LAB_14253abdb;
  }
  else {
    if (*(char *)(param_1 + 0x40) != '\0') {
      FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(int *)(param_1 + 0xc) = param_2;
    if (param_4 == '\0') goto LAB_14253ab30;
LAB_14253ab69:
    if ((char)bVar7 < '\x05' && (bVar17 ^ 1U) == 0) {
      if (*(char *)(param_1 + 0x40) == '\0') {
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x38);
        sVar6 = (size_t)iVar3;
        if ((longlong)sVar6 < 1) {
          _Dst_00 = (undefined1 *)FUN_1424da030(2);
          memcpy(_Dst_00,*(void **)(param_1 + 0x30),sVar6);
          memset(_Dst_00 + sVar6,0,(ulonglong)(1 - iVar3));
          FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
          *(undefined1 **)(param_1 + 0x30) = _Dst_00;
          *(undefined4 *)(param_1 + 0x38) = 2;
        }
        else {
          _Dst_00 = *(undefined1 **)(param_1 + 0x30);
        }
        *(undefined1 *)(param_1 + 0x40) = 1;
        *_Dst_00 = 0;
      }
      goto LAB_14253ad38;
    }
    if (('\x04' < (char)bVar7 & (bVar17 ^ 1U)) == 0) {
      FUN_14253ad50(param_1,0,5);
      return;
    }
    FUN_14253ad50(param_1,0,9);
    if (bVar17 != false) goto LAB_14253ad38;
    cVar8 = *(char *)(param_1 + 0x40);
LAB_14253abdb:
    bVar14 = 0;
    uVar5 = 0;
    if (cVar8 == '\0') goto LAB_14253abfe;
    while (((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10) &&
           (*(char *)(*(ulonglong *)(param_1 + 0x30) + uVar5) == '\t'))) {
      while( true ) {
        uVar5 = uVar5 + 1;
        bVar14 = bVar14 + 4;
        if (cVar8 != '\0') break;
LAB_14253abfe:
        if ((0xf < uVar5) ||
           (((byte)(*(ulonglong *)(param_1 + 0x30) >> (bVar14 & 0x3c)) & 0xf) != 9))
        goto LAB_14253ac27;
      }
    }
LAB_14253ac27:
    FUN_14253a2a0(param_1);
    cVar8 = *(char *)(param_1 + 0x40);
  }
  if (cVar8 == '\0') {
    *(ulonglong *)(param_1 + 0x30) =
         *(ulonglong *)(param_1 + 0x30) & 0xfffffffffffffff0 |
         (ulonglong)((uint)*(ulonglong *)(param_1 + 0x30) & 0xf) + 1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  else {
    if (*(int *)(param_1 + 0x10) < 1) {
      cVar8 = '\x01';
    }
    else {
      cVar8 = **(char **)(param_1 + 0x30) + '\x01';
    }
    iVar3 = *(int *)(param_1 + 0x38);
    sVar6 = (size_t)iVar3;
    if ((longlong)sVar6 < 1) {
      _Dst = (char *)FUN_1424da030(2);
      memcpy(_Dst,*(void **)(param_1 + 0x30),sVar6);
      memset(_Dst + sVar6,0,(ulonglong)(1 - iVar3));
      FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
      *(char **)(param_1 + 0x30) = _Dst;
      *(undefined4 *)(param_1 + 0x38) = 2;
    }
    else {
      _Dst = *(char **)(param_1 + 0x30);
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    *_Dst = cVar8;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
LAB_14253ad38:
  FUN_1425380c0(param_1);
  return;
}



// FUNCTION 14253ad50 FUN_14253ad50 body=433 status=ok
// SIG undefined FUN_14253ad50(void)

void FUN_14253ad50(longlong param_1,uint param_2,char param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar5 = (ulonglong)param_2;
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar6 = param_2 + 1;
    if (iVar6 != 0) {
      iVar7 = *(int *)(param_1 + 0x38);
      if (iVar7 <= (int)param_2) {
        pvVar1 = (void *)FUN_1424da030((longlong)(iVar6 * 2));
        memcpy(pvVar1,*(void **)(param_1 + 0x30),(longlong)iVar7);
        memset((void *)((longlong)iVar7 + (longlong)pvVar1),0,(longlong)(iVar6 - iVar7));
        FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
        *(void **)(param_1 + 0x30) = pvVar1;
        *(int *)(param_1 + 0x38) = iVar6 * 2;
      }
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar5 = (ulonglong)(int)param_2;
    goto LAB_14253aeee;
  }
  if ((int)param_2 < 0x10) {
    bVar4 = (byte)(param_2 << 2);
    *(ulonglong *)(param_1 + 0x30) =
         (longlong)((int)param_3 << (bVar4 & 0x1f)) |
         (longlong)~(0xf << (bVar4 & 0x1f)) & *(ulonglong *)(param_1 + 0x30);
    return;
  }
  uVar8 = *(ulonglong *)(param_1 + 0x30);
  puVar2 = (undefined8 *)FUN_1424da030(0x28);
  *(undefined8 **)(param_1 + 0x30) = puVar2;
  *(undefined4 *)(param_1 + 0x38) = 0x28;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (*(int *)(param_1 + 0x10) < 1) {
LAB_14253ae92:
    iVar7 = param_2 + 1;
    iVar6 = *(int *)(param_1 + 0x38);
    if (iVar6 < iVar7) {
      pvVar1 = (void *)FUN_1424da030((longlong)(iVar7 * 2));
      memcpy(pvVar1,*(void **)(param_1 + 0x30),(longlong)iVar6);
      memset((void *)((longlong)iVar6 + (longlong)pvVar1),0,(longlong)(iVar7 - iVar6));
      FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
      *(void **)(param_1 + 0x30) = pvVar1;
      *(int *)(param_1 + 0x38) = iVar7 * 2;
    }
  }
  else {
    lVar3 = 0;
    do {
      *(byte *)(*(longlong *)(param_1 + 0x30) + lVar3) = (byte)uVar8 & 0xf;
      uVar8 = uVar8 >> 4;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x10));
    iVar6 = param_2 + 1;
    if (*(char *)(param_1 + 0x40) != '\0') goto LAB_14253ae92;
    pvVar1 = (void *)FUN_1424da030((longlong)iVar6);
    *(void **)(param_1 + 0x30) = pvVar1;
    *(int *)(param_1 + 0x38) = iVar6;
    memset(pvVar1,0,(longlong)iVar6);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar3 = *(longlong *)(param_1 + 0x30);
LAB_14253aeee:
  *(char *)(lVar3 + uVar5) = param_3;
  return;
}



// FUNCTION 14253af10 FUN_14253af10 body=11 status=ok
// SIG undefined FUN_14253af10(void)

void FUN_14253af10(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined1 *puStack_60;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_39;
  undefined1 auStack_38 [32];
  ulonglong uStack_18;
  
  if (*(char *)(param_1 + 0x15) == '\0') {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x20);
  puStack_50 = &uStack_44;
  puStack_58 = &uStack_40;
  puStack_60 = &uStack_39;
  uStack_68 = 0x12;
  FUN_1425e8b60(*(undefined8 *)(param_1 + 0x18),0,0,auStack_38);
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_142539840(param_1,auStack_38,uStack_40,uStack_44);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1;
  *(undefined1 *)(param_1 + 0x41) = 1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_88);
}



// FUNCTION 14253af20 FUN_14253af20 body=258 status=ok
// SIG undefined FUN_14253af20(void)

void FUN_14253af20(longlong param_1,char param_2,int param_3,char param_4)

{
  char *_Dst;
  int iVar1;
  size_t _Size;
  
  if (param_2 == '\0') {
    if (param_4 == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
    iVar1 = param_3 + 1;
    param_3 = *(int *)(param_1 + 0xc);
  }
  else {
    if ((0 < *(int *)(param_1 + 0xc)) &&
       (param_3 = *(int *)(param_1 + 0xc) + param_3, param_4 != '\0')) {
      *(int *)(param_1 + 0xc) = 0;
    }
    param_3 = param_3 + 1;
    FUN_14253b030(param_1,param_3);
    if (*(char *)(param_1 + 0x40) == '\0') {
      *(ulonglong *)(param_1 + 0x30) =
           (longlong)param_2 | *(ulonglong *)(param_1 + 0x30) & 0xfffffffffffffff0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x38);
      _Size = (size_t)iVar1;
      if ((longlong)_Size < 1) {
        _Dst = (char *)FUN_1424da030(2);
        memcpy(_Dst,*(void **)(param_1 + 0x30),_Size);
        memset(_Dst + _Size,0,(ulonglong)(1 - iVar1));
        FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
        *(char **)(param_1 + 0x30) = _Dst;
        *(undefined4 *)(param_1 + 0x38) = 2;
      }
      else {
        _Dst = *(char **)(param_1 + 0x30);
      }
      *(undefined1 *)(param_1 + 0x40) = 1;
      *_Dst = param_2;
    }
    if (param_4 == '\0') {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0xc) = param_3 + iVar1;
  return;
}



// FUNCTION 14253b030 FUN_14253b030 body=449 status=ok
// SIG undefined FUN_14253b030(void)

void FUN_14253b030(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x40) == '\0') {
    if ((int)(iVar2 + param_2) < 0x11) {
LAB_14253b125:
      *(longlong *)(param_1 + 0x30) =
           *(longlong *)(param_1 + 0x30) << ((char)param_2 * '\x04' & 0x3fU);
      goto LAB_14253b1dd;
    }
    uVar5 = *(ulonglong *)(param_1 + 0x30);
    puVar3 = (undefined8 *)FUN_1424da030();
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    *(undefined4 *)(param_1 + 0x38) = 0x28;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined1 *)(param_1 + 0x40) = 1;
    iVar2 = *(int *)(param_1 + 0x10);
    if (0 < iVar2) {
      lVar7 = 0;
      do {
        *(byte *)(*(longlong *)(param_1 + 0x30) + lVar7) = (byte)uVar5 & 0xf;
        uVar5 = uVar5 >> 4;
        lVar7 = lVar7 + 1;
        iVar2 = *(int *)(param_1 + 0x10);
      } while (lVar7 < iVar2);
      if (*(char *)(param_1 + 0x40) == '\0') goto LAB_14253b125;
    }
  }
  iVar9 = iVar2 + param_2;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 < iVar9) {
      _Dst = (void *)FUN_1424da030((longlong)(iVar9 * 2));
      memcpy(_Dst,*(void **)(param_1 + 0x30),(longlong)iVar1);
      memset((void *)((longlong)iVar1 + (longlong)_Dst),0,(longlong)(iVar9 - iVar1));
      FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
      *(void **)(param_1 + 0x30) = _Dst;
      *(int *)(param_1 + 0x38) = iVar9 * 2;
      iVar2 = *(int *)(param_1 + 0x10);
      iVar9 = iVar2 + param_2;
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  uVar10 = iVar9 - 1;
  if (0 < iVar2) {
    lVar4 = (longlong)(int)param_2;
    lVar7 = (longlong)(int)uVar10 + 1;
    if (lVar4 < (int)uVar10) {
      uVar10 = param_2;
    }
    uVar10 = uVar10 - 1;
    do {
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + -1 + lVar7) =
           *(undefined1 *)((-1 - lVar4) + *(longlong *)(param_1 + 0x30) + lVar7);
      lVar7 = lVar7 + -1;
    } while (lVar4 < lVar7);
  }
  if (-1 < (int)uVar10) {
    uVar5 = (ulonglong)uVar10;
    uVar6 = uVar10 + 1 & 3;
    uVar8 = (ulonglong)uVar6;
    if (uVar6 != 0) {
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + uVar5) = 0;
        uVar5 = uVar5 - 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (2 < uVar10) {
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + uVar5) = 0;
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + -1 + uVar5) = 0;
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + -2 + uVar5) = 0;
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + -3 + uVar5) = 0;
        uVar5 = uVar5 - 4;
      } while (uVar5 != 0xffffffffffffffff);
    }
  }
LAB_14253b1dd:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
  return;
}



// FUNCTION 14253b200 FUN_14253b200 body=285 status=ok
// SIG undefined FUN_14253b200(void)

undefined8 * FUN_14253b200(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    local_2a = 0x2d;
    FUN_1424a6cf0(param_2,&local_2a,0,1);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if ((iVar4 == 0) || (iVar2 = *(int *)(param_1 + 0xc), iVar4 + iVar2 + -1 < 0)) {
    local_2c = 0x30;
    FUN_1424a6cf0(param_2,&local_2c,0,1);
    iVar2 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  iVar5 = iVar4 + iVar2;
  if (iVar4 + iVar2 < *(int *)(param_1 + 0x24)) {
    iVar5 = *(int *)(param_1 + 0x24);
  }
  while( true ) {
    iVar4 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar4 <= *(int *)(param_1 + 0x28)) {
      iVar2 = iVar4;
    }
    if (iVar5 <= iVar2) break;
    if (iVar5 == 0) {
      local_2e = 0x2e;
      FUN_1424a6cf0(param_2,&local_2e,0,1);
      iVar4 = *(int *)(param_1 + 0xc);
    }
    iVar5 = iVar5 + -1;
    uVar3 = iVar5 - iVar4;
    if (*(char *)(param_1 + 0x40) == '\0') {
      if (uVar3 < 0x10) {
        bVar1 = (byte)(*(ulonglong *)(param_1 + 0x30) >> ((char)uVar3 * '\x04' & 0x3fU)) & 0xf;
      }
      else {
        bVar1 = 0;
      }
    }
    else {
      bVar1 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x10))) {
        bVar1 = *(byte *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar3);
      }
    }
    FUN_1424a7d60(param_2,(char)bVar1 + 0x30);
  }
  return param_2;
}



// FUNCTION 14253b330 Unwind@14253b330 body=36 status=ok
// SIG undefined Unwind@14253b330(void)

void Unwind_14253b330(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14253b360 FUN_14253b360 body=70 status=ok
// SIG undefined FUN_14253b360(void)

undefined8 * FUN_14253b360(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::number::impl::DecimalQuantity::vftable;
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_1424da110(param_1[6]);
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14253b3b0 FUN_14253b3b0 body=117 status=ok
// SIG undefined FUN_14253b3b0(void)

undefined8 *
FUN_14253b3b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x20);
  if (lVar1 != 0) {
    FUN_14256dc20(lVar1,param_3,param_4);
  }
  FUN_1425e40f0(param_1,param_2,lVar1,param_4);
  *param_1 = icu_64::CurrencyAmount::vftable;
  return param_1;
}



// FUNCTION 14253b430 Unwind@14253b430 body=36 status=ok
// SIG undefined Unwind@14253b430(void)

void Unwind_14253b430(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14253b460 Unwind@14253b460 body=34 status=ok
// SIG undefined Unwind@14253b460(void)

void Unwind_14253b460(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x38);
  return;
}



// FUNCTION 14253b490 FUN_14253b490 body=76 status=ok
// SIG undefined FUN_14253b490(void)

undefined8 * FUN_14253b490(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1425e41c0(puVar1,param_1);
    *puVar1 = icu_64::CurrencyAmount::vftable;
  }
  return puVar1;
}



// FUNCTION 14253b4e0 Unwind@14253b4e0 body=32 status=ok
// SIG undefined Unwind@14253b4e0(void)

void Unwind_14253b4e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14253b500 FUN_14253b500 body=8 status=ok
// SIG undefined FUN_14253b500(void)

undefined * FUN_14253b500(void)

{
  return &DAT_14c7930e4;
}



// FUNCTION 14253b510 FUN_14253b510 body=38 status=ok
// SIG undefined FUN_14253b510(void)

undefined8 FUN_14253b510(undefined8 param_1,int param_2)

{
  FUN_1425e4380();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14253b540 FUN_14253b540 body=660 status=ok
// SIG undefined FUN_14253b540(void)

void FUN_14253b540(undefined8 param_1,longlong param_2,uint param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  wchar_t *_Str;
  size_t sVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_128 [32];
  int *local_108;
  uint local_f4;
  int local_f0;
  undefined1 local_ec [4];
  char local_e8 [160];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (0 < *param_4) goto LAB_14253b7c4;
  if (((int)param_3 < 0) || ((param_2 == 0 && (param_3 != 0)))) {
    *param_4 = 1;
    goto LAB_14253b7c4;
  }
  local_f0 = 0;
  local_108 = &local_f0;
  local_f4 = FUN_1424e74e0(param_1,"currency",local_ec,4);
  if (((local_f0 < 1) && (local_f4 == 3)) && (cVar1 = FUN_14250ae70(local_ec,3), cVar1 != '\0')) {
    if (3 < param_3) {
      FUN_142503970(local_ec);
      FUN_14250ad70(local_ec,param_2,3);
    }
    uVar9 = 3;
  }
  else {
    local_108 = param_4;
    FUN_1424d5310(param_1,0,local_e8,0x9d);
    if (0 < *param_4) goto LAB_14253b7c4;
    _Str = (wchar_t *)FUN_14253b7f0(local_e8);
    if (_Str != (wchar_t *)0x0) {
      sVar3 = wcslen(_Str);
      if ((int)sVar3 < (int)param_3) {
        FUN_1425046f0(param_2,_Str);
      }
      sVar3 = wcslen(_Str);
      uVar9 = sVar3 & 0xffffffff;
      goto LAB_14253b7ba;
    }
    pcVar4 = strchr(local_e8,0x5f);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    if (local_e8[0] == '\0') {
      local_f0 = 2;
      uVar7 = 0;
LAB_14253b74d:
      iVar8 = local_f0;
      pcVar4 = strchr(local_e8,0x5f);
      if (pcVar4 != (char *)0x0) {
        FUN_1424e8b00(param_1,local_e8,0x9d,param_4);
        *param_4 = -0x80;
        FUN_14253b540(local_e8,param_2,param_3,param_4);
        goto LAB_14253b7c4;
      }
LAB_14253b793:
      *param_4 = iVar8;
      iVar2 = iVar8;
    }
    else {
      local_f0 = 0;
      uVar5 = FUN_1424edad0("icudt64l-curr","supplementalData",&local_f0);
      uVar6 = FUN_1424ecc30(uVar5,"CurrencyMap",uVar5,&local_f0);
      uVar5 = FUN_1424ecc30(uVar5,local_e8,uVar6,&local_f0);
      uVar6 = FUN_1424ebd50(uVar5,0,0,&local_f0);
      uVar7 = FUN_1424ecf00(uVar6,&DAT_14acb8ec8,&local_f4,&local_f0);
      FUN_1424ea9f0(uVar6);
      FUN_1424ea9f0(uVar5);
      if (0 < local_f0) goto LAB_14253b74d;
      iVar8 = local_f0;
      if ((local_f0 != 0) || (iVar2 = *param_4, *param_4 == 0)) goto LAB_14253b793;
    }
    uVar9 = (ulonglong)local_f4;
    if ((iVar2 < 1) && ((int)local_f4 < (int)param_3)) {
      FUN_1425046f0(param_2,uVar7);
      uVar9 = (ulonglong)local_f4;
    }
  }
LAB_14253b7ba:
  FUN_142504cc0(param_2,param_3,uVar9,param_4);
LAB_14253b7c4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
}



// FUNCTION 14253b7f0 FUN_14253b7f0 body=405 status=ok
// SIG undefined FUN_14253b7f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14253b7f0(char *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c793150) && (FUN_144b3d300(&DAT_14c793150), DAT_14c793150 == -1)) {
    _DAT_14c793140 = 0;
    uRam000000014c793148 = 0;
    _DAT_14c793130 = 0;
    uRam000000014c793138 = 0;
    _DAT_14c793120 = 0;
    uRam000000014c793128 = 0;
    _DAT_14c793110 = 0;
    uRam000000014c793118 = 0;
    _DAT_14c793100 = 0;
    uRam000000014c793108 = 0;
    _Mtx_init_in_situ(&DAT_14c793100,2);
    atexit((_func_5014 *)&LAB_14253dc90);
    _Init_thread_footer(&DAT_14c793150);
  }
  FUN_142501320(&DAT_14c793100);
  puVar2 = DAT_14c7930f8;
  FUN_1424d6720(9,FUN_14253dae0);
  do {
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
LAB_14253b870:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c793150) && (FUN_144b3d300(&DAT_14c793150), DAT_14c793150 == -1))
      {
        _DAT_14c793140 = 0;
        uRam000000014c793148 = 0;
        _DAT_14c793130 = 0;
        uRam000000014c793138 = 0;
        _DAT_14c793120 = 0;
        uRam000000014c793128 = 0;
        _DAT_14c793110 = 0;
        uRam000000014c793118 = 0;
        _DAT_14c793100 = 0;
        uRam000000014c793108 = 0;
        _Mtx_init_in_situ(&DAT_14c793100,2);
        atexit((_func_5014 *)&LAB_14253dc90);
        _Init_thread_footer(&DAT_14c793150);
      }
      FUN_142501400(&DAT_14c793100);
      return puVar2;
    }
    iVar1 = strcmp(param_1,(char *)(puVar2 + 2));
    if (iVar1 == 0) {
      puVar2 = puVar2 + 1;
      goto LAB_14253b870;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



// FUNCTION 14253b990 FUN_14253b990 body=657 status=ok
// SIG undefined FUN_14253b990(void)

wchar_t * FUN_14253b990(wchar_t *param_1,undefined8 param_2,uint param_3,undefined1 *param_4,
                       undefined4 *param_5,int *param_6)

{
  longlong lVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  undefined1 local_168 [160];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_60;
  longlong local_58;
  undefined1 local_50 [3];
  undefined1 local_4d;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_6 < 1) {
    if (param_3 < 3) {
      local_4c = 0;
      FUN_1424e91c0(param_2,local_168,0x9d,&local_4c);
      if ((local_4c < 1) && (local_4c != -0x7c)) {
        FUN_14250ae10(param_1,local_50,3);
        local_4d = 0;
        FUN_142503970(local_50);
        local_4c = 0;
        lVar1 = FUN_1424ebfe0("icudt64l-curr",local_168,&local_4c);
        if (param_3 == 2) {
          local_98 = (longlong)&local_8c + 1;
          local_90 = 0x28;
          local_8c = 0;
          local_60 = 0;
          local_58 = lVar1;
          FUN_1425038b0(&local_c8,"Currencies%narrow");
          FUN_142503520(&local_98,local_c8,local_c0,&local_4c);
          FUN_1425038b0(&local_b8,L"/Disabled");
          FUN_142503520(&local_98,local_b8,local_b0,&local_4c);
          FUN_1425038b0(&local_a8,local_50);
          FUN_142503520(&local_98,local_a8,local_a0,&local_4c);
          lVar1 = local_58;
          pwVar2 = (wchar_t *)FUN_1424ec010(local_58,local_98,param_5,&local_4c);
          param_3 = 2;
          if (local_4c == 2) {
            *param_6 = -0x80;
            local_4c = 0;
            param_3 = 0;
          }
          if ((char)local_8c != '\0') {
            FUN_1424da110(local_98);
          }
          if (pwVar2 != (wchar_t *)0x0) goto LAB_14253bbaf;
        }
        FUN_1424ecc30(lVar1,"Currencies",lVar1,&local_4c);
        FUN_1424ec1c0(lVar1,local_50,lVar1,&local_4c);
        pwVar2 = (wchar_t *)FUN_1424ebec0(lVar1,param_3,param_5,&local_4c);
LAB_14253bbaf:
        if (local_4c < 1) {
          if ((local_4c == -0x7f) || ((local_4c == -0x80 && (*param_6 != -0x7f)))) {
            *param_6 = local_4c;
          }
          *param_4 = 0;
          param_1 = pwVar2;
        }
        else {
          *param_4 = 0;
          sVar3 = wcslen(param_1);
          *param_5 = (int)sVar3;
          *param_6 = -0x7f;
        }
        if (lVar1 == 0) {
          return param_1;
        }
        FUN_1424ea9f0(lVar1);
        return param_1;
      }
    }
    *param_6 = 1;
  }
  return (wchar_t *)0x0;
}



// FUNCTION 14253bc30 Unwind@14253bc30 body=83 status=ok
// SIG undefined Unwind@14253bc30(void)

void Unwind_14253bc30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xfc) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0xf0));
  }
  if (*(longlong *)(param_2 + 0x130) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x130));
  }
  return;
}



// FUNCTION 14253bc90 FUN_14253bc90 body=427 status=ok
// SIG undefined FUN_14253bc90(void)

void FUN_14253bc90(wchar_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,int *param_6)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  int *local_100;
  int local_f0;
  undefined1 local_ec [3];
  undefined1 local_e9;
  undefined1 local_e8 [160];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*param_6 < 1) {
    local_f0 = 0;
    FUN_1424e91c0(param_2,local_e8,0x9d,&local_f0);
    if ((local_f0 < 1) && (local_f0 != -0x7c)) {
      FUN_14250ae10(param_1,local_ec,3);
      local_e9 = 0;
      local_f0 = 0;
      uVar1 = FUN_1424ebfe0("icudt64l-curr",local_e8,&local_f0);
      uVar1 = FUN_1424ecc30(uVar1,"CurrencyPlurals",uVar1,&local_f0);
      uVar1 = FUN_1424ec1c0(uVar1,local_ec,uVar1,&local_f0);
      FUN_1424ec010(uVar1,param_4,param_5,&local_f0);
      if (0 < local_f0) {
        local_f0 = 0;
        FUN_1424ec010(uVar1,"other",param_5,&local_f0);
        if (0 < local_f0) {
          FUN_1424ea9f0(uVar1);
          local_100 = param_6;
          local_108 = param_5;
          FUN_14253b990(param_1,param_2,1,param_3);
          goto LAB_14253be2b;
        }
      }
      FUN_1424ea9f0(uVar1);
      if (local_f0 < 1) {
        if ((local_f0 == -0x7f) || ((local_f0 == -0x80 && (*param_6 != -0x7f)))) {
          *param_6 = local_f0;
        }
      }
      else {
        sVar2 = wcslen(param_1);
        *param_5 = (int)sVar2;
        *param_6 = -0x7f;
      }
    }
    else {
      *param_6 = 1;
    }
  }
LAB_14253be2b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
}



// FUNCTION 14253be60 FUN_14253be60 body=567 status=ok
// SIG undefined FUN_14253be60(void)

void FUN_14253be60(undefined8 param_1,longlong param_2,longlong param_3,char param_4,
                  undefined4 *param_5,undefined8 param_6,int *param_7)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 in_stack_fffffffffffffdb8;
  uint uVar7;
  undefined1 local_228 [208];
  undefined1 local_158 [216];
  undefined1 *local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c [3];
  
  uVar7 = (uint)((ulonglong)in_stack_fffffffffffffdb8 >> 0x20);
  local_4c[1] = -2;
  local_4c[2] = -1;
  if ((*param_7 < 1) && (lVar4 = FUN_14253c0e0(param_1,param_7), *param_7 < 1)) {
    local_60 = *(int *)(param_3 + 8);
    if (*(short *)(param_2 + 8) < 0) {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar2 = (int)*(short *)(param_2 + 8) >> 5;
    }
    local_64 = *(undefined4 *)(lVar4 + 0xa8);
    lVar1 = *(longlong *)(lVar4 + 0xa0);
    local_5c = *(undefined4 *)(lVar4 + 0xb8);
    local_78 = *(longlong *)(lVar4 + 0xb0);
    iVar5 = 100;
    if (iVar2 - local_60 < 100) {
      iVar5 = iVar2 - local_60;
    }
    FUN_1424a82d0(param_2,local_60,iVar5,local_158,(ulonglong)uVar7 << 0x20);
    local_80 = local_158;
    local_68 = 0;
    uVar3 = FUN_1424da250(local_228,100,local_80,iVar5,param_1,&local_68);
    *param_5 = 0;
    local_58 = 0;
    local_54 = -1;
    local_70 = lVar1;
    FUN_14253d3d0(lVar1,local_64,local_228,uVar3,param_5,&local_58,&local_54);
    lVar1 = local_78;
    local_50 = 0;
    local_4c[0] = -1;
    if (param_4 != '\x01') {
      FUN_14253d3d0(local_78,local_5c,local_158,uVar3,param_5,&local_50,local_4c);
    }
    if (((local_50 <= local_58) &&
        (lVar6 = local_70, iVar2 = local_58, iVar5 = local_54, local_54 != -1)) ||
       ((local_58 <= local_50 &&
        (lVar6 = lVar1, iVar2 = local_50, iVar5 = local_4c[0], local_4c[0] != -1)))) {
      FUN_14250ad70(*(undefined8 *)(lVar6 + (longlong)iVar5 * 0x18),param_6,4);
      *(int *)(param_3 + 8) = iVar2 + local_60;
    }
    FUN_14253d6d0(lVar4);
  }
  return;
}



// FUNCTION 14253c0a0 Unwind@14253c0a0 body=59 status=ok
// SIG undefined Unwind@14253c0a0(void)

void Unwind_14253c0a0(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x1e0) = param_2 + 0x110;
  return;
}



// FUNCTION 14253c0e0 FUN_14253c0e0 body=4566 status=ok
// SIG undefined FUN_14253c0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_14253c0e0(char *param_1,int *param_2)

{
  int *piVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  size_t sVar15;
  void *pvVar16;
  void *pvVar17;
  longlong lVar18;
  char *pcVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  char local_278;
  undefined2 uStack_277;
  undefined1 uStack_275;
  short local_274;
  undefined1 uStack_272;
  char local_1d8;
  undefined2 uStack_1d7;
  undefined1 uStack_1d5;
  short local_1d4;
  undefined1 uStack_1d2;
  ushort local_1d0;
  int local_1cc;
  int local_138 [2];
  ushort local_130;
  int local_12c;
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  void *local_a0;
  int *local_98;
  int local_90;
  int local_8c;
  ulonglong local_88;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  int local_60;
  int local_5c;
  char *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = param_2;
  local_58 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c793218) && (FUN_144b3d300(&DAT_14c793218), DAT_14c793218 == -1)) {
    _DAT_14c793208 = 0;
    uRam000000014c793210 = 0;
    _DAT_14c7931f8 = 0;
    uRam000000014c793200 = 0;
    _DAT_14c7931e8 = 0;
    uRam000000014c7931f0 = 0;
    _DAT_14c7931d8 = 0;
    uRam000000014c7931e0 = 0;
    _DAT_14c7931c8 = 0;
    uRam000000014c7931d0 = 0;
    _Mtx_init_in_situ(&DAT_14c7931c8,2);
    atexit((_func_5014 *)&LAB_14253dd60);
    _Init_thread_footer(&DAT_14c793218);
  }
  uVar10 = FUN_142501320(&DAT_14c7931c8);
  pcVar19 = DAT_14c793160;
  if (DAT_14c793160 == (char *)0x0) {
LAB_14253c168:
    pcVar19 = DAT_14c793168;
    if (DAT_14c793168 != (char *)0x0) {
      uVar7 = strcmp(local_58,DAT_14c793168);
      uVar10 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        local_4c = 1;
        goto LAB_14253c2da;
      }
    }
    pcVar19 = DAT_14c793170;
    if (DAT_14c793170 != (char *)0x0) {
      uVar7 = strcmp(local_58,DAT_14c793170);
      uVar10 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        local_4c = 2;
        goto LAB_14253c2da;
      }
    }
    pcVar19 = DAT_14c793178;
    if (DAT_14c793178 != (char *)0x0) {
      uVar7 = strcmp(local_58,DAT_14c793178);
      uVar10 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        local_4c = 3;
        goto LAB_14253c2da;
      }
    }
    pcVar19 = DAT_14c793180;
    if (DAT_14c793180 != (char *)0x0) {
      uVar7 = strcmp(local_58,DAT_14c793180);
      uVar10 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        local_4c = 4;
        goto LAB_14253c2da;
      }
    }
    pcVar19 = DAT_14c793188;
    if (DAT_14c793188 != (char *)0x0) {
      uVar7 = strcmp(local_58,DAT_14c793188);
      uVar10 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        local_4c = 5;
        goto LAB_14253c2da;
      }
    }
    pcVar19 = DAT_14c793190;
    if (DAT_14c793190 != (char *)0x0) {
      uVar7 = strcmp(local_58,DAT_14c793190);
      uVar10 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        local_4c = 6;
        goto LAB_14253c2da;
      }
    }
    pcVar19 = DAT_14c793198;
    if (DAT_14c793198 != (char *)0x0) {
      uVar7 = strcmp(local_58,DAT_14c793198);
      uVar10 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        local_4c = 7;
        goto LAB_14253c2da;
      }
    }
    pcVar19 = DAT_14c7931a0;
    if (DAT_14c7931a0 != (char *)0x0) {
      uVar7 = strcmp(local_58,DAT_14c7931a0);
      uVar10 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        local_4c = 8;
        goto LAB_14253c2da;
      }
    }
    pcVar19 = DAT_14c7931a8;
    local_4c = (undefined4)CONCAT71((int7)(uVar10 >> 8),0xff);
    bVar3 = true;
    if ((DAT_14c7931a8 != (char *)0x0) && (iVar8 = strcmp(local_58,DAT_14c7931a8), iVar8 == 0)) {
      local_4c = 9;
      goto LAB_14253c2da;
    }
    pcVar19 = (char *)0x0;
  }
  else {
    uVar7 = strcmp(local_58,DAT_14c793160);
    uVar10 = (ulonglong)uVar7;
    if (uVar7 != 0) goto LAB_14253c168;
    local_4c = 0;
LAB_14253c2da:
    *(int *)(pcVar19 + 0xbc) = *(int *)(pcVar19 + 0xbc) + 1;
    bVar3 = false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c793218) && (FUN_144b3d300(&DAT_14c793218), DAT_14c793218 == -1)) {
    _DAT_14c793208 = 0;
    uRam000000014c793210 = 0;
    _DAT_14c7931f8 = 0;
    uRam000000014c793200 = 0;
    _DAT_14c7931e8 = 0;
    uRam000000014c7931f0 = 0;
    _DAT_14c7931d8 = 0;
    uRam000000014c7931e0 = 0;
    _DAT_14c7931c8 = 0;
    uRam000000014c7931d0 = 0;
    _Mtx_init_in_situ(&DAT_14c7931c8,2);
    atexit((_func_5014 *)&LAB_14253dd60);
    _Init_thread_footer(&DAT_14c793218);
  }
  FUN_142501400(&DAT_14c7931c8);
  if (!bVar3) {
    return pcVar19;
  }
  local_b0 = (undefined8 *)FUN_14253dd70();
  local_5c = 0;
  FUN_1424e91c0(local_58,&local_278,0x9d,&local_5c);
  if ((0 < local_5c) || (local_5c == -0x7c)) {
    *local_98 = 1;
  }
  strcpy(&local_1d8,&local_278);
  uVar10 = 0;
  puVar11 = (undefined8 *)FUN_14253dd70();
  iVar8 = 0;
LAB_14253c3ab:
  local_60 = 0;
  local_70 = FUN_1424ebfe0("icudt64l-curr",&local_1d8,&local_60);
  local_78 = FUN_1424ecc30(local_70,"Currencies",0,&local_60);
  iVar9 = FUN_1424eaf70(local_78);
  if (0 < iVar9) {
    local_88 = (ulonglong)(uint)((int)uVar10 + iVar9);
    iVar24 = 0;
    do {
      uVar12 = FUN_1424ebd50(local_78,iVar24,0,&local_60);
      uVar13 = FUN_1424ebec0(uVar12,0,&local_50,&local_60);
      iVar8 = iVar8 + 1;
      if (puVar11 != (undefined8 *)0x0) {
        FUN_1424a7060(local_138,1,uVar13,local_50);
        lVar14 = FUN_142502620(*puVar11,local_138);
        if (lVar14 == 0) {
          iVar22 = 0;
        }
        else {
          iVar22 = 0;
          do {
            uVar2 = *(ushort *)(lVar14 + 8);
            if ((uVar2 & 1) == 0) {
              if ((short)uVar2 < 0) {
                iVar23 = *(int *)(lVar14 + 0xc);
              }
              else {
                iVar23 = (int)(short)uVar2 >> 5;
              }
              iVar4 = local_12c;
              if (-1 < (short)local_130) {
                iVar4 = (int)(short)local_130 >> 5;
              }
              if ((((local_130 & 1) == 0) && (iVar23 == iVar4)) &&
                 (cVar6 = FUN_1412ae090(lVar14,local_138), cVar6 != '\0')) break;
            }
            else if ((local_130 & 1) != 0) break;
            iVar22 = iVar22 + 1;
            lVar14 = FUN_142502620(*puVar11,lVar14);
          } while (lVar14 != 0);
        }
        iVar8 = iVar8 + iVar22;
        FUN_140859a90(local_138);
      }
      iVar8 = iVar8 + 1;
      FUN_1424ea9f0(uVar12);
      iVar24 = iVar24 + 1;
      uVar10 = local_88;
    } while (iVar24 != iVar9);
  }
  local_50 = 0;
  uVar12 = FUN_1424ecc30(local_70,"CurrencyPlurals",0,&local_50);
  iVar9 = FUN_1424eaf70(uVar12);
  if (0 < iVar9) {
    iVar24 = 0;
    do {
      uVar13 = FUN_1424ebd50(uVar12,iVar24,0,&local_50);
      iVar22 = FUN_1424eaf70(uVar13);
      uVar10 = (ulonglong)(uint)((int)uVar10 + iVar22);
      FUN_1424ea9f0(uVar13);
      iVar24 = iVar24 + 1;
    } while (iVar9 != iVar24);
  }
  FUN_1424ea9f0(uVar12);
  FUN_1424ea9f0(local_78);
  FUN_1424ea9f0(local_70);
  if (local_1d8 != '\0') {
    local_138[0] = 0;
    if (local_1d4 == 0x42 && CONCAT13(uStack_1d5,CONCAT21(uStack_1d7,local_1d8)) == 0x475f6e65) {
      uStack_1d5 = 0x30;
      local_1d4 = 0x3130;
      uStack_1d2 = 0;
    }
    else {
      sVar15 = strlen(&local_1d8);
      FUN_1424e8b00(&local_1d8,&local_1d8,sVar15 & 0xffffffff,local_138);
    }
    goto LAB_14253c3ab;
  }
  pvVar16 = (void *)FUN_1424da030((longlong)(int)uVar10 * 0x18);
  pvVar17 = (void *)FUN_1424da030((longlong)iVar8 * 0x18);
  if (0 < *local_98) {
    return (char *)0x0;
  }
  local_138[0] = 0;
  local_60 = 0;
  local_c0 = FUN_142501e10(FUN_1425031c0,FUN_142503270,0,local_138);
  local_a8 = FUN_142501e10(FUN_1425031c0,FUN_142503270,0,&local_60);
  local_e8 = (longlong)pvVar17 + 0x14;
  local_68 = 0;
  local_f0 = (longlong)pvVar16 + 0x14;
  local_b8 = 0;
  iVar8 = 0;
  puVar11 = local_b0;
  local_d8 = pvVar17;
  local_a0 = pvVar16;
LAB_14253c73a:
  local_5c = 0;
  local_d0 = FUN_1424ebfe0("icudt64l-curr",&local_278,&local_5c);
  local_e0 = FUN_1424ecc30(local_d0,"Currencies",0,&local_5c);
  local_7c = FUN_1424eaf70(local_e0);
  local_8c = iVar8;
  if (0 < local_7c) {
    iVar9 = 0;
    do {
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      uVar12 = FUN_1424ebd50(local_e0,iVar9,0,&local_5c);
      uVar13 = FUN_1424ebec0(uVar12,0,&local_50,&local_5c);
      local_78 = uVar12;
      uVar10 = FUN_1424eaf60(uVar12);
      if ((iVar8 == 0) || (lVar14 = FUN_142502620(local_c0,uVar10), lVar14 == 0)) {
        FUN_142502aa0(local_c0,uVar10,uVar10,local_138);
        iVar8 = (int)local_b8 + 1;
        lVar14 = (longlong)(int)local_b8;
        *(ulonglong *)((longlong)pvVar17 + lVar14 * 0x18) = uVar10;
        *(undefined8 *)((longlong)pvVar17 + lVar14 * 0x18 + 8) = uVar13;
        *(undefined4 *)((longlong)pvVar17 + lVar14 * 0x18 + 0x14) = 0;
        *(int *)((longlong)pvVar17 + lVar14 * 0x18 + 0x10) = local_50;
        local_88 = uVar10;
        if (puVar11 != (undefined8 *)0x0) {
          FUN_1424a7060(&local_1d8,1,uVar13,local_50);
          lVar14 = FUN_142502620(*puVar11,&local_1d8);
          if (lVar14 != 0) {
            lVar25 = (longlong)iVar8;
            puVar21 = (undefined4 *)(local_e8 + lVar25 * 0x18);
            do {
              iVar8 = (int)lVar25;
              uVar2 = *(ushort *)(lVar14 + 8);
              if ((uVar2 & 1) == 0) {
                if ((short)uVar2 < 0) {
                  iVar9 = *(int *)(lVar14 + 0xc);
                }
                else {
                  iVar9 = (int)(short)uVar2 >> 5;
                }
                iVar24 = local_1cc;
                if (-1 < (short)local_1d0) {
                  iVar24 = (int)(short)local_1d0 >> 5;
                }
                if ((((local_1d0 & 1) == 0) && (iVar9 == iVar24)) &&
                   (cVar6 = FUN_1412ae090(lVar14,&local_1d8), cVar6 != '\0')) break;
              }
              else if ((local_1d0 & 1) != 0) break;
              *(ulonglong *)(puVar21 + -5) = uVar10;
              if ((*(ushort *)(lVar14 + 8) & 0x11) == 0) {
                if ((*(ushort *)(lVar14 + 8) & 2) == 0) {
                  lVar18 = *(longlong *)(lVar14 + 0x18);
                }
                else {
                  lVar18 = lVar14 + 10;
                }
              }
              else {
                lVar18 = 0;
              }
              *(longlong *)(puVar21 + -3) = lVar18;
              *puVar21 = 0;
              if (*(short *)(lVar14 + 8) < 0) {
                iVar9 = *(int *)(lVar14 + 0xc);
              }
              else {
                iVar9 = (int)*(short *)(lVar14 + 8) >> 5;
              }
              lVar25 = lVar25 + 1;
              iVar8 = (int)lVar25;
              puVar21[-1] = iVar9;
              lVar14 = FUN_142502620(*puVar11,lVar14);
              puVar21 = puVar21 + 6;
            } while (lVar14 != 0);
          }
          FUN_140859a90(&local_1d8);
        }
        pvVar17 = local_a0;
        uVar12 = FUN_1424ebec0(local_78,1,&local_50,&local_5c);
        iVar9 = local_50;
        pcVar19 = local_58;
        lVar14 = (longlong)(int)local_68;
        *(ulonglong *)((longlong)pvVar17 + lVar14 * 0x18) = local_88;
        local_1d8 = '\0';
        uStack_1d7 = 0;
        uStack_1d5 = 0;
        iVar22 = FUN_1424da250(0,0,uVar12,local_50,local_58,&local_1d8);
        local_1d8 = '\0';
        uStack_1d7 = 0;
        uStack_1d5 = 0;
        iVar24 = iVar9;
        if (iVar9 < iVar22) {
          iVar24 = iVar22;
        }
        uVar13 = FUN_1424da030((longlong)iVar24 * 2);
        FUN_1424da250(uVar13,iVar22,uVar12,iVar9,pcVar19,&local_1d8);
        if (0 < CONCAT13(uStack_1d5,CONCAT21(uStack_1d7,local_1d8))) {
          FUN_142504850(uVar13,uVar12,iVar9);
        }
        uVar10 = local_88;
        pvVar17 = local_d8;
        *(undefined8 *)((longlong)local_a0 + lVar14 * 0x18 + 8) = uVar13;
        *(undefined4 *)((longlong)local_a0 + lVar14 * 0x18 + 0x14) = 1;
        local_68 = (ulonglong)((int)local_68 + 1);
        *(int *)((longlong)local_a0 + lVar14 * 0x18 + 0x10) = local_50;
        lVar14 = (longlong)iVar8;
        *(ulonglong *)((longlong)local_d8 + lVar14 * 0x18) = local_88;
        uVar12 = FUN_1424da030(6);
        *(undefined8 *)((longlong)pvVar17 + lVar14 * 0x18 + 8) = uVar12;
        FUN_14250ad70(uVar10,uVar12);
        local_b8 = (ulonglong)(iVar8 + 1);
        *(undefined1 **)((longlong)pvVar17 + lVar14 * 0x18 + 0x10) = &DAT_100000003;
        puVar11 = local_b0;
        iVar8 = local_8c;
      }
      FUN_1424ea9f0(local_78);
      iVar9 = (int)local_70 + 1;
    } while (iVar9 != local_7c);
  }
  local_50 = 0;
  uVar13 = FUN_1424ecc30(local_d0,"CurrencyPlurals",0,&local_50);
  local_c4 = FUN_1424eaf70(uVar13);
  uVar12 = local_a8;
  if (0 < local_c4) {
    local_f8 = uVar13;
    iVar9 = 0;
    do {
      local_c8 = iVar9;
      local_70 = FUN_1424ebd50(uVar13,local_c8,0,&local_50);
      uVar10 = FUN_1424eaf60(local_70);
      if ((iVar8 == 0) || (lVar14 = FUN_142502620(uVar12,uVar10), lVar14 == 0)) {
        local_88 = uVar10;
        FUN_142502aa0(uVar12,uVar10,uVar10,&local_60);
        local_7c = FUN_1424eaf70(local_70);
        if (0 < local_7c) {
          puVar21 = (undefined4 *)(local_f0 + (longlong)(int)local_68 * 0x18);
          iVar8 = 0;
          do {
            local_78 = FUN_1424ebec0(local_70,iVar8,&local_90,&local_50);
            pcVar19 = local_58;
            iVar9 = local_90;
            *(ulonglong *)(puVar21 + -5) = local_88;
            local_1d8 = '\0';
            uStack_1d7 = 0;
            uStack_1d5 = 0;
            iVar22 = FUN_1424da250(0,0,local_78,local_90,local_58,&local_1d8);
            local_1d8 = '\0';
            uStack_1d7 = 0;
            uStack_1d5 = 0;
            iVar24 = iVar9;
            if (iVar9 < iVar22) {
              iVar24 = iVar22;
            }
            uVar13 = FUN_1424da030((longlong)iVar24 * 2);
            uVar12 = local_78;
            FUN_1424da250(uVar13,iVar22,local_78,iVar9,pcVar19,&local_1d8);
            if (0 < CONCAT13(uStack_1d5,CONCAT21(uStack_1d7,local_1d8))) {
              FUN_142504850(uVar13,uVar12);
            }
            *(undefined8 *)(puVar21 + -3) = uVar13;
            *puVar21 = 1;
            puVar21[-1] = local_90;
            iVar8 = iVar8 + 1;
            puVar21 = puVar21 + 6;
          } while (local_7c != iVar8);
          local_68 = (ulonglong)(uint)((int)local_68 + iVar8);
          uVar12 = local_a8;
          uVar13 = local_f8;
          pvVar17 = local_d8;
          puVar11 = local_b0;
          iVar8 = local_8c;
        }
      }
      FUN_1424ea9f0(local_70);
      iVar9 = local_c8 + 1;
    } while (local_c8 + 1 != local_c4);
  }
  FUN_1424ea9f0(uVar13);
  FUN_1424ea9f0(local_e0);
  FUN_1424ea9f0(local_d0);
  if (local_278 != '\0') {
    local_1d8 = '\0';
    uStack_1d7 = 0;
    uStack_1d5 = 0;
    if (local_274 == 0x42 && CONCAT13(uStack_275,CONCAT21(uStack_277,local_278)) == 0x475f6e65) {
      uStack_275 = 0x30;
      local_274 = 0x3130;
      uStack_272 = 0;
      iVar8 = iVar8 + 1;
    }
    else {
      sVar15 = strlen(&local_278);
      FUN_1424e8b00(&local_278,&local_278,sVar15 & 0xffffffff,&local_1d8);
      iVar8 = iVar8 + 1;
    }
    goto LAB_14253c73a;
  }
  FUN_142502220(local_c0);
  FUN_142502220(uVar12);
  pvVar16 = local_a0;
  qsort(local_a0,(longlong)(int)local_68,0x18,(_PtFuncCompare *)&LAB_14253e870);
  uVar10 = local_b8;
  iVar9 = (int)local_b8;
  qsort(pvVar17,(longlong)iVar9,0x18,(_PtFuncCompare *)&LAB_14253e870);
  iVar8 = local_138[0];
  if ((0 < local_138[0]) || (iVar8 = local_60, 0 < local_60)) {
    *local_98 = iVar8;
    return (char *)0x0;
  }
  if (0 < *local_98) {
    return (char *)0x0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c793218) && (FUN_144b3d300(&DAT_14c793218), DAT_14c793218 == -1)) {
    _DAT_14c793208 = 0;
    uRam000000014c793210 = 0;
    _DAT_14c7931f8 = 0;
    uRam000000014c793200 = 0;
    _DAT_14c7931e8 = 0;
    uRam000000014c7931f0 = 0;
    _DAT_14c7931d8 = 0;
    uRam000000014c7931e0 = 0;
    _DAT_14c7931c8 = 0;
    uRam000000014c7931d0 = 0;
    _Mtx_init_in_situ(&DAT_14c7931c8,2);
    atexit((_func_5014 *)&LAB_14253dd60);
    _Init_thread_footer(&DAT_14c793218);
  }
  FUN_142501320(&DAT_14c7931c8);
  if ((DAT_14c793160 == (char *)0x0) || (iVar8 = strcmp(local_58,DAT_14c793160), iVar8 != 0)) {
    if ((DAT_14c793168 == (char *)0x0) || (iVar8 = strcmp(local_58,DAT_14c793168), iVar8 != 0)) {
      if ((DAT_14c793170 == (char *)0x0) || (iVar8 = strcmp(local_58,DAT_14c793170), iVar8 != 0)) {
        if ((DAT_14c793178 == (char *)0x0) || (iVar8 = strcmp(local_58,DAT_14c793178), iVar8 != 0))
        {
          if ((DAT_14c793180 == (char *)0x0) || (iVar8 = strcmp(local_58,DAT_14c793180), iVar8 != 0)
             ) {
            if ((DAT_14c793188 == (char *)0x0) ||
               (iVar8 = strcmp(local_58,DAT_14c793188), iVar8 != 0)) {
              if ((DAT_14c793190 == (char *)0x0) ||
                 (iVar8 = strcmp(local_58,DAT_14c793190), iVar8 != 0)) {
                if ((DAT_14c793198 == (char *)0x0) ||
                   (iVar8 = strcmp(local_58,DAT_14c793198), iVar8 != 0)) {
                  if ((DAT_14c7931a0 == (char *)0x0) ||
                     (iVar8 = strcmp(local_58,DAT_14c7931a0), iVar8 != 0)) {
                    if ((DAT_14c7931a8 == (char *)0x0) ||
                       (iVar8 = strcmp(local_58,DAT_14c7931a8), iVar8 != 0)) {
                      uVar20 = local_68;
                      if ((char)local_4c == -1) {
                        if ((&DAT_14c793160)[DAT_14c7931c0] != (char *)0x0) {
                          piVar1 = (int *)((longlong)(&DAT_14c793160)[DAT_14c7931c0] + 0xbc);
                          *piVar1 = *piVar1 + -1;
                          if (*piVar1 == 0) {
                            FUN_14253dca0();
                          }
                        }
                        pcVar19 = (char *)FUN_1424da030(0xc0);
                        bVar5 = DAT_14c7931c0;
                        uVar7 = (uint)DAT_14c7931c0;
                        (&DAT_14c793160)[uVar7] = pcVar19;
                        strcpy(pcVar19,local_58);
                        *(void **)(pcVar19 + 0xa0) = pvVar16;
                        *(int *)(pcVar19 + 0xa8) = (int)uVar20;
                        *(void **)(pcVar19 + 0xb0) = pvVar17;
                        *(int *)(pcVar19 + 0xb8) = iVar9;
                        pcVar19[0xbc] = '\x02';
                        pcVar19[0xbd] = '\0';
                        pcVar19[0xbe] = '\0';
                        pcVar19[0xbf] = '\0';
                        DAT_14c7931c0 = ((byte)((uVar7 + 1) / 5) & 0xfe) * -5 + bVar5 + 1;
                        FUN_1424d6720(9,FUN_14253dae0);
                        goto LAB_14253d15e;
                      }
                    }
                    else {
                      local_4c = 9;
                    }
                  }
                  else {
                    local_4c = 8;
                  }
                }
                else {
                  local_4c = 7;
                }
              }
              else {
                local_4c = 6;
              }
            }
            else {
              local_4c = 5;
            }
          }
          else {
            local_4c = 4;
          }
        }
        else {
          local_4c = 3;
        }
      }
      else {
        local_4c = 2;
      }
    }
    else {
      local_4c = 1;
    }
  }
  else {
    local_4c = 0;
  }
  if (0 < (int)local_68) {
    uVar20 = local_68 & 0xffffffff;
    lVar14 = 0;
    do {
      if ((*(byte *)((longlong)pvVar16 + lVar14 + 0x14) & 1) != 0) {
        FUN_1424da110(*(undefined8 *)((longlong)pvVar16 + lVar14 + 8));
      }
      lVar14 = lVar14 + 0x18;
    } while (uVar20 * 0x18 != lVar14);
  }
  FUN_1424da110(pvVar16);
  if (0 < iVar9) {
    lVar14 = 0;
    do {
      if ((*(byte *)((longlong)pvVar17 + lVar14 + 0x14) & 1) != 0) {
        FUN_1424da110(*(undefined8 *)((longlong)pvVar17 + lVar14 + 8));
      }
      lVar14 = lVar14 + 0x18;
    } while ((uVar10 & 0xffffffff) * 0x18 != lVar14);
  }
  FUN_1424da110(pvVar17);
  pcVar19 = (&DAT_14c793160)[(char)local_4c];
  *(int *)(pcVar19 + 0xbc) = *(int *)(pcVar19 + 0xbc) + 1;
LAB_14253d15e:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c793218) && (FUN_144b3d300(&DAT_14c793218), DAT_14c793218 == -1)) {
    _DAT_14c793208 = 0;
    uRam000000014c793210 = 0;
    _DAT_14c7931f8 = 0;
    uRam000000014c793200 = 0;
    _DAT_14c7931e8 = 0;
    uRam000000014c7931f0 = 0;
    _DAT_14c7931d8 = 0;
    uRam000000014c7931e0 = 0;
    _DAT_14c7931c8 = 0;
    uRam000000014c7931d0 = 0;
    _Mtx_init_in_situ(&DAT_14c7931c8,2);
    atexit((_func_5014 *)&LAB_14253dd60);
    _Init_thread_footer(&DAT_14c793218);
  }
  FUN_142501400(&DAT_14c7931c8);
  return pcVar19;
}



// FUNCTION 14253d350 Unwind@14253d350 body=55 status=ok
// SIG undefined Unwind@14253d350(void)

void Unwind_14253d350(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xd0);
  return;
}



// FUNCTION 14253d390 Unwind@14253d390 body=58 status=ok
// SIG undefined Unwind@14253d390(void)

void Unwind_14253d390(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x170);
  return;
}



// FUNCTION 14253d3d0 FUN_14253d3d0 body=724 status=ok
// SIG undefined FUN_14253d3d0(void)

void FUN_14253d3d0(longlong param_1,int param_2,void *param_3,uint param_4,uint *param_5,
                  uint *param_6,int *param_7)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  *param_7 = -1;
  *param_6 = 0;
  param_2 = param_2 + -1;
  uVar6 = 0;
  if (0 < (int)param_4) {
    uVar6 = (ulonglong)param_4;
  }
  iVar5 = 0;
  uVar9 = 0;
LAB_14253d423:
  if (uVar9 == uVar6) {
    return;
  }
  if (param_2 < iVar5) {
    return;
  }
  uVar2 = *(ushort *)((longlong)param_3 + uVar9 * 2);
  iVar14 = iVar5;
  iVar13 = param_2;
  do {
    iVar12 = (iVar13 + iVar14) / 2;
    if (((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x10 + (longlong)iVar12 * 0x18)) &&
       (uVar3 = *(ushort *)(*(longlong *)(param_1 + 8 + (longlong)iVar12 * 0x18) + uVar9 * 2),
       uVar2 <= uVar3)) {
      if (uVar3 <= uVar2) break;
      iVar13 = iVar12 + -1;
    }
    else {
      iVar14 = iVar12 + 1;
    }
    if (iVar13 < iVar14) {
      return;
    }
  } while( true );
  iVar14 = iVar12;
  if (iVar5 < iVar12) {
    do {
      while( true ) {
        iVar13 = (iVar5 + iVar14) / 2;
        if (((longlong)*(int *)(param_1 + 0x10 + (longlong)iVar13 * 0x18) <= (longlong)uVar9) ||
           (*(ushort *)(*(longlong *)(param_1 + 8 + (longlong)iVar13 * 0x18) + uVar9 * 2) < uVar2))
        break;
        iVar14 = iVar13;
        if (iVar13 <= iVar5) goto LAB_14253d506;
      }
      iVar5 = iVar13 + 1;
    } while (iVar5 < iVar14);
  }
LAB_14253d506:
  while (iVar12 < param_2) {
    while( true ) {
      iVar14 = (iVar12 + param_2) / 2;
      if ((longlong)*(int *)(param_1 + 0x10 + (longlong)iVar14 * 0x18) < (longlong)uVar9) break;
      if (*(ushort *)(*(longlong *)(param_1 + 8 + (longlong)iVar14 * 0x18) + uVar9 * 2) <= uVar2) {
        iVar12 = iVar14 + 1;
        iVar14 = param_2;
      }
      param_2 = iVar14;
      if (param_2 <= iVar12) goto LAB_14253d54a;
    }
    iVar12 = iVar14 + 1;
  }
LAB_14253d54a:
  param_2 = param_2 - (uint)(uVar2 < *(ushort *)
                                      (*(longlong *)(param_1 + 8 + (longlong)param_2 * 0x18) +
                                      uVar9 * 2));
  lVar11 = (longlong)iVar5;
  uVar1 = uVar9 + 1;
  iVar14 = -1;
  if (uVar1 == *(uint *)(param_1 + 0x10 + lVar11 * 0x18)) {
    iVar14 = iVar5;
  }
  if (iVar5 == -1) {
    return;
  }
  uVar8 = (uint)uVar1;
  if ((longlong)uVar9 < (longlong)(int)*param_5) {
    uVar8 = *param_5;
  }
  *param_5 = uVar8;
  if (iVar14 != -1) {
    *param_6 = (uint)uVar1;
    *param_7 = iVar14;
  }
  uVar9 = uVar1;
  if (param_2 - iVar5 < 10) {
    if (iVar5 <= param_2) {
      uVar8 = *param_5;
      do {
        uVar15 = *(uint *)(param_1 + 0x10 + lVar11 * 0x18);
        if ((((int)param_4 < (int)uVar15) || ((int)uVar15 <= (int)*param_6)) ||
           (iVar5 = memcmp(*(void **)(param_1 + 8 + lVar11 * 0x18),param_3,(longlong)(int)uVar15 * 2
                          ), iVar5 != 0)) {
          if ((int)param_4 <= (int)uVar15) {
            uVar15 = param_4;
          }
          if ((int)uVar8 < (int)uVar15) {
            lVar10 = (longlong)(int)uVar8;
            uVar7 = uVar8;
            do {
              uVar7 = uVar7 + 1;
              if (*(short *)(*(longlong *)(param_1 + lVar11 * 0x18 + 8) + lVar10 * 2) !=
                  *(short *)((longlong)param_3 + lVar10 * 2)) break;
              uVar4 = uVar7;
              if (lVar10 < (int)*param_5) {
                uVar4 = *param_5;
              }
              lVar10 = lVar10 + 1;
              *param_5 = uVar4;
            } while ((1 - uVar15) + uVar7 != 1);
          }
        }
        else {
          uVar7 = *param_5;
          if ((int)*param_5 <= (int)uVar15) {
            uVar7 = uVar15;
          }
          *param_5 = uVar7;
          *param_7 = (int)lVar11;
          *param_6 = uVar15;
        }
        lVar11 = lVar11 + 1;
      } while (param_2 + 1 != (int)lVar11);
    }
    return;
  }
  goto LAB_14253d423;
}



// FUNCTION 14253d6d0 FUN_14253d6d0 body=333 status=ok
// SIG undefined FUN_14253d6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14253d6d0(longlong param_1)

{
  int *piVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793218) {
    FUN_144b3d300(&DAT_14c793218);
    if (DAT_14c793218 == -1) {
      _DAT_14c793208 = 0;
      uRam000000014c793210 = 0;
      _DAT_14c7931f8 = 0;
      uRam000000014c793200 = 0;
      _DAT_14c7931e8 = 0;
      uRam000000014c7931f0 = 0;
      _DAT_14c7931d8 = 0;
      uRam000000014c7931e0 = 0;
      _DAT_14c7931c8 = 0;
      uRam000000014c7931d0 = 0;
      _Mtx_init_in_situ(&DAT_14c7931c8,2);
      atexit((_func_5014 *)&LAB_14253dd60);
      _Init_thread_footer(&DAT_14c793218);
    }
  }
  FUN_142501320(&DAT_14c7931c8);
  piVar1 = (int *)(param_1 + 0xbc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14253dca0(param_1);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793218) {
    FUN_144b3d300(&DAT_14c793218);
    if (DAT_14c793218 == -1) {
      _DAT_14c793208 = 0;
      uRam000000014c793210 = 0;
      _DAT_14c7931f8 = 0;
      uRam000000014c793200 = 0;
      _DAT_14c7931e8 = 0;
      uRam000000014c7931f0 = 0;
      _DAT_14c7931d8 = 0;
      uRam000000014c7931e0 = 0;
      _DAT_14c7931c8 = 0;
      uRam000000014c7931d0 = 0;
      _Mtx_init_in_situ(&DAT_14c7931c8,2);
      atexit((_func_5014 *)&LAB_14253dd60);
      _Init_thread_footer(&DAT_14c793218);
    }
  }
  FUN_142501400(&DAT_14c7931c8);
  return;
}



// FUNCTION 14253d820 FUN_14253d820 body=135 status=ok
// SIG undefined FUN_14253d820(void)

void FUN_14253d820(undefined8 param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int *local_30;
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_28;
  local_30 = param_4;
  uVar1 = FUN_14253b990(param_1,param_2,0,&local_21);
  if (*param_4 < 1) {
    FUN_1424a8e40(param_3);
    if (*(short *)(param_3 + 8) < 0) {
      iVar2 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar2 = (int)*(short *)(param_3 + 8) >> 5;
    }
    local_30 = (int *)CONCAT44(local_30._4_4_,local_28);
    local_38 = (undefined4 *)((ulonglong)local_38 & 0xffffffff00000000);
    FUN_1424a9130(param_3,0,iVar2,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14253d8b0 FUN_14253d8b0 body=60 status=ok
// SIG undefined FUN_14253d8b0(void)

undefined4 FUN_14253d8b0(undefined8 param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  uVar1 = 0;
  if (*param_3 < 1) {
    if (param_2 == 1) {
      lVar3 = FUN_14253d8f0(param_1,param_3);
      uVar1 = *(undefined4 *)(lVar3 + 8);
    }
    else if (param_2 == 0) {
      puVar2 = (undefined4 *)FUN_14253d8f0(param_1,param_3);
      uVar1 = *puVar2;
    }
    else {
      *param_3 = 0x10;
    }
  }
  return uVar1;
}



// FUNCTION 14253d8f0 FUN_14253d8f0 body=349 status=ok
// SIG undefined FUN_14253d8f0(void)

void FUN_14253d8f0(short *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  undefined1 local_2c [3];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1 == (short *)0x0) || (*param_1 == 0)) {
    if (*param_2 < 1) {
      *param_2 = 1;
    }
    goto LAB_14253da40;
  }
  uVar1 = FUN_1424edad0("icudt64l-curr","supplementalData",param_2);
  uVar1 = FUN_1424ecc30(uVar1,"CurrencyMeta",uVar1,param_2);
  if (*param_2 < 1) {
    local_30 = 0;
    FUN_14250ae10(param_1,local_2c,3);
    local_29 = 0;
    uVar2 = FUN_1424ecc30(uVar1,local_2c,0,&local_30);
    if (0 < local_30) {
      FUN_1424ea9f0(uVar2);
      uVar2 = FUN_1424ecc30(uVar1,"DEFAULT",0,param_2);
      if (0 < *param_2) {
        FUN_1424ea9f0(uVar1);
        uVar1 = uVar2;
        goto LAB_14253d94f;
      }
    }
    FUN_1424eaea0(uVar2,&local_34,param_2);
    if ((0 < *param_2 || local_34 != 4) && (*param_2 < 1)) {
      *param_2 = 3;
    }
    FUN_1424ea9f0(uVar1);
    FUN_1424ea9f0(uVar2);
  }
  else {
LAB_14253d94f:
    FUN_1424ea9f0(uVar1);
  }
LAB_14253da40:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 14253da60 FUN_14253da60 body=123 status=ok
// SIG undefined FUN_14253da60(void)

double FUN_14253da60(undefined8 param_1,int param_2,int *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  double dVar4;
  
  puVar1 = (uint *)FUN_14253d8f0(param_1,param_3);
  dVar4 = 0.0;
  if (*param_3 < 1) {
    if (param_2 == 0) {
      lVar2 = 1;
      puVar3 = puVar1;
    }
    else {
      if (param_2 != 1) {
        *param_3 = 0x10;
        return 0.0;
      }
      lVar2 = 3;
      puVar3 = puVar1 + 2;
    }
    if ((ulonglong)*puVar3 < 10) {
      if (1 < (int)puVar1[lVar2]) {
        dVar4 = (double)(int)puVar1[lVar2] /
                (double)*(int *)(&DAT_1499ddb60 + (ulonglong)*puVar3 * 4);
      }
    }
    else {
      *param_3 = 3;
    }
  }
  return dVar4;
}



// FUNCTION 14253dae0 FUN_14253dae0 body=422 status=ok
// SIG undefined FUN_14253dae0(void)

undefined8 FUN_14253dae0(void)

{
  longlong *plVar1;
  
  while (DAT_14c7930f8 != (undefined8 *)0x0) {
    DAT_14c7930f8 = (undefined8 *)*DAT_14c7930f8;
    FUN_1401773f0();
  }
  if (DAT_14c793160 != 0) {
    FUN_14253dca0();
    DAT_14c793160 = 0;
  }
  if (DAT_14c793168 != 0) {
    FUN_14253dca0();
    DAT_14c793168 = 0;
  }
  if (DAT_14c793170 != 0) {
    FUN_14253dca0();
    DAT_14c793170 = 0;
  }
  if (DAT_14c793178 != 0) {
    FUN_14253dca0();
    DAT_14c793178 = 0;
  }
  if (DAT_14c793180 != 0) {
    FUN_14253dca0();
    DAT_14c793180 = 0;
  }
  if (DAT_14c793188 != 0) {
    FUN_14253dca0();
    DAT_14c793188 = 0;
  }
  if (DAT_14c793190 != 0) {
    FUN_14253dca0();
    DAT_14c793190 = 0;
  }
  if (DAT_14c793198 != 0) {
    FUN_14253dca0();
    DAT_14c793198 = 0;
  }
  if (DAT_14c7931a0 != 0) {
    FUN_14253dca0();
    DAT_14c7931a0 = 0;
  }
  if (DAT_14c7931a8 != 0) {
    FUN_14253dca0();
    DAT_14c7931a8 = 0;
  }
  if (DAT_14c7930f0 != 0) {
    FUN_142502220();
    DAT_14c7930f0 = 0;
  }
  plVar1 = DAT_14c7931b0;
  LOCK();
  DAT_14c79321c = 0;
  UNLOCK();
  if (DAT_14c7931b0 != (longlong *)0x0) {
    if (*DAT_14c7931b0 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar1);
  }
  DAT_14c7931b0 = (longlong *)0x0;
  LOCK();
  DAT_14c7931b8 = 0;
  UNLOCK();
  return 1;
}



// FUNCTION 14253dca0 FUN_14253dca0 body=163 status=ok
// SIG undefined FUN_14253dca0(void)

void FUN_14253dca0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      if ((*(byte *)(lVar2 + 0x14 + lVar3) & 1) != 0) {
        FUN_1424da110(*(undefined8 *)(lVar2 + 8 + lVar3));
      }
      lVar3 = lVar3 + 0x18;
    } while ((ulonglong)uVar1 * 0x18 != lVar3);
  }
  FUN_1424da110(lVar2);
  uVar1 = *(uint *)(param_1 + 0xb8);
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      if ((*(byte *)(lVar2 + 0x14 + lVar3) & 1) != 0) {
        FUN_1424da110(*(undefined8 *)(lVar2 + 8 + lVar3));
      }
      lVar3 = lVar3 + 0x18;
    } while ((ulonglong)uVar1 * 0x18 != lVar3);
  }
  FUN_1424da110(lVar2);
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 14253dd70 FUN_14253dd70 body=1970 status=ok
// SIG undefined FUN_14253dd70(void)

longlong * FUN_14253dd70(void)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  int iVar16;
  bool bVar17;
  undefined1 local_130 [64];
  undefined4 *local_f0;
  undefined1 local_e8 [8];
  ushort local_e0;
  int local_dc;
  undefined1 local_a8 [8];
  ushort local_a0;
  int local_9c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (DAT_14c7931b8 == 2) {
    return DAT_14c7931b0;
  }
  cVar3 = FUN_142501800(&DAT_14c7931b8);
  if (cVar3 == '\0') {
    return DAT_14c7931b0;
  }
  local_4c = 0;
  FUN_1424d6720(9,FUN_14253dae0);
  plVar4 = (longlong *)thunk_FUN_1424da030(0x58);
  plVar14 = DAT_14c7931b0;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar14 = plVar4 + 1;
    FUN_142502140(plVar14,FUN_1424a9c90,FUN_1424a9cd0,0,&local_4c);
    if (local_4c < 1) {
      *plVar4 = (longlong)plVar14;
      FUN_142502340(plVar14,&LAB_1424b70f0);
      if ((local_4c < 1) && (FUN_142502350(*plVar4,&LAB_14253e8e0), local_4c < 1)) {
        puVar5 = &DAT_1499ddc00;
        do {
          uVar2 = *puVar5;
          local_f0 = puVar5;
          FUN_1424a6c30(local_a8,puVar5[1]);
          lVar6 = FUN_1425eaea0(uVar2);
          if (lVar6 == 0) {
LAB_14253e4cb:
            FUN_140859a90(local_a8);
            break;
          }
          FUN_1425ec120(local_130,lVar6);
          while( true ) {
            cVar3 = FUN_1425ec210(local_130);
            if (cVar3 == '\0') break;
            uVar7 = FUN_1425ec2b0(local_130);
            FUN_1424a6be0(local_e8,uVar7);
            if ((local_e0 & 1) == 0) {
              iVar16 = local_dc;
              if (-1 < (short)local_e0) {
                iVar16 = (int)(short)local_e0 >> 5;
              }
              iVar12 = local_9c;
              if (-1 < (short)local_a0) {
                iVar12 = (int)(short)local_a0 >> 5;
              }
              if ((((local_a0 & 1) != 0) || (iVar16 != iVar12)) ||
                 (cVar3 = FUN_1412ae090(local_e8,local_a8), cVar3 == '\0')) goto LAB_14253df6b;
            }
            else if ((local_a0 & 1) == 0) {
LAB_14253df6b:
              if (local_4c < 1) {
                if ((local_a0 & 1) == 0) {
                  iVar16 = local_9c;
                  if (-1 < (short)local_a0) {
                    iVar16 = (int)(short)local_a0 >> 5;
                  }
                  iVar12 = local_dc;
                  if (-1 < (short)local_e0) {
                    iVar12 = (int)(short)local_e0 >> 5;
                  }
                  if (((((int)(short)local_e0 & 1U) != 0) || (iVar16 != iVar12)) ||
                     (cVar3 = FUN_1412ae090(local_a8,local_e8), cVar3 == '\0')) {
LAB_14253dfd8:
                    puVar8 = (undefined1 *)FUN_142502620(*plVar4,local_a8);
                    if (puVar8 == (undefined1 *)0x0) {
LAB_14253e043:
                      local_60 = (undefined1 *)0x0;
                      puVar8 = local_a8;
                      puVar10 = local_60;
                    }
                    else {
                      uVar1 = *(ushort *)(puVar8 + 8);
                      puVar10 = puVar8;
                      if ((uVar1 & 1) == 0) {
                        if ((short)uVar1 < 0) {
                          iVar16 = *(int *)(puVar8 + 0xc);
                        }
                        else {
                          iVar16 = (int)(short)uVar1 >> 5;
                        }
                        iVar12 = local_9c;
                        if (-1 < (short)local_a0) {
                          iVar12 = (int)(short)local_a0 >> 5;
                        }
                        if ((((int)(short)local_a0 & 1U) == 0) && (iVar16 == iVar12)) {
                          cVar3 = FUN_1412ae090(puVar8,local_a8);
                          bVar17 = cVar3 != '\0';
                          goto LAB_14253e03f;
                        }
                      }
                      else {
                        bVar17 = (bool)((byte)local_a0 & 1);
LAB_14253e03f:
                        if (bVar17 != false) goto LAB_14253e043;
                      }
                    }
                    local_60 = puVar10;
                    lVar6 = FUN_142502620(*plVar4,local_e8);
                    if (lVar6 == 0) {
LAB_14253e0c7:
                      lVar6 = 0;
LAB_14253e0ca:
                      if (local_60 == (undefined1 *)0x0 && lVar6 == 0) {
                        local_58 = (undefined8 *)thunk_FUN_1424da030(0x40);
                        if (local_58 != (undefined8 *)0x0) {
                          FUN_1424a6be0(local_58,local_e8);
                        }
                        puVar13 = local_58;
                        puVar9 = (undefined8 *)thunk_FUN_1424da030(0x40);
                        if (puVar9 == (undefined8 *)0x0) goto LAB_14253e497;
                        local_68 = puVar9;
                        FUN_1424a6be0(puVar9,local_a8);
                      }
                      else if (lVar6 == 0) {
                        local_58 = (undefined8 *)thunk_FUN_1424da030(0x40);
                        if (local_58 != (undefined8 *)0x0) {
                          FUN_1424a6be0(local_58,local_e8);
                        }
                        puVar13 = local_58;
                        puVar9 = (undefined8 *)thunk_FUN_1424da030(0x40);
                        if (puVar9 == (undefined8 *)0x0) goto LAB_14253e497;
                        local_68 = puVar9;
                        FUN_1424a6be0(puVar9,local_60);
                      }
                      else {
                        if (local_60 == (undefined1 *)0x0) goto LAB_14253e367;
                        local_58 = (undefined8 *)thunk_FUN_1424da030(0x40);
                        if (local_58 != (undefined8 *)0x0) {
                          FUN_1424a6be0(local_58,lVar6);
                        }
                        puVar13 = local_58;
                        puVar9 = (undefined8 *)thunk_FUN_1424da030(0x40);
                        if (puVar9 == (undefined8 *)0x0) goto LAB_14253e497;
                        local_68 = puVar9;
                        FUN_1424a6be0(puVar9,local_60);
                      }
LAB_14253e406:
                      puVar9 = local_68;
                      if (puVar13 != (undefined8 *)0x0) {
                        local_60 = (undefined1 *)thunk_FUN_1424da030(0x40);
                        if (local_60 != (undefined1 *)0x0) {
                          FUN_1424a6be0(local_60,local_a8);
                        }
                        FUN_142502aa0(*plVar4,local_60,puVar13,&local_4c);
                        local_60 = (undefined1 *)thunk_FUN_1424da030(0x40);
                        if (local_60 != (undefined1 *)0x0) {
                          FUN_1424a6be0(local_60,local_e8);
                        }
                        FUN_142502aa0(*plVar4,local_60,local_68,&local_4c);
                        goto LAB_14253deca;
                      }
LAB_14253e4a5:
                      (**(code **)*puVar9)(puVar9,1);
                    }
                    else {
                      uVar1 = *(ushort *)(lVar6 + 8);
                      if ((uVar1 & 1) == 0) {
                        if ((short)uVar1 < 0) {
                          iVar16 = *(int *)(lVar6 + 0xc);
                        }
                        else {
                          iVar16 = (int)(short)uVar1 >> 5;
                        }
                        iVar12 = local_dc;
                        if (-1 < (short)local_e0) {
                          iVar12 = (int)(short)local_e0 >> 5;
                        }
                        if ((((int)(short)local_e0 & 1U) == 0) && (iVar16 == iVar12)) {
                          cVar3 = FUN_1412ae090(lVar6,local_e8);
                          bVar17 = cVar3 != '\0';
                          goto LAB_14253e0bf;
                        }
                      }
                      else {
                        bVar17 = (bool)((byte)local_e0 & 1);
LAB_14253e0bf:
                        if (bVar17 != false) goto LAB_14253e0c7;
                      }
                      puVar10 = local_60;
                      lVar11 = lVar6;
                      if (local_60 != (undefined1 *)0x0) {
LAB_14253e1ac:
                        do {
                          uVar1 = *(ushort *)(puVar10 + 8);
                          if ((uVar1 & 1) == 0) {
                            if ((short)uVar1 < 0) {
                              iVar16 = *(int *)(puVar10 + 0xc);
                            }
                            else {
                              iVar16 = (int)(short)uVar1 >> 5;
                            }
                            iVar12 = local_dc;
                            if (-1 < (short)local_e0) {
                              iVar12 = (int)(short)local_e0 >> 5;
                            }
                            if (((((int)(short)local_e0 & 1U) == 0) && (iVar16 == iVar12)) &&
                               (cVar3 = FUN_1412ae090(puVar10,local_e8), cVar3 != '\0'))
                            goto LAB_14253deca;
                          }
                          else if ((local_e0 & 1) != 0) goto LAB_14253deca;
                          uVar1 = *(ushort *)(lVar11 + 8);
                          if ((uVar1 & 1) == 0) {
                            if ((short)uVar1 < 0) {
                              iVar16 = *(int *)(lVar11 + 0xc);
                            }
                            else {
                              iVar16 = (int)(short)uVar1 >> 5;
                            }
                            iVar12 = local_9c;
                            if (-1 < (short)local_a0) {
                              iVar12 = (int)(short)local_a0 >> 5;
                            }
                            if (((((int)(short)local_a0 & 1U) == 0) && (iVar16 == iVar12)) &&
                               (cVar3 = FUN_1412ae090(lVar11,local_a8), cVar3 != '\0'))
                            goto LAB_14253deca;
                          }
                          else if ((local_a0 & 1) != 0) goto LAB_14253deca;
                          puVar10 = (undefined1 *)FUN_142502620(*plVar4,puVar8);
                          if (puVar10 == (undefined1 *)0x0) {
LAB_14253e2d5:
                            puVar10 = (undefined1 *)0x0;
                            puVar15 = puVar8;
                          }
                          else {
                            uVar1 = *(ushort *)(puVar10 + 8);
                            puVar15 = puVar10;
                            if ((uVar1 & 1) == 0) {
                              if ((short)uVar1 < 0) {
                                iVar16 = *(int *)(puVar10 + 0xc);
                              }
                              else {
                                iVar16 = (int)(short)uVar1 >> 5;
                              }
                              iVar12 = local_9c;
                              if (-1 < (short)local_a0) {
                                iVar12 = (int)(short)local_a0 >> 5;
                              }
                              if (((((int)(short)local_a0 & 1U) == 0) && (iVar16 == iVar12)) &&
                                 (cVar3 = FUN_1412ae090(puVar10,local_a8), cVar3 != '\0'))
                              goto LAB_14253e2d5;
                            }
                            else if ((local_a0 & 1) != 0) goto LAB_14253e2d5;
                          }
                          lVar11 = FUN_142502620(*plVar4,lVar11);
                          if (lVar11 == 0) break;
                          uVar1 = *(ushort *)(lVar11 + 8);
                          puVar8 = puVar15;
                          if ((uVar1 & 1) != 0) {
                            bVar17 = (bool)((byte)local_e0 & 1);
joined_r0x00014253e30e:
                            if ((puVar10 == (undefined1 *)0x0) || (bVar17 != false)) break;
                            goto LAB_14253e1ac;
                          }
                          if ((short)uVar1 < 0) {
                            iVar16 = *(int *)(lVar11 + 0xc);
                          }
                          else {
                            iVar16 = (int)(short)uVar1 >> 5;
                          }
                          iVar12 = local_dc;
                          if (-1 < (short)local_e0) {
                            iVar12 = (int)(short)local_e0 >> 5;
                          }
                          if ((((int)(short)local_e0 & 1U) == 0) && (iVar16 == iVar12)) {
                            cVar3 = FUN_1412ae090(lVar11,local_e8);
                            bVar17 = cVar3 != '\0';
                            goto joined_r0x00014253e30e;
                          }
                        } while (puVar10 != (undefined1 *)0x0);
                        goto LAB_14253e0ca;
                      }
LAB_14253e367:
                      local_58 = (undefined8 *)thunk_FUN_1424da030(0x40);
                      if (local_58 != (undefined8 *)0x0) {
                        FUN_1424a6be0(local_58,lVar6);
                      }
                      puVar13 = local_58;
                      puVar9 = (undefined8 *)thunk_FUN_1424da030(0x40);
                      if (puVar9 != (undefined8 *)0x0) {
                        local_68 = puVar9;
                        FUN_1424a6be0(puVar9,local_a8);
                        goto LAB_14253e406;
                      }
LAB_14253e497:
                      puVar9 = puVar13;
                      if (puVar13 != (undefined8 *)0x0) goto LAB_14253e4a5;
                    }
                    local_4c = 7;
                    goto LAB_14253e4b9;
                  }
                }
                else if ((local_e0 & 1) == 0) goto LAB_14253dfd8;
LAB_14253deca:
                if (local_4c < 1) goto LAB_14253dedb;
              }
LAB_14253e4b9:
              FUN_140859a90(local_e8);
              FUN_1425ec1d0(local_130);
              goto LAB_14253e4cb;
            }
LAB_14253dedb:
            FUN_140859a90(local_e8);
          }
          FUN_1425ec1d0(local_130);
          FUN_140859a90(local_a8);
          puVar5 = local_f0 + 2;
        } while (puVar5 != (undefined4 *)&DAT_1499ddc28);
        plVar14 = plVar4;
        if (local_4c < 1) goto LAB_14253e4f2;
      }
    }
    if (*plVar4 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar4);
    plVar14 = DAT_14c7931b0;
  }
LAB_14253e4f2:
  DAT_14c7931b0 = plVar14;
  FUN_1425019c0(&DAT_14c7931b8);
  return DAT_14c7931b0;
}



// FUNCTION 14253e530 Unwind@14253e530 body=58 status=ok
// SIG undefined Unwind@14253e530(void)

void Unwind_14253e530(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x100));
  return;
}



// FUNCTION 14253e570 Unwind@14253e570 body=58 status=ok
// SIG undefined Unwind@14253e570(void)

void Unwind_14253e570(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x100));
  return;
}



// FUNCTION 14253e5b0 Unwind@14253e5b0 body=58 status=ok
// SIG undefined Unwind@14253e5b0(void)

void Unwind_14253e5b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x100));
  return;
}



// FUNCTION 14253e5f0 Unwind@14253e5f0 body=55 status=ok
// SIG undefined Unwind@14253e5f0(void)

void Unwind_14253e5f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  return;
}



// FUNCTION 14253e630 Unwind@14253e630 body=55 status=ok
// SIG undefined Unwind@14253e630(void)

void Unwind_14253e630(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  return;
}



// FUNCTION 14253e670 Unwind@14253e670 body=55 status=ok
// SIG undefined Unwind@14253e670(void)

void Unwind_14253e670(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  return;
}



// FUNCTION 14253e6b0 Unwind@14253e6b0 body=58 status=ok
// SIG undefined Unwind@14253e6b0(void)

void Unwind_14253e6b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x100));
  return;
}



// FUNCTION 14253e6f0 Unwind@14253e6f0 body=55 status=ok
// SIG undefined Unwind@14253e6f0(void)

void Unwind_14253e6f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  return;
}



// FUNCTION 14253e730 Unwind@14253e730 body=55 status=ok
// SIG undefined Unwind@14253e730(void)

void Unwind_14253e730(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf8));
  return;
}



// FUNCTION 14253e770 Unwind@14253e770 body=55 status=ok
// SIG undefined Unwind@14253e770(void)

void Unwind_14253e770(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf8));
  return;
}



// FUNCTION 14253e7b0 Unwind@14253e7b0 body=55 status=ok
// SIG undefined Unwind@14253e7b0(void)

void Unwind_14253e7b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 14253e7f0 Unwind@14253e7f0 body=55 status=ok
// SIG undefined Unwind@14253e7f0(void)

void Unwind_14253e7f0(undefined8 param_1,longlong param_2)

{
  FUN_1425ec1d0(param_2 + 0x28);
  return;
}



// FUNCTION 14253e830 Unwind@14253e830 body=55 status=ok
// SIG undefined Unwind@14253e830(void)

void Unwind_14253e830(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  return;
}



// FUNCTION 14253e900 FUN_14253e900 body=30 status=ok
// SIG undefined FUN_14253e900(void)

void FUN_14253e900(longlong param_1)

{
  FUN_1424da110(*(undefined8 *)(param_1 + 8));
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 14253e970 FUN_14253e970 body=125 status=ok
// SIG undefined FUN_14253e970(void)

undefined8 FUN_14253e970(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  puVar2 = *(uint **)(param_1 + 8);
  uVar1 = puVar2[1];
  uVar4 = (ulonglong)uVar1;
  uVar5 = 0x12f;
  if (0x12f < uVar1) {
    uVar5 = (ulonglong)uVar1;
  }
  puVar3 = &DAT_1499ddc68 + uVar4 * 4;
  do {
    puVar6 = puVar3;
    if (uVar5 == uVar4) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      return 0;
    }
    puVar2[1] = (int)uVar4 + 1;
    if (*puVar2 == 0x7fffffff) break;
    uVar4 = uVar4 + 1;
    puVar3 = puVar6 + 4;
  } while ((*puVar2 & ~*puVar6) != 0);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 3;
  }
  return *(undefined8 *)(puVar6 + -2);
}



// FUNCTION 14253ea40 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 14253ea50 FUN_14253ea50 body=389 status=ok
// SIG undefined FUN_14253ea50(void)

undefined8 * FUN_14253ea50(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (*param_1 < 1) {
    if ((DAT_14c793230 != 2) && (cVar1 = FUN_142501800(&DAT_14c793230), cVar1 != '\0')) {
      FUN_1424d6720(0x15,FUN_14253f940);
      puVar3 = (undefined8 *)thunk_FUN_1424da030(0x38);
      if (puVar3 == (undefined8 *)0x0) {
        *param_1 = 7;
        iVar2 = 7;
LAB_14253eb0d:
        DAT_14c793228 = (undefined8 *)0x0;
      }
      else {
        *puVar3 = icu_64::UnifiedCache::vftable;
        puVar3[1] = 0;
        puVar3[2] = 0xffffffff;
        puVar3[3] = 0x3e800000000;
        *(undefined4 *)(puVar3 + 4) = 100;
        puVar3[5] = 0;
        puVar3[6] = 0;
        if (0 < *param_1) {
LAB_14253ead7:
          DAT_14c793228 = puVar3;
          (**(code **)*puVar3)(puVar3,1);
          iVar2 = *param_1;
          goto LAB_14253eb0d;
        }
        puVar4 = (undefined8 *)thunk_FUN_1424da030(0x18);
        if (puVar4 == (undefined8 *)0x0) {
          puVar3[6] = 0;
          *param_1 = 7;
          goto LAB_14253ead7;
        }
        *puVar4 = icu_64::SharedObject::vftable;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar3[6] = puVar4;
        *(undefined4 *)(puVar4 + 1) = 1;
        LOCK();
        *(undefined4 *)(puVar3[6] + 0xc) = 1;
        UNLOCK();
        *(undefined8 **)(puVar3[6] + 0x10) = puVar3;
        uVar5 = FUN_142501e10(&LAB_14253ea00,&LAB_14253ea10,0,param_1);
        puVar3[1] = uVar5;
        if (0 < *param_1) goto LAB_14253ead7;
        FUN_142502340(uVar5,&LAB_14253ea20);
        iVar2 = *param_1;
        DAT_14c793228 = puVar3;
        if (0 < iVar2) goto LAB_14253ead7;
      }
      DAT_14c793234 = iVar2;
      FUN_1425019c0(&DAT_14c793230);
      iVar2 = *param_1;
      goto joined_r0x00014253eaf7;
    }
    if (0 < DAT_14c793234) {
      *param_1 = DAT_14c793234;
    }
  }
  iVar2 = *param_1;
joined_r0x00014253eaf7:
  puVar3 = DAT_14c793228;
  if (0 < iVar2) {
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}



// FUNCTION 14253ebe0 FUN_14253ebe0 body=217 status=ok
// SIG undefined FUN_14253ebe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14253ebe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793288) {
    FUN_144b3d300(&DAT_14c793288);
    if (DAT_14c793288 == -1) {
      _DAT_14c793278 = 0;
      uRam000000014c793280 = 0;
      _DAT_14c793268 = 0;
      uRam000000014c793270 = 0;
      _DAT_14c793258 = 0;
      uRam000000014c793260 = 0;
      _DAT_14c793248 = 0;
      uRam000000014c793250 = 0;
      _DAT_14c793238 = 0;
      uRam000000014c793240 = 0;
      _Mtx_init_in_situ(&DAT_14c793238,2);
      atexit((_func_5014 *)&LAB_14253f980);
      _Init_thread_footer(&DAT_14c793288);
    }
  }
  FUN_142501320(&DAT_14c793238);
  do {
    cVar1 = FUN_14253ecf0(param_1,0,param_3,param_4,uVar2);
  } while (cVar1 != '\0');
  FUN_142501400(&DAT_14c793238);
  return;
}



// FUNCTION 14253ecc0 Unwind@14253ecc0 body=35 status=ok
// SIG undefined Unwind@14253ecc0(void)

void Unwind_14253ecc0(void)

{
  FUN_142501400(&DAT_14c793238);
  return;
}



// FUNCTION 14253ecf0 FUN_14253ecf0 body=258 status=ok
// SIG undefined FUN_14253ecf0(void)

undefined8 FUN_14253ecf0(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  iVar3 = FUN_142502610(*(undefined8 *)(param_1 + 8));
  if (iVar3 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar5 = FUN_1425022e0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        lVar5 = FUN_1425022e0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
        if (lVar5 == 0) {
          return uVar6;
        }
      }
      if (param_2 == '\0') {
        if (((*(int *)(*(longlong *)(lVar5 + 0x10) + 8) != 0) ||
            (*(longlong *)(param_1 + 0x30) != *(longlong *)(lVar5 + 8))) &&
           ((*(char *)(*(longlong *)(lVar5 + 0x10) + 0xc) == '\0' ||
            ((*(int *)(*(longlong *)(lVar5 + 8) + 8) == 1 && (iVar4 = FUN_142537cd0(), iVar4 == 0)))
            ))) goto LAB_14253ed6f;
      }
      else {
LAB_14253ed6f:
        puVar2 = *(undefined8 **)(lVar5 + 8);
        FUN_142503000(*(undefined8 *)(param_1 + 8),lVar5);
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        uVar6 = 1;
        if (*piVar1 == 0) {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          iVar4 = FUN_142537cd0(puVar2);
          if (iVar4 == 0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          else {
            puVar2[2] = 0;
          }
        }
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar6;
}



// FUNCTION 14253ee00 FUN_14253ee00 body=201 status=ok
// SIG undefined FUN_14253ee00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14253ee00(longlong param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793288) {
    FUN_144b3d300(&DAT_14c793288);
    if (DAT_14c793288 == -1) {
      _DAT_14c793278 = 0;
      uRam000000014c793280 = 0;
      _DAT_14c793268 = 0;
      uRam000000014c793270 = 0;
      _DAT_14c793258 = 0;
      uRam000000014c793260 = 0;
      _DAT_14c793248 = 0;
      uRam000000014c793250 = 0;
      _DAT_14c793238 = 0;
      uRam000000014c793240 = 0;
      _Mtx_init_in_situ(&DAT_14c793238,2);
      atexit((_func_5014 *)&LAB_14253f980);
      _Init_thread_footer(&DAT_14c793288);
    }
  }
  FUN_142501320(&DAT_14c793238);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  FUN_14253ef00(param_1);
  FUN_142501400(&DAT_14c793238);
  return;
}



// FUNCTION 14253eed0 Unwind@14253eed0 body=35 status=ok
// SIG undefined Unwind@14253eed0(void)

void Unwind_14253eed0(void)

{
  FUN_142501400(&DAT_14c793238);
  return;
}



// FUNCTION 14253ef00 FUN_14253ef00 body=294 status=ok
// SIG undefined FUN_14253ef00(void)

void FUN_14253ef00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  
  iVar2 = FUN_142502610(*(undefined8 *)(param_1 + 8));
  iVar5 = (*(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x18)) / 100;
  if (iVar5 <= *(int *)(param_1 + 0x1c)) {
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  iVar2 = iVar2 - (iVar5 + *(int *)(param_1 + 0x18));
  if (0 < iVar2) {
    iVar5 = 10;
    do {
      lVar4 = FUN_1425022e0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
      if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        lVar4 = FUN_1425022e0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
        if (lVar4 == 0) {
          return;
        }
      }
      puVar6 = *(undefined8 **)(lVar4 + 8);
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 8) != 0) ||
         (*(undefined8 **)(param_1 + 0x30) != puVar6)) {
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0xc) != '\0') {
          if ((*(int *)(puVar6 + 1) != 1) || (iVar3 = FUN_142537cd0(puVar6), iVar3 != 0))
          goto LAB_14253ef7e;
          puVar6 = *(undefined8 **)(lVar4 + 8);
        }
        FUN_142503000(*(undefined8 *)(param_1 + 8),lVar4);
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          iVar3 = FUN_142537cd0(puVar6);
          if (iVar3 == 0) {
            (**(code **)*puVar6)(puVar6,1);
          }
          else {
            puVar6[2] = 0;
          }
        }
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
          return;
        }
      }
LAB_14253ef7e:
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 14253f030 FUN_14253f030 body=267 status=ok
// SIG undefined FUN_14253f030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14253f030(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = icu_64::UnifiedCache::vftable;
  FUN_14253ebe0();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793288) {
    FUN_144b3d300(&DAT_14c793288);
    if (DAT_14c793288 == -1) {
      _DAT_14c793278 = 0;
      uRam000000014c793280 = 0;
      _DAT_14c793268 = 0;
      uRam000000014c793270 = 0;
      _DAT_14c793258 = 0;
      uRam000000014c793260 = 0;
      _DAT_14c793248 = 0;
      uRam000000014c793250 = 0;
      _DAT_14c793238 = 0;
      uRam000000014c793240 = 0;
      _Mtx_init_in_situ(&DAT_14c793238,2,param_3,param_4,uVar2);
      atexit((_func_5014 *)&LAB_14253f980);
      _Init_thread_footer(&DAT_14c793288);
    }
  }
  FUN_142501320(&DAT_14c793238);
  FUN_14253ecf0(param_1,1);
  FUN_142501400(&DAT_14c793238);
  FUN_142502220(param_1[1]);
  param_1[1] = 0;
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[6] = 0;
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14253f140 Unwind@14253f140 body=20 status=ok
// SIG undefined Unwind@14253f140(void)

void Unwind_14253f140(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14253f160 FUN_14253f160 body=498 status=ok
// SIG undefined FUN_14253f160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14253f160(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c793288) && (FUN_144b3d300(&DAT_14c793288), DAT_14c793288 == -1)) {
    _DAT_14c793278 = (undefined1  [16])0x0;
    _DAT_14c793268 = (undefined1  [16])0x0;
    _DAT_14c793258 = (undefined1  [16])0x0;
    _DAT_14c793248 = (undefined1  [16])0x0;
    _DAT_14c793238 = (undefined1  [16])0x0;
    _Mtx_init_in_situ(&DAT_14c793238,2);
    atexit((_func_5014 *)&LAB_14253f980);
    _Init_thread_footer(&DAT_14c793288);
  }
  FUN_142501320(&DAT_14c793238);
  lVar6 = FUN_142503070(*(undefined8 *)(param_1 + 8),param_2);
  if (lVar6 == 0) {
    local_34[0] = 0;
    uVar4 = *param_4;
    lVar6 = *param_3;
    lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 8) = uVar4;
      if (*(int *)(lVar6 + 8) == 0) {
        *(undefined1 *)(lVar7 + 0xc) = 1;
        *(longlong *)(lVar6 + 0x10) = param_1;
        *(ulonglong *)(param_1 + 0x14) =
             CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_1 + 0x14) + 1);
      }
      FUN_142502aa0(*(undefined8 *)(param_1 + 8),lVar7,lVar6,local_34);
      if (local_34[0] < 1) {
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      }
    }
LAB_14253f286:
    FUN_14253ef00(param_1);
  }
  else {
    lVar7 = *(longlong *)(lVar6 + 8);
    iVar3 = *(int *)(*(longlong *)(lVar6 + 0x10) + 8);
    if (lVar7 == 0) {
      if ((iVar3 == 0) && (*(longlong *)(param_1 + 0x30) == 0)) goto LAB_14253f275;
    }
    else {
      LOCK();
      piVar1 = (int *)(lVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      lVar5 = *(longlong *)(param_1 + 0x30);
      LOCK();
      piVar1 = (int *)(lVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      }
      if (iVar3 == 0 && lVar5 == lVar7) {
LAB_14253f275:
        FUN_14253f390(param_1,lVar6,*param_3,*param_4);
        goto LAB_14253f286;
      }
    }
    *param_4 = *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8);
    if (*param_3 != 0) {
      LOCK();
      piVar1 = (int *)(*param_3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      }
    }
    lVar6 = *(longlong *)(lVar6 + 8);
    *param_3 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      piVar1 = (int *)(lVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
    }
  }
  FUN_142501400(&DAT_14c793238);
  return;
}



// FUNCTION 14253f360 Unwind@14253f360 body=43 status=ok
// SIG undefined Unwind@14253f360(void)

void Unwind_14253f360(void)

{
  FUN_142501400(&DAT_14c793238);
  return;
}



// FUNCTION 14253f390 FUN_14253f390 body=233 status=ok
// SIG undefined FUN_14253f390(void)

void FUN_14253f390(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = param_4;
  iVar4 = *(int *)(param_3 + 8);
  if (iVar4 == 0) {
    *(undefined1 *)(lVar3 + 0xc) = 1;
    *(longlong *)(param_3 + 0x10) = param_1;
    *(ulonglong *)(param_1 + 0x14) =
         CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1,
                  (int)*(undefined8 *)(param_1 + 0x14) + 1);
    iVar4 = *(int *)(param_3 + 8);
  }
  *(int *)(param_3 + 8) = iVar4 + 1;
  *(longlong *)(param_2 + 8) = param_3;
  piVar1 = (int *)(puVar2 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    iVar4 = FUN_142537cd0(puVar2);
    if (iVar4 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    else {
      puVar2[2] = 0;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c7932e8) {
    FUN_144b3d300(&DAT_14c7932e8);
    if (DAT_14c7932e8 == -1) {
      FUN_1425014b0(&DAT_14c793290);
      atexit((_func_5014 *)&LAB_14253f990);
      _Init_thread_footer(&DAT_14c7932e8);
    }
  }
  FUN_142501770(&DAT_14c793290);
  return;
}



// FUNCTION 14253f480 Unwind@14253f480 body=35 status=ok
// SIG undefined Unwind@14253f480(void)

void Unwind_14253f480(void)

{
  FUN_144d8db2c(&DAT_14c7932e8);
  return;
}



// FUNCTION 14253f4b0 FUN_14253f4b0 body=816 status=ok
// SIG undefined FUN_14253f4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14253f4b0(longlong param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c793288) && (FUN_144b3d300(&DAT_14c793288), DAT_14c793288 == -1)) {
    _DAT_14c793278 = (undefined1  [16])0x0;
    _DAT_14c793268 = (undefined1  [16])0x0;
    _DAT_14c793258 = (undefined1  [16])0x0;
    _DAT_14c793248 = (undefined1  [16])0x0;
    _DAT_14c793238 = (undefined1  [16])0x0;
    _Mtx_init_in_situ(&DAT_14c793238,2);
    atexit((_func_5014 *)&LAB_14253f980);
    _Init_thread_footer(&DAT_14c793288);
  }
  FUN_142501320(&DAT_14c793238);
  lVar5 = FUN_142503070(*(undefined8 *)(param_1 + 8),param_2);
  do {
    if (lVar5 == 0) {
      if (*param_4 < 1) {
        lVar5 = *(longlong *)(param_1 + 0x30);
        lVar6 = (**(code **)(*param_2 + 0x18))(param_2);
        if (lVar6 == 0) {
          *param_4 = 7;
        }
        else {
          *(undefined4 *)(lVar6 + 8) = 0;
          if (*(int *)(lVar5 + 8) == 0) {
            *(undefined1 *)(lVar6 + 0xc) = 1;
            *(longlong *)(lVar5 + 0x10) = param_1;
            *(ulonglong *)(param_1 + 0x14) =
                 CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x14) + 1);
          }
          FUN_142502aa0(*(undefined8 *)(param_1 + 8),lVar6,lVar5,param_4);
          if (*param_4 < 1) {
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          }
        }
      }
      uVar7 = 0;
LAB_14253f6b1:
      FUN_142501400(&DAT_14c793238);
      return uVar7 & 0xffffffff;
    }
    lVar6 = *(longlong *)(lVar5 + 8);
    iVar3 = *(int *)(*(longlong *)(lVar5 + 0x10) + 8);
    if (lVar6 == 0) {
      if ((iVar3 != 0) || (*(longlong *)(param_1 + 0x30) != 0)) goto LAB_14253f6d4;
    }
    else {
      LOCK();
      piVar1 = (int *)(lVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      lVar4 = *(longlong *)(param_1 + 0x30);
      LOCK();
      piVar1 = (int *)(lVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      }
      if (iVar3 != 0 || lVar4 != lVar6) {
LAB_14253f6d4:
        *param_4 = *(int *)(*(longlong *)(lVar5 + 0x10) + 8);
        if (*param_3 != 0) {
          LOCK();
          piVar1 = (int *)(*param_3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
          }
        }
        lVar5 = *(longlong *)(lVar5 + 8);
        *param_3 = lVar5;
        uVar7 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
        if (lVar5 != 0) {
          LOCK();
          piVar1 = (int *)(lVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          if (iVar3 == 0) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          }
        }
        goto LAB_14253f6b1;
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c793288) && (FUN_144b3d300(&DAT_14c793288), DAT_14c793288 == -1)) {
      _DAT_14c793278 = ZEXT816(0);
      _DAT_14c793268 = ZEXT816(0);
      _DAT_14c793258 = ZEXT816(0);
      _DAT_14c793248 = ZEXT816(0);
      _DAT_14c793238 = ZEXT816(0);
      _Mtx_init_in_situ(&DAT_14c793238,2);
      atexit((_func_5014 *)&LAB_14253f980);
      _Init_thread_footer(&DAT_14c793288);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c7932e8) && (FUN_144b3d300(&DAT_14c7932e8), DAT_14c7932e8 == -1)) {
      FUN_1425014b0(&DAT_14c793290);
      atexit((_func_5014 *)&LAB_14253f990);
      _Init_thread_footer(&DAT_14c7932e8);
    }
    FUN_142501580(&DAT_14c793290,&DAT_14c793238);
    lVar5 = FUN_142503070(*(undefined8 *)(param_1 + 8),param_2);
  } while( true );
}



// FUNCTION 14253f7f0 Unwind@14253f7f0 body=64 status=ok
// SIG undefined Unwind@14253f7f0(void)

void Unwind_14253f7f0(void)

{
  FUN_142501400(&DAT_14c793238);
  return;
}



// FUNCTION 14253f830 Unwind@14253f830 body=64 status=ok
// SIG undefined Unwind@14253f830(void)

void Unwind_14253f830(void)

{
  FUN_144d8db2c(&DAT_14c7932e8);
  return;
}



// FUNCTION 14253f870 FUN_14253f870 body=145 status=ok
// SIG undefined FUN_14253f870(void)

void FUN_14253f870(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  int *param_5)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_14253f4b0();
  if (cVar1 == '\0') {
    if (0 < *param_5) {
      return;
    }
    lVar2 = (**(code **)(*param_2 + 0x28))(param_2,param_4,param_5);
    *param_3 = lVar2;
    if ((lVar2 == 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      *param_3 = *(longlong *)(param_1 + 0x30);
      FUN_142537c90();
    }
    FUN_14253f160(param_1,param_2,param_3,param_5);
  }
  if ((*param_3 != 0) && (*param_3 == *(longlong *)(param_1 + 0x30))) {
    FUN_142537ca0();
    *param_3 = 0;
  }
  return;
}



// FUNCTION 14253f910 FUN_14253f910 body=38 status=ok
// SIG undefined FUN_14253f910(void)

undefined8 FUN_14253f910(undefined8 param_1,int param_2)

{
  FUN_14253f030();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14253f940 FUN_14253f940 body=52 status=ok
// SIG undefined FUN_14253f940(void)

undefined8 FUN_14253f940(void)

{
  LOCK();
  DAT_14c793230 = 0;
  UNLOCK();
  if (DAT_14c793228 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c793228)(DAT_14c793228,1);
    DAT_14c793228 = (undefined8 *)0x0;
  }
  return 1;
}



// FUNCTION 14253f9a0 FUN_14253f9a0 body=8 status=ok
// SIG undefined FUN_14253f9a0(void)

undefined * FUN_14253f9a0(void)

{
  return &DAT_14c7932ec;
}



// FUNCTION 14253f9b0 FUN_14253f9b0 body=887 status=ok
// SIG undefined FUN_14253f9b0(void)

undefined8 * FUN_14253f9b0(undefined8 *param_1,longlong param_2,undefined1 param_3,int *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  short asStack_26e [3];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
  undefined6 local_1ce;
  undefined2 uStack_1c8;
  ulonglong uStack_1c6;
  WCHAR local_188 [86];
  char acStack_db [3];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  LPWSTR local_80;
  WCHAR *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58;
  int local_4c;
  undefined8 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1424babf0();
  *param_1 = icu_64::Win32NumberFormat::vftable;
  *(undefined1 *)(param_1 + 0x2e) = param_3;
  local_60 = param_1 + 0x2f;
  local_48 = param_1;
  FUN_1424a3c00();
  local_48[0x4c] = 0;
  *(undefined1 *)(local_48 + 0x4d) = 0;
  local_48[0x4e] = 0;
  puVar7 = local_48;
  if (*param_4 < 1) {
    uVar1 = FUN_14112c0b0(param_2);
    puVar7 = local_48;
    *(undefined4 *)(local_48 + 0x4b) = uVar1;
    local_4c = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_8b = 0;
    uStack_88 = 0;
    FUN_142505a90(*(undefined8 *)(param_2 + 0x28),&local_d8,0x55,0,&local_4c);
    if (local_4c < 1) {
      uStack_1c8 = 0;
      uStack_1c6 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      local_1ce = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_268 = 0;
      uStack_260 = 0;
      lVar4 = 3;
      while( true ) {
        if (acStack_db[lVar4] == '\0') break;
        asStack_26e[lVar4] = (short)acStack_db[lVar4];
        if (lVar4 == 0x57) goto LAB_14253fb7b;
        if (acStack_db[lVar4 + 1] == '\0') {
          lVar4 = lVar4 + -2;
LAB_14253fb63:
          uVar2 = (uint)lVar4;
          goto joined_r0x00014253fb79;
        }
        asStack_26e[lVar4 + 1] = (short)acStack_db[lVar4 + 1];
        if (acStack_db[lVar4 + 2] == '\0') {
          uVar2 = (int)lVar4 - 1;
          goto joined_r0x00014253fb79;
        }
        asStack_26e[lVar4 + 2] = (short)acStack_db[lVar4 + 2];
        if (*(char *)((longlong)&local_d8 + lVar4) == '\0') goto LAB_14253fb63;
        *(short *)((longlong)&local_268 + lVar4 * 2) = (short)*(char *)((longlong)&local_d8 + lVar4)
        ;
        lVar4 = lVar4 + 4;
      }
      uVar2 = (int)lVar4 - 3;
joined_r0x00014253fb79:
      if (uVar2 < 0x54) {
        *(undefined2 *)((longlong)&local_268 + (ulonglong)uVar2 * 2) = 0;
      }
      else {
LAB_14253fb7b:
        uStack_1c6 = uStack_1c6 & 0xffffffffffff;
      }
      local_188[0x50] = 0;
      local_188[0x51] = L'\0';
      local_188[0x52] = L'\0';
      local_188[0x53] = L'\0';
      local_188[0x54] = L'\0';
      local_188[0x48] = L'\0';
      local_188[0x49] = L'\0';
      local_188[0x4a] = L'\0';
      local_188[0x4b] = L'\0';
      local_188[0x4c] = 0;
      local_188[0x4d] = L'\0';
      local_188[0x4e] = L'\0';
      local_188[0x4f] = L'\0';
      local_188[0x40] = L'\0';
      local_188[0x41] = L'\0';
      local_188[0x42] = L'\0';
      local_188[0x43] = L'\0';
      local_188[0x44] = L'\0';
      local_188[0x45] = L'\0';
      local_188[0x46] = L'\0';
      local_188[0x47] = L'\0';
      local_188[0x38] = L'\0';
      local_188[0x39] = L'\0';
      local_188[0x3a] = L'\0';
      local_188[0x3b] = L'\0';
      local_188[0x3c] = L'\0';
      local_188[0x3d] = L'\0';
      local_188[0x3e] = L'\0';
      local_188[0x3f] = L'\0';
      local_188[0x30] = L'\0';
      local_188[0x31] = L'\0';
      local_188[0x32] = L'\0';
      local_188[0x33] = L'\0';
      local_188[0x34] = L'\0';
      local_188[0x35] = L'\0';
      local_188[0x36] = L'\0';
      local_188[0x37] = L'\0';
      local_188[0x28] = L'\0';
      local_188[0x29] = L'\0';
      local_188[0x2a] = L'\0';
      local_188[0x2b] = L'\0';
      local_188[0x2c] = L'\0';
      local_188[0x2d] = L'\0';
      local_188[0x2e] = L'\0';
      local_188[0x2f] = L'\0';
      local_188[0x20] = L'\0';
      local_188[0x21] = L'\0';
      local_188[0x22] = L'\0';
      local_188[0x23] = L'\0';
      local_188[0x24] = L'\0';
      local_188[0x25] = L'\0';
      local_188[0x26] = L'\0';
      local_188[0x27] = L'\0';
      local_188[0x18] = L'\0';
      local_188[0x19] = L'\0';
      local_188[0x1a] = L'\0';
      local_188[0x1b] = L'\0';
      local_188[0x1c] = L'\0';
      local_188[0x1d] = L'\0';
      local_188[0x1e] = L'\0';
      local_188[0x1f] = L'\0';
      local_188[0x10] = L'\0';
      local_188[0x11] = L'\0';
      local_188[0x12] = L'\0';
      local_188[0x13] = L'\0';
      local_188[0x14] = L'\0';
      local_188[0x15] = L'\0';
      local_188[0x16] = L'\0';
      local_188[0x17] = L'\0';
      local_188[8] = L'\0';
      local_188[9] = L'\0';
      local_188[10] = L'\0';
      local_188[0xb] = L'\0';
      local_188[0xc] = L'\0';
      local_188[0xd] = L'\0';
      local_188[0xe] = L'\0';
      local_188[0xf] = L'\0';
      local_188[0] = L'\0';
      local_188[1] = L'\0';
      local_188[2] = L'\0';
      local_188[3] = L'\0';
      local_188[4] = L'\0';
      local_188[5] = L'\0';
      local_188[6] = L'\0';
      local_188[7] = L'\0';
      iVar3 = ResolveLocaleName((LPCWSTR)&local_268,local_188,0x55);
      if (0 < iVar3) {
        lVar4 = thunk_FUN_1424da030(0x40);
        if (lVar4 != 0) {
          local_80 = local_188;
          local_58 = lVar4;
          FUN_1424a6c90(lVar4,local_188);
          local_70 = local_188;
          lVar4 = local_58;
          puVar7 = local_48;
        }
        puVar7[0x4e] = lVar4;
      }
    }
    local_d8 = local_d8 & 0xffffffff00000000;
    iVar3 = thunk_FUN_14258d380(*(undefined4 *)(puVar7 + 0x4b),local_188,0x9c,&local_d8);
    if ((int)local_d8 < 1) {
      *(undefined1 *)((longlong)local_188 + (longlong)iVar3) = 0;
      FUN_1412ae150(&local_268,local_188,0,0,0);
      FUN_1424a3e60(local_60,&local_268);
      FUN_1414b3f60(&local_268);
      puVar7 = local_48;
    }
    if (puVar7[0x4e] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1424a8e50();
      puVar7 = local_48;
      local_68 = uVar5;
    }
    uVar6 = FUN_1424da030(0x30);
    puVar7[0x4c] = uVar6;
    if (*(char *)(puVar7 + 0x2e) == '\0') {
      FUN_14253ff70(uVar6,uVar5);
    }
    else {
      FUN_14253fe00(uVar6,uVar5);
    }
  }
  return puVar7;
}



// FUNCTION 14253fd30 Unwind@14253fd30 body=55 status=ok
// SIG undefined Unwind@14253fd30(void)

void Unwind_14253fd30(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x238));
  return;
}



// FUNCTION 14253fd70 Unwind@14253fd70 body=55 status=ok
// SIG undefined Unwind@14253fd70(void)

void Unwind_14253fd70(undefined8 param_1,longlong param_2)

{
  FUN_1424bac40(*(undefined8 *)(param_2 + 0x250));
  return;
}



// FUNCTION 14253fdb0 Unwind@14253fdb0 body=69 status=ok
// SIG undefined Unwind@14253fdb0(void)

void Unwind_14253fdb0(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x220) = param_2 + 0x110;
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x240));
  return;
}



// FUNCTION 14253fe00 FUN_14253fe00 body=330 status=ok
// SIG undefined FUN_14253fe00(void)

void FUN_14253fe00(LPWSTR param_1,LPCWSTR param_2)

{
  int iVar1;
  LPWSTR pWVar2;
  int iVar3;
  WCHAR *pWVar4;
  undefined1 auStack_58 [32];
  WCHAR local_38;
  WCHAR local_36 [11];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  GetLocaleInfoEx(param_2,0x20000019,param_1,4);
  GetLocaleInfoEx(param_2,0x20000012,param_1 + 2,4);
  GetLocaleInfoEx(param_2,0x18,&local_38,0x14);
  iVar1 = 0;
  if (local_38 != L'\0') {
    pWVar4 = local_36;
    do {
      if ((ushort)(local_38 + L'ￏ') < 8) {
        iVar1 = (uint)(ushort)local_38 + iVar1 * 10 + -0x30;
      }
      else if (local_38 != L';') {
        iVar3 = iVar1 * 10;
        if (local_38 == L'0') {
          iVar3 = iVar1;
        }
        goto LAB_14253febd;
      }
      local_38 = *pWVar4;
      pWVar4 = pWVar4 + 1;
    } while (local_38 != L'\0');
  }
  iVar3 = iVar1 * 10;
LAB_14253febd:
  *(int *)(param_1 + 4) = iVar3;
  pWVar2 = (LPWSTR)FUN_1424da030(0xc);
  *(LPWSTR *)(param_1 + 8) = pWVar2;
  GetLocaleInfoEx(param_2,0x16,pWVar2,6);
  pWVar2 = (LPWSTR)FUN_1424da030(0xc);
  *(LPWSTR *)(param_1 + 0xc) = pWVar2;
  GetLocaleInfoEx(param_2,0x17,pWVar2,6);
  GetLocaleInfoEx(param_2,0x2000001c,param_1 + 0x10,4);
  GetLocaleInfoEx(param_2,0x2000001b,param_1 + 0x12,4);
  pWVar2 = (LPWSTR)FUN_1424da030(0x10);
  *(LPWSTR *)(param_1 + 0x14) = pWVar2;
  GetLocaleInfoEx(param_2,0x14,pWVar2,8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14253ff70 FUN_14253ff70 body=280 status=ok
// SIG undefined FUN_14253ff70(void)

void FUN_14253ff70(LPWSTR param_1,LPCWSTR param_2)

{
  int iVar1;
  LPWSTR pWVar2;
  int iVar3;
  WCHAR *pWVar4;
  undefined1 auStack_58 [32];
  WCHAR local_38;
  WCHAR local_36 [11];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  GetLocaleInfoEx(param_2,0x20000011,param_1,4);
  GetLocaleInfoEx(param_2,0x20000012,param_1 + 2,4);
  GetLocaleInfoEx(param_2,0x10,&local_38,10);
  iVar1 = 0;
  if (local_38 != L'\0') {
    pWVar4 = local_36;
    do {
      if ((ushort)(local_38 + L'ￏ') < 8) {
        iVar1 = (uint)(ushort)local_38 + iVar1 * 10 + -0x30;
      }
      else if (local_38 != L';') {
        iVar3 = iVar1 * 10;
        if (local_38 == L'0') {
          iVar3 = iVar1;
        }
        goto LAB_14254002d;
      }
      local_38 = *pWVar4;
      pWVar4 = pWVar4 + 1;
    } while (local_38 != L'\0');
  }
  iVar3 = iVar1 * 10;
LAB_14254002d:
  *(int *)(param_1 + 4) = iVar3;
  pWVar2 = (LPWSTR)FUN_1424da030(0xc);
  *(LPWSTR *)(param_1 + 8) = pWVar2;
  GetLocaleInfoEx(param_2,0xe,pWVar2,6);
  pWVar2 = (LPWSTR)FUN_1424da030(0xc);
  *(LPWSTR *)(param_1 + 0xc) = pWVar2;
  GetLocaleInfoEx(param_2,0xf,pWVar2,6);
  GetLocaleInfoEx(param_2,0x20001010,param_1 + 0x10,4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1425400a0 FUN_1425400a0 body=124 status=ok
// SIG undefined FUN_1425400a0(void)

undefined8 * FUN_1425400a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_1424bac50();
  *param_1 = icu_64::Win32NumberFormat::vftable;
  FUN_1424a3c00(param_1 + 0x2f);
  puVar1 = (undefined8 *)FUN_1424da030(0x30);
  param_1[0x4c] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  FUN_142540180(param_1,param_2);
  return param_1;
}



// FUNCTION 142540120 Unwind@142540120 body=34 status=ok
// SIG undefined Unwind@142540120(void)

void Unwind_142540120(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142540150 Unwind@142540150 body=34 status=ok
// SIG undefined Unwind@142540150(void)

void Unwind_142540150(undefined8 param_1,longlong param_2)

{
  FUN_1424bac40(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142540180 FUN_142540180 body=294 status=ok
// SIG undefined FUN_142540180(void)

longlong FUN_142540180(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1424bad60();
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  FUN_1424a3d10(param_1 + 0x178,param_2 + 0x178);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x268);
  if (*(longlong *)(param_2 + 0x270) != 0) {
    lVar1 = thunk_FUN_1424da030(0x40);
    if (lVar1 != 0) {
      FUN_1424a6be0(lVar1,*(undefined8 *)(param_2 + 0x270));
      *(longlong *)(param_1 + 0x270) = lVar1;
      uVar2 = FUN_1424a8e50();
      goto LAB_14254022b;
    }
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  uVar2 = 0;
LAB_14254022b:
  lVar1 = *(longlong *)(param_1 + 0x260);
  if (*(char *)(param_1 + 0x170) == '\0') {
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_1424da110(*(undefined8 *)(lVar1 + 0x18));
      FUN_1424da110(*(undefined8 *)(lVar1 + 0x10));
      uVar3 = *(undefined8 *)(param_1 + 0x260);
    }
    FUN_14253ff70(uVar3,uVar2);
  }
  else {
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_1424da110(*(undefined8 *)(lVar1 + 0x28));
      FUN_1424da110(*(undefined8 *)(lVar1 + 0x18));
      FUN_1424da110(*(undefined8 *)(lVar1 + 0x10));
      uVar3 = *(undefined8 *)(param_1 + 0x260);
    }
    FUN_14253fe00(uVar3,uVar2);
  }
  return param_1;
}



// FUNCTION 1425402b0 Unwind@1425402b0 body=36 status=ok
// SIG undefined Unwind@1425402b0(void)

void Unwind_1425402b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425402e0 FUN_1425402e0 body=127 status=ok
// SIG undefined FUN_1425402e0(void)

void FUN_1425402e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = icu_64::Win32NumberFormat::vftable;
  lVar1 = param_1[0x4c];
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x2e) != '\0') {
      FUN_1424da110(*(undefined8 *)(lVar1 + 0x28));
    }
    FUN_1424da110(*(undefined8 *)(lVar1 + 0x18));
    FUN_1424da110(*(undefined8 *)(lVar1 + 0x10));
    FUN_1424da110(param_1[0x4c]);
  }
  puVar2 = (undefined8 *)param_1[0x4e];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1414b3f60(param_1 + 0x2f);
  FUN_1424bac40(param_1);
  return;
}



// FUNCTION 142540360 FUN_142540360 body=64 status=ok
// SIG undefined FUN_142540360(void)

longlong FUN_142540360(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x278);
  if (lVar1 != 0) {
    FUN_1425400a0(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 1425403a0 Unwind@1425403a0 body=32 status=ok
// SIG undefined Unwind@1425403a0(void)

void Unwind_1425403a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425403c0 FUN_1425403c0 body=66 status=ok
// SIG undefined FUN_1425403c0(void)

undefined8 FUN_1425403c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1424bbb90();
  FUN_142540410(param_1,uVar1,param_3,L"%.16f",param_2);
  return param_3;
}



// FUNCTION 142540410 FUN_142540410 body=614 status=ok
// SIG undefined FUN_142540410(void)

undefined8 FUN_142540410(longlong param_1,UINT param_2,undefined8 param_3,undefined8 param_4)

{
  UINT *pUVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  ulonglong *puVar6;
  WCHAR *pWVar7;
  LPCWSTR lpLocaleName;
  LPWSTR lpNumberStr;
  size_t sVar8;
  WCHAR WVar9;
  undefined1 *puVar10;
  undefined4 uVar12;
  ulonglong uVar11;
  WCHAR local_128 [36];
  undefined1 *local_e0;
  WCHAR local_d8 [32];
  CURRENCYFMTW local_98;
  LPCWSTR local_68;
  WCHAR *local_58;
  WCHAR *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_d8[0] = L'\0';
  puVar10 = &stack0x00000028;
  local_e0 = puVar10;
  puVar6 = (ulonglong *)FUN_144737586();
  __stdio_common_vswprintf(*puVar6 | 1,local_d8,0x20,param_4,0,puVar10);
  uVar12 = (undefined4)((ulonglong)puVar10 >> 0x20);
  WVar9 = local_d8[local_d8[0] == L'-'];
  if (WVar9 != L'\0') {
    pWVar7 = local_d8 + (ulonglong)(local_d8[0] == L'-') + 1;
    do {
      if ((ushort)(WVar9 + L'ￆ') < 0xfff6) {
        pWVar7[-1] = L'.';
        break;
      }
      WVar9 = *pWVar7;
      pWVar7 = pWVar7 + 1;
    } while (WVar9 != L'\0');
  }
  pUVar1 = *(UINT **)(param_1 + 0x260);
  local_98.NumDigits = *pUVar1;
  local_98.LeadingZero = pUVar1[1];
  local_98.Grouping = pUVar1[2];
  local_98._12_4_ = pUVar1[3];
  local_98.lpDecimalSep._0_4_ = pUVar1[4];
  local_98.lpDecimalSep._4_4_ = pUVar1[5];
  local_98.lpThousandSep._0_4_ = pUVar1[6];
  local_98.lpThousandSep._4_4_ = pUVar1[7];
  local_98.NegativeOrder = pUVar1[8];
  local_98.PositiveOrder = pUVar1[9];
  local_98.lpCurrencySymbol._0_4_ = pUVar1[10];
  local_98.lpCurrencySymbol._4_4_ = pUVar1[0xb];
  local_128[0] = L'\0';
  if (*(longlong *)(param_1 + 0x270) == 0) {
    lpLocaleName = (LPCWSTR)0x0;
  }
  else {
    lpLocaleName = (LPCWSTR)FUN_1424a8e50();
    local_68 = lpLocaleName;
  }
  if (*(char *)(param_1 + 0x170) == '\0') {
    if (*(char *)(param_1 + 0x268) != '\0') {
      local_98.NumDigits = param_2;
    }
    cVar3 = FUN_1424bbad0(param_1);
    if (cVar3 == '\0') {
      local_98.Grouping = 0;
    }
    lpNumberStr = local_128;
    uVar11 = CONCAT44(uVar12,0x20);
    iVar4 = GetNumberFormatEx(lpLocaleName,0,local_d8,(NUMBERFMTW *)&local_98,lpNumberStr,0x20);
    if (iVar4 != 0) goto LAB_142540622;
    DVar5 = GetLastError();
    pcVar2 = GetNumberFormatEx_exref;
  }
  else {
    if (*(char *)(param_1 + 0x268) != '\0') {
      local_98.NumDigits = param_2;
    }
    cVar3 = FUN_1424bbad0(param_1);
    if (cVar3 == '\0') {
      local_98.Grouping = 0;
    }
    lpNumberStr = local_128;
    uVar11 = CONCAT44(uVar12,0x20);
    iVar4 = GetCurrencyFormatEx(lpLocaleName,0,local_d8,&local_98,lpNumberStr,0x20);
    if (iVar4 != 0) goto LAB_142540622;
    DVar5 = GetLastError();
    pcVar2 = GetCurrencyFormatEx_exref;
  }
  lpNumberStr = local_128;
  if (DVar5 == 0x7a) {
    uVar11 = uVar11 & 0xffffffff00000000;
    iVar4 = (*pcVar2)(lpLocaleName,0,local_d8,&local_98,0,uVar11);
    uVar12 = (undefined4)(uVar11 >> 0x20);
    lpNumberStr = (LPWSTR)FUN_1424da030((longlong)iVar4 * 2);
    *lpNumberStr = L'\0';
    (*pcVar2)(lpLocaleName,0,local_d8,&local_98,lpNumberStr,CONCAT44(uVar12,iVar4));
  }
LAB_142540622:
  local_50 = lpNumberStr;
  sVar8 = wcslen(lpNumberStr);
  FUN_1424a6cf0(param_3,lpNumberStr,0,sVar8 & 0xffffffff);
  local_58 = local_50;
  if (local_50 != local_128) {
    FUN_1424da110();
  }
  return param_3;
}



// FUNCTION 142540680 Unwind@142540680 body=56 status=ok
// SIG undefined Unwind@142540680(void)

void Unwind_142540680(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_2 + 0x108);
  return;
}



// FUNCTION 1425406c0 FUN_1425406c0 body=55 status=ok
// SIG undefined FUN_1425406c0(void)

undefined8 FUN_1425406c0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1424bbbe0();
  FUN_142540410(param_1,uVar1,param_3,L"%I32d",param_2);
  return param_3;
}



// FUNCTION 142540700 FUN_142540700 body=57 status=ok
// SIG undefined FUN_142540700(void)

undefined8 FUN_142540700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1424bbbe0();
  FUN_142540410(param_1,uVar1,param_3,L"%I64d",param_2);
  return param_3;
}



// FUNCTION 142540740 FUN_142540740 body=132 status=ok
// SIG undefined FUN_142540740(void)

void FUN_142540740(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  if (*(char *)(param_1 + 0x170) == '\0') {
    plVar1 = (longlong *)FUN_140236d20(param_1 + 0x178,&local_2c);
  }
  else {
    plVar1 = (longlong *)FUN_1424bb8e0(param_1 + 0x178,&local_2c);
  }
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_2,param_3,param_4);
  (**(code **)*plVar1)(plVar1,1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1425407d0 FUN_1425407d0 body=12 status=ok
// SIG undefined FUN_1425407d0(void)

void FUN_1425407d0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x268) = 1;
  FUN_1424bbba0();
  return;
}



// FUNCTION 1425407e0 FUN_1425407e0 body=12 status=ok
// SIG undefined FUN_1425407e0(void)

void FUN_1425407e0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x268) = 1;
  FUN_1424bbbf0();
  return;
}



// FUNCTION 1425407f0 FUN_1425407f0 body=38 status=ok
// SIG undefined FUN_1425407f0(void)

undefined8 FUN_1425407f0(undefined8 param_1,int param_2)

{
  FUN_1425402e0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142540820 FUN_142540820 body=8 status=ok
// SIG undefined FUN_142540820(void)

undefined * FUN_142540820(void)

{
  return &DAT_14c7932f0;
}



// FUNCTION 142540830 FUN_142540830 body=143 status=ok
// SIG undefined FUN_142540830(void)

undefined8 * FUN_142540830(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_68 [64];
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_1 = icu_64::NumberingSystem::vftable;
  local_28 = param_1 + 1;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  *(undefined4 *)(param_1 + 9) = 10;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  local_20 = param_1;
  FUN_1424a7060(local_68,1,L"0123456789",0xffffffff);
  FUN_1424a7600(local_28,local_68,0);
  puVar1 = local_20;
  *(undefined1 *)((longlong)local_20 + 0x51) = 0;
  *(undefined4 *)((longlong)local_20 + 0x4d) = 0x6e74616c;
  FUN_140859a90(local_68);
  return puVar1;
}



// FUNCTION 1425408c0 Unwind@1425408c0 body=32 status=ok
// SIG undefined Unwind@1425408c0(void)

void Unwind_1425408c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425408e0 Unwind@1425408e0 body=41 status=ok
// SIG undefined Unwind@1425408e0(void)

void Unwind_1425408e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x60));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 142540910 FUN_142540910 body=100 status=ok
// SIG undefined FUN_142540910(void)

void FUN_142540910(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = icu_64::NumberingSystem::vftable;
  puVar1 = param_1 + 1;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  FUN_1424a7c80(puVar1,param_2 + 8,puVar1,param_4,puVar1,param_1,0xfffffffffffffffe);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x4e) = *(undefined8 *)(param_2 + 0x4e);
  param_1[9] = uVar2;
  return;
}



// FUNCTION 142540980 Unwind@142540980 body=41 status=ok
// SIG undefined Unwind@142540980(void)

void Unwind_142540980(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425409b0 FUN_1425409b0 body=195 status=ok
// SIG undefined FUN_1425409b0(void)

undefined8 * FUN_1425409b0(int param_1,char param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*param_4 < 1) {
    if ((param_1 < 2) ||
       ((param_2 == '\0' && (iVar1 = FUN_1424a8140(param_3,0,0x7fffffff), iVar1 != param_1)))) {
      *param_4 = 1;
      return (undefined8 *)0x0;
    }
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x58);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_142540830(puVar2);
      if (0 < *param_4) {
        (**(code **)*puVar2)(puVar2,1);
        return (undefined8 *)0x0;
      }
      *(int *)(puVar2 + 9) = param_1;
      FUN_1424a7600(puVar2 + 1,param_3,0);
      *(char *)((longlong)puVar2 + 0x4c) = param_2;
      *(undefined1 *)((longlong)puVar2 + 0x4d) = 0;
      return puVar2;
    }
    if (*param_4 < 1) {
      *param_4 = 7;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142540a80 Unwind@142540a80 body=40 status=ok
// SIG undefined Unwind@142540a80(void)

void Unwind_142540a80(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142540ab0 Unwind@142540ab0 body=45 status=ok
// SIG undefined Unwind@142540ab0(void)

void Unwind_142540ab0(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x20))(*(undefined8 **)(param_2 + 0x20),1);
  return;
}



// FUNCTION 142540ae0 FUN_142540ae0 body=684 status=ok
// SIG undefined FUN_142540ae0(void)

longlong FUN_142540ae0(longlong param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_b8;
  int local_b0;
  longlong local_58;
  uint local_50;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  if (0 < *param_2) {
    return 0;
  }
  local_50 = FUN_1424a5490(param_1,"numbers",&local_b8,0x60,param_2);
  if ((*param_2 < 1) && (*param_2 != -0x7c)) {
    if ((int)local_50 < 1) goto LAB_142540bb6;
    *(undefined1 *)((longlong)&local_b8 + (ulonglong)local_50) = 0;
    if (local_b8 != 0x746c7561666564) {
      iVar3 = (int)local_b8;
      if (local_b8._3_4_ != 0x657669 || iVar3 != 0x6974616e) {
        if ((local_b8 != 0x65636e616e6966) &&
           (local_b0 != 0x6c616e || local_b8 != 0x6f69746964617274)) goto LAB_142540c5e;
      }
    }
  }
  else {
    local_50 = 0;
    *param_2 = 0;
LAB_142540bb6:
    local_b8 = 0x746c7561666564;
  }
  local_4c[0] = 0;
  lVar4 = FUN_1424ebfe0(0,*(undefined8 *)(param_1 + 0x28),local_4c);
  lVar5 = FUN_1424ecc30(lVar4,"NumberElements",0,local_4c);
  if (local_4c[0] != 7) {
    local_4c[0] = 0;
    local_50 = 0;
    uVar6 = FUN_1424ec010(lVar5,&local_b8,&local_50,local_4c);
    if (local_4c[0] != 7) {
      do {
        if (local_50 - 1 < 0x5f) {
          FUN_14250ae10(uVar6,&local_b8);
          *(undefined1 *)((longlong)&local_b8 + (longlong)(int)local_50) = 0;
          bVar1 = true;
          bVar2 = true;
          goto LAB_142540c32;
        }
        iVar3 = (int)local_b8;
        if ((local_b8._3_4_ == 0x657669 && iVar3 == 0x6974616e) || (local_b8 == 0x65636e616e6966)) {
          local_b8 = 0x746c7561666564;
        }
        else {
          if (local_b0 != 0x6c616e || local_b8 != 0x6f69746964617274) {
            bVar2 = false;
            bVar1 = true;
            goto LAB_142540c32;
          }
          local_b8 = CONCAT17(local_b8._7_1_,0x657669000000);
          local_b8 = CONCAT44(local_b8._4_4_,0x6974616e);
        }
        local_4c[0] = 0;
        local_50 = 0;
        uVar6 = FUN_1424ec010(lVar5,&local_b8,&local_50,local_4c);
      } while (local_4c[0] != 7);
    }
  }
  *param_2 = 7;
  bVar2 = true;
  bVar1 = false;
LAB_142540c32:
  if (lVar5 != 0) {
    FUN_1424ea9f0(lVar5);
  }
  if (lVar4 != 0) {
    FUN_1424ea9f0(lVar4);
  }
  if (bVar1) {
    if (bVar2) {
LAB_142540c5e:
      lVar4 = FUN_142540de0(&local_b8,param_2);
      return lVar4;
    }
    *param_2 = -0x80;
    local_58 = thunk_FUN_1424da030(0x58);
    if (local_58 != 0) {
      FUN_142540830(local_58);
      return local_58;
    }
    *param_2 = 7;
  }
  return 0;
}



// FUNCTION 142540da0 Unwind@142540da0 body=55 status=ok
// SIG undefined Unwind@142540da0(void)

void Unwind_142540da0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 142540de0 FUN_142540de0 body=488 status=ok
// SIG undefined FUN_142540de0(void)

undefined8 * FUN_142540de0(char *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char *_Dest;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined **local_98;
  undefined2 local_90;
  undefined4 local_54;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = FUN_1424edad0(0,"numberingSystems",param_2);
  local_48 = FUN_1424ecc30(local_40,"numberingSystems",0,param_2);
  local_50 = FUN_1424ecc30(local_48,param_1,0,param_2);
  local_98 = &PTR_FUN_149e18960;
  local_90 = 2;
  local_54 = 0;
  uVar3 = FUN_1424ecf00(local_50,&DAT_1499df6d1,&local_54,param_2);
  if (*param_2 < 1) {
    FUN_1424a8f10(&local_98,1,uVar3,local_54);
  }
  else {
    FUN_1424a7130(&local_98);
  }
  lVar6 = local_48;
  lVar7 = local_50;
  FUN_1424ecc30(local_50,"radix",local_48,param_2);
  uVar1 = FUN_1424eaef0(lVar6,param_2);
  FUN_1424ecc30(lVar7,"algorithmic",lVar6,param_2);
  iVar2 = FUN_1424eaef0(lVar6,param_2);
  if (*param_2 < 1) {
    puVar4 = (undefined8 *)FUN_1425409b0(uVar1,iVar2 == 1,&local_98,param_2);
    lVar5 = local_40;
    lVar6 = local_48;
    lVar7 = local_50;
    if ((puVar4 == (undefined8 *)0x0) && (*param_2 < 1)) {
      *param_2 = 7;
      puVar4 = (undefined8 *)0x0;
    }
    else if (*param_2 < 1) {
      _Dest = (char *)((longlong)puVar4 + 0x4d);
      if (param_1 != (char *)0x0) {
        strncpy(_Dest,param_1,8);
        _Dest = (char *)((longlong)puVar4 + 0x55);
      }
      *_Dest = '\0';
      lVar5 = local_40;
      lVar6 = local_48;
    }
    else {
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      puVar4 = (undefined8 *)0x0;
    }
  }
  else {
    if (*param_2 != 7) {
      *param_2 = 0x10;
    }
    puVar4 = (undefined8 *)0x0;
    lVar5 = local_40;
  }
  FUN_140859a90(&local_98);
  if (lVar7 != 0) {
    FUN_1424ea9f0(lVar7);
  }
  if (lVar6 != 0) {
    FUN_1424ea9f0(lVar6);
  }
  if (lVar5 != 0) {
    FUN_1424ea9f0(lVar5);
  }
  return puVar4;
}



// FUNCTION 142540fd0 Unwind@142540fd0 body=47 status=ok
// SIG undefined Unwind@142540fd0(void)

void Unwind_142540fd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142541000 Unwind@142541000 body=86 status=ok
// SIG undefined Unwind@142541000(void)

void Unwind_142541000(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x68));
  }
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x70));
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}



// FUNCTION 142541060 Unwind@142541060 body=47 status=ok
// SIG undefined Unwind@142541060(void)

void Unwind_142541060(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142541090 FUN_142541090 body=4 status=ok
// SIG undefined FUN_142541090(void)

undefined4 FUN_142541090(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


