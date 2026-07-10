rename report_timing_summary original_report_timing_summary
proc report_timing_summary {args} {
    puts "Executing custom report_timing_summary without -pb or -rpx"
    set new_args {}
    set skip_next 0
    foreach arg $args {
        if {$skip_next} {
            set skip_next 0
            continue
        }
        if {$arg == "-pb" || $arg == "-rpx"} {
            set skip_next 1
            continue
        }
        lappend new_args $arg
    }
    original_report_timing_summary {*}$new_args
}
