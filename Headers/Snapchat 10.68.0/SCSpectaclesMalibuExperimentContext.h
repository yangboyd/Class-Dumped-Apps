//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSpectaclesMalibuExperimentContext : SCExperimentContext
{
    _Bool _enableHomeWiFi;
    _Bool _enableHomeWiFiInstructions;
}

@property(readonly, nonatomic) _Bool enableHomeWiFiInstructions; // @synthesize enableHomeWiFiInstructions=_enableHomeWiFiInstructions;
@property(readonly, nonatomic) _Bool enableHomeWiFi; // @synthesize enableHomeWiFi=_enableHomeWiFi;
- (void)setupParameters;
- (id)experimentName;

@end

