//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientApiSurveysSurveys-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, NSString;
@protocol ComGoogleAppsBigtopDataItemsHatssurveysApiHatsSurveysService;

@interface ComGoogleAppsBigtopSyncClientImplSurveysSurveysImpl : NSObject <ComGoogleAppsBigtopSyncClientApiSurveysSurveys>
{
    id <ComGoogleAppsBigtopDataItemsHatssurveysApiHatsSurveysService> hatsSurveysService_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
}

- (void)dealloc;
- (void)markProductSurveySeenWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)markHatsSurveySeen;
- (id)getHatsSurveyInfo;
- (void)getProductSurveyUrlWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (void)shouldShowProductSurveyWithJBTCallback:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

