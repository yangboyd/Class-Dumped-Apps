//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTMSessionFetcherService, NSMutableDictionary;

@interface IonNetworkHelper : NSObject
{
    GTMSessionFetcherService *_service;
    NSMutableDictionary *_fetchers;
    _Bool _disableCookies;
}

@property(nonatomic) _Bool disableCookies; // @synthesize disableCookies=_disableCookies;
- (void).cxx_destruct;
- (void)cancelRequest:(unsigned int)arg1;
- (_Bool)makeRequest:(id)arg1 requestPtr:(SharedPtr_69ffe5b3)arg2;
- (void)setAuthorizer:(id)arg1;
- (id)initWithFetcherService:(id)arg1;
- (id)init;

@end

