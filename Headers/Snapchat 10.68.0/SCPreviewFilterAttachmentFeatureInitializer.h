//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureInitializer.h"

@class SCFeatureReference, SCPreviewConfiguration, SCSmartCarouselFilterArranger, SCUserSession;

@interface SCPreviewFilterAttachmentFeatureInitializer : SCFeatureInitializer
{
    SCUserSession *_userSession;
    SCFeatureReference *_swipeFilters;
    SCSmartCarouselFilterArranger *_filterArranger;
    SCPreviewConfiguration *_previewConfiguration;
}

- (void).cxx_destruct;
- (_Bool)enabled;
- (id)createInstance;
- (id)initWithUserSession:(id)arg1 swipeFilters:(id)arg2 filterArranger:(id)arg3 previewConfiguration:(id)arg4;

@end

