//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HATSDataStorage;

@interface HATSCookieManager : NSObject
{
    id <HATSDataStorage> _persistentStorage;
}

- (void).cxx_destruct;
- (id)cookieStorage;
- (id)cookies:(id)arg1;
- (void)putCookies:(id)arg1 forURL:(id)arg2;
- (id)initWithDataStorage:(id)arg1;
- (id)init;

@end

