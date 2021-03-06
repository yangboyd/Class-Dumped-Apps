//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGLoadMoreResponseType-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGTVBadgingResponse, IGTVChannelResponse, NSArray, NSString;

@interface IGTVGuideResponse : NSObject <IGLoadMoreResponseType, NSCopying, IGListDiffable>
{
    _Bool _hasCreatedChannel;
    NSArray *_channelResponses;
    IGTVChannelResponse *_myChannelResponse;
    IGTVBadgingResponse *_badgingResponse;
    NSString *_maxId;
}

@property(readonly, nonatomic) NSString *maxId; // @synthesize maxId=_maxId;
@property(readonly, nonatomic) IGTVBadgingResponse *badgingResponse; // @synthesize badgingResponse=_badgingResponse;
@property(readonly, nonatomic) _Bool hasCreatedChannel; // @synthesize hasCreatedChannel=_hasCreatedChannel;
@property(readonly, nonatomic) IGTVChannelResponse *myChannelResponse; // @synthesize myChannelResponse=_myChannelResponse;
@property(readonly, copy, nonatomic) NSArray *channelResponses; // @synthesize channelResponses=_channelResponses;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)diffIdentifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)initWithChannelResponses:(id)arg1 myChannelResponse:(id)arg2 hasCreatedChannel:(_Bool)arg3 badgingResponse:(id)arg4 maxId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

