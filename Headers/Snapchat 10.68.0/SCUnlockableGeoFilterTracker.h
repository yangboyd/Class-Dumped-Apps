//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnlockableTracker.h"

@interface SCUnlockableGeoFilterTracker : SCUnlockableTracker
{
}

+ (long long)attachmentTypeFromString:(id)arg1;
+ (id)_buildFilterImpressionTrackForInteraction:(id)arg1 tracker:(id)arg2;
- (_Bool)_canTrack:(id)arg1 forType:(long long)arg2;
- (void)_updateInteraction:(id)arg1 existingInteraction:(id)arg2;
- (id)_createProtoTrackWithSnapInfo:(id)arg1 sojuImpressionData:(id)arg2;
- (void)_fireFilterCarouselInteractionWithSnapInfo:(id)arg1;
- (void)trackAttachmentViewForFilterId:(id)arg1 attachmentType:(id)arg2 openTimestamp:(id)arg3 viewTimeSec:(double)arg4;
- (void)fireTrackWithSnapInfo:(id)arg1;

@end

