//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAUserJID;

@interface XMPPContact : NSObject
{
    _Bool _whatsAppContact;
    NSString *_phoneNumber;
    WAUserJID *_userJID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isWhatsAppContact) _Bool whatsAppContact; // @synthesize whatsAppContact=_whatsAppContact;
@property(readonly, nonatomic) WAUserJID *userJID; // @synthesize userJID=_userJID;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)description;
- (id)initWithJID:(id)arg1 phoneNumber:(id)arg2 whatsAppContact:(_Bool)arg3;

@end

