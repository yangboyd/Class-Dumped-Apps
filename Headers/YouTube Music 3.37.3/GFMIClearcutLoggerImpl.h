//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GFMIClearcutLogger-Protocol.h"

@class GIMMe, NSString;
@protocol CCTClearcutLogger;

@interface GFMIClearcutLoggerImpl : NSObject <GFMIClearcutLogger>
{
    GIMMe *_gimme;
    id <CCTClearcutLogger> _clearcutLogger;
}

@property(retain, nonatomic) id <CCTClearcutLogger> clearcutLogger; // @synthesize clearcutLogger=_clearcutLogger;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (int)protoFromErrorType:(long long)arg1;
- (int)protoFromInvitesEventType:(long long)arg1;
- (int)protoFromFamilyManagementEventType:(long long)arg1;
- (int)protoFromFamilySetupEventType:(long long)arg1;
- (int)errorSourceFromFlow:(unsigned long long)arg1;
- (id)extensionWithInvitesEvent:(id)arg1 withinFlow:(unsigned long long)arg2;
- (id)baseExtension;
- (void)logMembersInvitedEventWithEmailInvitesSelected:(int)arg1 SMSInvitesSelected:(int)arg2 EmailInvitesSucceeded:(int)arg3 SMSInvitesSucceeded:(int)arg4 withinFlow:(unsigned long long)arg5;
- (void)logErrorEventWithType:(long long)arg1 additionalInfo:(id)arg2 withinFlow:(unsigned long long)arg3;
- (void)logFamilyInviteEventWithType:(long long)arg1 withinFlow:(unsigned long long)arg2;
- (void)logFamilyManagementEventWithType:(long long)arg1;
- (void)logFamilySetupEventWithType:(long long)arg1;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

