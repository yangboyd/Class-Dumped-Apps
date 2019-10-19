//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerPerformanceTimeTracking-Protocol.h"

@class NSString;
@protocol SCPerforming;

@interface SCLensExplorerPerformanceTimeTracker : NSObject <SCLensExplorerPerformanceTimeTracking>
{
    id <SCPerforming> _performer;
    double _lensExplorerButtonAppearenceTime;
    double _lensExplorerPageAppearenceTime;
    double _lensExplorerPreviewAppearenceTime;
    double _lensExplorerThumbnailAppearenceTime;
    double _lensExplorerLensAppearenceTime;
    double _lensExplorerSearchLensAppearenceTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double lensExplorerSearchLensAppearenceTime;
@property(readonly, nonatomic) double lensExplorerLensAppearenceTime;
@property(readonly, nonatomic) double lensExplorerThumbnailAppearenceTime;
@property(readonly, nonatomic) double lensExplorerPreviewAppearenceTime;
@property(readonly, nonatomic) double lensExplorerPageAppearenceTime;
@property(readonly, nonatomic) double lensExplorerButtonAppearenceTime;
- (void)trackLensExplorerSearchLensAppearenceTime;
- (void)trackLensExplorerLensAppearenceTime;
- (void)trackLensExplorerThumbnailAppearenceTime;
- (void)trackLensExplorerPreviewAppearenceTime;
- (void)trackLensExplorerPageAppearenceTime;
- (void)trackLensExplorerButtonAppearenceTime;
- (id)initWithPerformer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

