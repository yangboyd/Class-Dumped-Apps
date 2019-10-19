//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapFriendFinderPerson-Protocol.h"

@class NSNumber, NSString, SCCUser, SCScopedAccess;

@interface SCMapFriendFinderPerson : NSObject <SCMapFriendFinderPerson>
{
    NSString *_userId;
    SCScopedAccess *_snapchattersSynchronousDataAccess;
    SCCUser *_user;
    NSNumber *dateLastOnMap;
}

@property(retain, nonatomic) NSNumber *dateLastOnMap; // @synthesize dateLastOnMap;
@property(retain, nonatomic) SCCUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)_snapchatterForUserId:(id)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithUserId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

