; ModuleID = '/home/tls/heterogeneous-vitis-apps/edgedetect/edgedetect-grayscale/EdgedetectBaseline_cluster/EdgedetectBaseline_cluster/hls/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: noinline
define void @apatb_edgedetect_ir(i8* noalias nocapture nonnull readonly "fpga.decayed.dim.hint"="921600" %input_image, i8* noalias nocapture nonnull "fpga.decayed.dim.hint"="307200" %output_image) local_unnamed_addr #0 {
entry:
  %malloccall = tail call i8* @malloc(i64 921600)
  %input_image_copy = bitcast i8* %malloccall to [921600 x i8]*
  %malloccall1 = tail call i8* @malloc(i64 307200)
  %output_image_copy = bitcast i8* %malloccall1 to [307200 x i8]*
  %0 = bitcast i8* %input_image to [921600 x i8]*
  %1 = bitcast i8* %output_image to [307200 x i8]*
  call fastcc void @copy_in([921600 x i8]* nonnull %0, [921600 x i8]* %input_image_copy, [307200 x i8]* nonnull %1, [307200 x i8]* %output_image_copy)
  call void @apatb_edgedetect_hw([921600 x i8]* %input_image_copy, [307200 x i8]* %output_image_copy)
  call void @copy_back([921600 x i8]* %0, [921600 x i8]* %input_image_copy, [307200 x i8]* %1, [307200 x i8]* %output_image_copy)
  tail call void @free(i8* %malloccall)
  tail call void @free(i8* %malloccall1)
  ret void
}

declare noalias i8* @malloc(i64) local_unnamed_addr

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @copy_in([921600 x i8]* noalias readonly, [921600 x i8]* noalias, [307200 x i8]* noalias readonly, [307200 x i8]* noalias) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a921600i8([921600 x i8]* %1, [921600 x i8]* %0)
  call fastcc void @onebyonecpy_hls.p0a307200i8([307200 x i8]* %3, [307200 x i8]* %2)
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @onebyonecpy_hls.p0a921600i8([921600 x i8]* noalias %dst, [921600 x i8]* noalias readonly %src) unnamed_addr #2 {
entry:
  %0 = icmp eq [921600 x i8]* %dst, null
  %1 = icmp eq [921600 x i8]* %src, null
  %2 = or i1 %0, %1
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @arraycpy_hls.p0a921600i8([921600 x i8]* nonnull %dst, [921600 x i8]* nonnull %src, i64 921600)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define void @arraycpy_hls.p0a921600i8([921600 x i8]* %dst, [921600 x i8]* readonly %src, i64 %num) local_unnamed_addr #3 {
entry:
  %0 = icmp eq [921600 x i8]* %src, null
  %1 = icmp eq [921600 x i8]* %dst, null
  %2 = or i1 %1, %0
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr = getelementptr [921600 x i8], [921600 x i8]* %dst, i64 0, i64 %for.loop.idx2
  %src.addr = getelementptr [921600 x i8], [921600 x i8]* %src, i64 0, i64 %for.loop.idx2
  %3 = load i8, i8* %src.addr, align 1
  store i8 %3, i8* %dst.addr, align 1
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @onebyonecpy_hls.p0a307200i8([307200 x i8]* noalias %dst, [307200 x i8]* noalias readonly %src) unnamed_addr #2 {
entry:
  %0 = icmp eq [307200 x i8]* %dst, null
  %1 = icmp eq [307200 x i8]* %src, null
  %2 = or i1 %0, %1
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @arraycpy_hls.p0a307200i8([307200 x i8]* nonnull %dst, [307200 x i8]* nonnull %src, i64 307200)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define void @arraycpy_hls.p0a307200i8([307200 x i8]* %dst, [307200 x i8]* readonly %src, i64 %num) local_unnamed_addr #3 {
entry:
  %0 = icmp eq [307200 x i8]* %src, null
  %1 = icmp eq [307200 x i8]* %dst, null
  %2 = or i1 %1, %0
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr = getelementptr [307200 x i8], [307200 x i8]* %dst, i64 0, i64 %for.loop.idx2
  %src.addr = getelementptr [307200 x i8], [307200 x i8]* %src, i64 0, i64 %for.loop.idx2
  %3 = load i8, i8* %src.addr, align 1
  store i8 %3, i8* %dst.addr, align 1
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @copy_out([921600 x i8]* noalias, [921600 x i8]* noalias readonly, [307200 x i8]* noalias, [307200 x i8]* noalias readonly) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a921600i8([921600 x i8]* %0, [921600 x i8]* %1)
  call fastcc void @onebyonecpy_hls.p0a307200i8([307200 x i8]* %2, [307200 x i8]* %3)
  ret void
}

declare void @free(i8*) local_unnamed_addr

declare void @apatb_edgedetect_hw([921600 x i8]*, [307200 x i8]*)

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @copy_back([921600 x i8]* noalias, [921600 x i8]* noalias readonly, [307200 x i8]* noalias, [307200 x i8]* noalias readonly) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a307200i8([307200 x i8]* %2, [307200 x i8]* %3)
  ret void
}

define void @edgedetect_hw_stub_wrapper([921600 x i8]*, [307200 x i8]*) #5 {
entry:
  call void @copy_out([921600 x i8]* null, [921600 x i8]* %0, [307200 x i8]* null, [307200 x i8]* %1)
  %2 = bitcast [921600 x i8]* %0 to i8*
  %3 = bitcast [307200 x i8]* %1 to i8*
  call void @edgedetect_hw_stub(i8* %2, i8* %3)
  call void @copy_in([921600 x i8]* null, [921600 x i8]* %0, [307200 x i8]* null, [307200 x i8]* %1)
  ret void
}

declare void @edgedetect_hw_stub(i8* noalias nocapture nonnull readonly, i8* noalias nocapture nonnull)

attributes #0 = { noinline "fpga.wrapper.func"="wrapper" }
attributes #1 = { argmemonly noinline norecurse willreturn "fpga.wrapper.func"="copyin" }
attributes #2 = { argmemonly noinline norecurse willreturn "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #3 = { argmemonly noinline norecurse willreturn "fpga.wrapper.func"="arraycpy_hls" }
attributes #4 = { argmemonly noinline norecurse willreturn "fpga.wrapper.func"="copyout" }
attributes #5 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}
!blackbox_cfg = !{!4}

!0 = !{!"clang version 7.0.0 "}
!1 = !{i32 2, !"Dwarf Version", i32 4}
!2 = !{i32 2, !"Debug Info Version", i32 3}
!3 = !{i32 1, !"wchar_size", i32 4}
!4 = !{}
