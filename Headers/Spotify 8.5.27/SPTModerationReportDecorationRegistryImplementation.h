//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTModerationReportDecorationRegistry-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SPTModerationReportDecorationRegistryImplementation : NSObject <SPTModerationReportDecorationRegistry>
{
    NSMutableDictionary *_handlers;
}

@property(readonly, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (void).cxx_destruct;
- (id)decorateURLBuilder:(id)arg1;
- (void)removeDecorationHandlerWithIdentifier:(id)arg1;
- (void)addDecorationHandler:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

