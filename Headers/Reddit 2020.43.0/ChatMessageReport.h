//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class Contact, NSDictionary, NSString;

@interface ChatMessageReport : NSObject <NSCoding>
{
    Contact *_contact;
    NSDictionary *_report;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *report; // @synthesize report=_report;
@property(retain, nonatomic) Contact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) NSString *actionedByUsername;
@property(readonly, nonatomic) _Bool isAlreadyActionedIgnored;
@property(readonly, nonatomic) _Bool isAlreadyActionedDeleted;
@property(readonly, nonatomic) _Bool isAlreadyActioned;
- (id)reportActions;
@property(readonly, nonatomic) _Bool isFromPublicRoom;
@property(readonly, nonatomic) NSString *originalMessageBody;
@property(readonly, nonatomic) NSString *channelName;
@property(readonly, nonatomic) NSString *reason;
@property(readonly, nonatomic) long long createdAtUTC;
@property(readonly, nonatomic) NSString *userId;
@property(readonly, nonatomic) NSString *username;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMessageReport:(id)arg1;

@end

