//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString, SCCUser;

@interface SCCSuggestedFriend : SCComposerMarshallableObject
{
    SCCUser *_user;
    NSString *_localizedSuggestionReason;
    NSString *_suggestionToken;
}

@property(copy, nonatomic) NSString *suggestionToken; // @synthesize suggestionToken=_suggestionToken;
@property(copy, nonatomic) NSString *localizedSuggestionReason; // @synthesize localizedSuggestionReason=_localizedSuggestionReason;
@property(retain, nonatomic) SCCUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithUser:(id)arg1 localizedSuggestionReason:(id)arg2 suggestionToken:(id)arg3;
- (id)initWithSCSnapchatter:(id)arg1;

@end

