//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPRequest.h>

@interface XMPPRequestGetProfilePicture2 : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithJID:(id)arg1 pictureType:(unsigned long long)arg2 currentIdentifier:(id)arg3 retryCount:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithJID:(id)arg1 groupAddRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithJID:(id)arg1 groupInviteCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithJID:(id)arg1 pictureType:(unsigned long long)arg2 currentIdentifier:(id)arg3 groupInviteCode:(id)arg4 groupAddRequest:(id)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

