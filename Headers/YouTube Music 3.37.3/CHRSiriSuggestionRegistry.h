//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CHRSiriSuggestionRegistry : NSObject
{
    struct NSDictionary *_suggestionTypeDictionary;
    struct NSMutableDictionary *_suggestionsForAccountDictionary;
    NSObject<OS_dispatch_queue> *_registryDonationsQueue;
}

+ (void)setOverrideShortcutsFileName:(id)arg1;
+ (id)suggestionForAccount:(id)arg1 withIdentifier:(id)arg2;
+ (struct NSDictionary *)suggestedTypeDictionaryFromTypes:(id)arg1;
+ (void)activateSuggestion:(id)arg1;
+ (_Bool)isSuggestionTypeRegistered:(id)arg1;
+ (id)suggestionTypeVersionForSiriUserInfo:(id)arg1;
+ (id)donatedSuggestionsForAccount:(id)arg1;
+ (void)removeAllSuggestions;
+ (void)removeSuggestionsForAccount:(id)arg1;
+ (void)removeSuggestionsWithIdentifiers:(id)arg1;
+ (id)suggestionTypeForActivityType:(id)arg1;
+ (void)registerSiriSuggestionTypes:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *registryDonationsQueue; // @synthesize registryDonationsQueue=_registryDonationsQueue;
@property(retain, nonatomic) NSMutableDictionary *suggestionsForAccountDictionary; // @synthesize suggestionsForAccountDictionary=_suggestionsForAccountDictionary;
@property(copy, nonatomic) NSDictionary *suggestionTypeDictionary; // @synthesize suggestionTypeDictionary=_suggestionTypeDictionary;
- (void).cxx_destruct;
- (void)removeShortcutFilesLastModifiedBeforeDate:(id)arg1;
- (void)removeSuggestionsCreatedBeforeDate:(id)arg1;
- (id)shortcutsFileName;
- (struct NSMutableDictionary *)loadSuggestionsFromDisk;
- (void)saveSuggestionsDictionaryToDisk:(struct NSMutableDictionary *)arg1;
- (void)initializeSuggestionsDatabase;
- (void)removeSuggestionsBelowMinimumVersionWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeUnregisteredSuggestions;
- (void)removeSuggestionWithIdentifier:(id)arg1;
- (void)saveSuggestion:(id)arg1;
- (id)suggestionsForAccountIdentifier:(id)arg1;
- (id)init;

@end

