//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBSharedContentSingleSettingTableViewController.h"

@protocol DBSharedContentPassPolicyDelegate;

@interface DBSharedContentPassPolicyController : DBSharedContentSingleSettingTableViewController
{
    id <DBSharedContentPassPolicyDelegate> _delegate;
}

+ (id)navigationBarTitle;
+ (long long)db_policyForBool:(_Bool)arg1;
+ (_Bool)db_boolForPolicy:(long long)arg1;
- (void).cxx_destruct;
- (void)didSelectNewValue:(_Bool)arg1;
@property(nonatomic) long long policy;
- (id)initWithInitialPassPolicy:(long long)arg1 teamName:(id)arg2 delegate:(id)arg3;

@end

