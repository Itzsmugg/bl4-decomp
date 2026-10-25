// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14613a652 FUN_14613a652 body=354 status=ok
// SIG undefined FUN_14613a652(void)

undefined8 * FUN_14613a652(undefined8 *param_1)

{
  FUN_140d2f8ee();
  *param_1 = &PTR_FUN_14bd7ed10;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 1;
  *(undefined1 *)((longlong)param_1 + 0xda) = 5;
  param_1[0x1c] = 0x4059000000000000;
  *(undefined1 *)(param_1 + 0x1d) = 5;
  param_1[0x1e] = 0x4059000000000000;
  *(undefined4 *)(param_1 + 0x1f) = 1;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0x1f01;
  param_1[0x20] = 0x4009000000000000;
  *(undefined2 *)(param_1 + 0x21) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x10a) = 1;
  param_1[0x22] = 0x3f847ae147ae147b;
  *(undefined2 *)(param_1 + 0x23) = 1;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  FUN_140056680(param_1 + 0x24,L"Z to start/complete corner mode.");
  FUN_140056680(param_1 + 0x26,L"E/Q to pull/push, or use Ctrl+drag.");
  FUN_140056680(param_1 + 0x28,L"Ctrl + E/Q to increase/decrease grid size.");
  FUN_140056680(param_1 + 0x2a,
                L"Middle mouse drag to slide selection in plane. Shift + E/Q to shift selection back/forward."
               );
  FUN_140056680(param_1 + 0x2c,L"T to flip the selection.");
  FUN_140056680(param_1 + 0x2e,L"R to show/hide grid gizmo.");
  FUN_140056680(param_1 + 0x30,
                L"Ctrl + middle click to quick-reposition the gizmo while keeping it on grid.");
  FUN_140056680(param_1 + 0x32,
                L"While dragging gizmo handles, hold Ctrl to align to items in scene (constrained to the moved axes)."
               );
  *(undefined2 *)(param_1 + 0x34) = 0x100;
  return param_1;
}



// FUNCTION 14613a7b4 FUN_14613a7b4 body=1567 status=ok
// SIG undefined FUN_14613a7b4(void)

