//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCDiscoverFeedOnboardingExperimentContext : SCExperimentContext
{
    NSString *_enableWithEntryPoint;
    NSString *_treatmentNumber;
}

@property(readonly, nonatomic) NSString *treatmentNumber; // @synthesize treatmentNumber=_treatmentNumber;
@property(readonly, nonatomic) NSString *enableWithEntryPoint; // @synthesize enableWithEntryPoint=_enableWithEntryPoint;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end

