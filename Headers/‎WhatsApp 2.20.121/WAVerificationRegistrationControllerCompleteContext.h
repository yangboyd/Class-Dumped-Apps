//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WARegistrationSession, WAUserJID;

@interface WAVerificationRegistrationControllerCompleteContext : NSObject
{
    WARegistrationSession *_session;
    WAUserJID *_userJID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WAUserJID *userJID; // @synthesize userJID=_userJID;
@property(readonly, nonatomic) WARegistrationSession *session; // @synthesize session=_session;
- (id)initWithSession:(id)arg1 userJID:(id)arg2;

@end

