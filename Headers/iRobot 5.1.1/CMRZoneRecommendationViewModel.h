//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/CMRCoreViewModel.h>

@interface CMRZoneRecommendationViewModel : CMRCoreViewModel
{
    struct Handle<std::__1::shared_ptr<core::ZoneRecommendationViewModel>, std::__1::shared_ptr<core::ZoneRecommendationViewModel>> _cppRefHandle;
}

+ (id)getTypeName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)saveState;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)getType;
- (void)skipRejectionSurvey;
- (void)submitRejectSurvey:(id)arg1;
- (void)deletePreviewZone;
- (void)customizePreviewZone;
- (void)previewZone:(id)arg1;
- (void)load:(id)arg1;
- (id)currentState;
- (const shared_ptr_e04f071f *)cppRef;
- (id)initWithCpp:(const shared_ptr_e04f071f *)arg1;

@end

