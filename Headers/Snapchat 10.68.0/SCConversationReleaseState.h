//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCConversationReleaseState : NSObject <NSCopying>
{
    NSString *_participant;
    NSArray *_messageReleases;
    NSArray *_snapReleases;
}

@property(readonly, copy, nonatomic) NSArray *snapReleases; // @synthesize snapReleases=_snapReleases;
@property(readonly, copy, nonatomic) NSArray *messageReleases; // @synthesize messageReleases=_messageReleases;
@property(readonly, copy, nonatomic) NSString *participant; // @synthesize participant=_participant;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParticipant:(id)arg1 messageReleases:(id)arg2 snapReleases:(id)arg3;

@end

