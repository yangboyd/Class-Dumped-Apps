//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCCameraVerticalToolbarExperimentContext : SCExperimentContext
{
    _Bool _bounceTooltip;
    _Bool _rotateTooltip;
    _Bool _bounceWithLensTooltip;
}

@property(readonly, nonatomic) _Bool bounceWithLensTooltip; // @synthesize bounceWithLensTooltip=_bounceWithLensTooltip;
@property(readonly, nonatomic) _Bool rotateTooltip; // @synthesize rotateTooltip=_rotateTooltip;
@property(readonly, nonatomic) _Bool bounceTooltip; // @synthesize bounceTooltip=_bounceTooltip;
- (void)setupParameters;
- (id)experimentName;

@end

