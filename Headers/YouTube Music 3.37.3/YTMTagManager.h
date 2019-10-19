//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAGContainerOpenerNotifier-Protocol.h"

@class GIMMe, NSMutableOrderedSet;

@interface YTMTagManager : NSObject <TAGContainerOpenerNotifier>
{
    _Bool _isContainerOpen;
    GIMMe *_gimme;
    NSMutableOrderedSet *_events;
}

@property(nonatomic) _Bool isContainerOpen; // @synthesize isContainerOpen=_isContainerOpen;
@property(retain, nonatomic) NSMutableOrderedSet *events; // @synthesize events=_events;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)openContainer;
- (void)containerAvailable:(id)arg1;
- (void)trackEventWithString:(id)arg1;
- (void)trackSignIn;
- (void)trackAppLaunch;
- (id)init;

@end

