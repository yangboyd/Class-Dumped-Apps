//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SPTVoiceSessionPresentationOptions : NSObject <NSCopying>
{
    _Bool _shouldShowResultsScreen;
    _Bool _shouldShowSpeechTranscript;
    _Bool _shouldShowCommandSuggestions;
    _Bool _shouldShowOnboardingScreen;
    _Bool _shouldShowListeningIntroductionText;
    _Bool _shouldPlayListeningEarcon;
    _Bool _shouldAnimateListeningInteraction;
    double _showCommandSuggestionsTimeout;
}

@property(nonatomic) _Bool shouldAnimateListeningInteraction; // @synthesize shouldAnimateListeningInteraction=_shouldAnimateListeningInteraction;
@property(nonatomic) _Bool shouldPlayListeningEarcon; // @synthesize shouldPlayListeningEarcon=_shouldPlayListeningEarcon;
@property(nonatomic) _Bool shouldShowListeningIntroductionText; // @synthesize shouldShowListeningIntroductionText=_shouldShowListeningIntroductionText;
@property(nonatomic) _Bool shouldShowOnboardingScreen; // @synthesize shouldShowOnboardingScreen=_shouldShowOnboardingScreen;
@property(nonatomic) double showCommandSuggestionsTimeout; // @synthesize showCommandSuggestionsTimeout=_showCommandSuggestionsTimeout;
@property(nonatomic) _Bool shouldShowCommandSuggestions; // @synthesize shouldShowCommandSuggestions=_shouldShowCommandSuggestions;
@property(nonatomic) _Bool shouldShowSpeechTranscript; // @synthesize shouldShowSpeechTranscript=_shouldShowSpeechTranscript;
@property(nonatomic) _Bool shouldShowResultsScreen; // @synthesize shouldShowResultsScreen=_shouldShowResultsScreen;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

