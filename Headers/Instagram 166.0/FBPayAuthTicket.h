//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface FBPayAuthTicket : NSObject
{
    NSString *_authTicketTag;
    NSString *_authTicketID;
    NSString *_type;
    NSString *_status;
    NSString *_fingerprint;
    NSNumber *_ttl;
    NSArray *_capabilities;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *capabilities; // @synthesize capabilities=_capabilities;
@property(copy, nonatomic) NSNumber *ttl; // @synthesize ttl=_ttl;
@property(copy, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *authTicketID; // @synthesize authTicketID=_authTicketID;
@property(copy, nonatomic) NSString *authTicketTag; // @synthesize authTicketTag=_authTicketTag;
- (_Bool)isValid;
- (id)initWithTag:(id)arg1 fingerprint:(id)arg2 authTicketID:(id)arg3 status:(id)arg4 type:(id)arg5 ttl:(id)arg6 capabilities:(id)arg7;

@end

