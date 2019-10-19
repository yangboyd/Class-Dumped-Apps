//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCQueuePerformer;
@protocol SCUpdateMediaLoadStateHandler;

@interface SCChatV3MediaExtensionCacheHandler : NSObject
{
    NSString *_userId;
    SCQueuePerformer *_queuePerformer;
    id <SCUpdateMediaLoadStateHandler> _delegate;
}

- (void).cxx_destruct;
- (void)_loadMediaFromExtensionForConversationId:(id)arg1 messageId:(id)arg2 messageBodyType:(long long)arg3 media:(id)arg4 file:(id)arg5;
- (_Bool)loadMediaFromExtensionForConversationId:(id)arg1 messageId:(id)arg2 messageBodyType:(long long)arg3 media:(id)arg4;
- (void)setDelegate:(id)arg1;
- (id)initWithUserId:(id)arg1;

@end

