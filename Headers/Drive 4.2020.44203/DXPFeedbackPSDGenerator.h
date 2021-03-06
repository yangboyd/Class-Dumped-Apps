//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DXPFeedbackPSDGenerator-Protocol.h"
#import "DXPLibraryStateObserver-Protocol.h"

@class DXPLibraryState, NSDictionary, NSString;
@protocol GIPClock;

@interface DXPFeedbackPSDGenerator : NSObject <DXPLibraryStateObserver, DXPFeedbackPSDGenerator>
{
    DXPLibraryState *_libraryState;
    NSString *_libraryVersion;
    id <GIPClock> _clock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <GIPClock> clock; // @synthesize clock=_clock;
@property(retain, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
@property(retain, nonatomic) DXPLibraryState *libraryState; // @synthesize libraryState=_libraryState;
- (id)psdDictionaryForState:(id)arg1;
@property(readonly, nonatomic) NSDictionary *productSpecificStrings;
- (void)libraryStateDidUpdate:(id)arg1 oldState:(id)arg2;
- (void)setProductSpecificDataForConfig:(id)arg1;
- (id)initWithLibraryVersion:(id)arg1 clock:(id)arg2;

@end

