//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "AWEInteractNotificationProtocol-Protocol.h"
#import "MTLJSONSerializing-Protocol.h"

@class AWEUserModel, NSString;

@interface AWEInteractNotificationUnreadModel : MTLModel <AWEInteractNotificationProtocol, MTLJSONSerializing>
{
    long long _count;
    long long _level;
    NSString *_awemeID;
    AWEUserModel *_user;
    long long _group;
}

- (void).cxx_destruct;
@property(nonatomic) long long group; // @synthesize group=_group;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *awemeID; // @synthesize awemeID=_awemeID;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) long long count; // @synthesize count=_count;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

