//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwilioVoice/RTCAudioSessionDelegate-Protocol.h>

@class NSPointerArray, NSString;

@interface TVOAudioSessionProxy : NSObject <RTCAudioSessionDelegate>
{
    _Bool _active;
    NSPointerArray *_audioSessionDelegates;
}

@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSPointerArray *audioSessionDelegates; // @synthesize audioSessionDelegates=_audioSessionDelegates;
- (void).cxx_destruct;
- (void)audioSessionDeactivated;
- (void)audioSessionActivated;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

