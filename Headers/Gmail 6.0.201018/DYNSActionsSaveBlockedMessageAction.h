//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSDataUiMessageConverter, DYNSSyncMessageDeliveryManager;
@protocol ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser, ComGoogleAppsDynamiteV1SharedUtilIdGenerator, DYNSCommonDynamiteClock, DYNSStorageApiTopicMessageStorageController, JavaxInjectProvider;

@interface DYNSActionsSaveBlockedMessageAction : NSObject
{
    id <ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser> accountUser_;
    id <DYNSCommonDynamiteClock> dynamiteClock_;
    id <JavaxInjectProvider> executorProvider_;
    DYNSSyncMessageDeliveryManager *messageDeliveryManager_;
    id <DYNSStorageApiTopicMessageStorageController> topicMessageStorageController_;
    DYNSDataUiMessageConverter *uiMessageConverter_;
    id <ComGoogleAppsDynamiteV1SharedUtilIdGenerator> idGenerator_;
}

- (void)dealloc;
- (id)executeWithDYNSCommonTopicId:(id)arg1 withNSString:(id)arg2 withComGoogleCommonCollectImmutableList:(id)arg3;

@end

