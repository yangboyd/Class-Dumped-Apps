//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPStanza.h>

@class NSString;

@interface XMPPAckStanza : XMPPStanza
{
}

+ (unsigned long long)typeForString:(id)arg1;
+ (id)stringForType:(unsigned long long)arg1;
+ (id)stringsForTypes;
+ (_Bool)isCompatibleStanzaElement:(id)arg1;
- (id)phashAttributeWithExpectedVersionPrefix:(id)arg1 includedInResult:(_Bool)arg2;
- (id)log;
@property(nonatomic) long long attributeErrorCode;
@property(readonly, copy, nonatomic) NSString *phashV2;
@property(readonly, copy, nonatomic) NSString *phashV1;
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) _Bool negative;
@property(copy, nonatomic) NSString *rawNotificationType;
@property(nonatomic) unsigned long long notificationType;
@property(nonatomic) unsigned long long receiptType;
@property(nonatomic) unsigned long long messageType;
@property(nonatomic) unsigned long long ackClass;
- (id)initWithClass:(unsigned long long)arg1;

@end

