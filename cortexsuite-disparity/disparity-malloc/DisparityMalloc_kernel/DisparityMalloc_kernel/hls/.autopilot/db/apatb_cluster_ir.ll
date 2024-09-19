; ModuleID = '/home/tls/Dev/wonderland/AmdVitisDisparity/DisparityMalloc/DisparityMalloc_kernel/DisparityMalloc_kernel/hls/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline willreturn
define void @apatb_cluster_ir(i32 %Ileft_w, i32 %Ileft_h, i32* noalias nocapture nonnull readonly %Ileft_data, i32 %Iright_w, i32 %Iright_h, i32* noalias nocapture nonnull readonly %Iright_data, i32 %Iright_moved_w, i32 %Iright_moved_h, i32* noalias nocapture nonnull %Iright_moved_data, i32 %win_sz, i32 %disparity, i32 %SAD_w, i32 %SAD_h, float* noalias nocapture nonnull %SAD_data, i32 %integralImg_w, i32 %integralImg_h, float* noalias nocapture nonnull %integralImg_data, i32 %retSAD_w, i32 %retSAD_h, float* noalias nocapture nonnull %retSAD_data, i32 %range_w, i32 %range_h, i32* noalias nocapture nonnull %range_data) local_unnamed_addr #0 {
entry:
  %Ileft_data_copy = alloca i32, align 512
  %Iright_data_copy = alloca i32, align 512
  %Iright_moved_data_copy = alloca i32, align 512
  %SAD_data_copy = alloca float, align 512
  %integralImg_data_copy = alloca float, align 512
  %retSAD_data_copy = alloca float, align 512
  %range_data_copy = alloca i32, align 512
  call fastcc void @copy_in(i32* nonnull %Ileft_data, i32* nonnull align 512 %Ileft_data_copy, i32* nonnull %Iright_data, i32* nonnull align 512 %Iright_data_copy, i32* nonnull %Iright_moved_data, i32* nonnull align 512 %Iright_moved_data_copy, float* nonnull %SAD_data, float* nonnull align 512 %SAD_data_copy, float* nonnull %integralImg_data, float* nonnull align 512 %integralImg_data_copy, float* nonnull %retSAD_data, float* nonnull align 512 %retSAD_data_copy, i32* nonnull %range_data, i32* nonnull align 512 %range_data_copy)
  call void @apatb_cluster_hw(i32 %Ileft_w, i32 %Ileft_h, i32* %Ileft_data_copy, i32 %Iright_w, i32 %Iright_h, i32* %Iright_data_copy, i32 %Iright_moved_w, i32 %Iright_moved_h, i32* %Iright_moved_data_copy, i32 %win_sz, i32 %disparity, i32 %SAD_w, i32 %SAD_h, float* %SAD_data_copy, i32 %integralImg_w, i32 %integralImg_h, float* %integralImg_data_copy, i32 %retSAD_w, i32 %retSAD_h, float* %retSAD_data_copy, i32 %range_w, i32 %range_h, i32* %range_data_copy)
  call void @copy_back(i32* %Ileft_data, i32* %Ileft_data_copy, i32* %Iright_data, i32* %Iright_data_copy, i32* %Iright_moved_data, i32* %Iright_moved_data_copy, float* %SAD_data, float* %SAD_data_copy, float* %integralImg_data, float* %integralImg_data_copy, float* %retSAD_data, float* %retSAD_data_copy, i32* %range_data, i32* %range_data_copy)
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @copy_in(i32* noalias readonly, i32* noalias align 512, i32* noalias readonly, i32* noalias align 512, i32* noalias readonly, i32* noalias align 512, float* noalias readonly, float* noalias align 512, float* noalias readonly, float* noalias align 512, float* noalias readonly, float* noalias align 512, i32* noalias readonly, i32* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0i32(i32* align 512 %1, i32* %0)
  call fastcc void @onebyonecpy_hls.p0i32(i32* align 512 %3, i32* %2)
  call fastcc void @onebyonecpy_hls.p0i32(i32* align 512 %5, i32* %4)
  call fastcc void @onebyonecpy_hls.p0f32(float* align 512 %7, float* %6)
  call fastcc void @onebyonecpy_hls.p0f32(float* align 512 %9, float* %8)
  call fastcc void @onebyonecpy_hls.p0f32(float* align 512 %11, float* %10)
  call fastcc void @onebyonecpy_hls.p0i32(i32* align 512 %13, i32* %12)
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @onebyonecpy_hls.p0i32(i32* noalias align 512 %dst, i32* noalias readonly %src) unnamed_addr #2 {
entry:
  %0 = icmp eq i32* %dst, null
  %1 = icmp eq i32* %src, null
  %2 = or i1 %0, %1
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  %3 = load i32, i32* %src, align 4
  store i32 %3, i32* %dst, align 512
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @onebyonecpy_hls.p0f32(float* noalias align 512 %dst, float* noalias readonly %src) unnamed_addr #2 {
entry:
  %0 = icmp eq float* %dst, null
  %1 = icmp eq float* %src, null
  %2 = or i1 %0, %1
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  %3 = load float, float* %src, align 4
  store float %3, float* %dst, align 512
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @copy_out(i32* noalias, i32* noalias readonly align 512, i32* noalias, i32* noalias readonly align 512, i32* noalias, i32* noalias readonly align 512, float* noalias, float* noalias readonly align 512, float* noalias, float* noalias readonly align 512, float* noalias, float* noalias readonly align 512, i32* noalias, i32* noalias readonly align 512) unnamed_addr #3 {
entry:
  call fastcc void @onebyonecpy_hls.p0i32(i32* %0, i32* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0i32(i32* %2, i32* align 512 %3)
  call fastcc void @onebyonecpy_hls.p0i32(i32* %4, i32* align 512 %5)
  call fastcc void @onebyonecpy_hls.p0f32(float* %6, float* align 512 %7)
  call fastcc void @onebyonecpy_hls.p0f32(float* %8, float* align 512 %9)
  call fastcc void @onebyonecpy_hls.p0f32(float* %10, float* align 512 %11)
  call fastcc void @onebyonecpy_hls.p0i32(i32* %12, i32* align 512 %13)
  ret void
}

declare void @apatb_cluster_hw(i32, i32, i32*, i32, i32, i32*, i32, i32, i32*, i32, i32, i32, i32, float*, i32, i32, float*, i32, i32, float*, i32, i32, i32*)

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @copy_back(i32* noalias, i32* noalias readonly align 512, i32* noalias, i32* noalias readonly align 512, i32* noalias, i32* noalias readonly align 512, float* noalias, float* noalias readonly align 512, float* noalias, float* noalias readonly align 512, float* noalias, float* noalias readonly align 512, i32* noalias, i32* noalias readonly align 512) unnamed_addr #3 {
entry:
  call fastcc void @onebyonecpy_hls.p0i32(i32* %4, i32* align 512 %5)
  call fastcc void @onebyonecpy_hls.p0f32(float* %6, float* align 512 %7)
  call fastcc void @onebyonecpy_hls.p0f32(float* %8, float* align 512 %9)
  call fastcc void @onebyonecpy_hls.p0f32(float* %10, float* align 512 %11)
  call fastcc void @onebyonecpy_hls.p0i32(i32* %12, i32* align 512 %13)
  ret void
}

