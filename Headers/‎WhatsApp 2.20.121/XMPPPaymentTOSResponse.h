//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMPPPaymentTOSResponse : NSObject
{
    _Bool _consumerAccepted;
    _Bool _merchantAccepted;
    _Bool _outage;
    _Bool _sandbox;
}

+ (id)responseFromStanza:(id)arg1;
@property(readonly, nonatomic) _Bool sandbox; // @synthesize sandbox=_sandbox;
@property(readonly, nonatomic) _Bool outage; // @synthesize outage=_outage;
@property(readonly, nonatomic) _Bool merchantAccepted; // @synthesize merchantAccepted=_merchantAccepted;
@property(readonly, nonatomic) _Bool consumerAccepted; // @synthesize consumerAccepted=_consumerAccepted;
- (id)description;
- (id)initWithConsumerAccepted:(_Bool)arg1 merchantAccepted:(_Bool)arg2 outage:(_Bool)arg3 sandbox:(_Bool)arg4;

@end

