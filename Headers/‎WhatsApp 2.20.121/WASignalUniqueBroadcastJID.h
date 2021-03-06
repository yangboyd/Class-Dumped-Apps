//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAIdentifierJID.h>

#import <Core/WASignalRegularGroupCipherJID-Protocol.h>

@class NSString, WABroadcastJID, WAUserJID;

@interface WASignalUniqueBroadcastJID : WAIdentifierJID <WASignalRegularGroupCipherJID>
{
    WABroadcastJID *_broadcastJID;
    WAUserJID *_ownerJID;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isSignalRegularGroupCipherJID;
+ (_Bool)isSignalChatJID;
+ (_Bool)isSignalGroupCipherJID;
- (void).cxx_destruct;
- (_Bool)isEqualToSignalUniqueBroadcastJID:(id)arg1;
- (_Bool)isValid;
- (unsigned long long)internalDomain;
- (id)initWithOutgoingBroadcastJID:(id)arg1;
- (id)initWithIncomingBroadcastJID:(id)arg1 ownerJID:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

