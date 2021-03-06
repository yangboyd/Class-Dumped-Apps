//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface CHRSiriShortcutSuggestionManager : NSObject
{
    NSArray *_shortcutSuggestions;
    NSObject<OS_dispatch_queue> *_shortcutCenterSuggestionQueue;
}

+ (unsigned long long)shortcutSuggestions:(id)arg1 indexOfSuggestion:(id)arg2;
+ (_Bool)shortcutSuggestions:(id)arg1 containsSuggestion:(id)arg2;
+ (void)setSiriWatchfaceSuggestions:(id)arg1;
+ (id)shortcutSuggestionsForAccount:(id)arg1;
+ (_Bool)removeShortcutSuggestion:(id)arg1;
+ (_Bool)addShortcutSuggestion:(id)arg1;
+ (id)shortcutSuggestions;
+ (void)setShortcutSuggestions:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *shortcutCenterSuggestionQueue; // @synthesize shortcutCenterSuggestionQueue=_shortcutCenterSuggestionQueue;
@property(copy, nonatomic) NSArray *shortcutSuggestions; // @synthesize shortcutSuggestions=_shortcutSuggestions;
- (id)init;

@end

