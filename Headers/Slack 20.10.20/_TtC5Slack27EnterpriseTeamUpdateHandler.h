//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC5Slack27EnterpriseTeamUpdateHandler : NSObject
{
}

+ (void)updateEnterpriseTeamsFromRTMStartWithSelfData:(id)arg1 dependencies:(id)arg2;
- (id)init;
- (void)addUserToEnterpriseTeams:(id)arg1 accountManager:(id)arg2 enterpriseId:(id)arg3 enterpriseToken:(id)arg4 userId:(id)arg5 notificationCenter:(id)arg6 enterpriseTokenHandler:(id)arg7;
- (void)removeUserFromEnterpriseTeams:(id)arg1 accountManager:(id)arg2 teamId:(id)arg3 notificationCenter:(id)arg4;

@end

