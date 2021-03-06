//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTSessionStartEvent_Builder.h"

@class ComGoogleCommonCollectImmutableList, JBTSessionStartEvent_MessageType, JBTSessionStartEvent_StartType, NSString;

@interface JBT_AutoValue_SessionStartEvent_Builder : JBTSessionStartEvent_Builder
{
    JBTSessionStartEvent_StartType *startType_;
    JBTSessionStartEvent_MessageType *messageType_;
    NSString *previousMessageBody_;
    NSString *clientBuildVersion_;
    ComGoogleCommonCollectImmutableList *enabledFeatures_;
    ComGoogleCommonCollectImmutableList *loadedFeatures_;
}

- (void)dealloc;
- (id)build;
- (id)setLoadedFeaturesWithJavaUtilList:(id)arg1;
- (id)setEnabledFeaturesWithJavaUtilList:(id)arg1;
- (id)setClientBuildVersionWithNSString:(id)arg1;
- (id)setPreviousMessageBodyWithNSString:(id)arg1;
- (id)setMessageTypeWithJBTSessionStartEvent_MessageType:(id)arg1;
- (id)setStartTypeWithJBTSessionStartEvent_StartType:(id)arg1;

@end

