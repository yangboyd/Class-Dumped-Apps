//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMBuildableObject.h"

@class NSArray;

@interface HAMDASHPeriod : HAMBuildableObject
{
    NSArray *_adaptationSets;
    CDStruct_1b6d18a9 _start;
    CDStruct_1b6d18a9 _duration;
}

+ (id)builder;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 start; // @synthesize start=_start;
@property(readonly, nonatomic) NSArray *adaptationSets; // @synthesize adaptationSets=_adaptationSets;
- (void).cxx_destruct;
- (id)builder;
- (id)init;
- (id)initWithBuilder:(id)arg1;

@end

