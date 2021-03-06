//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTEValueType-Protocol.h"

@class GTEChatRoomIdentity, NSString;

@interface GTETaskSource : NSObject <GTEValueType>
{
    long long _type;
    GTEChatRoomIdentity *_chatRoomID;
}

+ (_Bool)supportsSecureCoding;
+ (id)chatRoomSourceWithID:(id)arg1;
+ (id)userSource;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) GTEChatRoomIdentity *chatRoomID; // @synthesize chatRoomID=_chatRoomID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 chatRoomID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

