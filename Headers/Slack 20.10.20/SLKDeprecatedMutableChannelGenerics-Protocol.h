//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SlackCoreData/SLKChannelGenerics-Protocol.h>
#import <SlackCoreData/SLKDeprecatedMutableStarred-Protocol.h>

@class NSArray, NSNumber, NSString;
@protocol SLKOperationQueueManagerInterface;

@protocol SLKDeprecatedMutableChannelGenerics <SLKChannelGenerics, SLKDeprecatedMutableStarred>
@property(nonatomic, retain) NSNumber *channelActionsCount;
@property(nonatomic, retain) NSNumber *channelActionsTs;
@property(nonatomic, copy) NSArray *memberIds;
@property(nonatomic, retain) NSNumber *mentionCount;
@property(nonatomic, copy) NSString *topicText;
@property(nonatomic, copy) NSString *firstMessageTimestamp;
@property(nonatomic, copy) NSString *latest;
@property(nonatomic, copy) NSString *latestInChannel;
@property(nonatomic, retain) NSNumber *unreadCount;
@property(nonatomic, copy) NSString *nameNormalized;
@property(nonatomic, copy) NSString *name;
@property(nonatomic) _Bool failedMessage;
@property(nonatomic) _Bool messagesDirty;
@property(nonatomic) _Bool hasMore;
@property(nonatomic) _Bool failedLoadingHistory;
- (void)setLastRead:(NSString *)arg1 operationQueueManager:(id <SLKOperationQueueManagerInterface>)arg2;
- (void)setIsUnread:(_Bool)arg1 operationQueueManager:(id <SLKOperationQueueManagerInterface>)arg2;
@end

