//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLCuepoint-Protocol.h>

@class NSDate, NSString;

@interface MLAVCuepoint : NSObject <MLCuepoint>
{
    // Error parsing type: {HLSCuepoint="cuepoint_"{CuePoint="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadata="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"{__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >="__a_value"Ai}}}"event_"i"type_"i"total_duration_sec_"d"playhead_time_sec_"d"media_time_since_start_sec_"d"playhead_time_at_start_sec_"d"start_sequence_number_"q"identifier_"{ArenaStringPtr="tagged_ptr_"{TaggedPtr<std::__1::basic_string<char> >="ptr_"^v}}"cuepoint_context_"{ArenaStringPtr="tagged_ptr_"{TaggedPtr<std::__1::basic_string<char> >="ptr_"^v}}}"chunk_start_time_"{Time="rep_"{Duration="rep_hi_"q"rep_lo_"I}}"chunk_duration_"{Duration="rep_hi_"q"rep_lo_"I}}, name: _cuepoint
    NSString *_cachedCueIdentifier;
    NSString *_cachedCueContext;
    NSDate *_cachedCueStartDate;
    NSDate *_cachedCuepointStartDate;
}

+ (id)cuepointWithCueIdentifier:(id)arg1 cueType:(long long)arg2 totalCueDuration:(double)arg3 cueContext:(id)arg4 cuepointEvent:(long long)arg5 cuepointStartDate:(id)arg6 cuepointOffset:(double)arg7 cuepointDuration:(double)arg8;
+ (id)cuepointWithDateRangeLine:(id)arg1;
+ (id)cuepointWithDateRangeMetadata:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSDate *cuepointEndDate;
@property(readonly, nonatomic) NSDate *cuepointStartDate;
@property(readonly, nonatomic) NSDate *cueStartDate;
- (double)duration;
- (double)offset;
- (id)context;
- (id)startDate;
- (id)identifier;
- (long long)event;
- (long long)type;
@property(readonly, nonatomic) _Bool useProductionTime;
@property(readonly, nonatomic) double remainingCueDuration;
@property(readonly, nonatomic) double cuepointDuration;
@property(readonly, nonatomic) double cuepointOffset;
@property(readonly, nonatomic) double cuepointEndTime;
@property(readonly, nonatomic) double cuepointStartTime;
@property(readonly, nonatomic) double cueStartTime;
@property(readonly, nonatomic) long long cuepointEvent;
@property(readonly, nonatomic) NSString *cueContext;
@property(readonly, nonatomic) double totalCueDuration;
@property(readonly, nonatomic) long long cueType;
@property(readonly, nonatomic) NSString *cueIdentifier;
// Error parsing type for property cuepoint:
// Property attributes: Tr^{HLSCuepoint={CuePoint=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}iiddddq{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}}{Time={Duration=qI}}{Duration=qI}},R,N

- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 event:(long long)arg3 startDate:(id)arg4 offset:(double)arg5 duration:(double)arg6 context:(id)arg7;
-     // Error parsing type: @136@0:8{HLSCuepoint={CuePoint=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}iiddddq{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}}{Time={Duration=qI}}{Duration=qI}}16, name: initWithHLSCuepoint:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