void FUN_14613a7b4(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong **pplVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_188 [36];
  undefined4 local_164;
  longlong local_160 [2];
  double local_150;
  double local_148;
  longlong local_140 [2];
  undefined1 local_12c [4];
  undefined4 *local_128;
  longlong *local_120 [8];
  longlong **local_e0;
  longlong local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cadc148) && (FUN_144b3d300(&DAT_14cadc148), DAT_14cadc148 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cadc140 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.SecondaryScreenPercentage.GameViewport",1);
      _Init_thread_footer(&DAT_14cadc148);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cadc158) && (FUN_144b3d300(&DAT_14cadc158), DAT_14cadc158 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cadc150 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DynamicRes.MinScreenPercentage",1);
      _Init_thread_footer(&DAT_14cadc158);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cadc168) && (FUN_144b3d300(&DAT_14cadc168), DAT_14cadc168 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cadc160 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DynamicRes.MaxScreenPercentage",1);
      _Init_thread_footer(&DAT_14cadc168);
    }
    if (DAT_14cadc140 == (longlong *)0x0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = (float)(**(code **)(*DAT_14cadc140 + 0xb8))();
    }
    if (DAT_14cadc150 != (longlong *)0x0) {
      (**(code **)(*DAT_14cadc150 + 0xb8))();
    }
    if (DAT_14cadc160 != (longlong *)0x0) {
      (**(code **)(*DAT_14cadc160 + 0xb8))();
    }
    fVar12 = 1.0;
    fVar9 = (float)(~-(uint)(0.0 < fVar9) & 0x3f800000 |
                   (uint)(fVar9 / 100.0) & -(uint)(0.0 < fVar9));
    FUN_140056680(local_140,&DAT_149dfb77a);
    if (DAT_14cb0d2b0 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1415e1712(&local_128);
      FUN_1415e18b4(DAT_14cb0d2b0,&local_128);
      if ((int)(uint)local_128 < 2) {
        fVar12 = (float)FUN_1415e17ee();
      }
      else {
        pplVar6 = local_e0;
        if (local_e0 == (longlong **)0x0) {
          pplVar6 = local_120;
        }
        fVar12 = *(float *)((longlong)pplVar6 + (longlong)DAT_14cad82fc * 4);
      }
      if ((uint)local_128 < 5) {
        FUN_14020fad6(local_140,(&PTR_u_Unsupported_14a915f40)[(uint)local_128]);
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      lVar1 = DAT_14cb0d2b0;
      if (local_e0 != (longlong **)0x0) {
        FUN_1400020a8();
        lVar1 = DAT_14cb0d2b0;
      }
    }
    FUN_14039c14e(*(undefined8 *)(lVar1 + 0xc20),&local_150);
    iVar4 = (int)ROUND(local_148 + local_148 + 0.5) >> 1;
    fVar10 = (float)iVar4;
    iVar2 = (int)ROUND(local_150 + local_150 + 0.5) >> 1;
    fVar11 = fVar12 * fVar10 * fVar9;
    iVar8 = -((int)ROUND(-0.5 - (fVar11 + fVar11)) >> 1);
    fVar11 = (float)iVar2;
    fVar12 = fVar12 * fVar11 * fVar9;
    iVar5 = -((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1);
    iVar3 = iVar8;
    iVar7 = iVar5;
    if (0.0 < fVar9) {
      fVar10 = fVar10 * fVar9;
      iVar3 = -((int)ROUND(-0.5 - (fVar10 + fVar10)) >> 1);
      fVar11 = fVar11 * fVar9;
      iVar7 = -((int)ROUND(-0.5 - (fVar11 + fVar11)) >> 1);
    }
    FUN_140002266(local_160,&DAT_149e063bc,iVar5);
    local_164 = 0x28;
    local_128 = &local_164;
    local_120[0] = local_160;
    FUN_1413464b2(param_1,local_12c,&local_128,0);
    if (local_160[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140002266(local_160,&DAT_149e063bc,iVar8);
    local_164 = 0x29;
    local_128 = &local_164;
    local_120[0] = local_160;
    FUN_1413464b2(param_1,local_12c,&local_128,0);
    if (local_160[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140002266(local_160,&DAT_149e063bc,iVar7);
    local_164 = 0x2a;
    local_128 = &local_164;
    local_120[0] = local_160;
    FUN_1413464b2(param_1,local_12c,&local_128,0);
    if (local_160[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140002266(local_160,&DAT_149e063bc,iVar3);
    local_164 = 0x2b;
    local_128 = &local_164;
    local_120[0] = local_160;
    FUN_1413464b2(param_1,local_12c,&local_128,0);
    if (local_160[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140002266(local_160,&DAT_149e063bc,iVar2);
    local_164 = 0x2c;
    local_128 = &local_164;
    local_120[0] = local_160;
    FUN_1413464b2(param_1,local_12c,&local_128,0);
    if (local_160[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140002266(local_160,&DAT_149e063bc,iVar4);
    local_164 = 0x2d;
    local_128 = &local_164;
    local_120[0] = local_160;
    FUN_1413464b2(param_1,local_12c,&local_128,0);
    if (local_160[0] != 0) {
      FUN_1400020a8();
    }
    if (local_140[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14613add4 FUN_14613add4 body=136 status=ok
// SIG undefined FUN_14613add4(void)

undefined8 * FUN_14613add4(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b504e50;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[2] = &PTR_FUN_14b503650;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar1 = FUN_140d5712e();
  FUN_14613ae5e(lVar1 + 8,local_20,param_1 + 2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613ae5e FUN_14613ae5e body=228 status=ok
// SIG undefined FUN_14613ae5e(void)

undefined8 FUN_14613ae5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_FUN_14b506fb0;
  local_38[3] = param_3;
  local_38[4] = FUN_148ac18f4;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613af44 FUN_14613af44 body=38 status=ok
// SIG undefined FUN_14613af44(void)

undefined8 FUN_14613af44(undefined8 param_1,int param_2)

{
  FUN_14613af6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14613af6a FUN_14613af6a body=328 status=ok
// SIG undefined FUN_14613af6a(void)

void FUN_14613af6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a1270;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7ede(param_1 + 0x2f);
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x1f);
  FUN_145da3f4a(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145da3f75(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145da38cf(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 14613b0b2 FUN_14613b0b2 body=307 status=ok
// SIG undefined FUN_14613b0b2(void)

void FUN_14613b0b2(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) goto LAB_14613b15c;
  uVar3 = FUN_1400b465c();
  plVar4 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b990a80;
  plVar5 = plVar4 + 2;
  FUN_14613b286(plVar5,uVar3);
  local_38 = plVar5;
  local_30 = plVar4;
  FUN_14613b1e6(&local_38,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
LAB_14613b192:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014613b1bd:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x00014613b1bd;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_14613b192;
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_14613b15c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613b1e6 FUN_14613b1e6 body=159 status=ok
// SIG undefined FUN_14613b1e6(void)

void FUN_14613b1e6(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_14613b223;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_14613b223;
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
LAB_14613b223:
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
                    /* WARNING: Could not recover jumptable at 0x00014613b281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14613b286 FUN_14613b286 body=265 status=ok
// SIG undefined FUN_14613b286(void)

undefined8 * FUN_14613b286(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x192) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return param_1;
}



// FUNCTION 14613b39e FUN_14613b39e body=591 status=ok
// SIG undefined FUN_14613b39e(void)

void FUN_14613b39e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x49c8) = 0;
  if (*(longlong *)(param_1 + 0x49c0) != 0) {
    FUN_1400020a8();
  }
  FUN_14613b5ee(param_1 + 0x4980);
  *(undefined ***)(param_1 + 0x48c0) = &PTR_FUN_149eeb4b0;
  *(undefined ***)(param_1 + 0x48d0) = &PTR_FUN_149ed05f0;
  plVar3 = *(longlong **)(param_1 + 0x4970);
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
  FUN_140e9e952(param_1 + 0x45e0);
  *(undefined ***)(param_1 + 0x4530) = &PTR_FUN_149ed05f0;
  plVar3 = *(longlong **)(param_1 + 0x45d0);
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
  FUN_1415bbd66(param_1 + 0x39e0);
  FUN_141147850(param_1 + 0x34c0);
  FUN_14130c426(param_1 + 0x3080);
  FUN_1458e4f8c(param_1 + 0x2d90);
  FUN_140ffd8aa(param_1 + 0x2740);
  FUN_14594e52c(param_1 + 0x2510);
  *(undefined ***)(param_1 + 0x2450) = &PTR_FUN_149eeb4b0;
  *(undefined ***)(param_1 + 0x2460) = &PTR_FUN_149ed05f0;
  plVar3 = *(longlong **)(param_1 + 0x2500);
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
  *(undefined ***)(param_1 + 0x23a0) = &PTR_FUN_149ed05f0;
  plVar3 = *(longlong **)(param_1 + 0x2440);
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
  FUN_145924cf8(param_1 + 0x2220);
  FUN_140ffd7a4(param_1 + 0x15a0);
  FUN_1458a2df2(param_1 + 0x1310);
  *(undefined ***)(param_1 + 0xd70) = &PTR_FUN_149ee32c0;
  FUN_140ffd624(param_1 + 0xd80);
  *(undefined ***)(param_1 + 0xcc0) = &PTR_FUN_149ed05f0;
  plVar3 = *(longlong **)(param_1 + 0xd60);
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
  FUN_140ffdb16(param_1 + 0x370);
  FUN_140ffd6b6(param_1);
  return;
}



// FUNCTION 14613b5ee FUN_14613b5ee body=53 status=ok
// SIG undefined FUN_14613b5ee(void)

void FUN_14613b5ee(longlong *param_1)

{
  FUN_14613b624();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14613b624 FUN_14613b624 body=90 status=ok
// SIG undefined FUN_14613b624(void)

void FUN_14613b624(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 14613b67e FUN_14613b67e body=121 status=ok
// SIG undefined FUN_14613b67e(void)

void FUN_14613b67e(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    lVar2 = FUN_144a79464();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14613b6f8(lVar1 + 0x2a8,local_20,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613b6f8 FUN_14613b6f8 body=244 status=ok
// SIG undefined FUN_14613b6f8(void)

undefined8 FUN_14613b6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e62a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b3ef170;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1415cef28;
  FUN_141285884(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613b7ee FUN_14613b7ee body=603 status=ok
// SIG undefined FUN_14613b7ee(void)

void FUN_14613b7ee(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  double *pdVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  double dStack_110;
  undefined8 local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [28];
  char local_8c;
  longlong local_80;
  char local_58;
  ulonglong local_50;
  undefined1 *puVar14;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = 0;
  local_f4 = 1;
  local_f0 = 0x40000000;
  (**(code **)(*param_1 + 0xe38))(param_1,param_1);
  local_100 = FUN_145983792();
  if ((local_100 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_100);
  }
  uVar9 = FUN_1447210f0(param_1);
  puVar14 = local_b0;
  dVar10 = (double)FUN_14578a328(puVar14,uVar9,&local_100,5);
  uVar12 = SUB84(puVar14,0);
  if (local_8c != '\0') goto LAB_14613b97b;
  local_118 = 0;
  dStack_110 = 0.0;
  local_108 = 0;
  lVar1 = *(longlong *)(local_80 + 0x1c8);
  if (lVar1 == 0) {
    dStack_110 = DAT_14c846500;
LAB_14613ba2d:
    local_d8 = (double)DAT_14c8464f0;
    local_e8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_e0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    dVar4 = *(double *)(lVar1 + 0x240);
    dVar5 = *(double *)(lVar1 + 0x248);
    dVar6 = *(double *)(lVar1 + 0x250);
    dVar7 = *(double *)(lVar1 + 600);
    pdVar11 = *(double **)(lVar1 + 0x228);
    local_e8 = dVar4;
    uStack_e0 = dVar5;
    local_d8 = dVar6;
    uStack_d0 = dVar7;
    if (pdVar11 == (double *)0x0) {
      uVar12 = 0x40;
      pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar11 = DAT_14c8463d0;
      pdVar11[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar11[2] = DAT_14c8463e0;
      pdVar11[3] = dVar10;
      dVar10 = DAT_14c846500;
      pdVar11[4] = DAT_14c8464f8;
      pdVar11[5] = dVar10;
      dVar10 = DAT_14c846508;
      pdVar11[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar11;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar11[1]);
    auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar11);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar11[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar10,0),auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar11[3]);
    auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar11[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar11[3]) >> 0x20);
    uVar13 = movmskpd(uVar12,auVar3);
    if ((uVar13 & 0x3fffffff) != 0 || iVar8 != 0) {
      *(undefined4 *)(pdVar11 + 2) = (undefined4)local_d8;
      *(undefined4 *)((longlong)pdVar11 + 0x14) = local_d8._4_4_;
      *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_d0._4_4_;
      *(undefined4 *)pdVar11 = (undefined4)local_e8;
      *(undefined4 *)((longlong)pdVar11 + 4) = local_e8._4_4_;
      *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_e0._4_4_;
      FUN_1448052ee(&local_e8,&local_c8);
      pdVar11[6] = local_b8;
      pdVar11[4] = local_c8;
      pdVar11[5] = dStack_c0;
    }
    dStack_110 = pdVar11[5];
    lVar1 = *(longlong *)(local_80 + 0x1c8);
    if (lVar1 == 0) goto LAB_14613ba2d;
    local_e8 = *(double *)(lVar1 + 0x260);
    uStack_e0 = *(double *)(lVar1 + 0x268);
    local_d8 = *(double *)(lVar1 + 0x270);
  }
  (**(code **)(*param_1 + 0x690))(param_1,&local_e8,&local_118);
LAB_14613b97b:
  if (local_58 == '\x01') {
    FUN_14024445c(local_a8);
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613ba4a FUN_14613ba4a body=81 status=ok
// SIG undefined FUN_14613ba4a(void)

void FUN_14613ba4a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  FUN_14613ba9c();
  (**(code **)(*param_1 + 0xe98))(param_1,param_2);
  plVar1 = (longlong *)param_1[0xf4];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4d0))(plVar1,param_2,param_3,0,1);
  }
  return;
}



// FUNCTION 14613ba9c FUN_14613ba9c body=141 status=ok
// SIG undefined FUN_14613ba9c(void)

void FUN_14613ba9c(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = param_3[2];
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *(undefined8 *)(param_2 + 4);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_60 = 2;
  local_68 = 0;
  FUN_1407fd818(param_1,&local_58,&local_38,0);
  (**(code **)(*param_1 + 0x688))(param_1,param_3,1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613bb2a FUN_14613bb2a body=248 status=ok
// SIG undefined FUN_14613bb2a(void)

void FUN_14613bb2a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14613bc24(param_1 + -0x10);
  FUN_1415e1d28(param_1 + -0x10,param_2,param_1 + 0x54,
                CONCAT71((int7)((ulonglong)param_4 >> 8),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0xfe)) & 0xffffffffffffff01
               );
  if (*(char *)(param_1 + 0x50) == '\0') {
    local_28 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x128) + 0x10);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    uVar3 = FUN_14026fbac();
    local_50 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_58 = &local_48;
    local_48 = 0x3f800000;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
    FUN_14613bda0(uVar3,param_1 + 100,&local_28,param_1 + 0x18);
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613bc24 FUN_14613bc24 body=379 status=ok
// SIG undefined FUN_14613bc24(void)

void FUN_14613bc24(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_58 [44];
  undefined1 local_2c;
  char local_2b;
  char local_2a;
  undefined1 local_29;
  float local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0xb9) < 2) &&
     (lVar4 = *(longlong *)(param_1 + 0xa0), *(char *)(lVar4 + 0x14e) != '\x01')) {
    uVar3 = 1;
  }
  else {
    lVar4 = FUN_140032b16(0);
    bVar2 = FUN_1415e1d0a(*(undefined8 *)(lVar4 + 0x78),*(undefined8 *)(param_1 + 0xa0));
    uVar3 = (uint)bVar2;
    lVar4 = *(longlong *)(param_1 + 0xa0);
  }
  fVar6 = *(float *)(lVar4 + 0x214);
  if (15.99 <= fVar6) {
    fVar6 = 15.99;
  }
  if (fVar6 <= -16.0) {
    fVar6 = -16.0;
  }
  if ((*(uint *)(param_1 + 0xbc) != uVar3) || (1e-08 < ABS(*(float *)(param_1 + 0xc0) - fVar6))) {
    *(uint *)(param_1 + 0xbc) = uVar3;
    *(float *)(param_1 + 0xc0) = fVar6;
    local_2b = '\x02' - (*(char *)(lVar4 + 0x138) == '\x01');
    if (*(char *)(lVar4 + 0x138) == '\0') {
      local_2b = '\0';
    }
    local_2c = (undefined1)uVar3;
    local_2a = '\x02' - (*(char *)(lVar4 + 0x139) == '\x01');
    if (*(char *)(lVar4 + 0x139) == '\0') {
      local_2a = '\0';
    }
    local_29 = 0;
    local_24 = 0x7f7fffff00000000;
    local_14 = 0;
    local_1c = 0;
    local_28 = fVar6;
    lVar5 = FUN_1405d51a2();
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (lVar4 != lVar5) {
      *(longlong *)(param_1 + 0x28) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14613bda0 FUN_14613bda0 body=409 status=ok
// SIG undefined FUN_14613bda0(void)

void FUN_14613bda0(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_5c [4];
  undefined8 local_58;
  longlong **pplStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  local_90 = (longlong *)*param_3;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  local_88 = *param_4;
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
  }
  lStack_80 = *param_5;
  uStack_78 = param_5[1];
  uStack_70 = *param_6;
  uStack_68 = *(undefined4 *)(param_6 + 1);
  uStack_64 = *(undefined4 *)((longlong)param_6 + 0xc);
  local_58 = param_2;
  pplStack_50 = &local_90;
  FUN_14613bf92(param_1,local_5c,&local_58);
  FUN_14613bf3a(&local_90);
  plVar1 = (longlong *)(param_1 + 0x50);
  lVar2 = param_1 + 0x60;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  iVar3 = 0;
  pplStack_50 = (longlong **)lVar2;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x78);
  }
  uStack_70 = CONCAT44(uStack_3c,uStack_40);
  uStack_78._0_4_ = local_48;
  uStack_78._4_4_ = iStack_44;
  local_88._0_4_ = (undefined4)local_58;
  local_88._4_4_ = local_58._4_4_;
  lStack_80 = (longlong)pplStack_50;
  local_90 = plVar1;
  if ((iStack_44 != iVar3) || (pplStack_50 != (longlong **)lVar2)) {
    do {
      do {
        FUN_14006fee2(*(undefined8 *)(*local_90 + (longlong)uStack_78._4_4_ * 0x10),&DAT_14ca85100,0
                     );
        uStack_78._0_4_ = (uint)uStack_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (uStack_78._4_4_ != iVar3);
    } while ((lStack_80 != lVar2) || (local_90 != plVar1));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14613bf3a FUN_14613bf3a body=88 status=ok
// SIG undefined FUN_14613bf3a(void)

void FUN_14613bf3a(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 14613bf92 FUN_14613bf92 body=345 status=ok
// SIG undefined FUN_14613bf92(void)

undefined4 * FUN_14613bf92(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14613c170(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar6 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar6;
  lVar14 = *plVar1;
  local_40[2] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  lVar14 = plVar1[1];
  local_40[3] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  lVar14 = plVar1[2];
  uVar2 = *(undefined4 *)((longlong)plVar1 + 0x14);
  lVar7 = plVar1[3];
  uVar3 = *(undefined4 *)((longlong)plVar1 + 0x1c);
  uVar4 = *(undefined4 *)((longlong)plVar1 + 0x24);
  lVar8 = plVar1[5];
  uVar5 = *(undefined4 *)((longlong)plVar1 + 0x2c);
  *(int *)(local_40 + 6) = (int)plVar1[4];
  *(undefined4 *)((longlong)local_40 + 0x34) = uVar4;
  *(int *)(local_40 + 7) = (int)lVar8;
  *(undefined4 *)((longlong)local_40 + 0x3c) = uVar5;
  *(int *)(local_40 + 4) = (int)lVar14;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar2;
  *(int *)(local_40 + 5) = (int)lVar7;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar3;
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = FUN_1447addd0(local_40,0x10);
  cVar9 = FUN_14613c0ec(param_1,uVar10,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar9 == '\0') {
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
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      *(uint *)((longlong)local_40 + 0x44) = uVar10;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_14613c258(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613c0ec FUN_14613c0ec body=131 status=ok
// SIG undefined FUN_14613c0ec(void)

undefined8 FUN_14613c0ec(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar17 = FUN_147aacdd0(), iVar17 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x48);
    FUN_14613bf3a(puVar1 + 4);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    uVar14 = param_3[0xd];
    uVar15 = param_3[0xe];
    uVar16 = param_3[0xf];
    puVar1[0xc] = param_3[0xc];
    puVar1[0xd] = uVar14;
    puVar1[0xe] = uVar15;
    puVar1[0xf] = uVar16;
    puVar1[8] = uVar10;
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_145fe4c86(param_1,*param_4);
    *param_4 = iVar17;
    return 1;
  }
  return 0;
}



// FUNCTION 14613c170 FUN_14613c170 body=231 status=ok
// SIG undefined FUN_14613c170(void)

int * FUN_14613c170(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x48) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 14613c258 FUN_14613c258 body=452 status=ok
// SIG undefined FUN_14613c258(void)

void FUN_14613c258(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x48;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x44) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x40) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14613c41e FUN_14613c41e body=24 status=ok
// SIG undefined FUN_14613c41e(void)

void FUN_14613c41e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014613c432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14613c436 FUN_14613c436 body=38 status=ok
// SIG undefined FUN_14613c436(void)

undefined8 FUN_14613c436(undefined8 param_1,int param_2)

{
  FUN_14613c45c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14613c45c FUN_14613c45c body=277 status=ok
// SIG undefined FUN_14613c45c(void)

void FUN_14613c45c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b960420;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_14613c572(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14613c5a8(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14613c5de(param_1 + 0x10);
  param_1[9] = &PTR_FUN_14a1b6cf0;
  FUN_1449db362(param_1 + 0xe);
  FUN_144760f98(param_1 + 9);
  FUN_14613c613(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014613c56d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14613c572 FUN_14613c572 body=53 status=ok
// SIG undefined FUN_14613c572(void)

void FUN_14613c572(longlong *param_1)

{
  FUN_14613c660();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14613c5a8 FUN_14613c5a8 body=53 status=ok
// SIG undefined FUN_14613c5a8(void)

void FUN_14613c5a8(longlong *param_1)

{
  FUN_14613c7bc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14613c5de FUN_14613c5de body=53 status=ok
// SIG undefined FUN_14613c5de(void)

void FUN_14613c5de(longlong *param_1)

{
  FUN_14613c926();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14613c613 FUN_14613c613 body=77 status=ok
// SIG undefined FUN_14613c613(void)

void FUN_14613c613(longlong param_1,int param_2)

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



// FUNCTION 14613c660 FUN_14613c660 body=346 status=ok
// SIG undefined FUN_14613c660(void)

void FUN_14613c660(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14613c7bc FUN_14613c7bc body=361 status=ok
// SIG undefined FUN_14613c7bc(void)

void FUN_14613c7bc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_1414a8c77(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14613c926 FUN_14613c926 body=370 status=ok
// SIG undefined FUN_14613c926(void)

void FUN_14613c926(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar3 = *local_78;
      lVar5 = (longlong)iStack_5c;
      if (*(longlong *)(lVar3 + 0x10 + lVar5 * 0x28) != 0) {
        FUN_1400020a8();
      }
      plVar4 = *(longlong **)(lVar3 + lVar5 * 0x28 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14613ca9a FUN_14613ca9a body=458 status=ok
// SIG undefined FUN_14613ca9a(void)

void FUN_14613ca9a(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [34];
  byte local_86;
  byte local_85;
  int local_84;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_14045aae0();
    lVar2 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_14045aae0();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if ((lVar3 != 0 && lVar2 != lVar3) &&
         (local_80 = (ulonglong)*(int *)(param_1 + 0x428), local_80 != 0)) {
        lVar2 = *(longlong *)(param_1 + 0x420);
        FUN_14045adb4(local_58,lVar3);
        local_86 = *(longlong *)(lVar2 + 8) == local_50;
        local_68 = lVar2 + 0x20;
        local_84 = 0;
        uVar7 = 0;
        local_60 = lVar2;
        do {
          uVar9 = (int)uVar7 + 1;
          uVar11 = (ulonglong)uVar9;
          if ((int)uVar9 < (int)local_80) {
            uVar11 = local_80 & 0xffffffff;
          }
          local_78 = uVar7 * 3;
          plVar6 = (longlong *)(local_68 + uVar7 * 0x18);
          local_85 = local_86;
          bVar5 = (bool)(local_86 & 1);
          uVar8 = uVar7;
          uVar4 = uVar7;
          local_86 = local_86 ^ 1;
          local_70 = uVar7;
          do {
            uVar4 = uVar4 + 1;
            uVar7 = uVar11;
            if ((longlong)local_80 <= (longlong)uVar4) break;
            FUN_14045adb4(local_58,lVar3);
            lVar2 = *plVar6;
            uVar7 = (ulonglong)((int)uVar8 + 1);
            plVar6 = plVar6 + 3;
            uVar8 = uVar7;
          } while (bVar5 == (lVar2 == local_50));
          if ((local_85 & 1) == 0) {
            iVar10 = (int)uVar7 - (int)local_70;
            if (local_84 != (int)local_70) {
              memmove((void *)(local_60 + (longlong)local_84 * 0x18),
                      (void *)(local_60 + local_78 * 8),(longlong)iVar10 * 0x18);
            }
            local_84 = local_84 + iVar10;
          }
        } while ((longlong)uVar4 < (longlong)local_80);
        *(int *)(param_1 + 0x428) = local_84;
      }
    }
  }
  FUN_1415e2276(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14613cc66 FUN_14613cc66 body=225 status=ok
// SIG undefined FUN_14613cc66(void)

void FUN_14613cc66(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1408bb964(param_1 + 0x14);
  if (lVar1 != 0) {
    lVar2 = FUN_1459b10c6(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_14586d25c(lVar2);
      local_30 = FUN_145d02a84;
      local_28 = 0;
      FUN_14613cd48(uVar3,local_20,param_1 + -0x30);
    }
    lVar1 = *(longlong *)(lVar1 + 0x48);
    if (lVar1 != 0) {
      lVar2 = FUN_140b6d0be();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        local_30 = FUN_145926576;
        local_28 = 0;
        FUN_14613ce48(lVar1 + 0x1e0,local_20,param_1 + -0x30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613cd48 FUN_14613cd48 body=254 status=ok
// SIG undefined FUN_14613cd48(void)

undefined8
FUN_14613cd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b978e50;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b7010;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14586ec72(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613ce48 FUN_14613ce48 body=254 status=ok
// SIG undefined FUN_14613ce48(void)

undefined8
FUN_14613ce48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b7080;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613cf52 FUN_14613cf52 body=1055 status=ok
// SIG undefined FUN_14613cf52(void)

undefined8 * FUN_14613cf52(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14613d372();
  *param_1 = &PTR_FUN_14acc8290;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar3 = FUN_141272d48();
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (lVar3 == 0) {
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    FUN_1400bbfae(&local_60,lVar3);
    *(undefined4 *)(param_1 + 0xe) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x74) = uStack_5c;
    *(undefined4 *)(param_1 + 0xf) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_54;
    if (param_1 + 0xe == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x10] != 0) {
        FUN_1400020a8();
      }
      param_1[0x10] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x11) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x8c) = local_44;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        param_1[0xd] = 0;
        goto LAB_14613d031;
      }
    }
    FUN_14485c47a(param_1 + 0xd,lVar3);
  }
LAB_14613d031:
  lVar3 = FUN_1411f02a2();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (lVar3 == 0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  else {
    FUN_1400bbfae(&local_60,lVar3);
    *(undefined4 *)(param_1 + 0x13) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_5c;
    *(undefined4 *)(param_1 + 0x14) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_54;
    if (param_1 + 0x13 == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x15] != 0) {
        FUN_1400020a8();
      }
      param_1[0x15] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x16) = local_48;
      *(undefined4 *)((longlong)param_1 + 0xb4) = local_44;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        param_1[0x12] = 0;
        goto LAB_14613d0e2;
      }
    }
    FUN_14485c47a(param_1 + 0x12,lVar3);
  }
LAB_14613d0e2:
  lVar3 = FUN_140334ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (lVar3 == 0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else {
    FUN_1400bbfae(&local_60,lVar3);
    *(undefined4 *)(param_1 + 0x18) = local_60;
    *(undefined4 *)((longlong)param_1 + 0xc4) = uStack_5c;
    *(undefined4 *)(param_1 + 0x19) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_54;
    if (param_1 + 0x18 == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x1a] != 0) {
        FUN_1400020a8();
      }
      param_1[0x1a] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x1b) = local_48;
      *(undefined4 *)((longlong)param_1 + 0xdc) = local_44;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        param_1[0x17] = 0;
        goto LAB_14613d193;
      }
    }
    FUN_14485c47a(param_1 + 0x17,lVar3);
  }
LAB_14613d193:
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0x80 | 0x1d;
  local_68 = FUN_140c7d694();
  if ((local_68 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_68);
  }
  FUN_145a0fd3e(param_1 + 0xb,&local_68);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613d372 FUN_14613d372 body=39 status=ok
// SIG undefined FUN_14613d372(void)

undefined8 * FUN_14613d372(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_149ecb8d0;
  return param_1;
}



// FUNCTION 14613d399 FUN_14613d399 body=181 status=ok
// SIG undefined FUN_14613d399(void)

undefined8 FUN_14613d399(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_16 = *(undefined1 *)((longlong)param_2 + 0x32);
  local_48 = *param_2;
  local_15 = *(undefined1 *)((longlong)param_2 + 0x33);
  local_14 = *(undefined1 *)((longlong)param_2 + 0x34);
  local_24 = *(undefined8 *)((longlong)param_2 + 0x24);
  local_1c = *(undefined2 *)((longlong)param_2 + 0x2c);
  local_1a = *(undefined2 *)((longlong)param_2 + 0x2e);
  local_18 = *(undefined1 *)(param_2 + 6);
  local_17 = *(undefined1 *)((longlong)param_2 + 0x31);
  local_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_38 = *(undefined4 *)(param_2 + 2);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_30 = *(undefined4 *)(param_2 + 3);
  local_28 = *(undefined4 *)(param_2 + 4);
  local_13 = *(undefined1 *)((longlong)param_2 + 0x35);
  local_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_14613d450(&DAT_14ca9a3e8,param_1,&local_48,param_3);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613d450 FUN_14613d450 body=186 status=ok
// SIG undefined FUN_14613d450(void)

undefined8
FUN_14613d450(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_16 = *(undefined1 *)((longlong)param_3 + 0x32);
  local_48 = *param_3;
  local_15 = *(undefined1 *)((longlong)param_3 + 0x33);
  local_14 = *(undefined1 *)((longlong)param_3 + 0x34);
  local_24 = *(undefined8 *)((longlong)param_3 + 0x24);
  local_1c = *(undefined2 *)((longlong)param_3 + 0x2c);
  local_1a = *(undefined2 *)((longlong)param_3 + 0x2e);
  local_18 = *(undefined1 *)(param_3 + 6);
  local_17 = *(undefined1 *)((longlong)param_3 + 0x31);
  local_40 = *(undefined4 *)(param_3 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  uStack_38 = *(undefined4 *)(param_3 + 2);
  uStack_34 = *(undefined4 *)((longlong)param_3 + 0x14);
  local_30 = *(undefined4 *)(param_3 + 3);
  local_28 = *(undefined4 *)(param_3 + 4);
  local_13 = *(undefined1 *)((longlong)param_3 + 0x35);
  local_2c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_58 = param_4;
  FUN_144a87420(local_40,param_2,&DAT_14ca85100,&local_48);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613d50c FUN_14613d50c body=683 status=ok
// SIG undefined FUN_14613d50c(void)

void FUN_14613d50c(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  uVar10 = param_4 & 0xffffffff;
  uVar13 = param_3 & 0xffffffff;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar9 = *param_2;
  iVar6 = *(int *)(param_1 + 0x128);
  iVar8 = *(int *)(param_1 + 0x154);
  if (iVar6 != iVar8) {
    uVar11 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    lVar7 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x160);
    }
    iVar12 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(param_1 + 0x168) - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
    if (iVar12 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar12 * 0x18);
        if (*puVar2 == uVar9) {
          if ((puVar2 != (ulonglong *)0x0) && (puVar2[1] != 0)) goto LAB_14613d5de;
          break;
        }
        iVar12 = (int)puVar2[2];
      } while (iVar12 != -1);
    }
  }
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = uVar9;
  FUN_1415e27de(param_1,&local_50);
  uVar9 = *param_2;
  iVar6 = *(int *)(param_1 + 0x128);
  iVar8 = *(int *)(param_1 + 0x154);
LAB_14613d5de:
  if (iVar6 != iVar8) {
    uVar11 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    lVar7 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x160);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x168) - 1U & (uVar11 >> 0x10 ^ uVar11))
                             * 4);
    if (iVar6 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar6 * 0x18);
        if (*puVar2 == uVar9) {
          if ((puVar2 != (ulonglong *)0x0) && (uVar9 = puVar2[1], uVar9 != 0)) {
            uVar5 = FUN_1415e22d4(param_1);
            if ((DAT_14cb0d2b0 == 0) ||
               ((*(longlong *)(DAT_14cb0d2b0 + 0xfe0) == 0 ||
                (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0)))) {
              cVar4 = '\0';
            }
            else {
              cVar4 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
            }
            if ((int)param_4 == 0) {
              uVar10 = (ulonglong)DAT_14cb0d280;
            }
            if ((int)param_3 == 0) {
              uVar13 = (ulonglong)DAT_14cb0d27c;
            }
            iVar6 = (**(code **)(**(longlong **)(*param_2 + 0x510) + 0x68))();
            if ((cVar4 != '\0') || (iVar6 == 1)) {
              uVar13 = *(ulonglong *)(uVar9 + 0xa8);
              uVar10 = uVar13 >> 0x20;
            }
            local_58 = *param_2;
            FUN_1415e239e(param_1,uVar9,uVar13 & 0xffffffff | uVar10 << 0x20,uVar5);
          }
          break;
        }
        iVar6 = (int)puVar2[2];
      } while (iVar6 != -1);
    }
  }
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14613d7d8 FUN_14613d7d8 body=361 status=ok
// SIG undefined FUN_14613d7d8(void)

undefined8 * FUN_14613d7d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14584580a();
  *param_1 = &PTR_FUN_14ba2a750;
  param_1[6] = &PTR_FUN_14ba2aa60;
  param_1[7] = &PTR_FUN_14ba2aa70;
  param_1[8] = &PTR_FUN_14ba2aaa0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3ff00000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3ff00000;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_141300fc0(param_1 + 0x28);
  FUN_141300fc0(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x70) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 900) = 0;
  *(undefined1 *)((longlong)param_1 + 0x386) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7d] = 0xffffffffffffffff;
  uVar1 = DAT_14c8464e8;
  param_1[0x7e] = DAT_14c8464e0;
  param_1[0x7f] = uVar1;
  param_1[0x80] = DAT_14c8464f0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined2 *)((longlong)param_1 + 0x424) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  return param_1;
}



// FUNCTION 14613d94a FUN_14613d94a body=361 status=ok
// SIG undefined FUN_14613d94a(void)

undefined8 * FUN_14613d94a(undefined8 *param_1)

{
  FUN_14585467a();
  *param_1 = &PTR_FUN_14ba2f770;
  param_1[5] = &PTR_FUN_14ba2fb50;
  param_1[0x13] = &PTR_FUN_14ba2fb70;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  memset(param_1 + 0x24,0,0xa0);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x80;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3ff00000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3ff00000;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x7fefffffffffffff;
  param_1[0x4d] = 0x7fefffffffffffff;
  param_1[0x4e] = 0x7fefffffffffffff;
  param_1[0x4f] = 0xffefffffffffffff;
  param_1[0x50] = 0xffefffffffffffff;
  param_1[0x51] = 0xffefffffffffffff;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3ff00000;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x3ff00000;
  *(undefined4 *)(param_1 + 99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x3ff00000;
  param_1[100] = 0x3ff0000000000000;
  param_1[0x65] = 0;
  param_1[0x66] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x67) = 0;
  FUN_141300fc0(param_1 + 0x72);
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  return param_1;
}



// FUNCTION 14613dab4 FUN_14613dab4 body=40 status=ok
// SIG undefined FUN_14613dab4(void)

undefined8 FUN_14613dab4(undefined8 param_1,int param_2)

{
  FUN_14613dadc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14613dadc FUN_14613dadc body=329 status=ok
// SIG undefined FUN_14613dadc(void)

void FUN_14613dadc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd7d990;
  param_1[5] = &PTR_FUN_14bd7dd60;
  param_1[0x13] = &PTR_FUN_14bd7dd80;
  plVar3 = (longlong *)param_1[0x35];
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
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
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
  plVar3 = (longlong *)param_1[0x2d];
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
  plVar3 = (longlong *)param_1[0x2a];
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
  FUN_145865dac(param_1);
  return;
}



// FUNCTION 14613dc2e FUN_14613dc2e body=362 status=ok
// SIG undefined FUN_14613dc2e(void)

undefined8 * FUN_14613dc2e(undefined8 *param_1)

{
  FUN_14130a082();
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14aead800;
  param_1[0x1b] = &PTR_FUN_14aeadb10;
  param_1[0x1e] = 0;
  param_1[0x20] = &PTR_LAB_14aeb6ad0;
  param_1[0x21] = &LAB_14841c660;
  param_1[0x1c] = FUN_14841bf88;
  param_1[0x26] = 0;
  param_1[0x28] = &PTR_LAB_14aeb5700;
  param_1[0x29] = &DAT_14841c69a;
  param_1[0x24] = &LAB_14841bfae;
  param_1[0x2e] = 0;
  param_1[0x30] = &PTR_LAB_14aeb5760;
  param_1[0x31] = &LAB_14841c69c;
  param_1[0x2c] = &LAB_14841c6a0;
  param_1[0x36] = 0;
  param_1[0x38] = &PTR_LAB_149e16f80;
  param_1[0x39] = &DAT_14841c6b4;
  param_1[0x34] = FUN_140d11fbe;
  param_1[0x3e] = 0;
  param_1[0x40] = &PTR_LAB_14aeb5720;
  param_1[0x41] = &DAT_14841c6b6;
  param_1[0x3c] = &LAB_14841c006;
  return param_1;
}



// FUNCTION 14613dd98 FUN_14613dd98 body=131 status=ok
// SIG undefined FUN_14613dd98(void)

void FUN_14613dd98(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar1 = FUN_1403ae46b();
  if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
      (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) &&
     ((*(longlong *)(lVar2 + 0x20) != 0 && (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0)))) {
    lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
    if (lVar2 != 0) {
      uVar3 = FUN_1403ae386();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014613de11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0xa0))(plVar4,0x461c4000);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14613de1c FUN_14613de1c body=478 status=ok
// SIG undefined FUN_14613de1c(void)

void FUN_14613de1c(longlong param_1)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = FUN_1447210f0();
    if ((lVar5 != 0) && ((*(byte *)(param_1 + 0x55) & 2) != 0)) {
      FUN_1459ccb9e(param_1,0,0x47c35000);
      FUN_14011c349();
      if ((longlong)*(int *)(param_1 + 0x1d0) < 1) {
        FUN_1401e6abc(param_1,0);
        return;
      }
      dVar2 = *(double *)(lVar5 + 0x6d0);
      bVar10 = 0;
      uVar8 = (longlong)*(int *)(param_1 + 0x1d0);
      do {
        lVar9 = (uVar8 - 1) * 0x20;
        fVar1 = *(float *)(*(longlong *)(param_1 + 0x1c8) + 8 + lVar9);
        lVar5 = *(longlong *)(param_1 + 0x1c8) + lVar9;
        if (0.0 < fVar1) {
          if (0 < *(int *)(param_1 + 0x40)) {
            FUN_1401e5fa8(param_1,fVar1,0);
          }
          *(undefined4 *)(lVar5 + 8) = 0;
        }
        FUN_1456e2770(param_1,lVar5);
        uVar4 = *(uint *)(param_1 + 0x1d0);
        if (uVar8 != uVar4) {
          iVar6 = uVar4 - (int)uVar8;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar9 + *(longlong *)(param_1 + 0x1c8)),
                  (void *)((longlong)(int)(uVar4 - iVar6) * 0x20 + *(longlong *)(param_1 + 0x1c8)),
                  (longlong)iVar6 << 5);
          uVar4 = *(uint *)(param_1 + 0x1d0);
        }
        *(uint *)(param_1 + 0x1d0) = uVar4 - 1;
        *(uint *)(param_1 + 0x19c) = uVar4 - 1;
        FUN_140841e14(param_1 + 0x194,1);
        if ((*(char *)(lVar5 + 0x1e) == '\0') && (0 < *(int *)(param_1 + 0x198))) {
          lVar9 = 4;
          lVar7 = 0;
          do {
            *(float *)(*(longlong *)(param_1 + 0x1c8) + lVar9) = (float)dVar2;
            lVar7 = lVar7 + 1;
            lVar9 = lVar9 + 0x20;
          } while (lVar7 < *(int *)(param_1 + 0x198));
        }
        bVar10 = bVar10 | *(byte *)(lVar5 + 0x1c);
        bVar3 = 1 < (longlong)uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar3);
      FUN_1401e6abc(param_1,0);
      if ((bVar10 & 1) != 0) {
        FUN_1447f69b6(param_1 + 0x140);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14613dffa FUN_14613dffa body=209 status=ok
// SIG undefined FUN_14613dffa(void)

void FUN_14613dffa(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14613e31e();
  if (*(longlong *)(param_1 + 0x50) != 0) {
    cVar2 = FUN_1414e62ca();
    if (cVar2 == '\0') {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x178) != 0)) {
        lVar5 = FUN_14030d660();
        plVar1 = *(longlong **)(lVar4 + 0x178);
        if (((plVar1 != (longlong *)0x0) &&
            (((lVar5 != 0 && (lVar4 = plVar1[2], lVar4 != 0)) &&
             (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))))) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          uVar3 = FUN_14613e4ba(*(undefined8 *)(param_1 + 0x50));
          (**(code **)(*plVar1 + 0x7b0))(plVar1,uVar3);
        }
      }
    }
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
    lVar4 = FUN_1458774f4();
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
      FUN_14613e0cc();
      return;
    }
  }
  return;
}



// FUNCTION 14613e0cc FUN_14613e0cc body=316 status=ok
// SIG undefined FUN_14613e0cc(void)

void FUN_14613e0cc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = *(char *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x78) = 1;
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    iVar7 = (int)plVar4[1];
    while (iVar7 != 0) {
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
      if (bVar10) {
        if ((*(longlong *)(param_1 + 0x18) != 0) && (cVar6 = FUN_1414e62ca(), cVar6 == '\0')) {
          if (cVar3 == '\0') {
            FUN_14596fafa(param_1,0);
          }
          else {
            lVar8 = FUN_14479d2ce(param_1 + 0x10);
            if (lVar8 != 0) {
              lVar9 = FUN_1403ca142();
              if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
                FUN_14613e706(local_38,param_1);
                FUN_14613e21c(lVar8 + 0x668,local_40,local_38);
                FUN_1449db362(local_38);
                FUN_145c3f772(param_1 + 0x128,param_1 + 0x28);
              }
            }
          }
        }
        FUN_14068ded2(param_1 + 0x28,0);
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
        if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 14613e21c FUN_14613e21c body=216 status=ok
// SIG undefined FUN_14613e21c(void)

undefined8 * FUN_14613e21c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613e31e FUN_14613e31e body=391 status=ok
// SIG undefined FUN_14613e31e(void)

void FUN_14613e31e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_1414e62ca(*(undefined8 *)(param_1 + 0x50));
  if (cVar2 == '\0') {
    iVar3 = FUN_14613e4ba(*(undefined8 *)(param_1 + 0x50));
    if (iVar3 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    FUN_141551f14(param_2,&local_30);
    if (&local_30 == (undefined8 **)(param_1 + 0x60)) {
      if (local_30 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined8 **)(param_1 + 0x60) = local_30;
      *(undefined4 *)(param_1 + 0x68) = local_28;
      *(undefined4 *)(param_1 + 0x6c) = local_24;
    }
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    local_28 = 3;
    *local_30 = &PTR_LAB_14b4edb10;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar4;
    *local_30 = &PTR_FUN_14b4e9b10;
    local_30[3] = param_1;
    local_30[4] = FUN_141644ede;
    *(undefined4 *)(local_30 + 5) = 0;
    FUN_14613e4c2(param_1,param_1,param_2,&local_30);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613e4ba FUN_14613e4ba body=7 status=ok
// SIG undefined FUN_14613e4ba(void)

undefined4 FUN_14613e4ba(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x528);
}



// FUNCTION 14613e4c2 FUN_14613e4c2 body=276 status=ok
// SIG undefined FUN_14613e4c2(void)

void FUN_14613e4c2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  plVar4 = (longlong *)FUN_14001cc68(0x170,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4e9b80;
  plVar1 = plVar4 + 2;
  FUN_14613e5d8(plVar1,param_2,param_3,param_4);
  local_58 = plVar1;
  local_50 = plVar4;
  FUN_14613e664(&local_58,plVar1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_48 = plVar1;
  local_40 = plVar4;
  FUN_1411d7792(uVar3,&local_48);
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613e5d8 FUN_14613e5d8 body=140 status=ok
// SIG undefined FUN_14613e5d8(void)

undefined8 *
FUN_14613e5d8(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[4] = param_2;
  *param_1 = &PTR_FUN_14b4e9ba0;
  FUN_14589e2aa(param_1 + 5,param_3);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x118);
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  FUN_1459dad1c(param_1 + 0x29,param_4);
  *(undefined4 *)(param_1 + 0x2b) = 5;
  return param_1;
}



// FUNCTION 14613e664 FUN_14613e664 body=162 status=ok
// SIG undefined FUN_14613e664(void)

void FUN_14613e664(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14613e6a3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14613e6a3;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14613e6a3:
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
                    /* WARNING: Could not recover jumptable at 0x00014613e702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14613e706 FUN_14613e706 body=422 status=ok
// SIG undefined FUN_14613e706(void)

longlong * FUN_14613e706(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14613e7dc:
    *puVar3 = &PTR_LAB_14b98d050;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b988f90;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_14596fa70;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14613e7dc;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b98d050;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b988f90;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14596fa70;
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
  return param_1;
}



// FUNCTION 14613e8ac FUN_14613e8ac body=2269 status=ok
// SIG undefined FUN_14613e8ac(void)

void FUN_14613e8ac(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  undefined8 *local_4a0;
  undefined8 *local_498;
  undefined8 local_490;
  undefined8 *local_488;
  undefined8 *local_480;
  undefined1 *local_478;
  undefined4 *local_470;
  undefined1 *local_468;
  longlong *local_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  longlong local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_430;
  undefined8 local_428 [12];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398 [12];
  undefined8 local_338 [9];
  undefined1 local_2f0 [8];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [8];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270 [16];
  undefined2 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined2 local_208;
  undefined6 uStack_206;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 uStack_1e4;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [16];
  undefined2 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined4 local_130 [2];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined **local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_138 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  local_150 = 0xffffffffffffffff;
  uStack_148 = 0;
  lStack_140 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_150);
  }
  local_158 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_158);
  }
  local_460 = &local_158;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_460 = *(longlong **)(param_2 + 0x38);
  }
  local_170 = 0;
  local_168 = 0x4000;
  local_160 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_170);
  }
  local_178 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  local_1d8[0] = 0;
  local_1d8._4_8_ = 0;
  local_1c8 = 0;
  local_1c0 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_1b8 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  local_1b0 = DAT_14c846508;
  local_1a8 = 0;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = (undefined4)DAT_14c8464e0;
  uStack_18c = DAT_14c8464e0._4_4_;
  uStack_188 = (undefined4)DAT_14c8464e8;
  uStack_184 = DAT_14c8464e8._4_4_;
  local_180 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1d8);
  }
  local_208 = 0;
  uStack_200 = (undefined4)DAT_14c8464f8;
  uStack_1fc = DAT_14c8464f8._4_4_;
  uStack_1f8 = (undefined4)DAT_14c846500;
  uStack_1f4 = DAT_14c846500._4_4_;
  uStack_1f0 = DAT_14c846508;
  local_1e8 = 0;
  uStack_1e4 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_208);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_208);
  }
  local_210 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_210);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_210);
  }
  local_270[0] = 0;
  local_270._4_8_ = 0;
  local_260 = 0;
  local_258 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_250 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  local_248 = DAT_14c846508;
  local_240 = 0;
  local_23c = 0;
  local_230 = 0;
  local_228 = (undefined4)DAT_14c8464e0;
  uStack_224 = DAT_14c8464e0._4_4_;
  uStack_220 = (undefined4)DAT_14c8464e8;
  uStack_21c = DAT_14c8464e8._4_4_;
  local_218 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_270);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_270);
  }
  puVar7 = (undefined8 *)(param_2 + 0x38);
  local_2b8._0_4_ = 0;
  local_2b8._4_1_ = 0;
  local_2b0 = 0xbf80000000000000;
  local_2a8 = 0xc4750000;
  local_2a4 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0;
  uStack_278 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2b8);
  }
  local_2d0[0] = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  *puVar7 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2d0);
  }
  puVar9 = local_2d0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(param_2 + 0x38);
  }
  local_130[0] = 0;
  local_128 = 0;
  local_120 = 0x3002;
  local_118 = 0;
  local_e0 = 0;
  local_d8 = 0x200000000;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0xf00000d0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  FUN_1405c5fa2();
  local_78 = &DAT_14cb769e8;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = &PTR_FUN_14b0394b0;
  *puVar7 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  puVar6 = local_130;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_2 + 0x38);
  }
  local_2f0[0] = 0;
  local_2e8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_2e0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_2d8 = DAT_14c8464f0;
  *puVar7 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2f0);
  }
  puVar5 = local_2f0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar7 = &local_2b8;
  puVar8 = local_338;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = (undefined8 *)local_270;
  puVar8 = local_398;
  for (lVar4 = 0xc; uVar2 = local_210, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_3c8 = CONCAT62(uStack_206,local_208);
  uStack_3c0 = CONCAT44(uStack_1fc,uStack_200);
  local_3b8 = uStack_1f8;
  uStack_3b4 = uStack_1f4;
  uStack_3b0 = (undefined4)uStack_1f0;
  uStack_3ac = uStack_1f0._4_4_;
  local_3a8 = local_1e8;
  uStack_3a4 = (undefined4)uStack_1e4;
  uStack_3a0 = uStack_1e4._4_4_;
  uStack_39c = uStack_1dc;
  puVar7 = (undefined8 *)local_1d8;
  puVar8 = local_428;
  for (lVar4 = 0xc; uVar3 = local_178, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_440 = local_170;
  local_438 = local_168;
  local_430 = 0;
  local_458 = (undefined4)local_150;
  uStack_454 = local_150._4_4_;
  uStack_450 = (undefined4)uStack_148;
  uStack_44c = uStack_148._4_4_;
  local_448 = lStack_140;
  if ((lStack_140 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  plVar1 = local_460;
  local_490 = uVar2;
  local_498 = &local_3c8;
  local_4a8 = uVar3;
  local_4a0 = local_428;
  local_488 = local_398;
  local_480 = local_338;
  local_478 = puVar9;
  local_470 = puVar6;
  local_468 = puVar5;
  FUN_14613f18a(local_138,&local_458,local_460,&local_440);
  if ((DAT_14c950c29 == 1) && (*plVar1 != 0)) {
    FUN_14689c22e();
  }
  FUN_1414dc478(local_130);
  if ((local_60 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613f18a FUN_14613f18a body=558 status=ok
// SIG undefined FUN_14613f18a(void)

void FUN_14613f18a(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = param_12;
  local_88 = param_11;
  local_90 = param_10;
  local_98 = param_9;
  local_a0 = param_8;
  local_a8 = param_13;
  local_b8 = param_6;
  uStack_b0 = param_7;
  FUN_1415e2d8d(&local_58,param_1,param_4,param_5);
  if (param_1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar5 != 0) {
      if (local_58 == 0) {
        local_78 = *param_2;
        uStack_74 = param_2[1];
        uStack_70 = param_2[2];
        uStack_6c = param_2[3];
        local_68 = *(longlong *)(param_2 + 4);
        if ((local_68 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1412eeba4(lVar5,&local_78);
      }
      else {
        if (*(longlong *)(lVar5 + 0x1f0) == 0) {
          lVar5 = lVar5 + 0x460;
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0xf8);
        }
        puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        uVar2 = *param_2;
        uVar3 = *(undefined8 *)(param_2 + 2);
        lVar4 = *(longlong *)(param_2 + 4);
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar4);
        }
        *puVar6 = &PTR_FUN_14b422470;
        puVar6[1] = param_3;
        *(undefined4 *)(puVar6 + 2) = uVar2;
        *(undefined8 *)((longlong)puVar6 + 0x14) = uVar3;
        *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
        FUN_14485c47a((longlong)puVar6 + 0x1c,lVar4);
        puVar6[5] = local_58;
        puVar6[6] = local_50;
        if (local_50 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
          UNLOCK();
        }
        FUN_140b1330e(lVar5,*(undefined8 *)(param_2 + 4),param_2[1],puVar6);
      }
    }
  }
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_50 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613f3d6 FUN_14613f3d6 body=68 status=ok
// SIG undefined FUN_14613f3d6(void)

void FUN_14613f3d6(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x7f8);
  memset(_Dst,0,0x7f8);
  FUN_14613f41a(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14613f41a FUN_14613f41a body=303 status=ok
// SIG undefined FUN_14613f41a(void)

undefined8 * FUN_14613f41a(undefined8 *param_1)

{
  FUN_145954194();
  *param_1 = &PTR_FUN_14b8ad640;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  FUN_14587bf6c(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0xd3) = 0;
  FUN_1456e1756(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0xe1) = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  FUN_1413e92dc(param_1 + 0xeb);
  *(undefined4 *)(param_1 + 0xf9) = 0;
  *(undefined1 *)(param_1 + 0xfd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7ec) = 0;
  *(undefined1 *)(param_1 + 0xfe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7f4) = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return param_1;
}



// FUNCTION 14613f54a FUN_14613f54a body=93 status=ok
// SIG undefined FUN_14613f54a(void)

longlong FUN_14613f54a(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14613f5a8(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14613f5a8 FUN_14613f5a8 body=463 status=ok
// SIG undefined FUN_14613f5a8(void)

longlong * FUN_14613f5a8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        if (*(longlong *)(lVar2 + 0x20 + (longlong)iVar6 * 0x38) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x38) != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14613f778 FUN_14613f778 body=168 status=ok
// SIG undefined FUN_14613f778(void)

void FUN_14613f778(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = *(longlong *)(param_1 + 2);
  lVar8 = *(longlong *)(lVar9 + 0x40);
  if (*(longlong *)(lVar9 + 0x40) == 0) {
    lVar8 = lVar9;
  }
  iVar2 = *(int *)(lVar9 + 0x48);
  iVar4 = *param_1;
  lVar9 = (longlong)iVar4;
  uVar5 = param_1[4] & *(uint *)(lVar8 + lVar9 * 4);
  if (uVar5 == 0) {
    iVar6 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar6 = iVar2 + -1;
    }
    iVar3 = param_1[6];
    iVar7 = iVar6 >> 5;
    if (iVar6 >> 5 < iVar4) {
      iVar7 = iVar4;
    }
    lVar10 = 0;
    do {
      *param_1 = iVar4 + 1 + (int)lVar10;
      iVar3 = iVar3 + 0x20;
      param_1[6] = iVar3;
      if (iVar7 - lVar9 == lVar10) {
        param_1[5] = iVar2;
        return;
      }
      uVar5 = *(uint *)(lVar8 + lVar9 * 4 + 4 + lVar10 * 4);
      param_1[4] = -1;
      lVar10 = lVar10 + 1;
    } while (uVar5 == 0);
  }
  else {
    iVar3 = param_1[6];
  }
  param_1[1] = -uVar5 & uVar5;
  uVar1 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  iVar4 = (iVar3 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar4) {
    iVar4 = iVar2;
  }
  param_1[5] = iVar4;
  return;
}



// FUNCTION 14613f820 FUN_14613f820 body=314 status=ok
// SIG undefined FUN_14613f820(void)

void FUN_14613f820(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410c2f26();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x298) == 0) {
      local_38 = FUN_146107fdc;
      local_30 = 0;
      FUN_14613f95c(local_48,param_1);
      FUN_1446ddc76(&local_50,"TitleReset",1);
      FUN_140391af6(lVar1,&local_38,local_50,local_48);
      *(code **)(param_1 + 0x298) = local_38;
      FUN_1449db362(local_48);
    }
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      local_38 = (code *)&LAB_146107fca;
      local_30 = 0;
      FUN_14613f95c(local_48,param_1);
      FUN_1446ddc76(&local_58,"TitleLoginStarted",1);
      FUN_140391af6(lVar1,&local_38,local_58,local_48);
      *(code **)(param_1 + 0x2a0) = local_38;
      FUN_1449db362(local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613f95c FUN_14613f95c body=428 status=ok
// SIG undefined FUN_14613f95c(void)

longlong * FUN_14613f95c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14613fa3c:
    *puVar5 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d3d70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14613fa3c;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d3d70;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14613fb08 FUN_14613fb08 body=409 status=ok
// SIG undefined FUN_14613fb08(void)

undefined4 *
FUN_14613fb08(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14613fcf0(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  lVar11 = param_3[1];
  *local_40 = *puVar2;
  lVar3 = puVar2[1];
  local_40[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_14613fca2(local_40 + 2,0,lVar11);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  plVar4 = (longlong *)*local_40;
  plVar5 = (longlong *)local_40[1];
  if (plVar5 == (longlong *)0x0) {
    uVar7 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar7 = (**(code **)(*plVar4 + 0x40))();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_58 = param_4;
  cVar6 = FUN_14613fdd8(param_1,uVar7,local_40,&local_4c);
  if (cVar6 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar9) {
      uVar8 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x24) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_14613fee2(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613fca2 FUN_14613fca2 body=78 status=ok
// SIG undefined FUN_14613fca2(void)

undefined8 * FUN_14613fca2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140f5ae84(param_1,iVar1,0);
    FUN_140f5ae08(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14613fcf0 FUN_14613fcf0 body=231 status=ok
// SIG undefined FUN_14613fcf0(void)

int * FUN_14613fcf0(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14613fdd8 FUN_14613fdd8 body=265 status=ok
// SIG undefined FUN_14613fdd8(void)

void FUN_14613fdd8(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined1 uVar12;
  int iVar13;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    local_40 = (longlong *)param_3[1];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    iVar13 = FUN_14152c858(param_1,param_2,&local_48);
    plVar11 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (iVar13 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x28);
      FUN_145f78e04(puVar3);
      uVar4 = *(undefined4 *)param_3;
      uVar5 = *(undefined4 *)((longlong)param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 1);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar9 = *(undefined4 *)(param_3 + 3);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar8;
      puVar3[6] = uVar9;
      puVar3[7] = uVar10;
      *puVar3 = uVar4;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_148fb872a(param_1,*param_4,1);
      *param_4 = iVar13;
      uVar12 = 1;
      goto LAB_14613fe08;
    }
  }
  uVar12 = 0;
LAB_14613fe08:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar12;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613fee2 FUN_14613fee2 body=501 status=ok
// SIG undefined FUN_14613fee2(void)

void FUN_14613fee2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461400d8 FUN_1461400d8 body=53 status=ok
// SIG undefined FUN_1461400d8(void)

void FUN_1461400d8(longlong *param_1)

{
  FUN_14614010e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14614010e FUN_14614010e body=318 status=ok
// SIG undefined FUN_14614010e(void)

void FUN_14614010e(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1469b84e2(*local_68 + (longlong)iStack_4c * 0x58 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14614024e FUN_14614024e body=205 status=ok
// SIG undefined FUN_14614024e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14614024e(void)

{
  if ((DAT_14ca025ff & 2) == 0) {
    DAT_14ca025ff = DAT_14ca025ff | 2;
    _DAT_14ca025a0 = L"FLumenTranslucencyRadianceCacheMarkVS";
    _DAT_14ca025b8 = FUN_146826540;
    _DAT_14ca025c0 = FUN_146825d77;
    _DAT_14ca025c8 = FUN_146825fd6;
    _DAT_14ca025d0 = FUN_1407e02ea;
    _DAT_14ca025d8 = FUN_146826273;
    _DAT_14ca025b0 = FUN_147221c4a;
    _DAT_14ca025f0 = 0xffffffff00000108;
    _DAT_14ca025f8 = 8;
    DAT_14ca025fc = 0;
    _DAT_14ca025e0 = &LAB_147221c80;
    FUN_14614031c();
    FUN_1407e00cc(&DAT_14ca02598);
    return;
  }
  return;
}



// FUNCTION 14614031c FUN_14614031c body=123 status=ok
// SIG undefined FUN_14614031c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14614031c(void)

{
  _DAT_14ca07be8 = L"BASE";
  DAT_14ca07c12 = 4;
  _DAT_14ca07bf0 = FUN_141092e92();
  _DAT_14ca07bf8 = DAT_14ca025a8;
  _DAT_14ca07c00 = &LAB_14682652b;
  DAT_14ca025a8 = &DAT_14ca07be8;
  DAT_14ca025fd = DAT_14ca025fd + '\x01';
  _DAT_14ca07c08 = 0x100000000;
  if (*(char *)(_DAT_14ca07bf0 + 100) != '\0') {
    DAT_14ca025fe = DAT_14ca025fe + '\x01';
  }
  return;
}



// FUNCTION 146140398 FUN_146140398 body=205 status=ok
// SIG undefined FUN_146140398(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146140398(void)

{
  if ((DAT_14ca02727 & 2) == 0) {
    DAT_14ca02727 = DAT_14ca02727 | 2;
    _DAT_14ca026c8 = L"FLumenTranslucencyRadianceCacheMarkPS";
    _DAT_14ca026e0 = FUN_146826540;
    _DAT_14ca026e8 = FUN_146825d77;
    _DAT_14ca026f0 = FUN_146825fd6;
    _DAT_14ca026f8 = FUN_1407e02ea;
    _DAT_14ca02700 = FUN_146826273;
    _DAT_14ca026d8 = FUN_147221e18;
    _DAT_14ca02718 = 0xffffffff00000108;
    _DAT_14ca02720 = 8;
    DAT_14ca02724 = 0;
    _DAT_14ca02708 = &LAB_147221e4e;
    FUN_146140466();
    FUN_1407e00cc(&DAT_14ca026c0);
    return;
  }
  return;
}



// FUNCTION 146140466 FUN_146140466 body=123 status=ok
// SIG undefined FUN_146140466(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146140466(void)

{
  _DAT_14ca07c18 = L"BASE";
  DAT_14ca07c42 = 4;
  _DAT_14ca07c20 = FUN_141092e92();
  _DAT_14ca07c28 = DAT_14ca026d0;
  _DAT_14ca07c30 = &LAB_14682652b;
  DAT_14ca026d0 = &DAT_14ca07c18;
  DAT_14ca02725 = DAT_14ca02725 + '\x01';
  _DAT_14ca07c38 = 0x100000000;
  if (*(char *)(_DAT_14ca07c20 + 100) != '\0') {
    DAT_14ca02726 = DAT_14ca02726 + '\x01';
  }
  return;
}



// FUNCTION 1461404e2 FUN_1461404e2 body=53 status=ok
// SIG undefined FUN_1461404e2(void)

void FUN_1461404e2(longlong *param_1)

{
  FUN_146140518();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146140518 FUN_146140518 body=318 status=ok
// SIG undefined FUN_146140518(void)

void FUN_146140518(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_145aebd76(*local_68 + (longlong)iStack_4c * 0x58 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146140658 FUN_146140658 body=294 status=ok
// SIG undefined FUN_146140658(void)

undefined4 * FUN_146140658(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14585436c(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_1458542c8(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1415e3602(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146140780 FUN_146140780 body=37 status=ok
// SIG undefined FUN_146140780(void)

void FUN_146140780(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001461407a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 1461407de FUN_1461407de body=40 status=ok
// SIG undefined FUN_1461407de(void)

undefined8 FUN_1461407de(undefined8 param_1,int param_2)

{
  FUN_146140806();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146140806 FUN_146140806 body=332 status=ok
// SIG undefined FUN_146140806(void)

void FUN_146140806(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba2f770;
  param_1[5] = &PTR_FUN_14ba2fb50;
  param_1[0x13] = &PTR_FUN_14ba2fb70;
  puVar3 = (undefined8 *)param_1[0x96];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_14008cd94(param_1 + 0x72);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x36);
  plVar4 = (longlong *)param_1[0x35];
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
  plVar4 = (longlong *)param_1[0x33];
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
  plVar4 = (longlong *)param_1[0x31];
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
  plVar4 = (longlong *)param_1[0x2f];
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
  FUN_145865dac(param_1);
  return;
}



// FUNCTION 14614095a FUN_14614095a body=694 status=ok
// SIG undefined FUN_14614095a(void)

undefined8 * FUN_14614095a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_1459b7b48(param_1,uVar4);
  FUN_146140c12(param_1 + 0x2c);
  *param_1 = &PTR_FUN_14bb87df0;
  param_1[0x1f] = &PTR_FUN_14bb88160;
  param_1[0x2c] = &PTR_FUN_14bb88190;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 2;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  FUN_1406ed278(param_1 + 0x44);
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  *(undefined4 *)(param_1 + 0x43) = 0x1ff;
  *(undefined1 *)((longlong)param_1 + 0x29c) = 1;
  *(undefined4 *)(param_1 + 0x53) = 0x3f800000;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar5 + 2;
  FUN_1459a4720(plVar1,param_1 + 0x44);
  local_50 = plVar1;
  local_48 = plVar5;
  FUN_140aec6f8(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    param_1[0x1c] = local_50;
    plVar5 = (longlong *)param_1[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_146140b57;
    param_1[0x1d] = 0;
LAB_146140bb2:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146140b57;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    param_1[0x1c] = local_50;
    plVar5 = (longlong *)param_1[0x1d];
    if (local_48 != plVar5) {
      param_1[0x1d] = local_48;
      if (plVar5 == (longlong *)0x0) goto LAB_146140b57;
      goto LAB_146140bb2;
    }
    LOCK();
    plVar5 = local_48 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146140b57;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_146140b57:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_48 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146140c12 FUN_146140c12 body=41 status=ok
// SIG undefined FUN_146140c12(void)

void FUN_146140c12(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a4b6560;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 2;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 146140c3c FUN_146140c3c body=24 status=ok
// SIG undefined FUN_146140c3c(void)

void FUN_146140c3c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146140c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146140c54 FUN_146140c54 body=38 status=ok
// SIG undefined FUN_146140c54(void)

undefined8 FUN_146140c54(undefined8 param_1,int param_2)

{
  FUN_1415e37c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146140c7a FUN_146140c7a body=68 status=ok
// SIG undefined FUN_146140c7a(void)

void FUN_146140c7a(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x180);
  memset(_Dst,0,0x180);
  FUN_146140cbe(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146140cbe FUN_146140cbe body=212 status=ok
// SIG undefined FUN_146140cbe(void)

undefined8 * FUN_146140cbe(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8c3150;
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
  *(undefined8 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  *(undefined1 *)((longlong)param_1 + 0x109) = 1;
  param_1[0x22] = 0;
  FUN_1400b22c2(param_1 + 0x23,"pm_frame_logo");
  param_1[0x25] = 0;
  FUN_1400b22c2(param_1 + 0x26,"botleft");
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  param_1[0x2a] = 0;
  FUN_1400b22c2(param_1 + 0x2b,"black");
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x174) = 1;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  return param_1;
}



// FUNCTION 146140d98 FUN_146140d98 body=197 status=ok
// SIG undefined FUN_146140d98(void)

void FUN_146140d98(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146140e5e FUN_146140e5e body=251 status=ok
// SIG undefined FUN_146140e5e(void)

void FUN_146140e5e(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  
  iVar1 = (int)param_2[1];
  if (iVar1 == *(int *)(param_1 + 0x2b8)) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_2 + lVar4);
        uVar2 = (ulonglong)uVar5;
        uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x2b0) + lVar4);
        if (uVar5 != uVar6) break;
        if (uVar5 == 0) goto LAB_146140f44;
LAB_146140f1a:
        lVar4 = lVar4 + 2;
      }
      if ((uVar6 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
        uVar3 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_146140f1a;
      }
      if (uVar5 != uVar6) goto LAB_146140e7d;
    }
  }
  else if (*(int *)(param_1 + 0x2b8) + iVar1 != 1) {
LAB_146140e7d:
    if (iVar1 == *(int *)(param_1 + 0x2c8)) {
      if (1 < iVar1) {
        lVar4 = 0;
        while( true ) {
          uVar5 = *(ushort *)(*param_2 + lVar4);
          uVar2 = (ulonglong)uVar5;
          uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x2c0) + lVar4);
          if (uVar5 != uVar6) break;
          if (uVar5 == 0) goto LAB_146140ee6;
LAB_146140ebb:
          lVar4 = lVar4 + 2;
        }
        if ((uVar6 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
          uVar3 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_146140ebb;
        }
        if (uVar5 != uVar6) {
          return;
        }
      }
    }
    else if (*(int *)(param_1 + 0x2c8) + iVar1 != 1) {
      return;
    }
LAB_146140ee6:
    FUN_146141368();
    return;
  }
LAB_146140f44:
  FUN_146140f5a();
  return;
}



// FUNCTION 146140f5a FUN_146140f5a body=278 status=ok
// SIG undefined FUN_146140f5a(void)

void FUN_146140f5a(longlong param_1)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    uVar1 = FUN_14001cc68(0x30,0x10);
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_1 + 0x2a0);
    lVar2 = (longlong)local_38;
    _Src = *(void **)(param_1 + 0x298);
    if (lVar2 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1401b309e(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar2 << 3);
    }
    FUN_1415e3a70(uVar1,&local_40);
    FUN_140391314(param_1,uVar1);
    FUN_1400b22c2(local_50,"OnMenuTutorialSequenceClosed");
    FUN_140de1078(param_1,local_50,0,0);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x288) != 0) {
      FUN_14614117e();
      FUN_146141072(param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146141072 FUN_146141072 body=266 status=ok
// SIG undefined FUN_146141072(void)

void FUN_146141072(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  int local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = param_1 + 0x30;
  cVar2 = FUN_144729dda(param_1);
  if (cVar2 != '\0') {
    FUN_1400021e4(&DAT_14cbe51a0,&local_50);
    puVar4 = local_50;
    if (local_48 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_40,L"UI.State.%s",puVar4);
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(local_30,iVar1,local_40,1);
    FUN_1447683ea(local_28,local_30,1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar3 = FUN_14479d2ce(param_1);
    cVar2 = FUN_140426394(lVar3 + 0x3c0,local_28);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(param_1);
      FUN_140c125e6(lVar3 + 0x3c0,local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14614117e FUN_14614117e body=490 status=ok
// SIG undefined FUN_14614117e(void)

void FUN_14614117e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort *puVar3;
  longlong *plVar4;
  
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_1401b9920(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    FUN_140cd20a6(param_1 + 0xf8,0);
  }
  FUN_1401b9920(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_140cd20a6(param_1 + 0x108,0);
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_1408be2c4(param_1 + 0x128,0);
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_1408be2c4(param_1 + 0x118,0);
  }
  plVar4 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar4;
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0xc0) = (int)plVar4[1];
  plVar4 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar4;
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 200) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0xd0) = (int)plVar4[1];
  FUN_14020fad6(param_1 + 0xd8,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0xe8,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  FUN_14020fad6(param_1 + 0x138,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0x148,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0x158,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0x168,&DAT_149dfb77a);
  puVar3 = *(ushort **)(param_1 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 146141368 FUN_146141368 body=184 status=ok
// SIG undefined FUN_146141368(void)

void FUN_146141368(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x8c) & 0x80) != 0) &&
     (lVar2 = *(longlong *)(param_1 + 0x288), lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 0xb4);
    iVar3 = iVar1 + 1;
    *(int *)(lVar2 + 0xb4) = iVar3;
    *(undefined1 *)(lVar2 + 0xb1) = 1;
    if ((iVar1 < -1) || (*(int *)(lVar2 + 0x100) <= iVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    FUN_14624c758(param_1);
    FUN_1400b22c2(local_28,"OnMenuTutorialSequenceNext");
    FUN_140de1078(param_1,local_28,0,0);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146141548 FUN_146141548 body=1220 status=ok
// SIG undefined FUN_146141548(void)

void FUN_146141548(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70 [24];
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = *(longlong *)(param_1 + 0xc18);
  if ((((lVar9 == 0) || (*(longlong *)(param_1 + 0xc20) == 0)) ||
      (*(longlong *)(param_1 + 3000) != 0)) || (*(char *)(param_1 + 0x178) != '\x03'))
  goto LAB_146141762;
  lVar11 = *(longlong *)(lVar9 + 0x5d8);
  if (lVar11 == 0) {
    uVar7 = FUN_14043db3a();
    lVar11 = FUN_14477b664(uVar7);
    *(longlong *)(lVar9 + 0x5d8) = lVar11;
  }
  lVar8 = *(longlong *)(lVar9 + 0x5e0);
  if (lVar8 == 0) {
    lVar8 = 0;
    if ((lVar11 != 0) && (*(longlong *)(lVar9 + 0x5d0) != 0)) {
      plVar2 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 == '\0')) {
        *(undefined8 *)(lVar9 + 0x5e0) = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar9 + 0x5d0));
        *(longlong *)(lVar9 + 0x5e0) = lVar8;
        if (lVar8 != 0) goto LAB_14614161c;
      }
      lVar8 = 0;
    }
LAB_146141635:
    lVar11 = *(longlong *)(param_1 + 0xc20);
    puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0xc18) + 8);
    puVar12 = &DAT_14c9485f0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar12 = puVar3;
    }
    FUN_1447325ac(puVar12,&local_40,1);
    if (*(int *)(lVar11 + 0x1e8) != *(int *)(lVar11 + 0x214)) {
      uVar5 = (uint)((ulonglong)local_40 >> 0x10);
      uVar13 = (uint)local_40 & 0xffff;
      lVar9 = lVar11 + 0x218;
      if (*(longlong *)(lVar11 + 0x220) != 0) {
        lVar9 = *(longlong *)(lVar11 + 0x220);
      }
      iVar15 = *(int *)(lVar9 + (ulonglong)
                                (*(int *)(lVar11 + 0x228) - 1U &
                                (int)((ulonglong)local_40 >> 0x20) +
                                ((uint)local_40 << 0x10 | uVar13) + (uVar5 << 0x13 | uVar5 & 0xffff)
                                + (uVar13 >> 4)) * 4);
      if (iVar15 != -1) {
        lVar9 = 0;
        do {
          plVar2 = (longlong *)(*(longlong *)(lVar11 + 0x1e0) + (longlong)iVar15 * 0x28);
          if (*plVar2 == local_40) {
            plVar14 = plVar2 + 1;
            if (plVar14 == (longlong *)0x0 || plVar2 == (longlong *)0x0) goto LAB_146141674;
            lVar11 = plVar2[2];
            if (lVar11 == 0) {
              uVar7 = FUN_14043db3a();
              lVar11 = FUN_14477b664(uVar7);
              plVar2[2] = lVar11;
            }
            lVar9 = plVar2[3];
            if (plVar2[3] == 0) {
              lVar9 = 0;
              if ((lVar11 != 0) && (lVar9 = 0, *plVar14 != 0)) {
                plVar4 = *(longlong **)(lVar11 + 0xb8);
                if ((plVar4 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                  lVar9 = 0;
                }
                else {
                  uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
                  lVar9 = FUN_144aff482(uVar7,plVar14);
                }
                plVar2[3] = lVar9;
              }
            }
            break;
          }
          iVar15 = (int)plVar2[4];
        } while (iVar15 != -1);
        goto LAB_146141676;
      }
    }
LAB_146141674:
    lVar9 = 0;
  }
  else {
LAB_14614161c:
    lVar9 = FUN_146141a0e(lVar8,*(longlong *)(param_1 + 0xc20) + 0x230);
    if (lVar9 == 0) goto LAB_146141635;
  }
LAB_146141676:
  if (lVar9 != 0) {
    lVar8 = lVar9;
  }
  if (lVar8 == 0) goto LAB_146141762;
  lVar9 = FUN_1411aa7cb(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar9);
  }
  *(longlong *)(param_1 + 3000) = lVar9;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  uVar7 = FUN_14043db3a();
  plStack_50 = (longlong *)FUN_14477b664(uVar7);
  uVar7 = FUN_14043db3a();
  uVar10 = FUN_14043db3a();
  FUN_1402d1bfa(&local_38,uVar10,lVar8);
  if (local_58 != local_38) {
    local_48 = 0;
  }
  local_58 = local_38;
  uVar10 = FUN_14043db3a();
  lVar11 = FUN_141459e9e(uVar7,uVar10);
  if (plStack_50 != (longlong *)lVar11) {
    local_48 = 0;
  }
  uVar7 = FUN_14477b664(lVar11);
  plStack_50 = (longlong *)FUN_14477b664(uVar7);
  if ((local_38 != 0) && (plStack_50 != (longlong *)0x0)) {
    local_48 = lVar8;
  }
  FUN_1411aa87e(lVar9,param_1 + 0x3e0,&local_58);
  if (*(longlong *)(param_1 + 0xba8) != 0) goto LAB_146141762;
  uVar7 = FUN_1447210f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0xc18) + 0x168))(*(longlong **)(param_1 + 0xc18),local_70);
  local_78 = 1;
  FUN_14035b3c6(&local_58,local_70,param_1 + 0x3d8,uVar7);
  plVar2 = plStack_50;
  if (plStack_50 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0xba8) = local_58;
    plVar14 = *(longlong **)(param_1 + 0xbb0);
    if (plVar14 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xbb0) = 0;
LAB_1461418f9:
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar15 = *piVar1;
        UNLOCK();
joined_r0x0001461419c6:
        if (iVar15 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0xba8) = local_58;
    plVar14 = *(longlong **)(param_1 + 0xbb0);
    if (plStack_50 == plVar14) {
      LOCK();
      plVar14 = plStack_50 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar15 = *piVar1;
        UNLOCK();
        plVar14 = plVar2;
        goto joined_r0x0001461419c6;
      }
    }
    else {
      *(longlong **)(param_1 + 0xbb0) = plStack_50;
      if (plVar14 != (longlong *)0x0) goto LAB_1461418f9;
    }
  }
  plVar2 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_50 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_146141762:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146141a0e FUN_146141a0e body=87 status=ok
// SIG undefined FUN_146141a0e(void)

longlong FUN_146141a0e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0 || (longlong)*(int *)(param_1 + 0xb0) == 0) {
    return 0;
  }
  lVar2 = 0;
  while ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar2),
         *(longlong *)(lVar1 + 0xa0) == 0 || (*(longlong *)(lVar1 + 0xb8) != *param_2))) {
    lVar2 = lVar2 + 8;
    if ((longlong)*(int *)(param_1 + 0xb0) * 8 == lVar2) {
      return 0;
    }
  }
  return lVar1;
}



// FUNCTION 146141a66 FUN_146141a66 body=331 status=ok
// SIG undefined FUN_146141a66(void)

undefined8 *
FUN_146141a66(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8,
             undefined4 *param_9,longlong param_10)

{
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 *local_150;
  undefined4 *local_148;
  undefined1 *local_140;
  undefined4 local_130;
  char local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char local_110;
  undefined1 local_108 [208];
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b4227d0;
  local_38 = *(char *)(param_10 + 0xd0);
  if (local_38 == '\x01') {
    FUN_1418a644c(local_108);
  }
  local_110 = *(char *)(param_9 + 6);
  if (local_110 == '\x01') {
    local_118 = *(undefined8 *)(param_9 + 4);
    local_128 = *param_9;
    uStack_124 = param_9[1];
    uStack_120 = param_9[2];
    uStack_11c = param_9[3];
  }
  local_12c = *(char *)(param_8 + 1);
  if (local_12c == '\x01') {
    local_130 = *param_8;
  }
  local_168 = *param_5;
  local_140 = local_108;
  local_148 = &local_128;
  local_150 = &local_130;
  local_158 = param_7;
  local_160 = param_6;
  FUN_1415e3b80(param_1 + 2,param_2,*param_3,*param_4);
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146141bb2 FUN_146141bb2 body=38 status=ok
// SIG undefined FUN_146141bb2(void)

undefined8 FUN_146141bb2(undefined8 param_1,int param_2)

{
  FUN_146141bd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146141bd8 FUN_146141bd8 body=94 status=ok
// SIG undefined FUN_146141bd8(void)

void FUN_146141bd8(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14aa35ce0;
  if (((param_1[0xe] != 0) && (param_1[0xc] != 0)) &&
     (lVar1 = *(longlong *)(param_1[0xc] + 0x38), lVar1 != 0)) {
    FUN_1411dc7ca(lVar1 + 0x70);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_146141c36(param_1 + 2);
  return;
}



// FUNCTION 146141c36 FUN_146141c36 body=55 status=ok
// SIG undefined FUN_146141c36(void)

void FUN_146141c36(longlong *param_1)

{
  FUN_1402048d8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146141c7e FUN_146141c7e body=366 status=ok
// SIG undefined FUN_146141c7e(void)

undefined8 * FUN_146141c7e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1412c18ae();
  *param_1 = &PTR_FUN_14bd922e0;
  param_1[5] = &PTR_FUN_14bd926a0;
  param_1[0x13] = &PTR_FUN_14bd926c0;
  param_1[0x17] = &PTR_FUN_14bd926f0;
  param_1[0x18] = &PTR_FUN_14bd92730;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x1e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3ff00000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0x3ff0000000000000;
  param_1[0x36] = 0x3ff0000000000000;
  param_1[0x37] = 0;
  param_1[0x38] = 0x7fefffffffffffff;
  param_1[0x39] = 0x7fefffffffffffff;
  param_1[0x3a] = 0x7fefffffffffffff;
  param_1[0x3b] = 0xffefffffffffffff;
  param_1[0x3c] = 0xffefffffffffffff;
  param_1[0x3d] = 0xffefffffffffffff;
  param_1[0x3e] = 0x7fefffffffffffff;
  param_1[0x3f] = 0x7fefffffffffffff;
  param_1[0x40] = 0x7fefffffffffffff;
  param_1[0x41] = 0xffefffffffffffff;
  param_1[0x42] = 0xffefffffffffffff;
  param_1[0x43] = 0xffefffffffffffff;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3ff00000;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0x3ff0000000000000;
  param_1[0x51] = 0x3ff0000000000000;
  param_1[0x52] = 0x3ff0000000000000;
  param_1[0x53] = 0;
  return param_1;
}



// FUNCTION 146141dec FUN_146141dec body=317 status=ok
// SIG undefined FUN_146141dec(void)

void FUN_146141dec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146141f2a(local_18,local_20,local_21);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146141f2a FUN_146141f2a body=238 status=ok
// SIG undefined FUN_146141f2a(void)

void FUN_146141f2a(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    FUN_141031670(0,&local_48);
    if ((longlong)(int)uStack_40 != 0) {
      plVar1 = local_48 + (int)uStack_40;
      plVar3 = local_48;
      do {
        lVar2 = *plVar3;
        if (lVar2 == 0) goto LAB_146141f8a;
        if (param_2 == 0) {
LAB_146141f85:
          FUN_1415e434e();
        }
        else if (param_3 == '\0') {
          lVar2 = *(longlong *)(lVar2 + 0x34c);
joined_r0x00014614200e:
          if (lVar2 == param_2) goto LAB_146141f85;
        }
        else if (param_3 == '\x02') {
          if ((longlong)*(int *)(lVar2 + 0x78) != 0) {
            lVar4 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0x70) + lVar4) == param_2) goto LAB_146141f85;
              lVar4 = lVar4 + 8;
            } while ((longlong)*(int *)(lVar2 + 0x78) * 8 != lVar4);
          }
        }
        else if (param_3 == '\x01') {
          lVar2 = *(longlong *)(lVar2 + 0x128);
          goto joined_r0x00014614200e;
        }
LAB_146141f8a:
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614201a FUN_14614201a body=289 status=ok
// SIG undefined FUN_14614201a(void)

undefined4 * FUN_14614201a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
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
  FUN_1461421ee(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  FUN_1447a97f4(local_40,*param_3);
  *(undefined1 *)(local_40 + 10) = *puVar1;
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_14614213c(param_1,uVar5,local_40,&local_4c);
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
      local_40[0xd] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1461422d2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614213c FUN_14614213c body=178 status=ok
// SIG undefined FUN_14614213c(void)

undefined8 FUN_14614213c(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          if (*(longlong *)(piVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1489b513a(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461421ee FUN_1461421ee body=227 status=ok
// SIG undefined FUN_1461421ee(void)

int * FUN_1461421ee(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1461422d2 FUN_1461422d2 body=428 status=ok
// SIG undefined FUN_1461422d2(void)

void FUN_1461422d2(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 146142480 FUN_146142480 body=9 status=ok
// SIG undefined FUN_146142480(void)

void FUN_146142480(longlong param_1)

{
  FUN_14614248a(param_1 + 0x10);
  return;
}



// FUNCTION 14614248a FUN_14614248a body=553 status=ok
// SIG undefined FUN_14614248a(void)

void FUN_14614248a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b648a00;
  param_1[0xe] = &PTR_FUN_14b648a70;
  param_1[0x12] = &PTR_FUN_14b648a90;
  if (*(char *)((longlong)param_1 + 0x50c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x50c) = 0;
  }
  plVar3 = (longlong *)param_1[0x99];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x94];
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
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x89];
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
  plVar3 = (longlong *)param_1[0x87];
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
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_14076ba26(param_1 + 0x1d);
  FUN_1449e6b18((longlong)param_1 + 0xd4);
  FUN_1449e6b18(param_1 + 0x19);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  param_1[0x12] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x12);
  param_1[0xe] = &PTR_LAB_14b242fd0;
  plVar3 = (longlong *)param_1[0x10];
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
  FUN_1458a09d4(param_1);
  return;
}



// FUNCTION 1461426b3 FUN_1461426b3 body=72 status=ok
// SIG undefined FUN_1461426b3(void)

void FUN_1461426b3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ade70a0;
  puVar1[5] = &PTR_LAB_14ade7340;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 2;
  FUN_1461426fc(puVar1 + 9);
  return;
}



// FUNCTION 1461426fc FUN_1461426fc body=678 status=ok
// SIG undefined FUN_1461426fc(void)

undefined2 * FUN_1461426fc(undefined2 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x101;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x10001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 0x101;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 3;
  *(undefined8 *)(param_1 + 0x3e) = 1;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x4c] = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0x20;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 100) = 0x40c3880000000000;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0x3c3f800000;
  *(undefined8 *)(param_1 + 0x74) = 0x25800000000;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0x43fa0000;
  *(undefined8 *)(param_1 + 0x7c) = 0x407f400000000000;
  *(undefined8 *)(param_1 + 0x80) = 0x407f400000000000;
  *(undefined1 **)(param_1 + 0x84) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x88) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x8c) = &DAT_100000004;
  *(undefined8 *)(param_1 + 0x90) = 0x403e000000000000;
  *(undefined8 *)(param_1 + 0x94) = 0x4062c00000000000;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x9a] = 0;
  uVar1 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x9c) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa6] = 0;
  uVar1 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0xa8) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0xac) = uVar1;
  param_1[0xb0] = 0x100;
  *(undefined8 *)(param_1 + 0xb2) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined4 *)(param_1 + 0xba) = 0x3f000000;
  *(undefined8 *)(param_1 + 0xbc) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xc0) = 0x3f80000000000000;
  *(undefined1 **)(param_1 + 0xc4) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 200) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0xcc) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0xd0) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd6) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0xd8) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xda) = 0x3f800000;
  *(undefined1 **)(param_1 + 0xdc) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0xe0) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0xe4) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0xe8) = &DAT_3f8000003f800000;
  builtin_strncpy((char *)(param_1 + 0xec),"fff?",4);
  builtin_strncpy((char *)(param_1 + 0xee),"333?",4);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf6) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0xf8) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xfa) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xfc) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0x4069000000000000;
  *(undefined8 *)(param_1 + 0x108) = 0x4069000000000000;
  *(undefined8 *)(param_1 + 0x10c) = 0x406fe00000000000;
  *(undefined8 *)(param_1 + 0x110) = 0x406fe00000000000;
  *(undefined8 *)(param_1 + 0x114) = 0x406fe00000000000;
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0x3e800000;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0x3f800000;
  FUN_14020fad6(param_1 + 0x24,&DAT_149e060b2);
  FUN_14020fad6(param_1 + 0x30,&DAT_149e060b2);
  FUN_14020fad6(param_1 + 0xc,&DAT_149e060b2);
  FUN_14020fad6(param_1 + 0x18,&DAT_149e060b2);
  return param_1;
}



// FUNCTION 1461429a2 FUN_1461429a2 body=65 status=ok
// SIG undefined FUN_1461429a2(void)

void FUN_1461429a2(longlong param_1)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1461429e4(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1461429e4 FUN_1461429e4 body=75 status=ok
// SIG undefined FUN_1461429e4(void)

void FUN_1461429e4(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x80) != -1) {
    lVar1 = FUN_1458d9664(param_1,0xffffffff);
    if (lVar1 != 0) {
      lVar1 = FUN_145da44aa(lVar1);
      if (lVar1 != 0) {
        FUN_146142a30(lVar1,*(undefined4 *)(param_1 + 0x80));
      }
    }
    *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  }
  return;
}



// FUNCTION 146142a30 FUN_146142a30 body=234 status=ok
// SIG undefined FUN_146142a30(void)

void FUN_146142a30(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1402815f4();
  plVar4 = *(longlong **)(local_40 + 0x160);
  AcquireSRWLockExclusive((PSRWLOCK)(plVar4 + 4));
  *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
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
  uVar3 = *(uint *)(plVar4 + 1);
  if (0 < (int)uVar3) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      if (*(int *)(*plVar4 + lVar6) == param_2) {
        if ((uVar5 < uVar3) &&
           (FUN_145be4292(plVar4,uVar5,CONCAT71((int7)((ulonglong)uVar3 * 200 >> 8),1)),
           (int)plVar4[1] == 0)) {
          FUN_145be43ec(param_1);
        }
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 200;
    } while ((ulonglong)uVar3 * 200 - lVar6 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000146142ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar4 + 4));
  return;
}



// FUNCTION 146142b1c FUN_146142b1c body=418 status=ok
// SIG undefined FUN_146142b1c(void)

undefined4 * FUN_146142b1c(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146142cc0(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  *local_38 = *puVar2;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 2) = *puVar3;
  local_38[3] = *(undefined8 *)(puVar3 + 2);
  lVar12 = *(longlong *)(puVar3 + 4);
  local_38[4] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  *(undefined2 *)(local_38 + 5) = *(undefined2 *)(puVar3 + 6);
  *(undefined4 *)(local_38 + 6) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  cVar7 = FUN_146142da4(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x34) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 6) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_146142ea8(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146142cc0 FUN_146142cc0 body=227 status=ok
// SIG undefined FUN_146142cc0(void)

int * FUN_146142cc0(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 146142da4 FUN_146142da4 body=259 status=ok
// SIG undefined FUN_146142da4(void)

undefined8 FUN_146142da4(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar17 = FUN_145cf801a(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar17 = FUN_145cf801a(param_1);
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
    if (iVar17 != -1) {
      lVar5 = *param_1;
      lVar19 = (longlong)iVar17 * 0x38;
      FUN_145819b76(lVar5 + lVar19);
      uVar6 = *(undefined4 *)param_3;
      uVar7 = *(undefined4 *)((longlong)param_3 + 4);
      uVar8 = *(undefined4 *)(param_3 + 1);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar10 = *(undefined4 *)(param_3 + 2);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar12 = *(undefined4 *)(param_3 + 3);
      uVar13 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar14 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar15 = *(undefined4 *)(param_3 + 5);
      uVar16 = *(undefined4 *)((longlong)param_3 + 0x2c);
      puVar3 = (undefined4 *)(lVar5 + 0x20 + lVar19);
      *puVar3 = *(undefined4 *)(param_3 + 4);
      puVar3[1] = uVar14;
      puVar3[2] = uVar15;
      puVar3[3] = uVar16;
      puVar3 = (undefined4 *)(lVar5 + 0x10 + lVar19);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = (undefined4 *)(lVar5 + lVar19);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      FUN_148a7129a(param_1,*param_4);
      *param_4 = iVar17;
      uVar18 = 1;
      goto LAB_146142e13;
    }
  }
  uVar18 = 0;
LAB_146142e13:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146142ea8 FUN_146142ea8 body=500 status=ok
// SIG undefined FUN_146142ea8(void)

void FUN_146142ea8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x38;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 0x34) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x30) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14614309e FUN_14614309e body=205 status=ok
// SIG undefined FUN_14614309e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14614309e(void)

{
  if ((DAT_14ca839e7 & 2) == 0) {
    DAT_14ca839e7 = DAT_14ca839e7 | 2;
    _DAT_14ca83988 = L"FRHIUniformBufferResourceInitializer";
    _DAT_14ca839a0 = FUN_146826540;
    _DAT_14ca839a8 = FUN_146825d77;
    _DAT_14ca839b0 = FUN_146825fd6;
    _DAT_14ca839b8 = FUN_1407e02ea;
    _DAT_14ca839c0 = FUN_146826273;
    _DAT_14ca83998 = &LAB_14741219e;
    _DAT_14ca839d8 = 0xffffffff00000004;
    _DAT_14ca839e0 = 2;
    DAT_14ca839e4 = 0;
    _DAT_14ca839c8 = &LAB_1474121a6;
    FUN_14614316c();
    FUN_1407e00cc(&DAT_14ca83980);
    return;
  }
  return;
}



// FUNCTION 14614316c FUN_14614316c body=276 status=ok
// SIG undefined FUN_14614316c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14614316c(void)

{
  FUN_146143280();
  _DAT_14ca849e0 = L"MemberOffset";
  DAT_14ca84a0a = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca849e8 = &DAT_14ca84cb0;
  _DAT_14ca849f8 = &LAB_14682652b;
  _DAT_14ca84a00 = 0x100000000;
  _DAT_14ca84a08 = 0;
  _DAT_14ca849f0 = DAT_14ca83990;
  DAT_14ca83990 = &DAT_14ca849e0;
  return;
}



// FUNCTION 146143280 FUN_146143280 body=270 status=ok
// SIG undefined FUN_146143280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146143280(void)

{
  _DAT_14ca84a10 = L"MemberType";
  DAT_14ca84a3a = FUN_140850cc5();
  if ((DAT_14ca84aa7 & 2) == 0) {
    DAT_14ca84aa7 = DAT_14ca84aa7 | 3;
    _DAT_14ca84a48 = L"EUniformBufferBaseType";
    _DAT_14ca84a60 = &LAB_1474141a8;
    _DAT_14ca84a68 = &LAB_1474141b4;
    _DAT_14ca84a70 = &LAB_1474141c0;
    _DAT_14ca84a78 = &LAB_1474141c6;
    _DAT_14ca84a80 = &LAB_1474141ca;
    _DAT_14ca84a58 = &LAB_1474141d0;
    _DAT_14ca84a98 = &DAT_100000001;
    _DAT_14ca84aa0 = 1;
    DAT_14ca84aa4 = 0;
  }
  _DAT_14ca84a18 = &DAT_14ca84a40;
  _DAT_14ca84a28 = &LAB_14682652b;
  _DAT_14ca84a30 = &DAT_100000002;
  _DAT_14ca84a38 = 0;
  _DAT_14ca84a20 = DAT_14ca83990;
  DAT_14ca83990 = &DAT_14ca84a10;
  return;
}



// FUNCTION 14614338e FUN_14614338e body=205 status=ok
// SIG undefined FUN_14614338e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14614338e(void)

{
  if ((DAT_14ca4d0df & 2) == 0) {
    DAT_14ca4d0df = DAT_14ca4d0df | 2;
    _DAT_14ca4d080 = L"FDebugUniformExpressionSet";
    _DAT_14ca4d098 = FUN_146826540;
    _DAT_14ca4d0a0 = FUN_146825d77;
    _DAT_14ca4d0a8 = FUN_146825fd6;
    _DAT_14ca4d0b0 = FUN_1407e02ea;
    _DAT_14ca4d0b8 = FUN_146826273;
    _DAT_14ca4d090 = &LAB_1472ea20e;
    _DAT_14ca4d0d0 = 0xffffffff00000020;
    _DAT_14ca4d0d8 = 4;
    DAT_14ca4d0dc = 0;
    _DAT_14ca4d0c0 = &LAB_1472ea21e;
    FUN_14614345c();
    FUN_1407e00cc(&DAT_14ca4d078);
    return;
  }
  return;
}



// FUNCTION 14614345c FUN_14614345c body=276 status=ok
// SIG undefined FUN_14614345c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14614345c(void)

{
  FUN_146143570();
  _DAT_14ca55cc0 = L"NumPreshaders";
  DAT_14ca55cea = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14ca55cc8 = &DAT_14c951bf8;
  _DAT_14ca55cd8 = &LAB_14682652b;
  _DAT_14ca55ce0 = 0x100000000;
  _DAT_14ca55ce8 = 0;
  _DAT_14ca55cd0 = DAT_14ca4d088;
  DAT_14ca4d088 = &DAT_14ca55cc0;
  return;
}



// FUNCTION 146143570 FUN_146143570 body=271 status=ok
// SIG undefined FUN_146143570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146143570(void)

{
  _DAT_14ca55cf0 = L"NumTextureExpressions";
  DAT_14ca55d1a = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14ca55cf8 = &DAT_14c951bf8;
  _DAT_14ca55d08 = &LAB_14682652b;
  _DAT_14ca55d10 = 0x700000004;
  _DAT_14ca55d18 = 0;
  _DAT_14ca55d00 = DAT_14ca4d088;
  DAT_14ca4d088 = &DAT_14ca55cf0;
  return;
}



// FUNCTION 146143680 FUN_146143680 body=205 status=ok
// SIG undefined FUN_146143680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146143680(void)

{
  if ((DAT_14ca982ef & 2) == 0) {
    DAT_14ca982ef = DAT_14ca982ef | 2;
    _DAT_14ca98290 = L"FShaderLooseParameterInfo";
    _DAT_14ca982a8 = FUN_146826540;
    _DAT_14ca982b0 = FUN_146825d77;
    _DAT_14ca982b8 = FUN_146825fd6;
    _DAT_14ca982c0 = FUN_1407e02ea;
    _DAT_14ca982c8 = FUN_146826273;
    _DAT_14ca982a0 = &LAB_1474323b2;
    _DAT_14ca982e0 = 0xffffffff00000004;
    _DAT_14ca982e8 = 2;
    DAT_14ca982ec = 0;
    _DAT_14ca982d0 = &LAB_1474323ba;
    FUN_14614374e();
    FUN_1407e00cc(&DAT_14ca98288);
    return;
  }
  return;
}



// FUNCTION 14614374e FUN_14614374e body=276 status=ok
// SIG undefined FUN_14614374e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14614374e(void)

{
  FUN_146143862();
  _DAT_14ca99aa8 = L"BaseIndex";
  DAT_14ca99ad2 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca99ab0 = &DAT_14ca84cb0;
  _DAT_14ca99ac0 = &LAB_14682652b;
  _DAT_14ca99ac8 = 0x100000000;
  _DAT_14ca99ad0 = 0;
  _DAT_14ca99ab8 = DAT_14ca98298;
  DAT_14ca98298 = &DAT_14ca99aa8;
  return;
}



// FUNCTION 146143862 FUN_146143862 body=271 status=ok
// SIG undefined FUN_146143862(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146143862(void)

{
  _DAT_14ca99ad8 = L"Size";
  DAT_14ca99b02 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca99ae0 = &DAT_14ca84cb0;
  _DAT_14ca99af0 = &LAB_14682652b;
  _DAT_14ca99af8 = &DAT_100000002;
  _DAT_14ca99b00 = 0;
  _DAT_14ca99ae8 = DAT_14ca98298;
  DAT_14ca98298 = &DAT_14ca99ad8;
  return;
}



// FUNCTION 146143972 FUN_146143972 body=21 status=ok
// SIG undefined FUN_146143972(void)

undefined8 FUN_146143972(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146143988 FUN_146143988 body=40 status=ok
// SIG undefined FUN_146143988(void)

undefined8 FUN_146143988(undefined8 param_1,int param_2)

{
  FUN_1461439b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461439b0 FUN_1461439b0 body=336 status=ok
// SIG undefined FUN_1461439b0(void)

void FUN_1461439b0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5e6170;
  param_1[0x72] = &PTR_FUN_14b5e67b0;
  param_1[0x73] = &PTR_FUN_14b5e6820;
  param_1[0x74] = &PTR_FUN_14b5e6890;
  param_1[0x75] = &PTR_FUN_14b5e68c0;
  param_1[0x76] = &PTR_FUN_14b5e68f0;
  plVar3 = (longlong *)param_1[0x15a];
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
  FUN_14076ba26(param_1 + 0x10a);
  if (param_1[0xfe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xfc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xfa] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7b38(param_1 + 0xec);
  FUN_1403d7bbc(param_1 + 0xdc);
  param_1[0x98] = &PTR_FUN_14b5eae70;
  if (param_1[0xa0] != 0) {
    FUN_140872868(param_1 + 0x98);
  }
  FUN_1403d7c6c(param_1 + 0x98);
  FUN_1403d7d90(param_1 + 0x77);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 146143b00 FUN_146143b00 body=216 status=ok
// SIG undefined FUN_146143b00(void)

undefined8 * FUN_146143b00(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0xdf0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b9816f0;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0xde0);
  FUN_14602a786(plVar1);
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_146143bdc(&local_30,plVar1);
  plVar3 = local_28;
  *param_1 = plVar1;
  param_1[1] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146143bdc FUN_146143bdc body=157 status=ok
// SIG undefined FUN_146143bdc(void)

void FUN_146143bdc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_146143c16;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_146143c16;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146143c16:
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
                    /* WARNING: Could not recover jumptable at 0x000146143c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146143c7a FUN_146143c7a body=186 status=ok
// SIG undefined FUN_146143c7a(void)

void FUN_146143c7a(undefined8 param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar2 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"MVVM.DefaultExecutionMode",1);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2);
    if (3 < uVar1) {
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
      FUN_140635eb8(plVar2,3,uVar1 & 0xff000000,0);
    }
    uVar3 = (**(code **)(*plVar2 + 0xd0))(plVar2);
    FUN_146143d36(uVar3,local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146143d36 FUN_146143d36 body=189 status=ok
// SIG undefined FUN_146143d36(void)

undefined8 FUN_146143d36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e170a0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b55ac40;
  puVar1[3] = param_3;
  puVar1[4] = FUN_148b11ffa;
  FUN_14110d2ba(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146143dfc FUN_146143dfc body=368 status=ok
// SIG undefined FUN_146143dfc(void)

undefined8 * FUN_146143dfc(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bec68f0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
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
  *(undefined2 *)(param_1 + 0x28) = 0;
  FUN_144a91fee(&local_48,"IKRig_",*(undefined4 *)((longlong)param_1 + 0xc));
  local_40 = L"IKRigLogName";
  local_38 = 0xc;
  FUN_1446e940c(local_4c,&local_40);
  local_40 = L"IKRigProcessor";
  local_38 = 0xe;
  FUN_1446e940c(local_50,&local_40);
  FUN_140208bae(&local_40,local_50,local_4c,L"IK Rig Log");
  param_1[5] = local_48;
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146143f6e FUN_146143f6e body=95 status=ok
// SIG undefined FUN_146143f6e(void)

void FUN_146143f6e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146143fce FUN_146143fce body=67 status=ok
// SIG undefined FUN_146143fce(void)

void FUN_146143fce(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_141433230(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1414b04be(param_1);
    return;
  }
  FUN_146144012(param_1);
  FUN_141433230(param_1,0);
  return;
}



// FUNCTION 146144012 FUN_146144012 body=325 status=ok
// SIG undefined FUN_146144012(void)

void FUN_146144012(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 146144164 FUN_146144164 body=367 status=ok
// SIG undefined FUN_146144164(void)

undefined8 * FUN_146144164(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14b44d1e0;
  param_1[5] = &PTR_FUN_14b44d4f0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_141067f4a(param_1 + 0x32);
  param_1[0x32] = &PTR_FUN_14b4549a0;
  memset(param_1 + 0x37,0,0x88);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0x2d000000500;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined2 *)(param_1 + 0x57) = 1;
  *(undefined8 *)((longlong)param_1 + 700) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 200;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0x41000000;
  *(undefined2 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2df) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  FUN_140cbebe8(param_1 + 0x32,0);
  *(undefined1 *)((longlong)param_1 + 0x242) = 1;
  *(undefined1 *)(param_1 + 0x48) = 1;
  param_1[0x4f] = 0;
  plVar3 = (longlong *)param_1[0x50];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x50] = 0;
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



// FUNCTION 1461442d4 FUN_1461442d4 body=229 status=ok
// SIG undefined FUN_1461442d4(void)

void FUN_1461442d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14614446e(param_2,param_3,param_4);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_1461443cc(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461443cc FUN_1461443cc body=162 status=ok
// SIG undefined FUN_1461443cc(void)

void FUN_1461443cc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14614440b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14614440b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14614440b:
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
                    /* WARNING: Could not recover jumptable at 0x00014614446a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14614446e FUN_14614446e body=157 status=ok
// SIG undefined FUN_14614446e(void)

undefined8 * FUN_14614446e(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b4f0e40;
  local_38 = *param_3;
  *param_3 = 0;
  local_30 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  FUN_146076bde(puVar1 + 2,*param_1,*param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614450c FUN_14614450c body=68 status=ok
// SIG undefined FUN_14614450c(void)

void FUN_14614450c(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x158);
  memset(_Dst,0,0x158);
  FUN_146144550(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146144550 FUN_146144550 body=309 status=ok
// SIG undefined FUN_146144550(void)

undefined8 * FUN_146144550(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8d7990;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  FUN_1400b22c2(&local_30,&DAT_149dfd150);
  param_1[0x1a] = local_30;
  *(undefined4 *)(param_1 + 0x1b) = local_28;
  *(undefined4 *)((longlong)param_1 + 0xdc) = local_24;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x1e] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1f) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614469a FUN_14614469a body=371 status=ok
// SIG undefined FUN_14614469a(void)

undefined8 * FUN_14614469a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1412202b0();
  *param_1 = &PTR_FUN_14af0b8f0;
  param_1[6] = &PTR_FUN_14af0bbc0;
  param_1[7] = &PTR_FUN_14af0bbe0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 2;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined8 *)((longlong)param_1 + 0x171) = 0;
  *(undefined8 *)((longlong)param_1 + 0x179) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x200000001;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x51] = DAT_14c8464e0;
  param_1[0x52] = uVar1;
  param_1[0x56] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return param_1;
}



// FUNCTION 14614480e FUN_14614480e body=440 status=ok
// SIG undefined FUN_14614480e(void)

void FUN_14614480e(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + 8;
  cVar5 = FUN_144729dda(lVar1);
  if (cVar5 != '\0') {
    lVar6 = FUN_14479d2ce(lVar1);
    lVar6 = *(longlong *)(lVar6 + 0x430);
    if (lVar6 != 0) {
      lVar7 = FUN_140993a2e();
      if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
         (*(longlong *)(param_1 + 0x20) != 0)) {
        lVar7 = FUN_14479d2ce(lVar1);
        lVar7 = *(longlong *)(lVar7 + 0x1c8);
        if (lVar7 == 0) {
          puVar8 = &DAT_14c8464e0;
          uVar9 = DAT_14c8464f0;
        }
        else {
          puVar8 = (undefined8 *)(lVar7 + 0x260);
          uVar9 = *(undefined8 *)(lVar7 + 0x270);
        }
        uVar2 = *(undefined4 *)((longlong)puVar8 + 4);
        uVar3 = *(undefined4 *)(puVar8 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar8 + 0xc);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)puVar8;
        *(undefined4 *)(param_1 + 0x84) = uVar2;
        *(undefined4 *)(param_1 + 0x88) = uVar3;
        *(undefined4 *)(param_1 + 0x8c) = uVar4;
        *(undefined8 *)(param_1 + 0x90) = uVar9;
        lVar7 = *(longlong *)(param_1 + 0x20);
        lVar10 = 200;
        if ((&DAT_00001100)[lVar6] == '\x01') {
          lVar10 = 0x38;
        }
        local_88 = *(undefined4 *)(lVar7 + 0x78 + lVar10);
        local_90 = *(undefined8 *)(param_1 + 0x40);
        local_80 = *(undefined4 *)(lVar7 + 0xc + lVar10);
        local_98 = param_3;
        local_84 = param_2;
        uVar9 = FUN_14479d2ce(lVar1);
        local_7c = FUN_141313966(lVar7 + lVar10,uVar9);
        local_78 = *(undefined4 *)(lVar7 + 0x20 + lVar10);
        local_74 = *(undefined4 *)(lVar7 + 0x10 + lVar10);
        local_70 = *(undefined4 *)(lVar7 + 0x14 + lVar10);
        local_6c = *(undefined4 *)(lVar7 + 0x18 + lVar10);
        local_68 = *(undefined4 *)(lVar7 + 0x1c + lVar10);
        FUN_1461449c8(lVar6,&local_98);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461449c8 FUN_1461449c8 body=2635 status=ok
// SIG undefined FUN_1461449c8(void)

void FUN_1461449c8(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  double *pdVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_3b8 [32];
  undefined8 local_398;
  undefined8 *local_390;
  undefined1 *local_388;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double local_328;
  double dStack_320;
  double local_318;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  double local_2f8;
  double local_2f0;
  double local_2e8 [16];
  undefined4 local_264;
  undefined4 local_238;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  longlong local_178;
  longlong local_158;
  double local_148;
  double dStack_140;
  double local_138;
  char local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_c8;
  undefined8 local_c4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  lVar8 = *(longlong *)(param_1 + 0xb0);
  if ((lVar8 == 0) && (lVar8 = FUN_1448abda6(param_1), lVar8 == 0)) goto LAB_146145060;
  local_1f0 = 0;
  local_1e8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_1e0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_1d8 = DAT_14c8464f0;
  local_1d0 = 0x13f800000;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_110 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_108 = DAT_14c8464f0;
  local_e8 = 0;
  local_e0 = 0x3f800000;
  local_dc = 0;
  local_d8 = 0xbf80000041200000;
  local_d0 = 0;
  local_cc = 0x100;
  local_c8 = 0;
  local_c4 = 0x240000000;
  lVar6 = *(longlong *)(param_1 + 0x110);
  if (lVar6 == 0) {
    local_208 = 3.4028234663852886e+38;
    dStack_200 = 3.4028234663852886e+38;
    local_1f8 = 3.4028234663852886e+38;
    uVar18 = 0xe0000000;
    uVar19 = 0x47efffff;
    uVar20 = uVar18;
    uVar21 = uVar19;
    uVar22 = uVar18;
    uVar23 = uVar19;
  }
  else {
    uVar18 = *(undefined4 *)(lVar6 + 0x260);
    uVar19 = *(undefined4 *)(lVar6 + 0x264);
    local_208 = *(double *)(lVar6 + 0x260);
    dStack_200 = *(double *)(lVar6 + 0x268);
    local_1f8 = *(double *)(lVar6 + 0x270);
    uVar20 = (int)*(undefined8 *)(lVar6 + 0x268);
    uVar21 = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x268) >> 0x20);
    uVar22 = SUB84(local_1f8,0);
    uVar23 = (int)((ulonglong)local_1f8 >> 0x20);
  }
  local_130 = '\0';
  lVar6 = FUN_14069ce20(*param_2);
  if (lVar6 == 0) {
LAB_1461450ca:
    local_1d8 = local_1f8;
    local_1e8 = local_208;
    uStack_1e0 = dStack_200;
    memset(&local_308,0,0x100);
    local_238 = 0xffffffff;
    uStack_304 = 0x3f800000;
    local_264 = 0xffffffff;
    local_318 = 0.0;
    local_328 = 0.0;
    dStack_320 = 0.0;
    local_338 = 0.0;
    local_348 = 0.0;
    dStack_340 = 0.0;
    FUN_141313b0e(*(undefined8 *)(&DAT_00001ce8 + param_1),&local_328,&local_348);
    local_398 = *(undefined8 *)(param_1 + 0x1f0);
    FUN_144a886e6(&local_1c8,0,&local_360,0);
    FUN_144a76660(&local_348,&local_378);
    dVar1 = (double)*(float *)((longlong)param_2 + 0x1c);
    local_350 = local_368 * dVar1 + local_318;
    local_358 = local_370 * dVar1 + dStack_320;
    local_360 = dVar1 * local_378 + local_328;
    local_388 = &DAT_14cad0f10;
    local_390 = &local_1c8;
    local_398 = CONCAT44(local_398._4_4_,2);
    cVar5 = FUN_1400b50cc(lVar8,&local_308,&local_328,&local_360);
    dVar1 = local_2f8;
    if ((cVar5 != '\0') && (lVar8 = FUN_14485cccc(), lVar8 == *param_2)) {
      local_2e8[0] = local_2e8[0] - (double)CONCAT44(uVar23,uVar22);
      local_2f0 = local_2f0 - (double)CONCAT44(uVar21,uVar20);
      dVar1 = dVar1 - (double)CONCAT44(uVar19,uVar18);
      fVar17 = (float)SQRT(local_2e8[0] * local_2e8[0] + dVar1 * dVar1 + local_2f0 * local_2f0);
      if (fVar17 < *(float *)(param_2 + 3) || fVar17 == *(float *)(param_2 + 3)) goto LAB_1461452fa;
      dVar16 = 1.0 / (double)fVar17;
      dVar14 = (double)(fVar17 - *(float *)(param_2 + 2));
      local_1d8 = (double)CONCAT44(uVar23,uVar22) + local_2e8[0] * dVar16 * dVar14;
      uStack_1e0 = (double)CONCAT44(uVar21,uVar20) + local_2f0 * dVar16 * dVar14;
      local_1e8 = (double)CONCAT44(uVar19,uVar18) + dVar1 * dVar16 * dVar14;
    }
  }
  else {
    local_308 = CONCAT31(local_308._1_3_,4);
    uStack_304 = (undefined4)param_2[1];
    uStack_300 = (undefined4)((ulonglong)param_2[1] >> 0x20);
    FUN_1400b9382(lVar6,&local_148,&local_308,*param_2);
    local_130 = '\x01';
    if (((((local_148 <= -DAT_14cb76020) || (DAT_14cb76020 <= local_148)) ||
         (dStack_140 <= -DAT_14cb76028)) ||
        ((DAT_14cb76028 <= dStack_140 || (local_138 <= -DAT_14cb76030)))) ||
       (DAT_14cb76030 <= local_138)) {
      local_130 = '\0';
      goto LAB_1461450ca;
    }
    memset(&local_308,0,0x100);
    local_238 = 0xffffffff;
    uStack_304 = 0x3f800000;
    local_264 = 0xffffffff;
    local_398 = *(undefined8 *)(param_1 + 0x1f0);
    FUN_144a886e6(&local_1c8,0,&local_328,0);
    local_388 = &DAT_14cad0f10;
    local_398 = CONCAT44(local_398._4_4_,2);
    local_390 = &local_1c8;
    cVar5 = FUN_1400b50cc(lVar8,&local_308,&local_208,&local_148);
    bVar11 = cVar5 == '\0';
    pdVar9 = &local_2f8;
    if (bVar11) {
      pdVar9 = &local_148;
    }
    pdVar10 = &local_2f0;
    if (bVar11) {
      pdVar10 = &dStack_140;
    }
    pdVar7 = &local_138;
    if (!bVar11) {
      pdVar7 = local_2e8;
    }
    dVar16 = *pdVar7 - local_1f8;
    dVar14 = *pdVar10 - dStack_200;
    dVar1 = *pdVar9 - local_208;
    fVar17 = (float)SQRT(dVar16 * dVar16 + dVar1 * dVar1 + dVar14 * dVar14);
    if (fVar17 < *(float *)(param_2 + 3) || fVar17 == *(float *)(param_2 + 3)) {
LAB_1461452fa:
      local_1d8 = local_1f8;
      local_1e8 = local_208;
      uStack_1e0 = dStack_200;
    }
    else {
      dVar3 = 1.0 / (double)fVar17;
      dVar2 = (double)(fVar17 - *(float *)(param_2 + 2));
      local_1d8 = local_1f8 + dVar16 * dVar3 * dVar2;
      uStack_1e0 = dStack_200 + dVar14 * dVar3 * dVar2;
      local_1e8 = local_208 + dVar1 * dVar3 * dVar2;
    }
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  local_1d0 = CONCAT44(local_1d0._4_4_,*(undefined4 *)((longlong)param_2 + 0x14));
  if ((*(longlong **)(&DAT_00001ce8 + param_1) != (longlong *)0x0) &&
     (cVar5 = (**(code **)(**(longlong **)(&DAT_00001ce8 + param_1) + 0x700))(), cVar5 != '\0')) {
    FUN_14153532c(param_1,&local_1f0);
  }
  if (local_130 == '\x01') {
    local_108 = local_138;
    local_118 = local_148;
    uStack_110 = dStack_140;
    local_2f8 = 0.0;
    local_308 = 0;
    uStack_304 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    local_1b8 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    FUN_141313b0e(*(undefined8 *)(&DAT_00001ce8 + param_1),&local_308,&local_1c8);
    dVar4 = local_108;
    dVar3 = uStack_110;
    dVar2 = local_118;
    dVar1 = local_108 - local_2f8;
    dVar14 = uStack_110 - (double)CONCAT44(uStack_2fc,uStack_300);
    dVar16 = local_118 - (double)CONCAT44(uStack_304,local_308);
    local_328 = dVar16;
    dStack_320 = dVar14;
    local_318 = dVar1;
    FUN_144a76660(&local_1c8,&local_348);
    dVar15 = local_338 * 50.0;
    dVar13 = dStack_340 * 50.0;
    dVar12 = local_348 * 50.0;
    dVar1 = dVar1 * dVar15 + dVar16 * dVar12 + dVar14 * dVar13;
    dVar14 = 1.0 / (dVar15 * dVar15 + dVar12 * dVar12 + dVar13 * dVar13);
    local_108 = dVar15 * dVar1 * dVar14 + local_2f8;
    uStack_110 = dVar13 * dVar1 * dVar14 + (double)CONCAT44(uStack_2fc,uStack_300);
    local_118 = dVar14 * dVar1 * dVar12 + (double)CONCAT44(uStack_304,local_308);
    dVar14 = local_108 - dVar4;
    dVar16 = uStack_110 - dVar3;
    dVar1 = local_118 - dVar2;
    fVar17 = (float)SQRT(dVar14 * dVar14 + dVar1 * dVar1 + dVar16 * dVar16);
    if (*(float *)(param_2 + 4) <= fVar17) {
      dVar13 = 1.0 / (double)fVar17;
      dVar12 = (double)*(float *)(param_2 + 4);
      local_108 = dVar4 + dVar14 * dVar13 * dVar12;
      uStack_110 = dVar3 + dVar16 * dVar13 * dVar12;
      local_118 = dVar2 + dVar1 * dVar13 * dVar12;
    }
    FUN_144a79a9c(&local_328,&local_348);
    if ((double)*(float *)((longlong)param_2 + 0x24) < local_348) {
      local_348 = (double)*(float *)((longlong)param_2 + 0x24);
      FUN_144a76660(&local_348,&local_360);
      dVar1 = SQRT(local_318 * local_318 + local_328 * local_328 + dStack_320 * dStack_320);
      local_108 = local_350 * dVar1 + local_2f8;
      uStack_110 = local_358 * dVar1 + (double)CONCAT44(uStack_2fc,uStack_300);
      local_118 = dVar1 * local_360 + (double)CONCAT44(uStack_304,local_308);
    }
  }
  else {
    local_dc = 1;
  }
  local_e0 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_d0 = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_d8 = CONCAT44((int)param_2[6],(int)param_2[5]);
  FUN_146145414(param_1);
LAB_146145060:
  if ((local_b0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146145414 FUN_146145414 body=765 status=ok
// SIG undefined FUN_146145414(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146145414(longlong param_1,longlong *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  double dVar5;
  double *pdVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1457218fa();
  if ((((((double)param_2[2] != 0.0) || (NAN((double)param_2[2]))) || ((double)param_2[3] != 0.0))
      || ((((NAN((double)param_2[3]) || ((double)param_2[4] != 0.0)) ||
           ((NAN((double)param_2[4]) || ((*param_2 != 0 || ((char)param_2[8] != '\0')))))) ||
          (*(char *)((longlong)param_2 + 0x4c) == '\x01')))) &&
     ((((*(longlong *)(param_1 + 0xb0) != 0 || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) &&
       (dVar5 = *(double *)(&DAT_00001ce8 + param_1), dVar5 != 0.0)) &&
      ((plVar8 = *(longlong **)((longlong)dVar5 + 0x3c0), plVar8 != (longlong *)0x0 &&
       (lVar4 = *(longlong *)(param_1 + 0x110), lVar4 != 0)))))) {
    if ((*(byte *)(plVar8 + 0x84) & 2) == 0) {
      dVar1 = *(double *)(lVar4 + 0x240);
      dVar18 = *(double *)(lVar4 + 0x248);
      dVar19 = *(double *)(lVar4 + 0x250);
      dVar20 = *(double *)(lVar4 + 600);
      pdVar6 = *(double **)(lVar4 + 0x228);
      local_88 = dVar1;
      dStack_80 = dVar18;
      local_78 = dVar19;
      dStack_70 = dVar20;
      if (pdVar6 == (double *)0x0) {
        plVar8 = (longlong *)&DAT_00000040;
        pdVar6 = (double *)FUN_14001cc68(0x40,0x10);
        dVar5 = DAT_14c8463d8;
        *pdVar6 = DAT_14c8463d0;
        pdVar6[1] = dVar5;
        dVar5 = DAT_14c8463e8;
        pdVar6[2] = DAT_14c8463e0;
        pdVar6[3] = dVar5;
        dVar5 = DAT_14c846500;
        pdVar6[4] = DAT_14c8464f8;
        pdVar6[5] = dVar5;
        dVar5 = DAT_14c846508;
        pdVar6[6] = DAT_14c846508;
        *(double **)(lVar4 + 0x228) = pdVar6;
      }
      auVar17._8_4_ = (int)-(ulonglong)(dVar18 != pdVar6[1]);
      auVar17._0_8_ = -(ulonglong)(dVar1 != *pdVar6);
      auVar17._12_4_ = (int)(-(ulonglong)(dVar18 != pdVar6[1]) >> 0x20);
      iVar3 = movmskpd(SUB84(dVar5,0),auVar17);
      auVar9._8_4_ = (int)-(ulonglong)(dVar20 != pdVar6[3]);
      auVar9._0_8_ = -(ulonglong)(dVar19 != pdVar6[2]);
      auVar9._12_4_ = (int)(-(ulonglong)(dVar20 != pdVar6[3]) >> 0x20);
      uVar7 = movmskpd((int)plVar8,auVar9);
      if ((uVar7 & 0x3fffffff) != 0 || iVar3 != 0) {
        pdVar6[2] = local_78;
        pdVar6[3] = dStack_70;
        *pdVar6 = local_88;
        pdVar6[1] = dStack_80;
        FUN_1448052ee(&local_88,&local_68);
        pdVar6[6] = local_58;
        pdVar6[4] = local_68;
        pdVar6[5] = dStack_60;
      }
      dVar5 = pdVar6[4];
      dVar1 = pdVar6[5];
      *(double *)(param_1 + 0x3050) = pdVar6[6];
      *(double *)(param_1 + 0x3040) = dVar5;
      *(double *)(param_1 + 0x3048) = dVar1;
    }
    else {
      (**(code **)(*plVar8 + 0x680))(plVar8,&local_88);
      *(double *)(param_1 + 0x3050) = local_78;
      *(double *)(param_1 + 0x3040) = local_88;
      *(double *)(param_1 + 0x3048) = dStack_80;
    }
    auVar17 = *(undefined1 (*) [16])(param_1 + 0x3040);
    dVar5 = (double)DAT_1499387d0;
    dVar1 = DAT_1499387d0._8_8_;
    auVar9 = divpd(auVar17,_DAT_1499387d0);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *(double *)(param_1 + 0x3050);
    auVar14 = divpd(auVar13,_DAT_1499387d0);
    auVar9 = roundpd(auVar9,auVar9,3);
    auVar14 = roundpd(auVar14,auVar14,3);
    dVar18 = auVar17._0_8_ - auVar9._0_8_ * dVar5;
    dVar19 = auVar17._8_8_ - auVar9._8_8_ * dVar1;
    dVar20 = *(double *)(param_1 + 0x3050) - auVar14._0_8_ * dVar5;
    dVar21 = 0.0 - auVar14._8_8_ * dVar1;
    auVar22._0_8_ = dVar18 + dVar5;
    auVar22._8_8_ = dVar19 + dVar1;
    auVar16._0_8_ = dVar5 + dVar20;
    auVar16._8_8_ = dVar1 + dVar21;
    auVar10._8_8_ = -(ulonglong)(0.0 <= dVar19);
    auVar10._0_8_ = -(ulonglong)(0.0 <= dVar18);
    auVar14._8_8_ = dVar19;
    auVar14._0_8_ = dVar18;
    auVar9 = blendvpd(auVar22,auVar14,auVar10);
    auVar11._8_8_ = -(ulonglong)(0.0 <= dVar21);
    auVar11._0_8_ = -(ulonglong)(0.0 <= dVar20);
    auVar2._8_8_ = dVar21;
    auVar2._0_8_ = dVar20;
    auVar17 = blendvpd(auVar16,auVar2,auVar11);
    auVar15._0_8_ = auVar9._0_8_ + -360.0;
    auVar15._8_8_ = auVar9._8_8_ + -360.0;
    auVar12._8_8_ = -(ulonglong)(180.0 < auVar9._8_8_);
    auVar12._0_8_ = -(ulonglong)(180.0 < auVar9._0_8_);
    auVar9 = blendvpd(auVar9,auVar15,auVar12);
    *(undefined1 (*) [16])(param_1 + 0x3040) = auVar9;
    dVar5 = auVar17._0_8_;
    *(ulonglong *)(param_1 + 0x3050) =
         ~-(ulonglong)(180.0 < dVar5) & (ulonglong)dVar5 |
         (ulonglong)(dVar5 + -360.0) & -(ulonglong)(180.0 < dVar5);
    FUN_146145712(param_1 + 0x2fd0,param_2);
    *(undefined1 *)(param_1 + 0x3058) = 1;
    *(int *)(param_1 + 0x305c) = (int)param_2[9];
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146145712 FUN_146145712 body=144 status=ok
// SIG undefined FUN_146145712(void)

longlong * FUN_146145712(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = *param_2;
    }
  }
  *param_1 = lVar4;
  lVar4 = param_2[2];
  lVar1 = param_2[3];
  lVar2 = param_2[4];
  param_1[1] = param_2[1];
  param_1[2] = lVar4;
  param_1[3] = lVar1;
  param_1[4] = lVar2;
  if (param_2 != param_1) {
    if ((char)param_2[8] == '\x01') {
      param_1[7] = param_2[7];
      lVar4 = param_2[6];
      param_1[5] = param_2[5];
      param_1[6] = lVar4;
      uVar3 = 1;
    }
    else {
      if ((char)param_1[8] != '\x01') goto LAB_14614574e;
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 8) = uVar3;
  }
LAB_14614574e:
  *(int *)(param_1 + 0xd) = (int)param_2[0xd];
  lVar4 = param_2[9];
  lVar1 = param_2[10];
  lVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = lVar2;
  param_1[9] = lVar4;
  param_1[10] = lVar1;
  return param_1;
}



// FUNCTION 1461457a2 FUN_1461457a2 body=511 status=ok
// SIG undefined FUN_1461457a2(void)

void FUN_1461457a2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined8 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141245f18();
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    plVar8 = *(longlong **)(param_1 + 0x150);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x150) = 0;
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      FUN_1405f3418(param_1 + 0x120);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar5 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
  local_40 = FUN_14592c92e;
  local_38 = (longlong *)((ulonglong)local_38._4_4_ << 0x20);
  FUN_1461459ae(lVar5 + 0x7b8,local_30,param_1);
  uVar6 = FUN_14479d2ce(param_1 + 8);
  FUN_140e4146e(&local_40,uVar6);
  if (local_38 == (longlong *)0x0) {
LAB_14614591d:
    plVar8 = (longlong *)0x0;
    pcVar7 = (code *)0x0;
  }
  else {
    iVar4 = (int)local_38[1];
    do {
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_38[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(local_38 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar8 = local_38;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    pcVar7 = local_40;
    local_38 = (longlong *)0x0;
    if (plVar8 == (longlong *)0x0) goto LAB_14614591d;
    local_40 = (code *)0x0;
  }
  *(code **)(param_1 + 0x148) = pcVar7;
  plVar2 = *(longlong **)(param_1 + 0x150);
  if (plVar8 == plVar2) {
    if (plVar8 == (longlong *)0x0) goto LAB_1461458e2;
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1461458e2;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
    plVar2 = plVar8;
  }
  else {
    *(longlong **)(param_1 + 0x150) = plVar8;
    if (plVar2 == (longlong *)0x0) goto LAB_1461458e2;
    LOCK();
    plVar8 = plVar2 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1461458e2;
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
LAB_1461458e2:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_1402eb876(param_1 + 0x120,*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 1461459ae FUN_1461459ae body=237 status=ok
// SIG undefined FUN_1461459ae(void)

undefined8
FUN_1461459ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b40ff10;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146145aa8 FUN_146145aa8 body=369 status=ok
// SIG undefined FUN_146145aa8(void)

undefined8 * FUN_146145aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14aa60fc0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  FUN_1446f470e(&local_28,L"Rendering",1);
  param_1[6] = local_28;
  param_1[0x21] = 0;
  param_1[0x22] = 0xbff0000000000000;
  param_1[0x23] = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x40a00000;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 1;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffebffa | 5;
  param_1[0x2f] = 0x40000000400;
  *(byte *)((longlong)param_1 + 0xd4) = *(byte *)((longlong)param_1 + 0xd4) & 0xfd;
  *(byte *)((longlong)param_1 + 0xe4) = *(byte *)((longlong)param_1 + 0xe4) & 0xf9;
  *(byte *)((longlong)param_1 + 0xec) = *(byte *)((longlong)param_1 + 0xec) & 0xf2;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0x1000000000000;
  *(undefined1 *)((longlong)param_1 + 0x83) = 1;
  uVar1 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  param_1[0x11] = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  param_1[0x12] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  param_1[0x13] = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  param_1[0x14] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  param_1[0x15] = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  param_1[0x16] = uVar1;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x17) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar4;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfe;
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffe7f;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146145c26 FUN_146145c26 body=371 status=ok
// SIG undefined FUN_146145c26(void)

undefined8 * FUN_146145c26(undefined8 *param_1)

{
  FUN_1407fbd50();
  *(undefined2 *)(param_1 + 0x96) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *param_1 = &PTR_FUN_14b80e9f0;
  param_1[0x72] = &PTR_FUN_14b80f030;
  param_1[0x73] = &PTR_FUN_14b80f050;
  param_1[0x83] = &PTR_FUN_14b80f070;
  param_1[0x84] = &PTR_FUN_14b80f090;
  param_1[0x85] = &PTR_FUN_14b80f0b0;
  param_1[0x94] = &PTR_FUN_14b80f0d0;
  param_1[0x95] = &PTR_FUN_14b80f120;
  param_1[0x9e] = &PTR_FUN_14b80f150;
  param_1[0x9f] = &PTR_FUN_14b80f180;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  param_1[0xa3] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  FUN_1406516ce(param_1 + 0xa4);
  FUN_1406516ce(param_1 + 0x123);
  param_1[0x123] = &PTR_FUN_14b739090;
  *(undefined8 *)((longlong)param_1 + 0xd5c) = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  *(undefined4 *)(param_1 + 0x1af) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdb4) = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd52) = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8d) = 0;
  param_1[0x1b7] = 0;
  return param_1;
}



// FUNCTION 146145d9a FUN_146145d9a body=132 status=ok
// SIG undefined FUN_146145d9a(void)

void FUN_146145d9a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146145e1e FUN_146145e1e body=147 status=ok
// SIG undefined FUN_146145e1e(void)

void FUN_146145e1e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146145eb2 FUN_146145eb2 body=147 status=ok
// SIG undefined FUN_146145eb2(void)

void FUN_146145eb2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146145f46 FUN_146145f46 body=172 status=ok
// SIG undefined FUN_146145f46(void)

undefined8 * FUN_146145f46(undefined8 *param_1,undefined8 *param_2)

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
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 146145ff2 FUN_146145ff2 body=179 status=ok
// SIG undefined FUN_146145ff2(void)

undefined8 * FUN_146145ff2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar3 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1461460a6(param_1 + 3,iVar1,0);
    FUN_146146108(param_1[3],uVar3,iVar1);
  }
  uVar2 = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2b);
  *(undefined4 *)(param_1 + 5) = uVar2;
  return param_1;
}



// FUNCTION 1461460a6 FUN_1461460a6 body=98 status=ok
// SIG undefined FUN_1461460a6(void)

void FUN_1461460a6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146146108 FUN_146146108 body=116 status=ok
// SIG undefined FUN_146146108(void)

void FUN_146146108(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146146188 FUN_146146188 body=372 status=ok
// SIG undefined FUN_146146188(void)

undefined8 * FUN_146146188(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  *param_1 = &PTR_FUN_14aea8a80;
  param_1[5] = &PTR_FUN_14aea8d20;
  param_1[0xc] = 0;
  param_1[0xe] = &PTR_LAB_14aeb5640;
  param_1[0xf] = &LAB_14841bef0;
  param_1[10] = &LAB_14841be56;
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14aeb5620;
  param_1[0x17] = &LAB_14841bef4;
  param_1[0x12] = &LAB_14841be3a;
  param_1[0x1c] = 0;
  param_1[0x1e] = &PTR_LAB_14aeb5620;
  param_1[0x1f] = &LAB_14841bef8;
  param_1[0x1a] = &LAB_14841be3a;
  param_1[0x24] = 0;
  param_1[0x26] = &PTR_LAB_14aeb56c0;
  param_1[0x27] = &LAB_14841befc;
  param_1[0x22] = FUN_14841bf06;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x3ca3d70a;
  *(undefined2 *)((longlong)param_1 + 0x174) = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0x2f] = DAT_14c8463f0;
  param_1[0x30] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0x33] = DAT_14c8463f0;
  param_1[0x34] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0x31] = DAT_14c8463f0;
  param_1[0x32] = uVar1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3ff00000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0x3ff0000000000000;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  return param_1;
}



// FUNCTION 1461462fc FUN_1461462fc body=672 status=ok
// SIG undefined FUN_1461462fc(void)

void FUN_1461462fc(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14114e6dc(param_1 + 0x13,param_3);
  cVar3 = FUN_140b3f358();
  if (cVar3 == '\0') {
    plVar5 = (longlong *)FUN_1408bb964((longlong)param_1 + 0x44);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = FUN_1403ca142();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        bVar4 = (**(code **)(*plVar5 + 0x498))(plVar5);
        if (4 < bVar4) {
          lVar6 = FUN_140cb3e38(plVar5,param_2);
          if (lVar6 != 0) {
            FUN_1406f1f80(lVar6);
          }
        }
      }
    }
  }
  lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x1f0) != 0)) {
    lVar6 = FUN_141028a6c();
    if (lVar6 != 0) {
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar1 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_14b4ede20;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_58[2] = lVar7;
      *local_58 = &PTR_FUN_14b9b4b20;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,param_1);
      puVar1[4] = param_1;
      FUN_146146674(lVar6 + 0x70,&local_60,&local_58);
      FUN_1449db362(&local_58);
      param_1[0x24] = local_60;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar1 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_58[2] = lVar7;
      *local_58 = &PTR_FUN_14b9b4b90;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,param_1);
      puVar1[4] = param_1;
      *(int *)(puVar1 + 5) = param_2;
      FUN_1448b6402(lVar6 + 0xb8,&local_60,&local_58);
      FUN_1449db362(&local_58);
      param_1[0x25] = local_60;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  lVar6 = FUN_140059518((longlong)param_1 + 0x44);
  if (*(int *)(lVar6 + 0xe0) == param_2) {
    FUN_14614659e(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614659e FUN_14614659e body=212 status=ok
// SIG undefined FUN_14614659e(void)

void FUN_14614659e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar4 = *(longlong *)(local_38 + 0x430);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xf0));
  *(int *)(lVar4 + 0xe8) = *(int *)(lVar4 + 0xe8) + 1;
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
  iVar3 = *(int *)(lVar4 + 0x3c);
  FUN_145976519(*(undefined8 *)(lVar4 + 0x30),*(undefined4 *)(lVar4 + 0x38));
  *(undefined4 *)(lVar4 + 0x38) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar4 + 0x3c) != 0)) {
    FUN_148e53e60(lVar4 + 0x30);
  }
  *(int *)(lVar4 + 0x40) = *(int *)(lVar4 + 0x40) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xf0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1415e5298(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146146674 FUN_146146674 body=216 status=ok
// SIG undefined FUN_146146674(void)

undefined8 * FUN_146146674(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146146762 FUN_146146762 body=219 status=ok
// SIG undefined FUN_146146762(void)

undefined8 FUN_146146762(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  wchar_t *_Str;
  int iVar2;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_40 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1449b853c(local_c0,_Str,sVar1 & 0xffffffff,1);
  }
  FUN_14614683e(param_1,local_38,iVar2);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14614683e FUN_14614683e body=112 status=ok
// SIG undefined FUN_14614683e(void)

longlong * FUN_14614683e(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(param_3 >> 2);
  iVar2 = (uVar1 & 0x3fffffff) + uVar1 * 4;
  uVar1 = (uint)param_3 & 3;
  if (uVar1 == 2) {
    iVar2 = iVar2 + 3;
  }
  else if ((param_3 & 3) != 0) {
    if (uVar1 == 3) {
      iVar2 = iVar2 + 4;
    }
    else {
      iVar2 = iVar2 + 2;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14077541c(param_1,iVar2 + 1,1);
  iVar2 = FUN_1415e56d4(param_2,param_3 & 0xffffffff,*param_1);
  *(undefined2 *)(*param_1 + (longlong)iVar2 * 2) = 0;
  return param_1;
}



// FUNCTION 1461468ba FUN_1461468ba body=373 status=ok
// SIG undefined FUN_1461468ba(void)

undefined8 * FUN_1461468ba(undefined8 *param_1)

{
  FUN_145a2285c();
  *param_1 = &PTR_FUN_14aa37350;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x41200000;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x41200000;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x40800000;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x3dcccccd40000000;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x3f80000042c80000;
  *(undefined1 **)((longlong)param_1 + 0x124) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 300) = 0x43c80000;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x42c800003ecccccd;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x3f00000041200000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0x42c8000041700000;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 4;
  *(undefined1 *)((longlong)param_1 + 0x14e) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x3d088889322bcc77;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined1 *)((longlong)param_1 + 0x166) = 0;
  param_1[0x2d] = 0x3c8888893d088889;
  param_1[0x2e] = 6;
  param_1[0x2f] = 0xa3c888889;
  *(undefined4 *)((longlong)param_1 + 399) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x41) = 2;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined2 *)((longlong)param_1 + 0x214) = 0x301;
  *(undefined1 *)((longlong)param_1 + 0x216) = 0;
  return param_1;
}



// FUNCTION 146146a38 FUN_146146a38 body=472 status=ok
// SIG undefined FUN_146146a38(void)

undefined8 * FUN_146146a38(undefined8 *param_1)

{
  bool bVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b208e70;
  FUN_14044066a(param_1 + 7,10,1);
  *(undefined2 *)(param_1 + 0xe) = 0x100;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x13) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0x43340000;
  *(undefined1 *)(param_1 + 0x14) = 3;
  *(char *)(param_1 + 0x15) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 4;
  *(undefined4 *)(param_1 + 0x18) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x1c) = 3;
  *(char *)(param_1 + 0x1d) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x22) = 4;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x23) = 3;
  *(char *)(param_1 + 0x24) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x29) = 4;
  *(undefined4 *)(param_1 + 0x26) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x2a) = 3;
  *(char *)(param_1 + 0x2b) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x32) = 4;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x33) = 1;
  bVar1 = (DAT_14c9a8634 & 0x20) == 0;
  *(bool *)(param_1 + 0x34) = bVar1;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x39) = 4;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(bool *)(param_1 + 0x3b) = bVar1;
  param_1[0x3c] = 0;
  *(undefined2 *)(param_1 + 0x40) = 4;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x41) = 1;
  *(bool *)(param_1 + 0x42) = bVar1;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x47) = 4;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(bool *)(param_1 + 0x49) = bVar1;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(byte *)((longlong)param_1 + 0x251) = *(byte *)((longlong)param_1 + 0x251) & 0xfc;
  param_1[0x2c] = 0x42b4000000000000;
  param_1[0x2d] = 0x4296000000000000;
  return param_1;
}



// FUNCTION 146146c10 FUN_146146c10 body=158 status=ok
// SIG undefined FUN_146146c10(void)

bool FUN_146146c10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146146cb0 FUN_146146cb0 body=33 status=ok
// SIG undefined FUN_146146cb0(void)

void FUN_146146cb0(longlong param_1)

{
  FUN_145bd1ac8(param_1 + 0xd98);
  FUN_145bd1c0c(param_1);
  return;
}



// FUNCTION 146146cdc FUN_146146cdc body=372 status=ok
// SIG undefined FUN_146146cdc(void)

undefined8 * FUN_146146cdc(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144805d84();
  *param_1 = &PTR_FUN_14befee00;
  param_1[5] = &PTR_FUN_14beff280;
  param_1[6] = &PTR_LAB_14beff2c0;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x119) = 0;
  *(undefined1 *)((longlong)param_1 + 0x121) = 1;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x3f800000;
  *(byte *)((longlong)param_1 + 300) = *(byte *)((longlong)param_1 + 300) & 0xc0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(uint *)((longlong)param_1 + 0x134) = *(uint *)((longlong)param_1 + 0x134) & 0xfffffff8 | 2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar2 = FUN_144938c96(param_1);
    lVar3 = FUN_145a986bc();
    lVar1 = *(longlong *)(lVar3 + 0x110);
    if (lVar1 == 0) {
      FUN_140aa6c08(lVar3);
      lVar1 = *(longlong *)(lVar3 + 0x110);
    }
    if (lVar2 != lVar1) goto LAB_146146deb;
  }
  FUN_1446ddc76(&local_30,"Sequence",1);
  local_48 = FUN_14599e0ae();
  local_38 = 0;
  local_40 = 1;
  lVar1 = FUN_140486aac(param_2,param_1,local_30,local_48);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  param_1[0x27] = lVar1;
  FUN_144757f48(lVar1,9);
LAB_146146deb:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146146e52 FUN_146146e52 body=235 status=ok
// SIG undefined FUN_146146e52(void)

void FUN_146146e52(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14060e84c();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_146146ea4;
  }
  lVar2 = 0;
LAB_146146ea4:
  lVar3 = param_1 + 0x58;
  FUN_14485c47a(lVar3,lVar2);
  cVar1 = FUN_144729dda(lVar3);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(lVar3);
    if ((*(longlong *)(param_1 + 0x60) != *(longlong *)(lVar2 + 0x23c0)) ||
       (*(int *)(param_1 + 0x68) != *(int *)(lVar2 + 0x23c8))) {
      *(longlong *)(param_1 + 0x60) = *(longlong *)(lVar2 + 0x23c0);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar2 + 0x23c8);
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    lVar2 = FUN_14479d2ce(lVar3);
    FUN_146146f3e(lVar2 + 0x2250,local_28,param_1);
  }
  FUN_1413f8868(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146146f3e FUN_146146f3e body=244 status=ok
// SIG undefined FUN_146146f3e(void)

undefined8 FUN_146146f3e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b968bc0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b968440;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_14596f4e0;
  FUN_145b00ea0(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146147034 FUN_146147034 body=324 status=ok
// SIG undefined FUN_146147034(void)

void FUN_146147034(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1415e5888(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146147184 FUN_146147184 body=374 status=ok
// SIG undefined FUN_146147184(void)

undefined8 * FUN_146147184(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab5a940;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 10) = 4;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 0xb) = 2;
  *(byte *)(param_1 + 0xc) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x11) = 4;
  *(undefined4 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0x12) = 2;
  *(byte *)(param_1 + 0x13) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x19) = 4;
  *(undefined4 *)(param_1 + 0x16) = 1;
  *(undefined1 *)(param_1 + 0x1a) = 2;
  *(byte *)(param_1 + 0x1b) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x20) = 4;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x21) = 3;
  *(char *)(param_1 + 0x22) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x27) = 4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x28) = 3;
  *(char *)(param_1 + 0x29) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 4;
  *(undefined4 *)(param_1 + 0x2b) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2f) = 3;
  *(char *)(param_1 + 0x30) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x31) = 1;
  FUN_1446f470e((longlong)param_1 + 0x18c,L"Default",1);
  return param_1;
}



// FUNCTION 146147310 FUN_146147310 body=171 status=ok
// SIG undefined FUN_146147310(void)

void FUN_146147310(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  
  FUN_140fa5276((longlong)param_2 * 0x48 + *(longlong *)(param_1 + 0x120));
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x154) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x150) * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar4 + (longlong)param_2 * 0x48);
  *puVar1 = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x154)) {
    uVar5 = *(undefined4 *)(param_1 + 0x150);
  }
  puVar1[1] = uVar5;
  *(int *)(param_1 + 0x150) = param_2;
  *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
  lVar4 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x140);
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1461473bc FUN_1461473bc body=523 status=ok
// SIG undefined FUN_1461473bc(void)

ulonglong FUN_1461473bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  void *pvVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 unaff_RSI;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = *(longlong *)(param_1 + 0xd8);
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (lVar10 == 0) {
    uVar6 = CONCAT71(uVar7,1);
  }
  else {
    if (*(int *)(lVar10 + 0xba0) == *(int *)(param_2 + 0xba0)) {
      if (*(int *)(lVar10 + 0xba0) < 1) {
        bVar5 = 0;
        uVar7 = 0;
      }
      else {
        bVar5 = 1;
        lVar8 = 0;
        lVar9 = 0;
        do {
          lVar10 = *(longlong *)(lVar10 + 0xb98);
          lVar1 = *(longlong *)(param_2 + 0xb98);
          uVar4 = FUN_1461475c8();
          bVar3 = FUN_14470ec92(uVar4,lVar10 + lVar8,lVar1 + lVar8,0);
          bVar5 = bVar5 & bVar3;
          lVar9 = lVar9 + 1;
          lVar10 = *(longlong *)(param_1 + 0xd8);
          lVar8 = lVar8 + 0xc0;
        } while (lVar9 < *(int *)(lVar10 + 0xba0));
        bVar5 = bVar5 ^ 1;
      }
    }
    else {
      bVar5 = 1;
    }
    local_68 = *(undefined8 *)(lVar10 + 0xb50);
    local_60 = *(undefined4 *)(lVar10 + 0xb58);
    uStack_5c = *(undefined4 *)(lVar10 + 0xb5c);
    uStack_58 = *(undefined4 *)(lVar10 + 0xb60);
    uStack_54 = *(undefined4 *)(lVar10 + 0xb64);
    local_50 = (void *)0x0;
    local_48 = *(int *)(lVar10 + 0xb70);
    lVar8 = (longlong)local_48;
    pvVar2 = *(void **)(lVar10 + 0xb68);
    if (lVar8 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar2,lVar8 * 2);
    }
    local_90 = *(undefined8 *)(param_2 + 0xb50);
    local_88 = *(undefined4 *)(param_2 + 0xb58);
    uStack_84 = *(undefined4 *)(param_2 + 0xb5c);
    uStack_80 = *(undefined4 *)(param_2 + 0xb60);
    uStack_7c = *(undefined4 *)(param_2 + 0xb64);
    local_78 = (void *)0x0;
    local_70 = *(int *)(param_2 + 0xb70);
    lVar10 = (longlong)local_70;
    pvVar2 = *(void **)(param_2 + 0xb68);
    if (lVar10 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar2,lVar10 * 2);
    }
    bVar3 = FUN_144a7afa6(&local_60,&local_88);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar6 = CONCAT71(uVar7,bVar5 | bVar3 ^ 1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461475c8 FUN_1461475c8 body=55 status=ok
// SIG undefined FUN_1461475c8(void)

void FUN_1461475c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb664e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb664e0 = FUN_140002ddd(FUN_14650f03c,uVar1,L"GbxStandInScene_Background");
  }
  return;
}



// FUNCTION 146147600 FUN_146147600 body=68 status=ok
// SIG undefined FUN_146147600(void)

void FUN_146147600(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x1b8);
  memset(_Dst,0,0x1b8);
  FUN_146147644(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146147644 FUN_146147644 body=318 status=ok
// SIG undefined FUN_146147644(void)

undefined8 * FUN_146147644(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8ce070;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5) = 0;
  FUN_140056680(param_1 + 0x18,&DAT_14b8ce098);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  FUN_140056680(param_1 + 0x1b,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_140056680(param_1 + 0x1e,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_140056680(param_1 + 0x21,&DAT_149dfb77a);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_140056680(param_1 + 0x25,&DAT_149dfb77a);
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x29] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x2a) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x2b] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x2c) = (int)plVar2[1];
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  return param_1;
}



// FUNCTION 146147782 FUN_146147782 body=1251 status=ok
// SIG undefined FUN_146147782(void)

void FUN_146147782(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined4 *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178 [12];
  undefined8 local_118;
  uint local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  longlong local_d0;
  int local_c8;
  undefined8 local_c4;
  uint local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  local_40 = 0x4000;
  local_38 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_c4 = 0x4461000000000000;
  local_bc = local_bc & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  local_c8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  iVar1 = local_c8;
  local_d0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  plVar6 = &local_d0;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_e8 = 0xffffffffffffffff;
  uStack_e0 = 0;
  lStack_d8 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108 = (undefined4)local_e8;
  uStack_104 = local_e8._4_4_;
  uStack_100 = (undefined4)uStack_e0;
  uStack_fc = uStack_e0._4_4_;
  local_f8 = lStack_d8;
  if ((lStack_d8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar2 = local_b0;
  local_1b8 = local_b8;
  local_1b0 = &local_118;
  local_110 = local_bc;
  local_118 = local_c4;
  puVar4 = local_a8;
  puVar5 = local_178;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_190 = local_48;
  local_188 = local_40;
  local_180 = 0;
  local_1a8 = iVar1 != 0;
  local_198 = &local_108;
  local_1a0 = plVar6;
  FUN_146147c66(local_30,&local_190,local_178,uVar2);
  if ((DAT_14c950c29 == 1) && (*plVar6 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_28 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146147c66 FUN_146147c66 body=485 status=ok
// SIG undefined FUN_146147c66(void)

void FUN_146147c66(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,char param_7,undefined8 param_8,
                  undefined4 *param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar3 != 0) {
    if (param_7 != '\0') {
      *(undefined2 *)param_6 = 0x101;
    }
    local_d0 = *param_2;
    FUN_1411374ca(&local_c8,param_1,&local_d0,param_3);
    FUN_14485c47a(CONCAT44(uStack_bc,uStack_c0) + 0x88,param_4);
    local_c8 = CONCAT31(local_c8._1_3_,1);
    FUN_14485c47a(CONCAT44(uStack_bc,uStack_c0) + 0x90,param_5);
    local_c8._0_2_ = CONCAT11(1,(undefined1)local_c8);
    *(undefined4 *)(CONCAT44(uStack_bc,uStack_c0) + 0x18) = *(undefined4 *)(param_6 + 1);
    *(undefined8 *)(CONCAT44(uStack_bc,uStack_c0) + 0x10) = *param_6;
    FUN_140faf12e(&local_c8,&local_58);
    FUN_14119d0c2(&local_c8);
    uVar4 = FUN_14119d0a4(lVar3);
    puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    local_c8 = *param_9;
    uStack_c4 = (undefined4)*(undefined8 *)(param_9 + 2);
    uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)(param_9 + 2) >> 0x20);
    uStack_bc = 0;
    local_b8 = 0;
    FUN_14485c47a(&uStack_bc,*(undefined8 *)(param_9 + 4));
    *puVar5 = &PTR_FUN_14ab66bd0;
    puVar5[1] = local_58;
    puVar5[2] = local_50;
    if (local_50 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      plVar6 = local_50;
    }
    *(undefined4 *)(puVar5 + 5) = local_b8;
    *(undefined4 *)(puVar5 + 3) = local_c8;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_c4;
    *(undefined4 *)(puVar5 + 4) = uStack_c0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_bc;
    puVar5[6] = param_8;
    FUN_140b1330e(uVar4,*(undefined8 *)(param_9 + 4),param_9[1],puVar5);
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
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146147e4c FUN_146147e4c body=300 status=ok
// SIG undefined FUN_146147e4c(void)

undefined4 * FUN_146147e4c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14614803e(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_146147f7a(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
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
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146148124(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146147f7a FUN_146147f7a body=196 status=ok
// SIG undefined FUN_146147f7a(void)

undefined8 FUN_146147f7a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
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
          }
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_145c39af6(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14614803e FUN_14614803e body=230 status=ok
// SIG undefined FUN_14614803e(void)

int * FUN_14614803e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146148124 FUN_146148124 body=431 status=ok
// SIG undefined FUN_146148124(void)

void FUN_146148124(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1461482d4 FUN_1461482d4 body=193 status=ok
// SIG undefined FUN_1461482d4(void)

longlong FUN_1461482d4(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar2 != 0) goto LAB_14614836b;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146148396(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x60 + *param_1;
LAB_14614836b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 146148396 FUN_146148396 body=269 status=ok
// SIG undefined FUN_146148396(void)

undefined4 * FUN_146148396(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146148676(param_1,local_48);
  FUN_1461484a4(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1461485b8(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146148914(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461484a4 FUN_1461484a4 body=149 status=ok
// SIG undefined FUN_1461484a4(void)

undefined4 * FUN_1461484a4(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined4 *)*param_1;
  FUN_14614853a(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_145819992(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614853a FUN_14614853a body=125 status=ok
// SIG undefined FUN_14614853a(void)

undefined8 * FUN_14614853a(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146148766();
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



// FUNCTION 1461485b8 FUN_1461485b8 body=189 status=ok
// SIG undefined FUN_1461485b8(void)

undefined8 FUN_1461485b8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_145819992((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1458199c8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146148676 FUN_146148676 body=239 status=ok
// SIG undefined FUN_146148676(void)

int * FUN_146148676(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 146148766 FUN_146148766 body=429 status=ok
// SIG undefined FUN_146148766(void)

longlong * FUN_146148766(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_145819b76((longlong)iVar6 * 0x38 + *local_78);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146148914 FUN_146148914 body=432 status=ok
// SIG undefined FUN_146148914(void)

void FUN_146148914(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 146148ac6 FUN_146148ac6 body=189 status=ok
// SIG undefined FUN_146148ac6(void)

void FUN_146148ac6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar8 = *(longlong **)(param_1 + 0x30);
  bVar5 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar9 = 0;
  }
  else {
    iVar7 = (int)plVar8[1];
    lVar9 = 0;
    do {
      if (iVar7 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146148b01;
      }
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar9 = *(longlong *)(param_1 + 0x28);
    bVar5 = false;
  }
LAB_146148b01:
  iVar7 = *(int *)(param_1 + 0x40);
  pcVar3 = *(code **)(param_1 + 0x38);
  local_28 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  local_20 = *(longlong *)(param_1 + 0x10);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar9 + iVar7,&local_28,uVar4);
  if (!bVar5) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146148b84 FUN_146148b84 body=679 status=ok
// SIG undefined FUN_146148b84(void)

void FUN_146148b84(longlong param_1,longlong *param_2,code *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined1 local_a8 [8];
  undefined1 local_a0 [16];
  code *local_90;
  code *local_88;
  undefined4 local_80;
  undefined4 local_60;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = param_3;
  cVar2 = FUN_144729dda();
  if ((cVar2 == '\0') || (*param_2 == 0)) goto LAB_146148cdf;
  local_88 = param_3;
  iVar3 = FUN_1409a82f2((longlong *)(param_1 + 0x58),
                        (uint)((ulonglong)param_3 >> 0x20) ^ (uint)param_3);
  if (iVar3 != -1) {
    lVar5 = *(longlong *)(param_1 + 0x58);
    lVar9 = lVar5 + (longlong)iVar3 * 0x90;
    if (((lVar9 != 0) && ((longlong)iVar3 * 0x90 + lVar5 != -8)) &&
       (*(longlong *)(lVar9 + 0x78) != 0)) {
      local_88 = (code *)((ulonglong)local_88 & 0xffffffffffffff00);
      local_60 = 0;
      FUN_1405833e0(&local_88,&local_90);
      plVar6 = (longlong *)FUN_1447262c2(&local_88);
      if (plVar6 != (longlong *)0x0) {
        uVar4 = FUN_1407ca880();
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar4);
        if (plVar6 != (longlong *)0x0) {
          uVar4 = FUN_1407ca880();
          plVar7 = (longlong *)FUN_144718840(plVar6,uVar4);
          if (plVar6 != plVar7) {
            FUN_144a5ac3a(&local_88);
            if (plVar7 != (longlong *)0x0) {
              lVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
              if (*(longlong *)(lVar9 + 0x80) != 0) {
                FUN_14480f766(lVar5 + 0xb8);
              }
              *(undefined8 *)(lVar9 + 0x78) = 0;
            }
            goto LAB_146148c1b;
          }
        }
      }
      FUN_144a5ac3a(&local_88);
    }
  }
LAB_146148c1b:
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x40))();
  uVar4 = FUN_14479d2ce(&local_90);
  if (cVar2 == '\0') {
    lVar5 = FUN_1447210f0(uVar4);
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar8 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar8 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar4 = *puVar8;
      local_88 = FUN_146148b84;
      local_80 = 0;
      local_b8 = (ulonglong *)&local_90;
      FUN_146148e2c(local_a0,param_1,&local_88,param_2);
      local_88 = (code *)0x0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,local_a0);
      local_48 = 1;
      FUN_14016fdb0(uVar4,local_a8,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(local_a0);
      goto LAB_146148cdf;
    }
    uVar4 = FUN_14479d2ce(&local_90);
  }
  FUN_1406966b6(uVar4,&DAT_14cb71990,0);
LAB_146148cdf:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146148e2c FUN_146148e2c body=387 status=ok
// SIG undefined FUN_146148e2c(void)

longlong *
FUN_146148e2c(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x18);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_146148f43:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_146148f43;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar13 = iVar8 == iVar7;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14b3ec4e0;
  puVar5[1] = *param_4;
  lVar6 = param_4[1];
  puVar5[2] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  puVar5[3] = *param_5;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar5[4] = lVar11;
  *puVar5 = &PTR_FUN_14b3ec470;
  puVar5[5] = uVar12;
  puVar5[6] = plVar10;
  if (bVar9) {
    puVar5[7] = uVar4;
    *(undefined4 *)(puVar5 + 8) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 8) = uVar3;
    puVar5[7] = uVar4;
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  return param_1;
}



// FUNCTION 146148fb0 FUN_146148fb0 body=114 status=ok
// SIG undefined FUN_146148fb0(void)

void FUN_146148fb0(longlong param_1)

{
  longlong lVar1;
  
  param_1 = param_1 + -0x30;
  FUN_1415e5aa6(param_1);
  lVar1 = FUN_1459df608(param_1);
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x690,param_1);
    FUN_140457ffc(lVar1 + 0x6a8,param_1);
    FUN_140457ffc(lVar1 + 0x6c0,param_1);
    FUN_140457ffc(lVar1 + 0x6d8,param_1);
    return;
  }
  return;
}



// FUNCTION 146149022 FUN_146149022 body=309 status=ok
// SIG undefined FUN_146149022(void)

undefined4 *
FUN_146149022(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1461491fc(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = FUN_144a78877(uVar3,uVar3 >> 0x20);
  local_68 = param_4;
  cVar1 = FUN_146149158(param_1,uVar2,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1461492e2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146149158 FUN_146149158 body=163 status=ok
// SIG undefined FUN_146149158(void)

void FUN_146149158(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_147d87596(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)((undefined8 *)(lVar1 + lVar5) + 1);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_14614917c;
    }
  }
  uVar2 = 0;
LAB_14614917c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1461491fc FUN_1461491fc body=230 status=ok
// SIG undefined FUN_1461491fc(void)

int * FUN_1461491fc(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_144869a3c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1461492e2 FUN_1461492e2 body=458 status=ok
// SIG undefined FUN_1461492e2(void)

void FUN_1461492e2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x10;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0xc + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461494b6 FUN_1461494b6 body=586 status=ok
// SIG undefined FUN_1461494b6(void)

undefined8 * FUN_1461494b6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bab8210;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x47));
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  for (puVar1 = param_1; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)puVar1[4]) {
    if ((*(uint *)(puVar1 + 1) & 0x30) != 0) goto LAB_1461496d7;
  }
  FUN_1446f470e(&local_70,L"AssetRegistry",1);
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_14493e38c(uVar2,local_70);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3);
  uVar2 = (**(code **)(*plVar3 + 0x348))(plVar3);
  FUN_146149702(local_68,param_1);
  FUN_1458ceb8a(uVar2,local_78,local_68);
  FUN_1401cb1ee(local_68);
LAB_1461496d7:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146149702 FUN_146149702 body=180 status=ok
// SIG undefined FUN_146149702(void)

LPCRITICAL_SECTION FUN_146149702(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a975710;
  p_Var2 = (_LIST_ENTRY *)FUN_144a3f946();
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_14bac2b50;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  *(code **)&p_Var1->EntryCount = FUN_1490cb502;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1461497b6 FUN_1461497b6 body=149 status=ok
// SIG undefined FUN_1461497b6(void)

void FUN_1461497b6(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14001cc68(0x108,0x10);
  FUN_1415e5dfc(uVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1446f470e(&local_20,&DAT_14a15ebf4,1);
  uVar2 = FUN_144a52528();
  FUN_14493e38c(uVar2,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614984c FUN_14614984c body=95 status=ok
// SIG undefined FUN_14614984c(void)

void FUN_14614984c(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_14c760da4 != 0) {
    uVar2 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar3 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    do {
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 2000 + (ulonglong)uVar3 * 8) + 0x10) + 0x30) != 0)
      {
        FUN_1415e5eea();
      }
      bVar1 = (byte)uVar3 & 0x1f;
      uVar2 = uVar2 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
      if (uVar2 == 0) {
        uVar3 = 0x20;
      }
      else {
        uVar3 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
      }
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1461498b6 FUN_1461498b6 body=376 status=ok
// SIG undefined FUN_1461498b6(void)

undefined8 * FUN_1461498b6(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a687a10;
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
  FUN_1446f470e(&local_30,&DAT_14a9cf404,1);
  iVar3 = *(int *)(param_1 + 0x15);
  *(uint *)(param_1 + 0x15) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xac) < iVar3 + 1U) {
    FUN_145c36f2c(param_1 + 0x14,iVar3);
  }
  lVar4 = param_1[0x14];
  lVar5 = (longlong)iVar3 * 0x1c;
  *(undefined8 *)(lVar4 + lVar5) = local_30;
  puVar1 = (undefined4 *)(lVar4 + 8 + lVar5);
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = 1;
  puVar1[3] = 1;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = 0;
  FUN_1446f470e(&local_38,&DAT_149e71d50,1);
  iVar3 = *(int *)(param_1 + 0x15);
  *(uint *)(param_1 + 0x15) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xac) < iVar3 + 1U) {
    FUN_145c36f2c(param_1 + 0x14,iVar3);
  }
  lVar4 = param_1[0x14];
  lVar5 = (longlong)iVar3 * 0x1c;
  *(undefined8 *)(lVar4 + lVar5) = local_38;
  puVar2 = (undefined8 *)(lVar4 + 8 + lVar5);
  *puVar2 = 1;
  puVar2[1] = 0;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146149a3a FUN_146149a3a body=377 status=ok
// SIG undefined FUN_146149a3a(void)

undefined8 * FUN_146149a3a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6d8e30;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x10] = DAT_14c8464f0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x19] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x17] = DAT_14c8464e0;
  param_1[0x18] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x1a] = DAT_14c8464e0;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = DAT_14c8464f0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x105) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x25] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x23] = DAT_14c8464e0;
  param_1[0x24] = uVar1;
  param_1[0x28] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x26] = DAT_14c8464e0;
  param_1[0x27] = uVar1;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x165) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x31] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2f] = DAT_14c8464e0;
  param_1[0x30] = uVar1;
  param_1[0x34] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x32] = DAT_14c8464e0;
  param_1[0x33] = uVar1;
  param_1[0x35] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 146149bb4 FUN_146149bb4 body=53 status=ok
// SIG undefined FUN_146149bb4(void)

void FUN_146149bb4(longlong *param_1)

{
  FUN_146149bea();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146149bea FUN_146149bea body=334 status=ok
// SIG undefined FUN_146149bea(void)

void FUN_146149bea(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_145c6b660(*local_68 + (longlong)iStack_4c * 0x50 + 0x28);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146149d3a FUN_146149d3a body=146 status=ok
// SIG undefined FUN_146149d3a(void)

void FUN_146149d3a(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  FUN_146149dcc();
  *(undefined1 *)(param_1 + 0x358) = 1;
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar4 = FUN_14479d2ce(param_1 + 0x30);
    FUN_14573e1ce(uVar4,&DAT_14cbe2648,0x3f800000);
  }
  puVar5 = (undefined8 *)FUN_140714ba2(param_1);
  pcVar1 = (char *)*puVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar1 + 0xa0));
  *(int *)(pcVar1 + 0x98) = *(int *)(pcVar1 + 0x98) + 1;
  if (*pcVar1 == '\0') {
    if (*(int *)(pcVar1 + 4) != 0) goto LAB_146149dab;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(pcVar1 + 4) + 1;
  }
  *pcVar1 = '\0';
  *(int *)(pcVar1 + 4) = iVar3;
LAB_146149dab:
                    /* WARNING: Could not recover jumptable at 0x000146149db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar1 + 0xa0));
  return;
}



// FUNCTION 146149dcc FUN_146149dcc body=48 status=ok
// SIG undefined FUN_146149dcc(void)

void FUN_146149dcc(longlong param_1)

{
  FUN_14588cd9e();
  if (*(int *)(param_1 + 0x2fc) == -1) {
    return;
  }
  FUN_14573e566(param_1,param_1 + 0x2fc);
  return;
}



// FUNCTION 146149dfc FUN_146149dfc body=21 status=ok
// SIG undefined FUN_146149dfc(void)

undefined8 FUN_146149dfc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146149e12 FUN_146149e12 body=691 status=ok
// SIG undefined FUN_146149e12(void)

void FUN_146149e12(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = FUN_14118da1c();
  FUN_140056680(&local_78,uVar4);
  local_a0 = -1;
  local_a8 = 0;
  iVar1 = FUN_1447ee042(&local_78,L"LiveLink.Preset.Apply Preset=",0x1d,1);
  if (iVar1 == -1) {
LAB_146149e73:
    plVar5 = (longlong *)FUN_145988e1c();
    lVar6 = plVar5[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar6 = plVar5[0x22];
    }
    lVar6 = FUN_14614a0c6(lVar6 + 0x60);
    if (lVar6 == 0) goto LAB_146149e92;
  }
  else {
    FUN_1400b22c2(&local_88,&DAT_149eb5f2c);
    iVar9 = local_80 + -1;
    puVar8 = local_88;
    if (local_80 == 0) {
      puVar8 = &DAT_149dfb77a;
      iVar9 = 0;
    }
    _local_a0 = CONCAT44(uStack_9c,iVar1);
    local_a8 = 0;
    uVar2 = FUN_1447ee042(&local_78,puVar8,iVar9,1);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_88,&DAT_149e01f5e);
    iVar9 = local_80 + -1;
    puVar8 = local_88;
    if (local_80 == 0) {
      puVar8 = &DAT_149dfb77a;
      iVar9 = 0;
    }
    local_a8 = 0;
    local_a0 = iVar1;
    uVar3 = FUN_1447ee042(&local_78,puVar8,iVar9,1);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = uVar3;
    if ((int)uVar2 < (int)uVar3) {
      uVar10 = uVar2;
    }
    if (uVar2 == 0xffffffff) {
      uVar10 = uVar3;
    }
    if (uVar3 == 0xffffffff) {
      uVar10 = uVar2;
    }
    if ((uVar10 == 0xffffffff) || (iVar1 < -0x1d)) goto LAB_146149e73;
    uVar2 = local_70 - 1;
    if (local_70 == 0) {
      uVar2 = 0;
    }
    if (((uVar2 <= uVar10) || ((int)uVar10 < 0)) || (iVar1 = iVar1 + 0x1d, (int)uVar2 <= iVar1))
    goto LAB_146149e73;
    FUN_144a63a7c(&local_78,&local_88,iVar1,uVar10 - iVar1);
    puVar8 = local_88;
    if (local_80 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    uVar4 = FUN_145988d38();
    local_90 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    local_98 = 1;
    local_a8 = 0;
    lVar6 = FUN_1412ecd05(uVar4,0,puVar8,0);
    if (lVar6 == 0) {
LAB_14614a082:
      lVar6 = 0;
    }
    else {
      lVar7 = FUN_145988d38();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) != lVar7 + 0x30)) goto LAB_14614a082;
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (lVar6 == 0) goto LAB_146149e73;
  }
  local_68 = 0;
  local_58 = 0;
  FUN_14453c3ec(lVar6);
LAB_146149e92:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614a0c6 FUN_14614a0c6 body=63 status=ok
// SIG undefined FUN_14614a0c6(void)

longlong FUN_14614a0c6(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_145988d38();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14614a106 FUN_14614a106 body=853 status=ok
// SIG undefined FUN_14614a106(void)

undefined8 * FUN_14614a106(undefined8 *param_1,longlong param_2,int param_3,ulonglong param_4)

{
  longlong *plVar1;
  int *piVar2;
  code **ppcVar3;
  code **ppcVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  byte bVar8;
  undefined1 auStack_c8 [32];
  code *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  longlong local_98;
  char local_8c;
  code *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1407134c4();
  *param_1 = &PTR_FUN_149e36b00;
  param_1[0x12] = param_2;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 **)(param_2 + 0x88) = param_1;
  *param_1 = &PTR_FUN_149fca650;
  ppcVar3 = (code **)(param_1 + 0x13);
  ppcVar4 = (code **)(param_1 + 0x15);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  bVar8 = (byte)((param_4 & 0x100000000) >> 0x1b);
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xdf | bVar8;
  (**(code **)(*(longlong *)param_1[0x12] + 0x70))
            ((longlong *)param_1[0x12],(param_4 & 0x100000000) >> 0x20);
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xdf | bVar8;
  if (param_3 < 1) {
    FUN_140393a00(&local_88,param_2);
    if (ppcVar3 == &local_88) {
      if (local_88 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*ppcVar3 != (code *)0x0) {
        FUN_1400020a8();
      }
      param_1[0x13] = local_88;
      local_88 = (code *)0x0;
      *(undefined4 *)(param_1 + 0x14) = local_80;
      *(undefined4 *)((longlong)param_1 + 0xa4) = local_7c;
    }
    FUN_14614a485(&local_88,param_1,param_4 & 0xffffffff);
    if (ppcVar4 != &local_88) {
      pcVar5 = *ppcVar4;
      *ppcVar4 = local_88;
      local_88 = (code *)0x0;
      if (pcVar5 == (code *)0x0) goto LAB_14614a25a;
      FUN_145a421b2();
    }
    if (local_88 != (code *)0x0) {
      FUN_145a421b2();
    }
    goto LAB_14614a25a;
  }
  FUN_1415e67a0(&local_88,param_1,param_3);
  FUN_14614a45c(&local_98);
  FUN_1415e61e8(&local_98,&local_a8,param_1,param_3);
  FUN_14614a64a(param_1 + 0x16,&local_a8);
  plVar7 = (longlong *)CONCAT44(uStack_9c,local_a0);
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
  pcVar5 = local_88;
  plVar7 = local_78;
  if (local_78 == (longlong *)0x0) {
    plVar7 = local_68;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar5)(&local_a8,uVar6);
  if (ppcVar3 == &local_a8) {
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*ppcVar3 != (code *)0x0) {
      FUN_1400020a8();
    }
    param_1[0x13] = local_a8;
    local_a8 = (code *)0x0;
    *(undefined4 *)(param_1 + 0x14) = local_a0;
    *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_9c;
  }
  FUN_14614a6ac(&local_98,&local_a8,param_1);
  if (ppcVar4 == &local_a8) {
LAB_14614a444:
    if (local_a8 != (code *)0x0) {
      FUN_145a421b2();
    }
  }
  else {
    pcVar5 = *ppcVar4;
    *ppcVar4 = local_a8;
    local_a8 = (code *)0x0;
    if (pcVar5 != (code *)0x0) {
      FUN_145a421b2();
      goto LAB_14614a444;
    }
  }
  if (local_8c == '\x01') {
    local_8c = '\0';
  }
  if (local_98 != 0) {
    FUN_145a421b2();
  }
  if (local_88 != (code *)0x0) {
    plVar7 = local_68;
    if (local_78 != (longlong *)0x0) {
      plVar7 = local_78;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_14614a25a:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614a45c FUN_14614a45c body=41 status=ok
// SIG undefined FUN_14614a45c(void)

longlong * FUN_14614a45c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14614a53a();
  *param_1 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc0) = *(int *)(lVar1 + 0xc0) + 1;
    UNLOCK();
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 14614a485 FUN_14614a485 body=180 status=ok
// SIG undefined FUN_14614a485(void)

longlong * FUN_14614a485(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_2 + 0x29) & 2) == 0) {
    lVar1 = FUN_14614a53a();
    local_48 = param_2;
    if (param_3 < 0xf) {
      local_40 = 0;
      uStack_38 = 0;
      FUN_1427b1c2a(&local_48,lVar1);
    }
    else {
      local_40 = 0;
      uStack_38 = 0;
      FUN_1415e6010(&local_48,lVar1);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    *param_1 = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc0) = *(int *)(lVar1 + 0xc0) + 1;
      UNLOCK();
    }
  }
  else {
    *param_1 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614a53a FUN_14614a53a body=271 status=ok
// SIG undefined FUN_14614a53a(void)

undefined8 * FUN_14614a53a(void)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c927ac0);
  if (DAT_14c947ae8 < 0xffff8000) {
    iVar1 = 0x8000;
    uVar3 = DAT_14c947ae8;
    do {
      uVar4 = uVar3 & 0x3fff;
      if (*(longlong *)(&DAT_14c927ae8 + (ulonglong)uVar4 * 8) == 0) {
        puVar2 = (undefined8 *)FUN_14001cc68(200,0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
        puVar2[2] = 0;
        *(undefined4 *)(puVar2 + 3) = 0;
        puVar2[4] = 0;
        *(undefined4 *)(puVar2 + 5) = 0;
        puVar2[6] = 0;
        *(undefined4 *)(puVar2 + 7) = 0;
        puVar2[8] = 0;
        *(undefined4 *)(puVar2 + 9) = 0;
        puVar2[10] = 0;
        *(undefined4 *)(puVar2 + 0xb) = 0;
        puVar2[0xc] = 0;
        *(undefined4 *)(puVar2 + 0xd) = 0;
        puVar2[0xe] = 0;
        *(undefined4 *)(puVar2 + 0xf) = 0;
        puVar2[0x10] = 0;
        *(undefined4 *)(puVar2 + 0x11) = 0;
        puVar2[0x12] = 0;
        *(undefined4 *)(puVar2 + 0x13) = 0;
        puVar2[0x14] = 0;
        *(undefined4 *)(puVar2 + 0x15) = 0;
        *(uint *)(puVar2 + 0x16) = uVar4;
        puVar2[0x17] = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined8 **)(&DAT_14c927ae8 + (ulonglong)uVar4 * 8) = puVar2;
        DAT_14c947ae8 = uVar3 + 1 & 0x3fff;
        break;
      }
      uVar3 = uVar3 + 1;
      puVar2 = (undefined8 *)0x0;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c927ac0);
  return puVar2;
}



// FUNCTION 14614a64a FUN_14614a64a body=98 status=ok
// SIG undefined FUN_14614a64a(void)

undefined8 * FUN_14614a64a(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14614a6ac FUN_14614a6ac body=140 status=ok
// SIG undefined FUN_14614a6ac(void)

longlong * FUN_14614a6ac(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    local_30 = 0;
    uStack_28 = 0;
    local_38 = param_3;
    FUN_1415e6136(&local_38,*param_1,(int)param_1[1]);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    lVar1 = *param_1;
    *param_2 = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc0) = *(int *)(lVar1 + 0xc0) + 1;
      UNLOCK();
    }
  }
  else {
    *param_2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614a73a FUN_14614a73a body=372 status=ok
// SIG undefined FUN_14614a73a(void)

undefined8 FUN_14614a73a(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined1 local_91;
  undefined8 ***local_90;
  longlong *local_88;
  ushort local_78;
  byte local_70;
  undefined1 local_68 [40];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != '\x04') {
    lVar6 = FUN_14479d2ce(param_1 + 0xd8);
    if (lVar6 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      local_91 = 2;
      local_a0 = FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_90);
      local_68[0] = 0;
      local_40 = 0;
      FUN_144a7bf34(local_68,&local_90,&local_a0,&local_91);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      FUN_1447c3578(lVar2 + 0x130,&local_90,local_68);
      uVar5 = FUN_144a7fca4(&local_90);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar8 = &local_90;
        if (0x18 < local_78) {
          ppppuVar8 = (undefined8 ****)local_90;
        }
        (*pcVar3)(ppppuVar8);
      }
      if (0x18 < local_78) {
        FUN_1400020a8(local_90);
      }
      uVar7 = FUN_140343d7a(param_1);
      cVar4 = FUN_14614a8b0(lVar6,uVar7,uVar5);
      FUN_144a5ac3a(local_68);
      if (cVar4 == '\0') {
        uVar7 = 0;
        goto LAB_14614a855;
      }
    }
  }
  uVar7 = 1;
LAB_14614a855:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614a8b0 FUN_14614a8b0 body=501 status=ok
// SIG undefined FUN_14614a8b0(void)

ulonglong FUN_14614a8b0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong *plVar8;
  undefined3 uVar9;
  undefined3 uVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((((*(longlong *)(param_1 + 0x690) == 0) || (param_2 == 0)) ||
      (*(char *)(param_1 + 0x6b0) == '\0')) || (*(longlong *)(param_1 + 0x698) == 0))
  goto LAB_14614a8e6;
  uVar9 = (undefined3)((uint)param_3 >> 8);
  if (*(longlong *)(param_1 + 0x690) != param_2 ||
      *(longlong **)(param_1 + 0x6a0) == (longlong *)0x0) goto LAB_14614a8e6;
  uVar10 = uVar9;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x6a0) + 0x50))();
  FUN_140dc01da(uVar4,&local_30,CONCAT31(uVar10,*(undefined1 *)(param_1 + 0x6b0)));
  uVar7 = CONCAT71((int7)((ulonglong)&local_30 >> 8),1);
  if ((local_30 != 0) && (*(char *)(local_30 + 0xa0) == '\0')) {
    if (*(char *)(param_1 + 0x681) == '\x01') {
      param_3 = CONCAT31(uVar9,*(undefined1 *)(param_1 + 0x680));
    }
    lVar3 = *(longlong *)(local_30 + 0x30);
    lVar5 = FUN_140bb554a();
    plVar8 = local_28;
    lVar6 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar6 = FUN_140ed0e8c();
      plVar8 = local_28;
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        if (local_28 == (longlong *)0x0) {
          if (local_30 != 0) {
            FUN_1410c9a0e(local_30,param_3);
            goto LAB_14614aa93;
          }
        }
        else {
          LOCK();
          *(int *)(local_28 + 1) = (int)local_28[1] + 1;
          UNLOCK();
          if (local_30 == 0) goto LAB_14614aa47;
          FUN_1410c9a0e(local_30,param_3);
LAB_14614aa10:
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
LAB_14614aa93:
          uVar7 = 0;
        }
      }
    }
    else if (local_28 == (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_14892a78c(local_30,param_3);
        goto LAB_14614aa93;
      }
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      if (local_30 != 0) {
        FUN_14892a78c(local_30,param_3);
        goto LAB_14614aa10;
      }
LAB_14614aa47:
      plVar2 = local_28;
      LOCK();
      plVar8 = local_28 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_28)(local_28);
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
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_28 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
LAB_14614a8e6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614aaa6 FUN_14614aaa6 body=63 status=ok
// SIG undefined FUN_14614aaa6(void)

void FUN_14614aaa6(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14614aae6(param_1);
    FUN_14571016c(param_1);
    return;
  }
  FUN_14571016c(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145bcafba(param_1);
  return;
}



// FUNCTION 14614aae6 FUN_14614aae6 body=325 status=ok
// SIG undefined FUN_14614aae6(void)

void FUN_14614aae6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14614ac2c FUN_14614ac2c body=63 status=ok
// SIG undefined FUN_14614ac2c(void)

void FUN_14614ac2c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14614ac6c(param_1);
    FUN_145cceb8e(param_1);
    return;
  }
  FUN_145cceb8e(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14601161e(param_1);
  return;
}



// FUNCTION 14614ac6c FUN_14614ac6c body=325 status=ok
// SIG undefined FUN_14614ac6c(void)

void FUN_14614ac6c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14614adb2 FUN_14614adb2 body=260 status=ok
// SIG undefined FUN_14614adb2(void)

void FUN_14614adb2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  iVar1 = *(int *)((longlong)param_1 + 0x2d4);
  if (iVar1 == 2) {
    lVar2 = 0x478;
LAB_14614ade4:
    (**(code **)(*param_1 + lVar2))(param_1);
  }
  else {
    if (iVar1 == 0) goto LAB_14614ae00;
    lVar2 = 0x468;
    if (iVar1 == 1) goto LAB_14614ade4;
  }
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  if ((*(byte *)((longlong)param_1 + 0x2d1) & 0x20) != 0) {
    if ((*(longlong **)(param_1[6] + 0x1b0) != (longlong *)0x0) &&
       (lVar2 = (**(code **)(**(longlong **)(param_1[6] + 0x1b0) + 0x5d8))(), lVar2 != 0)) {
      lVar3 = FUN_1449f3324();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        local_30 = *(undefined8 *)(param_1[0x2f] + 0x268);
        local_28 = *(undefined4 *)(param_1[0x2f] + 0x270);
        local_20 = 0;
        FUN_145815ce0(lVar2,&local_30,lVar2 + 0x960,0);
      }
    }
    *(byte *)((longlong)param_1 + 0x2d1) = *(byte *)((longlong)param_1 + 0x2d1) & 0xdf;
  }
LAB_14614ae00:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14614aeb8 FUN_14614aeb8 body=38 status=ok
// SIG undefined FUN_14614aeb8(void)

undefined8 FUN_14614aeb8(undefined8 param_1,int param_2)

{
  FUN_1415e6fa0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14614aede FUN_14614aede body=136 status=ok
// SIG undefined FUN_14614aede(void)

undefined8 * FUN_14614aede(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1d8,0x10);
  FUN_14614af66(puVar1);
  *puVar1 = &PTR_LAB_14b96bd70;
  puVar1[1] = &PTR_FUN_14b96be50;
  puVar1[0x34] = 0;
  *(undefined4 *)(puVar1 + 0x35) = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x1b4) = 0;
  puVar1[0x38] = 0;
  *(undefined4 *)(puVar1 + 0x39) = 0;
  puVar1[0x3a] = 0;
  return puVar1;
}



// FUNCTION 14614af66 FUN_14614af66 body=253 status=ok
// SIG undefined FUN_14614af66(void)

undefined8 * FUN_14614af66(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_14b4016d0;
  FUN_1409e1656(param_1 + 1);
  *param_1 = &PTR_LAB_14b400db0;
  param_1[1] = &PTR_FUN_14b400e90;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf7) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 14614b063 FUN_14614b063 body=852 status=ok
// SIG undefined FUN_14614b063(void)

undefined8 * FUN_14614b063(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 uStack_74;
  double local_70;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 uStack_54;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar1 = *(byte *)(param_2 + 0x10);
  if ((bVar1 == 0x19) || (bVar2 = *(byte *)(param_3 + 0x10), bVar2 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar8 = (uint)bVar1;
    if (0x1b < bVar1) {
      uVar8 = 0x1c;
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    if ((0xc001e0U >> (uVar8 & 0x1f) & 1) == 0) {
      uVar6 = 0x1c;
      if (bVar2 < 0x1c) {
        uVar6 = (uint)bVar2;
      }
      if ((0xc001e0U >> (uVar6 & 0x1f) & 1) == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        if ((((uint)(0x20001eL >> ((byte)uVar6 & 0x3f)) | (uint)(0x20001eL >> ((byte)uVar8 & 0x3f)))
            & 1) == 0) {
          *(undefined1 *)(param_1 + 2) = 0xb;
          FUN_147d0d1b6(param_2,&local_60);
          FUN_147d0d1b6(param_3,&local_80);
          param_1[3] = (ulonglong)
                       (uint)((int)local_78 * (int)fStack_5c - (int)fStack_7c * (int)local_58);
          param_1[4] = (ulonglong)
                       (uint)((int)local_58 * (int)local_80 - (int)local_78 * (int)local_60);
          *(undefined4 *)(param_1 + 0x14) = 3;
          param_1[5] = (ulonglong)
                       (uint)((int)local_60 * (int)fStack_7c - (int)local_80 * (int)fStack_5c);
        }
        else {
          *(undefined1 *)(param_1 + 2) = 3;
          FUN_14614b3b8(param_2,&local_60);
          FUN_14614b3b8(param_3,&local_80);
          *(float *)(param_1 + 3) = fStack_5c * local_78 - fStack_7c * local_58;
          *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
          *(float *)(param_1 + 4) = local_58 * local_80 - local_78 * local_60;
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          *(undefined4 *)(param_1 + 0x14) = 3;
          *(float *)(param_1 + 5) = local_60 * fStack_7c - local_80 * fStack_5c;
          *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
        }
        goto LAB_14614b1b7;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 7;
    FUN_14013e547(&local_80,param_2,&local_60);
    FUN_14013e547(&local_81,param_3,&local_80);
    puVar9 = param_1 + 3;
    dVar4 = (double)CONCAT44(uStack_74,local_78) * local_50;
    dVar5 = (double)CONCAT44(uStack_54,local_58) * local_70;
    iVar3 = *(int *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xa4) < iVar3 + 1U) {
      FUN_147bcda28(puVar9,iVar3);
    }
    puVar7 = (undefined8 *)param_1[0x13];
    if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
      puVar7 = puVar9;
    }
    puVar7[iVar3] = dVar5 - dVar4;
    dVar5 = (double)CONCAT44(fStack_5c,local_60);
    dVar4 = (double)CONCAT44(fStack_7c,local_80);
    iVar3 = *(int *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xa4) < iVar3 + 1U) {
      FUN_147bcda28(puVar9,iVar3);
    }
    puVar7 = (undefined8 *)param_1[0x13];
    if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
      puVar7 = puVar9;
    }
    puVar7[iVar3] = local_50 * dVar4 - local_70 * dVar5;
    iVar3 = *(int *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xa4) < iVar3 + 1U) {
      FUN_147bcda28(puVar9,iVar3);
    }
    if ((undefined8 *)param_1[0x13] != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)param_1[0x13];
    }
    puVar9[iVar3] =
         (double)CONCAT44(fStack_5c,local_60) * (double)CONCAT44(uStack_74,local_78) -
         (double)CONCAT44(fStack_7c,local_80) * (double)CONCAT44(uStack_54,local_58);
  }
LAB_14614b1b7:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614b3b8 FUN_14614b3b8 body=315 status=ok
// SIG undefined FUN_14614b3b8(void)

void FUN_14614b3b8(longlong param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  double *pdVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  
  uVar3 = 0x1c;
  if ((byte)*(uint *)(param_1 + 0x10) < 0x1c) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  uVar3 = (uVar3 & 0xff) << 4;
  cVar1 = (&DAT_14aa842ba)[uVar3];
  if ((longlong)cVar1 == 1) {
    pdVar4 = (double *)(param_1 + 0x18);
    if (*(double **)(param_1 + 0x98) != (double *)0x0) {
      pdVar4 = *(double **)(param_1 + 0x98);
    }
    cVar1 = (&DAT_14aa842b9)[uVar3];
    if (cVar1 == '\x01') {
      fVar8 = *(float *)pdVar4;
    }
    else if (cVar1 == '\x02') {
      fVar8 = (float)*pdVar4;
    }
    else if (cVar1 == '\x03') {
      fVar8 = (float)*(int *)pdVar4;
    }
    else {
      fVar8 = 0.0;
      if (cVar1 == '\x04') {
        fVar8 = (float)*(byte *)pdVar4;
      }
    }
    *param_2 = fVar8;
    param_2[1] = fVar8;
    param_2[2] = fVar8;
    param_2[3] = fVar8;
    return;
  }
  uVar7 = 4;
  if (cVar1 < '\x04') {
    uVar7 = (int)cVar1;
  }
  if ('\0' < cVar1) {
    cVar2 = (&DAT_14aa842b9)[uVar3];
    uVar5 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar6 = param_1 + 0x18;
      }
      if (cVar2 == '\x02') {
        fVar8 = (float)*(double *)(lVar6 + uVar5 * 8);
      }
      else if (cVar2 == '\x01') {
        fVar8 = *(float *)(lVar6 + uVar5 * 8);
      }
      else if (cVar2 == '\x03') {
        fVar8 = (float)*(int *)(lVar6 + uVar5 * 8);
      }
      else {
        fVar8 = 0.0;
        if (cVar2 == '\x04') {
          fVar8 = (float)*(byte *)(lVar6 + uVar5 * 8);
        }
      }
      param_2[uVar5] = fVar8;
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
    if ('\x03' < cVar1) {
      return;
    }
  }
  memset(param_2 + cVar1,0,(ulonglong)(3 - uVar7) * 4 + 4);
  return;
}



// FUNCTION 14614b4f4 FUN_14614b4f4 body=323 status=ok
// SIG undefined FUN_14614b4f4(void)

undefined4 * FUN_14614b4f4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14614b6ba(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14614b638(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14614b7a2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614b638 FUN_14614b638 body=130 status=ok
// SIG undefined FUN_14614b638(void)

undefined8 FUN_14614b638(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_145d11c34((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14614b6ba FUN_14614b6ba body=231 status=ok
// SIG undefined FUN_14614b6ba(void)

int * FUN_14614b6ba(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14614b7a2 FUN_14614b7a2 body=483 status=ok
// SIG undefined FUN_14614b7a2(void)

void FUN_14614b7a2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14614b992 FUN_14614b992 body=378 status=ok
// SIG undefined FUN_14614b992(void)

undefined8 * FUN_14614b992(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad0fc50;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_14614b9c8;
  plVar4 = (longlong *)FUN_14001cc68(0xc80,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ad2a2b0;
  plVar5 = plVar4 + 2;
  FUN_147fe66e8(plVar5);
  local_30 = plVar5;
  local_28 = plVar4;
  FUN_148011efa(&local_30,plVar5);
  if (plVar4 == (longlong *)0x0) {
    param_1[5] = 0x10;
    plVar5 = (longlong *)param_1[6];
    if (plVar5 != (longlong *)0x0) {
      param_1[6] = 0;
LAB_14614bad4:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014614bac8:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[5] = plVar5;
    plVar5 = (longlong *)param_1[6];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x00014614bac8;
      }
    }
    else {
      param_1[6] = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_14614bad4;
    }
  }
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar3 = param_1[5];
  local_38 = param_1;
  if ((param_1 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  FUN_147fe67e0(uVar3,&local_38);
LAB_14614b9c8:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614bb0e FUN_14614bb0e body=40 status=ok
// SIG undefined FUN_14614bb0e(void)

undefined8 FUN_14614bb0e(undefined8 param_1,int param_2)

{
  FUN_14614bb36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14614bb36 FUN_14614bb36 body=854 status=ok
// SIG undefined FUN_14614bb36(void)

void FUN_14614bb36(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5e00d0;
  param_1[0x72] = &PTR_FUN_14b5e0770;
  param_1[0x73] = &PTR_FUN_14b5e0790;
  param_1[0x74] = &PTR_FUN_14b5e07c0;
  param_1[0x75] = &PTR_FUN_14b5e07d0;
  param_1[0x76] = &PTR_FUN_14b5e0840;
  param_1[0x77] = &PTR_FUN_14b5e0870;
  param_1[0x78] = &PTR_FUN_14b5e08a0;
  param_1[0x7f] = &PTR_FUN_14b5e0950;
  param_1[0x80] = &PTR_FUN_14b5e09c0;
  param_1[0x81] = &PTR_FUN_14b5e0a30;
  param_1[0x82] = &PTR_FUN_14b5e0a60;
  param_1[0x83] = &PTR_FUN_14b5e0aa0;
  param_1[0x84] = &PTR_FUN_14b5e0b40;
  param_1[0x85] = &PTR_FUN_14b5e0b60;
  param_1[0x89] = &PTR_FUN_14b5e0b80;
  param_1[0x8a] = &PTR_FUN_14b5e0c40;
  param_1[0x8b] = &PTR_FUN_14b5e0cc0;
  param_1[0x8c] = &PTR_FUN_14b5e0d10;
  param_1[0x8d] = &PTR_FUN_14b5e0d50;
  param_1[0x8e] = &PTR_FUN_14b5e0d70;
  param_1[0x8f] = &PTR_FUN_14b5e0d90;
  param_1[0x90] = &PTR_FUN_14b5e0db0;
  param_1[0x91] = &PTR_FUN_14b5e0dd0;
  param_1[0x92] = &PTR_FUN_14b5e0df0;
  param_1[0x93] = &PTR_FUN_14b5e0e10;
  param_1[0x94] = &PTR_FUN_14b5e0e30;
  param_1[0x95] = &PTR_FUN_14b5e0e50;
  param_1[0x96] = &PTR_FUN_14b5e0e70;
  param_1[0x34b] = &PTR_FUN_14b5e0e90;
  param_1[0x352] = &PTR_FUN_14b5e0ea0;
  param_1[0x353] = &PTR_FUN_14b5e0ee0;
  param_1[0x354] = &PTR_FUN_14b5e0f20;
  param_1[0x355] = &PTR_FUN_14b5e0f70;
  param_1[0x356] = &PTR_FUN_14b5e0fa0;
  param_1[0x359] = &PTR_FUN_14b5e0fe0;
  param_1[0x35a] = &PTR_FUN_14b5e0ff0;
  param_1[0x35b] = &PTR_FUN_14b5e1020;
  param_1[0x35c] = &PTR_FUN_14b5e10c0;
  param_1[0x4bf] = &PTR_FUN_14b5e10e0;
  param_1[0x4df] = &PTR_LAB_14b5e10f0;
  param_1[0x4e3] = &PTR_FUN_14b5e1110;
  plVar3 = (longlong *)param_1[0x655];
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
  if (param_1[0x64c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x63b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x531] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52f] != 0) {
    FUN_1400020a8();
  }
  FUN_1412a9efa(param_1[0x52d],*(undefined4 *)(param_1 + 0x52e));
  if (param_1[0x52d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x528] != 0) {
    FUN_1400020a8();
  }
  FUN_14614be8c(param_1 + 0x4e4);
  FUN_145bcc354(param_1);
  return;
}



// FUNCTION 14614be8c FUN_14614be8c body=83 status=ok
// SIG undefined FUN_14614be8c(void)

void FUN_14614be8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5e94b0;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b5ecc40;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b5ecc40;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_140639928(param_1);
  return;
}



// FUNCTION 14614bee0 FUN_14614bee0 body=170 status=ok
// SIG undefined FUN_14614bee0(void)

void FUN_14614bee0(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
  undefined1 local_a8 [136];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_20 = 0x1100000000;
  local_ac = 0;
  (**(code **)(*param_1 + 0x30))(param_1,local_a8);
  lVar4 = FUN_14486d71a(local_a8);
  lVar3 = param_1[2];
  if (lVar3 != lVar4) {
    param_1[2] = lVar4;
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
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614bf8c FUN_14614bf8c body=613 status=ok
// SIG undefined FUN_14614bf8c(void)

void FUN_14614bf8c(longlong param_1,longlong param_2,uint *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(*(byte *)(param_1 + 0x18) ^ 1) << 0x26 | 0x800000000;
  uVar4 = *param_3;
  iVar5 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar5 + 1U) {
    FUN_14738ac8a(param_2,iVar5);
  }
  *(ulonglong *)(param_2 + (longlong)iVar5 * 8) = (uVar4 & 0xff) << 8 | uVar7 | 0x4020000;
  uVar4 = *param_3;
  *param_3 = uVar4 + 8;
  cVar1 = *(char *)(param_1 + 0x18);
  uVar6 = 0;
  if (cVar1 == '\0') {
    uVar6 = uVar4 + 8;
  }
  *param_3 = uVar6;
  bVar2 = *(byte *)(param_1 + 0x18);
  iVar5 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar5 + 1U) {
    FUN_14738ac8a(param_2,iVar5);
  }
  if (cVar1 != '\0') {
    uVar7 = 0x4000000000;
  }
  *(ulonglong *)(param_2 + (longlong)iVar5 * 8) =
       (ulonglong)((uVar6 & 0xff) << 8) | (ulonglong)bVar2 << 0x30 | (ulonglong)bVar2 | uVar7 |
       0x40000;
  uVar4 = *param_3;
  *param_3 = uVar4 + 0x10;
  bVar2 = *(byte *)(param_1 + 0x18);
  iVar5 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar5 + 1U) {
    FUN_14738ac8a(param_2,iVar5);
  }
  *(ulonglong *)(param_2 + (longlong)iVar5 * 8) =
       (ulonglong)((uVar4 + 0x10 & 0xff) << 8) | (ulonglong)bVar2 << 0x30 | (ulonglong)bVar2 | uVar7
       | 0x1040000;
  uVar4 = *param_3;
  *param_3 = uVar4 + 0x10;
  bVar2 = *(byte *)(param_1 + 0x18);
  iVar5 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar5 + 1U) {
    FUN_14738ac8a(param_2,iVar5);
  }
  *(ulonglong *)(param_2 + (longlong)iVar5 * 8) =
       (ulonglong)((uVar4 + 0x10 & 0xff) << 8) | (ulonglong)bVar2 << 0x30 | (ulonglong)bVar2 | uVar7
       | 0x2040000;
  uVar4 = *param_3;
  *param_3 = uVar4 + 0x10;
  bVar2 = *(byte *)(param_1 + 0x18);
  iVar5 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar5 + 1U) {
    FUN_14738ac8a(param_2,iVar5);
  }
  *(ulonglong *)(param_2 + (longlong)iVar5 * 8) =
       (ulonglong)((uVar4 + 0x10 & 0xff) << 8) | (ulonglong)bVar2 << 0x30 | (ulonglong)bVar2 | uVar7
       | 0x3040000;
  *param_3 = 0;
  bVar2 = *(byte *)(param_1 + 0x18);
  bVar3 = *(byte *)(param_1 + 0x19);
  iVar5 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar5 + 1U) {
    FUN_14738ac8a(param_2,iVar5);
  }
  *(ulonglong *)(param_2 + (longlong)iVar5 * 8) =
       (ulonglong)bVar2 + ((ulonglong)bVar3 << 0x24 | (ulonglong)bVar2 << 0x30) + 0x5040001;
  *param_3 = *param_3 + 0x10;
  return;
}



// FUNCTION 14614c1f2 FUN_14614c1f2 body=99 status=ok
// SIG undefined FUN_14614c1f2(void)

void FUN_14614c1f2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014614c251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014614c234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14614c256 FUN_14614c256 body=97 status=ok
// SIG undefined FUN_14614c256(void)

void FUN_14614c256(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x288) != 0) {
    if (*(char *)(*(longlong *)(param_1 + 0x288) + 0xf4) == '\x01') {
      FUN_148ebef72();
      return;
    }
    lVar1 = FUN_140391552();
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d0550;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14614c2b8 FUN_14614c2b8 body=332 status=ok
// SIG undefined FUN_14614c2b8(void)

undefined4 * FUN_14614c2b8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14614c488(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_14614c406(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14614c570(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


