//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopServicesTopicsTripsTripsHelper_Adapter-Protocol.h"

@class NSString;
@protocol JBTISmartMailTimeHelper, JBTISmartMailTranslationHelper;

@interface ComGoogleAppsBigtopSyncClientImplSmartmailCommonTripsHelperClientAdapter : NSObject <ComGoogleAppsBigtopServicesTopicsTripsTripsHelper_Adapter>
{
    id <JBTISmartMailTimeHelper> timeHelper_;
    id <JBTISmartMailTranslationHelper> translationHelper_;
}

- (void)dealloc;
- (id)getFormattedSummaryDateWithJCSTime:(id)arg1;
- (id)getFormattedDateRangeWithJCSTime:(id)arg1 withJCSTime:(id)arg2;
- (id)getTranslationWithFallbackWithJCSSmartMailTextId:(id)arg1 withNSStringArray:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

