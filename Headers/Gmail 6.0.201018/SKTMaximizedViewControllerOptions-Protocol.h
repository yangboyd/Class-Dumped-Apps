//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTSelectedContactsDisplayOptions-Protocol.h"
#import "SKTSendKitCoreOptions-Protocol.h"

@class SKTColorTheme, SKTMaximizedViewColorOverrides, SKTProfileLookupOptions;

@protocol SKTMaximizedViewControllerOptions <SKTSendKitCoreOptions, SKTSelectedContactsDisplayOptions>
@property(nonatomic) _Bool chipsInputActivated;
@property(retain, nonatomic) SKTProfileLookupOptions *profileLookupOptions;
@property(nonatomic) _Bool showAtoZListOfDeviceContacts;
@property(nonatomic) unsigned long long addRecipientItemVisibility;
@property(retain, nonatomic) SKTColorTheme *maximizedViewColors;
@property(retain, nonatomic) SKTMaximizedViewColorOverrides *maximizedViewColorOverrides;
@property(nonatomic) unsigned long long fullScreenSuggestionsCount;
@end

