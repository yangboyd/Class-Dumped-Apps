//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureSmartSwipeFilters.h"

@class SCSmartImageSwipeFilterView;

@interface SCFeatureImageSmartSwipeFilters : SCFeatureSmartSwipeFilters
{
    SCSmartImageSwipeFilterView *_smartImageSwipeFilterView;
}

@property(retain, nonatomic) SCSmartImageSwipeFilterView *smartImageSwipeFilterView; // @synthesize smartImageSwipeFilterView=_smartImageSwipeFilterView;
- (void).cxx_destruct;
- (id)_fullScreenImage;
- (void)_setupWithFullscreenImage;
- (void)lensAppliedImageWithLensCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)filteredImageWithCroppingAspectRatio:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setupImage;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (id)smartImageSwipeFilters;
- (id)imagePlayback;

@end

