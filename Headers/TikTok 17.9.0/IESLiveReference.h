//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveReference-Protocol.h"

@class NSString;
@protocol IESLiveReferenceActions;

@interface IESLiveReference : NSObject <IESLiveReference>
{
    long long _audienceCount;
    id <IESLiveReferenceActions> _actionCreator;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveReferenceActions> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(nonatomic) long long audienceCount; // @synthesize audienceCount=_audienceCount;
- (long long)audienceReferenceCount;
- (void)releaseAudience;
- (void)retainAudience;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

