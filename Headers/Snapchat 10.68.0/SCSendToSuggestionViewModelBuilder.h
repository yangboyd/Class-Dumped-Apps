//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCSendToSuggestionViewModelBuilder : NSObject
{
    NSArray *_suggestedRecipients;
    _Bool _shouldRemoveSelections;
}

+ (id)sendToSuggestionViewModelFromExistingSendToSuggestionViewModel:(id)arg1;
+ (id)sendToSuggestionViewModel;
- (void).cxx_destruct;
- (id)withShouldRemoveSelections:(_Bool)arg1;
- (id)withSuggestedRecipients:(id)arg1;
- (id)build;

@end

