//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRWMessageID, NSDate;

@interface GRWMessageImpression : NSObject
{
    GRWMessageID *_messageID;
    long long _userActionType;
    NSDate *_timestamp;
}

@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long userActionType; // @synthesize userActionType=_userActionType;
@property(retain, nonatomic) GRWMessageID *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToImpression:(id)arg1;
- (void)updateUserActionType:(long long)arg1;
- (id)initWithMessageID:(id)arg1 userActionType:(long long)arg2;
- (id)initWithMessageID:(id)arg1 userActionType:(long long)arg2 timestamp:(id)arg3;

@end

