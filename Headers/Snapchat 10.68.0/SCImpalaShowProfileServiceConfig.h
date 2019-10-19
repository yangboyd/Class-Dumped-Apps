//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCImpalaShowProfileServiceConfig : SCComposerMarshallableObject
{
    NSString *_accountServiceUrl;
    NSString *_showsServiceUrl;
    NSString *_watchedStateServiceUrl;
}

@property(copy, nonatomic) NSString *watchedStateServiceUrl; // @synthesize watchedStateServiceUrl=_watchedStateServiceUrl;
@property(copy, nonatomic) NSString *showsServiceUrl; // @synthesize showsServiceUrl=_showsServiceUrl;
@property(copy, nonatomic) NSString *accountServiceUrl; // @synthesize accountServiceUrl=_accountServiceUrl;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithAccountServiceUrl:(id)arg1 showsServiceUrl:(id)arg2 watchedStateServiceUrl:(id)arg3;

@end

