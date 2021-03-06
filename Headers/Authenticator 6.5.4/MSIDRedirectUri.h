//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MSAL/NSCopying-Protocol.h>

@class NSURL;

@interface MSIDRedirectUri : NSObject <NSCopying>
{
    _Bool _brokerCapable;
    NSURL *_url;
}

+ (_Bool)redirectUriIsBrokerCapable:(id)arg1;
+ (id)defaultBrokerCapableRedirectUri;
+ (id)defaultNonBrokerRedirectUri:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool brokerCapable; // @synthesize brokerCapable=_brokerCapable;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRedirectUri:(id)arg1 brokerCapable:(_Bool)arg2;

@end

