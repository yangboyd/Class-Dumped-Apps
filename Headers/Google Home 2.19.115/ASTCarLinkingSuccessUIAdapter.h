//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

@class NSString;

@interface ASTCarLinkingSuccessUIAdapter : ASTSettingsUIAdapter
{
    NSString *_agentID;
}

@property(retain, nonatomic) NSString *agentID; // @synthesize agentID=_agentID;
- (void).cxx_destruct;
- (void)logEvent;
- (void)tapDoneButton;
- (id)menuSectionsForSettings:(id)arg1;
- (id)pageCustomizations;
- (id)settingsFilter;
- (id)initWithSettingsService:(id)arg1 agentID:(id)arg2;

@end

