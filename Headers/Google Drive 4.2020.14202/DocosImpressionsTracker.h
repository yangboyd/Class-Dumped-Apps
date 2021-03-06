//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKImpressionsClient;

@interface DocosImpressionsTracker : NSObject
{
    GDKImpressionsClient *_impressionsClient;
}

+ (int)commentTypeForDiscussion:(id)arg1;
+ (id)docosDetailsForDiscussion:(id)arg1;
@property(retain, nonatomic) GDKImpressionsClient *impressionsClient; // @synthesize impressionsClient=_impressionsClient;
- (void).cxx_destruct;
- (void)sendInstantImpressionWithCode:(long long)arg1 entryPoint:(int)arg2 details:(id)arg3;
- (void)sendImpressionWithCode:(int)arg1 discussion:(id)arg2;
- (void)trackMentionIsInstantMention:(_Bool)arg1;
- (void)trackUnsuccessfulAutoCompleteIsInstantMention:(_Bool)arg1;
- (void)trackDismissAutoCompleteIsInstantMention:(_Bool)arg1;
- (void)trackShowAutoCompleteIsInstantMention:(_Bool)arg1;
- (void)trackReplyEdited:(id)arg1;
- (void)trackReplyDeleted:(id)arg1;
- (void)trackReplyCreated:(id)arg1;
- (void)trackDraftCancelled;
- (void)trackDraftCreated;
- (void)trackSuggestionRejected:(id)arg1;
- (void)trackSuggestionAccepted:(id)arg1;
- (void)trackDocoReassigned:(id)arg1;
- (void)trackDocoReopened:(id)arg1;
- (void)trackDocoResolved:(id)arg1;
- (void)trackDocoEdited:(id)arg1;
- (void)trackDocoDeleted:(id)arg1;
- (void)trackDocoCreated:(id)arg1;
- (void)trackDocoViewedWithLink:(_Bool)arg1;
- (void)trackDocosStreamOpened;
- (id)initWithImpressionsClient:(id)arg1;

@end

