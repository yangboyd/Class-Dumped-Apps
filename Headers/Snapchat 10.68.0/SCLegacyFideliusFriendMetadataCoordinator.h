//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFideliusFriendMetadataCoordinating-Protocol.h"

@protocol SCLegacyFriendsProvider;

@interface SCLegacyFideliusFriendMetadataCoordinator : NSObject <SCFideliusFriendMetadataCoordinating>
{
    id <SCLegacyFriendsProvider> _friendsProvider;
}

- (void).cxx_destruct;
- (void)setFideliusFriendMetadatas:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setFideliusFriendMetadata:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fideliusFriendMetadataWithUserId:(id)arg1;
- (id)initWithFriendsProvider:(id)arg1;

@end

