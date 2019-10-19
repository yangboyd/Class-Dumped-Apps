//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTSiriShortcut.h"

@class NSString;

@interface YTSiriGamingDestinationShortcut : NSObject <YTSiriShortcut>
{
}

@property(readonly, nonatomic) NSString *suggestedPhrase;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)shortcutActionWithFirstResponder:(id)arg1;
@property(readonly, nonatomic) Class parameterType;
@property(readonly, nonatomic) NSString *activityType;

// Remaining properties
@property(readonly, nonatomic) unsigned long long currentSuggestionVersion;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long minRequiredSuggestionVersion;
@property(readonly) Class superclass;

@end

