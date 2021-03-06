//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGStoryViewerViewContextual-Protocol.h>

@class NSString;

@interface IGLiveBroadcastLaunchContext : NSObject <IGStoryViewerViewContextual>
{
    _Bool _shouldJoinAsGuest;
    NSString *_broadcastId;
    NSString *_serverInfoData;
    NSString *_commentId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldJoinAsGuest; // @synthesize shouldJoinAsGuest=_shouldJoinAsGuest;
@property(readonly, copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(readonly, copy, nonatomic) NSString *serverInfoData; // @synthesize serverInfoData=_serverInfoData;
@property(readonly, copy, nonatomic) NSString *broadcastId; // @synthesize broadcastId=_broadcastId;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithBroadcastId:(id)arg1 serverInfoData:(id)arg2 commentId:(id)arg3 shouldJoinAsGuest:(_Bool)arg4;

@end

