//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCLensButtonBadgeExperimentContext : SCExperimentContext
{
    _Bool _stopLoadingOnWWAN;
    _Bool _badgeOnWiFi;
    _Bool _badgeOnWWAN;
}

+ (id)experimentContextWithExperimentManager:(id)arg1;
@property(readonly, nonatomic) _Bool badgeOnWWAN; // @synthesize badgeOnWWAN=_badgeOnWWAN;
@property(readonly, nonatomic) _Bool badgeOnWiFi; // @synthesize badgeOnWiFi=_badgeOnWiFi;
@property(readonly, nonatomic) _Bool stopLoadingOnWWAN; // @synthesize stopLoadingOnWWAN=_stopLoadingOnWWAN;
- (void)setupParameters;
- (id)experimentName;

@end