define void @cluster_hw_stub_wrapper(i32, i32, i32*, i32, i32, i32*, i32, i32, i32*, i32, i32, i32, i32, float*, i32, i32, float*, i32, i32, float*, i32, i32, i32*) #4 {
entry:
  call void @copy_out(i32* null, i32* %2, i32* null, i32* %5, i32* null, i32* %8, float* null, float* %13, float* null, float* %16, float* null, float* %19, i32* null, i32* %22)
  call void @cluster_hw_stub(i32 %0, i32 %1, i32* %2, i32 %3, i32 %4, i32* %5, i32 %6, i32 %7, i32* %8, i32 %9, i32 %10, i32 %11, i32 %12, float* %13, i32 %14, i32 %15, float* %16, i32 %17, i32 %18, float* %19, i32 %20, i32 %21, i32* %22)
  call void @copy_in(i32* null, i32* %2, i32* null, i32* %5, i32* null, i32* %8, float* null, float* %13, float* null, float* %16, float* null, float* %19, i32* null, i32* %22)
  ret void
}

declare void @cluster_hw_stub(i32, i32, i32* noalias nocapture nonnull readonly, i32, i32, i32* noalias nocapture nonnull readonly, i32, i32, i32* noalias nocapture nonnull, i32, i32, i32, i32, float* noalias nocapture nonnull, i32, i32, float* noalias nocapture nonnull, i32, i32, float* noalias nocapture nonnull, i32, i32, i32* noalias nocapture nonnull)

attributes #0 = { argmemonly noinline willreturn "fpga.wrapper.func"="wrapper" }
attributes #1 = { argmemonly noinline norecurse willreturn "fpga.wrapper.func"="copyin" }
attributes #2 = { argmemonly noinline norecurse willreturn "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #3 = { argmemonly noinline norecurse willreturn "fpga.wrapper.func"="copyout" }
attributes #4 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}
!blackbox_cfg = !{!4}

!0 = !{!"clang version 7.0.0 "}
!1 = !{i32 2, !"Dwarf Version", i32 4}
!2 = !{i32 2, !"Debug Info Version", i32 3}
!3 = !{i32 1, !"wchar_size", i32 4}
!4 = !{}
