//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCTClearcutLoggerProvider-Protocol.h"

@class NSString;

@interface CCTClearcutLoggerProvider : NSObject <CCTClearcutLoggerProvider>
{
    NSString *_obfuscatedGaiaID;
    _Bool _isAnonymous;
}

- (void).cxx_destruct;
- (id)loggerWithLogSource:(long long)arg1;
- (id)initAsAnonymous;
- (id)initWithObfuscatedGaiaID:(id)arg1;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

