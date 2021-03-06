//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFeedFilterType-Protocol.h>

@class IGUserList, NSString;

@interface IGCustomFeedFilter : NSObject <IGFeedFilterType>
{
    IGUserList *_userList;
}

@property(readonly, nonatomic) IGUserList *userList; // @synthesize userList=_userList;
- (void).cxx_destruct;
- (_Bool)canApplyRemotely;
- (id)filterIDs;
- (id)identifier;
- (id)typeName;
@property(readonly, copy, nonatomic) NSString *title;
- (_Bool)_matchesUser:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isEditable;
- (_Bool)matchesItem:(id)arg1 sponsoredSupportConfiguration:(id)arg2;
- (id)initWithUserList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

