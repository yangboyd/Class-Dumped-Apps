//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol RCTTurboModuleLookupDelegate <NSObject>
- (_Bool)moduleIsInitialized:(const char *)arg1;
- (id)moduleForName:(const char *)arg1 warnOnLookupFailure:(_Bool)arg2;
- (id)moduleForName:(const char *)arg1;
@end

