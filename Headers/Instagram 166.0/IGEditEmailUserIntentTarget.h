//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBIntentTarget-Protocol.h>

@class NSString;

@interface IGEditEmailUserIntentTarget : NSObject <FBIntentTarget>
{
    NSString *_email;
    long long _source;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
- (id)initWithEmail:(id)arg1 source:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

